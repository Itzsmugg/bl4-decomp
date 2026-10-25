// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143cd63f2 FUN_143cd63f2 body=570 status=ok
// SIG undefined FUN_143cd63f2(void)

void FUN_143cd63f2(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_168 [32];
  longlong local_148 [5];
  undefined1 local_120;
  longlong local_118 [5];
  undefined1 local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [8];
  undefined1 local_c8 [104];
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1487ff666(local_d0,param_1);
  local_e8 = (longlong *)0x0;
  uStack_e0 = 0;
  if (param_3 == 0 || param_2 == 0) goto LAB_143cd65df;
  uVar4 = 0;
  if (param_2 == param_3) {
LAB_143cd645b:
    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar4 + 1);
    if (uStack_e0._4_4_ < uVar4 + 1) {
      FUN_141873c2e(&local_e8,uVar4);
    }
    plVar2 = local_e8;
    memmove(local_e8 + 1,local_e8,(ulonglong)uVar4 << 3);
    *plVar2 = param_2;
LAB_143cd64a3:
    fVar7 = 0.0;
    uVar4 = (uint)uStack_e0;
    if (1 < (int)(uint)uStack_e0) {
      lVar5 = 1;
      do {
        fVar6 = (float)FUN_1487ff564(local_e8[lVar5 + -1],local_e8[lVar5]);
        fVar7 = fVar7 + fVar6;
        lVar5 = lVar5 + 1;
        uVar4 = (uint)uStack_e0;
      } while (lVar5 < (int)(uint)uStack_e0);
    }
    plVar2 = local_e8;
    *(float *)(param_4 + 0x30) = fVar7;
    pplVar1 = (longlong **)(param_4 + 8);
    if (pplVar1 != &local_e8) {
      *(uint *)(param_4 + 0x10) = uVar4;
      if (*(int *)(param_4 + 0x14) == 0 && uVar4 == 0) {
        *(undefined4 *)(param_4 + 0x14) = 0;
      }
      else {
        FUN_14880c2c6(pplVar1,uVar4);
        if (uVar4 != 0) {
          memcpy(*pplVar1,plVar2,(longlong)(int)uVar4 << 3);
        }
      }
    }
  }
  else {
    local_118[1] = 0;
    local_118[2] = 0x7fefffffffffffff;
    local_118[3] = 0x7fefffffffffffff;
    local_118[4] = 0xffffffffffffffff;
    local_f0 = 0;
    local_148[1] = 0;
    local_148[2] = 0x7fefffffffffffff;
    local_148[3] = 0x7fefffffffffffff;
    local_148[4] = 0xffffffffffffffff;
    local_120 = 0;
    local_148[0] = param_2;
    local_118[0] = param_3;
    iVar3 = FUN_1487ff6c4(local_d0,local_148,local_118,&local_e8);
    if (iVar3 == 1) {
      uVar4 = 0;
      if (((uint)uStack_e0 == 0) || (uVar4 = (uint)uStack_e0, *local_e8 != param_2))
      goto LAB_143cd645b;
      goto LAB_143cd64a3;
    }
  }
  if (local_e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143cd65df:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_14880c0f0(local_c8);
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cd662e FUN_143cd662e body=102 status=ok
// SIG undefined FUN_143cd662e(void)

undefined8 FUN_143cd662e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar2);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 == *param_2) {
          return 1;
        }
        if (((double)plVar1[1] == (double)param_2[1]) &&
           (!NAN((double)plVar1[1]) && !NAN((double)param_2[1]))) {
          if (((double)plVar1[2] == (double)param_2[2]) &&
             (!NAN((double)plVar1[2]) && !NAN((double)param_2[2]))) {
            if (((double)plVar1[3] == (double)param_2[3]) &&
               (!NAN((double)plVar1[3]) && !NAN((double)param_2[3]))) {
              return 1;
            }
          }
        }
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x30) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 143cd66fa FUN_143cd66fa body=276 status=ok
// SIG undefined FUN_143cd66fa(void)

void FUN_143cd66fa(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
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
  undefined8 local_78;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_3 + 0x28);
  lVar8 = *(longlong *)(param_1 + 0x1c);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(lVar7 + 0xf8);
  }
  plVar1 = *(longlong **)(lVar7 + 0xf0);
  if ((plVar1 != (longlong *)0x0) && (lVar8 != 0)) {
    cVar5 = (**(code **)(*plVar1 + 0x4c8))(plVar1,lVar8);
    lVar7 = *(longlong *)(param_3 + 0x28);
    if (cVar5 != '\0') {
      (**(code **)(**(longlong **)(lVar7 + 0xf0) + 0x4a8))
                (*(longlong **)(lVar7 + 0xf0),&local_a8,lVar8,0);
      bVar6 = *(byte *)(param_1 + 0x18);
      if ((bVar6 & 1) != 0) {
        *(undefined4 *)(param_3 + 0x30) = local_88;
        *(undefined4 *)(param_3 + 0x34) = uStack_84;
        *(undefined4 *)(param_3 + 0x38) = uStack_80;
        *(undefined4 *)(param_3 + 0x3c) = uStack_7c;
        *(undefined8 *)(param_3 + 0x40) = local_78;
        bVar6 = *(byte *)(param_1 + 0x18);
      }
      if ((bVar6 & 2) != 0) {
        local_48 = local_a8;
        uStack_44 = uStack_a4;
        uStack_40 = uStack_a0;
        uStack_3c = uStack_9c;
        local_38 = local_98;
        uStack_34 = uStack_94;
        uStack_30 = uStack_90;
        uStack_2c = uStack_8c;
        FUN_1448052ee(&local_48,&local_c0);
        *(undefined8 *)(param_3 + 0x58) = local_b0;
        *(undefined4 *)(param_3 + 0x48) = local_c0;
        *(undefined4 *)(param_3 + 0x4c) = uStack_bc;
        *(undefined4 *)(param_3 + 0x50) = uStack_b8;
        *(undefined4 *)(param_3 + 0x54) = uStack_b4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_e8);
    }
  }
  *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(lVar7 + 0x60);
  uVar2 = *(undefined4 *)(lVar7 + 0x54);
  uVar3 = *(undefined4 *)(lVar7 + 0x58);
  uVar4 = *(undefined4 *)(lVar7 + 0x5c);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(lVar7 + 0x50);
  *(undefined4 *)(param_3 + 0x34) = uVar2;
  *(undefined4 *)(param_3 + 0x38) = uVar3;
  *(undefined4 *)(param_3 + 0x3c) = uVar4;
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cd684b FUN_143cd684b body=69 status=ok
// SIG undefined FUN_143cd684b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd684b(void)

{
  _DAT_14cb746d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd688d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb746d8,1);
  return;
}



// FUNCTION 143cd6890 FUN_143cd6890 body=69 status=ok
// SIG undefined FUN_143cd6890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd6890(void)

{
  _DAT_14cb746e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd68d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb746f0,1);
  return;
}



// FUNCTION 143cd68d5 FUN_143cd68d5 body=69 status=ok
// SIG undefined FUN_143cd68d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd68d5(void)

{
  _DAT_14cb74700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd6917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb74708,1);
  return;
}



// FUNCTION 143cd691a FUN_143cd691a body=69 status=ok
// SIG undefined FUN_143cd691a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd691a(void)

{
  _DAT_14cb74718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd695c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb74720,1);
  return;
}



// FUNCTION 143cd695f FUN_143cd695f body=69 status=ok
// SIG undefined FUN_143cd695f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd695f(void)

{
  _DAT_14cb74730 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd69a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb74738,1);
  return;
}



// FUNCTION 143cd69a4 FUN_143cd69a4 body=69 status=ok
// SIG undefined FUN_143cd69a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd69a4(void)

{
  _DAT_14cb74748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd69e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb74750,1);
  return;
}



// FUNCTION 143cd69e9 FUN_143cd69e9 body=69 status=ok
// SIG undefined FUN_143cd69e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd69e9(void)

{
  _DAT_14cb74760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd6a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb74768,1);
  return;
}



// FUNCTION 143cd6a2e FUN_143cd6a2e body=69 status=ok
// SIG undefined FUN_143cd6a2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd6a2e(void)

{
  _DAT_14cb74778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd6a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb74780,1);
  return;
}



// FUNCTION 143cd6a73 FUN_143cd6a73 body=69 status=ok
// SIG undefined FUN_143cd6a73(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd6a73(void)

{
  _DAT_14cb74790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cd6ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb74798,1);
  return;
}



// FUNCTION 143cd6c4e FUN_143cd6c4e body=471 status=ok
// SIG undefined FUN_143cd6c4e(void)

void FUN_143cd6c4e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_958 [32];
  undefined4 local_938;
  undefined4 local_930;
  undefined4 local_928;
  undefined8 local_920;
  undefined2 *local_918;
  undefined1 *local_910;
  undefined1 *local_908;
  code **local_900;
  undefined1 *local_8f8;
  code *local_8f0;
  code *local_8e8 [16];
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 local_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  longlong local_c0;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_958;
  lVar1 = *(longlong *)(param_3 + 0x28);
  lVar4 = *(longlong *)(lVar1 + 0xe0);
  if (lVar4 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_900 = local_8e8;
      local_8e8[0] = FUN_141864c34;
      local_8f0 = FUN_14081d0ea;
      local_8f8 = &LAB_146431698;
      local_908 = &LAB_1486775cb;
      local_910 = &LAB_1464cee35;
      local_918 = &DAT_149e063b2;
      local_920 = 0;
      local_928 = 0x10000005;
      local_930 = 0x10;
      local_938 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      lVar4 = *(longlong *)(lVar1 + 0xe0);
      if (lVar4 == 0) goto LAB_143cd6cd8;
    }
    if ((((DAT_14cb5b388 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8)
          == DAT_14cb5b388 + 0x30 && (*(longlong *)(lVar4 + 0x11e8) != 0)) &&
        ((plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x11e8) + 0x1eb8), plVar2 != (longlong *)0x0
         && (cVar3 = (**(code **)(*plVar2 + 0x50))(), cVar3 != '\0')))))) {
      *(float *)(param_3 + 0x60) = *(float *)(param_3 + 0x60) * *(float *)(param_1 + 0x18);
      FUN_144894d4c(local_8e8);
      local_8e8[0] = (code *)((ulonglong)local_8e8[0] | 0x20);
      local_868 = *(undefined4 *)(param_1 + 0x20);
      uStack_864 = *(undefined4 *)(param_1 + 0x24);
      uStack_860 = *(undefined4 *)(param_1 + 0x28);
      uStack_85c = *(undefined4 *)(param_1 + 0x2c);
      local_858 = *(undefined4 *)(param_1 + 0x30);
      uStack_854 = *(undefined4 *)(param_1 + 0x34);
      uStack_850 = *(undefined4 *)(param_1 + 0x38);
      uStack_84c = *(undefined4 *)(param_1 + 0x3c);
      FUN_1406a8366(param_3,&DAT_14cb74990,local_8e8,0x3f800000);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143cd6cd8:
  if ((local_20 ^ (ulonglong)auStack_958) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cd6e6a FUN_143cd6e6a body=1518 status=ok
// SIG undefined FUN_143cd6e6a(void)

undefined8 FUN_143cd6e6a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong local_90;
  uint *local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_70;
  undefined4 uStack_6c;
  longlong local_58;
  longlong *local_48;
  
  plVar5 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_b8);
  local_48 = plVar5;
  if (*param_2 == 0) {
    plVar17 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb75230);
    plVar17 = plVar5;
  }
  uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),*(undefined1 *)(param_1 + 0x10));
  if (*plVar17 != 0) {
    uVar6 = FUN_14000584e(*plVar17,uVar6 & 0xffffffff);
  }
  *(char *)(param_1 + 0x11) = (char)uVar6;
  local_78 = DAT_14cb74c28;
  local_80 = DAT_14cb74c20;
  FUN_1448075d0(&local_70);
  pbVar7 = (byte *)*param_2;
  if (pbVar7 != (byte *)0x0) {
    if ((*pbVar7 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar7 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar17 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar17 = (longlong *)plVar5[9];
      }
      iVar19 = *(int *)((longlong)plVar17 + (ulonglong)((int)plVar5[10] - 1U & local_70) * 4);
      if (iVar19 != -1) {
        do {
          lVar1 = *plVar5 + (longlong)iVar19 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar19 * 0x40) == local_70) {
            if ((((lVar1 != 0) &&
                 (puVar14 = (undefined8 *)(lVar1 + 0x28), puVar14 != (undefined8 *)0x0)) &&
                ((byte *)*puVar14 != (byte *)0x0)) && ((*(byte *)*puVar14 & 0x40) == 0))
            goto LAB_143cd6f6b;
            break;
          }
          iVar19 = *(int *)(lVar1 + 0x38);
        } while (iVar19 != -1);
      }
    }
  }
  puVar14 = &DAT_14c9a1308;
LAB_143cd6f6b:
  pbVar7 = (byte *)*puVar14;
  if ((pbVar7 == (byte *)0x0) || ((*pbVar7 & 3) != 1)) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(pbVar7 + 8);
  }
  uVar3 = FUN_14880dcbe(uVar15);
  *(undefined1 *)(param_1 + 0x18) = uVar3;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78 = DAT_14cb74c40;
  local_80 = DAT_14cb74c38;
  FUN_1448075d0(&local_70);
  pbVar7 = (byte *)*param_2;
  if (pbVar7 != (byte *)0x0) {
    if ((*pbVar7 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar7 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar17 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar17 = (longlong *)plVar5[9];
      }
      iVar19 = *(int *)((longlong)plVar17 + (ulonglong)((int)plVar5[10] - 1U & local_70) * 4);
      if (iVar19 != -1) {
        do {
          lVar1 = *plVar5 + (longlong)iVar19 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar19 * 0x40) == local_70) {
            if (((lVar1 != 0) && (plVar5 = (longlong *)(lVar1 + 0x28), plVar5 != (longlong *)0x0))
               && (((byte *)*plVar5 != (byte *)0x0 && ((*(byte *)*plVar5 & 0x40) == 0))))
            goto LAB_143cd7047;
            break;
          }
          iVar19 = *(int *)(lVar1 + 0x38);
        } while (iVar19 != -1);
      }
    }
  }
  plVar5 = &DAT_14c9a1308;
LAB_143cd7047:
  if (*plVar5 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = FUN_14000584e(*plVar5,0);
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xfe | bVar4;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 100) = 6;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  local_78 = DAT_14cb74c70;
  local_80 = DAT_14cb74c68;
  FUN_1448075d0(&local_70);
  FUN_14880163c(param_2,&local_70,param_1 + 100);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x24) = 0x41f00000c1f00000;
  *(undefined8 *)(param_1 + 0x3c) = 0x41f00000c1f00000;
  local_78 = DAT_14cb74c58;
  local_80 = DAT_14cb74c50;
  FUN_1448075d0(&local_70);
  pbVar7 = (byte *)*param_2;
  if (pbVar7 != (byte *)0x0) {
    if ((*pbVar7 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar7 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar17 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar17 = (longlong *)plVar5[9];
      }
      iVar19 = *(int *)((longlong)plVar17 + (ulonglong)((int)plVar5[10] - 1U & local_70) * 4);
      if (iVar19 != -1) {
        do {
          lVar1 = *plVar5 + (longlong)iVar19 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar19 * 0x40) == local_70) {
            if ((((lVar1 != 0) &&
                 (puVar14 = (undefined8 *)(lVar1 + 0x28), puVar14 != (undefined8 *)0x0)) &&
                ((byte *)*puVar14 != (byte *)0x0)) && ((*(byte *)*puVar14 & 0x40) == 0))
            goto LAB_143cd7180;
            break;
          }
          iVar19 = *(int *)(lVar1 + 0x38);
        } while (iVar19 != -1);
      }
    }
  }
  puVar14 = &DAT_14c9a1308;
LAB_143cd7180:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  pbVar7 = (byte *)*puVar14;
  if ((pbVar7 != (byte *)0x0) && ((*pbVar7 & 0x6b) == 3)) {
    lVar1 = *(longlong *)(pbVar7 + 8);
    uVar21 = *(uint *)(lVar1 + 0x48);
    pbVar7 = (byte *)(ulonglong)uVar21;
    if (uVar21 == 0) {
      uVar22 = 1;
      uVar6 = 0;
      iVar19 = 0;
      uVar11 = 0;
    }
    else {
      puVar16 = *(uint **)(lVar1 + 0x40);
      if (*(uint **)(lVar1 + 0x40) == (uint *)0x0) {
        puVar16 = (uint *)(lVar1 + 0x30);
      }
      uVar11 = *puVar16;
      if (uVar11 == 0) {
        iVar19 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar19 = uVar21 - 1;
        }
        uVar6 = 0;
        uVar22 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar22 = uVar6;
        }
        iVar19 = 0;
        do {
          if (uVar22 == uVar6) goto LAB_143cd73ce;
          iVar19 = iVar19 + 0x20;
          uVar11 = puVar16[uVar6 + 1];
          uVar6 = uVar6 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar6 = 0;
        iVar19 = 0;
      }
      uVar22 = (ulonglong)(-uVar11 & uVar11);
      uVar9 = uVar22 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar11 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if ((int)uVar21 <= (int)uVar11) {
        uVar11 = uVar21;
      }
    }
    if ((int)uVar11 < (int)uVar21) {
      local_90 = param_1 + 0x1c;
      uVar21 = 0xffffffff;
      local_88 = (uint *)(lVar1 + 0x30);
      do {
        lVar20 = *(longlong *)(lVar1 + 0x18);
        local_94 = iVar19;
        lVar8 = FUN_148629434();
        if (DAT_14c947fe0 == 0) {
          lVar10 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar10);
          DAT_14c947fe0 = lVar10;
        }
        FUN_140045924(DAT_14c947fe0,&local_70,lVar20 + (longlong)(int)uVar11 * 0x40,1);
        if (((lVar8 != 0) &&
            (iVar19 = FUN_1448e5bf4(lVar8,CONCAT44(uStack_6c,local_70),0), iVar19 != -1)) &&
           (uVar9 = (ulonglong)*(byte *)(*(longlong *)(lVar8 + 0x40) + 8 + (longlong)iVar19 * 0x10),
           uVar9 != 3)) {
          FUN_1488016e8(local_90 + uVar9 * 0x18,
                        *(longlong *)(lVar1 + 0x18) + (longlong)(int)uVar11 * 0x40 + 0x28);
        }
        uVar21 = uVar21 & ~(uint)uVar22;
        puVar16 = *(uint **)(lVar1 + 0x40);
        if (*(uint **)(lVar1 + 0x40) == (uint *)0x0) {
          puVar16 = local_88;
        }
        uVar2 = *(uint *)(lVar1 + 0x48);
        pbVar7 = (byte *)(ulonglong)uVar2;
        iVar18 = (int)uVar6;
        lVar20 = (longlong)iVar18;
        uVar11 = puVar16[lVar20] & uVar21;
        iVar19 = local_94;
        if (uVar11 == 0) {
          iVar12 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar12 = uVar2 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar13 = iVar12;
          if (iVar12 < iVar18) {
            iVar13 = iVar18;
          }
          if (iVar12 <= iVar18) break;
          lVar8 = 0;
          while( true ) {
            iVar19 = iVar19 + 0x20;
            uVar11 = puVar16[lVar20 + lVar8 + 1];
            if (uVar11 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar13 - lVar20 == lVar8) goto LAB_143cd73ce;
          }
          uVar6 = (ulonglong)(iVar18 + (int)lVar8 + 1);
          uVar21 = 0xffffffff;
        }
        uVar22 = (ulonglong)(-uVar11 & uVar11);
        uVar9 = uVar22 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar11 = (iVar19 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      } while ((int)uVar11 < (int)uVar2);
    }
  }
LAB_143cd73ce:
  if (((ulonglong)local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)pbVar7 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cd75b8 FUN_143cd75b8 body=245 status=ok
// SIG undefined FUN_143cd75b8(void)

void FUN_143cd75b8(longlong *param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  if (param_2 < 1.0) {
    if (*(char *)param_1[1] == '\0') {
      param_2 = 1.0 - param_2;
    }
    if (0.5 <= param_2) {
      fVar3 = 1.0 - (param_2 + param_2 + -1.0);
      fVar3 = (1.0 - fVar3 * fVar3) * 0.5 + 0.5;
    }
    else {
      fVar3 = (param_2 + param_2) * (param_2 + param_2) * 0.5;
    }
    *(float *)(*(longlong *)param_1[2] + 0x120) =
         (*(float *)param_1[3] - *(float *)param_1[4]) * fVar3 + *(float *)param_1[4];
    *(byte *)(*(longlong *)param_1[2] + 0x14c) = *(byte *)(*(longlong *)param_1[2] + 0x14c) & 0xef;
    return;
  }
  lVar2 = *param_1;
  cVar1 = *(char *)param_1[1];
  *(char *)(lVar2 + 0x2c) = cVar1;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  *(byte *)(*(longlong *)param_1[2] + 0x14c) =
       *(byte *)(*(longlong *)param_1[2] + 0x14c) & 0xef | cVar1 << 4;
  *(undefined4 *)(*(longlong *)param_1[2] + 0x120) =
       *(undefined4 *)param_1[(ulonglong)(*(byte *)(lVar2 + 0x2c) ^ 1) + 3];
  return;
}



// FUNCTION 143cd76c5 FUN_143cd76c5 body=41 status=ok
// SIG undefined FUN_143cd76c5(void)

void FUN_143cd76c5(void)

{
  DAT_14cb75220 = 0;
  if (DAT_14cb75218 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65336();
  return;
}



// FUNCTION 143cd7732 FUN_143cd7732 body=41 status=ok
// SIG undefined FUN_143cd7732(void)

void FUN_143cd7732(void)

{
  DAT_14cb75338 = 0;
  if (DAT_14cb75330 != 0) {
    FUN_1400020a8();
  }
  FUN_145d653d4();
  return;
}



// FUNCTION 143cd7782 FUN_143cd7782 body=41 status=ok
// SIG undefined FUN_143cd7782(void)

void FUN_143cd7782(void)

{
  DAT_14cb754f8 = 0;
  if (DAT_14cb754f0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65472();
  return;
}



// FUNCTION 143cd77b0 FUN_143cd77b0 body=41 status=ok
// SIG undefined FUN_143cd77b0(void)

void FUN_143cd77b0(void)

{
  DAT_14cb755f0 = 0;
  if (DAT_14cb755e8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65510();
  return;
}



// FUNCTION 143cd78e0 FUN_143cd78e0 body=161 status=ok
// SIG undefined FUN_143cd78e0(void)

void FUN_143cd78e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (((lVar1 == DAT_14cb75780) || (lVar1 == DAT_14cb75788)) || (lVar1 == DAT_14cb75790)) {
    (**(code **)(*param_1 + 0x890))(param_1,local_30,0);
    lVar1 = *param_2;
  }
  else {
    local_30[0] = lVar1;
    if (lVar1 == DAT_14cb757a0) {
      local_30[0] = DAT_14cb757a8;
    }
    if (lVar1 == DAT_14cb75798) {
      local_30[0] = DAT_14cb757a8;
    }
  }
  if (local_30[0] != lVar1) {
    param_2[2] = 0;
    *param_2 = local_30[0];
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cd7982 FUN_143cd7982 body=6698 status=ok
// SIG undefined FUN_143cd7982(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cd7982(longlong *param_1,longlong *param_2,float param_3)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  ulonglong extraout_XMM0_Qb;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  longlong local_380;
  float local_378;
  undefined8 local_370;
  wchar_t *local_368;
  code *local_360;
  undefined1 *local_358;
  code **local_350;
  code *local_348;
  code *local_340;
  undefined1 local_338 [16];
  double local_328;
  undefined8 uStack_320;
  double local_310;
  undefined1 local_308 [16];
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double local_260;
  double local_258;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_228;
  double local_220;
  double local_218;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double dStack_178;
  undefined8 local_170;
  code *local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined **local_148;
  double dStack_140;
  longlong *local_138;
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double dStack_f8;
  undefined8 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar12 = *param_2;
  cVar8 = (**(code **)(*param_1 + 0x880))();
  if ((cVar8 == '\0') && ((param_1[0x746] != 0 || ((int)param_1[0x747] != 0x7201)))) {
    if ((lVar12 == 0) || (cVar8 = FUN_14479439c(lVar12,0), cVar8 == '\0')) {
LAB_143cd7a54:
      (**(code **)(*(longlong *)param_1[0x73a] + 0x2a8))((longlong *)param_1[0x73a],param_1[0x86]);
      dVar26 = (double)param_1[0x749];
      if (dVar26 == 0.0) {
        bVar9 = *(byte *)((longlong)param_1 + 0x2ef4);
      }
      else {
        plVar3 = (longlong *)param_1[0x73b];
        if ((*(byte *)((longlong)plVar3 + 0x14c) & 0x40) != 0) {
          (**(code **)(*plVar3 + 0x2a0))(plVar3);
          *(byte *)((longlong)plVar3 + 0x14c) =
               *(byte *)((longlong)plVar3 + 0x14c) & 0xdf |
               (*(byte *)(*(longlong *)((longlong)dVar26 + 0x10) + 0x1d) & 1) << 5;
        }
        if ((longlong)*(int *)((longlong)dVar26 + 0x38) != 0) {
          puVar15 = *(undefined8 **)((longlong)dVar26 + 0x30);
          puVar16 = puVar15 + (longlong)*(int *)((longlong)dVar26 + 0x38) * 2;
          do {
            plVar4 = (longlong *)*puVar15;
            plVar5 = (longlong *)puVar15[1];
            if (plVar5 == (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x18))();
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              (**(code **)(*plVar4 + 0x18))();
              LOCK();
              plVar4 = plVar5 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
            puVar15 = puVar15 + 2;
          } while (puVar15 != puVar16);
        }
        fVar18 = *(float *)(plVar3 + 0xd);
        *(int *)(plVar3 + 0x154) = (int)plVar3[0xc];
        if (fVar18 <= 0.0) {
          fVar18 = *(float *)(plVar3[5] + 0x48);
        }
        fVar17 = tanf(fVar18 * 0.5 * 0.017453292);
        fVar18 = atanf((fVar17 * *(float *)(plVar3 + 0xc)) / fVar18);
        *(float *)(plVar3 + 0xc) = (fVar18 + fVar18) * 57.295776;
        dVar21 = DAT_14c846508;
        dVar20 = DAT_14c846500;
        dVar19 = DAT_14c8464f8;
        dVar35 = DAT_14c8464f0;
        dVar33 = DAT_14c8464e8;
        dVar29 = DAT_14c8464e0;
        local_278 = DAT_14c8464f0;
        local_288 = DAT_14c8464e0;
        dStack_280 = DAT_14c8464e8;
        uVar40 = SUB84(DAT_14c8464e0,0);
        uVar41 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
        local_298 = DAT_14c846508;
        local_2a8 = DAT_14c8464f8;
        dStack_2a0 = DAT_14c846500;
        if ((*(byte *)(*(longlong *)((longlong)dVar26 + 0x10) + 0x1c) & 8) == 0) {
          FUN_140457442(plVar3);
        }
        FUN_1406a84ce(plVar3,&local_288,&local_2a8);
        local_310 = dVar29;
        if (*(char *)((longlong)dVar26 + 0xa78) == '\x01') {
          *(undefined1 *)((longlong)dVar26 + 0xa78) = 0;
          dVar29 = local_288;
          dVar22 = dStack_280;
          dVar23 = local_278;
          if (*(longlong *)(plVar3[5] + 0xe0) != 0) {
            lVar12 = *(longlong *)(*(longlong *)(plVar3[5] + 0xe0) + 0x1c8);
            if (lVar12 == 0) {
              pdVar11 = &DAT_14c8464e0;
              dVar23 = DAT_14c8464f0;
            }
            else {
              pdVar11 = (double *)(lVar12 + 0x260);
              dVar23 = *(double *)(lVar12 + 0x270);
            }
            dVar29 = local_288 - *pdVar11;
            dVar22 = dStack_280 - pdVar11[1];
            dVar23 = local_278 - dVar23;
          }
          *(double *)((longlong)dVar26 + 0x40) = *(double *)((longlong)dVar26 + 0x40) - dVar29;
          *(double *)((longlong)dVar26 + 0x48) = *(double *)((longlong)dVar26 + 0x48) - dVar22;
          *(double *)((longlong)dVar26 + 0x50) = *(double *)((longlong)dVar26 + 0x50) - dVar23;
          *(double *)((longlong)dVar26 + 0x58) = *(double *)((longlong)dVar26 + 0x58) - local_2a8;
          dVar29 = *(double *)((longlong)dVar26 + 0x60) - dStack_2a0;
          *(double *)((longlong)dVar26 + 0x60) = dVar29;
          *(double *)((longlong)dVar26 + 0x68) = *(double *)((longlong)dVar26 + 0x68) - local_298;
          *(float *)((longlong)dVar26 + 0x70) =
               *(float *)((longlong)dVar26 + 0x70) -
               (*(float *)(plVar3 + 0xc) + *(float *)(plVar3 + 0x17));
          dVar29 = (double)FUN_144719204(dVar29,0x4076800000000000);
          dVar29 = (double)(~-(ulonglong)(dVar29 < 0.0) & (ulonglong)dVar29 |
                           (ulonglong)(dVar29 + 360.0) & -(ulonglong)(dVar29 < 0.0));
          *(ulonglong *)((longlong)dVar26 + 0x60) =
               ~-(ulonglong)(180.0 < dVar29) & (ulonglong)dVar29 |
               (ulonglong)(dVar29 + -360.0) & -(ulonglong)(180.0 < dVar29);
          dVar29 = (double)FUN_144719204(*(undefined8 *)((longlong)dVar26 + 0x58),0x4076800000000000
                                        );
          dVar29 = (double)(~-(ulonglong)(dVar29 < 0.0) & (ulonglong)dVar29 |
                           (ulonglong)(dVar29 + 360.0) & -(ulonglong)(dVar29 < 0.0));
          *(ulonglong *)((longlong)dVar26 + 0x58) =
               ~-(ulonglong)(180.0 < dVar29) & (ulonglong)dVar29 |
               (ulonglong)(dVar29 + -360.0) & -(ulonglong)(180.0 < dVar29);
          dVar29 = (double)FUN_144719204(*(undefined8 *)((longlong)dVar26 + 0x68),0x4076800000000000
                                        );
          dVar29 = (double)(~-(ulonglong)(dVar29 < 0.0) & (ulonglong)dVar29 |
                           (ulonglong)(dVar29 + 360.0) & -(ulonglong)(dVar29 < 0.0));
          *(ulonglong *)((longlong)dVar26 + 0x68) =
               ~-(ulonglong)(180.0 < dVar29) & (ulonglong)dVar29 |
               (ulonglong)(dVar29 + -360.0) & -(ulonglong)(180.0 < dVar29);
          *(double *)((longlong)dVar26 + 0x9b0) =
               *(double *)((longlong)dVar26 + 0x9b0) - (double)plVar3[0x25];
          *(double *)((longlong)dVar26 + 0x9b8) =
               *(double *)((longlong)dVar26 + 0x9b8) - (double)plVar3[0x26];
          *(double *)((longlong)dVar26 + 0x9c0) =
               *(double *)((longlong)dVar26 + 0x9c0) - (double)plVar3[0x27];
          *(double *)((longlong)dVar26 + 0x9c8) =
               *(double *)((longlong)dVar26 + 0x9c8) - (double)plVar3[0x28];
          uVar40 = SUB84(local_310,0);
          uVar41 = (undefined4)((ulonglong)local_310 >> 0x20);
        }
        param_1[0x8a] = (longlong)local_278;
        param_1[0x88] = (longlong)local_288;
        param_1[0x89] = (longlong)dStack_280;
        param_1[0x8d] = (longlong)local_298;
        param_1[0x8b] = (longlong)local_2a8;
        param_1[0x8c] = (longlong)dStack_2a0;
        *(float *)(param_1 + 0x8e) = *(float *)(plVar3 + 0xc) + *(float *)(plVar3 + 0x17);
        lVar12 = plVar3[0x26];
        param_1[0x1b6] = plVar3[0x25];
        param_1[0x1b7] = lVar12;
        lVar12 = plVar3[0x28];
        param_1[0x1b8] = plVar3[0x27];
        param_1[0x1b9] = lVar12;
        fVar18 = *(float *)((longlong)dVar26 + 0xa74) - param_3;
        auVar28 = ZEXT416((uint)fVar18);
        if ((0.0 < *(float *)((longlong)dVar26 + 0xa74)) && (fVar18 <= 0.0)) {
          FUN_1418733ae(dVar26,plVar3);
          auVar28 = ZEXT416((uint)(*(float *)((longlong)dVar26 + 0xa74) - param_3));
        }
        if (auVar28._0_4_ <= 0.0) {
          auVar27._12_4_ = 0;
          auVar27._0_12_ = auVar28._4_12_;
          auVar28 = auVar27 << 0x20;
        }
        fVar18 = auVar28._0_4_;
        *(float *)((longlong)dVar26 + 0xa74) = fVar18;
        *(byte *)((longlong)plVar3 + 0x14c) =
             *(byte *)((longlong)plVar3 + 0x14c) & 0xfd | (0.0 < fVar18) * '\x02';
        local_328 = dVar21;
        uStack_320 = 0;
        dVar22 = (double)CONCAT44(uVar41,uVar40);
        dVar25 = dVar33;
        dVar29 = dVar35;
        dVar23 = dVar19;
        dVar24 = dVar20;
        if (0.0 < fVar18) {
          fVar18 = 1.0 - *(float *)((longlong)dVar26 + 0xa74) / *(float *)((longlong)dVar26 + 0xa70)
          ;
          plVar4 = *(longlong **)((longlong)dVar26 + 0xa80);
          if (plVar4 == (longlong *)0x0) {
            if (fVar18 < 0.5) {
              fVar18 = (fVar18 + fVar18) * (fVar18 + fVar18) * 0.5;
            }
            else {
              fVar18 = 1.0 - (fVar18 + fVar18 + -1.0);
              fVar18 = (1.0 - fVar18 * fVar18) * 0.5 + 0.5;
            }
            dVar38 = (double)(1.0 - fVar18);
            dVar29 = *(double *)((longlong)dVar26 + 0x50) * dVar38;
            dVar25 = *(double *)((longlong)dVar26 + 0x48) * dVar38;
            dVar22 = *(double *)((longlong)dVar26 + 0x40) * dVar38;
            param_1[0x88] = (longlong)((double)param_1[0x88] + dVar22);
            param_1[0x89] = (longlong)((double)param_1[0x89] + dVar25);
            param_1[0x8a] = (longlong)((double)param_1[0x8a] + dVar29);
            local_328 = *(double *)((longlong)dVar26 + 0x68) * dVar38;
            dVar24 = *(double *)((longlong)dVar26 + 0x60) * dVar38;
            dVar23 = *(double *)((longlong)dVar26 + 0x58) * dVar38;
            param_1[0x8b] = (longlong)(dVar23 + (double)param_1[0x8b]);
            param_1[0x8c] = (longlong)(dVar24 + (double)param_1[0x8c]);
            param_1[0x8d] = (longlong)((double)param_1[0x8d] + local_328);
            *(float *)(param_1 + 0x8e) =
                 (1.0 - fVar18) * *(float *)((longlong)dVar26 + 0x70) + *(float *)(param_1 + 0x8e);
            dVar37 = *(double *)((longlong)dVar26 + 0x9b8);
            param_1[0x1b6] =
                 (longlong)(*(double *)((longlong)dVar26 + 0x9b0) * dVar38 + (double)param_1[0x1b6])
            ;
            param_1[0x1b7] = (longlong)(dVar37 * dVar38 + (double)param_1[0x1b7]);
            dVar37 = *(double *)((longlong)dVar26 + 0x9c8);
            param_1[0x1b8] =
                 (longlong)(dVar38 * *(double *)((longlong)dVar26 + 0x9c0) + (double)param_1[0x1b8])
            ;
            param_1[0x1b9] = (longlong)(dVar37 * dVar38 + (double)param_1[0x1b9]);
          }
          else {
            local_388 = param_1 + 0x726;
            local_380 = (longlong)dVar26 + 0x40;
            local_378 = fVar18;
            (**(code **)(*plVar4 + 0x10))(plVar4,local_380,plVar3,param_1 + 0x88);
            local_328 = dVar21;
            dVar22 = (double)CONCAT44(uVar41,uVar40);
          }
        }
        uStack_320 = 0;
        if ((*(byte *)(*(longlong *)((longlong)dVar26 + 0x10) + 0x1c) & 4) == 0) {
          *(byte *)((longlong)plVar3 + 0x14c) = *(byte *)((longlong)plVar3 + 0x14c) & 0xf7;
        }
        else {
          local_2f0 = dVar33;
          local_2e8 = dVar35;
          local_2b8 = dVar19;
          dStack_2b0 = dVar20;
          local_2e0 = dVar20;
          local_2d8 = dVar21;
          auVar28 = *(undefined1 (*) [16])(plVar3 + 9);
          auVar27 = divpd(auVar28,_DAT_1499387d0);
          auVar30._8_8_ = 0;
          auVar30._0_8_ = plVar3[0xb];
          auVar30 = divpd(auVar30,_DAT_1499387d0);
          auVar27 = roundpd(auVar27,auVar27,3);
          auVar30 = roundpd(auVar30,auVar30,3);
          dVar33 = (auVar28._0_8_ - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar35 = (auVar28._8_8_ - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar37 = ((double)plVar3[0xb] - auVar30._0_8_ * (double)DAT_1499387d0) *
                   0.008726646259971648;
          dVar38 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          local_2d0 = dVar29;
          local_2c8 = dVar25;
          local_2c0 = dVar22;
          dVar19 = sin(dVar33);
          dVar20 = sin(dVar35);
          dVar21 = sin(dVar37);
          sin(dVar38);
          dVar22 = cos(dVar33);
          local_308._8_4_ = SUB84(dVar24,0);
          local_308._0_8_ = dVar23;
          local_308._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          dVar23 = cos(dVar35);
          dVar24 = cos(dVar37);
          cos(dVar38);
          dVar29 = -(dVar23 * dVar19 * dVar21) + dVar20 * dVar22 * dVar24;
          dVar33 = dVar20 * dVar19 * dVar21 + dVar23 * dVar22 * dVar24;
          dVar35 = dVar19 * dVar20 * dVar24 - dVar22 * dVar23 * dVar21;
          dVar19 = -(dVar19 * dVar23 * dVar24) - dVar22 * dVar20 * dVar21;
          auVar28 = *(undefined1 (*) [16])(plVar3 + 0x14);
          auVar27 = divpd(auVar28,_DAT_1499387d0);
          auVar31._8_8_ = 0;
          auVar31._0_8_ = plVar3[0x16];
          auVar30 = divpd(auVar31,_DAT_1499387d0);
          auVar27 = roundpd(auVar27,auVar27,3);
          auVar30 = roundpd(auVar30,auVar30,3);
          dVar21 = (auVar28._0_8_ - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar24 = (auVar28._8_8_ - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar37 = ((double)plVar3[0x16] - auVar30._0_8_ * (double)DAT_1499387d0) *
                   0.008726646259971648;
          dVar38 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          local_338._0_8_ = sin(dVar21);
          dVar20 = sin(dVar24);
          dVar22 = sin(dVar37);
          sin(dVar38);
          dVar23 = cos(dVar21);
          dVar25 = local_328;
          dVar24 = cos(dVar24);
          dVar37 = cos(dVar37);
          cos(dVar38);
          dVar38 = -(dVar24 * (double)local_338._0_8_ * dVar22) + dVar20 * dVar23 * dVar37;
          dVar39 = dVar20 * (double)local_338._0_8_ * dVar22 + dVar24 * dVar23 * dVar37;
          dVar21 = (double)local_338._0_8_ * dVar20 * dVar37 - dVar23 * dVar24 * dVar22;
          dVar23 = -((double)local_338._0_8_ * dVar24 * dVar37) - dVar23 * dVar20 * dVar22;
          auVar34._0_8_ = dVar33 * dVar21;
          auVar34._8_8_ = dVar33 * dVar23;
          dVar22 = dVar23 * dVar29 * -1.0 + dVar38 * dVar19 + dVar35 * dVar39 * 1.0 + auVar34._0_8_;
          dVar24 = dVar21 * dVar29 * 1.0 + dVar39 * dVar19 + dVar35 * dVar38 * -1.0 + auVar34._8_8_;
          dVar20 = dVar39 * dVar29 * 1.0 +
                   ((dVar35 * dVar23 * 1.0 + dVar33 * dVar38) - dVar19 * dVar21);
          dVar35 = dVar38 * dVar29 * -1.0 +
                   ((dVar35 * dVar21 * -1.0 + dVar33 * dVar39) - dVar19 * dVar23);
          auVar28 = divpd(local_308,_DAT_1499387d0);
          auVar32._8_8_ = 0;
          auVar32._0_8_ = dVar25 / 360.0;
          auVar27 = roundpd(auVar34,auVar28,3);
          auVar28 = roundpd(auVar32,auVar32,3);
          dVar29 = (local_308._0_8_ - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar33 = (local_308._8_8_ - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar38 = (dVar25 - auVar28._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar39 = (0.0 - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar19 = sin(dVar29);
          dVar21 = sin(dVar33);
          dVar23 = sin(dVar38);
          sin(dVar39);
          dVar25 = cos(dVar29);
          dVar37 = cos(dVar33);
          dVar38 = cos(dVar38);
          cos(dVar39);
          dVar29 = -(dVar37 * dVar19 * dVar23) + dVar21 * dVar25 * dVar38;
          dVar33 = dVar21 * dVar19 * dVar23 + dVar37 * dVar25 * dVar38;
          dVar39 = dVar19 * dVar21 * dVar38 - dVar25 * dVar37 * dVar23;
          dVar23 = -(dVar19 * dVar37 * dVar38) - dVar25 * dVar21 * dVar23;
          dVar21 = dVar23 * dVar20 * -1.0 +
                   dVar29 * dVar24 + dVar22 * dVar33 * 1.0 + dVar35 * dVar39;
          dVar25 = dVar39 * dVar20 * 1.0 +
                   dVar33 * dVar24 + dVar22 * dVar29 * -1.0 + dVar35 * dVar23;
          dVar19 = dVar33 * dVar20 * 1.0 +
                   ((dVar22 * dVar23 * 1.0 + dVar35 * dVar29) - dVar24 * dVar39);
          dVar29 = dVar29 * dVar20 * -1.0 +
                   ((dVar22 * dVar39 * -1.0 + dVar35 * dVar33) - dVar24 * dVar23);
          dVar20 = dVar25 + dVar25;
          dVar22 = dVar19 + dVar19;
          dVar35 = dVar21 * (dVar21 + dVar21);
          dVar33 = (dVar21 + dVar21) * dVar29;
          local_168 = (code *)(1.0 - (dVar25 * dVar20 + dVar19 * dVar22));
          local_148 = (undefined **)(dVar21 * dVar20 - dVar29 * dVar22);
          local_128 = dVar21 * dVar22 + dVar20 * dVar29;
          local_108 = DAT_14c8464e0;
          dStack_160 = dVar29 * dVar22 + dVar21 * dVar20;
          dStack_140 = 1.0 - (dVar19 * dVar22 + dVar35);
          dStack_120 = dVar25 * dVar22 - dVar33;
          dStack_100 = DAT_14c8464e8;
          dStack_f8 = DAT_14c8464f0;
          local_158 = dVar21 * dVar22 - dVar20 * dVar29;
          local_138 = (longlong *)(dVar33 + dVar25 * dVar22);
          local_118 = 1.0 - (dVar25 * dVar20 + dVar35);
          local_150 = 0;
          local_130 = 0;
          local_110 = 0;
          local_f0 = 0x3ff0000000000000;
          dVar33 = (double)plVar3[0x21];
          dVar35 = (double)plVar3[0x22];
          dVar29 = (double)plVar3[0x23];
          dVar19 = sin(dVar33 * 0.01745329238474369);
          dVar20 = sin(dVar35 * 0.01745329238474369);
          dVar21 = sin(dVar29 * 0.01745329238474369);
          sin(0.0);
          dVar33 = cos(dVar33 * 0.01745329238474369);
          dVar35 = cos(dVar35 * 0.01745329238474369);
          dVar29 = cos(dVar29 * 0.01745329238474369);
          cos(0.0);
          local_1e8 = dVar33 * dVar35;
          local_1e0 = dVar20 * dVar33;
          local_1d0 = 0;
          local_1c8 = dVar19 * dVar21 * dVar35 - dVar20 * dVar29;
          local_1c0 = dVar19 * dVar21 * dVar20 + dVar35 * dVar29;
          local_1b8 = -dVar21 * dVar33;
          local_1b0 = 0;
          local_338._8_8_ = 0x8000000000000000;
          local_338._0_8_ = 0x8000000000000000;
          local_1a8 = -(dVar19 * dVar29 * dVar35 + dVar20 * dVar21);
          local_1a0 = dVar35 * dVar21 - dVar20 * dVar19 * dVar29;
          local_198 = dVar33 * dVar29;
          local_190 = 0;
          local_188 = DAT_14c8464e0;
          local_180 = DAT_14c8464e8;
          dStack_178 = DAT_14c8464f0;
          local_170 = 0x3ff0000000000000;
          local_1d8 = dVar19;
          FUN_1447fea8d(&local_268,&local_1e8,&local_168);
          local_308._0_8_ = local_240;
          local_328 = local_220;
          dVar29 = 0.0;
          if ((((local_260 != 0.0) || (NAN(local_260))) || (local_268 != 0.0)) || (NAN(local_268)))
          {
            dVar29 = atan2(local_260,local_268);
            dVar29 = dVar29 * 57.29577951308232;
          }
          dVar35 = SQRT(local_260 * local_260 + local_268 * local_268);
          dVar33 = 0.0;
          if (((local_258 != 0.0) || (NAN(local_258))) || ((dVar35 != 0.0 || (NAN(dVar35))))) {
            dVar33 = atan2(local_258,dVar35);
            dVar33 = dVar33 * 57.29577951308232;
          }
          dVar35 = sin(dVar33 * 0.01745329238474369);
          dVar19 = sin(dVar29 * 0.01745329238474369);
          dVar20 = cos(dVar33 * 0.01745329238474369);
          dVar21 = cos(dVar29 * 0.01745329238474369);
          dVar22 = 0.0;
          dVar23 = dVar35 * 0.0 * dVar21 - dVar19;
          dVar21 = dVar35 * 0.0 * dVar19 + dVar21;
          dVar35 = local_238 * dVar20 * -0.0 + local_248 * dVar23 + (double)local_308._0_8_ * dVar21
          ;
          dVar19 = local_218 * dVar20 * -0.0 + local_228 * dVar23 + local_328 * dVar21;
          if (((dVar19 != 0.0) || (NAN(dVar19))) || ((dVar35 != 0.0 || (NAN(dVar35))))) {
            dVar22 = atan2(dVar19,dVar35);
            dVar22 = dVar22 * 57.29577951308232;
          }
          dVar20 = local_310;
          param_1[0x729] = (longlong)dVar33;
          param_1[0x72a] = (longlong)dVar29;
          param_1[0x72b] = (longlong)dVar22;
          dVar29 = (double)plVar3[8];
          dVar33 = (double)plVar3[0x10];
          dVar35 = (double)plVar3[7];
          dVar19 = (double)plVar3[0xf];
          dVar22 = (double)plVar3[0x20] + (double)plVar3[0x13];
          dVar23 = (double)plVar3[0x1f] + (double)plVar3[0x12];
          dVar21 = (double)plVar3[0x1e] + (double)plVar3[0x11];
          param_1[0x726] =
               (longlong)
               (local_2c0 + (double)plVar3[6] + (double)plVar3[0xe] +
               local_108 * 0.0 +
               dVar22 * local_128 + dVar23 * (double)local_148 + dVar21 * (double)local_168);
          param_1[0x727] =
               (longlong)
               (dStack_100 * 0.0 + dVar22 * dStack_120 + dVar23 * dStack_140 + dVar21 * dStack_160 +
               local_2c8 + dVar35 + dVar19);
          param_1[0x728] =
               (longlong)
               (dVar21 * local_158 + dVar23 * (double)local_138 + dVar22 * local_118 +
                dStack_f8 * 0.0 + local_2d0 + dVar29 + dVar33);
          lVar12 = plVar3[0x24];
          *(int *)(param_1 + 0x72c) = (int)lVar12;
          *(int *)(param_1 + 0x95) = (int)lVar12;
          if ((*(byte *)((longlong)plVar3 + 0x14c) & 2) == 0) {
            if (*(char *)((longlong)dVar26 + 0xa90) == '\0') {
              *(byte *)((longlong)plVar3 + 0x14c) = *(byte *)((longlong)plVar3 + 0x14c) | 8;
            }
            else {
              lVar12 = (**(code **)(*plVar3 + 0x180))(plVar3);
              if (lVar12 != 0) {
                uVar13 = FUN_144a88394(lVar12);
                local_168 = (code *)&LAB_143cdb18a;
                local_158 = 0.0;
                local_148 = &PTR_LAB_14b3f24f0;
                local_128 = (double)CONCAT71(local_128._1_7_,3);
                dStack_140 = dVar26;
                local_138 = plVar3;
                FUN_14016fdb0(uVar13,&local_1e8,&local_168);
                (*(code *)(&PTR_LAB_14a1c87a0)[(ulonglong)local_128 & 0xff])(&local_168);
              }
            }
            *(undefined1 *)((longlong)dVar26 + 0xa90) = 0;
          }
          else {
            dVar26 = local_2a8 * 0.01745329238474369;
            dVar29 = dStack_2a0 * 0.01745329238474369;
            dVar22 = local_298 * 0.01745329238474369;
            dVar33 = sin(dVar26);
            dVar35 = sin(dVar29);
            dVar19 = sin(dVar22);
            sin(0.0);
            dVar26 = cos(dVar26);
            dVar21 = cos(dVar29);
            dVar22 = cos(dVar22);
            cos(0.0);
            dVar37 = dVar26 * dVar21;
            dVar38 = dVar35 * dVar26;
            dVar24 = dVar33 * dVar19 * dVar21 - dVar35 * dVar22;
            dVar23 = dVar33 * dVar19 * dVar35 + dVar21 * dVar22;
            dVar25 = -dVar19 * dVar26;
            dVar39 = dVar33 * dVar22;
            dVar36 = dVar39 * dVar21 + dVar35 * dVar19;
            dVar29 = dVar33 * dVar33 + dVar37 * dVar37 + dVar38 * dVar38;
            if (9.99999993922529e-09 < dVar29) {
              dVar29 = 1.0 / SQRT(dVar29);
              dVar37 = dVar37 * dVar29;
              dVar38 = dVar38 * dVar29;
              dVar33 = dVar33 * dVar29;
            }
            dVar29 = (double)(local_338._0_8_ ^ (ulonglong)dVar36);
            uVar7 = local_338._8_8_ ^ extraout_XMM0_Qb;
            local_338._8_4_ = (int)uVar7;
            local_338._0_8_ = dVar29;
            local_338._12_4_ = (int)(uVar7 >> 0x20);
            dVar35 = dVar21 * dVar19 - dVar35 * dVar39;
            dVar26 = dVar26 * dVar22;
            dVar19 = dVar25 * dVar25 + dVar24 * dVar24 + dVar23 * dVar23;
            if (9.99999993922529e-09 < dVar19) {
              dVar19 = 1.0 / SQRT(dVar19);
              dVar24 = dVar24 * dVar19;
              dVar23 = dVar23 * dVar19;
              dVar25 = dVar25 * dVar19;
            }
            dVar19 = dVar26 * dVar26 + dVar36 * dVar36 + dVar35 * dVar35;
            if (9.99999993922529e-09 < dVar19) {
              dVar19 = 1.0 / SQRT(dVar19);
              dVar29 = dVar29 * dVar19;
              dVar35 = dVar35 * dVar19;
              dVar26 = dVar26 * dVar19;
            }
            param_1[0x726] =
                 (longlong)
                 (dVar29 * local_2e8 + dVar24 * local_2f0 + dVar37 * dVar20 + (double)param_1[0x726]
                 );
            param_1[0x727] =
                 (longlong)
                 (dVar35 * local_2e8 + dVar23 * local_2f0 + dVar38 * dVar20 + (double)param_1[0x727]
                 );
            param_1[0x728] =
                 (longlong)
                 (dVar26 * local_2e8 + dVar25 * local_2f0 + dVar33 * dVar20 + (double)param_1[0x728]
                 );
            param_1[0x729] = (longlong)(local_2b8 + (double)param_1[0x729]);
            param_1[0x72a] = (longlong)(local_2e0 + (double)param_1[0x72a]);
            param_1[0x72b] = (longlong)(local_2d8 + (double)param_1[0x72b]);
          }
        }
        *(byte *)((longlong)plVar3 + 0x14c) = *(byte *)((longlong)plVar3 + 0x14c) | 0x40;
        lVar12 = param_1[0x73b];
        bVar2 = *(byte *)(lVar12 + 0x14c);
        bVar9 = *(byte *)((longlong)param_1 + 0x2ef4) & 0xdf | (bVar2 & 1) << 5;
        *(byte *)((longlong)param_1 + 0x2ef4) = bVar9;
        if ((bVar2 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(lVar12 + 0x148);
        }
        param_1[0x72f] = *(longlong *)(lVar12 + 0x100);
        lVar10 = *(longlong *)(lVar12 + 0xf8);
        param_1[0x72d] = *(longlong *)(lVar12 + 0xf0);
        param_1[0x72e] = lVar10;
        lVar10 = *(longlong *)(lVar12 + 0x110);
        param_1[0x730] = *(longlong *)(lVar12 + 0x108);
        param_1[0x731] = lVar10;
        param_1[0x732] = *(longlong *)(lVar12 + 0x118);
        *(undefined4 *)(param_1 + 0x733) = *(undefined4 *)(lVar12 + 0x120);
      }
      if ((bVar9 & 0x40) != 0) {
        if ((local_e0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
      param_1[0x5e2] = param_1[0x8a];
      param_1[0x5e0] = param_1[0x88];
      param_1[0x5e1] = param_1[0x89];
      param_1[0x5e3] = param_1[0x8b];
      param_1[0x5e4] = param_1[0x8c];
      param_1[0x5e5] = param_1[0x8d];
      *(int *)(param_1 + 0x5e6) = (int)param_1[0x8e];
      param_1[0x70e] = param_1[0x1b6];
      param_1[0x70f] = param_1[0x1b7];
      param_1[0x710] = param_1[0x1b8];
      param_1[0x711] = param_1[0x1b9];
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_3a8);
    }
    lVar12 = *(longlong *)(lVar12 + 0x10);
    if (((lVar12 != 0) && (lVar10 = FUN_140086810(), lVar10 != 0)) &&
       ((*(byte *)(lVar10 + 0xd5) & 0x40) != 0)) {
      if (DAT_14c950d78 == 0) {
        local_350 = &local_168;
        local_168 = FUN_1449e2820;
        local_340 = FUN_14081d0ea;
        local_348 = FUN_14081d0ea;
        local_358 = &LAB_1468b50ee;
        local_360 = FUN_1427f23a3;
        local_368 = L"Engine";
        local_370 = 0;
        local_378 = 2.5292856e-29;
        local_380 = CONCAT44(local_380._4_4_,8);
        local_388 = (longlong *)CONCAT44(local_388._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      }
      if (DAT_14c950d78 != lVar10) {
        do {
          if (0 < (longlong)*(int *)(lVar12 + 0x1e0)) {
            lVar14 = 0;
            do {
              lVar6 = *(longlong *)(*(longlong *)(lVar12 + 0x1d8) + lVar14);
              if (((lVar6 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                  == lVar10 + 0x30)) goto LAB_143cd7a54;
              lVar14 = lVar14 + 0x10;
            } while ((longlong)*(int *)(lVar12 + 0x1e0) * 0x10 != lVar14);
          }
          lVar12 = *(longlong *)(lVar12 + 0x40);
        } while (lVar12 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_3a8);
}



// FUNCTION 143cd9426 FUN_143cd9426 body=41 status=ok
// SIG undefined FUN_143cd9426(void)

void FUN_143cd9426(void)

{
  DAT_14cb75800 = 0;
  if (DAT_14cb757f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d655ae();
  return;
}



// FUNCTION 143cd948d FUN_143cd948d body=41 status=ok
// SIG undefined FUN_143cd948d(void)

void FUN_143cd948d(void)

{
  DAT_14cb75918 = 0;
  if (DAT_14cb75910 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6564c();
  return;
}



// FUNCTION 143cd94bb FUN_143cd94bb body=41 status=ok
// SIG undefined FUN_143cd94bb(void)

void FUN_143cd94bb(void)

{
  DAT_14cb75a10 = 0;
  if (DAT_14cb75a08 != 0) {
    FUN_1400020a8();
  }
  FUN_145d656ea();
  return;
}



// FUNCTION 143cd94e9 FUN_143cd94e9 body=41 status=ok
// SIG undefined FUN_143cd94e9(void)

void FUN_143cd94e9(void)

{
  DAT_14cb75b00 = 0;
  if (DAT_14cb75af8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65788();
  return;
}



// FUNCTION 143cd9557 FUN_143cd9557 body=41 status=ok
// SIG undefined FUN_143cd9557(void)

void FUN_143cd9557(void)

{
  DAT_14cb75c10 = 0;
  if (DAT_14cb75c08 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65826();
  return;
}



// FUNCTION 143cd9659 FUN_143cd9659 body=619 status=ok
// SIG undefined FUN_143cd9659(void)

longlong * FUN_143cd9659(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == (longlong *)0x0) {
    FUN_140002266(&local_40,L"%s: WorldContext was nullptr!",param_2);
    puVar7 = local_40;
    if (local_38 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar7,3,0);
    local_50 = local_40;
  }
  else {
    lVar6 = (**(code **)(*param_3 + 0x180))(param_3);
    if (lVar6 == 0) {
      local_40 = (undefined2 *)param_3[3];
      FUN_1400021e4(&local_40,&local_50);
      puVar7 = &DAT_149dfb77a;
      if (local_48 != 0) {
        puVar7 = local_50;
      }
      pwVar8 = L"%s: WorldContext \'%ls\' was not in a World!";
    }
    else {
      if (((*(byte *)(lVar6 + 0x155) & 0x20) != 0) || (iVar5 = FUN_14490d72a(lVar6), iVar5 == 3)) {
        *param_1 = 0;
        param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
      lVar6 = FUN_14589e76e(param_3);
      if (lVar6 != 0) {
        lVar3 = *(longlong *)(lVar6 + 0x158);
        plVar4 = *(longlong **)(lVar6 + 0x160);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (lVar3 == 0) {
          local_40 = (undefined2 *)param_3[3];
          FUN_1400021e4(&local_40,&local_50);
          puVar7 = &DAT_149dfb77a;
          if (local_48 != 0) {
            puVar7 = local_50;
          }
          FUN_140002266(&local_40,
                        L"%s: WorldContext \'%ls\' was not in a World with a CinematicManager!",
                        param_2,puVar7);
          puVar7 = &DAT_149dfb77a;
          if (local_38 != 0) {
            puVar7 = local_40;
          }
          FUN_1415b7ec4(puVar7,3,0);
          if (local_40 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_50 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          *param_1 = 0;
          param_1[1] = 0;
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
        else {
          *param_1 = lVar3;
          param_1[1] = (longlong)plVar4;
        }
        goto LAB_143cd9782;
      }
      local_40 = (undefined2 *)param_3[3];
      FUN_1400021e4(&local_40,&local_50);
      puVar7 = &DAT_149dfb77a;
      if (local_48 != 0) {
        puVar7 = local_50;
      }
      pwVar8 = L"%s: WorldContext \'%ls\' was not in a Shard!";
    }
    FUN_140002266(&local_40,pwVar8,param_2,puVar7);
    puVar7 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar7 = local_40;
    }
    FUN_1415b7ec4(puVar7,3,0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_143cd9782:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143cd98ca FUN_143cd98ca body=288 status=ok
// SIG undefined FUN_143cd98ca(void)

void FUN_143cd98ca(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = param_2;
  if (param_1 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_40 = &local_18;
      local_18 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463b31ae;
      local_48 = &LAB_1486dca4f;
      local_50 = &LAB_1464f50a6;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      FUN_14585d6a8(param_1,&local_20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cd99ec FUN_143cd99ec body=34 status=ok
// SIG undefined FUN_143cd99ec(void)

undefined8 FUN_143cd99ec(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x80) == 0) || (lVar1 = *(longlong *)(param_1 + 0x88), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 8));
  }
  return uVar2;
}



// FUNCTION 143cd9a80 FUN_143cd9a80 body=41 status=ok
// SIG undefined FUN_143cd9a80(void)

void FUN_143cd9a80(void)

{
  DAT_14cb75df8 = 0;
  if (DAT_14cb75df0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d658c4();
  return;
}



// FUNCTION 143cd9ac2 FUN_143cd9ac2 body=107 status=ok
// SIG undefined FUN_143cd9ac2(void)

longlong * FUN_143cd9ac2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  plVar2 = (longlong *)FUN_1474af88e(lVar1,param_2,0x2000000,0,0,0);
  FUN_14010ee68(lVar1,plVar2);
  FUN_140486fc4(plVar2,*(undefined8 *)(lVar1 + 0x1c8),0);
  FUN_140b506a4(plVar2);
  (**(code **)(*plVar2 + 0x588))(plVar2,2);
  return plVar2;
}



// FUNCTION 143cd9b2e FUN_143cd9b2e body=1133 status=ok
// SIG undefined FUN_143cd9b2e(void)

ulonglong FUN_143cd9b2e(longlong *param_1,undefined4 *param_2,float *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  undefined4 local_360;
  uint *local_358;
  undefined8 *local_350;
  undefined1 *local_348;
  uint local_338;
  undefined4 uStack_334;
  float local_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 local_284;
  undefined4 local_258;
  undefined4 local_228;
  undefined4 uStack_224;
  double local_220;
  double local_218 [18];
  undefined4 local_184;
  undefined4 local_158;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_388;
  lVar1 = *param_1;
  FUN_148804e16(lVar1,&local_108);
  (**(code **)(*(longlong *)param_1[1] + 0x578))((longlong *)param_1[1],&local_338);
  FUN_148804eda(lVar1,&local_228,&local_338);
  dVar4 = (double)(*(float *)param_1[2] + *(float *)(lVar1 + 0x1b94));
  dVar5 = dVar4 * (double)CONCAT44(uStack_224,local_228) + local_108;
  dVar6 = local_220 * dVar4 + dStack_100;
  dVar3 = (double)*(float *)(lVar1 + 0x1b8c);
  local_118 = (double)*param_3;
  dVar4 = local_218[0] * dVar4 + local_f8 + dVar3 + local_118;
  local_108 = dVar5;
  dStack_100 = dVar6;
  if ((*(byte *)(lVar1 + 0x1bb4) & 1) != 0) {
    local_f8 = dVar4;
    (**(code **)(*(longlong *)(lVar1 + 0x1a58) + 0x40))(lVar1 + 0x1a58,&local_338,param_1[1]);
    fVar11 = (float)(**(code **)(*(longlong *)(lVar1 + 0x1a58) + 200))(lVar1 + 0x1a58);
    dVar3 = (double)fVar11;
    local_108 = dVar5 + dVar3 * (double)CONCAT44(uStack_334,local_338);
    dStack_100 = dVar6 + (double)CONCAT44(uStack_32c,local_330) * dVar3;
    dVar4 = dVar4 + (double)CONCAT44(uStack_324,local_328) * dVar3;
    dVar3 = (double)*(float *)(lVar1 + 0x1b8c);
    local_118 = (double)*param_3;
  }
  local_128 = local_108;
  dStack_120 = dStack_100;
  local_118 = (dVar4 - dVar3) - local_118;
  local_f8 = dVar4;
  if (*(longlong *)param_1[3] != 0) {
    local_f8 = dVar4 + (double)*(float *)(*(longlong *)param_1[3] + 0x40);
  }
  memset(&local_228,0,0x100);
  local_158 = 0xffffffff;
  local_184 = 0xffffffff;
  uStack_224 = 0x3f800000;
  local_cc = 0;
  local_c8 = 0x101;
  local_a0 = 0;
  local_98 = 0x800000000;
  local_80 = 0;
  local_78 = 0x400000000;
  local_e0 = 0;
  local_d4 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_df = 1;
  local_dd = 0;
  local_d0 = 0;
  local_dc = 0x1000000;
  local_d8 = 1;
  if (*(longlong *)(param_1[1] + 0x1f0) != 0) {
    local_90 = *(undefined4 *)(*(longlong *)(param_1[1] + 0x1f0) + 0xc);
    local_78 = 0x400000001;
  }
  uVar8 = FUN_1447210f0(lVar1);
  local_330 = *param_3;
  uStack_334 = *param_2;
  local_338 = 3;
  local_360 = (**(code **)(**(longlong **)(param_1[1] + 0x110) + 0x580))();
  local_348 = &DAT_14cad0f10;
  local_350 = &local_f0;
  local_368 = &DAT_14c8463d0;
  local_358 = &local_338;
  cVar7 = FUN_14021655c(uVar8,&local_228,&local_108,&local_128);
  if (cVar7 == '\0') {
    uVar9 = 0;
  }
  else {
    local_338 = 0;
    uStack_334 = 0;
    local_330 = 0.0;
    memset(&local_328,0,0x100);
    local_258 = 0xffffffff;
    local_284 = 0xffffffff;
    uStack_324 = 0x3f800000;
    local_368 = (undefined8 *)0x0;
    (**(code **)(*(longlong *)param_1[1] + 0x900))((longlong *)param_1[1],local_218,&local_338,0);
    bVar10 = (local_338 & 3) == 3;
    uVar9 = CONCAT71((int7)((ulonglong)&local_338 >> 8),bVar10);
    if ((bVar10) && (puVar2 = *(undefined4 **)param_1[4], puVar2 != (undefined4 *)0x0)) {
      *(undefined8 *)(puVar2 + 4) = local_308;
      *puVar2 = local_318;
      puVar2[1] = uStack_314;
      puVar2[2] = uStack_310;
      puVar2[3] = uStack_30c;
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cd9fa4 FUN_143cd9fa4 body=59 status=ok
// SIG undefined FUN_143cd9fa4(void)

void FUN_143cd9fa4(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb75ee0;
  if (DAT_14cb75ee0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb75ee0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143cd9fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143cd9fdf FUN_143cd9fdf body=91 status=ok
// SIG undefined FUN_143cd9fdf(void)

void FUN_143cd9fdf(void)

{
  if (DAT_14cb75f58 != 0) {
    if (DAT_14cb75f50 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb75f50)(DAT_14cb75f50,0);
    FUN_1446efa72(&DAT_14cb75f50,0,0,0x10);
    DAT_14cb75f58 = 0;
  }
  if (DAT_14cb75f50 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143cda03a FUN_143cda03a body=31 status=ok
// SIG undefined FUN_143cda03a(void)

undefined8 FUN_143cda03a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cda05a FUN_143cda05a body=31 status=ok
// SIG undefined FUN_143cda05a(void)

undefined8 FUN_143cda05a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cda07a FUN_143cda07a body=31 status=ok
// SIG undefined FUN_143cda07a(void)

undefined8 FUN_143cda07a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cda0a8 FUN_143cda0a8 body=53 status=ok
// SIG undefined FUN_143cda0a8(void)

void FUN_143cda0a8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141873acc(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 143cda0de FUN_143cda0de body=29 status=ok
// SIG undefined FUN_143cda0de(void)

undefined8 FUN_143cda0de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cda27a FUN_143cda27a body=93 status=ok
// SIG undefined FUN_143cda27a(void)

void FUN_143cda27a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f2460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143cda2d8 FUN_143cda2d8 body=93 status=ok
// SIG undefined FUN_143cda2d8(void)

void FUN_143cda2d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f2460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143cda336 FUN_143cda336 body=126 status=ok
// SIG undefined FUN_143cda336(void)

void FUN_143cda336(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f2460;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cda3a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cda3be FUN_143cda3be body=269 status=ok
// SIG undefined FUN_143cda3be(void)

undefined8 FUN_143cda3be(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143cda4c5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143cda4c5;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143cda4c5:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143cda479;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143cda4cc(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143cda479;
    }
  }
  uVar6 = 0;
LAB_143cda479:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cda4cc FUN_143cda4cc body=119 status=ok
// SIG undefined FUN_143cda4cc(void)

void FUN_143cda4cc(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  FUN_143cd2b3c(lVar2);
  if (((*(int *)(lVar2 + 0x34) != 0) && (uVar1 = *(uint *)(lVar2 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(lVar2 + 0x34))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      FUN_140457ffc(lVar3 + 0x30,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143cda544 FUN_143cda544 body=180 status=ok
// SIG undefined FUN_143cda544(void)

void FUN_143cda544(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [48];
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *param_2;
  uVar2 = *(undefined8 *)(*(longlong *)param_1[1] + (longlong)iVar1 * 8);
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_38 = 0;
  lVar3 = *(longlong *)param_1[2];
  local_40 = *(undefined8 *)(lVar3 + 0x18);
  local_50 = *(undefined4 *)(lVar3 + 8);
  uStack_4c = *(undefined4 *)(lVar3 + 0xc);
  uStack_48 = *(undefined4 *)(lVar3 + 0x10);
  uStack_44 = *(undefined4 *)(lVar3 + 0x14);
  FUN_143cd63f2(param_1[4],uVar2,lVar3,local_68);
  if ((int)uStack_58 != 0) {
    lVar3 = *(longlong *)*param_1;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar4) = uVar2;
    *(undefined4 *)(lVar3 + 8 + lVar4) = local_38;
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cda5fa FUN_143cda5fa body=460 status=ok
// SIG undefined FUN_143cda5fa(void)

void FUN_143cda5fa(undefined8 *param_1,int *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = *(longlong **)(*(longlong *)*param_1 + 8 + (longlong)*param_2 * 0x10);
  lVar2 = *plVar9;
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x38) != 0)) {
    lVar8 = *(longlong *)(lVar2 + 0x30);
    lVar2 = lVar8 + (longlong)*(int *)(lVar2 + 0x38) * 8;
    local_88 = plVar9 + 5;
    do {
      FUN_1401533ba(&local_74,lVar8,1);
      local_58 = local_74;
      local_50 = local_6c;
      local_68 = *(undefined8 *)param_1[1];
      local_60 = *(undefined4 *)((undefined8 *)param_1[1] + 1);
      uVar4 = FUN_141871b10(DAT_14cb84f20,&local_68,&local_58);
      if ((uVar4 != 0) &&
         (plVar3 = (longlong *)param_1[2], (int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
        uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        plVar7 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar3[8];
        }
        iVar6 = *(int *)((longlong)plVar7 +
                        (ulonglong)((int)plVar3[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar6 != -1) {
          do {
            puVar1 = (ulonglong *)(*plVar3 + (longlong)iVar6 * 0x18);
            if (*puVar1 == uVar4) {
              if ((puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) &&
                 (plVar3 = (longlong *)puVar1[1], plVar3 != (longlong *)0x0 && plVar3 != plVar9)) {
                iVar6 = (int)plVar9[6];
                *(uint *)(plVar9 + 6) = iVar6 + 1U;
                local_80 = plVar9;
                if (*(uint *)((longlong)plVar9 + 0x34) < iVar6 + 1U) {
                  FUN_141873c2e(local_88,iVar6);
                }
                *(longlong **)(*local_88 + (longlong)iVar6 * 8) = plVar3;
                plVar9 = local_80;
              }
              break;
            }
            iVar6 = (int)puVar1[2];
          } while (iVar6 != -1);
        }
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != lVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cda7c8 FUN_143cda7c8 body=243 status=ok
// SIG undefined FUN_143cda7c8(void)

void FUN_143cda7c8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
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
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143cda8bc FUN_143cda8bc body=1517 status=ok
// SIG undefined FUN_143cda8bc(void)

void FUN_143cda8bc(void **param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  void **ppvVar24;
  undefined4 *puVar25;
  undefined1 auStack_188 [40];
  double local_160;
  void *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined1 local_118 [40];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar20 = FUN_1400edfb0(param_1,param_3,local_118);
  if (iVar20 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_188);
  }
  if (iVar20 == 0) {
    pvVar4 = param_1[9];
    pvVar5 = param_1[7];
    dVar13 = (double)pvVar4 - (double)pvVar5;
    pvVar6 = param_1[8];
    pvVar7 = param_1[6];
    dVar11 = (double)pvVar6 - (double)pvVar7;
    iVar20 = *(int *)(param_1 + 1);
    if (3 < iVar20 &&
        (double)(*(float *)(param_1 + 0xd) * *(float *)(param_1 + 0xd)) <
        dVar11 * dVar11 + dVar13 * dVar13) {
      pvVar8 = param_1[0xb];
      pvVar9 = param_1[0xc];
      dVar12 = dVar13 * 0.5 + (double)pvVar9;
      dVar14 = (double)pvVar8 - dVar11 * 0.5;
      dVar11 = dVar11 * 0.5 + (double)pvVar8;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      uVar3 = *(undefined4 *)(param_1 + 0xd);
      local_160 = (double)pvVar9 + 0.0;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = dVar14;
      puVar21[7] = pvVar9;
      puVar21[8] = (double)pvVar8 + 0.0;
      puVar21[9] = dVar12;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar8 + 0.0 + dVar14) * 0.5;
      puVar21[0xc] = (dVar12 + (double)pvVar9) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      param_1[2] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar8;
      puVar21[7] = pvVar9;
      puVar21[8] = pvVar6;
      puVar21[9] = pvVar4;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar6 + (double)pvVar8) * 0.5;
      puVar21[0xc] = ((double)pvVar4 + (double)pvVar9) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[3] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar7;
      puVar21[7] = pvVar5;
      puVar21[8] = pvVar8;
      puVar21[9] = pvVar9;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = ((double)pvVar7 + (double)pvVar8) * 0.5;
      puVar21[0xc] = ((double)pvVar5 + (double)pvVar9) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[4] = puVar21;
      puVar21 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      dVar13 = (double)pvVar9 - dVar13 * 0.5;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[6] = pvVar8;
      puVar21[7] = dVar13;
      puVar21[8] = dVar11;
      puVar21[9] = local_160;
      *(undefined1 *)(puVar21 + 10) = 1;
      puVar21[0xb] = (dVar11 + (double)pvVar8) * 0.5;
      puVar21[0xc] = (dVar13 + local_160) * 0.5;
      *(undefined4 *)(puVar21 + 0xd) = uVar3;
      *(undefined1 *)((longlong)puVar21 + 0x6c) = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[4] = 0;
      puVar21[5] = 0;
      param_1[5] = puVar21;
      *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
      local_158 = (void *)0x0;
      uStack_150 = 0;
      if ((longlong)*(int *)(param_1 + 1) != 0) {
        puVar25 = *param_1;
        lVar22 = (longlong)*(int *)(param_1 + 1) * 0x30;
        do {
          iVar20 = FUN_1400edfb0(param_1,puVar25,&local_148);
          if (iVar20 == 1) {
            ppvVar24 = (void **)CONCAT44(uStack_144,local_148);
            iVar20 = *(int *)(ppvVar24 + 1);
            *(uint *)(ppvVar24 + 1) = iVar20 + 1U;
            if (*(uint *)((longlong)ppvVar24 + 0xc) < iVar20 + 1U) {
LAB_143cdadb0:
              FUN_14187413e(ppvVar24,iVar20);
            }
          }
          else {
            iVar20 = (int)uStack_150;
            uVar1 = (int)uStack_150 + 1;
            uStack_150 = CONCAT44(uStack_150._4_4_,uVar1);
            if (uStack_150._4_4_ < uVar1) {
              ppvVar24 = &local_158;
              goto LAB_143cdadb0;
            }
            ppvVar24 = &local_158;
          }
          pvVar4 = *ppvVar24;
          lVar23 = (longlong)iVar20 * 0x30;
          uVar3 = *puVar25;
          uVar15 = puVar25[1];
          uVar16 = puVar25[2];
          uVar17 = puVar25[3];
          uVar10 = *(undefined8 *)(puVar25 + 4);
          uVar18 = *(undefined8 *)(puVar25 + 6);
          uVar19 = *(undefined8 *)(puVar25 + 10);
          puVar21 = (undefined8 *)((longlong)pvVar4 + lVar23 + 0x20);
          *puVar21 = *(undefined8 *)(puVar25 + 8);
          puVar21[1] = uVar19;
          puVar21 = (undefined8 *)((longlong)pvVar4 + lVar23 + 0x10);
          *puVar21 = uVar10;
          puVar21[1] = uVar18;
          puVar2 = (undefined4 *)((longlong)pvVar4 + lVar23);
          *puVar2 = uVar3;
          puVar2[1] = uVar15;
          puVar2[2] = uVar16;
          puVar2[3] = uVar17;
          puVar25 = puVar25 + 0xc;
          lVar22 = lVar22 + -0x30;
        } while (lVar22 != 0);
      }
      pvVar4 = local_158;
      if (&local_158 != param_1) {
        iVar20 = (int)uStack_150;
        lVar22 = (longlong)(int)uStack_150;
        *(int *)(param_1 + 1) = (int)uStack_150;
        if ((int)uStack_150 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_143cda7c8(param_1,uStack_150 & 0xffffffff);
          if (iVar20 != 0) {
            memcpy(*param_1,pvVar4,lVar22 * 0x30);
          }
        }
      }
      if (local_158 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_143cda8bc(param_1,param_2,param_3);
    }
    else {
      local_128 = *(undefined8 *)(param_3 + 8);
      local_148 = *param_3;
      uStack_144 = param_3[1];
      uStack_140 = param_3[2];
      uStack_13c = param_3[3];
      local_138 = param_3[4];
      uStack_134 = param_3[5];
      uStack_130 = param_3[6];
      uStack_12c = param_3[7];
      uVar10 = *param_2;
      *(uint *)(param_1 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar20 + 1U) {
        FUN_14187413e(param_1);
      }
      pvVar4 = *param_1;
      lVar22 = (longlong)iVar20 * 0x30;
      *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x20) = local_128;
      puVar21 = (undefined8 *)((longlong)pvVar4 + lVar22 + 0x10);
      *puVar21 = CONCAT44(uStack_134,local_138);
      puVar21[1] = CONCAT44(uStack_12c,uStack_130);
      puVar25 = (undefined4 *)((longlong)pvVar4 + lVar22);
      *puVar25 = local_148;
      puVar25[1] = uStack_144;
      puVar25[2] = uStack_140;
      puVar25[3] = uStack_13c;
      *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x28) = uVar10;
    }
  }
  else {
    local_128 = *(undefined8 *)(param_3 + 8);
    local_148 = *param_3;
    uStack_144 = param_3[1];
    uStack_140 = param_3[2];
    uStack_13c = param_3[3];
    local_138 = param_3[4];
    uStack_134 = param_3[5];
    uStack_130 = param_3[6];
    uStack_12c = param_3[7];
    uVar10 = *param_2;
    iVar20 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar20 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar20 + 1U) {
      FUN_14187413e(param_1,iVar20);
    }
    pvVar4 = *param_1;
    lVar22 = (longlong)iVar20 * 0x30;
    *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x20) = local_128;
    puVar21 = (undefined8 *)((longlong)pvVar4 + lVar22 + 0x10);
    *puVar21 = CONCAT44(uStack_134,local_138);
    puVar21[1] = CONCAT44(uStack_12c,uStack_130);
    puVar25 = (undefined4 *)((longlong)pvVar4 + lVar22);
    *puVar25 = local_148;
    puVar25[1] = uStack_144;
    puVar25[2] = uStack_140;
    puVar25[3] = uStack_13c;
    *(undefined8 *)((longlong)pvVar4 + lVar22 + 0x28) = uVar10;
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cdaf24 FUN_143cdaf24 body=613 status=ok
// SIG undefined FUN_143cdaf24(void)

void FUN_143cdaf24(undefined8 *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  void **ppvVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  longlong local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = (longlong)*param_2;
  plVar2 = (longlong *)param_1[2];
  pvVar3 = *(void **)(*(longlong *)*param_1 + local_b8 * 8);
  local_c8 = 4;
  FUN_144908ca4(*(undefined8 *)param_1[1],&local_80,(longlong)pvVar3 + 8,0x47435000);
  local_98 = (void *)0x0;
  uStack_90 = 0;
  if ((longlong)local_78 == 0) {
    local_a8 = 0;
  }
  else {
    lVar9 = 0;
    local_c0 = param_1;
    do {
      lVar4 = *(longlong *)(local_80 + lVar9);
      if (lVar4 != 0) {
        cVar7 = FUN_143cd662e(pvVar3,lVar4);
        if ((cVar7 == '\0') &&
           (ABS((float)(*(double *)(lVar4 + 0x18) - *(double *)((longlong)pvVar3 + 0x18))) <= 1000.0
           )) {
          iVar1 = *(int *)((longlong)pvVar3 + 0x30);
          *(uint *)((longlong)pvVar3 + 0x30) = iVar1 + 1U;
          if (*(uint *)((longlong)pvVar3 + 0x34) < iVar1 + 1U) {
            FUN_141873c2e((longlong *)((longlong)pvVar3 + 0x28),iVar1);
          }
          uVar6 = uStack_90;
          *(longlong *)(*(longlong *)((longlong)pvVar3 + 0x28) + (longlong)iVar1 * 8) = lVar4;
          lVar5 = *plVar2;
          lVar11 = (longlong)(int)uStack_90;
          uVar8 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
          if (uStack_90._4_4_ < uVar8) {
            FUN_1446f48e2(&local_98,uVar6 & 0xffffffff);
          }
          *(int *)((longlong)local_98 + lVar11 * 4) =
               (int)((ulonglong)(lVar4 - lVar5) >> 3) * -0x49249249;
        }
      }
      _Src = local_98;
      param_1 = local_c0;
      lVar9 = lVar9 + 8;
    } while ((longlong)local_78 * 8 != lVar9);
    lVar9 = (longlong)(int)uStack_90;
    local_b0 = (void *)0x0;
    local_a8 = CONCAT44(local_a8._4_4_,(int)uStack_90);
    if (lVar9 != 0) {
      FUN_144a06ca8(&local_b0,uStack_90 & 0xffffffff,0);
      memcpy(local_b0,_Src,lVar9 << 2);
      goto LAB_143cdb0ca;
    }
  }
  local_b0 = (void *)0x0;
  local_a8 = local_a8 & 0xffffffff;
LAB_143cdb0ca:
  ppvVar10 = (void **)(local_b8 * 0x18 + *(longlong *)param_1[3]);
  local_a0 = pvVar3;
  if (ppvVar10 != &local_b0) {
    if (*ppvVar10 != (void *)0x0) {
      FUN_1400020a8();
    }
    *ppvVar10 = local_b0;
    local_b0 = (void *)0x0;
    *(undefined4 *)(ppvVar10 + 1) = (undefined4)local_a8;
    *(undefined4 *)((longlong)ppvVar10 + 0xc) = local_a8._4_4_;
    local_a8 = 0;
  }
  ppvVar10[2] = local_a0;
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8(local_80);
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cdb1c0 FUN_143cdb1c0 body=29 status=ok
// SIG undefined FUN_143cdb1c0(void)

undefined8 FUN_143cdb1c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cdb1ea FUN_143cdb1ea body=129 status=ok
// SIG undefined FUN_143cdb1ea(void)

void FUN_143cdb1ea(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if ((((DAT_14c963ff1 == '\x01') && (*(int *)(param_1 + 0x14) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (puVar4 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar4 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x14) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
      plVar3 = (longlong *)*puVar4;
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x2f0))(plVar3,uVar2,1);
  }
  FUN_1400020a8(uVar2);
  return;
}



// FUNCTION 143cdb26c FUN_143cdb26c body=29 status=ok
// SIG undefined FUN_143cdb26c(void)

undefined8 FUN_143cdb26c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cdb28a FUN_143cdb28a body=129 status=ok
// SIG undefined FUN_143cdb28a(void)

void FUN_143cdb28a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if ((((DAT_14c963ff1 == '\x01') && (*(int *)(param_1 + 0x14) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (puVar4 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar4 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x14) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
      plVar3 = (longlong *)*puVar4;
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x2f0))(plVar3,uVar2,1);
  }
  FUN_1400020a8(uVar2);
  return;
}



// FUNCTION 143cdb30c FUN_143cdb30c body=29 status=ok
// SIG undefined FUN_143cdb30c(void)

undefined8 FUN_143cdb30c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cdb348 FUN_143cdb348 body=29 status=ok
// SIG undefined FUN_143cdb348(void)

undefined8 FUN_143cdb348(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cdb37a FUN_143cdb37a body=109 status=ok
// SIG undefined FUN_143cdb37a(void)

void FUN_143cdb37a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f25c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143cdb3e8 FUN_143cdb3e8 body=109 status=ok
// SIG undefined FUN_143cdb3e8(void)

void FUN_143cdb3e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f25c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 143cdb456 FUN_143cdb456 body=142 status=ok
// SIG undefined FUN_143cdb456(void)

void FUN_143cdb456(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f25c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cdb4d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cdb4f0 FUN_143cdb4f0 body=23 status=ok
// SIG undefined FUN_143cdb4f0(void)

undefined1 FUN_143cdb4f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143cdb508(param_1 + 0x18,param_3);
  return 1;
}



// FUNCTION 143cdb508 FUN_143cdb508 body=368 status=ok
// SIG undefined FUN_143cdb508(void)

void FUN_143cdb508(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((((*(int *)((longlong)param_1 + 0x24) != 0) &&
       (uVar1 = *(uint *)(param_1 + 4), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x24))) &&
      (lVar2 = *param_1, (*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    if (*(int *)(param_2 + 0x138) != 0) {
      memcpy((void *)(lVar2 + 0x78),*(void **)(param_2 + 0x130),0x100);
      return;
    }
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = 0;
    }
    if ((*(byte *)(lVar5 + 0x555) & 3) == 1) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      memcpy((void *)(lVar2 + 0x78),(void *)(lVar5 + 0x4a8),0x100);
      lVar5 = param_1[3];
      lVar3 = param_1[2];
      *(longlong *)(lVar2 + 0x88) = param_1[1];
      *(longlong *)(lVar2 + 0x90) = lVar3;
      *(longlong *)(lVar2 + 0x98) = lVar5;
      lVar5 = param_1[1];
      lVar3 = param_1[2];
      *(longlong *)(lVar2 + 0xb0) = param_1[3];
      *(longlong *)(lVar2 + 0xa0) = lVar5;
      *(longlong *)(lVar2 + 0xa8) = lVar3;
    }
    else {
      *(undefined8 *)(lVar2 + 0x78) = 0x3f80000000000000;
      memset((void *)(lVar2 + 0x80),0,0x9c);
      *(undefined4 *)(lVar2 + 0x11c) = 0xffffffff;
      *(undefined8 *)(lVar2 + 0x120) = 0;
      *(undefined8 *)(lVar2 + 0x128) = 0;
      *(undefined8 *)(lVar2 + 0x130) = 0;
      *(undefined8 *)(lVar2 + 0x138) = 0;
      *(undefined8 *)(lVar2 + 0x140) = 0;
      *(undefined4 *)(lVar2 + 0x148) = 0xffffffff;
      *(undefined8 *)(lVar2 + 0x14c) = 0;
      *(undefined8 *)(lVar2 + 0x154) = 0;
      *(undefined8 *)(lVar2 + 0x15c) = 0;
      *(undefined8 *)(lVar2 + 0x164) = 0;
      *(undefined8 *)(lVar2 + 0x168) = 0;
      *(undefined8 *)(lVar2 + 0x170) = 0;
    }
  }
  return;
}



// FUNCTION 143cdb678 FUN_143cdb678 body=355 status=ok
// SIG undefined FUN_143cdb678(void)

void FUN_143cdb678(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar4 = *param_3;
    lVar5 = *param_1;
    lVar6 = FUN_140288b94();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      FUN_14589b9aa(*(undefined8 *)(lVar5 + 0x38),param_2);
      uVar1 = *(undefined1 *)param_1[1];
      local_50 = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_48 = lVar4;
      if ((lVar4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(lVar4);
      }
      iVar3 = *(int *)(lVar5 + 0x188);
      *(uint *)(lVar5 + 0x188) = iVar3 + 1U;
      local_40 = uVar1;
      if (*(uint *)(lVar5 + 0x18c) < iVar3 + 1U) {
        FUN_1465488cc((longlong *)(lVar5 + 0x180),iVar3);
      }
      FUN_1487278ea((longlong)iVar3 * 0x18 + *(longlong *)(lVar5 + 0x180),&local_50);
      FUN_14057a3b2(param_2,0,0,0);
      FUN_140e996a4(param_2,*(undefined8 *)param_1[2]);
      bVar2 = *(byte *)param_1[1];
      FUN_140357fa8(param_2,2 - (uint)bVar2,1);
      (**(code **)(*param_2 + 0x490))
                (param_2,*(undefined8 *)param_1[(ulonglong)(bVar2 ^ 1) * 2 + 3],&DAT_14cad8330,
                 *(undefined8 *)param_1[4]);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cdb7dc FUN_143cdb7dc body=78 status=ok
// SIG undefined FUN_143cdb7dc(void)

undefined8 * FUN_143cdb7dc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14b3f2630;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 143cdb830 FUN_143cdb830 body=29 status=ok
// SIG undefined FUN_143cdb830(void)

void FUN_143cdb830(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143cdb84e FUN_143cdb84e body=29 status=ok
// SIG undefined FUN_143cdb84e(void)

undefined8 FUN_143cdb84e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cdb86c FUN_143cdb86c body=77 status=ok
// SIG undefined FUN_143cdb86c(void)

void FUN_143cdb86c(longlong *param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1[2];
  FUN_1487c4cec(*param_1 + 0x28,param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cdb8e0 FUN_143cdb8e0 body=12 status=ok
// SIG undefined FUN_143cdb8e0(void)

void FUN_143cdb8e0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cdb8e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143cdb8ec FUN_143cdb8ec body=29 status=ok
// SIG undefined FUN_143cdb8ec(void)

undefined8 FUN_143cdb8ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cdb90a FUN_143cdb90a body=81 status=ok
// SIG undefined FUN_143cdb90a(void)

void FUN_143cdb90a(longlong *param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(*param_1 + 0x78)) {
    local_10 = param_1[1];
    FUN_14585d70e(*param_1 + 0x30);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cdb97a FUN_143cdb97a body=12 status=ok
// SIG undefined FUN_143cdb97a(void)

void FUN_143cdb97a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cdb983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143cdb986 FUN_143cdb986 body=29 status=ok
// SIG undefined FUN_143cdb986(void)

undefined8 FUN_143cdb986(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cdb9e6 FUN_143cdb9e6 body=12 status=ok
// SIG undefined FUN_143cdb9e6(void)

void FUN_143cdb9e6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cdb9ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143cdb9f2 FUN_143cdb9f2 body=29 status=ok
// SIG undefined FUN_143cdb9f2(void)

undefined8 FUN_143cdb9f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cdba15 FUN_143cdba15 body=10627 status=ok
// SIG undefined FUN_143cdba15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cdba15(void)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 *local_b0;
  char *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = "AssetRegistry";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb73f08 = (ulonglong)uVar4;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_a8,&DAT_14cb73f10);
  if (cVar3 == '\0') {
    _DAT_14cb73f10 = 0;
    uRam000000014cb73f18 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = "nexus";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb73f20 = (ulonglong)uVar4;
  _DAT_14cb73f30 = &LAB_143cd0af0;
  _DAT_14cb73f38 = 0x42de570a;
  DAT_14cb73f3c = 1;
  DAT_14cb73f28 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb73f28;
  atexit((_func_5014 *)&LAB_143cd0af5);
  _DAT_14cb73f50 = &LAB_143cd1e50;
  _DAT_14cb73f58 = 0x42de428f;
  DAT_14cb73f5c = 1;
  DAT_14cb73f48 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb73f48;
  atexit((_func_5014 *)&LAB_143cd1e55);
  _DAT_14cb73f70 = &LAB_143cd1e89;
  _DAT_14cb73f78 = 0x42de51ec;
  DAT_14cb73f7c = 1;
  DAT_14cb73f68 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb73f68;
  atexit((_func_5014 *)&LAB_143cd1e8e);
  ram0x00014cb73f8c = 0;
  FUN_14052b5e0(&DAT_14cb73f88,"balance_table",0);
  _DAT_14cb73f98 = "balance_table";
  ram0x00014cb73fa4 = 0;
  FUN_14052b5e0(&DAT_14cb73fa0,"balance_table_row",0);
  _DAT_14cb73fb0 = "balance_table_row";
  local_a8 = "balance_table_col";
  uStack_a0 = 0x11;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb73fb8 = (ulonglong)uVar4;
  local_a8 = "table_row_struct";
  uStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb73fc0 = (ulonglong)uVar4;
  local_a8 = "type";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb73fc8 = (ulonglong)uVar4;
  FUN_1462a3428(&DAT_14cb74028,&LAB_143cd2542,"breadcrumb",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143cd2547);
  plVar5 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar5,iVar1);
  }
  *(char **)(*plVar5 + (longlong)iVar1 * 8) = "breadcrumb";
  DAT_14cb74058 = 0;
  atexit((_func_5014 *)&LAB_143cd257b);
  local_a8._0_4_ = 0x42480000;
  local_b8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14cb740e0,L"gbx.player.breadcrumb_find_best_node_z_factor_weight",&local_a8,
                L"Echoloc: We prefert to find a node that is not too high");
  atexit(FUN_143cd2593);
  DAT_14cb740f8 = 0;
  local_a8 = (char *)CONCAT44(local_a8._4_4_,0x3f000000);
  local_b8 = (char **)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_140a6b41e(&DAT_14cb74100,L"gbx.player.BreadcrumbRoadNodeWeight",&local_a8,&DAT_149dfb77a);
  atexit(FUN_143cd63ad);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_1487ffd24;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74120,"absolute_offset",FUN_1487ffd2a,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6694);
  local_a8 = "loc";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb741a0 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_1487ffed2;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb741b0,"anchor_offset",FUN_1487ffed8,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd66a0);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_1488000e0;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74230,"anchor_to_eye",FUN_1488000e6,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd66ac);
  local_a8 = "rot";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb742b0 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_14880019e;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb742c0,"anchor_to_socket",FUN_1488001a4,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd66ed);
  ram0x00014cb74344 = 0;
  FUN_14052b5e0(&DAT_14cb74340,&DAT_14a17fbc2,0);
  _DAT_14cb74350 = &DAT_14a17fbc2;
  ram0x00014cb7435c = 0;
  FUN_14052b5e0(&DAT_14cb74358,&DAT_14b3f0cf2,0);
  _DAT_14cb74368 = &DAT_14b3f0cf2;
  ram0x00014cb74374 = 0;
  FUN_14052b5e0(&DAT_14cb74370,"socket",0);
  _DAT_14cb74380 = "socket";
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148800394;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74390,"blend_to_fov",FUN_14880039a,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd680f);
  local_a8 = "fov_curve";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74410 = (ulonglong)uVar4;
  local_a8 = "add_modifier_to_base_fov";
  uStack_a0 = 0x18;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74418 = (ulonglong)uVar4;
  local_a8 = "fov_modifier";
  uStack_a0 = 0xc;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74420 = (ulonglong)uVar4;
  local_a8 = "max_fov";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74428 = (ulonglong)uVar4;
  local_a8 = "blend_in_delay";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74430 = (ulonglong)uVar4;
  local_a8 = "blend_in_time";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74438 = (ulonglong)uVar4;
  local_a8 = "blend_out_time";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74440 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_1488007f8;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74450,"blueprint",FUN_1488007fe,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd681b);
  local_a8 = "blueprint_class";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb744d0 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148800c1a;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb744e0,"collision_offset_trace",FUN_148800c20,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6827);
  local_a8 = "radius";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74560 = (ulonglong)uVar4;
  local_a8 = "start_at_anchor";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74568 = (ulonglong)uVar4;
  local_a8 = "ignore_children";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74570 = (ulonglong)uVar4;
  local_a8 = "ignore_parents";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74578 = (ulonglong)uVar4;
  local_a8 = "CollisionOffsetTrace";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb74580 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148800d7a;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74590,"continuous_collision_trace",FUN_148800d80,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6833);
  local_a8 = "ContinuousCollisionTrace";
  uStack_a0 = 0x18;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb74610 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148800dd0;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74620,"default_fov",FUN_148800dd6,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd683f);
  local_a8 = "scale";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb746a0 = (ulonglong)uVar4;
  local_a8 = "max_fov";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb746a8 = (ulonglong)uVar4;
  local_a8 = "cameramode_dof_a";
  uStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb746b0 = (ulonglong)uVar4;
  local_a8 = "cameramode_dof_b";
  uStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb746b8 = (ulonglong)uVar4;
  local_a8 = "cameramode_dof_c";
  uStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb746c0 = (ulonglong)uVar4;
  local_a8 = "cameramode_dof_d";
  uStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb746c8 = (ulonglong)uVar4;
  local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb746d0,L"FocusDOF.Disabled",&local_a8,L"Disables focus DOF.\n");
  atexit(FUN_143cd684b);
  local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb746e8,L"FocusDOF.ForegroundDOFDisabled",&local_a8,
                L"Disables foreground DOF.\n");
  atexit(FUN_143cd6890);
  local_a8._0_4_ = 0x40200000;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cb74700,L"FocusDOF.ForegroundDOFDisabledDistance",&local_a8,
                L"Disables foreground DOF for focus distance is less than this value.\n");
  atexit(FUN_143cd68d5);
  local_a8._0_4_ = 0;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb74718,L"ZoomFocus.VignetteDisabled",&local_a8,
                L"Disables zoom focus blur and color vignette settings.\n");
  atexit(FUN_143cd691a);
  local_a8._0_4_ = 0xbf800000;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cb74730,L"ZoomFocus.ColorVignetteSize",&local_a8,
                L"Overrides the weapon\'s color vignette size.(Disabled if less than zero)\n");
  atexit(FUN_143cd695f);
  local_a8._0_4_ = 0x3f800000;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cb74748,L"ZoomFocus.StartColorVignetteSize",&local_a8,
                L"Overrides the weapon\'s start color vignette size.(Disabled if greater than zero)\n"
               );
  atexit(FUN_143cd69a4);
  local_a8._0_4_ = 0;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cb74760,L"ZoomFocus.ColorVignetteSharpness",&local_a8,
                L"Overrides the weapon\'s color vignette sharpness.(Disabled if zero)\n");
  atexit(FUN_143cd69e9);
  local_a8._0_4_ = 0x3f800000;
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cb74778,L"r.gbx.DepthOfField.MaterialForeground.FocusPointScale",&local_a8,
                L"Set the scale to use for scaling the focus point distance when using Material Foreground. This needs to be the same depth scale defined in the foreground fix material.\n"
               );
  atexit(FUN_143cd6a2e);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,0x3f800000);
  local_b8 = (char **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cb74790,L"r.gbx.DepthOfField.MaterialForeground.UnzoomedFocusPointScale",
                &local_a8,
                L"Set the scale to use for scaling the focus point distance when using Material Foreground. This value scales the focus point when not zoomed applied.\n"
               );
  atexit(FUN_143cd6a73);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148800ebe;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb747b0,&DAT_14b3f164e,FUN_148800ec4,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6ab8);
  local_a8 = "fov";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74830 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148800f84;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74840,"freeze",FUN_148800f8a,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6ac4);
  _DAT_14cb748c0 = 0x47efffffe0000000;
  _DAT_14cb748c8 = 0x47efffffe0000000;
  _DAT_14cb748d0 = 0x47efffffe0000000;
  _DAT_14cb748d8 = 0x47efffffe0000000;
  _DAT_14cb748e0 = 0x47efffffe0000000;
  _DAT_14cb748e8 = 0x47efffffe0000000;
  _DAT_14cb748f0 = 0x47efffffe0000000;
  _DAT_14cb748f8 = 0x47efffffe0000000;
  local_a8 = "bone";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801016;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74900,"gbx_swimming",FUN_14880101c,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6c41);
  local_a8 = "scale";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74980 = (ulonglong)uVar4;
  local_a8 = "gamma";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74988 = (ulonglong)uVar4;
  local_a8 = "cameramode_swimming";
  uStack_a0 = 0x13;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74990 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801180;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb749a0,"initial_rotation",FUN_148801186,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6e26);
  local_a8 = "enabled";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a20 = (ulonglong)uVar4;
  local_a8 = "min";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a28 = (ulonglong)uVar4;
  local_a8 = "max";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a30 = (ulonglong)uVar4;
  local_a8 = "relative";
  uStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a38 = (ulonglong)uVar4;
  local_a8 = "lerp";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a40 = (ulonglong)uVar4;
  local_a8 = "speed";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a48 = (ulonglong)uVar4;
  local_a8 = "delay";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a50 = (ulonglong)uVar4;
  local_a8 = "input_interrupts";
  uStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a58 = (ulonglong)uVar4;
  local_a8 = "disable_input";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a60 = (ulonglong)uVar4;
  local_a8 = "pitch";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a68 = (ulonglong)uVar4;
  local_a8 = "yaw";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74a70 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_14880146e;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74a80,"interp_crouch",FUN_148801474,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6e46);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_1488014a8;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74b00,"limit_pitch",FUN_1488014ae,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6e52);
  local_a8 = "min";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74b80 = (ulonglong)uVar4;
  local_a8 = "max";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74b88 = (ulonglong)uVar4;
  local_a8 = "init";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74b90 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801616;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74ba0,&DAT_14b3f1758,FUN_14880161c,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd6e5e);
  DAT_14cb74c20._4_4_ = 0;
  DAT_14cb74c28 = 0;
  FUN_14052b5e0(&DAT_14cb74c20,"up_axis",0);
  _DAT_14cb74c30 = "up_axis";
  DAT_14cb74c38._4_4_ = 0;
  DAT_14cb74c40 = 0;
  FUN_14052b5e0(&DAT_14cb74c38,&DAT_14b3f17e0,0);
  _DAT_14cb74c48 = &DAT_14b3f17e0;
  DAT_14cb74c50._4_4_ = 0;
  DAT_14cb74c58 = 0;
  FUN_14052b5e0(&DAT_14cb74c50,&DAT_14b3f17e5,0);
  _DAT_14cb74c60 = &DAT_14b3f17e5;
  DAT_14cb74c68._4_4_ = 0;
  DAT_14cb74c70 = 0;
  FUN_14052b5e0(&DAT_14cb74c68,"feather_func",0);
  _DAT_14cb74c78 = "feather_func";
  local_a8 = "scale";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74c80 = (ulonglong)uVar4;
  local_a8 = "limit";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74c88 = (ulonglong)uVar4;
  local_a8 = "min";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74c90 = (ulonglong)uVar4;
  local_a8 = "max";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74c98 = (ulonglong)uVar4;
  local_a8 = "feather";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74ca0 = (ulonglong)uVar4;
  local_a8 = "feather_scale";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74ca8 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_14880181e;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74cb0,"offset_crosshair",FUN_148801824,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd745f);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801894;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74d30,"offset_to_socket",FUN_14880189a,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd74e3);
  local_a8 = "loc";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74db0 = (ulonglong)uVar4;
  local_a8 = "rot";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74db8 = (ulonglong)uVar4;
  local_a8 = "socket";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74dc0 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801a20;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74dd0,"pitch_fov",FUN_148801a26,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd74ef);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801b2a;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74e50,"relative_offset",FUN_148801b30,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd74fb);
  local_a8 = "loc";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74ed0 = (ulonglong)uVar4;
  local_a8 = "rot";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74ed8 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801cfe;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74ee0,"restore_rotation",FUN_148801d04,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd7593);
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801d94;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb74f60,"sprint_fov",FUN_148801d9a,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd759f);
  local_a8 = "fov_modifier";
  uStack_a0 = 0xc;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74fe0 = (ulonglong)uVar4;
  local_a8 = "blend_in_delay";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74fe8 = (ulonglong)uVar4;
  local_a8 = "blend_in_duration";
  uStack_a0 = 0x11;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74ff0 = (ulonglong)uVar4;
  local_a8 = "blend_out_duration";
  uStack_a0 = 0x12;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb74ff8 = (ulonglong)uVar4;
  local_a8 = "blend_curve";
  uStack_a0 = 0xb;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75000 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148801f94;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb75010,"viewmodel_fov",FUN_148801f9a,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd75ab);
  local_a8 = "fov";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75090 = (ulonglong)uVar4;
  local_a8 = "interp_duration";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75098 = (ulonglong)uVar4;
  local_a8 = "foreground";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb750a0 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_1488020c8;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb750b0,"viewmodel_offset",FUN_1488020ce,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd76ad);
  local_a8 = "loc";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75130 = (ulonglong)uVar4;
  local_a8 = "rot";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75138 = (ulonglong)uVar4;
  local_a8 = "ss_loc";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75140 = (ulonglong)uVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14b3f27a0;
  local_80 = &LAB_148802358;
  local_a8 = &DAT_14880dc9c;
  local_b0 = (undefined1 *)0x0;
  local_b8 = &local_a8;
  FUN_1411f26b0(&DAT_14cb75150,"zoom_fov",FUN_14880235e,0xffffffff);
  atexit((_func_5014 *)&LAB_143cd76b9);
  local_a8 = "pre_view_target";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75230 = (ulonglong)uVar4;
  _DAT_14cb75238 = 0;
  uRam000000014cb75240 = 0;
  _DAT_14cb75248 = 0;
  DAT_14cb75250 = 0;
  uRam000000014cb75258 = 0;
  FUN_1446ddda2(&DAT_14cb75238,"behavior_class",0);
  atexit((_func_5014 *)&LAB_143cd76ee);
  _DAT_14cb75260 = 0;
  uRam000000014cb75268 = 0;
  _DAT_14cb75270 = 0;
  DAT_14cb75278 = 0;
  uRam000000014cb75280 = 0;
  FUN_1446ddda2(&DAT_14cb75260,"behavior_params",0);
  atexit((_func_5014 *)&LAB_143cd76ff);
  _DAT_14cb75288 = 0;
  uRam000000014cb75290 = 0;
  _DAT_14cb75298 = 0;
  DAT_14cb752a0 = 0;
  uRam000000014cb752a8 = 0;
  FUN_1446ddda2(&DAT_14cb75288,"StructType",0);
  atexit((_func_5014 *)&LAB_143cd7710);
  _DAT_14cb752b0 = 0;
  uRam000000014cb752b8 = 0;
  _DAT_14cb752c0 = 0;
  DAT_14cb752c8 = 0;
  uRam000000014cb752d0 = 0;
  FUN_1446ddda2(&DAT_14cb752b0,"Parent",0);
  atexit((_func_5014 *)&LAB_143cd7721);
  DAT_14cb75348 = 0;
  _DAT_14cb75350 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143cdb1de;
  local_a8 = &DAT_14011fc1e;
  FUN_14617ec2e(&local_a8);
  atexit((_func_5014 *)&LAB_143cd775b);
  local_a8 = "blend_in_time";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb753e0 = (ulonglong)uVar4;
  local_a8 = "blend_out";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb753e8 = (ulonglong)uVar4;
  local_a8 = "1st";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb753f0 = (ulonglong)uVar4;
  local_a8 = "show_view_model";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb753f8 = (ulonglong)uVar4;
  local_a8 = "allow_inv_pitch";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75400 = (ulonglong)uVar4;
  local_a8 = "disable_auto_persp";
  uStack_a0 = 0x12;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75408 = (ulonglong)uVar4;
  local_a8 = "reset_roll";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75410 = (ulonglong)uVar4;
  local_a8 = "allow_clip";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75418 = (ulonglong)uVar4;
  local_a8 = "interrupt_on_clip";
  uStack_a0 = 0x11;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75420 = (ulonglong)uVar4;
  local_a8 = "disable_sep_trans";
  uStack_a0 = 0x11;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75428 = (ulonglong)uVar4;
  local_a8 = "rot_method";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75430 = (ulonglong)uVar4;
  local_a8 = "behaviors";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75438 = (ulonglong)uVar4;
  _DAT_14cb75440 = 0;
  uRam000000014cb75448 = 0;
  _DAT_14cb75450 = 0;
  DAT_14cb75458 = 0;
  uRam000000014cb75460 = 0;
  FUN_1446ddda2(&DAT_14cb75440,"StructType");
  atexit((_func_5014 *)&LAB_143cd7760);
  _DAT_14cb75468 = 0;
  uRam000000014cb75470 = 0;
  _DAT_14cb75478 = 0;
  DAT_14cb75480 = 0;
  uRam000000014cb75488 = 0;
  FUN_1446ddda2(&DAT_14cb75468,"Parent");
  atexit((_func_5014 *)&LAB_143cd7771);
  DAT_14cb75508 = 0;
  _DAT_14cb75510 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143cdb1e4;
  local_a8 = &DAT_14011fc1e;
  FUN_14617f32a(&local_a8);
  atexit((_func_5014 *)&LAB_143cd77ab);
  local_a8 = "blend_time";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75600 = (ulonglong)uVar4;
  _DAT_14cb75608 = 0;
  uRam000000014cb75610 = 0;
  _DAT_14cb75618 = 0;
  DAT_14cb75620 = 0;
  uRam000000014cb75628 = 0;
  FUN_1446ddda2(&DAT_14cb75608,"StructType");
  atexit((_func_5014 *)&LAB_143cd77d9);
  _DAT_14cb75630 = 0;
  uRam000000014cb75638 = 0;
  _DAT_14cb75640 = 0;
  DAT_14cb75648 = 0;
  uRam000000014cb75650 = 0;
  FUN_1446ddda2(&DAT_14cb75630,"Parent");
  atexit((_func_5014 *)&LAB_143cd77ea);
  DAT_14cb75658._4_4_ = 0;
  DAT_14cb75660 = 0;
  FUN_14052b5e0(&DAT_14cb75658,"camera_behavior",0);
  _DAT_14cb75668 = "camera_behavior";
  DAT_14cb75670._4_4_ = 0;
  DAT_14cb75678 = 0;
  FUN_14052b5e0(&DAT_14cb75670,"behavior_class",0);
  _DAT_14cb75680 = "behavior_class";
  DAT_14cb75490._4_4_ = 0;
  DAT_14cb75498 = 0;
  FUN_14052b5e0(&DAT_14cb75490,"behavior_params",0);
  _DAT_14cb754a0 = "behavior_params";
  DAT_14cb75688._4_4_ = 0;
  DAT_14cb75690 = 0;
  FUN_14052b5e0(&DAT_14cb75688,"camera_transition",0);
  _DAT_14cb75698 = "camera_transition";
  DAT_14cb756a0._4_4_ = 0;
  DAT_14cb756a8 = 0;
  FUN_14052b5e0(&DAT_14cb756a0,"transition_class",0);
  _DAT_14cb756b0 = "transition_class";
  _DAT_14cb756bc = 0;
  _DAT_14cb756c0 = 0;
  FUN_14052b5e0(&DAT_14cb756b8,"transition_params",0);
  _DAT_14cb756c8 = "transition_params";
  _DAT_14cb756d8 = &LAB_143cd77fb;
  _DAT_14cb756e0 = 0x444fc000;
  DAT_14cb756e4 = 1;
  DAT_14cb756d0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb756d0;
  atexit((_func_5014 *)&LAB_143cd7800);
  _DAT_14cb756f8 = &LAB_143cd7834;
  _DAT_14cb75700 = 0x44500000;
  DAT_14cb75704 = 1;
  DAT_14cb756f0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb756f0;
  atexit((_func_5014 *)&LAB_143cd7839);
  _DAT_14cb75718 = &LAB_143cd786d;
  _DAT_14cb75720 = 0x44504000;
  DAT_14cb75724 = 1;
  DAT_14cb75710 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb75710;
  atexit((_func_5014 *)&LAB_143cd7872);
  _DAT_14cb75738 = &LAB_143cd78a6;
  _DAT_14cb75740 = 0x444f8000;
  DAT_14cb75744 = 1;
  DAT_14cb75730 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb75730;
  atexit((_func_5014 *)&LAB_143cd78ab);
  local_a8 = "UpscalingMethod";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75750 = (ulonglong)uVar4;
  local_a8 = "FrameGeneration";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75758 = (ulonglong)uVar4;
  local_a8 = "Upscaling";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75760 = (ulonglong)uVar4;
  local_a8 = "AntiAliasingMethod";
  uStack_a0 = 0x12;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75768 = (ulonglong)uVar4;
  local_a8 = "WindowsTextureLODGroups";
  uStack_a0 = 0x17;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75770 = (ulonglong)uVar4;
  local_a8 = "Textures";
  uStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75778 = (ulonglong)uVar4;
  local_a8 = "1st";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb75780 = (ulonglong)uVar4;
  local_a8 = "First";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb75788 = (ulonglong)uVar4;
  local_a8 = "FirstPerson";
  uStack_a0 = 0xb;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb75790 = (ulonglong)uVar4;
  local_a8 = "3rd";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb75798 = (ulonglong)uVar4;
  local_a8 = "Third";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb757a0 = (ulonglong)uVar4;
  local_a8 = "ThirdPerson";
  uStack_a0 = 0xb;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb757a8 = (ulonglong)uVar4;
  DAT_14cb75810 = (undefined8 *)0x0;
  _DAT_14cb75818 = 0;
  puVar6 = (undefined8 *)FUN_140595974(0x1200,0);
  lVar8 = 0x3f;
  puVar2 = puVar6;
  do {
    puVar7 = puVar2 + 9;
    *puVar2 = puVar7;
    lVar8 = lVar8 + -1;
    puVar2 = puVar7;
  } while (lVar8 != 0);
  _DAT_14cb75818 = _DAT_14cb75818 + 0x40;
  *puVar7 = DAT_14cb75810;
  DAT_14cb75810 = puVar6;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143cdb32a;
  local_a8 = &DAT_14011fc1e;
  FUN_1460e94f6(&local_a8);
  atexit((_func_5014 *)&LAB_143cd944f);
  _DAT_14cb758a8 = &LAB_143cd9454;
  _DAT_14cb758b0 = 0x4426aaa0;
  DAT_14cb758b4 = 1;
  DAT_14cb758a0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb758a0;
  atexit((_func_5014 *)&LAB_143cd9459);
  FUN_1446f470e(&DAT_14cb758c0,L"BLUEPRINT",1);
  DAT_14cb75928 = 0;
  _DAT_14cb75930 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143cdb330;
  local_a8 = &DAT_14011fc1e;
  FUN_14617fa26(&local_a8);
  atexit((_func_5014 *)&LAB_143cd94b6);
  DAT_14cb75a20 = 0;
  _DAT_14cb75a28 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143cdb336;
  local_a8 = &DAT_14011fc1e;
  FUN_146180122(&local_a8);
  atexit((_func_5014 *)&LAB_143cd94e4);
  DAT_14cb75b10 = 0;
  _DAT_14cb75b18 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143cdb33c;
  local_a8 = &DAT_14011fc1e;
  local_b0 = &DAT_149e02088;
  local_b8 = &local_a8;
  FUN_145ff5b36(&DAT_14cb75b20,"GbxCharacterMovement",FUN_14585cb86,0);
  atexit((_func_5014 *)&LAB_143cd9512);
  FUN_1458e052c(&DAT_14cb75f30);
  _DAT_14cb75f30 = &PTR_FUN_14b3f2138;
  _DAT_14cb75f38 = 0;
  DAT_14cb75f40 = 0;
  _DAT_14cb75ba8 = &LAB_143cd951e;
  _DAT_14cb75bb0 = 0x461e2000;
  DAT_14cb75bb4 = 1;
  DAT_14cb75ba0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb75ba0;
  atexit((_func_5014 *)&LAB_143cd9523);
  DAT_14cb75c20 = 0;
  _DAT_14cb75c28 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143cdb342;
  local_a8 = &DAT_14011fc1e;
  FUN_14618081e(&local_a8);
  atexit((_func_5014 *)&LAB_143cd9580);
  DAT_14cb75cb0 = 0;
  atexit((_func_5014 *)&LAB_143cd9585);
  FUN_140056680(&DAT_14cb75cf8,L"GbxCharacterSliding");
  atexit((_func_5014 *)&LAB_143cd959d);
  _DAT_14cb75d10 = &LAB_143cd95ae;
  _DAT_14cb75d18 = 0x461dd000;
  DAT_14cb75d1c = 1;
  DAT_14cb75d08 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb75d08;
  atexit((_func_5014 *)&LAB_143cd95b3);
  _DAT_14cb75d30 = &LAB_143cd95e7;
  _DAT_14cb75d38 = 0x461dd400;
  DAT_14cb75d3c = 1;
  DAT_14cb75d28 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb75d28;
  atexit((_func_5014 *)&LAB_143cd95ec);
  _DAT_14cb75d50 = &LAB_143cd9620;
  _DAT_14cb75d58 = 0x444d0000;
  DAT_14cb75d5c = 1;
  DAT_14cb75d48 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb75d48;
  atexit((_func_5014 *)&LAB_143cd9625);
  FUN_1446f470e(&DAT_14cb75f48,L"CinematicMode",1);
  _DAT_14cb75d70 = &LAB_143cd9a0e;
  _DAT_14cb75d78 = 0x432e0000;
  DAT_14cb75d7c = 1;
  DAT_14cb75d68 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb75d68;
  atexit((_func_5014 *)&LAB_143cd9a13);
  _DAT_14cb75d90 = &LAB_143cd9a47;
  _DAT_14cb75d98 = 0x444d8000;
  DAT_14cb75d9c = 1;
  DAT_14cb75d88 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb75d88;
  atexit((_func_5014 *)&LAB_143cd9a4c);
  DAT_14cb75e08 = 0;
  _DAT_14cb75e10 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143cdba10;
  local_a8 = &DAT_14011fc1e;
  local_b0 = &DAT_149e02088;
  local_b8 = &local_a8;
  FUN_145ff61e6(&DAT_14cb75e20,"ClimbableInteract",FUN_1488047f6,0);
  atexit((_func_5014 *)&LAB_143cd9aa9);
  local_a8 = "climbable_interact";
  uStack_a0 = 0x12;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75ea0 = (ulonglong)uVar4;
  local_a8 = "SMInstance";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75ea8 = (ulonglong)uVar4;
  local_a8 = (char *)0x513b43fded79520b;
  uStack_a0 = 0x84faf34d;
  uStack_9c = 0xdbab6e34;
  _DAT_14cb75eb0 = 0xed79520b;
  uRam000000014cb75eb4 = 0x513b43fd;
  uRam000000014cb75eb8 = 0x84faf34d;
  uRam000000014cb75ebc = 0xdbab6e34;
  FUN_141005458(&local_a8,3,L"ClimbableInteractiveObject",0);
  atexit((_func_5014 *)&LAB_143cd9ab5);
  DAT_14cb75ed8 = 0;
  DAT_14cb75ee0 = 0;
  atexit(FUN_143cd9fa4);
  FUN_1446f470e(&DAT_14cb75ec0,L"ClimbableHidden",1);
  local_a8 = "ladder";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75ee8 = (ulonglong)uVar4;
  local_a8 = "PositiveDirectionArrowComponent";
  uStack_a0 = 0x1f;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75ef0 = (ulonglong)uVar4;
  local_a8 = "NegativeDirectionArrowComponent";
  uStack_a0 = 0x1f;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75ef8 = (ulonglong)uVar4;
  local_a8 = "HorizontalLeftDirectionArrowComponent";
  uStack_a0 = 0x25;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75f00 = (ulonglong)uVar4;
  local_a8 = "HorizontalRightDirectionArrowComponent";
  uStack_a0 = 0x26;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75f08 = (ulonglong)uVar4;
  local_a8 = "NormalArrowComponent";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb75f10 = (ulonglong)uVar4;
  FUN_1446f470e(&DAT_14cb75f24,L"Climbing",1);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cde39c FUN_143cde39c body=750 status=ok
// SIG undefined FUN_143cde39c(void)

void FUN_143cde39c(longlong *param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_88 = CONCAT44(local_88._4_4_,param_2);
    uVar8 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar8,&local_88);
    if (DAT_14c761388 != 0) {
      lVar10 = param_1[0x16];
      if (lVar10 == 0) {
        lVar10 = FUN_1448abda6(param_1);
        if (lVar10 == 0) goto LAB_143cde3e6;
      }
      uVar8 = FUN_14119d0a4(lVar10);
      FUN_140e65914(uVar8,param_1,*(undefined4 *)(lVar10 + 0x6f4));
    }
  }
LAB_143cde3e6:
  local_88 = 0;
  uStack_80 = 0;
  uVar12 = (ulonglong)(int)param_1[0xee];
  if (0 < (longlong)uVar12) {
    iVar9 = -(int)param_1[0xee];
    lVar10 = uVar12 * 0xc;
    do {
      uVar3 = uStack_80;
      lVar6 = param_1[0xed];
      fVar14 = *(float *)(lVar6 + -4 + lVar10) - param_2;
      fVar13 = 0.0;
      if (0.0 <= fVar14) {
        fVar13 = fVar14;
      }
      *(float *)(lVar6 + -4 + lVar10) = fVar13;
      iVar1 = *(int *)(lVar6 + -8 + lVar10);
      if ((iVar1 == 0) || (uVar4 = *(uint *)(lVar6 + -0xc + lVar10), (int)uVar4 < 0)) {
LAB_143cde4c9:
        uVar8 = 0;
LAB_143cde4cb:
        lVar6 = (longlong)(int)uStack_80;
        uVar4 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
        if (uStack_80._4_4_ < uVar4) {
          FUN_1447d05f2(&local_88,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_88 + lVar6 * 8) = uVar8;
        uVar4 = *(uint *)(param_1 + 0xee);
        if (uVar12 != uVar4) {
          memmove((void *)(param_1[0xed] + lVar10 + -0xc),(void *)(param_1[0xed] + lVar10),
                  (longlong)(int)(uVar4 + iVar9) * 0xc);
          uVar4 = *(uint *)(param_1 + 0xee);
        }
        *(uint *)(param_1 + 0xee) = uVar4 - 1;
        FUN_1459502fa(param_1 + 0xed);
      }
      else {
        uVar8 = 0;
        if (DAT_14c9647dc <= (int)uVar4) goto LAB_143cde4cb;
        lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        if ((((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != iVar1)) ||
            ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) || ((fVar13 == 0.0 && (!NAN(fVar13))))) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((puVar7 == (undefined8 *)0x0) ||
             ((*(int *)(puVar7 + 2) != iVar1 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
          goto LAB_143cde4c9;
          uVar8 = *puVar7;
          goto LAB_143cde4cb;
        }
      }
      lVar6 = local_88;
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + -0xc;
      bVar2 = 1 < uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar2);
    lVar10 = (longlong)(int)uStack_80;
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        FUN_146548a12(param_1,*(undefined8 *)(lVar6 + lVar11));
        lVar11 = lVar11 + 8;
      } while (lVar10 * 8 != lVar11);
    }
    if (0 < (int)param_1[0xee]) goto LAB_143cde590;
  }
  pbVar5 = (byte *)param_1[0xc];
  if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 1) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x4b) = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x4b) != '\0') {
      uVar8 = *(undefined8 *)(pbVar5 + 0x28);
      FUN_1402eb48e(uVar8,param_1 + 8);
      *(undefined1 *)((longlong)param_1 + 0x4b) = 0;
      FUN_1402eb97e(uVar8,param_1 + 8);
      if (*(char *)((longlong)param_1 + 0x4b) != '\0') goto LAB_143cde590;
      pbVar5 = (byte *)param_1[0xc];
    }
    pbVar5[0x24] = 0;
    pbVar5[0x25] = 0;
    pbVar5[0x26] = 0x80;
    pbVar5[0x27] = 0xbf;
  }
LAB_143cde590:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cde6b6 FUN_143cde6b6 body=207 status=ok
// SIG undefined FUN_143cde6b6(void)

void FUN_143cde6b6(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = *(double *)(param_1 + 0x128);
  dVar1 = *(double *)(param_1 + 0x130);
  dVar5 = dVar4 * dVar4 + dVar1 * dVar1;
  if (((dVar5 != 1.0) || (dVar2 = dVar4, dVar3 = dVar1, NAN(dVar5))) &&
     (dVar2 = DAT_14c8464e0, dVar3 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar5)) {
    dVar2 = dVar4 * (1.0 / SQRT(dVar5));
    dVar3 = dVar1 * (1.0 / SQRT(dVar5));
  }
  dVar4 = (double)(*(float *)(*(longlong *)(param_1 + 0x3b60) + 0x108) * (float)SQRT(dVar5));
  *(double *)(param_1 + 0x128) = dVar2 * dVar4;
  *(double *)(param_1 + 0x130) = dVar3 * dVar4;
  *(double *)(param_1 + 0x138) = (double)(float)*(double *)(param_1 + 0x138);
  return;
}



// FUNCTION 143cde786 FUN_143cde786 body=1202 status=ok
// SIG undefined FUN_143cde786(void)

undefined4 FUN_143cde786(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  double dVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_68 [32];
  float local_48;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = (**(code **)(*param_1 + 0xd00))();
  if (cVar4 == '\0') {
LAB_143cdea70:
    uVar12 = 0;
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0xd68))(param_1,param_2);
    if (cVar4 == '\0') {
      if ((param_1[0x3e] != 0) && (cVar4 = FUN_140553fce(), cVar4 != '\0')) {
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0xe00))(param_1);
        FUN_140c07c00(param_1,*puVar5);
        lVar7 = param_1[0x57e];
        if (lVar7 == 0) {
          uVar6 = FUN_140aed8fc();
          lVar7 = FUN_14477b664(uVar6);
          param_1[0x57e] = lVar7;
        }
        plVar11 = param_1 + 0x57d;
        lVar8 = param_1[0x57f];
        if (lVar8 != 0) {
LAB_143cde83d:
          if (lVar7 == 0) {
            uVar6 = FUN_140aed8fc(lVar8);
            lVar7 = FUN_14477b664(uVar6);
            param_1[0x57e] = lVar7;
            lVar8 = param_1[0x57f];
            if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar11 != 0)) {
              plVar2 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 == '\0')) {
                lVar8 = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar8 = FUN_144aff482(uVar6,plVar11);
              }
              param_1[0x57f] = lVar8;
            }
          }
          FUN_140beced4(lVar8,param_1,local_44,&local_48);
          param_1[0x27] = (longlong)(double)local_48;
          FUN_140d735ec();
          goto LAB_143cde958;
        }
        if ((lVar7 != 0) && (*plVar11 != 0)) {
          plVar2 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            param_1[0x57f] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar8 = FUN_144aff482(uVar6,plVar11);
            param_1[0x57f] = lVar8;
            if (lVar8 != 0) {
              lVar7 = param_1[0x57e];
              goto LAB_143cde83d;
            }
          }
        }
      }
      cVar4 = FUN_1479c1df2(param_1,param_2,param_3);
      if (cVar4 == '\0') {
        if ((int)param_1[0x576] != 0) {
          *(undefined4 *)(param_1 + 0x576) = 0;
          uVar3 = param_1[7];
          if (uVar3 < 0xffffffff00000000) {
            plVar11 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              plVar11 = (longlong *)0x0;
            }
            (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,10);
          }
          else {
            uVar13 = (uint)uVar3;
            if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
              puVar9 = &DAT_14c998070;
              if (DAT_14c998080 != (undefined *)0x0) {
                puVar9 = DAT_14c998080;
              }
              if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0
                 ) {
                lVar7 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
                puVar10 = *(uint **)(lVar7 + 0x18);
                if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
                  puVar10 = (uint *)(lVar7 + 8);
                }
                *puVar10 = *puVar10 | 0x400;
                *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
              }
            }
          }
        }
        *(undefined4 *)(param_1 + 0x57b) = 0xbf800000;
        goto LAB_143cdea70;
      }
    }
LAB_143cde958:
    *(int *)(param_1 + 0x576) = (int)param_1[0x576] + 1;
    uVar3 = param_1[7];
    if (uVar3 < 0xffffffff00000000) {
      plVar11 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar11 = (longlong *)0x0;
      }
      (**(code **)(*plVar11 + 0x58))(plVar11,param_1,uVar3,10);
    }
    else {
      uVar13 = (uint)uVar3;
      if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
        puVar9 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar9 = DAT_14c998080;
        }
        if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
          lVar7 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
          puVar10 = *(uint **)(lVar7 + 0x18);
          if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
            puVar10 = (uint *)(lVar7 + 8);
          }
          *puVar10 = *puVar10 | 0x400;
          *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
        }
      }
    }
    lVar7 = param_1[0x16];
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6();
    }
    dVar1 = *(double *)(lVar7 + 0x6d0);
    *(float *)(param_1 + 0x57b) = (float)dVar1;
    *(undefined1 *)(param_1 + 0x595) = 0;
    if ((char)param_1[0x596] != '\0') {
      *(undefined1 *)(param_1 + 0x596) = 0;
      uVar3 = param_1[7];
      if (uVar3 < 0xffffffff00000000) {
        plVar11 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar11 = (longlong *)0x0;
        }
        (**(code **)(*plVar11 + 0x58))((float)dVar1,param_1,uVar3,0xc);
      }
      else {
        uVar13 = (uint)uVar3;
        if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
          puVar9 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar9 = DAT_14c998080;
          }
          if ((*(uint *)(puVar9 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
            lVar7 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
            puVar10 = *(uint **)(lVar7 + 0x18);
            if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
              puVar10 = (uint *)(lVar7 + 8);
            }
            *puVar10 = *puVar10 | 0x1000;
            *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
          }
        }
      }
    }
    if ((param_1[0x3e] != 0) && ((*(byte *)(param_1[0x3e] + 0x550) & 0x10) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2bd4) = 0xbf800000;
    }
    uVar12 = 1;
    if ((param_1[0x57c] == DAT_14cb75f40) && (param_1[0x76c] != 0)) {
      FUN_143cde6b6(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 143cdec3a FUN_143cdec3a body=78 status=ok
// SIG undefined FUN_143cdec3a(void)

void FUN_143cdec3a(longlong param_1)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0x349) & 0x20) != 0) &&
     (lVar1 = *(longlong *)(&DAT_00001ce8 + param_1), lVar1 != 0)) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x10c8) + 0x20))(lVar1 + 0x10c8);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) == 0)) {
      return;
    }
  }
  FUN_143431f20(param_1);
  return;
}



// FUNCTION 143cdec88 FUN_143cdec88 body=966 status=ok
// SIG undefined FUN_143cdec88(void)

ulonglong FUN_143cdec88(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
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
  undefined4 uVar16;
  undefined4 uVar17;
  
  cVar2 = (**(code **)(*param_1 + 0xeb8))();
  if (cVar2 != '\0') {
    cVar2 = FUN_1401787de(param_1);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((cVar2 != '\0') || (cVar2 = FUN_1401787de(param_1), cVar2 != '\0')) goto LAB_143cded07;
    if (((char)param_1[0x220] == '\x01') &&
       (((param_1[0x76c] != 0 && ((~*(uint *)(param_1 + 0x93) & 3) == 0)) &&
        (dVar12 = (double)param_1[0xa2], dVar12 <= (double)*(float *)(param_1[0x76c] + 0x124))))) {
      dVar11 = (double)param_1[0xa0];
      dVar15 = (double)param_1[0xa1];
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') goto LAB_143cded05;
        plVar4 = param_1 + 0x642;
      }
      else {
        plVar4 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      lVar3 = FUN_140153468(plVar4);
      if (((lVar3 != 0) && ((*(byte *)(plVar4 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
        if (param_1[0x62e] == 0) {
          if ((char)param_1[0x696] != '\x01') goto LAB_143cded05;
          plVar4 = param_1 + 0x642;
        }
        else {
          plVar4 = (longlong *)(param_1[0x62e] + 0xd8);
        }
        dVar13 = dVar11 * (double)plVar4[0x2a] - (double)plVar4[0x29] * dVar15;
        dVar6 = dVar12 * (double)plVar4[0x29] - (double)plVar4[0x2b] * dVar11;
        dVar8 = (double)plVar4[0x2b] * dVar15 - (double)plVar4[0x2a] * dVar12;
        dVar10 = dVar13 * dVar13 + dVar8 * dVar8 + dVar6 * dVar6;
        if (((dVar10 != 1.0) || (dVar7 = dVar6, dVar9 = dVar8, dVar14 = dVar13, NAN(dVar10))) &&
           (dVar7 = DAT_14c8464e8, dVar9 = DAT_14c8464e0, dVar14 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar10)) {
          dVar10 = 1.0 / SQRT(dVar10);
          dVar7 = dVar6 * dVar10;
          dVar9 = dVar8 * dVar10;
          dVar14 = dVar13 * dVar10;
        }
        dVar6 = dVar9 * dVar15 - dVar11 * dVar7;
        dVar8 = dVar14 * dVar11 - dVar12 * dVar9;
        dVar11 = dVar7 * dVar12 - dVar15 * dVar14;
        dVar12 = dVar6 * dVar6 + dVar11 * dVar11 + dVar8 * dVar8;
        if (((dVar12 != 1.0) || (dVar15 = dVar11, dVar10 = dVar6, dVar13 = dVar8, NAN(dVar12))) &&
           (dVar15 = DAT_14c8464e0, dVar10 = DAT_14c8464f0, dVar13 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar12)) {
          dVar12 = 1.0 / SQRT(dVar12);
          dVar15 = dVar11 * dVar12;
          dVar10 = dVar6 * dVar12;
          dVar13 = dVar8 * dVar12;
        }
        dVar12 = dVar9 * dVar9 + dVar7 * dVar7;
        if ((dVar12 != 1.0) || (NAN(dVar12))) {
          if (dVar12 < 9.99999993922529e-09) {
            uVar16 = SUB84(DAT_14c8464f0,0);
            uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            dVar7 = DAT_14c8464e8;
            dVar9 = DAT_14c8464e0;
          }
          else {
            uVar16 = 0;
            uVar17 = 0;
            dVar7 = dVar7 * (1.0 / SQRT(dVar12));
            dVar9 = dVar9 * (1.0 / SQRT(dVar12));
          }
        }
        else {
          uVar1 = -(ulonglong)(dVar14 == 0.0) & (ulonglong)dVar14;
          uVar16 = (undefined4)uVar1;
          uVar17 = (undefined4)(uVar1 >> 0x20);
        }
        dVar11 = dVar15 * dVar7 - dVar9 * dVar13;
        dVar15 = dVar10 * dVar9 - (double)CONCAT44(uVar17,uVar16) * dVar15;
        dVar12 = dVar13 * (double)CONCAT44(uVar17,uVar16) - dVar7 * dVar10;
        dVar12 = dVar11 * dVar11 + dVar12 * dVar12 + dVar15 * dVar15;
        if (((dVar12 != 1.0) || (dVar15 = dVar11, NAN(dVar12))) &&
           (dVar15 = DAT_14c8464f0, 9.99999993922529e-09 <= dVar12)) {
          dVar15 = dVar11 * (1.0 / SQRT(dVar12));
        }
        if ((dVar10 < 0.0) && (dVar15 <= (double)*(float *)(param_1[0x76c] + 0x124)))
        goto LAB_143cded07;
      }
    }
  }
LAB_143cded05:
  uVar5 = 0;
LAB_143cded07:
  return uVar5 & 0xffffffff;
}



// FUNCTION 143cdf098 FUN_143cdf098 body=348 status=ok
// SIG undefined FUN_143cdf098(void)

void FUN_143cdf098(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    uVar1 = FUN_1413256a6();
    lVar2 = FUN_144718840(param_3,uVar1);
    if (lVar2 != 0) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_3);
      }
      local_38 = param_3;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      local_30 = lVar2;
      FUN_1488088ac(param_1);
    }
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_143cdf101;
    lVar2 = param_1 + 0x3210;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  FUN_140153468(lVar2);
LAB_143cdf101:
  if ((param_4 != 0) && (*(longlong *)(param_1 + 0x1eb8) != 0)) {
    FUN_1406900ec(param_4 + 0x410,&local_40);
    if ((longlong)*(int *)(param_1 + 0x1ed0) != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1ec8) + lVar2) == local_40) {
          FUN_140f98582(*(undefined8 *)(param_1 + 0x1eb8),param_4);
          break;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(param_1 + 0x1ed0) * 8 != lVar2);
    }
  }
  if (param_3 != 0) {
    lVar2 = FUN_1413eaff8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      FUN_14880f404(param_1,param_3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cdf1f6 FUN_143cdf1f6 body=328 status=ok
// SIG undefined FUN_143cdf1f6(void)

void FUN_143cdf1f6(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    uVar2 = FUN_1413256a6();
    lVar3 = FUN_144718840(param_3,uVar2);
    if (((lVar3 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
       (cVar1 = FUN_14064b1de(*(longlong *)(param_1 + 0x118),param_3), cVar1 == '\0')) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_3);
      }
      local_38 = param_3;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      local_30 = lVar3;
      FUN_148808d4c(param_1);
    }
  }
  if ((param_4 != 0) && (*(longlong *)(param_1 + 0x1eb8) != 0)) {
    FUN_1406900ec(param_4 + 0x410,&local_40);
    if ((longlong)*(int *)(param_1 + 0x1ed0) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1ec8) + lVar3) == local_40) {
          FUN_143e4baf4(*(undefined8 *)(param_1 + 0x1eb8),param_4);
          break;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_1 + 0x1ed0) * 8 != lVar3);
    }
  }
  if (param_3 != 0) {
    lVar3 = FUN_1413eaff8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      FUN_143cdf340(param_1,param_3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cdf340 FUN_143cdf340 body=371 status=ok
// SIG undefined FUN_143cdf340(void)

void FUN_143cdf340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  local_48[0] = &local_50;
  FUN_14881325e((undefined8 *)(param_1 + 0x4100));
  if (*(longlong *)(param_1 + 0x4110) != param_2) goto LAB_143cdf45d;
  lVar1 = *(longlong *)(param_1 + 0x3b60);
  if (*(int *)(param_1 + 0x4108) < 1) {
    *(undefined8 *)(param_1 + 0x4110) = 0;
LAB_143cdf44a:
    lVar2 = *(longlong *)(param_1 + 0x3b58);
  }
  else {
    lVar2 = **(longlong **)(param_1 + 0x4100);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
      *(longlong *)(param_1 + 0x4110) = lVar2;
    }
    else {
      *(longlong *)(param_1 + 0x4110) = lVar2;
      if (lVar2 == 0) goto LAB_143cdf44a;
    }
    lVar2 = *(longlong *)(lVar2 + 0x3c8);
    if (lVar2 == 0) {
      lVar2 = FUN_140541594();
      lVar2 = *(longlong *)(lVar2 + 0x20);
    }
    local_50 = lVar2;
    FUN_1446dcdd4(local_48);
    if (DAT_14cb75bb8 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_144815d88(DAT_14cb75bb8,local_48);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar2 == 0) goto LAB_143cdf44a;
  }
  *(longlong *)(param_1 + 0x3b60) = lVar2;
  if (lVar2 != lVar1) {
    FUN_145bed826(param_1);
  }
LAB_143cdf45d:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cdf4b4 FUN_143cdf4b4 body=86 status=ok
// SIG undefined FUN_143cdf4b4(void)

void FUN_143cdf4b4(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x3b68) != 0) {
    lVar1 = FUN_144843108();
    if (lVar1 == param_2) goto LAB_143cdf4f8;
  }
  if (*(longlong *)(param_1 + 0x3b60) != 0) {
    lVar1 = FUN_144843108();
    if (lVar1 == param_2) {
LAB_143cdf4f8:
      FUN_14589b72c(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 143cdf50e FUN_143cdf50e body=140 status=ok
// SIG undefined FUN_143cdf50e(void)

void FUN_143cdf50e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(&DAT_00001ce8 + param_1);
  if ((((lVar1 != 0) &&
       (cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x10f8) + 0x18))(lVar1 + 0x10f8), cVar3 != '\0'))
      && (*(char *)(lVar1 + 0x1407) == '\x01')) &&
     (lVar1 = *(longlong *)(param_1 + 0x110), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar1 + 0x1f0);
    uVar2 = *(undefined8 *)(lVar1 + 0x1e8);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x1f0) = *(undefined8 *)(param_1 + 0x138);
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(lVar1 + 0x1e0) = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(lVar1 + 0x1e8) = uVar2;
  }
  return;
}



// FUNCTION 143cdf59a FUN_143cdf59a body=5850 status=ok
// SIG undefined FUN_143cdf59a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cdf59a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  double dVar54;
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  undefined1 auStack_3f8 [32];
  uint local_3d8;
  longlong local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  wchar_t *local_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  code **local_3a0;
  undefined1 *local_398;
  code *local_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  code *local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  if (*(char *)(param_1 + 0x2cc0) == '\x01') {
    FUN_140572fa0(param_1);
  }
  if (*param_2 == 0) goto LAB_143ce0b12;
  lVar10 = *(longlong *)(&DAT_00001ce8 + param_1);
  if (lVar10 != 0) {
    pcVar1 = *(code **)(*(longlong *)(lVar10 + 0x1108) + 0x10);
    if (pcVar1 == (code *)&LAB_144801c46) {
      lVar10 = lVar10 + 0x1600;
    }
    else {
      lVar10 = (*pcVar1)(lVar10 + 0x1108);
    }
    FUN_1400bc96c(lVar10 + 0xe0,&DAT_14cb760e8);
  }
  *(undefined1 *)(param_1 + 0x2cc0) = 1;
  *(undefined4 *)(param_1 + 0x2cc4) = 0;
  FUN_141850044(param_1 + 0x2d90,param_2);
  uVar14 = (**(code **)(*(longlong *)*param_2 + 0x2b0))();
  *(undefined4 *)(param_1 + 0x2cc8) = uVar14;
  if ((*(longlong *)(&DAT_00001ce8 + param_1) != 0) &&
     (lVar10 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x428), lVar10 != 0)) {
    lVar11 = *(longlong *)(lVar10 + 0x658);
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(lVar10 + 0x660);
      if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) goto LAB_143ce0c68;
      if (lVar11 != 0) goto LAB_143cdf6eb;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
LAB_143ce0c68:
        FUN_1456cec3c(lVar11);
      }
LAB_143cdf6eb:
      if (DAT_14cb06da8 == 0) {
        local_3a0 = &local_148;
        local_148 = FUN_1449e2820;
        local_390 = FUN_14081d0ea;
        local_398 = &LAB_1464003b0;
        local_3a8 = &LAB_147d17bdf;
        local_3b0 = &LAB_1417edf22;
        local_3b8 = L"Engine";
        local_3c0 = 0;
        local_3c8 = 0x10000000;
        local_3d0 = CONCAT44(local_3d0._4_4_,8);
        local_3d8 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
        dVar42 = (double)param_2[0x30];
        dVar61 = (double)param_2[0x31];
        dVar43 = (double)param_2[0x32];
        dVar47 = (double)param_2[0x33];
        local_338 = (double)param_2[0x34];
        dStack_330 = (double)param_2[0x35];
        local_378 = (double)param_2[0x36];
        dStack_370 = (double)param_2[0x37];
        auVar18 = *(undefined1 (*) [16])(param_2 + 0x38);
        dVar54 = auVar18._0_8_;
        dVar59 = auVar18._8_8_;
        auVar44 = *(undefined1 (*) [16])(param_2 + 0x3a);
        pdVar6 = &DAT_14c846480;
        if (*(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x1c8) != 0) {
          pdVar6 = (double *)(*(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x1c8) + 0x240)
          ;
        }
        dVar16 = *pdVar6;
        dVar24 = pdVar6[1];
        dVar48 = pdVar6[2];
        dVar57 = pdVar6[3];
        dVar62 = pdVar6[4];
        dVar63 = pdVar6[5];
        dVar25 = pdVar6[6];
        dVar36 = pdVar6[7];
        auVar49 = *(undefined1 (*) [16])(pdVar6 + 8);
        auVar20 = *(undefined1 (*) [16])(pdVar6 + 10);
        lVar10 = *param_2;
        local_3d8 = local_3d8 & 0xffffff00;
        local_3d0 = lVar11;
        uVar14 = FUN_141445440(lVar10,&local_2c8);
        auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar49._8_8_));
        auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar49._0_8_));
        uVar5 = movmskpd(uVar14,auVar17);
        auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar20._8_8_));
        auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar20._0_8_));
        iVar7 = movmskpd((int)lVar10,auVar29);
        uVar8 = iVar7 << 2 | uVar5;
        if (uVar8 == 0) {
          local_388 = DAT_14c8464a0;
          dStack_380 = DAT_14c8464a8;
          auVar33 = _DAT_14c8464c0;
          auVar37 = _DAT_14c8464d0;
          dVar15 = DAT_14c8464b0;
          dVar23 = DAT_14c8464b8;
          dVar40 = DAT_14c846490;
          dVar41 = DAT_14c846498;
          dVar58 = DAT_14c846480;
          dVar60 = DAT_14c846488;
        }
        else {
          auVar29 = divpd(_DAT_149934d80,auVar49);
          auVar17 = divpd(ZEXT816(0x3ff0000000000000),auVar20);
          auVar33._0_8_ =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar49._0_8_)) & auVar29._0_8_);
          auVar33._8_8_ =
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar49._8_8_)) & auVar29._8_8_);
          dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar20._0_8_)) & auVar17._0_8_)
          ;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = dVar26;
          dVar58 = -dVar16;
          dVar60 = -dVar24;
          dVar40 = dVar48 * -1.0;
          dVar41 = dVar57 * 1.0;
          dVar28 = dVar62 * auVar33._0_8_;
          dVar32 = dVar63 * auVar33._8_8_;
          dVar26 = dVar25 * dVar26;
          dVar15 = dVar32 * dVar58 - dVar60 * dVar28;
          dVar23 = dVar26 * dVar60 - dVar40 * dVar32;
          dVar56 = dVar28 * dVar40 - dVar58 * dVar26;
          dVar23 = dVar23 + dVar23;
          dVar56 = dVar56 + dVar56;
          dVar15 = dVar15 + dVar15;
          local_388 = 0.0 - ((dVar15 * dVar60 - dVar56 * dVar40) + dVar41 * dVar23 + dVar28);
          dStack_380 = 0.0 - (dVar15 * dVar16 + dVar40 * dVar23 + dVar41 * dVar56 + dVar32);
          dVar15 = 0.0 - (dVar41 * dVar15 + dVar26 + (dVar56 * dVar58 - dVar23 * dVar60));
          dVar23 = 0.0;
        }
        auVar18 = minpd(auVar18,auVar33);
        auVar17 = minpd(auVar44,auVar37);
        auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
        auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
        iVar7 = movmskpd(uVar5,auVar19);
        auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
        auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
        uVar5 = movmskpd(uVar8,auVar18);
        dVar28 = auVar37._0_8_;
        dStack_350 = auVar37._8_8_;
        dVar56 = auVar33._0_8_;
        dVar26 = auVar33._8_8_;
        local_348._0_8_ = auVar44._0_8_;
        local_348._8_8_ = auVar44._8_8_;
        local_348 = auVar44;
        local_328 = auVar20;
        local_318 = auVar49;
        local_308 = dVar25;
        dStack_300 = dVar36;
        local_2f8 = dVar62;
        dStack_2f0 = dVar63;
        local_2e8 = dVar48;
        dStack_2e0 = dVar57;
        local_2d8 = dVar16;
        dStack_2d0 = dVar24;
        if ((uVar5 & 0x3fffffff) == 0 && iVar7 == 0) {
          dVar16 = dVar61 * dVar40 * -1.0 +
                   dVar43 * dVar60 + dVar47 * dVar58 * 1.0 + dVar42 * dVar41;
          dVar24 = dVar42 * dVar40 * 1.0 +
                   dVar47 * dVar60 + dVar43 * dVar58 * -1.0 + dVar61 * dVar41;
          auVar44._0_8_ =
               dVar47 * dVar40 * 1.0 + ((dVar58 * dVar61 * 1.0 + dVar43 * dVar41) - dVar60 * dVar42)
          ;
          auVar44._8_8_ =
               dVar43 * dVar40 * -1.0 +
               ((dVar58 * dVar42 * -1.0 + dVar47 * dVar41) - dVar60 * dVar61);
          dVar48 = local_338 * dVar56;
          dVar57 = dStack_330 * dVar26;
          local_378 = local_378 * dVar28;
          dStack_370 = dStack_370 * dStack_350;
          dVar42 = dVar57 * dVar58 - dVar48 * dVar60;
          dVar61 = local_378 * dVar60 - dVar57 * dVar40;
          dVar43 = dVar48 * dVar40 - local_378 * dVar58;
          dVar47 = dStack_370 * dVar41 - dStack_370 * dVar41;
          dVar61 = dVar61 + dVar61;
          dVar43 = dVar43 + dVar43;
          dVar42 = dVar42 + dVar42;
          dVar47 = dVar47 + dVar47;
          local_388 = local_388 + (dVar42 * dVar60 - dVar40 * dVar43) + dVar41 * dVar61 + dVar48;
          dStack_380 = dStack_380 + (dVar61 * dVar40 - dVar42 * dVar58) + dVar41 * dVar43 + dVar57;
          local_378 = dVar15 + (dVar43 * dVar58 - dVar60 * dVar61) + dVar41 * dVar42 + local_378;
          dStack_370 = dVar23 + (dVar47 * dVar41 - dVar47 * dVar41) + dVar41 * dVar47 + dStack_370;
          local_358 = (double)local_348._0_8_ * dVar28;
          dStack_350 = (double)local_348._8_8_ * dStack_350;
          local_368._8_4_ = SUB84(dVar59 * dVar26,0);
          local_368._0_8_ = dVar54 * dVar56;
          local_368._12_4_ = (int)((ulonglong)(dVar59 * dVar26) >> 0x20);
          uVar14 = 0xe0000000;
          uVar51 = 0x3e45798e;
          uVar52 = 0xe0000000;
          uVar53 = 0x3e45798e;
          uVar9 = 0;
        }
        else {
          dVar57 = dVar60 + dVar60;
          dVar16 = dVar40 + dVar40;
          dVar48 = dVar58 * (dVar58 + dVar58);
          dVar24 = (dVar58 + dVar58) * dVar41;
          local_358 = (double)local_348._0_8_ * dVar28;
          dStack_350 = (double)local_348._8_8_ * dStack_350;
          local_178 = (1.0 - (dVar48 + dVar60 * dVar57)) * dVar28;
          local_188 = (dVar58 * dVar16 + dVar57 * dVar41) * dVar28;
          dStack_180 = (dVar16 * dVar60 - dVar24) * dVar28;
          local_368._8_8_ = dVar59 * dVar26;
          local_368._0_8_ = dVar54 * dVar56;
          local_1c8 = (1.0 - (dVar40 * dVar16 + dVar60 * dVar57)) * dVar56;
          dStack_1c0 = (dVar57 * dVar58 + dVar16 * dVar41) * dVar56;
          local_198 = (dVar16 * dVar60 + dVar24) * dVar26;
          local_1b8 = (dVar58 * dVar16 - dVar57 * dVar41) * dVar56;
          uStack_1b0 = 0;
          local_1a8._8_8_ = (1.0 - (dVar40 * dVar16 + dVar48)) * dVar26;
          local_1a8._0_8_ = (dVar57 * dVar58 - dVar16 * dVar41) * dVar26;
          uStack_190 = 0;
          uStack_170 = 0;
          local_168 = local_388;
          dStack_160 = dStack_380;
          uStack_150 = 0x3ff0000000000000;
          dVar16 = dVar61 + dVar61;
          dVar48 = dVar43 + dVar43;
          dVar24 = dVar42 * (dVar42 + dVar42);
          local_1f8 = (1.0 - (dVar24 + dVar61 * dVar16)) * (double)local_348._0_8_;
          dVar57 = (dVar42 + dVar42) * dVar47;
          local_208 = (dVar16 * dVar47 + dVar42 * dVar48) * (double)local_348._0_8_;
          local_228 = (dVar16 * dVar42 - dVar48 * dVar47) * dVar59;
          dStack_200 = (dVar48 * dVar61 - dVar57) * (double)local_348._0_8_;
          local_248 = (1.0 - (dVar43 * dVar48 + dVar61 * dVar16)) * dVar54;
          dStack_220 = (1.0 - (dVar43 * dVar48 + dVar24)) * dVar59;
          dStack_240 = (dVar16 * dVar42 + dVar48 * dVar47) * dVar54;
          local_218 = (dVar48 * dVar61 + dVar57) * dVar59;
          local_238 = (dVar42 * dVar48 - dVar16 * dVar47) * dVar54;
          uStack_230 = 0;
          uStack_210 = 0;
          uStack_1f0 = 0;
          local_1e8 = local_338;
          dStack_1e0 = dStack_330;
          local_1d8 = local_378;
          uStack_1d0 = 0x3ff0000000000000;
          local_158 = dVar15;
          FUN_1447fea8d(&local_148);
          auVar18 = _DAT_149934d80;
          local_388 = local_138;
          dVar54 = local_138 * local_138 +
                   (double)local_148 * (double)local_148 + local_140 * local_140;
          local_378 = local_118;
          dVar59 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
          dVar42 = local_f8 * local_f8 + local_108 * local_108 + local_100 * local_100;
          uVar12 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
          dVar54 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar54)) & uVar12)
          ;
          uVar12 = -(ulonglong)(0.0 <= dVar59 + -9.99999993922529e-09);
          dVar59 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar59)) & uVar12)
          ;
          uVar12 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
          dVar42 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar12)
          ;
          auVar49._8_8_ = -(ulonglong)(0.0 <= (double)local_368._8_8_);
          auVar49._0_8_ = -(ulonglong)(0.0 <= (double)local_368._0_8_);
          auVar44 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar49);
          dVar61 = (double)(~-(ulonglong)(0.0 <= local_358) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= local_358) & 0x3ff0000000000000);
          dVar43 = auVar44._0_8_;
          local_148 = (code *)((double)local_148 * dVar54 * dVar43);
          local_140 = local_140 * dVar54 * dVar43;
          local_138 = dVar54 * local_138 * dVar43;
          dVar54 = auVar44._8_8_;
          local_118 = dVar59 * local_118 * dVar54;
          local_120 = local_120 * dVar59 * dVar54;
          local_128 = dVar54 * local_128 * dVar59;
          local_f8 = dVar42 * local_f8 * dVar61;
          local_100 = local_100 * dVar42 * dVar61;
          local_108 = dVar61 * local_108 * dVar42;
          pdVar6 = &local_268;
          iVar7 = FUN_14481fd10(pdVar6,&local_148);
          uVar9 = SUB84(pdVar6,0);
          dVar54 = local_258 * local_258 + local_268 * local_268;
          dVar59 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
          auVar34._0_8_ = dVar54 + dVar59;
          auVar34._8_8_ = dVar54 + dVar59;
          uVar14 = (undefined4)DAT_149e1ecd0;
          uVar51 = DAT_149e1ecd0._4_4_;
          uVar52 = DAT_149e1ecd0._8_4_;
          uVar53 = DAT_149e1ecd0._12_4_;
          uVar12 = -(ulonglong)((double)DAT_149e1ecd0 <= auVar34._0_8_);
          uVar13 = -(ulonglong)(DAT_149e1ecd0._8_8_ <= auVar34._8_8_);
          auVar20._8_8_ = uVar13;
          auVar20._0_8_ = uVar12;
          auVar44 = sqrtpd(auVar34,auVar34);
          auVar18 = divpd(auVar18,auVar44);
          auVar38._0_8_ = auVar18._0_8_ * local_258;
          auVar38._8_8_ = auVar18._8_8_ * dStack_250;
          dVar16 = (double)((ulonglong)(local_268 * auVar18._0_8_) & uVar12);
          dVar24 = (double)((ulonglong)(dStack_260 * auVar18._8_8_) & uVar13);
          auVar44 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar20);
          local_388 = local_e8;
          dStack_380 = dStack_e0;
          dStack_370 = 0.0;
          local_378 = local_d8;
        }
        auVar45._8_8_ = -(ulonglong)((double)CONCAT44(uVar53,uVar52) < ABS(local_288._8_8_));
        auVar45._0_8_ = -(ulonglong)((double)CONCAT44(uVar51,uVar14) < ABS(local_288._0_8_));
        uVar5 = movmskpd(iVar7,auVar45);
        auVar46._8_8_ = -(ulonglong)((double)CONCAT44(uVar53,uVar52) < ABS(local_278._8_8_));
        auVar46._0_8_ = -(ulonglong)((double)CONCAT44(uVar51,uVar14) < ABS(local_278._0_8_));
        iVar7 = movmskpd(uVar9,auVar46);
        uVar8 = iVar7 << 2 | uVar5;
        dVar62 = auVar44._0_8_;
        auVar35 = _DAT_14c8464c0;
        auVar39 = _DAT_14c8464d0;
        dVar54 = DAT_14c846480;
        dVar59 = DAT_14c846488;
        dVar42 = DAT_14c8464a0;
        dVar61 = DAT_14c8464a8;
        dVar43 = DAT_14c846490;
        dVar47 = DAT_14c846498;
        dVar48 = DAT_14c8464b0;
        dVar57 = DAT_14c8464b8;
        if (uVar8 != 0) {
          auVar49 = divpd(_DAT_149934d80,local_288);
          auVar18 = divpd(ZEXT816(0x3ff0000000000000),local_278);
          auVar35._0_8_ =
               (double)(-(ulonglong)((double)CONCAT44(uVar51,uVar14) < ABS(local_288._0_8_)) &
                       auVar49._0_8_);
          auVar35._8_8_ =
               (double)(-(ulonglong)((double)CONCAT44(uVar53,uVar52) < ABS(local_288._8_8_)) &
                       auVar49._8_8_);
          dVar42 = (double)(-(ulonglong)((double)CONCAT44(uVar51,uVar14) < ABS(local_278._0_8_)) &
                           auVar18._0_8_);
          auVar39._8_8_ = 0;
          auVar39._0_8_ = dVar42;
          dVar43 = local_2b8 * -1.0;
          dVar47 = dStack_2b0 * 1.0;
          dVar54 = -local_2c8;
          dVar59 = -dStack_2c0;
          local_2a8 = local_2a8 * auVar35._0_8_;
          dStack_2a0 = dStack_2a0 * auVar35._8_8_;
          local_298 = local_298 * dVar42;
          dVar48 = dStack_2a0 * dVar54 - dVar59 * local_2a8;
          dVar57 = local_298 * dVar59 - dVar43 * dStack_2a0;
          dVar63 = local_2a8 * dVar43 - dVar54 * local_298;
          dVar57 = dVar57 + dVar57;
          dVar63 = dVar63 + dVar63;
          dVar48 = dVar48 + dVar48;
          dVar42 = 0.0 - ((dVar48 * dVar59 - dVar63 * dVar43) + dVar47 * dVar57 + local_2a8);
          dVar61 = 0.0 - (dVar48 * local_2c8 + dVar43 * dVar57 + dVar47 * dVar63 + dStack_2a0);
          dVar48 = 0.0 - (dVar47 * dVar48 + local_298 + (dVar63 * dVar54 - dVar57 * dVar59));
          dVar57 = 0.0;
        }
        dVar63 = local_368._0_8_;
        dVar25 = local_368._8_8_;
        auVar18 = minpd(local_368,auVar35);
        auVar4._8_8_ = dStack_350;
        auVar4._0_8_ = local_358;
        auVar49 = minpd(auVar4,auVar39);
        auVar50._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
        auVar50._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
        iVar7 = movmskpd(uVar5,auVar50);
        auVar55._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
        auVar55._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
        uVar5 = movmskpd(uVar8,auVar55);
        dVar36 = auVar39._0_8_;
        dVar15 = auVar39._8_8_;
        dVar23 = auVar35._0_8_;
        dVar40 = auVar35._8_8_;
        dVar41 = auVar44._8_8_;
        if ((uVar5 & 0x3fffffff) == 0 && iVar7 == 0) {
          dVar56 = dVar24 * dVar43 * -1.0 +
                   dVar62 * dVar59 + dVar41 * dVar54 * 1.0 + dVar16 * dVar47;
          dVar26 = dVar16 * dVar43 * 1.0 +
                   dVar41 * dVar59 + dVar62 * dVar54 * -1.0 + dVar24 * dVar47;
          local_388 = local_388 * dVar23;
          dStack_380 = dStack_380 * dVar40;
          dVar65 = local_378 * dVar36;
          dVar66 = dStack_370 * dVar15;
          dVar28 = dStack_380 * dVar54 - local_388 * dVar59;
          dVar32 = dVar65 * dVar59 - dStack_380 * dVar43;
          dVar58 = local_388 * dVar43 - dVar65 * dVar54;
          dVar60 = dVar66 * dVar47 - dVar66 * dVar47;
          dVar32 = dVar32 + dVar32;
          dVar58 = dVar58 + dVar58;
          dVar28 = dVar28 + dVar28;
          dVar60 = dVar60 + dVar60;
          auVar64._8_8_ =
               dVar62 * dVar43 * -1.0 +
               ((dVar54 * dVar16 * -1.0 + dVar41 * dVar47) - dVar59 * dVar24);
          auVar64._0_8_ =
               dVar41 * dVar43 * 1.0 + ((dVar54 * dVar24 * 1.0 + dVar62 * dVar47) - dVar59 * dVar16)
          ;
          local_e8 = dVar42 + (dVar28 * dVar59 - dVar43 * dVar58) + dVar47 * dVar32 + local_388;
          dStack_e0 = dVar61 + (dVar32 * dVar43 - dVar28 * dVar54) + dVar47 * dVar58 + dStack_380;
          local_d8 = dVar48 + (dVar58 * dVar54 - dVar59 * dVar32) + dVar47 * dVar28 + dVar65;
          dVar54 = dVar57 + (dVar60 * dVar47 - dVar60 * dVar47) + dVar47 * dVar60 + dVar66;
          dVar63 = dVar63 * dVar23;
          dVar25 = dVar25 * dVar40;
          dVar36 = local_358 * dVar36;
          dVar15 = dStack_350 * dVar15;
          local_388 = dVar48;
          dStack_380 = dVar57;
        }
        else {
          dVar58 = dVar59 + dVar59;
          dVar60 = dVar43 + dVar43;
          dVar57 = dVar54 * (dVar54 + dVar54);
          dVar56 = (dVar54 + dVar54) * dVar47;
          local_338 = local_358 * dVar36;
          dStack_330 = dStack_350 * dVar15;
          local_178 = (1.0 - (dVar57 + dVar59 * dVar58)) * dVar36;
          local_188 = (dVar54 * dVar60 + dVar58 * dVar47) * dVar36;
          dStack_180 = (dVar60 * dVar59 - dVar56) * dVar36;
          local_348._8_8_ = dVar25 * dVar40;
          local_348._0_8_ = dVar63 * dVar23;
          local_1c8 = (1.0 - (dVar43 * dVar60 + dVar59 * dVar58)) * dVar23;
          dVar43 = (1.0 - (dVar43 * dVar60 + dVar57)) * dVar40;
          dStack_1c0 = (dVar58 * dVar54 + dVar60 * dVar47) * dVar23;
          local_198 = (dVar60 * dVar59 + dVar56) * dVar40;
          local_1b8 = (dVar54 * dVar60 - dVar58 * dVar47) * dVar23;
          uStack_1b0 = 0;
          local_1a8._8_4_ = SUB84(dVar43,0);
          local_1a8._0_8_ = (dVar58 * dVar54 - dVar60 * dVar47) * dVar40;
          local_1a8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          uStack_190 = 0;
          uStack_170 = 0;
          uStack_150 = 0x3ff0000000000000;
          dVar54 = dVar24 + dVar24;
          dVar43 = dVar62 + dVar62;
          dVar59 = dVar16 * (dVar16 + dVar16);
          local_1f8 = (1.0 - (dVar59 + dVar24 * dVar54)) * local_358;
          dVar47 = (dVar16 + dVar16) * dVar41;
          local_208 = (dVar16 * dVar43 + dVar54 * dVar41) * local_358;
          local_228 = (dVar54 * dVar16 - dVar43 * dVar41) * dVar25;
          dStack_200 = (dVar43 * dVar24 - dVar47) * local_358;
          local_248 = (1.0 - (dVar62 * dVar43 + dVar24 * dVar54)) * dVar63;
          dStack_220 = (1.0 - (dVar62 * dVar43 + dVar59)) * dVar25;
          dStack_240 = (dVar54 * dVar16 + dVar43 * dVar41) * dVar63;
          local_218 = (dVar43 * dVar24 + dVar47) * dVar25;
          local_238 = (dVar16 * dVar43 - dVar54 * dVar41) * dVar63;
          uStack_230 = 0;
          uStack_210 = 0;
          uStack_1f0 = 0;
          local_1e8 = local_388;
          dStack_1e0 = dStack_380;
          uStack_1d0 = 0x3ff0000000000000;
          local_1d8 = local_378;
          local_168 = dVar42;
          dStack_160 = dVar61;
          local_158 = dVar48;
          FUN_1447fea8d(&local_148);
          dVar15 = dStack_330;
          dVar36 = local_338;
          local_388 = local_138;
          dVar54 = local_138 * local_138 +
                   (double)local_148 * (double)local_148 + local_140 * local_140;
          dVar59 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
          dVar61 = local_f8 * local_f8 + local_108 * local_108 + local_100 * local_100;
          uVar12 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
          dVar42 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar54)) & uVar12)
          ;
          uVar12 = -(ulonglong)(0.0 <= dVar59 + -9.99999993922529e-09);
          dVar54 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar59)) & uVar12)
          ;
          uVar12 = -(ulonglong)(0.0 <= dVar61 + -9.99999993922529e-09);
          dVar59 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar61)) & uVar12)
          ;
          dVar63 = (double)local_348._0_8_;
          dVar25 = (double)local_348._8_8_;
          auVar21._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
          auVar21._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
          auVar18 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
          dVar61 = (double)(~-(ulonglong)(0.0 <= local_338) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= local_338) & 0x3ff0000000000000);
          dVar43 = auVar18._0_8_;
          local_148 = (code *)((double)local_148 * dVar42 * dVar43);
          local_140 = local_140 * dVar42 * dVar43;
          local_138 = dVar42 * local_138 * dVar43;
          dVar42 = auVar18._8_8_;
          local_118 = dVar54 * local_118 * dVar42;
          local_120 = local_120 * dVar54 * dVar42;
          local_128 = dVar42 * local_128 * dVar54;
          local_f8 = dVar59 * local_f8 * dVar61;
          local_100 = local_100 * dVar59 * dVar61;
          local_108 = dVar61 * local_108 * dVar59;
          FUN_14481fd10(&local_268,&local_148);
          auVar27._0_8_ = local_268 * local_268;
          auVar27._8_8_ = dStack_260 * dStack_260;
          dVar54 = local_258 * local_258 + auVar27._0_8_;
          dVar59 = dStack_250 * dStack_250 + auVar27._8_8_;
          auVar30._0_8_ = dVar54 + dVar59;
          auVar30._8_8_ = dVar54 + dVar59;
          auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
          auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
          auVar18 = sqrtpd(auVar27,auVar30);
          auVar18 = divpd(_DAT_149934d80,auVar18);
          auVar31._0_8_ = auVar18._0_8_ * local_258;
          auVar31._8_8_ = auVar18._8_8_ * dStack_250;
          dVar56 = (double)((ulonglong)(local_268 * auVar18._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
          dVar26 = (double)((ulonglong)(dStack_260 * auVar18._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
          auVar64 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar22);
          dVar54 = 0.0;
        }
        auVar3._8_4_ = SUB84(dVar26,0);
        auVar3._0_8_ = dVar56;
        auVar3._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x2cd0) = auVar3;
        *(undefined1 (*) [16])(param_1 + 0x2ce0) = auVar64;
        *(double *)(param_1 + 0x2cf0) = local_e8;
        *(double *)(param_1 + 0x2cf8) = dStack_e0;
        *(double *)(param_1 + 0x2d00) = local_d8;
        *(double *)(param_1 + 0x2d08) = dVar54;
        auVar2._8_4_ = SUB84(dVar25,0);
        auVar2._0_8_ = dVar63;
        auVar2._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x2d10) = auVar2;
        *(double *)(param_1 + 0x2d20) = dVar36;
        *(double *)(param_1 + 0x2d28) = dVar15;
        *(double *)(param_1 + 0x2d30) = local_2d8;
        *(double *)(param_1 + 0x2d38) = dStack_2d0;
        *(double *)(param_1 + 0x2d40) = local_2e8;
        *(double *)(param_1 + 0x2d48) = dStack_2e0;
        *(double *)(param_1 + 0x2d50) = local_2f8;
        *(double *)(param_1 + 0x2d58) = dStack_2f0;
        *(double *)(param_1 + 0x2d60) = local_308;
        *(double *)(param_1 + 0x2d68) = dStack_300;
        *(undefined8 *)(param_1 + 0x2d70) = local_318._0_8_;
        *(undefined8 *)(param_1 + 0x2d78) = local_318._8_8_;
        *(undefined8 *)(param_1 + 0x2d80) = local_328._0_8_;
        *(undefined8 *)(param_1 + 0x2d88) = local_328._8_8_;
      }
    }
  }
  FUN_14056c580(param_1,0);
LAB_143ce0b12:
  if ((local_c0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce0c78 FUN_143ce0c78 body=226 status=ok
// SIG undefined FUN_143ce0c78(void)

void FUN_143ce0c78(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((*(uint *)(param_1 + 0x3628) & param_2) != 0) {
    uVar6 = *(uint *)(param_1 + 0x3630) | param_2;
    if (param_3 == '\0') {
      uVar6 = ~param_2 & *(uint *)(param_1 + 0x3630);
    }
    *(uint *)(param_1 + 0x3630) = uVar6;
    FUN_143ce8e58();
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000143ce0d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0xe);
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x4000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 143ce0d86 FUN_143ce0d86 body=748 status=ok
// SIG undefined FUN_143ce0d86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce0d86(longlong *param_1,float *param_2)

{
  float fVar1;
  longlong *plVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  double *pdVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [16];
  ulonglong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  float local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0x16] == 0) {
    lVar6 = FUN_1448abda6(param_1);
    if (lVar6 == 0) goto LAB_143ce1012;
  }
  local_68 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = ZEXT816(0);
  FUN_141313b0e(param_1[0x39d],&local_88,local_a8);
  uVar4 = local_a8._8_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_a8._8_8_;
  local_a8 = auVar16 << 0x40;
  dVar12 = (double)DAT_1499387d0;
  dVar3 = DAT_1499387d0._8_8_;
  auVar8 = divpd(local_a8,_DAT_1499387d0);
  auVar8 = roundpd(auVar8,auVar8,3);
  auVar16 = roundpd(in_XMM3,ZEXT816(0),3);
  auVar14._0_8_ = 0.0 - auVar8._0_8_ * dVar12;
  auVar14._8_8_ = (double)uVar4 - auVar8._8_8_ * dVar3;
  dVar18 = 0.0 - auVar16._0_8_ * dVar12;
  dVar19 = 0.0 - auVar16._8_8_ * dVar3;
  auVar17._0_8_ = auVar14._0_8_ + dVar12;
  auVar17._8_8_ = auVar14._8_8_ + dVar3;
  auVar13._0_8_ = dVar12 + dVar18;
  auVar13._8_8_ = dVar3 + dVar19;
  auVar9._8_8_ = -(ulonglong)(0.0 <= auVar14._8_8_);
  auVar9._0_8_ = -(ulonglong)(0.0 <= auVar14._0_8_);
  auVar16 = blendvpd(auVar17,auVar14,auVar9);
  auVar10._8_8_ = -(ulonglong)(0.0 <= dVar19);
  auVar10._0_8_ = -(ulonglong)(0.0 <= dVar18);
  auVar8._8_8_ = dVar19;
  auVar8._0_8_ = dVar18;
  auVar8 = blendvpd(auVar13,auVar8,auVar10);
  auVar15._0_8_ = auVar16._0_8_ + -360.0;
  auVar15._8_8_ = auVar16._8_8_ + -360.0;
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
  local_a8 = blendvpd(auVar16,auVar15,auVar11);
  dVar12 = auVar8._0_8_;
  local_98 = ~-(ulonglong)(180.0 < dVar12) & (ulonglong)dVar12 |
             (ulonglong)(dVar12 + -360.0) & -(ulonglong)(180.0 < dVar12);
  FUN_1401c9a0e(local_a8,&local_c0,&DAT_14c8462d8);
  plVar2 = (longlong *)param_1[0x39d];
  if ((plVar2 == (longlong *)0x0) || (lVar6 = plVar2[0x39], lVar6 == 0)) {
    pdVar7 = (double *)&DAT_14c8464e0;
    dVar12 = DAT_14c8464f0;
  }
  else {
    pdVar7 = (double *)(lVar6 + 0x260);
    dVar12 = *(double *)(lVar6 + 0x270);
  }
  dVar3 = *pdVar7;
  dVar18 = pdVar7[1];
  param_1[0x27] = (longlong)DAT_14c8464f0;
  lVar6 = DAT_14c8464e8;
  param_1[0x25] = DAT_14c8464e0;
  param_1[0x26] = lVar6;
  if (*(char *)((longlong)param_2 + 9) == '\x01') {
    local_c8 = *(undefined8 *)(param_2 + 8);
    local_d8 = *(undefined8 *)(param_2 + 4);
    uStack_d0 = *(undefined8 *)(param_2 + 6);
    FUN_14880ef86(param_1);
    (**(code **)(*param_1 + 0x688))(param_1,&local_d8);
  }
  else {
    local_48 = param_2[1];
    dVar19 = (double)*param_2;
    local_50 = dVar12 - local_b0 * dVar19;
    local_58 = dVar18 - local_b8 * dVar19;
    local_60 = dVar3 - dVar19 * local_c0;
    cVar5 = *(char *)(param_2 + 2);
    local_44 = (uint)(byte)((cVar5 << 4 | cVar5 * '\b') + 1);
    if (cVar5 == '\x01') {
      local_50 = local_50 + *(double *)(param_2 + 8);
    }
    if (plVar2 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar2 + 0x700))();
      if (cVar5 != '\0') {
        FUN_14153532c(param_1,&local_68);
      }
    }
  }
  if ((param_1[0x15] != 0) && (1 < *(byte *)(param_1[0x15] + 0x178))) {
    fVar1 = param_2[0xb];
    *(float *)(param_1 + 0x823) = param_2[10];
    *(undefined1 *)((longlong)param_1 + 0x411c) = 1;
    *(float *)(param_1 + 0x824) = fVar1;
  }
LAB_143ce1012:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce1074 FUN_143ce1074 body=92 status=ok
// SIG undefined FUN_143ce1074(void)

void FUN_143ce1074(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (((((char)param_1[0x391] == '\0') && ((char)param_1[0x396] == '\0')) &&
      (*(char *)((longlong)param_1 + 0x291) != '\0')) &&
     ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) {
    cVar2 = (**(code **)(*param_1 + 0x600))(param_1);
    if (cVar2 != '\0') {
      param_1[199] = param_2[2];
      lVar1 = param_2[1];
      param_1[0xc5] = *param_2;
      param_1[0xc6] = lVar1;
    }
  }
  return;
}



// FUNCTION 143ce10d0 FUN_143ce10d0 body=89 status=ok
// SIG undefined FUN_143ce10d0(void)

void FUN_143ce10d0(longlong *param_1)

{
  if (((double)param_1[0xc5] == 0.0) && (!NAN((double)param_1[0xc5]))) {
    if (((double)param_1[0xc6] == 0.0) && (!NAN((double)param_1[0xc6]))) {
      if (((double)param_1[199] == 0.0) && (!NAN((double)param_1[199]))) goto LAB_143ce111c;
    }
  }
  (**(code **)(*param_1 + 0x600))(param_1);
LAB_143ce111c:
  FUN_143431e74(param_1);
  return;
}



// FUNCTION 143ce112a FUN_143ce112a body=155 status=ok
// SIG undefined FUN_143ce112a(void)

undefined8 * FUN_143ce112a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((((*(int *)(param_1 + 0x2f8c) != 0) && (uVar1 = *(uint *)(param_1 + 0x2f88), -1 < (int)uVar1)
        ) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x2f8c))))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
      ((*plVar3 != 0 && ((*(byte *)(param_1 + 0x2fac) & 1) != 0)))))) {
    uVar2 = FUN_14479d2ce();
    FUN_14880fd16(param_1,param_2,uVar2);
    return param_2;
  }
  param_2[2] = *(undefined8 *)(param_1 + 0x2fc0);
  uVar2 = *(undefined8 *)(param_1 + 0x2fb8);
  *param_2 = *(undefined8 *)(&DAT_00002fb0 + param_1);
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 143ce11c6 FUN_143ce11c6 body=454 status=ok
// SIG undefined FUN_143ce11c6(void)

void FUN_143ce11c6(longlong param_1,double *param_2)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((*(int *)(param_1 + 0x524) != 0) && (uVar1 = *(uint *)(param_1 + 0x520), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x524))))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
      (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
    (**(code **)(*plVar4 + 0x6f0))(plVar4,&local_30);
    lVar2 = plVar4[0x39];
    if (lVar2 == 0) {
      pdVar3 = &DAT_14c8464e0;
      dVar9 = DAT_14c8464f0;
    }
    else {
      pdVar3 = (double *)(lVar2 + 0x260);
      dVar9 = *(double *)(lVar2 + 0x270);
    }
    local_28 = local_28 - pdVar3[1];
    local_30 = local_30 - *pdVar3;
    local_20 = local_20 - dVar9;
    dVar9 = local_20 * local_20 + local_30 * local_30 + local_28 * local_28;
    if (((dVar9 != 1.0) || (dVar5 = local_20, dVar6 = local_30, dVar7 = local_28, NAN(dVar9))) &&
       (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e0, dVar7 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar9)) {
      dVar9 = 1.0 / SQRT(dVar9);
      dVar5 = local_20 * dVar9;
      dVar6 = local_30 * dVar9;
      dVar7 = local_28 * dVar9;
    }
    fVar8 = (float)(param_2[2] * dVar5 + *param_2 * dVar6 + param_2[1] * dVar7);
    fVar10 = 0.0;
    if (0.0 <= fVar8) {
      fVar10 = fVar8;
    }
    dVar9 = (double)fVar10;
    *param_2 = dVar6 * dVar9;
    param_2[1] = dVar7 * dVar9;
    param_2[2] = dVar5 * dVar9;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce138e FUN_143ce138e body=2752 status=ok
// SIG undefined FUN_143ce138e(void)

void FUN_143ce138e(longlong param_1,double *param_2,float param_3,double *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined1 uVar5;
  double *pdVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  uint uVar10;
  float fVar11;
  double dVar12;
  undefined4 extraout_XMM0_Db;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((((((*(int *)(param_1 + 0x524) == 0) || (uVar10 = *(uint *)(param_1 + 0x520), (int)uVar10 < 0)
         ) || (DAT_14c9647dc <= (int)uVar10)) ||
       ((plVar8 = (longlong *)
                  ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
        plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x524))))) ||
      ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) ||
     (plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0)) goto LAB_143ce171e;
  fVar22 = *(float *)(plVar8 + 0x2ca);
  (**(code **)(*plVar8 + 0x6f0))(plVar8,&local_f8);
  dVar12 = local_e8;
  lVar4 = plVar8[0x39];
  if (lVar4 == 0) {
    pdVar6 = &DAT_14c8464e0;
    uVar23 = SUB84(DAT_14c8464f0,0);
    uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar23 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
    pdVar6 = (double *)(lVar4 + 0x260);
  }
  dVar17 = *pdVar6;
  dVar13 = pdVar6[1];
  if ((char)plVar8[0x2d8] == '\x01') {
    bVar9 = *(byte *)(plVar8 + 0x30d);
  }
  else {
    bVar9 = 0;
  }
  dVar2 = (double)plVar8[0x30e];
  dVar16 = (double)plVar8[0x30f];
  dVar3 = (double)plVar8[0x310];
  dStack_110 = dVar16;
  local_118 = dVar2;
  local_108 = dVar3;
  if (bVar9 == 0) {
    local_108 = (double)*(float *)((longlong)plVar8 + 0x1654) + local_e8;
    dStack_110 = local_f0 + 0.0;
    local_118 = local_f8 + 0.0;
  }
  local_108 = local_108 - (double)CONCAT44(uVar24,uVar23);
  dStack_110 = dStack_110 - dVar13;
  local_118 = local_118 - dVar17;
  dVar20 = local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110;
  if ((dVar20 != 1.0) || (NAN(dVar20))) {
    if (9.99999993922529e-09 <= dVar20) {
      dVar20 = 1.0 / SQRT(dVar20);
      local_108 = local_108 * dVar20;
      dStack_110 = dStack_110 * dVar20;
      local_118 = local_118 * dVar20;
    }
    else {
      local_108 = DAT_14c8464f0;
      local_118 = DAT_14c8464e0;
      dStack_110 = DAT_14c8464e8;
    }
  }
  if (fVar22 <= param_3) {
    fVar22 = param_3;
  }
  fVar21 = (float)SQRT((dVar13 - local_f0) * (dVar13 - local_f0) +
                       (dVar17 - local_f8) * (dVar17 - local_f8));
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_128 = 0.0;
  if ((((char)plVar8[0x2f] == '\x03') &&
      (*(char *)((longlong)plVar8 + 0x166c) == '\x01' && bVar9 == 0)) &&
     (plVar7 = (longlong *)FUN_14479d2ce((longlong)plVar8 + 0x16d4), plVar7 != (longlong *)0x0)) {
    local_1a0 = dVar17;
    (**(code **)(*plVar7 + 0x588))(plVar7,&local_170,&local_158);
    FUN_144a76660(&local_158,&local_188);
    local_1a8 = local_188;
    dVar20 = local_188 * local_188 + local_180 * local_180;
    if ((dVar20 != 1.0) || (NAN(dVar20))) {
      if (9.99999993922529e-09 <= dVar20) {
        local_180 = local_180 * (1.0 / SQRT(dVar20));
        local_1a8 = local_188 * (1.0 / SQRT(dVar20));
        local_128 = 0.0;
      }
      else {
        local_1a8 = DAT_14c8464e0;
        local_180 = DAT_14c8464e8;
        local_128 = DAT_14c8464f0;
      }
    }
    else {
      local_128 = (double)(-(ulonglong)(local_178 == 0.0) & (ulonglong)local_178);
    }
    dVar20 = local_1a8;
    local_138 = local_1a8;
    local_f0 = dVar13 - local_f0;
    local_f8 = local_1a0 - local_f8;
    dVar14 = local_f8 * local_f8 + local_f0 * local_f0;
    if ((dVar14 != 1.0) || (NAN(dVar14))) {
      local_190 = DAT_14c8464e8;
      dVar15 = DAT_14c8464f0;
      local_1a0 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar14) {
        local_190 = local_f0 * (1.0 / SQRT(dVar14));
        dVar15 = 0.0;
        local_1a0 = local_f8 * (1.0 / SQRT(dVar14));
      }
    }
    else {
      local_e8 = (double)CONCAT44(uVar24,uVar23) - local_e8;
      local_190 = local_f0;
      dVar15 = (double)(-(ulonglong)(local_e8 == 0.0) & (ulonglong)local_e8);
      local_1a0 = local_f8;
    }
    fVar18 = (float)(dVar15 * local_128 + local_1a0 * local_1a8 + local_180 * local_190);
    fVar11 = fVar18;
    if (1.0 <= fVar18) {
      fVar11 = 1.0;
    }
    local_198 = local_180;
    dStack_130 = local_180;
    fVar11 = acosf((float)(-(uint)(fVar18 < -1.0) & 0xbf800000 |
                          ~-(uint)(fVar18 < -1.0) & (uint)fVar11));
    uVar10 = -(uint)(0.0 <= (float)(dVar20 * local_190 - local_1a0 * local_198));
    uVar5 = FUN_142b461ae((longlong)plVar8 + 0x1664,
                          CONCAT44(extraout_XMM0_Db,~uVar10 & (uint)-(fVar11 * 57.295776)) ^
                          0x8000000000000000 | (ulonglong)((uint)(fVar11 * 57.295776) & uVar10));
    *(undefined1 *)((longlong)plVar8 + 0x1714) = uVar5;
  }
  dVar20 = local_108;
  if (fVar22 <= 0.001) {
    fVar22 = 0.001;
  }
  fVar11 = *(float *)((longlong)plVar8 + 0x165c);
  fVar18 = fVar11 - *(float *)(plVar8 + 0x2cc);
  if ((fVar21 < fVar18 + -1.0) || (*(float *)(plVar8 + 0x2cc) + fVar11 + 1.0 < fVar21)) {
    fVar25 = *(float *)(plVar8 + 0x2c9);
LAB_143ce167d:
    dVar12 = dStack_110;
    dVar14 = local_118;
    if (bVar9 == 0) {
      if (*(char *)((longlong)plVar8 + 0x1714) == '\0') {
        fVar21 = *(float *)((longlong)plVar8 + 0x1664);
        if ((fVar21 != 0.0) || (NAN(fVar21))) {
          local_168 = (double)fVar21;
          local_170 = 0.0;
          local_160 = 0.0;
          FUN_1401c9a0e(&local_170,&local_158,&local_138);
          fVar11 = *(float *)((longlong)plVar8 + 0x165c);
        }
        else {
          local_148 = local_128;
          local_158 = local_138;
          dStack_150 = dStack_130;
        }
        dVar12 = (double)(fVar11 * 0.5);
        local_158 = local_158 * dVar12;
        dStack_150 = dStack_150 * dVar12;
        local_148 = dVar12 * local_148;
        (**(code **)(*plVar8 + 0x6f0))(plVar8,&local_170);
        local_158 = local_170 + local_158;
        dStack_150 = local_168 + dStack_150;
        local_148 = (double)*(float *)((longlong)plVar8 + 0x1654) + local_160 + local_148;
        if (((1.9999999494757503e-05 <= ABS(dVar17 - local_158)) ||
            (1.9999999494757503e-05 <= ABS(dVar13 - dStack_150))) ||
           (1.9999999494757503e-05 <= ABS((double)CONCAT44(uVar24,uVar23) - local_148))) {
          dVar2 = local_148 - (double)CONCAT44(uVar24,uVar23);
          dVar13 = dStack_150 - dVar13;
          dVar17 = local_158 - dVar17;
          dVar16 = 1.0 / SQRT(dVar2 * dVar2 + dVar17 * dVar17 + dVar13 * dVar13);
          dVar12 = dVar13 * dVar16;
          dVar14 = dVar16 * dVar17;
          dVar20 = dVar2 * dVar16;
        }
        else {
          FUN_1416b9e2e(&local_170);
          dVar12 = local_168;
          dVar14 = local_170;
        }
      }
      else if (fVar21 < fVar18) {
        if (ABS(dStack_110 + local_118) <= 9.99999993922529e-09) {
          FUN_1461e0392(plVar8,&local_158);
          dVar20 = local_148;
          dVar12 = dStack_150;
          dVar14 = local_158;
        }
        else {
          dVar14 = -local_118;
          dVar12 = -dStack_110;
        }
      }
    }
    else {
      dVar3 = dVar3 - (double)CONCAT44(uVar24,uVar23);
      dVar16 = dVar16 - dVar13;
      dVar2 = dVar2 - dVar17;
      if (SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar16 * dVar16) <
          (double)*(float *)((longlong)plVar8 + 0x16c4)) {
        param_4[2] = DAT_14c8464f0;
        dVar12 = DAT_14c8464e8;
        *param_4 = DAT_14c8464e0;
        param_4[1] = dVar12;
        goto LAB_143ce171e;
      }
    }
  }
  else {
    fVar19 = ABS((float)(dVar12 - (double)CONCAT44(uVar24,uVar23)));
    fVar1 = *(float *)(plVar8 + 0x2cb);
    local_1a0 = (double)CONCAT44(local_1a0._4_4_,fVar1);
    fVar25 = *(float *)(plVar8 + 0x2c9);
    if (((fVar19 < (*(float *)((longlong)plVar8 + 0x1654) - fVar1) + -1.0) ||
        (*(float *)((longlong)plVar8 + 0x1654) + fVar1 + 1.0 < fVar19)) ||
       ((byte)(*(byte *)((longlong)plVar8 + 0x1714) ^ 1 | bVar9) == 1)) goto LAB_143ce167d;
    fVar18 = *(float *)((longlong)plVar8 + 0x164c) * fVar22;
    fVar21 = ((fVar18 * fVar18 + fVar21 * fVar21) - fVar11 * fVar11) / ((fVar18 + fVar18) * fVar21);
    if (fVar21 < -1.0) {
      dVar12 = -1.0;
    }
    else {
      dVar12 = (double)fVar21;
      if (1.0 <= dVar12) {
        dVar12 = 1.0;
      }
    }
    dVar12 = acos(dVar12);
    dVar12 = dVar12 * 57.29577951308232;
    if ((char)plVar8[0x308] != '\0') {
      dVar12 = -dVar12;
    }
    FUN_140ccff96(&local_118,&local_158,(double)(float)dVar12 * 0.017453292519943295,&DAT_14c8462c0)
    ;
    fVar25 = *(float *)((longlong)plVar8 + 0x164c);
    dVar20 = local_148;
    dVar12 = dStack_150;
    dVar14 = local_158;
  }
  dVar16 = (double)fVar25;
  dVar17 = param_2[2];
  dVar13 = param_2[1];
  dVar2 = 1.0 / (double)fVar22;
  *param_4 = dVar2 * (dVar14 * dVar16 - *param_2);
  param_4[1] = (dVar12 * dVar16 - dVar13) * dVar2;
  param_4[2] = (dVar20 * dVar16 - dVar17) * dVar2;
LAB_143ce171e:
  if ((local_e0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce1e50 FUN_143ce1e50 body=776 status=ok
// SIG undefined FUN_143ce1e50(void)

void FUN_143ce1e50(longlong param_1,double *param_2,float param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  double *pdVar7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((*(int *)(param_1 + 0x524) != 0) && (uVar4 = *(uint *)(param_1 + 0x520), -1 < (int)uVar4))
       && ((int)uVar4 < DAT_14c9647dc)) &&
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x524))))) &&
     (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
      (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))) {
    (**(code **)(*plVar8 + 0x6f0))(plVar8,&local_98);
    lVar5 = plVar8[0x39];
    if (lVar5 == 0) {
      pdVar7 = &DAT_14c8464e0;
      dVar9 = DAT_14c8464f0;
    }
    else {
      pdVar7 = (double *)(lVar5 + 0x260);
      dVar9 = *(double *)(lVar5 + 0x270);
    }
    local_90 = local_90 - pdVar7[1];
    local_98 = local_98 - *pdVar7;
    local_88 = local_88 - dVar9;
    fVar11 = (float)SQRT(local_88 * local_88 + local_98 * local_98 + local_90 * local_90);
    dVar9 = DAT_14c8464f0;
    dVar10 = DAT_14c8464e8;
    dVar13 = DAT_14c8464e0;
    if (1e-08 < fVar11) {
      dVar13 = (double)(1.0 / fVar11);
      dVar9 = local_88 * dVar13;
      dVar10 = local_90 * dVar13;
      dVar13 = local_98 * dVar13;
    }
    fVar14 = *(float *)(plVar8 + 0x2c9) * 0.5;
    fVar14 = fVar14 * fVar14;
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    fVar15 = (float)(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
    if ((((char)plVar8[0x2da] != '\x01') || (*(float *)((longlong)plVar8 + 0x16cc) <= fVar11)) ||
       ((fVar15 <= fVar14 || (fVar11 <= *(float *)(plVar8 + 0x2d9))))) {
      if ((fVar14 <= fVar15) &&
         (fVar11 < *(float *)(plVar8 + 0x2d9) || fVar11 == *(float *)(plVar8 + 0x2d9)))
      goto LAB_143ce207b;
      fVar11 = *(float *)(plVar8 + 0x2ca);
      if (*(float *)(plVar8 + 0x2ca) <= param_3) {
        fVar11 = param_3;
      }
      if (fVar11 <= 0.001) {
        fVar11 = 0.001;
      }
      dVar6 = (double)*(float *)(plVar8 + 0x2c9);
      dVar12 = 1.0 / (double)fVar11;
      dVar9 = (dVar9 * dVar6 - dVar3) * dVar12;
      dVar10 = (dVar10 * dVar6 - dVar2) * dVar12;
      dVar12 = dVar12 * (dVar13 * dVar6 - dVar1);
    }
    else {
      dVar12 = (double)(-fVar15 / ((fVar11 + fVar11) - *(float *)(plVar8 + 0x2d9)));
      dVar9 = dVar9 * dVar12;
      dVar10 = dVar10 * dVar12;
      dVar12 = dVar13 * dVar12;
    }
    *param_4 = dVar12;
    param_4[1] = dVar10;
    param_4[2] = dVar9;
  }
LAB_143ce207b:
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce215a FUN_143ce215a body=1209 status=ok
// SIG undefined FUN_143ce215a(void)

void FUN_143ce215a(longlong param_1,double *param_2,float param_3,double *param_4)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  double *pdVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((((*(int *)(param_1 + 0x524) != 0) && (uVar2 = *(uint *)(param_1 + 0x520), -1 < (int)uVar2))
       && ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x524))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
      ((plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0 && ((char)plVar5[0x2f5] == '\0')))))
     ) {
    fVar14 = *(float *)(plVar5 + 0x2ca);
    (**(code **)(*plVar5 + 0x6f0))(plVar5,&local_d8);
    lVar3 = plVar5[0x39];
    if (lVar3 == 0) {
      pdVar4 = &DAT_14c8464e0;
      local_e8 = DAT_14c8464f0;
    }
    else {
      local_e8 = *(double *)(lVar3 + 0x270);
      pdVar4 = (double *)(lVar3 + 0x260);
    }
    uStack_e0 = 0;
    dVar6 = *pdVar4;
    dVar9 = pdVar4[1];
    dVar10 = dVar6 - local_d8;
    dVar13 = dVar9 - local_d0;
    dVar7 = dVar13 * dVar13 + dVar10 * dVar10;
    fVar12 = (float)SQRT(dVar7);
    fVar1 = *(float *)((longlong)plVar5 + 0x177c);
    if ((*(float *)(plVar5 + 0x2f1) <= ABS(fVar12 - fVar1)) ||
       (*(float *)((longlong)plVar5 + 0x1784) <=
        ABS(ABS((float)(local_c8 - local_e8)) - *(float *)(plVar5 + 0x2f9)))) {
      if (fVar14 <= param_3) {
        fVar14 = param_3;
      }
      dVar13 = local_d0 - dVar9;
      dVar10 = local_d8 - dVar6;
      dVar7 = dVar10 * dVar10 + dVar13 * dVar13;
      if (((dVar7 != 1.0) || (dVar8 = dVar13, dVar11 = dVar10, NAN(dVar7))) &&
         (dVar8 = DAT_14c8464e8, dVar11 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar7)) {
        dVar8 = dVar13 * (1.0 / SQRT(dVar7));
        dVar11 = dVar10 * (1.0 / SQRT(dVar7));
      }
      if (fVar14 <= 0.001) {
        fVar14 = 0.001;
      }
      dVar13 = (double)((fVar1 + *(float *)(plVar5 + 0x2f0) + (fVar1 - *(float *)(plVar5 + 0x2f0)))
                       * 0.5);
      dVar10 = (local_c8 + (double)*(float *)(plVar5 + 0x2f9)) - local_e8;
      dVar9 = (local_d0 - dVar8 * dVar13) - dVar9;
      dVar6 = (local_d8 - dVar11 * dVar13) - dVar6;
      dVar13 = dVar10 * dVar10 + dVar6 * dVar6 + dVar9 * dVar9;
      if (((dVar13 != 1.0) || (dVar7 = dVar6, dVar8 = dVar9, dVar11 = dVar10, NAN(dVar13))) &&
         (dVar7 = DAT_14c8464e0, dVar8 = DAT_14c8464e8, dVar11 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar13)) {
        dVar13 = 1.0 / SQRT(dVar13);
        dVar7 = dVar6 * dVar13;
        dVar8 = dVar9 * dVar13;
        dVar11 = dVar10 * dVar13;
      }
      dVar10 = (double)*(float *)(plVar5 + 0x2c9);
      dVar6 = param_2[2];
      dVar9 = param_2[1];
      dVar13 = 1.0 / (double)fVar14;
      *param_4 = dVar13 * (dVar7 * dVar10 - *param_2);
      param_4[1] = (dVar8 * dVar10 - dVar9) * dVar13;
      param_4[2] = (dVar11 * dVar10 - dVar6) * dVar13;
    }
    else {
      *(undefined1 *)(plVar5 + 0x2f5) = 1;
      if ((dVar7 != 1.0) || (NAN(dVar7))) {
        dVar8 = DAT_14c8464f0;
        dVar6 = DAT_14c8464e0;
        dVar9 = DAT_14c8464e8;
        if (9.99999993922529e-09 <= dVar7) {
          dVar9 = 1.0 / SQRT(dVar7);
          dVar8 = 0.0;
          dVar6 = dVar10 * dVar9;
          dVar9 = dVar13 * dVar9;
        }
      }
      else {
        dVar8 = (double)(-(ulonglong)(local_e8 - local_c8 == 0.0) & (ulonglong)(local_e8 - local_c8)
                        );
        dVar6 = dVar10;
        dVar9 = dVar13;
      }
      plVar5[0x2f6] = (longlong)dVar6;
      plVar5[0x2f7] = (longlong)dVar9;
      plVar5[0x2f8] = (longlong)dVar8;
      *(float *)((longlong)plVar5 + 0x17d4) = fVar12;
      *(float *)((longlong)plVar5 + 0x17cc) = ABS((float)(local_c8 - local_e8));
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce2614 FUN_143ce2614 body=69 status=ok
// SIG undefined FUN_143ce2614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce2614(void)

{
  _DAT_14cb76128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce2656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76130,1);
  return;
}



// FUNCTION 143ce265a FUN_143ce265a body=232 status=ok
// SIG undefined FUN_143ce265a(void)

void FUN_143ce265a(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb71bf8 == '\x01') {
    if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
      local_1c = param_2;
      uVar1 = FUN_14477b072(param_1,DAT_14cad0060);
      (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
      if ((DAT_14c761388 != 0) &&
         ((lVar2 = param_1[0x16], lVar2 != 0 || (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)))) {
        uVar1 = FUN_14119d0a4(lVar2);
        FUN_140e65914(uVar1,param_1,*(undefined4 *)(lVar2 + 0x6f4));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14348e21e(param_1);
  return;
}



// FUNCTION 143ce2754 FUN_143ce2754 body=28 status=ok
// SIG undefined FUN_143ce2754(void)

void FUN_143ce2754(undefined8 param_1)

{
  FUN_1406c4f64();
  FUN_14085b656(param_1,1);
  return;
}



// FUNCTION 143ce2770 FUN_143ce2770 body=46 status=ok
// SIG undefined FUN_143ce2770(void)

void FUN_143ce2770(longlong *param_1)

{
  FUN_140e47758();
  if ((char)param_1[0x22f] != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce2797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcf0))(param_1);
  return;
}



// FUNCTION 143ce279e FUN_143ce279e body=46 status=ok
// SIG undefined FUN_143ce279e(void)

void FUN_143ce279e(longlong *param_1)

{
  FUN_1412309de();
  if ((char)param_1[0x22f] != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce27c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcf0))(param_1);
  return;
}



// FUNCTION 143ce27da FUN_143ce27da body=1725 status=ok
// SIG undefined FUN_143ce27da(void)

void FUN_143ce27da(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_178 [32];
  code **local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  int local_108;
  uint local_104;
  longlong local_100;
  uint *local_f8;
  longlong *local_f0;
  longlong local_e8;
  int local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((DAT_14c76388c != -1) &&
     (iVar7 = *(int *)((longlong)param_1 + 0x854), iVar6 = FUN_1448d11dc(param_1),
     DAT_14c76388c < iVar7 - iVar6)) goto LAB_143ce2e5a;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143ce2e45;
    }
    FUN_14349000e(param_1,0,param_3);
    if ((param_2 != (longlong *)0x0) && (*(int *)((longlong)param_2 + 0x34) < (int)param_2[1])) {
      iVar7 = (int)param_2[5];
      if (iVar7 == 0) {
        uVar22 = 1;
        uVar21 = 0;
        iVar6 = 0;
        iVar12 = 0;
      }
      else {
        puVar16 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar16 = (uint *)(param_2 + 2);
        }
        uVar19 = *puVar16;
        if (uVar19 == 0) {
          iVar6 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar6 = iVar7 + -1;
          }
          uVar21 = 0;
          uVar22 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar22 = uVar21;
          }
          iVar6 = 0;
          do {
            if (uVar22 == uVar21) goto LAB_143ce2e5a;
            iVar6 = iVar6 + 0x20;
            uVar19 = puVar16[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar21 = 0;
          iVar6 = 0;
        }
        uVar22 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar22 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar12 = (iVar6 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar12) {
          iVar12 = iVar7;
        }
      }
      if (iVar12 < iVar7) {
        uVar19 = 0xffffffff;
        local_f8 = (uint *)(param_2 + 2);
        local_f0 = param_2;
        do {
          if ((char)param_1[0x246] != '\0') break;
          uVar4 = *(undefined8 *)(*local_f0 + (longlong)iVar12 * 0x14);
          uVar3 = *(undefined4 *)(*local_f0 + 8 + (longlong)iVar12 * 0x14);
          local_108 = iVar6;
          local_104 = uVar19;
          if ((*(byte *)((longlong)param_1 + 0x63c) & 1) == 0) {
            (**(code **)(*param_1 + 0x9f8))(param_1,&local_e8);
            if (0 < local_e0) {
              lVar18 = 0;
              iVar7 = local_e0;
              do {
                lVar17 = *(longlong *)(local_e8 + lVar18 * 8);
                if (lVar17 != 0) {
                  if (DAT_14caec470 == 0) {
                    local_d8 = FUN_1417df956;
                    local_110 = FUN_14081d0ea;
                    local_118 = &LAB_1463eaa20;
                    local_128 = &LAB_147bbd9ea;
                    local_130 = FUN_1401cf6d7;
                    local_138 = L"Engine";
                    local_140 = 0;
                    local_148 = 0x10000000;
                    local_150 = 8;
                    local_158 = (code **)CONCAT44(local_158._4_4_,0x330);
                    local_120 = &local_d8;
                    FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                                  FUN_1463eb22e);
                  }
                  if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) <
                       *(int *)(DAT_14caec470 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
                    *(undefined1 *)(param_1 + 0x246) = 1;
                    break;
                  }
                  local_78 = 2;
                  local_74 = 0xffffffff;
                  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffffffffff00);
                  local_90 = 0;
                  uStack_88 = 0;
                  local_a0 = 0;
                  uStack_98 = 0;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  local_158 = &local_d8;
                  local_80 = uVar4;
                  FUN_140042bb4(lVar17,&local_80,uVar3,0);
                  iVar7 = local_e0;
                }
                lVar18 = lVar18 + 1;
              } while (lVar18 < iVar7);
            }
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if ((*(byte *)((longlong)param_1 + 0x63c) & 2) != 0) {
              FUN_143480270(param_1);
            }
            uVar19 = *(uint *)(param_1 + 0xc9);
            lVar18 = param_1[200];
            uVar20 = 0;
            iVar7 = (int)((ulonglong)uVar4 >> 0x20);
            uVar13 = uVar19;
            if (0 < (int)uVar19) {
              do {
                uVar1 = (uVar13 >> 1) + uVar20;
                lVar17 = (ulonglong)uVar1 * 0x30;
                iVar6 = *(int *)(lVar18 + lVar17) - (int)uVar4;
                if (iVar6 == 0) {
                  iVar6 = *(int *)(lVar18 + 4 + lVar17) - iVar7;
                }
                if (iVar6 < 0) {
                  uVar20 = uVar1 + (uVar13 & 1);
                }
                bVar5 = 1 < uVar13;
                uVar13 = uVar13 >> 1;
              } while (bVar5);
            }
            if ((int)uVar20 < (int)uVar19) {
              lVar17 = (ulonglong)uVar20 * 0x30;
              iVar6 = (int)uVar4 - *(int *)(lVar18 + lVar17);
              if (iVar6 == 0) {
                iVar6 = iVar7 - *(int *)(lVar18 + 4 + lVar17);
              }
              if (-1 < iVar6) {
                plVar10 = (longlong *)(lVar18 + lVar17 + 8);
                if ((plVar10 != (longlong *)0x0) &&
                   (lVar18 = (longlong)*(int *)(lVar18 + lVar17 + 0x10), lVar18 != 0)) {
                  local_100 = *plVar10;
                  lVar17 = 0;
                  do {
                    lVar11 = (**(code **)(*param_1 + 0x610))
                                       (param_1,*(undefined4 *)(local_100 + lVar17));
                    if (lVar11 != 0) {
                      if (DAT_14caec470 == 0) {
                        local_d8 = FUN_1417df956;
                        local_110 = FUN_14081d0ea;
                        local_118 = &LAB_1463eaa20;
                        local_120 = &local_d8;
                        local_128 = &LAB_147bbd9ea;
                        local_130 = FUN_1401cf6d7;
                        local_138 = L"Engine";
                        local_140 = 0;
                        local_148 = 0x10000000;
                        local_150 = 8;
                        local_158 = (code **)CONCAT44(local_158._4_4_,0x330);
                        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                                      FUN_1463eb22e);
                      }
                      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) <
                           *(int *)(DAT_14caec470 + 0x38)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
                        *(undefined1 *)(param_1 + 0x246) = 1;
                        break;
                      }
                      local_78 = 2;
                      local_74 = 0xffffffff;
                      local_d8 = (code *)((ulonglong)local_d8 & 0xffffffffffffff00);
                      local_90 = 0;
                      uStack_88 = 0;
                      local_a0 = 0;
                      uStack_98 = 0;
                      local_b0 = 0;
                      uStack_a8 = 0;
                      local_c0 = 0;
                      uStack_b8 = 0;
                      local_d0 = 0;
                      uStack_c8 = 0;
                      local_158 = &local_d8;
                      local_80 = uVar4;
                      FUN_140042bb4(lVar11,&local_80,uVar3,0);
                    }
                    lVar17 = lVar17 + 4;
                  } while (lVar18 * 4 != lVar17);
                }
              }
            }
          }
          uVar19 = local_104 & ~(uint)uVar22;
          puVar16 = (uint *)local_f0[4];
          if ((uint *)local_f0[4] == (uint *)0x0) {
            puVar16 = local_f8;
          }
          iVar7 = (int)local_f0[5];
          iVar12 = (int)uVar21;
          lVar18 = (longlong)iVar12;
          uVar13 = puVar16[lVar18] & uVar19;
          iVar6 = local_108;
          if (uVar13 == 0) {
            iVar14 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar14 = iVar7 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar15 = iVar14;
            if (iVar14 < iVar12) {
              iVar15 = iVar12;
            }
            if (iVar14 <= iVar12) break;
            lVar17 = 0;
            while( true ) {
              iVar6 = iVar6 + 0x20;
              uVar13 = puVar16[lVar18 + lVar17 + 1];
              if (uVar13 != 0) break;
              lVar17 = lVar17 + 1;
              if (iVar15 - lVar18 == lVar17) goto LAB_143ce2e5a;
            }
            uVar21 = (ulonglong)(iVar12 + (int)lVar17 + 1);
            uVar19 = 0xffffffff;
          }
          uVar22 = (ulonglong)(-uVar13 & uVar13);
          uVar2 = uVar22 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar12 = (iVar6 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        } while (iVar12 < iVar7);
      }
    }
  }
  else {
LAB_143ce2e45:
    FUN_14349000e(param_1,param_2,param_3);
    *(undefined1 *)(param_1 + 0x246) = 0;
  }
LAB_143ce2e5a:
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce2e98 FUN_143ce2e98 body=95 status=ok
// SIG undefined FUN_143ce2e98(void)

longlong FUN_143ce2e98(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x11d8) == 0) || (*(int *)(param_1 + 0x11d4) == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x11d0);
  lVar3 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x11d4)) {
      return 0;
    }
    lVar3 = 0;
    if ((*(uint *)(lVar2 + 8) & 0x10200000) == 0) {
      lVar3 = *(longlong *)(param_1 + 0x11d8);
    }
  }
  return lVar3;
}



// FUNCTION 143ce2ef7 FUN_143ce2ef7 body=69 status=ok
// SIG undefined FUN_143ce2ef7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce2ef7(void)

{
  _DAT_14cb76140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce2f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76148,1);
  return;
}



// FUNCTION 143ce2f3c FUN_143ce2f3c body=69 status=ok
// SIG undefined FUN_143ce2f3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce2f3c(void)

{
  _DAT_14cb76158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce2f7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76160,1);
  return;
}



// FUNCTION 143ce2f81 FUN_143ce2f81 body=69 status=ok
// SIG undefined FUN_143ce2f81(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce2f81(void)

{
  _DAT_14cb76170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce2fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76178,1);
  return;
}



// FUNCTION 143ce2fc6 FUN_143ce2fc6 body=69 status=ok
// SIG undefined FUN_143ce2fc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce2fc6(void)

{
  _DAT_14cb76188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce3008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76190,1);
  return;
}



// FUNCTION 143ce300b FUN_143ce300b body=69 status=ok
// SIG undefined FUN_143ce300b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce300b(void)

{
  _DAT_14cb761a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce304d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb761a8,1);
  return;
}



// FUNCTION 143ce3050 FUN_143ce3050 body=69 status=ok
// SIG undefined FUN_143ce3050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce3050(void)

{
  _DAT_14cb761b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce3092. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb761c0,1);
  return;
}



// FUNCTION 143ce3095 FUN_143ce3095 body=69 status=ok
// SIG undefined FUN_143ce3095(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce3095(void)

{
  _DAT_14cb761d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143ce30d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb761d8,1);
  return;
}



// FUNCTION 143ce30da FUN_143ce30da body=652 status=ok
// SIG undefined FUN_143ce30da(void)

void FUN_143ce30da(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_1[0x2c6] == 0) {
    cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_140769252(param_1);
      if (((cVar1 == '\0') && (param_1[0x2c7] == 0)) && (param_1[0x32d] == 0)) {
        plVar6 = (longlong *)(param_1[0x2c6] + 0x98);
        if (param_1[0x2c6] == 0) {
          plVar6 = param_1 + 0x32d;
        }
        if (*plVar6 == 0) {
          if (param_1[0x313] != 0) {
            FUN_14150b006(param_1);
          }
          goto LAB_143ce325b;
        }
      }
    }
  }
  lVar4 = param_1[(longlong)(int)param_1[0xe3] * 2 + 0x110];
  iVar3 = FUN_1417c02a0(param_1);
  if ((0 < (int)lVar4) && ((int)lVar4 != iVar3)) {
    FUN_1406c8fce(param_1,0);
  }
  if ((char)param_1[0x300] == '\0') {
    cVar1 = FUN_143ce7282(param_1);
    if (cVar1 == '\0') {
      if (((param_1[0x15] == 0) || (*(char *)(param_1[0x15] + 0x178) != '\x03')) &&
         ((char)param_1[0x2f3] == '\0')) {
        cVar1 = FUN_140f2b868(param_1);
        if (cVar1 != '\0') {
          if ((*(byte *)((longlong)param_1 + 0x9f) & 0x20) != 0) {
            FUN_141032122(param_1,0);
          }
          goto LAB_143ce323e;
        }
      }
      cVar1 = FUN_143ce7282(param_1);
      if (cVar1 == '\0') {
        FUN_1410322f8(param_1);
      }
    }
  }
  else if (((char)param_1[0x322] == '\x01') && (0 < (int)param_1[0x317])) {
    FUN_140c99494(param_1 + 0xc4,param_1 + 0x316);
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar2 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar2 & 1) == 0) {
LAB_143ce31e0:
        *(byte *)((longlong)param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
      else if (param_1[0x16] == 0) {
        lVar4 = FUN_1448abda6(param_1);
        if (lVar4 == 0) {
          bVar2 = *(byte *)((longlong)param_1 + 0x9d);
          goto LAB_143ce31e0;
        }
      }
    }
  }
LAB_143ce323e:
  if (param_1[0xcb] == 0) {
    if ((DAT_14c950c29 & param_1[0xcc] != 0) == 0) {
      if (param_1[0xcc] == 0) {
        uVar5 = FUN_148810ddc(param_1);
        FUN_140c989ce(param_1,uVar5);
      }
      goto LAB_143ce325b;
    }
  }
  else if (DAT_14c950c29 != 1) goto LAB_143ce325b;
  FUN_1456cec3c();
LAB_143ce325b:
  plVar6 = (longlong *)param_1[0x15];
  if (plVar6 != (longlong *)0x0) {
    uVar5 = FUN_1414cc598();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_1414cc598();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
        (**(code **)(*plVar7 + 0x10))(plVar7,param_1);
      }
    }
  }
  FUN_14036b79c(param_1 + 0x277,param_1[0x15]);
  FUN_14085b0fa(param_1);
  return;
}



// FUNCTION 143ce3366 FUN_143ce3366 body=395 status=ok
// SIG undefined FUN_143ce3366(void)

undefined8 FUN_143ce3366(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_147a0f7f2();
  uVar5 = 1;
  if (cVar3 != '\0') goto LAB_143ce349d;
  plVar8 = (longlong *)param_1[0x2c6];
  if (plVar8 == (longlong *)0x0) {
    cVar3 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (((cVar3 != '\0') || (cVar3 = FUN_140769252(param_1), cVar3 != '\0')) ||
       (param_1[0x2c7] != 0)) {
      plVar8 = (longlong *)param_1[0x2c6];
      if (plVar8 != (longlong *)0x0) goto LAB_143ce33d9;
      lVar9 = param_1[0x2c7];
      if (lVar9 == 0) goto LAB_143ce349b;
      local_48 = (longlong *)0x0;
      uStack_40 = 1;
      FUN_14023b962(&local_48,0);
      *local_48 = lVar9;
      goto LAB_143ce340b;
    }
  }
  else {
LAB_143ce33d9:
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    LOCK();
    iVar4 = DAT_14cb80fb0 + 1;
    UNLOCK();
    iVar10 = DAT_14cb80fb0 + 1;
    DAT_14cb80fb0 = iVar4;
    if ((int)plVar8[8] != iVar10) {
      *(int *)(plVar8 + 8) = iVar10;
      (**(code **)(*plVar8 + 0x2b0))(0,&local_48);
    }
LAB_143ce340b:
    plVar8 = local_48;
    lVar9 = (longlong)(int)uStack_40;
    if (lVar9 == 0) {
      bVar2 = true;
    }
    else {
      lVar11 = 0;
      do {
        plVar1 = *(longlong **)((longlong)plVar8 + lVar11);
        if (plVar1 != (longlong *)0x0) {
          lVar7 = plVar1[0x9d];
          lVar6 = (**(code **)(*plVar1 + 0x3f0))(plVar1);
          if (lVar6 == 0) {
            iVar4 = 0;
          }
          else {
            lVar6 = (**(code **)(*plVar1 + 0x3f0))(plVar1);
            iVar4 = *(int *)(lVar6 + 0x1b0);
          }
          iVar10 = iVar4 + (int)lVar7;
          if ((iVar10 != 0 && SCARRY4(iVar4,(int)lVar7) == iVar10 < 0) ||
             (lVar7 = (**(code **)(*plVar1 + 0x308))(plVar1), 0 < *(int *)(lVar7 + 0x28))) {
            bVar2 = false;
            goto LAB_143ce3487;
          }
        }
        lVar11 = lVar11 + 8;
      } while (lVar9 * 8 != lVar11);
      bVar2 = true;
    }
LAB_143ce3487:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8(local_48);
    }
    uVar5 = 1;
    if (!bVar2) goto LAB_143ce349d;
  }
LAB_143ce349b:
  uVar5 = 0;
LAB_143ce349d:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143ce34f2 FUN_143ce34f2 body=957 status=ok
// SIG undefined FUN_143ce34f2(void)

void FUN_143ce34f2(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_1c8 [40];
  undefined8 *local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_160;
  int local_158;
  longlong local_140;
  int local_138;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_147a0f82a();
  plVar5 = (longlong *)param_1[0x2c6];
  if (plVar5 == (longlong *)0x0) {
    cVar2 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (((cVar2 == '\0') && (cVar2 = FUN_140769252(param_1), cVar2 == '\0')) &&
       (param_1[0x2c7] == 0)) goto LAB_143ce35c7;
    plVar5 = (longlong *)param_1[0x2c6];
    if (plVar5 != (longlong *)0x0) goto LAB_143ce3564;
    lVar12 = param_1[0x2c7];
    if (lVar12 == 0) goto LAB_143ce35c7;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = (longlong *)0x0;
    uStack_180 = 1;
    FUN_14023b962(&local_188,0);
    *local_188 = lVar12;
  }
  else {
LAB_143ce3564:
    local_178 = 0;
    uStack_170 = 0;
    local_188 = (longlong *)0x0;
    uStack_180 = 0;
    LOCK();
    iVar3 = DAT_14cb80fb0 + 1;
    UNLOCK();
    iVar9 = DAT_14cb80fb0 + 1;
    DAT_14cb80fb0 = iVar3;
    if ((int)plVar5[8] != iVar9) {
      *(int *)(plVar5 + 8) = iVar9;
      (**(code **)(*plVar5 + 0x2b0))(0,&local_188);
    }
  }
  if (0 < (longlong)(int)uStack_180) {
    plVar11 = local_188 + (int)uStack_180;
    plVar5 = local_188;
    local_1a0 = param_2;
    local_198 = param_1;
    do {
      (**(code **)(*(longlong *)*plVar5 + 0x3d8))((longlong *)*plVar5,&local_160);
      lVar12 = local_160;
      lVar8 = (longlong)local_158;
      if (lVar8 != 0) {
        lVar6 = 0;
        do {
          local_190 = *(undefined8 *)(lVar12 + lVar6);
          FUN_148813966(&local_178,&local_190);
          lVar6 = lVar6 + 8;
        } while (lVar8 * 8 != lVar6);
      }
      if (local_160 != 0) {
        FUN_1400020a8(local_160);
      }
      puVar7 = local_1a0;
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar11);
    if (0 < (int)uStack_170) {
      lVar12 = 0;
      iVar3 = (int)uStack_170;
      do {
        lVar8 = *(longlong *)(local_178 + lVar12 * 8);
        if (lVar8 != 0) {
          plVar5 = (longlong *)*puVar7;
          iVar9 = *(int *)(puVar7 + 1);
          lVar6 = (longlong)iVar9;
          if (lVar6 != 0) {
            lVar10 = lVar6 * 0xc;
            plVar11 = plVar5;
            do {
              if ((*plVar11 == *(longlong *)(lVar8 + 0x28)) && ((char)plVar11[1] == '\x02')) {
                if (plVar11 != (longlong *)0x0) goto LAB_143ce3731;
                break;
              }
              plVar11 = (longlong *)((longlong)plVar11 + 0xc);
              lVar10 = lVar10 + -0xc;
            } while (lVar10 != 0);
          }
          *(uint *)(puVar7 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)puVar7 + 0xc) < iVar9 + 1U) {
            FUN_1474acd28(puVar7,iVar9);
            plVar5 = (longlong *)*puVar7;
          }
          *(undefined8 *)((longlong)plVar5 + lVar6 * 0xc) = *(undefined8 *)(lVar8 + 0x28);
          *(undefined1 *)((longlong)plVar5 + lVar6 * 0xc + 8) = 2;
          iVar3 = (int)uStack_170;
        }
LAB_143ce3731:
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar3);
    }
    plVar11 = local_198;
    plVar5 = (longlong *)local_198[0xcb];
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)local_198[0xcc];
      if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_143ce3866;
      if (plVar5 != (longlong *)0x0) goto LAB_143ce3880;
      uVar4 = (**(code **)(*(longlong *)*local_188 + 0x310))();
      puVar7 = local_1a0;
    }
    else {
      if (DAT_14c950c29 != 0) {
LAB_143ce3866:
        FUN_1456cec3c(plVar5);
        plVar5 = (longlong *)plVar11[0xcb];
        if (plVar5 == (longlong *)0x0) {
LAB_143ce3880:
          plVar5 = (longlong *)local_198[0xcc];
          bVar1 = DAT_14c950c29 & plVar5 != (longlong *)0x0;
        }
        else {
          bVar1 = DAT_14c950c29 & 1;
        }
        puVar7 = local_1a0;
        if (bVar1 != 0) {
          FUN_1456cec3c(plVar5);
        }
      }
      uVar4 = (**(code **)(*plVar5 + 0x310))(plVar5);
    }
    FUN_148810f6a(&local_160,uVar4);
    if (0 < local_138) {
      lVar12 = 0;
      iVar3 = local_138;
      do {
        lVar8 = *(longlong *)(local_140 + lVar12 * 0xc);
        plVar5 = (longlong *)*puVar7;
        iVar9 = *(int *)(puVar7 + 1);
        lVar6 = (longlong)iVar9;
        if (lVar6 != 0) {
          lVar10 = lVar6 * 0xc;
          plVar11 = plVar5;
          do {
            if ((*plVar11 == lVar8) && ((char)plVar11[1] == '\x01')) {
              if (plVar11 != (longlong *)0x0) goto LAB_143ce37ff;
              break;
            }
            plVar11 = (longlong *)((longlong)plVar11 + 0xc);
            lVar10 = lVar10 + -0xc;
          } while (lVar10 != 0);
        }
        *(uint *)(puVar7 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)puVar7 + 0xc) < iVar9 + 1U) {
          FUN_1474acd28(puVar7,iVar9);
          plVar5 = (longlong *)*puVar7;
        }
        *(longlong *)((longlong)plVar5 + lVar6 * 0xc) = lVar8;
        *(undefined1 *)((longlong)plVar5 + lVar6 * 0xc + 8) = 1;
        iVar3 = local_138;
LAB_143ce37ff:
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar3);
    }
    FUN_14074f6ec(&local_160);
  }
  if (local_188 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
LAB_143ce35c7:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce38b0 FUN_143ce38b0 body=418 status=ok
// SIG undefined FUN_143ce38b0(void)

longlong * FUN_143ce38b0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_2 != 0) &&
      ((((param_1[0x2c6] != 0 || (cVar4 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar4 != '\0'))
        || (cVar4 = FUN_140769252(param_1), cVar4 != '\0')) || (param_1[0x2c7] != 0)))) &&
     (cVar4 = (**(code **)(*param_1 + 0xc08))(param_1,param_2), cVar4 != '\0')) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    local_28 = param_2;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    iVar6 = FUN_1407bd8e0(param_1 + 0x307,uVar5 >> 0x10 ^ uVar5,&local_28);
    if ((iVar6 != -1) && (lVar7 = (longlong)iVar6 * 0x20 + param_1[0x307], lVar7 != 0)) {
      plVar8 = *(longlong **)(lVar7 + 8);
      plVar3 = *(longlong **)(lVar7 + 0x10);
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
      if (plVar8 != (longlong *)0x0) goto LAB_143ce38d8;
    }
  }
  plVar8 = param_1 + 0xe8;
LAB_143ce38d8:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 143ce3a54 FUN_143ce3a54 body=38 status=ok
// SIG undefined FUN_143ce3a54(void)

void FUN_143ce3a54(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x1260) & 1) == 0) {
    FUN_1448aa6e2(param_1);
  }
  FUN_143495802(param_1);
  return;
}



// FUNCTION 143ce3a7a FUN_143ce3a7a body=5099 status=ok
// SIG undefined FUN_143ce3a7a(void)

void FUN_143ce3a7a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  code *pcVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  int *piVar21;
  longlong *plVar22;
  ulonglong uVar23;
  double *pdVar24;
  byte bVar25;
  int iVar26;
  ulonglong uVar27;
  longlong *plVar28;
  ulonglong uVar29;
  double *pdVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong *puVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  double *pdVar37;
  undefined8 uVar38;
  longlong *plVar39;
  int iVar40;
  int iVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  longlong lVar44;
  int iVar45;
  longlong *plVar46;
  longlong *plVar47;
  bool bVar48;
  float fVar49;
  float fVar50;
  undefined1 auStack_508 [32];
  code **local_4e8;
  code **local_4e0;
  longlong *local_4d8;
  code **local_4d0;
  undefined2 *local_4c8;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  code **local_4b0;
  undefined1 *local_4a8;
  code *local_4a0;
  longlong *local_490;
  ulonglong local_488;
  ulonglong local_480;
  longlong *local_478;
  longlong local_470;
  longlong *local_468;
  int local_45c;
  longlong *local_458;
  longlong *local_450;
  longlong *local_448;
  undefined8 *local_440;
  undefined8 *local_438;
  longlong *local_430;
  uint *local_428;
  uint *local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  longlong local_408;
  longlong local_3f8;
  longlong lStack_3f0;
  longlong local_3e8;
  code *local_3e0;
  longlong *local_3d8;
  double local_3d0;
  code *local_3c8 [23];
  undefined8 local_310;
  undefined8 local_308 [2];
  undefined4 local_2f8;
  undefined1 local_2f4;
  uint local_2f0 [10];
  undefined2 local_2c8 [2];
  undefined4 local_2c4;
  undefined4 local_224;
  undefined8 local_210;
  undefined8 local_208 [2];
  undefined4 local_1f8;
  undefined1 local_1f4;
  uint local_1f0;
  int iStack_1ec;
  longlong local_1c8;
  longlong *local_1c0;
  code *local_1b8;
  longlong *plStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  longlong local_168;
  longlong *local_158;
  longlong local_148 [4];
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  lVar18 = (**(code **)(*param_1 + 0x10))();
  if (*(int *)(lVar18 + 0x18) != *(int *)(lVar18 + 0x44)) {
    lVar20 = *(longlong *)(param_2 + 0x200);
    uVar17 = (uint)((ulonglong)lVar20 >> 0x10);
    uVar31 = (uint)lVar20 & 0xffff;
    lVar33 = lVar18 + 0x48;
    if (*(longlong *)(lVar18 + 0x50) != 0) {
      lVar33 = *(longlong *)(lVar18 + 0x50);
    }
    iVar41 = *(int *)(lVar33 + (ulonglong)
                               (*(int *)(lVar18 + 0x58) - 1U &
                               (int)((ulonglong)lVar20 >> 0x20) + ((uint)lVar20 << 0x10 | uVar31) +
                               (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar31 >> 4)) * 4);
    if (iVar41 != -1) {
      local_468 = param_1 + -0x247;
      do {
        if (*(longlong *)(*(longlong *)(lVar18 + 0x10) + (longlong)iVar41 * 0x460) == lVar20) {
          if (DAT_14c9abbf0 == lVar20) {
            lVar18 = param_1[-0x232];
            if (lVar18 != 0) {
              if (DAT_14cb5b388 == 0) {
                local_4b0 = &local_1b8;
                local_1b8 = FUN_141864c34;
                local_4a0 = FUN_14081d0ea;
                local_4a8 = &LAB_146431698;
                local_4b8 = &LAB_1486775cb;
                local_4c0 = &LAB_1464cee35;
                local_4c8 = &DAT_149e063b2;
                local_4d0 = (code **)0x0;
                local_4d8 = (longlong *)CONCAT44(local_4d8._4_4_,0x10000005);
                local_4e0 = (code **)CONCAT44(local_4e0._4_4_,0x10);
                local_4e8 = (code **)CONCAT44(local_4e8._4_4_,0x3a20);
                FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
              }
              if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
                FUN_143c982a6(lVar18,param_2);
              }
            }
            if (*(char *)(param_2 + 0x1b8) == '\x01') {
              pdVar30 = (double *)(param_2 + 0x1c0);
              pdVar37 = (double *)(param_2 + 0x1c8);
              pdVar24 = (double *)(param_2 + 0x1d0);
            }
            else {
              lVar18 = *(longlong *)(param_2 + 0x240);
              if (lVar18 == 0) {
                pdVar30 = (double *)&DAT_14c8464e0;
                pdVar37 = (double *)&DAT_14c8464e8;
                pdVar24 = (double *)&DAT_14c8464f0;
              }
              else {
                pdVar30 = (double *)(lVar18 + 0x40);
                pdVar37 = (double *)(lVar18 + 0x48);
                pdVar24 = (double *)(lVar18 + 0x50);
              }
            }
            dVar5 = *pdVar30;
            dVar6 = *pdVar37;
            dVar7 = *pdVar24;
            *(byte *)(param_1 + -0x1c4) = *(byte *)(param_1 + -0x1c4) | 2;
            *(float *)((longlong)param_1 + -0xd8c) = (float)((dVar5 + dVar6 + dVar7) / 3.0);
            local_470 = param_2;
            if (*(longlong *)(param_2 + 0x188) == 0) {
              lVar18 = FUN_140654c40(param_2 + 0x20);
            }
            else {
              lVar18 = *(longlong *)(*(longlong *)(param_2 + 0x188) + 0x48);
            }
            if (lVar18 == 0) {
              iVar41 = 0;
            }
            else {
              if (*(longlong *)(param_2 + 0x188) == 0) {
                lVar18 = FUN_140654c40(param_2 + 0x20);
              }
              else {
                lVar18 = *(longlong *)(*(longlong *)(param_2 + 0x188) + 0x48);
              }
              iVar41 = *(int *)(lVar18 + 0x48);
              if ((int)param_1[0x78] != iVar41) {
                plVar47 = param_1 + 0x77;
                FUN_14005ea14(plVar47,iVar41);
                iVar40 = iVar41;
                if (0 < iVar41) {
                  do {
                    iVar26 = (int)param_1[0x78];
                    *(uint *)(param_1 + 0x78) = iVar26 + 1U;
                    if (*(uint *)((longlong)param_1 + 0x3c4) < iVar26 + 1U) {
                      FUN_14475e4ac(plVar47,iVar26);
                    }
                    *(undefined4 *)(*plVar47 + (longlong)iVar26 * 4) = 0xff7fffff;
                    iVar40 = iVar40 + -1;
                  } while (iVar40 != 0);
                }
              }
            }
            lVar18 = *(longlong *)(param_2 + 0x240);
            local_45c = iVar41;
            if (lVar18 == 0) break;
            iVar41 = *(int *)(lVar18 + 0x5c8);
            plVar47 = *(longlong **)(lVar18 + 0x5c0);
            *(undefined8 *)(lVar18 + 0x5c0) = 0;
            *(undefined8 *)(lVar18 + 0x5c8) = 0;
            local_458 = plVar47;
            if ((longlong)iVar41 != 0) {
              plVar39 = plVar47 + (longlong)iVar41 * 0xb;
              plVar1 = param_1 + 0x3f;
              local_428 = &local_1f0;
              local_430 = param_1 + -0x194;
              local_420 = local_2f0;
              local_450 = param_1 + 0x74;
              local_448 = param_1 + 0x6a;
              local_440 = local_308;
              local_438 = local_208;
              plVar2 = param_1 + 0x46;
              plVar28 = param_1 + 0x41;
              local_490 = plVar28;
              do {
                if ((((((int)plVar47[2] != 0) &&
                      (uVar17 = *(uint *)((longlong)plVar47 + 0xc), -1 < (int)uVar17)) &&
                     ((int)uVar17 < DAT_14c9647dc)) &&
                    ((puVar34 = (ulonglong *)
                                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
                     puVar34 != (ulonglong *)0x0 && ((int)puVar34[2] == (int)plVar47[2])))) &&
                   (((puVar34[1] & 0x10200000) == 0 && (uVar42 = *puVar34, uVar42 != 0)))) {
                  uVar17 = ((uint)(uVar42 >> 0x14) & 0xffff ^ (uint)(uVar42 >> 4)) * -0x7a143595;
                  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
                  uVar17 = uVar17 >> 0x10 ^ uVar17;
                  iVar40 = (int)param_1[0x40];
                  iVar41 = *(int *)((longlong)param_1 + 0x22c);
                  if (iVar40 != iVar41) {
                    plVar22 = (longlong *)param_1[0x47];
                    if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                      plVar22 = plVar2;
                    }
                    iVar26 = *(int *)((longlong)plVar22 +
                                     (ulonglong)((int)param_1[0x48] - 1U & uVar17) * 4);
                    if (iVar26 != -1) {
                      do {
                        puVar34 = (ulonglong *)(*plVar1 + (longlong)iVar26 * 0x18);
                        if (*puVar34 == uVar42) {
                          if (puVar34 != (ulonglong *)0x0) goto LAB_143ce3eb6;
                          break;
                        }
                        iVar26 = (int)puVar34[2];
                      } while (iVar26 != -1);
                    }
                  }
                  if (iVar41 == 0) {
                    *(int *)(param_1 + 0x40) = iVar40 + 1;
                    if (*(int *)((longlong)param_1 + 0x204) == iVar40) {
                      FUN_14482b872(plVar1,iVar40);
                      plVar28 = local_490;
                    }
                    uVar31 = *(uint *)(param_1 + 0x44);
                    uVar27 = (ulonglong)uVar31;
                    if (uVar31 == 0) {
                      iVar41 = -1;
                    }
                    else {
                      iVar41 = uVar31 + 0x1e;
                      if (-1 < (int)(uVar31 - 1)) {
                        iVar41 = uVar31 - 1;
                      }
                      iVar41 = iVar41 >> 5;
                    }
                    iVar26 = uVar31 + 1;
                    uVar32 = uVar31 + 0x1f;
                    if (-1 < (int)uVar31) {
                      uVar32 = uVar31;
                    }
                    iVar45 = (int)uVar32 >> 5;
                    if (iVar45 == iVar41) {
                      *(int *)(param_1 + 0x44) = iVar26;
                    }
                    else {
                      if (*(int *)((longlong)param_1 + 0x224) <= (int)uVar31) {
                        local_478 = (longlong *)CONCAT44(local_478._4_4_,iVar45);
                        local_488 = uVar27;
                        if (uVar31 + 0x20 < 0xa0) {
                          uVar27 = (ulonglong)uVar31;
                          iVar41 = 0x80;
                        }
                        else {
                          uVar31 = uVar31 + 0x20 >> 5;
                          local_480 = (ulonglong)uVar31;
                          if (*(int *)((longlong)param_1 + 0x224) + 0x1fU < 0xa0) {
                            uVar32 = 4;
                            if (4 < uVar31) {
                              uVar32 = uVar31;
                            }
                          }
                          else {
                            uVar32 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
                          }
                          uVar23 = (ulonglong)(uVar32 * 4);
                          if (DAT_14c872d28 != (longlong *)0x0) {
                            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                              uVar31 = (uint)(uVar23 + 0xf);
                              if (uVar32 < 0x1ffd) {
                                uVar23 = (ulonglong)
                                         (ushort)(&DAT_14c841d90)
                                                 [0x32 - (byte)(&DAT_14c841e00)[uVar23 + 0xf >> 4]];
                              }
                              else {
                                uVar29 = (ulonglong)(uVar31 & 0xfffffff0);
                                if (uVar29 < 0x7ff1) {
                                  bVar25 = (&DAT_14c841e00)[uVar31 >> 4];
                                  uVar36 = 0x32;
                                  if (0x32 < bVar25) {
                                    uVar36 = (ulonglong)bVar25;
                                  }
                                  uVar43 = 0x32 - (ulonglong)bVar25;
                                  do {
                                    uVar23 = (ulonglong)
                                             (ushort)(&DAT_14c841d90)[uVar43 & 0xffffffff];
                                    if (((&DAT_14c841d90)[uVar43 & 0xffffffff] & 0xf) == 0)
                                    goto LAB_143ce4baf;
                                    lVar18 = uVar36 + 1 + uVar43;
                                    uVar43 = uVar43 - 1;
                                  } while (lVar18 != 0x33);
                                }
                                uVar23 = (ulonglong)DAT_14c841df8;
                                if (DAT_14c841df8 < 0x11) {
                                  uVar23 = 0x10;
                                }
                                uVar23 = -uVar23 & (uVar29 + uVar23) - 1;
                              }
                            }
                            else {
                              uVar23 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar23,0);
                              uVar27 = (ulonglong)*(uint *)(param_1 + 0x44);
                            }
                          }
LAB_143ce4baf:
                          iVar26 = (int)(uVar23 >> 2);
                          iVar41 = iVar26 << 5;
                          if (iVar26 < (int)local_480) {
                            iVar41 = -0x20;
                          }
                        }
                        *(int *)((longlong)param_1 + 0x224) = iVar41;
                        FUN_1446efbd8(local_490,uVar27);
                        iVar26 = (int)param_1[0x44] + 1;
                        plVar28 = local_490;
                        uVar27 = local_488;
                        iVar45 = (int)local_478;
                      }
                      iVar41 = iVar26 + 0x1f;
                      if (-1 < iVar26) {
                        iVar41 = iVar26;
                      }
                      *(int *)(param_1 + 0x44) = iVar26;
                      if (iVar26 % 0x20 != 0) {
                        plVar22 = (longlong *)param_1[0x43];
                        if ((longlong *)param_1[0x43] == (longlong *)0x0) {
                          plVar22 = plVar28;
                        }
                        bVar25 = -(char)(iVar26 % 0x20);
                        *(uint *)((longlong)plVar22 + (longlong)(iVar41 >> 5) * 4) =
                             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar41 >> 5) * 4) <<
                                   (bVar25 & 0x1f)) >> (bVar25 & 0x1f);
                      }
                    }
                    lVar18 = (longlong)iVar40;
                    plVar22 = (longlong *)param_1[0x43];
                    if ((longlong *)param_1[0x43] == (longlong *)0x0) {
                      plVar22 = plVar28;
                    }
                    bVar25 = (byte)uVar27 & 0x1f;
                    puVar3 = (uint *)((longlong)plVar22 + (longlong)iVar45 * 4);
                    *puVar3 = *puVar3 & (-2 << bVar25 | 0xfffffffeU >> 0x20 - bVar25);
                  }
                  else {
                    iVar40 = (int)param_1[0x45];
                    lVar18 = (longlong)iVar40;
                    iVar26 = *(int *)(param_1[0x3f] + 4 + lVar18 * 0x18);
                    *(int *)(param_1 + 0x45) = iVar26;
                    *(int *)((longlong)param_1 + 0x22c) = iVar41 + -1;
                    if (iVar41 + -1 != 0) {
                      *(undefined4 *)(param_1[0x3f] + (longlong)iVar26 * 0x18) = 0xffffffff;
                    }
                  }
                  plVar22 = (longlong *)param_1[0x43];
                  if ((longlong *)param_1[0x43] == (longlong *)0x0) {
                    plVar22 = plVar28;
                  }
                  iVar41 = iVar40 + 0x1f;
                  if (-1 < iVar40) {
                    iVar41 = iVar40;
                  }
                  puVar3 = (uint *)((longlong)plVar22 + (longlong)(iVar41 >> 5) * 4);
                  *puVar3 = *puVar3 | 1 << ((byte)iVar40 & 0x1f);
                  puVar34 = (ulonglong *)(param_1[0x3f] + lVar18 * 0x18);
                  *puVar34 = uVar42;
                  *(undefined4 *)(puVar34 + 1) = 0;
                  *(undefined4 *)(puVar34 + 2) = 0xffffffff;
                  uVar31 = (int)param_1[0x40] - *(int *)((longlong)param_1 + 0x22c);
                  if (1 < uVar31) {
                    plVar22 = (longlong *)param_1[0x47];
                    if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                      plVar22 = plVar2;
                    }
                    iVar41 = *(int *)((longlong)plVar22 +
                                     (ulonglong)((int)param_1[0x48] - 1U & uVar17) * 4);
                    if (iVar41 != -1) {
                      do {
                        puVar4 = (ulonglong *)(*plVar1 + (longlong)iVar41 * 0x18);
                        if (*puVar4 == uVar42) {
                          uVar13 = *(undefined4 *)((longlong)puVar34 + 4);
                          uVar27 = puVar34[1];
                          uVar14 = *(undefined4 *)((longlong)puVar34 + 0xc);
                          *(int *)puVar4 = (int)*puVar34;
                          *(undefined4 *)((longlong)puVar4 + 4) = uVar13;
                          *(int *)(puVar4 + 1) = (int)uVar27;
                          *(undefined4 *)((longlong)puVar4 + 0xc) = uVar14;
                          FUN_143ce8f04(plVar1,iVar40);
                          plVar28 = local_490;
                          goto LAB_143ce463d;
                        }
                        iVar41 = (int)puVar4[2];
                      } while (iVar41 != -1);
                    }
                  }
                  iVar41 = 1;
                  if (3 < uVar31) {
                    uVar27 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
                    lVar18 = 0x3f;
                    if (uVar27 != 0) {
                      for (; uVar27 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                      }
                    }
                    iVar41 = 1 << ((byte)lVar18 & 0x1f);
                  }
                  if (((int)uVar31 < 1) || (iVar41 <= (int)param_1[0x48])) {
                    uVar31 = (int)param_1[0x48] - 1U & uVar17;
                    *(uint *)((longlong)puVar34 + 0x14) = uVar31;
                    plVar22 = (longlong *)param_1[0x47];
                    if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                      plVar22 = plVar2;
                    }
                    *(undefined4 *)(puVar34 + 2) =
                         *(undefined4 *)
                          ((longlong)plVar22 +
                          ((longlong)(int)param_1[0x48] - 1U & (longlong)(int)uVar31) * 4);
                    plVar22 = (longlong *)param_1[0x47];
                    if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                      plVar22 = plVar2;
                    }
                    *(int *)((longlong)plVar22 +
                            ((longlong)(int)param_1[0x48] - 1U & (longlong)(int)uVar31) * 4) =
                         iVar40;
                  }
                  else {
                    *(int *)(param_1 + 0x48) = iVar41;
                    FUN_1418760ce(plVar1);
                    plVar28 = local_490;
                  }
LAB_143ce463d:
                  puVar34 = (ulonglong *)(*plVar1 + (longlong)iVar40 * 0x18);
LAB_143ce3eb6:
                  puVar34 = puVar34 + 1;
                  iVar41 = (int)*puVar34;
                  if (*(int *)((longlong)plVar47 + 0x14) == 0) {
                    *(int *)puVar34 = iVar41 + 1;
                    if (((*(byte *)((longlong)param_1 + -0xf65) & 0x10) != 0) || (iVar41 < 1)) {
                      memset(local_2c8,0,0x100);
                      local_1f8 = 0xffffffff;
                      local_2c4 = 0x3f800000;
                      local_224 = 0xffffffff;
                      FUN_140871986(plVar47,local_2c8);
                      dVar5 = (double)plVar47[6];
                      dVar6 = (double)plVar47[5];
                      dVar7 = (double)plVar47[4];
                      dVar8 = (double)plVar47[3];
                      memcpy(local_3c8,local_2c8,0xb8);
                      local_310 = local_210;
                      uVar38 = local_438[1];
                      *local_440 = *local_438;
                      local_440[1] = uVar38;
                      local_2f8 = local_1f8;
                      local_2f4 = local_1f4;
                      *(undefined8 *)(local_420 + 8) = *(undefined8 *)(local_428 + 8);
                      uVar17 = *local_428;
                      uVar31 = local_428[1];
                      uVar32 = local_428[2];
                      uVar9 = local_428[3];
                      uVar10 = local_428[5];
                      uVar11 = local_428[6];
                      uVar12 = local_428[7];
                      local_420[4] = local_428[4];
                      local_420[5] = uVar10;
                      local_420[6] = uVar11;
                      local_420[7] = uVar12;
                      *local_420 = uVar17;
                      local_420[1] = uVar31;
                      local_420[2] = uVar32;
                      local_420[3] = uVar9;
                      if ((iStack_1ec == 0) || ((int)local_1f0 < 0)) {
LAB_143ce4654:
                        uVar38 = 0;
                      }
                      else {
                        uVar38 = 0;
                        if ((int)local_1f0 < DAT_14c9647dc) {
                          puVar35 = (undefined8 *)
                                    ((ulonglong)((local_1f0 & 0xffff) * 0x18) +
                                    *(longlong *)
                                     (DAT_14c9647c8 + (ulonglong)(local_1f0 >> 0x10) * 8));
                          if (((puVar35 == (undefined8 *)0x0) ||
                              (*(int *)(puVar35 + 2) != iStack_1ec)) ||
                             ((*(uint *)(puVar35 + 1) & 0x10200000) != 0)) goto LAB_143ce4654;
                          uVar38 = *puVar35;
                        }
                      }
                      uVar19 = FUN_14485cccc(&local_210);
                      FUN_1400dcbbc(local_430,&local_1c8);
                      if (local_1c8 != 0) {
                        local_4e0 = local_3c8;
                        local_4e8 = &local_1b8;
                        local_1b8 = (code *)(dVar5 * dVar8);
                        plStack_1b0 = (longlong *)(dVar7 * dVar5);
                        local_1a8 = dVar6 * dVar5;
                        FUN_1417aded4(local_1c8,local_468,uVar19,uVar38);
                      }
                      plVar28 = local_1c0;
                      if (local_1c0 != (longlong *)0x0) {
                        LOCK();
                        plVar22 = local_1c0 + 1;
                        *(int *)plVar22 = (int)*plVar22 + -1;
                        UNLOCK();
                        if ((int)*plVar22 == 0) {
                          (**(code **)*local_1c0)(local_1c0);
                          LOCK();
                          piVar21 = (int *)((longlong)plVar28 + 0xc);
                          *piVar21 = *piVar21 + -1;
                          UNLOCK();
                          if (*piVar21 == 0) {
                            (**(code **)(*plVar28 + 0x10))(plVar28);
                          }
                        }
                      }
                      plVar28 = (longlong *)param_1[-0x232];
                      if (plVar28 != (longlong *)0x0) {
                        local_3f8 = plVar47[3];
                        lStack_3f0 = plVar47[4];
                        local_3e8 = plVar47[5];
                        local_418 = (undefined4)plVar47[8];
                        uStack_414 = *(undefined4 *)((longlong)plVar47 + 0x44);
                        uStack_410 = (undefined4)plVar47[9];
                        uStack_40c = *(undefined4 *)((longlong)plVar47 + 0x4c);
                        local_408 = plVar47[10];
                        if ((iStack_1ec == 0) || ((int)local_1f0 < 0)) {
LAB_143ce46c2:
                          uVar38 = 0;
                        }
                        else {
                          uVar38 = 0;
                          if ((int)local_1f0 < DAT_14c9647dc) {
                            puVar35 = (undefined8 *)
                                      ((ulonglong)((local_1f0 & 0xffff) * 0x18) +
                                      *(longlong *)
                                       (DAT_14c9647c8 + (ulonglong)(local_1f0 >> 0x10) * 8));
                            if (((puVar35 == (undefined8 *)0x0) ||
                                (*(int *)(puVar35 + 2) != iStack_1ec)) ||
                               ((*(uint *)(puVar35 + 1) & 0x10200000) != 0)) goto LAB_143ce46c2;
                            uVar38 = *puVar35;
                          }
                        }
                        local_3e0 = (code *)(dVar5 * dVar8);
                        local_3d8 = (longlong *)(dVar7 * dVar5);
                        local_3d0 = dVar6 * dVar5;
                        uVar19 = FUN_14485cccc(&local_210);
                        local_4c8 = local_2c8;
                        local_4d0 = &local_3e0;
                        local_4d8 = &local_3f8;
                        local_4e0 = (code **)&local_418;
                        local_4e8 = (code **)((ulonglong)local_4e8 & 0xffffffffffffff00);
                        (**(code **)(*plVar28 + 0x380))(plVar28,local_468,uVar19,uVar38);
                      }
                      plVar28 = local_490;
                      if ((int)plVar47[1] < local_45c) {
                        if (*(longlong *)(local_470 + 0x240) == 0) {
                          uVar17 = 0;
                        }
                        else {
                          uVar17 = *(uint *)(*(longlong *)(local_470 + 0x240) + 0xa0);
                        }
                        if ((int)param_1[0x6e] == *(int *)((longlong)param_1 + 0x39c)) {
                          lVar33 = 0;
                        }
                        else {
                          lVar18 = *plVar47;
                          uVar32 = (uint)lVar18 & 0xffff;
                          uVar31 = (uint)((ulonglong)lVar18 >> 0x10);
                          plVar28 = (longlong *)param_1[0x75];
                          if ((longlong *)param_1[0x75] == (longlong *)0x0) {
                            plVar28 = local_450;
                          }
                          iVar41 = *(int *)((longlong)plVar28 +
                                           (ulonglong)
                                           ((int)param_1[0x76] - 1U &
                                           (uVar32 >> 4) +
                                           (uVar31 << 0x13 | uVar31 & 0xffff) +
                                           (int)((ulonglong)lVar18 >> 0x20) +
                                           ((uint)lVar18 << 0x10 | uVar32)) * 4);
                          if (iVar41 != -1) {
                            lVar20 = param_1[0x6d];
                            do {
                              lVar44 = (longlong)iVar41 * 0x30;
                              lVar33 = lVar20 + lVar44;
                              if ((*(longlong *)(lVar20 + lVar44) == lVar18) &&
                                 (*(int *)(lVar20 + 8 + lVar44) == -1)) goto LAB_143ce4308;
                              iVar41 = *(int *)(lVar33 + 0x28);
                            } while (iVar41 != -1);
                          }
                          lVar33 = 0;
                        }
LAB_143ce4308:
                        fVar49 = *(float *)(param_1[0x77] + (longlong)(int)plVar47[1] * 4);
                        fVar50 = (float)uVar17 / *(float *)(local_470 + 0x78);
                        plVar22 = (longlong *)(lVar33 + 0x10);
                        if (lVar33 == 0) {
                          plVar22 = (longlong *)0x0;
                        }
                        dVar5 = (double)plVar47[7];
                        if (plVar22 == (longlong *)0x0) {
                          plVar22 = local_448;
                        }
                        lVar18 = plVar22[1];
                        if (lVar18 == 0) {
                          uVar38 = FUN_1405bb4b8();
                          lVar18 = FUN_14477b664(uVar38);
                          plVar22[1] = lVar18;
                        }
                        lVar20 = plVar22[2];
                        if (lVar20 == 0) {
                          plVar28 = local_490;
                          if ((lVar18 != 0) && (*plVar22 != 0)) {
                            plVar28 = *(longlong **)(lVar18 + 0xb8);
                            if ((plVar28 == (longlong *)0x0) ||
                               (cVar16 = (**(code **)(*plVar28 + 0x108))(plVar28), cVar16 == '\0'))
                            {
                              plVar22[2] = 0;
                              plVar28 = local_490;
                            }
                            else {
                              uVar38 = (**(code **)(*plVar28 + 0x110))(plVar28);
                              lVar20 = FUN_144aff482(uVar38,plVar22);
                              plVar22[2] = lVar20;
                              plVar28 = local_490;
                              if (lVar20 != 0) {
                                lVar18 = plVar22[1];
                                goto LAB_143ce4372;
                              }
                            }
                          }
                        }
                        else {
LAB_143ce4372:
                          if (lVar18 == 0) {
                            uVar38 = FUN_1405bb4b8();
                            lVar18 = FUN_14477b664(uVar38);
                            plVar22[1] = lVar18;
                            lVar20 = plVar22[2];
                            if (lVar20 == 0) {
                              if (lVar18 == 0) {
                                lVar20 = 0;
                              }
                              else {
                                lVar20 = 0;
                                if (*plVar22 != 0) {
                                  plVar28 = *(longlong **)(lVar18 + 0xb8);
                                  if ((plVar28 == (longlong *)0x0) ||
                                     (cVar16 = (**(code **)(*plVar28 + 0x108))(plVar28),
                                     cVar16 == '\0')) {
                                    lVar20 = 0;
                                  }
                                  else {
                                    uVar38 = (**(code **)(*plVar28 + 0x110))(plVar28);
                                    lVar20 = FUN_144aff482(uVar38,plVar22);
                                  }
                                  plVar22[2] = lVar20;
                                }
                              }
                            }
                          }
                          fVar49 = fVar50 - fVar49;
                          plVar28 = local_490;
                          if (*(float *)(lVar20 + 0x1cc) <= fVar49 &&
                              fVar49 != *(float *)(lVar20 + 0x1cc)) {
                            lVar18 = plVar22[1];
                            if (lVar18 == 0) {
                              uVar38 = FUN_1405bb4b8();
                              lVar18 = FUN_14477b664(uVar38);
                              plVar22[1] = lVar18;
                              lVar20 = plVar22[2];
                            }
                            if (lVar20 == 0) {
                              if (lVar18 == 0) {
                                lVar20 = 0;
                              }
                              else {
                                lVar20 = 0;
                                if (*plVar22 != 0) {
                                  plVar28 = *(longlong **)(lVar18 + 0xb8);
                                  if ((plVar28 == (longlong *)0x0) ||
                                     (cVar16 = (**(code **)(*plVar28 + 0x108))(plVar28),
                                     cVar16 == '\0')) {
                                    lVar20 = 0;
                                  }
                                  else {
                                    uVar38 = (**(code **)(*plVar28 + 0x110))(plVar28);
                                    lVar20 = FUN_144aff482(uVar38,plVar22);
                                  }
                                  plVar22[2] = lVar20;
                                }
                              }
                            }
                            fVar49 = ABS((float)dVar5);
                            plVar28 = local_490;
                            if (*(float *)(lVar20 + 0x1c8) <= fVar49 &&
                                fVar49 != *(float *)(lVar20 + 0x1c8)) {
                              *(float *)(param_1[0x77] + (longlong)(int)plVar47[1] * 4) = fVar50;
                              lVar18 = param_1[-0x231];
                              if (lVar18 == 0) {
                                lVar18 = FUN_1448abda6(local_468);
                              }
                              FUN_1407f7f84(&local_1b8,lVar18);
                              plVar28 = local_490;
                              if (plStack_1b0 != (longlong *)0x0) {
                                iVar41 = (int)plStack_1b0[1];
                                do {
                                  if (iVar41 == 0) {
                                    plVar46 = (longlong *)0x0;
                                    break;
                                  }
                                  LOCK();
                                  iVar40 = (int)plStack_1b0[1];
                                  bVar48 = iVar41 == iVar40;
                                  if (bVar48) {
                                    *(int *)(plStack_1b0 + 1) = iVar41 + 1;
                                    iVar40 = iVar41;
                                  }
                                  iVar41 = iVar40;
                                  UNLOCK();
                                  plVar46 = plStack_1b0;
                                } while (!bVar48);
                                LOCK();
                                piVar21 = (int *)((longlong)plStack_1b0 + 0xc);
                                *piVar21 = *piVar21 + -1;
                                UNLOCK();
                                if (*piVar21 == 0) {
                                  (**(code **)(*plStack_1b0 + 0x10))();
                                }
                                pcVar15 = local_1b8;
                                plVar28 = local_490;
                                if (plVar46 != (longlong *)0x0) {
                                  if (local_1b8 != (code *)0x0) {
                                    local_188 = 0;
                                    uStack_180 = 0;
                                    local_198 = 0;
                                    uStack_190 = 0;
                                    local_1a8 = 0.0;
                                    uStack_1a0 = 0;
                                    local_1b8 = (code *)0x0;
                                    plStack_1b0 = (longlong *)0x0;
                                    local_178 = 0xc0;
                                    local_168 = 0;
                                    local_158 = (longlong *)0x0;
                                    local_128 = 0;
                                    local_118 = (longlong *)0x0;
                                    local_d8 = 0;
                                    local_e8 = 0;
                                    uStack_e0 = 0;
                                    local_d0 = 0x3ff0000000000000;
                                    local_c8 = 0x3ff0000000000000;
                                    local_c0 = 0x3ff0000000000000;
                                    local_b8 = 0x3f80000000000000;
                                    local_b0 = fVar49;
                                    lVar18 = plVar22[1];
                                    uVar42 = param_1[-0x232];
                                    if (lVar18 == 0) {
                                      local_488 = param_1[-0x232];
                                      uVar38 = FUN_1405bb4b8();
                                      lVar18 = FUN_14477b664(uVar38);
                                      plVar22[1] = lVar18;
                                      uVar42 = local_488;
                                    }
                                    lVar20 = plVar22[2];
                                    if (lVar20 == 0) {
                                      if ((lVar18 != 0) && (*plVar22 != 0)) {
                                        plVar28 = *(longlong **)(lVar18 + 0xb8);
                                        local_488 = uVar42;
                                        if ((plVar28 == (longlong *)0x0) ||
                                           (local_478 = plVar28,
                                           cVar16 = (**(code **)(*plVar28 + 0x108))(),
                                           cVar16 == '\0')) {
                                          lVar20 = 0;
                                        }
                                        else {
                                          uVar38 = (**(code **)(*local_478 + 0x110))();
                                          lVar20 = FUN_144aff482(uVar38,plVar22);
                                        }
                                        plVar22[2] = lVar20;
                                        uVar42 = local_488;
                                        goto LAB_143ce496d;
                                      }
                                    }
                                    else {
LAB_143ce496d:
                                      if ((uVar42 != 0) && (lVar20 != 0)) {
                                        local_4e0 = &local_1b8;
                                        local_4d8 = (longlong *)
                                                    ((ulonglong)local_4d8 & 0xffffffff00000000);
                                        local_4e8 = (code **)((ulonglong)local_4e8 &
                                                             0xffffffffffffff00);
                                        FUN_1408f2522(pcVar15,lVar20,uVar42,local_2c8);
                                      }
                                    }
                                    if (local_128 != 0) {
                                      plVar28 = local_118;
                                      if (local_118 == (longlong *)0x0) {
                                        plVar28 = local_108;
                                      }
                                      (**(code **)(*plVar28 + 0x10))();
                                    }
                                    if (local_168 != 0) {
                                      plVar28 = local_158;
                                      if (local_158 == (longlong *)0x0) {
                                        plVar28 = local_148;
                                      }
                                      (**(code **)(*plVar28 + 0x10))();
                                    }
                                    if (local_188 != 0) {
                                      FUN_1400020a8();
                                    }
                                    if (local_198 != 0) {
                                      FUN_1400020a8();
                                    }
                                    if (local_1a8 != 0.0) {
                                      FUN_1400020a8();
                                    }
                                    if (local_1b8 != (code *)0x0) {
                                      FUN_1400020a8();
                                    }
                                  }
                                  LOCK();
                                  plVar22 = plVar46 + 1;
                                  *(int *)plVar22 = (int)*plVar22 + -1;
                                  UNLOCK();
                                  plVar28 = local_490;
                                  if ((int)*plVar22 == 0) {
                                    (**(code **)*plVar46)(plVar46);
                                    LOCK();
                                    piVar21 = (int *)((longlong)plVar46 + 0xc);
                                    *piVar21 = *piVar21 + -1;
                                    UNLOCK();
                                    plVar28 = local_490;
                                    if (*piVar21 == 0) {
                                      (**(code **)(*plVar46 + 0x10))(plVar46);
                                      plVar28 = local_490;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    *(int *)puVar34 = iVar41 + -1;
                    if ((iVar41 + -1 == 0) &&
                       ((int)param_1[0x40] != *(int *)((longlong)param_1 + 0x22c))) {
                      plVar22 = (longlong *)param_1[0x47];
                      if ((longlong *)param_1[0x47] == (longlong *)0x0) {
                        plVar22 = plVar2;
                      }
                      iVar41 = *(int *)((longlong)plVar22 +
                                       ((longlong)(int)uVar17 & (longlong)(int)param_1[0x48] - 1U) *
                                       4);
                      if (iVar41 != -1) {
LAB_143ce3f08:
                        puVar34 = (ulonglong *)(*plVar1 + (longlong)iVar41 * 0x18);
                        if (*puVar34 != uVar42) goto code_r0x000143ce3f1c;
                        iVar40 = *(int *)((longlong)plVar22 +
                                         (longlong)*(int *)((longlong)puVar34 + 0x14) * 4);
                        if (iVar40 == iVar41) {
                          piVar21 = (int *)((longlong)plVar22 +
                                           (longlong)*(int *)((longlong)puVar34 + 0x14) * 4);
                        }
                        else {
                          do {
                            piVar21 = (int *)(*plVar1 + (longlong)iVar40 * 0x18 + 0x10);
                            iVar40 = *piVar21;
                          } while (iVar40 != iVar41);
                        }
                        *piVar21 = (int)puVar34[2];
                        FUN_143ce8f04(plVar1);
                        plVar28 = local_490;
                      }
                    }
                  }
                }
LAB_143ce4260:
                plVar47 = plVar47 + 0xb;
              } while (plVar47 != plVar39);
            }
            if (local_458 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar41 = *(int *)((longlong)iVar41 * 0x460 + *(longlong *)(lVar18 + 0x10) + 0x450);
      } while (iVar41 != -1);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143ce3f1c:
  iVar41 = (int)puVar34[2];
  if (iVar41 == -1) goto LAB_143ce4260;
  goto LAB_143ce3f08;
}



// FUNCTION 143ce4e66 FUN_143ce4e66 body=256 status=ok
// SIG undefined FUN_143ce4e66(void)

void FUN_143ce4e66(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar6 = (longlong *)(param_1 + 0x1238);
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(plVar6);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    uVar1 = (uint)((ulonglong)DAT_14c9abbf0 >> 0x10);
    uVar7 = (uint)DAT_14c9abbf0 & 0xffff;
    lVar5 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x50);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x58) - 1U &
                             (int)((ulonglong)DAT_14c9abbf0 >> 0x20) +
                             ((uint)DAT_14c9abbf0 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0x460;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4 * 0x460) == DAT_14c9abbf0) {
          if (lVar5 == 0) {
            return;
          }
          if (*(char *)(lVar5 + 0x3f0) == '\0') {
            FUN_140cddb58(lVar5 + 0x378);
          }
          if (*(char *)(lVar5 + 0x3d3) != '\x01') {
            return;
          }
          if ((*(byte *)(lVar5 + 0x3d2) & 1) == 0) {
            return;
          }
          uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_1470fa7f8(uVar3,0,param_2);
          return;
        }
        iVar4 = *(int *)(lVar5 + 0x450);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 143ce4f66 FUN_143ce4f66 body=1 status=ok
// SIG undefined FUN_143ce4f66(void)

void FUN_143ce4f66(void)

{
  return;
}



// FUNCTION 143ce4f6a FUN_143ce4f6a body=6865 status=ok
// SIG undefined FUN_143ce4f6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce4f6a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  longlong *plVar25;
  undefined4 *puVar26;
  undefined1 uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar32;
  int iVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong *plVar37;
  code *pcVar38;
  bool bVar39;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined4 local_190;
  code **local_188;
  longlong *local_180;
  code **local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  code *local_f8;
  ulonglong uStack_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  ulonglong local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_1[0xcb] != 0) {
    if (DAT_14c950c29 == 1) goto LAB_143ce69cb;
LAB_143ce4fba:
    cVar15 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar15 == '\0') {
      if (param_1[0xcb] == 0) goto LAB_143ce6786;
      if (DAT_14c950c29 != 1) goto LAB_143ce5046;
      goto LAB_143ce69d5;
    }
    local_140 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
      param_1 = local_140;
    }
    local_110 = param_2;
    if (DAT_14c872bf0 == '\x01') {
      if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) goto LAB_143ce511b;
LAB_143ce50d9:
      if ((((DAT_14c76152c == '\x01') && (*(char *)((longlong)param_1 + 0x1fc) != '\0')) &&
          ((lVar35 = param_1[0x16], lVar35 != 0 || (lVar35 = FUN_1448abda6(param_1), lVar35 != 0))))
         && (((*(byte *)(lVar35 + 0x152) == 1 || (*(byte *)(lVar35 + 0x152) - 5 < 2)) &&
             ((*(longlong *)(lVar35 + 0x178) != 0 && (DAT_14c76152c == '\x01')))))) {
        bVar16 = *(byte *)((longlong)param_1 + 0x1fc);
        iVar18 = *(int *)(*(longlong *)(lVar35 + 0x178) + 0x3e4);
        if (iVar18 < 0) {
          iVar18 = FUN_141348de4();
        }
        if (iVar18 < (int)(uint)bVar16) goto LAB_143ce511b;
      }
      if (((DAT_14cb0cbf8 < (int)(uint)*(byte *)((longlong)param_1 + 0x1fc)) ||
          ((((cVar15 = FUN_140041326(param_1), cVar15 == '\0' &&
             ((*(byte *)((longlong)param_1 + 0x2dc) & 0x40) == 0)) &&
            ((*(byte *)((longlong)param_1 + 0x2d6) & 0x10) == 0)) &&
           ((*(byte *)((longlong)param_1 + 0x2df) & 2) == 0)))) ||
         (*(char *)((longlong)param_1 + 0x117b) != '\0')) goto LAB_143ce511b;
      lVar35 = param_1[0x16];
      if (lVar35 == 0) {
        lVar35 = FUN_1448abda6(param_1);
      }
      bVar16 = *(byte *)(lVar35 + 0x150);
      uVar36 = (ulonglong)bVar16;
      local_b8 = (code *)0x0;
      uStack_b0 = 0;
      iVar18 = (int)param_1[0x2cc];
      if (iVar18 < 0) {
LAB_143ce6922:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar18);
      }
      if (iVar18 != 0) {
        FUN_140824bde(&local_b8);
        if ((longlong)(int)param_1[0x2cc] != 0) {
          plVar25 = (longlong *)param_1[0x2cb];
          plVar37 = plVar25 + (int)param_1[0x2cc];
          do {
            lVar35 = *plVar25;
            if (lVar35 != 0) {
              if ((longlong)(int)param_1[0x336] != 0) {
                lVar22 = param_1[0x335];
                lVar34 = (longlong)(int)param_1[0x336] << 3;
                do {
                  cVar15 = FUN_14100b438(lVar22,lVar35);
                  if (cVar15 != '\0') goto LAB_143ce5fb2;
                  lVar22 = lVar22 + 8;
                  lVar34 = lVar34 + -8;
                } while (lVar34 != 0);
              }
              uVar14 = uStack_b0;
              lVar22 = (longlong)(int)uStack_b0;
              uVar19 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar19);
              if (uStack_b0._4_4_ < uVar19) {
                FUN_14023b962(&local_b8,uVar14 & 0xffffffff);
              }
              *(longlong *)(local_b8 + lVar22 * 8) = lVar35;
            }
LAB_143ce5fb2:
            plVar25 = plVar25 + 1;
          } while (plVar25 != plVar37);
        }
      }
      cVar15 = (**(code **)(*param_1 + 0xbf0))(param_1);
      iVar18 = 0;
      if ((cVar15 != '\0') && (lVar35 = param_1[0x2cc], iVar18 = 0, (longlong)(int)lVar35 != 0)) {
        lVar22 = param_1[0x2cb];
        lVar34 = 0;
        iVar18 = 0;
        do {
          if ((*(longlong **)(lVar22 + lVar34) != (longlong *)0x0) &&
             (iVar17 = (**(code **)(**(longlong **)(lVar22 + lVar34) + 0x3c0))(), iVar18 < iVar17))
          {
            iVar18 = iVar17;
          }
          lVar34 = lVar34 + 8;
        } while ((longlong)(int)lVar35 * 8 != lVar34);
      }
      FUN_141875f7a(param_1,iVar18);
      iVar18 = (int)uStack_b0;
      if ((int)uStack_b0 < 0) goto LAB_143ce6922;
      *(undefined4 *)(param_1 + 0x2c2) = 0;
      if (*(int *)((longlong)param_1 + 0x1614) != (int)uStack_b0) {
        FUN_140731a28();
      }
      if ((int)uStack_b0 != 0) {
        pcVar3 = local_b8 + (longlong)(int)uStack_b0 * 8;
        local_120 = param_1 + 0x2fb;
        local_138 = param_1 + 0x2f0;
        local_128 = (longlong *)CONCAT44(local_128._4_4_,(uint)bVar16);
        pcVar38 = local_b8;
        local_130 = param_1 + 0x2c1;
        do {
          plVar37 = *(longlong **)pcVar38;
          if (plVar37 != (longlong *)0x0) {
            local_f8 = (code *)0x0;
            uStack_f0 = 0;
            if ((*(uint *)(plVar37 + 1) & 0x8003400) != 0) {
              if ((*(uint *)(plVar37 + 1) >> 10 & 1) != 0) {
                FUN_1400020e8(&local_f8,L"RF_NeedLoad ",0xc);
              }
              if ((*(uint *)(plVar37 + 1) >> 0xc & 1) != 0) {
                FUN_1400020e8(&local_f8,L" RF_NeedPostLoad ",0x11);
              }
              if ((*(uint *)(plVar37 + 1) >> 0xd & 1) != 0) {
                FUN_1400020e8(&local_f8,L" RF_NeedPostLoadSubobjects ",0x1b);
              }
              if ((*(uint *)(plVar37 + 1) >> 0x1b & 1) != 0) {
                FUN_1400020e8(&local_f8,L" RF_WillBeLoaded ",0x11);
              }
            }
            uVar24 = (**(code **)(*plVar37 + 0x388))(plVar37);
            uVar20 = FUN_1401b18d4(param_1,0,plVar37);
            if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
              cVar15 = (**(code **)(*param_1 + 0xac8))(param_1);
              if (cVar15 != '\0') {
                lVar35 = FUN_147a12824(param_1,uVar24,uVar36);
                goto LAB_143ce61cb;
              }
              cVar15 = FUN_1417f016c(uVar24,uVar36,uVar20);
              if (cVar15 == '\0') {
                lVar35 = FUN_14001cc68(0x250,0x10);
                local_198 = plVar37;
                FUN_1409e77c4(lVar35,param_1,uVar24);
                goto LAB_143ce61cb;
              }
              local_c8 = 0;
              uStack_c0 = 0;
              FUN_14631b754(uVar36);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              lVar35 = FUN_147a127d6(param_1,uVar24,uVar36);
LAB_143ce61cb:
              if (lVar35 != 0) {
                if ((int)param_1[0x2f5] != *(int *)((longlong)param_1 + 0x17d4)) {
                  uVar19 = ((uint)((ulonglong)plVar37 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)plVar37 >> 4)) * -0x7a143595;
                  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
                  plVar25 = (longlong *)param_1[0x2fc];
                  if ((longlong *)param_1[0x2fc] == (longlong *)0x0) {
                    plVar25 = local_120;
                  }
                  iVar18 = *(int *)((longlong)plVar25 +
                                   (ulonglong)((int)param_1[0x2fd] - 1U & (uVar19 >> 0x10 ^ uVar19))
                                   * 4);
                  if (iVar18 != -1) {
                    do {
                      puVar23 = (undefined8 *)(param_1[0x2f4] + (longlong)iVar18 * 0x18);
                      if ((longlong *)*puVar23 == plVar37) {
                        if (puVar23 + 1 != (undefined8 *)0x0 && puVar23 != (undefined8 *)0x0) {
                          *(undefined2 *)(lVar35 + 0x128) = *(undefined2 *)(puVar23 + 1);
                        }
                        break;
                      }
                      iVar18 = *(int *)(puVar23 + 2);
                    } while (iVar18 != -1);
                  }
                }
                if (DAT_14c950c29 == 1) {
                  FUN_1456cec3c(plVar37);
                }
                if ((DAT_14c950c29 & 1) != 0) {
                  FUN_1456cec3c(plVar37);
                }
                if ((DAT_14c950c29 & 1) != 0) {
                  FUN_1456cec3c(plVar37);
                }
                if ((DAT_14c950c29 & 1) != 0) {
                  FUN_1456cec3c(plVar37);
                }
                uVar20 = 0xffffffff;
                plVar25 = param_1;
                if ((int)param_1[0x2ea] != *(int *)((longlong)param_1 + 0x177c)) {
                  uVar19 = ((uint)((ulonglong)plVar37 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)plVar37 >> 4)) * -0x7a143595;
                  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
                  plVar25 = (longlong *)param_1[0x2f1];
                  if ((longlong *)param_1[0x2f1] == (longlong *)0x0) {
                    plVar25 = local_138;
                  }
                  iVar18 = *(int *)((longlong)plVar25 +
                                   (ulonglong)((int)param_1[0x2f2] - 1U & (uVar19 >> 0x10 ^ uVar19))
                                   * 4);
                  bVar16 = DAT_14c950c29;
                  while (plVar25 = param_1, iVar18 != -1) {
                    if ((bVar16 & 1) != 0) {
                      FUN_1456cec3c(plVar37);
                      bVar16 = DAT_14c950c29;
                    }
                    lVar22 = (longlong)iVar18;
                    plVar25 = *(longlong **)(param_1[0x2e9] + lVar22 * 0x18);
                    if (((bVar16 & 1) != 0) && (plVar25 != (longlong *)0x0)) {
                      FUN_1456cec3c(plVar25);
                      bVar16 = DAT_14c950c29;
                    }
                    if ((bVar16 & 1) != 0) {
                      FUN_1456cec3c(plVar37);
                      bVar16 = DAT_14c950c29;
                    }
                    lVar34 = local_140[0x2e9];
                    if (plVar25 == plVar37) {
                      plVar25 = local_140;
                      if ((lVar34 + lVar22 * 0x18 != 0) &&
                         (puVar26 = (undefined4 *)(lVar34 + lVar22 * 0x18 + 8),
                         puVar26 != (undefined4 *)0x0)) {
                        uVar20 = *puVar26;
                      }
                      break;
                    }
                    param_1 = local_140;
                    iVar18 = *(int *)(lVar34 + 0x10 + lVar22 * 0x18);
                  }
                }
                param_1 = local_140;
                if ((longlong)(int)plVar25[0x2ce] != 0) {
                  lVar22 = 0;
                  do {
                    if (*(longlong **)(plVar25[0x2cd] + lVar22) == plVar37) {
                      uVar27 = 1;
                      goto LAB_143ce63c7;
                    }
                    lVar22 = lVar22 + 8;
                  } while ((longlong)(int)plVar25[0x2ce] * 8 != lVar22);
                }
                uVar27 = 0;
LAB_143ce63c7:
                iVar18 = (int)local_140[0x2c2];
                lVar22 = (longlong)iVar18;
                *(uint *)(local_140 + 0x2c2) = iVar18 + 1U;
                if (*(uint *)((longlong)local_140 + 0x1614) < iVar18 + 1U) {
                  FUN_1488139d0(local_130,iVar18);
                }
                lVar34 = param_1[0x2c1];
                *(longlong *)(lVar34 + lVar22 * 0x18) = lVar35;
                *(longlong **)(lVar34 + 8 + lVar22 * 0x18) = plVar37;
                *(undefined4 *)(lVar34 + 0x10 + lVar22 * 0x18) = uVar20;
                *(undefined1 *)(lVar34 + 0x14 + lVar22 * 0x18) = uVar27;
                (**(code **)(*param_1 + 0xad0))(param_1);
                uVar36 = (ulonglong)local_128 & 0xffffffff;
              }
            }
            if (local_f8 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          pcVar38 = pcVar38 + 8;
        } while (pcVar38 != pcVar3);
      }
      if (local_b8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (DAT_14c8442b8 == 0) goto LAB_143ce50d9;
LAB_143ce511b:
      cVar15 = (**(code **)(*param_1 + 0xbf0))(param_1);
      if ((cVar15 == '\0') || (lVar35 = param_1[0x2cc], (longlong)(int)lVar35 == 0)) {
LAB_143ce516c:
        plVar37 = (longlong *)param_1[0xcb];
        if (plVar37 == (longlong *)0x0) {
          plVar37 = (longlong *)param_1[0xcc];
          if ((DAT_14c950c29 & plVar37 != (longlong *)0x0) != 0) goto LAB_143ce6a19;
          if (plVar37 == (longlong *)0x0) {
            iVar18 = 0;
            goto LAB_143ce5197;
          }
LAB_143ce6853:
          plVar37 = (longlong *)param_1[0xcc];
          if ((DAT_14c950c29 & plVar37 != (longlong *)0x0) != 0) {
LAB_143ce6a7b:
            FUN_1456cec3c(plVar37);
          }
        }
        else if (DAT_14c950c29 != 0) {
LAB_143ce6a19:
          FUN_1456cec3c(plVar37);
          plVar37 = (longlong *)param_1[0xcb];
          param_1 = local_140;
          if (plVar37 == (longlong *)0x0) goto LAB_143ce6853;
          if ((DAT_14c950c29 & 1) == 0) goto LAB_143ce5189;
          goto LAB_143ce6a7b;
        }
LAB_143ce5189:
        iVar18 = (**(code **)(*plVar37 + 0x3c0))(plVar37);
      }
      else {
        lVar22 = param_1[0x2cb];
        lVar34 = 0;
        iVar18 = 0;
        do {
          if ((*(longlong **)(lVar22 + lVar34) != (longlong *)0x0) &&
             (iVar17 = (**(code **)(**(longlong **)(lVar22 + lVar34) + 0x3c0))(), iVar18 < iVar17))
          {
            iVar18 = iVar17;
          }
          lVar34 = lVar34 + 8;
        } while ((longlong)(int)lVar35 * 8 != lVar34);
        if (iVar18 == 0) goto LAB_143ce516c;
      }
LAB_143ce5197:
      FUN_141875f7a(param_1,iVar18);
    }
    lVar35 = param_1[0xcb];
    if (lVar35 == 0) {
      lVar35 = param_1[0xcc];
      if ((DAT_14c950c29 & lVar35 != 0) != 0) goto LAB_143ce6a0c;
      if (lVar35 != 0) goto LAB_143ce51be;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_143ce6a0c:
        FUN_1456cec3c(lVar35);
      }
LAB_143ce51be:
      if (DAT_14cb06da8 == 0) {
        local_160 = &local_b8;
        local_b8 = FUN_1449e2820;
        local_150 = FUN_14081d0ea;
        local_158 = &LAB_1464003b0;
        local_168 = &LAB_147d17bdf;
        local_170 = &LAB_1417edf22;
        local_178 = (code **)0x149e2b68a;
        local_180 = (longlong *)0x0;
        local_188 = (code **)CONCAT44(local_188._4_4_,0x10000000);
        local_190 = 8;
        local_198 = (longlong *)CONCAT44(local_198._4_4_,0x588);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8);
      }
      if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar35 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar35 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
        if ((int)param_1[0x308] == *(int *)((longlong)param_1 + 0x186c)) {
          FUN_1407ba6aa(param_1,lVar35);
        }
        cVar15 = (**(code **)(*param_1 + 0xbf0))(param_1);
        iVar18 = 0;
        uVar36 = 0;
        if (cVar15 != '\0') {
          lVar35 = param_1[0x2cc];
          uVar36 = 0;
          if ((longlong)(int)lVar35 != 0) {
            lVar22 = param_1[0x2cb];
            lVar34 = 0;
            uVar36 = 0;
            do {
              if ((*(longlong **)(lVar22 + lVar34) != (longlong *)0x0) &&
                 (uVar19 = (**(code **)(**(longlong **)(lVar22 + lVar34) + 0x3c0))(),
                 (int)uVar36 < (int)uVar19)) {
                uVar36 = (ulonglong)uVar19;
              }
              lVar34 = lVar34 + 8;
            } while ((longlong)(int)lVar35 * 8 != lVar34);
          }
        }
        local_138 = param_1 + 0x305;
        iVar17 = *(int *)((longlong)param_1 + 0x1834);
        FUN_1403c3da7(param_1[0x305],(int)param_1[0x306]);
        *(undefined4 *)(param_1 + 0x306) = 0;
        iVar33 = *(int *)((longlong)param_1 + 0x1834);
        if (iVar17 < 0) {
          iVar18 = 0;
          bVar39 = iVar33 != 0;
          iVar33 = 0;
          if (bVar39) {
            FUN_148813ade(local_138);
            iVar18 = (int)param_1[0x306];
            iVar33 = *(int *)((longlong)param_1 + 0x1834);
          }
        }
        *(uint *)(param_1 + 0x306) = iVar18 + (uint)uVar36;
        if ((uint)(iVar33 - iVar18) < (uint)uVar36) {
          FUN_141876376(local_138,iVar18);
        }
        local_118 = uVar36;
        FUN_143ce9abd((longlong)iVar18 * 0x18 + param_1[0x305],uVar36);
        if ((longlong)(int)param_1[0x2c2] != 0) {
          plVar37 = local_140 + 0x307;
          plVar25 = (longlong *)local_140[0x2c1];
          local_108 = plVar25 + (longlong)(int)param_1[0x2c2] * 3;
          local_120 = (longlong *)(local_118 & 0xffffffff);
          local_100 = plVar37;
          do {
            pcVar3 = (code *)plVar25[1];
            if ((((pcVar3 != (code *)0x0) && (lVar35 = *plVar25, lVar35 != 0)) &&
                (local_128 = *(longlong **)(lVar35 + 0x40),
                *(char *)((longlong)local_128 + 0x24) == '\x01')) &&
               (lVar22 = (**(code **)(*(longlong *)pcVar3 + 0x3f8))(), lVar22 != 0)) {
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(pcVar3);
              }
              if ((DAT_14c950c29 & 1) != 0) {
                FUN_1456cec3c(pcVar3);
              }
              local_b8 = pcVar3;
              if ((DAT_14c950c29 & 1) != 0) {
                FUN_1456cec3c(pcVar3);
              }
              if ((DAT_14c950c29 & 1) != 0) {
                FUN_1456cec3c(pcVar3);
              }
              uVar19 = ((uint)((ulonglong)pcVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar3 >> 4))
                       * -0x7a143595;
              uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
              iVar18 = FUN_1407bd8e0(plVar37,uVar19 >> 0x10 ^ uVar19,&local_b8);
              if ((iVar18 != -1) && (lVar22 = (longlong)iVar18 * 0x20 + *plVar37, lVar22 != 0)) {
                lVar34 = *(longlong *)(lVar22 + 8);
                local_130 = *(longlong **)(lVar22 + 0x10);
                if (local_130 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                  UNLOCK();
                }
                if (lVar34 != 0) {
                  uVar19 = FUN_1401b18d4(local_140,lVar35,pcVar3);
                  if ((int)uVar19 < (int)local_118) {
                    plVar37 = (longlong *)(ulonglong)uVar19;
                    do {
                      if ((longlong)plVar37 < (longlong)(int)local_128[1]) {
                        lVar22 = *local_138;
                        lVar31 = *(longlong *)(lVar22 + (longlong)plVar37 * 0x18);
                        iVar18 = *(int *)(lVar22 + 8 + (longlong)plVar37 * 0x18);
                        lVar29 = (longlong)iVar18;
                        if (lVar29 != 0) {
                          lVar30 = lVar29 * 0x50;
                          lVar28 = lVar31;
                          do {
                            if (*(longlong *)(lVar28 + 0x20) == lVar34) {
                              if (lVar28 != 0) goto LAB_143ce54f5;
                              break;
                            }
                            lVar28 = lVar28 + 0x50;
                            lVar30 = lVar30 + -0x50;
                          } while (lVar30 != 0);
                        }
                        plVar32 = (longlong *)(lVar22 + (longlong)plVar37 * 0x18);
                        *(uint *)(plVar32 + 1) = iVar18 + 1U;
                        if (*(uint *)((longlong)plVar32 + 0xc) < iVar18 + 1U) {
                          FUN_1418764e8(plVar32,iVar18);
                          lVar31 = *plVar32;
                        }
                        lVar28 = lVar29 * 0x50 + lVar31;
                        FUN_143ce9ad4(lVar28);
                        if (local_130 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                          UNLOCK();
                        }
                        plVar32 = *(longlong **)(lVar28 + 0x28);
                        *(longlong *)(lVar28 + 0x20) = lVar34;
                        *(longlong **)(lVar28 + 0x28) = local_130;
                        if (plVar32 != (longlong *)0x0) {
                          LOCK();
                          plVar5 = plVar32 + 1;
                          *(int *)plVar5 = (int)*plVar5 + -1;
                          UNLOCK();
                          if ((int)*plVar5 == 0) {
                            (**(code **)*plVar32)(plVar32);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar32 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar32 + 0x10))(plVar32);
                            }
                          }
                        }
LAB_143ce54f5:
                        lVar22 = (**(code **)(*(longlong *)pcVar3 + 800))
                                           (pcVar3,(ulonglong)plVar37 & 0xffffffff);
                        cVar15 = FUN_1417f0240(*(undefined1 *)(lVar22 + 200));
                        if (cVar15 == '\0') {
                          plVar32 = (longlong *)(lVar28 + 0x30);
                          iVar18 = *(int *)(lVar28 + 0x38);
                          *(uint *)(lVar28 + 0x38) = iVar18 + 1U;
                          if (*(uint *)(lVar28 + 0x3c) < iVar18 + 1U) {
LAB_143ce5562:
                            FUN_1418765f8(plVar32,iVar18);
                          }
                        }
                        else {
                          plVar32 = (longlong *)(lVar28 + 0x40);
                          iVar18 = *(int *)(lVar28 + 0x48);
                          *(uint *)(lVar28 + 0x48) = iVar18 + 1U;
                          if (*(uint *)(lVar28 + 0x4c) < iVar18 + 1U) goto LAB_143ce5562;
                        }
                        lVar22 = *plVar32;
                        *(longlong *)(lVar22 + (longlong)iVar18 * 0x10) = lVar35;
                        *(code **)(lVar22 + 8 + (longlong)iVar18 * 0x10) = pcVar3;
                      }
                      plVar37 = (longlong *)((longlong)plVar37 + 1);
                    } while (plVar37 != local_120);
                  }
                }
                plVar37 = local_100;
                if (local_130 != (longlong *)0x0) {
                  LOCK();
                  plVar32 = local_130 + 1;
                  *(int *)plVar32 = (int)*plVar32 + -1;
                  UNLOCK();
                  if ((int)*plVar32 == 0) {
                    (**(code **)*local_130)(local_130);
                    LOCK();
                    piVar1 = (int *)((longlong)local_130 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_130 + 0x10))();
                    }
                  }
                }
              }
            }
            plVar25 = plVar25 + 3;
          } while (plVar25 != local_108);
        }
        iVar18 = (int)local_140[0x306];
        param_1 = local_140;
        if (0 < iVar18) {
          lVar35 = 0;
          do {
            lVar22 = (longlong)*(int *)(*local_138 + 8 + lVar35 * 0x18);
            if (lVar22 != 0) {
              lVar34 = *(longlong *)(*local_138 + lVar35 * 0x18);
              lVar22 = lVar22 * 0x50 + lVar34;
              do {
                iVar18 = *(int *)(lVar34 + 0x38);
                if ((longlong)iVar18 != 0) {
                  lVar31 = *(longlong *)(lVar34 + 0x30);
                  lVar29 = 0;
                  do {
                    lVar30 = *(longlong *)
                              (**(longlong **)(*(longlong *)(lVar31 + lVar29) + 0x40) + lVar35 * 8);
                    FUN_144a2d64e(lVar34,lVar30 + 0x440);
                    FUN_144a2d64e(lVar34 + 0x10,lVar30 + 0x450);
                    lVar29 = lVar29 + 0x10;
                  } while ((longlong)iVar18 * 0x10 != lVar29);
                }
                iVar18 = *(int *)(lVar34 + 0x48);
                if ((longlong)iVar18 != 0) {
                  lVar31 = *(longlong *)(lVar34 + 0x40);
                  lVar29 = 0;
                  do {
                    lVar30 = *(longlong *)
                              (**(longlong **)(*(longlong *)(lVar31 + lVar29) + 0x40) + lVar35 * 8);
                    FUN_144a2d64e(lVar34,lVar30 + 0x440);
                    FUN_144a2d64e(lVar34 + 0x10,lVar30 + 0x450);
                    lVar29 = lVar29 + 0x10;
                  } while ((longlong)iVar18 * 0x10 != lVar29);
                }
                lVar34 = lVar34 + 0x50;
              } while (lVar34 != lVar22);
              iVar18 = (int)local_140[0x306];
              param_1 = local_140;
            }
            lVar35 = lVar35 + 1;
          } while (lVar35 < iVar18);
          if (0 < iVar18) {
            lVar35 = 0;
            do {
              lVar22 = (longlong)*(int *)(*local_138 + 8 + lVar35 * 0x18);
              if (lVar22 != 0) {
                plVar37 = *(longlong **)(*local_138 + lVar35 * 0x18);
                plVar25 = plVar37 + lVar22 * 10;
                do {
                  if (((((int)plVar37[1] != 0) && (lVar22 = plVar37[4], lVar22 != 0)) &&
                      ((*(int *)(lVar22 + 0x24) != 0 &&
                       (((uVar19 = *(uint *)(lVar22 + 0x20), -1 < (int)uVar19 &&
                         ((int)uVar19 < DAT_14c9647dc)) &&
                        (plVar32 = (longlong *)
                                   ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
                        plVar32 != (longlong *)0x0)))))) &&
                     ((((int)plVar32[2] == *(int *)(lVar22 + 0x24) &&
                       ((*(uint *)(plVar32 + 1) & 0x10200000) == 0)) &&
                      (plVar32 = (longlong *)*plVar32, plVar32 != (longlong *)0x0)))) {
                    uVar19 = (uint)*(ushort *)(*plVar37 + (longlong)((int)plVar37[1] + -1) * 2);
                    iVar18 = *(int *)(lVar22 + 0x18);
                    if (iVar18 <= (int)uVar19) {
                      if ((int)uVar19 < *(int *)(lVar22 + 0x1c)) goto LAB_143ce576f;
                      FUN_14491ce3c(lVar22 + 0x10,uVar19 + 1);
                      while( true ) {
                        lVar22 = plVar37[4];
                        iVar18 = *(int *)(lVar22 + 0x18);
LAB_143ce576f:
                        if ((int)uVar19 < iVar18) break;
                        *(uint *)(lVar22 + 0x18) = iVar18 + 1U;
                        if (*(uint *)(lVar22 + 0x1c) < iVar18 + 1U) {
                          FUN_140491d2e((longlong *)(lVar22 + 0x10),iVar18);
                        }
                        uVar24 = _DAT_14c846288;
                        lVar22 = *(longlong *)(lVar22 + 0x10);
                        lVar34 = (longlong)iVar18 * 0x40;
                        puVar23 = (undefined8 *)(lVar22 + 0x30 + lVar34);
                        *puVar23 = _DAT_14c846280;
                        puVar23[1] = uVar24;
                        uVar24 = _DAT_14c846278;
                        puVar23 = (undefined8 *)(lVar22 + 0x20 + lVar34);
                        *puVar23 = _DAT_14c846270;
                        puVar23[1] = uVar24;
                        uVar24 = _DAT_14c846268;
                        puVar23 = (undefined8 *)(lVar22 + 0x10 + lVar34);
                        *puVar23 = _DAT_14c846260;
                        puVar23[1] = uVar24;
                        uVar8 = DAT_14c846258._4_4_;
                        uVar7 = (undefined4)DAT_14c846258;
                        uVar20 = DAT_14c846254;
                        puVar26 = (undefined4 *)(lVar22 + lVar34);
                        *puVar26 = DAT_14c846250;
                        puVar26[1] = uVar20;
                        puVar26[2] = uVar7;
                        puVar26[3] = uVar8;
                      }
                    }
                    plVar32 = (longlong *)(**(code **)(*plVar32 + 0x368))(plVar32);
                    lVar22 = plVar37[1];
                    if ((longlong)(int)lVar22 != 0) {
                      lVar34 = *plVar37;
                      lVar31 = 0;
                      do {
                        if ((int)(uint)*(ushort *)(lVar34 + lVar31) < (int)plVar32[1]) {
                          lVar29 = *plVar32;
                          lVar28 = (ulonglong)*(ushort *)(lVar34 + lVar31) * 0x40;
                          lVar30 = *(longlong *)(plVar37[4] + 0x10);
                          puVar26 = (undefined4 *)(lVar29 + lVar28);
                          uVar20 = *puVar26;
                          uVar7 = puVar26[1];
                          uVar8 = puVar26[2];
                          uVar9 = puVar26[3];
                          puVar23 = (undefined8 *)(lVar29 + 0x10 + lVar28);
                          uVar24 = *puVar23;
                          uVar10 = puVar23[1];
                          puVar23 = (undefined8 *)(lVar29 + 0x20 + lVar28);
                          uVar11 = *puVar23;
                          uVar12 = puVar23[1];
                          puVar23 = (undefined8 *)(lVar29 + 0x30 + lVar28);
                          uVar13 = puVar23[1];
                          puVar2 = (undefined8 *)(lVar30 + 0x30 + lVar28);
                          *puVar2 = *puVar23;
                          puVar2[1] = uVar13;
                          puVar23 = (undefined8 *)(lVar30 + 0x20 + lVar28);
                          *puVar23 = uVar11;
                          puVar23[1] = uVar12;
                          puVar23 = (undefined8 *)(lVar30 + 0x10 + lVar28);
                          *puVar23 = uVar24;
                          puVar23[1] = uVar10;
                          puVar26 = (undefined4 *)(lVar30 + lVar28);
                          *puVar26 = uVar20;
                          puVar26[1] = uVar7;
                          puVar26[2] = uVar8;
                          puVar26[3] = uVar9;
                        }
                        lVar31 = lVar31 + 2;
                      } while ((longlong)(int)lVar22 * 2 != lVar31);
                    }
                  }
                  plVar37 = plVar37 + 10;
                } while (plVar37 != plVar25);
                iVar18 = (int)param_1[0x306];
              }
              lVar35 = lVar35 + 1;
            } while (lVar35 < iVar18);
          }
        }
      }
    }
    uVar24 = local_110;
    iVar18 = (int)param_1[0x2c2];
    if ((longlong)iVar18 != 0) {
      iVar17 = 0x7fffffff;
      lVar35 = 0;
      do {
        if ((*(longlong *)(param_1[0x2c1] + lVar35) != 0) &&
           (iVar33 = *(int *)(*(longlong *)(*(longlong *)(param_1[0x2c1] + lVar35) + 0x40) + 8) + -1
           , iVar33 <= iVar17)) {
          iVar17 = iVar33;
        }
        lVar35 = lVar35 + 0x18;
      } while ((longlong)iVar18 * 0x18 != lVar35);
      if (iVar17 != 0x7fffffff) goto LAB_143ce5960;
    }
    iVar17 = 0;
LAB_143ce5960:
    *(int *)((longlong)param_1 + 0x167c) = iVar17;
    if (0 < iVar18) {
      (**(code **)(*param_1 + 0xb20))(param_1);
      param_1[0x115] = *(longlong *)param_1[0x2c1];
    }
    FUN_143492522(param_1,uVar24);
    if ((*DAT_14cad2a08 == 0) || (*(char *)((longlong)param_1 + 0x89e) < '\0')) {
      FUN_140f81080(param_1 + 0xf8,0);
    }
    FUN_140971bbc(param_1,1);
    if (DAT_14c76385a == '\x01') {
      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)((longlong)param_1 + 0x854));
      (**(code **)(*param_1 + 0xbf8))(param_1,&local_c8);
      lVar35 = (longlong)(int)local_c8;
      if (((-1 < lVar35) && ((int)local_c8 < (int)param_1[0x306])) &&
         ((int)local_c8 < (int)param_1[0x105])) {
        lVar22 = param_1[0x305];
        lVar34 = param_1[0x104];
        local_98 = 0;
        local_90 = 0;
        local_b8 = (code *)0x0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        FUN_144ae994c(&local_b8,lVar34 + lVar35 * 0x58);
        local_68 = *(undefined4 *)(lVar34 + 0x50 + lVar35 * 0x58);
        lVar34 = (longlong)*(int *)(lVar22 + 8 + lVar35 * 0x18);
        if (lVar34 != 0) {
          plVar37 = local_140 + 0x102;
          plVar25 = local_140 + 0xf8;
          lVar34 = lVar34 * 0x50;
          plVar32 = (longlong *)(*(longlong *)(lVar22 + lVar35 * 0x18) + 0x30);
          do {
            if ((0 < (int)plVar32[1]) &&
               (puVar23 = (undefined8 *)plVar32[-2], puVar23 != (undefined8 *)0x0)) {
              local_f8 = (code *)0x0;
              uVar19 = *(uint *)(puVar23 + 1);
              pvVar4 = (void *)*puVar23;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar19);
              if ((longlong)(int)uVar19 == 0) {
                uStack_f0 = (ulonglong)uVar19;
              }
              else {
                FUN_144a06ca8(&local_f8,uVar19,0);
                memcpy(local_f8,pvVar4,(longlong)(int)uVar19 << 2);
                puVar23 = (undefined8 *)plVar32[-2];
              }
              local_e0 = puVar23 + 2;
              local_188 = &local_b8;
              local_180 = (longlong *)0x0;
              local_190 = 1;
              local_198 = plVar37;
              local_178 = &local_f8;
              local_e8 = plVar32 + -6;
              local_d8 = plVar32;
              (**(code **)(**(longlong **)*plVar32 + 0x18))
                        (*(longlong **)*plVar32,local_c8 & 0xffffffff,local_140,plVar25);
              if (local_f8 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            if ((0 < (int)plVar32[3]) &&
               (puVar23 = (undefined8 *)plVar32[-2], puVar23 != (undefined8 *)0x0)) {
              local_f8 = (code *)0x0;
              uVar19 = *(uint *)(puVar23 + 1);
              pvVar4 = (void *)*puVar23;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar19);
              if ((longlong)(int)uVar19 == 0) {
                uStack_f0 = (ulonglong)uVar19;
              }
              else {
                FUN_144a06ca8(&local_f8,uVar19,0);
                memcpy(local_f8,pvVar4,(longlong)(int)uVar19 << 2);
                puVar23 = (undefined8 *)plVar32[-2];
              }
              local_d8 = plVar32 + 2;
              local_e0 = puVar23 + 2;
              plVar5 = *(longlong **)*local_d8;
              local_180 = (longlong *)((undefined8 *)*local_d8)[1];
              local_188 = &local_b8;
              local_190 = 1;
              local_198 = plVar37;
              local_178 = &local_f8;
              local_e8 = plVar32 + -6;
              (**(code **)(*plVar5 + 0x18))(plVar5,local_c8 & 0xffffffff,local_140,plVar25);
              if (local_f8 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            plVar32 = plVar32 + 10;
            lVar34 = lVar34 + -0x50;
          } while (lVar34 != 0);
        }
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_1403c61e6(&local_b8);
      }
    }
    else if ((longlong)(int)param_1[0x2c2] != 0) {
      plVar25 = (longlong *)local_140[0x2c1];
      plVar37 = plVar25 + (longlong)(int)param_1[0x2c2] * 3;
      local_128 = local_140 + 0x102;
      local_138 = local_140 + 0xf8;
      do {
        plVar5 = local_140;
        plVar32 = (longlong *)plVar25[1];
        if (plVar32 != (longlong *)0x0) {
          plVar6 = (longlong *)*plVar25;
          if (plVar6 != (longlong *)0x0) {
            local_f8._0_4_ = *(int *)((longlong)local_140 + 0x854);
            iVar17 = FUN_1401b18d4(local_140,plVar6,plVar32,0);
            iVar18 = *(int *)(plVar6[8] + 8) + -1;
            if ((int)local_f8 < iVar18) {
              iVar18 = (int)local_f8;
            }
            if (iVar18 < iVar17) {
              iVar18 = iVar17;
            }
            local_f8 = (code *)CONCAT44(local_f8._4_4_,iVar18);
            (**(code **)(*plVar5 + 0xbf8))(plVar5,&local_f8);
            cVar15 = (**(code **)(*plVar32 + 0x420))(plVar32,(ulonglong)local_f8 & 0xffffffff);
            plVar5 = local_140;
            if (cVar15 != '\0') {
              if ((-1 < (longlong)(int)local_f8) && ((int)local_f8 < (int)local_140[0x105])) {
                lVar35 = local_140[0x104];
                lVar22 = (longlong)(int)local_f8 * 0x58;
                local_98 = 0;
                local_90 = 0;
                local_b8 = (code *)0x0;
                uStack_b0 = 0;
                local_8c = 0xffffffff00000080;
                local_84 = 0;
                local_78 = 0;
                local_70 = 0;
                FUN_144ae994c(&local_b8,lVar35 + lVar22);
                local_68 = *(undefined4 *)(lVar35 + 0x50 + lVar22);
                local_178 = (code **)0x0;
                local_188 = &local_b8;
                local_198 = local_128;
                local_190 = 1;
                local_180 = plVar32;
                (**(code **)(*plVar6 + 0x18))(plVar6,(ulonglong)local_f8 & 0xffffffff,plVar5);
                local_70 = 0;
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                FUN_1403c61e6(&local_b8);
              }
            }
          }
          FUN_14480e57e(local_140,plVar32);
        }
        plVar25 = plVar25 + 3;
      } while (plVar25 != plVar37);
    }
    if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) {
LAB_143ce69cb:
    FUN_1456cec3c();
    goto LAB_143ce4fba;
  }
  if (param_1[0xcc] != 0) goto LAB_143ce4fba;
LAB_143ce6786:
  if ((DAT_14c950c29 & param_1[0xcc] != 0) == 0) {
    if (param_1[0xcc] != 0) goto LAB_143ce5046;
  }
  else {
LAB_143ce69d5:
    FUN_1456cec3c();
LAB_143ce5046:
    if ((((DAT_14c76152c == '\x01') && (*(char *)((longlong)param_1 + 0x1fc) != '\0')) &&
        ((lVar35 = param_1[0x16], lVar35 != 0 || (lVar35 = FUN_1448abda6(param_1), lVar35 != 0))))
       && ((((*(byte *)(lVar35 + 0x152) == 1 || (*(byte *)(lVar35 + 0x152) - 5 < 2)) &&
            (*(longlong *)(lVar35 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
      bVar16 = *(byte *)((longlong)param_1 + 0x1fc);
      iVar18 = *(int *)(*(longlong *)(lVar35 + 0x178) + 0x3e4);
      if (iVar18 < 0) {
        iVar18 = FUN_141348de4();
      }
      if (iVar18 < (int)(uint)bVar16) goto LAB_143ce6521;
    }
    if (((DAT_14cb0cbf8 < (int)(uint)*(byte *)((longlong)param_1 + 0x1fc)) ||
        (((cVar15 = FUN_140041326(param_1), cVar15 == '\0' &&
          ((*(byte *)((longlong)param_1 + 0x2dc) & 0x40) == 0)) &&
         (((*(byte *)((longlong)param_1 + 0x2d6) & 0x10) == 0 &&
          ((*(byte *)((longlong)param_1 + 0x2df) & 2) == 0)))))) ||
       (*(char *)((longlong)param_1 + 0x117b) != '\0')) goto LAB_143ce6521;
  }
  if (param_1[0x2c7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1b8);
  }
LAB_143ce6521:
  if ((longlong *)param_1[0x118] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x118] + 0x10))();
    lVar35 = param_1[0x118];
    uVar19 = FUN_14493c560();
    if (uVar19 == 0) {
      uVar21 = 0;
      uVar36 = 0;
      lVar22 = 0;
    }
    else {
      uVar36 = (ulonglong)(uVar19 >> 0xe);
      uVar21 = uVar19 & 0x3fff;
      lVar22 = (ulonglong)(uVar21 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar36 * 8);
    }
    *(longlong *)(lVar22 + 8) = lVar35;
    do {
      local_b8 = DAT_14ca96680;
      local_f8 = (code *)(((ulonglong)DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000);
      if ((ulonglong)local_f8 >> 0x1a < (ulonglong)DAT_14ca96680 >> 0x1a) {
        FUN_14274643a();
      }
      local_f8 = (code *)((ulonglong)local_f8 & 0xfffffffffc000000 | (ulonglong)uVar19);
      if (uVar19 == 0) {
        lVar35 = 0;
      }
      else {
        lVar35 = *(longlong *)(&DAT_14c833b00 + uVar36 * 8) + (ulonglong)(uVar21 * 0x18);
      }
      *(uint *)(lVar35 + 0x10) = (uint)local_b8 & 0x3ffffff;
      LOCK();
      bVar39 = local_b8 != DAT_14ca96680;
      pcVar3 = local_f8;
      if (bVar39) {
        pcVar3 = DAT_14ca96680;
      }
      DAT_14ca96680 = pcVar3;
      UNLOCK();
    } while (bVar39);
    param_1[0x118] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 143ce6a88 FUN_143ce6a88 body=1533 status=ok
// SIG undefined FUN_143ce6a88(void)

void FUN_143ce6a88(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  longlong *local_128;
  uint local_120;
  undefined8 *local_118;
  longlong local_110;
  void **local_108;
  ulonglong local_100;
  longlong *local_f8;
  longlong *local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  cVar5 = (**(code **)(*param_1 + 0xbf0))();
  if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_148);
  }
  lVar6 = param_1[0x115];
  param_1[0x115] = 0;
  FUN_1401439da(param_1);
  param_1[0x115] = lVar6;
  local_bc = *(int *)((longlong)param_1 + 0x854);
  (**(code **)(*param_1 + 0xbf8))(param_1);
  cVar5 = true;
  if (((*(byte *)((longlong)param_1 + 0x8a1) & 0x10) == 0) &&
     ((*(byte *)((longlong)param_1 + 0x89f) & 0x40) == 0)) {
    cVar5 = *(char *)((longlong)param_1 + 0x89c) == '\0';
  }
  if ((*DAT_14cad2a08 == 0) || (*(char *)((longlong)param_1 + 0x89e) < '\0')) {
    FUN_140f81080(param_1 + 0xf8,0);
  }
  if (DAT_14c76385a == '\x01') {
    lVar6 = (longlong)local_bc;
    if (((-1 < lVar6) && (local_bc < (int)param_1[0x306])) &&
       ((~*(byte *)(param_1[0x305] + 0x10 + lVar6 * 0x18) & 1) != 0 || (bool)cVar5 != false)) {
      plVar1 = (longlong *)(param_1[0x305] + lVar6 * 0x18);
      *(undefined1 *)(plVar1 + 2) = 1;
      lVar7 = (longlong)local_bc;
      lVar6 = param_1[0x104];
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_100 = 0;
      local_70 = 0;
      FUN_144ae994c(&local_b8,lVar6 + lVar7 * 0x58);
      local_68 = *(undefined4 *)(lVar6 + 0x50 + lVar7 * 0x58);
      if ((*(byte *)((longlong)param_1 + 0x8a2) & 1) != 0) {
        local_100 = (ulonglong)(~(uint)*(byte *)((longlong)param_1 + 0x8a1) >> 5 & 2);
      }
      if ((longlong)(int)plVar1[1] != 0) {
        lVar6 = *plVar1;
        lVar7 = (longlong)(int)plVar1[1] * 0x50 + lVar6;
        local_f8 = param_1 + 0x102;
        do {
          puVar8 = *(undefined8 **)(lVar6 + 0x20);
          if (puVar8 != (undefined8 *)0x0) {
            if (*(int *)(lVar6 + 0x38) == 0) {
              if (*(int *)(lVar6 + 0x48) == 0) goto LAB_143ce6e5b;
            }
            else if (0 < *(int *)(lVar6 + 0x38)) {
              local_e8 = (void *)0x0;
              local_e0 = *(int *)(puVar8 + 1);
              lVar11 = (longlong)local_e0;
              pvVar3 = (void *)*puVar8;
              if (lVar11 == 0) {
                local_dc = 0;
              }
              else {
                FUN_144a06ca8(&local_e8,local_e0,0);
                memcpy(local_e8,pvVar3,lVar11 << 2);
                puVar8 = *(undefined8 **)(lVar6 + 0x20);
              }
              local_108 = &local_e8;
              local_d0 = puVar8 + 2;
              local_118 = &local_b8;
              local_120 = (uint)local_100;
              local_128 = local_f8;
              local_110 = 0;
              local_d8 = lVar6;
              local_c8 = lVar6 + 0x30;
              (**(code **)(*(longlong *)**(undefined8 **)(lVar6 + 0x30) + 0x18))
                        ((longlong *)**(undefined8 **)(lVar6 + 0x30),local_bc,param_1,param_1 + 0xf8
                        );
              iVar2 = *(int *)(lVar6 + 0x38);
              if ((longlong)iVar2 != 0) {
                lVar11 = *(longlong *)(lVar6 + 0x30);
                lVar9 = 0;
                do {
                  FUN_14480e57e(param_1,*(undefined8 *)(lVar11 + 8 + lVar9));
                  lVar9 = lVar9 + 0x10;
                } while ((longlong)iVar2 * 0x10 != lVar9);
              }
              if (local_e8 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            if (0 < *(int *)(lVar6 + 0x48)) {
              puVar8 = *(undefined8 **)(lVar6 + 0x20);
              local_e8 = (void *)0x0;
              local_e0 = *(int *)(puVar8 + 1);
              lVar11 = (longlong)local_e0;
              pvVar3 = (void *)*puVar8;
              if (lVar11 == 0) {
                local_dc = 0;
              }
              else {
                FUN_144a06ca8(&local_e8,local_e0,0);
                memcpy(local_e8,pvVar3,lVar11 << 2);
                puVar8 = *(undefined8 **)(lVar6 + 0x20);
              }
              local_108 = &local_e8;
              local_c8 = lVar6 + 0x40;
              local_d0 = puVar8 + 2;
              plVar1 = (longlong *)**(undefined8 **)(lVar6 + 0x40);
              local_110 = (*(undefined8 **)(lVar6 + 0x40))[1];
              local_118 = &local_b8;
              local_120 = (uint)local_100;
              local_128 = local_f8;
              local_d8 = lVar6;
              (**(code **)(*plVar1 + 0x18))(plVar1,local_bc,param_1,param_1 + 0xf8);
              iVar2 = *(int *)(lVar6 + 0x48);
              if ((longlong)iVar2 != 0) {
                lVar11 = *(longlong *)(lVar6 + 0x40);
                lVar9 = 0;
                do {
                  FUN_14480e57e(param_1,*(undefined8 *)(lVar11 + 8 + lVar9));
                  lVar9 = lVar9 + 0x10;
                } while ((longlong)iVar2 * 0x10 != lVar9);
              }
              if (local_e8 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
          }
LAB_143ce6e5b:
          lVar6 = lVar6 + 0x50;
        } while (lVar6 != lVar7);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1403c61e6(&local_b8);
    }
  }
  else if ((longlong)(int)param_1[0x2c2] != 0) {
    plVar10 = (longlong *)param_1[0x2c1];
    plVar1 = plVar10 + (longlong)(int)param_1[0x2c2] * 3;
    local_f8 = param_1 + 0x102;
    local_f0 = param_1 + 0xf8;
    local_100 = CONCAT71(local_100._1_7_,cVar5);
    do {
      plVar4 = (longlong *)*plVar10;
      lVar6 = plVar10[1];
      if (((((lVar6 != 0 && plVar4 != (longlong *)0x0) && (*(char *)(plVar4[8] + 0x24) == '\x01'))
           && (-1 < (longlong)local_bc)) && (local_bc < *(int *)(plVar4[8] + 8))) &&
         ((cVar5 != '\0' || ((char)plVar4[7] == '\0')))) {
        lVar7 = param_1[0x104];
        lVar11 = (longlong)local_bc * 0x58;
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        FUN_144ae994c(&local_b8,lVar7 + lVar11);
        local_68 = *(undefined4 *)(lVar7 + 0x50 + lVar11);
        local_120 = 0;
        if ((*(byte *)((longlong)param_1 + 0x8a2) & 1) != 0) {
          local_120 = (uint)((byte)~*(byte *)((longlong)param_1 + 0x8a1) >> 5 & 2);
        }
        local_118 = &local_b8;
        local_128 = local_f8;
        local_108 = (void **)0x0;
        local_110 = lVar6;
        (**(code **)(*plVar4 + 0x18))(plVar4,local_bc,param_1,local_f0);
        *(undefined1 *)(plVar4 + 7) = 1;
        *(byte *)((longlong)param_1 + 0x8a1) = *(byte *)((longlong)param_1 + 0x8a1) & 0xef;
        FUN_14480e57e(param_1,lVar6);
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_1403c61e6(&local_b8);
        cVar5 = (char)local_100;
      }
      plVar10 = plVar10 + 3;
    } while (plVar10 != plVar1);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce70aa FUN_143ce70aa body=471 status=ok
// SIG undefined FUN_143ce70aa(void)

undefined4 FUN_143ce70aa(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x1660))) {
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x1658) + (ulonglong)param_2 * 8);
    if ((uVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar2);
    }
    if ((uVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar2);
    }
    if ((uVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar2);
    }
    if ((uVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar2);
    }
    if (*(int *)(param_1 + 0x1750) != *(int *)(param_1 + 0x177c)) {
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      lVar8 = param_1 + 0x1780;
      if (*(longlong *)(param_1 + 0x1788) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x1788);
      }
      iVar1 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(param_1 + 0x1790) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      bVar5 = DAT_14c950c29;
      while (iVar1 != -1) {
        if ((uVar2 != 0 & bVar5) == 1) {
          FUN_1456cec3c(uVar2);
          bVar5 = DAT_14c950c29;
        }
        lVar8 = (longlong)iVar1;
        uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x1748) + lVar8 * 0x18);
        if (((bVar5 & 1) != 0) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
          bVar5 = DAT_14c950c29;
        }
        if ((uVar2 != 0 & bVar5) == 1) {
          FUN_1456cec3c(uVar2);
          bVar5 = DAT_14c950c29;
        }
        lVar4 = *(longlong *)(param_1 + 0x1748);
        if (uVar3 == uVar2) {
          if (lVar4 + lVar8 * 0x18 == 0) {
            return 0xffffffff;
          }
          puVar7 = (undefined4 *)(lVar4 + lVar8 * 0x18 + 8);
          if (puVar7 == (undefined4 *)0x0) {
            return 0xffffffff;
          }
          return *puVar7;
        }
        iVar1 = *(int *)(lVar4 + 0x10 + lVar8 * 0x18);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143ce7282 FUN_143ce7282 body=158 status=ok
// SIG undefined FUN_143ce7282(void)

undefined8 FUN_143ce7282(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined7 uVar5;
  longlong *plVar6;
  byte bVar7;
  
  lVar3 = param_1;
  if (*(longlong *)(param_1 + 0x1968) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x1630);
    plVar6 = (longlong *)(lVar3 + 0x98);
    if (lVar3 == 0) {
      plVar6 = (longlong *)(param_1 + 0x1968);
    }
    if (*plVar6 == 0) {
      return 0;
    }
  }
  bVar7 = (byte)lVar3;
  plVar6 = *(longlong **)(param_1 + 0xa8);
  if (plVar6 != (longlong *)0x0) {
    uVar2 = FUN_140f26902();
    lVar3 = (**(code **)(*plVar6 + 0x288))(plVar6,uVar2);
    bVar7 = (byte)plVar6;
    if (lVar3 != 0) {
      uVar2 = FUN_140f26902();
      lVar4 = FUN_144718840(lVar3,uVar2);
      bVar7 = lVar3 == lVar4;
      if (lVar4 != 0 && !(bool)bVar7) {
        uVar2 = FUN_148811d90(param_1,lVar4);
        bVar7 = (byte)uVar2;
        uVar5 = (undefined7)((ulonglong)uVar2 >> 8);
        bVar1 = 1;
        goto LAB_143ce730b;
      }
    }
  }
  bVar1 = 0;
  uVar5 = 0;
LAB_143ce730b:
  return CONCAT71(uVar5,bVar1 & bVar7);
}



// FUNCTION 143ce7320 FUN_143ce7320 body=526 status=ok
// SIG undefined FUN_143ce7320(void)

void FUN_143ce7320(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0 && param_1 != (longlong *)0x0) {
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    local_30 = param_1[3];
    FUN_1400348e2(&local_30,&local_48);
    uVar9 = 0;
    uVar10 = (ulonglong)(DAT_14cadbef0 - 1);
    if (DAT_14cadbef0 == 0) {
      uVar10 = uVar9;
    }
    if (0 < (int)uVar10) {
      puVar8 = &DAT_149dfb77a;
      if (DAT_14cadbef0 != 0) {
        puVar8 = DAT_14cadbee8;
      }
      puVar6 = &DAT_149dfb77a;
      if ((int)uStack_40 != 0) {
        puVar6 = local_48;
      }
      lVar11 = 0;
LAB_143ce73bc:
      uVar1 = *(ushort *)((longlong)puVar6 + lVar11);
      uVar2 = *(ushort *)((longlong)puVar8 + lVar11);
      if (uVar1 == uVar2) {
        iVar3 = 0;
        if ((uVar1 == 0) || (uVar10 == 1)) goto LAB_143ce740b;
LAB_143ce73d7:
        uVar10 = uVar10 - 1;
        lVar11 = lVar11 + 2;
        goto LAB_143ce73bc;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
          iVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
          goto LAB_143ce740b;
        }
        if (uVar10 == 1) {
          iVar3 = 0;
          goto LAB_143ce740b;
        }
        goto LAB_143ce73d7;
      }
      iVar3 = (uint)uVar1 - (uint)uVar2;
LAB_143ce740b:
      uVar9 = (ulonglong)(iVar3 == 0);
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar9 != '\0') {
      FUN_1417edd0a(param_1);
      iVar3 = (**(code **)(*param_2 + 0x3c0))(param_2);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          lVar11 = (**(code **)(*param_2 + 0x318))(param_2,iVar3);
          if (lVar11 != 0) {
            FUN_1409c2748(param_1,lVar11);
          }
          iVar3 = iVar3 + 1;
          iVar4 = (**(code **)(*param_2 + 0x3c0))(param_2);
        } while (iVar3 < iVar4);
      }
      uVar5 = (**(code **)(*param_2 + 0x360))(param_2);
      *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar5;
      FUN_140816cc4(param_1 + 0xa7,param_2 + 0xa7);
      uVar5 = (**(code **)(*param_2 + 0x428))(param_2,0);
      FUN_1417edd60(param_1,uVar5);
      lVar11 = (**(code **)(*param_1 + 0x388))(param_1);
      lVar7 = (**(code **)(*param_2 + 0x388))(param_2);
      if (lVar11 != 0 && lVar7 != 0) {
        if (*(char *)(lVar11 + 0x24) == '\0') {
          *(undefined1 *)(lVar11 + 0x18) = *(undefined1 *)(lVar7 + 0x18);
        }
        *(undefined1 *)(lVar11 + 0x19) = *(undefined1 *)(lVar7 + 0x19);
        *(undefined1 *)(lVar11 + 0x1a) = *(undefined1 *)(lVar7 + 0x1a);
        *(undefined1 *)(lVar11 + 0x1b) = *(undefined1 *)(lVar7 + 0x1b);
        *(undefined1 *)(lVar11 + 0x1c) = *(undefined1 *)(lVar7 + 0x1c);
        *(undefined1 *)(lVar11 + 0x1d) = *(undefined1 *)(lVar7 + 0x1d);
        *(undefined1 *)(lVar11 + 0x1e) = *(undefined1 *)(lVar7 + 0x1e);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce7530 FUN_143ce7530 body=367 status=ok
// SIG undefined FUN_143ce7530(void)

void FUN_143ce7530(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  longlong **local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140e115ea(param_1 + 0x17a0);
  FUN_140c89340(local_68,param_1);
  local_78 = 0;
  uStack_70 = 0;
  local_7c = 0;
  if ((longlong)*(int *)(param_1 + 0x1660) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x1658);
    plVar1 = plVar7 + *(int *)(param_1 + 0x1660);
    do {
      local_88 = (longlong *)*plVar7;
      if (local_88 != (longlong *)0x0) {
        FUN_140e11408(local_88,&local_78);
        if (0 < (int)uStack_70) {
          lVar4 = (**(code **)(*local_88 + 0x4b8))();
          iVar2 = *(int *)(lVar4 + 8);
          if (0 < (longlong)iVar2) {
            lVar4 = 0;
            do {
              plVar5 = (longlong *)(**(code **)(*local_88 + 0x4b8))();
              lVar3 = *(longlong *)(*plVar5 + lVar4 * 8);
              if (lVar3 != 0) {
                if ((longlong)(int)uStack_70 != 0) {
                  lVar6 = 0;
                  do {
                    if (*(longlong *)(local_78 + lVar6) == lVar3) {
                      local_60 = &local_88;
                      local_58 = &local_7c;
                      FUN_140e1181e(param_1 + 0x17a0,local_4c);
                      local_7c = local_7c + 1;
                      break;
                    }
                    lVar6 = lVar6 + 8;
                  } while ((longlong)(int)uStack_70 * 8 != lVar6);
                }
              }
              lVar4 = lVar4 + 1;
            } while (lVar4 != iVar2);
          }
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140c8931a(local_68);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce76ae FUN_143ce76ae body=395 status=ok
// SIG undefined FUN_143ce76ae(void)

longlong FUN_143ce76ae(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined1 *)((longlong)param_1 + 0x1801) = 0;
  cVar1 = (**(code **)(*param_1 + 0xbf0))();
  if (((cVar1 != '\0') && ((*(byte *)((longlong)param_1 + 0x89f) & 1) == 0)) &&
     ((longlong)(int)param_1[0x2c2] != 0)) {
    lVar5 = param_1[0x2c1];
    lVar4 = (longlong)(int)param_1[0x2c2] * 0x18;
    do {
      cVar1 = FUN_1401b1808(param_1,lVar5);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0xc30))(param_1);
        if (cVar1 != '\0') {
          return 0;
        }
        if ((int)param_1[0x2c2] < 1) {
          if (param_1[0x115] == 0) {
            plVar3 = (longlong *)param_1[0xcb];
            if (plVar3 == (longlong *)0x0) {
              plVar3 = (longlong *)param_1[0xcc];
              if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_143ce77f3;
              if (plVar3 == (longlong *)0x0) goto LAB_143ce77af;
LAB_143ce7814:
              if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) {
LAB_143ce782c:
                FUN_1456cec3c(plVar3);
              }
            }
            else if (DAT_14c950c29 != 0) {
LAB_143ce77f3:
              FUN_1456cec3c(plVar3);
              plVar3 = (longlong *)param_1[0xcb];
              if (plVar3 == (longlong *)0x0) {
                plVar3 = (longlong *)param_1[0xcc];
                goto LAB_143ce7814;
              }
              if ((DAT_14c950c29 & 1) == 0) goto LAB_143ce7782;
              goto LAB_143ce782c;
            }
LAB_143ce7782:
            lVar5 = *plVar3;
LAB_143ce7788:
            uVar2 = (**(code **)(lVar5 + 0x388))(plVar3);
          }
          else {
            uVar2 = *(undefined8 *)(param_1[0x115] + 0x40);
          }
        }
        else {
          lVar5 = *(longlong *)param_1[0x2c1];
          if (lVar5 == 0) {
            plVar3 = (longlong *)((longlong *)param_1[0x2c1])[1];
            if (plVar3 != (longlong *)0x0) {
              lVar5 = *plVar3;
              goto LAB_143ce7788;
            }
LAB_143ce77af:
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined8 *)(lVar5 + 0x40);
          }
        }
        lVar5 = FUN_14001cc68(0x3f0,0x10);
        FUN_143d880a6(lVar5,param_1,uVar2);
        if (lVar5 != 0) {
          *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) | 1;
          *(undefined1 *)((longlong)param_1 + 0x1801) = 1;
          return lVar5;
        }
        break;
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  lVar5 = FUN_143491ff0(param_1);
  return lVar5;
}



// FUNCTION 143ce783a FUN_143ce783a body=374 status=ok
// SIG undefined FUN_143ce783a(void)

void FUN_143ce783a(longlong *param_1,undefined4 param_2,longlong param_3,char param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined1 **local_58;
  undefined1 *local_48;
  undefined4 **local_40;
  undefined4 *local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = param_2;
  if ((*DAT_14cb761c8 != 0) && (lVar4 = (**(code **)(*param_1 + 0xb98))(), lVar4 != 0)) {
    if (param_3 == 0) {
      iVar5 = 0;
LAB_143ce792f:
      if (iVar5 < (int)param_1[0x1af]) {
        local_38 = &local_2c;
        if (param_4 == '\0') {
          lVar4 = *(longlong *)(param_1[0x1ae] + (longlong)iVar5 * 8);
          pbVar1 = (byte *)(lVar4 + 0x3d);
          *pbVar1 = *pbVar1 | 6;
          FUN_140a18d12(lVar4,param_2,1);
        }
        else {
          local_40 = &local_38;
          local_58 = &local_48;
          local_48 = &LAB_143ce9d66;
          FUN_14593616e(param_1,param_3,1,0);
        }
      }
    }
    else if (*(int *)(lVar4 + 0xa0) != *(int *)(lVar4 + 0xcc)) {
      uVar3 = (uint)((ulonglong)param_3 >> 0x10);
      uVar7 = (uint)param_3 & 0xffff;
      lVar6 = lVar4 + 0xd0;
      if (*(longlong *)(lVar4 + 0xd8) != 0) {
        lVar6 = *(longlong *)(lVar4 + 0xd8);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar4 + 0xe0) - 1U &
                               (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar7) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          plVar2 = (longlong *)(*(longlong *)(lVar4 + 0x98) + (longlong)iVar5 * 0x14);
          if (*plVar2 == param_3) {
            if (((plVar2 != (longlong *)0x0) && (plVar2 + 1 != (longlong *)0x0)) &&
               (iVar5 = (int)plVar2[1], iVar5 != -1)) goto LAB_143ce792f;
            break;
          }
          iVar5 = *(int *)((longlong)plVar2 + 0xc);
        } while (iVar5 != -1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce79b2 FUN_143ce79b2 body=556 status=ok
// SIG undefined FUN_143ce79b2(void)

bool FUN_143ce79b2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
      (lVar3 = *(longlong *)(lVar3 + 0x1f0), lVar3 != 0)) && (0 < *(int *)(lVar3 + 0x40))) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar8 * 8);
      if (lVar1 != 0) {
        lVar4 = FUN_140628492();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           (plVar6 = *(longlong **)(lVar1 + 0x30), plVar6 != (longlong *)0x0)) {
          if (DAT_14cb61cd0 == 0) {
            local_50 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1463b31ae;
            local_70 = &local_50;
            local_78 = &LAB_1486dca4f;
            local_80 = &LAB_1464f50a6;
            local_88 = &DAT_149e063b2;
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 8;
            local_a8 = 0xd70;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
            plVar6 = *(longlong **)(lVar1 + 0x30);
            if (plVar6 == (longlong *)0x0) goto LAB_143ce7a60;
          }
          if (((DAT_14cb61cd0 != 0) && (lVar1 = plVar6[2], lVar1 != 0)) &&
             ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(lVar1 + 0x38) &&
              ((*(longlong *)
                 (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
                DAT_14cb61cd0 + 0x30 && (cVar2 = (**(code **)(*plVar6 + 0x1030))(), cVar2 != '\0')))
              ))) {
            bVar9 = false;
            goto LAB_143ce7bad;
          }
        }
      }
LAB_143ce7a60:
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < *(int *)(lVar3 + 0x40));
  }
  iVar7 = *(int *)(param_1 + 0xaa4);
  if (-1 < iVar7) goto LAB_143ce7ba8;
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 == 0) {
LAB_143ce7b93:
    iVar7 = *(int *)(param_1 + 0xaa4);
    if (-1 < iVar7) goto LAB_143ce7ba8;
    iVar7 = 1;
  }
  else {
    uVar5 = FUN_1401b0f18();
    plVar6 = (longlong *)FUN_144718840(lVar3,uVar5);
    if (plVar6 == (longlong *)0x0) goto LAB_143ce7b93;
    cVar2 = (**(code **)(*plVar6 + 0x30))();
    iVar7 = 0;
    if (cVar2 != '\0') goto LAB_143ce7b93;
  }
  *(int *)(param_1 + 0xaa4) = iVar7;
LAB_143ce7ba8:
  bVar9 = iVar7 != 0;
LAB_143ce7bad:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 143ce7be0 FUN_143ce7be0 body=111 status=ok
// SIG undefined FUN_143ce7be0(void)

undefined8 FUN_143ce7be0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0xaa8);
  if (-1 < (int)*(uint *)(param_1 + 0xaa8)) goto LAB_143ce7c43;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
LAB_143ce7c21:
    uVar5 = (ulonglong)*(uint *)(param_1 + 0xaa8);
    if ((-1 < (int)*(uint *)(param_1 + 0xaa8)) || ((*(byte *)(param_1 + 0x2e4) & 1) == 0))
    goto LAB_143ce7c43;
  }
  else {
    uVar3 = FUN_1401b0f18();
    plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
    if (plVar4 == (longlong *)0x0) goto LAB_143ce7c21;
    cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4);
    if (cVar2 == '\0') goto LAB_143ce7c21;
  }
  *(undefined4 *)(param_1 + 0xaa8) = 1;
  uVar5 = 1;
LAB_143ce7c43:
  return CONCAT71((int7)(uVar5 >> 8),0 < (int)uVar5);
}



// FUNCTION 143ce7c4f FUN_143ce7c4f body=91 status=ok
// SIG undefined FUN_143ce7c4f(void)

void FUN_143ce7c4f(void)

{
  if (DAT_14cb76228 != 0) {
    if (DAT_14cb76220 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb76220)(DAT_14cb76220,0);
    FUN_1446efa72(&DAT_14cb76220,0,0,0x10);
    DAT_14cb76228 = 0;
  }
  if (DAT_14cb76220 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ce7cd6 FUN_143ce7cd6 body=48 status=ok
// SIG undefined FUN_143ce7cd6(void)

longlong FUN_143ce7cd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1058;
  FUN_14169169a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce7d06 FUN_143ce7d06 body=48 status=ok
// SIG undefined FUN_143ce7d06(void)

longlong FUN_143ce7d06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x11c0;
  FUN_14169169a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce7d44 FUN_143ce7d44 body=38 status=ok
// SIG undefined FUN_143ce7d44(void)

undefined8 FUN_143ce7d44(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce7d72 FUN_143ce7d72 body=730 status=ok
// SIG undefined FUN_143ce7d72(void)

void FUN_143ce7d72(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float _X;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 *local_180;
  float *local_178;
  undefined1 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined1 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  iVar5 = *(int *)(param_2 + 8);
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      if ((param_4 >> ((uint)lVar7 & 0x1f) & 1) != 0) {
        bVar4 = *(byte *)(param_1 + 699);
        if ((*(byte *)(param_1 + 0x6c) & 6) == 0) {
          _X = *(float *)(&DAT_14a819f80 + (ulonglong)((*(byte *)(param_1 + 0x6c) & 0x10) == 0) * 4)
          ;
        }
        else {
          _X = 1.0;
        }
        fVar1 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2ba)];
        fVar2 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2b9)];
        fVar3 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2b8)];
        local_d0 = powf(_X,2.2);
        local_c8 = fVar3 * local_d0;
        local_cc = fVar2 * local_d0;
        local_d0 = fVar1 * local_d0;
        lVar6 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar6 = param_5 + 0x50;
        }
        local_168 = *(undefined4 *)(param_1 + 700);
        local_e8 = *(undefined8 *)(param_1 + 0x2a0);
        uStack_e0 = *(undefined8 *)(param_1 + 0x2a8);
        local_d8 = *(undefined8 *)(param_1 + 0x2b0);
        local_f0 = *(undefined8 *)(param_1 + 0x150);
        local_100 = *(undefined8 *)(param_1 + 0x140);
        uStack_f8 = *(undefined8 *)(param_1 + 0x148);
        local_108 = *(undefined8 *)(param_1 + 0x130);
        local_118 = *(undefined8 *)(param_1 + 0x120);
        uStack_110 = *(undefined8 *)(param_1 + 0x128);
        local_120 = *(undefined8 *)(param_1 + 0x110);
        local_130 = *(undefined8 *)(param_1 + 0x100);
        uStack_128 = *(undefined8 *)(param_1 + 0x108);
        local_138 = *(undefined8 *)(param_1 + 0x170);
        local_148 = *(undefined4 *)(param_1 + 0x160);
        uStack_144 = *(undefined4 *)(param_1 + 0x164);
        uStack_140 = *(undefined4 *)(param_1 + 0x168);
        uStack_13c = *(undefined4 *)(param_1 + 0x16c);
        local_158 = 0;
        local_170 = 0;
        local_178 = &local_d0;
        local_180 = &local_e8;
        local_188 = &local_100;
        local_160 = 0;
        local_c4 = (float)bVar4 * 0.003921569;
        FUN_147cba613(*(undefined8 *)(lVar6 + lVar7 * 8),&local_148,&local_130,&local_118);
        iVar5 = *(int *)(param_2 + 8);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  if ((local_c0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce804e FUN_143ce804e body=127 status=ok
// SIG undefined FUN_143ce804e(void)

undefined8 * FUN_143ce804e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(byte *)(param_1 + 0x6c) & 6) == 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar2 = FUN_14480c900(param_1,param_3);
  uVar1 = (uint)bVar2 << 2 | 0x82;
  if (bVar3) {
    uVar1 = 0x82;
  }
  bVar2 = FUN_144914152(param_1,param_3);
  *(uint *)(param_2 + 2) = uVar1 + (uint)bVar2 * 8;
  return param_2;
}



// FUNCTION 143ce80dc FUN_143ce80dc body=38 status=ok
// SIG undefined FUN_143ce80dc(void)

undefined8 FUN_143ce80dc(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce810a FUN_143ce810a body=1793 status=ok
// SIG undefined FUN_143ce810a(void)

void FUN_143ce810a(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_1d8 [32];
  float *local_1b8;
  double local_1b0;
  int local_1a8;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar10 = (int)param_2[1];
  if (0 < iVar10) {
    lVar9 = 0;
    do {
      if ((param_4 >> ((uint)lVar9 & 0x1f) & 1) != 0) {
        lVar8 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar8 = param_5 + 0x50;
        }
        fVar16 = (float)*(byte *)(param_1 + 0x29f) * 0.003921569;
        if ((*(byte *)(param_1 + 0x6c) & 6) == 0) {
          fVar11 = *(float *)(&DAT_14a819f80 +
                             (ulonglong)((*(byte *)(param_1 + 0x6c) & 0x10) == 0) * 4);
        }
        else {
          fVar11 = 1.0;
        }
        lVar4 = *(longlong *)(*param_2 + lVar9 * 8);
        uVar5 = *(undefined8 *)(lVar8 + lVar9 * 8);
        fVar1 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x29e)];
        fVar2 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x29d)];
        fVar3 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x29c)];
        local_100 = powf(fVar11,2.2);
        local_f8 = fVar3 * local_100;
        local_fc = fVar2 * local_100;
        local_100 = fVar1 * local_100;
        dVar6 = *(double *)(lVar4 + 0x1058) - *(double *)(param_1 + 0x170);
        dVar15 = *(double *)(lVar4 + 0x1050) - *(double *)(param_1 + 0x168);
        dVar12 = *(double *)(lVar4 + 0x1048) - *(double *)(param_1 + 0x160);
        fVar11 = (float)(dVar6 * dVar6 + dVar12 * dVar12 + dVar15 * dVar15);
        local_f4 = fVar16;
        if ((*(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x274) <= fVar11) &&
           (fVar11 <= *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x270))) {
          dVar6 = *(double *)(param_1 + 0x110);
          dVar12 = *(double *)(param_1 + 0x100);
          dVar15 = *(double *)(param_1 + 0x108);
          dVar13 = dVar6 * dVar6 + dVar12 * dVar12 + dVar15 * dVar15;
          if (((dVar13 != 1.0) ||
              (local_108 = dVar6, local_110 = dVar15, local_118 = dVar12, NAN(dVar13))) &&
             (local_108 = DAT_14c8464f0, local_110 = DAT_14c8464e8, local_118 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar13)) {
            dVar14 = 1.0 / SQRT(dVar13);
            local_108 = dVar6 * dVar14;
            local_110 = dVar15 * dVar14;
            local_118 = dVar12 * dVar14;
          }
          fVar16 = (float)SQRT(dVar13);
          dVar6 = *(double *)(param_1 + 0x130);
          dVar12 = *(double *)(param_1 + 0x128);
          dVar15 = *(double *)(param_1 + 0x120);
          dVar13 = dVar6 * dVar6 + dVar15 * dVar15 + dVar12 * dVar12;
          local_168 = SQRT(dVar13);
          if ((float)local_168 <= fVar16) {
            fVar16 = (float)local_168;
          }
          local_170 = *(double *)(param_1 + 0x150);
          local_178 = *(double *)(param_1 + 0x148);
          local_180 = *(double *)(param_1 + 0x140);
          dVar14 = local_170 * local_170 + local_180 * local_180 + local_178 * local_178;
          fVar11 = (float)SQRT(dVar14);
          if (fVar11 <= fVar16) {
            fVar16 = fVar11;
          }
          dVar7 = (double)fVar16;
          local_108 = local_108 * dVar7;
          local_110 = local_110 * dVar7;
          local_118 = local_118 * dVar7;
          if (((dVar13 != 1.0) ||
              (local_120 = dVar6, local_128 = dVar12, local_130 = dVar15, NAN(dVar13))) &&
             (local_120 = DAT_14c8464f0, local_128 = DAT_14c8464e8, local_130 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar13)) {
            dVar13 = 1.0 / local_168;
            local_120 = dVar6 * dVar13;
            local_128 = dVar12 * dVar13;
            local_130 = dVar15 * dVar13;
          }
          local_120 = local_120 * dVar7;
          local_128 = local_128 * dVar7;
          local_130 = local_130 * dVar7;
          if (((dVar14 != 1.0) ||
              (local_138 = local_170, local_140 = local_178, local_148 = local_180, NAN(dVar14))) &&
             (local_138 = DAT_14c8464f0, local_140 = DAT_14c8464e8, local_148 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar14)) {
            dVar6 = 1.0 / SQRT(dVar14);
            local_138 = local_170 * dVar6;
            local_140 = local_178 * dVar6;
            local_148 = local_180 * dVar6;
          }
          local_138 = local_138 * dVar7;
          local_140 = local_140 * dVar7;
          local_148 = local_148 * dVar7;
          local_1b0 = (double)*(float *)(param_1 + 0x2a0);
          iVar10 = (int)(*(float *)(param_1 + 0x2a0) * 0.25);
          if (0x3f < iVar10) {
            iVar10 = 0x40;
          }
          if (iVar10 < 0x11) {
            iVar10 = 0x10;
          }
          local_198 = *(undefined4 *)(param_1 + 0x2a4);
          local_188 = 0;
          local_190 = 0;
          local_1a0 = 0;
          local_1b8 = &local_100;
          local_1a8 = iVar10;
          local_160 = *(double *)(param_1 + 0x160);
          dStack_158 = *(double *)(param_1 + 0x168);
          local_150 = *(double *)(param_1 + 0x170);
          FUN_147cb7c40(uVar5,&local_160,&local_118,&local_130);
          local_198 = *(undefined4 *)(param_1 + 0x2a4);
          local_1b0 = (double)*(float *)(param_1 + 0x2a0);
          local_150 = *(double *)(param_1 + 0x170);
          local_160 = *(double *)(param_1 + 0x160);
          dStack_158 = *(double *)(param_1 + 0x168);
          local_188 = 0;
          local_190 = 0;
          local_1a0 = 0;
          local_1b8 = &local_100;
          local_1a8 = iVar10;
          FUN_147cb7c40(uVar5,&local_160,&local_118,&local_148);
          local_198 = *(undefined4 *)(param_1 + 0x2a4);
          local_1b0 = (double)*(float *)(param_1 + 0x2a0);
          local_150 = *(double *)(param_1 + 0x170);
          local_160 = *(double *)(param_1 + 0x160);
          dStack_158 = *(double *)(param_1 + 0x168);
          local_188 = 0;
          local_190 = 0;
          local_1a0 = 0;
          local_1b8 = &local_100;
          local_1a8 = iVar10;
          FUN_147cb7c40(uVar5,&local_160,&local_130,&local_148);
        }
        iVar10 = (int)param_2[1];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar10);
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ce880c FUN_143ce880c body=127 status=ok
// SIG undefined FUN_143ce880c(void)

undefined8 * FUN_143ce880c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(byte *)(param_1 + 0x6c) & 6) == 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar2 = FUN_14480c900(param_1,param_3);
  uVar1 = (uint)bVar2 << 2 | 0x82;
  if (bVar3) {
    uVar1 = 0x82;
  }
  bVar2 = FUN_144914152(param_1,param_3);
  *(uint *)(param_2 + 2) = uVar1 + (uint)bVar2 * 8;
  return param_2;
}



// FUNCTION 143ce889a FUN_143ce889a body=38 status=ok
// SIG undefined FUN_143ce889a(void)

undefined8 FUN_143ce889a(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce88c8 FUN_143ce88c8 body=764 status=ok
// SIG undefined FUN_143ce88c8(void)

void FUN_143ce88c8(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  float _X;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  float *local_170;
  double local_168;
  double local_160;
  int local_158;
  undefined1 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar5 = (int)(*(float *)(param_1 + 0x29c) * 0.25);
  iVar7 = 0x40;
  if (iVar5 < 0x40) {
    iVar7 = iVar5;
  }
  iVar5 = 0x10;
  if (0x10 < iVar7) {
    iVar5 = iVar7;
  }
  iVar7 = *(int *)(param_2 + 8);
  if (0 < iVar7) {
    lVar8 = 0;
    do {
      if ((param_4 >> ((uint)lVar8 & 0x1f) & 1) != 0) {
        bVar4 = *(byte *)(param_1 + 0x2a7);
        if ((*(byte *)(param_1 + 0x6c) & 6) == 0) {
          _X = *(float *)(&DAT_14a819f80 + (ulonglong)((*(byte *)(param_1 + 0x6c) & 0x10) == 0) * 4)
          ;
        }
        else {
          _X = 1.0;
        }
        fVar1 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2a6)];
        fVar2 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2a5)];
        fVar3 = (float)(&DAT_14c758c60)[*(byte *)(param_1 + 0x2a4)];
        local_d0 = powf(_X,2.2);
        local_c8 = fVar3 * local_d0;
        local_cc = fVar2 * local_d0;
        local_d0 = fVar1 * local_d0;
        lVar6 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar6 = param_5 + 0x50;
        }
        local_148 = *(undefined4 *)(param_1 + 0x2a8);
        local_160 = (double)*(float *)(param_1 + 0x2a0);
        local_168 = (double)*(float *)(param_1 + 0x29c);
        local_d8 = *(undefined8 *)(param_1 + 0x150);
        local_e8 = *(undefined8 *)(param_1 + 0x140);
        uStack_e0 = *(undefined8 *)(param_1 + 0x148);
        local_f0 = *(undefined8 *)(param_1 + 0x130);
        local_100 = *(undefined8 *)(param_1 + 0x120);
        uStack_f8 = *(undefined8 *)(param_1 + 0x128);
        local_108 = *(undefined8 *)(param_1 + 0x110);
        local_118 = *(undefined8 *)(param_1 + 0x100);
        uStack_110 = *(undefined8 *)(param_1 + 0x108);
        local_120 = *(undefined8 *)(param_1 + 0x170);
        local_130 = *(undefined8 *)(param_1 + 0x160);
        uStack_128 = *(undefined8 *)(param_1 + 0x168);
        local_138 = 0;
        local_150 = 0;
        local_170 = &local_d0;
        local_178 = &local_e8;
        local_140 = 0;
        local_158 = iVar5;
        local_c4 = (float)bVar4 * 0.003921569;
        FUN_147cb97ca(*(undefined8 *)(lVar6 + lVar8 * 8),&local_130,&local_118,&local_100);
        iVar7 = *(int *)(param_2 + 8);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar7);
  }
  if ((local_c0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce8bc6 FUN_143ce8bc6 body=127 status=ok
// SIG undefined FUN_143ce8bc6(void)

undefined8 * FUN_143ce8bc6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(byte *)(param_1 + 0x6c) & 6) == 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar2 = FUN_14480c900(param_1,param_3);
  uVar1 = (uint)bVar2 << 2 | 0x82;
  if (bVar3) {
    uVar1 = 0x82;
  }
  bVar2 = FUN_144914152(param_1,param_3);
  *(uint *)(param_2 + 2) = uVar1 + (uint)bVar2 * 8;
  return param_2;
}



// FUNCTION 143ce8ca2 FUN_143ce8ca2 body=31 status=ok
// SIG undefined FUN_143ce8ca2(void)

undefined8 FUN_143ce8ca2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce8d10 FUN_143ce8d10 body=31 status=ok
// SIG undefined FUN_143ce8d10(void)

undefined8 FUN_143ce8d10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce8d30 FUN_143ce8d30 body=147 status=ok
// SIG undefined FUN_143ce8d30(void)

void FUN_143ce8d30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 500) == '\x01') {
    *(undefined1 *)(param_1 + 500) = 0;
  }
  if (*(char *)(param_1 + 0x40) != '\x01') goto LAB_143ce8d8e;
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_143ce8d82:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x38) = 0;
      goto LAB_143ce8d82;
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
LAB_143ce8d8e:
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143ce8db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143ce8dc4 FUN_143ce8dc4 body=76 status=ok
// SIG undefined FUN_143ce8dc4(void)

void FUN_143ce8dc4(longlong *param_1)

{
  char cVar1;
  
  param_1 = (longlong *)*param_1;
  *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) | 0x20;
  (**(code **)(*param_1 + 0x7e8))(param_1,0);
  cVar1 = (**(code **)(*param_1 + 0xeb8))(param_1);
  if (cVar1 != '\0') {
    return;
  }
  *(byte *)(param_1 + 0x774) = *(byte *)(param_1 + 0x774) | 1;
                    /* WARNING: Could not recover jumptable at 0x000143ce8e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xec0))(param_1);
  return;
}



// FUNCTION 143ce8e3a FUN_143ce8e3a body=29 status=ok
// SIG undefined FUN_143ce8e3a(void)

undefined8 FUN_143ce8e3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce8e58 FUN_143ce8e58 body=171 status=ok
// SIG undefined FUN_143ce8e58(void)

void FUN_143ce8e58(longlong *param_1,undefined4 param_2,undefined4 param_3)

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
        goto LAB_143ce8eed;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143ce8eed:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143ce8f04 FUN_143ce8f04 body=112 status=ok
// SIG undefined FUN_143ce8f04(void)

void FUN_143ce8f04(longlong *param_1,int param_2)

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
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 143ce90b8 FUN_143ce90b8 body=228 status=ok
// SIG undefined FUN_143ce90b8(void)

void FUN_143ce90b8(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  
  lVar3 = param_1[4];
  FUN_140d94080(*(longlong *)*param_1 + 0x368,param_1[1],param_1[2]);
  lVar4 = *(longlong *)*param_1;
  if (*(char *)(lVar4 + 0x3e0) == '\0') {
    FUN_140cddb58(lVar4 + 0x368);
  }
  *(undefined1 *)param_1[3] = *(undefined1 *)(lVar4 + 0x3c2);
  pcVar5 = (char *)param_1[3];
  if (((*(char *)(param_3 + 0x262) != '\0') || (*(char *)(param_3 + 0x260) != '\0')) &&
     (*pcVar5 == '\x01')) {
    *(undefined2 *)(param_3 + 0x261) = 0x101;
    pcVar5 = (char *)param_1[3];
  }
  if ((*pcVar5 == '\x01') && (iVar6 = *(int *)(lVar3 + 0x15f8), iVar6 != 0)) {
    plVar1 = (longlong *)(lVar3 + 0x15f0);
    FUN_14005ea14(plVar1,iVar6);
    if (0 < iVar6) {
      do {
        iVar2 = *(int *)(lVar3 + 0x15f8);
        *(uint *)(lVar3 + 0x15f8) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0x15fc) < iVar2 + 1U) {
          FUN_14475e4ac(plVar1,iVar2);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = 0xff7fffff;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}



// FUNCTION 143ce919c FUN_143ce919c body=286 status=ok
// SIG undefined FUN_143ce919c(void)

void FUN_143ce919c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_88 [42];
  undefined7 uStack_5e;
  undefined4 local_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined8 local_47;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_28 = DAT_14c8464f0;
  local_57 = (undefined4)DAT_14c8464e0;
  uStack_53 = DAT_14c8464e0._4_4_;
  uStack_4f = (undefined4)DAT_14c8464e8;
  uStack_4b = DAT_14c8464e8._4_4_;
  local_47 = DAT_14c8464f0;
  iVar4 = *(int *)(param_3 + 0x1e8);
  *(uint *)(param_3 + 0x1e8) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1ec) < iVar4 + 1U) {
    FUN_141743a7a((longlong *)(param_3 + 0x1e0),iVar4);
  }
  lVar5 = *(longlong *)(param_3 + 0x1e0);
  lVar9 = (longlong)iVar4 * 0x60;
  puVar1 = (undefined1 *)(lVar5 + lVar9);
  *(undefined1 *)(lVar5 + lVar9) = 0;
  puVar2 = (undefined8 *)(lVar5 + 1 + lVar9);
  *puVar2 = CONCAT17((undefined1)local_38,uStack_3f);
  puVar2[1] = CONCAT17((undefined1)uStack_30,CONCAT43(uStack_34,local_38._1_3_));
  puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar9);
  *puVar2 = CONCAT44(uStack_2c,uStack_30);
  puVar2[1] = local_28;
  *(undefined1 *)(lVar5 + 0x20 + lVar9) = 0;
  puVar2 = (undefined8 *)(lVar5 + 0x21 + lVar9);
  *puVar2 = CONCAT17((undefined1)local_57,uStack_5e);
  puVar2[1] = CONCAT17((undefined1)uStack_4f,CONCAT43(uStack_53,local_57._1_3_));
  puVar3 = (undefined4 *)(lVar5 + 0x30 + lVar9);
  *puVar3 = uStack_4f;
  puVar3[1] = uStack_4b;
  puVar3[2] = (undefined4)local_47;
  puVar3[3] = local_47._4_4_;
  *(undefined1 *)(lVar5 + 0x40 + lVar9) = 0;
  *(undefined8 *)(lVar5 + 0x44 + lVar9) = 0;
  *(undefined8 *)(lVar5 + 0x4c + lVar9) = 0x3e23d70a3c83126f;
  *(undefined8 *)(lVar5 + 0x58 + lVar9) = 0;
  *(int *)(lVar5 + 0x4c + lVar9) = (int)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 != 0) {
    *(longlong *)(puVar1 + 0x44) = lVar5;
  }
  puVar1[0x40] = lVar5 != 0;
  puVar3 = (undefined4 *)*param_1;
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar3 + 4);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  *(undefined4 *)(puVar1 + 8) = *puVar3;
  *(undefined4 *)(puVar1 + 0xc) = uVar6;
  *(undefined4 *)(puVar1 + 0x10) = uVar7;
  *(undefined4 *)(puVar1 + 0x14) = uVar8;
  *puVar1 = 1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce92bc FUN_143ce92bc body=309 status=ok
// SIG undefined FUN_143ce92bc(void)

void FUN_143ce92bc(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_88 [42];
  undefined7 uStack_5e;
  undefined4 local_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined8 local_47;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_28 = DAT_14c8464f0;
  local_57 = (undefined4)DAT_14c8464e0;
  uStack_53 = DAT_14c8464e0._4_4_;
  uStack_4f = (undefined4)DAT_14c8464e8;
  uStack_4b = DAT_14c8464e8._4_4_;
  local_47 = DAT_14c8464f0;
  iVar4 = *(int *)(param_3 + 0x1e8);
  *(uint *)(param_3 + 0x1e8) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1ec) < iVar4 + 1U) {
    FUN_141743a7a((longlong *)(param_3 + 0x1e0),iVar4);
  }
  lVar5 = *(longlong *)(param_3 + 0x1e0);
  lVar10 = (longlong)iVar4 * 0x60;
  puVar1 = (undefined1 *)(lVar5 + lVar10);
  *(undefined1 *)(lVar5 + lVar10) = 0;
  puVar2 = (undefined8 *)(lVar5 + 1 + lVar10);
  *puVar2 = CONCAT17((undefined1)local_38,uStack_3f);
  puVar2[1] = CONCAT17((undefined1)uStack_30,CONCAT43(uStack_34,local_38._1_3_));
  puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar10);
  *puVar2 = CONCAT44(uStack_2c,uStack_30);
  puVar2[1] = local_28;
  *(undefined1 *)(lVar5 + 0x20 + lVar10) = 0;
  puVar2 = (undefined8 *)(lVar5 + 0x21 + lVar10);
  *puVar2 = CONCAT17((undefined1)local_57,uStack_5e);
  puVar2[1] = CONCAT17((undefined1)uStack_4f,CONCAT43(uStack_53,local_57._1_3_));
  puVar3 = (undefined4 *)(lVar5 + 0x30 + lVar10);
  *puVar3 = uStack_4f;
  puVar3[1] = uStack_4b;
  puVar3[2] = (undefined4)local_47;
  puVar3[3] = local_47._4_4_;
  *(undefined1 *)(lVar5 + 0x40 + lVar10) = 0;
  *(undefined8 *)(lVar5 + 0x44 + lVar10) = 0;
  *(undefined8 *)(lVar5 + 0x4c + lVar10) = 0x3e23d70a3c83126f;
  *(undefined8 *)(lVar5 + 0x58 + lVar10) = 0;
  *(int *)(lVar5 + 0x4c + lVar10) = (int)param_1[3];
  lVar5 = *(longlong *)param_1[2];
  if (lVar5 != 0) {
    *(longlong *)(puVar1 + 0x44) = lVar5;
  }
  puVar1[0x40] = lVar5 != 0;
  puVar2 = (undefined8 *)*param_1;
  *(undefined8 *)(puVar1 + 0x18) = puVar2[2];
  uVar9 = puVar2[1];
  *(undefined8 *)(puVar1 + 8) = *puVar2;
  *(undefined8 *)(puVar1 + 0x10) = uVar9;
  *puVar1 = 1;
  puVar3 = (undefined4 *)param_1[1];
  *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(puVar3 + 4);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  *(undefined4 *)(puVar1 + 0x28) = *puVar3;
  *(undefined4 *)(puVar1 + 0x2c) = uVar6;
  *(undefined4 *)(puVar1 + 0x30) = uVar7;
  *(undefined4 *)(puVar1 + 0x34) = uVar8;
  puVar1[0x20] = 1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce93f2 FUN_143ce93f2 body=286 status=ok
// SIG undefined FUN_143ce93f2(void)

void FUN_143ce93f2(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_88 [42];
  undefined7 uStack_5e;
  undefined4 local_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined8 local_47;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_28 = DAT_14c8464f0;
  local_57 = (undefined4)DAT_14c8464e0;
  uStack_53 = DAT_14c8464e0._4_4_;
  uStack_4f = (undefined4)DAT_14c8464e8;
  uStack_4b = DAT_14c8464e8._4_4_;
  local_47 = DAT_14c8464f0;
  iVar4 = *(int *)(param_3 + 0x1e8);
  *(uint *)(param_3 + 0x1e8) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x1ec) < iVar4 + 1U) {
    FUN_141743a7a((longlong *)(param_3 + 0x1e0),iVar4);
  }
  lVar5 = *(longlong *)(param_3 + 0x1e0);
  lVar9 = (longlong)iVar4 * 0x60;
  puVar1 = (undefined1 *)(lVar5 + lVar9);
  *(undefined1 *)(lVar5 + lVar9) = 0;
  puVar2 = (undefined8 *)(lVar5 + 1 + lVar9);
  *puVar2 = CONCAT17((undefined1)local_38,uStack_3f);
  puVar2[1] = CONCAT17((undefined1)uStack_30,CONCAT43(uStack_34,local_38._1_3_));
  puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar9);
  *puVar2 = CONCAT44(uStack_2c,uStack_30);
  puVar2[1] = local_28;
  *(undefined1 *)(lVar5 + 0x20 + lVar9) = 0;
  puVar2 = (undefined8 *)(lVar5 + 0x21 + lVar9);
  *puVar2 = CONCAT17((undefined1)local_57,uStack_5e);
  puVar2[1] = CONCAT17((undefined1)uStack_4f,CONCAT43(uStack_53,local_57._1_3_));
  puVar3 = (undefined4 *)(lVar5 + 0x30 + lVar9);
  *puVar3 = uStack_4f;
  puVar3[1] = uStack_4b;
  puVar3[2] = (undefined4)local_47;
  puVar3[3] = local_47._4_4_;
  *(undefined1 *)(lVar5 + 0x40 + lVar9) = 0;
  *(undefined8 *)(lVar5 + 0x44 + lVar9) = 0;
  *(undefined8 *)(lVar5 + 0x4c + lVar9) = 0x3e23d70a3c83126f;
  *(undefined8 *)(lVar5 + 0x58 + lVar9) = 0;
  *(int *)(lVar5 + 0x4c + lVar9) = (int)param_1[2];
  lVar5 = *(longlong *)param_1[1];
  if (lVar5 != 0) {
    *(longlong *)(puVar1 + 0x44) = lVar5;
  }
  puVar1[0x40] = lVar5 != 0;
  puVar3 = (undefined4 *)*param_1;
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar3 + 4);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  *(undefined4 *)(puVar1 + 8) = *puVar3;
  *(undefined4 *)(puVar1 + 0xc) = uVar6;
  *(undefined4 *)(puVar1 + 0x10) = uVar7;
  *(undefined4 *)(puVar1 + 0x14) = uVar8;
  *puVar1 = 1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce9534 FUN_143ce9534 body=368 status=ok
// SIG undefined FUN_143ce9534(void)

void FUN_143ce9534(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = *param_1;
  local_118 = 1;
  local_110 = 0x408f400000000000;
  local_108 = 0;
  local_100 = 0xc08f400000000000;
  local_f8 = 0x406f400000000000;
  local_f0 = 1;
  local_e8 = 0x4097700000000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  local_a8 = DAT_14c8464f0;
  local_a0 = 0x40c3880000000000;
  local_98 = 0;
  local_90 = 0x402e000000000000;
  uStack_78 = 0;
  uStack_74 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  iVar1 = FUN_1465490d8((longlong *)(param_3 + 0x118),&local_120);
  if (CONCAT44(uStack_7c,local_80) != 0) {
    FUN_1402c7646(&local_88);
  }
  local_128 = param_1[4];
  FUN_1470fa2a8((longlong)iVar1 * 0xf8 + *(longlong *)(param_3 + 0x118),param_1[1],param_1[2],
                param_1[3]);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce96a6 FUN_143ce96a6 body=352 status=ok
// SIG undefined FUN_143ce96a6(void)

void FUN_143ce96a6(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = *param_1;
  local_118 = 1;
  local_110 = 0x408f400000000000;
  local_108 = 0;
  local_100 = 0xc08f400000000000;
  local_f8 = 0x406f400000000000;
  local_f0 = 1;
  local_e8 = 0x4097700000000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  local_a8 = DAT_14c8464f0;
  local_a0 = 0x40c3880000000000;
  local_98 = 0;
  local_90 = 0x402e000000000000;
  uStack_78 = 0;
  uStack_74 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  iVar1 = FUN_1465490d8((longlong *)(param_3 + 0x118),&local_120);
  if (CONCAT44(uStack_7c,local_80) != 0) {
    FUN_1402c7646(&local_88);
  }
  FUN_1470fa3ac((longlong)iVar1 * 0xf8 + *(longlong *)(param_3 + 0x118),param_1[1],param_1[2]);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce9808 FUN_143ce9808 body=347 status=ok
// SIG undefined FUN_143ce9808(void)

void FUN_143ce9808(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = *param_1;
  local_118 = 1;
  local_110 = 0x408f400000000000;
  local_108 = 0;
  local_100 = 0xc08f400000000000;
  local_f8 = 0x406f400000000000;
  local_f0 = 1;
  local_e8 = 0x4097700000000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  local_a8 = DAT_14c8464f0;
  local_a0 = 0x40c3880000000000;
  local_98 = 0;
  local_90 = 0x402e000000000000;
  uStack_78 = 0;
  uStack_74 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  iVar1 = FUN_1465490d8((longlong *)(param_3 + 0x118),&local_120);
  if (CONCAT44(uStack_7c,local_80) != 0) {
    FUN_1402c7646(&local_88);
  }
  FUN_145c07432((longlong)iVar1 * 0xf8 + *(longlong *)(param_3 + 0x118),param_1[1]);
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce9964 FUN_143ce9964 body=344 status=ok
// SIG undefined FUN_143ce9964(void)

void FUN_143ce9964(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = *param_1;
  local_110 = 1;
  local_108 = 0x408f400000000000;
  local_100 = 0;
  local_f8 = 0xc08f400000000000;
  local_f0 = 0x406f400000000000;
  local_e8 = 1;
  local_e0 = 0x4097700000000000;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = DAT_14c8464e0;
  uStack_c0 = DAT_14c8464e8;
  local_b8 = DAT_14c8464f0;
  local_b0 = DAT_14c8464e0;
  uStack_a8 = DAT_14c8464e8;
  local_a0 = DAT_14c8464f0;
  local_98 = 0x40c3880000000000;
  local_90 = 0;
  local_88 = 0x402e000000000000;
  uStack_70 = 0;
  uStack_6c = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  iVar1 = FUN_1465490d8((longlong *)(param_3 + 0x118),&local_118);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1402c7646(&local_80);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 0x118) + 0xb0 + (longlong)iVar1 * 0xf8) = 3;
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ce9abd FUN_143ce9abd body=23 status=ok
// SIG undefined FUN_143ce9abd(void)

void FUN_143ce9abd(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 143ce9ad4 FUN_143ce9ad4 body=23 status=ok
// SIG undefined FUN_143ce9ad4(void)

void FUN_143ce9ad4(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143ce9aeb FUN_143ce9aeb body=75 status=ok
// SIG undefined FUN_143ce9aeb(void)

void FUN_143ce9aeb(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143ce9b36 FUN_143ce9b36 body=173 status=ok
// SIG undefined FUN_143ce9b36(void)

void FUN_143ce9b36(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_143ce9bcd;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143ce9bcd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143ce9be4 FUN_143ce9be4 body=31 status=ok
// SIG undefined FUN_143ce9be4(void)

undefined8 FUN_143ce9be4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce9cf2 FUN_143ce9cf2 body=31 status=ok
// SIG undefined FUN_143ce9cf2(void)

undefined8 FUN_143ce9cf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ce9d7d FUN_143ce9d7d body=1260 status=ok
// SIG undefined FUN_143ce9d7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ce9d7d(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb75f68 = (ulonglong)uVar2;
  local_50 = L"rInvalid resolution in tiff: zero or negative.";
  local_48 = 1;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb75f70 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb75f78);
  if (cVar1 == '\0') {
    _DAT_14cb75f78 = 0;
    uRam000000014cb75f80 = 0;
  }
  if (local_50 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb75f88 = 0x47efffffe0000000;
  _DAT_14cb75f90 = 0x47efffffe0000000;
  _DAT_14cb75f98 = 0x47efffffe0000000;
  _DAT_14cb75fa0 = 0x47efffffe0000000;
  _DAT_14cb75fa8 = 0x47efffffe0000000;
  _DAT_14cb75fb0 = 0x47efffffe0000000;
  _DAT_14cb75fb8 = 0x47efffffe0000000;
  _DAT_14cb75fc0 = 0x47efffffe0000000;
  local_50 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  _DAT_14cb75fcc = 0;
  FUN_14052b5e0(&DAT_14cb75fc8,"PlayerAwareness",0);
  _DAT_14cb75fd8 = "PlayerAwareness";
  _DAT_14cb75fe0 = 0x47efffffe0000000;
  _DAT_14cb75fe8 = 0x47efffffe0000000;
  _DAT_14cb75ff0 = 0x47efffffe0000000;
  _DAT_14cb76000 = 0x47efffffe0000000;
  _DAT_14cb76008 = 0x47efffffe0000000;
  _DAT_14cb76010 = 0x47efffffe0000000;
  _DAT_14cb76018 = 0x47efffffe0000000;
  DAT_14cb76020 = 0x47efffffe0000000;
  DAT_14cb76028 = 0x47efffffe0000000;
  DAT_14cb76030 = 0x47efffffe0000000;
  _DAT_14cb76038 = L"GbxGame.EGrantedMovementType";
  _DAT_14cb76040 = &DAT_14c872af8;
  _DAT_14cb76048 = L"MovementTypeEnumNames";
  _DAT_14cb76050 = 0;
  uRam000000014cb76058 = 0;
  _DAT_14cb76060 = 0;
  uRam000000014cb76068 = 0;
  _DAT_14cb76069 = 0;
  uRam000000014cb76070 = 0;
  uRam000000014cb76071 = 0;
  atexit((_func_5014 *)&LAB_143cde68f);
  _DAT_14cb76080 = L"GbxGame.EGrantedMovementType_Script";
  _DAT_14cb76088 = &DAT_14c872af8;
  _DAT_14cb76090 = L"MovementTypeEnumNames";
  _DAT_14cb76098 = 0;
  uRam000000014cb760a0 = 0;
  _DAT_14cb760a8 = 0;
  uRam000000014cb760b0 = 0;
  _DAT_14cb760b1 = 0;
  uRam000000014cb760b8 = 0;
  uRam000000014cb760b9 = 0;
  atexit((_func_5014 *)&LAB_143cde69b);
  FUN_1446f470e(&DAT_14cb760c8,L"CharacterSliding",1);
  FUN_1446f470e(&DAT_14cb760d0,L"OnSlidingImpactParticleSystemFinished",1);
  FUN_1446f470e(&DAT_14cb760d8,L"ControlledMoveServerMove",1);
  FUN_1446f470e(&DAT_14cb760e0,L"ControlledMoveGate",1);
  FUN_1446f470e(&DAT_14cb760e8,L"ScriptedMeshOffset",1);
  FUN_1446f470e(&DAT_14cb760f0,L"NetworkForgiveness",1);
  FUN_1446f470e(&DAT_14cb760f8,L"GbxSwimmable",1);
  FUN_1446f470e(&DAT_14cb76100,L"WaterBodyCollision",1);
  FUN_1446f470e(&DAT_14cb76108,L"NavLink",1);
  FUN_1446f470e(&DAT_14cb76120,L"MoveTo",1);
  local_50._0_1_ = 1;
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb76128,L"p.gbx.Cloth.UseLazyInitialization",&local_50,
                L"Whether or not to wait to initialize cloth until the first time cloth needs to be simulated."
               );
  atexit(FUN_143ce2614);
  local_50._0_1_ = 1;
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb76140,L"p.gbx.ForwardDynamics.EnableRagdollAutoGeneration",&local_50,
                L"Whether or not to automatically generate a primary ragdoll physics asset/behavior manager, setup the getups/physical animation, and tune the ragdoll"
               );
  atexit(FUN_143ce2ef7);
  local_50._0_1_ = 0;
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb76158,L"p.gbx.ForwardDynamics.bEnableLocalSimDataVersionUpdate",&local_50,
                L"Whether or not to allow a version bump for forward dynamics generated simulation data to automatically rebuild the data."
               );
  atexit(FUN_143ce2f3c);
  local_50._0_1_ = 0;
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb76170,L"p.gbx.ForwardDynamics.bEnableInvalidSimDataUpdate",&local_50,
                L"Whether or not to allow invalid data to get rebuild if detected locally.");
  atexit(FUN_143ce2f81);
  local_50._0_1_ = 1;
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb76188,L"a.gbx.Gestalt.ShareTransientMesh",&local_50,
                L"If True, attempt to share Gestalt Transient Mesh when possible");
  atexit(FUN_143ce2fc6);
  local_50 = (wchar_t *)CONCAT71(local_50._1_7_,1);
  local_58 = 0;
  FUN_140bd5914(&DAT_14cb761a0,L"a.gbx.Gestalt.EnableBodyGraphOptimization",&local_50,
                L"If True, enables gestalt optimization to prevent rebuilding of refskeleton when body graph parts are toggled"
               );
  atexit(FUN_143ce300b);
  local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffff00000000);
  local_58 = 4;
  FUN_14078dbce(&DAT_14cb761b8,L"p.EnableDynamicPerBodyFilterHacks",&local_50,
                L"Enables/Disables the use of a set of game focused hacks - allowing users to modify skel body collision dynamically (changes the behavior of per-body collision filtering)."
               );
  atexit(FUN_143ce3050);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,0x3c23d70a);
  local_58 = 0;
  FUN_140a6b41e(&DAT_14cb761d0,L"p.gbx.Cloth.ScaleDeltaForClothResetThreshold",&local_50,
                L"The change in scale that necessitates rebuilding the cloth simulation.");
  atexit(FUN_143ce3095);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cea278 FUN_143cea278 body=4032 status=ok
// SIG undefined FUN_143cea278(void)

void FUN_143cea278(longlong *param_1,undefined4 param_2)

{
  double *pdVar1;
  float fVar2;
  byte bVar3;
  longlong *plVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  undefined4 uVar10;
  char cVar11;
  longlong *plVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_508 [32];
  undefined8 *local_4e8;
  double *local_4e0;
  longlong *local_4d8;
  double *local_4d0;
  wchar_t *local_4c8;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  code **local_4b0;
  undefined1 *local_4a8;
  code *local_4a0;
  float local_494;
  longlong local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  code *local_478;
  double dStack_470;
  double local_468;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  double local_398;
  double local_390;
  double local_388;
  undefined4 local_380;
  undefined4 local_37c;
  code *local_370;
  double dStack_368;
  double local_360;
  code *local_358;
  double dStack_350;
  double local_348;
  undefined1 local_340 [16];
  double local_330;
  double local_328;
  undefined8 uStack_320;
  double local_318;
  undefined4 local_2dc;
  byte local_2d3;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  double local_1f8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  code *local_1b8 [2];
  undefined8 *local_1a8;
  double local_170;
  double local_168;
  undefined1 local_160;
  undefined2 uStack_15f;
  undefined1 uStack_15d;
  undefined2 uStack_15c;
  undefined1 uStack_15a;
  undefined1 uStack_159;
  undefined1 uStack_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  longlong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_380 = param_2;
    uVar15 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar15,&local_380);
    if ((DAT_14c761388 != 0) &&
       ((lVar16 = param_1[0x16], lVar16 != 0 || (lVar16 = FUN_1448abda6(param_1), lVar16 != 0)))) {
      if (*(longlong *)(lVar16 + 0x1f0) == 0) {
        lVar17 = lVar16 + 0x460;
      }
      else {
        lVar17 = *(longlong *)(*(longlong *)(lVar16 + 0x1f0) + 0xf8);
      }
      FUN_140e65914(lVar17,param_1,*(undefined4 *)(lVar16 + 0x6f4));
    }
  }
  plVar4 = (longlong *)param_1[0x15];
  if ((plVar4 == (longlong *)0x0) || ((char)param_1[0x44] == '\0')) goto LAB_143cea32f;
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  local_490 = param_1[0x16];
  if (local_490 == 0) {
    local_490 = FUN_1448abda6(param_1);
  }
  plVar12 = (longlong *)(**(code **)(*plVar4 + 0x5f0))(plVar4);
  plVar20 = plVar12;
  if (plVar12 == (longlong *)0x0) {
    plVar20 = plVar4;
  }
  bVar3 = *(byte *)((longlong)param_1 + 0x12d);
  if (*(uint *)(param_1 + 0x48) == (uint)bVar3) {
    if (bVar3 == 3) {
      if ((*(float *)(param_1 + 0x26) == *(float *)((longlong)param_1 + 0x244)) &&
         (!NAN(*(float *)(param_1 + 0x26)) && !NAN(*(float *)((longlong)param_1 + 0x244)))) {
        fVar30 = *(float *)((longlong)param_1 + 0x134);
        if ((fVar30 == *(float *)(param_1 + 0x49)) &&
           (!NAN(fVar30) && !NAN(*(float *)(param_1 + 0x49)))) {
          bVar21 = NAN(fVar30) || NAN(*(float *)((longlong)param_1 + 0x24c));
          bVar22 = fVar30 == *(float *)((longlong)param_1 + 0x24c);
          goto LAB_143cea49c;
        }
      }
      goto LAB_143cea4a0;
    }
    if (bVar3 == 2) {
      if ((*(float *)(param_1 + 0x26) == *(float *)((longlong)param_1 + 0x244)) &&
         (!NAN(*(float *)(param_1 + 0x26)) && !NAN(*(float *)((longlong)param_1 + 0x244)))) {
        bVar21 = NAN(*(float *)((longlong)param_1 + 0x134)) || NAN(*(float *)(param_1 + 0x49));
        bVar22 = *(float *)((longlong)param_1 + 0x134) == *(float *)(param_1 + 0x49);
        goto LAB_143cea49c;
      }
      goto LAB_143cea4a0;
    }
    if (bVar3 == 1) {
      bVar21 = NAN(*(float *)(param_1 + 0x26)) || NAN(*(float *)((longlong)param_1 + 0x244));
      bVar22 = *(float *)(param_1 + 0x26) == *(float *)((longlong)param_1 + 0x244);
LAB_143cea49c:
      if ((!bVar22) || (bVar21)) goto LAB_143cea4a0;
    }
  }
  else {
LAB_143cea4a0:
    FUN_14881425e(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x141) == '\x01') {
    local_1f8 = (double)param_1[0x2b];
    local_208 = (undefined4)param_1[0x29];
    uStack_204 = *(undefined4 *)((longlong)param_1 + 0x14c);
    uStack_200 = (undefined4)param_1[0x2a];
    uStack_1fc = *(undefined4 *)((longlong)param_1 + 0x154);
  }
  else {
    FUN_14030a482(param_1 + 0x2c,&local_208,plVar20,0);
  }
  if ((char)param_1[0x38] == '\x01') {
    local_218 = param_1[0x3b];
    local_228 = param_1[0x39];
    uStack_220 = param_1[0x3a];
  }
  else {
    FUN_140d0fb16(param_1 + 0x3c,&local_228,plVar20,0);
  }
  local_238 = local_1f8;
  local_248 = CONCAT44(uStack_204,local_208);
  uStack_240 = CONCAT44(uStack_1fc,uStack_200);
  local_258 = local_218;
  local_268 = (undefined4)local_228;
  uStack_264 = local_228._4_4_;
  uStack_260 = (undefined4)uStack_220;
  uStack_25c = uStack_220._4_4_;
  (**(code **)(*plVar4 + 0x588))(plVar4,&local_248,&local_268);
  fVar30 = *(float *)((longlong)param_1 + 0x11c);
  local_494 = *(float *)(param_1 + 0x24);
  fVar29 = *(float *)((longlong)param_1 + 0x114);
  uVar23 = -(uint)(0.0 < *(float *)(param_1 + 0x23));
  fVar31 = (float)(~uVar23 & 0x3f800000 | (uint)*(float *)(param_1 + 0x23) & uVar23);
  dVar8 = (double)FUN_144719204((int)local_228,0);
  dVar28 = (double)FUN_144719204((int)uStack_220);
  dVar26 = sin(dVar8 * 0.017453292519943295);
  dVar8 = cos(dVar8 * 0.017453292519943295);
  dVar5 = sin(dVar28 * 0.017453292519943295);
  local_280 = cos(dVar28 * 0.017453292519943295);
  local_278 = dVar5 * dVar8;
  local_280 = local_280 * dVar8;
  local_4e0 = &local_280;
  local_4d0 = (double *)CONCAT44(local_4d0._4_4_,fVar31);
  local_4d8 = (longlong *)CONCAT44(local_4d8._4_4_,fVar30);
  local_4e8 = (undefined8 *)&local_208;
  local_270 = dVar26;
  FUN_1488142f6(param_1,plVar20,&local_248,&local_268);
  memset(&local_380,0,0x100);
  local_2b0 = 0xffffffff;
  local_37c = 0x3f800000;
  local_2dc = 0xffffffff;
  fVar24 = 0.0;
  if ((*(longlong *)(local_490 + 0x30) != 0) &&
     (plVar20 = *(longlong **)(*(longlong *)(local_490 + 0x30) + 0x2b0), plVar20 != (longlong *)0x0)
     ) {
    if (*(code **)(*plVar20 + 0x660) == FUN_1449fb17e) {
      if ((*(byte *)((longlong)plVar20 + 0x39e) & 1) == 0) {
        if ((*(byte *)((longlong)plVar20 + 0x39e) & 2) == 0) {
          if (DAT_14caf84d0 == (longlong *)0x0) {
            local_4b0 = &local_478;
            local_478 = FUN_1449e2820;
            local_4a0 = FUN_14081d0ea;
            local_4a8 = &LAB_145a62952;
            local_4b8 = &LAB_147c8cd45;
            local_4c0 = &LAB_1461468ae;
            local_4c8 = L"Engine";
            local_4d0 = (double *)0x0;
            local_4d8 = (longlong *)CONCAT44(local_4d8._4_4_,0x10000006);
            local_4e0 = (double *)CONCAT44(local_4e0._4_4_,8);
            local_4e8 = (undefined8 *)CONCAT44(local_4e8._4_4_,0x218);
            FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
          }
          plVar9 = DAT_14caf84d0;
          lVar16 = DAT_14caf84d0[0x22];
          if (lVar16 == 0) {
            (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
            lVar16 = plVar9[0x22];
          }
          pfVar13 = (float *)(lVar16 + 0x38);
        }
        else {
          pfVar13 = (float *)((longlong)plVar20 + 0x41c);
        }
        fVar24 = *pfVar13;
        *(float *)(plVar20 + 0x83) = fVar24;
      }
      else {
        fVar24 = *(float *)(plVar20 + 0x83);
      }
    }
    else {
      fVar24 = (float)(**(code **)(*plVar20 + 0x660))(plVar20);
    }
  }
  dVar8 = local_278;
  dVar26 = local_280;
  fVar2 = *(float *)(param_1 + 0x25);
  dStack_470 = 0.0;
  if ((((local_280 != 0.0) || (NAN(local_280))) || (local_278 != 0.0)) || (NAN(local_278))) {
    dStack_470 = atan2(local_278,local_280);
    dStack_470 = dStack_470 * 57.29577951308232;
  }
  dVar26 = SQRT(dVar26 * dVar26 + dVar8 * dVar8);
  pcVar6 = (code *)0x0;
  if (((dVar26 != 0.0) || (NAN(dVar26))) || ((local_270 != 0.0 || (NAN(local_270))))) {
    dVar26 = atan2(local_270,dVar26);
    pcVar6 = (code *)(dVar26 * 57.29577951308232);
  }
  uVar23 = -(uint)(0.0 < fVar29);
  local_468 = 0.0;
  local_170 = (double)fVar30;
  dVar26 = DAT_14c8462e8 * local_170;
  local_168 = DAT_14c8462e0 * local_170;
  local_170 = local_170 * DAT_14c8462d8;
  local_160 = SUB81(dVar26,0);
  uStack_15f = (undefined2)((ulonglong)dVar26 >> 8);
  uStack_15d = (undefined1)((ulonglong)dVar26 >> 0x18);
  uStack_15c = (undefined2)((ulonglong)dVar26 >> 0x20);
  uStack_15a = (undefined1)((ulonglong)dVar26 >> 0x30);
  uStack_159 = (undefined1)((ulonglong)dVar26 >> 0x38);
  local_478 = pcVar6;
  FUN_1401c9a0e(&local_478,&local_398);
  local_3a8 = local_1f8;
  local_3b8 = (code *)CONCAT44(uStack_204,local_208);
  uStack_3b0 = (double)CONCAT44(uStack_1fc,uStack_200);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb76298) && (FUN_144b3d300(&DAT_14cb76298), DAT_14cb76298 == -1)) {
    FUN_1446f470e(&DAT_14cb76290,L"TraceTrajectory",1);
    _Init_thread_footer(&DAT_14cb76298);
  }
  local_14c = 0;
  local_148 = 0x101;
  local_120 = 0;
  local_118 = 0x800000000;
  local_100 = 0;
  local_f4 = 4;
  local_160 = 1;
  local_154 = 0;
  local_170 = DAT_14cb76290;
  uStack_15f = 1;
  local_150 = 0;
  uStack_15c = 0;
  uStack_15a = 0;
  local_110 = *(undefined4 *)((longlong)plVar4 + 0xc);
  local_f8 = 1;
  local_168 = (double)plVar4[3];
  uStack_159 = 1;
  uStack_158 = 1;
  uStack_15d = 0;
  if (plVar12 != (longlong *)0x0) {
    local_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
    local_f8 = 2;
  }
  fVar30 = (float)(~uVar23 & 0x3dcccccd | (uint)fVar29 & uVar23);
  if (*(char *)((longlong)param_1 + 0x13c) == '\x01') {
    local_150 = (undefined1)(1 << (*(byte *)((longlong)param_1 + 0x13d) & 0x1f));
  }
  lVar16 = param_1[0x45];
  if (lVar16 != 0) {
    iVar18 = (int)(fVar31 / fVar30);
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar18);
    }
    plVar4 = param_1 + 0x4a;
    uVar23 = *(uint *)((longlong)param_1 + 0x25c);
    iVar19 = 0;
    if ((int)uVar23 < iVar18) {
      FUN_1447a8aa0(plVar4);
      uVar23 = *(uint *)((longlong)param_1 + 0x25c);
      iVar19 = 0;
      if ((int)uVar23 < 0) {
        *(undefined4 *)(param_1 + 0x4b) = 0;
        FUN_1447a8aa0(plVar4,0);
        iVar19 = (int)param_1[0x4b];
        uVar23 = *(uint *)((longlong)param_1 + 0x25c);
      }
    }
    *(uint *)(param_1 + 0x4b) = iVar19 + 1U;
    if (uVar23 < iVar19 + 1U) {
      FUN_1403e3958(plVar4,iVar19);
    }
    lVar17 = *plVar4;
    *(double *)(lVar17 + 0x10 + (longlong)iVar19 * 0x18) = local_1f8;
    puVar14 = (undefined8 *)(lVar17 + (longlong)iVar19 * 0x18);
    *puVar14 = CONCAT44(uStack_204,local_208);
    puVar14[1] = CONCAT44(uStack_1fc,uStack_200);
  }
  dVar26 = (double)fVar30;
  dVar8 = (double)local_494;
  fVar29 = 0.0;
  do {
    if ((local_2d3 & 3) == 1) {
      *(undefined1 *)(param_1 + 0x46) = 0;
      goto LAB_143ceaeb3;
    }
    local_468 = local_3a8;
    local_478 = local_3b8;
    dStack_470 = uStack_3b0;
    dVar25 = 0.0;
    dVar5 = 0.0;
    dVar28 = (double)(fVar24 * fVar2);
    if (0.0 < *(float *)((longlong)param_1 + 0x124)) {
      dVar5 = local_388 * local_388 + local_398 * local_398 + local_390 * local_390;
      if (((dVar5 != 1.0) ||
          (dVar25 = local_398, dVar27 = local_388, dVar28 = local_390, NAN(dVar5))) &&
         (dVar25 = DAT_14c8464e0, dVar27 = DAT_14c8464f0, dVar28 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar5)) {
        dVar25 = 1.0 / SQRT(dVar5);
        dVar27 = local_388 * dVar25;
        dVar28 = local_390 * dVar25;
        dVar25 = dVar25 * local_398;
      }
      dVar7 = (double)*(float *)((longlong)param_1 + 0x124);
      dVar25 = dVar25 * dVar7 + 0.0;
      dVar5 = dVar28 * dVar7 + 0.0;
      dVar28 = dVar27 * dVar7 + (double)(fVar24 * fVar2);
    }
    local_398 = local_398 + dVar25 * dVar26;
    local_390 = local_390 + dVar5 * dVar26;
    local_388 = local_388 + dVar28 * dVar26;
    if (0.0 < local_494) {
      dVar5 = local_388 * local_388 + local_398 * local_398 + local_390 * local_390;
      if (dVar8 < SQRT(dVar5)) {
        if (((dVar5 != 1.0) ||
            (dVar27 = local_398, dVar28 = local_388, dVar25 = local_390, NAN(dVar5))) &&
           (dVar27 = DAT_14c8464e0, dVar28 = DAT_14c8464f0, dVar25 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar5)) {
          dVar5 = 1.0 / SQRT(dVar5);
          dVar27 = local_398 * dVar5;
          dVar28 = local_388 * dVar5;
          dVar25 = local_390 * dVar5;
        }
        local_388 = dVar28 * dVar8;
        local_390 = dVar25 * dVar8;
        local_398 = dVar27 * dVar8;
      }
    }
    local_3b8 = (code *)(local_398 * dVar26 + (double)local_3b8);
    uStack_3b0 = local_390 * dVar26 + uStack_3b0;
    local_3a8 = local_388 * dVar26 + local_3a8;
    if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
      local_4d8 = (longlong *)&DAT_14cad0f10;
      local_4e0 = &local_170;
      local_4e8 = (undefined8 *)CONCAT44(local_4e8._4_4_,(uint)*(byte *)((longlong)param_1 + 300));
      cVar11 = FUN_1400b50cc(local_490,&local_380,&local_478,&local_3b8);
    }
    else {
      local_4c8 = (wchar_t *)&DAT_14cad0f10;
      local_4d0 = &local_170;
      local_4e0 = (double *)CONCAT44(local_4e0._4_4_,(uint)*(byte *)((longlong)param_1 + 300));
      local_4e8 = &DAT_14c8463d0;
      local_4d8 = param_1 + 0x48;
      cVar11 = FUN_14021655c(local_490,&local_380,&local_478,&local_3b8);
    }
    if (cVar11 != '\0') {
      local_3a8 = local_360;
      local_3b8 = local_370;
      uStack_3b0 = dStack_368;
    }
    if (lVar16 != 0) {
      iVar18 = (int)param_1[0x4b];
      *(uint *)(param_1 + 0x4b) = iVar18 + 1U;
      if (*(uint *)((longlong)param_1 + 0x25c) < iVar18 + 1U) {
        FUN_1403e3958(param_1 + 0x4a,iVar18);
      }
      lVar17 = param_1[0x4a];
      *(double *)(lVar17 + 0x10 + (longlong)iVar18 * 0x18) = local_3a8;
      pdVar1 = (double *)(lVar17 + (longlong)iVar18 * 0x18);
      *pdVar1 = (double)local_3b8;
      pdVar1[1] = uStack_3b0;
    }
    fVar29 = fVar29 + fVar30;
  } while (fVar29 < fVar31);
  *(undefined1 *)(param_1 + 0x46) = 0;
  if (((local_2d3 & 3) != 1) && (*(char *)((longlong)param_1 + 0x13e) == '\x01')) {
    local_348 = local_3a8;
    local_358 = local_3b8;
    dStack_350 = uStack_3b0;
    local_360 = local_3a8;
    local_370 = local_3b8;
    dStack_368 = uStack_3b0;
    dVar26 = local_388 * local_388 + local_398 * local_398 + local_390 * local_390;
    if (((dVar26 != 1.0) ||
        (local_330 = local_388, dVar8 = local_390, local_328 = local_398, NAN(dVar26))) &&
       (local_330 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, local_328 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar26)) {
      local_328 = 1.0 / SQRT(dVar26);
      local_330 = local_388 * local_328;
      dVar8 = local_390 * local_328;
      local_328 = local_398 * local_328;
    }
    local_330 = -local_330;
    local_328 = -local_328;
    local_340._8_4_ = SUB84(dVar8,0);
    local_340._0_8_ = local_328;
    local_340._12_4_ = (uint)((ulonglong)dVar8 >> 0x20) ^ 0x80000000;
    uStack_320 = local_340._8_8_;
    local_318 = local_330;
  }
LAB_143ceaeb3:
  memcpy(&local_478,&local_380,0xb8);
  uVar10 = local_2b0;
  local_488 = local_2c0;
  uStack_480 = uStack_2b8;
  local_1e0 = local_2a8;
  uStack_1dc = uStack_2a4;
  uStack_1d8 = uStack_2a0;
  uStack_1d4 = uStack_29c;
  local_1d0 = local_298;
  uStack_1cc = uStack_294;
  uStack_1c8 = uStack_290;
  uStack_1c4 = uStack_28c;
  local_1c0 = local_288;
  local_1b8[0] = (code *)0x0;
  puVar14 = (undefined8 *)FUN_14001cc68(0x110,8);
  *puVar14 = &PTR_LAB_14b3f5f50;
  puVar14[1] = param_1;
  local_1a8 = puVar14;
  memcpy(puVar14 + 2,&local_478,0xb8);
  puVar14[0x19] = local_2c8;
  puVar14[0x1a] = local_488;
  puVar14[0x1b] = uStack_480;
  *(undefined4 *)(puVar14 + 0x1c) = uVar10;
  *(undefined1 *)((longlong)puVar14 + 0xe4) = local_2ac;
  puVar14[0x21] = local_1c0;
  *(undefined4 *)(puVar14 + 0x1f) = local_1d0;
  *(undefined4 *)((longlong)puVar14 + 0xfc) = uStack_1cc;
  *(undefined4 *)(puVar14 + 0x20) = uStack_1c8;
  *(undefined4 *)((longlong)puVar14 + 0x104) = uStack_1c4;
  *(undefined4 *)(puVar14 + 0x1d) = local_1e0;
  *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_1dc;
  *(undefined4 *)(puVar14 + 0x1e) = uStack_1d8;
  *(undefined4 *)((longlong)puVar14 + 0xf4) = uStack_1d4;
  if (puVar14 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_1b8[0] = FUN_143cfcfd4;
  }
  FUN_1407461b0(1,local_1b8);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_120 != 0) {
    FUN_1400020a8();
  }
LAB_143cea32f:
  if ((local_f0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ceb23a FUN_143ceb23a body=2076 status=ok
// SIG undefined FUN_143ceb23a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ceb23a(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  double dVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  longlong local_1a0;
  longlong lStack_198;
  longlong local_190;
  undefined1 local_188 [16];
  double local_178;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_148 = (double)CONCAT44(local_148._4_4_,param_2);
    uVar4 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_148);
    if ((DAT_14c761388 != 0) &&
       ((lVar5 = param_1[0x16], lVar5 != 0 || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)))) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        lVar5 = lVar5 + 0x460;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf8);
      }
      FUN_140e65914(lVar5,param_1);
    }
  }
  if ((0 < (int)param_1[0x28]) && (plVar1 = (longlong *)param_1[0x15], plVar1 != (longlong *)0x0)) {
    local_158 = param_1[0x35];
    local_168 = param_1[0x33];
    lStack_160 = param_1[0x34];
    local_178 = (double)param_1[0x38];
    local_188 = *(undefined1 (*) [16])(param_1 + 0x36);
    lVar5 = FUN_144a7cbb2();
    if (((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
        (plVar7 = plVar1,
        *(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) &&
       (plVar7 = (longlong *)plVar1[0x36], (longlong *)plVar1[0x36] == (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x588))(plVar1,&local_1a0,local_1b8);
    }
    else {
      FUN_141313b0e(plVar7,&local_1a0,local_1b8);
    }
    bVar3 = *(byte *)(param_1 + 0x55);
    if (bVar3 == 1) {
      local_158 = local_190;
      local_168 = local_1a0;
      lStack_160 = lStack_198;
    }
    bVar6 = *(byte *)((longlong)param_1 + 0x2a9);
    if (bVar6 == 1) {
      dVar16 = (double)DAT_1499387d0;
      dVar2 = DAT_1499387d0._8_8_;
      auVar8 = divpd(local_1b8,_DAT_1499387d0);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_1a8;
      auVar13 = divpd(auVar12,_DAT_1499387d0);
      auVar8 = roundpd(auVar8,auVar8,3);
      auVar13 = roundpd(auVar13,auVar13,3);
      dVar18 = local_1b8._0_8_ - auVar8._0_8_ * dVar16;
      dVar20 = local_1b8._8_8_ - auVar8._8_8_ * dVar2;
      local_1a8 = local_1a8 - auVar13._0_8_ * dVar16;
      dVar21 = 0.0 - auVar13._8_8_ * dVar2;
      auVar15._0_8_ = dVar18 + dVar16;
      auVar15._8_8_ = dVar20 + dVar2;
      auVar17._0_8_ = dVar16 + local_1a8;
      auVar17._8_8_ = dVar2 + dVar21;
      auVar9._8_8_ = -(ulonglong)(0.0 <= dVar20);
      auVar9._0_8_ = -(ulonglong)(0.0 <= dVar18);
      auVar8._8_8_ = dVar20;
      auVar8._0_8_ = dVar18;
      auVar8 = blendvpd(auVar15,auVar8,auVar9);
      auVar10._8_8_ = -(ulonglong)(0.0 <= dVar21);
      auVar10._0_8_ = -(ulonglong)(0.0 <= local_1a8);
      auVar13._8_8_ = dVar21;
      auVar13._0_8_ = local_1a8;
      auVar13 = blendvpd(auVar17,auVar13,auVar10);
      auVar14._0_8_ = auVar8._0_8_ + -360.0;
      auVar14._8_8_ = auVar8._8_8_ + -360.0;
      auVar11._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
      auVar11._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
      local_188 = blendvpd(auVar8,auVar14,auVar11);
      dVar16 = auVar13._0_8_;
      local_178 = (double)(~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                          (ulonglong)(dVar16 + -360.0) & -(ulonglong)(180.0 < dVar16));
      if (1e-08 < ABS(local_178)) {
        FUN_144a7484c(local_188,&local_1d8);
        dVar16 = local_1d8 + local_1d0 * -0.0;
        dVar2 = local_1c8 * 0.0 + local_1d8 * -0.0;
        dVar18 = local_1d0 * 0.0 - local_1c8;
        dVar16 = dVar16 + dVar16;
        dVar2 = dVar2 + dVar2;
        dVar18 = dVar18 + dVar18;
        dVar21 = (local_1c8 * dVar18 - dVar16 * local_1d8) + local_1c0 * dVar2 + 1.0;
        dVar19 = (local_1d0 * dVar16 - dVar2 * local_1c8) + dVar18 * local_1c0 + 0.0;
        dVar20 = dVar19 * dVar19 + dVar21 * dVar21;
        if ((dVar20 != 1.0) || (NAN(dVar20))) {
          local_128 = DAT_14c8464e0;
          local_120 = DAT_14c8464e8;
          local_118 = DAT_14c8464f0;
          if (9.99999993922529e-09 <= dVar20) {
            local_128 = dVar19 * (1.0 / SQRT(dVar20));
            local_120 = dVar21 * (1.0 / SQRT(dVar20));
            local_118 = 0.0;
          }
        }
        else {
          dVar16 = (dVar2 * local_1d8 - dVar18 * local_1d0) + dVar16 * local_1c0 + 0.0;
          local_128 = dVar19;
          local_120 = dVar21;
          local_118 = (double)(-(ulonglong)(dVar16 == 0.0) & (ulonglong)dVar16);
        }
        dVar16 = local_1d8 * 0.0 + local_1d0 * -0.0;
        dVar18 = local_1d0 - local_1c8 * 0.0;
        dVar2 = local_1c8 * 0.0 + -local_1d8;
        dVar16 = dVar16 + dVar16;
        dVar2 = dVar2 + dVar2;
        dVar18 = dVar18 + dVar18;
        local_f8 = (local_1d8 * dVar2 - dVar18 * local_1d0) + local_1c0 * dVar16 + 1.0;
        local_100 = -local_1d8 * dVar16 + local_1c8 * dVar18 + local_1c0 * dVar2 + 0.0;
        local_108 = dVar16 * local_1d0 + dVar2 * -local_1c8 + dVar18 * local_1c0 + 0.0;
        dVar16 = local_128 * local_100 - local_108 * local_120;
        dVar2 = local_118 * local_108 - local_f8 * local_128;
        dVar18 = local_120 * local_f8 - local_100 * local_118;
        dVar20 = dVar16 * dVar16 + dVar18 * dVar18 + dVar2 * dVar2;
        if (((dVar20 != 1.0) ||
            (local_138 = dVar16, local_140 = dVar2, local_148 = dVar18, NAN(dVar20))) &&
           (local_138 = DAT_14c8464f0, local_140 = DAT_14c8464e8, local_148 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar20)) {
          dVar20 = 1.0 / SQRT(dVar20);
          local_138 = dVar16 * dVar20;
          local_140 = dVar2 * dVar20;
          local_148 = dVar18 * dVar20;
        }
        local_130 = 0;
        local_110 = 0;
        local_f0 = 0;
        local_e8 = DAT_14c8464e0;
        local_e0 = DAT_14c8464e8;
        dStack_d8 = DAT_14c8464f0;
        local_d0 = 0x3ff0000000000000;
        FUN_144a90b9e(&local_148,local_188);
        bVar3 = *(byte *)(param_1 + 0x55);
        bVar6 = *(byte *)((longlong)param_1 + 0x2a9);
      }
      local_188._0_8_ = (double)*(float *)((longlong)param_1 + 0x2ac) * (double)local_188._0_8_;
    }
    if ((bVar3 & 1) == 0) {
      if ((bVar6 & 1) != 0) {
        local_248 = local_178;
        local_258 = local_188._0_8_;
        uStack_250 = local_188._8_8_;
        local_268 = CONCAT71(local_268._1_7_,1);
        FUN_14020f670(param_1,&local_258,0,0);
      }
    }
    else if ((bVar6 & 1) == 0) {
      local_228 = local_158;
      local_238 = local_168;
      lStack_230 = lStack_160;
      local_268 = CONCAT71(local_268._1_7_,1);
      FUN_140d93b16(param_1,&local_238,0,0);
    }
    else {
      local_1e8 = local_178;
      local_1f8 = local_188._0_8_;
      uStack_1f0 = local_188._8_8_;
      local_218 = local_168;
      lStack_210 = lStack_160;
      local_208 = local_158;
      local_260 = 1;
      local_268 = 0;
      FUN_14084af84(param_1,&local_218,&local_1f8,0);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ceba58 FUN_143ceba58 body=342 status=ok
// SIG undefined FUN_143ceba58(void)

bool FUN_143ceba58(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = FUN_14881c4a0(param_3);
  if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x11e8), lVar1 == 0)) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(lVar1 + 0x3170) == 0) {
      if (*(char *)(lVar1 + 0x34b0) != '\x01') {
        return false;
      }
      lVar2 = lVar1 + 0x3210;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x3170) + 0xd8;
    }
    lVar4 = FUN_140153468(lVar2);
    if (lVar4 == 0) {
      return false;
    }
    if ((*(byte *)(lVar2 + 0x298) & 2) != 0) {
      return false;
    }
    return *(longlong *)(lVar1 + 0x110) != 0;
  }
  lVar2 = FUN_14485c28e(param_1 + 0x10);
  if (*(longlong *)(lVar1 + 0x3170) == 0) {
    if (*(char *)(lVar1 + 0x34b0) != '\x01') {
      return false;
    }
    lVar4 = lVar1 + 0x3210;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(lVar4);
  if (lVar3 == 0) {
    return false;
  }
  if ((*(byte *)(lVar4 + 0x298) & 2) != 0) {
    return false;
  }
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    return false;
  }
  if (*(longlong *)(lVar1 + 0x3170) == 0) {
    if (*(char *)(lVar1 + 0x34b0) != '\x01') {
      return false;
    }
    lVar4 = lVar1 + 0x3210;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0x3170) + 0xd8;
  }
  lVar4 = FUN_140153468(lVar4);
  if (lVar2 == 0) {
    return false;
  }
  if (lVar4 == 0) {
    return false;
  }
  if (*(longlong *)(lVar1 + 0x3170) == 0) {
    if (*(char *)(lVar1 + 0x34b0) != '\x01') {
      lVar1 = 0;
      goto LAB_143cebb7b;
    }
    lVar1 = lVar1 + 0x3210;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x3170) + 0xd8;
  }
  lVar1 = FUN_140153468(lVar1);
LAB_143cebb7b:
  return lVar1 == lVar2;
}



// FUNCTION 143cebbae FUN_143cebbae body=206 status=ok
// SIG undefined FUN_143cebbae(void)

void FUN_143cebbae(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *param_2;
  lVar3 = param_2[1];
  lVar6 = lVar5;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    lVar6 = *param_2;
  }
  *(longlong *)(lVar6 + 0xe0) = lVar5;
  plVar4 = *(longlong **)(lVar6 + 0xe8);
  *(longlong *)(lVar6 + 0xe8) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  lVar5 = FUN_1418769fa(*param_3);
  if (lVar5 != 0) {
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1412416a6(lVar5,&local_28);
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cebc90 FUN_143cebc90 body=364 status=ok
// SIG undefined FUN_143cebc90(void)

bool FUN_143cebc90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146431698;
      local_48 = &LAB_1486775cb;
      local_50 = &LAB_1464cee35;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (lVar1 = *(longlong *)(param_1 + 0x11e8), lVar1 != 0)) {
      if (*(longlong *)(lVar1 + 0x3170) == 0) {
        if (*(char *)(lVar1 + 0x34b0) != '\x01') goto LAB_143cebd03;
        lVar3 = lVar1 + 0x3210;
      }
      else {
        lVar3 = *(longlong *)(lVar1 + 0x3170) + 0xd8;
      }
      lVar2 = FUN_140153468(lVar3);
      if ((lVar2 != 0) && ((*(byte *)(lVar3 + 0x298) & 2) == 0)) {
        bVar4 = *(longlong *)(lVar1 + 0x110) != 0;
        goto LAB_143cebd05;
      }
    }
  }
LAB_143cebd03:
  bVar4 = false;
LAB_143cebd05:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cebdfe FUN_143cebdfe body=490 status=ok
// SIG undefined FUN_143cebdfe(void)

bool FUN_143cebdfe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146431698;
      local_48 = &LAB_1486775cb;
      local_50 = &LAB_1464cee35;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (lVar3 = *(longlong *)(param_1 + 0x11e8), lVar3 != 0)) {
      if (*(longlong *)(lVar3 + 0x3170) == 0) {
        if (*(char *)(lVar3 + 0x34b0) != '\x01') goto LAB_143cebe72;
        lVar2 = lVar3 + 0x3210;
      }
      else {
        lVar2 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
      }
      lVar1 = FUN_140153468(lVar2);
      if (((lVar1 != 0) && ((*(byte *)(lVar2 + 0x298) & 2) == 0)) &&
         (*(longlong *)(lVar3 + 0x110) != 0)) {
        if (*(longlong *)(lVar3 + 0x3170) == 0) {
          if (*(char *)(lVar3 + 0x34b0) != '\x01') goto LAB_143cebe72;
          lVar2 = lVar3 + 0x3210;
        }
        else {
          lVar2 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
        }
        lVar2 = FUN_140153468(lVar2);
        bVar4 = false;
        if ((param_2 == 0) || (lVar2 == 0)) goto LAB_143cebe74;
        if (*(longlong *)(lVar3 + 0x3170) == 0) {
          if (*(char *)(lVar3 + 0x34b0) == '\x01') {
            lVar3 = lVar3 + 0x3210;
            goto LAB_143cebf29;
          }
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
LAB_143cebf29:
          lVar3 = FUN_140153468(lVar3);
        }
        bVar4 = lVar3 == param_2;
        goto LAB_143cebe74;
      }
    }
  }
LAB_143cebe72:
  bVar4 = false;
LAB_143cebe74:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cec00c FUN_143cec00c body=25805 status=ok
// SIG undefined FUN_143cec00c(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143cec00c(uint *param_1,undefined8 *param_2,longlong param_3,float *param_4,
                       undefined8 *param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  code *pcVar4;
  code *******pppppppcVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *******pppppppcVar12;
  code ******ppppppcVar13;
  code *******pppppppcVar14;
  code ******ppppppcVar15;
  byte bVar16;
  char cVar17;
  int iVar18;
  undefined8 uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  uint *puVar23;
  code *******pppppppcVar24;
  longlong lVar25;
  double *pdVar26;
  double *pdVar27;
  int iVar28;
  uint uVar29;
  undefined8 *puVar30;
  uint uVar31;
  longlong *plVar32;
  ulonglong uVar33;
  undefined *puVar34;
  uint uVar35;
  undefined7 uVar36;
  undefined8 uVar37;
  longlong lVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  double dVar49;
  code ******ppppppcVar50;
  double dVar51;
  float *pfVar52;
  undefined1 auVar53 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar54 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  double dVar57;
  double dVar58;
  undefined1 auStack_3e8 [32];
  uint *local_3c8;
  code *******local_3c0;
  uint *local_3b8;
  code *******local_3b0;
  wchar_t *local_3a8;
  undefined1 *local_3a0;
  undefined1 *local_398;
  code *******local_390;
  undefined1 *local_388;
  code *local_380;
  float *local_378;
  double local_370;
  double local_368;
  float local_34c;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  code *******local_2c0;
  code ******local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  code *****pppppcStack_2a0;
  code *****local_298;
  code *******local_288;
  code ******local_280;
  undefined8 local_278;
  code *******local_270;
  code ******local_268;
  undefined8 local_260;
  code *******local_258;
  code ******ppppppcStack_250;
  double local_248;
  ushort local_240;
  byte local_238;
  code *******local_228;
  code ******ppppppcStack_220;
  double local_218;
  code *******local_210;
  undefined8 local_208;
  undefined8 local_1f8;
  double dStack_1f0;
  code *******local_1e8;
  code ******ppppppcStack_1e0;
  double local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_154;
  undefined4 local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if (param_3 == 0) {
LAB_143cec09a:
    uVar33 = 0;
  }
  else {
    if (param_1[1] == 0) {
LAB_143ceeb5d:
      lVar38 = 0;
    }
    else {
      uVar29 = *param_1;
      lVar38 = 0;
      if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
        plVar32 = (longlong *)
                  ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
        if ((plVar32 == (longlong *)0x0) ||
           ((*(uint *)(plVar32 + 2) != param_1[1] || ((*(uint *)(plVar32 + 1) & 0x10200000) != 0))))
        goto LAB_143ceeb5d;
        lVar38 = *plVar32;
      }
    }
    local_1f8 = *(code **)(param_3 + 0x18);
    FUN_1400bc96c(lVar38 + 0x1ac8);
    FUN_1409e8446();
    if (param_1[1] == 0) {
LAB_143ceeb65:
      lVar38 = 0;
    }
    else {
      uVar29 = *param_1;
      lVar38 = 0;
      if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
        plVar32 = (longlong *)
                  ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
        if ((plVar32 == (longlong *)0x0) ||
           ((*(uint *)(plVar32 + 2) != param_1[1] || ((*(uint *)(plVar32 + 1) & 0x10200000) != 0))))
        goto LAB_143ceeb65;
        lVar38 = *plVar32;
      }
    }
    plVar32 = *(longlong **)(&DAT_00001ce8 + lVar38);
    FUN_141135066(param_1);
    *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 1;
    *(undefined8 *)(param_1 + 10) = *param_2;
    FUN_1403ed422(param_1 + 0xc,param_2 + 1);
    plVar20 = _DAT_000000d0;
    if (((*(longlong *)(param_1 + 2) != 0) &&
        (plVar21 = *(longlong **)(param_1 + 4), plVar21 != (longlong *)0x0)) &&
       (0 < (int)plVar21[1])) {
      iVar18 = (int)plVar21[1];
      do {
        plVar20 = plVar32;
        if (iVar18 == 0) goto LAB_143cec28d;
        LOCK();
        iVar28 = (int)plVar21[1];
        bVar39 = iVar18 == iVar28;
        if (bVar39) {
          *(int *)(plVar21 + 1) = iVar18 + 1;
          iVar28 = iVar18;
        }
        iVar18 = iVar28;
        UNLOCK();
      } while (!bVar39);
      *(longlong **)(*(longlong *)(param_1 + 2) + 0xd0) = plVar32;
      LOCK();
      plVar1 = plVar21 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar20 = _DAT_000000d0;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar20 = _DAT_000000d0;
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
          plVar20 = _DAT_000000d0;
        }
      }
    }
LAB_143cec28d:
    _DAT_000000d0 = plVar20;
    if (param_6 == 0) {
      param_1[0x12] = 0;
      uVar29 = 0;
    }
    else {
      uVar29 = *(uint *)(param_6 + 0xc);
      param_1[0x12] = uVar29;
      if ((int)uVar29 < DAT_14c9647dc) {
        lVar38 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
      }
      else {
        lVar38 = 0;
      }
      uVar29 = *(uint *)(lVar38 + 0x10);
      if (*(uint *)(lVar38 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        uVar35 = DAT_14c964868 + 1;
        bVar39 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar39) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar35);
        }
        LOCK();
        uVar29 = *(uint *)(lVar38 + 0x10);
        bVar39 = uVar29 == 0;
        if (bVar39) {
          *(uint *)(lVar38 + 0x10) = uVar35;
          uVar29 = 0;
        }
        UNLOCK();
        if (bVar39) {
          uVar29 = uVar35;
        }
      }
    }
    param_1[0x13] = uVar29;
    if (((*(longlong *)(param_1 + 2) != 0) &&
        (plVar20 = *(longlong **)(param_1 + 4), plVar20 != (longlong *)0x0)) &&
       (0 < (int)plVar20[1])) {
      iVar18 = (int)plVar20[1];
      do {
        if (iVar18 == 0) {
          (**(code **)(_DAT_00000000 + 0x90))(0,plVar32);
          goto LAB_143cec34b;
        }
        LOCK();
        iVar28 = (int)plVar20[1];
        bVar39 = iVar18 == iVar28;
        if (bVar39) {
          *(int *)(plVar20 + 1) = iVar18 + 1;
          iVar28 = iVar18;
        }
        iVar18 = iVar28;
        UNLOCK();
      } while (!bVar39);
      (**(code **)(**(longlong **)(param_1 + 2) + 0x90))(*(longlong **)(param_1 + 2),plVar32);
      LOCK();
      plVar21 = plVar20 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
LAB_143cec34b:
    lVar38 = FUN_140153468(param_1);
    if (((*(byte *)(lVar38 + 0xfa) & 4) != 0) &&
       (plVar32 != (longlong *)0x0 && (char)plVar32[0x2f] == '\x03')) {
      uVar19 = FUN_14069ce7c();
      plVar20 = (longlong *)(**(code **)(*plVar32 + 0x288))(plVar32,uVar19);
      if (plVar20 != (longlong *)0x0) {
        uVar19 = FUN_14069ce7c();
        plVar21 = (longlong *)FUN_144718840(plVar20,uVar19);
        if (plVar21 != (longlong *)0x0 && plVar20 != plVar21) {
          lVar38 = (**(code **)(*plVar21 + 0x10))(plVar21);
          if (*(char *)(lVar38 + 0x18) == '\0') {
            FUN_1403663e2(lVar38);
          }
          FUN_1400bc96c(lVar38 + 0x18,&DAT_14cb76308);
          FUN_1400bc96c(lVar38 + 0x40,&DAT_14cb76308);
        }
      }
    }
    lVar38 = FUN_140153468(param_1);
    if (*(char *)(lVar38 + 0x110) == '\x01') {
      if (param_1[1] == 0) {
LAB_143cef7b9:
        lVar38 = 0;
      }
      else {
        uVar29 = *param_1;
        lVar38 = 0;
        if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
          if ((plVar20 == (longlong *)0x0) ||
             ((*(uint *)(plVar20 + 2) != param_1[1] || ((*(uint *)(plVar20 + 1) & 0x10200000) != 0))
             )) goto LAB_143cef7b9;
          lVar38 = *plVar20;
        }
      }
      lVar22 = FUN_140153468(param_1);
      local_1f8 = *(code **)(lVar22 + 0x18);
      FUN_1400bc96c(lVar38 + 0x41b0);
      *(byte *)(lVar38 + 0x5b5) =
           *(byte *)(lVar38 + 0x5b5) & 0xfd | *(char *)(lVar38 + 0x41b0) * '\x02';
    }
    uVar29 = param_1[1];
    if (((uVar29 == 0) || (uVar35 = *param_1, (int)uVar35 < 0)) || (DAT_14c9647dc <= (int)uVar35)) {
      param_1[0x8f] = *(uint *)(_DAT_00001ce8 + 0x568);
      param_1[0x90] = _DAT_00002bb0;
LAB_143ceeba3:
      lVar38 = 0;
    }
    else {
      plVar20 = (longlong *)
                ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8));
      if (((plVar20 == (longlong *)0x0) || (*(uint *)(plVar20 + 2) != uVar29)) ||
         ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) {
        lVar38 = 0;
      }
      else {
        lVar38 = *plVar20;
      }
      param_1[0x8f] = *(uint *)(*(longlong *)(&DAT_00001ce8 + lVar38) + 0x568);
      plVar20 = (longlong *)
                ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8));
      if (((plVar20 == (longlong *)0x0) || (*(uint *)(plVar20 + 2) != uVar29)) ||
         ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) {
        lVar38 = 0;
      }
      else {
        lVar38 = *plVar20;
      }
      param_1[0x90] = *(uint *)(&DAT_00002bb0 + lVar38);
      plVar20 = (longlong *)
                ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8));
      if (((plVar20 == (longlong *)0x0) || (*(uint *)(plVar20 + 2) != uVar29)) ||
         ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) goto LAB_143ceeba3;
      lVar38 = *plVar20;
    }
    lVar38 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + lVar38) + 0x1c8);
    if (lVar38 == 0) {
      puVar30 = &DAT_14c8464e0;
      pppppppcVar24 = DAT_14c8464f0;
    }
    else {
      pppppppcVar24 = *(code ********)(lVar38 + 0x270);
      puVar30 = (undefined8 *)(lVar38 + 0x260);
    }
    uVar19 = puVar30[1];
    *(undefined8 *)(param_1 + 0x5c) = *puVar30;
    *(undefined8 *)(param_1 + 0x5e) = uVar19;
    *(code ********)(param_1 + 0x60) = pppppppcVar24;
    if (uVar29 == 0) {
LAB_143ceeb6c:
      lVar38 = 0;
    }
    else {
      uVar35 = *param_1;
      lVar38 = 0;
      if ((-1 < (int)uVar35) && ((int)uVar35 < DAT_14c9647dc)) {
        plVar20 = (longlong *)
                  ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8));
        if ((plVar20 == (longlong *)0x0) ||
           ((*(uint *)(plVar20 + 2) != uVar29 || ((*(uint *)(plVar20 + 1) & 0x10200000) != 0))))
        goto LAB_143ceeb6c;
        lVar38 = *plVar20;
      }
    }
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(lVar38 + 0x138);
    uVar19 = *(undefined8 *)(lVar38 + 0x130);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar38 + 0x128);
    *(undefined8 *)(param_1 + 0x6a) = uVar19;
    pppppppcVar24 = DAT_14c8464f0;
    dVar47 = DAT_14c8464e8;
    ppppppcVar50 = DAT_14c8464e0;
    lVar38 = FUN_140153468();
    pppppppcVar5 = pppppppcVar24;
    ppppppcVar13 = ppppppcVar50;
    dVar46 = dVar47;
    if (*(int *)(lVar38 + 0x438) != 0) {
      if (param_1[1] == 0) {
LAB_143cef7c1:
        lVar38 = 0;
      }
      else {
        uVar29 = *param_1;
        lVar38 = 0;
        if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
          if ((plVar20 == (longlong *)0x0) ||
             ((*(uint *)(plVar20 + 2) != param_1[1] || ((*(uint *)(plVar20 + 1) & 0x10200000) != 0))
             )) goto LAB_143cef7c1;
          lVar38 = *plVar20;
        }
      }
      (**(code **)(**(longlong **)(&DAT_00001ce8 + lVar38) + 0x328))
                (*(longlong **)(&DAT_00001ce8 + lVar38),&local_1f8);
      lVar38 = FUN_140153468(param_1);
      pppppppcVar5 = local_1e8;
      ppppppcVar13 = (code ******)local_1f8;
      dVar46 = dStack_1f0;
      if (*(int *)(lVar38 + 0x438) != 0x3f) {
        lVar38 = FUN_140153468();
        if ((*(byte *)(lVar38 + 0x438) & 0xf) != 0) {
          if (param_1[1] == 0) {
LAB_143cf06e2:
            lVar38 = 0;
          }
          else {
            uVar29 = *param_1;
            lVar38 = 0;
            if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
              plVar20 = (longlong *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if ((plVar20 == (longlong *)0x0) ||
                 ((*(uint *)(plVar20 + 2) != param_1[1] ||
                  ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_143cf06e2;
              lVar38 = *plVar20;
            }
          }
          (**(code **)(**(longlong **)(&DAT_00001ce8 + lVar38) + 0x710))
                    (*(longlong **)(&DAT_00001ce8 + lVar38),&local_228);
          auVar48._8_8_ = 0;
          auVar48._0_8_ = ppppppcStack_220;
          auVar48 = divpd(auVar48 << 0x40,_DAT_1499387d0);
          auVar48 = roundpd(auVar48,auVar48,3);
          auVar54 = roundpd(in_XMM2,ZEXT816(0),3);
          dVar46 = (0.0 - auVar48._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar45 = ((double)ppppppcStack_220 - auVar48._8_8_ * DAT_1499387d0._8_8_) *
                   0.008726646259971648;
          dVar49 = (0.0 - auVar54._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar51 = (0.0 - auVar54._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          local_368 = sin(dVar46);
          dVar57 = sin(dVar45);
          dVar58 = sin(dVar49);
          sin(dVar51);
          dVar42 = cos(dVar46);
          dVar43 = cos(dVar45);
          dVar44 = cos(dVar49);
          cos(dVar51);
          dVar46 = -(dVar43 * local_368 * dVar58) + dVar57 * dVar42 * dVar44;
          dVar45 = dVar57 * local_368 * dVar58 + dVar43 * dVar42 * dVar44;
          dVar49 = local_368 * dVar57 * dVar44 - dVar42 * dVar43 * dVar58;
          dVar51 = -(local_368 * dVar43 * dVar44) - dVar42 * dVar57 * dVar58;
          lVar38 = FUN_140153468(param_1);
          if ((*(byte *)(lVar38 + 0x438) & 3) != 0) {
            dVar57 = DAT_14c8462e0 * dVar49 - dVar51 * DAT_14c8462d8;
            dVar43 = DAT_14c8462e8 * dVar51 - dVar46 * DAT_14c8462e0;
            dVar44 = DAT_14c8462d8 * dVar46 - dVar49 * DAT_14c8462e8;
            dVar43 = dVar43 + dVar43;
            dVar44 = dVar44 + dVar44;
            dVar57 = dVar57 + dVar57;
            dVar58 = dVar45 * dVar57 + DAT_14c8462e8 + (dVar44 * dVar49 - dVar43 * dVar51);
            dVar42 = (dVar57 * dVar51 - dVar44 * dVar46) + dVar45 * dVar43 + DAT_14c8462d8;
            dVar57 = (dVar46 * dVar43 - dVar49 * dVar57) + dVar45 * dVar44 + DAT_14c8462e0;
            fVar40 = (float)((double)local_1e8 * dVar58 +
                            (double)local_1f8 * dVar42 + dStack_1f0 * dVar57);
            lVar38 = FUN_140153468(param_1);
            if ((*(byte *)(lVar38 + 0x438) & 1) == 0) {
              if (0.0 <= fVar40) {
                fVar40 = 0.0;
              }
            }
            else {
              lVar38 = FUN_140153468(param_1);
              if (((*(byte *)(lVar38 + 0x438) & 2) == 0) && (fVar40 <= 0.0)) {
                fVar40 = 0.0;
              }
            }
            dVar43 = (double)fVar40;
            ppppppcVar50 = (code ******)((double)ppppppcVar50 + dVar43 * dVar42);
            dVar47 = dVar47 + dVar57 * dVar43;
            pppppppcVar24 = (code *******)((double)pppppppcVar24 + dVar58 * dVar43);
          }
          lVar38 = FUN_140153468(param_1);
          if ((*(byte *)(lVar38 + 0x438) & 0xc) != 0) {
            dVar57 = DAT_14c846298 * dVar49 - dVar51 * DAT_14c846290;
            dVar42 = DAT_14c8462a0 * dVar51 - dVar46 * DAT_14c846298;
            dVar43 = DAT_14c846290 * dVar46 - dVar49 * DAT_14c8462a0;
            dVar42 = dVar42 + dVar42;
            dVar43 = dVar43 + dVar43;
            dVar57 = dVar57 + dVar57;
            dVar58 = dVar45 * dVar57 + DAT_14c8462a0 + (dVar43 * dVar49 - dVar42 * dVar51);
            dVar51 = (dVar57 * dVar51 - dVar43 * dVar46) + dVar45 * dVar42 + DAT_14c846290;
            dVar46 = (dVar46 * dVar42 - dVar49 * dVar57) + dVar45 * dVar43 + DAT_14c846298;
            fVar40 = (float)((double)local_1e8 * dVar58 +
                            (double)local_1f8 * dVar51 + dStack_1f0 * dVar46);
            lVar38 = FUN_140153468(param_1);
            if ((*(byte *)(lVar38 + 0x438) & 4) == 0) {
              if (0.0 <= fVar40) {
                fVar40 = 0.0;
              }
            }
            else {
              lVar38 = FUN_140153468(param_1);
              if (((*(byte *)(lVar38 + 0x438) & 8) == 0) && (fVar40 <= 0.0)) {
                fVar40 = 0.0;
              }
            }
            dVar45 = (double)fVar40;
            ppppppcVar50 = (code ******)((double)ppppppcVar50 + dVar45 * dVar51);
            dVar47 = dVar47 + dVar46 * dVar45;
            pppppppcVar24 = (code *******)((double)pppppppcVar24 + dVar58 * dVar45);
          }
        }
        lVar38 = FUN_140153468(param_1);
        pppppppcVar12 = local_1e8;
        pppppppcVar5 = pppppppcVar24;
        ppppppcVar13 = ppppppcVar50;
        dVar46 = dVar47;
        if ((*(byte *)(lVar38 + 0x438) & 0x30) != 0) {
          lVar38 = FUN_140153468(param_1);
          pppppppcVar5 = pppppppcVar12;
          if ((*(byte *)(lVar38 + 0x438) & 0x10) == 0) {
            if (0.0 <= (double)pppppppcVar12) {
              pppppppcVar5 = (code *******)0x0;
            }
          }
          else {
            lVar38 = FUN_140153468(param_1);
            if (((*(byte *)(lVar38 + 0x438) & 0x20) == 0) && ((double)pppppppcVar12 <= 0.0)) {
              pppppppcVar5 = (code *******)0x0;
            }
          }
        }
      }
    }
    *(code *******)(param_1 + 0x80) = ppppppcVar13;
    *(double *)(param_1 + 0x82) = dVar46;
    *(code ********)(param_1 + 0x84) = pppppppcVar5;
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x5b8,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x7a] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x698,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)();
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8();
        bVar16 = local_238;
      }
    }
    param_1[0x7b] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
    }
    if (0x18 < local_240) {
      FUN_1400020a8();
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    if (param_1[1] == 0) {
LAB_143ceeb73:
      lVar38 = 0;
    }
    else {
      uVar29 = *param_1;
      lVar38 = 0;
      if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
        plVar20 = (longlong *)
                  ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
        if ((plVar20 == (longlong *)0x0) ||
           ((*(uint *)(plVar20 + 2) != param_1[1] || ((*(uint *)(plVar20 + 1) & 0x10200000) != 0))))
        goto LAB_143ceeb73;
        lVar38 = *plVar20;
      }
    }
    local_368 = (double)CONCAT71(local_368._1_7_,(&DAT_00001100)[lVar38]);
    lVar38 = FUN_140153468();
    if (0.0 < *(float *)(lVar38 + 0x4cc)) {
      if (param_1[1] == 0) {
LAB_143cef7c8:
        lVar38 = 0;
      }
      else {
        uVar29 = *param_1;
        lVar38 = 0;
        if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
          if ((plVar20 == (longlong *)0x0) ||
             ((*(uint *)(plVar20 + 2) != param_1[1] || ((*(uint *)(plVar20 + 1) & 0x10200000) != 0))
             )) goto LAB_143cef7c8;
          lVar38 = *plVar20;
        }
      }
      param_1[0x7f] = *(uint *)(lVar38 + 0x1fc);
      lVar38 = FUN_140153468();
      if (param_1[1] == 0) {
LAB_143cef7cf:
        lVar22 = 0;
      }
      else {
        uVar29 = *param_1;
        lVar22 = 0;
        if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
          if ((plVar20 == (longlong *)0x0) ||
             ((*(uint *)(plVar20 + 2) != param_1[1] || ((*(uint *)(plVar20 + 1) & 0x10200000) != 0))
             )) goto LAB_143cef7cf;
          lVar22 = *plVar20;
        }
      }
      *(undefined4 *)(lVar22 + 0x1fc) = *(undefined4 *)(lVar38 + 0x4cc);
    }
    if (param_1[1] == 0) {
LAB_143ceeb7a:
      lVar38 = 0;
    }
    else {
      uVar29 = *param_1;
      lVar38 = 0;
      if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
        plVar20 = (longlong *)
                  ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
        if ((plVar20 == (longlong *)0x0) ||
           ((*(uint *)(plVar20 + 2) != param_1[1] || ((*(uint *)(plVar20 + 1) & 0x10200000) != 0))))
        goto LAB_143ceeb7a;
        lVar38 = *plVar20;
      }
    }
    lVar22 = FUN_140153468(param_1);
    *(byte *)(lVar38 + 0x34a) = *(byte *)(lVar38 + 0x34a) & 0xfe | *(byte *)(lVar22 + 0x560) & 1;
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x7a0,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x18] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x700,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x19] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x750,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x1a] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x7f0,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x1b] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x840,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x1c] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x980,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x1e] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x930,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x1f] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar25 = (longlong)iStack_1d0 + -1;
      lVar22 = lVar25 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar22),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar22));
      if (*(longlong *)(lVar38 + lVar22) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar25;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar22) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar22) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar25 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    lVar38 = FUN_140153468(param_1);
    local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
    iStack_1d0 = 0;
    FUN_1456bb102(&local_1f8,plVar32);
    FUN_1448729ea(lVar38 + 0x8e0,&local_258,&local_1f8);
    if (local_238 == 3) {
      uVar29 = (uint)local_258;
      bVar16 = 3;
    }
    else {
      FUN_1400b56fe(&local_228,&local_258,3);
      uVar29 = 0;
      if ((byte)local_208 != 0) {
        uVar29 = (uint)local_228;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar24 = (code *******)&local_228;
        if (0x18 < (ushort)local_210) {
          pppppppcVar24 = local_228;
        }
        (*pcVar4)(pppppppcVar24);
      }
      bVar16 = local_238;
      if (0x18 < (ushort)local_210) {
        FUN_1400020a8(local_228);
        bVar16 = local_238;
      }
    }
    param_1[0x20] = uVar29;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
    if (pcVar4 != (code *)0x0) {
      pppppppcVar24 = (code *******)&local_258;
      if (0x18 < local_240) {
        pppppppcVar24 = local_258;
      }
      (*pcVar4)(pppppppcVar24);
    }
    if (0x18 < local_240) {
      FUN_1400020a8(local_258);
    }
    lVar38 = DAT_14c9a3da0;
    if ((longlong)iStack_1d0 != 0) {
      lVar22 = (longlong)iStack_1d0 + -1;
      lVar25 = lVar22 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
      if (*(longlong *)(lVar38 + lVar25) != 0) {
        FUN_1400020a8();
      }
      lVar38 = DAT_14c9a3da0;
      iVar18 = (int)lVar22;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar38 + lVar25) = 0xffffffff;
      iVar28 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar28 = DAT_14c9a3dd0;
      }
      *(int *)(lVar38 + 4 + lVar25) = iVar28;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar34 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar34 = DAT_14c9a3dc0;
      }
      iVar28 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar28 = iVar18;
      }
      bVar16 = (byte)lVar22 & 0x1f;
      DAT_14c9a3dd0 = iVar18;
      *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
           *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
           (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
      iStack_1d0 = 0;
    }
    if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_1e8)[2])();
      }
    }
    uVar36 = (undefined7)((ulonglong)param_3 >> 8);
    if (*(byte *)(plVar32 + 0x2f) < 2) {
LAB_143cefdca:
      lVar38 = FUN_140153468(param_1);
      if ((*(byte *)(lVar38 + 0x101) & 0x40) != 0) {
LAB_143cefddf:
        lVar38 = FUN_140153468(param_1);
        if ((*(longlong *)(lVar38 + 0xb68) != 0) && (plVar32 != (longlong *)0x0)) {
          uVar19 = FUN_1407ca880();
          plVar20 = (longlong *)(**(code **)(*plVar32 + 0x288))(plVar32,uVar19);
          if (plVar20 != (longlong *)0x0) {
            uVar19 = FUN_1407ca880();
            plVar21 = (longlong *)FUN_144718840(plVar20,uVar19);
            if (plVar21 != (longlong *)0x0 && plVar20 != plVar21) {
              lVar38 = FUN_140153468(param_1);
              lVar22 = 0x38;
              if ((*(uint *)(lVar38 + 0x100) >> 0xe & 1) == 0) {
                lVar22 = 0x20;
              }
              lVar38 = FUN_140153468(param_1);
              (**(code **)(*plVar21 + lVar22))(plVar21,*(undefined8 *)(lVar38 + 0xb68));
            }
          }
        }
      }
      *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] & 0xfe;
      lVar38 = FUN_140153468(param_1);
      if (lVar38 == param_3) {
        if ((local_368._0_1_ == '\x03') &&
           (lVar38 = FUN_140153468(param_1), *(char *)(lVar38 + 0x168) == '\x02')) {
          FUN_140153468(param_1);
        }
        if (((((char)plVar32[0x2f] == '\x03') &&
             ((**(code **)(*plVar32 + 0x578))(), *(longlong *)(param_1 + 2) != 0)) &&
            (plVar20 = *(longlong **)(param_1 + 4), plVar20 != (longlong *)0x0)) &&
           (0 < (int)plVar20[1])) {
          plVar21 = (longlong *)0x0;
          iVar18 = (int)plVar20[1];
          do {
            iVar28 = iVar18;
            if (iVar28 == 0) {
              plVar20 = (longlong *)0x0;
              goto LAB_143ceffd7;
            }
            LOCK();
            iVar18 = (int)plVar20[1];
            bVar39 = iVar28 == iVar18;
            if (bVar39) {
              *(int *)(plVar20 + 1) = iVar28 + 1;
              iVar18 = iVar28;
            }
            UNLOCK();
          } while (!bVar39);
          plVar21 = *(longlong **)(param_1 + 2);
LAB_143ceffd7:
          local_2d8 = *(undefined8 *)(param_4 + 10);
          local_2e8 = *(undefined8 *)(param_4 + 6);
          uStack_2e0 = *(undefined8 *)(param_4 + 8);
          if (param_1[0x13] == 0) {
LAB_143cf0984:
            uVar19 = 0;
          }
          else {
            uVar29 = param_1[0x12];
            uVar19 = 0;
            if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
              puVar30 = (undefined8 *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if ((puVar30 == (undefined8 *)0x0) ||
                 ((*(uint *)(puVar30 + 2) != param_1[0x13] ||
                  ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf0984;
              uVar19 = *puVar30;
            }
          }
          if (param_4[4] == 0.0) {
LAB_143cf098c:
            uVar37 = 0;
          }
          else {
            fVar40 = param_4[3];
            uVar37 = 0;
            if ((-1 < (int)fVar40) && ((int)fVar40 < DAT_14c9647dc)) {
              puVar30 = (undefined8 *)
                        ((ulonglong)(((uint)fVar40 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar40 >> 0x10) * 8));
              if ((puVar30 == (undefined8 *)0x0) ||
                 ((*(float *)(puVar30 + 2) != param_4[4] ||
                  ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf098c;
              uVar37 = *puVar30;
            }
          }
          local_3c8 = (uint *)&local_2e8;
          (**(code **)(*plVar21 + 200))(plVar21,local_3c8,uVar37,uVar19);
          if (iVar28 != 0) {
            LOCK();
            plVar21 = plVar20 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
        }
        lVar38 = FUN_140153468(param_1);
        if (lVar38 != param_3) {
          *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] & 0xfe;
        }
        if (param_1[1] == 0) {
LAB_143cf06a1:
          plVar20 = (longlong *)0x0;
        }
        else {
          uVar29 = *param_1;
          plVar20 = (longlong *)0x0;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            puVar30 = (undefined8 *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if ((puVar30 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar30 + 2) != param_1[1] ||
                ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf06a1;
            plVar20 = (longlong *)*puVar30;
          }
        }
        pppppppcVar24 = (code *******)FUN_140153468(param_1);
        (**(code **)(*plVar20 + 0xe20))(plVar20);
        lVar22 = FUN_140153468();
        if (lVar22 != param_3) {
          *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] & 0xfe;
        }
        if (((*(longlong *)(param_1 + 2) != 0) &&
            (plVar20 = *(longlong **)(param_1 + 4), plVar20 != (longlong *)0x0)) &&
           (0 < (int)plVar20[1])) {
          plVar21 = (longlong *)0x0;
          uVar29 = *(uint *)(plVar20 + 1);
          do {
            uVar35 = uVar29;
            if (uVar35 == 0) {
              plVar20 = (longlong *)0x0;
              goto LAB_143cf01c7;
            }
            pppppppcVar24 = (code *******)(ulonglong)(uVar35 + 1);
            LOCK();
            uVar29 = *(uint *)(plVar20 + 1);
            bVar39 = uVar35 == uVar29;
            if (bVar39) {
              *(uint *)(plVar20 + 1) = uVar35 + 1;
              uVar29 = uVar35;
            }
            UNLOCK();
          } while (!bVar39);
          plVar21 = *(longlong **)(param_1 + 2);
LAB_143cf01c7:
          local_2f8 = *(undefined8 *)(param_4 + 10);
          local_308 = *(undefined8 *)(param_4 + 6);
          uStack_300 = *(undefined8 *)(param_4 + 8);
          if (param_4[4] != 0.0) {
            fVar40 = param_4[3];
            pppppppcVar24 = (code *******)(ulonglong)(uint)fVar40;
            if ((-1 < (int)fVar40) && ((int)fVar40 < DAT_14c9647dc)) {
              pppppppcVar24 = (code *******)(ulonglong)((uint)fVar40 >> 0x10);
            }
          }
          (**(code **)(*plVar21 + 0xb8))();
          if (uVar35 != 0) {
            LOCK();
            plVar21 = plVar20 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
          }
        }
        lVar25 = FUN_140153468(param_1);
        if (lVar25 == param_3) {
          uVar33 = CONCAT71(uVar36,1);
          if (((lVar22 != param_3 || lVar38 != param_3) || ((char)plVar32[0x2f] != '\x03')) ||
             (lVar38 = FUN_140153468(param_1), (*(byte *)(lVar38 + 0xfa) & 4) == 0))
          goto LAB_143cec09c;
          if (((((((param_1[0x3b] != 0) && (uVar29 = param_1[0x3a], -1 < (int)uVar29)) &&
                 ((int)uVar29 < DAT_14c9647dc)) &&
                ((pppppppcVar24 =
                       (code *******)
                       ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
                 pppppppcVar24 != (code *******)0x0 &&
                 (*(uint *)(pppppppcVar24 + 2) == param_1[0x3b])))) &&
               (((ulonglong)pppppppcVar24[1] & 0x10200000) == 0)) ||
              ((*(double *)(param_1 + 0x44) != 0.0 || (NAN(*(double *)(param_1 + 0x44)))))) ||
             ((*(double *)(param_1 + 0x46) != 0.0 ||
              (((NAN(*(double *)(param_1 + 0x46)) || (*(double *)(param_1 + 0x48) != 0.0)) ||
               (NAN(*(double *)(param_1 + 0x48)))))))) {
            if (param_1[1] == 0) {
LAB_143cf1214:
              lVar38 = 0;
            }
            else {
              uVar29 = *param_1;
              lVar38 = 0;
              if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
                plVar32 = (longlong *)
                          ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                if ((plVar32 == (longlong *)0x0) ||
                   ((*(uint *)(plVar32 + 2) != param_1[1] ||
                    ((*(uint *)(plVar32 + 1) & 0x10200000) != 0)))) goto LAB_143cf1214;
                lVar38 = *plVar32;
              }
            }
            local_2c4 = 0.0;
            local_2c8 = 0.0;
            local_2cc = 0.0;
            local_2d0 = 0.0;
            (**(code **)(**(longlong **)(&DAT_00001ce8 + lVar38) + 0x528))();
            local_378 = *(float **)(param_1 + 0x44);
            local_370 = *(double *)(param_1 + 0x46);
            local_368 = *(double *)(param_1 + 0x48);
            if ((((param_1[0x3b] != 0) && (uVar29 = param_1[0x3a], -1 < (int)uVar29)) &&
                ((int)uVar29 < DAT_14c9647dc)) &&
               (((puVar30 = (undefined8 *)
                            ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
                 puVar30 != (undefined8 *)0x0 && (*(uint *)(puVar30 + 2) == param_1[0x3b])) &&
                ((*(uint *)(puVar30 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar30 + 1) & 0x10200000) == 0) {
                plVar32 = (longlong *)*puVar30;
              }
              else {
                plVar32 = (longlong *)0x0;
              }
              (**(code **)(*plVar32 + 0x528))(local_368,&local_2cc,&local_2d0);
              local_368 = local_368 - (double)local_2d0;
            }
            dVar47 = (double)local_2c8;
            lVar38 = FUN_140153468(param_1);
            fVar40 = *(float *)(lVar38 + 0xb8c);
            if (((param_1[0x3b] != 0) && (uVar29 = param_1[0x3a], -1 < (int)uVar29)) &&
               (((int)uVar29 < DAT_14c9647dc &&
                (((lVar38 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8),
                  lVar38 != 0 && (*(uint *)(lVar38 + 0x10) == param_1[0x3b])) &&
                 ((*(uint *)(lVar38 + 8) & 0x10200000) == 0)))))) {
              fVar40 = fVar40 + local_2cc + local_2c4;
            }
            local_338._8_8_ = 0;
            local_338._0_8_ = *(ulonglong *)(param_1 + 0x52);
            local_348._8_8_ = 0;
            local_348._0_8_ = *(ulonglong *)(param_1 + 0x54);
            local_328._8_8_ = 0;
            local_328._0_8_ = *(ulonglong *)(param_1 + 0x56);
            lVar38 = FUN_140153468(param_1);
            uVar55 = SUB84(DAT_14c846500,0);
            uVar56 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
            switch(*(undefined1 *)(lVar38 + 0xb90)) {
            case 0:
              if (((((param_1[0x3b] != 0) && (uVar29 = param_1[0x3a], -1 < (int)uVar29)) &&
                   ((int)uVar29 < DAT_14c9647dc)) &&
                  ((pdVar26 = (double *)
                              ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
                   pdVar26 != (double *)0x0 && (*(uint *)(pdVar26 + 2) == param_1[0x3b])))) &&
                 (((ulonglong)pdVar26[1] & 0x10200000) == 0)) {
                if (((ulonglong)pdVar26[1] & 0x10200000) == 0) {
                  dVar46 = *pdVar26;
                }
                else {
                  dVar46 = 0.0;
                }
                lVar38 = *(longlong *)((longlong)dVar46 + 0x1c8);
                if (lVar38 != 0) {
                  ppppppcVar50 = *(code *******)(lVar38 + 0x240);
                  dVar45 = *(double *)(lVar38 + 0x248);
                  pppppppcVar24 = *(code ********)(lVar38 + 0x250);
                  ppppppcVar13 = *(code *******)(lVar38 + 600);
                  pdVar27 = *(double **)(lVar38 + 0x228);
                  local_1f8 = (code *)ppppppcVar50;
                  dStack_1f0 = dVar45;
                  local_1e8 = pppppppcVar24;
                  ppppppcStack_1e0 = ppppppcVar13;
                  if (pdVar27 == (double *)0x0) {
                    pdVar26 = (double *)&DAT_00000040;
                    pdVar27 = (double *)FUN_14001cc68();
                    dVar46 = DAT_14c8463d8;
                    *pdVar27 = DAT_14c8463d0;
                    pdVar27[1] = dVar46;
                    dVar46 = DAT_14c8463e8;
                    pdVar27[2] = DAT_14c8463e0;
                    pdVar27[3] = dVar46;
                    dVar46 = DAT_14c846500;
                    pdVar27[4] = DAT_14c8464f8;
                    pdVar27[5] = dVar46;
                    dVar46 = DAT_14c846508;
                    pdVar27[6] = DAT_14c846508;
                    *(double **)(lVar38 + 0x228) = pdVar27;
                  }
                  auVar7._8_4_ = (int)-(ulonglong)(dVar45 != pdVar27[1]);
                  auVar7._0_8_ = -(ulonglong)((double)ppppppcVar50 != *pdVar27);
                  auVar7._12_4_ = (int)(-(ulonglong)(dVar45 != pdVar27[1]) >> 0x20);
                  iVar18 = movmskpd(SUB84(dVar46,0),auVar7);
                  auVar9._8_4_ = (int)-(ulonglong)((double)ppppppcVar13 != pdVar27[3]);
                  auVar9._0_8_ = -(ulonglong)((double)pppppppcVar24 != pdVar27[2]);
                  auVar9._12_4_ = (int)(-(ulonglong)((double)ppppppcVar13 != pdVar27[3]) >> 0x20);
                  uVar29 = movmskpd((int)pdVar26,auVar9);
                  if ((uVar29 & 0x3fffffff) != 0 || iVar18 != 0) {
                    pdVar27[2] = (double)local_1e8;
                    pdVar27[3] = (double)ppppppcStack_1e0;
                    *pdVar27 = (double)local_1f8;
                    pdVar27[1] = dStack_1f0;
                    FUN_1448052ee();
                    pdVar27[6] = local_218;
                    pdVar27[4] = (double)local_228;
                    pdVar27[5] = (double)ppppppcStack_220;
                  }
                  uVar55 = SUB84(pdVar27[5],0);
                  uVar56 = (undefined4)((ulonglong)pdVar27[5] >> 0x20);
                }
                dVar46 = (double)FUN_144719204(0,0x4076800000000000);
                dVar45 = (double)FUN_144719204(CONCAT44(uVar56,uVar55),0x4076800000000000);
                local_328._0_8_ = sin(dVar46 * 0.017453292519943295);
                local_328._8_8_ = extraout_XMM0_Qb_02;
                dVar46 = cos(dVar46 * 0.017453292519943295);
                dVar49 = sin(dVar45 * 0.017453292519943295);
                dVar45 = cos(dVar45 * 0.017453292519943295);
                local_348._8_4_ = (int)extraout_XMM0_Qb_03;
                local_348._0_8_ = dVar49 * dVar46;
                local_348._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
                local_338._8_8_ = extraout_XMM0_Qb_04;
                local_338._0_8_ = dVar45 * dVar46;
              }
              break;
            case 1:
            case 4:
              if (((param_1[0x3b] != 0) && (uVar29 = param_1[0x3a], -1 < (int)uVar29)) &&
                 ((((int)uVar29 < DAT_14c9647dc &&
                   ((pdVar26 = (double *)
                               ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8)),
                    pdVar26 != (double *)0x0 && (*(uint *)(pdVar26 + 2) == param_1[0x3b])))) &&
                  (((ulonglong)pdVar26[1] & 0x10200000) == 0)))) {
                if (((ulonglong)pdVar26[1] & 0x10200000) == 0) {
                  dVar46 = *pdVar26;
                }
                else {
                  dVar46 = 0.0;
                }
                lVar38 = *(longlong *)((longlong)dVar46 + 0x1c8);
                if (lVar38 != 0) {
                  ppppppcVar50 = *(code *******)(lVar38 + 0x240);
                  dVar45 = *(double *)(lVar38 + 0x248);
                  pppppppcVar24 = *(code ********)(lVar38 + 0x250);
                  ppppppcVar13 = *(code *******)(lVar38 + 600);
                  pdVar27 = *(double **)(lVar38 + 0x228);
                  local_1f8 = (code *)ppppppcVar50;
                  dStack_1f0 = dVar45;
                  local_1e8 = pppppppcVar24;
                  ppppppcStack_1e0 = ppppppcVar13;
                  if (pdVar27 == (double *)0x0) {
                    pdVar26 = (double *)&DAT_00000040;
                    pdVar27 = (double *)FUN_14001cc68();
                    dVar46 = DAT_14c8463d8;
                    *pdVar27 = DAT_14c8463d0;
                    pdVar27[1] = dVar46;
                    dVar46 = DAT_14c8463e8;
                    pdVar27[2] = DAT_14c8463e0;
                    pdVar27[3] = dVar46;
                    dVar46 = DAT_14c846500;
                    pdVar27[4] = DAT_14c8464f8;
                    pdVar27[5] = dVar46;
                    dVar46 = DAT_14c846508;
                    pdVar27[6] = DAT_14c846508;
                    *(double **)(lVar38 + 0x228) = pdVar27;
                  }
                  auVar53._8_4_ = (int)-(ulonglong)(dVar45 != pdVar27[1]);
                  auVar53._0_8_ = -(ulonglong)((double)ppppppcVar50 != *pdVar27);
                  auVar53._12_4_ = (int)(-(ulonglong)(dVar45 != pdVar27[1]) >> 0x20);
                  iVar18 = movmskpd(SUB84(dVar46,0),auVar53);
                  auVar8._8_4_ = (int)-(ulonglong)((double)ppppppcVar13 != pdVar27[3]);
                  auVar8._0_8_ = -(ulonglong)((double)pppppppcVar24 != pdVar27[2]);
                  auVar8._12_4_ = (int)(-(ulonglong)((double)ppppppcVar13 != pdVar27[3]) >> 0x20);
                  uVar29 = movmskpd((int)pdVar26,auVar8);
                  if ((uVar29 & 0x3fffffff) != 0 || iVar18 != 0) {
                    pdVar27[2] = (double)local_1e8;
                    pdVar27[3] = (double)ppppppcStack_1e0;
                    *pdVar27 = (double)local_1f8;
                    pdVar27[1] = dStack_1f0;
                    FUN_1448052ee();
                    pdVar27[6] = local_218;
                    pdVar27[4] = (double)local_228;
                    pdVar27[5] = (double)ppppppcStack_220;
                  }
                  uVar55 = SUB84(pdVar27[5],0);
                  uVar56 = (undefined4)((ulonglong)pdVar27[5] >> 0x20);
                }
                dVar46 = (double)FUN_144719204(0);
                dVar45 = (double)FUN_144719204(CONCAT44(uVar56,uVar55));
                dVar49 = sin(dVar46 * 0.017453292519943295);
                dVar46 = cos(dVar46 * 0.017453292519943295);
                dVar51 = sin(dVar45 * 0.017453292519943295);
                dVar45 = cos(dVar45 * 0.017453292519943295);
                local_328._8_4_ = (int)extraout_XMM0_Qb;
                local_328._0_8_ = -dVar49;
                local_328._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) ^ 0x80000000;
                local_348._8_4_ = (int)extraout_XMM0_Qb_01;
                local_348._0_8_ = dVar51 * -dVar46;
                local_348._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
                local_338._8_4_ = (int)extraout_XMM0_Qb_00;
                local_338._0_8_ = -dVar46 * dVar45;
                local_338._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) ^ 0x80000000;
              }
              break;
            case 2:
              local_328._0_8_ = *(ulonglong *)(param_1 + 0x56) ^ 0x8000000000000000;
              local_328._8_4_ = 0;
              local_328._12_4_ = 0x80000000;
              local_348._0_8_ = *(ulonglong *)(param_1 + 0x54) ^ 0x8000000000000000;
              local_348._8_4_ = 0;
              local_348._12_4_ = 0x80000000;
              local_338._0_8_ = *(ulonglong *)(param_1 + 0x52) ^ 0x8000000000000000;
              local_338._8_4_ = 0;
              local_338._12_4_ = 0x80000000;
            }
            local_368 = local_368 + dVar47;
            local_318 = (double)fVar40;
            lVar38 = 0;
            do {
              dVar47 = (double)(*(float *)((longlong)&DAT_14b3f5350 + lVar38) * 0.017453292) * 0.5;
              dVar46 = sin(dVar47);
              dVar45 = cos(dVar47);
              dVar47 = dVar46 * 0.0;
              dVar49 = dVar47 * (double)local_348._0_8_ - (double)local_338._0_8_ * dVar47;
              dVar57 = dVar46 * (double)local_338._0_8_ - dVar47 * (double)local_328._0_8_;
              dVar58 = dVar47 * (double)local_328._0_8_ - (double)local_348._0_8_ * dVar46;
              dVar49 = dVar49 + dVar49;
              dVar57 = dVar57 + dVar57;
              dVar58 = dVar58 + dVar58;
              dVar51 = dVar49 * dVar47;
              dVar47 = (dVar47 * dVar57 - dVar58 * dVar47) +
                       dVar45 * dVar49 + (double)local_328._0_8_;
              dVar49 = (dVar46 * dVar58 - dVar51) + dVar45 * dVar57 + (double)local_348._0_8_;
              dVar45 = (dVar51 - dVar57 * dVar46) + dVar45 * dVar58 + (double)local_338._0_8_;
              dVar46 = local_368 - dVar47 * local_318;
              ppppppcVar50 = (code ******)(local_370 - dVar49 * local_318);
              pppppppcVar24 = (code *******)((double)local_378 - dVar45 * local_318);
              if (((param_1[0x3b] == 0) || (uVar29 = param_1[0x3a], (int)uVar29 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar29 ||
                  ((lVar22 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8),
                   lVar22 == 0 || (*(uint *)(lVar22 + 0x10) != param_1[0x3b])))))) {
                dVar47 = dVar47 * 1000.0 + dVar46;
                dVar51 = dVar49 * 1000.0 + (double)ppppppcVar50;
                pfVar52 = (float *)(dVar45 * 1000.0 + (double)pppppppcVar24);
              }
              else {
                uVar55 = SUB84(local_368,0);
                dVar57 = (double)((ulonglong)local_368 & 0xffffffff00000000);
                dVar51 = local_370;
                pfVar52 = local_378;
                if ((*(uint *)(lVar22 + 8) & 0x10200000) != 0) {
                  dVar57 = dVar47 * 1000.0 + dVar46;
                  uVar55 = SUB84(dVar57,0);
                  dVar51 = dVar49 * 1000.0 + (double)ppppppcVar50;
                  pfVar52 = (float *)(dVar45 * 1000.0 + (double)pppppppcVar24);
                }
                uVar56 = (undefined4)((ulonglong)dVar57 >> 0x20);
                dVar47 = (double)CONCAT44(uVar56,uVar55);
                if ((*(uint *)(lVar22 + 8) & 0x10200000) == 0) {
                  puVar23 = param_1;
                  lVar22 = FUN_140153468();
                  uVar29 = (uint)puVar23;
                  dVar47 = (double)CONCAT44(uVar56,uVar55);
                  if (*(char *)(lVar22 + 0xb90) == '\x04') {
                    uVar35 = param_1[0x3b];
                    dVar47 = (double)(ulonglong)uVar35;
                    if ((uVar35 == 0) || (uVar29 = param_1[0x3a], (int)uVar29 < 0)) {
LAB_143cf1d6f:
                      lVar22 = 0;
                    }
                    else {
                      lVar22 = 0;
                      if ((int)uVar29 < DAT_14c9647dc) {
                        uVar31 = uVar29 & 0xffff;
                        uVar29 = uVar29 >> 0x10;
                        plVar32 = (longlong *)
                                  ((ulonglong)(uVar31 * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar29 * 8));
                        if (((plVar32 == (longlong *)0x0) || (*(uint *)(plVar32 + 2) != uVar35)) ||
                           (dVar47 = (double)(ulonglong)*(uint *)(plVar32 + 1),
                           (*(uint *)(plVar32 + 1) & 0x10200000) != 0)) goto LAB_143cf1d6f;
                        lVar22 = *plVar32;
                      }
                    }
                    lVar22 = *(longlong *)(lVar22 + 0x1c8);
                    if (lVar22 == 0) {
                      uVar55 = SUB84(DAT_14c846500,0);
                      uVar56 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
                      dVar47 = DAT_14c8464f8;
                    }
                    else {
                      ppppppcVar13 = *(code *******)(lVar22 + 0x240);
                      dVar45 = *(double *)(lVar22 + 0x248);
                      pppppppcVar5 = *(code ********)(lVar22 + 0x250);
                      ppppppcVar15 = *(code *******)(lVar22 + 600);
                      pdVar26 = *(double **)(lVar22 + 0x228);
                      local_1f8 = (code *)ppppppcVar13;
                      dStack_1f0 = dVar45;
                      local_1e8 = pppppppcVar5;
                      ppppppcStack_1e0 = ppppppcVar15;
                      if (pdVar26 == (double *)0x0) {
                        uVar29 = 0x40;
                        pdVar26 = (double *)FUN_14001cc68();
                        dVar47 = DAT_14c8463d8;
                        *pdVar26 = DAT_14c8463d0;
                        pdVar26[1] = dVar47;
                        dVar47 = DAT_14c8463e8;
                        pdVar26[2] = DAT_14c8463e0;
                        pdVar26[3] = dVar47;
                        dVar47 = DAT_14c846500;
                        pdVar26[4] = DAT_14c8464f8;
                        pdVar26[5] = dVar47;
                        dVar47 = DAT_14c846508;
                        pdVar26[6] = DAT_14c846508;
                        *(double **)(lVar22 + 0x228) = pdVar26;
                      }
                      auVar10._8_4_ = (int)-(ulonglong)(dVar45 != pdVar26[1]);
                      auVar10._0_8_ = -(ulonglong)((double)ppppppcVar13 != *pdVar26);
                      auVar10._12_4_ = (int)(-(ulonglong)(dVar45 != pdVar26[1]) >> 0x20);
                      iVar18 = movmskpd(SUB84(dVar47,0),auVar10);
                      auVar11._8_4_ = (int)-(ulonglong)((double)ppppppcVar15 != pdVar26[3]);
                      auVar11._0_8_ = -(ulonglong)((double)pppppppcVar5 != pdVar26[2]);
                      auVar11._12_4_ =
                           (int)(-(ulonglong)((double)ppppppcVar15 != pdVar26[3]) >> 0x20);
                      uVar29 = movmskpd(uVar29,auVar11);
                      if ((uVar29 & 0x3fffffff) != 0 || iVar18 != 0) {
                        pdVar26[2] = (double)local_1e8;
                        pdVar26[3] = (double)ppppppcStack_1e0;
                        *pdVar26 = (double)local_1f8;
                        pdVar26[1] = dStack_1f0;
                        FUN_1448052ee(&local_1f8);
                        pdVar26[6] = local_218;
                        pdVar26[4] = (double)local_228;
                        pdVar26[5] = (double)ppppppcStack_220;
                      }
                      uVar55 = SUB84(pdVar26[5],0);
                      uVar56 = (undefined4)((ulonglong)pdVar26[5] >> 0x20);
                      dVar47 = pdVar26[4];
                    }
                    dVar47 = (double)FUN_144719204(dVar47,0x4076800000000000);
                    dVar45 = (double)FUN_144719204(CONCAT44(uVar56,uVar55),0x4076800000000000);
                    dVar49 = sin(dVar47 * 0.017453292519943295);
                    dVar57 = cos(dVar47 * 0.017453292519943295);
                    dVar51 = sin(dVar45 * 0.017453292519943295);
                    dVar45 = cos(dVar45 * 0.017453292519943295);
                    dVar47 = dVar49 * 1000.0 + dVar46;
                    dVar51 = dVar51 * dVar57 * 1000.0 + (double)ppppppcVar50;
                    pfVar52 = (float *)(dVar45 * dVar57 * 1000.0 + (double)pppppppcVar24);
                  }
                }
              }
              fVar41 = local_2c4;
              fVar40 = local_2c8;
              if ((param_1[1] == 0) || (uVar29 = *param_1, (int)uVar29 < 0)) {
LAB_143cf1d68:
                lVar22 = 0;
              }
              else {
                lVar22 = 0;
                if ((int)uVar29 < DAT_14c9647dc) {
                  plVar32 = (longlong *)
                            ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                  if (((plVar32 == (longlong *)0x0) || (*(uint *)(plVar32 + 2) != param_1[1])) ||
                     ((*(uint *)(plVar32 + 1) & 0x10200000) != 0)) goto LAB_143cf1d68;
                  lVar22 = *plVar32;
                }
              }
              pppppppcVar5 = *(code ********)(&DAT_00001ce8 + lVar22);
              uVar19 = FUN_1447210f0(pppppppcVar5);
              dVar45 = dVar51 - (double)ppppppcVar50;
              ppppppcVar13 = (code ******)((double)pfVar52 - (double)pppppppcVar24);
              dVar49 = (double)ppppppcVar13 * (double)ppppppcVar13 + dVar45 * dVar45;
              local_34c = fVar41;
              if ((dVar49 != 1.0) || (NAN(dVar49))) {
                pppppppcVar12 = DAT_14c8464f0;
                ppppppcVar15 = DAT_14c8464e0;
                dVar57 = DAT_14c8464e8;
                if (9.99999993922529e-09 <= dVar49) {
                  dVar45 = dVar45 * (1.0 / SQRT(dVar49));
                  ppppppcVar13 = (code ******)((double)ppppppcVar13 * (1.0 / SQRT(dVar49)));
                  goto LAB_143cf18c0;
                }
              }
              else {
                pppppppcVar12 = (code *******)(dVar47 - dVar46);
                if (((double)pppppppcVar12 != 0.0) ||
                   (ppppppcVar15 = ppppppcVar13, dVar57 = dVar45, NAN((double)pppppppcVar12))) {
LAB_143cf18c0:
                  pppppppcVar12 = (code *******)0x0;
                  ppppppcVar15 = ppppppcVar13;
                  dVar57 = dVar45;
                }
              }
              ppppppcVar13 = (code ******)0x0;
              local_310 = dVar46;
              local_258 = pppppppcVar24;
              ppppppcStack_250 = ppppppcVar50;
              local_248 = dVar46;
              if (((((double)ppppppcVar15 != 0.0) || (NAN((double)ppppppcVar15))) || (dVar57 != 0.0)
                  ) || (NAN(dVar57))) {
                dVar46 = atan2(dVar57,(double)ppppppcVar15);
                ppppppcVar13 = (code ******)(dVar46 * 57.29577951308232);
              }
              dVar46 = SQRT((double)ppppppcVar15 * (double)ppppppcVar15 + dVar57 * dVar57);
              pppppppcVar14 = (code *******)0x0;
              if ((((double)pppppppcVar12 != 0.0) || (NAN((double)pppppppcVar12))) ||
                 ((dVar46 != 0.0 || (NAN(dVar46))))) {
                dVar46 = atan2((double)pppppppcVar12,dVar46);
                pppppppcVar14 = (code *******)(dVar46 * 57.29577951308232);
              }
              dVar46 = (double)fVar40;
              local_260 = 0;
              local_270 = pppppppcVar14;
              local_268 = ppppppcVar13;
              cVar17 = FUN_140d7405c(uVar19,pppppppcVar5,&local_258,&local_270);
              if (cVar17 == '\0') {
                dVar45 = dVar46 * 0.5;
                local_248 = local_310 + dVar45;
                ppppppcStack_250 = (code ******)((double)ppppppcVar50 + dVar45);
                local_258 = (code *******)((double)pppppppcVar24 + dVar45);
                dVar51 = dVar51 - (double)ppppppcStack_250;
                ppppppcVar50 = (code ******)((double)pfVar52 - (double)local_258);
                dVar45 = (double)ppppppcVar50 * (double)ppppppcVar50 + dVar51 * dVar51;
                if ((dVar45 != 1.0) || (NAN(dVar45))) {
                  pppppppcVar24 = DAT_14c8464f0;
                  dVar47 = DAT_14c8464e8;
                  ppppppcVar15 = DAT_14c8464e0;
                  if (9.99999993922529e-09 <= dVar45) {
                    dVar51 = dVar51 * (1.0 / SQRT(dVar45));
                    ppppppcVar50 = (code ******)((double)ppppppcVar50 * (1.0 / SQRT(dVar45)));
                    goto LAB_143cf1a50;
                  }
                }
                else {
                  pppppppcVar24 = (code *******)(dVar47 - local_248);
                  if (((double)pppppppcVar24 != 0.0) ||
                     (dVar47 = dVar51, ppppppcVar15 = ppppppcVar50, NAN((double)pppppppcVar24))) {
LAB_143cf1a50:
                    pppppppcVar24 = (code *******)0x0;
                    dVar47 = dVar51;
                    ppppppcVar15 = ppppppcVar50;
                  }
                }
                ppppppcVar13 = (code ******)0x0;
                if ((((dVar47 != 0.0) || (NAN(dVar47))) || ((double)ppppppcVar15 != 0.0)) ||
                   (NAN((double)ppppppcVar15))) {
                  dVar45 = atan2(dVar47,(double)ppppppcVar15);
                  ppppppcVar13 = (code ******)(dVar45 * 57.29577951308232);
                }
                dVar47 = SQRT((double)ppppppcVar15 * (double)ppppppcVar15 + dVar47 * dVar47);
                pppppppcVar14 = (code *******)0x0;
                if ((((double)pppppppcVar24 != 0.0) || (NAN((double)pppppppcVar24))) ||
                   ((dVar47 != 0.0 || (NAN(dVar47))))) {
                  dVar47 = atan2((double)pppppppcVar24,dVar47);
                  pppppppcVar14 = (code *******)(dVar47 * 57.29577951308232);
                }
                local_278 = 0;
                pppppppcVar24 = pppppppcVar5;
                local_288 = pppppppcVar14;
                local_280 = ppppppcVar13;
                cVar17 = FUN_140d7405c(uVar19,pppppppcVar5,&local_258,&local_288);
                if (cVar17 != '\0') goto LAB_143cf1b14;
              }
              else {
LAB_143cf1b14:
                memset(&local_1f8,0,0x100);
                local_128 = 0xffffffff;
                local_154 = 0xffffffff;
                local_1f8 = (code *)CONCAT44(0x3f800000,(undefined4)local_1f8);
                local_2a8 = (code *****)CONCAT44(local_34c,3);
                local_218 = dVar46 * -1.5 + local_248;
                pppppcStack_2a0 = (code *****)CONCAT44(pppppcStack_2a0._4_4_,fVar40);
                local_228 = local_258;
                ppppppcStack_220 = ppppppcStack_250;
                local_3a8 = (wchar_t *)&DAT_14cad0f10;
                local_3b0 = (code *******)&DAT_14cad0f68;
                local_3b8 = (uint *)&local_2a8;
                local_3c8 = (uint *)&DAT_14c8463d0;
                local_3c0 = (code *******)((ulonglong)local_3c0 & 0xffffffff00000000);
                pppppppcVar24 = (code *******)&local_1f8;
                cVar17 = FUN_14021655c(uVar19,&local_1f8,&local_258,&local_228);
                if (cVar17 == '\0') {
                  lVar22 = FUN_140153468(param_1);
                  if ((*(byte *)(lVar22 + 0xfa) & 8) != 0) goto LAB_143cf1d55;
                }
                else {
                  local_248 = local_1d8;
                  local_258 = local_1e8;
                  ppppppcStack_250 = ppppppcStack_1e0;
                }
                if (((*(longlong *)(param_1 + 2) != 0) &&
                    (plVar32 = *(longlong **)(param_1 + 4), plVar32 != (longlong *)0x0)) &&
                   (0 < (int)plVar32[1])) {
                  iVar18 = (int)plVar32[1];
                  do {
                    if (iVar18 == 0) {
                      pppppppcVar24 = pppppppcVar5;
                      (**(code **)(_DAT_00000000 + 0x98))(0,pppppppcVar5,&local_258);
                      goto LAB_143cf1c91;
                    }
                    LOCK();
                    iVar28 = (int)plVar32[1];
                    bVar39 = iVar18 == iVar28;
                    if (bVar39) {
                      *(int *)(plVar32 + 1) = iVar18 + 1;
                      iVar28 = iVar18;
                    }
                    iVar18 = iVar28;
                    UNLOCK();
                  } while (!bVar39);
                  pppppppcVar24 = pppppppcVar5;
                  (**(code **)(**(longlong **)(param_1 + 2) + 0x98))
                            (*(longlong **)(param_1 + 2),pppppppcVar5,&local_258);
                  LOCK();
                  plVar20 = plVar32 + 1;
                  *(int *)plVar20 = (int)*plVar20 + -1;
                  UNLOCK();
                  if ((int)*plVar20 == 0) {
                    (**(code **)*plVar32)(plVar32);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar32 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar32 + 0x10))(plVar32);
                    }
                  }
                }
LAB_143cf1c91:
                ppppppcVar50 = pppppppcVar5[0x39];
                if (ppppppcVar50 != (code ******)0x0) {
                  local_2a8 = ppppppcVar50[0x4c];
                  pppppcStack_2a0 = ppppppcVar50[0x4d];
                  ppppppcStack_220 =
                       (code ******)((double)ppppppcStack_250 - (double)ppppppcVar50[0x4d]);
                  local_298 = ppppppcVar50[0x4e];
                  local_2b0 = 0;
                  local_218 = local_248 - (double)local_298;
                  local_228 = (code *******)((double)local_258 - (double)local_2a8);
                  local_3c8 = (uint *)0x0;
                  local_3b8 = (uint *)CONCAT71(local_3b8._1_7_,1);
                  local_3c0 = (code *******)((ulonglong)local_3c0 & 0xffffffff00000000);
                  pppppppcVar24 = (code *******)&local_228;
                  local_2c0 = pppppppcVar14;
                  local_2b8 = ppppppcVar13;
                  cVar17 = FUN_1407fd932(ppppppcVar50,pppppppcVar24,&local_2c0,0);
                  if (cVar17 != '\0') {
                    ppppppcVar50 = pppppppcVar5[0x78];
                    if (ppppppcVar50 != (code ******)0x0) {
                      if (DAT_14cb61cd0 == 0) {
                        local_228 = (code *******)FUN_141030f22;
                        local_380 = FUN_14081d0ea;
                        local_388 = &LAB_1463b31ae;
                        local_390 = (code *******)&local_228;
                        local_398 = &LAB_1486dca4f;
                        local_3a0 = &LAB_1464f50a6;
                        local_3a8 = L"Game";
                        local_3b0 = (code *******)0x0;
                        local_3b8 = (uint *)CONCAT44(local_3b8._4_4_,0x10000004);
                        local_3c0 = (code *******)CONCAT44(local_3c0._4_4_,8);
                        local_3c8 = (uint *)CONCAT44(local_3c8._4_4_,0xd70);
                        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,
                                      FUN_1464f5084);
                      }
                      if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(ppppppcVar50[2] + 7)) &&
                         (ppppppcVar50[2][6][*(int *)(DAT_14cb61cd0 + 0x38)] ==
                          (code ***)(DAT_14cb61cd0 + 0x30))) {
                        local_218 = 0.0;
                        local_210 = (code *******)CONCAT71(local_210._1_7_,1);
                        local_228 = pppppppcVar14;
                        ppppppcStack_220 = ppppppcVar13;
                        uVar19 = FUN_14477b072(ppppppcVar50,DAT_14cad39e8);
                        (*(code *)(*ppppppcVar50)[0x49])(ppppppcVar50,uVar19,&local_228);
                      }
                    }
                    if (((*(longlong *)(param_1 + 2) == 0) ||
                        (plVar32 = *(longlong **)(param_1 + 4), plVar32 == (longlong *)0x0)) ||
                       ((int)plVar32[1] < 1)) goto LAB_143cec09c;
                    iVar18 = (int)plVar32[1];
                    goto LAB_143cf1e5e;
                  }
                }
              }
LAB_143cf1d55:
              lVar38 = lVar38 + 4;
            } while (lVar38 != 0x20);
          }
          lVar38 = FUN_140153468(param_1);
          bVar16 = *(byte *)(lVar38 + 0xa0);
          lVar38 = FUN_140153468(param_1);
          uVar33 = CONCAT71((int7)((ulonglong)pppppppcVar24 >> 8),*(undefined1 *)(lVar38 + 0xa0)) &
                   0xffffffffffffff02;
          FUN_141105826(param_1,CONCAT71((int7)(uVar33 >> 8),(char)uVar33 * '\x02' | bVar16 & 1) | 2
                       );
          goto LAB_143cec09a;
        }
      }
    }
    else {
      fVar40 = *param_4;
      if (fVar40 <= 0.0) {
        lVar38 = FUN_140153468(param_1);
        local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
        iStack_1d0 = 0;
        FUN_1456bb102(&local_1f8,plVar32);
        FUN_1448729ea(lVar38 + 0x170,&local_258,&local_1f8);
        if (local_238 == 3) {
          uVar29 = (uint)local_258;
          bVar16 = 3;
        }
        else {
          FUN_1400b56fe(&local_228,&local_258,3);
          uVar29 = 0;
          if ((byte)local_208 != 0) {
            uVar29 = (uint)local_228;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120))
          ;
          if (pcVar4 != (code *)0x0) {
            pppppppcVar24 = (code *******)&local_228;
            if (0x18 < (ushort)local_210) {
              pppppppcVar24 = local_228;
            }
            (*pcVar4)(pppppppcVar24);
          }
          bVar16 = local_238;
          if (0x18 < (ushort)local_210) {
            FUN_1400020a8(local_228);
            bVar16 = local_238;
          }
        }
        param_1[0x14] = uVar29;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppppcVar24 = (code *******)&local_258;
          if (0x18 < local_240) {
            pppppppcVar24 = local_258;
          }
          (*pcVar4)(pppppppcVar24);
        }
        if (0x18 < local_240) {
          FUN_1400020a8(local_258);
        }
        lVar38 = DAT_14c9a3da0;
        if ((longlong)iStack_1d0 != 0) {
          lVar22 = (longlong)iStack_1d0 + -1;
          lVar25 = lVar22 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
          if (*(longlong *)(lVar38 + lVar25) != 0) {
            FUN_1400020a8();
          }
          lVar38 = DAT_14c9a3da0;
          iVar18 = (int)lVar22;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar38 + lVar25) = 0xffffffff;
          iVar28 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar28 = DAT_14c9a3dd0;
          }
          *(int *)(lVar38 + 4 + lVar25) = iVar28;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar34 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar34 = DAT_14c9a3dc0;
          }
          iVar28 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar28 = iVar18;
          }
          bVar16 = (byte)lVar22 & 0x1f;
          DAT_14c9a3dd0 = iVar18;
          *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
               *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
               (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
          iStack_1d0 = 0;
        }
        if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_1e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*local_1e8)[2])();
          }
        }
        fVar40 = (float)param_1[0x14];
      }
      else {
        param_1[0x14] = (uint)fVar40;
      }
      param_1[0x15] = (uint)fVar40;
      param_1[0x16] = 0;
      if (param_4[1] <= 0.0) {
        lVar38 = FUN_140153468(param_1);
        local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
        iStack_1d0 = 0;
        FUN_1456bb102(&local_1f8,plVar32);
        FUN_1448729ea(lVar38 + 0x118,&local_258,&local_1f8);
        if (local_238 == 3) {
          uVar29 = (uint)local_258;
          bVar16 = 3;
        }
        else {
          FUN_1400b56fe(&local_228,&local_258,3);
          uVar29 = 0;
          if ((byte)local_208 != 0) {
            uVar29 = (uint)local_228;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120))
          ;
          if (pcVar4 != (code *)0x0) {
            pppppppcVar24 = (code *******)&local_228;
            if (0x18 < (ushort)local_210) {
              pppppppcVar24 = local_228;
            }
            (*pcVar4)(pppppppcVar24);
          }
          bVar16 = local_238;
          if (0x18 < (ushort)local_210) {
            FUN_1400020a8(local_228);
            bVar16 = local_238;
          }
        }
        param_1[0x21] = uVar29;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppppcVar24 = (code *******)&local_258;
          if (0x18 < local_240) {
            pppppppcVar24 = local_258;
          }
          (*pcVar4)(pppppppcVar24);
        }
        if (0x18 < local_240) {
          FUN_1400020a8(local_258);
        }
        lVar38 = DAT_14c9a3da0;
        if ((longlong)iStack_1d0 != 0) {
          lVar22 = (longlong)iStack_1d0 + -1;
          lVar25 = lVar22 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
          if (*(longlong *)(lVar38 + lVar25) != 0) {
            FUN_1400020a8();
          }
          lVar38 = DAT_14c9a3da0;
          iVar18 = (int)lVar22;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar38 + lVar25) = 0xffffffff;
          iVar28 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar28 = DAT_14c9a3dd0;
          }
          *(int *)(lVar38 + 4 + lVar25) = iVar28;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar34 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar34 = DAT_14c9a3dc0;
          }
          iVar28 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar28 = iVar18;
          }
          bVar16 = (byte)lVar22 & 0x1f;
          DAT_14c9a3dd0 = iVar18;
          *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
               *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
               (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
          iStack_1d0 = 0;
        }
        if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_1e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*local_1e8)[2])();
          }
        }
      }
      else {
        param_1[0x21] = (uint)param_4[1];
      }
      if (param_4[2] <= 0.0) {
        lVar38 = FUN_140153468(param_1);
        local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
        iStack_1d0 = 0;
        FUN_1456bb102(&local_1f8,plVar32);
        FUN_1448729ea(lVar38 + 0xab0,&local_258,&local_1f8);
        if (local_238 == 3) {
          uVar29 = (uint)local_258;
          bVar16 = 3;
        }
        else {
          FUN_1400b56fe(&local_228,&local_258,3);
          uVar29 = 0;
          if ((byte)local_208 != 0) {
            uVar29 = (uint)local_228;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120))
          ;
          if (pcVar4 != (code *)0x0) {
            pppppppcVar24 = (code *******)&local_228;
            if (0x18 < (ushort)local_210) {
              pppppppcVar24 = local_228;
            }
            (*pcVar4)(pppppppcVar24);
          }
          bVar16 = local_238;
          if (0x18 < (ushort)local_210) {
            FUN_1400020a8(local_228);
            bVar16 = local_238;
          }
        }
        param_1[0x23] = uVar29;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppppcVar24 = (code *******)&local_258;
          if (0x18 < local_240) {
            pppppppcVar24 = local_258;
          }
          (*pcVar4)(pppppppcVar24);
        }
        if (0x18 < local_240) {
          FUN_1400020a8(local_258);
        }
        lVar38 = DAT_14c9a3da0;
        if ((longlong)iStack_1d0 != 0) {
          lVar22 = (longlong)iStack_1d0 + -1;
          lVar25 = lVar22 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
          if (*(longlong *)(lVar38 + lVar25) != 0) {
            FUN_1400020a8();
          }
          lVar38 = DAT_14c9a3da0;
          iVar18 = (int)lVar22;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar38 + lVar25) = 0xffffffff;
          iVar28 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar28 = DAT_14c9a3dd0;
          }
          *(int *)(lVar38 + 4 + lVar25) = iVar28;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar34 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar34 = DAT_14c9a3dc0;
          }
          iVar28 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar28 = iVar18;
          }
          bVar16 = (byte)lVar22 & 0x1f;
          DAT_14c9a3dd0 = iVar18;
          *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
               *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
               (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
          iStack_1d0 = 0;
        }
        if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_1e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*local_1e8)[2])();
          }
        }
      }
      else {
        param_1[0x23] = (uint)param_4[2];
      }
      pfVar52 = (float *)(param_1 + 0x23);
      lVar38 = FUN_140153468(param_1);
      local_378 = pfVar52;
      if ((*(byte *)(lVar38 + 0xf8) & 0x40) == 0) {
        lVar38 = FUN_140153468(param_1);
        if ((*(byte *)(lVar38 + 0xf8) & 8) != 0) {
          lVar38 = FUN_140153468(param_1);
          local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
          iStack_1d0 = 0;
          FUN_1456bb102(&local_1f8,plVar32);
          FUN_1448729ea(lVar38 + 0x568,&local_258,&local_1f8);
          if (local_238 == 3) {
            uVar29 = (uint)local_258;
            bVar16 = 3;
          }
          else {
            FUN_1400b56fe(&local_228,&local_258,3);
            uVar29 = 0;
            if ((byte)local_208 != 0) {
              uVar29 = (uint)local_228;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                               (ulonglong)((uint)(byte)local_208 * 0x120));
            if (pcVar4 != (code *)0x0) {
              pppppppcVar24 = (code *******)&local_228;
              if (0x18 < (ushort)local_210) {
                pppppppcVar24 = local_228;
              }
              (*pcVar4)(pppppppcVar24);
            }
            bVar16 = local_238;
            if (0x18 < (ushort)local_210) {
              FUN_1400020a8(local_228);
              bVar16 = local_238;
            }
          }
          pfVar52 = local_378;
          param_1[0x7c] = uVar29;
          *(undefined1 *)(param_1 + 0x7d) = 1;
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppppcVar24 = (code *******)&local_258;
            if (0x18 < local_240) {
              pppppppcVar24 = local_258;
            }
            (*pcVar4)(pppppppcVar24);
          }
          if (0x18 < local_240) {
            FUN_1400020a8(local_258);
          }
          lVar38 = DAT_14c9a3da0;
          if ((longlong)iStack_1d0 != 0) {
            lVar22 = (longlong)iStack_1d0 + -1;
            lVar25 = lVar22 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
            if (*(longlong *)(lVar38 + lVar25) != 0) {
              FUN_1400020a8();
            }
            lVar38 = DAT_14c9a3da0;
            iVar18 = (int)lVar22;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
            }
            *(undefined4 *)(lVar38 + lVar25) = 0xffffffff;
            iVar28 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar28 = DAT_14c9a3dd0;
            }
            *(int *)(lVar38 + 4 + lVar25) = iVar28;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar34 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar34 = DAT_14c9a3dc0;
            }
            iVar28 = iVar18 + 0x1f;
            if (-1 < iVar18) {
              iVar28 = iVar18;
            }
            bVar16 = (byte)lVar22 & 0x1f;
            DAT_14c9a3dd0 = iVar18;
            *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
                 *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
                 (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
            iStack_1d0 = 0;
            pfVar52 = local_378;
          }
          if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_1e8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*local_1e8)[2])();
            }
          }
        }
      }
      else {
        param_1[0x7c] = 0;
        *(undefined1 *)(param_1 + 0x7d) = 1;
      }
      lVar38 = FUN_140153468(param_1);
      if ((*(byte *)(lVar38 + 0x100) & 1) != 0) {
        lVar38 = FUN_140153468(param_1);
        local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
        iStack_1d0 = 0;
        FUN_1456bb102(&local_1f8,plVar32);
        FUN_1448729ea(lVar38 + 0xb98,&local_258,&local_1f8);
        if (local_238 == 3) {
          uVar29 = (uint)local_258;
          bVar16 = 3;
        }
        else {
          FUN_1400b56fe(&local_228,&local_258,3);
          uVar29 = 0;
          if ((byte)local_208 != 0) {
            uVar29 = (uint)local_228;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120))
          ;
          if (pcVar4 != (code *)0x0) {
            pppppppcVar24 = (code *******)&local_228;
            if (0x18 < (ushort)local_210) {
              pppppppcVar24 = local_228;
            }
            (*pcVar4)(pppppppcVar24);
          }
          bVar16 = local_238;
          if (0x18 < (ushort)local_210) {
            FUN_1400020a8(local_228);
            bVar16 = local_238;
          }
        }
        param_1[0x58] = uVar29;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppppcVar24 = (code *******)&local_258;
          if (0x18 < local_240) {
            pppppppcVar24 = local_258;
          }
          (*pcVar4)(pppppppcVar24);
        }
        if (0x18 < local_240) {
          FUN_1400020a8(local_258);
        }
        lVar38 = DAT_14c9a3da0;
        if ((longlong)iStack_1d0 != 0) {
          lVar22 = (longlong)iStack_1d0 + -1;
          lVar25 = lVar22 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
          if (*(longlong *)(lVar38 + lVar25) != 0) {
            FUN_1400020a8();
          }
          lVar38 = DAT_14c9a3da0;
          iVar18 = (int)lVar22;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar38 + lVar25) = 0xffffffff;
          iVar28 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar28 = DAT_14c9a3dd0;
          }
          *(int *)(lVar38 + 4 + lVar25) = iVar28;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar34 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar34 = DAT_14c9a3dc0;
          }
          iVar28 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar28 = iVar18;
          }
          bVar16 = (byte)lVar22 & 0x1f;
          DAT_14c9a3dd0 = iVar18;
          *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
               *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
               (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
          iStack_1d0 = 0;
        }
        if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_1e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*local_1e8)[2])();
          }
        }
        lVar38 = FUN_140153468(param_1);
        local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
        iStack_1d0 = 0;
        FUN_1456bb102(&local_1f8,plVar32);
        FUN_1448729ea(lVar38 + 0xbe8,&local_258,&local_1f8);
        if (local_238 == 3) {
          uVar29 = (uint)local_258;
          bVar16 = 3;
        }
        else {
          FUN_1400b56fe(&local_228,&local_258,3);
          uVar29 = 0;
          if ((byte)local_208 != 0) {
            uVar29 = (uint)local_228;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120))
          ;
          if (pcVar4 != (code *)0x0) {
            pppppppcVar24 = (code *******)&local_228;
            if (0x18 < (ushort)local_210) {
              pppppppcVar24 = local_228;
            }
            (*pcVar4)(pppppppcVar24);
          }
          bVar16 = local_238;
          if (0x18 < (ushort)local_210) {
            FUN_1400020a8(local_228);
            bVar16 = local_238;
          }
        }
        param_1[0x59] = uVar29;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar16 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppppcVar24 = (code *******)&local_258;
          if (0x18 < local_240) {
            pppppppcVar24 = local_258;
          }
          (*pcVar4)(pppppppcVar24);
        }
        if (0x18 < local_240) {
          FUN_1400020a8(local_258);
        }
        lVar38 = DAT_14c9a3da0;
        if ((longlong)iStack_1d0 != 0) {
          lVar22 = (longlong)iStack_1d0 + -1;
          lVar25 = lVar22 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
          if (*(longlong *)(lVar38 + lVar25) != 0) {
            FUN_1400020a8();
          }
          lVar38 = DAT_14c9a3da0;
          iVar18 = (int)lVar22;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar38 + lVar25) = 0xffffffff;
          iVar28 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar28 = DAT_14c9a3dd0;
          }
          *(int *)(lVar38 + 4 + lVar25) = iVar28;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar34 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar34 = DAT_14c9a3dc0;
          }
          iVar28 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar28 = iVar18;
          }
          bVar16 = (byte)lVar22 & 0x1f;
          DAT_14c9a3dd0 = iVar18;
          *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
               *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
               (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
          iStack_1d0 = 0;
        }
        if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_1e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*local_1e8)[2])();
          }
        }
        lVar38 = FUN_140153468(param_1);
        local_1f8 = (code *)((ulonglong)local_1f8 & 0xffffffffffffff00);
        iStack_1d0 = 0;
        FUN_1456bb102(&local_1f8,plVar32);
        FUN_1448729ea(lVar38 + 0xc38,&local_258,&local_1f8);
        if (local_238 == 3) {
          local_238 = 3;
          uVar29 = (uint)local_258;
        }
        else {
          FUN_1400b56fe(&local_228,&local_258,3);
          uVar29 = 0;
          if ((byte)local_208 != 0) {
            uVar29 = (uint)local_228;
          }
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_208 * 0x120))
          ;
          if (pcVar4 != (code *)0x0) {
            pppppppcVar24 = (code *******)&local_228;
            if (0x18 < (ushort)local_210) {
              pppppppcVar24 = local_228;
            }
            (*pcVar4)(pppppppcVar24);
          }
          if (0x18 < (ushort)local_210) {
            FUN_1400020a8(local_228);
          }
        }
        pfVar52 = local_378;
        param_1[0x5a] = uVar29;
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_238 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppppcVar24 = (code *******)&local_258;
          if (0x18 < local_240) {
            pppppppcVar24 = local_258;
          }
          (*pcVar4)(pppppppcVar24);
        }
        if (0x18 < local_240) {
          FUN_1400020a8(local_258);
        }
        lVar38 = DAT_14c9a3da0;
        if ((longlong)iStack_1d0 != 0) {
          lVar22 = (longlong)iStack_1d0 + -1;
          lVar25 = lVar22 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar25),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar25));
          if (*(longlong *)(lVar38 + lVar25) != 0) {
            FUN_1400020a8();
          }
          lVar38 = DAT_14c9a3da0;
          iVar18 = (int)lVar22;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar38 + lVar25) = 0xffffffff;
          iVar28 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar28 = DAT_14c9a3dd0;
          }
          *(int *)(lVar38 + 4 + lVar25) = iVar28;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar34 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar34 = DAT_14c9a3dc0;
          }
          iVar28 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar28 = iVar18;
          }
          bVar16 = (byte)lVar22 & 0x1f;
          DAT_14c9a3dd0 = iVar18;
          *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) =
               *(uint *)(puVar34 + (longlong)(iVar28 >> 5) * 4) &
               (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
          iStack_1d0 = 0;
          pfVar52 = local_378;
        }
        if (((char)local_1f8 == '\x03') && (local_1e8 != (code *******)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_1e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*local_1e8)[2])();
          }
        }
      }
      lVar38 = FUN_140153468(param_1);
      if ((*(byte *)(lVar38 + 0x100) & 0x80) != 0) {
        (**(code **)(*plVar32 + 0x868))(plVar32,0);
      }
      lVar38 = FUN_140153468(param_1);
      fVar40 = *(float *)(lVar38 + 0xb88);
      if (360.0 <= fVar40) {
        fVar40 = 360.0;
      }
      if (fVar40 <= 0.0) {
        fVar40 = 0.0;
      }
      fVar40 = cosf(fVar40 * 0.5 * 0.017453292);
      param_1[0x7e] = (uint)-fVar40;
      if (((char)plVar32[0x2f] == '\x03') &&
         (lVar38 = FUN_140153468(param_1), (*(byte *)(lVar38 + 0xa0) & 0x80) != 0)) {
        if (param_1[1] == 0) {
LAB_143cf06e9:
          lVar38 = 0;
        }
        else {
          uVar29 = *param_1;
          lVar38 = 0;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            plVar20 = (longlong *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if ((plVar20 == (longlong *)0x0) ||
               ((*(uint *)(plVar20 + 2) != param_1[1] ||
                ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_143cf06e9;
            lVar38 = *plVar20;
          }
        }
        lVar22 = FUN_140153468(param_1);
        local_1f8 = *(code **)(*(longlong *)(lVar22 + 0x10) + 0x18);
        FUN_1400bc96c(lVar38 + 0x1cb0);
      }
      cVar17 = (**(code **)(*plVar32 + 0x700))(plVar32);
      if (cVar17 != '\0') {
        lVar38 = FUN_140153468(param_1);
        if ((*(byte *)(lVar38 + 0xfa) & 0x10) != 0) {
          lVar38 = FUN_140153468(param_1);
          local_1f8 = *(code **)(*(longlong *)(lVar38 + 0x10) + 0x18);
          FUN_1459cbd7e(plVar32,&DAT_14cb76318,1);
        }
        lVar38 = FUN_140153468(param_1);
        if ((*(byte *)(lVar38 + 0xfa) & 0x20) != 0) {
          lVar38 = FUN_140153468(param_1);
          local_1f8 = *(code **)(*(longlong *)(lVar38 + 0x10) + 0x18);
          FUN_1459cbd7e(plVar32,&DAT_14cb76340,1);
        }
      }
      *(undefined8 *)(param_1 + 0x50) = param_5[2];
      uVar19 = param_5[1];
      *(undefined8 *)(param_1 + 0x4c) = *param_5;
      *(undefined8 *)(param_1 + 0x4e) = uVar19;
      lVar38 = FUN_140153468();
      if (((*(byte *)(lVar38 + 0xf9) & 0x20) == 0) && ((*pfVar52 != 0.0 || (NAN(*pfVar52))))) {
        dVar47 = *(double *)(param_1 + 0x4c);
        dVar46 = *(double *)(param_1 + 0x4e);
        dVar45 = 0.0;
        if ((dVar47 != 0.0) || (((NAN(dVar47) || (dVar46 != 0.0)) || (NAN(dVar46))))) {
          dVar45 = atan2(dVar46,dVar47);
          dVar45 = dVar45 * 57.29577951308232;
          dVar47 = *(double *)(param_1 + 0x4c);
          dVar46 = *(double *)(param_1 + 0x4e);
        }
        dVar49 = SQRT(dVar47 * dVar47 + dVar46 * dVar46);
        dVar47 = *(double *)(param_1 + 0x50);
        dVar46 = 0.0;
        if (((dVar47 != 0.0) || (NAN(dVar47))) || ((dVar49 != 0.0 || (NAN(dVar49))))) {
          dVar46 = atan2(dVar47,dVar49);
          dVar46 = dVar46 * 57.29577951308232;
        }
        lVar38 = FUN_140153468();
        dVar47 = (double)(float)param_1[0x23];
        if (*(char *)(lVar38 + 0xb00) == '\0') {
          dVar47 = dVar47 + dVar46;
        }
        dVar47 = (double)FUN_144719204(dVar47);
        dVar46 = (double)FUN_144719204(dVar45);
        dVar45 = sin(dVar47 * 0.017453292519943295);
        dVar47 = cos(dVar47 * 0.017453292519943295);
        dVar49 = sin(dVar46 * 0.017453292519943295);
        dVar46 = cos(dVar46 * 0.017453292519943295);
        *(double *)(param_1 + 0x4c) = dVar46 * dVar47;
        *(double *)(param_1 + 0x4e) = dVar49 * dVar47;
        *(double *)(param_1 + 0x50) = dVar45;
      }
      puVar23 = param_1 + 0x4c;
      if (param_1[1] == 0) {
LAB_143cef7d6:
        plVar20 = (longlong *)0x0;
      }
      else {
        uVar29 = *param_1;
        plVar20 = (longlong *)0x0;
        if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
          puVar30 = (undefined8 *)
                    ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
          if ((puVar30 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar30 + 2) != param_1[1] || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0))
             )) goto LAB_143cef7d6;
          plVar20 = (longlong *)*puVar30;
        }
      }
      (**(code **)(*plVar20 + 0xe60))(plVar20,puVar23);
      *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)puVar23;
      *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x4e);
      iVar18 = DAT_14c9647dc;
      lVar38 = DAT_14c9647c8;
      if (((((param_4[4] == 0.0) || (fVar40 = param_4[3], (int)fVar40 < 0)) ||
           (DAT_14c9647dc <= (int)fVar40)) ||
          ((plVar20 = (longlong *)
                      ((ulonglong)(((uint)fVar40 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar40 >> 0x10) * 8)),
           plVar20 == (longlong *)0x0 || (*(float *)(plVar20 + 2) != param_4[4])))) ||
         ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) {
LAB_143cef7a9:
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
LAB_143cedb62:
        if ((*(double *)(param_4 + 6) != 0.0) ||
           ((((NAN(*(double *)(param_4 + 6)) || (*(double *)(param_4 + 8) != 0.0)) ||
             (NAN(*(double *)(param_4 + 8)))) ||
            ((*(double *)(param_4 + 10) != 0.0 || (NAN(*(double *)(param_4 + 10))))))))
        goto LAB_143cee2dc;
        *(code ********)(param_1 + 0x42) = DAT_14c8464f0;
        dVar47 = DAT_14c8464e8;
        *(code *******)(param_1 + 0x3e) = DAT_14c8464e0;
        *(double *)(param_1 + 0x40) = dVar47;
      }
      else {
        if (*plVar20 == 0) goto LAB_143cef7a9;
        uVar29 = *(uint *)(*plVar20 + 0xc);
        param_1[0x3a] = uVar29;
        if ((int)uVar29 < iVar18) {
          lVar38 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                   *(longlong *)(lVar38 + (ulonglong)(uVar29 >> 0x10) * 8);
        }
        else {
          lVar38 = 0;
        }
        uVar29 = *(uint *)(lVar38 + 0x10);
        if (uVar29 == 0) {
          LOCK();
          iVar18 = DAT_14c964868 + 1;
          UNLOCK();
          uVar35 = DAT_14c964868 + 1;
          bVar39 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar18;
          if (bVar39) {
            local_370 = (double)CONCAT44(local_370._4_4_,uVar35);
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar35);
            uVar35 = local_370._0_4_;
          }
          LOCK();
          uVar29 = *(uint *)(lVar38 + 0x10);
          bVar39 = uVar29 == 0;
          if (bVar39) {
            *(uint *)(lVar38 + 0x10) = uVar35;
            uVar29 = 0;
          }
          UNLOCK();
          if (bVar39) {
            uVar29 = uVar35;
          }
          param_1[0x3b] = uVar29;
          if (uVar29 != 0) goto LAB_143cedb25;
          goto LAB_143cedb62;
        }
        param_1[0x3b] = uVar29;
LAB_143cedb25:
        uVar35 = param_1[0x3a];
        if ((((int)uVar35 < 0) || (DAT_14c9647dc <= (int)uVar35)) ||
           ((lVar38 = (ulonglong)((uVar35 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8), lVar38 == 0 ||
            ((*(uint *)(lVar38 + 0x10) != uVar29 || ((*(uint *)(lVar38 + 8) & 0x10200000) != 0))))))
        goto LAB_143cedb62;
LAB_143cee2dc:
        if (param_1[0x3d] == 0) {
LAB_143cf0958:
          local_258 = (code *******)0x0;
        }
        else {
          uVar29 = param_1[0x3c];
          local_258 = (code *******)0x0;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            puVar30 = (undefined8 *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if ((puVar30 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar30 + 2) != param_1[0x3d] ||
                ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf0958;
            local_258 = (code *******)*puVar30;
          }
        }
        uVar19 = FUN_140153468(param_1);
        local_3b8 = param_1 + 0x4a;
        local_218 = *(double *)(param_4 + 10);
        local_228 = *(code ********)(param_4 + 6);
        ppppppcStack_220 = *(code *******)(param_4 + 8);
        if (param_1[0x3b] == 0) {
LAB_143cf095f:
          uVar37 = 0;
        }
        else {
          uVar29 = param_1[0x3a];
          uVar37 = 0;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            puVar30 = (undefined8 *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if ((puVar30 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar30 + 2) != param_1[0x3b] ||
                ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf095f;
            uVar37 = *puVar30;
          }
        }
        local_3b0 = (code *******)&local_258;
        local_3c0 = (code *******)&local_228;
        local_3c8 = puVar23;
        FUN_148814c08(uVar19,&local_1f8,plVar32,uVar37);
        *(code ********)(param_1 + 0x42) = local_1e8;
        *(code **)(param_1 + 0x3e) = local_1f8;
        *(double *)(param_1 + 0x40) = dStack_1f0;
        if (local_258 != (code *******)0x0) {
          uVar29 = *(uint *)((longlong)local_258 + 0xc);
          param_1[0x3c] = uVar29;
          if ((int)uVar29 < DAT_14c9647dc) {
            lVar38 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
          }
          else {
            lVar38 = 0;
          }
          uVar29 = *(uint *)(lVar38 + 0x10);
          if (*(uint *)(lVar38 + 0x10) == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            uVar35 = DAT_14c964868 + 1;
            bVar39 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar39) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar35);
            }
            LOCK();
            uVar29 = *(uint *)(lVar38 + 0x10);
            bVar39 = uVar29 == 0;
            if (bVar39) {
              *(uint *)(lVar38 + 0x10) = uVar35;
              uVar29 = 0;
            }
            UNLOCK();
            if (bVar39) {
              uVar29 = uVar35;
            }
          }
          param_1[0x3d] = uVar29;
        }
      }
      lVar38 = FUN_140153468(param_1);
      if ((*(byte *)(lVar38 + 0xf9) & 0x20) == 0) {
        *(byte *)((longlong)param_1 + 0x299) = *(byte *)((longlong)param_1 + 0x299) & 0xfb;
        lVar38 = FUN_140153468(param_1);
        if ((*(byte *)(lVar38 + 0xf8) & 0x40) == 0) {
          lVar38 = FUN_140153468(param_1);
          if (((*(byte *)(lVar38 + 0x98) & 2) != 0) &&
             (lVar38 = FUN_140153468(param_1), (*(byte *)(lVar38 + 0xf9) & 0x20) == 0)) {
            dVar47 = *(double *)(param_1 + 0x52);
            if ((dVar47 != 0.0) ||
               ((((NAN(dVar47) || (*(double *)(param_1 + 0x54) != 0.0)) ||
                 (NAN(*(double *)(param_1 + 0x54)))) ||
                ((*(double *)(param_1 + 0x56) != 0.0 || (NAN(*(double *)(param_1 + 0x56)))))))) {
              *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 0x10;
              if (param_1[1] == 0) {
LAB_143cf0994:
                lVar38 = 0;
              }
              else {
                uVar29 = *param_1;
                lVar38 = 0;
                if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
                  plVar20 = (longlong *)
                            ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                  if ((plVar20 == (longlong *)0x0) ||
                     ((*(uint *)(plVar20 + 2) != param_1[1] ||
                      ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_143cf0994;
                  lVar38 = *plVar20;
                }
              }
              param_1[0x15] =
                   (uint)(float)(*(double *)(lVar38 + 0x138) * *(double *)(param_1 + 0x56) +
                                dVar47 * *(double *)(lVar38 + 0x128) +
                                *(double *)(lVar38 + 0x130) * *(double *)(param_1 + 0x54));
            }
          }
        }
        else {
          lVar38 = FUN_140153468(param_1);
          if (*(char *)(lVar38 + 0x6f9) == '\x02') {
            if (param_1[1] == 0) {
LAB_143cf07d2:
              lVar38 = 0;
            }
            else {
              uVar29 = *param_1;
              lVar38 = 0;
              if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
                plVar20 = (longlong *)
                          ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                if ((plVar20 == (longlong *)0x0) ||
                   ((*(uint *)(plVar20 + 2) != param_1[1] ||
                    ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_143cf07d2;
                lVar38 = *plVar20;
              }
            }
            param_1[0x15] =
                 (uint)(float)(*(double *)(lVar38 + 0x138) * *(double *)(param_1 + 0x56) +
                              *(double *)(lVar38 + 0x128) * *(double *)(param_1 + 0x52) +
                              *(double *)(lVar38 + 0x130) * *(double *)(param_1 + 0x54));
            fVar41 = (float)param_1[0x19];
            fVar3 = (float)param_1[0x1a];
            lVar38 = FUN_140153468(param_1);
            fVar40 = (float)param_1[0x15];
            if ((*(byte *)(lVar38 + 0x98) & 2) == 0) {
              if (fVar41 <= fVar40) {
                fVar40 = fVar41;
              }
              if (fVar40 <= fVar3) {
                fVar40 = fVar3;
              }
LAB_143cee507:
              param_1[0x15] = (uint)fVar40;
            }
          }
          else {
            lVar38 = FUN_140153468(param_1);
            if ((*(byte *)(lVar38 + 0x98) & 2) != 0) {
              *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 0x10;
              if (param_1[1] == 0) {
LAB_143cf097d:
                lVar38 = 0;
              }
              else {
                uVar29 = *param_1;
                lVar38 = 0;
                if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
                  plVar20 = (longlong *)
                            ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                  if ((plVar20 == (longlong *)0x0) ||
                     ((*(uint *)(plVar20 + 2) != param_1[1] ||
                      ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_143cf097d;
                  lVar38 = *plVar20;
                }
              }
              fVar40 = (float)(*(double *)(lVar38 + 0x138) * *(double *)(param_1 + 0x56) +
                              *(double *)(lVar38 + 0x128) * *(double *)(param_1 + 0x52) +
                              *(double *)(lVar38 + 0x130) * *(double *)(param_1 + 0x54));
              goto LAB_143cee507;
            }
            fVar40 = (float)param_1[0x15];
          }
          dVar47 = (double)fVar40;
          *(double *)(param_1 + 0x6e) = dVar47 * *(double *)(param_1 + 0x52);
          *(double *)(param_1 + 0x70) = *(double *)(param_1 + 0x54) * dVar47;
          *(double *)(param_1 + 0x72) = *(double *)(param_1 + 0x56) * dVar47;
          lVar38 = FUN_140153468(param_1);
          if (*(char *)(lVar38 + 0x6fa) == '\x02') {
            pppppppcVar24 =
                 (code *******)
                 (DAT_14c8462c0 * *(double *)(param_1 + 0x54) -
                 *(double *)(param_1 + 0x52) * DAT_14c8462c8);
            dVar47 = *(double *)(param_1 + 0x52) * DAT_14c8462d0 -
                     DAT_14c8462c0 * *(double *)(param_1 + 0x56);
            ppppppcVar50 = (code ******)
                           (DAT_14c8462c8 * *(double *)(param_1 + 0x56) -
                           *(double *)(param_1 + 0x54) * DAT_14c8462d0);
            dVar46 = (double)pppppppcVar24 * (double)pppppppcVar24 +
                     (double)ppppppcVar50 * (double)ppppppcVar50 + dVar47 * dVar47;
            if (((dVar46 != 1.0) ||
                (pppppppcVar5 = pppppppcVar24, dVar45 = dVar47, ppppppcVar13 = ppppppcVar50,
                NAN(dVar46))) &&
               (pppppppcVar5 = DAT_14c8464f0, dVar45 = DAT_14c8464e8, ppppppcVar13 = DAT_14c8464e0,
               9.99999993922529e-09 <= dVar46)) {
              dVar46 = 1.0 / SQRT(dVar46);
              pppppppcVar5 = (code *******)((double)pppppppcVar24 * dVar46);
              dVar45 = dVar47 * dVar46;
              ppppppcVar13 = (code ******)((double)ppppppcVar50 * dVar46);
            }
            if (param_1[1] == 0) {
LAB_143cf07d9:
              lVar38 = 0;
            }
            else {
              uVar29 = *param_1;
              lVar38 = 0;
              if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
                plVar20 = (longlong *)
                          ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                if ((plVar20 == (longlong *)0x0) ||
                   ((*(uint *)(plVar20 + 2) != param_1[1] ||
                    ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_143cf07d9;
                lVar38 = *plVar20;
              }
            }
            param_1[0x16] =
                 (uint)(float)(*(double *)(lVar38 + 0x138) * (double)pppppppcVar5 +
                              *(double *)(lVar38 + 0x128) * (double)ppppppcVar13 +
                              *(double *)(lVar38 + 0x130) * dVar45);
            fVar40 = (float)param_1[0x18];
            lVar38 = FUN_140153468(param_1);
            fVar41 = (float)param_1[0x16];
            if ((*(byte *)(lVar38 + 0x98) & 2) == 0) {
              if (fVar40 <= fVar41) {
                fVar41 = fVar40;
              }
              if (fVar41 <= -fVar40) {
                fVar41 = -fVar40;
              }
              param_1[0x16] = (uint)fVar41;
            }
            dVar47 = (double)fVar41;
            *(double *)(param_1 + 0x6e) =
                 (double)ppppppcVar13 * dVar47 + *(double *)(param_1 + 0x6e);
            *(double *)(param_1 + 0x70) = dVar45 * dVar47 + *(double *)(param_1 + 0x70);
            *(double *)(param_1 + 0x72) =
                 (double)pppppppcVar5 * dVar47 + *(double *)(param_1 + 0x72);
          }
        }
        lVar38 = FUN_140153468(param_1);
        if ((*(byte *)(lVar38 + 0xf8) & 0x40) == 0) {
          dVar47 = (double)(float)param_1[0x15];
          *(double *)(param_1 + 0x62) = dVar47 * *(double *)(param_1 + 0x52);
          *(double *)(param_1 + 100) = *(double *)(param_1 + 0x54) * dVar47;
          *(double *)(param_1 + 0x66) = *(double *)(param_1 + 0x56) * dVar47;
          lVar38 = FUN_140153468();
          if ((*(byte *)(lVar38 + 0xa0) & 0x20) != 0) {
            puVar23 = param_1 + 0x62;
            goto LAB_143cef98e;
          }
        }
        else {
          puVar23 = param_1 + 0x6e;
          *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_1 + 0x72);
          *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x6e);
          *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x70);
LAB_143cef98e:
          if (param_1[1] == 0) {
LAB_143cf06a9:
            lVar38 = 0;
          }
          else {
            uVar29 = *param_1;
            lVar38 = 0;
            if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
              plVar20 = (longlong *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if ((plVar20 == (longlong *)0x0) ||
                 ((*(uint *)(plVar20 + 2) != param_1[1] ||
                  ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_143cf06a9;
              lVar38 = *plVar20;
            }
          }
          *(undefined8 *)(lVar38 + 0x138) = *(undefined8 *)(puVar23 + 4);
          uVar19 = *(undefined8 *)(puVar23 + 2);
          *(undefined8 *)(lVar38 + 0x128) = *(undefined8 *)puVar23;
          *(undefined8 *)(lVar38 + 0x130) = uVar19;
        }
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x66);
        *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x62);
        *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_1 + 100);
      }
      else {
        if ((*(byte *)(plVar32 + 0xaa) & 2) != 0) {
          lVar38 = plVar32[0x87];
          auVar53 = *(undefined1 (*) [16])(lVar38 + 0x280) & _DAT_149931180;
          auVar48 = _DAT_149931180 & *(undefined1 (*) [16])(lVar38 + 0x290);
          auVar6._16_16_ = auVar48;
          auVar6._0_16_ = auVar53;
          auVar54._0_8_ = auVar48._0_8_;
          auVar54._8_8_ = auVar53._0_8_;
          auVar48 = minpd(auVar53,auVar6._8_16_);
          auVar48 = minpd(auVar48,auVar54);
          fVar40 = *(float *)(lVar38 + 0x640);
          plVar20 = (longlong *)plVar32[2];
          lVar38 = plVar20[0x22];
          if (lVar38 == 0) {
            (**(code **)(*plVar20 + 1000))(plVar20);
            lVar38 = plVar20[0x22];
          }
          *(double *)(param_1 + 0x60) =
               (double)((float)auVar48._0_8_ *
                       (*(float *)(*(longlong *)(lVar38 + 0x438) + 0x640) - fVar40)) +
               *(double *)(param_1 + 0x60);
        }
        *(byte *)((longlong)param_1 + 0x299) = *(byte *)((longlong)param_1 + 0x299) | 4;
        dVar47 = DAT_14c8464e8;
        *(code *******)(param_1 + 0x74) = DAT_14c8464e0;
        *(double *)(param_1 + 0x76) = dVar47;
        *(code ********)(param_1 + 0x78) = DAT_14c8464f0;
        lVar38 = FUN_1447210f0(plVar32);
        if (lVar38 == 0) {
          uVar29 = 0xc61c4000;
        }
        else {
          lVar38 = FUN_1447210f0(plVar32);
          uVar29 = 0;
          if ((*(longlong *)(lVar38 + 0x30) != 0) &&
             (plVar20 = *(longlong **)(*(longlong *)(lVar38 + 0x30) + 0x2b0),
             plVar20 != (longlong *)0x0)) {
            if (*(code **)(*plVar20 + 0x660) == FUN_1449fb17e) {
              if ((*(byte *)((longlong)plVar20 + 0x39e) & 1) == 0) {
                if ((*(byte *)((longlong)plVar20 + 0x39e) & 2) == 0) {
                  if (DAT_14caf84d0 == (longlong *)0x0) {
                    local_1f8 = FUN_1449e2820;
                    local_380 = FUN_14081d0ea;
                    local_388 = &LAB_145a62952;
                    local_398 = &LAB_147c8cd45;
                    local_3a0 = &LAB_1461468ae;
                    local_3a8 = L"Engine";
                    local_3b0 = (code *******)0x0;
                    local_3b8 = (uint *)CONCAT44(local_3b8._4_4_,0x10000006);
                    local_3c0 = (code *******)CONCAT44(local_3c0._4_4_,8);
                    local_3c8 = (uint *)CONCAT44(local_3c8._4_4_,0x218);
                    local_390 = (code *******)&local_1f8;
                    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4)
                    ;
                  }
                  plVar21 = DAT_14caf84d0;
                  lVar38 = DAT_14caf84d0[0x22];
                  if (lVar38 == 0) {
                    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
                    lVar38 = plVar21[0x22];
                  }
                  puVar23 = (uint *)(lVar38 + 0x38);
                }
                else {
                  puVar23 = (uint *)((longlong)plVar20 + 0x41c);
                }
                uVar29 = *puVar23;
                *(uint *)(plVar20 + 0x83) = uVar29;
              }
              else {
                uVar29 = *(uint *)(plVar20 + 0x83);
              }
            }
            else {
              uVar29 = (**(code **)(*plVar20 + 0x660))(plVar20);
            }
          }
        }
        param_1[0x24] = uVar29;
        fVar40 = (float)param_1[0x23];
        if ((fVar40 == 0.0) && (!NAN(fVar40))) {
          dVar47 = *(double *)(param_1 + 0x52);
          dVar46 = *(double *)(param_1 + 0x54);
          if ((dVar47 != 0.0) || (((NAN(dVar47) || (dVar46 != 0.0)) || (NAN(dVar46))))) {
            atan2(dVar46,dVar47);
            dVar47 = *(double *)(param_1 + 0x52);
            dVar46 = *(double *)(param_1 + 0x54);
          }
          pfVar52 = local_378;
          dVar45 = SQRT(dVar47 * dVar47 + dVar46 * dVar46);
          dVar47 = *(double *)(param_1 + 0x56);
          dVar46 = 0.0;
          if (((dVar47 != 0.0) || (NAN(dVar47))) || ((dVar45 != 0.0 || (NAN(dVar45))))) {
            dVar46 = atan2(dVar47,dVar45);
            dVar46 = dVar46 * 57.29577951308232;
          }
          dVar47 = (double)FUN_144719204(dVar46);
          dVar47 = (double)(~-(ulonglong)(dVar47 < 0.0) & (ulonglong)dVar47 |
                           (ulonglong)(dVar47 + 360.0) & -(ulonglong)(dVar47 < 0.0));
          fVar40 = (float)(double)(~-(ulonglong)(180.0 < dVar47) & (ulonglong)dVar47 |
                                  (ulonglong)(dVar47 + -360.0) & -(ulonglong)(180.0 < dVar47));
          *pfVar52 = fVar40;
        }
        if (((*(double *)(param_1 + 0x3e) == 0.0) && (!NAN(*(double *)(param_1 + 0x3e)))) &&
           ((*(double *)(param_1 + 0x40) == 0.0 &&
            (((!NAN(*(double *)(param_1 + 0x40)) && (*(double *)(param_1 + 0x42) == 0.0)) &&
             (!NAN(*(double *)(param_1 + 0x42)))))))) {
          ppppppcVar50 = *(code *******)(param_1 + 0x52);
          dVar47 = *(double *)(param_1 + 0x54);
          dVar46 = (double)ppppppcVar50 * (double)ppppppcVar50 + dVar47 * dVar47;
          if ((dVar46 != 1.0) || (NAN(dVar46))) {
            if (9.99999993922529e-09 <= dVar46) {
              dVar47 = dVar47 * (1.0 / SQRT(dVar46));
              ppppppcVar50 = (code ******)((double)ppppppcVar50 * (1.0 / SQRT(dVar46)));
              uVar55 = 0;
              uVar56 = 0;
            }
            else {
              uVar55 = SUB84(DAT_14c8464f0,0);
              uVar56 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              dVar47 = DAT_14c8464e8;
              ppppppcVar50 = DAT_14c8464e0;
            }
          }
          else {
            uVar33 = -(ulonglong)(*(double *)(param_1 + 0x56) == 0.0) &
                     (ulonglong)*(double *)(param_1 + 0x56);
            uVar55 = (undefined4)uVar33;
            uVar56 = (undefined4)(uVar33 >> 0x20);
          }
          dVar46 = (double)(float)param_1[0x15];
          dVar45 = (double)(float)param_1[0x21];
          *(double *)(param_1 + 0x3e) =
               (double)ppppppcVar50 * dVar46 * dVar45 + *(double *)(param_1 + 0x5c);
          *(double *)(param_1 + 0x40) = dVar47 * dVar46 * dVar45 + *(double *)(param_1 + 0x5e);
          *(double *)(param_1 + 0x42) =
               (double)CONCAT44(uVar56,uVar55) * dVar46 * dVar45 + *(double *)(param_1 + 0x60);
        }
        local_228 = (code *******)0x44fa0000;
        local_208 = 0xbf80000043800000;
        ppppppcStack_220 = DAT_14c8464e0;
        local_218 = DAT_14c8464e8;
        local_210 = DAT_14c8464f0;
        fVar40 = fVar40 / 90.0;
        if (1.0 <= fVar40) {
          fVar40 = 1.0;
        }
        if (fVar40 <= 0.0) {
          fVar40 = 0.0;
        }
        local_3c0 = (code *******)CONCAT44(local_3c0._4_4_,fVar40);
        local_3c8 = (uint *)CONCAT44(local_3c8._4_4_,param_1[0x15]);
        local_378 = param_4;
        FUN_14080f864(&local_228,param_1 + 0x5c,param_1 + 0x3e,param_1[0x24]);
        FUN_1409cd2ec(&local_228,&local_1f8,param_1 + 0x5c,param_1 + 0x3e);
        *(undefined8 *)(param_1 + 0x38) = local_1c8;
        *(double *)(param_1 + 0x34) = local_1d8;
        *(ulonglong *)(param_1 + 0x36) = CONCAT44(uStack_1cc,iStack_1d0);
        *(code ********)(param_1 + 0x30) = local_1e8;
        *(code *******)(param_1 + 0x32) = ppppppcStack_1e0;
        *(code **)(param_1 + 0x2c) = local_1f8;
        *(double *)(param_1 + 0x2e) = dStack_1f0;
        param_1[0x21] = param_1[0x39];
        *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x32);
        *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_1 + 0x34);
        *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_1 + 0x36);
        param_4 = local_378;
      }
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x42);
      *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x3e);
      *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_1 + 0x40);
      lVar38 = FUN_140153468();
      cVar17 = *(char *)(lVar38 + 0x168);
      if (cVar17 == '\x02') {
        if (param_1[1] == 0) {
LAB_143cf06f1:
          uVar19 = 0;
        }
        else {
          uVar29 = *param_1;
          uVar19 = 0;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            puVar30 = (undefined8 *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if ((puVar30 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar30 + 2) != param_1[1] ||
                ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf06f1;
            uVar19 = *puVar30;
          }
        }
        uVar37 = 3;
LAB_143cefd5c:
        FUN_140257a06(uVar19,&DAT_14cb76310,uVar37);
      }
      else {
        if (cVar17 == '\x01') {
          if (param_1[1] == 0) {
LAB_143cf06db:
            uVar19 = 0;
          }
          else {
            uVar29 = *param_1;
            uVar19 = 0;
            if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
              puVar30 = (undefined8 *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if ((puVar30 == (undefined8 *)0x0) ||
                 ((*(uint *)(puVar30 + 2) != param_1[1] ||
                  ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf06db;
              uVar19 = *puVar30;
            }
          }
          uVar37 = 5;
          goto LAB_143cefd5c;
        }
        if (cVar17 != '\0') goto LAB_143cefd61;
        if (param_1[1] == 0) {
LAB_143cf06f8:
          plVar20 = (longlong *)0x0;
        }
        else {
          uVar29 = *param_1;
          plVar20 = (longlong *)0x0;
          if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
            puVar30 = (undefined8 *)
                      ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
            if ((puVar30 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar30 + 2) != param_1[1] ||
                ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf06f8;
            plVar20 = (longlong *)*puVar30;
          }
        }
        cVar17 = (**(code **)(*plVar20 + 0xbd0))();
        if (cVar17 == '\x02') {
          *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 0x20;
          if (param_1[1] == 0) {
LAB_143cf07e0:
            uVar19 = 0;
          }
          else {
            uVar29 = *param_1;
            uVar19 = 0;
            if ((-1 < (int)uVar29) && ((int)uVar29 < DAT_14c9647dc)) {
              puVar30 = (undefined8 *)
                        ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
              if ((puVar30 == (undefined8 *)0x0) ||
                 ((*(uint *)(puVar30 + 2) != param_1[1] ||
                  ((*(uint *)(puVar30 + 1) & 0x10200000) != 0)))) goto LAB_143cf07e0;
              uVar19 = *puVar30;
            }
          }
          uVar37 = 1;
          goto LAB_143cefd5c;
        }
        uVar29 = param_1[1];
        if (((uVar29 == 0) || (uVar35 = *param_1, (int)uVar35 < 0)) ||
           (DAT_14c9647dc <= (int)uVar35)) {
          if (DAT_00001100 != '\x03') {
LAB_143cf0951:
            uVar19 = 0;
            goto LAB_143ceffc3;
          }
        }
        else {
          plVar20 = (longlong *)
                    ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8));
          if (((plVar20 == (longlong *)0x0) || (*(uint *)(plVar20 + 2) != uVar29)) ||
             ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) {
            lVar38 = 0;
          }
          else {
            lVar38 = *plVar20;
          }
          if ((&DAT_00001100)[lVar38] != '\x03') {
            if (((DAT_14c9647dc <= (int)uVar35) ||
                (puVar30 = (undefined8 *)
                           ((ulonglong)((uVar35 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar35 >> 0x10) * 8)),
                puVar30 == (undefined8 *)0x0)) ||
               ((*(uint *)(puVar30 + 2) != uVar29 || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0))))
            goto LAB_143cf0951;
            uVar19 = *puVar30;
LAB_143ceffc3:
            FUN_1409df526(uVar19,&DAT_14cb76310);
          }
        }
      }
LAB_143cefd61:
      lVar38 = FUN_140153468(param_1);
      if (lVar38 == param_3) {
        lVar38 = FUN_140153468(param_1);
        if ((lVar38 != 0) &&
           ((lVar38 = FUN_140153468(param_1), (*(byte *)(lVar38 + 0xa0) & 4) != 0 ||
            (lVar38 = FUN_140153468(param_1), (*(byte *)(lVar38 + 0xa0) & 8) != 0)))) {
          FUN_143cf35cc(param_1,param_1 + 0x52,1);
        }
        lVar38 = FUN_140153468(param_1);
        if (lVar38 == param_3) {
          if ((char)plVar32[0x2f] != '\x03') goto LAB_143cefdca;
          goto LAB_143cefddf;
        }
      }
    }
    *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] & 0xfe;
    uVar33 = CONCAT71(uVar36,1);
  }
LAB_143cec09c:
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar33 & 0xffffffff;
  while( true ) {
    LOCK();
    iVar28 = (int)plVar32[1];
    bVar39 = iVar18 == iVar28;
    if (bVar39) {
      *(int *)(plVar32 + 1) = iVar18 + 1;
      iVar28 = iVar18;
    }
    iVar18 = iVar28;
    UNLOCK();
    if (bVar39) break;
LAB_143cf1e5e:
    if (iVar18 == 0) {
      (**(code **)(_DAT_00000000 + 0xf0))(0);
      goto LAB_143cec09c;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 2) + 0xf0))();
  LOCK();
  plVar20 = plVar32 + 1;
  *(int *)plVar20 = (int)*plVar20 + -1;
  UNLOCK();
  if ((int)*plVar20 == 0) {
    (**(code **)*plVar32)(plVar32);
    LOCK();
    piVar2 = (int *)((longlong)plVar32 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar32 + 0x10))(plVar32);
    }
  }
  goto LAB_143cec09c;
}



// FUNCTION 143cf24da FUN_143cf24da body=4254 status=ok
// SIG undefined FUN_143cf24da(void)

void FUN_143cf24da(uint *param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined *puVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  char cVar19;
  ulonglong unaff_RBP;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = FUN_140153468();
  if (lVar10 != 0) {
    if (param_1[1] == 0) {
LAB_143cf2fa4:
      lVar13 = 0;
    }
    else {
      uVar20 = *param_1;
      lVar13 = 0;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
        plVar21 = (longlong *)
                  ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
        if ((plVar21 == (longlong *)0x0) ||
           ((*(uint *)(plVar21 + 2) != param_1[1] || ((*(uint *)(plVar21 + 1) & 0x10200000) != 0))))
        goto LAB_143cf2fa4;
        lVar13 = *plVar21;
      }
    }
    local_90 = *(undefined8 *)(lVar10 + 0x18);
    FUN_1400bc8c2(lVar13 + 0x1ac8);
    FUN_1409e8446(lVar13);
  }
  uVar20 = param_1[1];
  if (uVar20 == 0) {
LAB_143cf2f88:
    lVar10 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar21 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar21 == (longlong *)0x0) ||
         ((*(uint *)(plVar21 + 2) != uVar20 || ((*(uint *)(plVar21 + 1) & 0x10200000) != 0))))
      goto LAB_143cf2f88;
      lVar10 = *plVar21;
    }
  }
  plVar21 = *(longlong **)(&DAT_00001ce8 + lVar10);
  local_90 = CONCAT71(CONCAT61(local_90._2_6_,(char)param_1[0x8e]),(param_2 & 2) >> 1);
  if (param_1[0x8d] == 0) {
LAB_143cf2f8f:
    local_88 = 0;
  }
  else {
    uVar2 = param_1[0x8c];
    local_88 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar18 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar18 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar18 + 2) != param_1[0x8d] || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))
         ) goto LAB_143cf2f8f;
      local_88 = *puVar18;
    }
  }
  if (param_1[0x3b] == 0) {
LAB_143cf2f96:
    local_80 = 0;
  }
  else {
    uVar2 = param_1[0x3a];
    local_80 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar18 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar18 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar18 + 2) != param_1[0x3b] || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))
         ) goto LAB_143cf2f96;
      local_80 = *puVar18;
    }
  }
  local_50 = *(undefined8 *)(param_1 + 0x60);
  local_60 = *(undefined8 *)(param_1 + 0x5c);
  uStack_58 = *(undefined8 *)(param_1 + 0x5e);
  if (uVar20 == 0) {
LAB_143cf2f9d:
    lVar10 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar10 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar14 == (longlong *)0x0) ||
         ((*(uint *)(plVar14 + 2) != uVar20 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
      goto LAB_143cf2f9d;
      lVar10 = *plVar14;
    }
  }
  local_68 = *(undefined8 *)(lVar10 + 0x138);
  local_78 = *(undefined4 *)(lVar10 + 0x128);
  uStack_74 = *(undefined4 *)(lVar10 + 300);
  uStack_70 = *(undefined4 *)(lVar10 + 0x130);
  uStack_6c = *(undefined4 *)(lVar10 + 0x134);
  lVar10 = FUN_140153468(param_1);
  if ((lVar10 == 0) || (((byte)param_1[0xa6] & 2) != 0)) goto LAB_143cf3425;
  *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 2;
  lVar10 = FUN_140153468(param_1);
  if (((*(byte *)(lVar10 + 0xfa) & 4) != 0) &&
     (plVar21 != (longlong *)0x0 && (char)plVar21[0x2f] == '\x03')) {
    FUN_14069ce7c();
    plVar14 = (longlong *)(**(code **)(*plVar21 + 0x288))(plVar21);
    if (plVar14 != (longlong *)0x0) {
      uVar11 = FUN_14069ce7c();
      plVar12 = (longlong *)FUN_144718840(plVar14,uVar11);
      if (plVar12 != (longlong *)0x0 && plVar14 != plVar12) {
        lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_1400bc8c2(lVar10 + 0x18,&DAT_14cb76308);
        FUN_1400bc8c2(lVar10 + 0x40);
      }
    }
  }
  lVar10 = FUN_140153468(param_1);
  if (*(char *)(lVar10 + 0x110) == '\x01') {
    if (param_1[1] == 0) {
LAB_143cf3120:
      lVar10 = 0;
    }
    else {
      uVar20 = *param_1;
      lVar10 = 0;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           ((*(uint *)(plVar14 + 2) != param_1[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
        goto LAB_143cf3120;
        lVar10 = *plVar14;
      }
    }
    lVar13 = FUN_140153468(param_1);
    local_a8 = *(undefined8 *)(lVar13 + 0x18);
    FUN_1400bc8c2(lVar10 + 0x41b0);
    *(byte *)(lVar10 + 0x5b5) =
         *(byte *)(lVar10 + 0x5b5) & 0xfd | *(char *)(lVar10 + 0x41b0) * '\x02';
  }
  FUN_143cf5122(param_1);
  if (*(byte *)(plVar21 + 0x2f) < 2) {
LAB_143cf31b0:
    lVar10 = FUN_140153468(param_1);
    if (((*(byte *)(lVar10 + 0x101) & 0x40) != 0) && (plVar21 != (longlong *)0x0)) {
      uVar11 = FUN_1407ca880();
      plVar14 = (longlong *)(**(code **)(*plVar21 + 0x288))(plVar21,uVar11);
      if (plVar14 != (longlong *)0x0) {
        uVar11 = FUN_1407ca880();
        plVar12 = (longlong *)FUN_144718840(plVar14,uVar11);
        if (plVar12 != (longlong *)0x0 && plVar14 != plVar12) {
          lVar10 = FUN_140153468(param_1);
          if ((param_2 & 2) == 0) {
            if (*(longlong *)(lVar10 + 0xb70) != 0) {
              lVar10 = FUN_140153468(param_1);
              (**(code **)(*plVar12 + 0x38))(plVar12,*(undefined8 *)(lVar10 + 0xb70));
            }
          }
          else if (*(longlong *)(lVar10 + 0xb68) != 0) {
            lVar10 = (**(code **)(*plVar12 + 0x50))(plVar12);
            lVar13 = FUN_140153468(param_1);
            if ((longlong)*(int *)(lVar10 + 0x48) != 0) {
              lVar22 = 0;
              do {
                lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + lVar22);
                if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) == *(longlong *)(lVar13 + 0xb68)))
                {
                  lVar10 = FUN_140153468(param_1);
                  (**(code **)(*plVar12 + 0x28))(plVar12,*(undefined8 *)(lVar10 + 0xb68));
                  break;
                }
                lVar22 = lVar22 + 0x10;
              } while ((longlong)*(int *)(lVar10 + 0x48) * 0x10 != lVar22);
            }
          }
        }
      }
    }
  }
  else {
    if ((param_2 & 4) != 0) {
      if (param_1[1] == 0) {
LAB_143cf34fb:
        uVar11 = 0;
      }
      else {
        uVar20 = *param_1;
        uVar11 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          puVar18 = (undefined8 *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((puVar18 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar18 + 2) != param_1[1] || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0))
             )) goto LAB_143cf34fb;
          uVar11 = *puVar18;
        }
      }
      FUN_14880fbba(uVar11);
    }
    if ((param_2 & 1) != 0) {
      if (param_1[1] == 0) {
LAB_143cf312f:
        lVar10 = 0;
      }
      else {
        uVar20 = *param_1;
        lVar10 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             ((*(uint *)(plVar14 + 2) != param_1[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))
             )) goto LAB_143cf312f;
          lVar10 = *plVar14;
        }
      }
      *(undefined8 *)(lVar10 + 0x138) = DAT_14c8464f0;
      uVar7 = DAT_14c8464e8._4_4_;
      uVar6 = (undefined4)DAT_14c8464e8;
      uVar5 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(lVar10 + 0x128) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)(lVar10 + 300) = uVar5;
      *(undefined4 *)(lVar10 + 0x130) = uVar6;
      *(undefined4 *)(lVar10 + 0x134) = uVar7;
      if (param_1[1] == 0) {
LAB_143cf3136:
        lVar10 = 0;
      }
      else {
        uVar20 = *param_1;
        lVar10 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             ((*(uint *)(plVar14 + 2) != param_1[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))
             )) goto LAB_143cf3136;
          lVar10 = *plVar14;
        }
      }
      *(byte *)(lVar10 + 0x5b4) = *(byte *)(lVar10 + 0x5b4) | 0x20;
    }
    lVar10 = FUN_140153468(param_1);
    if (((param_2 & 2) != 0) || ((*(uint *)(lVar10 + 0x98) & 4) != 0)) {
      uVar20 = param_1[1];
      cVar19 = DAT_00001100;
      if ((uVar20 == 0) || ((uVar2 = *param_1, (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)))) {
LAB_143cf314b:
        uVar11 = 0;
      }
      else {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           ((*(uint *)(plVar14 + 2) != uVar20 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) {
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar14;
        }
        cVar19 = (&DAT_00001100)[lVar10];
        puVar18 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((puVar18 == (undefined8 *)0x0) || (*(uint *)(puVar18 + 2) != uVar20)) ||
           ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)) goto LAB_143cf314b;
        uVar11 = *puVar18;
      }
      FUN_1409df526(uVar11);
      uVar20 = param_1[1];
      if (((uVar20 == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) {
        if (((cVar19 - 3U & 0xfd) == 0) && (DAT_00001100 == '\x01')) {
LAB_143cf316c:
          lVar10 = 0;
          goto LAB_143cf2b27;
        }
      }
      else {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           ((*(uint *)(plVar14 + 2) != uVar20 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) {
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar14;
        }
        if (((cVar19 - 3U & 0xfd) == 0) && ((&DAT_00001100)[lVar10] == '\x01')) {
          if ((DAT_14c9647dc <= (int)uVar2) ||
             (((plVar14 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar14 == (longlong *)0x0 || (*(uint *)(plVar14 + 2) != uVar20)) ||
              ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143cf316c;
          lVar10 = *plVar14;
LAB_143cf2b27:
          local_98 = *(undefined8 *)(lVar10 + 0x138);
          local_a8 = *(undefined8 *)(lVar10 + 0x128);
          uStack_a0 = *(undefined8 *)(lVar10 + 0x130);
          *(undefined8 *)(lVar10 + 0x138) = local_68;
          *(undefined4 *)(lVar10 + 0x128) = local_78;
          *(undefined4 *)(lVar10 + 300) = uStack_74;
          *(undefined4 *)(lVar10 + 0x130) = uStack_70;
          *(undefined4 *)(lVar10 + 0x134) = uStack_6c;
          uVar20 = param_1[1];
          if (uVar20 == 0) {
            plVar14 = (longlong *)0x0;
LAB_143cf34f0:
            lVar13 = 0;
          }
          else {
            uVar2 = *param_1;
            plVar14 = (longlong *)0x0;
            if ((int)uVar2 < 0) goto LAB_143cf34f0;
            lVar13 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              puVar18 = (undefined8 *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar18 == (undefined8 *)0x0) || (*(uint *)(puVar18 + 2) != uVar20)) ||
                 ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)) {
                plVar14 = (longlong *)0x0;
              }
              else {
                plVar14 = (longlong *)*puVar18;
              }
              plVar12 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar12 == (longlong *)0x0) || (*(uint *)(plVar12 + 2) != uVar20)) ||
                 ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_143cf34f0;
              lVar13 = *plVar12;
            }
          }
          (**(code **)(*plVar14 + 0x7a8))(local_78,lVar13 + 0x4a8,0,0);
          *(undefined8 *)(lVar10 + 0x138) = local_98;
          *(undefined4 *)(lVar10 + 0x128) = (undefined4)local_a8;
          *(undefined4 *)(lVar10 + 300) = local_a8._4_4_;
          *(undefined4 *)(lVar10 + 0x130) = (undefined4)uStack_a0;
          *(undefined4 *)(lVar10 + 0x134) = uStack_a0._4_4_;
        }
      }
    }
    lVar10 = FUN_140153468(param_1);
    uVar20 = param_1[1];
    if (uVar20 == 0) {
LAB_143cf3128:
      lVar13 = 0;
    }
    else {
      uVar2 = *param_1;
      lVar13 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           ((*(uint *)(plVar14 + 2) != uVar20 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
        goto LAB_143cf3128;
        lVar13 = *plVar14;
      }
    }
    if (*(char *)(lVar10 + 0x9c) == '\0') {
      if ((&DAT_00001100)[lVar13] != '\x05') {
        if (uVar20 == 0) {
LAB_143cf34e7:
          lVar10 = 0;
        }
        else {
          uVar2 = *param_1;
          lVar10 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar14 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar14 == (longlong *)0x0) ||
               ((*(uint *)(plVar14 + 2) != uVar20 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
            goto LAB_143cf34e7;
            lVar10 = *plVar14;
          }
        }
        if ((&DAT_00001100)[lVar10] != '\x03') goto LAB_143cf2e43;
      }
      if (uVar20 == 0) {
LAB_143cf34d9:
        lVar10 = 0;
      }
      else {
        uVar2 = *param_1;
        lVar10 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             ((*(uint *)(plVar14 + 2) != uVar20 || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))))
          goto LAB_143cf34d9;
          lVar10 = *plVar14;
        }
      }
      *(uint *)(*(longlong *)(&DAT_00001ce8 + lVar10) + 0x568) = param_1[0x8f];
      if (param_1[1] == 0) {
LAB_143cf34e0:
        lVar10 = 0;
      }
      else {
        uVar20 = *param_1;
        lVar10 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             ((*(uint *)(plVar14 + 2) != param_1[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))
             )) goto LAB_143cf34e0;
          lVar10 = *plVar14;
        }
      }
      if (*(uint *)(&DAT_00002bb0 + lVar10) != param_1[0x90]) {
        *(uint *)(&DAT_00002bb0 + lVar10) = param_1[0x90];
        goto LAB_143cf304f;
      }
    }
    else {
      (**(code **)(**(longlong **)(&DAT_00001ce8 + lVar13) + 0x808))();
      if (param_1[1] == 0) {
LAB_143cf313d:
        lVar10 = 0;
      }
      else {
        uVar20 = *param_1;
        lVar10 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             ((*(uint *)(plVar14 + 2) != param_1[1] || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0))
             )) goto LAB_143cf313d;
          lVar10 = *plVar14;
        }
      }
      if (*(int *)(&DAT_00002bb0 + lVar10) != 0) {
        *(undefined4 *)(&DAT_00002bb0 + lVar10) = 0;
LAB_143cf304f:
        uVar4 = *(ulonglong *)(lVar10 + 0x38);
        if (uVar4 < 0xffffffff00000000) {
          plVar14 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar14 = (longlong *)0x0;
          }
          (**(code **)(*plVar14 + 0x58))(plVar14,lVar10,uVar4,10);
        }
        else {
          uVar20 = (uint)uVar4;
          if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c998088)) {
            puVar15 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar15 = DAT_14c998080;
            }
            if ((*(uint *)(puVar15 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar20 & 0x1f) & 1) != 0)
            {
              lVar10 = DAT_14c998060 + (ulonglong)(uVar20 & 0x7fffffff) * 0x68;
              puVar16 = *(uint **)(lVar10 + 0x18);
              if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
                puVar16 = (uint *)(lVar10 + 8);
              }
              *puVar16 = *puVar16 | 0x400;
              *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
            }
          }
        }
      }
    }
LAB_143cf2e43:
    if ((char)plVar21[0x2f] == '\x03') {
      if (((param_2 & 2) == 0) && ((*(byte *)((longlong)param_1 + 0x299) & 0x14) == 0)) {
        FUN_140153468(param_1);
      }
      if (plVar21 != (longlong *)0x0) {
        uVar11 = FUN_1407ca880();
        plVar14 = (longlong *)(**(code **)(*plVar21 + 0x288))(plVar21,uVar11);
        if (plVar14 != (longlong *)0x0) {
          uVar11 = FUN_1407ca880();
          plVar12 = (longlong *)FUN_144718840(plVar14,uVar11);
          if (plVar12 != (longlong *)0x0 && plVar14 != plVar12) {
            if ((param_2 & 2) == 0) {
              if (((*(byte *)((longlong)param_1 + 0x299) & 0x10) == 0) &&
                 (lVar10 = FUN_140153468(param_1), *(longlong *)(lVar10 + 0xb80) != 0)) {
                *(byte *)((longlong)param_1 + 0x299) = *(byte *)((longlong)param_1 + 0x299) | 0x10;
                lVar10 = FUN_140153468(param_1);
                uVar11 = *(undefined8 *)(lVar10 + 0xb80);
                lVar10 = *plVar12;
LAB_143cf3118:
                (**(code **)(lVar10 + 0x20))(plVar12,uVar11);
              }
              else {
                lVar10 = FUN_140153468(param_1);
                if (*(longlong *)(lVar10 + 0xb70) != 0) {
                  lVar10 = FUN_140153468(param_1);
                  uVar20 = *(uint *)(lVar10 + 0x100);
                  unaff_RBP = (ulonglong)uVar20;
                  lVar10 = FUN_140153468(param_1);
                  uVar11 = *(undefined8 *)(lVar10 + 0xb70);
                  lVar10 = *plVar12;
                  if ((uVar20 >> 0xe & 1) == 0) goto LAB_143cf3118;
                  (**(code **)(lVar10 + 0x38))(plVar12,uVar11);
                }
              }
            }
            else {
              lVar10 = FUN_140153468(param_1);
              if (*(longlong *)(lVar10 + 0xb68) != 0) {
                lVar10 = (**(code **)(*plVar12 + 0x50))(plVar12);
                lVar13 = FUN_140153468(param_1);
                if ((longlong)*(int *)(lVar10 + 0x48) != 0) {
                  lVar22 = 0;
                  do {
                    lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + lVar22);
                    if ((lVar3 != 0) &&
                       (*(longlong *)(lVar3 + 0x30) == *(longlong *)(lVar13 + 0xb68))) {
                      lVar10 = FUN_140153468(param_1);
                      (**(code **)(*plVar12 + 0x28))(plVar12,*(undefined8 *)(lVar10 + 0xb68));
                      break;
                    }
                    lVar22 = lVar22 + 0x10;
                  } while ((longlong)*(int *)(lVar10 + 0x48) * 0x10 != lVar22);
                }
              }
              lVar10 = FUN_140153468(param_1);
              if (*(longlong *)(lVar10 + 0xb78) != 0) {
                lVar10 = (**(code **)(*plVar12 + 0x50))(plVar12);
                lVar13 = FUN_140153468(param_1);
                if ((longlong)*(int *)(lVar10 + 0x48) != 0) {
                  lVar22 = 0;
                  do {
                    lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x40) + lVar22);
                    if ((lVar3 != 0) &&
                       (*(longlong *)(lVar3 + 0x30) == *(longlong *)(lVar13 + 0xb78))) {
                      lVar10 = FUN_140153468(param_1);
                      (**(code **)(*plVar12 + 0x28))(plVar12,*(undefined8 *)(lVar10 + 0xb78));
                      break;
                    }
                    lVar22 = lVar22 + 0x10;
                  } while ((longlong)*(int *)(lVar10 + 0x48) * 0x10 != lVar22);
                }
              }
            }
          }
        }
      }
    }
    lVar10 = FUN_140153468(param_1);
    if (((*(byte *)(lVar10 + 0xa0) & 4) != 0) ||
       (lVar10 = FUN_140153468(param_1), (*(byte *)(lVar10 + 0xa0) & 8) != 0)) {
      if (param_1[1] == 0) {
LAB_143cf34f7:
        uVar11 = 0;
      }
      else {
        uVar20 = *param_1;
        uVar11 = 0;
        if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
          puVar18 = (undefined8 *)
                    ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
          if ((puVar18 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar18 + 2) != param_1[1] || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0))
             )) goto LAB_143cf34f7;
          uVar11 = *puVar18;
        }
      }
      FUN_1457218fa(uVar11);
    }
    if ((char)plVar21[0x2f] != '\x03') goto LAB_143cf31b0;
  }
  uVar11 = FUN_140153468(param_1);
  plVar14 = *(longlong **)(param_1 + 4);
  if (plVar14 == (longlong *)0x0) {
LAB_143cf3453:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  iVar9 = (int)plVar14[1];
  do {
    if (iVar9 == 0) goto LAB_143cf3453;
    LOCK();
    iVar8 = (int)plVar14[1];
    bVar23 = iVar9 == iVar8;
    if (bVar23) {
      *(int *)(plVar14 + 1) = iVar9 + 1;
      iVar8 = iVar9;
    }
    iVar9 = iVar8;
    UNLOCK();
  } while (!bVar23);
  plVar12 = *(longlong **)(param_1 + 2);
  FUN_141135066();
  if (plVar12 != (longlong *)0x0) {
    if ((char)plVar21[0x2f] == '\x03') {
      (**(code **)(*plVar21 + 0x578))(plVar21);
      (**(code **)(*plVar12 + 0xd0))
                (plVar12,CONCAT71((int7)(unaff_RBP >> 8),(param_2 & 2) != 0) & 0xffffffff);
    }
    if (param_1[1] == 0) {
LAB_143cf34cb:
      plVar17 = (longlong *)0x0;
    }
    else {
      uVar20 = *param_1;
      plVar17 = (longlong *)0x0;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
        puVar18 = (undefined8 *)
                  ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
        if ((puVar18 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar18 + 2) != param_1[1] || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0))))
        goto LAB_143cf34cb;
        plVar17 = (longlong *)*puVar18;
      }
    }
    (**(code **)(*plVar17 + 0xe28))(plVar17,uVar11,&local_90);
    (**(code **)(*plVar12 + 0xc0))
              (plVar12,CONCAT71((int7)((ulonglong)plVar21 >> 8),(param_2 & 2) != 0) & 0xffffffff);
    plVar12[0x1a] = 0;
    if (param_1[1] == 0) {
LAB_143cf34d2:
      plVar21 = (longlong *)0x0;
    }
    else {
      uVar20 = *param_1;
      plVar21 = (longlong *)0x0;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
        puVar18 = (undefined8 *)
                  ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
        if ((puVar18 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar18 + 2) != param_1[1] || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0))))
        goto LAB_143cf34d2;
        plVar21 = (longlong *)*puVar18;
      }
    }
    (**(code **)(*plVar21 + 0xe40))(plVar21,uVar11,&local_90);
    *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] | 4;
    FUN_14103b6f6(plVar12,0);
    *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] & 0xfb;
  }
  LOCK();
  plVar21 = plVar14 + 1;
  *(int *)plVar21 = (int)*plVar21 + -1;
  UNLOCK();
  if ((int)*plVar21 == 0) {
    (**(code **)*plVar14)(plVar14);
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
LAB_143cf3425:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cf3594 FUN_143cf3594 body=56 status=ok
// SIG undefined FUN_143cf3594(void)

undefined8 FUN_143cf3594(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140153468();
  if ((lVar1 == 0) || ((*(byte *)(param_1 + 0x298) & 2) != 0)) {
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_140153468(param_1);
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0xf8)) &
            0xffffffffffffff40;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
  }
  return uVar3;
}



// FUNCTION 143cf35cc FUN_143cf35cc body=3756 status=ok
// SIG undefined FUN_143cf35cc(void)

void FUN_143cf35cc(uint *param_1,double *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar31;
  code *pcVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined2 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  code **local_1f0;
  undefined1 *local_1e8;
  code *local_1e0;
  code *local_1d8;
  double dStack_1d0;
  longlong *local_1c8;
  int local_1b0;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  ushort local_188;
  byte local_180;
  code *local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  code *local_150;
  double local_148;
  ulonglong local_140;
  undefined1 local_138;
  uint local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined1 local_118;
  undefined8 local_114;
  undefined4 local_108;
  undefined4 uStack_104;
  ushort local_f0;
  byte local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((param_3 == '\0') && (lVar11 = FUN_140153468(), (*(byte *)(lVar11 + 0xa0) & 0x10) == 0))
  goto LAB_143cf3a5a;
  if (param_1[1] == 0) {
LAB_143cf3dc3:
    lVar11 = 0;
  }
  else {
    uVar15 = *param_1;
    lVar11 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      plVar17 = (longlong *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((plVar17 == (longlong *)0x0) ||
         ((*(uint *)(plVar17 + 2) != param_1[1] || ((*(uint *)(plVar17 + 1) & 0x10200000) != 0))))
      goto LAB_143cf3dc3;
      lVar11 = *plVar17;
    }
  }
  lVar11 = *(longlong *)(&DAT_00001ce8 + lVar11);
  dVar30 = *(double *)(param_1 + 0x52);
  dVar27 = *(double *)(param_1 + 0x54);
  dVar25 = *(double *)(param_1 + 0x56);
  uVar29 = SUB84(dVar25,0);
  uVar31 = (undefined4)((ulonglong)dVar25 >> 0x20);
  lVar12 = FUN_140153468(param_1);
  if (((*(byte *)(lVar12 + 0xa0) & 8) == 0) ||
     (lVar12 = FUN_140153468(param_1), *(char *)(lVar12 + 0x168) == '\0')) {
    dVar24 = dVar30 * dVar30 + dVar27 * dVar27;
    if ((dVar24 != 1.0) || (NAN(dVar24))) {
      if (9.99999993922529e-09 <= dVar24) {
        dVar27 = dVar27 * (1.0 / SQRT(dVar24));
        dVar30 = dVar30 * (1.0 / SQRT(dVar24));
        uVar29 = 0;
        uVar31 = 0;
      }
      else {
        uVar29 = SUB84(DAT_14c8464f0,0);
        uVar31 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar30 = DAT_14c8464e0;
        dVar27 = DAT_14c8464e8;
      }
    }
    else {
      uVar7 = (ulonglong)dVar25 & -(ulonglong)(dVar25 == 0.0);
      uVar29 = (undefined4)uVar7;
      uVar31 = (undefined4)(uVar7 >> 0x20);
    }
  }
  dVar25 = 0.0;
  if ((((dVar30 != 0.0) || (NAN(dVar30))) || (dVar27 != 0.0)) || (NAN(dVar27))) {
    dVar25 = atan2(dVar27,dVar30);
    dVar25 = dVar25 * 57.29577951308232;
  }
  dVar27 = SQRT(dVar30 * dVar30 + dVar27 * dVar27);
  dVar30 = 0.0;
  if ((((double)CONCAT44(uVar31,uVar29) != 0.0) || (NAN((double)CONCAT44(uVar31,uVar29)))) ||
     ((dVar27 != 0.0 || (NAN(dVar27))))) {
    dVar30 = atan2((double)CONCAT44(uVar31,uVar29),dVar27);
    dVar30 = dVar30 * 57.29577951308232;
  }
  puVar18 = param_1;
  dVar27 = (double)FUN_140153468();
  uVar29 = SUB84(puVar18,0);
  if ((*(byte *)((longlong)dVar27 + 0xa0) & 4) == 0) {
    lVar12 = *(longlong *)(lVar11 + 0x1c8);
    dVar24 = DAT_14c846500;
    if (lVar12 != 0) {
      pcVar32 = *(code **)(lVar12 + 0x240);
      dVar24 = *(double *)(lVar12 + 0x248);
      dVar34 = *(double *)(lVar12 + 0x250);
      dVar28 = *(double *)(lVar12 + 600);
      pdVar14 = *(double **)(lVar12 + 0x228);
      local_178 = pcVar32;
      dStack_170 = dVar24;
      local_168 = dVar34;
      dStack_160 = dVar28;
      if (pdVar14 == (double *)0x0) {
        uVar29 = 0x40;
        pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
        dVar27 = DAT_14c8463d8;
        *pdVar14 = DAT_14c8463d0;
        pdVar14[1] = dVar27;
        dVar27 = DAT_14c8463e8;
        pdVar14[2] = DAT_14c8463e0;
        pdVar14[3] = dVar27;
        dVar27 = DAT_14c846500;
        pdVar14[4] = DAT_14c8464f8;
        pdVar14[5] = dVar27;
        dVar27 = DAT_14c846508;
        pdVar14[6] = DAT_14c846508;
        *(double **)(lVar12 + 0x228) = pdVar14;
      }
      auVar5._8_4_ = (int)-(ulonglong)(dVar24 != pdVar14[1]);
      auVar5._0_8_ = -(ulonglong)((double)pcVar32 != *pdVar14);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar24 != pdVar14[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(dVar27,0),auVar5);
      auVar6._8_4_ = (int)-(ulonglong)(dVar28 != pdVar14[3]);
      auVar6._0_8_ = -(ulonglong)(dVar34 != pdVar14[2]);
      auVar6._12_4_ = (int)(-(ulonglong)(dVar28 != pdVar14[3]) >> 0x20);
      uVar15 = movmskpd(uVar29,auVar6);
      if ((uVar15 & 0x3fffffff) != 0 || iVar9 != 0) {
        pdVar14[2] = local_168;
        pdVar14[3] = dStack_160;
        *pdVar14 = (double)local_178;
        pdVar14[1] = dStack_170;
        FUN_1448052ee(&local_178,&local_1d8);
        pdVar14[6] = (double)local_1c8;
        pdVar14[4] = (double)local_1d8;
        pdVar14[5] = dStack_1d0;
      }
      dVar24 = pdVar14[5];
    }
  }
  else {
    lVar12 = FUN_140153468(param_1);
    dVar24 = dVar25;
    if (1e-08 < ABS(*(float *)(lVar12 + 0x298))) {
      lVar12 = FUN_140153468(param_1);
      dVar24 = (double)*(float *)(lVar12 + 0x298) + dVar25;
    }
  }
  lVar12 = FUN_140153468(param_1);
  dVar27 = dVar30;
  if (((*(byte *)(lVar12 + 0xa0) & 8) != 0) &&
     (lVar12 = FUN_140153468(param_1), 1e-08 < ABS(*(float *)(lVar12 + 0x29c)))) {
    lVar12 = FUN_140153468(param_1);
    dVar27 = (double)*(float *)(lVar12 + 0x29c) + dVar30;
  }
  dVar30 = (double)FUN_144719204(dVar30,0x4076800000000000);
  dVar25 = (double)FUN_144719204(dVar25,0x4076800000000000);
  FUN_144719204(0,0x4076800000000000);
  dVar27 = (double)FUN_144719204(dVar27,0x4076800000000000);
  pcVar32 = (code *)(~-(ulonglong)(dVar27 < 0.0) & (ulonglong)dVar27 |
                    (ulonglong)(dVar27 + 360.0) & -(ulonglong)(dVar27 < 0.0));
  dVar27 = (double)FUN_144719204(dVar24,0x4076800000000000);
  dVar24 = (double)(~-(ulonglong)(dVar27 < 0.0) & (ulonglong)dVar27 |
                   (ulonglong)(dVar27 + 360.0) & -(ulonglong)(dVar27 < 0.0));
  dVar27 = (double)FUN_144719204(0);
  lVar12 = FUN_140153468(param_1);
  uVar15 = *(uint *)(lVar12 + 0x100);
  lVar12 = FUN_140153468(param_1);
  uVar2 = *(uint *)(lVar12 + 0x100);
  lVar12 = FUN_140153468(param_1);
  if ((*(byte *)(lVar12 + 0xa0) & 0x10) != 0) {
    lVar12 = FUN_140153468(param_1);
    lVar13 = FUN_140153468(param_1);
    if ((((lVar13 == lVar12) &&
         (plVar17 = *(longlong **)(lVar11 + 0x3c0), plVar17 != (longlong *)0x0)) &&
        ((*(byte *)(plVar17 + 0x84) & 2) != 0)) &&
       ((cVar8 = (**(code **)(*plVar17 + 0x6c8))(), cVar8 != '\0' &&
        (plVar17 = *(longlong **)(lVar11 + 0x3c0), plVar17 != (longlong *)0x0)))) {
      if (DAT_14cb61cd0 == 0) {
        local_1f0 = &local_178;
        local_178 = FUN_141030f22;
        local_1e0 = FUN_14081d0ea;
        local_1e8 = &LAB_1463b31ae;
        local_1f8 = &LAB_1486dca4f;
        local_200 = &LAB_1464f50a6;
        local_208 = &DAT_149e063b2;
        local_210 = 0;
        local_218 = 0x10000004;
        local_220 = 8;
        local_228 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar17[2] + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
           DAT_14cb61cd0 + 0x30)) && (plVar3 = (longlong *)plVar17[0x89], plVar3 != (longlong *)0x0)
         ) {
        if (param_3 == '\0') {
          dVar27 = *param_2;
          dVar24 = param_2[1];
          dVar34 = param_2[2];
          lVar11 = FUN_140153468(param_1);
          dVar28 = dVar27;
          dVar33 = dVar24;
          if (((*(byte *)(lVar11 + 0xa0) & 8) == 0) ||
             (lVar11 = FUN_140153468(param_1), *(char *)(lVar11 + 0x168) == '\0')) {
            dVar26 = dVar27 * dVar27 + dVar24 * dVar24;
            if ((dVar26 != 1.0) || (NAN(dVar26))) {
              dVar34 = DAT_14c8464f0;
              dVar28 = DAT_14c8464e0;
              dVar33 = DAT_14c8464e8;
              if (9.99999993922529e-09 <= dVar26) {
                dVar34 = 0.0;
                dVar28 = dVar27 * (1.0 / SQRT(dVar26));
                dVar33 = dVar24 * (1.0 / SQRT(dVar26));
              }
            }
            else {
              dVar34 = (double)((ulonglong)dVar34 & -(ulonglong)(dVar34 == 0.0));
            }
          }
          dVar27 = 0.0;
          if (((dVar33 != 0.0) || (NAN(dVar33))) || ((dVar28 != 0.0 || (NAN(dVar28))))) {
            dVar27 = atan2(dVar33,dVar28);
            dVar27 = dVar27 * 57.29577951308232;
          }
          dVar28 = SQRT(dVar28 * dVar28 + dVar33 * dVar33);
          dVar24 = 0.0;
          if ((((dVar34 != 0.0) || (NAN(dVar34))) || (dVar28 != 0.0)) || (NAN(dVar28))) {
            dVar24 = atan2(dVar34,dVar28);
            dVar24 = dVar24 * 57.29577951308232;
          }
          local_178 = (code *)0x0;
          dStack_170 = 0.0;
          local_168 = 0.0;
          pcVar32 = (code *)0x0;
          if ((uVar15 >> 9 & 1) != 0) {
            dVar25 = (double)FUN_144719204(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                                           (ulonglong)(dVar25 + 360.0) & -(ulonglong)(dVar25 < 0.0),
                                           0x4076800000000000);
            dVar25 = (double)(~-(ulonglong)(dVar25 < 0.0) & (ulonglong)dVar25 |
                             (ulonglong)(dVar25 + 360.0) & -(ulonglong)(dVar25 < 0.0));
            dVar27 = (double)FUN_144719204(dVar27,0x4076800000000000);
            dVar27 = (double)(~-(ulonglong)(dVar27 < 0.0) & (ulonglong)dVar27 |
                             (ulonglong)(dVar27 + 360.0) & -(ulonglong)(dVar27 < 0.0));
            dStack_170 = (double)(~-(ulonglong)(180.0 < dVar25) & (ulonglong)dVar25 |
                                 (ulonglong)(dVar25 + -360.0) & -(ulonglong)(180.0 < dVar25)) -
                         (double)(~-(ulonglong)(180.0 < dVar27) & (ulonglong)dVar27 |
                                 (ulonglong)(dVar27 + -360.0) & -(ulonglong)(180.0 < dVar27));
          }
          dVar27 = dStack_170;
          if ((uVar2 >> 10 & 1) != 0) {
            dVar30 = (double)FUN_144719204(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                                           (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0),
                                           0x4076800000000000);
            dVar25 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                             (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
            dVar30 = (double)FUN_144719204(dVar24,0x4076800000000000);
            dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                             (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
            pcVar32 = (code *)((double)(~-(ulonglong)(180.0 < dVar25) & (ulonglong)dVar25 |
                                       (ulonglong)(dVar25 + -360.0) & -(ulonglong)(180.0 < dVar25))
                              - (double)(~-(ulonglong)(180.0 < dVar30) & (ulonglong)dVar30 |
                                        (ulonglong)(dVar30 + -360.0) & -(ulonglong)(180.0 < dVar30))
                              );
            local_178 = pcVar32;
          }
          dVar30 = (double)FUN_144719204(pcVar32,0x4076800000000000);
          dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                           (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
          if ((dVar30 == 0.0) && (!NAN(dVar30))) {
            dVar30 = (double)FUN_144719204(dVar27,0x4076800000000000);
            dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                             (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
            if ((dVar30 == 0.0) && (!NAN(dVar30))) {
              dVar30 = (double)FUN_144719204(0,0x4076800000000000);
              dVar30 = (double)(~-(ulonglong)(dVar30 < 0.0) & (ulonglong)dVar30 |
                               (ulonglong)(dVar30 + 360.0) & -(ulonglong)(dVar30 < 0.0));
              if ((dVar30 == 0.0) && (!NAN(dVar30))) goto LAB_143cf3a5a;
            }
          }
          (**(code **)(*plVar17 + 0x798))(plVar17,&local_178);
        }
        else {
          (**(code **)(*plVar3 + 0x728))(plVar3,&local_178);
          dStack_1d0 = dStack_170;
          local_1c8 = (longlong *)0x0;
          if ((uVar15 >> 9 & 1) != 0) {
            dStack_1d0 = dVar24;
          }
          local_1d8 = local_178;
          if ((uVar2 >> 10 & 1) != 0) {
            local_1d8 = pcVar32;
          }
          if (((double)local_1d8 == (double)local_178) &&
             (!NAN((double)local_1d8) && !NAN((double)local_178))) {
            if ((dStack_1d0 == dStack_170) &&
               (((!NAN(dStack_1d0) && !NAN(dStack_170) && (local_168 == 0.0)) && (!NAN(local_168))))
               ) goto LAB_143cf3a5a;
          }
          (**(code **)(*plVar17 + 0x790))(plVar17,&local_1d8);
        }
      }
    }
    goto LAB_143cf3a5a;
  }
  local_140 = ~-(ulonglong)(dVar27 < 0.0) & (ulonglong)dVar27 |
              (ulonglong)(dVar27 + 360.0) & -(ulonglong)(dVar27 < 0.0);
  local_178 = (code *)0x0;
  dStack_170 = 0.0;
  local_168 = DAT_14c8464e0;
  dStack_160 = DAT_14c8464e8;
  local_158 = DAT_14c8464f0;
  local_12c = 0;
  local_128 = 0xbf80000041200000;
  local_120 = 0;
  local_11c = 0x100;
  local_118 = 0;
  local_114 = 0x240000000;
  local_138 = 1;
  local_130 = param_1[0x21];
  local_150 = pcVar32;
  local_148 = dVar24;
  lVar12 = FUN_140153468(param_1);
  local_1d8 = (code *)((ulonglong)local_1d8 & 0xffffffffffffff00);
  local_1b0 = 0;
  FUN_1456bb102(&local_1d8,lVar11);
  puVar23 = &local_1a0;
  FUN_1448729ea(lVar12 + 0x248,puVar23,&local_1d8);
  if (local_180 == 3) {
    uVar10 = 3;
    uVar29 = local_1a0;
  }
  else {
    puVar22 = &local_108;
    FUN_1400b56fe(puVar22,&local_1a0,3);
    uVar29 = 0;
    if (local_e8 != 0) {
      uVar29 = local_108;
    }
    pcVar32 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e8 * 0x120));
    if (pcVar32 != (code *)0x0) {
      if (0x18 < local_f0) {
        puVar22 = (undefined4 *)CONCAT44(uStack_104,local_108);
      }
      (*pcVar32)(puVar22);
    }
    if (0x18 < local_f0) {
      FUN_1400020a8(CONCAT44(uStack_104,local_108));
    }
    uVar10 = (uint)local_180;
  }
  local_128 = CONCAT44(local_128._4_4_,uVar29);
  pcVar32 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar10 * 0x120));
  if (pcVar32 != (code *)0x0) {
    if (0x18 < local_188) {
      puVar23 = (undefined4 *)CONCAT44(uStack_19c,local_1a0);
    }
    (*pcVar32)(puVar23);
  }
  if (0x18 < local_188) {
    FUN_1400020a8(CONCAT44(uStack_19c,local_1a0));
  }
  lVar11 = DAT_14c9a3da0;
  if ((longlong)local_1b0 != 0) {
    lVar13 = (longlong)local_1b0 + -1;
    lVar12 = lVar13 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar11 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar11 = DAT_14c9a3da0;
    iVar9 = (int)lVar13;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar11 + lVar12) = 0xffffffff;
    iVar16 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar16 = DAT_14c9a3dd0;
    }
    *(int *)(lVar11 + 4 + lVar12) = iVar16;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar21 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar21 = DAT_14c9a3dc0;
    }
    iVar16 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar16 = iVar9;
    }
    bVar4 = (byte)lVar13 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar21 + (longlong)(iVar16 >> 5) * 4) =
         *(uint *)(puVar21 + (longlong)(iVar16 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_1b0 = 0;
  }
  if (((char)local_1d8 == '\x03') && (local_1c8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_1c8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_1c8 + 0x10))();
    }
  }
  local_11c = CONCAT11((uVar15 & 0x200) != 0 || (uVar2 & 0x400) != 0,(undefined1)local_11c);
  if (param_1[1] == 0) {
LAB_143cf3eb3:
    uVar19 = 0;
  }
  else {
    uVar15 = *param_1;
    uVar19 = 0;
    if ((-1 < (int)uVar15) && ((int)uVar15 < DAT_14c9647dc)) {
      puVar20 = (undefined8 *)
                ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
      if ((puVar20 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar20 + 2) != param_1[1] || ((*(uint *)(puVar20 + 1) & 0x10200000) != 0))))
      goto LAB_143cf3eb3;
      uVar19 = *puVar20;
    }
  }
  FUN_146145414(uVar19,&local_178);
LAB_143cf3a5a:
  if ((local_e0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cf447a FUN_143cf447a body=2625 status=ok
// SIG undefined FUN_143cf447a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cf447a(uint *param_1,float param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auStack_118 [32];
  double local_f8;
  float local_ec;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[1] == 0) {
LAB_143cf46a0:
    lVar14 = 0;
  }
  else {
    uVar4 = *param_1;
    lVar14 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar15 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar15 == (longlong *)0x0) ||
         ((*(uint *)(plVar15 + 2) != param_1[1] || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
      goto LAB_143cf46a0;
      lVar14 = *plVar15;
    }
  }
  lVar14 = *(longlong *)(&DAT_00001ce8 + lVar14);
  *(byte *)((longlong)param_1 + 0x299) = *(byte *)((longlong)param_1 + 0x299) & 0xfe;
  if ((char)param_1[0xa6] < '\0') goto LAB_143cf4e33;
  lVar12 = FUN_140153468();
  dVar3 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  dVar1 = DAT_14c8464e0;
  if ((*(byte *)(lVar12 + 0xf8) & 2) == 0) {
    if (param_1[1] == 0) {
LAB_143cf4eae:
      lVar12 = 0;
    }
    else {
      uVar4 = *param_1;
      lVar12 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           ((*(uint *)(plVar15 + 2) != param_1[1] || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
        goto LAB_143cf4eae;
        lVar12 = *plVar15;
      }
    }
    if ((&DAT_00001100)[lVar12] == '\x03') goto LAB_143cf4e33;
  }
  if ((*(byte *)((longlong)param_1 + 0x299) & 4) == 0) {
    dVar1 = *(double *)(param_1 + 0x74);
    dVar2 = *(double *)(param_1 + 0x76);
    dVar3 = *(double *)(param_1 + 0x78);
  }
  else if (1 < *(byte *)(lVar14 + 0x178)) {
    if ((param_2 <= 0.0) ||
       (in_XMM2 = ZEXT416(param_1[0x22]), (float)param_1[0x21] < (float)param_1[0x22])) {
      lVar14 = FUN_140153468(param_1);
      if ((*(byte *)(lVar14 + 0xf8) & 4) != 0) {
        dVar1 = *param_3;
        dVar2 = param_3[1];
        dVar3 = param_3[2];
      }
    }
    else {
      *(byte *)((longlong)param_1 + 0x299) = *(byte *)((longlong)param_1 + 0x299) | 1;
      FUN_140a2a54e(param_1 + 0x2c,&local_d8);
      lVar14 = *(longlong *)(lVar14 + 0x1c8);
      if (lVar14 == 0) {
        pdVar13 = &DAT_14c8464e0;
      }
      else {
        dVar3 = *(double *)(lVar14 + 0x270);
        pdVar13 = (double *)(lVar14 + 0x260);
      }
      in_XMM2._0_8_ = local_d0 - pdVar13[1];
      in_XMM2._8_8_ = 0;
      local_c8 = local_c8 - dVar3;
      dVar1 = 1.0 / (double)param_2;
      dVar3 = dVar1 * local_c8;
      dVar2 = dVar1 * in_XMM2._0_8_;
      dVar1 = dVar1 * (local_d8 - *pdVar13);
      *(double *)(param_1 + 0x26) = local_d8 - *pdVar13;
      *(double *)(param_1 + 0x28) = in_XMM2._0_8_;
      *(double *)(param_1 + 0x2a) = local_c8;
    }
  }
  fVar24 = (float)param_1[0x22];
  fVar22 = 0.0;
  if (0.0 <= fVar24 - param_2) {
    fVar22 = fVar24 - param_2;
  }
  lVar14 = FUN_140153468();
  if (((*(byte *)(lVar14 + 0xa1) & 1) == 0) || (fVar25 = (float)param_1[0x21], fVar25 <= 0.0)) {
LAB_143cf476d:
    fVar25 = fVar24;
    if ((fVar24 != 0.0) || (NAN(fVar24))) goto LAB_143cf4839;
    lVar12 = FUN_140153468(param_1);
    lVar14 = *(longlong *)(lVar12 + 0x430) + 0x30;
    if (*(longlong *)(lVar12 + 0x430) == 0) {
      lVar14 = lVar12 + 0x3b0;
    }
    dVar17 = 0.0;
    dVar5 = 0.0;
    if (0 < *(int *)(lVar14 + 0x78)) {
      in_XMM2 = ZEXT816(0);
      fVar24 = (float)FUN_1448c9f94();
      dVar5 = (double)fVar24;
    }
    lVar12 = FUN_140153468(param_1);
    lVar14 = *(longlong *)(lVar12 + 0x3a8) + 0x30;
    if (*(longlong *)(lVar12 + 0x3a8) == 0) {
      lVar14 = lVar12 + 0x328;
    }
    if (0 < *(int *)(lVar14 + 0x78)) {
      in_XMM2 = ZEXT816(0);
      fVar24 = (float)FUN_1448c9f94();
      dVar17 = (double)fVar24;
    }
    uVar23 = SUB84(dVar17,0);
    lVar12 = FUN_140153468(param_1);
    lVar14 = *(longlong *)(lVar12 + 800) + 0x30;
    if (*(longlong *)(lVar12 + 800) == 0) {
      lVar14 = lVar12 + 0x2a0;
    }
    if (*(int *)(lVar14 + 0x78) < 1) {
      dVar9 = 0.0;
    }
    else {
      in_XMM2 = ZEXT816(0);
      fVar24 = (float)FUN_1448c9f94();
      dVar9 = (double)fVar24;
    }
  }
  else {
    fVar22 = fVar22 / fVar25;
    if (1.0 <= fVar22) {
      fVar22 = 1.0;
    }
    fVar24 = fVar24 / fVar25;
    fVar25 = 1.0;
    if (fVar24 < 1.0) goto LAB_143cf476d;
LAB_143cf4839:
    if ((fVar25 != fVar22) || (NAN(fVar25) || NAN(fVar22))) {
      lVar12 = FUN_140153468(param_1);
      lVar14 = *(longlong *)(lVar12 + 0x430) + 0x30;
      if (*(longlong *)(lVar12 + 0x430) == 0) {
        lVar14 = lVar12 + 0x3b0;
      }
      dVar17 = 0.0;
      dVar5 = 0.0;
      if (0 < *(int *)(lVar14 + 0x78)) {
        in_XMM2 = ZEXT816(0);
        fVar24 = (float)FUN_1448c9f94();
        dVar5 = (double)fVar24;
      }
      local_f8 = dVar2;
      lVar12 = FUN_140153468(param_1);
      lVar14 = *(longlong *)(lVar12 + 0x3a8) + 0x30;
      if (*(longlong *)(lVar12 + 0x3a8) == 0) {
        lVar14 = lVar12 + 0x328;
      }
      if (0 < *(int *)(lVar14 + 0x78)) {
        in_XMM2 = ZEXT816(0);
        fVar24 = (float)FUN_1448c9f94();
        dVar17 = (double)fVar24;
      }
      lVar12 = FUN_140153468(param_1);
      lVar14 = *(longlong *)(lVar12 + 800) + 0x30;
      if (*(longlong *)(lVar12 + 800) == 0) {
        lVar14 = lVar12 + 0x2a0;
      }
      dVar9 = 0.0;
      dVar20 = 0.0;
      if (0 < *(int *)(lVar14 + 0x78)) {
        in_XMM2 = ZEXT816(0);
        fVar24 = (float)FUN_1448c9f94();
        dVar20 = (double)fVar24;
      }
      lVar12 = FUN_140153468(param_1);
      lVar14 = *(longlong *)(lVar12 + 0x430) + 0x30;
      if (*(longlong *)(lVar12 + 0x430) == 0) {
        lVar14 = lVar12 + 0x3b0;
      }
      if (0 < *(int *)(lVar14 + 0x78)) {
        in_XMM2 = ZEXT816(0);
        fVar24 = (float)FUN_1448c9f94();
        dVar9 = (double)fVar24;
      }
      lVar12 = FUN_140153468(param_1);
      lVar14 = *(longlong *)(lVar12 + 0x3a8) + 0x30;
      if (*(longlong *)(lVar12 + 0x3a8) == 0) {
        lVar14 = lVar12 + 0x328;
      }
      dVar18 = 0.0;
      dVar2 = 0.0;
      if (0 < *(int *)(lVar14 + 0x78)) {
        in_XMM2 = ZEXT816(0);
        fVar24 = (float)FUN_1448c9f94();
        dVar2 = (double)fVar24;
      }
      lVar12 = FUN_140153468(param_1);
      lVar14 = *(longlong *)(lVar12 + 800) + 0x30;
      if (*(longlong *)(lVar12 + 800) == 0) {
        lVar14 = lVar12 + 0x2a0;
      }
      if (0 < *(int *)(lVar14 + 0x78)) {
        in_XMM2 = ZEXT816(0);
        fVar24 = (float)FUN_1448c9f94();
        dVar18 = (double)fVar24;
      }
      uVar23 = SUB84(dVar17 - dVar2,0);
      dVar17 = (double)CONCAT44((int)((ulonglong)(dVar17 - dVar2) >> 0x20),fVar22);
      dVar2 = local_f8;
      dVar5 = dVar5 - dVar9;
      dVar9 = dVar20 - dVar18;
    }
    else {
      uVar23 = SUB84(DAT_14c8464e8,0);
      dVar17 = (double)CONCAT44((int)((ulonglong)DAT_14c8464e8 >> 0x20),fVar22);
      dVar5 = DAT_14c8464f0;
      dVar9 = DAT_14c8464e0;
    }
  }
  uVar26 = (undefined4)((ulonglong)dVar17 >> 0x20);
  if ((((dVar9 != DAT_14c8464e0) || (NAN(dVar9) || NAN(DAT_14c8464e0))) ||
      ((double)CONCAT44(uVar26,uVar23) != DAT_14c8464e8)) ||
     (NAN((double)CONCAT44(uVar26,uVar23)) || NAN(DAT_14c8464e8))) {
LAB_143cf4a2c:
    if (param_1[1] == 0) {
LAB_143cf4eb5:
      lVar14 = 0;
    }
    else {
      uVar4 = *param_1;
      lVar14 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           ((*(uint *)(plVar15 + 2) != param_1[1] || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
        goto LAB_143cf4eb5;
        lVar14 = *plVar15;
      }
    }
    local_f8 = dVar2;
    local_ec = param_2;
    local_e8 = dVar1;
    local_e0 = dVar3;
    (**(code **)(**(longlong **)(&DAT_00001ce8 + lVar14) + 0x710))
              (*(longlong **)(&DAT_00001ce8 + lVar14),&local_d8);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = local_d0;
    auVar16 = divpd(auVar16 << 0x40,_DAT_1499387d0);
    auVar16 = roundpd(auVar16,auVar16,3);
    auVar19 = roundpd(in_XMM2,ZEXT816(0),3);
    dVar17 = (0.0 - auVar16._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar20 = (local_d0 - auVar16._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar18 = (0.0 - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar8 = (0.0 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar1 = sin(dVar17);
    dVar2 = sin(dVar20);
    dVar3 = sin(dVar18);
    sin(dVar8);
    dVar17 = cos(dVar17);
    dVar20 = cos(dVar20);
    dVar18 = cos(dVar18);
    cos(dVar8);
    dVar6 = -(dVar20 * dVar1 * dVar3) + dVar2 * dVar17 * dVar18;
    dVar7 = dVar2 * dVar1 * dVar3 + dVar20 * dVar17 * dVar18;
    dVar8 = dVar1 * dVar2 * dVar18 - dVar17 * dVar20 * dVar3;
    dVar3 = -(dVar1 * dVar20 * dVar18) - dVar17 * dVar2 * dVar3;
    dVar21 = dVar9 * dVar6 - dVar8 * dVar5;
    dVar17 = (double)CONCAT44(uVar26,uVar23) * dVar8 - dVar9 * dVar3;
    dVar20 = dVar5 * dVar3 - (double)CONCAT44(uVar26,uVar23) * dVar6;
    dVar20 = dVar20 + dVar20;
    dVar21 = dVar21 + dVar21;
    dVar17 = dVar17 + dVar17;
    dVar18 = 1.0 / (double)local_ec;
    dVar1 = local_e8 + dVar18 * ((dVar17 * dVar3 - dVar21 * dVar6) + dVar7 * dVar20 + dVar9);
    dVar2 = local_f8 +
            ((dVar6 * dVar20 - dVar8 * dVar17) + dVar7 * dVar21 + (double)CONCAT44(uVar26,uVar23)) *
            dVar18;
    dVar3 = local_e0 + (dVar7 * dVar17 + dVar5 + (dVar21 * dVar8 - dVar20 * dVar3)) * dVar18;
  }
  else if ((dVar5 != DAT_14c8464f0) || (NAN(dVar5) || NAN(DAT_14c8464f0))) goto LAB_143cf4a2c;
  lVar14 = FUN_140153468();
  if (*(int *)(lVar14 + 0x438) != 0) {
    lVar12 = FUN_140153468(param_1);
    lVar14 = *(longlong *)(lVar12 + 0x4c0) + 0x30;
    if (*(longlong *)(lVar12 + 0x4c0) == 0) {
      lVar14 = lVar12 + 0x440;
    }
    if (*(int *)(lVar14 + 0x78) < 1) {
      dVar5 = 1.0;
    }
    else {
      FUN_140153468(param_1);
      fVar24 = (float)FUN_1448c9f94();
      dVar5 = (double)fVar24;
    }
    dVar1 = dVar1 + dVar5 * *(double *)(param_1 + 0x80);
    dVar2 = dVar2 + *(double *)(param_1 + 0x82) * dVar5;
    dVar3 = dVar3 + *(double *)(param_1 + 0x84) * dVar5;
  }
  if (param_1[1] == 0) {
LAB_143cf4ea7:
    lVar14 = 0;
  }
  else {
    uVar4 = *param_1;
    lVar14 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar15 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar15 == (longlong *)0x0) ||
         ((*(uint *)(plVar15 + 2) != param_1[1] || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
      goto LAB_143cf4ea7;
      lVar14 = *plVar15;
    }
  }
  if (((&DAT_00001100)[lVar14] == '\x03') &&
     (lVar14 = FUN_140153468(param_1), *(char *)(lVar14 + 0x168) == '\0')) {
    dVar3 = dVar3 + param_3[2];
  }
  *param_3 = dVar1;
  param_3[1] = dVar2;
  param_3[2] = dVar3;
  uVar4 = *(uint *)((longlong)param_3 + 4);
  uVar10 = *(uint *)(param_3 + 1);
  uVar11 = *(uint *)((longlong)param_3 + 0xc);
  param_1[0x86] = *(uint *)param_3;
  param_1[0x87] = uVar4;
  param_1[0x88] = uVar10;
  param_1[0x89] = uVar11;
  *(double *)(param_1 + 0x8a) = param_3[2];
LAB_143cf4e33:
  if ((local_c0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cf4ebc FUN_143cf4ebc body=544 status=ok
// SIG undefined FUN_143cf4ebc(void)

void FUN_143cf4ebc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  
  if ((param_1[0xa6] & 1) != 0) {
    return;
  }
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) &&
     ((int)uVar1 < (int)DAT_14c9647dc)) {
    param_2 = (undefined8 *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  }
  lVar3 = FUN_140153468();
  if ((*(byte *)(lVar3 + 0xf8) & 4) == 0) {
    return;
  }
  if (param_1[1] == 0) {
LAB_143cf50bf:
    lVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    param_2 = (undefined8 *)(ulonglong)uVar1;
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (int)DAT_14c9647dc)) {
      param_2 = (undefined8 *)(ulonglong)(uVar1 >> 0x10);
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (longlong)param_2 * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_143cf50bf;
      lVar3 = *plVar4;
    }
  }
  if ((*(byte *)(*(longlong *)(lVar3 + 0x1f0) + 0x550) & 0x10) != 0) {
    return;
  }
  lVar3 = FUN_140153468(param_1);
  bVar8 = *(byte *)(lVar3 + 0xa0) & 1;
  lVar3 = FUN_140153468(param_1);
  if (*(char *)(lVar3 + 0x168) != '\x02') goto LAB_143cf5066;
  uVar1 = param_1[1];
  if (((uVar1 == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) ||
     (param_2 = (undefined8 *)(ulonglong)DAT_14c9647dc, (int)DAT_14c9647dc <= (int)uVar2)) {
    if (DAT_00001100 != '\v') goto LAB_143cf5066;
LAB_143cf50d0:
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 == (longlong *)0x0) || (*(uint *)(plVar4 + 2) != uVar1)) ||
       ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar4;
    }
    if ((&DAT_00001100)[lVar3] != '\v') goto LAB_143cf5066;
    if ((((int)DAT_14c9647dc <= (int)uVar2) ||
        (puVar6 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        puVar6 == (undefined8 *)0x0)) ||
       ((*(uint *)(puVar6 + 2) != uVar1 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
    goto LAB_143cf50d0;
    uVar5 = *puVar6;
  }
  param_2 = &DAT_14cb76310;
  FUN_1409df526(uVar5,&DAT_14cb76310);
  bVar8 = 0;
LAB_143cf5066:
  lVar3 = FUN_140153468(param_1);
  bVar9 = bVar8;
  if ((*(byte *)(lVar3 + 0xf8) & 0x40) != 0) {
    lVar3 = FUN_140153468(param_1);
    bVar9 = bVar8 + 2;
    if (*(char *)(lVar3 + 0x168) == '\0') {
      bVar9 = bVar8;
    }
  }
  lVar3 = FUN_140153468(param_1);
  uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(char *)(lVar3 + 0xa0) * '\x02') &
          0xffffffffffffff04;
  FUN_141105826(param_1,CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 | bVar9));
  return;
}



// FUNCTION 143cf50dc FUN_143cf50dc body=70 status=ok
// SIG undefined FUN_143cf50dc(void)

void FUN_143cf50dc(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    lVar1 = FUN_140153468();
    if (*(char *)(lVar1 + 0x168) == '\0') {
      lVar1 = FUN_140153468(param_1);
      if (*(char *)(lVar1 + 0x558) == '\x02') {
        FUN_141105826(param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143cf5122 FUN_143cf5122 body=1499 status=ok
// SIG undefined FUN_143cf5122(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cf5122(uint *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  double dVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong *plVar22;
  longlong *plVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  uint *puVar21;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar11 = param_1[1];
  plVar23 = _DAT_00001ce8;
  if (uVar11 == 0) {
    fVar25 = (float)param_1[0x7f];
    lVar14 = 0;
    lVar15 = 0;
    if (0.0 < fVar25) {
LAB_143cf5211:
      *(float *)(lVar14 + 0x1fc) = fVar25;
      param_1[0x7f] = 0;
      uVar11 = param_1[1];
      if (uVar11 != 0) goto LAB_143cf522e;
LAB_143cf562a:
      lVar15 = 0;
    }
  }
  else {
    uVar18 = *param_1;
    if (((int)uVar18 < 0) || (DAT_14c9647dc <= (int)uVar18)) {
      fVar25 = (float)param_1[0x7f];
      if (0.0 < fVar25) goto LAB_143cf56f7;
    }
    else {
      plVar23 = (longlong *)
                ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
      if (((plVar23 == (longlong *)0x0) || (*(uint *)(plVar23 + 2) != uVar11)) ||
         ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) {
        lVar14 = 0;
      }
      else {
        lVar14 = *plVar23;
      }
      plVar23 = *(longlong **)(&DAT_00001ce8 + lVar14);
      fVar25 = (float)param_1[0x7f];
      if (0.0 < fVar25) {
        if ((((int)uVar18 < DAT_14c9647dc) &&
            (plVar22 = (longlong *)
                       ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
            plVar22 != (longlong *)0x0)) &&
           ((*(uint *)(plVar22 + 2) == uVar11 && ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)))) {
          lVar14 = *plVar22;
          goto LAB_143cf5211;
        }
LAB_143cf56f7:
        lVar14 = 0;
        goto LAB_143cf5211;
      }
    }
LAB_143cf522e:
    uVar18 = *param_1;
    lVar15 = 0;
    if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c9647dc)) {
      plVar22 = (longlong *)
                ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
      if ((plVar22 == (longlong *)0x0) ||
         ((*(uint *)(plVar22 + 2) != uVar11 || ((*(uint *)(plVar22 + 1) & 0x10200000) != 0))))
      goto LAB_143cf562a;
      lVar15 = *plVar22;
    }
  }
  *(byte *)(lVar15 + 0x34a) = *(byte *)(lVar15 + 0x34a) & 0xfe;
  if (*(byte *)(plVar23 + 0x2f) < 2) goto LAB_143cf5572;
  if (((byte)param_1[0xa6] & 0x20) != 0) {
    *(byte *)(param_1 + 0xa6) = (byte)param_1[0xa6] & 0xdf;
    if (param_1[1] == 0) {
LAB_143cf5631:
      uVar19 = 0;
    }
    else {
      uVar11 = *param_1;
      uVar19 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        puVar20 = (undefined8 *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((puVar20 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar20 + 2) != param_1[1] || ((*(uint *)(puVar20 + 1) & 0x10200000) != 0))))
        goto LAB_143cf5631;
        uVar19 = *puVar20;
      }
    }
    FUN_1409df526(uVar19,&DAT_14cb76310);
  }
  puVar21 = param_1;
  dVar13 = (double)FUN_140153468();
  uVar17 = SUB84(puVar21,0);
  if ((*(byte *)((longlong)dVar13 + 0xa0) & 8) != 0) {
    lVar14 = plVar23[0x39];
    uVar24 = (undefined4)DAT_14c8464f8;
    uVar26 = DAT_14c8464f8._4_4_;
    if (lVar14 != 0) {
      dVar5 = *(double *)(lVar14 + 0x240);
      dVar6 = *(double *)(lVar14 + 0x248);
      dVar7 = *(double *)(lVar14 + 0x250);
      dVar8 = *(double *)(lVar14 + 600);
      pdVar16 = *(double **)(lVar14 + 0x228);
      local_88 = dVar5;
      uStack_80 = dVar6;
      local_78 = dVar7;
      uStack_70 = dVar8;
      if (pdVar16 == (double *)0x0) {
        uVar17 = 0x40;
        pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
        dVar13 = DAT_14c8463d8;
        *pdVar16 = DAT_14c8463d0;
        pdVar16[1] = dVar13;
        dVar13 = DAT_14c8463e8;
        pdVar16[2] = DAT_14c8463e0;
        pdVar16[3] = dVar13;
        dVar13 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar16[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar16[5] = dVar13;
        dVar13 = (double)CONCAT44(DAT_14c846508._4_4_,(undefined4)DAT_14c846508);
        pdVar16[6] = dVar13;
        *(double **)(lVar14 + 0x228) = pdVar16;
      }
      auVar1._8_4_ = (int)-(ulonglong)(dVar6 != pdVar16[1]);
      auVar1._0_8_ = -(ulonglong)(dVar5 != *pdVar16);
      auVar1._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar16[1]) >> 0x20);
      uVar11 = movmskpd(SUB84(dVar13,0),auVar1);
      auVar3._8_4_ = (int)-(ulonglong)(dVar8 != pdVar16[3]);
      auVar3._0_8_ = -(ulonglong)(dVar7 != pdVar16[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar16[3]) >> 0x20);
      uVar18 = movmskpd(uVar17,auVar3);
      uVar17 = 0;
      dVar13 = (double)(ulonglong)uVar11;
      if ((uVar18 & 0x3fffffff) != 0 || uVar11 != 0) {
        puVar20 = &local_88;
        *(undefined4 *)(pdVar16 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar16 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar16 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar16 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar16 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar16 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(puVar20,&local_68);
        uVar17 = SUB84(puVar20,0);
        pdVar16[6] = local_58;
        pdVar16[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar16[5] = (double)CONCAT44(uStack_5c,uStack_60);
        dVar13 = local_58;
      }
      uVar24 = SUB84(pdVar16[4],0);
      uVar26 = (int)((ulonglong)pdVar16[4] >> 0x20);
    }
    if (((double)CONCAT44(uVar26,uVar24) != 0.0) || (NAN((double)CONCAT44(uVar26,uVar24)))) {
      lVar14 = plVar23[0x39];
      if (lVar14 == 0) {
        local_a0 = 0;
        local_98 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        uStack_90 = (double)CONCAT44(DAT_14c846508._4_4_,(undefined4)DAT_14c846508);
      }
      else {
        dVar5 = *(double *)(lVar14 + 0x240);
        dVar6 = *(double *)(lVar14 + 0x248);
        dVar7 = *(double *)(lVar14 + 0x250);
        dVar8 = *(double *)(lVar14 + 600);
        pdVar16 = *(double **)(lVar14 + 0x228);
        local_88 = dVar5;
        uStack_80 = dVar6;
        local_78 = dVar7;
        uStack_70 = dVar8;
        if (pdVar16 == (double *)0x0) {
          uVar17 = 0x40;
          pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
          dVar13 = DAT_14c8463d8;
          *pdVar16 = DAT_14c8463d0;
          pdVar16[1] = dVar13;
          dVar13 = DAT_14c8463e8;
          pdVar16[2] = DAT_14c8463e0;
          pdVar16[3] = dVar13;
          uVar9 = DAT_14c846500._4_4_;
          uVar26 = (undefined4)DAT_14c846500;
          uVar24 = DAT_14c8464f8._4_4_;
          *(undefined4 *)(pdVar16 + 4) = (undefined4)DAT_14c8464f8;
          *(undefined4 *)((longlong)pdVar16 + 0x24) = uVar24;
          *(undefined4 *)(pdVar16 + 5) = uVar26;
          *(undefined4 *)((longlong)pdVar16 + 0x2c) = uVar9;
          dVar13 = (double)CONCAT44(DAT_14c846508._4_4_,(undefined4)DAT_14c846508);
          pdVar16[6] = dVar13;
          *(double **)(lVar14 + 0x228) = pdVar16;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar16[1]);
        auVar2._0_8_ = -(ulonglong)(dVar5 != *pdVar16);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar16[1]) >> 0x20);
        iVar12 = movmskpd(SUB84(dVar13,0),auVar2);
        auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar16[3]);
        auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar16[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar16[3]) >> 0x20);
        uVar11 = movmskpd(uVar17,auVar4);
        if ((uVar11 & 0x3fffffff) != 0 || iVar12 != 0) {
          *(undefined4 *)(pdVar16 + 2) = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar16 + 0x14) = local_78._4_4_;
          *(undefined4 *)(pdVar16 + 3) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar16 + 0x1c) = uStack_70._4_4_;
          *(undefined4 *)pdVar16 = (undefined4)local_88;
          *(undefined4 *)((longlong)pdVar16 + 4) = local_88._4_4_;
          *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_80._4_4_;
          FUN_1448052ee(&local_88,&local_68);
          pdVar16[6] = local_58;
          *(undefined4 *)(pdVar16 + 4) = local_68;
          *(undefined4 *)((longlong)pdVar16 + 0x24) = uStack_64;
          *(undefined4 *)(pdVar16 + 5) = uStack_60;
          *(undefined4 *)((longlong)pdVar16 + 0x2c) = uStack_5c;
        }
        local_a0 = 0;
        local_98 = pdVar16[5];
        uStack_90 = pdVar16[6];
        if (plVar23[0x39] != 0) {
          local_a8 = 0;
          local_b0 = 0;
          local_b8 = 0;
          FUN_1407fd932(plVar23[0x39],&DAT_14c8464e0,&local_a0,1);
        }
      }
    }
  }
  if (((char)plVar23[0x2f] == '\x03') &&
     (lVar14 = FUN_140153468(param_1), (*(byte *)(lVar14 + 0xa0) & 0x80) != 0)) {
    if (param_1[1] == 0) {
LAB_143cf56cc:
      lVar14 = 0;
    }
    else {
      uVar11 = *param_1;
      lVar14 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar22 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((plVar22 == (longlong *)0x0) ||
           ((*(uint *)(plVar22 + 2) != param_1[1] || ((*(uint *)(plVar22 + 1) & 0x10200000) != 0))))
        goto LAB_143cf56cc;
        lVar14 = *plVar22;
      }
    }
    lVar15 = FUN_140153468(param_1);
    local_88 = *(double *)(*(longlong *)(lVar15 + 0x10) + 0x18);
    FUN_1400bc8c2(lVar14 + 0x1cb0);
  }
  cVar10 = (**(code **)(*plVar23 + 0x700))(plVar23);
  if (cVar10 != '\0') {
    lVar14 = FUN_140153468(param_1);
    if ((*(byte *)(lVar14 + 0xfa) & 0x10) != 0) {
      lVar14 = FUN_140153468(param_1);
      local_88 = *(double *)(*(longlong *)(lVar14 + 0x10) + 0x18);
      FUN_1459cbd7e(plVar23,&DAT_14cb76318,0);
    }
    lVar14 = FUN_140153468(param_1);
    if ((*(byte *)(lVar14 + 0xfa) & 0x20) != 0) {
      lVar14 = FUN_140153468(param_1);
      local_88 = *(double *)(*(longlong *)(lVar14 + 0x10) + 0x18);
      FUN_1459cbd7e(plVar23,&DAT_14cb76340,0);
    }
  }
LAB_143cf5572:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cf56fe FUN_143cf56fe body=1034 status=ok
// SIG undefined FUN_143cf56fe(void)

double * FUN_143cf56fe(longlong *param_1,double *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  double *pdVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_a8 [32];
  double *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  double local_48;
  double local_40;
  double local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = param_1[1];
  param_2[2] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar11 = (undefined4)DAT_14c8464e8;
  uVar10 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar10;
  *(undefined4 *)(param_2 + 1) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  if (*param_3 != '\x0e') {
    if ((((((*(byte *)(*(longlong *)param_1[2] + 0xf9) & 4) == 0) || (*(int *)(lVar5 + 0xec) == 0))
         || (uVar2 = *(uint *)(lVar5 + 0xe8), (int)uVar2 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar2 ||
         (puVar6 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         puVar6 == (undefined8 *)0x0)))) ||
       ((*(int *)(puVar6 + 2) != *(int *)(lVar5 + 0xec) ||
        ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) {
      lVar5 = param_1[4];
      uVar9 = *(undefined8 *)param_1[3];
    }
    else {
      if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
        uVar9 = *puVar6;
      }
      else {
        uVar9 = 0;
      }
      lVar5 = param_1[4];
    }
    local_88 = &local_48;
    local_48 = 0.0;
    local_80 = (undefined4 *)0x0;
    FUN_1418a136c(param_3,param_2,lVar5,uVar9);
    goto LAB_143cf59a9;
  }
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x10);
  if ((((iVar1 == 0) || (uVar2 = *(uint *)(lVar3 + 0xc), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0 || ((int)plVar8[2] != iVar1)) ||
        ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))))) || (*plVar8 == 0)) {
    if ((*(double *)(lVar3 + 0x18) == 0.0) && (!NAN(*(double *)(lVar3 + 0x18)))) {
      if ((*(double *)(lVar3 + 0x20) == 0.0) && (!NAN(*(double *)(lVar3 + 0x20)))) {
        if ((*(double *)(lVar3 + 0x28) == 0.0) && (!NAN(*(double *)(lVar3 + 0x28))))
        goto LAB_143cf59a9;
      }
    }
  }
  if (*(int *)(lVar5 + 0xf4) == 0) {
LAB_143cf5af2:
    local_28 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar5 + 0xf0);
    local_28 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(lVar5 + 0xf4) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_143cf5af2;
      local_28 = *puVar6;
    }
  }
  local_29 = 0;
  local_58 = *(undefined8 *)(lVar3 + 0x28);
  local_68 = *(undefined4 *)(lVar3 + 0x18);
  uStack_64 = *(undefined4 *)(lVar3 + 0x1c);
  uStack_60 = *(undefined4 *)(lVar3 + 0x20);
  uStack_5c = *(undefined4 *)(lVar3 + 0x24);
  if (iVar1 == 0) {
LAB_143cf5af9:
    uVar9 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0xc);
    uVar9 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != iVar1 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_143cf5af9;
      uVar9 = *puVar6;
    }
  }
  local_70 = &local_28;
  local_78 = &local_29;
  local_80 = &local_68;
  pdVar7 = (double *)&DAT_14c8464e0;
  local_88 = (double *)&DAT_14c8464e0;
  FUN_148814c08(*(undefined8 *)param_1[2],&local_48,*(undefined8 *)param_1[3],uVar9);
  lVar5 = *(longlong *)(*(longlong *)param_1[3] + 0x1c8);
  if ((*(byte *)(*(longlong *)param_1[2] + 0xf9) & 4) == 0) {
    if (lVar5 == 0) {
      pdVar7 = (double *)&DAT_14c8464e0;
      dVar13 = DAT_14c8464f0;
    }
    else {
      pdVar7 = (double *)(lVar5 + 0x260);
      dVar13 = *(double *)(lVar5 + 0x270);
    }
    local_40 = local_40 - pdVar7[1];
    dVar12 = local_48 - *pdVar7;
    local_38 = local_38 - dVar13;
  }
  else {
    if (lVar5 == 0) {
      uVar10 = SUB84(DAT_14c8464f0,0);
      uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar10 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
      uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
      pdVar7 = (double *)(lVar5 + 0x260);
    }
    local_38 = (double)CONCAT44(uVar11,uVar10) - local_38;
    local_40 = pdVar7[1] - local_40;
    dVar12 = *pdVar7 - local_48;
  }
  dVar13 = local_38 * local_38 + dVar12 * dVar12 + local_40 * local_40;
  if ((dVar13 != 1.0) || (NAN(dVar13))) {
    if (9.99999993922529e-09 <= dVar13) {
      dVar13 = 1.0 / SQRT(dVar13);
      local_38 = local_38 * dVar13;
      local_40 = local_40 * dVar13;
      dVar12 = dVar12 * dVar13;
    }
    else {
      dVar12 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      local_40 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_38 = DAT_14c8464f0;
    }
  }
  *param_2 = dVar12;
  param_2[1] = local_40;
  param_2[2] = local_38;
LAB_143cf59a9:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cf5b0a FUN_143cf5b0a body=485 status=ok
// SIG undefined FUN_143cf5b0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_143cf5b0a(uint *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  uVar1 = param_1[1];
  if (((uVar1 == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) {
    if ((~_DAT_00000498 & 3) != 0) {
      return param_2;
    }
  }
  else {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 == (longlong *)0x0) || (*(uint *)(plVar5 + 2) != uVar1)) ||
       ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar5;
    }
    if ((~*(uint *)(lVar4 + 0x498) & 3) != 0) {
      return param_2;
    }
    if ((((int)uVar2 < DAT_14c9647dc) &&
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0)) &&
       ((*(uint *)(plVar5 + 2) == uVar1 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      lVar4 = *plVar5;
      goto LAB_143cf5bdb;
    }
  }
  lVar4 = 0;
LAB_143cf5bdb:
  dVar6 = *(double *)(param_1 + 0x52);
  dVar7 = *(double *)(param_1 + 0x54);
  dVar9 = dVar6 * dVar6 + dVar7 * dVar7;
  dVar8 = 0.0;
  if (9.99999993922529e-09 < dVar9) {
    dVar8 = 1.0 / SQRT(dVar9);
    dVar6 = dVar6 * dVar8;
    dVar7 = dVar7 * dVar8;
    dVar8 = dVar8 * 0.0;
  }
  if (((9.999999747378752e-05 < ABS(dVar8)) || (9.999999747378752e-05 < ABS(dVar6))) ||
     (fVar10 = 0.0, 9.999999747378752e-05 < ABS(dVar7))) {
    fVar10 = (float)(dVar8 * *(double *)(lVar4 + 0x510) +
                    dVar6 * *(double *)(lVar4 + 0x500) + dVar7 * *(double *)(lVar4 + 0x508));
  }
  lVar3 = FUN_140153468();
  lVar4 = *(longlong *)(lVar3 + 0x550) + 0x30;
  if (*(longlong *)(lVar3 + 0x550) == 0) {
    lVar4 = lVar3 + 0x4d0;
  }
  fVar10 = (float)FUN_1448c9f94(lVar4,fVar10,0x3f800000);
  return param_2 * fVar10;
}



// FUNCTION 143cf5cf0 FUN_143cf5cf0 body=141 status=ok
// SIG undefined FUN_143cf5cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cf5cf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 8) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143cf5d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(_DAT_00000000 + 0xe8))(0,param_1 + 0x110);
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8),param_1 + 0x110);
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
                    /* WARNING: Could not recover jumptable at 0x000143cf5d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143cf5d7e FUN_143cf5d7e body=55 status=ok
// SIG undefined FUN_143cf5d7e(void)

bool FUN_143cf5d7e(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_140153468();
  if ((lVar1 == 0) || ((*(byte *)(param_1 + 0x298) & 2) != 0)) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_140153468(param_1);
    bVar2 = (*(byte *)(lVar1 + 0x101) & 0x10) == 0;
  }
  return bVar2;
}



// FUNCTION 143cf5db6 FUN_143cf5db6 body=62 status=ok
// SIG undefined FUN_143cf5db6(void)

undefined8 FUN_143cf5db6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  lVar1 = FUN_140153468();
  if (lVar1 != 0) {
    lVar1 = FUN_140153468(param_1);
    if (*(char *)(lVar1 + 0x168) == '\x01') {
      uVar2 = *(undefined4 *)(param_1 + 0x50);
      uVar3 = 0;
    }
  }
  return CONCAT44(uVar3,uVar2);
}



// FUNCTION 143cf5df4 FUN_143cf5df4 body=41 status=ok
// SIG undefined FUN_143cf5df4(void)

void FUN_143cf5df4(void)

{
  DAT_14cb763b8 = 0;
  if (DAT_14cb763b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65962();
  return;
}



// FUNCTION 143cf5e22 FUN_143cf5e22 body=295 status=ok
// SIG undefined FUN_143cf5e22(void)

void FUN_143cf5e22(longlong *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48 [2];
  undefined8 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140ac4d32();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140ac4d32();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        local_58 = *param_2;
        FUN_1446dcdd4(&local_50);
        if (((local_4c != 0 && local_50 != 0) && (0 < param_3)) && (local_50 != DAT_14c948000)) {
          puVar4 = local_38;
          if ((local_4c < 2) && (local_2c < 1)) {
            puVar4 = local_48;
          }
          if (local_4c < 1) {
            local_60 = DAT_14c948620;
            local_68 = DAT_14c948618;
          }
          else {
            local_60 = *(undefined4 *)(puVar4 + 1);
            local_68 = *puVar4;
          }
          (**(code **)(*plVar3 + 0x28))(plVar3,&local_68,param_3);
        }
        if (local_38 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cf5f4a FUN_143cf5f4a body=69 status=ok
// SIG undefined FUN_143cf5f4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cf5f4a(void)

{
  _DAT_14cb764a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cf5f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb764a8,1);
  return;
}



// FUNCTION 143cf5f90 FUN_143cf5f90 body=1754 status=ok
// SIG undefined FUN_143cf5f90(void)

void FUN_143cf5f90(longlong param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined4 local_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined1 local_d0 [24];
  longlong local_b8;
  undefined8 local_a8;
  int local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [24];
  longlong local_70;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_2 == 0) || (*(int *)(param_1 + 0x4c) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0x48), (int)uVar1 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar1 ||
       (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0)) ||
      ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x4c) ||
       ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))))) goto LAB_143cf5ffc;
  local_f0 = *(undefined8 *)param_2;
  local_e8 = param_2[2];
  FUN_1448075d0(&local_a8);
  if (DAT_14cb758b8 == 0) {
    local_70 = CONCAT44(uStack_8c,local_90);
  }
  else {
    lVar7 = FUN_144837462(DAT_14cb758b8,&local_a8);
    if (CONCAT44(uStack_8c,local_90) != 0) {
      FUN_1400020a8();
    }
    if ((lVar7 == 0) || (*(char *)(lVar7 + 0x48) != '\x01')) goto LAB_143cf5ffc;
    if ((longlong)*(int *)(param_1 + 0x90) != 0) {
      lVar7 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x88) + lVar7) == *param_2) &&
           (*(int *)(*(longlong *)(param_1 + 0x88) + 8 + lVar7) == param_2[2])) goto LAB_143cf5ffc;
        lVar7 = lVar7 + 0x70;
      } while ((longlong)*(int *)(param_1 + 0x90) * 0x70 - lVar7 != 0);
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
LAB_143cf65f4:
      plVar8 = (longlong *)0x0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x48);
      plVar8 = (longlong *)0x0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x4c) ||
            ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143cf65f4;
        plVar8 = (longlong *)*puVar5;
      }
    }
    lVar7 = (**(code **)(*plVar8 + 0x1058))();
    iVar6 = *(int *)(param_1 + 0x4c);
    if (lVar7 == 0) {
      if (iVar6 == 0) {
LAB_143cf6610:
        plVar8 = (longlong *)0x0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x48);
        plVar8 = (longlong *)0x0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(int *)(puVar5 + 2) != iVar6 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
          goto LAB_143cf6610;
          plVar8 = (longlong *)*puVar5;
        }
      }
      if ((*(byte *)(plVar8 + 0x84) & 2) != 0) {
        cVar2 = (**(code **)(*plVar8 + 0x6c8))();
        if (cVar2 != '\0') goto LAB_143cf5ffc;
        iVar6 = *(int *)(param_1 + 0x4c);
      }
    }
    if (iVar6 == 0) {
      plVar8 = (longlong *)0x0;
      lVar7 = 0;
      if (DAT_00000178 != '\x03') {
LAB_143cf625e:
        if ((*(byte *)(plVar8 + 0x84) & 2) != 0) {
          cVar2 = (**(code **)(*plVar8 + 0x6c8))();
          iVar6 = *(int *)(param_1 + 0x4c);
          if (cVar2 != '\0') {
            if (iVar6 == 0) {
LAB_143cf661e:
              plVar8 = (longlong *)0x0;
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x48);
              plVar8 = (longlong *)0x0;
              if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                puVar5 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((puVar5 == (undefined8 *)0x0) ||
                   ((*(int *)(puVar5 + 2) != iVar6 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
                goto LAB_143cf661e;
                plVar8 = (longlong *)*puVar5;
              }
            }
            lVar7 = (**(code **)(*plVar8 + 0x1058))();
            if (lVar7 == 0) goto LAB_143cf5ffc;
            FUN_148815630(&local_a8);
            local_a8 = *(undefined8 *)param_2;
            local_a0 = param_2[2];
            iVar6 = *(int *)(param_1 + 0x90);
            *(uint *)(param_1 + 0x90) = iVar6 + 1U;
            if (*(uint *)(param_1 + 0x94) < iVar6 + 1U) {
              FUN_14881c606(param_1 + 0x88,iVar6);
            }
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x70);
            *(int *)(puVar5 + 1) = local_a0;
            *puVar5 = local_a8;
            FUN_14014e938(puVar5 + 2,&local_98);
            *(uint *)(puVar5 + 9) = local_60;
            *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_5c;
            *(undefined4 *)(puVar5 + 10) = uStack_58;
            *(undefined4 *)((longlong)puVar5 + 0x54) = uStack_54;
            *(uint *)(puVar5 + 0xb) = local_50;
            *(undefined4 *)((longlong)puVar5 + 0x5c) = uStack_4c;
            *(undefined4 *)(puVar5 + 0xc) = uStack_48;
            *(undefined4 *)((longlong)puVar5 + 100) = uStack_44;
            *(undefined1 *)(puVar5 + 0xd) = local_40;
            FUN_143cf666c(param_1);
            goto LAB_143cf60c0;
          }
        }
        if (iVar6 != 0) goto LAB_143cf637e;
LAB_143cf6617:
        lVar7 = 0;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x48);
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
        if (DAT_00000178 != '\x03') goto LAB_143cf6664;
      }
      else {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != iVar6)) ||
           ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
          lVar7 = 0;
        }
        else {
          lVar7 = *plVar8;
        }
        if (*(char *)(lVar7 + 0x178) != '\x03') {
          if ((((int)uVar1 < DAT_14c9647dc) &&
              (puVar5 = (undefined8 *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              puVar5 != (undefined8 *)0x0)) &&
             ((*(int *)(puVar5 + 2) == iVar6 && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
            plVar8 = (longlong *)*puVar5;
            goto LAB_143cf625e;
          }
LAB_143cf6664:
          plVar8 = (longlong *)0x0;
          goto LAB_143cf625e;
        }
      }
LAB_143cf637e:
      uVar1 = *(uint *)(param_1 + 0x48);
      lVar7 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != iVar6 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
        goto LAB_143cf6617;
        lVar7 = *plVar8;
      }
    }
    if (((((*(int *)(lVar7 + 0x9bc) == 0) || (uVar1 = *(uint *)(lVar7 + 0x9b8), (int)uVar1 < 0)) ||
         (DAT_14c9647dc <= (int)uVar1)) ||
        ((plVar8 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(lVar7 + 0x9bc))))) ||
       (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
        (plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0)))) goto LAB_143cf5ffc;
    uVar3 = FUN_140427846();
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar3);
    if (plVar8 == (longlong *)0x0) goto LAB_143cf5ffc;
    uVar3 = FUN_140427846();
    plVar4 = (longlong *)FUN_144718840(plVar8,uVar3);
    if (plVar4 == (longlong *)0x0 || plVar8 == plVar4) goto LAB_143cf5ffc;
    FUN_148815630(&local_a8);
    local_a8 = *(undefined8 *)param_2;
    local_a0 = param_2[2];
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_e0);
    local_98 = (byte)local_e0;
    local_e0 = local_e0 & 0xffffff00;
    uStack_94 = (undefined4)uStack_dc;
    local_90 = (undefined4)((ulonglong)uStack_dc >> 0x20);
    uStack_dc = 0;
    FUN_1404e49fa(local_88,local_d0);
    local_97 = local_e0._1_1_;
    local_e0._0_2_ = (ushort)(byte)local_e0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    local_100 = DAT_14cb76478;
    local_f8 = DAT_14cb76480;
    FUN_144928d62(local_88,5);
    local_e0 = local_e0 & 0xffffff00;
    uStack_dc = 0;
    uStack_d4 = 0;
    FUN_144976b9c(&local_e0,DAT_14cb76490);
    local_60 = local_e0;
    uStack_5c = (undefined4)uStack_dc;
    uStack_58 = uStack_dc._4_4_;
    uStack_54 = uStack_d4;
    local_e0 = local_e0 & 0xffffff00;
    uStack_dc = 0;
    uStack_d4 = 0;
    FUN_144976b9c(&local_e0,DAT_14cb76498);
    local_50 = local_e0;
    uStack_4c = (undefined4)uStack_dc;
    uStack_48 = uStack_dc._4_4_;
    uStack_44 = uStack_d4;
    iVar6 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar6 + 1U) {
      FUN_14881c606(param_1 + 0x88,iVar6);
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar6 * 0x70);
    *(int *)(puVar5 + 1) = local_a0;
    *puVar5 = local_a8;
    FUN_14014e938(puVar5 + 2,&local_98);
    *(uint *)(puVar5 + 9) = local_60;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_5c;
    *(undefined4 *)(puVar5 + 10) = uStack_58;
    *(undefined4 *)((longlong)puVar5 + 0x54) = uStack_54;
    *(uint *)(puVar5 + 0xb) = local_50;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = uStack_4c;
    *(undefined4 *)(puVar5 + 0xc) = uStack_48;
    *(undefined4 *)((longlong)puVar5 + 100) = uStack_44;
    *(undefined1 *)(puVar5 + 0xd) = local_40;
    FUN_143cf666c(param_1);
  }
LAB_143cf60c0:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_143cf5ffc:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cf666c FUN_143cf666c body=2146 status=ok
// SIG undefined FUN_143cf666c(void)

undefined8 FUN_143cf666c(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  int local_88;
  undefined8 *local_80;
  int local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar11 = *(int *)(param_1 + 0x4c);
  if (iVar11 != 0) {
    uVar1 = *(uint *)(param_1 + 0x48);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (puVar8 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        puVar8 != (undefined8 *)0x0)) &&
       ((*(int *)(puVar8 + 2) == iVar11 && ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
        plVar6 = (longlong *)*puVar8;
      }
      else {
        plVar6 = (longlong *)0x0;
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x1058))();
      if (plVar6 == (longlong *)0x0) {
        iVar11 = *(int *)(param_1 + 0x4c);
        if (iVar11 == 0) goto LAB_143cf6b7a;
        goto LAB_143cf66d2;
      }
      bVar17 = false;
LAB_143cf6779:
      if (*(longlong *)(param_1 + 0x30) == 0) {
        if (*(int *)(param_1 + 0x4c) == 0) {
LAB_143cf6d6f:
          lVar14 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x48);
          lVar14 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar10 == (longlong *)0x0) ||
               (((int)plVar10[2] != *(int *)(param_1 + 0x4c) ||
                ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143cf6d6f;
            lVar14 = *plVar10;
          }
        }
        local_70 = (longlong *)0x0;
        local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
        FUN_1446efa72(&local_70,0,3,0x10);
        plVar10 = local_70;
        local_68 = (longlong *)CONCAT44(local_68._4_4_,3);
        *local_70 = (longlong)&PTR_LAB_14a3a3510;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar16 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar16 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar16;
        local_70[2] = lVar9;
        *local_70 = (longlong)&PTR_FUN_14b3f6000;
        local_70[3] = 0;
        iVar11 = 0;
        if (param_1 != 0) {
          uVar1 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_70 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar16 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar16 = 0;
          }
          iVar11 = *(int *)(lVar16 + 0x10);
          if (*(int *)(lVar16 + 0x10) == 0) {
            LOCK();
            iVar11 = DAT_14c964868 + 1;
            UNLOCK();
            iVar5 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar11;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar5);
            }
            LOCK();
            iVar11 = *(int *)(lVar16 + 0x10);
            bVar18 = iVar11 == 0;
            if (bVar18) {
              *(int *)(lVar16 + 0x10) = iVar5;
              iVar11 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar11 = iVar5;
            }
          }
        }
        *(int *)((longlong)plVar10 + 0x1c) = iVar11;
        plVar10[4] = param_1;
        if (((int)local_68 == 0) || (local_70 == (longlong *)0x0)) {
LAB_143cf6e3c:
          if ((int)local_68 == 0) {
            puVar8 = (undefined8 *)0x0;
            goto LAB_143cf69ed;
          }
          if (local_70 != (longlong *)0x0) {
            puVar8 = (undefined8 *)0x0;
            (**(code **)*local_70)(local_70,0);
            FUN_1446efa72(&local_70,0,0,0x10);
            goto LAB_143cf69e0;
          }
          puVar8 = (undefined8 *)0x0;
        }
        else {
          cVar3 = (**(code **)(*local_70 + 0x30))();
          if (cVar3 == '\0') {
            goto LAB_143cf6e3c;
          }
          plVar10 = (longlong *)(lVar14 + 0x2b8);
          if (*(int *)(lVar14 + 0x2cc) < 1) {
            iVar11 = *(int *)(lVar14 + 0x2c0);
            iVar5 = *(int *)(lVar14 + 0x2c8) + -1;
            *(int *)(lVar14 + 0x2c8) = iVar5;
            if (iVar5 <= iVar11) {
              iVar5 = iVar11;
              if (0 < iVar11) {
                iVar13 = 0;
                do {
                  if (((*(int *)(*plVar10 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                      (plVar2 = *(longlong **)(*plVar10 + (longlong)iVar13 * 0x10),
                      plVar2 == (longlong *)0x0)) ||
                     (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
                    FUN_14005b288(plVar10,iVar13);
                    FUN_14005b248(plVar10);
                  }
                  else {
                    iVar13 = iVar13 + 1;
                  }
                  iVar5 = *(int *)(lVar14 + 0x2c0);
                } while (iVar13 < iVar5);
              }
              iVar13 = 2;
              if (2 < iVar5 * 2) {
                iVar13 = iVar5 * 2;
              }
              *(int *)(lVar14 + 0x2c8) = iVar13;
              if ((iVar13 < iVar11) && (*(int *)(lVar14 + 0x2c4) != iVar5)) {
                FUN_14045812c();
              }
            }
          }
          puVar8 = (undefined8 *)0x0;
          if (((int)local_68 != 0) && (local_70 != (longlong *)0x0)) {
            (**(code **)(*local_70 + 0x38))(local_70,&local_80);
            puVar8 = local_80;
          }
          iVar11 = *(int *)(lVar14 + 0x2c0);
          *(uint *)(lVar14 + 0x2c0) = iVar11 + 1U;
          if (*(uint *)(lVar14 + 0x2c4) < iVar11 + 1U) {
            FUN_1447a71f6(plVar10,iVar11);
          }
          lVar14 = *plVar10;
          lVar16 = (longlong)iVar11 * 0x10;
          *(undefined8 *)(lVar14 + lVar16) = 0;
          *(undefined4 *)(lVar14 + 8 + lVar16) = 0;
          *(longlong **)(lVar14 + lVar16) = local_70;
          local_70 = (longlong *)0x0;
          *(int *)(lVar14 + 8 + lVar16) = (int)local_68;
LAB_143cf69e0:
          local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
LAB_143cf69ed:
          if (local_70 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        *(undefined8 **)(param_1 + 0x30) = puVar8;
      }
      if ((longlong)*(int *)(param_1 + 0x90) != 0) {
        piVar12 = *(int **)(param_1 + 0x88);
        lVar14 = (longlong)*(int *)(param_1 + 0x90) * 0x70;
        bVar15 = 0;
        do {
          if (((char)piVar12[0x1a] == '\0') && (*piVar12 != 0)) {
            iVar11 = *(int *)(param_1 + 0x4c);
            if (iVar11 == 0) {
LAB_143cf6b43:
              uVar7 = 0;
LAB_143cf6b45:
              FUN_1486dc10a(uVar7,piVar12);
              *(undefined1 *)(piVar12 + 0x1a) = 1;
            }
            else {
              uVar1 = *(uint *)(param_1 + 0x48);
              if (((((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) ||
                  (puVar8 = (undefined8 *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                  puVar8 == (undefined8 *)0x0)) ||
                 ((*(int *)(puVar8 + 2) != iVar11 || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))))
              {
LAB_143cf6b01:
                uVar1 = *(uint *)(param_1 + 0x48);
                if ((int)uVar1 < 0) goto LAB_143cf6b43;
                uVar7 = 0;
                if ((int)uVar1 < DAT_14c9647dc) {
                  puVar8 = (undefined8 *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                  if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != iVar11)) ||
                     ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_143cf6b43;
                  uVar7 = *puVar8;
                }
                goto LAB_143cf6b45;
              }
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar10 = (longlong *)*puVar8;
              }
              else {
                plVar10 = (longlong *)0x0;
              }
              if ((*(byte *)(plVar10 + 0x84) & 2) == 0) goto LAB_143cf6b01;
              cVar3 = (**(code **)(*plVar10 + 0x6c8))();
              if (cVar3 == '\0') {
                iVar11 = *(int *)(param_1 + 0x4c);
                if (iVar11 == 0) goto LAB_143cf6b43;
                goto LAB_143cf6b01;
              }
              if (!bVar17) {
                local_90 = *(undefined8 *)piVar12;
                local_88 = piVar12[2];
                FUN_1448075d0(&local_70,&local_90);
                uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,&local_70,1);
                *(undefined1 *)(piVar12 + 0x1a) = uVar4;
                if (local_58 != 0) {
                  FUN_1400020a8();
                }
              }
            }
            bVar15 = bVar15 | *(byte *)(piVar12 + 0x1a) ^ 1;
          }
          piVar12 = piVar12 + 0x1c;
          lVar14 = lVar14 + -0x70;
        } while (lVar14 != 0);
        if ((bVar15 & 1) != 0) goto LAB_143cf6b7a;
      }
      plVar6 = *(longlong **)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar12 = (int *)((longlong)plVar6 + 0xc);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (*piVar12 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      uVar7 = 0;
      goto LAB_143cf6d37;
    }
LAB_143cf66d2:
    uVar1 = *(uint *)(param_1 + 0x48);
    if (((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
       ((puVar8 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        puVar8 != (undefined8 *)0x0 &&
        ((*(int *)(puVar8 + 2) == iVar11 && ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
        plVar6 = (longlong *)*puVar8;
      }
      else {
        plVar6 = (longlong *)0x0;
      }
      bVar17 = true;
      if (((*(byte *)(plVar6 + 0x84) & 2) == 0) ||
         (cVar3 = (**(code **)(*plVar6 + 0x6c8))(), cVar3 == '\0')) {
        plVar6 = (longlong *)0x0;
        goto LAB_143cf6779;
      }
    }
  }
LAB_143cf6b7a:
  if (((*(longlong *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x80) != 0)) &&
     (uVar7 = 1, 0 < *(int *)(*(longlong *)(param_1 + 0x80) + 8))) goto LAB_143cf6d37;
  uVar7 = FUN_1401cb356();
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar8 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar16 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar16 == 0) {
    LOCK();
    UNLOCK();
    lVar16 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_80[2] = lVar16;
  *local_80 = &PTR_FUN_14b3f5f90;
  local_80[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_80 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar17 = iVar11 == 0;
      if (bVar17) {
        *(int *)(lVar14 + 0x10) = iVar5;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar11 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar8 + 0x1c) = iVar11;
  puVar8[4] = FUN_143cf666c;
  local_98 = 0;
  FUN_1405f67fc(uVar7,&local_70,&local_80,L"UGbxCurrencyManager.TryConsumeEntitlements");
  *(longlong **)(param_1 + 0x78) = local_70;
  local_70 = (longlong *)0x0;
  plVar6 = *(longlong **)(param_1 + 0x80);
  *(longlong **)(param_1 + 0x80) = local_68;
  local_68 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar12 = (int *)((longlong)plVar6 + 0xc);
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (*piVar12 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar12 = (int *)((longlong)local_68 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  if (local_78 == 0) {
LAB_143cf6d04:
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_143cf6d04;
  }
  uVar7 = 1;
LAB_143cf6d37:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143cf6ecf FUN_143cf6ecf body=41 status=ok
// SIG undefined FUN_143cf6ecf(void)

void FUN_143cf6ecf(void)

{
  DAT_14cb76500 = 0;
  if (DAT_14cb764f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65a00();
  return;
}



// FUNCTION 143cf6f36 FUN_143cf6f36 body=104 status=ok
// SIG undefined FUN_143cf6f36(void)

void FUN_143cf6f36(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_145945a0a(lVar1,param_1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cf6fa0 FUN_143cf6fa0 body=283 status=ok
// SIG undefined FUN_143cf6fa0(void)

void FUN_143cf6fa0(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x61) == '\x01') {
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar3 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 0x10);
        bVar6 = iVar3 == 0;
        if (bVar6) {
          *(int *)(lVar5 + 0x10) = iVar4;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar3 = iVar4;
        }
      }
      iVar4 = *(int *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
        FUN_140155462((longlong *)(param_1 + 0x30),iVar4);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8) = CONCAT44(iVar3,uVar1);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x48);
      if (lVar5 != 0) {
        do {
          cVar2 = FUN_14069eaf4(lVar5,param_2);
          if (cVar2 != '\0') {
            FUN_141877894(param_1 + 0x40,lVar5,1);
            return;
          }
          lVar5 = *(longlong *)(lVar5 + 0x10);
        } while (lVar5 != 0);
      }
    }
  }
  return;
}



// FUNCTION 143cf70bb FUN_143cf70bb body=69 status=ok
// SIG undefined FUN_143cf70bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cf70bb(void)

{
  _DAT_14cb765e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cf70fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb765f0,1);
  return;
}



// FUNCTION 143cf7100 FUN_143cf7100 body=69 status=ok
// SIG undefined FUN_143cf7100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cf7100(void)

{
  _DAT_14cb76600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cf7142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76608,1);
  return;
}



// FUNCTION 143cf7194 FUN_143cf7194 body=591 status=ok
// SIG undefined FUN_143cf7194(void)

void FUN_143cf7194(longlong *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  float *pfVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint *puVar17;
  float fVar18;
  undefined4 uVar19;
  
  if (param_1[5] != 0) {
    lVar9 = param_1[3];
    if (0 < (longlong)(int)lVar9) {
      lVar5 = param_1[2];
      param_1[2] = 0;
      param_1[3] = 0;
      lVar16 = 0;
      do {
        uVar6 = *(ulonglong *)(lVar5 + lVar16);
        if ((((uVar6 >> 0x20 != 0) && (uVar10 = (uint)uVar6, -1 < (int)uVar10)) &&
            ((int)uVar10 < DAT_14c9647dc)) &&
           (((plVar11 = (longlong *)
                        ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0xd & 0x3fff8))),
             plVar11 != (longlong *)0x0 && ((int)plVar11[2] == (int)(uVar6 >> 0x20))) &&
            (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))))) {
          FUN_143cf6fa0(param_1 + -4);
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)(int)lVar9 * 8 != lVar16);
      if (lVar5 != 0) {
        FUN_1400020a8(lVar5);
      }
    }
    lVar9 = FUN_140ccfc10();
    piVar13 = (int *)((longlong)DAT_14cb765e0 * 0x18 + *(longlong *)(lVar9 + 0xec8));
    if (*(int *)(lVar9 + 0xed0) <= DAT_14cb765e0) {
      piVar13 = &DAT_14b3f5718;
    }
    if (DAT_14cb765e0 < 0) {
      piVar13 = &DAT_14b3f5718;
    }
    if (*piVar13 < (int)param_1[7]) {
      FUN_14881657e(param_1 + -4);
    }
    uVar4 = *(undefined1 *)((longlong)param_1 + 0x41);
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    lVar9 = (**(code **)(*param_1 + 0x48))(param_1);
    pfVar8 = (float *)(piVar13 + 5);
    pfVar14 = (float *)(piVar13 + 4);
    if (DAT_14cb765f8 == '\0') {
      pfVar14 = (float *)(piVar13 + 1);
      pfVar8 = (float *)(piVar13 + 2);
    }
    if ((uint *)param_1[5] != (uint *)0x0) {
      dVar3 = *(double *)(lVar9 + 0x6d0);
      plVar11 = param_1 + 4;
      fVar1 = *pfVar8;
      fVar2 = *pfVar14;
      puVar17 = (uint *)param_1[5];
      do {
        puVar7 = *(uint **)(puVar17 + 4);
        if ((((puVar17[1] == 0) || (uVar10 = *puVar17, (int)uVar10 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar10 ||
             ((((plVar12 = (longlong *)
                           ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                plVar12 == (longlong *)0x0 || (*(uint *)(plVar12 + 2) != puVar17[1])) ||
               ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) ||
              ((lVar9 = *plVar12, lVar9 == 0 || ((*(byte *)(lVar9 + 0x65) & 2) != 0)))))))) ||
           ((*(uint *)(lVar9 + 8) >> 0x1e & 1) != 0)) {
          FUN_141877894(plVar11,puVar17,1);
        }
        else {
          if (fVar1 <= (float)dVar3 - (float)puVar17[2]) {
            uVar19 = FUN_141877894(plVar11,puVar17,1);
            uVar15 = 0;
          }
          else {
            fVar18 = (float)FUN_1449734f0(lVar9);
            if ((float)dVar3 - fVar18 < fVar2) goto LAB_143cf738f;
            uVar19 = FUN_141877894(plVar11,puVar17,1);
            uVar15 = 1;
          }
          FUN_141877972(uVar19,lVar9,uVar15);
        }
LAB_143cf738f:
        puVar17 = puVar7;
      } while (puVar7 != (uint *)0x0);
    }
    *(undefined1 *)((longlong)param_1 + 0x41) = uVar4;
  }
  return;
}



// FUNCTION 143cf73e4 FUN_143cf73e4 body=278 status=ok
// SIG undefined FUN_143cf73e4(void)

void FUN_143cf73e4(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  longlong *plVar6;
  
  uVar1 = *(undefined1 *)(param_1 + 0x61);
  *(undefined1 *)(param_1 + 0x61) = 1;
  if (*(uint **)(param_1 + 0x48) != (uint *)0x0) {
    puVar5 = *(uint **)(param_1 + 0x48);
    do {
      puVar3 = *(uint **)(puVar5 + 4);
      if ((((((puVar5[1] == 0) || (uVar2 = *puVar5, (int)uVar2 < 0)) ||
            (DAT_14c9647dc <= (int)uVar2)) ||
           ((plVar6 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != puVar5[1])))) ||
          (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
           ((lVar4 = *plVar6, lVar4 == 0 || ((*(byte *)(lVar4 + 0x65) & 2) != 0)))))) ||
         (((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0 || (*(char *)(lVar4 + 0x178) == '\x03')))) {
        FUN_141877894(param_1 + 0x40,puVar5,1);
        FUN_141877972();
      }
      puVar5 = puVar3;
    } while (puVar3 != (uint *)0x0);
  }
  *(undefined1 *)(param_1 + 0x61) = uVar1;
  return;
}



// FUNCTION 143cf751c FUN_143cf751c body=581 status=ok
// SIG undefined FUN_143cf751c(void)

void FUN_143cf751c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0[0] = '\0';
  local_98 = 0;
  FUN_1456bb102(local_c0);
  puVar11 = &local_90;
  FUN_1448729ea(param_1 + 0x48,puVar11,local_c0);
  if (local_70 == 3) {
    uVar5 = 3;
    uVar13 = local_90;
  }
  else {
    puVar9 = &local_68;
    FUN_1400b56fe(puVar9,&local_90,3);
    uVar13 = 0;
    if (local_48 != 0) {
      uVar13 = local_68;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_50) {
        puVar9 = (undefined4 *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar2)(puVar9);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar5 = (uint)local_70;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_78) {
      puVar11 = (undefined4 *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar2)(puVar11);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_98 != 0) {
    lVar12 = (longlong)local_98 + -1;
    lVar8 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar4 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar10 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
    }
    *(undefined4 *)(lVar4 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar6 = iVar10;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar10;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_98 = 0;
  }
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  *param_3 = uVar13;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cf7762 FUN_143cf7762 body=3312 status=ok
// SIG undefined FUN_143cf7762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_143cf7762(longlong *param_1,int *param_2,double *param_3,undefined8 *param_4,
                  longlong param_5)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_398 [32];
  double *local_378;
  double *local_370;
  int *local_368;
  double local_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  int local_338;
  undefined4 uStack_334;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
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
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,&local_338,*param_4,0);
  local_2a8 = 0.0;
  dStack_2a0 = 0.0;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  dVar28 = local_2f8._0_8_;
  dVar10 = local_2f8._8_8_;
  dVar18 = local_2e8._0_8_;
  dVar12 = local_2e8._8_8_;
  auVar14 = *(undefined1 (*) [16])(param_3 + 8);
  dVar9 = auVar14._0_8_;
  dStack_290 = auVar14._8_8_;
  auVar23 = *(undefined1 (*) [16])(param_3 + 10);
  dVar11 = auVar23._0_8_;
  auVar14 = minpd(auVar14,local_2f8);
  auVar19 = minpd(auVar23,local_2e8);
  auVar15._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar15._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  iVar6 = movmskpd(uVar5,auVar15);
  auVar14._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar14._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  uVar7 = movmskpd((int)param_1,auVar14);
  if ((uVar7 & 0x3fffffff) == 0 && iVar6 == 0) {
    dVar2 = *param_3;
    dVar22 = param_3[1];
    dVar25 = param_3[2];
    dVar17 = param_3[3];
    dVar26 = (double)CONCAT44(uStack_334,local_338);
    dVar29 = param_3[4] * dVar28;
    dVar30 = param_3[5] * dVar10;
    dVar31 = param_3[6] * dVar18;
    dVar32 = param_3[7] * dVar12;
    local_2d8._8_8_ =
         dVar2 * local_328 * 1.0 +
         dVar17 * dStack_330 +
         dVar25 * (double)CONCAT44(uStack_334,local_338) * -1.0 + dVar22 * dStack_320;
    local_2d8._0_8_ =
         dVar22 * local_328 * -1.0 +
         dVar25 * dStack_330 +
         dVar17 * (double)CONCAT44(uStack_334,local_338) * 1.0 + dVar2 * dStack_320;
    dVar27 = dVar30 * dVar26 - dStack_330 * dVar29;
    dVar24 = dVar31 * dStack_330 - local_328 * dVar30;
    dVar33 = dVar29 * local_328 - dVar26 * dVar31;
    dVar34 = dVar32 * dStack_320 - dStack_320 * dVar32;
    dVar24 = dVar24 + dVar24;
    dVar33 = dVar33 + dVar33;
    dVar27 = dVar27 + dVar27;
    dVar34 = dVar34 + dVar34;
    local_f8 = (dVar27 * dStack_330 - local_328 * dVar33) + dStack_320 * dVar24 + dVar29 + local_318
    ;
    dStack_f0 = (dVar24 * local_328 - dVar27 * dVar26) + dStack_320 * dVar33 + dVar30 + dStack_310;
    local_e8 = (dVar33 * dVar26 - dStack_330 * dVar24) + dStack_320 * dVar27 + dVar31 +
               (double)CONCAT44(uStack_304,local_308);
    dStack_2a0 = (dVar34 * dStack_320 - dVar34 * dStack_320) + dStack_320 * dVar34 + dVar32 +
                 dStack_300;
    local_2c8._8_8_ =
         dVar25 * local_328 * -1.0 +
         (((double)CONCAT44(uStack_334,local_338) * dVar2 * -1.0 + dVar17 * dStack_320) -
         dVar22 * dStack_330);
    local_2c8._0_8_ =
         dVar17 * local_328 * 1.0 +
         (((double)CONCAT44(uStack_334,local_338) * dVar22 * 1.0 + dVar25 * dStack_320) -
         dVar2 * dStack_330);
    dVar9 = dVar9 * dVar28;
    dStack_290 = dStack_290 * dVar10;
    dVar11 = dVar11 * dVar18;
    dVar12 = auVar23._8_8_ * dVar12;
  }
  else {
    dVar25 = (double)CONCAT44(uStack_334,local_338);
    dVar17 = dStack_330 + dStack_330;
    dVar2 = local_328 + local_328;
    dVar26 = dVar25 * (dVar25 + dVar25);
    local_188 = (1.0 - (dVar26 + dStack_330 * dVar17)) * dVar18;
    dVar27 = (double)CONCAT44(uStack_334,local_338) * dVar2;
    dVar22 = (dVar25 + dVar25) * dStack_320;
    local_198 = (dVar17 * dStack_320 + dVar27) * dVar18;
    dVar12 = dVar12 * auVar23._8_8_;
    local_348._8_4_ = SUB84(dVar12,0);
    local_348._0_8_ = dVar18 * dVar11;
    local_348._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    local_1b8 = (dVar17 * dVar25 - dVar2 * dStack_320) * dVar10;
    dStack_190 = (dVar2 * dStack_330 - dVar22) * dVar18;
    local_1d8 = (1.0 - (local_328 * dVar2 + dStack_330 * dVar17)) * dVar28;
    dStack_1b0 = (1.0 - (local_328 * dVar2 + dVar26)) * dVar10;
    dStack_1d0 = (dVar17 * dVar25 + dVar2 * dStack_320) * dVar28;
    local_1a8 = (dVar2 * dStack_330 + dVar22) * dVar10;
    local_1c8 = (dVar27 - dVar17 * dStack_320) * dVar28;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_318;
    dStack_170 = dStack_310;
    local_168 = local_308;
    uStack_164 = uStack_304;
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    dVar25 = *param_3;
    dVar17 = param_3[1];
    dVar26 = param_3[2];
    dVar27 = dVar17 + dVar17;
    dVar12 = dVar26 + dVar26;
    dVar24 = dVar25 * (dVar25 + dVar25);
    local_208 = (1.0 - (dVar24 + dVar17 * dVar27)) * dVar11;
    dVar18 = param_3[3];
    dVar2 = dVar12 * dVar18;
    dVar22 = (dVar25 + dVar25) * param_3[3];
    dVar18 = dVar27 * dVar18;
    local_218 = (dVar18 + *param_3 * dVar12) * dVar11;
    local_238 = (dVar27 * dVar25 - dVar2) * dStack_290;
    dStack_210 = (dVar12 * dVar17 - dVar22) * dVar11;
    local_358._8_4_ = SUB84(dVar10 * dStack_290,0);
    local_358._0_8_ = dVar28 * dVar9;
    local_358._12_4_ = (int)((ulonglong)(dVar10 * dStack_290) >> 0x20);
    local_258 = (1.0 - (dVar26 * dVar12 + dVar17 * dVar27)) * dVar9;
    dStack_230 = (1.0 - (dVar26 * dVar12 + dVar24)) * dStack_290;
    dStack_250 = (dVar27 * dVar25 + dVar2) * dVar9;
    local_228 = (dVar12 * dVar17 + dVar22) * dStack_290;
    local_248 = (*param_3 * dVar12 - dVar18) * dVar9;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_3[4];
    dStack_1f0 = param_3[5];
    local_1e8 = *(undefined4 *)(param_3 + 6);
    uStack_1e4 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_1e0 = 0;
    uStack_1dc = 0x3ff00000;
    FUN_1447fea8d(&local_158);
    auVar14 = _DAT_149934d80;
    local_360 = local_148;
    dVar28 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    dVar18 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar9 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar8 = -(ulonglong)(0.0 <= dVar28 + -9.99999993922529e-09);
    dVar28 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar28)) & uVar8);
    uVar8 = -(ulonglong)(0.0 <= dVar18 + -9.99999993922529e-09);
    dVar18 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar18)) & uVar8);
    dVar11 = (double)local_348._0_8_;
    dVar12 = (double)local_348._8_8_;
    uVar8 = -(ulonglong)(0.0 <= dVar9 + -9.99999993922529e-09);
    dVar10 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar9)) & uVar8);
    dVar9 = (double)local_358._0_8_;
    uVar3 = local_358._8_8_;
    auVar23._8_8_ = -(ulonglong)(0.0 <= (double)local_358._8_8_);
    auVar23._0_8_ = -(ulonglong)(0.0 <= (double)local_358._0_8_);
    auVar23 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
    dVar2 = (double)(~-(ulonglong)(0.0 <= (double)local_348._0_8_) & 0xbff0000000000000 |
                    -(ulonglong)(0.0 <= (double)local_348._0_8_) & 0x3ff0000000000000);
    dVar22 = auVar23._0_8_;
    local_158 = local_158 * dVar28 * dVar22;
    local_150 = local_150 * dVar28 * dVar22;
    local_148 = dVar28 * local_148 * dVar22;
    dVar28 = auVar23._8_8_;
    local_128 = dVar18 * local_128 * dVar28;
    local_130 = local_130 * dVar18 * dVar28;
    local_138 = dVar28 * local_138 * dVar18;
    local_108 = dVar10 * local_108 * dVar2;
    local_110 = local_110 * dVar10 * dVar2;
    local_118 = dVar2 * local_118 * dVar10;
    FUN_14481fd10(&local_278,&local_158);
    dVar28 = local_268 * local_268 + local_278 * local_278;
    dVar18 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar16._0_8_ = dVar28 + dVar18;
    auVar16._8_8_ = dVar28 + dVar18;
    auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar23 = sqrtpd(auVar16,auVar16);
    auVar14 = divpd(auVar14,auVar23);
    auVar20._0_8_ = auVar14._0_8_ * local_268;
    auVar20._8_8_ = auVar14._8_8_ * dStack_260;
    uVar8 = (ulonglong)(dStack_270 * auVar14._8_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar20,auVar19);
    dStack_290 = (double)uVar3;
    local_2d8._8_4_ = (int)uVar8;
    local_2d8._0_8_ =
         (ulonglong)(local_278 * auVar14._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    local_2d8._12_4_ = (int)(uVar8 >> 0x20);
    dStack_2a0 = 0.0;
  }
  local_288._8_4_ = SUB84(dVar12,0);
  local_288._0_8_ = dVar11;
  local_288._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  local_2b8 = local_f8;
  dStack_2b0 = dStack_f0;
  local_2a8 = local_e8;
  local_298 = dVar9;
  if (*param_2 == 2) {
    local_f8 = local_f8 * *(double *)(param_5 + 0x120);
    dStack_f0 = dStack_f0 * *(double *)(param_5 + 0x128);
    local_e8 = local_e8 * *(double *)(param_5 + 0x130);
    dVar12 = *(double *)(param_5 + 0xe0);
    dVar2 = *(double *)(param_5 + 0xe8);
    dVar22 = *(double *)(param_5 + 0xf0);
    dVar28 = *(double *)(param_5 + 0xf8);
    dVar18 = dStack_f0 * dVar12 - local_f8 * dVar2;
    dVar11 = local_e8 * dVar2 - dStack_f0 * dVar22;
    dVar10 = local_f8 * dVar22 - dVar12 * local_e8;
    dVar11 = dVar11 + dVar11;
    dVar10 = dVar10 + dVar10;
    dVar18 = dVar18 + dVar18;
    dVar25 = dVar28 * dVar18 + local_e8 + (dVar10 * dVar12 - dVar2 * dVar11) +
             *(double *)(param_5 + 0x110);
    fVar21 = (float)(dVar9 * (double)(float)param_2[1]);
    if (((double)-*(float *)(param_5 + 0x168) <= dVar25 + (double)fVar21) &&
       (dVar25 - (double)fVar21 <= (double)*(float *)(param_5 + 0x168))) {
      dVar28 = (dVar18 * dVar2 - dVar22 * dVar10) + local_f8 + dVar28 * dVar11 +
               *(double *)(param_5 + 0x100);
      dVar18 = (dVar22 * dVar11 - dVar12 * dVar18) +
               dStack_f0 + *(double *)(param_5 + 0xf8) * dVar10 + *(double *)(param_5 + 0x108);
      dVar18 = dVar28 * dVar28 + dVar18 * dVar18;
      fVar13 = (float)SQRT(dVar18);
      if ((fVar13 <= *(float *)(param_5 + 8) + fVar21) &&
         ((*(float *)(param_5 + 0x16c) <= 0.0 ||
          (fVar21 = fVar21 + fVar13, *(float *)(param_5 + 0x16c) <= fVar21 * fVar21)))) {
        if (((dVar18 != 1.0) || (dVar9 = dVar28, NAN(dVar18))) &&
           (dVar9 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar18)) {
          dVar9 = dVar28 * (1.0 / SQRT(dVar18));
        }
        bVar4 = (double)*(float *)(param_5 + 0x174) <= dVar9;
        goto LAB_143cf813d;
      }
    }
  }
  else {
    fVar21 = (float)param_2[1];
    local_370 = &local_258;
    local_378 = &local_1d8;
    local_368 = &local_338;
    FUN_1488167a7(param_2,local_2d8,param_5 + 0xe0,&local_158);
    if (-1 < local_338) {
      fVar21 = (float)(dVar9 * (double)fVar21);
      local_358._0_4_ = fVar21;
      local_360 = DAT_14c8464e0;
      local_348._0_8_ = (double)*(float *)(param_5 + 0x174);
      bVar4 = true;
      iVar6 = 0;
      do {
        dVar28 = (double)((float)iVar6 * (1.0 / (float)local_338));
        dVar18 = local_1c8 * dVar28 + local_148;
        if (((double)-*(float *)(param_5 + 0x168) <= dVar18 + (double)fVar21) &&
           (dVar18 - (double)fVar21 <= (double)*(float *)(param_5 + 0x168))) {
          dVar18 = local_1d8 * dVar28 + local_158;
          dVar28 = dVar28 * dStack_1d0 + local_150;
          dVar28 = dVar18 * dVar18 + dVar28 * dVar28;
          fVar13 = (float)SQRT(dVar28);
          if ((fVar13 <= *(float *)(param_5 + 8) + fVar21) &&
             ((*(float *)(param_5 + 0x16c) <= 0.0 ||
              (fVar13 = fVar13 + fVar21, *(float *)(param_5 + 0x16c) <= fVar13 * fVar13)))) {
            if (((dVar28 != 1.0) || (dVar9 = dVar18, NAN(dVar28))) &&
               (dVar9 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar28)) {
              dVar9 = dVar18 * (1.0 / SQRT(dVar28));
            }
            if ((double)*(float *)(param_5 + 0x174) <= dVar9) break;
          }
        }
        iVar1 = iVar6 + 1;
        bVar4 = iVar6 < local_338;
        iVar6 = iVar1;
      } while (local_338 + 1 != iVar1);
      goto LAB_143cf813d;
    }
  }
  bVar4 = false;
LAB_143cf813d:
  if ((local_d0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 143cf8454 FUN_143cf8454 body=1169 status=ok
// SIG undefined FUN_143cf8454(void)

void FUN_143cf8454(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_108 [40];
  char local_e0 [16];
  longlong *local_d0;
  int local_b8;
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0[0] = '\0';
  local_b8 = 0;
  FUN_1456bb102(local_e0);
  pfVar8 = &local_b0;
  FUN_1448729ea(param_1 + 0x48,pfVar8,local_e0);
  if (local_90 == 3) {
    fVar13 = local_b0;
    bVar4 = 3;
  }
  else {
    pfVar11 = &local_88;
    FUN_1400b56fe(pfVar11,&local_b0,3);
    fVar13 = local_88;
    if (local_68 == 0) {
      fVar13 = 50.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar11 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(pfVar11);
    }
    bVar4 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar4 = local_90;
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_98) {
      pfVar8 = (float *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar2)(pfVar8);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar3 = DAT_14c9a3da0;
  if ((longlong)local_b8 != 0) {
    lVar10 = (longlong)local_b8 + -1;
    lVar9 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar3 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar12 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
    }
    *(undefined4 *)(lVar3 + lVar9) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar9) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar6 = iVar12;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar12;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8 = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  local_e0[0] = '\0';
  local_b8 = 0;
  FUN_1456bb102(local_e0,param_2);
  pfVar8 = &local_b0;
  FUN_1448729ea(param_1 + 0xa0,pfVar8,local_e0);
  if (local_90 == 3) {
    uVar5 = 3;
    fVar14 = local_b0;
  }
  else {
    pfVar11 = &local_88;
    FUN_1400b56fe(pfVar11,&local_b0,3);
    fVar14 = local_88;
    if (local_68 == 0) {
      fVar14 = 400.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar11 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(pfVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar5 = (uint)local_90;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_98) {
      pfVar8 = (float *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar2)(pfVar8);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar3 = DAT_14c9a3da0;
  if ((longlong)local_b8 != 0) {
    lVar10 = (longlong)local_b8 + -1;
    lVar9 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar3 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar12 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
    }
    *(undefined4 *)(lVar3 + lVar9) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar9) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar6 = iVar12;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar12;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_b8 = 0;
  }
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  *param_4 = (double)fVar13;
  param_4[1] = 0.0;
  param_4[2] = (double)fVar14;
  *(undefined1 *)(param_4 + 3) = 1;
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cf88e6 FUN_143cf88e6 body=581 status=ok
// SIG undefined FUN_143cf88e6(void)

void FUN_143cf88e6(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0[0] = '\0';
  local_98 = 0;
  FUN_1456bb102(local_c0);
  puVar11 = &local_90;
  FUN_1448729ea(param_1 + 0x48,puVar11,local_c0);
  if (local_70 == 3) {
    uVar5 = 3;
    uVar13 = local_90;
  }
  else {
    puVar9 = &local_68;
    FUN_1400b56fe(puVar9,&local_90,3);
    uVar13 = 0;
    if (local_48 != 0) {
      uVar13 = local_68;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_50) {
        puVar9 = (undefined4 *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar2)(puVar9);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar5 = (uint)local_70;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_78) {
      puVar11 = (undefined4 *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar2)(puVar11);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_98 != 0) {
    lVar12 = (longlong)local_98 + -1;
    lVar8 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar4 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar10 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
    }
    *(undefined4 *)(lVar4 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar6 = iVar10;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar10;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_98 = 0;
  }
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  *param_3 = uVar13;
  *(undefined1 *)(param_3 + 1) = 1;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cf8b58 FUN_143cf8b58 body=1740 status=ok
// SIG undefined FUN_143cf8b58(void)

void FUN_143cf8b58(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_118 [40];
  char local_f0 [16];
  longlong *local_e0;
  int local_c8;
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0[0] = '\0';
  local_c8 = 0;
  FUN_1456bb102(local_f0);
  pfVar8 = &local_c0;
  FUN_1448729ea(param_1 + 0x48,pfVar8,local_f0);
  if (local_a0 == 3) {
    fVar13 = local_c0;
    bVar4 = 3;
  }
  else {
    pfVar11 = &local_98;
    FUN_1400b56fe(pfVar11,&local_c0,3);
    fVar13 = local_98;
    if (local_78 == 0) {
      fVar13 = 100.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar11 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar2)(pfVar11);
    }
    bVar4 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar4 = local_a0;
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar8 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar2)(pfVar8);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  lVar3 = DAT_14c9a3da0;
  if ((longlong)local_c8 != 0) {
    lVar9 = (longlong)local_c8 + -1;
    lVar10 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
    if (*(longlong *)(lVar3 + lVar10) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar12 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
    }
    *(undefined4 *)(lVar3 + lVar10) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar10) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar6 = iVar12;
    }
    bVar4 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar12;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_c8 = 0;
  }
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  local_f0[0] = '\0';
  local_c8 = 0;
  FUN_1456bb102(local_f0,param_2);
  pfVar8 = &local_c0;
  FUN_1448729ea(param_1 + 0x98,pfVar8,local_f0);
  if (local_a0 == 3) {
    fVar14 = local_c0;
    bVar4 = 3;
  }
  else {
    pfVar11 = &local_98;
    FUN_1400b56fe(pfVar11,&local_c0,3);
    fVar14 = local_98;
    if (local_78 == 0) {
      fVar14 = 100.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar11 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar2)(pfVar11);
    }
    bVar4 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar4 = local_a0;
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar8 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar2)(pfVar8);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  lVar3 = DAT_14c9a3da0;
  if ((longlong)local_c8 != 0) {
    lVar9 = (longlong)local_c8 + -1;
    lVar10 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
    if (*(longlong *)(lVar3 + lVar10) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar12 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
    }
    *(undefined4 *)(lVar3 + lVar10) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar10) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar6 = iVar12;
    }
    bVar4 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar12;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_c8 = 0;
  }
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  local_f0[0] = '\0';
  local_c8 = 0;
  FUN_1456bb102(local_f0,param_2);
  pfVar8 = &local_c0;
  FUN_1448729ea(param_1 + 0xe8,pfVar8,local_f0);
  if (local_a0 == 3) {
    uVar5 = 3;
    fVar15 = local_c0;
  }
  else {
    pfVar11 = &local_98;
    FUN_1400b56fe(pfVar11,&local_c0,3);
    fVar15 = local_98;
    if (local_78 == 0) {
      fVar15 = 400.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar11 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar2)(pfVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar5 = (uint)local_a0;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar8 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar2)(pfVar8);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  lVar3 = DAT_14c9a3da0;
  if ((longlong)local_c8 != 0) {
    lVar10 = (longlong)local_c8 + -1;
    lVar9 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar3 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar12 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
    }
    *(undefined4 *)(lVar3 + lVar9) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar9) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar6 = iVar12;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar12;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_c8 = 0;
  }
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  *param_4 = (double)fVar15;
  param_4[1] = (double)fVar14;
  param_4[2] = (double)fVar13;
  *(undefined1 *)(param_4 + 3) = 1;
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cf92a8 FUN_143cf92a8 body=3080 status=ok
// SIG undefined FUN_143cf92a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_143cf92a8(longlong *param_1,int *param_2,double *param_3,undefined8 *param_4,
                  longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 auVar11 [16];
  double dVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_398 [32];
  double *local_378;
  double *local_370;
  int *local_368;
  double local_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  int local_338;
  undefined4 uStack_334;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
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
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,&local_338,*param_4,0);
  local_2a8 = ZEXT816(0);
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  dVar23 = local_2f8._0_8_;
  dVar34 = local_2f8._8_8_;
  dVar15 = local_2e8._0_8_;
  dStack_280 = local_2e8._8_8_;
  auVar9 = *(undefined1 (*) [16])(param_3 + 8);
  dVar27 = auVar9._0_8_;
  dStack_290 = auVar9._8_8_;
  auVar22 = *(undefined1 (*) [16])(param_3 + 10);
  local_288 = auVar22._0_8_;
  auVar9 = minpd(auVar9,local_2f8);
  auVar16 = minpd(auVar22,local_2e8);
  auVar10._8_8_ = -(ulonglong)(auVar9._8_8_ < 0.0);
  auVar10._0_8_ = -(ulonglong)(auVar9._0_8_ < 0.0);
  iVar5 = movmskpd(uVar4,auVar10);
  auVar9._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar9._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  uVar6 = movmskpd((int)param_1,auVar9);
  if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar8 = *param_3;
    dVar21 = param_3[1];
    dVar24 = param_3[2];
    dVar12 = param_3[3];
    dVar25 = (double)CONCAT44(uStack_334,local_338);
    dVar28 = param_3[4] * dVar23;
    dVar29 = param_3[5] * dVar34;
    dVar30 = param_3[6] * dVar15;
    dVar31 = param_3[7] * dStack_280;
    local_2d8._8_8_ =
         dVar8 * local_328 * 1.0 +
         dVar12 * dStack_330 +
         dVar24 * (double)CONCAT44(uStack_334,local_338) * -1.0 + dVar21 * dStack_320;
    local_2d8._0_8_ =
         dVar21 * local_328 * -1.0 +
         dVar24 * dStack_330 +
         dVar12 * (double)CONCAT44(uStack_334,local_338) * 1.0 + dVar8 * dStack_320;
    dVar26 = dVar29 * dVar25 - dStack_330 * dVar28;
    dVar13 = dVar30 * dStack_330 - local_328 * dVar29;
    dVar18 = dVar28 * local_328 - dVar25 * dVar30;
    dVar33 = dVar31 * dStack_320 - dStack_320 * dVar31;
    dVar13 = dVar13 + dVar13;
    dVar18 = dVar18 + dVar18;
    dVar26 = dVar26 + dVar26;
    dVar33 = dVar33 + dVar33;
    local_f8 = (dVar26 * dStack_330 - local_328 * dVar18) + dStack_320 * dVar13 + dVar28 + local_318
    ;
    dStack_f0 = (dVar13 * local_328 - dVar26 * dVar25) + dStack_320 * dVar18 + dVar29 + dStack_310;
    local_e8 = (dVar18 * dVar25 - dStack_330 * dVar13) + dStack_320 * dVar26 + dVar30 +
               (double)CONCAT44(uStack_304,local_308);
    dStack_300 = (dVar33 * dStack_320 - dVar33 * dStack_320) + dStack_320 * dVar33 + dVar31 +
                 dStack_300;
    local_2c8._8_8_ =
         dVar24 * local_328 * -1.0 +
         (((double)CONCAT44(uStack_334,local_338) * dVar8 * -1.0 + dVar12 * dStack_320) -
         dVar21 * dStack_330);
    local_2c8._0_8_ =
         dVar12 * local_328 * 1.0 +
         (((double)CONCAT44(uStack_334,local_338) * dVar21 * 1.0 + dVar24 * dStack_320) -
         dVar8 * dStack_330);
    local_2a8._8_4_ = SUB84(dStack_300,0);
    local_2a8._0_8_ = local_e8;
    local_2a8._12_4_ = (int)((ulonglong)dStack_300 >> 0x20);
    dVar27 = dVar27 * dVar23;
    dStack_290 = dStack_290 * dVar34;
    local_288 = local_288 * dVar15;
    dStack_280 = auVar22._8_8_ * dStack_280;
  }
  else {
    dVar24 = (double)CONCAT44(uStack_334,local_338);
    dVar12 = dStack_330 + dStack_330;
    dVar8 = local_328 + local_328;
    dVar25 = dVar24 * (dVar24 + dVar24);
    local_188 = (1.0 - (dVar25 + dStack_330 * dVar12)) * dVar15;
    dVar26 = (double)CONCAT44(uStack_334,local_338) * dVar8;
    dVar21 = (dVar24 + dVar24) * dStack_320;
    local_198 = (dVar12 * dStack_320 + dVar26) * dVar15;
    dStack_280 = dStack_280 * auVar22._8_8_;
    local_348._8_4_ = SUB84(dStack_280,0);
    local_348._0_8_ = dVar15 * local_288;
    local_348._12_4_ = (int)((ulonglong)dStack_280 >> 0x20);
    local_1b8 = (dVar12 * dVar24 - dVar8 * dStack_320) * dVar34;
    dStack_190 = (dVar8 * dStack_330 - dVar21) * dVar15;
    local_1d8 = (1.0 - (local_328 * dVar8 + dStack_330 * dVar12)) * dVar23;
    dStack_1b0 = (1.0 - (local_328 * dVar8 + dVar25)) * dVar34;
    dStack_1d0 = (dVar12 * dVar24 + dVar8 * dStack_320) * dVar23;
    local_1a8 = (dVar8 * dStack_330 + dVar21) * dVar34;
    local_1c8 = (dVar26 - dVar12 * dStack_320) * dVar23;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_318;
    dStack_170 = dStack_310;
    local_168 = local_308;
    uStack_164 = uStack_304;
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    dVar25 = *param_3;
    dVar26 = param_3[1];
    dVar13 = param_3[2];
    dVar18 = dVar26 + dVar26;
    dVar8 = dVar13 + dVar13;
    dVar12 = dVar25 * (dVar25 + dVar25);
    local_208 = (1.0 - (dVar12 + dVar26 * dVar18)) * local_288;
    dVar15 = param_3[3];
    dVar21 = dVar8 * dVar15;
    dVar24 = (dVar25 + dVar25) * param_3[3];
    dVar15 = dVar18 * dVar15;
    local_218 = (dVar15 + *param_3 * dVar8) * local_288;
    local_238 = (dVar18 * dVar25 - dVar21) * dStack_290;
    dStack_210 = (dVar8 * dVar26 - dVar24) * local_288;
    local_358._8_4_ = SUB84(dVar34 * dStack_290,0);
    local_358._0_8_ = dVar23 * dVar27;
    local_358._12_4_ = (int)((ulonglong)(dVar34 * dStack_290) >> 0x20);
    local_258 = (1.0 - (dVar13 * dVar8 + dVar26 * dVar18)) * dVar27;
    dStack_230 = (1.0 - (dVar13 * dVar8 + dVar12)) * dStack_290;
    dStack_250 = (dVar18 * dVar25 + dVar21) * dVar27;
    local_228 = (dVar8 * dVar26 + dVar24) * dStack_290;
    local_248 = (*param_3 * dVar8 - dVar15) * dVar27;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_3[4];
    dStack_1f0 = param_3[5];
    local_1e8 = *(undefined4 *)(param_3 + 6);
    uStack_1e4 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_1e0 = 0;
    uStack_1dc = 0x3ff00000;
    FUN_1447fea8d(&local_158);
    auVar9 = _DAT_149934d80;
    dVar23 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    local_360 = local_128;
    dVar34 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar27 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar7 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
    dVar15 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar7);
    uVar7 = -(ulonglong)(0.0 <= dVar34 + -9.99999993922529e-09);
    dVar34 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar34)) & uVar7);
    uVar7 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
    local_288 = (double)local_348._0_8_;
    dStack_280 = (double)local_348._8_8_;
    dVar8 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar27)) & uVar7);
    dVar27 = (double)local_358._0_8_;
    uVar2 = local_358._8_8_;
    auVar22._8_8_ = -(ulonglong)(0.0 <= (double)local_358._8_8_);
    auVar22._0_8_ = -(ulonglong)(0.0 <= (double)local_358._0_8_);
    auVar22 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar22);
    dVar23 = (double)(~-(ulonglong)(0.0 <= (double)local_348._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= (double)local_348._0_8_) & 0x3ff0000000000000);
    dVar21 = auVar22._0_8_;
    local_158 = local_158 * dVar15 * dVar21;
    local_150 = local_150 * dVar15 * dVar21;
    local_148 = dVar15 * local_148 * dVar21;
    dVar15 = auVar22._8_8_;
    local_128 = dVar34 * local_128 * dVar15;
    local_130 = local_130 * dVar34 * dVar15;
    local_138 = dVar15 * local_138 * dVar34;
    local_108 = dVar8 * local_108 * dVar23;
    local_110 = local_110 * dVar8 * dVar23;
    local_118 = dVar23 * local_118 * dVar8;
    FUN_14481fd10(&local_278,&local_158);
    dVar23 = local_268 * local_268 + local_278 * local_278;
    dVar15 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar11._0_8_ = dVar23 + dVar15;
    auVar11._8_8_ = dVar23 + dVar15;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
    auVar22 = sqrtpd(auVar11,auVar11);
    auVar9 = divpd(auVar9,auVar22);
    auVar17._0_8_ = auVar9._0_8_ * local_268;
    auVar17._8_8_ = auVar9._8_8_ * dStack_260;
    uVar7 = (ulonglong)(dStack_270 * auVar9._8_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
    local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar16);
    dStack_290 = (double)uVar2;
    local_2d8._8_4_ = (int)uVar7;
    local_2d8._0_8_ =
         (ulonglong)(local_278 * auVar9._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_)
    ;
    local_2d8._12_4_ = (int)(uVar7 >> 0x20);
    local_2a8._8_8_ = 0;
    local_2a8._0_8_ = local_e8;
  }
  local_2b8 = local_f8;
  dStack_2b0 = dStack_f0;
  local_298 = dVar27;
  if (*param_2 == 2) {
    local_f8 = local_f8 * *(double *)(param_5 + 0x120);
    dStack_f0 = dStack_f0 * *(double *)(param_5 + 0x128);
    local_e8 = local_e8 * *(double *)(param_5 + 0x130);
    dVar12 = *(double *)(param_5 + 0xe0);
    dVar25 = *(double *)(param_5 + 0xe8);
    dVar34 = *(double *)(param_5 + 0xf0);
    dVar23 = *(double *)(param_5 + 0xf8);
    dVar8 = dStack_f0 * dVar12 - local_f8 * dVar25;
    dVar21 = local_e8 * dVar25 - dStack_f0 * dVar34;
    dVar24 = local_f8 * dVar34 - dVar12 * local_e8;
    dVar21 = dVar21 + dVar21;
    dVar24 = dVar24 + dVar24;
    dVar8 = dVar8 + dVar8;
    dVar15 = (dVar8 * dVar25 - dVar24 * dVar34) + dVar23 * dVar21 + local_f8 +
             *(double *)(param_5 + 0x100);
    dVar34 = (dVar34 * dVar21 - dVar12 * dVar8) + *(double *)(param_5 + 0xf8) * dVar24 + dStack_f0 +
             *(double *)(param_5 + 0x108);
    fVar14 = (float)(dVar27 * (double)(float)param_2[1]);
    fVar19 = (float)SQRT(dVar15 * dVar15 + dVar34 * dVar34);
    if (fVar19 <= *(float *)(param_5 + 0x170) + fVar14) {
      fVar20 = *(float *)(param_5 + 0x170) - *(float *)(param_5 + 0x168);
      fVar32 = 0.0;
      if (0.0 <= fVar20) {
        fVar32 = fVar20;
      }
      if (((fVar32 <= 1e-08) || (fVar32 <= fVar19 + fVar14)) &&
         ((fVar14 = (float)((local_e8 + dVar23 * dVar8 + (dVar24 * dVar12 - dVar21 * dVar25) +
                            *(double *)(param_5 + 0x110)) - (double)fVar14), fVar14 <= 0.0 ||
          (fVar14 * fVar14 < *(float *)(param_5 + 0x174) ||
           fVar14 * fVar14 == *(float *)(param_5 + 0x174))))) {
        bVar3 = true;
        goto LAB_143cf9c67;
      }
    }
  }
  else {
    fVar14 = (float)param_2[1];
    local_370 = &local_258;
    local_378 = &local_1d8;
    local_368 = &local_338;
    FUN_1488167a7(param_2,local_2d8,param_5 + 0xe0,&local_158);
    if (-1 < local_338) {
      fVar19 = (float)(dVar27 * (double)fVar14);
      fVar32 = *(float *)(param_5 + 0x170) - *(float *)(param_5 + 0x168);
      fVar14 = 0.0;
      if (0.0 <= fVar32) {
        fVar14 = fVar32;
      }
      bVar3 = true;
      iVar5 = 0;
      do {
        dVar27 = (double)((float)iVar5 * (1.0 / (float)local_338));
        dVar23 = dStack_1d0 * dVar27 + local_150;
        dVar15 = local_1d8 * dVar27 + local_158;
        fVar32 = (float)SQRT(dVar15 * dVar15 + dVar23 * dVar23);
        if (((fVar32 <= *(float *)(param_5 + 0x170) + fVar19) &&
            ((fVar14 <= 1e-08 || (fVar14 <= fVar32 + fVar19)))) &&
           ((fVar32 = (float)((dVar27 * local_1c8 + local_148) - (double)fVar19), fVar32 <= 0.0 ||
            (fVar32 * fVar32 <= *(float *)(param_5 + 0x174))))) break;
        iVar1 = iVar5 + 1;
        bVar3 = iVar5 < local_338;
        iVar5 = iVar1;
      } while (local_338 + 1 != iVar1);
      goto LAB_143cf9c67;
    }
  }
  bVar3 = false;
LAB_143cf9c67:
  if ((local_d0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 143cf9ede FUN_143cf9ede body=3405 status=ok
// SIG undefined FUN_143cf9ede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_143cf9ede(longlong *param_1,int *param_2,double *param_3,undefined8 *param_4,
                  longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar13;
  undefined1 auVar12 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_3c8 [32];
  double *local_3a8;
  double *local_3a0;
  int *local_398;
  double local_388;
  double local_380;
  undefined1 local_378 [16];
  undefined1 local_368 [24];
  double local_350;
  double local_348;
  double local_340;
  int local_338;
  undefined4 uStack_334;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
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
  double dStack_260;
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
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,&local_338,*param_4,0);
  local_2a8 = 0.0;
  dStack_2a0 = 0.0;
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  dVar21 = local_2f8._0_8_;
  dVar30 = local_2f8._8_8_;
  dVar15 = local_2e8._0_8_;
  dStack_280 = local_2e8._8_8_;
  auVar10 = *(undefined1 (*) [16])(param_3 + 8);
  local_298 = auVar10._0_8_;
  dStack_290 = auVar10._8_8_;
  auVar8 = *(undefined1 (*) [16])(param_3 + 10);
  local_288 = auVar8._0_8_;
  auVar10 = minpd(auVar10,local_2f8);
  auVar16 = minpd(auVar8,local_2e8);
  auVar11._8_8_ = -(ulonglong)(auVar10._8_8_ < 0.0);
  auVar11._0_8_ = -(ulonglong)(auVar10._0_8_ < 0.0);
  iVar5 = movmskpd(uVar4,auVar11);
  auVar10._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
  auVar10._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
  uVar6 = movmskpd((int)param_1,auVar10);
  if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar24 = *param_3;
    dVar20 = param_3[1];
    dVar9 = param_3[2];
    dVar13 = param_3[3];
    dVar22 = (double)CONCAT44(uStack_334,local_338);
    dVar25 = param_3[4] * dVar21;
    dVar26 = param_3[5] * dVar30;
    dVar27 = param_3[6] * dVar15;
    dVar28 = param_3[7] * dStack_280;
    local_2d8._8_8_ =
         dVar24 * local_328 * 1.0 +
         dVar13 * dStack_330 +
         dVar9 * (double)CONCAT44(uStack_334,local_338) * -1.0 + dVar20 * dStack_320;
    local_2d8._0_8_ =
         dVar20 * local_328 * -1.0 +
         dVar9 * dStack_330 +
         dVar13 * (double)CONCAT44(uStack_334,local_338) * 1.0 + dVar24 * dStack_320;
    dVar23 = dVar26 * dVar22 - dStack_330 * dVar25;
    dVar14 = dVar27 * dStack_330 - local_328 * dVar26;
    dVar18 = dVar25 * local_328 - dVar22 * dVar27;
    dVar29 = dVar28 * dStack_320 - dStack_320 * dVar28;
    dVar14 = dVar14 + dVar14;
    dVar18 = dVar18 + dVar18;
    dVar23 = dVar23 + dVar23;
    dVar29 = dVar29 + dVar29;
    local_f8 = (dVar23 * dStack_330 - local_328 * dVar18) + dStack_320 * dVar14 + dVar25 + local_318
    ;
    dStack_f0 = (dVar14 * local_328 - dVar23 * dVar22) + dStack_320 * dVar18 + dVar26 + dStack_310;
    local_e8 = (dVar18 * dVar22 - dStack_330 * dVar14) + dStack_320 * dVar23 + dVar27 +
               (double)CONCAT44(uStack_304,local_308);
    dStack_2a0 = (dVar29 * dStack_320 - dVar29 * dStack_320) + dStack_320 * dVar29 + dVar28 +
                 dStack_300;
    local_2c8._8_8_ =
         dVar9 * local_328 * -1.0 +
         (((double)CONCAT44(uStack_334,local_338) * dVar24 * -1.0 + dVar13 * dStack_320) -
         dVar20 * dStack_330);
    local_2c8._0_8_ =
         dVar13 * local_328 * 1.0 +
         (((double)CONCAT44(uStack_334,local_338) * dVar20 * 1.0 + dVar9 * dStack_320) -
         dVar24 * dStack_330);
    local_298 = local_298 * dVar21;
    dStack_290 = dStack_290 * dVar30;
    local_288 = local_288 * dVar15;
    dStack_280 = auVar8._8_8_ * dStack_280;
  }
  else {
    dVar9 = (double)CONCAT44(uStack_334,local_338);
    dVar13 = dStack_330 + dStack_330;
    dVar24 = local_328 + local_328;
    dVar22 = dVar9 * (dVar9 + dVar9);
    local_188 = (1.0 - (dVar22 + dStack_330 * dVar13)) * dVar15;
    dVar23 = (double)CONCAT44(uStack_334,local_338) * dVar24;
    dVar20 = (dVar9 + dVar9) * dStack_320;
    local_198 = (dVar13 * dStack_320 + dVar23) * dVar15;
    dStack_280 = dStack_280 * auVar8._8_8_;
    local_368._8_4_ = SUB84(dStack_280,0);
    local_368._0_8_ = dVar15 * local_288;
    local_368._12_4_ = (int)((ulonglong)dStack_280 >> 0x20);
    local_1b8 = (dVar13 * dVar9 - dVar24 * dStack_320) * dVar30;
    dStack_190 = (dVar24 * dStack_330 - dVar20) * dVar15;
    local_1d8 = (1.0 - (local_328 * dVar24 + dStack_330 * dVar13)) * dVar21;
    dStack_1b0 = (1.0 - (local_328 * dVar24 + dVar22)) * dVar30;
    dStack_1d0 = (dVar13 * dVar9 + dVar24 * dStack_320) * dVar21;
    local_1a8 = (dVar24 * dStack_330 + dVar20) * dVar30;
    local_1c8 = (dVar23 - dVar13 * dStack_320) * dVar21;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_318;
    dStack_170 = dStack_310;
    local_168 = local_308;
    uStack_164 = uStack_304;
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    dVar22 = *param_3;
    dVar23 = param_3[1];
    dVar14 = param_3[2];
    dVar18 = dVar23 + dVar23;
    dVar24 = dVar14 + dVar14;
    dVar13 = dVar22 * (dVar22 + dVar22);
    local_208 = (1.0 - (dVar13 + dVar23 * dVar18)) * local_288;
    dVar15 = param_3[3];
    dVar20 = dVar24 * dVar15;
    dVar9 = (dVar22 + dVar22) * param_3[3];
    dVar15 = dVar18 * dVar15;
    local_218 = (dVar15 + *param_3 * dVar24) * local_288;
    local_238 = (dVar18 * dVar22 - dVar20) * dStack_290;
    dStack_210 = (dVar24 * dVar23 - dVar9) * local_288;
    local_378._8_4_ = SUB84(dVar30 * dStack_290,0);
    local_378._0_8_ = dVar21 * local_298;
    local_378._12_4_ = (int)((ulonglong)(dVar30 * dStack_290) >> 0x20);
    local_258 = (1.0 - (dVar14 * dVar24 + dVar23 * dVar18)) * local_298;
    dStack_230 = (1.0 - (dVar14 * dVar24 + dVar13)) * dStack_290;
    dStack_250 = (dVar18 * dVar22 + dVar20) * local_298;
    local_228 = (dVar24 * dVar23 + dVar9) * dStack_290;
    local_248 = (*param_3 * dVar24 - dVar15) * local_298;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_3[4];
    dStack_1f0 = param_3[5];
    local_1e8 = *(undefined4 *)(param_3 + 6);
    uStack_1e4 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_1e0 = 0;
    uStack_1dc = 0x3ff00000;
    FUN_1447fea8d(&local_158);
    local_380 = local_148;
    dVar21 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
    local_388 = local_128;
    dVar30 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar24 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar7 = -(ulonglong)(0.0 <= dVar21 + -9.99999993922529e-09);
    dVar15 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar21)) & uVar7);
    uVar7 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
    dVar30 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar7);
    uVar7 = -(ulonglong)(0.0 <= dVar24 + -9.99999993922529e-09);
    local_288 = (double)local_368._0_8_;
    dStack_280 = (double)local_368._8_8_;
    dVar24 = (double)(~uVar7 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar24)) & uVar7);
    local_298 = (double)local_378._0_8_;
    uVar2 = local_378._8_8_;
    auVar8._8_8_ = -(ulonglong)(0.0 <= (double)local_378._8_8_);
    auVar8._0_8_ = -(ulonglong)(0.0 <= (double)local_378._0_8_);
    auVar10 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar8);
    dVar21 = (double)(~-(ulonglong)(0.0 <= (double)local_368._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= (double)local_368._0_8_) & 0x3ff0000000000000);
    dVar20 = auVar10._0_8_;
    local_158 = local_158 * dVar15 * dVar20;
    local_150 = local_150 * dVar15 * dVar20;
    local_148 = dVar15 * local_148 * dVar20;
    dVar15 = auVar10._8_8_;
    local_128 = dVar30 * local_128 * dVar15;
    local_130 = local_130 * dVar30 * dVar15;
    local_138 = dVar15 * local_138 * dVar30;
    local_108 = dVar24 * local_108 * dVar21;
    local_110 = local_110 * dVar24 * dVar21;
    local_118 = dVar21 * local_118 * dVar24;
    FUN_14481fd10(&local_278,&local_158);
    dVar21 = local_268 * local_268 + local_278 * local_278;
    dVar15 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar12._0_8_ = dVar21 + dVar15;
    auVar12._8_8_ = dVar21 + dVar15;
    auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    auVar10 = sqrtpd(auVar12,auVar12);
    auVar10 = divpd(_DAT_149934d80,auVar10);
    auVar17._0_8_ = auVar10._0_8_ * local_268;
    auVar17._8_8_ = auVar10._8_8_ * dStack_260;
    uVar7 = (ulonglong)(dStack_270 * auVar10._8_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar16);
    dStack_290 = (double)uVar2;
    local_2d8._8_4_ = (int)uVar7;
    local_2d8._0_8_ =
         (ulonglong)(local_278 * auVar10._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    local_2d8._12_4_ = (int)(uVar7 >> 0x20);
    dStack_2a0 = 0.0;
  }
  fVar19 = (float)((double)(float)param_2[1] * local_298);
  local_2b8 = local_f8;
  dStack_2b0 = dStack_f0;
  local_2a8 = local_e8;
  if (*param_2 == 2) {
    local_f8 = local_f8 * *(double *)(param_5 + 0x120);
    dStack_f0 = dStack_f0 * *(double *)(param_5 + 0x128);
    local_e8 = local_e8 * *(double *)(param_5 + 0x130);
    dVar24 = *(double *)(param_5 + 0xe0);
    dVar20 = *(double *)(param_5 + 0xe8);
    dVar9 = *(double *)(param_5 + 0xf0);
    dVar21 = *(double *)(param_5 + 0xf8);
    dVar15 = dStack_f0 * dVar24 - local_f8 * dVar20;
    dVar22 = local_e8 * dVar20 - dStack_f0 * dVar9;
    dVar30 = local_f8 * dVar9 - dVar24 * local_e8;
    dVar22 = dVar22 + dVar22;
    dVar30 = dVar30 + dVar30;
    dVar15 = dVar15 + dVar15;
    dVar13 = (dVar15 * dVar20 - dVar30 * dVar9) + dVar21 * dVar22 + local_f8 +
             *(double *)(param_5 + 0x100);
    dVar9 = (dVar9 * dVar22 - dVar24 * dVar15) + *(double *)(param_5 + 0xf8) * dVar30 + dStack_f0 +
            *(double *)(param_5 + 0x108);
    if (((((double)-fVar19 <= dVar13) && (dVar13 <= (double)(*(float *)(param_5 + 0x1a4) + fVar19)))
        && (dVar21 = local_e8 + dVar21 * dVar15 + (dVar30 * dVar24 - dVar22 * dVar20) +
                     *(double *)(param_5 + 0x110),
           (float)(((double)*(float *)(param_5 + 0x180) * dVar9 +
                   (double)*(float *)(param_5 + 0x184) * dVar21) -
                  (double)*(float *)(param_5 + 0x188)) <= fVar19)) &&
       (((float)(((double)*(float *)(param_5 + 0x18c) * dVar9 +
                 (double)*(float *)(param_5 + 400) * dVar21) - (double)*(float *)(param_5 + 0x194))
         <= fVar19 &&
        ((float)(((double)*(float *)(param_5 + 0x198) * dVar9 +
                 dVar21 * (double)*(float *)(param_5 + 0x19c)) - (double)*(float *)(param_5 + 0x1a0)
                ) <= fVar19)))) {
      bVar3 = true;
      goto LAB_143cfabab;
    }
  }
  else {
    local_3a0 = &local_258;
    local_3a8 = &local_1d8;
    local_398 = &local_338;
    FUN_1488167a7(param_2,local_2d8,param_5 + 0xe0,&local_158);
    if (-1 < local_338) {
      local_368._0_8_ = local_1c8;
      local_378._0_8_ = (double)*(float *)(param_5 + 0x18c);
      local_380 = (double)*(float *)(param_5 + 400);
      local_388 = (double)*(float *)(param_5 + 0x194);
      local_340 = (double)*(float *)(param_5 + 0x198);
      local_348 = (double)*(float *)(param_5 + 0x19c);
      local_350 = (double)*(float *)(param_5 + 0x1a0);
      bVar3 = true;
      iVar5 = 0;
      do {
        dVar15 = (double)((float)iVar5 * (1.0 / (float)local_338));
        dVar21 = local_1d8 * dVar15 + local_158;
        if (((double)-fVar19 <= dVar21) &&
           (dVar21 <= (double)(*(float *)(param_5 + 0x1a4) + fVar19))) {
          dVar21 = local_1c8 * dVar15 + local_148;
          dVar15 = dVar15 * dStack_1d0 + local_150;
          if (((float)(((double)*(float *)(param_5 + 0x180) * dVar15 +
                       dVar21 * (double)*(float *)(param_5 + 0x184)) -
                      (double)*(float *)(param_5 + 0x188)) <= fVar19) &&
             (((float)(((double)*(float *)(param_5 + 0x18c) * dVar15 + dVar21 * local_380) -
                      local_388) <= fVar19 &&
              ((float)((dVar15 * local_340 + dVar21 * local_348) - local_350) <= fVar19)))) break;
        }
        iVar1 = iVar5 + 1;
        bVar3 = iVar5 < local_338;
        iVar5 = iVar1;
      } while (local_338 + 1 != iVar1);
      goto LAB_143cfabab;
    }
  }
  bVar3 = false;
LAB_143cfabab:
  if ((local_d0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 143cfac2c FUN_143cfac2c body=1182 status=ok
// SIG undefined FUN_143cfac2c(void)

void FUN_143cfac2c(longlong param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_118 [40];
  char local_f0 [16];
  longlong *local_e0;
  undefined4 local_c8 [2];
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_1456bb102(local_f0);
  pfVar5 = &local_c0;
  FUN_1448729ea((float *)(param_1 + 0x48),pfVar5,local_f0);
  if (local_a0 == 3) {
    fVar7 = local_c0;
    bVar3 = 3;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x48);
    pfVar6 = &local_98;
    FUN_1400b56fe(pfVar6,&local_c0,3);
    if (local_78 != 0) {
      fVar7 = local_98;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar6 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar2)(pfVar6);
    }
    bVar3 = local_a0;
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
      bVar3 = local_a0;
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar5 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar2)(pfVar5);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_1456bb102(local_f0,param_2);
  pfVar5 = &local_c0;
  FUN_1448729ea((float *)(param_1 + 0xe8),pfVar5,local_f0);
  if (local_a0 == 3) {
    uVar4 = 3;
    fVar8 = local_c0;
  }
  else {
    fVar8 = *(float *)(param_1 + 0xe8);
    pfVar6 = &local_98;
    FUN_1400b56fe(pfVar6,&local_c0,3);
    if (local_78 != 0) {
      fVar8 = local_98;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar6 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar2)(pfVar6);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar4 = (uint)local_a0;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar5 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar2)(pfVar5);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  local_f0[0] = '\0';
  local_c8[0] = 0;
  FUN_1456bb102(local_f0,param_2);
  pfVar5 = &local_c0;
  FUN_1448729ea((float *)(param_1 + 0x98),pfVar5,local_f0);
  if (local_a0 == 3) {
    uVar4 = 3;
    fVar9 = local_c0;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x98);
    pfVar6 = &local_98;
    FUN_1400b56fe(pfVar6,&local_c0,3);
    if (local_78 != 0) {
      fVar9 = local_98;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar6 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar2)(pfVar6);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar4 = (uint)local_a0;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar5 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar2)(pfVar5);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  *param_4 = (double)fVar8;
  param_4[1] = (double)fVar7;
  param_4[2] = (double)fVar9;
  *(undefined1 *)(param_4 + 3) = 1;
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cfb0dc FUN_143cfb0dc body=1474 status=ok
// SIG undefined FUN_143cfb0dc(void)

ulonglong FUN_143cfb0dc(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong unaff_RBP;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  undefined8 *puVar11;
  undefined1 auStack_128 [40];
  char local_100 [16];
  longlong *local_f0;
  longlong local_e8;
  undefined4 local_d8 [2];
  char local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 local_a8 [2];
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined8 local_78 [6];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(byte *)(param_1 + 0xb1) & 1) == 0) ||
     (cVar4 = (**(code **)(*param_2 + 0x28))(param_2), cVar4 == '\0')) {
    if (*(char *)(param_1 + 0xb0) != '\0') {
      cVar5 = (**(code **)(*param_2 + 0x38))(param_2);
      lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
      bVar3 = 0.0 < *(float *)(lVar6 + 0x18);
      cVar4 = *(char *)(param_1 + 0xb0);
      uVar9 = 0;
      if (((cVar4 == (char)('\x02' - cVar5)) || (cVar4 == '\x03' && bVar3)) ||
         (unaff_RBP = uVar9, cVar4 == '\x04' && !bVar3)) goto LAB_143cfb628;
    }
    switch(*(undefined1 *)(param_1 + 0x110)) {
    case 1:
      cVar4 = (**(code **)(*param_2 + 0xa0))(param_2,1);
      if (cVar4 == '\0') goto LAB_143cfb626;
      break;
    case 2:
      cVar4 = (**(code **)(*param_2 + 0xa0))(param_2,1);
      if (cVar4 != '\0') goto LAB_143cfb626;
      break;
    case 3:
      unaff_RBP = 0;
      uVar9 = 0;
      cVar4 = (**(code **)(*param_2 + 0xa0))(param_2,0);
      if (cVar4 == '\0') goto LAB_143cfb628;
      break;
    case 4:
      unaff_RBP = 0;
      uVar9 = 0;
      cVar4 = (**(code **)(*param_2 + 0xa0))(param_2,0);
      if (cVar4 != '\0') goto LAB_143cfb628;
    }
    uVar7 = (**(code **)(*param_2 + 0xe0))(param_2);
    cVar4 = FUN_14187bccc(param_1 + 0x18,uVar7);
    if (cVar4 != '\0') {
      uVar7 = (**(code **)(*param_2 + 0xd8))(param_2);
      cVar4 = FUN_1403343e8(param_1 + 0x38,uVar7);
      if (cVar4 != '\0') {
        uVar7 = (**(code **)(*param_2 + 0xe8))(param_2);
        cVar4 = FUN_14187bed8(param_1 + 0x58,uVar7);
        if (cVar4 != '\0') {
          if (*(char *)(param_1 + 0xb8) == '\x01') {
            if (param_3 == 0) {
              param_3 = (**(code **)(*param_2 + 0xf8))(param_2);
            }
            cVar4 = FUN_14881bc0e(param_1 + 0xb8,param_3);
            if (cVar4 == '\0') goto LAB_143cfb626;
          }
          lVar6 = *(longlong *)(param_1 + 0x90);
          if (lVar6 == 0) {
            local_78[0] = *(undefined8 *)(param_1 + 0x80);
            FUN_1446dcdd4(local_100);
            lVar6 = FUN_1448fdc6e(local_100);
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(param_1 + 0x90) = lVar6;
            if (lVar6 != 0) goto LAB_143cfb284;
          }
          else {
LAB_143cfb284:
            uVar7 = (**(code **)(*param_2 + 0xf8))(param_2);
            unaff_RBP = 0;
            local_100[0] = '\0';
            local_d8[0] = 0;
            FUN_1456bb102(local_100,uVar7);
            local_d0 = '\0';
            local_a8[0] = 0;
            FUN_1400606f6(local_78,lVar6,local_100);
            puVar8 = local_48;
            if (local_48 == (undefined8 *)0x0) {
              puVar8 = local_78;
            }
            puVar11 = (undefined8 *)&DAT_14c9a40e0;
            if (0 < local_40) {
              puVar11 = puVar8;
            }
            FUN_1400603ec(local_a0,lVar6,puVar11);
            puVar8 = local_48;
            if (local_48 == (undefined8 *)0x0) {
              puVar8 = local_78;
            }
            FUN_1446fdf58(puVar8,local_40);
            if (local_48 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            cVar4 = FUN_140168b7a(local_a0,1);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar10 = local_a0;
              if (0x18 < local_88) {
                ppppuVar10 = (undefined8 ****)local_a0[0];
              }
              (*pcVar2)(ppppuVar10);
            }
            if (0x18 < local_88) {
              FUN_1400020a8(local_a0[0]);
            }
            FUN_1448173f8(local_a8);
            if (local_d0 != '\0') {
              if (local_d0 == '\x01') {
                local_c8 = 0;
              }
              else if ((local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_c0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_c0 + 0x10))();
                }
              }
              local_d0 = '\0';
            }
            FUN_1448173f8(local_d8);
            if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_f0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_f0 + 0x10))();
              }
            }
            if (cVar4 == '\0') goto LAB_143cfb626;
          }
          lVar6 = *(longlong *)(param_1 + 0xa8);
          if (lVar6 == 0) {
            local_78[0] = *(undefined8 *)(param_1 + 0x98);
            FUN_1446dcdd4(local_100);
            lVar6 = FUN_1448fdc6e(local_100);
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(param_1 + 0xa8) = lVar6;
            if (lVar6 != 0) goto LAB_143cfb437;
          }
          else {
LAB_143cfb437:
            uVar7 = (**(code **)(*param_2 + 0x108))(param_2);
            unaff_RBP = 0;
            local_100[0] = '\0';
            local_d8[0] = 0;
            FUN_1456bb102(local_100,uVar7);
            local_d0 = '\0';
            local_a8[0] = 0;
            FUN_1400606f6(local_78,lVar6,local_100);
            puVar8 = local_48;
            if (local_48 == (undefined8 *)0x0) {
              puVar8 = local_78;
            }
            puVar11 = (undefined8 *)&DAT_14c9a40e0;
            if (0 < local_40) {
              puVar11 = puVar8;
            }
            FUN_1400603ec(local_a0,lVar6,puVar11);
            puVar8 = local_48;
            if (local_48 == (undefined8 *)0x0) {
              puVar8 = local_78;
            }
            FUN_1446fdf58(puVar8,local_40);
            if (local_48 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            cVar4 = FUN_140168b7a(local_a0,1);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
            if (pcVar2 != (code *)0x0) {
              ppppuVar10 = local_a0;
              if (0x18 < local_88) {
                ppppuVar10 = (undefined8 ****)local_a0[0];
              }
              (*pcVar2)(ppppuVar10);
            }
            if (0x18 < local_88) {
              FUN_1400020a8(local_a0[0]);
            }
            FUN_1448173f8(local_a8);
            if (local_d0 != '\0') {
              if (local_d0 == '\x01') {
                local_c8 = 0;
              }
              else if ((local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_c0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_c0 + 0x10))();
                }
              }
              local_d0 = '\0';
            }
            FUN_1448173f8(local_d8);
            if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_f0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_f0 + 0x10))();
              }
            }
            if (cVar4 == '\0') goto LAB_143cfb626;
          }
          uVar9 = CONCAT71((int7)(unaff_RBP >> 8),1);
          goto LAB_143cfb628;
        }
      }
    }
  }
LAB_143cfb626:
  uVar9 = 0;
LAB_143cfb628:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143cfb6a0 FUN_143cfb6a0 body=3138 status=ok
// SIG undefined FUN_143cfb6a0(void)

ulonglong FUN_143cfb6a0(longlong *param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  int *local_c8;
  undefined1 local_bc [12];
  undefined8 local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  int local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_4 == (longlong *)0x0) goto LAB_143cfc238;
  local_d8 = param_3;
  plVar5 = (longlong *)(**(code **)(*param_4 + 0xf8))(param_4);
  uVar14 = 0;
  cVar4 = (**(code **)(*param_1 + 0x18))(param_1,param_4,0);
  if (cVar4 == '\0') goto LAB_143cfc23a;
  lVar6 = (**(code **)(*param_4 + 0x118))(param_4);
  if (lVar6 != 0) {
    if ((int)param_1[0x25] == 0) {
LAB_143cfb893:
      plVar8 = (longlong *)0x0;
      if ((int)param_1[0x29] < 1) {
LAB_143cfbad9:
        if ((int)param_1[0x2a] != 0) {
          if (((*param_2 == 0) || (iVar1 = param_2[1], iVar1 == 0)) || (*param_2 == DAT_14c948000))
          {
LAB_143cfc2af:
            local_98 = DAT_14c948620;
            local_a0 = DAT_14c948618;
          }
          else {
            if ((iVar1 < 2) && (param_2[9] < 1)) {
              piVar12 = param_2 + 2;
            }
            else {
              piVar12 = *(int **)(param_2 + 6);
            }
            if (iVar1 < 1) goto LAB_143cfc2af;
            local_98 = piVar12[2];
            local_a0 = *(undefined8 *)piVar12;
          }
          if (((local_d8 == (longlong *)0x0) ||
              (lVar6 = (**(code **)(*local_d8 + 0x2b0))(), lVar6 == 0)) ||
             (plVar8 = (longlong *)FUN_14039ffc6(lVar6), plVar8 == (longlong *)0x0))
          goto LAB_143cfc238;
          (**(code **)(*plVar8 + 0x78))(plVar8,&local_b0,&local_a0);
          plVar8 = &local_88;
          FUN_140e3418c(param_1 + 0x2a,plVar8,1);
          FUN_1401533ba(local_bc,plVar8,1);
          lVar15 = FUN_140ca9be8(local_b0,local_bc);
          if (lVar15 == 0) {
LAB_143cfbd8f:
            bVar3 = false;
          }
          else {
            uVar7 = (**(code **)(*param_4 + 0x108))(param_4);
            plVar9 = (longlong *)FUN_1401499e8(lVar6);
            if (plVar9 == (longlong *)0x0) goto LAB_143cfbd8f;
            plVar8 = &local_88;
            FUN_14096c63a(lVar15 + 0x10,plVar8);
            if (((char)local_88 == '\x01') &&
               (lVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,&local_88), lVar6 != 0)) {
              lVar15 = *(longlong *)(lVar6 + 0x10);
              if (*(longlong *)(lVar6 + 0x10) == 0) {
                lVar15 = lVar6;
              }
              plVar8 = (longlong *)0x0;
              if ((longlong)*(int *)(lVar6 + 0x18) != 0) {
                plVar8 = (longlong *)((longlong)*(int *)(lVar6 + 0x18) * 8);
                plVar9 = (longlong *)0x0;
                do {
                  iVar1 = *(int *)(lVar15 + 4 + (longlong)plVar9);
                  if ((((iVar1 != 0) &&
                       (uVar2 = *(uint *)(lVar15 + (longlong)plVar9), -1 < (int)uVar2)) &&
                      (((int)uVar2 < DAT_14c9647dc &&
                       (((plVar13 = (longlong *)
                                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                         plVar13 != (longlong *)0x0 && ((int)plVar13[2] == iVar1)) &&
                        ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))))) &&
                     (lVar6 = *plVar13, lVar6 != 0)) {
                    if (DAT_14cac9ca8 == 0) {
                      local_90 = FUN_141030f22;
                      local_e0 = FUN_14081d0ea;
                      local_e8 = FUN_14081d0ea;
                      local_f0 = &local_90;
                      local_f8 = &LAB_1478c0a72;
                      local_100 = &LAB_1417b2375;
                      local_108 = L"Engine";
                      local_110 = 0x1000000000;
                      local_118 = 0x10000004;
                      local_120 = 8;
                      local_128 = 0x390;
                      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                    }
                    if (((*(int *)(DAT_14cac9ca8 + 0x38) <=
                          *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                        (*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
                       (cVar4 = FUN_14064aef8(lVar6,uVar7), cVar4 != '\0')) {
                      bVar3 = true;
                      goto LAB_143cfbe05;
                    }
                  }
                  plVar9 = plVar9 + 1;
                } while (plVar8 != plVar9);
              }
            }
            bVar3 = false;
LAB_143cfbe05:
            if (local_60 != 0) {
              FUN_1400020a8();
            }
          }
          plVar9 = (longlong *)CONCAT44(uStack_a4,local_a8);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar9 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar12 = (int *)((longlong)plVar9 + 0xc);
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (*piVar12 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          if (!bVar3) goto LAB_143cfc238;
        }
        if ((plVar5 == (longlong *)0x0) || (((int)param_1[0x2d] < 1 && ((int)param_1[0x2f] < 1)))) {
          plVar5 = (longlong *)0x0;
        }
        else {
          lVar6 = plVar5[0x39];
          if (lVar6 == 0) {
            local_78 = DAT_14c8464f0;
            local_88 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_80 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
          else {
            local_88 = *(longlong *)(lVar6 + 0x260);
            uStack_80 = *(longlong *)(lVar6 + 0x268);
            local_78 = *(longlong **)(lVar6 + 0x270);
          }
          uVar7 = FUN_1447210f0(plVar5);
          plVar5 = (longlong *)FUN_145788b2d(uVar7,&local_88);
        }
        if ((longlong)(int)param_1[0x2d] < 1) {
LAB_143cfc045:
          if ((int)param_1[0x2f] < 1) {
LAB_143cfc26a:
            uVar14 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
            goto LAB_143cfc23a;
          }
          if (plVar5 != (longlong *)0x0) {
            do {
              plVar9 = (longlong *)plVar5[8];
              if (plVar9 != (longlong *)0x0) {
LAB_143cfc0c3:
                if ((longlong)(int)param_1[0x2f] == 0) goto LAB_143cfc238;
                lVar6 = param_1[0x2e];
                lVar15 = (longlong)(int)param_1[0x2f] * 0x30;
                goto LAB_143cfc0ee;
              }
              plVar9 = (longlong *)FUN_140e045c8(plVar5[6]);
              plVar5[8] = (longlong)plVar9;
              if (plVar9 != (longlong *)0x0) goto LAB_143cfc0c3;
              plVar5 = (longlong *)FUN_1403155a4(plVar5);
              uVar14 = 0;
            } while (plVar5 != (longlong *)0x0);
            goto LAB_143cfc23a;
          }
        }
        else if (plVar5 != (longlong *)0x0) {
          lVar6 = param_1[0x2c];
          lVar15 = (longlong)(int)param_1[0x2d] * 0x30 + lVar6;
          do {
            if (((*param_2 == 0) || (iVar1 = param_2[1], iVar1 == 0)) || (*param_2 == DAT_14c948000)
               ) {
              local_a8 = DAT_14c948620;
              local_b0 = DAT_14c948618;
            }
            else {
              if ((1 < iVar1) || (piVar12 = param_2 + 2, 0 < param_2[9])) {
                piVar12 = *(int **)(param_2 + 6);
              }
              if (iVar1 < 1) {
                local_a8 = DAT_14c948620;
                local_b0 = DAT_14c948618;
              }
              else {
                local_a8 = piVar12[2];
                local_b0 = *(undefined8 *)piVar12;
              }
            }
            FUN_140f4ea62(lVar6,&local_88,local_d8,&local_b0);
            if (local_78 == (longlong *)0x0) {
              if (((local_88 != 0) && (uStack_80 != 0)) &&
                 ((plVar8 = *(longlong **)(uStack_80 + 0xb8), plVar8 != (longlong *)0x0 &&
                  (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 != '\0')))) {
                uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
                local_78 = (longlong *)FUN_144aff482(uVar7,&local_88);
                if (local_78 != (longlong *)0x0) goto LAB_143cfbf1a;
              }
            }
            else {
LAB_143cfbf1a:
              plVar8 = local_78;
              lVar10 = (**(code **)(*local_78 + 8))(local_78);
              lVar11 = FUN_141030812();
              if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                 (*(longlong *)
                   (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                  lVar11 + 0x30)) {
                plVar9 = plVar5;
                if (plVar5 == plVar8) goto LAB_143cfc045;
                do {
                  plVar9 = (longlong *)FUN_1403155a4(plVar9);
                } while (plVar9 != plVar8 && plVar9 != (longlong *)0x0);
                if (plVar9 != (longlong *)0x0) goto LAB_143cfc045;
              }
            }
            lVar6 = lVar6 + 0x30;
            uVar14 = 0;
          } while (lVar6 != lVar15);
          goto LAB_143cfc23a;
        }
      }
      else if (plVar5 != (longlong *)0x0) {
        uVar7 = FUN_1401b0f18();
        plVar8 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar7);
        if (plVar8 != (longlong *)0x0) {
          uVar7 = FUN_1401b0f18();
          plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
          if ((plVar8 != plVar9) && (plVar9 != (longlong *)0x0)) {
            uVar7 = (**(code **)(*plVar9 + 0x28))(plVar9);
            FUN_1406c9d00(uVar7,&local_88);
            if (uStack_80 == 0) {
              uVar7 = FUN_140927942();
              uStack_80 = FUN_14477b664(uVar7);
            }
            local_d0 = local_78;
            if (local_78 == (longlong *)0x0) {
              if ((((local_88 != 0) && (uStack_80 != 0)) &&
                  (plVar8 = *(longlong **)(uStack_80 + 0xb8), plVar8 != (longlong *)0x0)) &&
                 (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 != '\0')) {
                uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
                local_d0 = (longlong *)FUN_144aff482(uVar7,&local_88);
                if (local_d0 != (longlong *)0x0) goto LAB_143cfb93d;
              }
            }
            else {
LAB_143cfb93d:
              if ((longlong)(int)param_1[0x29] != 0) {
                lVar6 = param_1[0x28];
                local_c8 = param_2 + 2;
                lVar15 = (longlong)(int)param_1[0x29] * 0x30;
                do {
                  if (((*param_2 == 0) || (iVar1 = param_2[1], iVar1 == 0)) ||
                     (*param_2 == DAT_14c948000)) {
LAB_143cfbab7:
                    local_a8 = DAT_14c948620;
                    local_b0 = DAT_14c948618;
                  }
                  else {
                    if ((1 < iVar1) || (piVar12 = local_c8, 0 < param_2[9])) {
                      piVar12 = *(int **)(param_2 + 6);
                    }
                    if (iVar1 < 1) goto LAB_143cfbab7;
                    local_a8 = piVar12[2];
                    local_b0 = *(undefined8 *)piVar12;
                  }
                  FUN_140f4ea62(lVar6,&local_88,local_d8,&local_b0);
                  if (local_78 == (longlong *)0x0) {
                    if ((((local_88 != 0) && (uStack_80 != 0)) &&
                        (plVar8 = *(longlong **)(uStack_80 + 0xb8), plVar8 != (longlong *)0x0)) &&
                       (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 != '\0')) {
                      uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
                      local_78 = (longlong *)FUN_144aff482(uVar7,&local_88);
                      if (local_78 != (longlong *)0x0) goto LAB_143cfb9eb;
                    }
                  }
                  else {
LAB_143cfb9eb:
                    plVar8 = local_78;
                    lVar10 = (**(code **)(*local_78 + 8))(local_78);
                    lVar11 = FUN_140927942();
                    if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                       ((*(longlong *)
                          (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
                         lVar11 + 0x30 &&
                        (cVar4 = (**(code **)(*plVar8 + 0x60))(plVar8,local_d0), cVar4 != '\0'))))
                    goto LAB_143cfbad9;
                  }
                  lVar6 = lVar6 + 0x30;
                  uVar14 = 0;
                  lVar15 = lVar15 + -0x30;
                } while (lVar15 != 0);
                goto LAB_143cfc23a;
              }
            }
          }
        }
      }
    }
    else if (plVar5 != (longlong *)0x0) {
      uVar7 = FUN_1401b0f18();
      plVar8 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar7);
      if (plVar8 != (longlong *)0x0) {
        uVar7 = FUN_1401b0f18();
        plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
        if (plVar9 != (longlong *)0x0 && plVar8 != plVar9) {
          lVar6 = (**(code **)(*plVar9 + 0x28))(plVar9);
          iVar1 = (int)param_1[0x25];
          if ((char)param_1[0x23] == '\0') {
            if (iVar1 != 0) {
              plVar9 = (longlong *)param_1[0x24];
              plVar8 = plVar9 + iVar1;
              do {
                if (*(int *)(lVar6 + 0x80) != 0) {
                  lVar15 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar6 + 0x78) + lVar15) == *plVar9)
                    goto LAB_143cfb88a;
                    lVar15 = lVar15 + 8;
                  } while ((longlong)*(int *)(lVar6 + 0x80) << 3 != lVar15);
                }
                if (*(int *)(lVar6 + 0x90) == 0) goto LAB_143cfc238;
                lVar15 = 0;
                while (*(longlong *)(*(longlong *)(lVar6 + 0x88) + lVar15) != *plVar9) {
                  lVar15 = lVar15 + 8;
                  uVar14 = 0;
                  if ((longlong)*(int *)(lVar6 + 0x90) << 3 == lVar15) goto LAB_143cfc23a;
                }
LAB_143cfb88a:
                plVar9 = plVar9 + 1;
              } while (plVar9 != plVar8);
            }
            goto LAB_143cfb893;
          }
          if (iVar1 != 0) {
            plVar9 = (longlong *)param_1[0x24];
            plVar8 = plVar9 + iVar1;
            do {
              if (*(int *)(lVar6 + 0x80) != 0) {
                lVar15 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0x78) + lVar15) == *plVar9)
                  goto LAB_143cfb893;
                  lVar15 = lVar15 + 8;
                } while ((longlong)*(int *)(lVar6 + 0x80) << 3 != lVar15);
              }
              if (*(int *)(lVar6 + 0x90) != 0) {
                lVar15 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar6 + 0x88) + lVar15) == *plVar9)
                  goto LAB_143cfb893;
                  lVar15 = lVar15 + 8;
                } while ((longlong)*(int *)(lVar6 + 0x90) << 3 != lVar15);
              }
              plVar9 = plVar9 + 1;
              uVar14 = 0;
            } while (plVar9 != plVar8);
            goto LAB_143cfc23a;
          }
        }
      }
    }
  }
LAB_143cfc238:
  uVar14 = 0;
LAB_143cfc23a:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
  while( true ) {
    lVar6 = lVar6 + 0x30;
    uVar14 = 0;
    lVar15 = lVar15 + -0x30;
    if (lVar15 == 0) break;
LAB_143cfc0ee:
    if (((*param_2 == 0) || (iVar1 = param_2[1], iVar1 == 0)) || (*param_2 == DAT_14c948000)) {
LAB_143cfc216:
      local_a8 = DAT_14c948620;
      local_b0 = DAT_14c948618;
    }
    else {
      if ((1 < iVar1) || (piVar12 = param_2 + 2, 0 < param_2[9])) {
        piVar12 = *(int **)(param_2 + 6);
      }
      if (iVar1 < 1) goto LAB_143cfc216;
      local_a8 = piVar12[2];
      local_b0 = *(undefined8 *)piVar12;
    }
    FUN_140f4ea62(lVar6,&local_88,local_d8,&local_b0);
    if (local_78 == (longlong *)0x0) {
      if ((((local_88 != 0) && (uStack_80 != 0)) &&
          (plVar5 = *(longlong **)(uStack_80 + 0xb8), plVar5 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar4 != '\0')) {
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        local_78 = (longlong *)FUN_144aff482(uVar7,&local_88);
        if (local_78 != (longlong *)0x0) goto LAB_143cfc167;
      }
    }
    else {
LAB_143cfc167:
      plVar5 = local_78;
      plVar8 = (longlong *)(**(code **)(*local_78 + 8))(local_78);
      lVar10 = FUN_1405e2e10();
      if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= (int)plVar8[7])) &&
         ((plVar5 == plVar9 &&
          (*(longlong *)(plVar8[6] + (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30))))
      goto LAB_143cfc26a;
    }
  }
  goto LAB_143cfc23a;
}



// FUNCTION 143cfc2e3 FUN_143cfc2e3 body=91 status=ok
// SIG undefined FUN_143cfc2e3(void)

void FUN_143cfc2e3(void)

{
  if (DAT_14cb766a0 != 0) {
    if (DAT_14cb76698 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb76698)(DAT_14cb76698,0);
    FUN_1446efa72(&DAT_14cb76698,0,0,0x10);
    DAT_14cb766a0 = 0;
  }
  if (DAT_14cb76698 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143cfc33e FUN_143cfc33e body=1719 status=ok
// SIG undefined FUN_143cfc33e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143cfc33e(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_268 [32];
  longlong *local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined1 local_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined1 local_210;
  undefined1 local_208;
  undefined1 local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c0 [3];
  int local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  longlong local_178;
  longlong lStack_170;
  int local_168;
  undefined8 local_160;
  longlong lStack_158;
  longlong local_150 [3];
  undefined4 local_138;
  undefined8 local_130;
  longlong local_128 [6];
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  undefined7 uStack_b7;
  byte local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined4 local_90;
  byte local_8c;
  undefined **local_88;
  undefined *local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  cVar6 = FUN_140746d72(param_2 + 2);
  if (((cVar6 != '\0') || (lVar2 = param_2[0x8f], lVar2 == 0)) ||
     ((*(byte *)((longlong)param_2 + 0x39c) & 2) != 0)) goto LAB_143cfc886;
  local_180 = 0;
  local_190 = 0;
  local_188 = 0;
  local_1a0 = 0;
  local_1c0[1] = 0;
  local_1c0[2] = 0;
  local_1a8 = 0;
  if ((param_3 == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
    local_1c0[0] = *(longlong *)(param_1 + 0x18);
LAB_143cfc43f:
    local_1a8 = 0x3002;
    local_1a0 = 0;
    local_1c0[2] = local_1c0[0];
  }
  else {
    puVar3 = *(undefined4 **)(*(longlong *)(param_3 + 0x10) + 8);
    puVar11 = &DAT_14c9485f0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar11 = puVar3;
    }
    if (DAT_14c947fe0 == 0) {
      lVar7 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar7);
      DAT_14c947fe0 = lVar7;
    }
    FUN_140045924(DAT_14c947fe0,local_1c0,puVar11,1);
    if ((local_1c0[2] != local_1c0[0]) || (local_1a8 != 0x3002)) goto LAB_143cfc43f;
  }
  cVar6 = FUN_140e0bf12(param_1 + 0x1f0,local_1c0 + 1,&local_180,&local_190);
  if (cVar6 != '\0') {
    local_178 = 0;
    lStack_170 = 0;
    FUN_1457b3d99(&local_190,&local_178);
    local_200 = *(undefined1 *)(param_1 + 0x252);
    local_208 = *(undefined1 *)(param_1 + 0x251);
    local_218 = *(undefined1 *)(param_1 + 0x250);
    local_220 = *(undefined8 *)(param_1 + 0x248);
    local_228 = *(undefined1 *)(param_1 + 0x246);
    local_230 = *(undefined1 *)(param_1 + 0x245);
    local_238 = *(undefined1 *)(param_1 + 0x244);
    local_240 = *(undefined4 *)(param_1 + 0x240);
    local_1d8 = *(undefined4 *)(param_1 + 0x230);
    uStack_1d4 = *(undefined4 *)(param_1 + 0x234);
    uStack_1d0 = *(undefined4 *)(param_1 + 0x238);
    uStack_1cc = *(undefined4 *)(param_1 + 0x23c);
    local_248 = (longlong *)&local_1d8;
    local_1e8 = 1;
    local_1f0 = 1;
    local_1f8 = 1;
    local_210 = 1;
    FUN_141530594(lVar2,local_180,1,&local_178);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = (int)param_2[0xa2];
  lVar7 = FUN_14095dd8e(param_1 + 0x270);
  if (iVar1 == 0) {
    if (lVar7 != 0) {
      uVar9 = *(uint *)(param_1 + 0x2a8) & 4;
      goto joined_r0x000143cfc4ca;
    }
  }
  else if (iVar1 == 1) {
    if (lVar7 != 0) {
      uVar9 = *(uint *)(param_1 + 0x2a8) & 2;
      goto joined_r0x000143cfc4ca;
    }
  }
  else if ((iVar1 == 2) && (lVar7 != 0)) {
    uVar9 = *(uint *)(param_1 + 0x2a8) & 1;
joined_r0x000143cfc4ca:
    if (uVar9 != 0) {
      FUN_1409603a8(param_2,lVar7);
    }
  }
  lVar7 = FUN_1411902e8(param_1);
  if (lVar7 != 0) {
    lStack_170 = 0;
    local_168 = 0x3006;
    local_160 = 0;
    lStack_158 = 0;
    local_150[0] = 0;
    local_150[1] = 0;
    local_150[2] = 0;
    local_138 = 0x3002;
    local_130 = 0;
    local_f8 = 0;
    local_f0 = 0x200000000;
    local_e8 = 0;
    lStack_e0 = 0;
    local_d8 = 0;
    lStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    uStack_bf = 0;
    local_b8 = 0;
    uStack_b7 = 0;
    local_b0 = 0;
    local_a8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_a0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_98 = DAT_14c8464f0;
    local_90 = 0;
    local_8c = 0;
    FUN_1405c5fa2();
    local_80 = &DAT_14cb769e8;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = &PTR_FUN_14b0394b0;
    uVar12 = (**(code **)(*param_2 + 0x140))(param_2,0);
    local_178 = CONCAT44(local_178._4_4_,uVar12);
    if (param_2[0x95] != 0 || (int)param_2[0x96] != 0x3006) {
      local_160 = 0;
      lStack_170 = param_2[0x95];
      local_168 = (int)param_2[0x96];
    }
    lStack_158 = param_2[0x98];
    FUN_1403e062e(local_150,param_2 + 0x80);
    local_d8 = param_2[0x44];
    local_e8 = param_2[0x42];
    lStack_e0 = param_2[0x43];
    lStack_d0 = param_2[0x3f];
    local_c8 = param_2[0x40];
    uStack_c0 = (undefined1)param_2[0x41];
    uStack_bf = (undefined7)((ulonglong)param_2[0x41] >> 8);
    local_b8 = (undefined1)param_2[0x35];
    uStack_b7 = (undefined7)((ulonglong)param_2[0x35] >> 8);
    if (param_2[10] == 0) {
      local_1e0 = 0;
    }
    else {
      puVar3 = *(undefined4 **)(param_2[10] + 8);
      puVar11 = &DAT_14c9485f0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar11 = puVar3;
      }
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,&local_1e0,puVar11,1);
    }
    if (local_150[2] != local_1e0) {
      local_130 = 0;
    }
    local_150[2] = local_1e0;
    if (local_128 != param_2 + 0xb) {
      plVar10 = param_2 + 0xb;
      if ((longlong *)param_2[0x11] != (longlong *)0x0) {
        plVar10 = (longlong *)param_2[0x11];
      }
      FUN_1400709d4(local_128,plVar10,(int)param_2[0x12],local_f0._4_4_);
    }
    local_b0 = *(byte *)((longlong)param_2 + 0x39c) & 1;
    local_8c = *(byte *)(param_2 + 0x3a) >> 5 & 1;
    (*(code *)local_88[4])(&local_88,0);
    local_80 = (undefined *)param_2[0x14];
    FUN_1406022fe(&local_78,param_2 + 0x15);
    if ((char)param_2[0x9b] != '\0') {
      local_98 = param_2[0x9e];
      local_a8 = param_2[0x9c];
      uStack_a0 = param_2[0x9d];
      local_90 = (undefined4)param_2[0x9f];
    }
    lVar8 = param_2[5];
    lVar4 = param_2[7];
    local_248 = &local_178;
    FUN_143c3a2e0(lVar7,lVar8,lVar4,lVar2);
    if (iVar1 == 0) {
      local_248 = &local_178;
      FUN_143c3a8f4(lVar7,lVar8,lVar4,lVar2);
    }
    else if (iVar1 == 2) {
      local_248 = &local_178;
      FUN_143c3a5ea(lVar7,lVar8,lVar4,lVar2);
      if (((longlong *)param_2[4] != (longlong *)0x0 && param_2[3] != 0) &&
         (cVar6 = (**(code **)(*(longlong *)param_2[4] + 0x40))(), cVar6 != '\0')) {
        local_248 = &local_178;
        FUN_143c3abfe(lVar7,lVar8,lVar4,lVar2);
      }
    }
    local_88 = (undefined **)&DAT_14a171d50;
    uVar5 = uStack_70 >> 0x20;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if ((int)uVar5 != 0) {
      FUN_140115c12(&local_78,0);
    }
    local_80 = (undefined *)0x0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_150[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_143cfc886:
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfc9f6 FUN_143cfc9f6 body=134 status=ok
// SIG undefined FUN_143cfc9f6(void)

undefined8 FUN_143cfc9f6(longlong param_1,longlong param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0xb0);
  if (bVar1 != 0) {
    if (bVar1 == 2) {
      if (param_3 == '\0') {
        return 0;
      }
    }
    else {
      bVar2 = (bVar1 & 0xfd) != 1;
      if (param_3 == '\0') {
        bVar2 = bVar1 != 4;
      }
      if (!bVar2) {
        return 0;
      }
    }
  }
  cVar3 = FUN_14187bccc(param_1 + 0x18,*(undefined8 *)(param_2 + 0x10));
  if ((cVar3 != '\0') && (cVar3 = FUN_1403343e8(param_1 + 0x38,param_2 + 0x18), cVar3 != '\0')) {
    uVar4 = FUN_14187bed8(param_1 + 0x58,param_2 + 0x58);
    return uVar4;
  }
  return 0;
}



// FUNCTION 143cfca7c FUN_143cfca7c body=710 status=ok
// SIG undefined FUN_143cfca7c(void)

void FUN_143cfca7c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  uint local_90;
  undefined1 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1405fd34a(&local_58);
  if (local_50 == (longlong *)0x0) goto LAB_143cfcce4;
  iVar6 = (int)local_50[1];
  do {
    if (iVar6 == 0) {
      plVar10 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar5 = (int)local_50[1];
    bVar12 = iVar6 == iVar5;
    if (bVar12) {
      *(int *)(local_50 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
    plVar10 = local_50;
  } while (!bVar12);
  LOCK();
  piVar1 = (int *)((longlong)local_50 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_50 + 0x10))();
  }
  lVar4 = local_58;
  if (plVar10 == (longlong *)0x0) goto LAB_143cfcce4;
  if (local_58 != 0) {
    local_60 = *(undefined8 *)(param_1 + 0x18);
    FUN_1446dcdd4(&local_58);
    if (DAT_14cb77e00 == 0) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar7 = FUN_144837462(DAT_14cb77e00,&local_58);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (lVar7 != 0) {
        if (((((*(int *)(param_1 + 0x34) == 0) ||
              (uVar2 = *(uint *)(param_1 + 0x30), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
            || ((plVar9 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x34))))) ||
           (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (local_58 = *plVar9, local_58 == 0)))) {
          lVar8 = (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x48))();
          if (*(longlong *)(lVar8 + 0x30) == 0) {
            local_58 = 0;
          }
          else {
            local_58 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
          }
        }
        if (*(int *)(param_1 + 0x3c) == 0) {
LAB_143cfcd34:
          plVar9 = (longlong *)0x0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x38);
          plVar9 = (longlong *)0x0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar11 == (undefined8 *)0x0) ||
               ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x3c) ||
                ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_143cfcd34;
            plVar9 = (longlong *)*puVar11;
          }
        }
        if (local_58 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c();
        }
        local_50 = plVar9;
        if ((plVar9 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(plVar9);
        }
        uVar2 = *(uint *)(param_1 + 0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        if (uVar2 == 0) {
          local_68 = *(longlong *)(param_1 + 0x48);
          if (local_68 != 0) {
            LOCK();
            *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
            UNLOCK();
          }
          local_98 = &local_70;
          local_88 = 1;
          local_90 = local_90 & 0xffffff00;
          local_70 = uVar3;
          FUN_1405fe68a(lVar4,lVar7,&local_58,0);
        }
        else {
          local_78 = *(longlong *)(param_1 + 0x48);
          if (local_78 != 0) {
            LOCK();
            *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
            UNLOCK();
          }
          local_98 = &local_80;
          local_90 = uVar2;
          local_80 = uVar3;
          FUN_140600e02(lVar4,lVar7,&local_58,0);
        }
      }
    }
  }
  LOCK();
  plVar9 = plVar10 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_143cfcce4:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143cfcd43 FUN_143cfcd43 body=69 status=ok
// SIG undefined FUN_143cfcd43(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cfcd43(void)

{
  _DAT_14cb76750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cfcd85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76758,1);
  return;
}



// FUNCTION 143cfcd88 FUN_143cfcd88 body=69 status=ok
// SIG undefined FUN_143cfcd88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cfcd88(void)

{
  _DAT_14cb76768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cfcdca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76770,1);
  return;
}



// FUNCTION 143cfcdcd FUN_143cfcdcd body=69 status=ok
// SIG undefined FUN_143cfcdcd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cfcdcd(void)

{
  _DAT_14cb76778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143cfce0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb76780,1);
  return;
}



// FUNCTION 143cfce41 FUN_143cfce41 body=91 status=ok
// SIG undefined FUN_143cfce41(void)

void FUN_143cfce41(void)

{
  if (DAT_14cb76820 != 0) {
    if (DAT_14cb76818 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb76818)(DAT_14cb76818,0);
    FUN_1446efa72(&DAT_14cb76818,0,0,0x10);
    DAT_14cb76820 = 0;
  }
  if (DAT_14cb76818 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143cfce9e FUN_143cfce9e body=61 status=ok
// SIG undefined FUN_143cfce9e(void)

undefined8 * FUN_143cfce9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfcedc FUN_143cfcedc body=61 status=ok
// SIG undefined FUN_143cfcedc(void)

undefined8 * FUN_143cfcedc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfcf1a FUN_143cfcf1a body=61 status=ok
// SIG undefined FUN_143cfcf1a(void)

undefined8 * FUN_143cfcf1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfcf58 FUN_143cfcf58 body=61 status=ok
// SIG undefined FUN_143cfcf58(void)

undefined8 * FUN_143cfcf58(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfcf96 FUN_143cfcf96 body=61 status=ok
// SIG undefined FUN_143cfcf96(void)

undefined8 * FUN_143cfcf96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02e030;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfcfd4 FUN_143cfcfd4 body=198 status=ok
// SIG undefined FUN_143cfcfd4(void)

void FUN_143cfcfd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [184];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar1 = *param_1;
  memcpy(local_120,param_1 + 1,0xb8);
  local_68 = param_1[0x18];
  local_60 = param_1[0x19];
  uStack_58 = param_1[0x1a];
  local_50 = *(undefined4 *)(param_1 + 0x1b);
  local_4c = *(undefined1 *)((longlong)param_1 + 0xdc);
  local_28 = param_1[0x20];
  local_48 = *(undefined4 *)(param_1 + 0x1c);
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0xe4);
  uStack_40 = *(undefined4 *)(param_1 + 0x1d);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0xec);
  local_38 = *(undefined4 *)(param_1 + 0x1e);
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0xf4);
  uStack_30 = *(undefined4 *)(param_1 + 0x1f);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0xfc);
  FUN_1488147fc(uVar1,local_120);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfd0a6 FUN_143cfd0a6 body=29 status=ok
// SIG undefined FUN_143cfd0a6(void)

void FUN_143cfd0a6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143cfd0c4 FUN_143cfd0c4 body=29 status=ok
// SIG undefined FUN_143cfd0c4(void)

undefined8 FUN_143cfd0c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfd0e8 FUN_143cfd0e8 body=31 status=ok
// SIG undefined FUN_143cfd0e8(void)

undefined8 FUN_143cfd0e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfd156 FUN_143cfd156 body=29 status=ok
// SIG undefined FUN_143cfd156(void)

undefined8 FUN_143cfd156(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfd2f2 FUN_143cfd2f2 body=93 status=ok
// SIG undefined FUN_143cfd2f2(void)

void FUN_143cfd2f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f6000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143cfd350 FUN_143cfd350 body=93 status=ok
// SIG undefined FUN_143cfd350(void)

void FUN_143cfd350(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f6000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143cfd3ae FUN_143cfd3ae body=126 status=ok
// SIG undefined FUN_143cfd3ae(void)

void FUN_143cfd3ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f6000;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cfd41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cfd42c FUN_143cfd42c body=66 status=ok
// SIG undefined FUN_143cfd42c(void)

void FUN_143cfd42c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143cfd588(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfd470 FUN_143cfd470 body=279 status=ok
// SIG undefined FUN_143cfd470(void)

undefined8 FUN_143cfd470(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143cfd581;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143cfd581;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143cfd581:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143cfd535;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143cfd588(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143cfd535;
    }
  }
  uVar6 = 0;
LAB_143cfd535:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfd588 FUN_143cfd588 body=425 status=ok
// SIG undefined FUN_143cfd588(void)

void FUN_143cfd588(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = *param_1;
    if (DAT_14cb61cd0 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463b31ae;
      local_58 = &LAB_1486dca4f;
      local_60 = &LAB_1464f50a6;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      lVar6 = *(longlong *)(lVar2 + 0x88);
      uVar5 = 0;
      if ((longlong)*(int *)(lVar2 + 0x90) != 0) {
        lVar7 = (longlong)*(int *)(lVar2 + 0x90) * 0x70;
        lVar6 = lVar6 + 0x58;
        do {
          uVar3 = FUN_1447210f0(lVar1);
          lVar4 = FUN_140149a73(uVar3,0);
          if (lVar4 != 0) {
            FUN_140bc53f1(lVar6 + -0x48,lVar6,lVar4,0);
          }
          lVar6 = lVar6 + 0x70;
          lVar7 = lVar7 + -0x70;
        } while (lVar7 != 0);
        uVar5 = *(undefined4 *)(lVar2 + 0x90);
        lVar6 = *(longlong *)(lVar2 + 0x88);
      }
      FUN_14881c5d3(lVar6,uVar5);
      *(undefined4 *)(lVar2 + 0x90) = 0;
      if (*(int *)(lVar2 + 0x94) != 0) {
        FUN_143cfd732(lVar2 + 0x88);
      }
      *(undefined8 *)(lVar2 + 0x30) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfd732 FUN_143cfd732 body=48 status=ok
// SIG undefined FUN_143cfd732(void)

void FUN_143cfd732(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 143cfd768 FUN_143cfd768 body=29 status=ok
// SIG undefined FUN_143cfd768(void)

undefined8 FUN_143cfd768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfd904 FUN_143cfd904 body=93 status=ok
// SIG undefined FUN_143cfd904(void)

void FUN_143cfd904(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f6070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143cfd962 FUN_143cfd962 body=93 status=ok
// SIG undefined FUN_143cfd962(void)

void FUN_143cfd962(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f6070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143cfd9c0 FUN_143cfd9c0 body=126 status=ok
// SIG undefined FUN_143cfd9c0(void)

void FUN_143cfd9c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f6070;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143cfda2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143cfda48 FUN_143cfda48 body=269 status=ok
// SIG undefined FUN_143cfda48(void)

undefined8 FUN_143cfda48(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143cfdb4f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143cfdb4f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143cfdb4f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143cfdb03;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143cfdb56(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143cfdb03;
    }
  }
  uVar6 = 0;
LAB_143cfdb03:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfdb56 FUN_143cfdb56 body=62 status=ok
// SIG undefined FUN_143cfdb56(void)

void FUN_143cfdb56(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  bVar1 = *(byte *)(puVar2 + 6);
  *(byte *)(puVar2 + 6) = bVar1 | 8;
  puVar2[7] = 0;
  if (((bVar1 & 2) != 0) && (*(char *)(puVar2 + 1) == '\0')) {
    (**(code **)(*(longlong *)*puVar2 + 0x2a8))();
  }
  FUN_140ebeee8(puVar2);
  return;
}



// FUNCTION 143cfdb94 FUN_143cfdb94 body=148 status=ok
// SIG undefined FUN_143cfdb94(void)

void FUN_143cfdb94(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_2;
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  pcVar3 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  local_58 = param_5;
  local_50 = lVar2;
  (*pcVar3)(uVar5,&local_40,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfdc48 FUN_143cfdc48 body=12 status=ok
// SIG undefined FUN_143cfdc48(void)

void FUN_143cfdc48(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cfdc51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143cfdc54 FUN_143cfdc54 body=29 status=ok
// SIG undefined FUN_143cfdc54(void)

undefined8 FUN_143cfdc54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfdc72 FUN_143cfdc72 body=48 status=ok
// SIG undefined FUN_143cfdc72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143cfdc72(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  (**(code **)*puVar1)(puVar1,0);
  _DAT_14cb76694 = _DAT_14cb76694 + -1;
  *puVar1 = DAT_14cb76688;
  DAT_14cb76688 = puVar1;
  return;
}



// FUNCTION 143cfdca2 FUN_143cfdca2 body=29 status=ok
// SIG undefined FUN_143cfdca2(void)

undefined8 FUN_143cfdca2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfdd1e FUN_143cfdd1e body=12 status=ok
// SIG undefined FUN_143cfdd1e(void)

void FUN_143cfdd1e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143cfdd27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143cfdd2a FUN_143cfdd2a body=29 status=ok
// SIG undefined FUN_143cfdd2a(void)

undefined8 FUN_143cfdd2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfdd48 FUN_143cfdd48 body=139 status=ok
// SIG undefined FUN_143cfdd48(void)

void FUN_143cfdd48(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_20 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  FUN_140696187(*param_1,param_1 + 1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfddd4 FUN_143cfddd4 body=101 status=ok
// SIG undefined FUN_143cfddd4(void)

undefined8 * FUN_143cfddd4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b3f6190;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[8] = 0;
  lVar2 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
  }
  FUN_1400709d4(puVar1 + 2,lVar2,*(undefined4 *)(param_1 + 0x48),0);
  return puVar1 + 1;
}



// FUNCTION 143cfde40 FUN_143cfde40 body=29 status=ok
// SIG undefined FUN_143cfde40(void)

void FUN_143cfde40(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143cfde5e FUN_143cfde5e body=57 status=ok
// SIG undefined FUN_143cfde5e(void)

undefined8 * FUN_143cfde5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3f6190;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfde98 FUN_143cfde98 body=43 status=ok
// SIG undefined FUN_143cfde98(void)

ulonglong FUN_143cfde98(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  
  piVar3 = (int *)*param_1;
  iVar2 = *piVar3;
  iVar1 = iVar2 + 1;
  *piVar3 = iVar1;
  if (iVar2 < 1) {
    uVar4 = CONCAT71((int7)((ulonglong)piVar3 >> 8),1);
  }
  else {
    uVar4 = FUN_140071712(&DAT_14c9a8020,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 143cfdeee FUN_143cfdeee body=29 status=ok
// SIG undefined FUN_143cfdeee(void)

undefined8 FUN_143cfdeee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfdf0c FUN_143cfdf0c body=70 status=ok
// SIG undefined FUN_143cfdf0c(void)

void FUN_143cfdf0c(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_38 = 0;
  FUN_14074961e(*param_1,1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfdf6a FUN_143cfdf6a body=29 status=ok
// SIG undefined FUN_143cfdf6a(void)

undefined8 FUN_143cfdf6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfdf88 FUN_143cfdf88 body=70 status=ok
// SIG undefined FUN_143cfdf88(void)

void FUN_143cfdf88(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_38 = 0;
  FUN_14074961e(*param_1,1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfdfe6 FUN_143cfdfe6 body=29 status=ok
// SIG undefined FUN_143cfdfe6(void)

undefined8 FUN_143cfdfe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143cfe004 FUN_143cfe004 body=70 status=ok
// SIG undefined FUN_143cfe004(void)

void FUN_143cfe004(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_38 = 0;
  FUN_14074961e(*param_1,1);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143cfe062 FUN_143cfe062 body=29 status=ok
// SIG undefined FUN_143cfe062(void)

undefined8 FUN_143cfe062(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


