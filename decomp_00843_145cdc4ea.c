// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145cdc4ea FUN_145cdc4ea body=160 status=ok
// SIG undefined FUN_145cdc4ea(void)

undefined8 FUN_145cdc4ea(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          FUN_1449db362(plVar8 + 1);
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_148b7b710(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145cdc58a FUN_145cdc58a body=231 status=ok
// SIG undefined FUN_145cdc58a(void)

int * FUN_145cdc58a(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145cdc672 FUN_145cdc672 body=147 status=ok
// SIG undefined FUN_145cdc672(void)

void FUN_145cdc672(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cdc706 FUN_145cdc706 body=223 status=ok
// SIG undefined FUN_145cdc706(void)

undefined8 FUN_145cdc706(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1ca5b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b5b7250;
  local_30[3] = param_2;
  local_30[4] = FUN_1458f45a6;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdc7e6 FUN_145cdc7e6 body=482 status=ok
// SIG undefined FUN_145cdc7e6(void)

void FUN_145cdc7e6(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145cdc9ca FUN_145cdc9ca body=53 status=ok
// SIG undefined FUN_145cdc9ca(void)

void FUN_145cdc9ca(longlong *param_1)

{
  FUN_145cdca00();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cdca00 FUN_145cdca00 body=338 status=ok
// SIG undefined FUN_145cdca00(void)

void FUN_145cdca00(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 0x90);
      FUN_14587bf12(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140d97c6c(param_1,0);
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



// FUNCTION 145cdcb5c FUN_145cdcb5c body=492 status=ok
// SIG undefined FUN_145cdcb5c(void)

undefined8 * FUN_145cdcb5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad736c0;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  param_1[6] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[9] = 0x447a0000447a0000;
  local_60 = (undefined8 *)&DAT_3f8000003f800000;
  param_1[10] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 100,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  param_1[10] = &PTR_FUN_14ad6aee0;
  uVar1 = DAT_14c84635c;
  param_1[0xd] = DAT_14c84635c;
  param_1[0xe] = uVar1;
  FUN_145cdcd4a(param_1 + 10,&local_60);
  local_60 = (undefined8 *)0x4000000040000000;
  param_1[0xf] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0x8c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  param_1[0xf] = &PTR_FUN_14ad6aee0;
  uVar1 = DAT_14c84635c;
  param_1[0x12] = DAT_14c84635c;
  param_1[0x13] = uVar1;
  FUN_145cdcd4a(param_1 + 0xf,&local_60);
  *(undefined1 *)(param_1 + 0x14) = 0;
  local_50 = 0x3f80000000000000;
  param_1[0x15] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0xbc,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar2;
  param_1[0x15] = &PTR_FUN_14ad6b340;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x3f80000000000000;
  local_60 = &local_50;
  local_58 = &local_48;
  FUN_145d4119e(param_1 + 0x15,&local_60);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdcd4a FUN_145cdcd4a body=22 status=ok
// SIG undefined FUN_145cdcd4a(void)

void FUN_145cdcd4a(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  return;
}



// FUNCTION 145cdcd6c FUN_145cdcd6c body=454 status=ok
// SIG undefined FUN_145cdcd6c(void)

undefined8 * FUN_145cdcd6c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b376200;
  *(undefined4 *)(param_1 + 0x16) = 0x1910d;
  param_1[0x17] = "skill_component_identifier";
  lVar4 = FUN_145cdcf34();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cdce43;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cdce43:
  FUN_1400b22c2(local_58,"GbxSkills.Skill Component Identifier");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdcf34 FUN_145cdcf34 body=57 status=ok
// SIG undefined FUN_145cdcf34(void)

void FUN_145cdcf34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb645f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb645f0 = FUN_140002ddd(FUN_1465033ed,uVar1,L"GbxSkillComponentIdentifierDef");
  }
  return;
}



// FUNCTION 145cdcf78 FUN_145cdcf78 body=454 status=ok
// SIG undefined FUN_145cdcf78(void)

undefined8 * FUN_145cdcf78(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b7f1e60;
  *(undefined4 *)(param_1 + 0x16) = 0x377e3d47;
  param_1[0x17] = "oak_echolog_sequence";
  lVar4 = FUN_141528ae6();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145cdd04f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145cdd04f:
  FUN_1400b22c2(local_58,"Echo Log.Log Sequence");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdd140 FUN_145cdd140 body=194 status=ok
// SIG undefined FUN_145cdd140(void)

void FUN_145cdd140(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_145cdd202();
  if ((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x395b) == '\x01')) {
    lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_140df74c8();
      lVar1 = FUN_144718840(lVar1,uVar2);
      if (lVar1 != 0) goto LAB_145cdd1e0;
    }
    lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar1 != 0) {
      lVar3 = FUN_14490fee6();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
         (lVar1 = *(longlong *)(lVar1 + 0x3d0), lVar1 != 0)) {
        uVar2 = FUN_140df74c8();
        lVar1 = FUN_144718840(lVar1,uVar2);
        if (lVar1 != 0) {
LAB_145cdd1e0:
          FUN_141528b20(param_1 + 0x3718,lVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145cdd202 FUN_145cdd202 body=102 status=ok
// SIG undefined FUN_145cdd202(void)

void FUN_145cdd202(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_145cdd245;
    }
  }
  lVar1 = 0;
LAB_145cdd245:
  lVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN_145cdd268(lVar2 + 0x38,lVar1,param_3);
  return;
}



// FUNCTION 145cdd268 FUN_145cdd268 body=66 status=ok
// SIG undefined FUN_145cdd268(void)

void FUN_145cdd268(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdd2ac FUN_145cdd2ac body=21 status=ok
// SIG undefined FUN_145cdd2ac(void)

void FUN_145cdd2ac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145cdd2c2();
  FUN_145cdd336(uVar1);
  return;
}



// FUNCTION 145cdd2c2 FUN_145cdd2c2 body=115 status=ok
// SIG undefined FUN_145cdd2c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145cdd2c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e460) {
    FUN_144b3d300(&DAT_14c98e460);
    if (DAT_14c98e460 == -1) {
      DAT_14c98e448 = 0;
      _DAT_14c98e450 = 0;
      _DAT_14c98e458 = 0;
      atexit(FUN_1428f1cfa);
      _Init_thread_footer(&DAT_14c98e460);
    }
  }
  return &DAT_14c98e448;
}



// FUNCTION 145cdd336 FUN_145cdd336 body=256 status=ok
// SIG undefined FUN_145cdd336(void)

void FUN_145cdd336(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14c98e618 != 0) && (*(longlong *)(param_1 + 0x10) == 0)) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    puVar1 = local_50;
    local_48 = 3;
    *local_50 = &PTR_LAB_149e01f80;
    uVar2 = FUN_144a3f946();
    puVar1[2] = uVar2;
    *puVar1 = &PTR_FUN_149efce50;
    puVar1[3] = param_1;
    puVar1[4] = FUN_140154716;
    lVar3 = DAT_14c98e618 + 0x550;
    local_40 = 0;
    local_38 = 0;
    FUN_140328a42(&local_40,&local_50);
    FUN_140ca2242(lVar3,&local_58,&local_40);
    FUN_1449db362(&local_40);
    *(undefined8 *)(param_1 + 0x10) = local_58;
    FUN_1449db362(&local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdd43e FUN_145cdd43e body=106 status=ok
// SIG undefined FUN_145cdd43e(void)

void FUN_145cdd43e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_145c635f9();
  uVar2 = FUN_1409ffe1d();
  lVar3 = FUN_145cdd4a8(uVar2);
  lVar1 = DAT_14c99f510;
  if (lVar3 == 0) {
    if ((DAT_14c99f510 != 0) && (lVar1 = lVar3, DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
  }
  else if (DAT_14c99f510 != lVar3) {
    if ((DAT_14c99f510 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar3);
    lVar1 = lVar3;
  }
  DAT_14c99f510 = lVar1;
  return;
}



// FUNCTION 145cdd4a8 FUN_145cdd4a8 body=150 status=ok
// SIG undefined FUN_145cdd4a8(void)

undefined8 FUN_145cdd4a8(undefined8 param_1)

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
  uVar1 = FUN_1458e60fe();
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



// FUNCTION 145cdd540 FUN_145cdd540 body=65 status=ok
// SIG undefined FUN_145cdd540(void)

void FUN_145cdd540(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a380960;
  FUN_141528ca6(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145cdd573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 145cdd582 FUN_145cdd582 body=40 status=ok
// SIG undefined FUN_145cdd582(void)

undefined8 FUN_145cdd582(undefined8 param_1,int param_2)

{
  FUN_145cdd5aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cdd5aa FUN_145cdd5aa body=91 status=ok
// SIG undefined FUN_145cdd5aa(void)

void FUN_145cdd5aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3a5b40;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1406c2f92(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cdd606 FUN_145cdd606 body=40 status=ok
// SIG undefined FUN_145cdd606(void)

undefined8 FUN_145cdd606(undefined8 param_1,int param_2)

{
  FUN_145cdd62e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cdd62e FUN_145cdd62e body=91 status=ok
// SIG undefined FUN_145cdd62e(void)

void FUN_145cdd62e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5bfcc0;
  FUN_1447a1747(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cdd68a FUN_145cdd68a body=86 status=ok
// SIG undefined FUN_145cdd68a(void)

void FUN_145cdd68a(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1dc);
  FUN_145aa5488(*(undefined8 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d8));
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1dc) != 0)) {
    FUN_147047930(param_1 + 0x1d0,0);
  }
  FUN_141528ce8(param_1);
  return;
}



// FUNCTION 145cdd6e0 FUN_145cdd6e0 body=40 status=ok
// SIG undefined FUN_145cdd6e0(void)

undefined8 FUN_145cdd6e0(undefined8 param_1,int param_2)

{
  FUN_145cdd708();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cdd708 FUN_145cdd708 body=91 status=ok
// SIG undefined FUN_145cdd708(void)

void FUN_145cdd708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a85a960;
  param_1[5] = &PTR_FUN_14a85ade0;
  param_1[6] = &PTR_LAB_14a85ae20;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145cdd764 FUN_145cdd764 body=40 status=ok
// SIG undefined FUN_145cdd764(void)

undefined8 FUN_145cdd764(undefined8 param_1,int param_2)

{
  FUN_145cdd78c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cdd78c FUN_145cdd78c body=91 status=ok
// SIG undefined FUN_145cdd78c(void)

void FUN_145cdd78c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa272d0;
  param_1[5] = &PTR_FUN_14aa27750;
  param_1[6] = &PTR_LAB_14aa27790;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145cdd7f0 FUN_145cdd7f0 body=136 status=ok
// SIG undefined FUN_145cdd7f0(void)

undefined8 * FUN_145cdd7f0(undefined8 *param_1)

{
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3c23d70a;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14aaab330;
  FUN_145cdd878(param_1 + 0x12);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 145cdd878 FUN_145cdd878 body=118 status=ok
// SIG undefined FUN_145cdd878(void)

undefined8 * FUN_145cdd878(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e978) {
    FUN_144b3d300(&DAT_14c99e978);
    if (DAT_14c99e978 == -1) {
      FUN_1446f470e(&DAT_14c99e970,L"Default Soundfield Endpoint",1);
      _Init_thread_footer(&DAT_14c99e978);
    }
  }
  *param_1 = DAT_14c99e970;
  return param_1;
}



// FUNCTION 145cdd8ee FUN_145cdd8ee body=462 status=ok
// SIG undefined FUN_145cdd8ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_145cdd8ee(void)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0f400 == '\x01') goto LAB_145cdd9a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0f418) && (FUN_144b3d300(&DAT_14cb0f418), DAT_14cb0f418 == -1)) {
    DAT_14cb0f408 = (wchar_t *)0x0;
    _DAT_14cb0f410 = 0;
    atexit((_func_5014 *)&LAB_14377f5a1);
    _Init_thread_footer(&DAT_14cb0f418);
  }
  local_38 = &DAT_14c872ce8;
  cVar2 = FUN_1449da20c(DAT_14c872ce0,L"/Script/Engine.AudioSettings",L"VoiPSampleRate",
                        &DAT_14cb0f408);
  if (cVar2 == '\0') {
LAB_145cdd999:
    DAT_14cb0f404 = 16000;
  }
  else {
    FUN_140056680(&local_28,L"Low16000Hz");
    pwVar1 = local_28;
    if (DAT_14cb0f410 == local_20) {
      bVar4 = true;
      if (1 < DAT_14cb0f410) {
        iVar3 = wcscmp(DAT_14cb0f408,local_28);
        bVar4 = iVar3 == 0;
      }
    }
    else {
      bVar4 = local_20 + DAT_14cb0f410 == 1;
    }
    if (pwVar1 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar1);
    }
    iVar3 = 16000;
    if (!bVar4) {
      FUN_140056680(&local_28,L"Normal24000Hz");
      if (DAT_14cb0f410 == local_20) {
        bVar4 = true;
        if (1 < DAT_14cb0f410) {
          iVar3 = wcscmp(DAT_14cb0f408,local_28);
          bVar4 = iVar3 == 0;
        }
      }
      else {
        bVar4 = local_20 + DAT_14cb0f410 == 1;
      }
      if (local_28 != (wchar_t *)0x0) {
        FUN_1400020a8(local_28);
      }
      iVar3 = 24000;
      if ((!bVar4) && (iVar3 = DAT_14cb0f404, DAT_14cb0f404 < 1)) goto LAB_145cdd999;
    }
    DAT_14cb0f404 = iVar3;
    DAT_14cb0f400 = '\x01';
  }
LAB_145cdd9a8:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cb0f404;
}



// FUNCTION 145cddabe FUN_145cddabe body=40 status=ok
// SIG undefined FUN_145cddabe(void)

undefined8 FUN_145cddabe(undefined8 param_1,int param_2)

{
  FUN_145cddae6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cddae6 FUN_145cddae6 body=91 status=ok
// SIG undefined FUN_145cddae6(void)

void FUN_145cddae6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac21f70;
  param_1[5] = &PTR_FUN_14ac22480;
  param_1[6] = &PTR_LAB_14ac224c0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145cddb4c FUN_145cddb4c body=120 status=ok
// SIG undefined FUN_145cddb4c(void)

undefined8 * FUN_145cddb4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_145afe592();
  *param_1 = &PTR_FUN_14adc33e0;
  *(undefined4 *)(param_1 + 8) = 0x200;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x461c4000425c0000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xc2700000;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    uVar2 = FUN_14001cc68(0x230,0x10);
    FUN_14815d466(uVar2);
    puVar1 = (undefined8 *)param_1[5];
    param_1[5] = uVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return param_1;
}



// FUNCTION 145cddbd0 FUN_145cddbd0 body=120 status=ok
// SIG undefined FUN_145cddbd0(void)

undefined8 * FUN_145cddbd0(undefined8 *param_1)

{
  FUN_145907800();
  *param_1 = &PTR_FUN_14b1dbc80;
  param_1[5] = &PTR_FUN_14b1dc690;
  param_1[6] = &PTR_LAB_14b1dc6d0;
  param_1[0x55] = &PTR_FUN_14b1dc720;
  param_1[0x56] = &PTR_FUN_14b1dc7a0;
  param_1[0x57] = &PTR_FUN_14b1dc7b0;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  FUN_14127091c(param_1,0);
  return param_1;
}



// FUNCTION 145cddc48 FUN_145cddc48 body=46 status=ok
// SIG undefined FUN_145cddc48(void)

void FUN_145cddc48(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145cddc76(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b591f20;
  puVar1[5] = &PTR_FUN_14b592220;
  return;
}



// FUNCTION 145cddc76 FUN_145cddc76 body=85 status=ok
// SIG undefined FUN_145cddc76(void)

undefined8 * FUN_145cddc76(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14ae615c0;
  param_1[5] = &PTR_FUN_14ae618c0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return param_1;
}



// FUNCTION 145cddcd6 FUN_145cddcd6 body=120 status=ok
// SIG undefined FUN_145cddcd6(void)

undefined8 * FUN_145cddcd6(undefined8 *param_1)

{
  FUN_145907800();
  *param_1 = &PTR_FUN_14b5dcc40;
  param_1[5] = &PTR_FUN_14b5dd650;
  param_1[6] = &PTR_LAB_14b5dd690;
  param_1[0x55] = &PTR_FUN_14b5dd6e0;
  param_1[0x56] = &PTR_FUN_14b5dd760;
  param_1[0x57] = &PTR_FUN_14b5dd770;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  FUN_14127091c(param_1,0);
  return param_1;
}



// FUNCTION 145cddd4e FUN_145cddd4e body=40 status=ok
// SIG undefined FUN_145cddd4e(void)

undefined8 FUN_145cddd4e(undefined8 param_1,int param_2)

{
  FUN_145cddd76();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cddd76 FUN_145cddd76 body=91 status=ok
// SIG undefined FUN_145cddd76(void)

void FUN_145cddd76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6c2390;
  param_1[5] = &PTR_FUN_14b6c2690;
  param_1[6] = &PTR_FUN_14b6c26c0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14042c3da(param_1);
  return;
}



// FUNCTION 145cdddda FUN_145cdddda body=123 status=ok
// SIG undefined FUN_145cdddda(void)

undefined8 * FUN_145cdddda(undefined8 *param_1)

{
  FUN_1457edf72();
  *param_1 = &PTR_FUN_14bc6bab0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14020fad6(param_1 + 0x3a,L"SortOrder");
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_14020fad6(param_1 + 0x3c,L"DecalSize");
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_14020fad6(param_1 + 0x3e,L"DecalMaterialPathName");
  return param_1;
}



// FUNCTION 145cdde5e FUN_145cdde5e body=123 status=ok
// SIG undefined FUN_145cdde5e(void)

undefined8 * FUN_145cdde5e(undefined8 *param_1)

{
  FUN_145a9b700();
  *param_1 = &PTR_FUN_14bc757f0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  FUN_14020fad6(param_1 + 0x7e,L"AddressX");
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  FUN_14020fad6(param_1 + 0x80,L"AddressY");
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  FUN_14020fad6(param_1 + 0x82,L"AddressZ");
  return param_1;
}



// FUNCTION 145cddee2 FUN_145cddee2 body=123 status=ok
// SIG undefined FUN_145cddee2(void)

undefined8 * FUN_145cddee2(undefined8 *param_1)

{
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc7dd00;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"GlobalOffsetTransform");
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"BakeMeshes");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"BakePivotMeshes");
  return param_1;
}



// FUNCTION 145cddf5e FUN_145cddf5e body=142 status=ok
// SIG undefined FUN_145cddf5e(void)

code * FUN_145cddf5e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cddfec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa400000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147136018;
}



// FUNCTION 145cddfec FUN_145cddfec body=265 status=ok
// SIG undefined FUN_145cddfec(void)

undefined * FUN_145cddfec(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0798) {
    FUN_144b3d300(&DAT_14c9c0798);
    if (DAT_14c9c0798 == -1) {
      FUN_145cde0f6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDBufferParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x34;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0718,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df5b);
      _Init_thread_footer(&DAT_14c9c0798);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0718;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cde0f6 FUN_145cde0f6 body=226 status=ok
// SIG undefined FUN_145cde0f6(void)

longlong * FUN_145cde0f6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b66d8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cde1da FUN_145cde1da body=138 status=ok
// SIG undefined FUN_145cde1da(void)

code * FUN_145cde1da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DBufferCTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471360a2;
}



// FUNCTION 145cde264 FUN_145cde264 body=138 status=ok
// SIG undefined FUN_145cde264(void)

code * FUN_145cde264(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DBufferDTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cde2ee;
}



// FUNCTION 145cde2ee FUN_145cde2ee body=138 status=ok
// SIG undefined FUN_145cde2ee(void)

code * FUN_145cde2ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DBufferCTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147136354;
}



// FUNCTION 145cde378 FUN_145cde378 body=40 status=ok
// SIG undefined FUN_145cde378(void)

undefined8 FUN_145cde378(undefined8 param_1,int param_2)

{
  FUN_145cde3a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cde3a0 FUN_145cde3a0 body=78 status=ok
// SIG undefined FUN_145cde3a0(void)

void FUN_145cde3a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4ddb20;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145cde3ee(param_1 + 0xf);
  FUN_145cde424(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cde3ee FUN_145cde3ee body=53 status=ok
// SIG undefined FUN_145cde3ee(void)

void FUN_145cde3ee(longlong *param_1)

{
  FUN_145cde4b2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cde424 FUN_145cde424 body=53 status=ok
// SIG undefined FUN_145cde424(void)

void FUN_145cde424(longlong *param_1)

{
  FUN_145cde45a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cde45a FUN_145cde45a body=88 status=ok
// SIG undefined FUN_145cde45a(void)

void FUN_145cde45a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1476b5442(param_1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145cde4b2 FUN_145cde4b2 body=344 status=ok
// SIG undefined FUN_145cde4b2(void)

void FUN_145cde4b2(longlong *param_1)

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
      FUN_1432d4318(*local_68 + (longlong)iStack_4c * 0x28 + 8);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cde60c FUN_145cde60c body=40 status=ok
// SIG undefined FUN_145cde60c(void)

undefined8 FUN_145cde60c(undefined8 param_1,int param_2)

{
  FUN_145cde634();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cde634 FUN_145cde634 body=341 status=ok
// SIG undefined FUN_145cde634(void)

void FUN_145cde634(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abdd2f0;
  param_1[5] = &PTR_FUN_14abdd7e0;
  param_1[6] = &PTR_LAB_14abdd820;
  param_1[0x22] = &PTR_FUN_14abdd870;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_145cde7b2(param_1 + 0x51);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_145cde7e8(param_1 + 0x47);
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_145cde89a(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_145cde789(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_145cde81e(param_1);
  return;
}



// FUNCTION 145cde789 FUN_145cde789 body=40 status=ok
// SIG undefined FUN_145cde789(void)

void FUN_145cde789(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_143848b6a(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 145cde7b2 FUN_145cde7b2 body=53 status=ok
// SIG undefined FUN_145cde7b2(void)

void FUN_145cde7b2(longlong *param_1)

{
  FUN_145cde8da();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cde7e8 FUN_145cde7e8 body=53 status=ok
// SIG undefined FUN_145cde7e8(void)

void FUN_145cde7e8(longlong *param_1)

{
  FUN_145cde934();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cde81e FUN_145cde81e body=124 status=ok
// SIG undefined FUN_145cde81e(void)

void FUN_145cde81e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abfce80;
  param_1[5] = &PTR_FUN_14abfd350;
  param_1[6] = &PTR_LAB_14abfd390;
  param_1[0x22] = &PTR_FUN_14abfd3e0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145cde89a FUN_145cde89a body=63 status=ok
// SIG undefined FUN_145cde89a(void)

void FUN_145cde89a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cde8da FUN_145cde8da body=90 status=ok
// SIG undefined FUN_145cde8da(void)

void FUN_145cde8da(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145cde934 FUN_145cde934 body=378 status=ok
// SIG undefined FUN_145cde934(void)

void FUN_145cde934(longlong *param_1)

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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cdeab0 FUN_145cdeab0 body=40 status=ok
// SIG undefined FUN_145cdeab0(void)

undefined8 FUN_145cdeab0(undefined8 param_1,int param_2)

{
  FUN_145cdead8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cdead8 FUN_145cdead8 body=151 status=ok
// SIG undefined FUN_145cdead8(void)

void FUN_145cdead8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bced430;
  param_1[5] = &PTR_FUN_14bced6e0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0xb);
  FUN_145cdeb6f(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cdeb6f FUN_145cdeb6f body=72 status=ok
// SIG undefined FUN_145cdeb6f(void)

void FUN_145cdeb6f(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x40);
    do {
      FUN_145b26c5e(plVar2 + 5);
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cdebb8 FUN_145cdebb8 body=40 status=ok
// SIG undefined FUN_145cdebb8(void)

undefined8 FUN_145cdebb8(undefined8 param_1,int param_2)

{
  FUN_145cdebe0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cdebe0 FUN_145cdebe0 body=163 status=ok
// SIG undefined FUN_145cdebe0(void)

void FUN_145cdebe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be885d0;
  FUN_145cdec83(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cdec83 FUN_145cdec83 body=60 status=ok
// SIG undefined FUN_145cdec83(void)

void FUN_145cdec83(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1447a1747(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cdecc0 FUN_145cdecc0 body=146 status=ok
// SIG undefined FUN_145cdecc0(void)

code * FUN_145cdecc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cded52();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RayTracingDebugHitStatsUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRayTracingDebugHitStatsUniformBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca39018;
  return FUN_146301566;
}



// FUNCTION 145cded52 FUN_145cded52 body=275 status=ok
// SIG undefined FUN_145cded52(void)

undefined * FUN_145cded52(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39098) {
    FUN_144b3d300(&DAT_14ca39098);
    if (DAT_14ca39098 == -1) {
      FUN_145cdee66(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"RayTracingDebugHitStatsUniformBuffer";
      local_78 = L"FRayTracingDebugHitStatsUniformBufferParameters";
      local_50 = 0x10;
      local_58 = 0x7b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca39018,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f65b58);
      _Init_thread_footer(&DAT_14ca39098);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca39018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdee66 FUN_145cdee66 body=232 status=ok
// SIG undefined FUN_145cdee66(void)

longlong * FUN_145cdee66(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar12 = FUN_1463013c4;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145cdef54 FUN_145cdef54 body=160 status=ok
// SIG undefined FUN_145cdef54(void)

void FUN_145cdef54(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0x408) != 0)) {
    lVar3 = FUN_144a78b9e();
    lVar1 = *(longlong *)(param_1 + 0x408);
    if (((lVar1 != 0) &&
        (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_145cdeff6(lVar1 + 0x3868,&local_20,param_1);
      *(undefined8 *)(param_1 + 0x480) = local_20;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdeff6 FUN_145cdeff6 body=244 status=ok
// SIG undefined FUN_145cdeff6(void)

undefined8 FUN_145cdeff6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  *local_38 = &PTR_LAB_14b420710;
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
  *local_38 = &PTR_FUN_14b4206a0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148931fb8;
  FUN_145cdf0ec(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdf0ec FUN_145cdf0ec body=216 status=ok
// SIG undefined FUN_145cdf0ec(void)

undefined8 * FUN_145cdf0ec(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 145cdf1d2 FUN_145cdf1d2 body=24 status=ok
// SIG undefined FUN_145cdf1d2(void)

bool FUN_145cdf1d2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145cdf1ea FUN_145cdf1ea body=311 status=ok
// SIG undefined FUN_145cdf1ea(void)

void FUN_145cdf1ea(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_144a85204();
  if (plVar3[0x22] == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    if (plVar3[0x22] == 0) {
      bVar2 = 0;
      goto LAB_145cdf238;
    }
  }
  plVar3 = (longlong *)FUN_144a85204();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  bVar2 = *(byte *)(lVar4 + 0x1a0) >> 5 & 1;
LAB_145cdf238:
  *(byte *)(param_1 + 8) = bVar2;
  FUN_145cdf356();
  if (DAT_14cb0d2b0 == 0) {
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    puVar1 = local_28;
    local_20 = 2;
    *local_28 = &PTR_LAB_149e020b0;
    uVar5 = FUN_144a3f946();
    puVar1[2] = uVar5;
    *puVar1 = &PTR_FUN_14bcb3b10;
    FUN_1448b6402(&DAT_14c872cf8,local_30,&local_28);
    FUN_1449db362(&local_28);
  }
  else {
    FUN_1444f1e70();
  }
  FUN_145cdf322(1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdf322 FUN_145cdf322 body=52 status=ok
// SIG undefined FUN_145cdf322(void)

void FUN_145cdf322(char param_1)

{
  undefined2 *puVar1;
  
  puVar1 = &DAT_149e25dfc;
  if (param_1 != '\0') {
    puVar1 = &DAT_149e0209e;
  }
                    /* WARNING: Could not recover jumptable at 0x000145cdf353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14cc0dff8 + 0x98))(DAT_14cc0dff8,puVar1,0xd000000,0);
  return;
}



// FUNCTION 145cdf356 FUN_145cdf356 body=97 status=ok
// SIG undefined FUN_145cdf356(void)

void FUN_145cdf356(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc13e28) {
    FUN_144b3d300(&DAT_14cc13e28);
    if (DAT_14cc13e28 == -1) {
      FUN_145cdf3b8();
      atexit(FUN_1444f3fdf);
      _Init_thread_footer(&DAT_14cc13e28);
      return;
    }
  }
  return;
}



// FUNCTION 145cdf3b8 FUN_145cdf3b8 body=66 status=ok
// SIG undefined FUN_145cdf3b8(void)

void FUN_145cdf3b8(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc13dd8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc13dd8,4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc13e00);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc13e00,4000);
  return;
}



// FUNCTION 145cdf3fa FUN_145cdf3fa body=219 status=ok
// SIG undefined FUN_145cdf3fa(void)

void FUN_145cdf3fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_145cdf50e(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_145cdf544(param_1 + 0xb0);
  plVar3 = *(longlong **)(param_1 + 0xa8);
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
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145cdf4d6(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145cdf4d6(param_1);
  return;
}



// FUNCTION 145cdf4d6 FUN_145cdf4d6 body=55 status=ok
// SIG undefined FUN_145cdf4d6(void)

void FUN_145cdf4d6(longlong *param_1)

{
  FUN_145cdf5d4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cdf50e FUN_145cdf50e body=53 status=ok
// SIG undefined FUN_145cdf50e(void)

void FUN_145cdf50e(longlong *param_1)

{
  FUN_145cdf726();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cdf544 FUN_145cdf544 body=53 status=ok
// SIG undefined FUN_145cdf544(void)

void FUN_145cdf544(longlong *param_1)

{
  FUN_145cdf57a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cdf57a FUN_145cdf57a body=90 status=ok
// SIG undefined FUN_145cdf57a(void)

void FUN_145cdf57a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145cdf5d4 FUN_145cdf5d4 body=336 status=ok
// SIG undefined FUN_145cdf5d4(void)

void FUN_145cdf5d4(longlong *param_1,int param_2)

{
  longlong *plVar1;
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
      FUN_147e71ad2((longlong)iStack_54 * 0x68 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14059f004(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)(param_2 + 0x1fU & 0xffffffe0)) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cdf726 FUN_145cdf726 body=378 status=ok
// SIG undefined FUN_145cdf726(void)

void FUN_145cdf726(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
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
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cdf8a2 FUN_145cdf8a2 body=190 status=ok
// SIG undefined FUN_145cdf8a2(void)

bool FUN_145cdf8a2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_58,0);
    lVar3 = local_58;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdf962 FUN_145cdf962 body=351 status=ok
// SIG undefined FUN_145cdf962(void)

void FUN_145cdf962(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar5 = FUN_1403ae288(param_2);
  if ((cVar5 != '\0') && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    plVar8 = *(longlong **)(param_1 + 0x50);
    plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x58) * 2;
    do {
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 == (longlong *)0x0) {
        plStack_70 = (longlong *)0x0;
LAB_145cdfa87:
        local_78 = 0;
        bVar10 = true;
        plVar9 = (longlong *)0x0;
      }
      else {
        local_78 = *plVar8;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) {
            plStack_70 = (longlong *)0x0;
            goto LAB_145cdfa87;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        plStack_70 = plVar3;
        if (plVar3 == (longlong *)0x0) goto LAB_145cdfa87;
        bVar10 = false;
        plVar9 = plVar3;
      }
      if (local_78 != 0) {
        FUN_145cdfac2(param_1,param_2,&local_78,param_4);
      }
      if (!bVar10) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cdfac2 FUN_145cdfac2 body=291 status=ok
// SIG undefined FUN_145cdfac2(void)

void FUN_145cdfac2(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_3 = (longlong *)*param_3;
  AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 0x2d));
  *(int *)(param_3 + 0x2c) = (int)param_3[0x2c] + 1;
  local_60 = param_1;
  local_58 = param_4;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar3 = 0x28;
    lVar2 = 0;
    do {
      cVar1 = FUN_140280fd6(param_2,*(longlong *)(param_1 + 0x60) + lVar3 + -0x18);
      if (cVar1 != '\0') {
        if ((int)param_3[1] <= (int)lVar2) goto LAB_145cdfb51;
        plVar4 = (longlong *)(lVar3 + *param_3);
        goto LAB_145cdfb41;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x58;
    } while (lVar2 < *(int *)(param_1 + 0x68));
  }
  cVar1 = FUN_140280fd6(param_2,param_1 + 0x70);
  if (cVar1 == '\0') {
    cVar1 = FUN_140280fd6(param_2,param_1 + 0xa8);
    if (cVar1 == '\0') {
      cVar1 = FUN_140280fd6(param_2,param_1 + 0xe0);
      if (cVar1 == '\0') goto LAB_145cdfb51;
      plVar4 = param_3 + 0xe;
    }
    else {
      plVar4 = param_3 + 8;
    }
  }
  else {
    plVar4 = param_3 + 2;
  }
LAB_145cdfb41:
  FUN_141528d98(&local_60,param_2,plVar4);
LAB_145cdfb51:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000145cdfb77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_3 + 0x2d));
  return;
}



// FUNCTION 145cdfbe6 FUN_145cdfbe6 body=292 status=ok
// SIG undefined FUN_145cdfbe6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cdfbe6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa01f0) {
    FUN_144b3d300(&DAT_14caa01f0);
    if (DAT_14caa01f0 == -1) {
      FUN_145cdfd0a();
      FUN_145cdfe10();
      FUN_140db5666(&DAT_14caa0148,0,&DAT_14caa00e0,L"FMemsetBufferCS",
                    L"/Engine/Private/ByteBuffer.usf",L"MemsetBufferCS",5,0x14,FUN_147442498,
                    FUN_147442438,&LAB_14323bffe,&LAB_147442434,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14caa0b68);
      _DAT_14caa0148 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14323c050);
      _Init_thread_footer(&DAT_14caa01f0);
    }
  }
  return &DAT_14caa0148;
}



// FUNCTION 145cdfd0a FUN_145cdfd0a body=261 status=ok
// SIG undefined FUN_145cdfd0a(void)

void FUN_145cdfd0a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0be8) {
    FUN_144b3d300(&DAT_14caa0be8);
    if (DAT_14caa0be8 == -1) {
      FUN_145ce00a8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x51;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa0b68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323dee7);
      _Init_thread_footer(&DAT_14caa0be8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cdfe10 FUN_145cdfe10 body=205 status=ok
// SIG undefined FUN_145cdfe10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdfe10(void)

{
  if ((DAT_14caa0147 & 2) == 0) {
    DAT_14caa0147 = DAT_14caa0147 | 2;
    _DAT_14caa00e8 = L"FMemsetBufferCS";
    _DAT_14caa0100 = FUN_146826540;
    _DAT_14caa0108 = FUN_146825d77;
    _DAT_14caa0110 = FUN_146825fd6;
    _DAT_14caa0118 = FUN_1407e02ea;
    _DAT_14caa0120 = FUN_146826273;
    _DAT_14caa00f8 = FUN_147442406;
    _DAT_14caa0138 = 0xffffffff000000e0;
    _DAT_14caa0140 = 8;
    DAT_14caa0144 = 0;
    _DAT_14caa0128 = &LAB_147442430;
    FUN_145cdfede();
    FUN_1407e00cc(&DAT_14caa00e0);
    return;
  }
  return;
}



// FUNCTION 145cdfede FUN_145cdfede body=133 status=ok
// SIG undefined FUN_145cdfede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdfede(void)

{
  _DAT_14caa0ff8 = L"BASE";
  DAT_14caa1022 = 4;
  FUN_145cdff64();
  _DAT_14caa1008 = DAT_14caa00f0;
  _DAT_14caa1000 = &DAT_14caa1028;
  _DAT_14caa1010 = &LAB_14682652b;
  DAT_14caa00f0 = &DAT_14caa0ff8;
  DAT_14caa0145 = DAT_14caa0145 + '\x01';
  _DAT_14caa1018 = 0x100000000;
  if (DAT_14caa108c != '\0') {
    DAT_14caa0146 = DAT_14caa0146 + '\x01';
  }
  return;
}



// FUNCTION 145cdff64 FUN_145cdff64 body=200 status=ok
// SIG undefined FUN_145cdff64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cdff64(void)

{
  if ((DAT_14caa108f & 2) != 0) {
    return;
  }
  DAT_14caa108f = DAT_14caa108f | 2;
  _DAT_14caa1030 = L"FByteBufferShader";
  _DAT_14caa1048 = FUN_146826540;
  _DAT_14caa1050 = FUN_146825d77;
  _DAT_14caa1058 = FUN_146825fd6;
  _DAT_14caa1060 = FUN_1407e02ea;
  _DAT_14caa1068 = FUN_146826273;
  _DAT_14caa1040 = FUN_1474450a4;
  _DAT_14caa1080 = 0xffffffff000000e0;
  _DAT_14caa1088 = 8;
  DAT_14caa108c = 0;
  _DAT_14caa1070 = &LAB_1474450ce;
  FUN_145ce002c();
  FUN_1407e00cc(&DAT_14caa1028);
  return;
}



// FUNCTION 145ce002c FUN_145ce002c body=123 status=ok
// SIG undefined FUN_145ce002c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce002c(void)

{
  _DAT_14caa1090 = L"BASE";
  DAT_14caa10ba = 4;
  _DAT_14caa1098 = FUN_140b35ae4();
  _DAT_14caa10a0 = DAT_14caa1038;
  _DAT_14caa10a8 = &LAB_14682652b;
  DAT_14caa1038 = &DAT_14caa1090;
  DAT_14caa108d = DAT_14caa108d + '\x01';
  _DAT_14caa10b0 = 0x100000000;
  if (*(char *)(_DAT_14caa1098 + 100) != '\0') {
    DAT_14caa108e = DAT_14caa108e + '\x01';
  }
  return;
}



// FUNCTION 145ce00a8 FUN_145ce00a8 body=226 status=ok
// SIG undefined FUN_145ce00a8(void)

longlong * FUN_145ce00a8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146320e5a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce0190 FUN_145ce0190 body=132 status=ok
// SIG undefined FUN_145ce0190(void)

undefined1 * FUN_145ce0190(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Value";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x52;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ce018c;
}



// FUNCTION 145ce0214 FUN_145ce0214 body=138 status=ok
// SIG undefined FUN_145ce0214(void)

code * FUN_145ce0214(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Size";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ce0190;
}



// FUNCTION 145ce02aa FUN_145ce02aa body=121 status=ok
// SIG undefined FUN_145ce02aa(void)

undefined8 * FUN_145ce02aa(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149f26440;
  memset(param_1 + 5,0,0xb0);
  FUN_144a5dc74(param_1 + 0x1b);
  FUN_144a5dc74(param_1 + 0x1d);
  *(undefined2 *)(param_1 + 0x1f) = 1;
  *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfb) = 0x1010101;
  param_1[0x20] = 0x42b400003d03126f;
  return param_1;
}



// FUNCTION 145ce0324 FUN_145ce0324 body=40 status=ok
// SIG undefined FUN_145ce0324(void)

undefined8 FUN_145ce0324(undefined8 param_1,int param_2)

{
  FUN_145ce034c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce034c FUN_145ce034c body=427 status=ok
// SIG undefined FUN_145ce034c(void)

void FUN_145ce034c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a583520;
  param_1[5] = &PTR_FUN_14a583810;
  param_1[6] = &PTR_LAB_14a583860;
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x39],*(undefined4 *)(param_1 + 0x3a));
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(param_1 + 0x2e);
  if (*(char *)(param_1 + 0x29) == '\x01') {
    plVar3 = (longlong *)param_1[0x27];
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
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  plVar3 = (longlong *)param_1[0x25];
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
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145ce04f8(param_1 + 0x11);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ce04f8 FUN_145ce04f8 body=61 status=ok
// SIG undefined FUN_145ce04f8(void)

void FUN_145ce04f8(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ce0540 FUN_145ce0540 body=121 status=ok
// SIG undefined FUN_145ce0540(void)

undefined8 * FUN_145ce0540(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65d610;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x42c800003f800000;
  return param_1;
}



// FUNCTION 145ce05c4 FUN_145ce05c4 body=121 status=ok
// SIG undefined FUN_145ce05c4(void)

undefined8 * FUN_145ce05c4(undefined8 *param_1)

{
  FUN_144a0768c();
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6abf90;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x400ffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return param_1;
}



// FUNCTION 145ce0648 FUN_145ce0648 body=219 status=ok
// SIG undefined FUN_145ce0648(void)

undefined8 * FUN_145ce0648(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"CollisionComp",1);
  uVar2 = FUN_14088b378();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140e2e5d6(param_1,param_2);
  *param_1 = &PTR_FUN_14a76c100;
  plVar1 = (longlong *)param_1[0x72];
  *(undefined4 *)(plVar1 + 0xc5) = 0xff64ff64;
  plVar1[200] = 0x4044000000000000;
  plVar1[0xc9] = 0x4044000000000000;
  plVar1[0xca] = 0x4044000000000000;
  (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cb0be68,1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce0730 FUN_145ce0730 body=121 status=ok
// SIG undefined FUN_145ce0730(void)

undefined8 * FUN_145ce0730(undefined8 *param_1)

{
  FUN_144a0768c();
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *param_1 = &PTR_FUN_14a76f680;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x1000000010;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x10;
  param_1[5] = 0xbfe0000000000000;
  param_1[6] = 0xbfe0000000000000;
  param_1[7] = 0xbfe0000000000000;
  param_1[8] = 0x3fe0000000000000;
  param_1[9] = 0x3fe0000000000000;
  param_1[10] = 0x3fe0000000000000;
  return param_1;
}



// FUNCTION 145ce07b4 FUN_145ce07b4 body=121 status=ok
// SIG undefined FUN_145ce07b4(void)

undefined8 * FUN_145ce07b4(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac11640;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  lVar1 = FUN_145869c20();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfe;
  if (*(char *)((longlong)param_1 + 0x4a) != '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x4a) = 3;
  }
  *(undefined1 *)((longlong)param_1 + 0xf9) = 4;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xfc;
  return param_1;
}



// FUNCTION 145ce082e FUN_145ce082e body=92 status=ok
// SIG undefined FUN_145ce082e(void)

void FUN_145ce082e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  DAT_14cb44718 = param_1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar2[1] = 0;
  ppuVar3 = &PTR_FUN_14ae37c30;
  *puVar2 = &PTR_FUN_14ae37c30;
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    puVar2 = *(undefined8 **)(param_1 + 8);
    ppuVar3 = (undefined **)*puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000145ce0873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)ppuVar3[1])(puVar2);
  return;
}



// FUNCTION 145ce088a FUN_145ce088a body=40 status=ok
// SIG undefined FUN_145ce088a(void)

undefined1 FUN_145ce088a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400dbadc();
  uVar1 = FUN_145aa0930(uVar1,L"SandboxFile");
  *(undefined8 *)(param_1 + 8) = uVar1;
  return 1;
}



// FUNCTION 145ce08ba FUN_145ce08ba body=124 status=ok
// SIG undefined FUN_145ce08ba(void)

undefined8 * FUN_145ce08ba(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14007ca06();
  FUN_141071f0c(param_1,uVar2);
  *param_1 = &PTR_FUN_14ae64980;
  if (DAT_14cb459c8 == 0) {
    uVar2 = FUN_140ff4126();
    DAT_14cb459c8 = FUN_140002ddd(FUN_146482a5d,uVar2,L"CommonInputActionDataBase");
  }
  lVar1 = DAT_14cb459c8;
  if ((DAT_14cb459c8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(DAT_14cb459c8);
  }
  param_1[5] = lVar1;
  return param_1;
}



// FUNCTION 145ce0936 FUN_145ce0936 body=40 status=ok
// SIG undefined FUN_145ce0936(void)

undefined8 FUN_145ce0936(undefined8 param_1,int param_2)

{
  FUN_145ce095e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce095e FUN_145ce095e body=92 status=ok
// SIG undefined FUN_145ce095e(void)

void FUN_145ce095e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aea9640;
  param_1[5] = &PTR_FUN_14aea9920;
  param_1[7] = &PTR_FUN_14aea9940;
  param_1[8] = &PTR_FUN_14aea9960;
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ce09ba FUN_145ce09ba body=38 status=ok
// SIG undefined FUN_145ce09ba(void)

undefined8 FUN_145ce09ba(undefined8 param_1,int param_2)

{
  FUN_145ce09e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce09e0 FUN_145ce09e0 body=94 status=ok
// SIG undefined FUN_145ce09e0(void)

void FUN_145ce09e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a4cc0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ce0a58 FUN_145ce0a58 body=40 status=ok
// SIG undefined FUN_145ce0a58(void)

void FUN_145ce0a58(longlong param_1)

{
  FUN_1411f311e(param_1 + 0x410,param_1 + 0x438);
  FUN_145d2d704(param_1);
  return;
}



// FUNCTION 145ce0a80 FUN_145ce0a80 body=93 status=ok
// SIG undefined FUN_145ce0a80(void)

undefined8 * FUN_145ce0a80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b212eb0;
  param_1[0x1f] = &PTR_LAB_14b213220;
  param_1[0x20] = &PTR_LAB_14b213250;
  FUN_145ce0ade(param_1 + 0x22);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce0ade FUN_145ce0ade body=72 status=ok
// SIG undefined FUN_145ce0ade(void)

void FUN_145ce0ade(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2132a0;
  FUN_141177934(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 145ce0b32 FUN_145ce0b32 body=252 status=ok
// SIG undefined FUN_145ce0b32(void)

undefined8 * FUN_145ce0b32(undefined8 *param_1)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1410fb170();
  *param_1 = &PTR_FUN_14b36a630;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xa56a7afe;
  param_1[0x17] = "avatar_feature";
  param_1[0x18] = &PTR_DAT_14c7638a0;
  FUN_1400b22c2(local_68,"Avatar.Features");
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446ddda2(&local_58,"template",0);
  FUN_1404e49fa(param_1 + 0x68,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce0c30 FUN_145ce0c30 body=69 status=ok
// SIG undefined FUN_145ce0c30(void)

void FUN_145ce0c30(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140d9035b(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145ce0c76(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145ce0c76 FUN_145ce0c76 body=96 status=ok
// SIG undefined FUN_145ce0c76(void)

void FUN_145ce0c76(longlong param_1,int param_2)

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



// FUNCTION 145ce0cde FUN_145ce0cde body=157 status=ok
// SIG undefined FUN_145ce0cde(void)

undefined8 * FUN_145ce0cde(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14b486a10;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x15) = 3;
  *(char *)(param_1 + 0x16) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0x40000000;
  *(undefined1 *)(param_1 + 0x1c) = 3;
  *(char *)(param_1 + 0x1d) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 145ce0d7c FUN_145ce0d7c body=40 status=ok
// SIG undefined FUN_145ce0d7c(void)

undefined8 FUN_145ce0d7c(undefined8 param_1,int param_2)

{
  FUN_145ce0da4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce0da4 FUN_145ce0da4 body=92 status=ok
// SIG undefined FUN_145ce0da4(void)

void FUN_145ce0da4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4d9550;
  FUN_14597c87f(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14597c824(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ce0e0c FUN_145ce0e0c body=121 status=ok
// SIG undefined FUN_145ce0e0c(void)

undefined8 * FUN_145ce0e0c(undefined8 *param_1)

{
  FUN_140e2f36c();
  *param_1 = &PTR_FUN_14b52d5b0;
  param_1[5] = &PTR_FUN_14b52da50;
  param_1[0x2d] = &PTR_FUN_14b52da90;
  param_1[0x5a] = 0;
  FUN_141266eda(param_1 + 0x5b,param_1);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  return param_1;
}



// FUNCTION 145ce0e90 FUN_145ce0e90 body=121 status=ok
// SIG undefined FUN_145ce0e90(void)

undefined8 * FUN_145ce0e90(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b7b6ed0;
  *(undefined4 *)(param_1 + 0x79) = 1;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cbd3cb0,1);
  plVar1 = (longlong *)param_1[0x75];
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) == 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) | 8;
    (**(code **)(*plVar1 + 0x958))();
  }
  *param_1 = &PTR_FUN_14b6b59c0;
  *(undefined2 *)(param_1 + 0x79) = 0x100;
  return param_1;
}



// FUNCTION 145ce0f14 FUN_145ce0f14 body=156 status=ok
// SIG undefined FUN_145ce0f14(void)

void FUN_145ce0f14(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_145fef36a(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ce0fb0 FUN_145ce0fb0 body=40 status=ok
// SIG undefined FUN_145ce0fb0(void)

undefined8 FUN_145ce0fb0(undefined8 param_1,int param_2)

{
  FUN_145ce0fd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce0fd8 FUN_145ce0fd8 body=175 status=ok
// SIG undefined FUN_145ce0fd8(void)

void FUN_145ce0fd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba7ff20;
  FUN_145ce1087(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1406c2f92(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140b86e6c(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140b86e6c(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145a23fab(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ce1087 FUN_145ce1087 body=49 status=ok
// SIG undefined FUN_145ce1087(void)

void FUN_145ce1087(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ce10b8 FUN_145ce10b8 body=62 status=ok
// SIG undefined FUN_145ce10b8(void)

undefined8 * FUN_145ce10b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb93480;
  FUN_145ce10f6(param_1 + 5);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce10f6 FUN_145ce10f6 body=70 status=ok
// SIG undefined FUN_145ce10f6(void)

void FUN_145ce10f6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ce113c FUN_145ce113c body=40 status=ok
// SIG undefined FUN_145ce113c(void)

undefined8 FUN_145ce113c(undefined8 param_1,int param_2)

{
  FUN_145ce1164();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce1164 FUN_145ce1164 body=92 status=ok
// SIG undefined FUN_145ce1164(void)

void FUN_145ce1164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc85210;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bc7e840;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145ce11cc FUN_145ce11cc body=121 status=ok
// SIG undefined FUN_145ce11cc(void)

undefined8 * FUN_145ce11cc(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14befb900;
  *(undefined2 *)(param_1 + 5) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xa3f800000;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0x400;
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x103;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 145ce1246 FUN_145ce1246 body=730 status=ok
// SIG undefined FUN_145ce1246(void)

void FUN_145ce1246(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined1 local_b0 [8];
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_68 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 1);
  local_b8 = (undefined2 *)param_5;
  FUN_140d22372();
  lVar5 = FUN_140d22434(param_5 + 0x1d0);
  *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(lVar5 + 0x18) = *param_2;
  *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(param_2 + 1);
  FUN_1408226d0(param_3,&local_98,1);
  puVar8 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar8 = local_98;
  }
  FUN_144a79b68(local_b0,param_5);
  FUN_1400021e4(local_b0,&local_a8);
  puVar11 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar11 = local_a8;
  }
  local_b8 = puVar8;
  FUN_140002266(&local_88,L"__%s_%d_%s_Spawner",puVar11,param_4);
  uStack_70 = 0;
  uStack_6c = 0;
  puVar8 = &DAT_149dfb77a;
  if (local_80 != 0) {
    puVar8 = local_88;
  }
  FUN_1405f0d29(&local_74,puVar8,0);
  *(undefined4 *)(lVar5 + 0x2c) = uStack_6c;
  *(ulonglong *)(lVar5 + 0x24) = CONCAT44(uStack_70,local_74);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)FUN_145ce1522(param_5,param_3);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(byte *)(lVar5 + 0xc80) & 1) == 0) {
    plVar7 = (longlong *)FUN_145ce152e();
  }
  else {
    puVar2 = (undefined1 *)(lVar5 + 0xc80);
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar3 = *(undefined4 *)(lVar5 + 0xc7c);
    *puVar2 = 0;
    *(undefined4 *)(lVar5 + 0xc7c) = 0xffffffff;
    plVar7 = (longlong *)FUN_145ce152e();
    *(undefined4 *)(lVar5 + 0xc7c) = uVar3;
    *puVar2 = 1;
  }
  *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(param_1 + 0x10);
  plVar7[5] = *(longlong *)(param_1 + 8);
  plVar7[0x14] = *(longlong *)(param_1 + 0x90);
  plVar9 = (longlong *)(param_1 + 0x30);
  plVar10 = plVar7 + 8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar10 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar10 = plVar10 + 1;
  }
  lVar5 = *plVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(lVar5 + 0x50);
  *(uint *)(lVar5 + 0x50) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x54) < iVar4 + 1U) {
    FUN_140822376((longlong *)(lVar5 + 0x48),iVar4);
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar4 * 0x10) = plVar7 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce1522 FUN_145ce1522 body=12 status=ok
// SIG undefined FUN_145ce1522(void)

void FUN_145ce1522(longlong param_1)

{
  FUN_145ce15ca(param_1 + 0x1d0);
  return;
}



// FUNCTION 145ce152e FUN_145ce152e body=155 status=ok
// SIG undefined FUN_145ce152e(void)

undefined8 * FUN_145ce152e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xb0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b41ee20;
  memset(puVar1 + 3,0,0x98);
  puVar1[2] = &PTR_FUN_14affe080;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3ff00000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3ff0000000000000;
  puVar1[0x11] = 0x3ff0000000000000;
  puVar1[0x12] = 0x3ff0000000000000;
  puVar1[0x13] = 0;
  *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
  return puVar1;
}



// FUNCTION 145ce15ca FUN_145ce15ca body=489 status=ok
// SIG undefined FUN_145ce15ca(void)

undefined8 FUN_145ce15ca(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_6c;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140b9c344(param_1,&local_78);
  local_60 = local_78;
  FUN_1401533ba(&local_6c,&local_60,1);
  local_58 = (longlong *)FUN_14001cc68(0x80,0x10);
  local_58[1] = (longlong)&DAT_100000001;
  *local_58 = (longlong)&PTR_FUN_14b41ba60;
  local_60 = local_58 + 2;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[2] = (longlong)&PTR_FUN_14b417bb0;
  local_58[5] = local_6c;
  *(undefined4 *)(local_58 + 6) = local_64;
  *(undefined4 *)((longlong)local_58 + 0x3c) = DAT_14c948620;
  *(undefined8 *)((longlong)local_58 + 0x34) = DAT_14c948618;
  *(undefined1 *)(local_58 + 8) = 0;
  *(undefined1 *)(local_58 + 0xf) = 0;
  local_58[0xd] = 0;
  local_58[0xe] = 0;
  local_58[0xb] = 0;
  local_58[0xc] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  FUN_1408241ea(&local_60);
  plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b41a8b0;
  plVar6[2] = (longlong)local_60;
  plVar6[3] = (longlong)local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  plVar6[4] = 0;
  plVar6[5] = 0;
  iVar3 = *(int *)(param_1 + 0x198);
  *(uint *)(param_1 + 0x198) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x19c) < iVar3 + 1U) {
    FUN_145ce17b4((longlong *)(param_1 + 400),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 400);
  lVar7 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar7) = plVar6 + 2;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar6;
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
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (*param_2 != 0) {
    FUN_14082216c(local_60,param_2);
  }
  plVar6 = local_58;
  uVar5 = *(undefined8 *)(lVar4 + lVar7);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce17b4 FUN_145ce17b4 body=132 status=ok
// SIG undefined FUN_145ce17b4(void)

void FUN_145ce17b4(longlong param_1,int param_2)

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



// FUNCTION 145ce1844 FUN_145ce1844 body=462 status=ok
// SIG undefined FUN_145ce1844(void)

undefined8 * FUN_145ce1844(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b2cc040;
  *(undefined4 *)(param_1 + 0x16) = 0x2011;
  param_1[0x17] = "ui_mission_reward_type";
  FUN_1400b22c2(local_58,"GbxUI.UIMissionRewardType");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145ce1a14();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ce1947;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145ce1947:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce1a14 FUN_145ce1a14 body=55 status=ok
// SIG undefined FUN_145ce1a14(void)

void FUN_145ce1a14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb687e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb687e8 = FUN_140002ddd(FUN_14651bd0b,uVar1,L"UIDisplayDataDef_RewardType");
  }
  return;
}



// FUNCTION 145ce1a56 FUN_145ce1a56 body=462 status=ok
// SIG undefined FUN_145ce1a56(void)

undefined8 * FUN_145ce1a56(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b2c85d0;
  *(undefined4 *)(param_1 + 0x16) = 0x101035;
  param_1[0x17] = "ui_stat_group";
  FUN_1400b22c2(local_58,"GbxUI.UIStatGroup");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145ce1c26();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ce1b59;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145ce1b59:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce1c26 FUN_145ce1c26 body=55 status=ok
// SIG undefined FUN_145ce1c26(void)

void FUN_145ce1c26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68848 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68848 = FUN_140002ddd(FUN_14651bdf7,uVar1,L"UIStatDisplayGroupDef");
  }
  return;
}



// FUNCTION 145ce1c68 FUN_145ce1c68 body=462 status=ok
// SIG undefined FUN_145ce1c68(void)

undefined8 * FUN_145ce1c68(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b384f10;
  *(undefined4 *)(param_1 + 0x16) = 0x1002;
  param_1[0x17] = "inv_name_part";
  FUN_1400b22c2(local_58,"Inventory.NamePart");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145ce1e38();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ce1d6b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145ce1d6b:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce1e38 FUN_145ce1e38 body=55 status=ok
// SIG undefined FUN_145ce1e38(void)

void FUN_145ce1e38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a010 = FUN_140002ddd(FUN_1465248ec,uVar1,L"InventoryNamePartDef");
  }
  return;
}



// FUNCTION 145ce1e7a FUN_145ce1e7a body=462 status=ok
// SIG undefined FUN_145ce1e7a(void)

undefined8 * FUN_145ce1e7a(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b7bcdd0;
  *(undefined4 *)(param_1 + 0x16) = 0x2004;
  param_1[0x17] = "ui_mission_difficulty";
  FUN_1400b22c2(local_58,"Missions.UIMissionDifficulty");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145ce204a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ce1f7d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145ce1f7d:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce204a FUN_145ce204a body=55 status=ok
// SIG undefined FUN_145ce204a(void)

void FUN_145ce204a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacda8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacda8 = FUN_140002ddd(FUN_1465e4553,uVar1,L"UIDisplayDataDef_MissionDifficulty");
  }
  return;
}



// FUNCTION 145ce208c FUN_145ce208c body=462 status=ok
// SIG undefined FUN_145ce208c(void)

undefined8 * FUN_145ce208c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b80f5d0;
  *(undefined4 *)(param_1 + 0x16) = 0x72cad01d;
  param_1[0x17] = "trait_pool";
  FUN_1400b22c2(local_58,"Traits.Trait Pool");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145ce225c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ce218f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145ce218f:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce225c FUN_145ce225c body=55 status=ok
// SIG undefined FUN_145ce225c(void)

void FUN_145ce225c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf7c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf7c0 = FUN_140002ddd(FUN_1465f018e,uVar1,L"OakTraitPoolDef");
  }
  return;
}



// FUNCTION 145ce229e FUN_145ce229e body=462 status=ok
// SIG undefined FUN_145ce229e(void)

undefined8 * FUN_145ce229e(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b80fa10;
  *(undefined4 *)(param_1 + 0x16) = 0x4252802b;
  param_1[0x17] = "trait_pool_list";
  FUN_1400b22c2(local_58,"Traits.Trait Pool List");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145ce246e();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ce23a1;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145ce23a1:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce246e FUN_145ce246e body=55 status=ok
// SIG undefined FUN_145ce246e(void)

void FUN_145ce246e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf808 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf808 = FUN_140002ddd(FUN_1465f02b4,uVar1,L"OakTraitPoolListDef");
  }
  return;
}



// FUNCTION 145ce24b0 FUN_145ce24b0 body=462 status=ok
// SIG undefined FUN_145ce24b0(void)

undefined8 * FUN_145ce24b0(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b80fe50;
  *(undefined4 *)(param_1 + 0x16) = 0x19120;
  param_1[0x17] = "trait_settings";
  FUN_1400b22c2(local_58,"Traits.TraitSettings");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145ce2680();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ce25b3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145ce25b3:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce2680 FUN_145ce2680 body=55 status=ok
// SIG undefined FUN_145ce2680(void)

void FUN_145ce2680(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf868 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf868 = FUN_140002ddd(FUN_1465f0470,uVar1,L"OakTraitSettingsDef");
  }
  return;
}



// FUNCTION 145ce26b8 FUN_145ce26b8 body=82 status=ok
// SIG undefined FUN_145ce26b8(void)

undefined8 * FUN_145ce26b8(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 3;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_141528ec0(param_1,uVar2 & 0xffffffff);
    FUN_141528e74(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 145ce270a FUN_145ce270a body=135 status=ok
// SIG undefined FUN_145ce270a(void)

void FUN_145ce270a(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_3 < 2) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_14116599c();
      }
      lVar2 = FUN_1400f6f32(lVar2);
      if (((lVar2 != 0) && (lVar3 != 0)) && (*(longlong *)(lVar2 + 0x68) != 0)) {
        uVar1 = FUN_140def96c(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
        FUN_145ce2792(lVar3,param_4,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ce2792 FUN_145ce2792 body=137 status=ok
// SIG undefined FUN_145ce2792(void)

void FUN_145ce2792(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2e8))(param_1,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))(local_30,param_2);
    FUN_141528ff2(param_1,param_3,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce281c FUN_145ce281c body=162 status=ok
// SIG undefined FUN_145ce281c(void)

void FUN_145ce281c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_2 != '\0') {
    FUN_145ce326a(param_1);
    FUN_145ce28e0(param_1);
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 != 0) {
      lVar2 = FUN_1403ca142();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_145ce28c0(lVar1,local_30,0);
        FUN_145a1f08c(param_1,local_30);
      }
    }
  }
  FUN_1415290b0(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce28c0 FUN_145ce28c0 body=32 status=ok
// SIG undefined FUN_145ce28c0(void)

undefined8 * FUN_145ce28c0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1414b0848();
  *param_2 = *(undefined8 *)(lVar1 + 0x108);
  return param_2;
}



// FUNCTION 145ce28e0 FUN_145ce28e0 body=517 status=ok
// SIG undefined FUN_145ce28e0(void)

void FUN_145ce28e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  longlong local_68 [2];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14101cf30(param_1,&local_58);
  lVar5 = local_58;
  lVar11 = (longlong)local_50;
  if (lVar11 == 0) {
    local_50 = 0;
  }
  else {
    lVar12 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar5 + lVar12);
      if (*(int *)((longlong)puVar3 + 0x14) == 0) {
        local_80 = *puVar3;
        plVar4 = (longlong *)puVar3[1];
        local_78 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          uVar6 = FUN_145ce2ae6(param_1,&local_80);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          uVar6 = FUN_145ce2ae6(param_1,&local_80);
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
        lVar8 = FUN_145ce2c3c(param_1,uVar6);
        if (lVar8 != 0) {
          FUN_145a14650(lVar8,&local_80);
          FUN_145ce3086(&local_80,local_68);
          FUN_1413f4416(param_1,uVar6,&DAT_14cbcf488,local_68);
          if (local_68[0] != 0) {
            FUN_1400020a8();
          }
          if (local_78 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uVar9 = FUN_1401e6c61();
          puVar10 = (undefined4 *)FUN_1409e484c(lVar8,uVar9);
          FUN_145ce2bca(param_1,uVar6,*puVar10);
        }
        if (*(char *)(*(longlong *)(lVar5 + lVar12) + 0x18) == '\x01') {
          FUN_141529848(param_1);
          FUN_145ce2ef0(param_1,*(undefined8 *)(lVar5 + lVar12));
        }
        if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar8 = FUN_140b64196(), lVar8 != 0)) {
          uVar7 = FUN_145ce2d4c(lVar8,uVar6);
          FUN_145968a4e(param_1,uVar6,uVar7);
        }
        uVar7 = FUN_145ce2dca(param_1,uVar6);
        FUN_145ce2cda(param_1,uVar6,uVar7);
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar11 * 0x10 != lVar12);
  }
  FUN_14101cee4(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ce2ae6 FUN_145ce2ae6 body=226 status=ok
// SIG undefined FUN_145ce2ae6(void)

undefined4 FUN_145ce2ae6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"SHIFT",1);
  local_20 = local_40;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x178))(local_38,&local_44,*param_2);
      uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,local_44);
      goto LAB_145ce2b71;
    }
  }
  uVar3 = 0xffffffff;
LAB_145ce2b71:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce2bca FUN_145ce2bca body=112 status=ok
// SIG undefined FUN_145ce2bca(void)

void FUN_145ce2bca(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a83b10(local_38,param_3);
  FUN_1413f4416(param_1,param_2,&DAT_14cbcf498,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce2c3c FUN_145ce2c3c body=157 status=ok
// SIG undefined FUN_145ce2c3c(void)

longlong FUN_145ce2c3c(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x40) != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar3);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xe0) == param_2)) {
        lVar1 = *(longlong *)(lVar2 + 0x30);
        if (lVar1 == 0) {
          return 0;
        }
        if (*(longlong *)(lVar1 + 0x398) == 0) {
          return 0;
        }
        lVar3 = FUN_144a7b4ca();
        lVar1 = *(longlong *)(lVar1 + 0x398);
        if (lVar1 == 0) {
          return 0;
        }
        if (lVar3 != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x10);
          if (lVar2 == 0) {
            return 0;
          }
          if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) {
            return 0;
          }
          if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30) {
            return 0;
          }
          return lVar1;
        }
        return 0;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar1 + 0x40) * 8 != lVar3);
  }
  return 0;
}



// FUNCTION 145ce2cda FUN_145ce2cda body=112 status=ok
// SIG undefined FUN_145ce2cda(void)

void FUN_145ce2cda(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a83b10(local_38,param_3);
  FUN_1413f4416(param_1,param_2,&DAT_14cbce9f0,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce2d4c FUN_145ce2d4c body=125 status=ok
// SIG undefined FUN_145ce2d4c(void)

ulonglong FUN_145ce2d4c(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459ca5e2(param_1,&local_28,param_2);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x2d));
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce2dca FUN_145ce2dca body=146 status=ok
// SIG undefined FUN_145ce2dca(void)

void FUN_145ce2dca(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((lVar2 == 0) || ((longlong)*(int *)(lVar2 + 0x40) == 0)) {
LAB_145ce2e4b:
    lVar1 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar4);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_2)) {
        if (*(longlong *)(lVar2 + 0x30) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
        }
        lVar1 = FUN_140334a94(lVar1,uVar3);
        if (lVar1 == 0) goto LAB_145ce2e4b;
        lVar2 = FUN_144a5dd5e();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_145ce2e4b;
        break;
      }
      lVar4 = lVar4 + 8;
      lVar1 = 0;
    } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar4);
  }
  FUN_145ce2e5c(lVar1);
  return;
}



// FUNCTION 145ce2e5c FUN_145ce2e5c body=146 status=ok
// SIG undefined FUN_145ce2e5c(void)

uint FUN_145ce2e5c(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141529202(&local_30);
  if (local_28 < 1) {
    uVar4 = 0;
  }
  else {
    lVar3 = 0;
    uVar4 = 0;
    do {
      cVar1 = FUN_14125be1e(param_1,*(undefined8 *)(local_30 + lVar3 * 8));
      uVar2 = 1 << ((byte)lVar3 & 0x1f);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      uVar4 = uVar4 | uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < local_28);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce2ef0 FUN_145ce2ef0 body=253 status=ok
// SIG undefined FUN_145ce2ef0(void)

void FUN_145ce2ef0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  plVar3 = (longlong *)param_2[1];
  plStack_30 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    uVar4 = FUN_145ce2ae6(param_1,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = FUN_145ce2ae6(param_1);
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
  lVar5 = FUN_145ce2c3c(param_1,uVar4);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(lVar5 + 0xda8);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_145ce2fee(param_1,&local_38);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
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



// FUNCTION 145ce2fee FUN_145ce2fee body=151 status=ok
// SIG undefined FUN_145ce2fee(void)

void FUN_145ce2fee(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [48];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140002266(local_38,&DAT_149e063bc,*(undefined4 *)(param_1 + 0x760));
  FUN_1414f3eb8(local_68,param_1 + 0x28,&DAT_14cbced70,local_38);
  FUN_1458291a6(param_1,local_68,param_2);
  FUN_14119d498(local_68);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce3086 FUN_145ce3086 body=483 status=ok
// SIG undefined FUN_145ce3086(void)

undefined8 FUN_145ce3086(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined2 *local_60;
  uint local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x10) < 2) {
    FUN_1400021e4(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  puVar1 = (undefined8 *)(param_1 + 8);
  cVar4 = FUN_144a791f8(puVar1,&DAT_14b991c00,2,1);
  if (cVar4 != '\0') {
    puVar6 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x10) != 0) {
      puVar6 = (undefined2 *)*puVar1;
    }
    FUN_1400021e4(param_1,&local_60);
    puVar5 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar5 = local_60;
    }
    FUN_140002266(param_2,L"%s-%s",puVar5,puVar6);
    puVar6 = local_60;
    goto LAB_145ce31ee;
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  local_60 = (undefined2 *)0x801010000;
  local_58 = local_58 & 0xff000000;
  local_50 = 0;
  FUN_141173a88(&local_70,puVar1,0);
  if (local_70 == 0) {
LAB_145ce3213:
    FUN_1400021e4(param_1,param_2);
  }
  else {
    cVar4 = FUN_1409e3c80(local_70,&local_48,&local_60);
    if (cVar4 == '\0') goto LAB_145ce3213;
    puVar6 = &DAT_149dfb77a;
    if ((int)uStack_40 != 0) {
      puVar6 = local_48;
    }
    FUN_1400021e4(param_1,&local_80);
    puVar5 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar5 = local_80;
    }
    FUN_140002266(param_2,L"%s-%s",puVar5,puVar6);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  FUN_1414276ce(&local_60);
  puVar6 = local_48;
LAB_145ce31ee:
  if (puVar6 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145ce326a FUN_145ce326a body=740 status=ok
// SIG undefined FUN_145ce326a(void)

void FUN_145ce326a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_138 [40];
  code *local_110;
  undefined4 local_108;
  undefined1 local_100 [4];
  undefined8 local_fc;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined2 local_6f;
  undefined1 local_6d;
  undefined4 local_6c;
  code *local_68;
  undefined4 local_60;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_68 = FUN_141632612;
  uVar4 = 0;
  local_60 = 0;
  FUN_145ce3636(local_100,param_1);
  FUN_14586eb8c(&DAT_14cb717f8,&local_68,local_100);
  FUN_1449db362(local_100);
  local_68 = FUN_145af58ca;
  local_60 = 0;
  FUN_145ce37e8(local_100,param_1,&local_68);
  FUN_14127be6a(&DAT_14cbd0b78,&local_68,local_100);
  FUN_1449db362(local_100);
  local_68 = FUN_1414d607c;
  local_60 = 0;
  FUN_145ce399a(local_100,param_1,&local_68);
  FUN_1459cc476(&DAT_14cbd0b18,&local_68,local_100);
  FUN_1449db362(local_100);
  plVar1 = (longlong *)(param_1 + 0x768);
  if (((*(int *)(param_1 + 0x770) == 0) || ((longlong *)*plVar1 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x30))(), cVar2 == '\0')) {
    local_100[0] = 0;
    local_fc = 0;
    local_f4 = 0;
    local_f0 = 0;
    local_ec = 0;
    uStack_e4 = 0;
    local_dc = 0;
    local_d0 = 0xc69c4000;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_6f = 1;
    local_6d = 0;
    local_6c = 0;
    local_110 = FUN_148da9cf2;
    local_108 = 0;
    FUN_145ce3b4c(&local_68,param_1);
    FUN_144a450dc(plVar1,&local_68);
    FUN_1449db362(&local_68);
    FUN_1401aa3da((longlong)&uStack_e4 + 4,plVar1);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0x360);
      }
    }
    FUN_1414ae1a9(&local_68);
    lVar3 = FUN_140149a73(uVar4,0);
    if (lVar3 == 0) {
      local_6c = 2;
    }
    else {
      FUN_140983ba6(&local_68,lVar3,local_100);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_1409838b8(local_100);
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) && (lVar3 = FUN_140b64196(), lVar3 != 0)) {
    local_68 = FUN_1459689ba;
    local_60 = 0;
    FUN_145ce3cfe(local_100,param_1);
    FUN_145ce3550(lVar3 + 0x1f0,&local_68,local_100);
    FUN_1449db362(local_100);
  }
  if ((local_30 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ce3550 FUN_145ce3550 body=216 status=ok
// SIG undefined FUN_145ce3550(void)

undefined8 * FUN_145ce3550(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
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



// FUNCTION 145ce3636 FUN_145ce3636 body=434 status=ok
// SIG undefined FUN_145ce3636(void)

longlong * FUN_145ce3636(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x628);
  if (plVar6 == (longlong *)0x0) {
LAB_145ce371c:
    *puVar5 = &PTR_LAB_14b968eb0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b990e80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ce371c;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x620);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b968eb0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b990e80;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ce37e8 FUN_145ce37e8 body=434 status=ok
// SIG undefined FUN_145ce37e8(void)

longlong * FUN_145ce37e8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x628);
  if (plVar6 == (longlong *)0x0) {
LAB_145ce38ce:
    *puVar5 = &PTR_LAB_14b961ce0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b990ef0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ce38ce;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x620);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b961ce0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b990ef0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ce399a FUN_145ce399a body=434 status=ok
// SIG undefined FUN_145ce399a(void)

longlong * FUN_145ce399a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x628);
  if (plVar6 == (longlong *)0x0) {
LAB_145ce3a80:
    *puVar5 = &PTR_LAB_14b9919e0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b990f60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ce3a80;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x620);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b9919e0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b990f60;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ce3b4c FUN_145ce3b4c body=434 status=ok
// SIG undefined FUN_145ce3b4c(void)

longlong * FUN_145ce3b4c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x628);
  if (plVar6 == (longlong *)0x0) {
LAB_145ce3c32:
    *puVar5 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b990fd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ce3c32;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x620);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b990fd0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ce3cfe FUN_145ce3cfe body=434 status=ok
// SIG undefined FUN_145ce3cfe(void)

longlong * FUN_145ce3cfe(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x628);
  if (plVar6 == (longlong *)0x0) {
LAB_145ce3de4:
    *puVar5 = &PTR_LAB_14b438ba0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b991040;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145ce3de4;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x620);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b438ba0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b991040;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ce3eb0 FUN_145ce3eb0 body=67 status=ok
// SIG undefined FUN_145ce3eb0(void)

void FUN_145ce3eb0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14c844ed8;
  DAT_14c844ed8 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)*plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    FUN_1400020a8(plVar2);
    return;
  }
  return;
}



// FUNCTION 145ce3ef4 FUN_145ce3ef4 body=38 status=ok
// SIG undefined FUN_145ce3ef4(void)

undefined8 FUN_145ce3ef4(undefined8 param_1,int param_2)

{
  FUN_145ce3f1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce3f1a FUN_145ce3f1a body=384 status=ok
// SIG undefined FUN_145ce3f1a(void)

void FUN_145ce3f1a(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  *param_1 = &PTR_LAB_149e1b8b0;
  plVar3 = (longlong *)param_1[0x10];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
  }
  iVar2 = *(int *)(param_1 + 6);
  if ((longlong)iVar2 != 0) {
    lVar4 = param_1[5];
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + 8 + lVar8) + 8))();
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar8);
  }
  uVar7 = FUN_141582352();
  if (param_1[3] != 0) {
    FUN_14480f766(uVar7);
  }
  plVar3 = (longlong *)param_1[1];
  if (((int)plVar3[1] != 0) && (puVar5 = (undefined8 *)*plVar3, puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(plVar3 + 1) = 0;
  }
  piVar6 = (int *)param_1[7];
  LOCK();
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (piVar6 != (int *)0x0 && *piVar6 == 0) {
    FUN_1456cc566(piVar6 + 2);
    FUN_1400020a8(piVar6);
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_144a75412(param_1 + 0x11);
  FUN_145ce40ba(param_1 + 8);
  FUN_145ce40ff(param_1[5],*(undefined4 *)(param_1 + 6));
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
      piVar6 = (int *)((longlong)plVar3 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ce4096. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ce409a FUN_145ce409a body=31 status=ok
// SIG undefined FUN_145ce409a(void)

undefined8 FUN_145ce409a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce40ba FUN_145ce40ba body=69 status=ok
// SIG undefined FUN_145ce40ba(void)

void FUN_145ce40ba(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x70000);
    FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145ce40e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 145ce40ff FUN_145ce40ff body=73 status=ok
// SIG undefined FUN_145ce40ff(void)

void FUN_145ce40ff(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ce4148 FUN_145ce4148 body=116 status=ok
// SIG undefined FUN_145ce4148(void)

void FUN_145ce4148(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145ce41c8 FUN_145ce41c8 body=254 status=ok
// SIG undefined FUN_145ce41c8(void)

undefined8 * FUN_145ce41c8(undefined8 *param_1)

{
  FUN_140e2f36c();
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *param_1 = &PTR_FUN_14ae561e0;
  param_1[5] = &PTR_FUN_14ae566c0;
  param_1[0x2d] = &PTR_FUN_14ae56700;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0xffffffff00000080;
  FUN_141266eda(param_1 + 0x7b,param_1);
  param_1[0x8c] = 0;
  *(undefined2 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 145ce42d2 FUN_145ce42d2 body=253 status=ok
// SIG undefined FUN_145ce42d2(void)

undefined8 * FUN_145ce42d2(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b827290;
  FUN_14480757c(&local_48,&DAT_14cbe4b10);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe4b28);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1447325ac(&local_48,&local_50,1);
  param_1[0x10] = local_50;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe4b50;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f8ccccd;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce43d0 FUN_145ce43d0 body=169 status=ok
// SIG undefined FUN_145ce43d0(void)

bool FUN_145ce43d0(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 145ce44da FUN_145ce44da body=40 status=ok
// SIG undefined FUN_145ce44da(void)

undefined8 FUN_145ce44da(undefined8 param_1,int param_2)

{
  FUN_145ce4502();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce4502 FUN_145ce4502 body=714 status=ok
// SIG undefined FUN_145ce4502(void)

void FUN_145ce4502(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b79ddf0;
  param_1[0x72] = &PTR_FUN_14b79e460;
  param_1[0x73] = &PTR_FUN_14b79e480;
  param_1[0x74] = &PTR_FUN_14b79e4b0;
  param_1[0x75] = &PTR_FUN_14b79e4c0;
  param_1[0x76] = &PTR_FUN_14b79e530;
  param_1[0x77] = &PTR_FUN_14b79e560;
  param_1[0x78] = &PTR_FUN_14b79e590;
  param_1[0x7f] = &PTR_FUN_14b79e640;
  param_1[0x80] = &PTR_FUN_14b79e6b0;
  param_1[0x81] = &PTR_FUN_14b79e720;
  param_1[0x82] = &PTR_FUN_14b79e750;
  param_1[0x83] = &PTR_FUN_14b79e790;
  param_1[0x84] = &PTR_FUN_14b79e830;
  param_1[0x85] = &PTR_FUN_14b79e850;
  param_1[0x89] = &PTR_FUN_14b79e870;
  param_1[0x8a] = &PTR_FUN_14b79e930;
  param_1[0x8b] = &PTR_FUN_14b79e9b0;
  param_1[0x8c] = &PTR_FUN_14b79ea00;
  param_1[0x8d] = &PTR_FUN_14b79ea40;
  param_1[0x8e] = &PTR_FUN_14b79ea60;
  param_1[0x8f] = &PTR_FUN_14b79ea80;
  param_1[0x90] = &PTR_FUN_14b79eaa0;
  param_1[0x91] = &PTR_FUN_14b79eac0;
  param_1[0x92] = &PTR_FUN_14b79eae0;
  param_1[0x93] = &PTR_FUN_14b79eb00;
  param_1[0x94] = &PTR_FUN_14b79eb20;
  param_1[0x95] = &PTR_FUN_14b79eb40;
  param_1[0x96] = &PTR_FUN_14b79eb60;
  param_1[0x34b] = &PTR_FUN_14b79eb80;
  param_1[0x352] = &PTR_FUN_14b79eb90;
  param_1[0x353] = &PTR_FUN_14b79ebd0;
  param_1[0x354] = &PTR_FUN_14b79ec10;
  param_1[0x355] = &PTR_FUN_14b79ec60;
  param_1[0x356] = &PTR_FUN_14b79ec90;
  param_1[0x359] = &PTR_FUN_14b79ecd0;
  param_1[0x35a] = &PTR_FUN_14b79ece0;
  param_1[0x35b] = &PTR_FUN_14b79ed10;
  param_1[0x35c] = &PTR_FUN_14b79edb0;
  if (param_1[0x4d7] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4d6) = 0;
  if (param_1[0x4d5] != 0) {
    FUN_1400020a8();
  }
  FUN_145ce47cc(param_1 + 0x4cd);
  if (param_1[0x4cb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4c4],*(undefined4 *)(param_1 + 0x4c5));
  if (param_1[0x4c4] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 145ce47cc FUN_145ce47cc body=53 status=ok
// SIG undefined FUN_145ce47cc(void)

void FUN_145ce47cc(longlong *param_1)

{
  FUN_145ce4802();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ce4802 FUN_145ce4802 body=88 status=ok
// SIG undefined FUN_145ce4802(void)

void FUN_145ce4802(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ce485a FUN_145ce485a body=167 status=ok
// SIG undefined FUN_145ce485a(void)

bool FUN_145ce485a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_38 = lVar2;
    FUN_145ce4902(param_1 + 0x20,&local_38,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce4902 FUN_145ce4902 body=128 status=ok
// SIG undefined FUN_145ce4902(void)

void FUN_145ce4902(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = (code *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar3 = *param_2;
  local_48 = *param_4;
  uVar4 = FUN_14477b664(param_4[1]);
  local_40 = FUN_14477b664(uVar4);
  local_38 = param_4[2];
  (*pcVar2)(iVar1 + lVar3,param_3,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce4984 FUN_145ce4984 body=144 status=ok
// SIG undefined FUN_145ce4984(void)

code * FUN_145ce4984(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ce4a14();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LightGridParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FRayTracingLightGrid";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471f31c2;
}



// FUNCTION 145ce4a14 FUN_145ce4a14 body=275 status=ok
// SIG undefined FUN_145ce4a14(void)

undefined * FUN_145ce4a14(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3ab68) {
    FUN_144b3d300(&DAT_14ca3ab68);
    if (DAT_14ca3ab68 == -1) {
      FUN_145ce4b28(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"RaytracingLightGridData";
      local_78 = L"FRayTracingLightGrid";
      local_50 = 0x60;
      local_58 = 0x13;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3aae8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f68805);
      _Init_thread_footer(&DAT_14ca3ab68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca3aae8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce4b28 FUN_145ce4b28 body=226 status=ok
// SIG undefined FUN_145ce4b28(void)

longlong * FUN_145ce4b28(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463022e6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce4c0c FUN_145ce4c0c body=138 status=ok
// SIG undefined FUN_145ce4c0c(void)

code * FUN_145ce4c0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneInfiniteLightCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472be0b4;
}



// FUNCTION 145ce4c96 FUN_145ce4c96 body=138 status=ok
// SIG undefined FUN_145ce4c96(void)

code * FUN_145ce4c96(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630236e;
}



// FUNCTION 145ce4d20 FUN_145ce4d20 body=138 status=ok
// SIG undefined FUN_145ce4d20(void)

code * FUN_145ce4d20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridMaxCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c0000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bde8c;
}



// FUNCTION 145ce4daa FUN_145ce4daa body=33 status=ok
// SIG undefined FUN_145ce4daa(void)

void FUN_145ce4daa(void)

{
  if (DAT_14c9525c0 == 0) {
    DAT_14c9525c0 = FUN_145ce4dcc();
  }
  return;
}



// FUNCTION 145ce4dcc FUN_145ce4dcc body=162 status=ok
// SIG undefined FUN_145ce4dcc(void)

undefined8 FUN_145ce4dcc(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c952740 == 0) {
    DAT_14c952740 = FUN_145ce4e70();
  }
  uVar1 = FUN_145b2b1ca();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x78;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145ce4eb2(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce4e70 FUN_145ce4e70 body=66 status=ok
// SIG undefined FUN_145ce4e70(void)

undefined8 FUN_145ce4e70(void)

{
  undefined8 uVar1;
  
  if (DAT_14c952578 == 0) {
    DAT_14c952578 = FUN_145d60116();
  }
  uVar1 = FUN_145a625a2();
  FUN_140aa7318(uVar1,1);
  FUN_140010366(uVar1,0);
  return uVar1;
}



// FUNCTION 145ce4eb2 FUN_145ce4eb2 body=135 status=ok
// SIG undefined FUN_145ce4eb2(void)

void FUN_145ce4eb2(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x80);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce4f3a FUN_145ce4f3a body=33 status=ok
// SIG undefined FUN_145ce4f3a(void)

void FUN_145ce4f3a(void)

{
  if (DAT_14c952770 == 0) {
    DAT_14c952770 = FUN_145ce4f5c();
  }
  return;
}



// FUNCTION 145ce4f5c FUN_145ce4f5c body=162 status=ok
// SIG undefined FUN_145ce4f5c(void)

undefined8 FUN_145ce4f5c(void)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong *local_38;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c952788 == 0) {
    DAT_14c952788 = FUN_145ce5000();
  }
  uVar1 = FUN_145bd352e();
  FUN_140aa7318(uVar1,1);
  FUN_14000e6f0(local_30,2);
  local_28 = 0x78;
  local_24 = 2;
  local_20 = 0;
  local_38 = &local_18;
  local_40 = local_30;
  FUN_145ce5042(uVar1);
  FUN_140010366(uVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce5000 FUN_145ce5000 body=66 status=ok
// SIG undefined FUN_145ce5000(void)

undefined8 FUN_145ce5000(void)

{
  undefined8 uVar1;
  
  if (DAT_14c952578 == 0) {
    DAT_14c952578 = FUN_145d60116();
  }
  uVar1 = FUN_145a6268e();
  FUN_140aa7318(uVar1,1);
  FUN_140010366(uVar1,0);
  return uVar1;
}



// FUNCTION 145ce5042 FUN_145ce5042 body=135 status=ok
// SIG undefined FUN_145ce5042(void)

void FUN_145ce5042(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [424];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_2;
  uStack_1d4 = param_2[1];
  uStack_1d0 = param_2[2];
  uStack_1cc = param_2[3];
  FUN_14000e9de(local_1c8,0x80);
  FUN_1446f07d6(local_1c8,&local_1e0,0);
  FUN_1414c670e(param_1,local_1e0);
  FUN_14000eb08(local_1c8);
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce50d6 FUN_145ce50d6 body=462 status=ok
// SIG undefined FUN_145ce50d6(void)

undefined8 * FUN_145ce50d6(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b385430;
  *(undefined4 *)(param_1 + 0x16) = 0x1003;
  param_1[0x17] = "inv_name_strategy";
  FUN_1400b22c2(local_58,"Inventory.NameStrategy");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_14152a5ca();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145ce51d9;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145ce51d9:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce52ae FUN_145ce52ae body=151 status=ok
// SIG undefined FUN_145ce52ae(void)

void FUN_145ce52ae(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_145ce5346();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1be40;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x70;
  return;
}



// FUNCTION 145ce5346 FUN_145ce5346 body=261 status=ok
// SIG undefined FUN_145ce5346(void)

void FUN_145ce5346(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1bec0) {
    FUN_144b3d300(&DAT_14cc1bec0);
    if (DAT_14cc1bec0 == -1) {
      FUN_145ce544c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FClothDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x49;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1be40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1445276e1);
      _Init_thread_footer(&DAT_14cc1bec0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce544c FUN_145ce544c body=226 status=ok
// SIG undefined FUN_145ce544c(void)

longlong * FUN_145ce544c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146737ed4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce5530 FUN_145ce5530 body=138 status=ok
// SIG undefined FUN_145ce5530(void)

code * FUN_145ce5530(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumInfluencesPerVertex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ce5644;
}



// FUNCTION 145ce55ba FUN_145ce55ba body=138 status=ok
// SIG undefined FUN_145ce55ba(void)

code * FUN_145ce55ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClothBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494842d2;
}



// FUNCTION 145ce5644 FUN_145ce5644 body=138 status=ok
// SIG undefined FUN_145ce5644(void)

code * FUN_145ce5644(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputStreamStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494843e6;
}



// FUNCTION 145ce56d6 FUN_145ce56d6 body=153 status=ok
// SIG undefined FUN_145ce56d6(void)

void FUN_145ce56d6(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_145ce5770();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d430;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x30;
  return;
}



// FUNCTION 145ce5770 FUN_145ce5770 body=261 status=ok
// SIG undefined FUN_145ce5770(void)

void FUN_145ce5770(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1d4b0) {
    FUN_144b3d300(&DAT_14cc1d4b0);
    if (DAT_14cc1d4b0 == -1) {
      FUN_145ce5876(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSkeletonDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x44;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1d430,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14452f1b5);
      _Init_thread_footer(&DAT_14cc1d4b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce5876 FUN_145ce5876 body=226 status=ok
// SIG undefined FUN_145ce5876(void)

longlong * FUN_145ce5876(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14673c03a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce595a FUN_145ce595a body=136 status=ok
// SIG undefined FUN_145ce595a(void)

code * FUN_145ce595a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494d3b3a;
}



// FUNCTION 145ce59e2 FUN_145ce59e2 body=138 status=ok
// SIG undefined FUN_145ce59e2(void)

code * FUN_145ce59e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BoneMatrices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ce5a6c;
}



// FUNCTION 145ce5a6c FUN_145ce5a6c body=138 status=ok
// SIG undefined FUN_145ce5a6c(void)

code * FUN_145ce5a6c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightIndexSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ce595a;
}



// FUNCTION 145ce5af6 FUN_145ce5af6 body=400 status=ok
// SIG undefined FUN_145ce5af6(void)

void FUN_145ce5af6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_1442e782e;
      local_40 = 0;
      local_58 = &local_48;
      FUN_145ce5c88(param_1,param_2,&DAT_14cb92c60,param_1);
      local_48 = FUN_1442e7aba;
      local_40 = 0;
      local_58 = &local_48;
      FUN_145ce5c88(param_1,param_2,&DAT_14cb92c68,param_1);
      local_48 = FUN_140de0f20;
      local_40 = 0;
      local_58 = &local_48;
      FUN_145ce5dae(param_1,param_2,&DAT_14cb92c68,param_1);
      local_48 = FUN_1442e7f5a;
      local_40 = 0;
      local_58 = &local_48;
      FUN_145ce5c88(param_1,param_2,&DAT_14cb92be8,param_1);
      local_48 = FUN_148ea72b6;
      local_40 = 0;
      local_58 = &local_48;
      FUN_145ce5c88(param_1,param_2,&DAT_14cb92c78,param_1);
      local_48 = FUN_1442e813c;
      local_40 = 0;
      local_58 = &local_48;
      FUN_145ce5c88(param_1,param_2,&DAT_14cb92c80,param_1);
      local_48 = FUN_140de0f20;
      local_40 = 0;
      local_58 = &local_48;
      FUN_145ce5dae(param_1,param_2,&DAT_14cb92c80,param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce5c88 FUN_145ce5c88 body=293 status=ok
// SIG undefined FUN_145ce5c88(void)

void FUN_145ce5c88(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14152a604(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce5dae FUN_145ce5dae body=402 status=ok
// SIG undefined FUN_145ce5dae(void)

void FUN_145ce5dae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_14152a688(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_14152a688(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_14152a688(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ce5f42 FUN_145ce5f42 body=40 status=ok
// SIG undefined FUN_145ce5f42(void)

undefined8 FUN_145ce5f42(undefined8 param_1,int param_2)

{
  FUN_145ce5f6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce5f6a FUN_145ce5f6a body=172 status=ok
// SIG undefined FUN_145ce5f6a(void)

void FUN_145ce5f6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bce6250;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145ce601c(param_1 + 0x1c);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145ce6052(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145ce6088(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ce6016 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  FUN_144760e82();
  return;
}



// FUNCTION 145ce601c FUN_145ce601c body=53 status=ok
// SIG undefined FUN_145ce601c(void)

void FUN_145ce601c(longlong *param_1)

{
  FUN_145ce6274();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ce6052 FUN_145ce6052 body=53 status=ok
// SIG undefined FUN_145ce6052(void)

void FUN_145ce6052(longlong *param_1)

{
  FUN_145ce6118();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ce6088 FUN_145ce6088 body=53 status=ok
// SIG undefined FUN_145ce6088(void)

void FUN_145ce6088(longlong *param_1)

{
  FUN_145ce60be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ce60be FUN_145ce60be body=90 status=ok
// SIG undefined FUN_145ce60be(void)

void FUN_145ce60be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145ce6118 FUN_145ce6118 body=346 status=ok
// SIG undefined FUN_145ce6118(void)

void FUN_145ce6118(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ce6274 FUN_145ce6274 body=382 status=ok
// SIG undefined FUN_145ce6274(void)

void FUN_145ce6274(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1494769aa(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ce63f4 FUN_145ce63f4 body=92 status=ok
// SIG undefined FUN_145ce63f4(void)

undefined8 FUN_145ce63f4(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14118da1c();
  cVar1 = FUN_14054d46e(uVar2,L"NewConsole");
  if (cVar1 == '\0') {
    uVar2 = FUN_14001cc68(0x30,0x10);
    FUN_14152a72e(uVar2);
  }
  else {
    uVar2 = FUN_14001cc68(0x38,0x10);
    FUN_1428509b0(uVar2);
  }
  return uVar2;
}



// FUNCTION 145ce6450 FUN_145ce6450 body=40 status=ok
// SIG undefined FUN_145ce6450(void)

undefined8 FUN_145ce6450(undefined8 param_1,int param_2)

{
  FUN_145ce6478();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce6478 FUN_145ce6478 body=93 status=ok
// SIG undefined FUN_145ce6478(void)

void FUN_145ce6478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4f0dc0;
  param_1[0x1f] = &PTR_FUN_14a4f1130;
  FUN_1404dbc70(param_1 + 0x86);
  FUN_1404dbc70(param_1 + 100);
  FUN_1404dbc70(param_1 + 0x42);
  FUN_1404dbc70(param_1 + 0x20);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145ce64d6 FUN_145ce64d6 body=98 status=ok
// SIG undefined FUN_145ce64d6(void)

void FUN_145ce64d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_145ce6538(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x400) = 0;
  plVar3 = *(longlong **)(param_1 + 0x408);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x408) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145ce6534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ce6538 FUN_145ce6538 body=167 status=ok
// SIG undefined FUN_145ce6538(void)

void FUN_145ce6538(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != '\0') {
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*param_1 + 0x10))(0,&local_38);
    lVar1 = local_38;
    lVar3 = (longlong)(int)uStack_30;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(lVar1 + lVar4));
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x2a0))(plVar2,1);
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ce65ec FUN_145ce65ec body=122 status=ok
// SIG undefined FUN_145ce65ec(void)

undefined8 * FUN_145ce65ec(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b080330;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  return param_1;
}



// FUNCTION 145ce6666 FUN_145ce6666 body=38 status=ok
// SIG undefined FUN_145ce6666(void)

undefined8 FUN_145ce6666(undefined8 param_1,int param_2)

{
  FUN_145ce668c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce668c FUN_145ce668c body=95 status=ok
// SIG undefined FUN_145ce668c(void)

void FUN_145ce668c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b3fd760;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14103c068(param_1 + 2);
  return;
}



// FUNCTION 145ce66ec FUN_145ce66ec body=40 status=ok
// SIG undefined FUN_145ce66ec(void)

undefined8 FUN_145ce66ec(undefined8 param_1,int param_2)

{
  FUN_145ce6714();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce6714 FUN_145ce6714 body=93 status=ok
// SIG undefined FUN_145ce6714(void)

void FUN_145ce6714(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b423000;
  param_1[0x1f] = &PTR_FUN_14b423370;
  FUN_1404dbc70(param_1 + 0x86);
  FUN_1404dbc70(param_1 + 100);
  FUN_1404dbc70(param_1 + 0x42);
  FUN_1404dbc70(param_1 + 0x20);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145ce6772 FUN_145ce6772 body=9 status=ok
// SIG undefined FUN_145ce6772(void)

void FUN_145ce6772(longlong param_1)

{
  FUN_145ce677c(param_1 + 0x10);
  return;
}



// FUNCTION 145ce677c FUN_145ce677c body=124 status=ok
// SIG undefined FUN_145ce677c(void)

void FUN_145ce677c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b503900;
  plVar3 = (longlong *)param_1[100];
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
  FUN_1449db362(param_1 + 0x60);
  FUN_1449db362(param_1 + 0x5e);
  FUN_1449db362(param_1 + 0x5c);
  FUN_1449db362(param_1 + 0x5a);
  FUN_1413d7d8a(param_1);
  return;
}



// FUNCTION 145ce67f8 FUN_145ce67f8 body=68 status=ok
// SIG undefined FUN_145ce67f8(void)

void FUN_145ce67f8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ce683c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b629d70;
  puVar1[5] = &PTR_FUN_14b62a020;
  puVar1[10] = &PTR_FUN_14b62a050;
  puVar1[0xb] = &PTR_FUN_14b62a080;
  return;
}



// FUNCTION 145ce683c FUN_145ce683c body=65 status=ok
// SIG undefined FUN_145ce683c(void)

undefined8 * FUN_145ce683c(undefined8 *param_1)

{
  FUN_145ad7b0e();
  *param_1 = &PTR_FUN_14b7e9520;
  param_1[5] = &PTR_FUN_14b7e97d0;
  param_1[10] = &PTR_FUN_14b7e9800;
  param_1[0xb] = &PTR_FUN_14b7e9830;
  return param_1;
}



// FUNCTION 145ce6886 FUN_145ce6886 body=125 status=ok
// SIG undefined FUN_145ce6886(void)

undefined8 * FUN_145ce6886(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = &PTR_FUN_14b71e160;
  param_1[5] = &PTR_FUN_14b71eb60;
  param_1[6] = &PTR_LAB_14b71eba0;
  param_1[0x55] = &PTR_FUN_14b71ebf0;
  param_1[0x56] = &PTR_FUN_14b71ec70;
  param_1[0x57] = &PTR_FUN_14b71ec80;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) & 0xef;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 2;
  return param_1;
}


