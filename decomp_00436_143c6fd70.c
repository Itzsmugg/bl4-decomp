// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c6fd70 FUN_143c6fd70 body=117 status=ok
// SIG undefined FUN_143c6fd70(void)

undefined8 * FUN_143c6fd70(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 143c6fe14 FUN_143c6fe14 body=860 status=ok
// SIG undefined FUN_143c6fe14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c6fe14(void)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26c010);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26c0f0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26c1d0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26c300);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26c3a0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26c450);
  ppuStack_70 = &PTR_FUN_14b26dc70;
  local_78 = 9;
  uStack_68 = 0x12;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26deb0);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb66108 = (ulonglong)uVar1;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26e4b0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b26e840,1,0);
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b26ea00;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b26ea20);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b26f980;
  local_78 = 9;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b26fb10,1,&PTR_FUN_14b26f9a0);
  FUN_1446f470e(&DAT_14cb66298,L"GetSlotMachineDefOverride",1);
  FUN_1446f470e(&DAT_14cb662a8,L"OnSlotMachineResultRolledBP",1);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b270390,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b270af0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b271050,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2715e0,2,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b271fd0,1,&PTR_FUN_14b271f80);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b272080,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b272fa0,1,0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c70174 FUN_143c70174 body=55 status=ok
// SIG undefined FUN_143c70174(void)

void FUN_143c70174(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb667d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb667d8 = FUN_14171c317(FUN_14650fe60,uVar1,L"EGbxStatusEffectModifierFlag");
  }
  return;
}



// FUNCTION 143c701ab FUN_143c701ab body=55 status=ok
// SIG undefined FUN_143c701ab(void)

void FUN_143c701ab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66898 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66898 = FUN_14171c317(FUN_146510218,uVar1,L"EGbxStatusEffectDOTSelectionCriteria");
  }
  return;
}



// FUNCTION 143c701e2 FUN_143c701e2 body=55 status=ok
// SIG undefined FUN_143c701e2(void)

void FUN_143c701e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb668b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb668b0 = FUN_14171c317(FUN_146510247,uVar1,L"EGbxStatusEffectDOTReplaceCriteria");
  }
  return;
}



// FUNCTION 143c70298 FUN_143c70298 body=57 status=ok
// SIG undefined FUN_143c70298(void)

void FUN_143c70298(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66438 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66438 = FUN_140002ddd(FUN_14650ecdc,uVar1,L"GbxStandInBodyNode_Switch");
  }
  return;
}



// FUNCTION 143c702e0 FUN_143c702e0 body=97 status=ok
// SIG undefined FUN_143c702e0(void)

void FUN_143c702e0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  *(undefined1 *)(param_2 + 2) = 1;
  *param_2 = &PTR_FUN_14b27f810;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  return;
}



// FUNCTION 143c70368 FUN_143c70368 body=57 status=ok
// SIG undefined FUN_143c70368(void)

void FUN_143c70368(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66468 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66468 = FUN_140002ddd(FUN_14650ed9c,uVar1,L"GbxStandInDef");
  }
  return;
}



// FUNCTION 143c703cc FUN_143c703cc body=82 status=ok
// SIG undefined FUN_143c703cc(void)

void FUN_143c703cc(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b27ff60;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  return;
}



// FUNCTION 143c70438 FUN_143c70438 body=85 status=ok
// SIG undefined FUN_143c70438(void)

void FUN_143c70438(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b2800d0;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x42b40000;
  return;
}



// FUNCTION 143c704e2 FUN_143c704e2 body=126 status=ok
// SIG undefined FUN_143c704e2(void)

void FUN_143c704e2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0xc0);
  *param_2 = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = &PTR_FUN_14b280690;
  param_2[0xe] = DAT_14caa8578;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 1;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 143c705ca FUN_143c705ca body=85 status=ok
// SIG undefined FUN_143c705ca(void)

void FUN_143c705ca(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2,0,0xa0);
  *(undefined ***)((longlong)param_2 + 0x20) = &PTR_FUN_14b27fdf0;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)((longlong)param_2 + 0x30);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined ***)((longlong)param_2 + 0x20) = &PTR_FUN_14b2800d0;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0x42b40000;
  return;
}



// FUNCTION 143c70654 FUN_143c70654 body=57 status=ok
// SIG undefined FUN_143c70654(void)

void FUN_143c70654(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb665d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb665d0 = FUN_140002ddd(FUN_14650ee93,uVar1,L"GbxStandInSceneDef");
  }
  return;
}



// FUNCTION 143c70812 FUN_143c70812 body=57 status=ok
// SIG undefined FUN_143c70812(void)

void FUN_143c70812(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66850 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66850 =
         FUN_140002ddd(FUN_1465100c0,uVar1,L"GbxStatusEffectAspectData_AttributeEffectSet");
  }
  return;
}



// FUNCTION 143c7085a FUN_143c7085a body=57 status=ok
// SIG undefined FUN_143c7085a(void)

void FUN_143c7085a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66868 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66868 = FUN_140002ddd(FUN_146510122,uVar1,L"GbxStatusEffectAspectData_AttributeEffect");
  }
  return;
}



// FUNCTION 143c70894 FUN_143c70894 body=57 status=ok
// SIG undefined FUN_143c70894(void)

void FUN_143c70894(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66850 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66850 =
         FUN_140002ddd(FUN_1465100c0,uVar1,L"GbxStatusEffectAspectData_AttributeEffectSet");
  }
  return;
}



// FUNCTION 143c708ea FUN_143c708ea body=57 status=ok
// SIG undefined FUN_143c708ea(void)

void FUN_143c708ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb668c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb668c8 = FUN_140002ddd(FUN_1465102ad,uVar1,L"GbxStatusEffectDOTResourceStrategy_Capped");
  }
  return;
}



// FUNCTION 143c70932 FUN_143c70932 body=57 status=ok
// SIG undefined FUN_143c70932(void)

void FUN_143c70932(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb668e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb668e0 =
         FUN_140002ddd(FUN_14651030c,uVar1,L"GbxStatusEffectAspectData_DamageOverTimeItem");
  }
  return;
}



// FUNCTION 143c7097a FUN_143c7097a body=57 status=ok
// SIG undefined FUN_143c7097a(void)

void FUN_143c7097a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb668f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb668f8 = FUN_140002ddd(FUN_14651036e,uVar1,L"GbxStatusEffectAspectData_DamageOverTime");
  }
  return;
}



// FUNCTION 143c709b4 FUN_143c709b4 body=146 status=ok
// SIG undefined FUN_143c709b4(void)

void FUN_143c709b4(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x78);
    lVar5 = (longlong)*(int *)(param_1 + 0x80) * 0x40;
    do {
      lVar5 = lVar5 + -0x40;
      pcVar1 = (code *)*param_2;
      plVar4 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar4 = param_2 + 4;
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar6);
    } while ((cVar2 != '\0') && (lVar6 = lVar6 + 0x40, lVar5 != 0));
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000143c70a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 143c70a46 FUN_143c70a46 body=57 status=ok
// SIG undefined FUN_143c70a46(void)

void FUN_143c70a46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb668e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb668e0 =
         FUN_140002ddd(FUN_14651030c,uVar1,L"GbxStatusEffectAspectData_DamageOverTimeItem");
  }
  return;
}



// FUNCTION 143c70a7f FUN_143c70a7f body=784 status=ok
// SIG undefined FUN_143c70a7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c70a7f(void)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b278220);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb66410 = (ulonglong)uVar1;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b278fb0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b279190);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b279520,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 0xc;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b27b140,1,&PTR_FUN_14b27af60);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b27bb20,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b27c220,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27c400);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b27d0b0,1,&PTR_FUN_14b27d030);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27d160);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27d280);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27d3b0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27d630);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27d910);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b27dd60,6,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b27e000;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27e020);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27e380);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27e950);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b27f180;
  local_78 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b27f1c0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c70d90 FUN_143c70d90 body=55 status=ok
// SIG undefined FUN_143c70d90(void)

void FUN_143c70d90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb669b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb669b8 = FUN_14171c317(FUN_146510e7c,uVar1,L"EGbxStatusEffectChargePoolState");
  }
  return;
}



// FUNCTION 143c70dc7 FUN_143c70dc7 body=55 status=ok
// SIG undefined FUN_143c70dc7(void)

void FUN_143c70dc7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66c28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66c28 = FUN_14171c317(FUN_146511cb4,uVar1,L"EGbxStatusEffectModifierAppType");
  }
  return;
}



// FUNCTION 143c70dfe FUN_143c70dfe body=55 status=ok
// SIG undefined FUN_143c70dfe(void)

void FUN_143c70dfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66e28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66e28 =
         FUN_14171c317(FUN_14651274c,uVar1,L"EGbxStatusEffectPresentationChannelPrecision");
  }
  return;
}



// FUNCTION 143c70eb8 FUN_143c70eb8 body=79 status=ok
// SIG undefined FUN_143c70eb8(void)

undefined8 * FUN_143c70eb8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14872f13e(param_1,iVar1);
      FUN_14872f1a0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 143c70f08 FUN_143c70f08 body=378 status=ok
// SIG undefined FUN_143c70f08(void)

/* WARNING: Removing unreachable block (ram,0x000143c70fe5) */

void FUN_143c70f08(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c710a0 FUN_143c710a0 body=57 status=ok
// SIG undefined FUN_143c710a0(void)

void FUN_143c710a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb669d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb669d0 = FUN_140002ddd(FUN_146510ee3,uVar1,L"GbxStatusEffectDriver_ChargePool");
  }
  return;
}



// FUNCTION 143c7111e FUN_143c7111e body=57 status=ok
// SIG undefined FUN_143c7111e(void)

void FUN_143c7111e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66a18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66a18 = FUN_140002ddd(FUN_1465110a5,uVar1,L"GbxStatusEffectDriver_InstanceStack");
  }
  return;
}



// FUNCTION 143c71194 FUN_143c71194 body=57 status=ok
// SIG undefined FUN_143c71194(void)

void FUN_143c71194(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66a78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66a78 = FUN_140002ddd(FUN_1465112ff,uVar1,L"GbxStatusEffectGraphNodeSettings_Push");
  }
  return;
}



// FUNCTION 143c711dc FUN_143c711dc body=57 status=ok
// SIG undefined FUN_143c711dc(void)

void FUN_143c711dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66a90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66a90 = FUN_140002ddd(FUN_146511395,uVar1,L"GbxStatusEffectGraphNodeSettings_Resource");
  }
  return;
}



// FUNCTION 143c71252 FUN_143c71252 body=57 status=ok
// SIG undefined FUN_143c71252(void)

void FUN_143c71252(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66aa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66aa8 = FUN_140002ddd(FUN_1465113f4,uVar1,L"GbxStatusEffectGraphNodeSettings_Root");
  }
  return;
}



// FUNCTION 143c7129a FUN_143c7129a body=57 status=ok
// SIG undefined FUN_143c7129a(void)

void FUN_143c7129a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ac0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ac0 = FUN_140002ddd(FUN_146511454,uVar1,L"GbxStatusEffectGraphNodeSettings_Event");
  }
  return;
}



// FUNCTION 143c712e2 FUN_143c712e2 body=57 status=ok
// SIG undefined FUN_143c712e2(void)

void FUN_143c712e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ad8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ad8 = FUN_140002ddd(FUN_1465114b4,uVar1,L"GbxStatusEffectGraphNodeSettings_Notify");
  }
  return;
}



// FUNCTION 143c7132a FUN_143c7132a body=57 status=ok
// SIG undefined FUN_143c7132a(void)

void FUN_143c7132a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66af0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66af0 =
         FUN_140002ddd(FUN_14651154b,uVar1,L"GbxStatusEffectGraphNodeSettings_ScriptEvent");
  }
  return;
}



// FUNCTION 143c71372 FUN_143c71372 body=57 status=ok
// SIG undefined FUN_143c71372(void)

void FUN_143c71372(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66b08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66b08 =
         FUN_140002ddd(FUN_1465115e1,uVar1,L"GbxStatusEffectGraphNodeSettings_QueueNotifyEvent");
  }
  return;
}



// FUNCTION 143c713ba FUN_143c713ba body=57 status=ok
// SIG undefined FUN_143c713ba(void)

void FUN_143c713ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66b20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66b20 =
         FUN_140002ddd(FUN_146511677,uVar1,L"GbxStatusEffectGraphNodeSettings_NotifyEvent");
  }
  return;
}



// FUNCTION 143c71402 FUN_143c71402 body=57 status=ok
// SIG undefined FUN_143c71402(void)

void FUN_143c71402(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66b38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66b38 = FUN_140002ddd(FUN_14651170d,uVar1,L"GbxStatusEffectGraphNodeSettings_Branch");
  }
  return;
}



// FUNCTION 143c7144a FUN_143c7144a body=57 status=ok
// SIG undefined FUN_143c7144a(void)

void FUN_143c7144a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66b50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66b50 =
         FUN_140002ddd(FUN_1465117a3,uVar1,L"GbxStatusEffectGraphNodeSettings_BranchNotify");
  }
  return;
}



// FUNCTION 143c714ca FUN_143c714ca body=57 status=ok
// SIG undefined FUN_143c714ca(void)

void FUN_143c714ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66bc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66bc8 =
         FUN_140002ddd(FUN_146511a93,uVar1,
                       L"GbxStatusEffectGraphNodeSettings_Condition_ContributionCount");
  }
  return;
}



// FUNCTION 143c71520 FUN_143c71520 body=57 status=ok
// SIG undefined FUN_143c71520(void)

void FUN_143c71520(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66bf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66bf8 =
         FUN_140002ddd(FUN_146511bbf,uVar1,L"GbxStatusEffectGraphNodeSettings_Condition_IsPlayer");
  }
  return;
}



// FUNCTION 143c71678 FUN_143c71678 body=57 status=ok
// SIG undefined FUN_143c71678(void)

void FUN_143c71678(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66de0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66de0 = FUN_140002ddd(FUN_1465125ff,uVar1,L"GbxStatusEffectNotifyEventData_Core_Added");
  }
  return;
}



// FUNCTION 143c716c0 FUN_143c716c0 body=57 status=ok
// SIG undefined FUN_143c716c0(void)

void FUN_143c716c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66df8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66df8 =
         FUN_140002ddd(FUN_146512695,uVar1,L"GbxStatusEffectNotifyEventData_Core_Emptied");
  }
  return;
}



// FUNCTION 143c71716 FUN_143c71716 body=57 status=ok
// SIG undefined FUN_143c71716(void)

void FUN_143c71716(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66e58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66e58 = FUN_140002ddd(FUN_146512812,uVar1,L"GbxStatusEffectPresentationGraphSettings");
  }
  return;
}



// FUNCTION 143c717fc FUN_143c717fc body=57 status=ok
// SIG undefined FUN_143c717fc(void)

void FUN_143c717fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ec0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ec0 =
         FUN_140002ddd(FUN_146512a39,uVar1,L"GbxStatusEffectPresentationEffect_MaterialParam_Scalar"
                      );
  }
  return;
}



// FUNCTION 143c71844 FUN_143c71844 body=57 status=ok
// SIG undefined FUN_143c71844(void)

void FUN_143c71844(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ed8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ed8 =
         FUN_140002ddd(FUN_146512acf,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_DynamicMaterial");
  }
  return;
}



// FUNCTION 143c7189a FUN_143c7189a body=57 status=ok
// SIG undefined FUN_143c7189a(void)

void FUN_143c7189a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66f08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66f08 =
         FUN_140002ddd(FUN_146512bfd,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_GlowMaterial");
  }
  return;
}



// FUNCTION 143c718f0 FUN_143c718f0 body=57 status=ok
// SIG undefined FUN_143c718f0(void)

void FUN_143c718f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66f38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66f38 =
         FUN_140002ddd(FUN_146512d29,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_OverlayMaterial");
  }
  return;
}



// FUNCTION 143c71929 FUN_143c71929 body=1103 status=ok
// SIG undefined FUN_143c71929(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c71929(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2845c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2846f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b284ae0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b284c60);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b284ed0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b284ef0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b285010);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b285200);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b285370);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b285440);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 0xf;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b286200);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b286630);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2867a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2868a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b286950);
  FUN_14098d3d2(FUN_143c70dc7,L"/Script/GbxGame",L"EGbxStatusEffectModifierAppType",&DAT_14cb66c20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b286b20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b286e20);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2871c0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b287530,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b287760);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2879d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b287d10);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b288520,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b288a10,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b288bb0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b288e50);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b289200,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b289a90;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b289b00,1,&PTR_FUN_14b289ab0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0();
  _DAT_14cb66e80 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b289c50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 7;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b28a620);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c71d7c FUN_143c71d7c body=55 status=ok
// SIG undefined FUN_143c71d7c(void)

void FUN_143c71d7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb674d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb674d0 = FUN_14171c317(FUN_14651592b,uVar1,L"EGbxStatusEffectScriptType");
  }
  return;
}



// FUNCTION 143c71de0 FUN_143c71de0 body=57 status=ok
// SIG undefined FUN_143c71de0(void)

void FUN_143c71de0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66f80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66f80 =
         FUN_140002ddd(FUN_146513b9f,uVar1,L"GbxStatusEffectPresentationEffect_NiagaraParam_Float");
  }
  return;
}



// FUNCTION 143c71e28 FUN_143c71e28 body=57 status=ok
// SIG undefined FUN_143c71e28(void)

void FUN_143c71e28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66f98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66f98 =
         FUN_140002ddd(FUN_146513c35,uVar1,L"GbxStatusEffectPresentationEffect_NiagaraParam_Int");
  }
  return;
}



// FUNCTION 143c71e7e FUN_143c71e7e body=57 status=ok
// SIG undefined FUN_143c71e7e(void)

void FUN_143c71e7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66fc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66fc8 =
         FUN_140002ddd(FUN_146513d61,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_Niagara");
  }
  return;
}



// FUNCTION 143c71ec6 FUN_143c71ec6 body=57 status=ok
// SIG undefined FUN_143c71ec6(void)

void FUN_143c71ec6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66fe0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66fe0 =
         FUN_140002ddd(FUN_146513e29,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_NiagaraScreen");
  }
  return;
}



// FUNCTION 143c71f0e FUN_143c71f0e body=57 status=ok
// SIG undefined FUN_143c71f0e(void)

void FUN_143c71f0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ff8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ff8 = FUN_140002ddd(FUN_146513ebf,uVar1,L"SEPEventAction_Niagara");
  }
  return;
}



// FUNCTION 143c71f64 FUN_143c71f64 body=57 status=ok
// SIG undefined FUN_143c71f64(void)

void FUN_143c71f64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67030 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67030 =
         FUN_140002ddd(FUN_14651401b,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Effect_Wwise");
  }
  return;
}



// FUNCTION 143c71fe4 FUN_143c71fe4 body=57 status=ok
// SIG undefined FUN_143c71fe4(void)

void FUN_143c71fe4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb670a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb670a8 =
         FUN_140002ddd(FUN_146514363,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Driver_Basic");
  }
  return;
}



// FUNCTION 143c7202c FUN_143c7202c body=57 status=ok
// SIG undefined FUN_143c7202c(void)

void FUN_143c7202c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb670c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb670c0 =
         FUN_140002ddd(FUN_1465143f9,uVar1,
                       L"GbxStatusEffectPresentationGraphNodeSettings_Driver_Severity");
  }
  return;
}



// FUNCTION 143c72090 FUN_143c72090 body=57 status=ok
// SIG undefined FUN_143c72090(void)

void FUN_143c72090(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67108 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67108 =
         FUN_140002ddd(FUN_14651451e,uVar1,L"GbxStatusEffectPresentationGraphNodeSettings_Entry");
  }
  return;
}



// FUNCTION 143c720e6 FUN_143c720e6 body=57 status=ok
// SIG undefined FUN_143c720e6(void)

void FUN_143c720e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67138 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67138 =
         FUN_140002ddd(FUN_14651461d,uVar1,L"GbxStatusEffectPresentationSeverityRate_Constant");
  }
  return;
}



// FUNCTION 143c7216c FUN_143c7216c body=57 status=ok
// SIG undefined FUN_143c7216c(void)

void FUN_143c7216c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb671b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb671b0 = FUN_140002ddd(FUN_146514881,uVar1,L"SEPEventPolicy_TrigerCount");
  }
  return;
}



// FUNCTION 143c721b4 FUN_143c721b4 body=57 status=ok
// SIG undefined FUN_143c721b4(void)

void FUN_143c721b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb671c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb671c8 = FUN_140002ddd(FUN_146514917,uVar1,L"SEPEventTrigger_SeverityHit");
  }
  return;
}



// FUNCTION 143c72208 FUN_143c72208 body=57 status=ok
// SIG undefined FUN_143c72208(void)

void FUN_143c72208(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb671e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb671e0 = FUN_140002ddd(FUN_146514976,uVar1,L"GbxStatusEffectPushEventDef");
  }
  return;
}



// FUNCTION 143c72288 FUN_143c72288 body=57 status=ok
// SIG undefined FUN_143c72288(void)

void FUN_143c72288(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67258 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67258 = FUN_140002ddd(FUN_146514c33,uVar1,L"GbxStatusEffectQuery_ContributionCount");
  }
  return;
}



// FUNCTION 143c722d0 FUN_143c722d0 body=57 status=ok
// SIG undefined FUN_143c722d0(void)

void FUN_143c722d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67270 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67270 = FUN_140002ddd(FUN_146514cc9,uVar1,L"GbxStatusEffectQuery_DPS");
  }
  return;
}



// FUNCTION 143c72482 FUN_143c72482 body=57 status=ok
// SIG undefined FUN_143c72482(void)

void FUN_143c72482(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67530 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67530 = FUN_140002ddd(FUN_146515ae3,uVar1,L"GbxStatusEffectSeverityChannelDef");
  }
  return;
}



// FUNCTION 143c724bb FUN_143c724bb body=1064 status=ok
// SIG undefined FUN_143c724bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c724bb(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2922e0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b292560);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb67020 = (ulonglong)uVar1;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b292730);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b292950);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b292f50);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2930d0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2932a0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b293960);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b293b30);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b293da0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2942b0,1,&PTR_FUN_14b294280);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b294390);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b294440);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b294510);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b294660);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2947a0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2948c0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2949d0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b294d60);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b295190);
  FUN_1446f470e(&DAT_14cb67408,L"OnBegin",1);
  FUN_1446f470e(&DAT_14cb67418,L"OnEnd",1);
  FUN_1446f470e(&DAT_14cb67428,L"OnPushEvent",1);
  FUN_1446f470e(&DAT_14cb67458,L"OnBegin",1);
  FUN_1446f470e(&DAT_14cb67468,L"OnEnd",1);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b296440,3,&PTR_FUN_14b296410);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b296bb0,1,&PTR_FUN_14b296b80);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b296e50;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b296e70);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b297480,1,&PTR_FUN_14b297450);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b297550);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c728e4 FUN_143c728e4 body=55 status=ok
// SIG undefined FUN_143c728e4(void)

void FUN_143c728e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67638 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67638 = FUN_14171c317(FUN_146516949,uVar1,L"EGetStatusEffectParamResultPins");
  }
  return;
}



// FUNCTION 143c7291b FUN_143c7291b body=47 status=ok
// SIG undefined FUN_143c7291b(void)

longlong FUN_143c7291b(void)

{
  if (DAT_14cb67720 == 0) {
    FUN_14073dd9a(&DAT_14cb67720,&PTR_LAB_14b29f7e0);
  }
  return DAT_14cb67720;
}



// FUNCTION 143c7294a FUN_143c7294a body=47 status=ok
// SIG undefined FUN_143c7294a(void)

longlong FUN_143c7294a(void)

{
  if (DAT_14cb67708 == 0) {
    FUN_14000fc22(&DAT_14cb67708,&PTR_FUN_14b29f5b8);
  }
  return DAT_14cb67708;
}



// FUNCTION 143c7297a FUN_143c7297a body=2043 status=ok
// SIG undefined FUN_143c7297a(void)

void FUN_143c7297a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *_Src;
  undefined ***pppuVar11;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  code *local_c0;
  longlong local_b8;
  undefined **local_b0;
  undefined *local_a8;
  longlong local_a0;
  ulonglong uStack_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_88);
            goto LAB_143c72b5c;
          }
        }
        puVar10 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_88) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_88,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_88,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar4[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_88,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_88,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar9 = (undefined8 *)*puVar10;
        puVar10 = puVar9 + 2;
      } while ((longlong *)*puVar9 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar9[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_88 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_88);
    }
  }
LAB_143c72b5c:
  puVar10 = *(undefined8 **)(param_2 + 0x38);
  puVar9 = &local_88;
  if (puVar10 != (undefined8 *)0x0) {
    puVar9 = puVar10;
  }
  local_90 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_c8 = FUN_1446ddbd2();
      local_c0 = FUN_1468d96f0;
      local_d0 = 0;
      local_d8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_90);
            goto LAB_143c72d23;
          }
        }
        _Src = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_90) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_90,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_90,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar4[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_90,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_90,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_90);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_90);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_90 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_90);
    }
  }
LAB_143c72d23:
  FUN_1405c5fa2();
  local_a8 = &DAT_14cb769e8;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = &PTR_FUN_14b0394b0;
  *(longlong *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_b0);
            goto LAB_143c72ed6;
          }
        }
        pppuVar11 = (undefined ***)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (pppuVar11 != &local_b0) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_b0,pppuVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&local_b0,pppuVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar4[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_b0,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_b0,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_b0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_b0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_b0 = *(undefined ***)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_b0);
    }
  }
LAB_143c72ed6:
  pppuVar11 = &local_b0;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar11 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_90;
  if ((local_90 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_143e47b2a(puVar9,&local_b8,pppuVar11);
  FUN_1459ce7ee(param_3,puVar9);
  local_b0 = (undefined **)&DAT_14a171d50;
  uVar7 = uStack_98 >> 0x20;
  uStack_98 = uStack_98 & 0xffffffff00000000;
  if ((int)uVar7 != 0) {
    FUN_140115c12(&local_a0,0);
  }
  local_a8 = (undefined *)0x0;
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  FUN_1409ed859(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c73176 FUN_143c73176 body=47 status=ok
// SIG undefined FUN_143c73176(void)

longlong FUN_143c73176(void)

{
  if (DAT_14cb67710 == 0) {
    FUN_14000fc22(&DAT_14cb67710,&PTR_FUN_14b29f6e8);
  }
  return DAT_14cb67710;
}



// FUNCTION 143c731a6 FUN_143c731a6 body=1251 status=ok
// SIG undefined FUN_143c731a6(void)

void FUN_143c731a6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined7 *puVar9;
  undefined7 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined2 *local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_48 = 0;
  uStack_41 = 0;
  uStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&uStack_48);
            goto LAB_143c73347;
          }
        }
        puVar10 = (undefined7 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar10 != &uStack_48) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&uStack_48,puVar10,(int)plVar3[6]);
          }
          else {
            memcpy(&uStack_48,puVar10,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined4)plVar3[6];
        local_88 = 0;
        FUN_1400746b0(plVar3,&uStack_48,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&uStack_48,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_143c73347:
    pbVar8 = *(byte **)(param_2 + 0x20);
    puVar10 = *(undefined7 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_48);
      goto LAB_143c73347;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_48);
      goto LAB_143c73347;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&uStack_48);
      goto LAB_143c73347;
    }
    uVar1 = *(undefined8 *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    uStack_48 = (undefined7)uVar1;
    uStack_41 = (undefined1)((ulonglong)uVar1 >> 0x38);
    puVar10 = (undefined7 *)0x0;
  }
  puVar9 = &uStack_48;
  if (puVar10 != (undefined7 *)0x0) {
    puVar9 = puVar10;
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_49);
            goto LAB_143c7350c;
          }
        }
        puVar11 = (undefined1 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar11 != &local_49) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_49,puVar11,(int)plVar3[6]);
          }
          else {
            memcpy(&local_49,puVar11,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_80 = (undefined4)plVar3[6];
        local_88 = 0;
        FUN_1400746b0(plVar3,&local_49,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_49,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_49);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_49);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
      local_49 = (undefined1)uVar1;
      uStack_48 = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_49);
    }
  }
LAB_143c7350c:
  puVar11 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar11 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143e47a7e(&local_70,puVar9,puVar11);
  (**(code **)(*param_3 + 0x20))(param_3,0);
  param_3[1] = local_68;
  FUN_1406022fe(param_3 + 2,&local_60);
  local_70 = &DAT_14a171d50;
  local_58 = 0;
  if (local_54 != 0) {
    FUN_140115c12(&local_60,0);
  }
  local_68 = 0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1409ed859(CONCAT17(uStack_41,uStack_48),uStack_40 & 0xffffffff);
  if (CONCAT17(uStack_41,uStack_48) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7368a FUN_143c7368a body=34 status=ok
// SIG undefined FUN_143c7368a(void)

void FUN_143c7368a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140941f82();
  FUN_14069c8d6(uVar1,&PTR_s_AddParam_DmgTags_14b29f730,2);
  return;
}



// FUNCTION 143c736b4 FUN_143c736b4 body=63 status=ok
// SIG undefined FUN_143c736b4(void)

void FUN_143c736b4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144a0768c(puVar1,uVar2);
  *(undefined1 *)(puVar1 + 8) = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14b2a8580;
  puVar1[5] = DAT_14cb8c700;
  return;
}



// FUNCTION 143c736f3 FUN_143c736f3 body=55 status=ok
// SIG undefined FUN_143c736f3(void)

void FUN_143c736f3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67828 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67828 = FUN_14171c317(FUN_1465170e4,uVar1,L"EGbxStatusEffectPopAllFlags");
  }
  return;
}



// FUNCTION 143c7372a FUN_143c7372a body=55 status=ok
// SIG undefined FUN_143c7372a(void)

void FUN_143c7372a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67888 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67888 = FUN_14171c317(FUN_1465172d8,uVar1,L"EStatusEffectRuleLifetimeRule");
  }
  return;
}



// FUNCTION 143c73761 FUN_143c73761 body=55 status=ok
// SIG undefined FUN_143c73761(void)

void FUN_143c73761(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67978 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67978 = FUN_14171c317(FUN_146517709,uVar1,L"EGbxStatusEffectNotifyEventType");
  }
  return;
}



// FUNCTION 143c73798 FUN_143c73798 body=55 status=ok
// SIG undefined FUN_143c73798(void)

void FUN_143c73798(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb679a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb679a8 = FUN_14171c317(FUN_14651799a,uVar1,L"EGbxStatusEffectValComparisonType");
  }
  return;
}



// FUNCTION 143c737d4 FUN_143c737d4 body=61 status=ok
// SIG undefined FUN_143c737d4(void)

undefined8 * FUN_143c737d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b29e270;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7386e FUN_143c7386e body=57 status=ok
// SIG undefined FUN_143c7386e(void)

void FUN_143c7386e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67560 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67560 = FUN_140002ddd(FUN_146516585,uVar1,L"GbxStatusEffectSeverityGenerator_Curve");
  }
  return;
}



// FUNCTION 143c738c4 FUN_143c738c4 body=91 status=ok
// SIG undefined FUN_143c738c4(void)

void FUN_143c738c4(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_1 + 8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x20) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 143c7392e FUN_143c7392e body=91 status=ok
// SIG undefined FUN_143c7392e(void)

void FUN_143c7392e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x28) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x20)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x20) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 143c73a5e FUN_143c73a5e body=55 status=ok
// SIG undefined FUN_143c73a5e(void)

void FUN_143c73a5e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000143c73a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c73aa6 FUN_143c73aa6 body=57 status=ok
// SIG undefined FUN_143c73aa6(void)

void FUN_143c73aa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67a28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67a28 =
         FUN_140002ddd(FUN_146517b9f,uVar1,L"GbxSymphonicAmbientAudioAction_PlayAudioGraph");
  }
  return;
}



// FUNCTION 143c73b32 FUN_143c73b32 body=57 status=ok
// SIG undefined FUN_143c73b32(void)

void FUN_143c73b32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67a40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67a40 = FUN_140002ddd(FUN_146517c35,uVar1,L"GbxSymphonicAmbientAudioAction_PostEvent");
  }
  return;
}



// FUNCTION 143c73b96 FUN_143c73b96 body=630 status=ok
// SIG undefined FUN_143c73b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c73b96(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b29d640);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b29d7e0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b29dce0,1,&PTR_FUN_14b29dcb0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b29e740,4,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b29fee0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b29ff00,0xb,0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b2a0b40;
  local_68 = 9;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2a0b80);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2a25a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2a26c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2a2810);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b2a2c30;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2a2c70);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2a2d30,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2a30a0,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb679e8 = (ulonglong)uVar1;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2a34a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2a3b50);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c73e10 FUN_143c73e10 body=55 status=ok
// SIG undefined FUN_143c73e10(void)

void FUN_143c73e10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67b98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67b98 = FUN_14171c317(FUN_146518aca,uVar1,L"EGbxTraceTrajectoryShape");
  }
  return;
}



// FUNCTION 143c73e50 FUN_143c73e50 body=108 status=ok
// SIG undefined FUN_143c73e50(void)

void FUN_143c73e50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14b2ae130;
  *(undefined2 *)(puVar1 + 7) = 0x101;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 143c73ebc FUN_143c73ebc body=55 status=ok
// SIG undefined FUN_143c73ebc(void)

void FUN_143c73ebc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67cf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67cf8 = FUN_14171c317(FUN_146519096,uVar1,L"EGbxTrickAnimNotifyType");
  }
  return;
}



// FUNCTION 143c73ef3 FUN_143c73ef3 body=106 status=ok
// SIG undefined FUN_143c73ef3(void)

void FUN_143c73ef3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14b2aea50;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 143c73f5d FUN_143c73f5d body=55 status=ok
// SIG undefined FUN_143c73f5d(void)

void FUN_143c73f5d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67ee8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67ee8 = FUN_14171c317(FUN_1465197d3,uVar1,L"EGbxTrickNetMode");
  }
  return;
}



// FUNCTION 143c73f94 FUN_143c73f94 body=55 status=ok
// SIG undefined FUN_143c73f94(void)

void FUN_143c73f94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67f38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67f38 = FUN_14171c317(FUN_1465198fc,uVar1,L"EGbxTrickRootMotion");
  }
  return;
}



// FUNCTION 143c73fcb FUN_143c73fcb body=55 status=ok
// SIG undefined FUN_143c73fcb(void)

void FUN_143c73fcb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67f50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67f50 = FUN_14171c317(FUN_14651992b,uVar1,L"EGbxTrickRootRotation");
  }
  return;
}



// FUNCTION 143c74002 FUN_143c74002 body=55 status=ok
// SIG undefined FUN_143c74002(void)

void FUN_143c74002(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67f68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67f68 = FUN_14171c317(FUN_14651995a,uVar1,L"EGbxTrickNavType");
  }
  return;
}



// FUNCTION 143c74039 FUN_143c74039 body=55 status=ok
// SIG undefined FUN_143c74039(void)

void FUN_143c74039(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67f80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67f80 = FUN_14171c317(FUN_146519989,uVar1,L"EGbxTrickAudioType");
  }
  return;
}



// FUNCTION 143c74070 FUN_143c74070 body=55 status=ok
// SIG undefined FUN_143c74070(void)

void FUN_143c74070(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67f98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67f98 = FUN_14171c317(FUN_1465199b8,uVar1,L"EGbxTrickAudioBehavior");
  }
  return;
}



// FUNCTION 143c740a8 FUN_143c740a8 body=48 status=ok
// SIG undefined FUN_143c740a8(void)

longlong FUN_143c740a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14584aa36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c740d8 FUN_143c740d8 body=48 status=ok
// SIG undefined FUN_143c740d8(void)

longlong FUN_143c740d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14584aa36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c741c4 FUN_143c741c4 body=62 status=ok
// SIG undefined FUN_143c741c4(void)

void FUN_143c741c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(param_2 + 0x18);
  return;
}



// FUNCTION 143c74202 FUN_143c74202 body=76 status=ok
// SIG undefined FUN_143c74202(void)

void FUN_143c74202(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    if (*(char *)(param_2 + 0x90) == '\x01') {
      *(undefined1 *)(param_2 + 0x90) = 0;
    }
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 143c7424e FUN_143c7424e body=189 status=ok
// SIG undefined FUN_143c7424e(void)

longlong * FUN_143c7424e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  lVar5 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *param_2;
    }
  }
  bVar3 = DAT_14c950c29;
  *param_1 = lVar5;
  lVar5 = param_2[1];
  if ((bVar3 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[1];
    }
  }
  param_1[1] = lVar5;
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined2 *)((longlong)param_1 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
  FUN_140725242(param_1 + 3,param_2 + 3);
  param_1[0xd] = param_2[0xd];
  if (param_2 != param_1) {
    if ((char)param_2[0x12] == '\x01') {
      lVar5 = param_2[0xe];
      lVar1 = param_2[0xf];
      lVar2 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = lVar2;
      param_1[0xe] = lVar5;
      param_1[0xf] = lVar1;
      uVar4 = 1;
    }
    else {
      if ((char)param_1[0x12] != '\x01') {
        return param_1;
      }
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar4;
  }
  return param_1;
}



// FUNCTION 143c74328 FUN_143c74328 body=980 status=ok
// SIG undefined FUN_143c74328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c74328(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2a8ea0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb67ae0 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2a9810,1,&PTR_FUN_14b2a97c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2a99e0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2aa320,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2aa680,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2abbc0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2abc60,1,&PTR_FUN_14b2abbe0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2abf90,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2acf30);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2ae3f0,5,0);
  FUN_14098d3d2(FUN_143c73ebc,L"/Script/GbxGame",L"EGbxTrickAnimNotifyType",&DAT_14cb67cf0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2ae8f0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2aed10,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2af090,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2af430,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2afc70,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2b00b0,1,0);
  _DAT_14cb67db0 = 0x47efffffe0000000;
  _DAT_14cb67db8 = 0x47efffffe0000000;
  _DAT_14cb67dc0 = 0x47efffffe0000000;
  _DAT_14cb67dc8 = 0x47efffffe0000000;
  _DAT_14cb67dd0 = 0x47efffffe0000000;
  _DAT_14cb67dd8 = 0x47efffffe0000000;
  _DAT_14cb67de0 = 0x47efffffe0000000;
  _DAT_14cb67de8 = 0x47efffffe0000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2b03c0,1,&PTR_FUN_14b2b0390);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2b0c00,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2b1e70,5,0);
  FUN_14098d3d2(FUN_143c73f5d,L"/Script/GbxGame",L"EGbxTrickNetMode",&DAT_14cb67ee0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2b2640,1,&PTR_FUN_14b2b2610);
  ppuStack_60 = &PTR_FUN_14b2b39d0;
  local_68 = 0;
  uStack_58 = 5;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2b3a70,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c74700 FUN_143c74700 body=55 status=ok
// SIG undefined FUN_143c74700(void)

void FUN_143c74700(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67fc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67fc8 = FUN_14171c317(FUN_146519f37,uVar1,L"EGbxTrickRefType");
  }
  return;
}



// FUNCTION 143c74737 FUN_143c74737 body=55 status=ok
// SIG undefined FUN_143c74737(void)

void FUN_143c74737(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb67ff8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb67ff8 = FUN_14171c317(FUN_146519fce,uVar1,L"EGbxTrickScriptType");
  }
  return;
}



// FUNCTION 143c7476e FUN_143c7476e body=55 status=ok
// SIG undefined FUN_143c7476e(void)

void FUN_143c7476e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68010 = FUN_14171c317(FUN_146519ffd,uVar1,L"EGbxTrickAnimNotifyState");
  }
  return;
}



// FUNCTION 143c747be FUN_143c747be body=55 status=ok
// SIG undefined FUN_143c747be(void)

void FUN_143c747be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb681b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb681b8 = FUN_14171c317(FUN_14651a7c2,uVar1,L"EGbxTrickLatentState");
  }
  return;
}



// FUNCTION 143c747f5 FUN_143c747f5 body=55 status=ok
// SIG undefined FUN_143c747f5(void)

void FUN_143c747f5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68268 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68268 = FUN_14171c317(FUN_14651a0f7,uVar1,L"EGbxTrickEnd");
  }
  return;
}



// FUNCTION 143c7482c FUN_143c7482c body=55 status=ok
// SIG undefined FUN_143c7482c(void)

void FUN_143c7482c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb682a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb682a0 = FUN_14171c317(FUN_14651ab89,uVar1,L"EGbxTrickBlendSpaceSource");
  }
  return;
}



// FUNCTION 143c74863 FUN_143c74863 body=55 status=ok
// SIG undefined FUN_143c74863(void)

void FUN_143c74863(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb682b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb682b8 = FUN_14171c317(FUN_14651abb8,uVar1,L"EGbxTrickBlendSpaceType");
  }
  return;
}



// FUNCTION 143c7489a FUN_143c7489a body=55 status=ok
// SIG undefined FUN_143c7489a(void)

void FUN_143c7489a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb682e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb682e8 = FUN_14171c317(FUN_14651abef,uVar1,L"EGbxTrickAnimDirection");
  }
  return;
}



// FUNCTION 143c748d1 FUN_143c748d1 body=55 status=ok
// SIG undefined FUN_143c748d1(void)

void FUN_143c748d1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68398 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68398 = FUN_14171c317(FUN_14651ade0,uVar1,L"EGbxTrickDodgeDirection");
  }
  return;
}



// FUNCTION 143c749b7 FUN_143c749b7 body=915 status=ok
// SIG undefined FUN_143c749b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c749b7(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2b6070;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2b6090);
  FUN_1446f470e(&DAT_14cb680a8,L"OnAnimNotify",1);
  FUN_1446f470e(&DAT_14cb680b8,L"OnAnimNotifyState",1);
  FUN_1446f470e(&DAT_14cb680c8,L"OnBegin_Const",1);
  FUN_1446f470e(&DAT_14cb680d8,L"OnBegin_Mut",1);
  FUN_1446f470e(&DAT_14cb680e8,L"OnEnd_Const",1);
  FUN_1446f470e(&DAT_14cb680f8,L"OnEnd_Mut",1);
  FUN_1446f470e(&DAT_14cb68108,L"OnIrrelevant_Const",1);
  FUN_1446f470e(&DAT_14cb68118,L"OnIrrelevant_Mut",1);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b2b89f0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2b8a60,1,&PTR_FUN_14b2b8a30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2b8c10);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2ba3f0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2ba410,1,0);
  FUN_14098d3d2(FUN_143c747f5,L"/Script/GbxGame",L"EGbxTrickEnd",&DAT_14cb68260);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb68278 = (ulonglong)uVar1;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2ba8c0,1,0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b2bae10;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bae50,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2bb030;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bb050,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bb6a0,1,&PTR_FUN_14b2bb670);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bbca0,1,&PTR_FUN_14b2bbc70);
  _DAT_14cb68370 = 0xffffffff;
  _DAT_14cb68374 = 0;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bbd60,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2bbfc0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bbfe0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bc6a0,1,&PTR_FUN_14b2bc670);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c74d4c FUN_143c74d4c body=55 status=ok
// SIG undefined FUN_143c74d4c(void)

void FUN_143c74d4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68448 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68448 = FUN_14171c317(FUN_14651b15c,uVar1,L"ETrickLoopType");
  }
  return;
}



// FUNCTION 143c74d83 FUN_143c74d83 body=55 status=ok
// SIG undefined FUN_143c74d83(void)

void FUN_143c74d83(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68460 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68460 = FUN_14171c317(FUN_14651b18b,uVar1,L"ETrickLoopCondition");
  }
  return;
}



// FUNCTION 143c74dba FUN_143c74dba body=55 status=ok
// SIG undefined FUN_143c74dba(void)

void FUN_143c74dba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68528 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68528 = FUN_14171c317(FUN_14651b3bc,uVar1,L"EPerchVerticalInterp");
  }
  return;
}



// FUNCTION 143c74df1 FUN_143c74df1 body=55 status=ok
// SIG undefined FUN_143c74df1(void)

void FUN_143c74df1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68598 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68598 = FUN_14171c317(FUN_14651b43d,uVar1,L"ERagdollBehaviorCategoryType");
  }
  return;
}



// FUNCTION 143c74e28 FUN_143c74e28 body=55 status=ok
// SIG undefined FUN_143c74e28(void)

void FUN_143c74e28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68800 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68800 = FUN_14171c317(FUN_14651bd6a,uVar1,L"EItemComparisonResult");
  }
  return;
}



// FUNCTION 143c74e5f FUN_143c74e5f body=55 status=ok
// SIG undefined FUN_143c74e5f(void)

void FUN_143c74e5f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68818 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68818 = FUN_14171c317(FUN_14651bd99,uVar1,L"EUIStatGroupOrder");
  }
  return;
}



// FUNCTION 143c74e96 FUN_143c74e96 body=55 status=ok
// SIG undefined FUN_143c74e96(void)

void FUN_143c74e96(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68830 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68830 = FUN_14171c317(FUN_14651bdc8,uVar1,L"EUILongDescriptionBehavior");
  }
  return;
}



// FUNCTION 143c74ed2 FUN_143c74ed2 body=48 status=ok
// SIG undefined FUN_143c74ed2(void)

longlong FUN_143c74ed2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c74f02 FUN_143c74f02 body=48 status=ok
// SIG undefined FUN_143c74f02(void)

longlong FUN_143c74f02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c74f52 FUN_143c74f52 body=48 status=ok
// SIG undefined FUN_143c74f52(void)

longlong FUN_143c74f52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c74f82 FUN_143c74f82 body=48 status=ok
// SIG undefined FUN_143c74f82(void)

longlong FUN_143c74f82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c74fb2 FUN_143c74fb2 body=48 status=ok
// SIG undefined FUN_143c74fb2(void)

longlong FUN_143c74fb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c74fe2 FUN_143c74fe2 body=48 status=ok
// SIG undefined FUN_143c74fe2(void)

longlong FUN_143c74fe2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c75012 FUN_143c75012 body=48 status=ok
// SIG undefined FUN_143c75012(void)

longlong FUN_143c75012(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c75042 FUN_143c75042 body=48 status=ok
// SIG undefined FUN_143c75042(void)

longlong FUN_143c75042(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef12ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c75072 FUN_143c75072 body=48 status=ok
// SIG undefined FUN_143c75072(void)

longlong FUN_143c75072(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c750a2 FUN_143c750a2 body=48 status=ok
// SIG undefined FUN_143c750a2(void)

longlong FUN_143c750a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_140ce0512(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7516e FUN_143c7516e body=156 status=ok
// SIG undefined FUN_143c7516e(void)

void FUN_143c7516e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x130);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b2cc480;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  param_2[0xe] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  param_2[0x12] = 0;
  param_2[0x18] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0xffffffff00000080;
  param_2[0x1c] = 0;
  param_2[0x22] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x11c) = 0xffffffff00000080;
  param_2[0x26] = 0;
  return;
}



// FUNCTION 143c75222 FUN_143c75222 body=57 status=ok
// SIG undefined FUN_143c75222(void)

void FUN_143c75222(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68788 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68788 = FUN_140002ddd(FUN_14651bbea,uVar1,L"GbxUIMaterialAnimationDataDef");
  }
  return;
}



// FUNCTION 143c75276 FUN_143c75276 body=57 status=ok
// SIG undefined FUN_143c75276(void)

void FUN_143c75276(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb687b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb687b8 = FUN_140002ddd(FUN_14651bc7b,uVar1,L"UIDisplayDataDef_RewardTier");
  }
  return;
}



// FUNCTION 143c752be FUN_143c752be body=275 status=ok
// SIG undefined FUN_143c752be(void)

void FUN_143c752be(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b2c7340;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_2[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 5) = DAT_14c844848;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 143c753ea FUN_143c753ea body=57 status=ok
// SIG undefined FUN_143c753ea(void)

void FUN_143c753ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb687e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb687e8 = FUN_140002ddd(FUN_14651bd0b,uVar1,L"UIDisplayDataDef_RewardType");
  }
  return;
}



// FUNCTION 143c75458 FUN_143c75458 body=57 status=ok
// SIG undefined FUN_143c75458(void)

void FUN_143c75458(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68848 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68848 = FUN_140002ddd(FUN_14651bdf7,uVar1,L"UIStatDisplayGroupDef");
  }
  return;
}



// FUNCTION 143c754a0 FUN_143c754a0 body=162 status=ok
// SIG undefined FUN_143c754a0(void)

void FUN_143c754a0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xf8);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b2c7960;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = &PTR_FUN_14b00be70;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined1 *)((longlong)param_2 + 0x5c) = 1;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0xf00000d0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined1 *)(param_2 + 0x11) = 1;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}



// FUNCTION 143c7555a FUN_143c7555a body=57 status=ok
// SIG undefined FUN_143c7555a(void)

void FUN_143c7555a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68860 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68860 = FUN_140002ddd(FUN_14651be56,uVar1,L"UIStatDisplayDef");
  }
  return;
}



// FUNCTION 143c755a6 FUN_143c755a6 body=82 status=ok
// SIG undefined FUN_143c755a6(void)

void FUN_143c755a6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined4 *)((longlong)param_2 + 0x10) = 2;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x71) = 0;
  *(undefined8 *)((longlong)param_2 + 0x79) = 0;
  return;
}



// FUNCTION 143c75606 FUN_143c75606 body=114 status=ok
// SIG undefined FUN_143c75606(void)

void FUN_143c75606(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  *(undefined4 *)((longlong)param_2 + 0x68) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc0) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x108) = 0;
  return;
}



// FUNCTION 143c756d0 FUN_143c756d0 body=1305 status=ok
// SIG undefined FUN_143c756d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c756d0(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2be500,1,0);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb68408 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2be750,1,0);
  FUN_1446f470e(&DAT_14cb68470,L"OnLoop_Mut",1);
  FUN_1446f470e(&DAT_14cb68480,L"OnLoopEnd_Mut",1);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b2bf660;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bf6d0,2,&PTR_FUN_14b2bf6a0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bf7b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2bfb70,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2c03f0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c0440,2,&PTR_FUN_14b2c0410);
  _DAT_14cb68550 = 0x47efffffe0000000;
  _DAT_14cb68558 = 0x47efffffe0000000;
  _DAT_14cb68560 = 0x47efffffe0000000;
  _DAT_14cb68568 = 0x47efffffe0000000;
  _DAT_14cb68570 = 0x47efffffe0000000;
  _DAT_14cb68578 = 0x47efffffe0000000;
  _DAT_14cb68580 = 0x47efffffe0000000;
  _DAT_14cb68588 = 0x47efffffe0000000;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2c0ce0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c0d00,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c0f70,1,&PTR_FUN_14b2c0f40);
  _DAT_14cb685f8 = 0xffffffff;
  _DAT_14cb685fc = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c10b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c1160,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c12a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c1cf0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2c1da0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c1e50,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c1f00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c3390,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c3b70,1,&PTR_FUN_14b2c3b40);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c3c20,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c48a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2c4950);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2c4d30);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c51b0,2,&PTR_FUN_14b2c5160);
  ppuStack_60 = &PTR_FUN_14b2c5b10;
  local_68 = 2;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2c5bc0,2,&PTR_FUN_14b2c5b70);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2c5cd0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2c6040);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2c61d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2c6300);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2c63b0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c75bf2 FUN_143c75bf2 body=48 status=ok
// SIG undefined FUN_143c75bf2(void)

longlong FUN_143c75bf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145eff918(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c75c22 FUN_143c75c22 body=48 status=ok
// SIG undefined FUN_143c75c22(void)

longlong FUN_143c75c22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_145eff918(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c75d86 FUN_143c75d86 body=96 status=ok
// SIG undefined FUN_143c75d86(void)

void FUN_143c75d86(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa8);
  *(undefined4 *)((longlong)param_2 + 0x10) = 2;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x82) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0;
  return;
}



// FUNCTION 143c75e22 FUN_143c75e22 body=133 status=ok
// SIG undefined FUN_143c75e22(void)

void FUN_143c75e22(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
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
  plVar3 = *(longlong **)(param_2 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000143c75e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c75eb4 FUN_143c75eb4 body=133 status=ok
// SIG undefined FUN_143c75eb4(void)

void FUN_143c75eb4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000143c75f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c75ff2 FUN_143c75ff2 body=57 status=ok
// SIG undefined FUN_143c75ff2(void)

void FUN_143c75ff2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68a60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68a60 = FUN_140002ddd(FUN_14651ce2d,uVar1,L"GbxUnlockConditionData_ExternalCondition");
  }
  return;
}



// FUNCTION 143c760aa FUN_143c760aa body=57 status=ok
// SIG undefined FUN_143c760aa(void)

void FUN_143c760aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68aa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68aa8 =
         FUN_140002ddd(FUN_14651cfb8,uVar1,L"GbxUnlockConditionData_GroupProgressPointsSpent");
  }
  return;
}



// FUNCTION 143c762e2 FUN_143c762e2 body=1270 status=ok
// SIG undefined FUN_143c762e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c762e2(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cc7d0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb68948 = (ulonglong)uVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cc900);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cca70);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ccc80);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ccea0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cd1e0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cd310);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cd500);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cd6b0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cd810);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cd990);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cda90);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cdc20);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cddf0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cdf50);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ce0c0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ce2e0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ce440);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ce550);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ce6a0);
  FUN_1446f470e(&DAT_14cb68b68,L"K2_OnHoldUsedTrigger",1);
  FUN_1446f470e(&DAT_14cb68b78,L"K2_OnSecondaryHoldUsedTrigger",1);
  FUN_1446f470e(&DAT_14cb68b88,L"K2_OnSecondaryUsedTrigger",1);
  FUN_1446f470e(&DAT_14cb68b98,L"K2_OnUsedTrigger",1);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2cf9b0,1,&PTR_FUN_14b2cf980);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2cfa40);
  uStack_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d0280,1,0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d03c0);
  uStack_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d1030,1,0);
  uStack_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d1400,1,0);
  uStack_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d1780,1,0);
  uStack_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d1bb0,1,0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d1de0);
  uStack_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d1eb0,1,0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d2010);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d22f0,1,&PTR_FUN_14b2d22c0);
  uStack_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d2840,1,&PTR_FUN_14b2d2810);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c76820 FUN_143c76820 body=55 status=ok
// SIG undefined FUN_143c76820(void)

void FUN_143c76820(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68f68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68f68 = FUN_14171c317(FUN_14651e9ce,uVar1,L"EGoreModifiers");
  }
  return;
}



// FUNCTION 143c76857 FUN_143c76857 body=55 status=ok
// SIG undefined FUN_143c76857(void)

void FUN_143c76857(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68f80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68f80 = FUN_14171c317(FUN_14651e9fd,uVar1,L"EGoreType");
  }
  return;
}



// FUNCTION 143c7688e FUN_143c7688e body=55 status=ok
// SIG undefined FUN_143c7688e(void)

void FUN_143c7688e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68f98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68f98 = FUN_14171c317(FUN_14651ea2c,uVar1,L"EGoreFlags");
  }
  return;
}



// FUNCTION 143c768c5 FUN_143c768c5 body=55 status=ok
// SIG undefined FUN_143c768c5(void)

void FUN_143c768c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69010 = FUN_14171c317(FUN_14651ecb6,uVar1,L"EProjectileGpsContextDataType");
  }
  return;
}



// FUNCTION 143c768fc FUN_143c768fc body=55 status=ok
// SIG undefined FUN_143c768fc(void)

void FUN_143c768fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69040 =
         FUN_14171c317(FUN_14651ed14,uVar1,L"EGpsGeneratorSettings_Characters_PlayerTypeFilter");
  }
  return;
}



// FUNCTION 143c76933 FUN_143c76933 body=55 status=ok
// SIG undefined FUN_143c76933(void)

void FUN_143c76933(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69058 =
         FUN_14171c317(FUN_14651ed43,uVar1,L"EGpsGeneratorSettings_Characters_ControllerTypeFilter")
    ;
  }
  return;
}



// FUNCTION 143c7696a FUN_143c7696a body=55 status=ok
// SIG undefined FUN_143c7696a(void)

void FUN_143c7696a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69070 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69070 =
         FUN_14171c317(FUN_14651ed72,uVar1,L"EGpsGeneratorSettings_Characters_DeathFilter");
  }
  return;
}



// FUNCTION 143c769a1 FUN_143c769a1 body=55 status=ok
// SIG undefined FUN_143c769a1(void)

void FUN_143c769a1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69148 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69148 =
         FUN_14171c317(FUN_14651f1e6,uVar1,
                       L"EGpsGeneratorSettings_InventoryPickups_InteractionTypeFilter");
  }
  return;
}



// FUNCTION 143c769d8 FUN_143c769d8 body=55 status=ok
// SIG undefined FUN_143c769d8(void)

void FUN_143c769d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb691c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb691c0 = FUN_14171c317(FUN_14651f402,uVar1,L"EPerchSearchArea");
  }
  return;
}



// FUNCTION 143c76b0c FUN_143c76b0c body=57 status=ok
// SIG undefined FUN_143c76b0c(void)

void FUN_143c76b0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68e48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68e48 = FUN_140002ddd(FUN_14651e5cc,uVar1,L"GoreDef");
  }
  return;
}



// FUNCTION 143c76b6e FUN_143c76b6e body=57 status=ok
// SIG undefined FUN_143c76b6e(void)

void FUN_143c76b6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68e98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68e98 = FUN_140002ddd(FUN_14651e77a,uVar1,L"GoreLimbActorDef");
  }
  return;
}



// FUNCTION 143c76bf0 FUN_143c76bf0 body=57 status=ok
// SIG undefined FUN_143c76bf0(void)

void FUN_143c76bf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68eb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68eb0 = FUN_140002ddd(FUN_14651e811,uVar1,L"GoreMaterialParameterDef");
  }
  return;
}



// FUNCTION 143c76c38 FUN_143c76c38 body=46 status=ok
// SIG undefined FUN_143c76c38(void)

void FUN_143c76c38(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = &DAT_14c964b40;
  puVar3 = param_2 + 10;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 143c76c66 FUN_143c76c66 body=49 status=ok
// SIG undefined FUN_143c76c66(void)

void FUN_143c76c66(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c76cca FUN_143c76cca body=212 status=ok
// SIG undefined FUN_143c76cca(void)

undefined8 * FUN_143c76cca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = param_2[5];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  puVar7 = param_2 + 10;
  puVar8 = param_1 + 10;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  return param_1;
}



// FUNCTION 143c76d9e FUN_143c76d9e body=57 status=ok
// SIG undefined FUN_143c76d9e(void)

void FUN_143c76d9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68ee0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68ee0 = FUN_140002ddd(FUN_14651e5fb,uVar1,L"GoreRegionDef");
  }
  return;
}



// FUNCTION 143c76e2c FUN_143c76e2c body=57 status=ok
// SIG undefined FUN_143c76e2c(void)

void FUN_143c76e2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69088 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69088 = FUN_140002ddd(FUN_14651edd9,uVar1,L"GpsGeneratorSettings_Characters");
  }
  return;
}



// FUNCTION 143c76e74 FUN_143c76e74 body=120 status=ok
// SIG undefined FUN_143c76e74(void)

void FUN_143c76e74(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x440);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *(undefined4 *)(param_2 + 0x88) = 0;
  *param_2 = &PTR_FUN_14b2de6e0;
  return;
}



// FUNCTION 143c76eec FUN_143c76eec body=57 status=ok
// SIG undefined FUN_143c76eec(void)

void FUN_143c76eec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb690a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb690a0 = FUN_140002ddd(FUN_14651ee38,uVar1,L"GpsGenerator_Characters");
  }
  return;
}



// FUNCTION 143c76f6c FUN_143c76f6c body=57 status=ok
// SIG undefined FUN_143c76f6c(void)

void FUN_143c76f6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69118 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69118 = FUN_140002ddd(FUN_14651f127,uVar1,L"GpsGeneratorSettings_InteractiveObjects");
  }
  return;
}



// FUNCTION 143c76fc2 FUN_143c76fc2 body=57 status=ok
// SIG undefined FUN_143c76fc2(void)

void FUN_143c76fc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69160 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69160 = FUN_140002ddd(FUN_14651f24d,uVar1,L"GpsGeneratorSettings_InventoryPickups");
  }
  return;
}



// FUNCTION 143c77018 FUN_143c77018 body=57 status=ok
// SIG undefined FUN_143c77018(void)

void FUN_143c77018(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69190 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69190 = FUN_140002ddd(FUN_14651f343,uVar1,L"GpsGeneratorSettings_MissionActors");
  }
  return;
}



// FUNCTION 143c7706e FUN_143c7706e body=57 status=ok
// SIG undefined FUN_143c7706e(void)

void FUN_143c7706e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb691d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb691d8 = FUN_140002ddd(FUN_14651f469,uVar1,L"GpsGeneratorSettings_Perches");
  }
  return;
}



// FUNCTION 143c770b6 FUN_143c770b6 body=122 status=ok
// SIG undefined FUN_143c770b6(void)

void FUN_143c770b6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x3e0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *param_2 = &PTR_FUN_14b2e0210;
  param_2[0x83] = 0;
  param_2[0x84] = 0;
  return;
}



// FUNCTION 143c77130 FUN_143c77130 body=57 status=ok
// SIG undefined FUN_143c77130(void)

void FUN_143c77130(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb691f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb691f0 = FUN_140002ddd(FUN_14651f4c8,uVar1,L"GpsGenerator_Perches");
  }
  return;
}



// FUNCTION 143c77194 FUN_143c77194 body=57 status=ok
// SIG undefined FUN_143c77194(void)

void FUN_143c77194(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69238 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69238 = FUN_140002ddd(FUN_14651f655,uVar1,L"GpsGeneratorSettings_ProjectOntoCylinder");
  }
  return;
}



// FUNCTION 143c771f8 FUN_143c771f8 body=1337 status=ok
// SIG undefined FUN_143c771f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c771f8(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d6520,1,&PTR_FUN_14b2d64f0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d68a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d69a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d6ab0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb68db0 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d6c00);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d6cf0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d6de0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d7190,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d74e0,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb68e30);
  if (cVar1 == '\0') {
    _DAT_14cb68e30 = 0;
    uRam000000014cb68e38 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d7850);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d7910);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2d7c50,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d7e10);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d7ec0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d8ad0);
  FUN_140056680(&DAT_14cb68ef0,L"GoreStump_");
  atexit((_func_5014 *)&LAB_143c767dc);
  FUN_140056680(&DAT_14cb68f00,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_143c767ed);
  FUN_140056680(&DAT_14cb68f10,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_143c767fe);
  FUN_140056680(&DAT_14cb68f20,L"GoreFX_");
  atexit((_func_5014 *)&LAB_143c7680f);
  FUN_1446f470e(&DAT_14cb68f30,L"LIMB_GORED",1);
  _DAT_14cb68f38 = 0x4072c00000000000;
  _DAT_14cb68f40 = 0x4082c00000000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d90d0);
  uStack_58 = 3;
  ppuStack_60 = &PTR_FUN_14b2d9a40;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2d9aa0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2da040;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2da060,1,0);
  uStack_58 = 3;
  ppuStack_60 = &PTR_FUN_14b2da7c0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2da820);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2daa40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2dac20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2dae50);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2db1e0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2db200);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2db390);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2db780;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2db7a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2db9c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2dbcd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2dc430);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c77734 FUN_143c77734 body=55 status=ok
// SIG undefined FUN_143c77734(void)

void FUN_143c77734(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69298 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69298 =
         FUN_14171c317(FUN_1465200bf,uVar1,L"EGpsGeneratorSettings_Waypoints_WaypointTypeFilter");
  }
  return;
}



// FUNCTION 143c7776b FUN_143c7776b body=55 status=ok
// SIG undefined FUN_143c7776b(void)

void FUN_143c7776b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb693b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb693b0 = FUN_14171c317(FUN_146520464,uVar1,L"EGpsValueScore");
  }
  return;
}



// FUNCTION 143c777a2 FUN_143c777a2 body=55 status=ok
// SIG undefined FUN_143c777a2(void)

void FUN_143c777a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69428 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69428 = FUN_14171c317(FUN_1465206b6,uVar1,L"EGpsTest_Death");
  }
  return;
}



// FUNCTION 143c777da FUN_143c777da body=55 status=ok
// SIG undefined FUN_143c777da(void)

void FUN_143c777da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69470 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69470 = FUN_140002ddd(FUN_143c77811,uVar1,L"GpsTestSettings_StatusEffect_Score");
  }
  return;
}



// FUNCTION 143c77811 FUN_143c77811 body=47 status=ok
// SIG undefined FUN_143c77811(void)

longlong FUN_143c77811(void)

{
  if (DAT_14cb69468 == 0) {
    FUN_14086a14e(&DAT_14cb69468,&PTR_FUN_14b2e3f48);
  }
  return DAT_14cb69468;
}



// FUNCTION 143c77848 FUN_143c77848 body=48 status=ok
// SIG undefined FUN_143c77848(void)

void FUN_143c77848(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000d0;
  *puVar1 = &PTR_FUN_14b2eaad0;
  return;
}



// FUNCTION 143c77878 FUN_143c77878 body=55 status=ok
// SIG undefined FUN_143c77878(void)

void FUN_143c77878(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69488 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69488 = FUN_140002ddd(FUN_143c778af,uVar1,L"GpsTest_StatusEffect_Score");
  }
  return;
}



// FUNCTION 143c778af FUN_143c778af body=47 status=ok
// SIG undefined FUN_143c778af(void)

longlong FUN_143c778af(void)

{
  if (DAT_14cb69480 == 0) {
    FUN_14086a14e(&DAT_14cb69480,&PTR_FUN_14b2e3fd8);
  }
  return DAT_14cb69480;
}



// FUNCTION 143c778de FUN_143c778de body=48 status=ok
// SIG undefined FUN_143c778de(void)

void FUN_143c778de(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b2eac40;
  return;
}



// FUNCTION 143c7790e FUN_143c7790e body=55 status=ok
// SIG undefined FUN_143c7790e(void)

void FUN_143c7790e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb694d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb694d8 = FUN_14171c317(FUN_1465208d0,uVar1,L"EHazardPrimitiveCollectionType");
  }
  return;
}



// FUNCTION 143c77945 FUN_143c77945 body=55 status=ok
// SIG undefined FUN_143c77945(void)

void FUN_143c77945(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69540 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69540 = FUN_14171c317(FUN_146520b11,uVar1,L"EHazardInteractionMode");
  }
  return;
}



// FUNCTION 143c7797c FUN_143c7797c body=55 status=ok
// SIG undefined FUN_143c7797c(void)

void FUN_143c7797c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb695d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb695d8 = FUN_14171c317(FUN_146520a7b,uVar1,L"EHazardEffectSizeSourceType");
  }
  return;
}



// FUNCTION 143c779b3 FUN_143c779b3 body=55 status=ok
// SIG undefined FUN_143c779b3(void)

void FUN_143c779b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb695f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb695f0 = FUN_14171c317(FUN_146520e6e,uVar1,L"EHazardEffectSizeComputationType");
  }
  return;
}



// FUNCTION 143c779ea FUN_143c779ea body=55 status=ok
// SIG undefined FUN_143c779ea(void)

void FUN_143c779ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69640 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69640 = FUN_14171c317(FUN_146520f6e,uVar1,L"EHazardInteractionSourceMode");
  }
  return;
}



// FUNCTION 143c77a21 FUN_143c77a21 body=55 status=ok
// SIG undefined FUN_143c77a21(void)

void FUN_143c77a21(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb696d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb696d0 = FUN_14171c317(FUN_146521197,uVar1,L"HealthVariation");
  }
  return;
}



// FUNCTION 143c77a58 FUN_143c77a58 body=55 status=ok
// SIG undefined FUN_143c77a58(void)

void FUN_143c77a58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb696e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb696e8 = FUN_14171c317(FUN_1465211c6,uVar1,L"HealthUIType");
  }
  return;
}



// FUNCTION 143c77a8f FUN_143c77a8f body=55 status=ok
// SIG undefined FUN_143c77a8f(void)

void FUN_143c77a8f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69730 = FUN_14171c317(FUN_1465212ee,uVar1,L"EHitRegionDamageRule");
  }
  return;
}



// FUNCTION 143c77ac6 FUN_143c77ac6 body=48 status=ok
// SIG undefined FUN_143c77ac6(void)

longlong FUN_143c77ac6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77af6 FUN_143c77af6 body=48 status=ok
// SIG undefined FUN_143c77af6(void)

longlong FUN_143c77af6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77b26 FUN_143c77b26 body=48 status=ok
// SIG undefined FUN_143c77b26(void)

longlong FUN_143c77b26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77b56 FUN_143c77b56 body=48 status=ok
// SIG undefined FUN_143c77b56(void)

longlong FUN_143c77b56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77b86 FUN_143c77b86 body=48 status=ok
// SIG undefined FUN_143c77b86(void)

longlong FUN_143c77b86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_145ceb4ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77bb6 FUN_143c77bb6 body=48 status=ok
// SIG undefined FUN_143c77bb6(void)

longlong FUN_143c77bb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_145ceb4ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77be6 FUN_143c77be6 body=48 status=ok
// SIG undefined FUN_143c77be6(void)

longlong FUN_143c77be6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x840;
  FUN_145ceb4ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77c16 FUN_143c77c16 body=48 status=ok
// SIG undefined FUN_143c77c16(void)

longlong FUN_143c77c16(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x848;
  FUN_145ceb4ce(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77c84 FUN_143c77c84 body=57 status=ok
// SIG undefined FUN_143c77c84(void)

void FUN_143c77c84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb692b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb692b0 = FUN_140002ddd(FUN_146520125,uVar1,L"GpsGeneratorSettings_Waypoints");
  }
  return;
}



// FUNCTION 143c77ccc FUN_143c77ccc body=57 status=ok
// SIG undefined FUN_143c77ccc(void)

void FUN_143c77ccc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb692c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb692c8 = FUN_140002ddd(FUN_146520184,uVar1,L"GpsGenerator_Waypoints");
  }
  return;
}



// FUNCTION 143c77d14 FUN_143c77d14 body=57 status=ok
// SIG undefined FUN_143c77d14(void)

void FUN_143c77d14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69350 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69350 = FUN_140002ddd(FUN_146520279,uVar1,L"GpsTestSettings_GbxSkillParam");
  }
  return;
}



// FUNCTION 143c77d86 FUN_143c77d86 body=57 status=ok
// SIG undefined FUN_143c77d86(void)

void FUN_143c77d86(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb693c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb693c8 = FUN_140002ddd(FUN_1465204cb,uVar1,L"GpsTestSettings_Health");
  }
  return;
}



// FUNCTION 143c77e12 FUN_143c77e12 body=57 status=ok
// SIG undefined FUN_143c77e12(void)

void FUN_143c77e12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb693e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb693e0 = FUN_140002ddd(FUN_14652052a,uVar1,L"GpsTest_Health");
  }
  return;
}



// FUNCTION 143c77ec4 FUN_143c77ec4 body=57 status=ok
// SIG undefined FUN_143c77ec4(void)

void FUN_143c77ec4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69458 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69458 = FUN_140002ddd(FUN_146520744,uVar1,L"GpsTest_IsDead");
  }
  return;
}



// FUNCTION 143c77efe FUN_143c77efe body=29 status=ok
// SIG undefined FUN_143c77efe(void)

undefined8 FUN_143c77efe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c77f7e FUN_143c77f7e body=410 status=ok
// SIG undefined FUN_143c77f7e(void)

undefined8 FUN_143c77f7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    do {
      lVar10 = param_3 + lVar12;
      uVar3 = *(undefined4 *)(lVar10 + 8);
      uVar4 = *(undefined4 *)(lVar10 + 0xc);
      uVar5 = *(undefined4 *)(lVar10 + 0x10);
      uVar6 = *(undefined4 *)(lVar10 + 0x14);
      uVar7 = *(undefined4 *)(lVar10 + 0x1c);
      uVar8 = *(undefined4 *)(lVar10 + 0x20);
      uVar9 = *(undefined4 *)(lVar10 + 0x24);
      lVar1 = param_2 + 0x28 + lVar12;
      *(undefined4 *)(lVar1 + -0x10) = *(undefined4 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar1 + -0xc) = uVar7;
      *(undefined4 *)(lVar1 + -8) = uVar8;
      *(undefined4 *)(lVar1 + -4) = uVar9;
      *(undefined4 *)(lVar1 + -0x20) = uVar3;
      *(undefined4 *)(lVar1 + -0x1c) = uVar4;
      *(undefined4 *)(lVar1 + -0x18) = uVar5;
      *(undefined4 *)(lVar1 + -0x14) = uVar6;
      FUN_1470d00c2(lVar1,lVar10 + 0x28);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar10 + 0x40);
      *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(lVar10 + 0x48);
      *(undefined2 *)(lVar1 + 0x28) = *(undefined2 *)(lVar10 + 0x50);
      *(undefined1 *)(lVar1 + 0x40) = *(undefined1 *)(lVar10 + 0x68);
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar10 + 0x60);
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(lVar10 + 0x70);
      *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(lVar10 + 0x78);
      *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar10 + 0x80);
      uVar3 = *(undefined4 *)(lVar10 + 0x8c);
      uVar4 = *(undefined4 *)(lVar10 + 0x90);
      uVar5 = *(undefined4 *)(lVar10 + 0x94);
      *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(lVar10 + 0x88);
      *(undefined4 *)(lVar1 + 100) = uVar3;
      *(undefined4 *)(lVar1 + 0x68) = uVar4;
      *(undefined4 *)(lVar1 + 0x6c) = uVar5;
      if (param_2 != param_3) {
        iVar2 = *(int *)(param_3 + 0xa0 + lVar12);
        _Src = *(void **)(param_3 + 0x98 + lVar12);
        *(int *)(param_2 + 0xa0 + lVar12) = iVar2;
        if (iVar2 == 0 && *(int *)(param_2 + 0xa4 + lVar12) == 0) {
          *(undefined4 *)(param_2 + 0xa4 + lVar12) = 0;
        }
        else {
          puVar11 = (undefined8 *)(param_2 + lVar12 + 0x98);
          FUN_1446dd670(puVar11,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar11,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      *(undefined1 *)(param_2 + 0xb8 + lVar12) = *(undefined1 *)(param_3 + 0xb8 + lVar12);
      *(undefined8 *)(param_2 + 0xb0 + lVar12) = *(undefined8 *)(param_3 + 0xb0 + lVar12);
      lVar10 = *(longlong *)(param_3 + 0xc0 + lVar12);
      if (DAT_14c950c29 == '\x01') {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_3 + 0xc0 + lVar12);
        }
      }
      *(longlong *)(param_2 + 0xc0 + lVar12) = lVar10;
      *(undefined4 *)(param_2 + 200 + lVar12) = *(undefined4 *)(param_3 + 200 + lVar12);
      *(undefined1 *)(param_2 + 0xcc + lVar12) = *(undefined1 *)(param_3 + 0xcc + lVar12);
      lVar12 = lVar12 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c78140 FUN_143c78140 body=59 status=ok
// SIG undefined FUN_143c78140(void)

undefined8 FUN_143c78140(longlong *param_1)

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



// FUNCTION 143c7818c FUN_143c7818c body=65 status=ok
// SIG undefined FUN_143c7818c(void)

void FUN_143c7818c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1a) == '\x01') {
    *param_2 = &PTR_FUN_14b2ee340;
    if (param_2[0x13] != 0) {
      FUN_1400020a8();
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x1a) = 0;
  }
  return;
}



// FUNCTION 143c7821e FUN_143c7821e body=68 status=ok
// SIG undefined FUN_143c7821e(void)

undefined8 * FUN_143c7821e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2ee340;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c78262 FUN_143c78262 body=55 status=ok
// SIG undefined FUN_143c78262(void)

void FUN_143c78262(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69470 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69470 = FUN_140002ddd(FUN_143c77811,uVar1,L"GpsTestSettings_StatusEffect_Score");
  }
  return;
}



// FUNCTION 143c7829a FUN_143c7829a body=29 status=ok
// SIG undefined FUN_143c7829a(void)

undefined8 FUN_143c7829a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c78364 FUN_143c78364 body=126 status=ok
// SIG undefined FUN_143c78364(void)

undefined8 FUN_143c78364(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 143c7840a FUN_143c7840a body=59 status=ok
// SIG undefined FUN_143c7840a(void)

undefined8 FUN_143c7840a(longlong *param_1)

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



// FUNCTION 143c78450 FUN_143c78450 body=90 status=ok
// SIG undefined FUN_143c78450(void)

void FUN_143c78450(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 143c784f8 FUN_143c784f8 body=99 status=ok
// SIG undefined FUN_143c784f8(void)

undefined8 * FUN_143c784f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7855c FUN_143c7855c body=55 status=ok
// SIG undefined FUN_143c7855c(void)

void FUN_143c7855c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69488 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69488 = FUN_140002ddd(FUN_143c778af,uVar1,L"GpsTest_StatusEffect_Score");
  }
  return;
}



// FUNCTION 143c785cc FUN_143c785cc body=57 status=ok
// SIG undefined FUN_143c785cc(void)

void FUN_143c785cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69570 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69570 = FUN_140002ddd(FUN_146520c41,uVar1,L"HazardInteractionDef");
  }
  return;
}



// FUNCTION 143c7889a FUN_143c7889a body=57 status=ok
// SIG undefined FUN_143c7889a(void)

void FUN_143c7889a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69670 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69670 = FUN_140002ddd(FUN_146520ba6,uVar1,L"HazardInteractionStateDef");
  }
  return;
}



// FUNCTION 143c788fe FUN_143c788fe body=247 status=ok
// SIG undefined FUN_143c788fe(void)

void FUN_143c788fe(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x1a8);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b2ec510;
  *(undefined1 *)((longlong)param_2 + 0x19) = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1e) = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x25) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x27) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x144) = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined2 *)(param_2 + 0x2c) = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x36) = 0x3f800000;
  return;
}



// FUNCTION 143c789f6 FUN_143c789f6 body=57 status=ok
// SIG undefined FUN_143c789f6(void)

void FUN_143c789f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69718 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69718 = FUN_140002ddd(FUN_14652128c,uVar1,L"HealthTypeDef");
  }
  return;
}



// FUNCTION 143c78a8a FUN_143c78a8a body=57 status=ok
// SIG undefined FUN_143c78a8a(void)

void FUN_143c78a8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69760 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69760 = FUN_140002ddd(FUN_1465213b4,uVar1,L"HitRegionDef");
  }
  return;
}



// FUNCTION 143c78ac3 FUN_143c78ac3 body=966 status=ok
// SIG undefined FUN_143c78ac3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c78ac3(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2e1a30;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e1a50);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2e2380,1,0);
  _DAT_14cb692f0 = 0x47efffffe0000000;
  _DAT_14cb692f8 = 0x47efffffe0000000;
  _DAT_14cb69300 = 0x47efffffe0000000;
  _DAT_14cb69308 = 0x47efffffe0000000;
  _DAT_14cb69310 = 0x47efffffe0000000;
  _DAT_14cb69318 = 0x47efffffe0000000;
  _DAT_14cb69320 = 0x47efffffe0000000;
  _DAT_14cb69328 = 0x47efffffe0000000;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2e3110,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e32f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e3510);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2e38d0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e38f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e3aa0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2e3d40;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e3d60);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e4010);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e4100);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e41f0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb694c8 = (ulonglong)uVar1;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2e4da0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2e4dc0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2e55a0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e55c0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2e6070,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b2e6a00;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e6a40);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2e72b0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e72d0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e73d0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2e74e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2e7640,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b2e7f30;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e7f70);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2e8ee0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2e8f00);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c78e8c FUN_143c78e8c body=55 status=ok
// SIG undefined FUN_143c78e8c(void)

void FUN_143c78e8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69988 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69988 = FUN_14171c317(FUN_146522254,uVar1,L"EImpactEffectUsage");
  }
  return;
}



// FUNCTION 143c78ec3 FUN_143c78ec3 body=55 status=ok
// SIG undefined FUN_143c78ec3(void)

void FUN_143c78ec3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69a48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69a48 =
         FUN_14171c317(FUN_146522596,uVar1,
                       L"EGbxStatusEffectDriverInstanceStackStrategy_Capped_SelectionPolicy");
  }
  return;
}



// FUNCTION 143c78efa FUN_143c78efa body=55 status=ok
// SIG undefined FUN_143c78efa(void)

void FUN_143c78efa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69a60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69a60 =
         FUN_14171c317(FUN_1465225c5,uVar1,
                       L"EGbxStatusEffectDriverInstanceStackStrategy_Capped_ReplacementPolicy");
  }
  return;
}



// FUNCTION 143c78f31 FUN_143c78f31 body=55 status=ok
// SIG undefined FUN_143c78f31(void)

void FUN_143c78f31(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69b90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69b90 = FUN_14171c317(FUN_146522c5c,uVar1,L"EInventoryAspectSelectionPriority");
  }
  return;
}



// FUNCTION 143c78f68 FUN_143c78f68 body=48 status=ok
// SIG undefined FUN_143c78f68(void)

longlong FUN_143c78f68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c78f98 FUN_143c78f98 body=48 status=ok
// SIG undefined FUN_143c78f98(void)

longlong FUN_143c78f98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c78fc8 FUN_143c78fc8 body=48 status=ok
// SIG undefined FUN_143c78fc8(void)

longlong FUN_143c78fc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c78ff8 FUN_143c78ff8 body=48 status=ok
// SIG undefined FUN_143c78ff8(void)

longlong FUN_143c78ff8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c79028 FUN_143c79028 body=48 status=ok
// SIG undefined FUN_143c79028(void)

longlong FUN_143c79028(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c79058 FUN_143c79058 body=48 status=ok
// SIG undefined FUN_143c79058(void)

longlong FUN_143c79058(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140639d0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7908e FUN_143c7908e body=48 status=ok
// SIG undefined FUN_143c7908e(void)

longlong FUN_143c7908e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c790be FUN_143c790be body=48 status=ok
// SIG undefined FUN_143c790be(void)

longlong FUN_143c790be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c79102 FUN_143c79102 body=48 status=ok
// SIG undefined FUN_143c79102(void)

longlong FUN_143c79102(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c79132 FUN_143c79132 body=48 status=ok
// SIG undefined FUN_143c79132(void)

longlong FUN_143c79132(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c792d0 FUN_143c792d0 body=57 status=ok
// SIG undefined FUN_143c792d0(void)

void FUN_143c792d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb699a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb699a0 = FUN_140002ddd(FUN_14185c509,uVar1,L"ImpactEffectDef");
  }
  return;
}



// FUNCTION 143c79406 FUN_143c79406 body=57 status=ok
// SIG undefined FUN_143c79406(void)

void FUN_143c79406(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb699e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb699e8 = FUN_140002ddd(FUN_1465223e9,uVar1,L"ImpactEffectSizeCollectionDef");
  }
  return;
}



// FUNCTION 143c794aa FUN_143c794aa body=31 status=ok
// SIG undefined FUN_143c794aa(void)

undefined8 FUN_143c794aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c794ca FUN_143c794ca body=57 status=ok
// SIG undefined FUN_143c794ca(void)

void FUN_143c794ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69a78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69a78 =
         FUN_140002ddd(FUN_14652262b,uVar1,L"GbxStatusEffectDriverInstanceStackStrategy_Capped");
  }
  return;
}



// FUNCTION 143c7956d FUN_143c7956d body=1030 status=ok
// SIG undefined FUN_143c7956d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7956d(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ee540);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb69788 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ee730);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2eeac0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2eee10,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2ef170,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2ef770,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2efac0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2efe10,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f0160,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f04b0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f0810,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f0b60,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f0ec0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f1220,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f13b0,1,&PTR_FUN_14b2f1380);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2f3290;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2f32b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2f3440);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2f37b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2f3900);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f3c70,1,0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b2f4170;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2f41b0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f4eb0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f53f0,1,&PTR_FUN_14b2f53a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2f5fe0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2f6ad0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b2f6d10;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2f6d30);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c79974 FUN_143c79974 body=55 status=ok
// SIG undefined FUN_143c79974(void)

void FUN_143c79974(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69d30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69d30 = FUN_14171c317(FUN_1465237b6,uVar1,L"EInventoryControlInputHandler");
  }
  return;
}



// FUNCTION 143c799ab FUN_143c799ab body=55 status=ok
// SIG undefined FUN_143c799ab(void)

void FUN_143c799ab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69e58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69e58 = FUN_14171c317(FUN_1465236f4,uVar1,L"EInventoryBodyVisibilityType");
  }
  return;
}



// FUNCTION 143c799e2 FUN_143c799e2 body=55 status=ok
// SIG undefined FUN_143c799e2(void)

void FUN_143c799e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69e70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69e70 = FUN_14171c317(FUN_14652409a,uVar1,L"EInventoryBodyTextureMipsSetting");
  }
  return;
}



// FUNCTION 143c79a19 FUN_143c79a19 body=55 status=ok
// SIG undefined FUN_143c79a19(void)

void FUN_143c79a19(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69e88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69e88 = FUN_14171c317(FUN_146523a5e,uVar1,L"EInventoryBodyControlEvent");
  }
  return;
}



// FUNCTION 143c79a50 FUN_143c79a50 body=55 status=ok
// SIG undefined FUN_143c79a50(void)

void FUN_143c79a50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69ea0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69ea0 = FUN_14171c317(FUN_1465237e5,uVar1,L"EInventoryBodyControlUpdateEvent");
  }
  return;
}



// FUNCTION 143c79a87 FUN_143c79a87 body=55 status=ok
// SIG undefined FUN_143c79a87(void)

void FUN_143c79a87(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69eb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69eb8 = FUN_14171c317(FUN_1465238aa,uVar1,L"EInventoryBodyMaterialBlend");
  }
  return;
}


