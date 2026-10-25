// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147554828 FUN_147554828 body=154 status=ok
// SIG undefined FUN_147554828(void)

void FUN_147554828(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1475548c4(param_1,param_3);
  lVar2 = FUN_147554990(param_1,param_4);
  local_38 = *(undefined8 *)(param_1 + 0xf0);
  local_30 = (ulonglong)uVar1 | lVar2 << 0x20;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_40 = &PTR_FUN_14a480d70;
  local_68 = 0;
  FUN_1475569d4(local_38,&local_58,&local_40,0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475548c4 FUN_1475548c4 body=202 status=ok
// SIG undefined FUN_1475548c4(void)

int FUN_1475548c4(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = param_1;
  }
  iVar4 = *(int *)(lVar2 + 0xc + (longlong)param_2 * 0x10);
  if (iVar4 == -1) {
    puVar3 = (undefined8 *)(lVar2 + (longlong)param_2 * 0x10);
    lVar2 = *(longlong *)(param_1 + 0xf0);
    uVar1 = *(undefined4 *)(param_1 + 0xf8);
    local_38 = *(undefined4 *)(puVar3 + 1);
    local_40 = *puVar3;
    iVar4 = *(int *)(lVar2 + 200);
    *(uint *)(lVar2 + 200) = iVar4 + 1U;
    if (*(uint *)(lVar2 + 0xcc) < iVar4 + 1U) {
      FUN_1475666be((longlong *)(lVar2 + 0xc0),iVar4);
    }
    lVar2 = *(longlong *)(lVar2 + 0xc0);
    lVar5 = (longlong)iVar4 * 0x10;
    *(undefined4 *)(lVar2 + 8 + lVar5) = local_38;
    *(undefined8 *)(lVar2 + lVar5) = local_40;
    *(undefined4 *)(lVar2 + 0xc + lVar5) = uVar1;
    *(int *)((longlong)puVar3 + 0xc) = iVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147554990 FUN_147554990 body=145 status=ok
// SIG undefined FUN_147554990(void)

int FUN_147554990(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 == -1) {
    iVar3 = -1;
  }
  else {
    lVar2 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe0);
    }
    iVar3 = *(int *)(lVar2 + 0x40 + (longlong)param_2 * 0x48);
    if (iVar3 == -1) {
      lVar2 = lVar2 + (longlong)param_2 * 0x48;
      lVar1 = *(longlong *)(param_1 + 0xf0);
      iVar3 = *(int *)(lVar1 + 0xd8);
      *(uint *)(lVar1 + 0xd8) = iVar3 + 1U;
      if (*(uint *)(lVar1 + 0xdc) < iVar3 + 1U) {
        FUN_147566744((longlong *)(lVar1 + 0xd0),iVar3);
      }
      FUN_1475376e2((longlong)iVar3 * 0x40 + *(longlong *)(lVar1 + 0xd0),lVar2);
      *(int *)(lVar2 + 0x40) = iVar3;
    }
  }
  return iVar3;
}



// FUNCTION 147554a22 FUN_147554a22 body=52 status=ok
// SIG undefined FUN_147554a22(void)

void FUN_147554a22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14755452a(param_1,param_3,param_4);
  FUN_147554a56(param_1,param_2,uVar1,param_5);
  return;
}



// FUNCTION 147554a56 FUN_147554a56 body=158 status=ok
// SIG undefined FUN_147554a56(void)

void FUN_147554a56(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_1475548c4(param_1,param_3);
  lVar2 = FUN_147554990(param_1,param_4);
  local_38 = *(longlong *)(param_1 + 0xf0) + 0x60;
  local_30 = (ulonglong)uVar1 | lVar2 << 0x20;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_40 = &PTR_FUN_14a480d70;
  local_68 = 0;
  FUN_1475569d4(local_38,&local_58,&local_40,0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147554af6 FUN_147554af6 body=336 status=ok
// SIG undefined FUN_147554af6(void)

void FUN_147554af6(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14055b2f2(&local_50,param_1,(param_2 << 0x20) + 1);
  *param_4 = local_50;
  param_4[1] = uStack_4c;
  param_4[2] = uStack_48;
  param_4[3] = uStack_44;
  FUN_14055ae82(&local_68,param_1,local_40);
  local_88 = local_68;
  uStack_84 = uStack_64;
  uStack_80 = uStack_60;
  uStack_7c = uStack_5c;
  local_78 = local_58;
  lVar4 = CONCAT44(uStack_64,local_68);
  lVar3 = CONCAT44(uStack_5c,uStack_60);
  if (lVar3 != 0 || (int)local_58 != 0) {
    do {
      if ((longlong)*(int *)(lVar3 + 0x1c) == -1) {
        lVar4 = 0;
      }
      else {
        lVar4 = (longlong)
                *(int *)(*(longlong *)(lVar4 + 0x40) + (longlong)*(int *)(lVar3 + 0x1c) * 0xc) * 8 +
                *(longlong *)(lVar4 + 0x50);
      }
      local_98 = *(undefined4 *)(lVar4 + 4 + (longlong)(int)local_58 * 8);
      puVar1 = (undefined4 *)
               (*(longlong *)(param_1 + 0xc0) +
               (longlong)*(int *)(lVar4 + (longlong)(int)local_58 * 8) * 0x10);
      local_a8 = *puVar1;
      uStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      cVar2 = (*(code *)*param_3)(param_3[1],&local_a8);
      if (cVar2 == '\0') break;
      FUN_14055af82(&local_88);
      lVar4 = CONCAT44(uStack_84,local_88);
      lVar3 = CONCAT44(uStack_7c,uStack_80);
      local_58 = local_78 & 0xffffffff;
    } while ((int)local_78 != 0 || (lVar4 != CONCAT44(uStack_64,local_68) || lVar3 != 0));
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147554c48 FUN_147554c48 body=108 status=ok
// SIG undefined FUN_147554c48(void)

undefined8 FUN_147554c48(ulonglong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong local_10;
  ulonglong local_8;
  
  puVar3 = &local_10;
  local_8 = param_1;
  local_10 = param_2;
  if ((char)param_1 != '\x02') {
    iVar2 = (int)(param_1 >> 0x20);
    cVar1 = (char)(param_1 & 0xffffffff);
    if ((char)param_2 == '\x02') {
      puVar3 = &local_8;
    }
    else {
      iVar4 = (int)(param_2 >> 0x20);
      if (iVar2 < iVar4) {
        puVar3 = &local_8;
      }
      else if ((iVar2 <= iVar4) && (puVar3 = &local_10, cVar1 == '\0')) {
        puVar3 = &local_8;
      }
      if ((char)*puVar3 != cVar1) {
        return 0;
      }
    }
    if (*(int *)((longlong)puVar3 + 4) == iVar2) {
      return CONCAT71((int7)((param_1 & 0xffffffff) >> 8),
                      param_1 >> 0x20 != param_2 >> 0x20 || (char)param_2 != cVar1);
    }
  }
  return 0;
}



// FUNCTION 147554cb4 FUN_147554cb4 body=464 status=ok
// SIG undefined FUN_147554cb4(void)

void FUN_147554cb4(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] == 0) {
    iVar6 = 0;
  }
  else {
    cVar2 = FUN_14055ad78((longlong)((int)param_1[1] + -1) * 0x10 + *param_1,param_2);
    if (cVar2 != '\0') goto LAB_147554e31;
    iVar6 = (int)param_1[1];
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_1475667ca(param_1,iVar6);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x10);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  iVar6 = (int)param_1[5];
  *(uint *)(param_1 + 5) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2c) < iVar6 + 1U) {
    FUN_147566850(param_1 + 4,iVar6);
  }
  lVar4 = param_1[4];
  lVar5 = (longlong)iVar6 * 0x20;
  *(undefined8 *)(lVar4 + lVar5) = 0;
  *(undefined8 *)(lVar4 + lVar5) = *param_4;
  *param_4 = 0;
  *(undefined4 *)(lVar4 + 8 + lVar5) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(lVar4 + 0xc + lVar5) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = param_4[2];
  param_4[2] = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = *(undefined4 *)(param_4 + 3);
  *(undefined4 *)(lVar4 + 0x1c + lVar5) = *(undefined4 *)((longlong)param_4 + 0x1c);
  param_4[3] = 0;
  lVar4 = param_1[3];
  uVar3 = (int)lVar4 + 1;
  *(uint *)(param_1 + 3) = uVar3;
  if (*(uint *)((longlong)param_1 + 0x1c) < uVar3) {
    FUN_1475668d6(param_1 + 2);
  }
  lVar5 = param_1[2];
  lVar4 = (longlong)(int)lVar4 * 0x30;
  *(undefined8 *)(lVar5 + lVar4) = 0;
  *(undefined8 *)(lVar5 + lVar4) = *param_3;
  *param_3 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar4) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(lVar5 + 0xc + lVar4) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar5 + 0x10 + lVar4) = param_3[2];
  param_3[2] = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar4) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)(lVar5 + 0x1c + lVar4) = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  *(undefined8 *)(lVar5 + 0x20 + lVar4) = 0;
  *(undefined8 *)(lVar5 + 0x20 + lVar4) = param_3[4];
  param_3[4] = 0;
  *(undefined4 *)(lVar5 + 0x28 + lVar4) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)(lVar5 + 0x2c + lVar4) = *(undefined4 *)((longlong)param_3 + 0x2c);
  param_3[5] = 0;
LAB_147554e31:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147554e86 FUN_147554e86 body=258 status=ok
// SIG undefined FUN_147554e86(void)

undefined8 *
FUN_147554e86(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3);
    if (lVar4 != 0) {
      if (*(char *)(param_1 + 0x16c) == '\0') {
        local_38 = *param_4;
        local_30 = param_4[1];
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        FUN_140874208(param_1,&local_38);
      }
      local_48 = *param_4;
      local_40 = param_4[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_147554f8c(param_1,param_2,param_3,&local_48);
      goto LAB_147554ecf;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_147554ecf:
  plVar3 = (longlong *)param_4[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147554f8c FUN_147554f8c body=488 status=ok
// SIG undefined FUN_147554f8c(void)

undefined8 *
FUN_147554f8c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)FUN_14479d2ce(param_1 + 0x18);
  if (plVar9 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plVar9 + 0x2e8))(plVar9);
    if (lVar10 != 0) {
      local_50 = 0;
      FUN_14485c47a(&local_50,param_3);
      iVar7 = FUN_1432dd3cc(lVar10);
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          lVar11 = FUN_1432dd3d0(lVar10,iVar7);
          uVar3 = *(undefined4 *)(lVar11 + 0x3c);
          uVar4 = *(undefined4 *)(lVar11 + 0x40);
          uVar5 = *(undefined4 *)(lVar11 + 0x44);
          *(undefined4 *)param_2 = *(undefined4 *)(lVar11 + 0x38);
          *(undefined4 *)((longlong)param_2 + 4) = uVar3;
          *(undefined4 *)(param_2 + 1) = uVar4;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
          local_70 = *param_4;
          local_68 = param_4[1];
          if (local_68 != 0) {
            LOCK();
            *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
            UNLOCK();
          }
          FUN_1401ac0fe(param_1,&local_60,param_2,&local_70);
          if ((longlong)local_58 != 0) {
            lVar12 = (longlong)local_58 << 3;
            lVar11 = local_60;
            do {
              cVar6 = FUN_1401246e4(lVar11,&local_50);
              if (cVar6 != '\0') goto LAB_147555124;
              lVar11 = lVar11 + 8;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
          }
          iVar7 = iVar7 + 1;
          iVar8 = FUN_1432dd3cc(lVar10);
        } while (iVar7 < iVar8);
      }
      iVar7 = FUN_1415c6332(lVar10);
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          lVar11 = FUN_14574ef0a(lVar10,iVar7);
          uVar3 = *(undefined4 *)(lVar11 + 0xa4);
          uVar4 = *(undefined4 *)(lVar11 + 0xa8);
          uVar5 = *(undefined4 *)(lVar11 + 0xac);
          *(undefined4 *)param_2 = *(undefined4 *)(lVar11 + 0xa0);
          *(undefined4 *)((longlong)param_2 + 4) = uVar3;
          *(undefined4 *)(param_2 + 1) = uVar4;
          *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
          local_80 = *param_4;
          local_78 = param_4[1];
          if (local_78 != 0) {
            LOCK();
            *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
            UNLOCK();
          }
          FUN_1401ac0fe(param_1,&local_60,param_2,&local_80);
          if ((longlong)local_58 != 0) {
            lVar12 = (longlong)local_58 << 3;
            lVar11 = local_60;
            do {
              cVar6 = FUN_1401246e4(lVar11,&local_50);
              if (cVar6 != '\0') goto LAB_147555124;
              lVar11 = lVar11 + 8;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
          }
          iVar7 = iVar7 + 1;
          iVar8 = FUN_1415c6332(lVar10);
        } while (iVar7 < iVar8);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_147555124:
  plVar9 = (longlong *)param_4[1];
  if (plVar9 != (longlong *)0x0) {
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
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147555176 FUN_147555176 body=1047 status=ok
// SIG undefined FUN_147555176(void)

void FUN_147555176(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  uint *puVar16;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8 [32];
  uint *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (uint *)0x0;
  local_50 = 0x800000000;
  plVar1 = (longlong *)(param_1 + 0x28);
  local_160 = param_1 + 0x38;
  local_f8 = 0x100000000;
  local_e8 = 0xffffffff;
  iStack_e4 = 0;
  uStack_e0 = 0;
  local_148 = param_3;
  uStack_f0 = local_160;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_f8);
    iVar11 = *(int *)(param_1 + 0x50);
  }
  uStack_108 = CONCAT44(uStack_dc,uStack_e0);
  local_110 = local_e8;
  iStack_10c = iStack_e4;
  uStack_120 = (uint)local_f8;
  uStack_11c = local_f8._4_4_;
  uStack_118 = (undefined4)uStack_f0;
  uStack_114 = uStack_f0._4_4_;
  lVar13 = local_160;
  local_158 = param_1;
  local_150 = param_4;
  local_128 = plVar1;
  if ((iStack_e4 != iVar11) || (uStack_f0 != local_160)) {
    do {
      uVar9 = local_50;
      puVar16 = (uint *)(*local_128 + (longlong)iStack_10c * 0x38);
      if (*(char *)(*local_128 + 0x10 + (longlong)iStack_10c * 0x38) == '\x01') {
        puVar14 = puVar16 + 6;
        if (*(uint **)(puVar16 + 8) != (uint *)0x0) {
          puVar14 = *(uint **)(puVar16 + 8);
        }
        uVar10 = puVar16[10];
        if ((longlong)(int)uVar10 != 0) {
          lVar15 = 0;
          do {
            local_130 = *(undefined8 *)((longlong)puVar14 + lVar15);
            lVar12 = FUN_14479d2ce();
            plVar2 = local_150;
            if (lVar12 == param_2 && lVar12 != 0) {
              uVar6 = *(undefined4 *)(local_158 + 0x20);
              local_f8 = *(undefined8 *)puVar16;
              uStack_f0 = *(longlong *)(puVar16 + 2);
              iVar5 = (int)local_150[1];
              lVar13 = (longlong)iVar5;
              *(uint *)(local_150 + 1) = iVar5 + 1U;
              if (*(uint *)((longlong)local_150 + 0xc) < iVar5 + 1U) {
                FUN_147566b40(local_150,iVar5);
              }
              lVar15 = *plVar2;
              puVar4 = (undefined4 *)(lVar15 + lVar13 * 0x18);
              *puVar4 = (uint)local_f8;
              puVar4[1] = local_f8._4_4_;
              puVar4[2] = (undefined4)uStack_f0;
              puVar4[3] = uStack_f0._4_4_;
              *(undefined4 *)(lVar15 + 0x10 + lVar13 * 0x18) = uVar6;
              *(undefined4 *)(lVar15 + 0x14 + lVar13 * 0x18) = 0xffffffff;
              lVar13 = local_160;
              break;
            }
            lVar15 = lVar15 + 8;
          } while ((longlong)(int)uVar10 * 8 != lVar15);
        }
      }
      else {
        lVar15 = (longlong)(int)local_50;
        uVar10 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar10);
        if (local_50._4_4_ < uVar10) {
          FUN_147566bd4(local_d8,uVar9 & 0xffffffff);
        }
        puVar14 = local_58;
        if (local_58 == (uint *)0x0) {
          puVar14 = local_d8;
        }
        uVar10 = puVar16[1];
        uVar7 = puVar16[2];
        uVar8 = puVar16[3];
        puVar14 = puVar14 + lVar15 * 4;
        *puVar14 = *puVar16;
        puVar14[1] = uVar10;
        puVar14[2] = uVar7;
        puVar14[3] = uVar8;
      }
      local_110 = local_110 & ~uStack_11c;
      FUN_1449c0562(&uStack_120);
    } while (local_128 != plVar1 ||
             (CONCAT44(uStack_114,uStack_118) != lVar13 || iStack_10c != iVar11));
  }
  puVar16 = local_58;
  if (local_58 == (uint *)0x0) {
    puVar16 = local_d8;
  }
  if ((longlong)(int)local_50 != 0) {
    puVar14 = puVar16 + (longlong)(int)local_50 * 4;
    do {
      local_140 = *local_148;
      local_138 = local_148[1];
      if (local_138 != 0) {
        LOCK();
        *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
        UNLOCK();
      }
      FUN_1409eacfe(local_158,puVar16,&local_140);
      iVar11 = FUN_1447bdbdc(plVar1,puVar16[1] ^ *puVar16 ^ puVar16[2] ^ puVar16[3],puVar16);
      if (iVar11 == -1) {
        lVar13 = 0;
      }
      else {
        lVar13 = (longlong)iVar11 * 0x38 + *plVar1;
      }
      lVar15 = lVar13 + 0x18;
      if (*(longlong *)(lVar13 + 0x20) != 0) {
        lVar15 = *(longlong *)(lVar13 + 0x20);
      }
      iVar11 = *(int *)(lVar13 + 0x28);
      if ((longlong)iVar11 != 0) {
        lVar13 = 0;
        do {
          local_f8 = *(undefined8 *)(lVar15 + lVar13);
          lVar12 = FUN_14479d2ce(&local_f8);
          plVar2 = local_150;
          if (lVar12 == param_2 && lVar12 != 0) {
            uVar6 = *(undefined4 *)(local_158 + 0x20);
            local_128 = *(longlong **)puVar16;
            uStack_120 = puVar16[2];
            uStack_11c = puVar16[3];
            iVar11 = (int)local_150[1];
            lVar13 = (longlong)iVar11;
            *(uint *)(local_150 + 1) = iVar11 + 1U;
            if (*(uint *)((longlong)local_150 + 0xc) < iVar11 + 1U) {
              FUN_147566b40(local_150,iVar11);
            }
            lVar15 = *plVar2;
            puVar4 = (undefined4 *)(lVar15 + lVar13 * 0x18);
            *puVar4 = (undefined4)local_128;
            puVar4[1] = local_128._4_4_;
            puVar4[2] = uStack_120;
            puVar4[3] = uStack_11c;
            *(undefined4 *)(lVar15 + 0x10 + lVar13 * 0x18) = uVar6;
            *(undefined4 *)(lVar15 + 0x14 + lVar13 * 0x18) = 0xffffffff;
            break;
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar11 * 8 != lVar13);
      }
      puVar16 = puVar16 + 4;
    } while (puVar16 != puVar14);
  }
  if (local_58 != (uint *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)local_148[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14755558e FUN_14755558e body=105 status=ok
// SIG undefined FUN_14755558e(void)

void FUN_14755558e(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    FUN_1457adc9c(param_1 + 0x118,local_1c,param_2,0);
  }
  else {
    FUN_146b71246(param_1 + 0x118,param_2);
  }
  FUN_1400a4b32(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475555f8 FUN_1475555f8 body=145 status=ok
// SIG undefined FUN_1475555f8(void)

undefined8 FUN_1475555f8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_38 = &local_28;
  FUN_1401abfd8(param_1,param_2,param_3,param_3 + 0x10);
  plVar3 = (longlong *)param_4[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755568a FUN_14755568a body=414 status=ok
// SIG undefined FUN_14755568a(void)

void FUN_14755568a(longlong param_1,undefined8 param_2,uint *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_1f8 [40];
  uint *local_1d0;
  undefined1 *local_1c8;
  int local_1bc;
  undefined1 local_1b8 [16];
  undefined4 local_1a8;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_164;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined8 local_114;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined8 local_c4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar1 = (longlong *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar3 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xe8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & *param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *plVar1 + (longlong)iVar2 * 400;
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 400) == *param_3) {
          if (lVar3 != 0) goto LAB_1475557b9;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x188);
      } while (iVar2 != -1);
    }
  }
  memset(local_1b8,0,0x180);
  local_1a8 = 2;
  local_198 = 0xffffffff;
  local_190 = 0;
  uStack_188 = 0;
  local_164 = 0xffffffff00000080;
  local_120 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_d0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_80 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_50 = 0;
  local_1d0 = param_3;
  local_1c8 = local_1b8;
  FUN_1409e5d90(plVar1,&local_1bc);
  lVar3 = *plVar1 + (longlong)local_1bc * 400;
  FUN_1409e579e(local_1b8);
LAB_1475557b9:
  FUN_14755558e(lVar3 + 8,param_2,param_4);
  if ((local_38 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14755582a FUN_14755582a body=22 status=ok
// SIG undefined FUN_14755582a(void)

undefined8 FUN_14755582a(undefined8 param_1,undefined8 param_2)

{
  FUN_147555840();
  return param_2;
}



// FUNCTION 147555840 FUN_147555840 body=328 status=ok
// SIG undefined FUN_147555840(void)

undefined4 * FUN_147555840(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
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
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar2 = param_1 + 0xb8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0xd0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar4 = (longlong)iStack_74;
      lVar5 = FUN_14479d2ce(lVar3 + lVar4 * 400 + 0x20);
      if (lVar5 == param_3) {
        *param_2 = *(undefined4 *)(lVar3 + lVar4 * 400);
        goto LAB_1475558e7;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while ((CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar6) || local_90 != plVar1);
  }
  *param_2 = 0xffffffff;
LAB_1475558e7:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14755598a FUN_14755598a body=293 status=ok
// SIG undefined FUN_14755598a(void)

undefined8 *
FUN_14755598a(longlong param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar4 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & *param_4) * 4);
    if (iVar5 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 400;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 400) == *param_4) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            local_28 = *param_5;
            local_20 = param_5[1];
            if (local_20 != 0) {
              LOCK();
              *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
              UNLOCK();
            }
            FUN_147554e86(lVar4 + 8,param_2,param_3,&local_28);
            goto LAB_1475559bb;
          }
          break;
        }
        iVar5 = *(int *)(lVar4 + 0x188);
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1475559bb:
  plVar3 = (longlong *)param_5[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147555ab2 FUN_147555ab2 body=293 status=ok
// SIG undefined FUN_147555ab2(void)

undefined8 *
FUN_147555ab2(longlong param_1,undefined8 *param_2,undefined8 param_3,uint *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar4 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & *param_4) * 4);
    if (iVar5 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 400;
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar5 * 400) == *param_4) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            local_28 = *param_5;
            local_20 = param_5[1];
            if (local_20 != 0) {
              LOCK();
              *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
              UNLOCK();
            }
            FUN_147554f8c(lVar4 + 8,param_2,param_3,&local_28);
            goto LAB_147555ae3;
          }
          break;
        }
        iVar5 = *(int *)(lVar4 + 0x188);
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_147555ae3:
  plVar3 = (longlong *)param_5[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147555bda FUN_147555bda body=373 status=ok
// SIG undefined FUN_147555bda(void)

void FUN_147555bda(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)(param_1 + 0xa8);
  lVar4 = param_1 + 0xb8;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar4;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0xd0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar3;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar4)) {
    do {
      lVar5 = *local_88;
      local_98 = *param_3;
      local_90 = param_3[1];
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      FUN_147555176(lVar5 + (longlong)iStack_6c * 400 + 8,param_2,&local_98,param_4);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar3 || (CONCAT44(uStack_74,uStack_78) != lVar4 || iStack_6c != iVar6));
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147555d50 FUN_147555d50 body=187 status=ok
// SIG undefined FUN_147555d50(void)

void FUN_147555d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(*param_4 + 0x10))(param_4);
  local_38 = *(undefined8 *)(lVar3 + 8);
  puVar2 = *(undefined8 **)(lVar3 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
    FUN_140a473e6(param_1,param_2,param_3);
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    local_30 = puVar2;
    FUN_140a473e6(param_1,param_2,param_3);
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147555e20 FUN_147555e20 body=91 status=ok
// SIG undefined FUN_147555e20(void)

undefined4 * FUN_147555e20(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_1447addd0(param_3,0x10);
  iVar2 = FUN_147566f3a((longlong *)(param_1 + 8),uVar1,param_3);
  uVar1 = 0xffffffff;
  if ((iVar2 != -1) && (lVar3 = (longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 8), lVar3 != 0)) {
    uVar1 = *(undefined4 *)(lVar3 + 0x10);
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 147555e7c FUN_147555e7c body=108 status=ok
// SIG undefined FUN_147555e7c(void)

void FUN_147555e7c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_3;
  FUN_1447addd0(param_2,0x10);
  local_38 = param_2;
  local_30 = &local_3c;
  FUN_147566fb6(param_1 + 8,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147555eea FUN_147555eea body=145 status=ok
// SIG undefined FUN_147555eea(void)

int * FUN_147555eea(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0xb8) + 1;
  *(int *)(param_1 + 0xb8) = iVar1;
  *param_2 = iVar1;
  FUN_1408c4e6e(param_4);
  local_48 = param_2;
  local_40 = param_4;
  FUN_14756748a(param_1,local_34);
  FUN_147555e7c(param_1 + 0xb8,param_3,*param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147555f7c FUN_147555f7c body=244 status=ok
// SIG undefined FUN_147555f7c(void)

void FUN_147555f7c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_68 [44];
  uint local_3c;
  uint *local_38;
  longlong local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147555e20(param_1 + 0x17,&local_3c,param_2);
  if (local_3c != 0xffffffff) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar2 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_1[8];
      }
      iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & local_3c) * 4);
      if (iVar3 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar3 * 0x88;
          if (*(uint *)(*param_1 + (longlong)iVar3 * 0x88) == local_3c) {
            if (lVar1 + 8 != 0 && lVar1 != 0) {
              local_38 = &local_3c;
              local_30 = lVar1 + 8;
              FUN_14756748a(param_1 + 10,local_24);
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 0x80);
        } while (iVar3 != -1);
      }
    }
    FUN_147567a30(param_1,&local_3c);
    FUN_147567b1c(param_1 + 0x18,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147556072 FUN_147556072 body=842 status=ok
// SIG undefined FUN_147556072(void)

void FUN_147556072(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined4 *puVar15;
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
  plVar1 = (longlong *)(param_1 + 0xc0);
  local_78 = 0;
  uStack_70 = 0;
  lVar12 = param_1 + 0xd0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar12;
  if (*(int *)(param_1 + 0xe8) == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar14 = *(int *)(param_1 + 0xe8);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar14) || (uStack_60 != lVar12)) {
    do {
      puVar15 = (undefined4 *)((longlong)iStack_84 * 0x1c + *local_a0);
      uVar10 = FUN_1447addd0(puVar15,0x10);
      iVar11 = FUN_140f5cb3a(param_2,uVar10,puVar15);
      uVar8 = uStack_70;
      if (iVar11 == -1) {
        lVar13 = (longlong)(int)uStack_70;
        uVar9 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
        if (uStack_70._4_4_ < uVar9) {
          FUN_140c60952(&local_78,uVar8 & 0xffffffff);
        }
        uVar10 = puVar15[1];
        uVar4 = puVar15[2];
        uVar5 = puVar15[3];
        puVar2 = (undefined4 *)(local_78 + lVar13 * 0x10);
        *puVar2 = *puVar15;
        puVar2[1] = uVar10;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar12 || iStack_84 != iVar14))
    ;
    if ((longlong)(int)uStack_70 != 0) {
      lVar13 = (longlong)(int)uStack_70 << 4;
      lVar12 = local_78;
      do {
        FUN_147555f7c(param_1,lVar12);
        lVar12 = lVar12 + 0x10;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x110);
  local_78 = 0;
  uStack_70 = 0;
  lVar12 = param_1 + 0x120;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar12;
  if (*(int *)(param_1 + 0x138) == 0) {
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar14 = *(int *)(param_1 + 0x138);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar14) || (uStack_60 != lVar12)) {
    do {
      puVar15 = (undefined4 *)((longlong)iStack_84 * 0x28 + *local_a0);
      uVar10 = FUN_1447addd0(puVar15,0x10);
      iVar11 = FUN_140f5cb3a(param_2,uVar10,puVar15);
      uVar8 = uStack_70;
      if (iVar11 == -1) {
        lVar13 = (longlong)(int)uStack_70;
        uVar9 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar9);
        if (uStack_70._4_4_ < uVar9) {
          FUN_147567c22(&local_78,uVar8 & 0xffffffff);
        }
        uVar10 = *puVar15;
        uVar4 = puVar15[1];
        uVar5 = puVar15[2];
        uVar6 = puVar15[3];
        uVar7 = *(undefined8 *)(puVar15 + 6);
        puVar3 = (undefined8 *)(local_78 + 0x10 + lVar13 * 0x20);
        *puVar3 = *(undefined8 *)(puVar15 + 4);
        puVar3[1] = uVar7;
        puVar15 = (undefined4 *)(local_78 + lVar13 * 0x20);
        *puVar15 = uVar10;
        puVar15[1] = uVar4;
        puVar15[2] = uVar5;
        puVar15[3] = uVar6;
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar12 || iStack_84 != iVar14))
    ;
    if ((longlong)(int)uStack_70 != 0) {
      lVar13 = (longlong)(int)uStack_70 << 5;
      lVar12 = local_78;
      do {
        FUN_147567ca8(plVar1,lVar12);
        lVar12 = lVar12 + 0x20;
        lVar13 = lVar13 + -0x20;
      } while (lVar13 != 0);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475563be FUN_1475563be body=45 status=ok
// SIG undefined FUN_1475563be(void)

void FUN_1475563be(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_1432dc9cc(*(longlong *)(param_1 + 8) + 0x38);
    if (lVar1 != 0) {
      FUN_14756d424(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1475563ec FUN_1475563ec body=176 status=ok
// SIG undefined FUN_1475563ec(void)

longlong FUN_1475563ec(longlong *param_1,int param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [44];
  ushort local_1c [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] != 0) {
    lVar3 = 0;
    if (((*param_1 == 0) || (uVar1 = *(ushort *)(param_1[1] + 0x30), uVar1 == 0xffff)) ||
       (lVar3 = (ulonglong)uVar1 * 0x128 + *(longlong *)(*(longlong *)(*param_1 + 0x548) + 8),
       DAT_14cab2cd4 == param_2)) goto LAB_14755647f;
    plVar2 = *(longlong **)(lVar3 + 0xf0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x58))(plVar2,local_1c);
      if (local_1c[0] != 0xffff) {
        lVar3 = (ulonglong)local_1c[0] * 0x128 + *(longlong *)(*(longlong *)(*param_1 + 0x548) + 8);
        goto LAB_14755647f;
      }
    }
  }
  lVar3 = 0;
LAB_14755647f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475564b0 FUN_1475564b0 body=61 status=ok
// SIG undefined FUN_1475564b0(void)

void FUN_1475564b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = 1000;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfc | 2;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xfffffff8 | 3;
  return;
}



// FUNCTION 1475564ee FUN_1475564ee body=71 status=ok
// SIG undefined FUN_1475564ee(void)

int FUN_1475564ee(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_147568072((longlong *)(param_1 + 0x20),iVar1);
  }
  FUN_14756810a((longlong)iVar1 * 0x88 + *(longlong *)(param_1 + 0x20),param_2);
  return iVar1;
}



// FUNCTION 147556536 FUN_147556536 body=230 status=ok
// SIG undefined FUN_147556536(void)

void FUN_147556536(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  
  *param_1 = 2;
  param_1[1] = 2;
  param_1[2] = 0xffffffff;
  param_1[3] = param_2;
  uVar1 = (ulonglong)*(int *)(param_2 + 0x18);
  lVar6 = param_2;
  if ((uVar1 != 0xffffffffffffffff) &&
     (*(int *)(*(longlong *)(param_2 + 0x20) + 4 + uVar1 * 0xc) != 0)) {
    piVar7 = (int *)(*(longlong *)(param_2 + 0x20) + uVar1 * 0xc);
    lVar4 = *(longlong *)(param_2 + 0x30);
    do {
      uVar5 = *(ulonglong *)(lVar4 + (longlong)*piVar7 * 0x20);
      if ((char)uVar5 != '\x02') {
        if ((char)uVar5 == '\0') {
          uVar1 = 1;
          uVar3 = 0;
        }
        else {
          uVar1 = uVar5;
          uVar3 = uVar5;
          if (((uint)uVar5 & 0xff) == 1) {
            uVar1 = 0;
            uVar3 = 0;
          }
        }
        goto LAB_1475565cd;
      }
      param_1[2] = uVar1 & 0xffffffff;
      lVar4 = *(longlong *)(param_2 + 0x30);
      lVar2 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + uVar1 * 0xc) * 0x20;
      lVar6 = lVar4 + lVar2;
      uVar1 = (ulonglong)*(int *)(lVar4 + 0x18 + lVar2);
    } while ((uVar1 != 0xffffffffffffffff) &&
            (piVar7 = (int *)(*(longlong *)(param_2 + 0x20) + uVar1 * 0xc), piVar7[1] != 0));
  }
  uVar5 = *(ulonglong *)(lVar6 + 8);
  uVar1 = uVar5;
  uVar3 = uVar5;
LAB_1475565cd:
  *param_1 = 2;
  param_1[1] = uVar1 & 0xff | uVar5 & 0xffffffff00000000 | (ulonglong)((uint)uVar3 & 0xffffff00);
  return;
}



// FUNCTION 14755661c FUN_14755661c body=53 status=ok
// SIG undefined FUN_14755661c(void)

void FUN_14755661c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = (longlong)*(int *)(param_3 + 0x18);
  if (lVar1 == -1) {
    lVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 4 + lVar1 * 0xc);
    lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar1 * 0xc) * 0x20 +
            *(longlong *)(param_1 + 0x30);
  }
  *param_2 = lVar1;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return;
}



// FUNCTION 147556652 FUN_147556652 body=583 status=ok
// SIG undefined FUN_147556652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147556652(longlong param_1,ulonglong *param_2,longlong *param_3,int param_4,
                  ulonglong param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 in_XMM0 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_98 [40];
  ulonglong *local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  auVar3 = _DAT_149931e80;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar11 = (int)param_5;
  lVar4 = param_1;
  if ((param_5 & 0xffffffff) != 0xffffffff) {
    lVar4 = ((longlong)param_5 >> 0x20) * 0x20 +
            (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 0xc) * 0x20 +
            *(longlong *)(param_1 + 0x30);
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  uVar14 = (ulonglong)(int)uVar1;
  if (uVar14 == 0xffffffffffffffff) {
    FUN_14755689a(param_1 + 0x20,&local_68);
    uVar14 = local_68 & 0xffffffff;
    lVar4 = param_1;
    if (iVar11 != -1) {
      lVar4 = ((longlong)param_5 >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar11 * 0xc) * 0x20 +
              *(longlong *)(param_1 + 0x30);
    }
    *(undefined4 *)(lVar4 + 0x18) = (undefined4)local_68;
  }
  else {
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar14 * 0xc);
    if (param_4 < iVar11) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + uVar14 * 0xc);
      lVar4 = *(longlong *)(param_1 + 0x30);
      auVar15 = pmovsxbq(in_XMM0,0x100);
      lVar7 = (longlong)param_4;
      do {
        lVar6 = lVar7 + 1;
        lVar7 = (longlong)*(int *)((longlong)iVar2 * 0x20 + lVar4 + 0x18 + lVar7 * 0x20);
        if (lVar7 != -1) {
          lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar7 * 0xc);
          if (lVar9 != 0) {
            uVar8 = lVar6 << 0x20 | (ulonglong)uVar1;
            uVar10 = lVar9 + 0x7ffffffffffffff;
            uVar13 = uVar10 & 0x7ffffffffffffff;
            auVar16._8_4_ = (int)uVar13;
            auVar16._0_8_ = uVar13;
            auVar16._12_4_ = (int)(uVar13 >> 0x20);
            puVar12 = (ulonglong *)
                      ((longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar7 * 0xc) * 0x20 +
                       *(longlong *)(param_1 + 0x30) + 0x30);
            uVar5 = 0;
            do {
              if ((bool)(~(SUB168(auVar16 | auVar3,0) < (longlong)(uVar5 ^ auVar3._0_8_)) & 1)) {
                puVar12[-4] = uVar8;
              }
              auVar17._8_4_ = (int)uVar5;
              auVar17._0_8_ = uVar5;
              auVar17._12_4_ = (int)(uVar5 >> 0x20);
              if ((longlong)((auVar17._8_8_ | auVar15._8_8_) ^ auVar3._8_8_) <=
                  SUB168(auVar16 | auVar3,8)) {
                *puVar12 = uVar8;
              }
              uVar5 = uVar5 + 2;
              puVar12 = puVar12 + 8;
            } while ((uVar13 - ((uint)uVar10 & 1)) + 2 != uVar5);
          }
        }
        lVar7 = lVar6;
        local_70 = param_2;
      } while (lVar6 != iVar11);
    }
  }
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_5;
  local_50 = 0xffffffffffffffff;
  (**(code **)(*param_3 + 8))(param_3,&local_68);
  FUN_1475568fa(param_1 + 0x20,uVar14 & 0xffffffff,param_4,&local_68);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14755689a FUN_14755689a body=95 status=ok
// SIG undefined FUN_14755689a(void)

int * FUN_14755689a(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *param_2 = iVar1;
  lVar3 = param_1[3];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147560838(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(int *)(lVar2 + (longlong)iVar1 * 0xc) = (int)lVar3;
  *(undefined8 *)(lVar2 + 4 + (longlong)iVar1 * 0xc) = 0x100000000;
  FUN_147568176(param_1 + 2,(int)param_1[3] + 1);
  return param_2;
}



// FUNCTION 1475568fa FUN_1475568fa body=217 status=ok
// SIG undefined FUN_1475568fa(void)

void FUN_1475568fa(longlong *param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  piVar1 = (int *)(*param_1 + (longlong)param_2 * 0xc);
  iVar6 = piVar1[1];
  iVar9 = piVar1[2];
  if (iVar9 <= iVar6) {
    FUN_147568282(param_1);
    iVar6 = piVar1[1];
    iVar9 = piVar1[2];
  }
  iVar10 = iVar9 + -1;
  if (param_3 < iVar9 + -1) {
    iVar10 = param_3;
  }
  iVar9 = 0;
  if (0 < iVar10) {
    iVar9 = iVar10;
  }
  if (iVar6 - iVar9 != 0 && iVar9 <= iVar6) {
    lVar7 = ((longlong)*piVar1 + (longlong)iVar9) * 0x20;
    _Src = (void *)(param_1[2] + lVar7);
    memmove((void *)(param_1[2] + lVar7 + 0x20),_Src,(longlong)(iVar6 - iVar9) << 5);
    FUN_140a9c5ba(_Src,1);
    iVar6 = piVar1[1];
  }
  piVar1[1] = iVar6 + 1;
  lVar7 = param_1[2];
  lVar8 = ((longlong)*piVar1 + (longlong)iVar9) * 0x20;
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[3];
  puVar2 = (undefined8 *)(lVar7 + 0x10 + lVar8);
  *puVar2 = param_4[2];
  puVar2[1] = uVar5;
  puVar2 = (undefined8 *)(lVar7 + lVar8);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  return;
}



// FUNCTION 1475569d4 FUN_1475569d4 body=1842 status=ok
// SIG undefined FUN_1475569d4(void)

void FUN_1475569d4(uint *param_1,undefined8 **param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 **ppuVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  int iVar15;
  ulonglong unaff_RBP;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 **local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar15 = (int)param_4;
  uVar6 = (ulonglong)param_4 & 0xffffffff;
  puVar3 = param_1;
  if (uVar6 != 0xffffffff) {
    puVar3 = (uint *)(((longlong)param_4 >> 0x20) * 0x20 +
                     (longlong)*(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar15 * 0xc) * 0x20
                     + *(longlong *)(param_1 + 0xc));
  }
  local_68._0_4_ = *puVar3;
  local_68._4_4_ = puVar3[1];
  uStack_60 = puVar3[2];
  uStack_5c = puVar3[3];
  local_58 = puVar3[4];
  uStack_54 = puVar3[5];
  uStack_50 = puVar3[6];
  uStack_4c = puVar3[7];
  cVar2 = FUN_14055ad78(&local_68,param_2);
  if ((cVar2 == '\0') ||
     ((param_5 != (undefined8 *)0x0 &&
      (local_98 = param_4, cVar2 = (*(code *)*param_5)(param_5[1]), cVar2 == '\0'))))
  goto LAB_147556a7d;
  cVar2 = FUN_147557108(param_2,&local_68);
  if (cVar2 != '\0') {
    if (iVar15 != -1) {
      param_1 = (uint *)(((longlong)param_4 >> 0x20) * 0x20 +
                        (longlong)*(int *)(*(longlong *)(param_1 + 8) + (longlong)iVar15 * 0xc) *
                        0x20 + *(longlong *)(param_1 + 0xc));
    }
    (**(code **)(*param_3 + 8))(param_3,param_1);
    goto LAB_147556a7d;
  }
  lVar9 = (longlong)(int)uStack_50;
  if (lVar9 == -1) {
    if (((((char)local_68 == '\x02') || ((char)uStack_60 == '\x02')) ||
        (((int)local_68._4_4_ <= (int)uStack_5c &&
         ((local_68._4_4_ != uStack_5c || ((char)uStack_60 != '\0' && (char)local_68 != '\0'))))))
       && (((cVar2 = *(char *)param_2, cVar2 == '\x02' || (*(char *)(param_2 + 1) == '\x02')) ||
           ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)param_2 + 0xc) &&
            ((*(int *)((longlong)param_2 + 4) != *(int *)((longlong)param_2 + 0xc) ||
             (*(char *)(param_2 + 1) != '\0' && cVar2 != '\0')))))))) {
      ppuVar14 = param_2 + 1;
      ppuVar10 = ppuVar14;
      if (((char)uStack_60 != '\x02') &&
         ((((ppuVar10 = (undefined8 **)&uStack_60, *(char *)ppuVar14 != '\x02' &&
            (*(int *)((longlong)param_2 + 0xc) <= (int)uStack_5c)) &&
           (ppuVar10 = ppuVar14, (int)uStack_5c <= *(int *)((longlong)param_2 + 0xc))) &&
          ((char)uStack_60 == '\0')))) {
        ppuVar10 = (undefined8 **)&uStack_60;
      }
      ppuVar14 = (undefined8 **)&local_68;
      if ((char)local_68 == '\x02') {
        ppuVar14 = param_2;
      }
      if ((((char)local_68 != '\x02' && cVar2 != '\x02') &&
          (ppuVar14 = (undefined8 **)&local_68,
          (int)local_68._4_4_ <= *(int *)((longlong)param_2 + 4))) &&
         ((ppuVar14 = param_2, *(int *)((longlong)param_2 + 4) <= (int)local_68._4_4_ &&
          ((char)local_68 == '\0')))) {
        ppuVar14 = (undefined8 **)&local_68;
      }
      local_78 = *ppuVar14;
      local_70 = *ppuVar10;
    }
    else {
      local_78 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
    }
    ppuVar14 = &local_78;
    iVar15 = 0;
  }
  else {
    puVar4 = (undefined8 *)CONCAT44(local_68._4_4_,(uint)local_68);
    lVar12 = *(longlong *)(param_1 + 8);
    iVar15 = *(int *)(lVar12 + 4 + lVar9 * 0xc);
    if (0 < iVar15) {
      local_d8 = param_2 + 1;
      iVar18 = 0;
      do {
        puVar3 = param_1;
        if (uStack_50 != 0xffffffff) {
          puVar3 = (uint *)((longlong)iVar18 * 0x20 +
                           (longlong)*(int *)(lVar12 + lVar9 * 0xc) * 0x20 +
                           *(longlong *)(param_1 + 0xc));
        }
        uVar8 = puVar3[1];
        local_98 = *(undefined8 **)puVar3;
        uStack_90 = puVar3[2];
        uStack_8c = puVar3[3];
        local_88 = puVar3[4];
        uStack_84 = puVar3[5];
        uStack_80 = puVar3[6];
        uStack_7c = puVar3[7];
        bVar7 = (byte)*puVar3;
        if (bVar7 != 2) {
          if (bVar7 == 0) {
            bVar7 = 1;
          }
          else if ((*puVar3 & 0xff) == 1) {
            bVar7 = 0;
          }
          else {
            uVar6 = (ulonglong)local_98 >> 8;
          }
          local_e0 = puVar4;
          local_d0 = (undefined8 *)
                     ((ulonglong)(uint)((int)uVar6 << 8) + (ulonglong)bVar7 |
                     (ulonglong)local_98 & 0xffffffff00000000);
          cVar2 = (char)puVar4;
          uVar16 = (uint)((ulonglong)puVar4 >> 0x20);
          if (((bVar7 == 2 || cVar2 == '\x02') ||
              (((int)uVar16 <= (int)uVar8 && ((uVar16 != uVar8 || (bVar7 != 0 && cVar2 != '\0'))))))
             && ((cVar11 = *(char *)param_2, cVar11 == '\x02' ||
                 ((*(char *)local_d8 == '\x02' ||
                  ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)param_2 + 0xc) &&
                   ((*(int *)((longlong)param_2 + 4) != *(int *)((longlong)param_2 + 0xc) ||
                    (*(char *)local_d8 != '\0' && cVar11 != '\0')))))))))) {
            ppuVar14 = local_d8;
            if ((((bVar7 != 2) && (ppuVar14 = &local_d0, *(char *)local_d8 != '\x02')) &&
                (*(int *)((longlong)param_2 + 0xc) <= (int)uVar8)) &&
               ((ppuVar14 = local_d8, (int)uVar8 <= *(int *)((longlong)param_2 + 0xc) &&
                (bVar7 == 0)))) {
              ppuVar14 = &local_d0;
            }
            ppuVar10 = &local_e0;
            if (cVar2 == '\x02') {
              ppuVar10 = param_2;
            }
            if (cVar2 != '\x02' && cVar11 != '\x02') {
              ppuVar10 = &local_e0;
              if ((((int)uVar16 <= *(int *)((longlong)param_2 + 4)) &&
                  (ppuVar10 = param_2, *(int *)((longlong)param_2 + 4) <= (int)uVar16)) &&
                 (cVar2 == '\0')) {
                ppuVar10 = &local_e0;
              }
            }
            puVar17 = *ppuVar10;
            uVar13 = (ulonglong)puVar17 >> 0x20;
            puVar4 = *ppuVar14;
            if ((char)puVar17 == '\x02') {
              puVar5 = (undefined8 *)0x2;
            }
            else {
              cVar2 = (char)puVar4;
              puVar5 = puVar17;
              if (cVar2 != '\x02') goto LAB_147556d19;
            }
          }
          else {
            cVar2 = '\0';
            puVar4 = (undefined8 *)0x0;
            uVar13 = 0;
            puVar5 = (undefined8 *)0x0;
LAB_147556d19:
            iVar15 = (int)((ulonglong)puVar4 >> 0x20);
            if ((iVar15 < (int)uVar13) ||
               ((puVar17 = puVar5, (int)uVar13 == iVar15 &&
                ((cVar2 == '\0' || ((char)puVar5 == '\0')))))) goto LAB_147556b7d;
          }
          local_a8 = (ulonglong)puVar5 & 0xff |
                     (ulonglong)((uint)puVar17 & 0xffffff00) | uVar13 << 0x20;
          local_e8 = param_4;
          local_a0 = puVar4;
          FUN_147556652(param_1,&local_a8,param_3,iVar18);
          iVar18 = iVar18 + 1;
        }
LAB_147556b7d:
        cVar2 = FUN_14055ad78(&local_98,param_2);
        if (cVar2 != '\0') {
          local_b8 = *(undefined4 *)param_2;
          uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
          uStack_b0 = *(undefined4 *)(param_2 + 1);
          uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
          local_e8 = param_5;
          FUN_1475569d4(param_1,&local_b8,param_3,CONCAT44(iVar18,uStack_50));
        }
        bVar7 = (byte)uStack_90;
        if (bVar7 == 0) {
          bVar7 = 1;
        }
        else if ((uStack_90 & 0xff) == 1) {
          bVar7 = 0;
        }
        else {
          unaff_RBP = CONCAT44(uStack_8c,uStack_90) >> 8;
        }
        puVar4 = (undefined8 *)
                 ((ulonglong)bVar7 | (ulonglong)(uint)((int)unaff_RBP << 8) |
                 (ulonglong)uStack_8c << 0x20);
        iVar18 = iVar18 + 1;
        lVar12 = *(longlong *)(param_1 + 8);
        lVar9 = (longlong)(int)uStack_50;
        iVar15 = *(int *)(lVar12 + 4 + lVar9 * 0xc);
      } while (iVar18 < iVar15);
    }
    cVar2 = (char)puVar4;
    if (cVar2 == '\x02') goto LAB_147556a7d;
    local_98 = puVar4;
    local_e0 = (undefined8 *)CONCAT44(uStack_5c,uStack_60);
    cVar11 = (char)uStack_60;
    uVar8 = (uint)((ulonglong)puVar4 >> 0x20);
    if (((cVar11 == '\x02' || cVar2 == '\x02') ||
        (((int)uVar8 <= (int)uStack_5c &&
         ((uVar8 != uStack_5c || (cVar11 != '\0' && cVar2 != '\0')))))) &&
       ((cVar1 = *(char *)param_2, cVar1 == '\x02' ||
        ((*(char *)(param_2 + 1) == '\x02' ||
         ((*(int *)((longlong)param_2 + 4) <= *(int *)((longlong)param_2 + 0xc) &&
          ((*(int *)((longlong)param_2 + 4) != *(int *)((longlong)param_2 + 0xc) ||
           (*(char *)(param_2 + 1) != '\0' && cVar1 != '\0')))))))))) {
      ppuVar14 = param_2 + 1;
      ppuVar10 = ppuVar14;
      if ((((cVar11 != '\x02') && (ppuVar10 = &local_e0, *(char *)ppuVar14 != '\x02')) &&
          (*(int *)((longlong)param_2 + 0xc) <= (int)uStack_5c)) &&
         ((ppuVar10 = ppuVar14, (int)uStack_5c <= *(int *)((longlong)param_2 + 0xc) &&
          (cVar11 == '\0')))) {
        ppuVar10 = &local_e0;
      }
      ppuVar14 = &local_98;
      if (cVar2 == '\x02') {
        ppuVar14 = param_2;
      }
      if (((cVar2 != '\x02' && cVar1 != '\x02') &&
          (ppuVar14 = &local_98, (int)uVar8 <= *(int *)((longlong)param_2 + 4))) &&
         ((ppuVar14 = param_2, *(int *)((longlong)param_2 + 4) <= (int)uVar8 && (cVar2 == '\0')))) {
        ppuVar14 = &local_98;
      }
      puVar4 = *ppuVar14;
      uVar6 = (ulonglong)puVar4 >> 0x20;
      puVar5 = *ppuVar10;
      uVar13 = (ulonglong)((uint)puVar4 & 0xffffff00);
      if ((char)puVar4 == '\x02') {
        puVar4 = (undefined8 *)0x2;
      }
      else {
        cVar2 = (char)puVar5;
        if (cVar2 != '\x02') goto LAB_147556ee0;
      }
    }
    else {
      cVar2 = '\0';
      uVar13 = 0;
      uVar6 = 0;
      puVar4 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)0x0;
LAB_147556ee0:
      iVar18 = (int)((ulonglong)puVar5 >> 0x20);
      if ((iVar18 < (int)uVar6) ||
         (((int)uVar6 == iVar18 && ((cVar2 == '\0' || ((char)puVar4 == '\0'))))))
      goto LAB_147556a7d;
    }
    local_c8 = (undefined8 *)(((ulonglong)puVar4 & 0xff) + uVar13 + (uVar6 << 0x20));
    ppuVar14 = &local_c8;
    local_c0 = puVar5;
  }
  local_e8 = param_4;
  FUN_147556652(param_1,ppuVar14,param_3,iVar15);
LAB_147556a7d:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147557108 FUN_147557108 body=177 status=ok
// SIG undefined FUN_147557108(void)

undefined8 FUN_147557108(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  
  cVar1 = *param_1;
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
  if (cVar1 == '\x02') {
LAB_14755710e:
    cVar1 = param_1[8];
    if (cVar1 == '\x02') {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    pcVar3 = param_2 + 8;
    cVar8 = *pcVar3;
    if (cVar8 == '\x02') {
      cVar8 = '\x02';
LAB_14755712a:
      if (cVar8 != cVar1) goto LAB_147557156;
      iVar6 = *(int *)(param_1 + 0xc);
      pcVar4 = pcVar3;
    }
    else {
      pcVar4 = param_1 + 8;
      iVar6 = *(int *)(param_1 + 0xc);
      if (iVar6 <= *(int *)(param_2 + 0xc)) {
        if ((*(int *)(param_2 + 0xc) <= iVar6) && (cVar1 == '\x01')) {
          pcVar3 = pcVar4;
          cVar8 = '\x01';
        }
        goto LAB_14755712a;
      }
    }
    uVar5 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),*(int *)(pcVar4 + 4) == iVar6);
  }
  else {
    cVar8 = *param_2;
    pcVar3 = param_2;
    cVar7 = '\x02';
    if (cVar8 != '\x02') {
      if (*(int *)(param_1 + 4) < *(int *)(param_2 + 4)) goto LAB_14755710e;
      cVar7 = cVar8;
      if ((*(int *)(param_1 + 4) <= *(int *)(param_2 + 4)) && (cVar1 == '\x01')) {
        pcVar3 = param_1;
        cVar7 = '\x01';
      }
    }
    if ((cVar7 == cVar1) &&
       (uVar2 = (ulonglong)*(uint *)(pcVar3 + 4), *(uint *)(pcVar3 + 4) == *(uint *)(param_1 + 4)))
    goto LAB_14755710e;
LAB_147557156:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1475571ba FUN_1475571ba body=37 status=ok
// SIG undefined FUN_1475571ba(void)

void FUN_1475571ba(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[0xc] = 1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = 0x8000000000000000;
  return;
}



// FUNCTION 1475571e0 FUN_1475571e0 body=1035 status=ok
// SIG undefined FUN_1475571e0(void)

float * FUN_1475571e0(float *param_1,float *param_2,float *param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_78 [32];
  float local_58;
  ulonglong local_54;
  float local_4c;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[6] != 0.0 || param_3[6] != 0.0) {
    if (param_1[6] == 0.0) {
      FUN_144a3f8b4(param_2,param_3);
      if (((param_1[1] != 0.0) || (1e-08 < ABS(param_1[2]))) || (1e-08 < ABS(*param_1 + -1.0))) {
        fVar4 = param_2[6];
        lVar5 = (longlong)(int)fVar4;
        lVar6 = *(longlong *)(param_2 + 4);
        dVar11 = *(double *)(lVar6 + (longlong)((int)fVar4 + -1) * 0x18);
        if ((uint)((ulonglong)dVar11 >> 0x33) < 0x1fff) {
          puVar1 = (ulonglong *)(lVar6 + (longlong)((int)fVar4 + -1) * 0x18);
          if (3.4028234663852886e+38 <= dVar11) {
            dVar11 = 3.4028234663852886e+38;
          }
          if (dVar11 <= -3.4028234663852886e+38) {
            dVar11 = -3.4028234663852886e+38;
          }
          local_58 = (float)dVar11;
          local_54 = puVar1[1];
          FUN_14755aae5(&local_4c,param_1);
          uVar7 = -(ulonglong)(1e-08 < ABS((double)local_4c));
          *puVar1 = (ulonglong)(~(uint)(uVar7 >> 0x20) & 0xfff90000) << 0x20 |
                    (ulonglong)(double)local_4c & uVar7;
          puVar1[1] = local_48;
          puVar1[2] = 0;
        }
        else {
          param_2[6] = (float)((int)fVar4 + 1U);
          if ((uint)param_2[7] < (int)fVar4 + 1U) {
            FUN_140407554(param_2 + 4,fVar4);
            lVar6 = *(longlong *)(param_2 + 4);
          }
          uVar7 = -(ulonglong)(1e-08 < ABS((double)*param_1));
          *(ulonglong *)(lVar6 + lVar5 * 0x18) =
               (ulonglong)(~(uint)(uVar7 >> 0x20) & 0xfff90000) << 0x20 |
               (ulonglong)(double)*param_1 & uVar7;
          *(undefined8 *)(lVar6 + 8 + lVar5 * 0x18) = *(undefined8 *)(param_1 + 1);
          *(undefined8 *)(lVar6 + 0x10 + lVar5 * 0x18) = 0;
        }
      }
      if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (param_3[6] == 0.0) {
      param_2[0] = 1.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      FUN_14755aae5(param_2,param_1,param_3);
      FUN_1447bdcfc(param_2 + 4,param_1 + 4);
      goto LAB_14755729e;
    }
    FUN_144a3f8b4(param_2,param_3);
    if (param_1[1] == 0.0) {
      fVar4 = *param_1;
      if ((1e-08 < ABS(param_1[2])) || (1e-08 < ABS(fVar4 + -1.0))) goto LAB_1475572e8;
    }
    else {
      fVar4 = *param_1;
LAB_1475572e8:
      uVar7 = -(ulonglong)(1e-08 < ABS((double)fVar4));
      uVar2 = *(undefined8 *)(param_1 + 1);
      fVar8 = param_2[6];
      lVar6 = (longlong)(int)fVar8;
      param_2[6] = (float)((int)fVar8 + 1U);
      if ((uint)param_2[7] < (int)fVar8 + 1U) {
        FUN_140407554(param_2 + 4,fVar8);
      }
      lVar5 = *(longlong *)(param_2 + 4);
      *(ulonglong *)(lVar5 + lVar6 * 0x18) =
           (ulonglong)(~(uint)(uVar7 >> 0x20) & 0xfff90000) << 0x20 |
           (ulonglong)(double)fVar4 & uVar7;
      *(undefined8 *)(lVar5 + 8 + lVar6 * 0x18) = uVar2;
      *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x18) = 0;
    }
    FUN_140861bbc(param_2 + 4,param_1 + 4);
    goto LAB_14755729e;
  }
  fVar4 = *param_1;
  fVar8 = 1.0;
  if ((fVar4 != 1.0) || (NAN(fVar4))) {
    iVar3 = _finite((double)fVar4);
    fVar8 = *param_1;
    if (iVar3 == 0) goto LAB_147557234;
    dVar13 = ((double)param_3[2] + (double)(int)param_3[1]) * (double)fVar8;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar13;
    auVar14 = roundpd(auVar14,auVar14,1);
    dVar11 = auVar14._0_8_;
    dVar13 = dVar13 - dVar11;
    if (2147483647.0 <= dVar11) {
      dVar11 = 2147483647.0;
    }
    if (dVar11 <= -2147483648.0) {
      dVar11 = -2147483648.0;
    }
    fVar4 = (float)(int)dVar11;
    fVar10 = (float)dVar13;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar10 = fVar10 + 0.5 + -0.5;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    auVar14 = ZEXT416((uint)fVar10);
    if (fVar10 <= 0.0) {
      auVar14 = ZEXT816(0) << 0x20;
    }
  }
  else {
LAB_147557234:
    fVar4 = param_3[1];
    auVar14 = ZEXT416((uint)param_3[2]);
  }
  auVar12._4_12_ = auVar14._4_12_;
  auVar12._0_4_ = auVar14._0_4_ + param_1[2];
  auVar14 = roundss(ZEXT416(0),auVar12,9);
  fVar10 = param_1[1];
  fVar9 = (auVar12._0_4_ - auVar14._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar9) {
    fVar9 = 0.99999994;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  *param_2 = fVar8 * *param_3;
  param_2[1] = (float)((int)fVar4 + (int)fVar10 +
                      ((int)ROUND(auVar12._0_4_ + auVar12._0_4_ + -0.5) >> 1));
  param_2[2] = fVar9;
  *(undefined1 (*) [16])(param_2 + 4) = ZEXT416(0);
LAB_14755729e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 1475575ec FUN_1475575ec body=7 status=ok
// SIG undefined FUN_1475575ec(void)

undefined8 * FUN_1475575ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 1475575f4 FUN_1475575f4 body=125 status=ok
// SIG undefined FUN_1475575f4(void)

void FUN_1475575f4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce();
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
LAB_147557653:
      FUN_147557672(lVar2 + 0x430,param_2,param_3);
      return;
    }
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8
             );
    if (lVar1 != 0) {
      FUN_14479d2ce(lVar1 + 0x1c);
      if (*(char *)(lVar1 + 0x30) == '\x01') goto LAB_147557653;
    }
  }
  return;
}



// FUNCTION 147557672 FUN_147557672 body=641 status=ok
// SIG undefined FUN_147557672(void)

void FUN_147557672(longlong param_1,undefined8 *****param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined7 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *****pppppuVar14;
  bool bVar15;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined8 ****local_70;
  longlong *local_68;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar13 = *(longlong **)(param_1 + 0x58);
  uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
LAB_1475576a6:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar13[1];
    do {
      if (iVar7 == 0) goto LAB_1475576a6;
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar15 = iVar7 == iVar5;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar15);
    ppppuVar9 = *(undefined8 *****)(param_1 + 0x50);
    if (ppppuVar9 != (undefined8 ****)0x0) goto LAB_14755776a;
    uVar11 = 0;
    bVar4 = false;
    plVar8 = plVar13;
  }
  FUN_14756c3a4(param_1,&local_70,DAT_14cab3264);
  plVar13 = local_68;
  ppppuVar9 = local_70;
  local_70 = (undefined8 ****)0x0;
  plVar12 = plVar8;
  if (local_68 == plVar8) {
LAB_1475576db:
    plVar8 = local_68;
    plVar13 = plVar12;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_68 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    local_68 = (longlong *)0x0;
    if (!bVar4) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plVar12 = plVar13;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_1475576db;
    }
  }
  *(undefined8 *****)(param_1 + 0x50) = ppppuVar9;
  plVar8 = *(longlong **)(param_1 + 0x58);
  if (plVar8 != plVar13) {
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x58);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x58) = plVar13;
  }
LAB_14755776a:
  local_70 = param_2;
  FUN_14755e7ca(ppppuVar9,&local_74);
  local_80 = 0xffffffff;
  local_7c = DAT_14cab3264;
  local_78 = local_74;
  FUN_140274704(param_1);
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  uVar10 = (undefined4)CONCAT71(uVar11,1);
  if (lVar3 != 0) {
    FUN_14479d2ce(lVar3 + 0x1c);
    uVar10 = (undefined4)CONCAT71(uVar11,*(char *)(lVar3 + 0x30) + '\x01');
  }
  cVar6 = FUN_14755e98e(ppppuVar9,local_74,uVar10);
  if (cVar6 == '\0') {
    (**(code **)(*param_3 + 0x10))(param_3,&local_70);
    if ((local_50 & 1) != 0) {
      if ((local_74 == -1) || (((ulonglong)ppppuVar9[0xd][(longlong)local_74 * 7 + 6] & 1) == 0)) {
        (**(code **)(*param_3 + 8))(param_3);
      }
      FUN_14755ea1e(ppppuVar9,local_74,uVar10,&local_70);
    }
    if ((local_50 & 1) != 0) {
      pppppuVar14 = &local_70;
      if ((local_50 & 2) == 0) {
        pppppuVar14 = (undefined8 *****)local_70;
      }
      local_50 = local_50 & 0xfe;
      (*(code *)**pppppuVar14)(pppppuVar14,0);
      if ((local_50 & 2) == 0) {
        FUN_1400020a8(local_70);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar13 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475578f4 FUN_1475578f4 body=49 status=ok
// SIG undefined FUN_1475578f4(void)

void FUN_1475578f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14027385c();
  if (lVar1 == 0) {
    return;
  }
  FUN_1475575f4(lVar1,param_2,param_3);
  return;
}



// FUNCTION 147557926 FUN_147557926 body=150 status=ok
// SIG undefined FUN_147557926(void)

undefined8 * FUN_147557926(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14a463c30;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = &PTR_FUN_14a481250;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_14a47b390;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  _Src = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1475579bc FUN_1475579bc body=182 status=ok
// SIG undefined FUN_1475579bc(void)

undefined8 * FUN_1475579bc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a47b390;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*param_3;
  iVar2 = 0;
  uVar1 = 0;
  if (lVar3 != 0) {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
    iVar2 = local_38;
    uVar1 = local_34;
  }
  param_1[4] = param_2;
  param_1[5] = local_40;
  *(int *)(param_1 + 6) = iVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147557a74 FUN_147557a74 body=169 status=ok
// SIG undefined FUN_147557a74(void)

void FUN_147557a74(int *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_2 + 0x48);
  uVar4 = (ulonglong)uVar1;
  iVar9 = DAT_14cab2cd4;
  if (uVar4 != 0) {
    uVar2 = *(uint *)(param_3 + 0x48);
    uVar7 = (ulonglong)uVar2;
    if ((uVar7 != 0) && (0 < (int)uVar2 && 0 < (int)uVar1)) {
      lVar8 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar8 = param_2;
      }
      lVar5 = *(longlong *)(param_3 + 0x40);
      if (*(longlong *)(param_3 + 0x40) == 0) {
        lVar5 = param_3;
      }
      iVar6 = *(int *)(lVar8 + -4 + uVar4 * 8);
      if ((*(int *)(lVar5 + -4 + uVar7 * 8) == iVar6) && (iVar9 = iVar6, uVar2 != 1 && uVar1 != 1))
      {
        while( true ) {
          uVar7 = uVar7 - 1;
          uVar4 = uVar4 - 1;
          iVar3 = *(int *)(lVar8 + -4 + uVar4 * 8);
          iVar9 = iVar6;
          if (*(int *)(lVar5 + -4 + uVar7 * 8) != iVar3) break;
          iVar9 = iVar3;
          if ((uVar4 < 2) || (iVar6 = iVar3, uVar7 < 2)) break;
        }
      }
    }
  }
  *param_1 = iVar9;
  return;
}



// FUNCTION 147557b1e FUN_147557b1e body=45 status=ok
// SIG undefined FUN_147557b1e(void)

ulonglong FUN_147557b1e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x48);
  if ((int)*(uint *)(param_1 + 0x48) < 1) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1;
    }
    uVar1 = 0;
    do {
      if (*(int *)(lVar3 + 4 + uVar1 * 8) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar2 != uVar1);
  }
  return uVar2;
}



// FUNCTION 147557b4c FUN_147557b4c body=96 status=ok
// SIG undefined FUN_147557b4c(void)

int * FUN_147557b4c(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x10);
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    piVar4 = param_1;
  }
  iVar3 = DAT_14cab2cd4;
  if ((longlong)param_1[0x12] != 0) {
    piVar1 = piVar4 + (longlong)param_1[0x12] * 2;
    do {
      if (piVar4[1] == param_3) break;
      iVar2 = *piVar4;
      if (iVar3 != 0) {
        iVar2 = FUN_144a78877(iVar3,*piVar4);
      }
      iVar3 = iVar2;
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar1);
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 147557bac FUN_147557bac body=106 status=ok
// SIG undefined FUN_147557bac(void)

void FUN_147557bac(ulonglong *param_1,uint param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  
  uVar1 = (uint)param_1[9];
  *(uint *)(param_1 + 9) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0x4c) < uVar1 + 1) {
    FUN_147568af6(param_1,(ulonglong)uVar1);
  }
  puVar2 = (ulonglong *)param_1[8];
  if ((ulonglong *)param_1[8] == (ulonglong *)0x0) {
    puVar2 = param_1;
  }
  memmove(puVar2 + 1,puVar2,(ulonglong)uVar1 << 3);
  puVar2 = (ulonglong *)param_1[8];
  if ((ulonglong *)param_1[8] == (ulonglong *)0x0) {
    puVar2 = param_1;
  }
  *puVar2 = param_3 & 0xffffffff | (ulonglong)param_2 << 0x20;
  return;
}



// FUNCTION 147557c1e FUN_147557c1e body=251 status=ok
// SIG undefined FUN_147557c1e(void)

undefined4 * FUN_147557c1e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
  }
  FUN_144a3f8b4(param_1 + 8,param_2 + 8);
  FUN_144a3f8b4(param_1 + 0x10,param_2 + 0x10);
  puVar7 = (undefined8 *)(param_2 + 0x18);
  puVar8 = (undefined8 *)(param_1 + 0x18);
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_1475765e0(param_1 + 0x2c,param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  lVar6 = *(longlong *)(param_2 + 0x34);
  *(longlong *)(param_1 + 0x34) = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  return param_1;
}



// FUNCTION 147557d1a FUN_147557d1a body=223 status=ok
// SIG undefined FUN_147557d1a(void)

undefined4 * FUN_147557d1a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  FUN_1447bdcfc(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  FUN_1447bdcfc(param_1 + 0x14,param_2 + 0x14);
  puVar6 = (undefined8 *)(param_2 + 0x18);
  puVar7 = (undefined8 *)(param_1 + 0x18);
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1475765f0(param_1 + 0x2c,param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  lVar5 = *(longlong *)(param_2 + 0x34);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x34);
    }
  }
  *(longlong *)(param_1 + 0x34) = lVar5;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  uVar4 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar4;
  return param_1;
}



// FUNCTION 147557dfa FUN_147557dfa body=40 status=ok
// SIG undefined FUN_147557dfa(void)

undefined4 * FUN_147557dfa(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144b1f2a6(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 147557e22 FUN_147557e22 body=998 status=ok
// SIG undefined FUN_147557e22(void)

longlong FUN_147557e22(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  char local_98 [4];
  int local_94;
  float local_90;
  char local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_1432e0ea6(param_2);
  FUN_1400bbfc4(param_1,uVar5);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0x10000ea60;
  FUN_14029898a(param_2,param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  FUN_14073c474(param_2,&local_80);
  *(ulonglong *)(param_1 + 0x7c) = CONCAT44(uStack_7c,local_80);
  *(ulonglong *)(param_1 + 0x84) = CONCAT44(uStack_74,uStack_78);
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0xac) = *(undefined2 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0xae) = *(undefined1 *)(param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0xaf) = *(undefined1 *)(param_2 + 0x104);
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfc | 2;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar4;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  plVar6 = (longlong *)FUN_1400a4c08(param_1);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x2e8))(plVar6);
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar7 + 0x118);
  FUN_140e50294(param_2,&local_80);
  *(undefined4 *)(param_1 + 0x28) = uStack_78;
  *puVar1 = CONCAT44(uStack_7c,local_80);
  FUN_1400a241c(param_1 + 0x30,&local_70);
  FUN_1447bda9c(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140e500ac(param_2,puVar1);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x40) = *puVar1;
  FUN_1447bdcfc(param_1 + 0x50,param_1 + 0x30);
  local_80 = CONCAT31(local_80._1_3_,2);
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = CONCAT31(uStack_74._1_3_,2);
  local_70 = 0;
  if (*(char *)(param_1 + 0x7c) != '\x02') {
    uVar5 = *(undefined8 *)(param_1 + 0x7c);
    local_80 = CONCAT31(local_80._1_3_,(char)uVar5 == '\x01');
    uStack_7c = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if (*(char *)(param_1 + 0x84) != '\x02') {
    uStack_74 = CONCAT31(uStack_74._1_3_,(char)*(ulonglong *)(param_1 + 0x84) == '\x01');
    local_70 = *(ulonglong *)(param_1 + 0x84) >> 0x20;
  }
  FUN_1456c5fde(puVar1,local_98,&local_80);
  lVar7 = 2;
  if (local_98[0] != '\x02') {
    lVar7 = ((ulonglong)((uint)(local_90 != 0.0 || local_98[0] != '\x01') + local_94) << 0x20) + 1;
  }
  local_88 = local_88 << 0x20;
  if (local_8c == '\x02') {
    local_88 = 2;
  }
  *(longlong *)(param_1 + 0x6c) = lVar7;
  *(longlong *)(param_1 + 0x74) = local_88;
  if (0 < *(int *)(param_2 + 0xb0)) {
    FUN_14040645e(puVar1,&local_80,
                  ((int)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20) -
                  *(int *)(param_2 + 0xb0)) +
                  (uint)((char)*(undefined8 *)(param_2 + 0x98) != '\x01'));
    uVar2 = local_80;
    FUN_14040645e(puVar1,&local_80,
                  (uint)((char)*(undefined8 *)(param_2 + 0x98) != '\x01') +
                  (int)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20));
    *(undefined1 *)(param_1 + 0x8c) = 1;
    *(undefined4 *)(param_1 + 0x90) = uVar2;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = local_80;
  }
  if (0 < *(int *)(param_2 + 0xb4)) {
    FUN_14040645e(puVar1,&local_80,
                  (uint)((char)*(undefined8 *)(param_2 + 0xa0) == '\x01') +
                  (int)((ulonglong)*(undefined8 *)(param_2 + 0xa0) >> 0x20));
    uVar2 = local_80;
    FUN_14040645e(puVar1,&local_80,
                  (int)((ulonglong)*(undefined8 *)(param_2 + 0xa0) >> 0x20) +
                  *(int *)(param_2 + 0xb4) + (uint)((char)*(undefined8 *)(param_2 + 0xa0) == '\x01')
                 );
    *(undefined1 *)(param_1 + 0x9c) = 1;
    *(undefined4 *)(param_1 + 0xa0) = uVar2;
    *(undefined1 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = local_80;
  }
  uVar5 = FUN_1402984e6();
  uVar5 = FUN_144a78ede(param_2,uVar5);
  lVar7 = FUN_147571e62(uVar5,param_2,1);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(param_1 + 0xd0) = lVar7;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755820a FUN_14755820a body=152 status=ok
// SIG undefined FUN_14755820a(void)

undefined8 FUN_14755820a(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  ulonglong local_24;
  undefined1 local_1c;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 2;
  local_24 = 0;
  local_1c = 2;
  local_18 = 0;
  if ((char)*param_3 != '\x02') {
    local_28[0] = (char)*param_3 == '\x01';
    local_24 = *param_3 >> 0x20;
  }
  if ((char)param_3[1] != '\x02') {
    local_1c = (char)param_3[1] == '\x01';
    local_18 = param_3[1] >> 0x20;
  }
  FUN_1456c5fde(param_1,param_2,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475582a4 FUN_1475582a4 body=281 status=ok
// SIG undefined FUN_1475582a4(void)

void FUN_1475582a4(longlong param_1,longlong param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  undefined4 **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  local_58 = param_2;
  FUN_147568b66(param_1 + 0x98,&local_48,&local_60);
  piVar2 = (int *)FUN_1475583be(param_1,param_3);
  if (piVar2 == (int *)0x0) {
    local_60 = (undefined4 *)CONCAT44(local_60._4_4_,*param_4);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = param_3;
    local_40 = &local_60;
    FUN_14756903c(param_1 + 0xe8,local_34);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*piVar2 == *param_4) goto LAB_147558300;
    lVar3 = FUN_1475583be(param_1,piVar2);
    local_60 = param_3;
    FUN_147569562(lVar3 + 8);
    *piVar2 = *param_4;
  }
  lVar4 = FUN_1475583be(param_1,param_4);
  lVar3 = *(longlong *)(lVar4 + 8);
  iVar1 = *(int *)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar4 + 0x14) < iVar1 + 1U) {
    FUN_14754335a((longlong *)(lVar4 + 8),iVar1);
    lVar3 = *(longlong *)(lVar4 + 8);
  }
  *(undefined4 *)(lVar3 + (longlong)iVar1 * 4) = *param_3;
LAB_147558300:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475583be FUN_1475583be body=116 status=ok
// SIG undefined FUN_1475583be(void)

uint * FUN_1475583be(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = *param_2;
  if (uVar1 != DAT_14cab2cd4) {
    if (param_1[0x3c] != param_1[0x47]) {
      puVar3 = param_1 + 0x48;
      if (*(uint **)(param_1 + 0x4a) != (uint *)0x0) {
        puVar3 = *(uint **)(param_1 + 0x4a);
      }
      uVar2 = puVar3[param_1[0x4c] - 1 & uVar1];
      if (uVar2 != 0xffffffff) {
        do {
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x3a) + (longlong)(int)uVar2 * 0x28);
          if (*puVar3 == uVar1) goto LAB_1475583db;
          uVar2 = puVar3[8];
        } while (uVar2 != 0xffffffff);
      }
    }
    puVar3 = (uint *)0x0;
LAB_1475583db:
    param_1 = puVar3 + 2;
    if (puVar3 == (uint *)0x0) {
      param_1 = (uint *)0x0;
    }
  }
  return param_1;
}



// FUNCTION 147558432 FUN_147558432 body=228 status=ok
// SIG undefined FUN_147558432(void)

void FUN_147558432(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  longlong local_58 [3];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = &PTR_FUN_14a480e78;
  local_60 = *param_3;
  local_5c = *(undefined1 *)(param_3 + 1);
  local_68 = param_1;
  FUN_144b1f2a6(local_58,param_3 + 2);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_98 = 0;
  FUN_1475569d4(param_1,&local_88,&local_70,0xffffffff);
  local_70 = &PTR_FUN_14a480e78;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_3 + 8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_3 + 2) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147558517 FUN_147558517 body=226 status=ok
// SIG undefined FUN_147558517(void)

void FUN_147558517(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar3;
  fVar6 = (float)((ulonglong)param_3 >> 0x20);
  if (*param_2 != '\x02') {
    fVar4 = fVar6 + *(float *)(param_2 + 8);
    auVar7 = roundss(ZEXT416(0),ZEXT416((uint)fVar4),9);
    fVar5 = (fVar4 - auVar7._0_4_) + 0.5 + -0.5;
    auVar7 = ZEXT416((uint)fVar5);
    if (0.99999994 <= fVar5) {
      auVar7 = ZEXT416(0x3f7fffff);
    }
    if (auVar7._0_4_ <= 0.0) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = auVar7._4_12_;
      auVar7 = auVar1 << 0x20;
    }
    *(int *)((longlong)param_1 + 4) =
         ((int)ROUND(fVar4 + fVar4 + -0.5) >> 1) + *(int *)(param_2 + 4) + (int)param_3;
    *(int *)(param_1 + 1) = auVar7._0_4_;
  }
  if (param_2[0xc] != '\x02') {
    fVar6 = fVar6 + *(float *)(param_2 + 0x14);
    auVar7 = roundss(ZEXT416(0),ZEXT416((uint)fVar6),9);
    fVar4 = (fVar6 - auVar7._0_4_) + 0.5 + -0.5;
    auVar7 = ZEXT416((uint)fVar4);
    if (0.99999994 <= fVar4) {
      auVar7 = ZEXT416(0x3f7fffff);
    }
    if (auVar7._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar7._4_12_;
      auVar7 = auVar2 << 0x20;
    }
    *(int *)(param_1 + 2) =
         ((int)ROUND(fVar6 + fVar6 + -0.5) >> 1) + (int)param_3 + *(int *)(param_2 + 0x10);
    *(int *)((longlong)param_1 + 0x14) = auVar7._0_4_;
  }
  return;
}



// FUNCTION 1475585fa FUN_1475585fa body=1634 status=ok
// SIG undefined FUN_1475585fa(void)

int * FUN_1475585fa(double *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_f8 [40];
  int local_d0 [3];
  float local_c4;
  int local_c0 [2];
  int local_b8 [2];
  int local_b0 [2];
  int local_a8 [3];
  float local_9c;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar11 = *param_1;
  if ((uint)((ulonglong)dVar11 >> 0x33) < 0x1fff) {
    if (3.4028234663852886e+38 <= dVar11) {
      dVar11 = 3.4028234663852886e+38;
    }
    if (dVar11 <= -3.4028234663852886e+38) {
      dVar11 = -3.4028234663852886e+38;
    }
    local_9c = (float)dVar11;
    local_98 = param_1[1];
    FUN_1400a24f6(param_2,param_3);
    goto LAB_147558695;
  }
  iVar4 = (int)param_3;
  fVar10 = SUB84(dVar11,0);
  fVar7 = (float)((ulonglong)param_3 >> 0x20);
  switch((ushort)((ulonglong)dVar11 >> 0x30) & 7) {
  case 0:
    plVar2 = (longlong *)FUN_147585980(param_1);
    if (plVar2 != (longlong *)0x0) {
      fVar7 = fVar7 + *(float *)((longlong)param_1 + 0xc);
      auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar7),9);
      fVar10 = (fVar7 - auVar12._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      (**(code **)(*plVar2 + 0x2b0))
                (plVar2,param_2,
                 CONCAT44(fVar10,((int)ROUND(fVar7 + fVar7 + -0.5) >> 1) +
                                 iVar4 + *(int *)(param_1 + 1)));
      goto LAB_14755898f;
    }
    break;
  case 1:
    iVar4 = *(int *)(param_1 + 1);
    fVar10 = *(float *)((longlong)param_1 + 0xc) + 0.0;
    FUN_14758a972(param_1,&local_9c);
    auVar12 = roundss(ZEXT816(0),ZEXT416((uint)fVar10),9);
    *param_2 = iVar4 + (int)local_9c + ((int)ROUND(fVar10 + fVar10 + -0.5) >> 1);
    fVar10 = (fVar10 - auVar12._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    param_2[1] = (int)fVar10;
    goto LAB_147558695;
  case 2:
    uVar6 = (uint)((ulonglong)dVar11 >> 0x18);
    fVar7 = fVar7 + *(float *)((longlong)param_1 + 0xc);
    auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar7),9);
    fVar9 = (fVar7 - auVar12._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    FUN_144a808d5(param_2,CONCAT44(fVar9,((int)ROUND(fVar7 + fVar7 + -0.5) >> 1) +
                                         iVar4 + *(int *)(param_1 + 1)),
                  CONCAT44(uVar6 & 0x7fffff | (uVar6 & 0x800000) << 8,
                           (uint)fVar10 & 0x7fffff | ((uint)fVar10 & 0x800000) << 8),&DAT_100000001)
    ;
LAB_14755898f:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_f8);
  case 3:
    puVar1 = *(undefined4 **)(param_4 + 8);
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = *(int *)(param_1 + 1);
      fVar9 = *(float *)((longlong)param_1 + 0xc);
      FUN_14758a97a(param_1,&local_9c);
      fVar7 = fVar7 + *(float *)((longlong)param_1 + 0xc);
      auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar7),9);
      fVar10 = (fVar7 - auVar12._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      piVar5 = local_b0;
      FUN_14758b56e(&local_9c,piVar5,
                    CONCAT44(fVar10,((int)ROUND(fVar7 + fVar7 + -0.5) >> 1) +
                                    iVar4 + *(int *)(param_1 + 1)));
    }
    else {
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      iVar3 = *(int *)(param_1 + 1);
      fVar9 = *(float *)((longlong)param_1 + 0xc);
      FUN_14758a97a(param_1,&local_9c);
      fVar7 = fVar7 + *(float *)((longlong)param_1 + 0xc);
      auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar7),9);
      fVar10 = (fVar7 - auVar12._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      piVar5 = local_a8;
      FUN_14758b59c(&local_9c,piVar5,
                    CONCAT44(fVar10,((int)ROUND(fVar7 + fVar7 + -0.5) >> 1) +
                                    iVar4 + *(int *)(param_1 + 1)),*(undefined8 *)(param_4 + 8));
    }
LAB_147558847:
    fVar9 = (float)piVar5[1] - fVar9;
    auVar12 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),1);
    fVar9 = fVar9 - auVar12._0_4_;
    *param_2 = (int)auVar12._0_4_ + (*piVar5 - iVar3);
    goto LAB_147558baf;
  case 4:
    if ((*(byte *)(param_4 + 0x10) & 1) == 0) {
      iVar3 = *(int *)(param_1 + 1);
      fVar9 = *(float *)((longlong)param_1 + 0xc);
      FUN_14758a982(param_1,&local_9c);
      fVar7 = fVar7 + *(float *)((longlong)param_1 + 0xc);
      auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar7),9);
      fVar10 = (fVar7 - auVar12._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      piVar5 = local_b8;
      FUN_14758bc4c(&local_9c,piVar5,
                    CONCAT44(fVar10,((int)ROUND(fVar7 + fVar7 + -0.5) >> 1) +
                                    iVar4 + *(int *)(param_1 + 1)));
      goto LAB_147558847;
    }
    break;
  case 5:
    iVar3 = *(int *)(param_1 + 1);
    fVar9 = *(float *)((longlong)param_1 + 0xc);
    fVar7 = fVar7 + fVar9;
    auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar7),9);
    fVar8 = (fVar7 - auVar12._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    piVar5 = local_c0;
    local_c4 = fVar10;
    FUN_140406dda(&local_c4,piVar5,
                  CONCAT44(fVar8,((int)ROUND(fVar7 + fVar7 + -0.5) >> 1) + iVar4 + iVar3),&local_9c)
    ;
LAB_147558b80:
    fVar9 = (float)piVar5[1] - fVar9;
    auVar12 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),1);
    fVar9 = fVar9 - auVar12._0_4_;
    *param_2 = (int)auVar12._0_4_ + (*piVar5 - iVar3);
LAB_147558baf:
    fVar10 = fVar9 + 0.5 + -0.5;
    if (0.99999994 <= fVar10) {
      fVar10 = 0.99999994;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    param_2[1] = (int)fVar10;
    goto LAB_147558695;
  case 6:
    if ((*(byte *)(param_4 + 0x10) & 1) == 0) {
      iVar3 = *(int *)(param_1 + 1);
      fVar9 = *(float *)((longlong)param_1 + 0xc);
      fVar7 = fVar7 + fVar9;
      auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar7),9);
      fVar8 = (fVar7 - auVar12._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar8) {
        fVar8 = 0.99999994;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      piVar5 = local_d0;
      local_9c = fVar10;
      FUN_140406e82(&local_9c,piVar5,
                    CONCAT44(fVar8,((int)ROUND(fVar7 + fVar7 + -0.5) >> 1) + iVar4 + iVar3));
      goto LAB_147558b80;
    }
  }
  *(undefined8 *)param_2 = param_3;
LAB_147558695:
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147558c62 FUN_147558c62 body=1094 status=ok
// SIG undefined FUN_147558c62(void)

char * FUN_147558c62(ulonglong *param_1,char *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_78 [36];
  uint local_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *param_1;
  if ((uint)(uVar4 >> 0x33) < 0x1fff) {
    dVar10 = (double)FUN_147585474(param_1);
    local_50 = (float)dVar10;
    uStack_4c = (undefined4)param_1[1];
    uStack_48 = (undefined4)(param_1[1] >> 0x20);
    FUN_1475590a9(param_2,param_3);
    if ((param_2[0xc] == '\x02') || (*param_2 == '\x02')) goto LAB_147558ce3;
    uVar1 = *(undefined8 *)(param_2 + 4);
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    if (((int)uVar1 <= (int)uVar11) &&
       (((int)uVar1 != (int)uVar11 ||
        ((float)((ulonglong)uVar1 >> 0x20) <= (float)((ulonglong)uVar11 >> 0x20)))))
    goto LAB_147558ce3;
    *(undefined8 *)(param_2 + 4) = uVar11;
LAB_147558cdf:
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    goto LAB_147558ce3;
  }
  bVar5 = (byte)(uVar4 >> 0x30) & 7;
  if (bVar5 == 1) {
    FUN_14758a972(param_1,&local_50);
    fVar8 = *(float *)((longlong)param_1 + 0xc) + 0.0;
    auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar8),9);
    iVar3 = (int)local_50 + (int)param_1[1] + ((int)ROUND(fVar8 + fVar8 + -0.5) >> 1);
    fVar8 = (fVar8 - auVar12._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    *param_2 = '\x01';
    *(int *)(param_2 + 4) = iVar3;
    *(float *)(param_2 + 8) = fVar8;
    param_2[0xc] = '\x01';
    *(int *)(param_2 + 0x10) = iVar3;
    *(float *)(param_2 + 0x14) = fVar8;
    goto LAB_147558ce3;
  }
  uVar6 = (uint)uVar4;
  if (((ushort)(uVar4 >> 0x30) & 7) == 2) {
    uVar6 = uVar6 & 0x7fffff | (uVar6 & 0x800000) << 8;
    uVar7 = (uint)(uVar4 >> 0x18);
    uVar7 = uVar7 & 0x7fffff | (uVar7 & 0x800000) << 8;
    uVar1 = param_3[1];
    *(undefined8 *)param_2 = *param_3;
    *(undefined8 *)(param_2 + 8) = uVar1;
    *(undefined8 *)(param_2 + 0x10) = param_3[2];
    if (*param_2 != '\x02') {
      fVar8 = *(float *)((longlong)param_1 + 0xc) + *(float *)(param_2 + 8);
      auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar8),9);
      fVar9 = (fVar8 - auVar12._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      FUN_144a808d5(param_2 + 4,
                    CONCAT44(fVar9,((int)ROUND(fVar8 + fVar8 + -0.5) >> 1) +
                                   *(int *)(param_2 + 4) + (int)param_1[1]),CONCAT44(uVar7,uVar6),
                    &DAT_100000001);
    }
    if (param_2[0xc] == '\x02') goto LAB_147558ce3;
    fVar8 = *(float *)((longlong)param_1 + 0xc) + *(float *)(param_2 + 0x14);
    auVar12 = roundss(ZEXT416(0),ZEXT416((uint)fVar8),9);
    fVar9 = (fVar8 - auVar12._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    FUN_144a808d5(&local_50,
                  CONCAT44(fVar9,((int)ROUND(fVar8 + fVar8 + -0.5) >> 1) +
                                 *(int *)(param_2 + 0x10) + (int)param_1[1]),CONCAT44(uVar7,uVar6),
                  &DAT_100000001);
    uVar1 = CONCAT44(uStack_4c,local_50);
    goto LAB_147558cdf;
  }
  FUN_147558517(param_2,param_3,param_1[1]);
  if ((uVar4 & 0x7000000000000) == 0) {
    plVar2 = (longlong *)FUN_147585980(param_1);
    if (plVar2 == (longlong *)0x0) goto LAB_147558ce3;
    (**(code **)(*plVar2 + 0x2b8))(plVar2,&local_50,param_2);
    goto LAB_147558f64;
  }
  switch(bVar5) {
  case 3:
    FUN_14758a97a(param_1,&local_54);
    FUN_14758b5cc(&local_54,&local_50,param_2);
    break;
  case 4:
    FUN_14758a982(param_1,&local_54);
    FUN_14758bc94(&local_54,&local_50,param_2);
    break;
  case 5:
    local_54 = uVar6;
    FUN_14758bd6c(&local_54,&local_50,param_2);
    goto LAB_147558fee;
  case 6:
    local_54 = uVar6;
    FUN_14758c5dc(&local_54,&local_50,param_2);
LAB_147558fee:
    *(undefined8 *)(param_2 + 0x10) = local_40;
    uVar1 = CONCAT44(uStack_4c,local_50);
    uVar11 = CONCAT44(uStack_44,uStack_48);
    goto LAB_14755902a;
  default:
    goto switchD_147558f95_default;
  }
  *(undefined8 *)(param_2 + 0x10) = local_40;
  uVar1 = CONCAT44(uStack_4c,local_50);
  uVar11 = CONCAT44(uStack_44,uStack_48);
LAB_14755902a:
  *(undefined8 *)param_2 = uVar1;
  *(undefined8 *)(param_2 + 8) = uVar11;
switchD_147558f95_default:
  fVar8 = (float)(param_1[1] >> 0x20);
  uVar6 = (uint)param_1[1];
  if ((fVar8 != 0.0) || (NAN(fVar8))) {
    fVar8 = (1.0 - fVar8) + 0.5 + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    uVar6 = uVar6 ^ 0xffffffff;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    uVar4 = (ulonglong)(uint)fVar8 << 0x20;
  }
  else {
    uVar6 = -uVar6;
    uVar4 = 0;
  }
  FUN_147558517(&local_50,param_2,uVar6 | uVar4);
LAB_147558f64:
  *(undefined8 *)(param_2 + 0x10) = local_40;
  *(ulonglong *)param_2 = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(param_2 + 8) = CONCAT44(uStack_44,uStack_48);
LAB_147558ce3:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475590a9 FUN_1475590a9 body=129 status=ok
// SIG undefined FUN_1475590a9(void)

char * FUN_1475590a9(char *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 4);
  if (*param_1 != '\x02') {
    FUN_1400a24f6(param_1 + 4,*(undefined8 *)(param_1 + 4),param_3);
  }
  if (param_1[0xc] != '\x02') {
    FUN_1400a24f6(&local_28,*(undefined8 *)(param_1 + 0x10),param_3);
    *(undefined8 *)(param_1 + 0x10) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755912c FUN_14755912c body=234 status=ok
// SIG undefined FUN_14755912c(void)

undefined8 FUN_14755912c(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined8 **local_58;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_1;
  if (0x1ffe < (uint)((ulonglong)uVar1 >> 0x33)) {
    local_40 = *param_2;
    uStack_3c = param_2[1];
    uStack_38 = param_2[2];
    uStack_34 = param_2[3];
    local_30 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_3;
    local_20 = param_3[1];
    local_48 = param_1;
    if (((byte)((ulonglong)uVar1 >> 0x30) & 7) == 5) {
      local_4c = (undefined4)uVar1;
      local_58 = &local_48;
      local_60 = FUN_1432dcab0;
      uVar1 = FUN_14758c3da(&local_4c,param_2);
      goto LAB_147559158;
    }
    if (((ushort)((ulonglong)uVar1 >> 0x30) & 7) == 3) {
      FUN_14758a97a(local_40,&local_4c);
      local_58 = &local_48;
      local_60 = FUN_1432dcab0;
      uVar1 = FUN_14758bb10(&local_4c,param_2);
      goto LAB_147559158;
    }
  }
  uVar1 = 0;
LAB_147559158:
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147559218 FUN_147559218 body=89 status=ok
// SIG undefined FUN_147559218(void)

undefined1 * FUN_147559218(ulonglong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if ((*param_1 & 0x7000000000000) == 0 && 0x1ffe < (uint)(*param_1 >> 0x33)) {
    plVar2 = (longlong *)FUN_147585980();
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
      *param_2 = uVar1;
      uVar1 = 1;
      goto LAB_147559265;
    }
  }
  uVar1 = 0;
LAB_147559265:
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 147559272 FUN_147559272 body=434 status=ok
// SIG undefined FUN_147559272(void)

ulonglong * FUN_147559272(undefined8 *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((uint)((ulonglong)*param_1 >> 0x33) < 0x1fff) {
    dVar4 = (double)FUN_147585474(param_1);
    FUN_1432e0f1a(param_2,0x3ff0000000000000);
    fVar3 = (float)((ulonglong)param_1[1] >> 0x20);
    uVar1 = (uint)param_1[1];
    if ((fVar3 != 0.0) || (NAN(fVar3))) {
      uVar1 = uVar1 ^ 0xffffffff;
      fVar3 = (1.0 - fVar3) + 0.5 + -0.5;
      if (0.99999994 <= fVar3) {
        fVar3 = 0.99999994;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      dVar5 = (double)fVar3;
    }
    else {
      uVar1 = -uVar1;
      dVar5 = 0.0;
    }
    dVar7 = ((double)(int)uVar1 + dVar5) / dVar4;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar7;
    auVar6 = roundpd(auVar6,auVar6,1);
    dVar5 = auVar6._0_8_;
    dVar7 = dVar7 - dVar5;
    if (2147483647.0 <= dVar5) {
      dVar5 = 2147483647.0;
    }
    if (dVar5 <= -2147483648.0) {
      dVar5 = -2147483648.0;
    }
    fVar3 = (float)dVar7;
    if (0.99999994 <= fVar3) {
      fVar3 = 0.99999994;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar3 = fVar3 + 0.5 + -0.5;
    if (0.99999994 <= fVar3) {
      fVar3 = 0.99999994;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(int *)(param_2 + 1) = (int)dVar5;
    *(float *)((longlong)param_2 + 0xc) = fVar3;
    uVar2 = -(ulonglong)(1e-08 < ABS(1.0 / dVar4));
    *param_2 = ~uVar2 & 0xfff9000000000000 | (ulonglong)(1.0 / dVar4) & uVar2;
  }
  else {
    FUN_1432e0f1a(param_2,0x3ff0000000000000);
    param_2[1] = param_1[1];
    FUN_14141a0f6(param_1,&local_48);
    *param_2 = local_48;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147559426 FUN_147559426 body=2023 status=ok
// SIG undefined FUN_147559426(void)

ulonglong FUN_147559426(double *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4,
                       ulonglong param_5)

{
  undefined1 auVar1 [16];
  double **ppdVar2;
  double **ppdVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint7 uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  double dVar25;
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  undefined1 auStack_d8 [32];
  float *local_b8;
  float local_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  float local_98 [2];
  double *local_90;
  undefined8 *local_88;
  ulonglong local_80;
  
  ppdVar3 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar15 = param_4 >> 0x20;
  fVar28 = (float)(param_4 >> 0x20);
  uVar16 = param_5 >> 0x20;
  fVar27 = (float)(param_5 >> 0x20);
  dVar6 = *param_1;
  fVar19 = (float)param_4;
  fVar20 = (float)param_5;
  local_90 = param_1;
  local_88 = param_3;
  if ((uint)((ulonglong)dVar6 >> 0x33) < 0x1fff) {
    if (3.4028234663852886e+38 <= dVar6) {
      dVar6 = 3.4028234663852886e+38;
    }
    if (dVar6 <= -3.4028234663852886e+38) {
      dVar6 = -3.4028234663852886e+38;
    }
    local_a8 = (float)dVar6;
    fStack_a4 = SUB84(param_1[1],0);
    uStack_a0._0_4_ = (undefined4)((ulonglong)param_1[1] >> 0x20);
    pfVar17 = local_98;
    dVar6 = (double)FUN_1400a24f6(pfVar17,param_2);
LAB_1475594ea:
    param_2 = (ulonglong)(uint)*pfVar17;
    fVar18 = pfVar17[1];
    goto LAB_1475594f3;
  }
  uVar4 = (uint)param_2;
  fVar21 = SUB84(dVar6,0);
  fVar18 = (float)(param_2 >> 0x20);
  switch((ushort)((ulonglong)dVar6 >> 0x30) & 7) {
  case 0:
    plVar7 = (longlong *)FUN_147585980(param_1);
    bVar10 = (byte)param_1;
    if (plVar7 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      uStack_a0 = &local_90;
      local_b8 = &local_a8;
      local_a8 = 173.79391;
      fStack_a4 = 1.4013e-45;
      uVar8 = (**(code **)(*plVar7 + 0x2c8))(plVar7,param_2,param_4,param_5);
      bVar10 = (byte)uVar8;
    }
    dVar6 = (double)CONCAT71((int7)((ulonglong)uVar8 >> 8),plVar7 == (longlong *)0x0 | bVar10);
    ppdVar2 = uStack_a0;
    goto LAB_147559517;
  case 1:
    iVar5 = *(int *)(param_1 + 1);
    fVar18 = *(float *)((longlong)param_1 + 0xc) + 0.0;
    FUN_14758a972(param_1,&local_a8);
    uVar4 = (int)ROUND(fVar18 + fVar18 + -0.5) >> 1;
    dVar6 = (double)(ulonglong)uVar4;
    auVar26 = roundss(ZEXT416(0),ZEXT416((uint)fVar18),9);
    param_2 = (ulonglong)(iVar5 + (int)local_a8 + uVar4);
    fVar18 = (fVar18 - auVar26._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar18) {
      fVar18 = 0.99999994;
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    break;
  case 2:
    uVar12 = (uint)((ulonglong)dVar6 >> 0x18);
    fVar18 = fVar18 + *(float *)((longlong)param_1 + 0xc);
    auVar26 = roundss(ZEXT416(0),ZEXT416((uint)fVar18),9);
    fVar22 = (fVar18 - auVar26._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar22) {
      fVar22 = 0.99999994;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    pfVar17 = &local_a8;
    dVar6 = (double)FUN_144a808d5(pfVar17,CONCAT44(fVar22,((int)ROUND(fVar18 + fVar18 + -0.5) >> 1)
                                                          + uVar4 + *(int *)(param_1 + 1)),
                                  &DAT_100000001,
                                  CONCAT44(uVar12 & 0x7fffff | (uVar12 & 0x800000) << 8,
                                           (uint)fVar21 & 0x7fffff | ((uint)fVar21 & 0x800000) << 8)
                                 );
    goto LAB_1475594ea;
  case 3:
    uVar13 = 0x80000000;
    if (!SBORROW4(0,(int)fVar19)) {
      fVar28 = fVar28 + *(float *)((longlong)param_1 + 0xc);
      uVar13 = (ulonglong)
               (uint)(*(int *)(param_1 + 1) + (int)fVar19 +
                     ((int)ROUND(fVar28 + fVar28 + -0.5) >> 1));
      auVar26 = roundss(ZEXT416(0),ZEXT416((uint)fVar28),9);
      uVar15 = (ulonglong)(uint)(fVar28 - auVar26._0_4_);
    }
    uVar14 = 0x7fffffff;
    if (fVar20 != NAN) {
      fVar27 = fVar27 + *(float *)((longlong)param_1 + 0xc);
      uVar14 = (ulonglong)
               (uint)(*(int *)(param_1 + 1) + (int)fVar20 +
                     ((int)ROUND(fVar27 + fVar27 + -0.5) >> 1));
      auVar26 = roundss(ZEXT416(0),ZEXT416((uint)fVar27),9);
      uVar16 = (ulonglong)(uint)(fVar27 - auVar26._0_4_);
    }
    FUN_14758a97a(param_1,local_98);
    uStack_a0 = &local_90;
    local_b8 = &local_a8;
    local_a8 = 173.79391;
    fStack_a4 = 1.4013e-45;
    fVar18 = fVar18 + *(float *)((longlong)param_1 + 0xc);
    auVar26 = roundss(ZEXT416(0),ZEXT416((uint)fVar18),9);
    fVar19 = (fVar18 - auVar26._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar19) {
      fVar19 = 0.99999994;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    dVar6 = (double)FUN_14758b876(local_98,CONCAT44(fVar19,((int)ROUND(fVar18 + fVar18 + -0.5) >> 1)
                                                           + uVar4 + *(int *)(param_1 + 1)),
                                  uVar15 << 0x20 | uVar13,uVar16 << 0x20 | uVar14);
    ppdVar2 = uStack_a0;
    goto LAB_147559517;
  case 4:
    dVar25 = param_1[1];
    fVar21 = (float)((ulonglong)dVar25 >> 0x20);
    fVar22 = 0.0;
    if ((fVar21 != 0.0) || (NAN(fVar21))) {
      dVar6 = (double)((ulonglong)dVar25 ^ 0xffffffff);
      fVar22 = (1.0 - fVar21) + 0.5 + -0.5;
      if (0.99999994 <= fVar22) {
        fVar22 = 0.99999994;
      }
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
    }
    else {
      dVar6 = (double)-(longlong)dVar25;
    }
    if (((int)uVar4 < (int)SUB84(dVar6,0)) || ((uVar4 == SUB84(dVar6,0) && (fVar18 < fVar22)))) {
      FUN_14758a982(param_1,&local_a8);
      ppdVar3 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
      auVar26 = roundps(in_XMM2,ZEXT416((uint)(0.0 - fVar21)),1);
      uVar12 = ((int)local_a8 - SUB84(dVar25,0)) + (int)auVar26._0_4_;
      dVar6 = (double)(ulonglong)uVar12;
      uVar9 = (uint7)(uint3)(uVar12 >> 8);
      if ((int)uVar12 < (int)uVar4) {
        dVar6 = (double)CONCAT71(uVar9,1);
        ppdVar2 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
        goto LAB_147559517;
      }
      if (uVar12 == uVar4) {
        fVar21 = ((0.0 - fVar21) - auVar26._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar21) {
          fVar21 = 0.99999994;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        dVar6 = (double)CONCAT71(uVar9,1);
joined_r0x000147559af5:
        ppdVar2 = ppdVar3;
        if (fVar21 < fVar18) goto LAB_147559517;
      }
    }
    break;
  case 5:
    uVar13 = 0x80000000;
    if (!SBORROW4(0,(int)fVar19)) {
      fVar28 = fVar28 + *(float *)((longlong)param_1 + 0xc);
      uVar13 = (ulonglong)
               (uint)(*(int *)(param_1 + 1) + (int)fVar19 +
                     ((int)ROUND(fVar28 + fVar28 + -0.5) >> 1));
      auVar26 = roundss(ZEXT416(0),ZEXT416((uint)fVar28),9);
      uVar15 = (ulonglong)(uint)(fVar28 - auVar26._0_4_);
    }
    fVar19 = (float)((ulonglong)param_1[1] >> 0x20);
    uVar14 = 0x7fffffff;
    iVar5 = SUB84(param_1[1],0);
    if (fVar20 != NAN) {
      fVar27 = fVar27 + fVar19;
      uVar14 = (ulonglong)(uint)(((int)ROUND(fVar27 + fVar27 + -0.5) >> 1) + iVar5 + (int)fVar20);
      auVar26 = roundss(ZEXT416(0),ZEXT416((uint)fVar27),9);
      uVar16 = (ulonglong)(uint)(fVar27 - auVar26._0_4_);
    }
    uStack_a0 = &local_90;
    local_b8 = &local_a8;
    local_a8 = 173.79391;
    fStack_a4 = 1.4013e-45;
    fVar19 = fVar19 + fVar18;
    auVar26 = roundss(ZEXT416(0),ZEXT416((uint)fVar19),9);
    fVar20 = (fVar19 - auVar26._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar20) {
      fVar20 = 0.99999994;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    local_98[0] = fVar21;
    dVar6 = (double)FUN_14758c06e(local_98,CONCAT44(fVar20,((int)ROUND(fVar19 + fVar19 + -0.5) >> 1)
                                                           + iVar5 + uVar4),uVar15 << 0x20 | uVar13,
                                  uVar16 << 0x20 | uVar14);
    ppdVar2 = uStack_a0;
    goto LAB_147559517;
  case 6:
    fVar22 = (float)((ulonglong)param_1[1] >> 0x20);
    fVar24 = 0.0;
    uVar12 = SUB84(param_1[1],0);
    if ((fVar22 != 0.0) || (NAN(fVar22))) {
      uVar11 = uVar12 ^ 0xffffffff;
      fVar24 = (1.0 - fVar22) + 0.5 + -0.5;
      if (0.99999994 <= fVar24) {
        fVar24 = 0.99999994;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
    }
    else {
      uVar11 = -uVar12;
    }
    if (((int)uVar4 < (int)uVar11) || ((uVar4 == uVar11 && (fVar18 < fVar24)))) {
      auVar26._8_8_ = 0;
      auVar26._0_8_ = (double)fVar21;
      auVar26 = roundpd(auVar26,auVar26,1);
      dVar25 = auVar26._0_8_;
      dVar6 = (double)fVar21 - dVar25;
      if (2147483647.0 <= dVar25) {
        dVar25 = 2147483647.0;
      }
      if (dVar25 <= -2147483648.0) {
        dVar25 = -2147483648.0;
      }
      uVar11 = (uint)((ulonglong)dVar6 >> 0x20);
      auVar23._0_4_ = (float)dVar6;
      auVar23._4_4_ = uVar11;
      auVar23._8_8_ = 0;
      if (0.99999994 <= auVar23._0_4_) {
        auVar23._8_8_ = 0;
        auVar23._0_4_ = 0.99999994;
      }
      if (auVar23._0_4_ <= 0.0) {
        auVar1._12_4_ = 0;
        auVar1._0_12_ = auVar23._4_12_;
        auVar23 = auVar1 << 0x20;
      }
      fVar21 = auVar23._0_4_ + 0.5 + -0.5;
      if (0.99999994 <= fVar21) {
        fVar21 = 0.99999994;
      }
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar21 = fVar21 - fVar22;
      auVar26 = roundps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21),1);
      iVar5 = (int)auVar26._0_4_;
      uVar12 = ((int)dVar25 - uVar12) + iVar5;
      dVar6 = (double)CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
      ppdVar2 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
      if ((int)uVar12 < (int)uVar4) goto LAB_147559517;
      if (uVar12 == uVar4) {
        fVar21 = (fVar21 - auVar26._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar21) {
          fVar21 = 0.99999994;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        goto joined_r0x000147559af5;
      }
    }
    break;
  case 7:
    fVar18 = 0.0;
    param_2 = 0;
  }
LAB_1475594f3:
  fVar21 = (float)param_2;
  if ((((int)fVar19 < (int)fVar21) ||
      ((dVar6 = (double)CONCAT71((int7)((ulonglong)dVar6 >> 8),1),
       ppdVar2 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0), fVar21 == fVar19 &&
       (ppdVar2 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0), fVar28 <= fVar18))))
     && (((int)fVar21 < (int)fVar20 ||
         ((dVar6 = (double)CONCAT71((int7)((ulonglong)dVar6 >> 8),1),
          ppdVar2 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0), fVar21 == fVar20 &&
          (ppdVar2 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0), fVar18 <= fVar27)))
         ))) {
    local_a8 = fVar21;
    fStack_a4 = fVar18;
    dVar6 = (double)(*(code *)*param_3)(param_3[1]);
    ppdVar2 = (double **)CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
  }
LAB_147559517:
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
    uStack_a0 = ppdVar2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)dVar6 & 0xffffffffffffff01;
}



// FUNCTION 147559c0e FUN_147559c0e body=1729 status=ok
// SIG undefined FUN_147559c0e(void)

int * FUN_147559c0e(double *param_1,int *param_2,undefined8 param_3,undefined8 param_4,byte *param_5
                   )

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auStack_a8 [32];
  byte *local_88;
  float local_7c;
  int local_78;
  float local_74;
  float local_70;
  undefined8 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar10 = *param_1;
  if ((uint)((ulonglong)dVar10 >> 0x33) < 0x1fff) {
    if (3.4028234663852886e+38 <= dVar10) {
      dVar10 = 3.4028234663852886e+38;
    }
    if (dVar10 <= -3.4028234663852886e+38) {
      dVar10 = -3.4028234663852886e+38;
    }
    local_70 = (float)dVar10;
    local_6c = param_1[1];
    FUN_1400a24f6(param_2,param_3);
    goto LAB_147559c86;
  }
  uVar7 = (uint)param_3;
  fVar9 = SUB84(dVar10,0);
  fVar8 = (float)((ulonglong)param_4 >> 0x20);
  fVar14 = (float)((ulonglong)param_3 >> 0x20);
  switch((ushort)((ulonglong)dVar10 >> 0x30) & 7) {
  case 0:
    plVar5 = (longlong *)FUN_147585980(param_1);
    if (plVar5 != (longlong *)0x0) {
      local_88 = param_5;
      (**(code **)(*plVar5 + 0x2c0))(plVar5,&local_70,param_3,param_4);
      if (local_6c._4_1_ != '\0') {
        local_74 = (float)local_6c - *(float *)((longlong)param_1 + 0xc);
        local_78 = (int)local_70 - *(int *)(param_1 + 1);
        goto LAB_147559f1f;
      }
    }
    break;
  case 1:
    iVar1 = *(int *)(param_1 + 1);
    fVar9 = *(float *)((longlong)param_1 + 0xc) + 0.0;
    FUN_14758a972(param_1,&local_70);
    if (iVar1 + (int)local_70 + ((int)ROUND(fVar9 + fVar9 + -0.5) >> 1) == uVar7) {
      auVar13 = roundss(ZEXT416(0),ZEXT416((uint)fVar9),9);
      fVar9 = (fVar9 - auVar13._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if ((fVar9 == fVar14) && (!NAN(fVar9) && !NAN(fVar14))) goto LAB_14755a0bb;
    }
    break;
  case 2:
    iVar1 = *(int *)(param_1 + 1);
    uVar7 = (uint)((ulonglong)dVar10 >> 0x18);
    fVar8 = *(float *)((longlong)param_1 + 0xc);
    FUN_144a808d5(&local_78,param_3,&DAT_100000001,
                  CONCAT44(uVar7 & 0x7fffff | (uVar7 & 0x800000) << 8,
                           (uint)fVar9 & 0x7fffff | ((uint)fVar9 & 0x800000) << 8));
    local_78 = local_78 - iVar1;
    local_74 = local_74 - fVar8;
LAB_147559f1f:
    auVar13 = roundps(ZEXT416((uint)local_74),ZEXT416((uint)local_74),1);
    fVar9 = (local_74 - auVar13._0_4_) + 0.5 + -0.5;
    local_78 = (int)auVar13._0_4_ + local_78;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    goto LAB_147559f4e;
  case 3:
    FUN_14758a97a(param_1,&local_7c);
    fVar8 = fVar8 + *(float *)((longlong)param_1 + 0xc);
    auVar13 = roundss(ZEXT416(0),ZEXT416((uint)fVar8),9);
    fVar9 = (fVar8 - auVar13._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    fVar14 = fVar14 + *(float *)((longlong)param_1 + 0xc);
    auVar13 = roundss(ZEXT416(0),ZEXT416((uint)fVar14),9);
    fVar11 = (fVar14 - auVar13._0_4_) + 0.5 + -0.5;
    auVar13 = ZEXT416((uint)fVar11);
    if (0.99999994 <= fVar11) {
      auVar13 = ZEXT416(0x3f7fffff);
    }
    if (auVar13._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar13._4_12_;
      auVar13 = auVar2 << 0x20;
    }
    local_88 = param_5;
    FUN_14758b752(&local_7c,&local_70,
                  CONCAT44(auVar13._0_4_,
                           ((int)ROUND(fVar14 + fVar14 + -0.5) >> 1) + uVar7 + *(int *)(param_1 + 1)
                          ),
                  CONCAT44(fVar9,((int)ROUND(fVar8 + fVar8 + -0.5) >> 1) +
                                 (int)param_4 + *(int *)(param_1 + 1)));
    goto LAB_14755a19e;
  case 4:
    if ((*param_5 & 0x10) != 0) {
LAB_14755a0bb:
      *(undefined8 *)param_2 = param_3;
      goto LAB_147559c86;
    }
    fVar9 = (float)((ulonglong)param_1[1] >> 0x20);
    fVar8 = 0.0;
    uVar4 = SUB84(param_1[1],0);
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      uVar6 = uVar4 ^ 0xffffffff;
      fVar8 = (1.0 - fVar9) + 0.5 + -0.5;
      if (0.99999994 <= fVar8) {
        fVar8 = 0.99999994;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
    }
    else {
      uVar6 = -uVar4;
    }
    if (((int)uVar6 < (int)uVar7) || ((uVar7 == uVar6 && (fVar8 <= fVar14)))) {
      FUN_14758a982(param_1,&local_70);
      auVar13 = roundps(in_XMM2,ZEXT416((uint)(0.0 - fVar9)),1);
      uVar4 = ((int)local_70 - uVar4) + (int)auVar13._0_4_;
      if ((int)uVar7 < (int)uVar4) goto LAB_14755a0bb;
      if (uVar4 == uVar7) {
        fVar9 = ((0.0 - fVar9) - auVar13._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar9) {
          fVar9 = 0.99999994;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
joined_r0x00014755a043:
        if (fVar14 <= fVar9) goto LAB_14755a0bb;
      }
    }
    break;
  case 5:
    fVar8 = fVar8 + *(float *)((longlong)param_1 + 0xc);
    auVar13 = roundss(ZEXT416(0),ZEXT416((uint)fVar8),9);
    fVar11 = (fVar8 - auVar13._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar11) {
      fVar11 = 0.99999994;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar14 = fVar14 + *(float *)((longlong)param_1 + 0xc);
    auVar13 = roundss(ZEXT416(0),ZEXT416((uint)fVar14),9);
    fVar15 = (fVar14 - auVar13._0_4_) + 0.5 + -0.5;
    auVar13 = ZEXT416((uint)fVar15);
    if (0.99999994 <= fVar15) {
      auVar13 = ZEXT416(0x3f7fffff);
    }
    if (auVar13._0_4_ <= 0.0) {
      auVar3._12_4_ = 0;
      auVar3._0_12_ = auVar13._4_12_;
      auVar13 = auVar3 << 0x20;
    }
    local_88 = param_5;
    local_7c = fVar9;
    FUN_14758beda(&local_7c,&local_70,
                  CONCAT44(auVar13._0_4_,
                           ((int)ROUND(fVar14 + fVar14 + -0.5) >> 1) + uVar7 + *(int *)(param_1 + 1)
                          ),
                  CONCAT44(fVar11,((int)ROUND(fVar8 + fVar8 + -0.5) >> 1) +
                                  (int)param_4 + *(int *)(param_1 + 1)));
LAB_14755a19e:
    if (local_6c._4_1_ == '\x01') {
      fVar9 = (float)local_6c - *(float *)((longlong)param_1 + 0xc);
      auVar13 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),1);
      local_78 = (int)auVar13._0_4_ + ((int)local_70 - *(int *)(param_1 + 1));
      fVar9 = (fVar9 - auVar13._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
LAB_147559f4e:
      *param_2 = local_78;
      param_2[1] = (int)fVar9;
LAB_147559c86:
      *(undefined1 *)(param_2 + 2) = 1;
      goto LAB_147559c8a;
    }
    break;
  case 6:
    if ((*param_5 & 0x10) != 0) goto LAB_14755a0bb;
    fVar8 = (float)((ulonglong)param_1[1] >> 0x20);
    fVar11 = 0.0;
    uVar4 = SUB84(param_1[1],0);
    if ((fVar8 != 0.0) || (NAN(fVar8))) {
      uVar6 = uVar4 ^ 0xffffffff;
      fVar11 = (1.0 - fVar8) + 0.5 + -0.5;
      if (0.99999994 <= fVar11) {
        fVar11 = 0.99999994;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
    }
    else {
      uVar6 = -uVar4;
    }
    if (((int)uVar6 < (int)uVar7) || ((uVar7 == uVar6 && (fVar11 <= fVar14)))) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (double)fVar9;
      auVar13 = roundpd(auVar13,auVar13,1);
      dVar12 = auVar13._0_8_;
      dVar10 = (double)fVar9 - dVar12;
      if (2147483647.0 <= dVar12) {
        dVar12 = 2147483647.0;
      }
      if (dVar12 <= -2147483648.0) {
        dVar12 = -2147483648.0;
      }
      fVar9 = (float)dVar10;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 + 0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 - fVar8;
      auVar13 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),1);
      uVar4 = ((int)dVar12 - uVar4) + (int)auVar13._0_4_;
      if ((int)uVar7 < (int)uVar4) goto LAB_14755a0bb;
      if (uVar4 == uVar7) {
        fVar9 = (fVar9 - auVar13._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar9) {
          fVar9 = 0.99999994;
        }
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        goto joined_r0x00014755a043;
      }
    }
  }
  *(undefined1 *)(param_2 + 2) = 0;
LAB_147559c8a:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14755a2d0 FUN_14755a2d0 body=443 status=ok
// SIG undefined FUN_14755a2d0(void)

void FUN_14755a2d0(longlong param_1,int param_2,code *param_3,undefined8 *param_4,longlong *param_5,
                  longlong *param_6)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c8 [8];
  code *local_c0;
  float *local_b8;
  float local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar5 = *(int *)(param_1 + 0x18);
  if (param_2 < iVar5) {
    lVar4 = (longlong)param_2;
    lVar6 = lVar4 << 4;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      dVar2 = *(double *)(lVar1 + lVar6);
      if ((uint)((ulonglong)dVar2 >> 0x33) < 0x1fff) {
        if (3.4028234663852886e+38 <= dVar2) {
          dVar2 = 3.4028234663852886e+38;
        }
        if (dVar2 <= -3.4028234663852886e+38) {
          dVar2 = -3.4028234663852886e+38;
        }
        local_b0 = (float)dVar2;
        uVar3 = *(undefined8 *)(lVar1 + 8 + lVar6);
        uStack_ac = (undefined4)uVar3;
        uStack_a8 = (undefined4)((ulonglong)uVar3 >> 0x20);
        FUN_1400a24f6(&local_c0,param_3,&local_b0);
        iVar5 = *(int *)(param_1 + 0x18);
        param_3 = local_c0;
      }
      else if ((0 < (longlong)(int)param_5[1]) && (0 < (longlong)(int)param_6[1])) {
        local_b0 = (float)param_1;
        uStack_ac = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_a8 = (undefined4)*param_4;
        uStack_a4 = (undefined4)((ulonglong)*param_4 >> 0x20);
        local_a0 = param_4[1];
        local_98 = (undefined4)lVar4;
        local_90 = *param_5;
        lStack_88 = param_5[1];
        local_80 = *param_6;
        lStack_78 = param_6[1];
        local_d8 = *(undefined8 *)(*param_6 + -8 + (longlong)(int)param_6[1] * 8);
        local_c0 = FUN_1432dcbd0;
        local_b8 = &local_b0;
        FUN_147559426(lVar1 + lVar6,param_3,&local_c0,
                      *(undefined8 *)(*param_5 + -8 + (longlong)(int)param_5[1] * 8));
        goto LAB_14755a44e;
      }
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 < iVar5);
  }
  FUN_1400a24f6(local_c8,param_3,param_1);
  local_b0 = local_c8._0_4_;
  uStack_ac = local_c8._4_4_;
  (*(code *)*param_4)(param_4[1]);
LAB_14755a44e:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14755a48c FUN_14755a48c body=1624 status=ok
// SIG undefined FUN_14755a48c(void)

ulonglong FUN_14755a48c(longlong param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  char *local_118;
  char local_110;
  undefined2 local_10f;
  char local_10d;
  int local_10c;
  float local_108;
  char local_104;
  undefined2 local_103;
  undefined1 local_101;
  int local_100;
  float local_fc;
  char local_f8;
  undefined2 local_f7;
  char local_f5;
  undefined8 local_f4;
  char local_ec;
  undefined2 local_eb;
  char local_e9;
  undefined8 local_e8;
  char local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined4 local_d8;
  char local_d4;
  undefined2 local_d3;
  char local_d1;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  code *local_c0;
  undefined8 ***local_b8;
  undefined8 **local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_1475590a9(local_80,param_2,param_1);
    uVar5 = (*(code *)*param_3)(param_3[1],local_80);
    uVar9 = (ulonglong)uVar5;
LAB_14755a4e1:
    if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar9 & 0xffffffff;
  }
  local_b0 = &local_98;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = &local_b0;
  local_c0 = FUN_1432dcc60;
  local_58 = *param_5;
  local_50 = *(undefined4 *)(param_5 + 1);
  local_68 = *param_4;
  local_60 = *(undefined4 *)(param_4 + 1);
  uVar9 = 0;
  local_128 = &local_68;
  local_120 = &local_58;
  FUN_14755a2d0(param_1,0,*(undefined8 *)(param_2 + 4),&local_c0);
  local_b8 = (undefined8 ***)&local_c8;
  local_c8 = &local_a8;
  local_c0 = FUN_1432dcc9a;
  local_58 = *param_5;
  local_50 = *(undefined4 *)(param_5 + 1);
  local_68 = *param_4;
  local_60 = *(undefined4 *)(param_4 + 1);
  local_128 = &local_68;
  local_120 = &local_58;
  FUN_14755a2d0(param_1,0,*(undefined8 *)(param_2 + 0x10),&local_c0);
  FUN_147569a63(local_98,uStack_90 & 0xffffffff);
  FUN_147569a63(local_a8,uStack_a0 & 0xffffffff);
  local_118 = param_2 + 1;
  pcVar1 = param_2 + 0xd;
  pcVar8 = &local_e0;
  while( true ) {
    uVar6 = uStack_a0 & 0xffffffff;
    if ((longlong)(int)uStack_a0 <= (longlong)uVar9) break;
    if (0 < (int)uStack_90) {
      uVar2 = *(undefined8 *)(local_a8 + uVar9 * 8);
      iVar13 = (int)uVar2;
      iVar7 = (int)*local_98;
      if ((iVar7 < iVar13) ||
         ((iVar13 == iVar7 &&
          ((float)((ulonglong)*local_98 >> 0x20) <= (float)((ulonglong)uVar2 >> 0x20))))) break;
    }
    local_58 = CONCAT62(CONCAT51(local_58._3_5_,local_118[2]),*(undefined2 *)local_118);
    local_d4 = param_2[0xc];
    if ((longlong)uVar9 < (longlong)(int)uStack_a0 + -1) {
      if (local_d4 == '\0') {
        local_e0 = '\x01';
      }
      else if (local_d4 == '\x01') {
        local_e0 = '\0';
      }
      else {
        local_68 = CONCAT62(CONCAT51(local_68._3_5_,param_2[0xf]),*(undefined2 *)pcVar1);
        local_e0 = local_d4;
      }
      local_dc = *(undefined4 *)(local_a8 + 8 + uVar9 * 8);
      local_d8 = *(undefined4 *)(local_a8 + 0xc + uVar9 * 8);
      local_58 = CONCAT62(CONCAT51(local_58._3_5_,local_68._2_1_),(undefined2)local_68);
    }
    else {
      local_d8 = 0;
      local_dc = 0;
      local_e0 = '\x02';
    }
    local_d0 = *(undefined4 *)(local_a8 + uVar9 * 8);
    local_cc = *(undefined4 *)(local_a8 + 4 + uVar9 * 8);
    local_dd = local_58._2_1_;
    local_df = (undefined2)local_58;
    local_d1 = param_2[0xf];
    local_d3 = *(undefined2 *)pcVar1;
    cVar4 = (*(code *)*param_3)(param_3[1],pcVar8);
    uVar9 = uVar9 + 1;
    if (cVar4 == '\0') goto LAB_14755a791;
  }
  uVar18 = 0;
  iVar13 = (int)uStack_90;
  if ((int)uVar9 < (int)uStack_a0 && 0 < (int)uStack_90) {
    uVar18 = 0;
    pcVar8 = (char *)0x0;
    do {
      uVar2 = local_98[uVar18];
      cVar4 = *param_2;
      cVar12 = param_2[0xc];
      fVar15 = (float)((ulonglong)uVar2 >> 0x20);
      lVar10 = (longlong)(int)uVar9;
      lVar11 = (longlong)(int)uVar6;
      if ((longlong)(int)uVar6 < lVar10 + 1) {
        lVar11 = lVar10 + 1;
      }
      lVar17 = lVar10 << 0x20;
      do {
        uVar3 = *(undefined8 *)(local_a8 + lVar10 * 8);
        iVar14 = (int)uVar3;
        iVar7 = (int)uVar2;
        if ((iVar7 <= iVar14) && ((iVar14 != iVar7 || (fVar15 < (float)((ulonglong)uVar3 >> 0x20))))
           ) {
          uVar3 = *(undefined8 *)(local_a8 + (lVar17 >> 0x1d));
          lVar11 = lVar10;
          if (cVar12 != '\x02' && cVar4 != '\x02') {
            iVar14 = (int)uVar3;
            if ((iVar14 < iVar7) ||
               ((fVar16 = (float)((ulonglong)uVar3 >> 0x20), iVar7 == iVar14 && (fVar16 < fVar15))))
            break;
            if (iVar7 == iVar14) {
              if (((fVar15 == fVar16) && (!NAN(fVar15) && !NAN(fVar16))) &&
                 (cVar12 == '\0' || cVar4 == '\0')) break;
            }
          }
          local_f5 = local_118[2];
          local_f7 = *(undefined2 *)local_118;
          local_e9 = param_2[0xf];
          local_eb = *(undefined2 *)pcVar1;
          local_f8 = cVar4;
          local_f4 = uVar2;
          local_ec = cVar12;
          local_e8 = uVar3;
          cVar4 = (*(code *)*param_3)(param_3[1],&local_f8);
          if (cVar4 == '\0') goto LAB_14755a791;
          uVar6 = uStack_a0 & 0xffffffff;
          iVar13 = (int)uStack_90;
          break;
        }
        lVar10 = lVar10 + 1;
        lVar17 = lVar17 + 0x100000000;
      } while (lVar11 != lVar10);
      uVar18 = uVar18 + 1;
    } while (((longlong)uVar18 < (longlong)iVar13) &&
            (uVar5 = (int)lVar11 + 1, uVar9 = (ulonglong)uVar5, (int)uVar5 < (int)uVar6));
  }
  uVar9 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
  if ((int)uVar18 < iVar13) {
    uVar18 = uVar18 & 0xffffffff;
    do {
      cVar4 = *param_2;
      local_58 = CONCAT62(CONCAT51(local_58._3_5_,param_2[0xf]),*(undefined2 *)pcVar1);
      iVar7 = *(int *)(local_98 + uVar18);
      fVar15 = *(float *)((longlong)local_98 + uVar18 * 8 + 4);
      if ((longlong)uVar18 < (longlong)(iVar13 + -1)) {
        if (cVar4 == '\0') {
          cVar12 = '\x01';
        }
        else if (cVar4 == '\x01') {
          cVar12 = '\0';
        }
        else {
          local_68 = CONCAT62(CONCAT51(local_68._3_5_,local_118[2]),*(undefined2 *)local_118);
          cVar12 = cVar4;
        }
        iVar14 = *(int *)(local_98 + uVar18 + 1);
        fVar16 = *(float *)((longlong)local_98 + uVar18 * 8 + 0xc);
        local_58 = CONCAT62(CONCAT51(local_58._3_5_,local_68._2_1_),(undefined2)local_68);
        if ((cVar12 == '\x02' || cVar4 == '\x02') ||
           (((iVar7 <= iVar14 && ((iVar7 != iVar14 || (fVar15 <= fVar16)))) &&
            ((iVar7 != iVar14 ||
             (((fVar16 != fVar15 || (NAN(fVar16) || NAN(fVar15))) ||
              (iVar14 = iVar7, cVar12 != '\0' && cVar4 != '\0')))))))) goto LAB_14755a9b9;
      }
      else {
        fVar16 = 0.0;
        iVar14 = 0;
        cVar12 = '\x02';
LAB_14755a9b9:
        local_104 = cVar12;
        local_10d = local_118[2];
        local_10f = *(undefined2 *)local_118;
        local_101 = local_58._2_1_;
        local_103 = (undefined2)local_58;
        local_110 = cVar4;
        local_10c = iVar7;
        local_108 = fVar15;
        local_100 = iVar14;
        local_fc = fVar16;
        cVar4 = (*(code *)*param_3)(param_3[1],&local_110);
        if (cVar4 == '\0') {
LAB_14755a791:
          uVar9 = 0;
          break;
        }
        iVar13 = (int)uStack_90;
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < iVar13);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14755a4e1;
}



// FUNCTION 14755aae5 FUN_14755aae5 body=284 status=ok
// SIG undefined FUN_14755aae5(void)

float * FUN_14755aae5(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  
  fVar2 = *param_2;
  fVar3 = 1.0;
  if ((fVar2 != 1.0) || (NAN(fVar2))) {
    iVar1 = _finite((double)fVar2);
    fVar3 = *param_2;
    if (iVar1 != 0) {
      dVar8 = ((double)param_3[2] + (double)(int)param_3[1]) * (double)fVar3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar8;
      auVar9 = roundpd(auVar9,auVar9,1);
      dVar6 = auVar9._0_8_;
      dVar8 = dVar8 - dVar6;
      if (2147483647.0 <= dVar6) {
        dVar6 = 2147483647.0;
      }
      if (dVar6 <= -2147483648.0) {
        dVar6 = -2147483648.0;
      }
      fVar2 = (float)(int)dVar6;
      fVar5 = (float)dVar8;
      if (0.99999994 <= fVar5) {
        fVar5 = 0.99999994;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar5 = fVar5 + 0.5 + -0.5;
      if (0.99999994 <= fVar5) {
        fVar5 = 0.99999994;
      }
      auVar9 = ZEXT416((uint)fVar5);
      if (fVar5 <= 0.0) {
        auVar9 = ZEXT816(0) << 0x20;
      }
      goto LAB_14755ab10;
    }
  }
  fVar2 = param_3[1];
  auVar9 = ZEXT416((uint)param_3[2]);
LAB_14755ab10:
  auVar7._4_12_ = auVar9._4_12_;
  auVar7._0_4_ = auVar9._0_4_ + param_2[2];
  auVar9 = roundss(ZEXT416(0),auVar7,9);
  fVar5 = param_2[1];
  fVar4 = (auVar7._0_4_ - auVar9._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar4) {
    fVar4 = 0.99999994;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *param_1 = fVar3 * *param_3;
  param_1[1] = (float)((int)fVar2 + (int)fVar5 +
                      ((int)ROUND(auVar7._0_4_ + auVar7._0_4_ + -0.5) >> 1));
  param_1[2] = fVar4;
  return param_1;
}



// FUNCTION 14755ac02 FUN_14755ac02 body=37 status=ok
// SIG undefined FUN_14755ac02(void)

longlong FUN_14755ac02(longlong param_1)

{
  FUN_1432e0f1a(param_1,0x3ff0000000000000);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 14755ac28 FUN_14755ac28 body=41 status=ok
// SIG undefined FUN_14755ac28(void)

longlong FUN_14755ac28(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14141a0f6(param_2,param_1);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return param_1;
}



// FUNCTION 14755ac52 FUN_14755ac52 body=957 status=ok
// SIG undefined FUN_14755ac52(void)

undefined4 FUN_14755ac52(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  float fVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  code *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  longlong local_c8 [2];
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  int iStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a8 = CONCAT31(local_a8._1_3_,2);
  iStack_a4 = 0;
  fStack_a0 = 0.0;
  uStack_9c = CONCAT31(uStack_9c._1_3_,2);
  local_98 = 0;
  if ((param_2 & 0x7fffffffffffffff) != 0x80000000) {
    FUN_1400a24f6(&iStack_a4,param_2,param_1);
    local_a8 = CONCAT31(local_a8._1_3_,1);
  }
  fVar2 = fStack_a0;
  if ((param_3 & 0x7fffffffffffffff) != 0x7fffffff) {
    FUN_1400a24f6(local_c8,param_3,param_1);
    fVar2 = fStack_a0;
    uStack_9c = CONCAT31(uStack_9c._1_3_,1);
    local_98 = local_c8[0];
    if ((param_2 & 0x7fffffffffffffff) != 0x80000000) {
      lVar9 = CONCAT44(fStack_a0,iStack_a4);
      iVar6 = (int)local_c8[0];
      fStack_a0 = (float)((ulonglong)local_c8[0] >> 0x20);
      if ((iVar6 < iStack_a4) || ((iStack_a4 == iVar6 && (fStack_a0 < fVar2)))) {
        iStack_a4 = iVar6;
        fVar2 = fStack_a0;
        local_98 = lVar9;
      }
    }
  }
  fStack_a0 = fVar2;
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar9 = 0;
    uVar10 = 0;
    local_120 = param_4;
    do {
      uVar4 = uStack_60;
      fVar2 = fStack_a0;
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar9);
      lVar11 = *(longlong *)(param_1 + 0x10) + lVar9;
      if (0x1ffe < (uint)((ulonglong)uVar1 >> 0x33)) {
        if ((((byte)((ulonglong)uVar1 >> 0x30) & 7) - 3 & 0xfd) == 0) {
          FUN_144a3f8b4(local_c8,param_1);
          FUN_14755b010(&local_b8,uVar10 & 0xffffffff);
          FUN_14087ad3e(local_c8,local_e8);
          local_110 = &local_108;
          local_108 = local_120;
          local_f8 = &local_68;
          local_f0 = &local_88;
          local_118 = FUN_1432dccd4;
          local_100 = local_e8;
          uVar7 = FUN_14755912c(lVar11,&local_a8);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          FUN_1447bda9c(local_b8,local_b0);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          goto LAB_14755aeb7;
        }
        cVar3 = (char)local_a8;
        iVar6 = -0x80000000;
        if ((char)local_a8 != '\x02') {
          iVar6 = iStack_a4;
        }
        lVar12 = (longlong)(int)uStack_60;
        uVar5 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
        if (uStack_60._4_4_ < uVar5) {
          FUN_147563c88(&local_68,uVar4 & 0xffffffff);
        }
        uVar4 = uStack_80;
        if (cVar3 == '\x02') {
          fVar2 = 0.0;
        }
        *(int *)(local_68 + lVar12 * 8) = iVar6;
        *(float *)(local_68 + 4 + lVar12 * 8) = fVar2;
        cVar3 = (char)uStack_9c;
        uVar7 = local_98._4_4_;
        uVar8 = 0x7fffffff;
        if ((char)uStack_9c != '\x02') {
          uVar8 = (undefined4)local_98;
        }
        lVar12 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_147563c88(&local_88,uVar4 & 0xffffffff);
        }
        if (cVar3 == '\x02') {
          uVar7 = 0;
        }
        *(undefined4 *)(local_88 + lVar12 * 8) = uVar8;
        *(undefined4 *)(local_88 + 4 + lVar12 * 8) = uVar7;
      }
      FUN_147558c62(lVar11,local_c8,&local_a8);
      local_98 = local_b8;
      local_a8 = (undefined4)local_c8[0];
      iStack_a4 = (int)((ulonglong)local_c8[0] >> 0x20);
      fStack_a0 = (float)local_c8[1];
      uStack_9c = (undefined4)((ulonglong)local_c8[1] >> 0x20);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while ((longlong)uVar10 < (longlong)*(int *)(param_1 + 0x18));
    uVar7 = 0;
  }
LAB_14755aeb7:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14755b010 FUN_14755b010 body=122 status=ok
// SIG undefined FUN_14755b010(void)

void FUN_14755b010(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140407554(param_1,iVar1);
    }
    FUN_147569ee4((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147569f30(param_1,param_2,iVar1 - param_2);
    FUN_147569f92(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14755b08c FUN_14755b08c body=44 status=ok
// SIG undefined FUN_14755b08c(void)

undefined8 * FUN_14755b08c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = 0;
  FUN_14485c47a();
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  return param_1;
}



// FUNCTION 14755b0b8 FUN_14755b0b8 body=134 status=ok
// SIG undefined FUN_14755b0b8(void)

void FUN_14755b0b8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 != 0) {
    lVar4 = FUN_14009d2a0();
    iVar1 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar5 = 0;
      do {
        FUN_1405e0ab4(lVar3 + 0x28,*(undefined2 *)(lVar2 + 4 + lVar5),*(undefined2 *)(lVar4 + 0x11c)
                     );
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14755b13e FUN_14755b13e body=503 status=ok
// SIG undefined FUN_14755b13e(void)

void FUN_14755b13e(longlong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong lVar7;
  short *psVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_e8 [42];
  short local_be;
  uint local_bc [9];
  undefined8 local_98;
  undefined **local_90;
  undefined2 local_88;
  undefined4 uStack_86;
  undefined1 uStack_82;
  undefined1 uStack_81;
  int local_80;
  uint local_7c;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined2 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined2 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_bc[0] = param_2;
  lVar6 = FUN_14479d2ce();
  if (lVar6 != 0) {
    lVar7 = FUN_14009d2a0();
    uVar2 = *(uint *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 8);
    uVar11 = 0;
    if (0 < (int)uVar2) {
      uVar11 = 0;
      uVar10 = uVar2;
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(uint *)(lVar3 + (ulonglong)uVar1 * 8) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar11 < (int)uVar2) && (*(uint *)(lVar3 + (ulonglong)uVar11 * 8) <= param_2)) &&
       (psVar8 = (short *)(lVar3 + (ulonglong)uVar11 * 8 + 4), psVar8 != (short *)0x0)) {
      local_be = *psVar8;
      if (local_be != -1) {
        FUN_14755b46c(lVar6 + 0x28,&local_90,local_be,*(undefined2 *)(lVar7 + 0xe4));
        if ((undefined8 *)CONCAT71(uStack_77,local_78) != (undefined8 *)0x0) {
          *(undefined8 *)CONCAT71(uStack_77,local_78) = param_3;
        }
        if (local_90 != (undefined **)0x0) {
          puVar5 = (undefined *)CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT42(uStack_86,local_88)))
          ;
          puVar9 = local_90[2];
          if (local_90[2] < puVar5) {
            puVar9 = puVar5;
          }
          local_90[2] = puVar9;
          LOCK();
          *(int *)(local_90 + 3) = *(int *)(local_90 + 3) + -1;
          UNLOCK();
          if (local_80 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(local_90 + 1));
          }
        }
        goto LAB_14755b178;
      }
    }
    uStack_86 = *(undefined4 *)(param_1 + 0x18);
    local_88 = *(undefined2 *)(lVar7 + 0x50);
    local_70 = *(undefined2 *)(lVar7 + 0xe4);
    local_58 = *(undefined2 *)(lVar7 + 0xf4);
    local_40 = *(undefined2 *)(lVar7 + 0x11a);
    uStack_82 = 1;
    local_80 = CONCAT22(local_80._2_2_,*(undefined2 *)(lVar7 + 0xf0));
    local_78 = 1;
    local_60 = 1;
    local_48 = 1;
    local_38 = 0;
    local_90 = &PTR_FUN_14a480e90;
    local_98 = 0x10000000000;
    local_7c = param_2;
    local_68 = param_3;
    local_50 = param_3;
    FUN_14755b336(&local_90,&local_be,lVar6 + 0x28);
    FUN_14756a16c(param_1 + 8,local_bc,&local_be);
  }
LAB_14755b178:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755b336 FUN_14755b336 body=308 status=ok
// SIG undefined FUN_14755b336(void)

undefined2 * FUN_14755b336(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147563e5a(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147563ea8(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755b46c FUN_14755b46c body=198 status=ok
// SIG undefined FUN_14755b46c(void)

undefined8 * FUN_14755b46c(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_4 != 0xffff) {
    uVar3 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar3 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar3 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar3 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar3 * 8);
      uVar1 = *(ushort *)(lVar2 + 0xc);
      if (uVar1 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x28);
        lVar4 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar2 + 0x1e) == param_4) {
            FUN_14756a2b6(param_2,lVar2,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined8 *)(param_1 + 0x248),
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar2 = lVar2 + 0x20;
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != 0);
      }
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 1;
  return param_2;
}



// FUNCTION 14755b532 FUN_14755b532 body=283 status=ok
// SIG undefined FUN_14755b532(void)

void FUN_14755b532(longlong param_1,uint param_2)

{
  uint uVar1;
  void *_Dst;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 8);
  uVar6 = 0;
  if (0 < (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
    do {
      uVar9 = (int)(uVar8 >> 1) + (int)uVar6;
      uVar7 = (uint)uVar8;
      if (*(uint *)(lVar5 + (ulonglong)uVar9 * 8) < param_2) {
        uVar6 = (ulonglong)(uVar9 + (uVar7 & 1));
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar7);
  }
  uVar7 = (uint)CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0xffff);
  if ((((int)uVar6 < (int)uVar3) && (*(uint *)(lVar5 + uVar6 * 8) <= param_2)) &&
     (puVar4 = (ushort *)(lVar5 + uVar6 * 8 + 4), puVar4 != (ushort *)0x0)) {
    uVar7 = (uint)*puVar4;
  }
  lVar5 = FUN_14479d2ce(param_1);
  if (lVar5 != 0 && (short)uVar7 != -1) {
    FUN_14009d2a0();
    FUN_1405e0ab4(lVar5 + 0x28,uVar7);
    uVar3 = *(uint *)(param_1 + 0x10);
    lVar5 = *(longlong *)(param_1 + 8);
    uVar9 = 0;
    uVar7 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar7 >> 1) + uVar9;
        if (*(uint *)(lVar5 + (ulonglong)uVar1 * 8) < param_2) {
          uVar9 = uVar1 + (uVar7 & 1);
        }
        bVar2 = 1 < uVar7;
        uVar7 = uVar7 >> 1;
      } while (bVar2);
    }
    if (((int)uVar9 < (int)uVar3) && (*(uint *)(lVar5 + (ulonglong)uVar9 * 8) <= param_2)) {
      if (~uVar9 + uVar3 != 0) {
        _Dst = (void *)(lVar5 + (ulonglong)uVar9 * 8);
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar9 + uVar3) << 3);
        uVar3 = *(uint *)(param_1 + 0x10);
      }
      *(uint *)(param_1 + 0x10) = uVar3 - 1;
      FUN_14756a392(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 14755b64e FUN_14755b64e body=96 status=ok
// SIG undefined FUN_14755b64e(void)

void FUN_14755b64e(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = param_1;
    *puVar1 = &PTR_FUN_14a47cf30;
    *(undefined8 **)(param_1 + 0x28) = puVar1;
  }
  return;
}



// FUNCTION 14755b6ae FUN_14755b6ae body=290 status=ok
// SIG undefined FUN_14755b6ae(void)

undefined8 FUN_14755b6ae(longlong param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar5 = FUN_144a78877(*param_2,param_2[1]);
  piVar6 = (int *)FUN_14756ae90(param_1 + 8,*(ushort *)(param_2 + 2) ^ uVar5 ^ param_2[3],param_2);
  piVar7 = *(int **)(piVar6 + 6);
  piVar9 = piVar7;
  if (piVar7 == (int *)0x0) {
    piVar9 = piVar6;
  }
  iVar2 = piVar6[8];
  lVar11 = (longlong)iVar2;
  if (lVar11 != 0) {
    lVar10 = lVar11 * 0x14;
    do {
      if (((*piVar9 == *param_3) && (piVar9[1] == param_3[1])) && (piVar9[2] == param_3[2])) {
        if (piVar9 != (int *)0x0) {
          cVar1 = (char)param_3[4];
          if ((char)piVar9[4] == cVar1) {
            return 2;
          }
          *(char *)(piVar9 + 4) = cVar1;
          lVar11 = FUN_140adecae(*(undefined8 *)(param_1 + 0x58));
          uVar8 = 1;
          if (lVar11 == 0) {
            return 1;
          }
          if (cVar1 == '\0') {
            *(short *)(lVar11 + 0xe) = *(short *)(lVar11 + 0xe) + -1;
            return 1;
          }
          *(short *)(lVar11 + 0xe) = *(short *)(lVar11 + 0xe) + 1;
          goto LAB_14755b77f;
        }
        break;
      }
      piVar9 = piVar9 + 5;
      lVar10 = lVar10 + -0x14;
    } while (lVar10 != 0);
  }
  piVar6[8] = iVar2 + 1U;
  if ((uint)piVar6[9] < iVar2 + 1U) {
    FUN_14052d4a2(piVar6,iVar2);
    piVar7 = *(int **)(piVar6 + 6);
  }
  if (piVar7 != (int *)0x0) {
    piVar6 = piVar7;
  }
  piVar6[lVar11 * 5 + 4] = param_3[4];
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  piVar6 = piVar6 + lVar11 * 5;
  *piVar6 = *param_3;
  piVar6[1] = iVar2;
  piVar6[2] = iVar3;
  piVar6[3] = iVar4;
  lVar11 = FUN_140adeba6(*(undefined8 *)(param_1 + 0x58),param_3);
  *(short *)(lVar11 + 0xc) = *(short *)(lVar11 + 0xc) + 1;
  uVar8 = 0;
  if ((char)param_3[4] == '\x01') {
    *(short *)(lVar11 + 0xe) = *(short *)(lVar11 + 0xe) + 1;
LAB_14755b77f:
    *(undefined1 *)(lVar11 + 0x10) = 1;
  }
  return uVar8;
}



// FUNCTION 14755b7d0 FUN_14755b7d0 body=96 status=ok
// SIG undefined FUN_14755b7d0(void)

void FUN_14755b7d0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = param_1;
    *puVar1 = &PTR_FUN_14a47cf70;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  return;
}



// FUNCTION 14755b830 FUN_14755b830 body=116 status=ok
// SIG undefined FUN_14755b830(void)

void FUN_14755b830(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  if (param_2 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28);
    local_30 = local_28;
  }
  FUN_14755b8a6(param_1,&local_30,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755b8a6 FUN_14755b8a6 body=283 status=ok
// SIG undefined FUN_14755b8a6(void)

undefined8 FUN_14755b8a6(longlong param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar5 = FUN_144a78877(*param_2,param_2[1]);
  piVar6 = (int *)FUN_14756a42e(param_1 + 8,uVar5,param_2);
  piVar7 = *(int **)(piVar6 + 6);
  piVar9 = piVar7;
  if (piVar7 == (int *)0x0) {
    piVar9 = piVar6;
  }
  iVar2 = piVar6[8];
  lVar11 = (longlong)iVar2;
  if (lVar11 != 0) {
    lVar10 = lVar11 * 0x14;
    do {
      if (((*piVar9 == *param_3) && (piVar9[1] == param_3[1])) && (piVar9[2] == param_3[2])) {
        if (piVar9 != (int *)0x0) {
          cVar1 = (char)param_3[4];
          if ((char)piVar9[4] == cVar1) {
            return 2;
          }
          *(char *)(piVar9 + 4) = cVar1;
          lVar11 = FUN_140adecae(*(undefined8 *)(param_1 + 0x58));
          uVar8 = 1;
          if (lVar11 == 0) {
            return 1;
          }
          if (cVar1 == '\0') {
            *(short *)(lVar11 + 0xe) = *(short *)(lVar11 + 0xe) + -1;
            return 1;
          }
          *(short *)(lVar11 + 0xe) = *(short *)(lVar11 + 0xe) + 1;
          goto LAB_14755b970;
        }
        break;
      }
      piVar9 = piVar9 + 5;
      lVar10 = lVar10 + -0x14;
    } while (lVar10 != 0);
  }
  piVar6[8] = iVar2 + 1U;
  if ((uint)piVar6[9] < iVar2 + 1U) {
    FUN_14052d4a2(piVar6,iVar2);
    piVar7 = *(int **)(piVar6 + 6);
  }
  if (piVar7 != (int *)0x0) {
    piVar6 = piVar7;
  }
  piVar6[lVar11 * 5 + 4] = param_3[4];
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  piVar6 = piVar6 + lVar11 * 5;
  *piVar6 = *param_3;
  piVar6[1] = iVar2;
  piVar6[2] = iVar3;
  piVar6[3] = iVar4;
  lVar11 = FUN_140adeba6(*(undefined8 *)(param_1 + 0x58),param_3);
  *(short *)(lVar11 + 0xc) = *(short *)(lVar11 + 0xc) + 1;
  uVar8 = 0;
  if ((char)param_3[4] == '\x01') {
    *(short *)(lVar11 + 0xe) = *(short *)(lVar11 + 0xe) + 1;
LAB_14755b970:
    *(undefined1 *)(lVar11 + 0x10) = 1;
  }
  return uVar8;
}



// FUNCTION 14755b9c2 FUN_14755b9c2 body=241 status=ok
// SIG undefined FUN_14755b9c2(void)

void FUN_14755b9c2(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar2 = FUN_144a78877(*param_2,param_2[1]);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar4 = (longlong)iVar3 * 0x38;
        lVar1 = lVar5 + lVar4;
        if ((*(int *)(lVar5 + lVar4) == *param_2) && (*(int *)(lVar5 + 4 + lVar4) == param_2[1])) {
          if (lVar1 + 8 == 0 || lVar1 == 0) {
            return;
          }
          lVar5 = (longlong)*(int *)(lVar1 + 0x28);
          if (0 < lVar5) {
            uVar6 = lVar5 + 1;
            lVar5 = lVar5 * 0x14;
            do {
              lVar5 = lVar5 + -0x14;
              lVar4 = *(longlong *)(lVar1 + 0x20);
              if (*(longlong *)(lVar1 + 0x20) == 0) {
                lVar4 = lVar1 + 8;
              }
              FUN_140cc0e78(*(undefined8 *)(param_1 + 0x58),lVar4 + lVar5);
              uVar6 = uVar6 - 1;
            } while (1 < uVar6);
          }
          FUN_14756aa36((longlong *)(param_1 + 8),param_2);
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x30);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14755babe FUN_14755babe body=321 status=ok
// SIG undefined FUN_14755babe(void)

undefined8 FUN_14755babe(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
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
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar7) || (uStack_48 != lVar2)) {
    do {
      lVar5 = *local_78 + (longlong)iStack_5c * 0x38;
      lVar3 = *(longlong *)(lVar5 + 0x20);
      if (*(longlong *)(lVar5 + 0x20) == 0) {
        lVar3 = lVar5 + 8;
      }
      if ((longlong)*(int *)(lVar5 + 0x28) != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(lVar3 + 0xc + lVar6) == param_2) {
            uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            goto LAB_14755bb4b;
          }
          lVar6 = lVar6 + 0x14;
        } while ((longlong)*(int *)(lVar5 + 0x28) * 0x14 != lVar6);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar7));
  }
  uVar4 = 0;
LAB_14755bb4b:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14755bc00 FUN_14755bc00 body=800 status=ok
// SIG undefined FUN_14755bc00(void)

void FUN_14755bc00(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = *(int *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if ((short)iVar4 == -1) {
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    local_50 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    iStack_8c = iStack_54;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_70 = 0;
    if (iStack_54 < *(int *)(local_60 + 0x18)) {
      do {
        FUN_14755bf22(param_3,*local_a8 + (longlong)iStack_8c * 0x38 + 8);
        local_90 = local_90 & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
      } while (iStack_8c < *(int *)(local_98 + 0x18));
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_14756a832(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
      }
    }
    FUN_14756ab42(plVar1);
  }
  else {
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    local_50 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    iStack_8c = iStack_54;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_70 = 0;
    if (iStack_54 < *(int *)(local_60 + 0x18)) {
      do {
        iVar9 = *(int *)(*local_a8 + 0x28 + (longlong)iStack_8c * 0x38);
        uVar10 = (ulonglong)iVar9;
        if (0 < (longlong)uVar10) {
          lVar2 = *local_a8 + (longlong)iStack_8c * 0x38;
          iVar14 = -iVar9;
          lVar12 = uVar10 * 0x14;
          uVar13 = uVar10;
          do {
            lVar11 = *(longlong *)(lVar2 + 0x20);
            if (*(longlong *)(lVar2 + 0x20) == 0) {
              lVar11 = lVar2 + 8;
            }
            if (*(int *)(lVar11 + -8 + lVar12) == iVar4) {
              iVar9 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
                FUN_14087648e(param_3,iVar9);
              }
              lVar11 = lVar11 + lVar12;
              lVar5 = *param_3;
              *(undefined4 *)(lVar5 + 0x10 + (longlong)iVar9 * 0x14) = *(undefined4 *)(lVar11 + -4);
              uVar7 = *(undefined8 *)(lVar11 + -0xc);
              puVar3 = (undefined8 *)(lVar5 + (longlong)iVar9 * 0x14);
              *puVar3 = *(undefined8 *)(lVar11 + -0x14);
              puVar3[1] = uVar7;
              uVar8 = *(uint *)(lVar2 + 0x28);
              if (uVar13 != uVar8) {
                lVar11 = *(longlong *)(lVar2 + 0x20);
                if (*(longlong *)(lVar2 + 0x20) == 0) {
                  lVar11 = lVar2 + 8;
                }
                memmove((void *)(lVar11 + lVar12 + -0x14),(void *)(lVar11 + lVar12),
                        (longlong)(int)(uVar8 + iVar14) * 0x14);
                uVar8 = *(uint *)(lVar2 + 0x28);
              }
              uVar10 = (ulonglong)(uVar8 - 1);
              *(uint *)(lVar2 + 0x28) = uVar8 - 1;
            }
            iVar9 = (int)uVar10;
            iVar14 = iVar14 + 1;
            lVar12 = lVar12 + -0x14;
            bVar6 = 1 < uVar13;
            uVar13 = uVar13 - 1;
          } while (bVar6);
        }
        if (iVar9 == 0) {
          FUN_14756aab6(local_80,iStack_8c);
          local_70 = CONCAT11(local_70._1_1_,1);
        }
        local_90 = local_90 & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
      } while (iStack_8c < *(int *)(local_98 + 0x18));
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_14756a832(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755bf22 FUN_14755bf22 body=110 status=ok
// SIG undefined FUN_14755bf22(void)

void FUN_14755bf22(longlong *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x20);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14087648e(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x18);
    if (*(void **)((longlong)param_2 + 0x18) == (void *)0x0) {
      _Src = param_2;
    }
    memcpy((void *)((longlong)iVar2 * 0x14 + *param_1),_Src,(longlong)(int)uVar1 * 0x14);
    return;
  }
  return;
}



// FUNCTION 14755bf90 FUN_14755bf90 body=548 status=ok
// SIG undefined FUN_14755bf90(void)

void FUN_14755bf90(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar8 = *(int *)(*local_a8 + 0x28 + (longlong)iStack_8c * 0x38);
      uVar9 = (ulonglong)iVar8;
      if (0 < (longlong)uVar9) {
        lVar2 = *local_a8 + (longlong)iStack_8c * 0x38;
        iVar12 = -iVar8;
        lVar13 = uVar9 * 0x14;
        uVar11 = uVar9;
        do {
          lVar10 = *(longlong *)(lVar2 + 0x20);
          if (*(longlong *)(lVar2 + 0x20) == 0) {
            lVar10 = lVar2 + 8;
          }
          if (*(int *)(lVar10 + -0x14 + lVar13) == param_2) {
            iVar8 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
              FUN_14087648e(param_3,iVar8);
            }
            lVar10 = lVar10 + lVar13;
            lVar4 = *param_3;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar10 + -4);
            uVar6 = *(undefined8 *)(lVar10 + -0xc);
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x14);
            *puVar3 = *(undefined8 *)(lVar10 + -0x14);
            puVar3[1] = uVar6;
            uVar7 = *(uint *)(lVar2 + 0x28);
            if (uVar11 != uVar7) {
              lVar10 = *(longlong *)(lVar2 + 0x20);
              if (*(longlong *)(lVar2 + 0x20) == 0) {
                lVar10 = lVar2 + 8;
              }
              memmove((void *)(lVar10 + lVar13 + -0x14),(void *)(lVar10 + lVar13),
                      (longlong)(int)(uVar7 + iVar12) * 0x14);
              uVar7 = *(uint *)(lVar2 + 0x28);
            }
            uVar9 = (ulonglong)(uVar7 - 1);
            *(uint *)(lVar2 + 0x28) = uVar7 - 1;
          }
          iVar8 = (int)uVar9;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + -0x14;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      if (iVar8 == 0) {
        FUN_14756aab6(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756a832(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755c1b6 FUN_14755c1b6 body=621 status=ok
// SIG undefined FUN_14755c1b6(void)

void FUN_14755c1b6(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar11 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_b0 = param_4;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar11;
  local_80 = plVar11;
  local_78 = plVar11;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar7 = *(int *)(*local_a8 + 0x28 + (longlong)iStack_8c * 0x38);
      uVar8 = (ulonglong)iVar7;
      if (0 < (longlong)uVar8) {
        lVar1 = *local_a8 + (longlong)iStack_8c * 0x38;
        iVar12 = -iVar7;
        lVar10 = uVar8 * 0x14;
        plVar11 = local_b0;
        uVar13 = uVar8;
        do {
          lVar9 = *(longlong *)(lVar1 + 0x20);
          if (*(longlong *)(lVar1 + 0x20) == 0) {
            lVar9 = lVar1 + 8;
          }
          if ((*(int *)(lVar9 + -0x10 + lVar10) == param_2) &&
             ((param_3 == -1 || (*(int *)(lVar9 + -0xc + lVar10) == param_3)))) {
            iVar7 = (int)plVar11[1];
            *(uint *)(plVar11 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)plVar11 + 0xc) < iVar7 + 1U) {
              FUN_14087648e(plVar11,iVar7);
              plVar11 = local_b0;
            }
            lVar9 = lVar9 + lVar10;
            lVar3 = *plVar11;
            *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar7 * 0x14) = *(undefined4 *)(lVar9 + -4);
            uVar5 = *(undefined8 *)(lVar9 + -0xc);
            puVar2 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x14);
            *puVar2 = *(undefined8 *)(lVar9 + -0x14);
            puVar2[1] = uVar5;
            uVar6 = *(uint *)(lVar1 + 0x28);
            if (uVar13 != uVar6) {
              lVar9 = *(longlong *)(lVar1 + 0x20);
              if (*(longlong *)(lVar1 + 0x20) == 0) {
                lVar9 = lVar1 + 8;
              }
              memmove((void *)(lVar9 + lVar10 + -0x14),(void *)(lVar9 + lVar10),
                      (longlong)(int)(uVar6 + iVar12) * 0x14);
              uVar6 = *(uint *)(lVar1 + 0x28);
              plVar11 = local_b0;
            }
            uVar8 = (ulonglong)(uVar6 - 1);
            *(uint *)(lVar1 + 0x28) = uVar6 - 1;
          }
          iVar7 = (int)uVar8;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + -0x14;
          bVar4 = 1 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar4);
      }
      if (iVar7 == 0) {
        FUN_14756aab6(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756a832(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755c424 FUN_14755c424 body=548 status=ok
// SIG undefined FUN_14755c424(void)

void FUN_14755c424(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar8 = *(int *)(*local_a8 + 0x28 + (longlong)iStack_8c * 0x38);
      uVar9 = (ulonglong)iVar8;
      if (0 < (longlong)uVar9) {
        lVar2 = *local_a8 + (longlong)iStack_8c * 0x38;
        iVar12 = -iVar8;
        lVar13 = uVar9 * 0x14;
        uVar11 = uVar9;
        do {
          lVar10 = *(longlong *)(lVar2 + 0x20);
          if (*(longlong *)(lVar2 + 0x20) == 0) {
            lVar10 = lVar2 + 8;
          }
          if (*(int *)(lVar10 + -8 + lVar13) == param_2) {
            iVar8 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
              FUN_14087648e(param_3,iVar8);
            }
            lVar10 = lVar10 + lVar13;
            lVar4 = *param_3;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar10 + -4);
            uVar6 = *(undefined8 *)(lVar10 + -0xc);
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x14);
            *puVar3 = *(undefined8 *)(lVar10 + -0x14);
            puVar3[1] = uVar6;
            uVar7 = *(uint *)(lVar2 + 0x28);
            if (uVar11 != uVar7) {
              lVar10 = *(longlong *)(lVar2 + 0x20);
              if (*(longlong *)(lVar2 + 0x20) == 0) {
                lVar10 = lVar2 + 8;
              }
              memmove((void *)(lVar10 + lVar13 + -0x14),(void *)(lVar10 + lVar13),
                      (longlong)(int)(uVar7 + iVar12) * 0x14);
              uVar7 = *(uint *)(lVar2 + 0x28);
            }
            uVar9 = (ulonglong)(uVar7 - 1);
            *(uint *)(lVar2 + 0x28) = uVar7 - 1;
          }
          iVar8 = (int)uVar9;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + -0x14;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      if (iVar8 == 0) {
        FUN_14756aab6(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756a832(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755c654 FUN_14755c654 body=321 status=ok
// SIG undefined FUN_14755c654(void)

undefined8 FUN_14755c654(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
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
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar7) || (uStack_48 != lVar2)) {
    do {
      lVar5 = *local_78 + (longlong)iStack_5c * 0x40;
      lVar3 = *(longlong *)(lVar5 + 0x28);
      if (*(longlong *)(lVar5 + 0x28) == 0) {
        lVar3 = lVar5 + 0x10;
      }
      if ((longlong)*(int *)(lVar5 + 0x30) != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(lVar3 + 0xc + lVar6) == param_2) {
            uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            goto LAB_14755c6e1;
          }
          lVar6 = lVar6 + 0x14;
        } while ((longlong)*(int *)(lVar5 + 0x30) * 0x14 != lVar6);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar7));
  }
  uVar4 = 0;
LAB_14755c6e1:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14755c796 FUN_14755c796 body=618 status=ok
// SIG undefined FUN_14755c796(void)

void FUN_14755c796(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar11 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_b0 = param_4;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar11;
  local_80 = plVar11;
  local_78 = plVar11;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar7 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
      uVar8 = (ulonglong)iVar7;
      if (0 < (longlong)uVar8) {
        lVar1 = *local_a8 + (longlong)iStack_8c * 0x40;
        iVar12 = -iVar7;
        lVar10 = uVar8 * 0x14;
        plVar11 = local_b0;
        uVar13 = uVar8;
        do {
          lVar9 = *(longlong *)(lVar1 + 0x28);
          if (*(longlong *)(lVar1 + 0x28) == 0) {
            lVar9 = lVar1 + 0x10;
          }
          if ((*(int *)(lVar9 + -0x10 + lVar10) == param_2) &&
             ((param_3 == -1 || (*(int *)(lVar9 + -0xc + lVar10) == param_3)))) {
            iVar7 = (int)plVar11[1];
            *(uint *)(plVar11 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)plVar11 + 0xc) < iVar7 + 1U) {
              FUN_14087648e(plVar11,iVar7);
              plVar11 = local_b0;
            }
            lVar9 = lVar9 + lVar10;
            lVar3 = *plVar11;
            *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar7 * 0x14) = *(undefined4 *)(lVar9 + -4);
            uVar5 = *(undefined8 *)(lVar9 + -0xc);
            puVar2 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x14);
            *puVar2 = *(undefined8 *)(lVar9 + -0x14);
            puVar2[1] = uVar5;
            uVar6 = *(uint *)(lVar1 + 0x30);
            if (uVar13 != uVar6) {
              lVar9 = *(longlong *)(lVar1 + 0x28);
              if (*(longlong *)(lVar1 + 0x28) == 0) {
                lVar9 = lVar1 + 0x10;
              }
              memmove((void *)(lVar9 + lVar10 + -0x14),(void *)(lVar9 + lVar10),
                      (longlong)(int)(uVar6 + iVar12) * 0x14);
              uVar6 = *(uint *)(lVar1 + 0x30);
              plVar11 = local_b0;
            }
            uVar8 = (ulonglong)(uVar6 - 1);
            *(uint *)(lVar1 + 0x30) = uVar6 - 1;
          }
          iVar7 = (int)uVar8;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + -0x14;
          bVar4 = 1 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar4);
      }
      if (iVar7 == 0) {
        FUN_140da27c2(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756acc6(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755ca02 FUN_14755ca02 body=545 status=ok
// SIG undefined FUN_14755ca02(void)

void FUN_14755ca02(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar8 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
      uVar9 = (ulonglong)iVar8;
      if (0 < (longlong)uVar9) {
        lVar2 = *local_a8 + (longlong)iStack_8c * 0x40;
        iVar12 = -iVar8;
        lVar13 = uVar9 * 0x14;
        uVar11 = uVar9;
        do {
          lVar10 = *(longlong *)(lVar2 + 0x28);
          if (*(longlong *)(lVar2 + 0x28) == 0) {
            lVar10 = lVar2 + 0x10;
          }
          if (*(int *)(lVar10 + -8 + lVar13) == param_2) {
            iVar8 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
              FUN_14087648e(param_3,iVar8);
            }
            lVar10 = lVar10 + lVar13;
            lVar4 = *param_3;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar10 + -4);
            uVar6 = *(undefined8 *)(lVar10 + -0xc);
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x14);
            *puVar3 = *(undefined8 *)(lVar10 + -0x14);
            puVar3[1] = uVar6;
            uVar7 = *(uint *)(lVar2 + 0x30);
            if (uVar11 != uVar7) {
              lVar10 = *(longlong *)(lVar2 + 0x28);
              if (*(longlong *)(lVar2 + 0x28) == 0) {
                lVar10 = lVar2 + 0x10;
              }
              memmove((void *)(lVar10 + lVar13 + -0x14),(void *)(lVar10 + lVar13),
                      (longlong)(int)(uVar7 + iVar12) * 0x14);
              uVar7 = *(uint *)(lVar2 + 0x30);
            }
            uVar9 = (ulonglong)(uVar7 - 1);
            *(uint *)(lVar2 + 0x30) = uVar7 - 1;
          }
          iVar8 = (int)uVar9;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + -0x14;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      if (iVar8 == 0) {
        FUN_140da27c2(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756acc6(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755cc24 FUN_14755cc24 body=189 status=ok
// SIG undefined FUN_14755cc24(void)

void FUN_14755cc24(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)(param_1 + 8);
  uVar2 = FUN_144a78877(*param_2,param_2[1]);
  iVar3 = FUN_14756af16(plVar1,*(ushort *)(param_2 + 2) ^ uVar2 ^ param_2[3],param_2);
  if (iVar3 != -1) {
    lVar7 = (longlong)iVar3 * 0x40 + *plVar1;
    if (lVar7 + 0x10 != 0 && lVar7 != 0) {
      lVar5 = (longlong)*(int *)(lVar7 + 0x30);
      if (0 < lVar5) {
        uVar6 = lVar5 + 1;
        lVar5 = lVar5 * 0x14;
        do {
          lVar5 = lVar5 + -0x14;
          lVar4 = *(longlong *)(lVar7 + 0x28);
          if (*(longlong *)(lVar7 + 0x28) == 0) {
            lVar4 = lVar7 + 0x10;
          }
          FUN_140cc0e78(*(undefined8 *)(param_1 + 0x58),lVar4 + lVar5);
          uVar6 = uVar6 - 1;
        } while (1 < uVar6);
      }
      FUN_14756b4a2(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14755ccec FUN_14755ccec body=321 status=ok
// SIG undefined FUN_14755ccec(void)

undefined8 FUN_14755ccec(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
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
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar7) || (uStack_48 != lVar2)) {
    do {
      lVar5 = *local_78 + (longlong)iStack_5c * 0x40;
      lVar3 = *(longlong *)(lVar5 + 0x28);
      if (*(longlong *)(lVar5 + 0x28) == 0) {
        lVar3 = lVar5 + 0x10;
      }
      if ((longlong)*(int *)(lVar5 + 0x30) != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(lVar3 + 0xc + lVar6) == param_2) {
            uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            goto LAB_14755cd79;
          }
          lVar6 = lVar6 + 0x14;
        } while ((longlong)*(int *)(lVar5 + 0x30) * 0x14 != lVar6);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar7));
  }
  uVar4 = 0;
LAB_14755cd79:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14755ce2e FUN_14755ce2e body=801 status=ok
// SIG undefined FUN_14755ce2e(void)

void FUN_14755ce2e(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = *(int *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if ((short)iVar4 == -1) {
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    local_50 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    iStack_8c = iStack_54;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_70 = 0;
    if (iStack_54 < *(int *)(local_60 + 0x18)) {
      do {
        FUN_14755bf22(param_3,*local_a8 + (longlong)iStack_8c * 0x40 + 0x10);
        local_90 = local_90 & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
      } while (iStack_8c < *(int *)(local_98 + 0x18));
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_14756b28c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
      }
    }
    FUN_14756b5ce(plVar1);
  }
  else {
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    local_50 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    iStack_8c = iStack_54;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_70 = 0;
    if (iStack_54 < *(int *)(local_60 + 0x18)) {
      do {
        iVar9 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
        uVar10 = (ulonglong)iVar9;
        if (0 < (longlong)uVar10) {
          lVar2 = *local_a8 + (longlong)iStack_8c * 0x40;
          iVar14 = -iVar9;
          lVar12 = uVar10 * 0x14;
          uVar13 = uVar10;
          do {
            lVar11 = *(longlong *)(lVar2 + 0x28);
            if (*(longlong *)(lVar2 + 0x28) == 0) {
              lVar11 = lVar2 + 0x10;
            }
            if (*(int *)(lVar11 + -8 + lVar12) == iVar4) {
              iVar9 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar9 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
                FUN_14087648e(param_3,iVar9);
              }
              lVar11 = lVar11 + lVar12;
              lVar5 = *param_3;
              *(undefined4 *)(lVar5 + 0x10 + (longlong)iVar9 * 0x14) = *(undefined4 *)(lVar11 + -4);
              uVar7 = *(undefined8 *)(lVar11 + -0xc);
              puVar3 = (undefined8 *)(lVar5 + (longlong)iVar9 * 0x14);
              *puVar3 = *(undefined8 *)(lVar11 + -0x14);
              puVar3[1] = uVar7;
              uVar8 = *(uint *)(lVar2 + 0x30);
              if (uVar13 != uVar8) {
                lVar11 = *(longlong *)(lVar2 + 0x28);
                if (*(longlong *)(lVar2 + 0x28) == 0) {
                  lVar11 = lVar2 + 0x10;
                }
                memmove((void *)(lVar11 + lVar12 + -0x14),(void *)(lVar11 + lVar12),
                        (longlong)(int)(uVar8 + iVar14) * 0x14);
                uVar8 = *(uint *)(lVar2 + 0x30);
              }
              uVar10 = (ulonglong)(uVar8 - 1);
              *(uint *)(lVar2 + 0x30) = uVar8 - 1;
            }
            iVar9 = (int)uVar10;
            iVar14 = iVar14 + 1;
            lVar12 = lVar12 + -0x14;
            bVar6 = 1 < uVar13;
            uVar13 = uVar13 - 1;
          } while (bVar6);
        }
        if (iVar9 == 0) {
          FUN_14756b540(local_80,iStack_8c);
          local_70 = CONCAT11(local_70._1_1_,1);
        }
        local_90 = local_90 & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
      } while (iStack_8c < *(int *)(local_98 + 0x18));
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_14756b28c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755d150 FUN_14755d150 body=549 status=ok
// SIG undefined FUN_14755d150(void)

void FUN_14755d150(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar8 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
      uVar9 = (ulonglong)iVar8;
      if (0 < (longlong)uVar9) {
        lVar2 = *local_a8 + (longlong)iStack_8c * 0x40;
        iVar12 = -iVar8;
        lVar13 = uVar9 * 0x14;
        uVar11 = uVar9;
        do {
          lVar10 = *(longlong *)(lVar2 + 0x28);
          if (*(longlong *)(lVar2 + 0x28) == 0) {
            lVar10 = lVar2 + 0x10;
          }
          if (*(int *)(lVar10 + -0x14 + lVar13) == param_2) {
            iVar8 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
              FUN_14087648e(param_3,iVar8);
            }
            lVar10 = lVar10 + lVar13;
            lVar4 = *param_3;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar10 + -4);
            uVar6 = *(undefined8 *)(lVar10 + -0xc);
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x14);
            *puVar3 = *(undefined8 *)(lVar10 + -0x14);
            puVar3[1] = uVar6;
            uVar7 = *(uint *)(lVar2 + 0x30);
            if (uVar11 != uVar7) {
              lVar10 = *(longlong *)(lVar2 + 0x28);
              if (*(longlong *)(lVar2 + 0x28) == 0) {
                lVar10 = lVar2 + 0x10;
              }
              memmove((void *)(lVar10 + lVar13 + -0x14),(void *)(lVar10 + lVar13),
                      (longlong)(int)(uVar7 + iVar12) * 0x14);
              uVar7 = *(uint *)(lVar2 + 0x30);
            }
            uVar9 = (ulonglong)(uVar7 - 1);
            *(uint *)(lVar2 + 0x30) = uVar7 - 1;
          }
          iVar8 = (int)uVar9;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + -0x14;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      if (iVar8 == 0) {
        FUN_14756b540(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756b28c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755d376 FUN_14755d376 body=622 status=ok
// SIG undefined FUN_14755d376(void)

void FUN_14755d376(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar11 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_b0 = param_4;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar11;
  local_80 = plVar11;
  local_78 = plVar11;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar7 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
      uVar8 = (ulonglong)iVar7;
      if (0 < (longlong)uVar8) {
        lVar1 = *local_a8 + (longlong)iStack_8c * 0x40;
        iVar12 = -iVar7;
        lVar10 = uVar8 * 0x14;
        plVar11 = local_b0;
        uVar13 = uVar8;
        do {
          lVar9 = *(longlong *)(lVar1 + 0x28);
          if (*(longlong *)(lVar1 + 0x28) == 0) {
            lVar9 = lVar1 + 0x10;
          }
          if ((*(int *)(lVar9 + -0x10 + lVar10) == param_2) &&
             ((param_3 == -1 || (*(int *)(lVar9 + -0xc + lVar10) == param_3)))) {
            iVar7 = (int)plVar11[1];
            *(uint *)(plVar11 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)plVar11 + 0xc) < iVar7 + 1U) {
              FUN_14087648e(plVar11,iVar7);
              plVar11 = local_b0;
            }
            lVar9 = lVar9 + lVar10;
            lVar3 = *plVar11;
            *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar7 * 0x14) = *(undefined4 *)(lVar9 + -4);
            uVar5 = *(undefined8 *)(lVar9 + -0xc);
            puVar2 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x14);
            *puVar2 = *(undefined8 *)(lVar9 + -0x14);
            puVar2[1] = uVar5;
            uVar6 = *(uint *)(lVar1 + 0x30);
            if (uVar13 != uVar6) {
              lVar9 = *(longlong *)(lVar1 + 0x28);
              if (*(longlong *)(lVar1 + 0x28) == 0) {
                lVar9 = lVar1 + 0x10;
              }
              memmove((void *)(lVar9 + lVar10 + -0x14),(void *)(lVar9 + lVar10),
                      (longlong)(int)(uVar6 + iVar12) * 0x14);
              uVar6 = *(uint *)(lVar1 + 0x30);
              plVar11 = local_b0;
            }
            uVar8 = (ulonglong)(uVar6 - 1);
            *(uint *)(lVar1 + 0x30) = uVar6 - 1;
          }
          iVar7 = (int)uVar8;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + -0x14;
          bVar4 = 1 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar4);
      }
      if (iVar7 == 0) {
        FUN_14756b540(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756b28c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755d5e6 FUN_14755d5e6 body=549 status=ok
// SIG undefined FUN_14755d5e6(void)

void FUN_14755d5e6(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar8 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
      uVar9 = (ulonglong)iVar8;
      if (0 < (longlong)uVar9) {
        lVar2 = *local_a8 + (longlong)iStack_8c * 0x40;
        iVar12 = -iVar8;
        lVar13 = uVar9 * 0x14;
        uVar11 = uVar9;
        do {
          lVar10 = *(longlong *)(lVar2 + 0x28);
          if (*(longlong *)(lVar2 + 0x28) == 0) {
            lVar10 = lVar2 + 0x10;
          }
          if (*(int *)(lVar10 + -8 + lVar13) == param_2) {
            iVar8 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
              FUN_14087648e(param_3,iVar8);
            }
            lVar10 = lVar10 + lVar13;
            lVar4 = *param_3;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar10 + -4);
            uVar6 = *(undefined8 *)(lVar10 + -0xc);
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x14);
            *puVar3 = *(undefined8 *)(lVar10 + -0x14);
            puVar3[1] = uVar6;
            uVar7 = *(uint *)(lVar2 + 0x30);
            if (uVar11 != uVar7) {
              lVar10 = *(longlong *)(lVar2 + 0x28);
              if (*(longlong *)(lVar2 + 0x28) == 0) {
                lVar10 = lVar2 + 0x10;
              }
              memmove((void *)(lVar10 + lVar13 + -0x14),(void *)(lVar10 + lVar13),
                      (longlong)(int)(uVar7 + iVar12) * 0x14);
              uVar7 = *(uint *)(lVar2 + 0x30);
            }
            uVar9 = (ulonglong)(uVar7 - 1);
            *(uint *)(lVar2 + 0x30) = uVar7 - 1;
          }
          iVar8 = (int)uVar9;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + -0x14;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      if (iVar8 == 0) {
        FUN_14756b540(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756b28c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755d80c FUN_14755d80c body=322 status=ok
// SIG undefined FUN_14755d80c(void)

void FUN_14755d80c(longlong param_1,ushort *param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar8 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x48);
    }
    iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uint)*param_2) * 4);
    if (iVar6 != -1) {
      lVar8 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = lVar8 + (longlong)iVar6 * 0x38;
        if (*(ushort *)(lVar8 + (longlong)iVar6 * 0x38) == *param_2) {
          lVar8 = lVar1 + 8;
          if (lVar8 == 0 || lVar1 == 0) {
            return;
          }
          iVar6 = *(int *)(lVar1 + 0x28);
          uVar4 = (ulonglong)iVar6;
          if (0 < (longlong)uVar4) {
            iVar9 = -iVar6;
            lVar7 = uVar4 * 0x14;
            uVar10 = uVar4;
            do {
              lVar7 = lVar7 + -0x14;
              lVar5 = *(longlong *)(lVar1 + 0x20);
              if (*(longlong *)(lVar1 + 0x20) == 0) {
                lVar5 = lVar8;
              }
              if (*(int *)(lVar5 + 4 + lVar7) == param_3) {
                FUN_140cc0e78(*(undefined8 *)(param_1 + 0x58),lVar5 + lVar7);
                uVar3 = *(uint *)(lVar1 + 0x28);
                if (uVar10 != uVar3) {
                  lVar5 = *(longlong *)(lVar1 + 0x20);
                  if (*(longlong *)(lVar1 + 0x20) == 0) {
                    lVar5 = lVar8;
                  }
                  memmove((void *)(lVar5 + lVar7),(void *)(lVar5 + lVar7 + 0x14),
                          (longlong)(int)(uVar3 + iVar9) * 0x14);
                  uVar3 = *(uint *)(lVar1 + 0x28);
                }
                uVar4 = (ulonglong)(uVar3 - 1);
                *(uint *)(lVar1 + 0x28) = uVar3 - 1;
              }
              iVar6 = (int)uVar4;
              iVar9 = iVar9 + 1;
              bVar2 = 1 < uVar10;
              uVar10 = uVar10 - 1;
            } while (bVar2);
          }
          if (iVar6 != 0) {
            return;
          }
          FUN_140cc0d60((longlong *)(param_1 + 8),param_2);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x30);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 14755d958 FUN_14755d958 body=321 status=ok
// SIG undefined FUN_14755d958(void)

undefined8 FUN_14755d958(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
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
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar7) || (uStack_48 != lVar2)) {
    do {
      lVar5 = *local_78 + (longlong)iStack_5c * 0x38;
      lVar3 = *(longlong *)(lVar5 + 0x20);
      if (*(longlong *)(lVar5 + 0x20) == 0) {
        lVar3 = lVar5 + 8;
      }
      if ((longlong)*(int *)(lVar5 + 0x28) != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(lVar3 + 0xc + lVar6) == param_2) {
            uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            goto LAB_14755d9e5;
          }
          lVar6 = lVar6 + 0x14;
        } while ((longlong)*(int *)(lVar5 + 0x28) * 0x14 != lVar6);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar7));
  }
  uVar4 = 0;
LAB_14755d9e5:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14755da9a FUN_14755da9a body=617 status=ok
// SIG undefined FUN_14755da9a(void)

void FUN_14755da9a(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar11 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_b0 = param_4;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar11;
  local_80 = plVar11;
  local_78 = plVar11;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar7 = *(int *)(*local_a8 + 0x28 + (longlong)iStack_8c * 0x38);
      uVar8 = (ulonglong)iVar7;
      if (0 < (longlong)uVar8) {
        lVar1 = *local_a8 + (longlong)iStack_8c * 0x38;
        iVar12 = -iVar7;
        lVar10 = uVar8 * 0x14;
        plVar11 = local_b0;
        uVar13 = uVar8;
        do {
          lVar9 = *(longlong *)(lVar1 + 0x20);
          if (*(longlong *)(lVar1 + 0x20) == 0) {
            lVar9 = lVar1 + 8;
          }
          if ((*(int *)(lVar9 + -0x10 + lVar10) == param_2) &&
             ((param_3 == -1 || (*(int *)(lVar9 + -0xc + lVar10) == param_3)))) {
            iVar7 = (int)plVar11[1];
            *(uint *)(plVar11 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)plVar11 + 0xc) < iVar7 + 1U) {
              FUN_14087648e(plVar11,iVar7);
              plVar11 = local_b0;
            }
            lVar9 = lVar9 + lVar10;
            lVar3 = *plVar11;
            *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar7 * 0x14) = *(undefined4 *)(lVar9 + -4);
            uVar5 = *(undefined8 *)(lVar9 + -0xc);
            puVar2 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x14);
            *puVar2 = *(undefined8 *)(lVar9 + -0x14);
            puVar2[1] = uVar5;
            uVar6 = *(uint *)(lVar1 + 0x28);
            if (uVar13 != uVar6) {
              lVar9 = *(longlong *)(lVar1 + 0x20);
              if (*(longlong *)(lVar1 + 0x20) == 0) {
                lVar9 = lVar1 + 8;
              }
              memmove((void *)(lVar9 + lVar10 + -0x14),(void *)(lVar9 + lVar10),
                      (longlong)(int)(uVar6 + iVar12) * 0x14);
              uVar6 = *(uint *)(lVar1 + 0x28);
              plVar11 = local_b0;
            }
            uVar8 = (ulonglong)(uVar6 - 1);
            *(uint *)(lVar1 + 0x28) = uVar6 - 1;
          }
          iVar7 = (int)uVar8;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + -0x14;
          bVar4 = 1 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar4);
      }
      if (iVar7 == 0) {
        FUN_140cc0dc4(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756b752(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755dd04 FUN_14755dd04 body=544 status=ok
// SIG undefined FUN_14755dd04(void)

void FUN_14755dd04(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar8 = *(int *)(*local_a8 + 0x28 + (longlong)iStack_8c * 0x38);
      uVar9 = (ulonglong)iVar8;
      if (0 < (longlong)uVar9) {
        lVar2 = *local_a8 + (longlong)iStack_8c * 0x38;
        iVar12 = -iVar8;
        lVar13 = uVar9 * 0x14;
        uVar11 = uVar9;
        do {
          lVar10 = *(longlong *)(lVar2 + 0x20);
          if (*(longlong *)(lVar2 + 0x20) == 0) {
            lVar10 = lVar2 + 8;
          }
          if (*(int *)(lVar10 + -8 + lVar13) == param_2) {
            iVar8 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
              FUN_14087648e(param_3,iVar8);
            }
            lVar10 = lVar10 + lVar13;
            lVar4 = *param_3;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar10 + -4);
            uVar6 = *(undefined8 *)(lVar10 + -0xc);
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x14);
            *puVar3 = *(undefined8 *)(lVar10 + -0x14);
            puVar3[1] = uVar6;
            uVar7 = *(uint *)(lVar2 + 0x28);
            if (uVar11 != uVar7) {
              lVar10 = *(longlong *)(lVar2 + 0x20);
              if (*(longlong *)(lVar2 + 0x20) == 0) {
                lVar10 = lVar2 + 8;
              }
              memmove((void *)(lVar10 + lVar13 + -0x14),(void *)(lVar10 + lVar13),
                      (longlong)(int)(uVar7 + iVar12) * 0x14);
              uVar7 = *(uint *)(lVar2 + 0x28);
            }
            uVar9 = (ulonglong)(uVar7 - 1);
            *(uint *)(lVar2 + 0x28) = uVar7 - 1;
          }
          iVar8 = (int)uVar9;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + -0x14;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      if (iVar8 == 0) {
        FUN_140cc0dc4(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756b752(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755df30 FUN_14755df30 body=321 status=ok
// SIG undefined FUN_14755df30(void)

undefined8 FUN_14755df30(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
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
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar7) || (uStack_48 != lVar2)) {
    do {
      lVar5 = *local_78 + (longlong)iStack_5c * 0x40;
      lVar3 = *(longlong *)(lVar5 + 0x28);
      if (*(longlong *)(lVar5 + 0x28) == 0) {
        lVar3 = lVar5 + 0x10;
      }
      if ((longlong)*(int *)(lVar5 + 0x30) != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(lVar3 + 0xc + lVar6) == param_2) {
            uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
            goto LAB_14755dfbd;
          }
          lVar6 = lVar6 + 0x14;
        } while ((longlong)*(int *)(lVar5 + 0x30) * 0x14 != lVar6);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar7));
  }
  uVar4 = 0;
LAB_14755dfbd:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14755e072 FUN_14755e072 body=549 status=ok
// SIG undefined FUN_14755e072(void)

void FUN_14755e072(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar8 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
      uVar9 = (ulonglong)iVar8;
      if (0 < (longlong)uVar9) {
        lVar2 = *local_a8 + (longlong)iStack_8c * 0x40;
        iVar12 = -iVar8;
        lVar13 = uVar9 * 0x14;
        uVar11 = uVar9;
        do {
          lVar10 = *(longlong *)(lVar2 + 0x28);
          if (*(longlong *)(lVar2 + 0x28) == 0) {
            lVar10 = lVar2 + 0x10;
          }
          if (*(int *)(lVar10 + -0x14 + lVar13) == param_2) {
            iVar8 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
              FUN_14087648e(param_3,iVar8);
            }
            lVar10 = lVar10 + lVar13;
            lVar4 = *param_3;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar10 + -4);
            uVar6 = *(undefined8 *)(lVar10 + -0xc);
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x14);
            *puVar3 = *(undefined8 *)(lVar10 + -0x14);
            puVar3[1] = uVar6;
            uVar7 = *(uint *)(lVar2 + 0x30);
            if (uVar11 != uVar7) {
              lVar10 = *(longlong *)(lVar2 + 0x28);
              if (*(longlong *)(lVar2 + 0x28) == 0) {
                lVar10 = lVar2 + 0x10;
              }
              memmove((void *)(lVar10 + lVar13 + -0x14),(void *)(lVar10 + lVar13),
                      (longlong)(int)(uVar7 + iVar12) * 0x14);
              uVar7 = *(uint *)(lVar2 + 0x30);
            }
            uVar9 = (ulonglong)(uVar7 - 1);
            *(uint *)(lVar2 + 0x30) = uVar7 - 1;
          }
          iVar8 = (int)uVar9;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + -0x14;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      if (iVar8 == 0) {
        FUN_1461f10d4(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756b91c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755e298 FUN_14755e298 body=622 status=ok
// SIG undefined FUN_14755e298(void)

void FUN_14755e298(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar11 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_b0 = param_4;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar11;
  local_80 = plVar11;
  local_78 = plVar11;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar7 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
      uVar8 = (ulonglong)iVar7;
      if (0 < (longlong)uVar8) {
        lVar1 = *local_a8 + (longlong)iStack_8c * 0x40;
        iVar12 = -iVar7;
        lVar10 = uVar8 * 0x14;
        plVar11 = local_b0;
        uVar13 = uVar8;
        do {
          lVar9 = *(longlong *)(lVar1 + 0x28);
          if (*(longlong *)(lVar1 + 0x28) == 0) {
            lVar9 = lVar1 + 0x10;
          }
          if ((*(int *)(lVar9 + -0x10 + lVar10) == param_2) &&
             ((param_3 == -1 || (*(int *)(lVar9 + -0xc + lVar10) == param_3)))) {
            iVar7 = (int)plVar11[1];
            *(uint *)(plVar11 + 1) = iVar7 + 1U;
            if (*(uint *)((longlong)plVar11 + 0xc) < iVar7 + 1U) {
              FUN_14087648e(plVar11,iVar7);
              plVar11 = local_b0;
            }
            lVar9 = lVar9 + lVar10;
            lVar3 = *plVar11;
            *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar7 * 0x14) = *(undefined4 *)(lVar9 + -4);
            uVar5 = *(undefined8 *)(lVar9 + -0xc);
            puVar2 = (undefined8 *)(lVar3 + (longlong)iVar7 * 0x14);
            *puVar2 = *(undefined8 *)(lVar9 + -0x14);
            puVar2[1] = uVar5;
            uVar6 = *(uint *)(lVar1 + 0x30);
            if (uVar13 != uVar6) {
              lVar9 = *(longlong *)(lVar1 + 0x28);
              if (*(longlong *)(lVar1 + 0x28) == 0) {
                lVar9 = lVar1 + 0x10;
              }
              memmove((void *)(lVar9 + lVar10 + -0x14),(void *)(lVar9 + lVar10),
                      (longlong)(int)(uVar6 + iVar12) * 0x14);
              uVar6 = *(uint *)(lVar1 + 0x30);
              plVar11 = local_b0;
            }
            uVar8 = (ulonglong)(uVar6 - 1);
            *(uint *)(lVar1 + 0x30) = uVar6 - 1;
          }
          iVar7 = (int)uVar8;
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + -0x14;
          bVar4 = 1 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar4);
      }
      if (iVar7 == 0) {
        FUN_1461f10d4(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756b91c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755e508 FUN_14755e508 body=549 status=ok
// SIG undefined FUN_14755e508(void)

void FUN_14755e508(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_90 = local_58;
  iStack_8c = iStack_54;
  local_88 = local_50;
  local_84 = local_4c;
  local_a0 = local_68;
  local_98 = local_60;
  local_70 = 0;
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      iVar8 = *(int *)(*local_a8 + 0x30 + (longlong)iStack_8c * 0x40);
      uVar9 = (ulonglong)iVar8;
      if (0 < (longlong)uVar9) {
        lVar2 = *local_a8 + (longlong)iStack_8c * 0x40;
        iVar12 = -iVar8;
        lVar13 = uVar9 * 0x14;
        uVar11 = uVar9;
        do {
          lVar10 = *(longlong *)(lVar2 + 0x28);
          if (*(longlong *)(lVar2 + 0x28) == 0) {
            lVar10 = lVar2 + 0x10;
          }
          if (*(int *)(lVar10 + -8 + lVar13) == param_2) {
            iVar8 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
              FUN_14087648e(param_3,iVar8);
            }
            lVar10 = lVar10 + lVar13;
            lVar4 = *param_3;
            *(undefined4 *)(lVar4 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar10 + -4);
            uVar6 = *(undefined8 *)(lVar10 + -0xc);
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar8 * 0x14);
            *puVar3 = *(undefined8 *)(lVar10 + -0x14);
            puVar3[1] = uVar6;
            uVar7 = *(uint *)(lVar2 + 0x30);
            if (uVar11 != uVar7) {
              lVar10 = *(longlong *)(lVar2 + 0x28);
              if (*(longlong *)(lVar2 + 0x28) == 0) {
                lVar10 = lVar2 + 0x10;
              }
              memmove((void *)(lVar10 + lVar13 + -0x14),(void *)(lVar10 + lVar13),
                      (longlong)(int)(uVar7 + iVar12) * 0x14);
              uVar7 = *(uint *)(lVar2 + 0x30);
            }
            uVar9 = (ulonglong)(uVar7 - 1);
            *(uint *)(lVar2 + 0x30) = uVar7 - 1;
          }
          iVar8 = (int)uVar9;
          iVar12 = iVar12 + 1;
          lVar13 = lVar13 + -0x14;
          bVar5 = 1 < uVar11;
          uVar11 = uVar11 - 1;
        } while (bVar5);
      }
      if (iVar8 == 0) {
        FUN_1461f10d4(local_80,iStack_8c);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < *(int *)(local_98 + 0x18));
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_14756b91c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755e72e FUN_14755e72e body=126 status=ok
// SIG undefined FUN_14755e72e(void)

void FUN_14755e72e(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  if (param_2 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_40 = local_30;
  }
  local_38 = param_3;
  local_34 = param_4;
  FUN_14755cc24(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755e7ae FUN_14755e7ae body=14 status=ok
// SIG undefined FUN_14755e7ae(void)

void FUN_14755e7ae(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 14755e7ca FUN_14755e7ca body=273 status=ok
// SIG undefined FUN_14755e7ca(void)

longlong * FUN_14755e7ca(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_3;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0x18);
        if (*plVar1 == lVar2) {
          if ((plVar1 != (longlong *)0x0) &&
             (lVar4 = plVar1[1], *(int *)param_2 = (int)lVar4, (int)lVar4 != -1))
          goto LAB_14755e8b4;
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  FUN_14756bbb4(param_1 + 0x68,&local_48);
  *local_40 = lVar2;
  *(byte *)(local_40 + 5) = *(byte *)(local_40 + 5) & 0xfc | 2;
  FUN_14756bcec(local_40 + 1);
  *(undefined1 *)(local_40 + 6) = 0;
  *(int *)param_2 = (int)local_48;
  local_48 = param_3;
  local_40 = param_2;
  FUN_1458160bc((longlong *)(param_1 + 0x18),local_4c,&local_48,0);
LAB_14755e8b4:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755e8dc FUN_14755e8dc body=74 status=ok
// SIG undefined FUN_14755e8dc(void)

void FUN_14755e8dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014755e922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14755e926 FUN_14755e926 body=103 status=ok
// SIG undefined FUN_14755e926(void)

void FUN_14755e926(int *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  if (lVar1 != 0) {
    FUN_14479d2ce(lVar1 + 0x1c);
    if (*(char *)(lVar1 + 0x30) != '\0') goto LAB_14755e976;
  }
  if (*param_1 == 0) {
    return;
  }
LAB_14755e976:
  FUN_147557672(param_1,param_2,param_3);
  return;
}



// FUNCTION 14755e98e FUN_14755e98e body=144 status=ok
// SIG undefined FUN_14755e98e(void)

ulonglong FUN_14755e98e(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar8;
  uint uVar9;
  undefined7 uVar7;
  
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x30 + (longlong)param_2 * 0x38);
  uVar7 = (undefined7)((ulonglong)*(longlong *)(param_1 + 0x68) >> 8);
  uVar5 = CONCAT71(uVar7,bVar2);
  if ((param_3 != '\x01') && (uVar5 = CONCAT71(uVar7,1), ((bVar2 & 2) == 0 & bVar2) == 0)) {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    uVar9 = 0;
    uVar8 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar8 >> 1) + uVar9;
        if (*(int *)(lVar6 + (ulonglong)uVar1 * 0x30) < param_2) {
          uVar9 = uVar1 + (uVar8 & 1);
        }
        bVar4 = 1 < uVar8;
        uVar8 = uVar8 >> 1;
      } while (bVar4);
    }
    if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar6 + (ulonglong)uVar9 * 0x30) <= param_2)) {
      lVar6 = lVar6 + (ulonglong)uVar9 * 0x30;
      uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),lVar6 != -8);
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14755ea1e FUN_14755ea1e body=234 status=ok
// SIG undefined FUN_14755ea1e(void)

void FUN_14755ea1e(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar7 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68);
  local_24 = param_2;
  if (param_3 == '\x01') {
    FUN_14756bcec((undefined4 *)(lVar7 + 8));
    if ((*(byte *)(param_4 + 8) & 1) != 0) {
      *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) | 1;
      bVar1 = *(byte *)(param_4 + 8);
      *(byte *)(param_4 + 8) = bVar1 & 0xfe;
      *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) & 0xfd | bVar1 & 2;
      uVar2 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      uVar6 = *(undefined8 *)(param_4 + 6);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_4 + 4);
      *(undefined8 *)(lVar7 + 0x20) = uVar6;
      *(undefined4 *)(lVar7 + 8) = uVar2;
      *(undefined4 *)(lVar7 + 0xc) = uVar3;
      *(undefined4 *)(lVar7 + 0x10) = uVar4;
      *(undefined4 *)(lVar7 + 0x14) = uVar5;
    }
    *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 3;
  }
  else if ((*(byte *)(lVar7 + 0x30) & 1) == 0) {
    FUN_14756bcec((undefined4 *)(lVar7 + 8));
    if ((*(byte *)(param_4 + 8) & 1) != 0) {
      *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) | 1;
      bVar1 = *(byte *)(param_4 + 8);
      *(byte *)(param_4 + 8) = bVar1 & 0xfe;
      *(byte *)(lVar7 + 0x28) = *(byte *)(lVar7 + 0x28) & 0xfd | bVar1 & 2;
      uVar2 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      uVar6 = *(undefined8 *)(param_4 + 6);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_4 + 4);
      *(undefined8 *)(lVar7 + 0x20) = uVar6;
      *(undefined4 *)(lVar7 + 8) = uVar2;
      *(undefined4 *)(lVar7 + 0xc) = uVar3;
      *(undefined4 *)(lVar7 + 0x10) = uVar4;
      *(undefined4 *)(lVar7 + 0x14) = uVar5;
    }
    *(byte *)(lVar7 + 0x30) = *(byte *)(lVar7 + 0x30) | 1;
  }
  else {
    FUN_14756d280(param_1 + 0xa0,&local_24,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755eb0a FUN_14755eb0a body=73 status=ok
// SIG undefined FUN_14755eb0a(void)

undefined8 * FUN_14755eb0a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47cd70;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1475643d0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755eb54 FUN_14755eb54 body=73 status=ok
// SIG undefined FUN_14755eb54(void)

undefined8 * FUN_14755eb54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47cdb0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140956bce(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755eb9e FUN_14755eb9e body=73 status=ok
// SIG undefined FUN_14755eb9e(void)

undefined8 * FUN_14755eb9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47cdf0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14756453e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755ebe8 FUN_14755ebe8 body=73 status=ok
// SIG undefined FUN_14755ebe8(void)

undefined8 * FUN_14755ebe8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47ce30;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140957524(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755ec32 FUN_14755ec32 body=73 status=ok
// SIG undefined FUN_14755ec32(void)

undefined8 * FUN_14755ec32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47ce70;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145759db6(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755ec7c FUN_14755ec7c body=56 status=ok
// SIG undefined FUN_14755ec7c(void)

void FUN_14755ec7c(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00014755eca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14755ecd2 FUN_14755ecd2 body=64 status=ok
// SIG undefined FUN_14755ecd2(void)

undefined8 * FUN_14755ecd2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a477880;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755ed12 FUN_14755ed12 body=64 status=ok
// SIG undefined FUN_14755ed12(void)

undefined8 * FUN_14755ed12(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4778a0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755ed54 FUN_14755ed54 body=77 status=ok
// SIG undefined FUN_14755ed54(void)

undefined8 * FUN_14755ed54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4811d0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755eda2 FUN_14755eda2 body=32 status=ok
// SIG undefined FUN_14755eda2(void)

undefined8 FUN_14755eda2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FMovieSceneTrackEvaluator");
  return param_2;
}



// FUNCTION 14755edc2 FUN_14755edc2 body=57 status=ok
// SIG undefined FUN_14755edc2(void)

undefined8 * FUN_14755edc2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47b390;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755edfc FUN_14755edfc body=55 status=ok
// SIG undefined FUN_14755edfc(void)

void FUN_14755edfc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab30c0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab30c0 = FUN_140002ddd(FUN_14633e4d5,uVar1,L"MovieScenePropertySectionTemplate");
  }
  return;
}



// FUNCTION 14755ee3e FUN_14755ee3e body=73 status=ok
// SIG undefined FUN_14755ee3e(void)

undefined8 * FUN_14755ee3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47cdf0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14756453e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755ee88 FUN_14755ee88 body=73 status=ok
// SIG undefined FUN_14755ee88(void)

undefined8 * FUN_14755ee88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a47cd70;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1475643d0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755eed2 FUN_14755eed2 body=332 status=ok
// SIG undefined FUN_14755eed2(void)

void FUN_14755eed2(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x88) * 4) =
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



// FUNCTION 14755f020 FUN_14755f020 body=289 status=ok
// SIG undefined FUN_14755f020(void)

void FUN_14755f020(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1475338cc(*local_60 + (longlong)iStack_44 * 0x88 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144a544ac(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755f16a FUN_14755f16a body=19 status=ok
// SIG undefined FUN_14755f16a(void)

undefined1 FUN_14755f16a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14755f348(param_3);
  return 1;
}



// FUNCTION 14755f18c FUN_14755f18c body=109 status=ok
// SIG undefined FUN_14755f18c(void)

undefined1 FUN_14755f18c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_3 + 8 + lVar4);
      *(undefined1 *)((longlong)plVar1 + 0xc) = *(undefined1 *)(param_3 + 0xc + lVar4);
      lVar4 = lVar4 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14755f1fa FUN_14755f1fa body=85 status=ok
// SIG undefined FUN_14755f1fa(void)

undefined8
FUN_14755f1fa(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *param_3;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((*param_2 == lVar1) && ((int)param_2[1] == (int)param_3[1])) {
    bVar2 = *(char *)((longlong)param_2 + 0xc) == *(char *)((longlong)param_3 + 0xc);
  }
  else {
    bVar2 = false;
  }
  *param_5 = bVar2;
  return 1;
}



// FUNCTION 14755f26c FUN_14755f26c body=119 status=ok
// SIG undefined FUN_14755f26c(void)

int FUN_14755f26c(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (uVar1 >> 0x10 ^ uVar1) * 0x133 + (uint)(ushort)param_2[1] + 0x288252e3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755f348 FUN_14755f348 body=320 status=ok
// SIG undefined FUN_14755f348(void)

void FUN_14755f348(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x150))(param_2,param_1);
  puVar1 = *(undefined2 **)plVar3[1];
  if ((undefined2 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,(undefined2 *)(param_1 + 8),2);
    }
    else {
      thunk_FUN_1457251a8(plVar3);
    }
  }
  else {
    *(undefined2 *)(param_1 + 8) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 2;
  }
  puVar1 = *(undefined2 **)plVar3[1];
  if ((undefined2 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,(undefined2 *)(param_1 + 10),2);
    }
    else {
      thunk_FUN_1457251a8(plVar3);
    }
  }
  else {
    *(undefined2 *)(param_1 + 10) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 2;
  }
  piVar2 = *(int **)plVar3[1];
  if ((int *)((undefined8 *)plVar3[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xc);
    (**(code **)(*plVar3 + 0x170))(plVar3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(plVar3);
    }
    *(bool *)(param_1 + 0xc) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xc) = *piVar2 != 0;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755f4b2 FUN_14755f4b2 body=54 status=ok
// SIG undefined FUN_14755f4b2(void)

undefined1 FUN_14755f4b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14755f5b0(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14755f510 FUN_14755f510 body=59 status=ok
// SIG undefined FUN_14755f510(void)

undefined8 FUN_14755f510(longlong *param_1)

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



// FUNCTION 14755f5b0 FUN_14755f5b0 body=91 status=ok
// SIG undefined FUN_14755f5b0(void)

longlong * FUN_14755f5b0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
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
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 14755f60c FUN_14755f60c body=31 status=ok
// SIG undefined FUN_14755f60c(void)

undefined8 FUN_14755f60c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755f62c FUN_14755f62c body=69 status=ok
// SIG undefined FUN_14755f62c(void)

void FUN_14755f62c(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 0x10) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14755f672 FUN_14755f672 body=48 status=ok
// SIG undefined FUN_14755f672(void)

void FUN_14755f672(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x88,8);
  }
  return;
}



// FUNCTION 14755f6a2 FUN_14755f6a2 body=60 status=ok
// SIG undefined FUN_14755f6a2(void)

void FUN_14755f6a2(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 8) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 8) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14755f748 FUN_14755f748 body=59 status=ok
// SIG undefined FUN_14755f748(void)

undefined8 FUN_14755f748(longlong *param_1)

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



// FUNCTION 14755f7ea FUN_14755f7ea body=64 status=ok
// SIG undefined FUN_14755f7ea(void)

undefined8 * FUN_14755f7ea(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a47d530;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755f82a FUN_14755f82a body=166 status=ok
// SIG undefined FUN_14755f82a(void)

void FUN_14755f82a(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    iVar5 = *(int *)(puVar3 + 1);
    do {
      if (iVar5 == 0) goto LAB_14755f8bf;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar7 = iVar5 == iVar2;
      if (bVar7) {
        *(int *)(puVar3 + 1) = iVar5 + 1;
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      UNLOCK();
    } while (!bVar7);
    plVar4 = *(longlong **)(param_1 + 8);
    if (plVar4 != (longlong *)0x0) {
      if (param_2 == 0) {
        uVar6 = 0;
      }
      else {
        local_28 = 0;
        FUN_14485c47a(&local_28);
        uVar6 = local_28;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,uVar6);
    }
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
LAB_14755f8bf:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14755f8e2 FUN_14755f8e2 body=64 status=ok
// SIG undefined FUN_14755f8e2(void)

undefined8 * FUN_14755f8e2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a47d540;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755f922 FUN_14755f922 body=90 status=ok
// SIG undefined FUN_14755f922(void)

void FUN_14755f922(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
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
                    /* WARNING: Could not recover jumptable at 0x00014755f971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14755f982 FUN_14755f982 body=60 status=ok
// SIG undefined FUN_14755f982(void)

void FUN_14755f982(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 4) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14755f9be FUN_14755f9be body=48 status=ok
// SIG undefined FUN_14755f9be(void)

void FUN_14755f9be(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 14755f9ee FUN_14755f9ee body=147 status=ok
// SIG undefined FUN_14755f9ee(void)

void FUN_14755f9ee(longlong param_1,int param_2)

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



// FUNCTION 14755fb36 FUN_14755fb36 body=59 status=ok
// SIG undefined FUN_14755fb36(void)

undefined8 FUN_14755fb36(longlong *param_1)

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



// FUNCTION 14755fc04 FUN_14755fc04 body=63 status=ok
// SIG undefined FUN_14755fc04(void)

undefined1 FUN_14755fc04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753d5f2(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 14755fc6c FUN_14755fc6c body=59 status=ok
// SIG undefined FUN_14755fc6c(void)

undefined8 FUN_14755fc6c(longlong *param_1)

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



// FUNCTION 14755fcb8 FUN_14755fcb8 body=38 status=ok
// SIG undefined FUN_14755fcb8(void)

void FUN_14755fcb8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_140a31f1a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14755fdb2 FUN_14755fdb2 body=70 status=ok
// SIG undefined FUN_14755fdb2(void)

uint FUN_14755fdb2(longlong *param_1,uint *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2[1] ^ *param_2 ^ param_2[2];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755fec8 FUN_14755fec8 body=59 status=ok
// SIG undefined FUN_14755fec8(void)

undefined8 FUN_14755fec8(longlong *param_1)

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



// FUNCTION 14755ffce FUN_14755ffce body=59 status=ok
// SIG undefined FUN_14755ffce(void)

undefined8 FUN_14755ffce(longlong *param_1)

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



// FUNCTION 147560096 FUN_147560096 body=48 status=ok
// SIG undefined FUN_147560096(void)

void FUN_147560096(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475600dc FUN_1475600dc body=133 status=ok
// SIG undefined FUN_1475600dc(void)

undefined8 FUN_1475600dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar7);
      lVar3 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar3 + -0x18) = *puVar1;
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar5 = *(undefined4 *)(puVar1 + 2);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar3 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar3 + -0xc) = uVar4;
      *(undefined4 *)(lVar3 + -8) = uVar5;
      *(undefined4 *)(lVar3 + -4) = uVar6;
      FUN_144a787a6();
      lVar3 = param_3 + lVar7;
      lVar2 = param_2 + lVar7;
      FUN_144a787a6(lVar2 + 0x28,lVar3 + 0x28);
      *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined2 *)(lVar2 + 0x3c) = *(undefined2 *)(lVar3 + 0x3c);
      lVar7 = lVar7 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14756018a FUN_14756018a body=59 status=ok
// SIG undefined FUN_14756018a(void)

undefined8 FUN_14756018a(longlong *param_1)

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



// FUNCTION 147560228 FUN_147560228 body=52 status=ok
// SIG undefined FUN_147560228(void)

void FUN_147560228(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1475602d6 FUN_1475602d6 body=28 status=ok
// SIG undefined FUN_1475602d6(void)

undefined1
FUN_1475602d6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1475608cc(param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 14756030e FUN_14756030e body=59 status=ok
// SIG undefined FUN_14756030e(void)

undefined8 FUN_14756030e(longlong *param_1)

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



// FUNCTION 147560354 FUN_147560354 body=32 status=ok
// SIG undefined FUN_147560354(void)

void FUN_147560354(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1475603c2(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1475603c2 FUN_1475603c2 body=81 status=ok
// SIG undefined FUN_1475603c2(void)

void FUN_1475603c2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147560414 FUN_147560414 body=321 status=ok
// SIG undefined FUN_147560414(void)

void FUN_147560414(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar8 = 0;
    do {
      uVar6 = uStack_50;
      uVar7 = *(uint *)(lVar2 + 4 + lVar8);
      if ((longlong)(int)uVar7 < 1) {
        *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      }
      else {
        iVar1 = *(int *)(lVar2 + lVar8);
        iVar5 = (int)uStack_50;
        lVar9 = (longlong)(int)uStack_50;
        *(int *)(lVar2 + lVar8) = (int)uStack_50;
        lVar3 = param_1[2];
        uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + uVar7);
        if ((uint)(uStack_50._4_4_ - iVar5) < uVar7) {
          FUN_147560556(&local_58,uVar6 & 0xffffffff);
        }
        memcpy((void *)(lVar9 * 8 + local_58),(void *)((longlong)iVar1 * 8 + lVar3),
               (longlong)(int)uVar7 << 3);
        uVar7 = *(uint *)(lVar2 + 4 + lVar8);
      }
      *(uint *)(lVar2 + 8 + lVar8) = uVar7;
      lVar8 = lVar8 + 0xc;
    } while ((longlong)(int)lVar4 * 0xc != lVar8);
    if (uStack_50._4_4_ != (int)uStack_50) {
      FUN_140a9bfcc(&local_58);
    }
  }
  if (param_1 + 2 == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_58;
    *(int *)(param_1 + 3) = (int)uStack_50;
    *(int *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147560556 FUN_147560556 body=132 status=ok
// SIG undefined FUN_147560556(void)

void FUN_147560556(longlong param_1,int param_2)

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



// FUNCTION 1475605dc FUN_1475605dc body=147 status=ok
// SIG undefined FUN_1475605dc(void)

void FUN_1475605dc(longlong param_1,int param_2)

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



// FUNCTION 147560670 FUN_147560670 body=321 status=ok
// SIG undefined FUN_147560670(void)

void FUN_147560670(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar8 = 0;
    do {
      uVar6 = uStack_50;
      uVar7 = *(uint *)(lVar2 + 4 + lVar8);
      if ((longlong)(int)uVar7 < 1) {
        *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      }
      else {
        iVar1 = *(int *)(lVar2 + lVar8);
        iVar5 = (int)uStack_50;
        lVar9 = (longlong)(int)uStack_50;
        *(int *)(lVar2 + lVar8) = (int)uStack_50;
        lVar3 = param_1[2];
        uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + uVar7);
        if ((uint)(uStack_50._4_4_ - iVar5) < uVar7) {
          FUN_1475607b2(&local_58,uVar6 & 0xffffffff);
        }
        memcpy((void *)(lVar9 * 0x20 + local_58),(void *)((longlong)iVar1 * 0x20 + lVar3),
               (longlong)(int)uVar7 << 5);
        uVar7 = *(uint *)(lVar2 + 4 + lVar8);
      }
      *(uint *)(lVar2 + 8 + lVar8) = uVar7;
      lVar8 = lVar8 + 0xc;
    } while ((longlong)(int)lVar4 * 0xc != lVar8);
    if (uStack_50._4_4_ != (int)uStack_50) {
      FUN_140a9c7ae(&local_58);
    }
  }
  if (param_1 + 2 == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_58;
    *(int *)(param_1 + 3) = (int)uStack_50;
    *(int *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475607b2 FUN_1475607b2 body=132 status=ok
// SIG undefined FUN_1475607b2(void)

void FUN_1475607b2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147560838 FUN_147560838 body=147 status=ok
// SIG undefined FUN_147560838(void)

void FUN_147560838(longlong param_1,int param_2)

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



// FUNCTION 1475608cc FUN_1475608cc body=78 status=ok
// SIG undefined FUN_1475608cc(void)

undefined8 FUN_1475608cc(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14756091a(param_1 + 0x40,param_2 + 0x40);
  if (cVar1 != '\0') {
    cVar1 = FUN_147560965(param_1,param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_1475609a8(param_1 + 0x20,param_2 + 0x20);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14756091a FUN_14756091a body=75 status=ok
// SIG undefined FUN_14756091a(void)

undefined8 FUN_14756091a(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) {
    cVar1 = FUN_1475609f3(*param_1,*param_2);
    if ((cVar1 != '\0') && (*(int *)(param_1 + 3) == *(int *)(param_2 + 3))) {
      uVar2 = FUN_147560a2d(param_1[2],param_2[2]);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147560965 FUN_147560965 body=67 status=ok
// SIG undefined FUN_147560965(void)

undefined4 FUN_147560965(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_147522e5c();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18)) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x1c) >> 8),
                      *(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c));
    }
  }
  return 0;
}



// FUNCTION 1475609a8 FUN_1475609a8 body=75 status=ok
// SIG undefined FUN_1475609a8(void)

undefined8 FUN_1475609a8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) {
    cVar1 = FUN_147560a62(*param_1,*param_2);
    if ((cVar1 != '\0') && (*(int *)(param_1 + 3) == *(int *)(param_2 + 3))) {
      uVar2 = FUN_147560a9c(param_1[2],param_2[2]);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1475609f3 FUN_1475609f3 body=58 status=ok
// SIG undefined FUN_1475609f3(void)

undefined8 FUN_1475609f3(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (((*(int *)(param_1 + lVar1) != *(int *)(param_2 + lVar1)) ||
          (*(int *)(param_1 + 4 + lVar1) != *(int *)(param_2 + 4 + lVar1))) ||
         (*(int *)(param_1 + 8 + lVar1) != *(int *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 147560a2d FUN_147560a2d body=53 status=ok
// SIG undefined FUN_147560a2d(void)

bool FUN_147560a2d(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_3 == 0) {
    return true;
  }
  lVar5 = 0;
  do {
    bVar1 = *(int *)(param_2 + 4 + lVar5 * 8) == *(int *)(param_1 + 4 + lVar5 * 8);
    bVar2 = *(int *)(param_1 + lVar5 * 8) == *(int *)(param_2 + lVar5 * 8);
    bVar3 = bVar1 && bVar2;
    if (!bVar1 || !bVar2) {
      return bVar3;
    }
    iVar4 = (int)lVar5;
    lVar5 = lVar5 + 1;
  } while (param_3 + -1 != iVar4);
  return bVar3;
}



// FUNCTION 147560a62 FUN_147560a62 body=58 status=ok
// SIG undefined FUN_147560a62(void)

undefined8 FUN_147560a62(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (((*(int *)(param_1 + lVar1) != *(int *)(param_2 + lVar1)) ||
          (*(int *)(param_1 + 4 + lVar1) != *(int *)(param_2 + 4 + lVar1))) ||
         (*(int *)(param_1 + 8 + lVar1) != *(int *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 147560a9c FUN_147560a9c body=68 status=ok
// SIG undefined FUN_147560a9c(void)

char FUN_147560a9c(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_147560965(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 147560bd0 FUN_147560bd0 body=63 status=ok
// SIG undefined FUN_147560bd0(void)

undefined1 FUN_147560bd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753434c(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 147560c38 FUN_147560c38 body=59 status=ok
// SIG undefined FUN_147560c38(void)

undefined8 FUN_147560c38(longlong *param_1)

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



// FUNCTION 147560c84 FUN_147560c84 body=38 status=ok
// SIG undefined FUN_147560c84(void)

void FUN_147560c84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_140a31b96(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147560d66 FUN_147560d66 body=77 status=ok
// SIG undefined FUN_147560d66(void)

void FUN_147560d66(longlong *param_1,ulonglong *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2 >> 0x20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147560e9e FUN_147560e9e body=89 status=ok
// SIG undefined FUN_147560e9e(void)

void FUN_147560e9e(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = param_2[1];
  uVar2 = FUN_144a78877(*param_2 >> 0x20);
  FUN_144a78877((int)uVar1,uVar2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147560fd0 FUN_147560fd0 body=59 status=ok
// SIG undefined FUN_147560fd0(void)

undefined8 FUN_147560fd0(longlong *param_1)

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



// FUNCTION 1475610e0 FUN_1475610e0 body=59 status=ok
// SIG undefined FUN_1475610e0(void)

undefined8 FUN_1475610e0(longlong *param_1)

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



// FUNCTION 1475611e6 FUN_1475611e6 body=59 status=ok
// SIG undefined FUN_1475611e6(void)

undefined8 FUN_1475611e6(longlong *param_1)

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



// FUNCTION 1475612b6 FUN_1475612b6 body=100 status=ok
// SIG undefined FUN_1475612b6(void)

undefined1 FUN_1475612b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475613f6(param_2,param_3);
    FUN_14756144e(param_2 + 0x10,param_3 + 0x10);
    FUN_1475614a8(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147561342 FUN_147561342 body=59 status=ok
// SIG undefined FUN_147561342(void)

undefined8 FUN_147561342(longlong *param_1)

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



// FUNCTION 147561388 FUN_147561388 body=32 status=ok
// SIG undefined FUN_147561388(void)

void FUN_147561388(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1475376a4(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1475613f6 FUN_1475613f6 body=88 status=ok
// SIG undefined FUN_1475613f6(void)

undefined8 * FUN_1475613f6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753dbe6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14756144e FUN_14756144e body=89 status=ok
// SIG undefined FUN_14756144e(void)

undefined8 * FUN_14756144e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753dc48(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1475614a8 FUN_1475614a8 body=88 status=ok
// SIG undefined FUN_1475614a8(void)

undefined8 * FUN_1475614a8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14753dcbc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147561576 FUN_147561576 body=59 status=ok
// SIG undefined FUN_147561576(void)

undefined8 FUN_147561576(longlong *param_1)

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



// FUNCTION 147561624 FUN_147561624 body=47 status=ok
// SIG undefined FUN_147561624(void)

void FUN_147561624(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14756166a FUN_14756166a body=87 status=ok
// SIG undefined FUN_14756166a(void)

undefined1 FUN_14756166a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1400a26b2(param_2,param_3);
    FUN_1400a270a(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1475616ea FUN_1475616ea body=59 status=ok
// SIG undefined FUN_1475616ea(void)

undefined8 FUN_1475616ea(longlong *param_1)

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



// FUNCTION 147561788 FUN_147561788 body=51 status=ok
// SIG undefined FUN_147561788(void)

void FUN_147561788(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1475617fa FUN_1475617fa body=80 status=ok
// SIG undefined FUN_1475617fa(void)

undefined1 FUN_1475617fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753d8de(param_2,param_3);
    FUN_14753d936(param_2 + 0x10,param_3 + 0x10);
    FUN_14753d994(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147561872 FUN_147561872 body=59 status=ok
// SIG undefined FUN_147561872(void)

undefined8 FUN_147561872(longlong *param_1)

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



// FUNCTION 1475618b8 FUN_1475618b8 body=32 status=ok
// SIG undefined FUN_1475618b8(void)

void FUN_1475618b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_147533aa4(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147561927 FUN_147561927 body=186 status=ok
// SIG undefined FUN_147561927(void)

ulonglong FUN_147561927(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 9);
  uVar3 = 0xffffffff;
  if (0 < (longlong)iVar1) {
    puVar4 = (undefined8 *)param_1[8];
    if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
      puVar4 = param_1;
    }
    uVar5 = 0;
    do {
      local_48 = *(int *)(param_2 + 1);
      local_50 = *param_2;
      local_60 = *puVar4;
      local_58 = *(int *)(puVar4 + 1);
      cVar2 = FUN_1401246e4(&local_60,&local_50);
      if ((cVar2 != '\0') && (local_58 == local_48)) {
        uVar3 = uVar5 & 0xffffffff;
        break;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while ((longlong)iVar1 != uVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1475619e2 FUN_1475619e2 body=156 status=ok
// SIG undefined FUN_1475619e2(void)

undefined8 FUN_1475619e2(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if (((*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38)) ||
      (*(char *)(param_1 + 0x3c) != *(char *)(param_2 + 0x3c))) ||
     (((*(byte *)(param_2 + 0x3d) ^ *(byte *)(param_1 + 0x3d)) & 3) != 0)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == *(int *)(param_2 + 0x30)) {
    if (1 < iVar1) {
      lVar5 = 0;
      while( true ) {
        uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x28) + lVar5);
        uVar7 = (ulonglong)uVar6;
        uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x28) + lVar5);
        if (uVar6 != uVar3) break;
        if (uVar6 == 0) goto LAB_147561a6f;
LAB_147561a3b:
        lVar5 = lVar5 + 2;
      }
      if ((uVar3 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar4]) goto LAB_147561a3b;
      }
      if (uVar6 != uVar3) {
        return 0;
      }
    }
  }
  else if (*(int *)(param_2 + 0x30) + iVar1 != 1) {
    return 0;
  }
LAB_147561a6f:
  uVar2 = FUN_144a7afa6(param_1 + 8,param_2 + 8);
  return uVar2;
}



// FUNCTION 147561a7e FUN_147561a7e body=122 status=ok
// SIG undefined FUN_147561a7e(void)

void FUN_147561a7e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 400) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 400) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 400 + 4) = uVar5;
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



// FUNCTION 147561af8 FUN_147561af8 body=76 status=ok
// SIG undefined FUN_147561af8(void)

void FUN_147561af8(undefined8 param_1,undefined4 *param_2)

{
  memset(param_2,0,0xa8);
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xd) = 0xffffffff00000080;
  *(undefined8 *)(param_2 + 0x1e) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x21) = 0xffffffff00000080;
  return;
}



// FUNCTION 147561bba FUN_147561bba body=97 status=ok
// SIG undefined FUN_147561bba(void)

undefined8 FUN_147561bba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_14753d6f8();
      FUN_14753d7ec(param_2 + lVar1 + 0x58,param_3 + lVar1 + 0x58);
      lVar1 = lVar1 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147561c44 FUN_147561c44 body=59 status=ok
// SIG undefined FUN_147561c44(void)

undefined8 FUN_147561c44(longlong *param_1)

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



// FUNCTION 147561c90 FUN_147561c90 body=38 status=ok
// SIG undefined FUN_147561c90(void)

void FUN_147561c90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_147561d04(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 147561d04 FUN_147561d04 body=91 status=ok
// SIG undefined FUN_147561d04(void)

void FUN_147561d04(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_140a31a30(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_140a31a68(param_1 + 8);
  return;
}



// FUNCTION 147561de0 FUN_147561de0 body=59 status=ok
// SIG undefined FUN_147561de0(void)

undefined8 FUN_147561de0(longlong *param_1)

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



// FUNCTION 147561ed6 FUN_147561ed6 body=59 status=ok
// SIG undefined FUN_147561ed6(void)

undefined8 FUN_147561ed6(longlong *param_1)

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



// FUNCTION 147561f78 FUN_147561f78 body=37 status=ok
// SIG undefined FUN_147561f78(void)

void FUN_147561f78(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  FUN_1475339e4(param_2);
  return;
}



// FUNCTION 147561fc4 FUN_147561fc4 body=63 status=ok
// SIG undefined FUN_147561fc4(void)

undefined1 FUN_147561fc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475342e4(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 14756202c FUN_14756202c body=59 status=ok
// SIG undefined FUN_14756202c(void)

undefined8 FUN_14756202c(longlong *param_1)

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



// FUNCTION 147562078 FUN_147562078 body=38 status=ok
// SIG undefined FUN_147562078(void)

void FUN_147562078(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_140a3194c(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 147562168 FUN_147562168 body=59 status=ok
// SIG undefined FUN_147562168(void)

undefined8 FUN_147562168(longlong *param_1)

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



// FUNCTION 1475621ae FUN_1475621ae body=32 status=ok
// SIG undefined FUN_1475621ae(void)

void FUN_1475621ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_140a076b8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14756229e FUN_14756229e body=59 status=ok
// SIG undefined FUN_14756229e(void)

undefined8 FUN_14756229e(longlong *param_1)

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



// FUNCTION 1475622e4 FUN_1475622e4 body=32 status=ok
// SIG undefined FUN_1475622e4(void)

void FUN_1475622e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1475338cc(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147562398 FUN_147562398 body=75 status=ok
// SIG undefined FUN_147562398(void)

undefined8 FUN_147562398(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14756240c FUN_14756240c body=59 status=ok
// SIG undefined FUN_14756240c(void)

undefined8 FUN_14756240c(longlong *param_1)

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



// FUNCTION 147562452 FUN_147562452 body=38 status=ok
// SIG undefined FUN_147562452(void)

void FUN_147562452(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147562530 FUN_147562530 body=90 status=ok
// SIG undefined FUN_147562530(void)

undefined8 FUN_147562530(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475625b2 FUN_1475625b2 body=59 status=ok
// SIG undefined FUN_1475625b2(void)

undefined8 FUN_1475625b2(longlong *param_1)

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



// FUNCTION 1475625f8 FUN_1475625f8 body=48 status=ok
// SIG undefined FUN_1475625f8(void)

void FUN_1475625f8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14a47b390;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 147562678 FUN_147562678 body=29 status=ok
// SIG undefined FUN_147562678(void)

undefined8 FUN_147562678(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475626bc FUN_1475626bc body=63 status=ok
// SIG undefined FUN_1475626bc(void)

undefined1 FUN_1475626bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147557d1a(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 147562724 FUN_147562724 body=59 status=ok
// SIG undefined FUN_147562724(void)

undefined8 FUN_147562724(longlong *param_1)

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



// FUNCTION 147562770 FUN_147562770 body=40 status=ok
// SIG undefined FUN_147562770(void)

void FUN_147562770(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_145765194(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 147562828 FUN_147562828 body=73 status=ok
// SIG undefined FUN_147562828(void)

undefined8 FUN_147562828(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_1400a26b2();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14756289a FUN_14756289a body=59 status=ok
// SIG undefined FUN_14756289a(void)

undefined8 FUN_14756289a(longlong *param_1)

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



// FUNCTION 1475628e0 FUN_1475628e0 body=38 status=ok
// SIG undefined FUN_1475628e0(void)

void FUN_1475628e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147562982 FUN_147562982 body=48 status=ok
// SIG undefined FUN_147562982(void)

void FUN_147562982(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475629c8 FUN_1475629c8 body=123 status=ok
// SIG undefined FUN_1475629c8(void)

undefined8 FUN_1475629c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined1 *)(lVar2 + -4) = *(undefined1 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      FUN_1447bdca4(lVar2,puVar1 + 2);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 6);
      FUN_1447bdc4c(param_2 + lVar3 + 0x20,param_3 + lVar3 + 0x20);
      lVar3 = lVar3 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147562a6c FUN_147562a6c body=59 status=ok
// SIG undefined FUN_147562a6c(void)

undefined8 FUN_147562a6c(longlong *param_1)

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



// FUNCTION 147562b0a FUN_147562b0a body=52 status=ok
// SIG undefined FUN_147562b0a(void)

void FUN_147562b0a(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147562bb4 FUN_147562bb4 body=54 status=ok
// SIG undefined FUN_147562bb4(void)

undefined1 FUN_147562bb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753cb92(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147562bea FUN_147562bea body=31 status=ok
// SIG undefined FUN_147562bea(void)

undefined1
FUN_147562bea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147562fa8(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147562c26 FUN_147562c26 body=59 status=ok
// SIG undefined FUN_147562c26(void)

undefined8 FUN_147562c26(longlong *param_1)

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



// FUNCTION 147562c6c FUN_147562c6c body=32 status=ok
// SIG undefined FUN_147562c6c(void)

void FUN_147562c6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_147562cda(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147562cda FUN_147562cda body=93 status=ok
// SIG undefined FUN_147562cda(void)

void FUN_147562cda(longlong param_1)

{
  FUN_140a32090(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147562d38 FUN_147562d38 body=245 status=ok
// SIG undefined FUN_147562d38(void)

void FUN_147562d38(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      iVar3 = *(int *)(lVar1 + 4 + lVar4);
      if (iVar3 < 1) {
        *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      }
      else {
        iVar3 = *(int *)(lVar1 + lVar4);
        *(int *)(lVar1 + lVar4) = (int)uStack_40;
        FUN_147562e2e(&local_48,(longlong)iVar3 * 0x30 + param_1[2]);
        iVar3 = *(int *)(lVar1 + 4 + lVar4);
      }
      *(int *)(lVar1 + 8 + lVar4) = iVar3;
      lVar4 = lVar4 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar4);
    if (uStack_40._4_4_ != (int)uStack_40) {
      FUN_145bcd588(&local_48);
    }
  }
  FUN_14753c92e(param_1 + 2,&local_48);
  FUN_140a32090(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147562e2e FUN_147562e2e body=82 status=ok
// SIG undefined FUN_147562e2e(void)

void FUN_147562e2e(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_147562e80(param_1,iVar1);
  }
  FUN_14753cf15((longlong)iVar1 * 0x30 + *param_1,param_2,param_3);
  return;
}



// FUNCTION 147562e80 FUN_147562e80 body=147 status=ok
// SIG undefined FUN_147562e80(void)

void FUN_147562e80(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147562f14 FUN_147562f14 body=147 status=ok
// SIG undefined FUN_147562f14(void)

void FUN_147562f14(longlong param_1,int param_2)

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



// FUNCTION 147562fa8 FUN_147562fa8 body=78 status=ok
// SIG undefined FUN_147562fa8(void)

undefined8 FUN_147562fa8(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_147562ff6(param_1 + 0x40,param_2 + 0x40);
  if (cVar1 != '\0') {
    cVar1 = FUN_147560965(param_1,param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_1475609a8(param_1 + 0x20,param_2 + 0x20);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147562ff6 FUN_147562ff6 body=75 status=ok
// SIG undefined FUN_147562ff6(void)

undefined8 FUN_147562ff6(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) {
    cVar1 = FUN_147563041(*param_1,*param_2);
    if ((cVar1 != '\0') && (*(int *)(param_1 + 3) == *(int *)(param_2 + 3))) {
      uVar2 = FUN_14756307b(param_1[2],param_2[2]);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147563041 FUN_147563041 body=58 status=ok
// SIG undefined FUN_147563041(void)

undefined8 FUN_147563041(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (((*(int *)(param_1 + lVar1) != *(int *)(param_2 + lVar1)) ||
          (*(int *)(param_1 + 4 + lVar1) != *(int *)(param_2 + 4 + lVar1))) ||
         (*(int *)(param_1 + 8 + lVar1) != *(int *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 14756307b FUN_14756307b body=64 status=ok
// SIG undefined FUN_14756307b(void)

bool FUN_14756307b(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_3 == 0) {
    return true;
  }
  lVar2 = 0;
  do {
    param_3 = param_3 + -1;
    bVar3 = *(int *)(param_1 + lVar2) == *(int *)(param_2 + lVar2);
    bVar4 = *(char *)(param_1 + 4 + lVar2) == *(char *)(param_2 + 4 + lVar2);
    bVar1 = bVar4 && bVar3;
    if (!bVar4 || !bVar3) {
      return bVar1;
    }
    lVar2 = lVar2 + 0x30;
  } while (param_3 != 0);
  return bVar1;
}



// FUNCTION 1475630ea FUN_1475630ea body=63 status=ok
// SIG undefined FUN_1475630ea(void)

undefined1 FUN_1475630ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14753425c(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}


