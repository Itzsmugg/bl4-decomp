// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146217f5c FUN_146217f5c body=175 status=ok
// SIG undefined FUN_146217f5c(void)

bool FUN_146217f5c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621800c FUN_14621800c body=96 status=ok
// SIG undefined FUN_14621800c(void)

void FUN_14621800c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40,param_4);
  FUN_14621806e(param_1,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621806e FUN_14621806e body=1589 status=ok
// SIG undefined FUN_14621806e(void)

undefined8 FUN_14621806e(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b1;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_60;
  
  plVar9 = (longlong *)(DAT_14c707940 ^ (ulonglong)auStack_118);
  iVar3 = *param_2;
  iVar4 = *(int *)(param_1 + 0x130);
  local_60 = plVar9;
  if (iVar3 != iVar4) {
    local_d8 = param_1 + 0x130;
    if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
      local_e8 = *(longlong **)(param_1 + 0xd0);
      local_d0 = local_e8 + *(int *)(param_1 + 0xd8);
      plVar9 = (longlong *)(param_1 + 0x160);
      lVar10 = param_1 + 0x170;
      local_f8 = param_1 + 0x40;
      do {
        local_f0 = (longlong *)*local_e8;
        if (*(char *)(local_f0 + 5) == '\x01') {
          local_88 = 0x100000000;
          local_78 = 0xffffffff;
          uStack_70 = 0;
          uStack_80 = lVar10;
          if (*(int *)(param_1 + 0x188) == 0) {
            iVar12 = 0;
          }
          else {
            FUN_1449c0562(&local_88);
            iVar12 = *(int *)(param_1 + 0x188);
          }
          uStack_90 = CONCAT44(uStack_6c,uStack_70);
          local_98 = local_78;
          uVar7 = local_98;
          local_a8 = (undefined4)local_88;
          uStack_a4 = local_88._4_4_;
          uStack_a0 = (undefined4)uStack_80;
          uStack_9c = uStack_80._4_4_;
          local_98._4_4_ = (int)((ulonglong)local_78 >> 0x20);
          iVar8 = local_98._4_4_;
          local_b0 = plVar9;
          if ((local_98._4_4_ != iVar12) || (local_98 = uVar7, uStack_80 != lVar10)) {
            do {
              local_98 = uVar7;
              lVar5 = *(longlong *)(*local_b0 + 8 + (longlong)iVar8 * 0x18);
              if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
                FUN_1456cec3c(lVar5);
LAB_1462182a7:
                if ((*(int *)(lVar5 + 0x2c) == 0) && (*(longlong **)(lVar5 + 0x38) == local_f0)) {
                  local_88 = 0;
                  uStack_80 = 0;
                  local_78 = 0;
                  uStack_70 = 0xffff;
                  FUN_140fe4ff6(param_1,lVar5,&local_88);
                  if (*(char *)(lVar5 + 0x8f) == '\0') {
                    local_b1 = 4;
                    FUN_1414ba756(local_f8,&local_88,lVar5 + 0x2c,&local_b1);
                  }
                  if ((*(char *)(lVar5 + 0x8a) != '\x01') || (*(char *)(lVar5 + 0x8b) == '\x01')) {
                    FUN_140f5a346(param_1,&local_88,lVar5,0xffffffff);
                  }
                }
              }
              else if (lVar5 != 0) goto LAB_1462182a7;
              local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
              FUN_1449c0562(&local_a8);
              iVar8 = local_98._4_4_;
              uVar7 = local_98;
            } while (local_b0 != plVar9 ||
                     (CONCAT44(uStack_9c,uStack_a0) != lVar10 || local_98._4_4_ != iVar12));
          }
          FUN_1414e7674(param_1,local_f0,param_2);
        }
        local_e8 = local_e8 + 1;
      } while (local_e8 != local_d0);
    }
    FUN_1447715ec(local_d8,param_2);
    plVar9 = (longlong *)FUN_144a8232a(&DAT_14cb8dd18);
    iVar12 = *(int *)(param_1 + 0x1f8);
    if ((longlong)iVar12 != 0) {
      lVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar10) == *plVar9) {
          local_f8 = (lVar10 >> 4) * -0x3333333333333333;
          uVar11 = (uint)local_f8;
          if (((int)uVar11 < iVar12 && -1 < (int)uVar11) &&
             ((byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 +
                              (ulonglong)(uVar11 & 0x7fffffff) * 0x50) - 1U) < 2))
          goto LAB_14621837d;
          break;
        }
        lVar10 = lVar10 + 0x50;
      } while ((longlong)iVar12 * 0x50 != lVar10);
    }
    local_f8 = 0xffffffff;
LAB_14621837d:
    plVar9 = (longlong *)0x0;
    if ((longlong)*(int *)(param_1 + 0xd8) != 0) {
      local_d0 = *(longlong **)(param_1 + 0xd0) + *(int *)(param_1 + 0xd8);
      plVar2 = (longlong *)(param_1 + 0x160);
      lVar10 = param_1 + 0x170;
      local_d8 = param_1 + 0x40;
      local_c8 = (local_f8 & 0xffffffff) * 0x70;
      local_f0 = *(longlong **)(param_1 + 0xd0);
      do {
        local_e8 = (longlong *)*local_f0;
        if ((char)local_e8[5] == '\x01') {
          local_88 = 0x100000000;
          local_78 = 0xffffffff;
          uStack_70 = 0;
          uStack_80 = lVar10;
          if (*(int *)(param_1 + 0x188) == 0) {
            iVar12 = 0;
          }
          else {
            FUN_1449c0562(&local_88);
            iVar12 = *(int *)(param_1 + 0x188);
          }
          uStack_90 = CONCAT44(uStack_6c,uStack_70);
          local_98 = local_78;
          uVar7 = local_98;
          local_a8 = (undefined4)local_88;
          uStack_a4 = local_88._4_4_;
          uStack_a0 = (undefined4)uStack_80;
          uStack_9c = uStack_80._4_4_;
          local_98._4_4_ = (int)((ulonglong)local_78 >> 0x20);
          iVar8 = local_98._4_4_;
          local_b0 = plVar2;
          if ((local_98._4_4_ != iVar12) || (local_98 = uVar7, uStack_80 != lVar10)) {
            do {
              local_98 = uVar7;
              lVar5 = *(longlong *)(*local_b0 + 8 + (longlong)iVar8 * 0x18);
              if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
                FUN_1456cec3c(lVar5);
LAB_14621854a:
                if ((*(int *)(lVar5 + 0x2c) == 0) && (*(longlong **)(lVar5 + 0x38) == local_e8)) {
                  local_88 = 0;
                  uStack_80 = 0;
                  local_78 = 0;
                  uStack_70 = 0xffff;
                  FUN_140fe4ff6(param_1,lVar5,&local_88);
                  if (*(char *)(lVar5 + 0x8f) == '\0') {
                    local_b1 = 5;
                    FUN_1414ba756(local_d8,&local_88,lVar5 + 0x2c,&local_b1);
                  }
                  if (((-1 < (int)local_f8) && ((int)local_f8 < *(int *)(lVar5 + 0x80))) &&
                     (lVar6 = *(longlong *)(lVar5 + 0x78),
                     *(int *)(lVar6 + 0x10 + local_c8) != *param_2)) {
                    local_c0 = lVar6 + local_c8;
                    FUN_1447715ec(lVar6 + local_c8 + 0x10,param_2);
                    *(undefined8 *)(local_c0 + 0x60) = 0;
                    local_e0 = *(longlong **)(local_c0 + 0x68);
                    if (local_e0 != (longlong *)0x0) {
                      *(undefined8 *)(local_c0 + 0x68) = 0;
                      LOCK();
                      plVar9 = local_e0 + 1;
                      *(int *)plVar9 = (int)*plVar9 + -1;
                      UNLOCK();
                      if ((int)*plVar9 == 0) {
                        (**(code **)*local_e0)();
                        LOCK();
                        piVar1 = (int *)((longlong)local_e0 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*local_e0 + 0x10))();
                        }
                      }
                    }
                  }
                  FUN_1458e8cea(lVar5,&local_88,3);
                  FUN_141683dd2(param_1,&local_88,lVar5,0xffffffff);
                }
              }
              else if (lVar5 != 0) goto LAB_14621854a;
              local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
              FUN_1449c0562(&local_a8);
              iVar8 = local_98._4_4_;
              uVar7 = local_98;
            } while (local_b0 != plVar2 ||
                     (CONCAT44(uStack_9c,uStack_a0) != lVar10 || local_98._4_4_ != iVar12));
          }
        }
        plVar9 = local_f0 + 1;
        local_f0 = plVar9;
      } while (plVar9 != local_d0);
    }
  }
  if (((ulonglong)local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)plVar9 >> 8),iVar3 != iVar4);
}



// FUNCTION 1462186a4 FUN_1462186a4 body=308 status=ok
// SIG undefined FUN_1462186a4(void)

void FUN_1462186a4(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *param_2;
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_48 = *param_4;
  local_40 = (longlong *)param_4[1];
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar4 + 1U) {
    FUN_1462187da((longlong *)(param_1 + 0x100),iVar4);
  }
  lVar7 = *(longlong *)(param_1 + 0x100);
  *(undefined8 *)(lVar7 + (longlong)iVar4 * 0x10) = uVar5;
  *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_50 = param_5;
  local_58 = &local_48;
  FUN_141659f62(uVar5,param_1,param_3,*(undefined8 *)(param_1 + 0xb0));
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462187da FUN_1462187da body=132 status=ok
// SIG undefined FUN_1462187da(void)

void FUN_1462187da(longlong param_1,int param_2)

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



// FUNCTION 146218864 FUN_146218864 body=1159 status=ok
// SIG undefined FUN_146218864(void)

void FUN_146218864(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1402087a0(&local_a8,param_1);
  FUN_14020871a(param_2 + 0x40,&local_a8);
  FUN_1400b4210(&local_a8);
  puVar4 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_ac,4);
    }
    else {
      FUN_14572512c(param_1,&local_ac);
    }
  }
  else {
    local_ac = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  if (local_ac < 1) {
    *(undefined8 *)(param_2 + 0x48) = 0;
    plVar8 = *(longlong **)(param_2 + 0x50);
    if (plVar8 == (longlong *)0x0) goto LAB_14621890d;
    *(undefined8 *)(param_2 + 0x50) = 0;
LAB_146218a79:
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14621890d;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_1470198e8(&local_c8);
    local_d0 = local_c8 + (longlong)(int)uStack_c0 * 0x18;
    if (param_3 == 0x13) {
      if ((int)uStack_c0 != 0) {
        lVar7 = local_c8;
        do {
          (**(code **)(*param_1 + 0x160))(param_1,lVar7);
          local_80 = 0;
          puVar4 = (ulonglong *)param_1[1];
          puVar2 = (undefined4 *)*puVar4 + 1;
          if ((undefined4 *)puVar4[1] < puVar2) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
            }
            else {
              FUN_14572512c(param_1,&local_80);
            }
          }
          else {
            local_80 = *(undefined4 *)*puVar4;
            *puVar4 = (ulonglong)puVar2;
          }
          FUN_147019a7e(lVar7 + 8,local_80);
          iVar3 = *(int *)(lVar7 + 0x10);
          if ((longlong)iVar3 != 0) {
            lVar5 = *(longlong *)(lVar7 + 8);
            lVar9 = 0;
            do {
              local_98 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              FUN_14010d536(&local_a8,param_1);
              puVar2 = (undefined4 *)(lVar5 + lVar9);
              *puVar2 = (undefined4)local_a8;
              puVar2[1] = local_a8._4_4_;
              puVar2[2] = (undefined4)uStack_a0;
              puVar2[3] = uStack_a0._4_4_;
              if (local_98 != 0) {
                FUN_1400020a8();
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)iVar3 * 0x10 != lVar9);
          }
          lVar7 = lVar7 + 0x18;
        } while (lVar7 != local_d0);
      }
    }
    else if ((int)uStack_c0 != 0) {
      lVar7 = local_c8;
      do {
        (**(code **)(*param_1 + 0x160))(param_1,lVar7);
        local_64 = 0;
        puVar4 = (ulonglong *)param_1[1];
        puVar2 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar2) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
          }
          else {
            FUN_14572512c(param_1,&local_64);
          }
        }
        else {
          local_64 = *(undefined4 *)*puVar4;
          *puVar4 = (ulonglong)puVar2;
        }
        FUN_147019a7e(lVar7 + 8,local_64);
        lVar5 = *(longlong *)(lVar7 + 8);
        iVar3 = *(int *)(lVar7 + 0x10);
        if (param_3 < 0x10) {
          if (iVar3 != 0) {
            lVar9 = 0;
            do {
              local_70 = 0;
              (**(code **)(*param_1 + 0x160))(param_1,&local_70);
              local_a8 = 0;
              uStack_a0 = 0;
              FUN_14021219d(param_1,&local_a8);
              FUN_147019b9c(&local_80,local_70);
              puVar2 = (undefined4 *)(lVar5 + lVar9);
              *puVar2 = local_80;
              puVar2[1] = uStack_7c;
              puVar2[2] = uStack_78;
              puVar2[3] = uStack_74;
              if (local_a8 != 0) {
                FUN_1400020a8();
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)iVar3 * 0x10 != lVar9);
          }
        }
        else if (iVar3 != 0) {
          lVar9 = 0;
          do {
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            FUN_14010d536(&local_a8,param_1);
            puVar2 = (undefined4 *)(lVar5 + lVar9);
            *puVar2 = (undefined4)local_a8;
            puVar2[1] = local_a8._4_4_;
            puVar2[2] = (undefined4)uStack_a0;
            puVar2[3] = uStack_a0._4_4_;
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar3 * 0x10 != lVar9);
        }
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != local_d0);
    }
    plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e8ed60;
    plVar6[2] = local_c8;
    local_c8 = 0;
    *(int *)(plVar6 + 3) = (int)uStack_c0;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c0._4_4_;
    uStack_c0 = 0;
    if (plVar6 != (longlong *)0x0) {
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
    FUN_1401a56c2(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_2 + 0x48) = plVar6 + 2;
    plVar8 = *(longlong **)(param_2 + 0x50);
    if (plVar6 != plVar8) {
      *(longlong **)(param_2 + 0x50) = plVar6;
      if (plVar8 == (longlong *)0x0) goto LAB_14621890d;
      goto LAB_146218a79;
    }
    if (plVar6 == (longlong *)0x0) goto LAB_14621890d;
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14621890d;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar8 = plVar6;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14621890d:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146218cec FUN_146218cec body=214 status=ok
// SIG undefined FUN_146218cec(void)

void FUN_146218cec(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_stack_00000028;
  undefined1 auStack_138 [40];
  undefined2 *local_110;
  undefined1 *local_108;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined1 local_f7;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_ea;
  undefined1 local_e8 [24];
  undefined1 local_d0 [80];
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_100 = *(undefined2 *)(lVar1 + 0x4a);
  local_fe = *(undefined2 *)(lVar1 + 0x62);
  local_fc = *(undefined2 *)(lVar2 + 4);
  local_f7 = 0;
  local_f4 = 0x6ff;
  local_f0 = 0;
  local_ea = *(undefined2 *)(lVar1 + 0x11a);
  local_110 = &local_ea;
  local_108 = local_e8;
  FUN_146218dc4(&local_100,local_e8);
  FUN_146218f00(local_e8,in_stack_00000028 + 0x28,local_d0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146218dc4 FUN_146218dc4 body=146 status=ok
// SIG undefined FUN_146218dc4(void)

undefined8 * FUN_146218dc4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_146218e58(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146218e58 FUN_146218e58 body=166 status=ok
// SIG undefined FUN_146218e58(void)

void FUN_146218e58(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146218f00 FUN_146218f00 body=731 status=ok
// SIG undefined FUN_146218f00(void)

void FUN_146218f00(short *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  short *psVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  char cVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_108 [47];
  char local_d9;
  int local_d8;
  int local_d4;
  undefined8 local_d0;
  short *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    uVar4 = *(undefined8 *)(param_2 + 0x248);
    cVar11 = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    cVar6 = cVar11;
    iVar2 = *(int *)(param_2 + 0x10);
    psVar7 = param_1;
    if (local_50 != *(int *)(param_2 + 0x10)) {
      do {
        local_c8 = psVar7;
        local_d0 = uVar4;
        local_d8 = iVar2;
        local_d9 = cVar6;
        lVar5 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (cVar11 == '\0') {
          *(undefined4 *)(lVar5 + 0x14) = 0;
          lVar15 = lVar5;
        }
        else {
          lVar15 = 0;
        }
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar14 = *(longlong **)(lVar5 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar14 + 0x1e) == param_1[2]) goto LAB_146218fd6;
            plVar14 = plVar14 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar14 = (longlong *)0x0;
LAB_146218fd6:
        iVar2 = *(int *)(lVar5 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar14 + 1));
        }
        LOCK();
        *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
        UNLOCK();
        local_c0 = *plVar14;
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar10 = *(longlong **)(lVar5 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar10 + 0x1e) == param_1[1]) goto LAB_146219027;
            plVar10 = plVar10 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar10 = (longlong *)0x0;
LAB_146219027:
        iVar3 = *(int *)(lVar5 + 0x14);
        local_d4 = iVar2;
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
        }
        LOCK();
        *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
        UNLOCK();
        lVar8 = *plVar10;
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar12 = *(longlong **)(lVar5 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar12 + 0x1e) == *param_1) goto LAB_146219073;
            plVar12 = plVar12 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar12 = (longlong *)0x0;
LAB_146219073:
        iVar2 = *(int *)(lVar5 + 0x14);
        local_b8 = lVar15;
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
        }
        lVar9 = local_c0;
        LOCK();
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
        UNLOCK();
        lVar15 = *plVar12;
        local_78 = local_d0;
        local_70 = local_d4;
        local_68 = local_c0;
        uVar1 = *(ushort *)(lVar5 + 0xe);
        local_b0 = plVar12;
        local_a8 = iVar2;
        local_a0 = lVar15;
        local_98 = plVar10;
        local_90 = iVar3;
        local_88 = lVar8;
        local_80 = plVar14;
        if (uVar1 != 0) {
          uVar13 = 0;
          do {
            FUN_1462191dc(*(undefined8 *)(lVar15 + uVar13 * 4),lVar8,lVar9 + uVar13);
            uVar13 = uVar13 + 2;
            lVar8 = lVar8 + 0x14;
          } while ((uint)uVar1 * 2 != uVar13);
        }
        FUN_1462192ce(&local_b0);
        param_1 = local_c8;
        iVar3 = local_d8;
        cVar11 = local_d9;
        if (local_b8 != 0) {
          *(undefined4 *)(local_b8 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        cVar6 = local_d9;
        iVar2 = local_d8;
        uVar4 = local_d0;
        psVar7 = local_c8;
      } while (local_50 != iVar3);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462191dc FUN_1462191dc body=240 status=ok
// SIG undefined FUN_1462191dc(void)

void FUN_1462191dc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2 + 8,local_30);
  lVar4 = FUN_140dbb734(param_1,local_30);
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar4 + 8);
    lVar5 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar8 = lVar7 != 0;
      if (lVar7 != lVar5 && bVar8) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar8 = lVar7 != 0;
          if (lVar7 == lVar5) break;
        } while (lVar7 != 0);
      }
    }
    else {
      bVar8 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
    }
    lVar7 = 0;
    if (bVar8) {
      lVar7 = lVar4;
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar7 != 0) {
    bVar1 = *(byte *)(lVar7 + 0x73);
    if (bVar1 == 0xff) {
      uVar6 = 0;
      uVar3 = 0;
    }
    else {
      if (bVar1 == 0) {
        uVar3 = 0x20;
      }
      else {
        iVar2 = 0;
        if (bVar1 != 0) {
          for (; (bVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
          }
        }
        uVar3 = (undefined1)iVar2;
      }
      uVar6 = *(undefined1 *)(lVar7 + 0x34);
    }
    *param_3 = uVar6;
    param_3[1] = uVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462192ce FUN_1462192ce body=141 status=ok
// SIG undefined FUN_1462192ce(void)

void FUN_1462192ce(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014621934d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14621935c FUN_14621935c body=5143 status=ok
// SIG undefined FUN_14621935c(void)

void FUN_14621935c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140170020();
  uVar2 = FUN_140495e96(param_1);
  lVar3 = FUN_1404960a8(uVar2);
  if (lVar3 != 0) {
    lVar5 = param_1 + -0x30;
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_1416d83b0;
    FUN_1446ddc76(&local_68,"FOakUIEvent_BigMap_SetMapViewMode",1);
    FUN_140391af6(lVar3,&local_50,local_68,&local_60);
    *(undefined8 *)(param_1 + 0x28) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = &DAT_148e2521e;
    FUN_1446ddc76(&local_70,"FOakUIEvent_BigMap_Rotate",1);
    FUN_140391af6(lVar3,&local_50,local_70,&local_60);
    *(undefined8 *)(param_1 + 0x38) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e25220;
    FUN_1446ddc76(&local_78,"FOakUIEvent_BigMap_Center",1);
    FUN_140391af6(lVar3,&local_50,local_78,&local_60);
    *(undefined8 *)(param_1 + 0x40) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e2532e;
    FUN_1446ddc76(&local_80,"FOakUIEvent_BigMap_SetMarker",1);
    FUN_140391af6(lVar3,&local_50,local_80,&local_60);
    *(undefined8 *)(param_1 + 0x48) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e2536a;
    FUN_1446ddc76(&local_88,"FOakUIEvent_BigMap_RemoveMarker",1);
    FUN_140391af6(lVar3,&local_50,local_88,&local_60);
    *(undefined8 *)(param_1 + 0x50) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = &DAT_148e253c2;
    FUN_1446ddc76(&local_90,"FOakUIEvent_BigMap_SwitchRegion",1);
    FUN_140391af6(lVar3,&local_50,local_90,&local_60);
    *(undefined8 *)(param_1 + 0x58) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    puVar1[4] = FUN_148e253c4;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_1446ddc76(&local_98,"FOakUIEvent_BigMap_Drag_Ended",1);
    FUN_140391af6(lVar3,&local_50,local_98,&local_60);
    *(undefined8 *)(param_1 + 0x68) = local_50;
    FUN_1449db362(&local_60);
    if (*(longlong *)(param_1 + 0x138) == 0) {
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      puVar1 = local_60;
      local_58 = 3;
      *local_60 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_60[2] = lVar4;
      *local_60 = &PTR_FUN_14b9a82c0;
      local_60[3] = 0;
      FUN_14485c47a(local_60 + 3,lVar5);
      puVar1[4] = FUN_148e253ec;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_1446ddc76(&local_a0,"FOakUIEvent_ShowMissionOnMap",1);
      FUN_140391af6(lVar3,&local_50,local_a0,&local_60);
      *(undefined8 *)(param_1 + 0x138) = local_50;
      FUN_1449db362(&local_60);
    }
    if (*(longlong *)(param_1 + 0x78) == 0) {
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      puVar1 = local_60;
      local_58 = 3;
      *local_60 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_60[2] = lVar4;
      *local_60 = &PTR_FUN_14b9a82c0;
      local_60[3] = 0;
      FUN_14485c47a(local_60 + 3,lVar5);
      puVar1[4] = FUN_14616224e;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_1446ddc76(&local_a8,"FOakUIEvent_DiscoverLocationsUpdated",1);
      FUN_140391af6(lVar3,&local_50,local_a8,&local_60);
      *(undefined8 *)(param_1 + 0x78) = local_50;
      FUN_1449db362(&local_60);
    }
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = &DAT_148e254cc;
    FUN_1446ddc76(&local_b0,"FOakUIEvent_BigMap_Drag_Ended",1);
    FUN_140391af6(lVar3,&local_50,local_b0,&local_60);
    *(undefined8 *)(param_1 + 0x70) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e254ce;
    FUN_1446ddc76(&local_b8,"FOakUIEvent_BigMap_LocateOnMap",1);
    FUN_140391af6(lVar3,&local_50,local_b8,&local_60);
    *(undefined8 *)(param_1 + 0x80) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e25506;
    FUN_1446ddc76(&local_c0,"FOakUIEvent_BigMap_FastTravel",1);
    FUN_140391af6(lVar3,&local_50,local_c0,&local_60);
    *(undefined8 *)(param_1 + 0x88) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e2557c;
    FUN_1446ddc76(&local_c8,"FOakUIEvent_BigMap_TrackMission",1);
    FUN_140391af6(lVar3,&local_50,local_c8,&local_60);
    *(undefined8 *)(param_1 + 0x90) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = &DAT_148e25612;
    FUN_1446ddc76(&local_d0,"FOakUIEvent_BigMap_ViewProfile",1);
    FUN_140391af6(lVar3,&local_50,local_d0,&local_60);
    *(undefined8 *)(param_1 + 0x98) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e25614;
    FUN_1446ddc76(&local_d8,"FOakUIEvent_BigMap_SetHighlight",1);
    FUN_140391af6(lVar3,&local_50,local_d8,&local_60);
    *(undefined8 *)(param_1 + 0xa0) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e25656;
    FUN_1446ddc76(&local_e0,"FOakUIEvent_BigMap_SetFilterVisibility",1);
    FUN_140391af6(lVar3,&local_50,local_e0,&local_60);
    *(undefined8 *)(param_1 + 0xa8) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_144251de2;
    FUN_1446ddc76(&local_e8,"FOakUIEvent_BigMap_SetUseFixedFilters",1);
    FUN_140391af6(lVar3,&local_50,local_e8,&local_60);
    *(undefined8 *)(param_1 + 0xb0) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e256c4;
    FUN_1446ddc76(&local_f0,"FOakUIEvent_BigMap_SwitchMaps",1);
    FUN_140391af6(lVar3,&local_50,local_f0,&local_60);
    *(undefined8 *)(param_1 + 0xb8) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = &LAB_146162244;
    FUN_1446ddc76(&local_f8,"FOakUIEvent_BigMap_ToggleLegend",1);
    FUN_140391af6(lVar3,&local_50,local_f8,&local_60);
    *(undefined8 *)(param_1 + 0xc0) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e258dc;
    FUN_1446ddc76(&local_100,"FOakUIEvent_BigMap_RefreshExplore",1);
    FUN_140391af6(lVar3,&local_50,local_100,&local_60);
    *(undefined8 *)(param_1 + 200) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148e259d0;
    FUN_1446ddc76(&local_108,"FOakUIEvent_BigMap_TraitMission",1);
    FUN_140391af6(lVar3,&local_50,local_108,&local_60);
    *(undefined8 *)(param_1 + 0xd0) = local_50;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar1 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_60[2] = lVar4;
    *local_60 = &PTR_FUN_14b9a82c0;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar5);
    puVar1[4] = FUN_144251e50;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_1446ddc76(&local_110,"FOakUIEvent_BigMap_ToggleProgressExpanded",1);
    FUN_140391af6(lVar3,&local_50,local_110,&local_60);
    *(undefined8 *)(param_1 + 0xd8) = local_50;
    FUN_1449db362(&local_60);
    lVar5 = FUN_1400d7050(param_1);
    if (lVar5 != 0) {
      lVar6 = FUN_144a5dd5e();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
         (*(longlong *)(lVar5 + 0x3cc8) != 0)) {
        lVar5 = FUN_140123f3e();
        if (lVar5 != 0) {
          FUN_14621a774(lVar5,lVar3);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621a774 FUN_14621a774 body=21 status=ok
// SIG undefined FUN_14621a774(void)

void FUN_14621a774(longlong param_1)

{
  FUN_14485c47a(param_1 + 0xad8);
  return;
}



// FUNCTION 14621a78a FUN_14621a78a body=424 status=ok
// SIG undefined FUN_14621a78a(void)

undefined4 * FUN_14621a78a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14621a934(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  lVar12 = param_3[1];
  *local_38 = *puVar2;
  lVar3 = puVar2[1];
  local_38[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = &PTR_FUN_14ba3d3b0;
  local_38[3] = *(undefined8 *)(lVar12 + 8);
  lVar3 = *(longlong *)(lVar12 + 0x10);
  local_38[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  local_38[5] = *(undefined8 *)(lVar12 + 0x18);
  *(undefined4 *)(local_38 + 6) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
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
  cVar7 = FUN_14621aa18(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x34) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 6) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_14621ab1a(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621a934 FUN_14621a934 body=227 status=ok
// SIG undefined FUN_14621a934(void)

int * FUN_14621a934(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14621aa18 FUN_14621aa18 body=256 status=ok
// SIG undefined FUN_14621aa18(void)

undefined8 FUN_14621aa18(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
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
  int iVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar17 = FUN_148fa0d68(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar17 = FUN_148fa0d68(param_1);
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
    if (iVar17 != -1) {
      lVar5 = *param_1;
      lVar19 = (longlong)iVar17 * 0x38;
      FUN_145d23884(lVar5 + lVar19);
      uVar6 = *(undefined4 *)param_3;
      uVar7 = *(undefined4 *)((longlong)param_3 + 4);
      uVar8 = *(undefined4 *)(param_3 + 1);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar10 = *(undefined4 *)(param_3 + 2);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar12 = *(undefined4 *)(param_3 + 3);
      uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar14 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar15 = *(undefined4 *)(param_3 + 5);
      uVar16 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar3 = (undefined4 *)(lVar5 + 0x20 + lVar19);
      *puVar3 = *(undefined4 *)(param_3 + 4);
      puVar3[1] = uVar14;
      puVar3[2] = uVar15;
      puVar3[3] = uVar16;
      puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar19);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(lVar5 + lVar19);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      FUN_148fa0e24(param_1,*param_4);
      *param_4 = iVar17;
      uVar18 = 1;
      goto LAB_14621aa40;
    }
  }
  uVar18 = 0;
LAB_14621aa40:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621ab1a FUN_14621ab1a body=500 status=ok
// SIG undefined FUN_14621ab1a(void)

void FUN_14621ab1a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x38;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x34) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x30) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621ad10 FUN_14621ad10 body=227 status=ok
// SIG undefined FUN_14621ad10(void)

bool FUN_14621ad10(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  float extraout_XMM0_Da;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  cVar3 = (**(code **)(*param_1 + 0x40))();
  if (cVar3 == '\0') {
    bVar4 = true;
    if ((0.0 < *(float *)((longlong)param_1 + 0xdc)) &&
       (plVar2 = (longlong *)param_1[0x1c], plVar2[0x3e] != 0)) {
      if (plVar2[0x22] == 0) {
        uVar8 = 0xe0000000;
        uVar9 = 0x47efffff;
      }
      else {
        uVar1 = *(undefined8 *)(plVar2[0x22] + 0x270);
        uVar8 = (undefined4)uVar1;
        uVar9 = (undefined4)((ulonglong)uVar1 >> 0x20);
      }
      lVar5 = (**(code **)(*plVar2 + 0xdc0))();
      dVar7 = DAT_14c8464f0;
      if (lVar5 != 0) {
        dVar7 = (double)*(float *)(lVar5 + 0x18);
      }
      fVar6 = (float)FUN_14165ac3e(param_1[0x1c]);
      (**(code **)(**(longlong **)(param_1[0x1c] + 0x1f0) + 0x678))();
      bVar4 = (double)(extraout_XMM0_Da - fVar6) <=
              ((double)CONCAT44(uVar9,uVar8) + dVar7) - (double)*(float *)(param_1 + 7);
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 14621adf4 FUN_14621adf4 body=129 status=ok
// SIG undefined FUN_14621adf4(void)

void FUN_14621adf4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_148e114a0(param_2);
  }
  local_20 = FUN_145abc86c();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_14621ae76(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621ae76 FUN_14621ae76 body=206 status=ok
// SIG undefined FUN_14621ae76(void)

void FUN_14621ae76(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14621aec4;
    }
  }
  lVar2 = 0;
LAB_14621aec4:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14621af5a(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621af5a FUN_14621af5a body=454 status=ok
// SIG undefined FUN_14621af5a(void)

void FUN_14621af5a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_14621b038:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_14621b106;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_14621b038;
LAB_14621b106:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_14621b122(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621b122 FUN_14621b122 body=132 status=ok
// SIG undefined FUN_14621b122(void)

void FUN_14621b122(longlong param_1,int param_2)

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



// FUNCTION 14621b1a8 FUN_14621b1a8 body=516 status=ok
// SIG undefined FUN_14621b1a8(void)

void FUN_14621b1a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1410c2f26();
  lVar7 = FUN_140391552(param_1);
  if (lVar7 != 0) {
    plVar9 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_14621b372:
      uVar10 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_14621b372;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar11);
      uVar10 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    local_48 = (code *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    *(undefined ***)local_48 = &PTR_LAB_14b4665f0;
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
    *(longlong *)(local_48 + 0x10) = lVar8;
    *(undefined ***)local_48 = &PTR_FUN_14b9c0a20;
    *(undefined8 *)(local_48 + 0x18) = uVar10;
    *(longlong **)(local_48 + 0x20) = plVar9;
    FUN_1446ddc76(&local_50,"FOakUIEvent_CrosshairFeedbackTriggered",1);
    FUN_140391af6(lVar7,local_60,local_50,&local_48);
    *(undefined8 *)(param_1 + 0x298) = local_60[0];
    FUN_1449db362(&local_48);
    if (!bVar3) {
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
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      local_48 = FUN_1458f50a8;
      local_40 = 0;
      FUN_14621b3ae(local_60,param_1);
      FUN_1446ddc76(&local_68,"FOakUIEvent_CrosshairActionSkillUpdate",1);
      FUN_140391af6(lVar7,&local_48,local_68,local_60);
      *(code **)(param_1 + 0x2a0) = local_48;
      FUN_1449db362(local_60);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621b3ae FUN_14621b3ae body=428 status=ok
// SIG undefined FUN_14621b3ae(void)

longlong * FUN_14621b3ae(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14621b48e:
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9c0a90;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14621b48e;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4665f0;
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
    *puVar5 = &PTR_FUN_14b9c0a90;
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



// FUNCTION 14621b55a FUN_14621b55a body=48 status=ok
// SIG undefined FUN_14621b55a(void)

void FUN_14621b55a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14165ac48(param_1,0,0,param_3);
  FUN_1408dc76a(&DAT_14cb107d8,*(undefined8 *)(param_1 + 0xc0),param_1);
  return;
}



// FUNCTION 14621b596 FUN_14621b596 body=937 status=ok
// SIG undefined FUN_14621b596(void)

undefined8 * FUN_14621b596(undefined8 *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14ad017b0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_145e3d254();
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar3 + 2);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e();
    }
    local_28 = FUN_1413336e6();
    if ((local_28 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e();
    }
    local_38 = FUN_1412217cc();
    if ((local_38 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(local_38);
    }
    FUN_140909372(&local_38,&local_30);
    local_40 = param_1[2];
    if ((local_40 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e();
    }
    local_48 = FUN_1458f0824();
    if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(local_48);
    }
    FUN_140909372(&local_48,&local_40);
    local_50 = FUN_14099c56c();
    if (local_50 != 0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(local_50);
    }
    local_58 = param_1[2];
    if ((local_58 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_14689c22e();
    }
    FUN_140909372(&local_58,&local_50);
    local_60 = FUN_145a683b0();
    if (local_60 != 0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(local_60);
    }
    local_68 = param_1[2];
    if ((local_68 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_14689c22e();
    }
    FUN_140909372(&local_68,&local_60);
    local_70 = FUN_145920b2e();
    if (local_70 != 0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(local_70);
    }
    local_78 = param_1[2];
    if ((local_78 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_14689c22e();
    }
    FUN_140909372(&local_78,&local_70);
    local_80 = FUN_145a680ec();
    if (local_80 != 0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(local_80);
    }
    local_88 = param_1[2];
    if ((local_88 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_14689c22e();
    }
    FUN_140909372(&local_88,&local_80);
    uVar1 = *(undefined2 *)(lVar2 + 0x4a);
    local_90 = param_1[2];
    if ((local_90 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e();
    }
    FUN_14118c742(&local_90,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621b940 FUN_14621b940 body=598 status=ok
// SIG undefined FUN_14621b940(void)

void FUN_14621b940(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  int local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined1 local_54 [12];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_1461bea8e();
  if (lVar6 == 0) goto LAB_14621bad2;
  plVar1 = param_1 + 0xc;
  *(undefined1 *)(param_1 + 0xc) = 0xb;
  FUN_140c25b54(plVar1);
  local_40 = *(undefined4 *)(lVar6 + 0x20);
  local_48 = *(undefined8 *)(lVar6 + 0x18);
  plVar4 = param_1 + 0xe;
  FUN_144928d62(plVar4,0);
  uVar7 = FUN_141068cca(param_1);
  FUN_145c6cc9a(param_1,&local_68);
  FUN_141068c44(param_1,local_54);
  FUN_140d84843(plVar1,local_54,&local_68,uVar7);
  cVar5 = FUN_1401144ce(plVar1);
  if (cVar5 == '\0') goto LAB_14621bad2;
  if ((((char)*plVar1 != '\x01') ||
      (FUN_144a659ac(plVar4,&local_68,1), local_68 != (int)DAT_14cb7bb98)) ||
     (local_60 != DAT_14cb7bba0)) {
    FUN_144a659ac(plVar4,&local_68,1);
    uVar7 = FUN_1410d0064(param_1);
    FUN_140fda471(local_54,uVar7);
    cVar5 = FUN_144a8940a(&local_68,local_54);
    if (cVar5 != '\0') goto LAB_14621bad2;
  }
  (**(code **)(*param_1 + 0x30))(param_1,&local_68);
  plVar4 = (longlong *)CONCAT44(uStack_5c,local_60);
  if (plVar4 == (longlong *)0x0) {
    param_1[0x13] = CONCAT44(uStack_64,local_68);
    plVar8 = (longlong *)param_1[0x14];
    if (plVar8 != (longlong *)0x0) {
      param_1[0x14] = 0;
LAB_14621bb2a:
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x00014621bb63:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0x13] = CONCAT44(uStack_64,local_68);
    plVar8 = (longlong *)param_1[0x14];
    if (plVar4 == plVar8) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar8 = plVar4;
        goto joined_r0x00014621bb63;
      }
    }
    else {
      param_1[0x14] = (longlong)plVar4;
      if (plVar8 != (longlong *)0x0) goto LAB_14621bb2a;
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_5c,local_60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  lVar6 = param_1[0x13];
  uVar7 = FUN_1410d0064(param_1);
  FUN_14621bdea(lVar6,plVar1,uVar7);
LAB_14621bad2:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621bb98 FUN_14621bb98 body=221 status=ok
// SIG undefined FUN_14621bb98(void)

longlong * FUN_14621bb98(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b418920;
  plVar1 = plVar4 + 2;
  FUN_14621bd16(plVar1,param_1);
  plVar4[2] = (longlong)&PTR_FUN_14b008cb0;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_14621bc78(&local_38,plVar1);
  plVar3 = local_30;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
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



// FUNCTION 14621bc78 FUN_14621bc78 body=157 status=ok
// SIG undefined FUN_14621bc78(void)

void FUN_14621bc78(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14621bcb2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14621bcb2;
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
LAB_14621bcb2:
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
                    /* WARNING: Could not recover jumptable at 0x00014621bd11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14621bd16 FUN_14621bd16 body=212 status=ok
// SIG undefined FUN_14621bd16(void)

undefined8 * FUN_14621bd16(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14b008cf0;
  FUN_140d7ec9e(param_1 + 0xc);
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14621bdaf:
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14621bdaf;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_2 + 8);
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
    param_1[0xe] = uVar4;
    param_1[0xf] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
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
  return param_1;
}



// FUNCTION 14621bdea FUN_14621bdea body=293 status=ok
// SIG undefined FUN_14621bdea(void)

void FUN_14621bdea(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(param_1 + 0xb,param_3);
  *(int *)(param_1 + 5) = (int)param_2[1];
  param_1[4] = *param_2;
  FUN_1447715ec(param_1 + 6,param_2 + 2);
  uVar5 = FUN_14479d2ce(param_1 + 0xb);
  plVar6 = (longlong *)FUN_14007a5e6(uVar5);
  if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x110))(plVar6), lVar7 != 0)) {
    plVar6 = (longlong *)param_1[2];
    if (plVar6 == (longlong *)0x0) {
LAB_14621bed4:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_14621bed4;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar8);
      local_38 = param_1[1];
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_30 = plVar6;
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
    FUN_14621bf10(lVar7,&local_38);
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621bf10 FUN_14621bf10 body=542 status=ok
// SIG undefined FUN_14621bf10(void)

void FUN_14621bf10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  uint local_a0 [2];
  int local_98;
  uint local_94;
  int local_8c;
  uint local_88;
  int local_80;
  undefined1 local_7c [12];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = FUN_144729dda(param_1 + 0x1c);
  if (cVar2 == '\0') goto LAB_14621c095;
  puVar4 = (undefined8 *)FUN_14621c130(*param_2);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_70 = *puVar4;
  local_68 = *(undefined4 *)(puVar4 + 1);
  FUN_1447715ec(&local_60,puVar4 + 2);
  cVar2 = FUN_1401144ce(&local_70);
  if (cVar2 != '\0') {
    if ((((char)local_70 != '\x01') ||
        (FUN_144a659ac(&local_60,local_a0,1), local_a0[0] != (uint)DAT_14cb7bb98)) ||
       (local_98 != DAT_14cb7bba0)) {
      FUN_144a659ac(&local_60,local_a0,1);
      lVar5 = FUN_14479d2ce(param_1 + 0x1c);
      if (*(longlong *)(lVar5 + 0x30) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x360);
      }
      FUN_140fda471(local_7c,uVar7);
      cVar2 = FUN_144a8940a(local_a0,local_7c);
      if (cVar2 != '\0') goto LAB_14621c088;
    }
    FUN_140ac173c(local_a0,&local_70);
    uVar3 = local_a0[0];
    if (local_98 != 0) {
      uVar3 = FUN_144a78877(local_a0[0]);
    }
    if (local_8c != 0) {
      local_94 = FUN_144a78877(local_94);
    }
    if (local_80 != 0) {
      local_88 = FUN_144a78877(local_88);
    }
    plVar6 = (longlong *)FUN_14621c23a(param_1 + 0x4d8,local_94 ^ uVar3 ^ local_88,local_a0);
    FUN_14621c136(plVar6 + 2,param_2);
    lVar5 = plVar6[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar1 = *plVar6;
      lVar8 = 0;
      do {
        FUN_1410b5f9c(param_1,*(undefined4 *)(lVar1 + lVar8));
        lVar8 = lVar8 + 4;
      } while ((longlong)(int)lVar5 * 4 != lVar8);
    }
  }
LAB_14621c088:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_14621c095:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621c130 FUN_14621c130 body=5 status=ok
// SIG undefined FUN_14621c130(void)

longlong FUN_14621c130(longlong param_1)

{
  return param_1 + 0x20;
}



// FUNCTION 14621c136 FUN_14621c136 body=128 status=ok
// SIG undefined FUN_14621c136(void)

void FUN_14621c136(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14621c1b6(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14621c1b6 FUN_14621c1b6 body=132 status=ok
// SIG undefined FUN_14621c1b6(void)

void FUN_14621c1b6(longlong param_1,int param_2)

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



// FUNCTION 14621c23a FUN_14621c23a body=141 status=ok
// SIG undefined FUN_14621c23a(void)

longlong FUN_14621c23a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1410b645c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x50;
    if (lVar3 + lVar2 != 0) goto LAB_14621c28b;
  }
  local_30 = param_3;
  FUN_14621c2c8(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x50;
LAB_14621c28b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x28;
}



// FUNCTION 14621c2c8 FUN_14621c2c8 body=269 status=ok
// SIG undefined FUN_14621c2c8(void)

undefined4 * FUN_14621c2c8(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c6b6ea(param_1,local_48);
  FUN_14621c3d6(param_4,local_40);
  *(undefined4 *)(local_40 + 0x48) = 0xffffffff;
  cVar1 = FUN_145c6b55c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x4c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x48) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145c6b7e6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621c3d6 FUN_14621c3d6 body=140 status=ok
// SIG undefined FUN_14621c3d6(void)

undefined8 * FUN_14621c3d6(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_2 = *puVar1;
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)((longlong)puVar1 + 0xc);
  param_2[3] = puVar1[3];
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar1 + 4);
  param_2[5] = 0;
  local_30 = 0;
  param_2[6] = 0;
  local_28 = 0;
  param_2[7] = 0;
  local_20 = 0;
  param_2[8] = 0;
  local_18 = 0;
  FUN_145c6b660();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621c464 FUN_14621c464 body=452 status=ok
// SIG undefined FUN_14621c464(void)

void FUN_14621c464(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  puVar8 = &DAT_14cb809e8;
  if (*(longlong *)(lVar2 + 0xa4) != 0) {
    puVar8 = (undefined8 *)(lVar2 + 0xa4);
  }
  lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
  if (lVar5 == 0) {
    lVar10 = 0;
LAB_14621c50b:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar10 = *(longlong *)(lVar5 + 0x158);
    plVar9 = *(longlong **)(lVar5 + 0x160);
    if (plVar9 == (longlong *)0x0) goto LAB_14621c50b;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  cVar4 = *(char *)(lVar2 + 0x80);
  if (cVar4 == '\x01') {
    FUN_14621c6a8(param_1,puVar8);
    if (lVar10 != 0) {
      FUN_14621c628(lVar10,puVar8);
    }
  }
  else if (cVar4 == '\x02') {
    FUN_148896db6(param_1);
    if (lVar10 != 0) {
      FUN_1457eb59e(lVar10);
    }
  }
  else if (cVar4 == '\0') {
    lVar5 = *(longlong *)(lVar2 + 0x90);
    if (lVar5 == 0) {
      uVar6 = FUN_145cd7928();
      lVar5 = FUN_14477b664(uVar6);
      *(longlong *)(lVar2 + 0x90) = lVar5;
    }
    lVar7 = *(longlong *)(lVar2 + 0x98);
    if (lVar7 == 0) {
      if ((lVar5 == 0) || (*(longlong *)(lVar2 + 0x88) == 0)) goto LAB_14621c4e5;
      plVar3 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(lVar2 + 0x98) = 0;
        goto LAB_14621c4e5;
      }
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar2 + 0x88));
      *(longlong *)(lVar2 + 0x98) = lVar7;
      if (lVar7 == 0) goto LAB_14621c4e5;
    }
    if (*(char *)(lVar2 + 0xa1) == '\x01') {
      FUN_143d73aba(param_1,lVar7,puVar8);
    }
    else if (lVar10 != 0) {
      FUN_145d4f580(lVar10,lVar7,puVar8);
    }
  }
LAB_14621c4e5:
  FUN_14097c15a(param_1);
  if (plVar9 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014621c54e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14621c628 FUN_14621c628 body=126 status=ok
// SIG undefined FUN_14621c628(void)

void FUN_14621c628(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b3f2670;
  local_58[0] = FUN_143cdb90a;
  local_30 = param_1;
  local_28 = param_2;
  FUN_1457eb61a(param_1,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621c6a8 FUN_14621c6a8 body=136 status=ok
// SIG undefined FUN_14621c6a8(void)

void FUN_14621c6a8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = FUN_1405f939e();
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x238))) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar5);
      if (lVar2 != 0) {
        lVar3 = FUN_1449f3324();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_14585d6a8(lVar2,param_2);
        }
      }
      lVar5 = lVar5 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x238));
  }
  return;
}



// FUNCTION 14621c73c FUN_14621c73c body=1593 status=ok
// SIG undefined FUN_14621c73c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14621c73c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong **local_1c0;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong local_1a0;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  longlong *local_190 [2];
  longlong *local_180 [2];
  undefined1 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158 [2];
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  wchar_t *local_130;
  undefined4 local_128;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar6 = FUN_1459ec15a();
  lVar7 = FUN_14621cdfa(DAT_14c951640,uVar6);
  *(longlong *)(param_1 + 0x10) = lVar7;
  uVar2 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  FUN_1447f71cc(lVar7,0x40000000);
  FUN_1446f470e(&local_68,L"EnhancedInput",1);
  FUN_1446f470e(&local_70,L"GraphEditor.KeyEvent_16x",1);
  local_130 = L"EnhancedInputSubCateogry";
  local_128 = 0x18;
  FUN_1446e940c(local_158,&local_130);
  local_130 = L"EnhancedInput";
  local_128 = 0xd;
  FUN_1446e940c(local_180,&local_130);
  FUN_140208bae(local_80,local_180,local_158,L"Enhanced Input");
  FUN_1413a4fa6(local_68,local_80,local_70);
  FUN_144a5dc74(local_158);
  local_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = L"ComboKey";
  local_128 = 8;
  FUN_1446e940c(local_194,&local_130);
  local_130 = L"EnhancedInput";
  local_128 = 0xd;
  FUN_1446e940c(local_198,&local_130);
  FUN_140208bae(local_190,local_198,local_194,L"Combo Key");
  FUN_14023423e(local_180,local_190);
  local_170 = 1;
  local_168 = 0;
  uStack_160 = 0;
  local_1b0 = _DAT_14cb26ee0;
  uStack_1ac = uRam000000014cb26ee4;
  uStack_1a8 = _DAT_14cb26ee8;
  uStack_1a4 = uRam000000014cb26eec;
  local_1a0 = DAT_14cb26ef0;
  if (DAT_14cb26ef0 != 0) {
    LOCK();
    *(int *)(DAT_14cb26ef0 + 8) = *(int *)(DAT_14cb26ef0 + 8) + 1;
    UNLOCK();
  }
  local_1c8 = local_68;
  local_1c0 = local_158;
  FUN_1413a41ee(&local_130,&local_1b0,local_180,0x100);
  FUN_1413a47ae(&local_130);
  FUN_140cac0f2(&local_130);
  FUN_1449db362(&local_168);
  if (local_180[0] != (longlong *)0x0) {
    (**(code **)(*local_180[0] + 0x10))();
  }
  if (local_190[0] != (longlong *)0x0) {
    (**(code **)(*local_190[0] + 0x10))();
  }
  FUN_1449db362(&local_140);
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = DAT_14c8407a8;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_130 = (wchar_t *)0x0;
  local_128 = 0;
  FUN_1446efa72(&local_130,0,3,0x10);
  pwVar5 = local_130;
  local_128 = 3;
  *(undefined ***)local_130 = &PTR_LAB_14a177500;
  uVar6 = FUN_144a3f946();
  *(undefined8 *)(pwVar5 + 8) = uVar6;
  *(undefined ***)pwVar5 = &PTR_FUN_14acd08b0;
  *(longlong *)(pwVar5 + 0xc) = param_1;
  *(code **)(pwVar5 + 0x10) = FUN_147f8fc00;
  pwVar5[0x14] = L'\0';
  pwVar5[0x15] = L'\0';
  local_1c8 = CONCAT44(local_1c8._4_4_,1);
  uVar6 = (**(code **)(*plVar4 + 0x98))
                    (plVar4,L"Input.+action",
                     L"Provide the named action with a constant input value each frame",&local_130);
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_14621cd76(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar6;
  FUN_1449db362(&local_130);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = DAT_14c8407a8;
  local_130 = (wchar_t *)0x0;
  local_128 = 0;
  FUN_1446efa72(&local_130,0,3,0x10);
  pwVar5 = local_130;
  local_128 = 3;
  *(undefined ***)local_130 = &PTR_LAB_14a177500;
  uVar6 = FUN_144a3f946();
  *(undefined8 *)(pwVar5 + 8) = uVar6;
  *(undefined ***)pwVar5 = &PTR_FUN_14acd08b0;
  *(longlong *)(pwVar5 + 0xc) = param_1;
  *(code **)(pwVar5 + 0x10) = FUN_147f8fdfa;
  pwVar5[0x14] = L'\0';
  pwVar5[0x15] = L'\0';
  local_1c8 = CONCAT44(local_1c8._4_4_,1);
  uVar6 = (**(code **)(*plVar4 + 0x98))
                    (plVar4,L"Input.-action",L"Stop forcing the named action value each frame",
                     &local_130);
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_14621cd76(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar6;
  FUN_1449db362(&local_130);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = DAT_14c8407a8;
  local_130 = (wchar_t *)0x0;
  local_128 = 0;
  FUN_1446efa72(&local_130,0,3,0x10);
  pwVar5 = local_130;
  local_128 = 3;
  *(undefined ***)local_130 = &PTR_LAB_14a177500;
  uVar6 = FUN_144a3f946();
  *(undefined8 *)(pwVar5 + 8) = uVar6;
  *(undefined ***)pwVar5 = &PTR_FUN_14acd08b0;
  *(longlong *)(pwVar5 + 0xc) = param_1;
  *(code **)(pwVar5 + 0x10) = FUN_147f8ff64;
  pwVar5[0x14] = L'\0';
  pwVar5[0x15] = L'\0';
  local_1c8 = CONCAT44(local_1c8._4_4_,1);
  uVar6 = (**(code **)(*plVar4 + 0x98))
                    (plVar4,L"Input.+key",
                     L"Provide the named key with a constant input value each frame",&local_130);
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_14621cd76(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar6;
  FUN_1449db362(&local_130);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar4 = DAT_14c8407a8;
  local_130 = (wchar_t *)0x0;
  local_128 = 0;
  FUN_1446efa72(&local_130,0,3,0x10);
  pwVar5 = local_130;
  local_128 = 3;
  *(undefined ***)local_130 = &PTR_LAB_14a177500;
  uVar6 = FUN_144a3f946();
  *(undefined8 *)(pwVar5 + 8) = uVar6;
  *(undefined ***)pwVar5 = &PTR_FUN_14acd08b0;
  *(longlong *)(pwVar5 + 0xc) = param_1;
  *(code **)(pwVar5 + 0x10) = FUN_147f90152;
  pwVar5[0x14] = L'\0';
  pwVar5[0x15] = L'\0';
  local_1c8 = CONCAT44(local_1c8._4_4_,1);
  uVar6 = (**(code **)(*plVar4 + 0x98))
                    (plVar4,L"Input.-key",L"Stop forcing the named key each frame",&local_130);
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_14621cd76(plVar1,iVar3);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar6;
  FUN_1449db362(&local_130);
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621cd76 FUN_14621cd76 body=132 status=ok
// SIG undefined FUN_14621cd76(void)

void FUN_14621cd76(longlong param_1,int param_2)

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



// FUNCTION 14621cdfa FUN_14621cdfa body=187 status=ok
// SIG undefined FUN_14621cdfa(void)

undefined8 FUN_14621cdfa(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 14621ceb6 FUN_14621ceb6 body=125 status=ok
// SIG undefined FUN_14621ceb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14621ceb6(void)

{
  DAT_14caea140 = 0;
  DAT_14caea148 = 0;
  DAT_14caea120 = 0;
  _DAT_14caea128 = 0;
  _DAT_14caea14c = 0xffffffff00000080;
  DAT_14caea154 = 0;
  DAT_14caea160 = 0;
  DAT_14caea168 = 0;
  DAT_14caea170 = 0;
  _DAT_14caea178 = 0;
  DAT_14caea180 = 0;
  _DAT_14caea188 = 0;
  FUN_140056680(&DAT_14caea190,&DAT_149dfb77a);
  DAT_14caea1a0 = 0;
  FUN_14621cf34(0x24);
  FUN_14165e49a();
  return;
}



// FUNCTION 14621cf34 FUN_14621cf34 body=60 status=ok
// SIG undefined FUN_14621cf34(void)

void FUN_14621cf34(undefined4 param_1)

{
  if (DAT_14caea168 == 0x20) {
    FUN_14621cf70();
    FUN_14165e0c4(param_1);
    return;
  }
  FUN_14165e0c4(param_1);
  DAT_14caea168 = 0x20;
  FUN_14165e2b2();
  return;
}



// FUNCTION 14621cf70 FUN_14621cf70 body=384 status=ok
// SIG undefined FUN_14621cf70(void)

void FUN_14621cf70(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar5 = &DAT_14caea158;
  if (DAT_14caea160 != (undefined *)0x0) {
    puVar5 = DAT_14caea160;
  }
  iVar4 = DAT_14caea168 + 3;
  if (-1 < DAT_14caea168) {
    iVar4 = DAT_14caea168;
  }
  if (DAT_14caea128 - DAT_14caea154 < iVar4 >> 2) {
    local_50 = 0x100000000;
    local_48 = &DAT_14caea130;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar4 = 0;
    if (DAT_14caea148 != 0) {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14caea148;
    }
    local_78 = &DAT_14caea120;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar1 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (local_48 != &DAT_14caea130)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        do {
          *(undefined4 *)
           (puVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar2 * 0x80) * 4) = 0xffffffff
          ;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar2 = local_60._4_4_;
        } while (local_60._4_4_ != iVar4);
      } while ((local_68 != &DAT_14caea130) || (uVar1 = local_60, local_78 != &DAT_14caea120));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14caea168) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14caea168);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621d0f2 FUN_14621d0f2 body=37 status=ok
// SIG undefined FUN_14621d0f2(void)

void FUN_14621d0f2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x168);
  FUN_14621d118(param_2);
  return;
}



// FUNCTION 14621d118 FUN_14621d118 body=203 status=ok
// SIG undefined FUN_14621d118(void)

undefined8 * FUN_14621d118(undefined8 *param_1)

{
  FUN_1410df32e();
  *param_1 = &PTR_FUN_14b1bb1d0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_14044066a(param_1 + 0x11,0x11,7);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1f] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0x23) = 4;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x24) = 2;
  *(byte *)(param_1 + 0x25) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 4;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2b) = 3;
  *(char *)(param_1 + 0x2c) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return param_1;
}



// FUNCTION 14621d1e4 FUN_14621d1e4 body=180 status=ok
// SIG undefined FUN_14621d1e4(void)

void FUN_14621d1e4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined4 local_50 [10];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_14621d29a(param_2);
    lVar2 = (**(code **)(*plVar1 + 0x3a0))(plVar1);
    if (lVar2 != 0) {
      local_50[0] = FUN_14621d2e6(param_2);
      plVar1 = (longlong *)FUN_140d17acc(lVar2);
      if (plVar1 != (longlong *)0x0) {
        FUN_1409c5062(local_50,&DAT_14cbca498);
        local_51 = 0xff;
        (**(code **)(*plVar1 + 0x40))(plVar1,local_50,&local_51,1);
        if (local_28 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621d29a FUN_14621d29a body=75 status=ok
// SIG undefined FUN_14621d29a(void)

longlong FUN_14621d29a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x958) + 0x10))(param_1 + 0x958);
  if (lVar1 != 0) {
    lVar2 = FUN_1406f6176();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14621d2e6 FUN_14621d2e6 body=226 status=ok
// SIG undefined FUN_14621d2e6(void)

undefined4 FUN_14621d2e6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x398) == 0) goto LAB_14621d3a3;
  lVar4 = FUN_1447210f0();
  if (lVar4 == 0) goto LAB_14621d3a3;
  lVar4 = FUN_1400f6f32(lVar4);
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 == 0)) goto LAB_14621d3a3;
  if (*(longlong *)(param_1 + 0x398) == 0) {
LAB_14621d3c4:
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_140082f10();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if (lVar1 == 0) goto LAB_14621d3c4;
    lVar6 = 0;
    if ((lVar5 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38)) goto LAB_14621d3c4;
      lVar6 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar6 = lVar1;
      }
    }
  }
  FUN_14042af24(lVar4,local_24,lVar6);
  uVar3 = FUN_140b9fef0(lVar4,local_24,0);
LAB_14621d3a3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621d3ca FUN_14621d3ca body=286 status=ok
// SIG undefined FUN_14621d3ca(void)

void FUN_14621d3ca(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_141660056();
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_14621d4ea(param_1 + 0x50);
    }
    iVar1 = *(int *)(param_1 + 0x68);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x60);
      lVar4 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar2 + lVar4);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_LAB_14a38c150;
          FUN_1449b67f0(puVar3 + 1);
          FUN_1400020a8(puVar3);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_14621d4ea(param_1 + 0x60);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))
              (*(longlong **)(param_1 + 0x10),&DAT_14ca85100,0);
    local_48 = 0;
    local_40 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_48,5);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))
              (*(longlong **)(param_1 + 0x10),&DAT_14ca85100);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621d4ea FUN_14621d4ea body=48 status=ok
// SIG undefined FUN_14621d4ea(void)

void FUN_14621d4ea(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14621d51a FUN_14621d51a body=103 status=ok
// SIG undefined FUN_14621d51a(void)

ulonglong FUN_14621d51a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14621d564:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14621d564;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14621d582 FUN_14621d582 body=141 status=ok
// SIG undefined FUN_14621d582(void)

void FUN_14621d582(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140391552();
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_1402ca054(*param_2,&DAT_149e06384,3);
  puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
  if (cVar1 != '\0') {
    *puVar3 = &PTR_FUN_14b9d0550;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  *puVar3 = &PTR_FUN_14b9d0570;
  FUN_14039144e(lVar2,puVar3);
  FUN_148ebf660(param_1);
  return;
}



// FUNCTION 14621d610 FUN_14621d610 body=169 status=ok
// SIG undefined FUN_14621d610(void)

bool FUN_14621d610(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 14621d6ba FUN_14621d6ba body=906 status=ok
// SIG undefined FUN_14621d6ba(void)

uint FUN_14621d6ba(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  byte param_5,char param_6,longlong param_7,undefined4 param_8,undefined4 param_9)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  byte local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78;
  int local_70;
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140056680(local_68);
  FUN_140aa5ef8(&local_58,local_68);
  local_90 = param_3;
  FUN_140056680(local_88,param_3);
  FUN_140aa5ef8(&local_78,local_88);
  if (local_50 == local_70) {
    bVar14 = true;
    if (1 < local_50) {
      lVar12 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)local_58 + lVar12);
        uVar6 = (uint)uVar1;
        uVar2 = *(ushort *)(local_78 + lVar12);
        uVar13 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14621d93f;
          }
          iVar5 = uVar6 - uVar13;
          goto LAB_14621da0a;
        }
        if (uVar1 == 0) break;
LAB_14621d93f:
        lVar12 = lVar12 + 2;
      }
      iVar5 = 0;
LAB_14621da0a:
      bVar14 = iVar5 == 0;
    }
  }
  else {
    bVar14 = local_70 + local_50 == 1;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  uVar6 = 1;
  if (!bVar14) {
    if (param_7 == 0) {
      if ((char)param_4 == '\0') {
        plVar8 = (longlong *)FUN_1400dbadc();
        plVar10 = (longlong *)*plVar8;
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)FUN_140e92164();
          *plVar8 = (longlong)plVar10;
        }
        cVar3 = (**(code **)(*plVar10 + 0x78))(plVar10,param_2);
        if (cVar3 != '\0') goto LAB_14621d8ac;
      }
      if (param_5 != 0) {
        plVar8 = (longlong *)FUN_1400dbadc();
        plVar10 = (longlong *)*plVar8;
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)FUN_140e92164();
          *plVar8 = (longlong)plVar10;
        }
        (**(code **)(*plVar10 + 0xa8))(plVar10,param_2,0);
      }
      FUN_140056680(local_68,param_2);
      FUN_140beea4a(&local_58,local_68);
      puVar11 = local_58;
      if (local_50 == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      (**(code **)(*param_1 + 0x58))(param_1,puVar11,1);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      plVar8 = (longlong *)FUN_1400dbadc();
      plVar10 = (longlong *)*plVar8;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)FUN_140e92164();
        *plVar8 = (longlong)plVar10;
      }
      local_b8 = (byte)param_9 >> 4 & 1;
      bVar4 = (**(code **)(*plVar10 + 0x1e0))
                        (plVar10,param_2,local_90,
                         CONCAT31((int3)((uint)param_8 >> 8),(byte)param_8 >> 2) & 0xffffff01);
      uVar6 = (uint)(bVar4 ^ 1);
    }
    else {
      local_a0 = param_9;
      local_a8 = param_8;
      local_b0 = param_7;
      local_b8 = param_5;
      uVar6 = FUN_1467bd962(param_1,param_2,local_90,param_4);
    }
    if (param_6 == '\x01' && uVar6 == 0) {
      plVar8 = (longlong *)FUN_1400dbadc();
      plVar10 = (longlong *)*plVar8;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)FUN_140e92164();
        *plVar8 = (longlong)plVar10;
      }
      plVar9 = (longlong *)FUN_1400dbadc();
      plVar8 = (longlong *)*plVar9;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)FUN_140e92164();
        *plVar9 = (longlong)plVar8;
      }
      uVar7 = (**(code **)(*plVar8 + 0x98))(plVar8,local_90);
      (**(code **)(*plVar10 + 0xa8))(plVar10,param_2,uVar7);
      uVar6 = 0;
    }
  }
LAB_14621d8ac:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14621da46 FUN_14621da46 body=78 status=ok
// SIG undefined FUN_14621da46(void)

void FUN_14621da46(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  lVar3 = 0x110;
  if (param_3 != '\0') {
    lVar3 = 0x1d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00014621da81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3))(plVar2,param_2);
  return;
}



// FUNCTION 14621da94 FUN_14621da94 body=192 status=ok
// SIG undefined FUN_14621da94(void)

void FUN_14621da94(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = *param_2;
  if (lVar1 == DAT_14cbe0670) {
    FUN_1416608da(param_1,lVar2);
    return;
  }
  if (lVar1 == DAT_14cbe0680) {
    FUN_146028c4e(param_1);
    return;
  }
  if (lVar1 != DAT_14cbe0688) {
    if (lVar1 == DAT_14cbe0690) {
      FUN_148ebdd2c(param_1,lVar2,param_3);
      return;
    }
    if (lVar1 != DAT_14cbe0698) {
      FUN_14621db54(param_1,param_2);
      return;
    }
    FUN_148ebde58(lVar2);
    return;
  }
  FUN_148ebdcde(param_1,lVar2);
  return;
}



// FUNCTION 14621db54 FUN_14621db54 body=156 status=ok
// SIG undefined FUN_14621db54(void)

void FUN_14621db54(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar1 = *param_2;
    if (lVar1 == DAT_14cbe2508) {
      FUN_14621dc3a(param_1,lVar2);
      return;
    }
    if (lVar1 == DAT_14cbe0630) {
      FUN_148ec8fa6(param_1,0);
      return;
    }
    if (lVar1 == DAT_14cbe2510) {
      FUN_14621dbf0(lVar1,lVar2);
      return;
    }
    if (lVar1 == DAT_14cbe2518) {
      FUN_148ebdf9a(lVar2);
      return;
    }
    if (lVar1 == DAT_14cbe0638) {
      FUN_148ec9014(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14621dbf0 FUN_14621dbf0 body=74 status=ok
// SIG undefined FUN_14621dbf0(void)

void FUN_14621dbf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_140391a3c(param_2);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d17e0;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14621dc3a FUN_14621dc3a body=83 status=ok
// SIG undefined FUN_14621dc3a(void)

void FUN_14621dc3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x2b4) == '\x01')) {
    lVar1 = FUN_140391a3c(param_2);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d17c0;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14621dc8e FUN_14621dc8e body=934 status=ok
// SIG undefined FUN_14621dc8e(void)

void FUN_14621dc8e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == (longlong *)0x0) goto LAB_14621df87;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar5 == 0) goto LAB_14621df87;
  lVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  if ((lVar5 == 0) || (*(char *)(param_1 + 0x4db9) != '\0')) goto LAB_14621df87;
  plVar2 = (longlong *)(param_1 + -0x3b48);
  *(undefined1 *)(param_1 + 0x4db9) = 1;
  local_b0 = *(undefined8 *)(lVar5 + 0x40);
  local_a8 = *(undefined4 *)(lVar5 + 0x48);
  uStack_a4 = *(undefined4 *)(lVar5 + 0x4c);
  uStack_a0 = *(undefined4 *)(lVar5 + 0x50);
  uStack_9c = *(undefined4 *)(lVar5 + 0x54);
  local_98 = (void *)0x0;
  local_90 = *(int *)(lVar5 + 0x60);
  lVar8 = (longlong)local_90;
  _Src = *(void **)(lVar5 + 0x58);
  if (lVar8 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar8 * 2);
  }
  uVar4 = FUN_141473846(plVar2,&local_b0,2);
  *(char *)(param_1 + 0x4e08) = (char)uVar4;
  local_b4 = 0;
  FUN_140dc01da(param_1 + -0x2640,&local_c8,uVar4);
  if (local_c8 != 0) {
    local_d8 = local_c8;
    local_d0 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14621e035(&local_d8,&local_b4);
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar3 = local_88;
    local_80 = 3;
    *local_88 = &PTR_LAB_14b3e9c20;
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
    local_88[2] = lVar8;
    *local_88 = &PTR_FUN_14b963910;
    local_88[3] = 0;
    FUN_14485c47a(local_88 + 3,plVar2);
    puVar3[4] = plVar2;
    FUN_140ebcfd8(local_c8 + 0x18,local_e0,&local_88);
    FUN_1449db362(&local_88);
  }
  lVar5 = (**(code **)(*param_2 + 0x20))(param_2);
  if (plVar2 == (longlong *)0x0) {
LAB_14621dfb2:
    lVar7 = 0;
  }
  else {
    uVar6 = FUN_140338614();
    lVar8 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar6);
    if (lVar8 == 0) goto LAB_14621dfb2;
    uVar6 = FUN_140338614();
    lVar7 = FUN_144718840(lVar8,uVar6);
    if (lVar8 == lVar7) goto LAB_14621dfb2;
  }
  *(longlong *)(lVar5 + 0x20) = lVar7;
  lVar5 = (**(code **)(*param_2 + 0x20))(param_2);
  if ((plVar2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    *(longlong **)(lVar5 + 0x18) = plVar2;
    if (plVar2 == (longlong *)0x0) {
      *(undefined8 *)(lVar5 + 0x20) = 0;
    }
  }
  else {
    FUN_1456cec3c(plVar2);
    *(longlong **)(lVar5 + 0x18) = plVar2;
  }
  (**(code **)(*param_2 + 0x40))(param_2,param_1,local_b4);
  local_68 = 0;
  local_58 = &PTR_LAB_14b963980;
  local_78 = FUN_1440dd0ea;
  local_50 = plVar2;
  (**(code **)(*param_2 + 0x68))(param_2,plVar2);
  FUN_140cf9190(param_1 + 0x4d88,1);
  local_88 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
  FUN_1447cd2ec(param_1 + 0x4d10);
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1400da9ba(param_1 + 0x4d20,uVar6);
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1458ae387(plVar2,uVar6);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
LAB_14621df87:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621e035 FUN_14621e035 body=682 status=ok
// SIG undefined FUN_14621e035(void)

void FUN_14621e035(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [72];
  longlong local_1a0;
  undefined **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined6 uStack_ac;
  undefined2 uStack_a6;
  undefined6 uStack_a4;
  undefined4 local_9c;
  undefined1 local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*plVar3 + 8))(plVar3,&local_68,&DAT_14cb8d440);
    FUN_14621e2e0(&local_78,&local_68);
    local_128 = 0;
    local_120 = 0xffffffff00000000;
    local_118 = 0;
    local_114 = 0;
    uStack_10c = 0;
    local_104 = 0;
    local_130 = &PTR_FUN_14a5c6dd8;
    local_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0x3727c5ac;
    uStack_f4 = 0;
    local_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = &PTR_FUN_14a5c6de8;
    local_c8 = 0;
    local_c0 = 0xffffffff00000000;
    local_b8 = 0;
    uStack_a4 = 0;
    local_b4 = 0;
    uStack_ac = 0;
    uStack_a6 = 0;
    local_9c = 0x3f800000;
    local_98 = 0;
    local_94 = 0;
    local_90 = 0x101;
    local_8e = 0;
    local_7c = 0;
    local_8c = 0;
    uStack_84 = 0;
    if ((longlong)local_70 != 0) {
      lVar5 = (longlong)local_70 * 0xb8;
      lVar4 = local_78;
      do {
        FUN_140ed40b0(local_1e8,lVar4);
        if (*(char *)(local_1a0 + 0x38) == '\x02') {
          FUN_141660abc(&local_130,local_1e8);
        }
        lVar4 = lVar4 + 0xb8;
        lVar5 = lVar5 + -0xb8;
      } while (lVar5 != 0);
    }
    fVar7 = (float)FUN_14136ab98(&local_130);
    lVar4 = local_68;
    *param_2 = fVar7;
    if (fVar7 < 1e-08) {
      lVar5 = (longlong)(int)uStack_60;
      if (lVar5 == 0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 0.0;
        lVar6 = 0;
        do {
          if (*(longlong **)(lVar4 + lVar6) != (longlong *)0x0) {
            fVar8 = (float)(**(code **)(**(longlong **)(lVar4 + lVar6) + 0x2b0))();
            if (fVar7 <= fVar8) {
              fVar7 = fVar8;
            }
          }
          lVar6 = lVar6 + 8;
        } while (lVar5 * 8 != lVar6);
        fVar7 = fVar7 * 0.5;
      }
      *param_2 = fVar7;
    }
    FUN_14499183d(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)param_1[1];
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
  if ((local_50 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621e2e0 FUN_14621e2e0 body=157 status=ok
// SIG undefined FUN_14621e2e0(void)

undefined8 * FUN_14621e2e0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_14621e37e(&local_40,*(undefined8 *)(lVar1 + lVar3));
      FUN_140ed4016(param_1,&local_40);
      FUN_14499183d(local_40,local_38);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621e37e FUN_14621e37e body=746 status=ok
// SIG undefined FUN_14621e37e(void)

longlong * FUN_14621e37e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined6 local_64;
  undefined2 uStack_5e;
  undefined6 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar6 = FUN_14063d1f6();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      lVar6 = FUN_1405b04b6();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         ((*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30 && ((longlong)(int)param_2[0x23] != 0)))) {
        plVar11 = (longlong *)param_2[0x22];
        plVar2 = plVar11 + (longlong)(int)param_2[0x23] * 5;
        do {
          lVar6 = *plVar11;
          if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x90) != 0)) {
            lVar9 = *(longlong *)(lVar6 + 0x88);
            lVar6 = (longlong)*(int *)(lVar6 + 0x90) * 0xb8;
            do {
              lVar10 = *(longlong *)(lVar9 + 0x48);
              if (lVar10 != 0) {
                lVar8 = FUN_145a2561a();
                lVar10 = *(longlong *)(lVar10 + 0x10);
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  iVar3 = (int)param_1[1];
                  *(uint *)(param_1 + 1) = iVar3 + 1U;
                  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                    FUN_140ed4548(param_1,iVar3);
                  }
                  FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar9);
                }
              }
              lVar9 = lVar9 + 0xb8;
              lVar6 = lVar6 + -0xb8;
            } while (lVar6 != 0);
          }
          plVar11 = plVar11 + 5;
        } while (plVar11 != plVar2);
      }
    }
    else {
      local_f0 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0x3f800000;
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      local_b8 = 0x100;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (longlong *)0x0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_64 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f4 = 0x7f7fffff;
      local_f8 = 0;
      (**(code **)(*param_2 + 0x2c8))(param_2,&local_f8,&local_f4,&local_f0);
      uVar5 = uStack_e0;
      lVar6 = local_e8;
      lVar9 = (longlong)(int)uStack_e0;
      local_e8 = 0;
      uStack_e0 = 0;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          if (((*(longlong *)(lVar6 + 0x20 + lVar10) != 0) &&
              (lVar8 = *(longlong *)(lVar6 + 0x10 + lVar10), lVar8 != 0)) &&
             (lVar4 = *(longlong *)(lVar8 + 0x48), lVar4 != 0)) {
            lVar7 = FUN_145a2561a();
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              iVar3 = (int)param_1[1];
              *(uint *)(param_1 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
                FUN_140ed4548(param_1,iVar3);
              }
              FUN_140ed40b0((longlong)iVar3 * 0xb8 + *param_1,lVar8);
            }
          }
          lVar10 = lVar10 + 0x30;
        } while (lVar9 * 0x30 != lVar10);
      }
      FUN_1448262fc(lVar6,uVar5 & 0xffffffff);
      if (lVar6 != 0) {
        FUN_1400020a8(lVar6);
      }
      FUN_1448262fc(local_e8,uStack_e0 & 0xffffffff);
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      plVar2 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_a0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14621e66a FUN_14621e66a body=460 status=ok
// SIG undefined FUN_14621e66a(void)

void FUN_14621e66a(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [32];
  undefined1 **local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 *local_88;
  undefined8 local_80;
  longlong local_78 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = param_1 + 0xf0;
  cVar2 = FUN_144729dda(lVar1);
  if ((cVar2 != '\0') && (lVar3 = FUN_14479d2ce(lVar1), *(char *)(lVar3 + 0x178) != '\x03')) {
    switch(param_2) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
    case 2:
      uVar4 = FUN_14479d2ce(lVar1);
      local_f8 = (undefined1 **)0x0;
      FUN_140b32deb(local_48,uVar4,param_1 + 0x80,0);
      break;
    case 3:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
    case 4:
      uVar4 = FUN_14479d2ce(lVar1);
      local_f8 = (undefined1 **)0x0;
      FUN_140b32deb(&local_60,uVar4,param_1 + 0xb0,0);
      local_60 = 0;
      local_58 = 0xffffffffffffffff;
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (lVar3 != 0) {
        local_78[0] = 0;
        local_78[1] = 0;
        local_88 = &DAT_4030000000000000;
        local_80 = 0x4022000000000000;
        uVar4 = FUN_14479d2ce(lVar1);
        local_98 = 1;
        local_a0 = 0;
        local_a8 = 0;
        local_b0 = 1;
        local_b8 = 0;
        local_c0 = 0;
        local_c8 = 0;
        local_d8 = 1;
        local_e0 = 1;
        local_d0 = 0;
        local_e8 = 4;
        local_f0 = 0x42c80000;
        local_f8 = &local_88;
        FUN_141530594(uVar4,lVar3,1,local_78);
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621e864 FUN_14621e864 body=436 status=ok
// SIG undefined FUN_14621e864(void)

void FUN_14621e864(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = param_1 + 0xf0;
  cVar1 = FUN_144729dda(lVar5);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar5);
    if (*(char *)(lVar2 + 0x178) == '\x03') {
      lVar2 = FUN_14479d2ce(lVar5);
      FUN_1447f69b6(lVar2 + 0x4fe8);
    }
    plVar3 = (longlong *)FUN_14479d2ce(lVar5);
    cVar1 = (**(code **)(*plVar3 + 0x700))(plVar3);
    if (cVar1 == '\0') {
      lVar5 = FUN_14479d2ce(lVar5);
      if (lVar5 != 0) {
        lVar5 = FUN_1456e2bea(lVar5);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_f8);
        }
      }
    }
    else {
      uVar4 = FUN_14479d2ce(lVar5);
      local_d8 = (undefined1 **)0x0;
      FUN_140b32deb(local_58 + 2,uVar4,param_1 + 0x20,0);
      local_58[2] = 0;
      local_58[3] = 0xffffffffffffffff;
      lVar2 = *(longlong *)(param_1 + 0x18);
      if (lVar2 != 0) {
        local_58[0] = 0;
        local_58[1] = 0;
        local_68 = &DAT_4030000000000000;
        local_60 = 0x4022000000000000;
        uVar4 = FUN_14479d2ce(lVar5);
        local_78 = 1;
        local_80 = 0;
        local_88 = 0;
        local_90 = 1;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        local_b8 = 1;
        local_c0 = 1;
        local_b0 = 0;
        local_c8 = 4;
        local_d0 = 0x42c80000;
        local_d8 = &local_68;
        FUN_141530594(uVar4,lVar2,1,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621ea32 FUN_14621ea32 body=48 status=ok
// SIG undefined FUN_14621ea32(void)

void FUN_14621ea32(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_14621ea62(param_1);
    return;
  }
  FUN_14413f964(param_1);
  FUN_146022004(param_1,0);
  return;
}



// FUNCTION 14621ea62 FUN_14621ea62 body=199 status=ok
// SIG undefined FUN_14621ea62(void)

void FUN_14621ea62(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar2);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
        lVar2 = FUN_144a5dd5e();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30 &&
            (lVar2 = FUN_1402a1246(lVar1), lVar2 != 0)))) {
          FUN_145cb0266(lVar2,1);
          local_19 = 0;
          local_1c = 0x101;
          FUN_14572e6ac(lVar1);
        }
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar2);
  }
  *(undefined1 *)(param_1 + 0x534) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621eb2a FUN_14621eb2a body=39 status=ok
// SIG undefined FUN_14621eb2a(void)

void FUN_14621eb2a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014621eb4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14621eb5a FUN_14621eb5a body=90 status=ok
// SIG undefined FUN_14621eb5a(void)

void FUN_14621eb5a(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"bigmapentry",1);
  FUN_14621ebb6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621ebb6 FUN_14621ebb6 body=194 status=ok
// SIG undefined FUN_14621ebb6(void)

void FUN_14621ebb6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2;
  cVar1 = FUN_141660e76();
  if (cVar1 == '\0') {
    FUN_1446ddc76(local_20,"status_menu",1);
    if ((longlong)*(int *)(param_1 + 0x31d8) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x31d0) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x31d0) + lVar2) != 0)) {
          FUN_145b253d0(param_1 + 0x31d0,local_20,0xbf800000);
          break;
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x31d8) * 0x10 != lVar2);
    }
  }
  else {
    FUN_141660c72(param_1 + 0x3c28,&local_18,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621ec7a FUN_14621ec7a body=324 status=ok
// SIG undefined FUN_14621ec7a(void)

void FUN_14621ec7a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140893b6e();
  uVar6 = (**(code **)(*param_2 + 0x180))(param_2);
  FUN_141246736(&local_38,uVar6);
  if (local_30 != (longlong *)0x0) {
    iVar5 = (int)local_30[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_30[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_1416612ec(local_38 + 0xc0,param_1);
        *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(local_38 + 0x5cc);
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
  uVar6 = *(undefined8 *)(param_2[0xb] + 0x1b8);
  lVar3 = *(longlong *)(param_2[0xb] + 0x1c0);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar6;
  *(longlong *)(param_1 + 0xf8) = lVar3;
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14621edca FUN_14621edca body=988 status=ok
// SIG undefined FUN_14621edca(void)

undefined8 * FUN_14621edca(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140312256();
  *param_1 = &PTR_FUN_14abb7e80;
  param_1[0x72] = &PTR_FUN_14abb84d0;
  param_1[0x73] = &PTR_FUN_14abb8530;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(byte *)(param_1 + 0x77) = *(byte *)(param_1 + 0x77) & 0xe0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0x3f000000bf800000;
  param_1[0x81] = 0;
  param_1[0x87] = 0;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 2;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0x4310000042080000;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffff0 | 3;
  uVar4 = DAT_14c8463f8;
  param_1[0x8a] = DAT_14c8463f0;
  param_1[0x8b] = uVar4;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x7fefffff;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0x7fefffff;
  param_1[0x94] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x95) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x7fefffff;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x7fefffff;
  param_1[0x97] = 0x7fefffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x7e] = 0x4049000000000000;
  param_1[0x7f] = 0x4049000000000000;
  param_1[0x80] = 0x406f400000000000;
  *(uint *)((longlong)param_1 + 0x434) = *(uint *)((longlong)param_1 + 0x434) & 0xffffffe3 | 0xc;
  FUN_1446f470e(&local_28,L"CollisionCylinder",1);
  uVar4 = FUN_1400b5618();
  local_50 = 0;
  local_58 = 1;
  lVar5 = FUN_14048696c(param_1,local_28,uVar4,uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x74] = lVar5;
  fVar1 = *(float *)((longlong)param_1 + 0x3bc);
  fVar2 = *(float *)(param_1 + 0x78);
  fVar7 = 0.0;
  if (0.0 <= fVar1) {
    fVar7 = fVar1;
  }
  *(float *)(lVar5 + 0x644) = fVar7;
  fVar7 = 0.0;
  if (0.0 <= fVar2 * 0.5) {
    fVar7 = fVar2 * 0.5;
  }
  if (fVar7 <= fVar1) {
    fVar7 = fVar1;
  }
  *(float *)(lVar5 + 0x640) = fVar7;
  (**(code **)(*(longlong *)param_1[0x74] + 0x728))((longlong *)param_1[0x74],DAT_14cad0f30,1);
  *(undefined1 *)(param_1[0x74] + 0x2eb) = 0;
  FUN_14126002c(param_1[0x74],1);
  FUN_140381810(param_1[0x74],0);
  lVar5 = param_1[0x74];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_1[0x74];
    }
  }
  param_1[0x39] = lVar5;
  FUN_1446f470e(&local_30,L"InvokerComponent",1);
  uVar4 = FUN_145993606();
  local_50 = 0;
  local_58 = 1;
  lVar5 = FUN_14048696c(param_1,local_30,uVar4,uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  param_1[0x75] = lVar5;
  *(byte *)(lVar5 + 0x9e) = *(byte *)(lVar5 + 0x9e) & 0xf7 | (*(byte *)(param_1 + 0x76) & 1) << 3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14abb6f40;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_40[2] = lVar6;
  *local_40 = &PTR_FUN_14abc00d0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_1);
  puVar3[4] = &LAB_147e89c8a;
  *(undefined4 *)(puVar3 + 5) = 0;
  FUN_144a450dc(param_1 + 0x9b,&local_40);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621f1d6 FUN_14621f1d6 body=309 status=ok
// SIG undefined FUN_14621f1d6(void)

void FUN_14621f1d6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_14882c108(lVar1,0);
  }
  lVar2 = param_1 + 0x168;
  FUN_140d714a4(lVar2);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar3 = FUN_144729dda(param_1 + 0x18);
    if (cVar3 != '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
      FUN_140d714f8(uVar4,param_1 + 0x48,lVar2);
      local_68 = 0;
      local_58 = &PTR_LAB_14b3fb2c0;
      local_78 = FUN_143d2227e;
      local_50 = param_1;
      FUN_140d71668(lVar2);
      if ((0x14 < *(int *)(param_1 + 0x40)) &&
         (*(undefined4 *)(param_1 + 0x40) = 0, *(int *)(param_1 + 0x44) < 0)) {
        FUN_14882c108(lVar1,0);
      }
      FUN_1458ef448(param_1 + 0x48,uVar4);
      FUN_14621f30c(*(int *)(param_1 + 0x40) == 0,lVar1);
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (*(int *)(param_1 + 0x44) < 0) {
        FUN_14882c108(lVar1,0);
      }
      FUN_140d714a4(lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621f30c FUN_14621f30c body=191 status=ok
// SIG undefined FUN_14621f30c(void)

void FUN_14621f30c(undefined4 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb7bae0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb7baec = DAT_14cb7baec + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb7bad8 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb7bad8 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb7baec = DAT_14cb7baec + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_14621f3b2;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb7baec = DAT_14cb7baec + -1;
LAB_14621f3b2:
  FUN_14474d06a(&DAT_14cb7bad8,0);
  return;
}



// FUNCTION 14621f3cc FUN_14621f3cc body=536 status=ok
// SIG undefined FUN_14621f3cc(void)

undefined8 FUN_14621f3cc(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (plVar3 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 8))
                      (plVar3,(longlong)param_2 * 0x28 + *(longlong *)(param_1 + 0x68));
    uVar8 = 3;
    if (cVar6 == '\0') goto LAB_14621f450;
  }
  if (param_3 == '\x01') {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x28);
    FUN_14621f65a(param_1 + 0x18);
    FUN_14621f5e6(param_1 + 0x68,param_2);
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    if (0 < (int)uVar7) {
      uVar11 = 0;
      uVar10 = uVar7;
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar4 + (ulonglong)uVar1 * 0x1c) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar5 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar5);
    }
    if (((int)uVar11 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar11 * 0x1c) <= param_2)) {
      if (~uVar11 + uVar7 != 0) {
        pvVar9 = (void *)(lVar4 + (ulonglong)uVar11 * 0x1c);
        memmove(pvVar9,(void *)((longlong)pvVar9 + 0x1c),(longlong)(int)(~uVar11 + uVar7) * 0x1c);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_14768b278(param_1 + 0xa0);
    }
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar11 = uVar7;
    if (0 < (int)uVar7) {
      do {
        uVar1 = (uVar11 >> 1) + uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar1 * 0x1c) < param_2) {
          uVar10 = uVar1 + (uVar11 & 1);
        }
        bVar5 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar5);
    }
    if (((int)uVar10 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar10 * 0x1c) <= param_2)) {
      if (~uVar10 + uVar7 != 0) {
        pvVar9 = (void *)(lVar4 + (ulonglong)uVar10 * 0x1c);
        memmove(pvVar9,(void *)((longlong)pvVar9 + 0x1c),(longlong)(int)(~uVar10 + uVar7) * 0x1c);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_14768b278(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x20 + (longlong)param_2 * 0x28);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar8 = 1;
  }
LAB_14621f450:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14621f5e6 FUN_14621f5e6 body=116 status=ok
// SIG undefined FUN_14621f5e6(void)

void FUN_14621f5e6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 14621f65a FUN_14621f65a body=122 status=ok
// SIG undefined FUN_14621f65a(void)

undefined8 FUN_14621f65a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == lVar2) {
          FUN_14621f6d4();
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14621f6d4 FUN_14621f6d4 body=91 status=ok
// SIG undefined FUN_14621f6d4(void)

void FUN_14621f6d4(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14621f730(param_1,param_2,1);
  return;
}



// FUNCTION 14621f730 FUN_14621f730 body=138 status=ok
// SIG undefined FUN_14621f730(void)

void FUN_14621f730(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14621f7ba FUN_14621f7ba body=91 status=ok
// SIG undefined FUN_14621f7ba(void)

void FUN_14621f7ba(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 8))(local_28);
  FUN_14621f816(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621f816 FUN_14621f816 body=85 status=ok
// SIG undefined FUN_14621f816(void)

void FUN_14621f816(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_14621f86c(param_2,plVar1);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014621f85e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}



// FUNCTION 14621f86c FUN_14621f86c body=163 status=ok
// SIG undefined FUN_14621f86c(void)

void FUN_14621f86c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined **local_38 [3];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x10))(param_2,&local_48,"DisplayName",param_1);
  if (local_48 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_38,"displayName",true);
    local_38[0] = &PTR_FUN_14b504430;
    local_20 = 0;
    (**(code **)(*local_48 + 0x18))(local_48,local_40,(Property *)local_38);
    cohtml::Property::~Property((Property *)local_38);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621f918 FUN_14621f918 body=128 status=ok
// SIG undefined FUN_14621f918(void)

void FUN_14621f918(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_14621f99a(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_148e98b4a(param_1);
  return;
}



// FUNCTION 14621f99a FUN_14621f99a body=132 status=ok
// SIG undefined FUN_14621f99a(void)

void FUN_14621f99a(longlong param_1,int param_2)

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



// FUNCTION 14621fa1e FUN_14621fa1e body=390 status=ok
// SIG undefined FUN_14621fa1e(void)

void FUN_14621fa1e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f3e50;
  if (param_1[0xbe] != 0) {
    FUN_1411ebbe4();
    param_1[0xbe] = 0;
  }
  plVar2 = (longlong *)param_1[0xc2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14127b1cd(param_1[0xbf],*(undefined4 *)(param_1 + 0xc0));
  if (param_1[0xbf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xbd) = 0;
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 0xb4);
  FUN_1449db362(param_1 + 0xb2);
  FUN_1449db362(param_1 + 0xb0);
  FUN_1449db362(param_1 + 0xae);
  FUN_1449db362(param_1 + 0xac);
  FUN_1449db362(param_1 + 0xaa);
  FUN_1449db362(param_1 + 0xa8);
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0xa2);
  FUN_1449db362(param_1 + 0xa0);
  FUN_1449db362(param_1 + 0x9e);
  FUN_1449db362(param_1 + 0x9c);
  FUN_1449db362(param_1 + 0x9a);
  FUN_1449db362(param_1 + 0x98);
  FUN_1449db362(param_1 + 0x96);
  FUN_1449db362(param_1 + 0x94);
  FUN_1449db362(param_1 + 0x92);
  FUN_14166299a(param_1);
  return;
}



// FUNCTION 14621fba4 FUN_14621fba4 body=52 status=ok
// SIG undefined FUN_14621fba4(void)

void FUN_14621fba4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x328,0x10);
  FUN_14621fbd8(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 14621fbd8 FUN_14621fbd8 body=960 status=ok
// SIG undefined FUN_14621fbd8(void)

undefined8 * FUN_14621fbd8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  memset(param_1,0,0xb0);
  FUN_1408f3f9e(param_1);
  *param_1 = &PTR_FUN_14b905dd0;
  FUN_140056680(param_1 + 0x16,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x18,&DAT_149dfb77a);
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_140056680(param_1 + 0x1e,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x20,&DAT_149dfb77a);
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x28] = local_50;
  *(undefined4 *)(param_1 + 0x29) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x14c) = local_44;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x2b] = local_50;
  *(undefined4 *)(param_1 + 0x2c) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x164) = local_44;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x2e] = local_50;
  *(undefined4 *)(param_1 + 0x2f) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x17c) = local_44;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_144a5dc74(param_1 + 0x34);
  FUN_144a5dc74(param_1 + 0x36);
  FUN_144a5dc74(param_1 + 0x38);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  FUN_144a5dc74(param_1 + 0x3d);
  FUN_144a5dc74(param_1 + 0x3f);
  FUN_144a5dc74(param_1 + 0x41);
  param_1[0x43] = DAT_14c948618;
  *(undefined4 *)(param_1 + 0x44) = DAT_14c948620;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x46] = local_50;
  *(undefined4 *)(param_1 + 0x47) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x23c) = local_44;
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x49] = local_50;
  *(undefined4 *)(param_1 + 0x4a) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x254) = local_44;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x4c] = local_50;
  *(undefined4 *)(param_1 + 0x4d) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x26c) = local_44;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x4f] = local_50;
  *(undefined4 *)(param_1 + 0x50) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x284) = local_44;
  *(undefined4 *)(param_1 + 0x51) = 0;
  FUN_140056680(&local_50,&DAT_149dfb77a);
  param_1[0x52] = local_50;
  *(undefined4 *)(param_1 + 0x53) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x29c) = local_44;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x2b2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2b3) = 0;
  *(undefined1 *)((longlong)param_1 + 699) = 0;
  *(undefined2 *)((longlong)param_1 + 700) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x2be) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c7) = 0x101;
  FUN_140056680(param_1 + 0x5a,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x5d] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x5e) = (int)plVar2[1];
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fd) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14621ff9a FUN_14621ff9a body=204 status=ok
// SIG undefined FUN_14621ff9a(void)

void FUN_14621ff9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146220078(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab5e28);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x40) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x48) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_14621fffd;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_14621fffd:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146220078 FUN_146220078 body=494 status=ok
// SIG undefined FUN_146220078(void)

longlong * FUN_146220078(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146220318();
  if (*param_2 != 0) goto LAB_1462201bd;
  plVar3 = (longlong *)FUN_14001cc68(0xd8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d8240;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xc0);
  *(undefined8 *)((longlong)plVar3 + 0x54) = 0xffffffff00000080;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  *(undefined8 *)((longlong)plVar3 + 0xa4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)plVar3 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar3 + 0xcc) = 0xffffffff00000000;
  plVar3[2] = (longlong)&PTR_FUN_14a4d8260;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_146220276(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_1462201f7:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000146220232:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x000146220232;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_1462201f7;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_1462203d2(param_1,param_3,&local_50);
LAB_1462201bd:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146220268 FUN_146220268 body=14 status=ok
// SIG undefined FUN_146220268(void)

void FUN_146220268(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 146220276 FUN_146220276 body=162 status=ok
// SIG undefined FUN_146220276(void)

void FUN_146220276(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1462202b5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1462202b5;
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
LAB_1462202b5:
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
                    /* WARNING: Could not recover jumptable at 0x000146220314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146220318 FUN_146220318 body=186 status=ok
// SIG undefined FUN_146220318(void)

undefined8 * FUN_146220318(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    uVar11 = 0;
    uVar9 = (ulonglong)uVar3;
    do {
      uVar10 = (int)(uVar9 >> 1) + uVar11;
      uVar8 = (uint)uVar9;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar8 & 1);
      }
      uVar9 = uVar9 >> 1;
    } while (1 < uVar8);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
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
      goto LAB_14622033a;
    }
  }
  uVar6 = 0;
LAB_14622033a:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1462203d2 FUN_1462203d2 body=188 status=ok
// SIG undefined FUN_1462203d2(void)

void FUN_1462203d2(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146220490 FUN_146220490 body=352 status=ok
// SIG undefined FUN_146220490(void)

void FUN_146220490(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_24 = 0;
  local_1c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_24;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  FUN_1462205f2(puVar2,&local_68,local_48);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462205f2 FUN_1462205f2 body=154 status=ok
// SIG undefined FUN_1462205f2(void)

void FUN_1462205f2(undefined8 param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 0x18;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = *(undefined8 *)(param_2 + 4);
  local_18 = 4;
  FUN_141107e97(local_38,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622068e FUN_14622068e body=178 status=ok
// SIG undefined FUN_14622068e(void)

void FUN_14622068e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_146220742(DAT_14c872ce0,param_2,&local_38,param_3);
  if (0 < (int)uStack_30) {
    lVar3 = 8;
    lVar2 = 0;
    do {
      puVar1 = &DAT_149dfb77a;
      if (*(int *)(local_38 + lVar3) != 0) {
        puVar1 = *(undefined2 **)(local_38 + -8 + lVar3);
      }
      FUN_141556918(param_1,puVar1);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < (int)uStack_30);
  }
  FUN_1447a1747(local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146220742 FUN_146220742 body=839 status=ok
// SIG undefined FUN_146220742(void)

/* WARNING: Removing unreachable block (ram,0x000146220a80) */

undefined8
FUN_146220742(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [40];
  undefined2 *local_a0;
  int local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_4 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_4;
  }
  FUN_14052bdc2(&DAT_14c872ff0,puVar9);
  iVar3 = *(int *)((longlong)param_3 + 0xc);
  FUN_1447a1747(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar3 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_1408be2c4(param_3,0);
  }
  plVar4 = (longlong *)FUN_14052bcbc(param_1,param_4);
  if (plVar4 != (longlong *)0x0) {
    FUN_140056680(&local_90,param_2);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    plVar8 = local_90;
    if ((int)local_88 == 0) {
      plVar8 = (longlong *)&DAT_149dfb77a;
    }
    uVar11 = 0;
    uVar7 = (ulonglong)((int)local_88 - 1);
    if ((int)local_88 == 0) {
      uVar7 = uVar11;
    }
    uVar2 = FUN_144a49b4a(uVar7,plVar8);
    iVar3 = FUN_14052bbf0(plVar4,uVar2,&local_90);
    if (iVar3 != -1) {
      uVar11 = (longlong)iVar3 * 0xc0 + *plVar4;
    }
    plVar4 = (longlong *)(uVar11 + 0x10);
    if (uVar11 == 0) {
      plVar4 = (longlong *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    if (local_90 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (plVar4 != (longlong *)0x0) {
      iVar3 = (int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34);
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
        FUN_1408be2c4(param_3);
      }
      local_60 = plVar4 + 2;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      if ((int)plVar4[5] != 0) {
        FUN_1449c0562(&local_68);
      }
      local_78 = local_58;
      uVar6 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar4;
      if (local_78._4_4_ < (int)local_60[3]) {
        iVar3 = local_78._4_4_;
        local_78 = uVar6;
        do {
          lVar1 = *local_90;
          lVar5 = (longlong)iVar3 * 0x40;
          uVar7 = (ulonglong)(*(int *)(lVar1 + 0x28 + lVar5) - 2U < 0x7fffffff) * 0x10;
          puVar9 = &DAT_149dfb77a;
          if (*(int *)(uVar7 + 0x18 + lVar1 + lVar5) != 0) {
            puVar9 = *(undefined2 **)(lVar5 + lVar1 + 8 + (uVar7 | 8));
          }
          FUN_1400021e4(lVar1 + lVar5,&local_a0);
          puVar10 = &DAT_149dfb77a;
          if (local_98 != 0) {
            puVar10 = local_a0;
          }
          FUN_140002266(&local_68,L"%s=%s",puVar10,puVar9);
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1447a1bd6(param_3,iVar3);
          }
          lVar1 = *param_3;
          lVar5 = (longlong)iVar3 * 0x10;
          *(undefined8 *)(lVar1 + lVar5) = 0;
          *(undefined8 *)(lVar1 + lVar5) = local_68;
          *(undefined4 *)(lVar1 + 8 + lVar5) = (undefined4)local_60;
          *(undefined4 *)(lVar1 + 0xc + lVar5) = local_60._4_4_;
          local_60 = (longlong *)0x0;
          local_68 = 0;
          if (local_a0 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar3 = local_78._4_4_;
          uVar6 = local_78;
        } while (local_78._4_4_ < (int)local_80[3]);
      }
      local_78 = uVar6;
      uVar6 = FUN_140d6a3de();
      if (*(int *)(param_4 + 1) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)*param_4;
      }
      FUN_1408be1b6(uVar6,puVar9,param_2);
      uVar6 = 1;
      goto LAB_146220a1f;
    }
  }
  uVar6 = 0;
LAB_146220a1f:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146220a8a FUN_146220a8a body=315 status=ok
// SIG undefined FUN_146220a8a(void)

undefined8 * FUN_146220a8a(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14afaa830;
  puVar1 = (undefined8 *)*param_2;
  param_1[5] = puVar1[4];
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar2 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar3 = *(undefined4 *)(puVar1 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  puVar1 = (undefined8 *)param_2[1];
  param_1[6] = *puVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(puVar1 + 1);
  *(longlong *)((longlong)param_1 + 0x3c) = param_2[2];
  *(int *)((longlong)param_1 + 0x44) = (int)param_2[3];
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xd] = DAT_14c8464f0;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xb] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xc] = uVar5;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  param_1[0x12] = DAT_14c8464f0;
  local_40 = param_2[6];
  local_38 = param_2[7];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_146220bc6(param_1 + 0x13,(longlong)param_2 + 0x1c,(longlong)param_2 + 0x24,&local_40);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x19] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_141662dfe(param_1 + 0x13,param_1 + 1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146220bc6 FUN_146220bc6 body=237 status=ok
// SIG undefined FUN_146220bc6(void)

undefined8 *
FUN_146220bc6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e05c70;
  lpCriticalSection = (LPCRITICAL_SECTION)(plVar4 + 2);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  *param_1 = lpCriticalSection;
  param_1[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  param_1[2] = *param_2;
  param_1[3] = *param_3;
  param_1[4] = *param_4;
  lVar3 = param_4[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_4[1];
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



// FUNCTION 146220cb4 FUN_146220cb4 body=802 status=ok
// SIG undefined FUN_146220cb4(void)

longlong * FUN_146220cb4(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  ulonglong uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar4 = (**(code **)(*param_1 + 0x10))();
  if (cVar4 == '\0') {
    param_1 = (longlong *)0x0;
    goto LAB_146220f0b;
  }
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  cVar4 = FUN_1416635d4(&local_98,param_2);
  if (cVar4 == '\0') {
    param_1 = (longlong *)0x0;
  }
  else {
    lVar11 = *local_98;
    plVar9 = (longlong *)local_98[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_e0 = param_3;
    fVar14 = (float)FUN_145788320(0,0);
    plVar8 = local_98;
    lVar12 = (longlong)(int)uStack_90;
    if (lVar12 != 0) {
      lVar10 = 0;
      plVar13 = plVar9;
      do {
        lVar3 = *(longlong *)((longlong)plVar8 + lVar10);
        plVar9 = plVar13;
        if ((double)ABS((float)(*(double *)(lVar3 + 0x10) - (double)fVar14)) <
            ABS(*(double *)(lVar11 + 0x10) - (double)fVar14)) {
          plVar9 = *(longlong **)((longlong)plVar8 + lVar10 + 8);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          lVar11 = lVar3;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar13 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
        }
        lVar10 = lVar10 + 0x10;
        plVar13 = plVar9;
      } while (lVar12 * 0x10 != lVar10);
    }
    FUN_1446ddc76(&local_a0,"ImageWrapper",1);
    uVar7 = FUN_144a52528();
    plVar8 = (longlong *)FUN_14493e38c(uVar7,local_a0);
    (**(code **)(*plVar8 + 0x58))(plVar8,&local_b0,0,0);
    if ((local_b0 == (longlong *)0x0) ||
       (cVar4 = (**(code **)*local_b0)
                          (local_b0,*(undefined8 *)(lVar11 + 0x18),(longlong)*(int *)(lVar11 + 0x20)
                          ), cVar4 == '\0')) {
LAB_146220f64:
      param_1 = (longlong *)0x0;
    }
    else {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      cVar4 = (**(code **)(*local_b0 + 0x38))(local_b0,0,8);
      if (cVar4 != '\0') {
        uVar5 = (**(code **)(*local_b0 + 0x40))();
        uVar6 = (**(code **)(*local_b0 + 0x48))();
        local_d8 = *local_e0;
        uStack_d4 = local_e0[1];
        uStack_d0 = local_e0[2];
        uStack_cc = local_e0[3];
        local_e8 = &local_d8;
        param_1 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,local_c8,uVar5,uVar6);
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (cVar4 == '\0') goto LAB_146220f64;
    }
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_a8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_a8 + 0x10))(local_a8);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  FUN_146220fd7(local_98,uStack_90 & 0xffffffff);
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_146220f0b:
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146220fd7 FUN_146220fd7 body=73 status=ok
// SIG undefined FUN_146220fd7(void)

void FUN_146220fd7(longlong param_1,int param_2)

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



// FUNCTION 146221020 FUN_146221020 body=48 status=ok
// SIG undefined FUN_146221020(void)

void FUN_146221020(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146221050 FUN_146221050 body=2044 status=ok
// SIG undefined FUN_146221050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146221050(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_60,L"CameraOffset",1);
  local_58 = local_60;
  _DAT_14cb44160 = FUN_144830b78(local_50,&DAT_14cb420f0);
  _DAT_14cb44158 = local_58;
  FUN_1446f470e(&local_60,L"Color",1);
  local_58 = local_60;
  _DAT_14cb4416c = FUN_144830b78(local_50,&DAT_14cb42180);
  _DAT_14cb44164 = local_58;
  FUN_1446f470e(&local_60,L"DynamicMaterialParameter",1);
  local_58 = local_60;
  _DAT_14cb44178 = FUN_144830b78(local_50,&DAT_14cb42160);
  _DAT_14cb44170 = local_58;
  FUN_1446f470e(&local_60,L"DynamicMaterialParameter1",1);
  local_58 = local_60;
  _DAT_14cb44184 = FUN_144830b78(local_50,&DAT_14cb42160);
  _DAT_14cb4417c = local_58;
  FUN_1446f470e(&local_60,L"DynamicMaterialParameter2",1);
  local_58 = local_60;
  _DAT_14cb44190 = FUN_144830b78(local_50,&DAT_14cb42160);
  _DAT_14cb44188 = local_58;
  FUN_1446f470e(&local_60,L"DynamicMaterialParameter3",1);
  local_58 = local_60;
  _DAT_14cb4419c = FUN_144830b78(local_50,&DAT_14cb42160);
  _DAT_14cb44194 = local_58;
  FUN_1446f470e(&local_60,L"MeshIndex",1);
  local_58 = local_60;
  DAT_14cb441a8 = FUN_144830b78(local_50,&DAT_14cb420d0);
  DAT_14cb441a0 = local_58;
  FUN_1446f470e(&local_60,L"MeshOrientation",1);
  local_58 = local_60;
  DAT_14cb441b4 = FUN_144830b78(local_50,&DAT_14cb42190);
  DAT_14cb441ac = local_58;
  FUN_1446f470e(&local_60,L"Position",1);
  local_58 = local_60;
  DAT_14cb441c0 = FUN_144830b78(local_50,&DAT_14cb42130);
  DAT_14cb441b8 = local_58;
  FUN_1446f470e(&local_60,L"RibbonWidth",1);
  local_58 = local_60;
  _DAT_14cb441cc = FUN_144830b78(local_50,&DAT_14cb420f0);
  _DAT_14cb441c4 = local_58;
  FUN_1446f470e(&local_60,L"Scale",1);
  local_58 = local_60;
  DAT_14cb441d8 = FUN_144830b78(local_50,&DAT_14cb42140);
  DAT_14cb441d0 = local_58;
  FUN_1446f470e(&local_60,L"SpriteAlignment",1);
  local_58 = local_60;
  _DAT_14cb441e4 = FUN_144830b78(local_50,&DAT_14cb42140);
  _DAT_14cb441dc = local_58;
  FUN_1446f470e(&local_60,L"SpriteFacing",1);
  local_58 = local_60;
  _DAT_14cb441f0 = FUN_144830b78(local_50,&DAT_14cb42140);
  _DAT_14cb441e8 = local_58;
  FUN_1446f470e(&local_60,L"SpriteSize",1);
  local_58 = local_60;
  DAT_14cb441fc = FUN_144830b78(local_50,&DAT_14cb42110);
  DAT_14cb441f4 = local_58;
  FUN_1446f470e(&local_60,L"SpriteRotation",1);
  local_58 = local_60;
  _DAT_14cb44208 = FUN_144830b78(local_50,&DAT_14cb420f0);
  _DAT_14cb44200 = local_58;
  FUN_1446f470e(&local_60,L"SubImageIndex",1);
  local_58 = local_60;
  _DAT_14cb44214 = FUN_144830b78(local_50,&DAT_14cb420f0);
  _DAT_14cb4420c = local_58;
  FUN_1446f470e(&local_60,L"UniqueID",1);
  local_58 = local_60;
  _DAT_14cb44220 = FUN_144830b78(local_50,&DAT_14cb420d0);
  DAT_14cb44218 = local_58;
  FUN_1446f470e(&local_60,L"Velocity",1);
  local_58 = local_60;
  _DAT_14cb4422c = FUN_144830b78(local_50,&DAT_14cb42140);
  _DAT_14cb44224 = local_58;
  FUN_1446f470e(&local_60,L"Previous.CameraOffset",1);
  local_58 = local_60;
  _DAT_14cb44238 = FUN_144830b78(local_50,&DAT_14cb420f0);
  _DAT_14cb44230 = local_58;
  FUN_1446f470e(&local_60,L"Previous.MeshOrientation",1);
  local_58 = local_60;
  DAT_14cb44244 = FUN_144830b78(local_50,&DAT_14cb42190);
  DAT_14cb4423c = local_58;
  FUN_1446f470e(&local_60,L"Previous.Position",1);
  local_58 = local_60;
  DAT_14cb44250 = FUN_144830b78(local_50,&DAT_14cb42130);
  DAT_14cb44248 = local_58;
  FUN_1446f470e(&local_60,L"Previous.RibbonWidth",1);
  local_58 = local_60;
  _DAT_14cb4425c = FUN_144830b78(local_50,&DAT_14cb420f0);
  _DAT_14cb44254 = local_58;
  FUN_1446f470e(&local_60,L"Previous.Scale",1);
  local_58 = local_60;
  DAT_14cb44268 = FUN_144830b78(local_50,&DAT_14cb42140);
  DAT_14cb44260 = local_58;
  FUN_1446f470e(&local_60,L"Previous.SpriteAlignment",1);
  local_58 = local_60;
  _DAT_14cb44274 = FUN_144830b78(local_50,&DAT_14cb42140);
  _DAT_14cb4426c = local_58;
  FUN_1446f470e(&local_60,L"Previous.SpriteFacing",1);
  local_58 = local_60;
  _DAT_14cb44280 = FUN_144830b78(local_50,&DAT_14cb42140);
  _DAT_14cb44278 = local_58;
  FUN_1446f470e(&local_60,L"Previous.SpriteSize",1);
  local_58 = local_60;
  DAT_14cb4428c = FUN_144830b78(local_50,&DAT_14cb42110);
  DAT_14cb44284 = local_58;
  FUN_1446f470e(&local_60,L"Previous.SpriteRotation",1);
  local_58 = local_60;
  _DAT_14cb44298 = FUN_144830b78(local_50,&DAT_14cb420f0);
  _DAT_14cb44290 = local_58;
  FUN_1446f470e(&local_60,L"Previous.Velocity",1);
  local_58 = local_60;
  _DAT_14cb442a4 = FUN_144830b78(local_50,&DAT_14cb42140);
  _DAT_14cb4429c = local_58;
  if ((longlong)DAT_14cb44308 != 0) {
    lVar3 = (longlong)DAT_14cb44308 << 3;
    lVar2 = DAT_14cb44300;
    do {
      plVar1 = (longlong *)FUN_14479d2ce(lVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2a0))(plVar1);
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146221852 FUN_146221852 body=148 status=ok
// SIG undefined FUN_146221852(void)

bool FUN_146221852(longlong param_1)

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



// FUNCTION 1462218e8 FUN_1462218e8 body=103 status=ok
// SIG undefined FUN_1462218e8(void)

void FUN_1462218e8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x3c0);
  FUN_146221950(param_2);
  *param_2 = &PTR_FUN_14b61b5e0;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x371) = 0;
  *(undefined8 *)((longlong)param_2 + 0x379) = 0;
  *(undefined2 *)((longlong)param_2 + 0x381) = 0x101;
  *(undefined4 *)((longlong)param_2 + 900) = 0x3f800000;
  FUN_14044066a(param_2 + 0x71,0x11,7);
  return;
}



// FUNCTION 146221950 FUN_146221950 body=409 status=ok
// SIG undefined FUN_146221950(void)

undefined8 * FUN_146221950(undefined8 *param_1)

{
  FUN_1412396b6();
  *param_1 = &PTR_FUN_14b1b40a0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3f) = 4;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x40) = 3;
  *(char *)(param_1 + 0x41) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x45] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0xff000000;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined2 *)(param_1 + 0x4f) = 4;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x50) = 3;
  *(char *)(param_1 + 0x51) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x52) = 1;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x57) = 4;
  *(undefined4 *)(param_1 + 0x54) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x58) = 3;
  *(char *)(param_1 + 0x59) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x5a] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 4;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5f) = 3;
  *(char *)(param_1 + 0x60) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x61] = 0;
  *(undefined2 *)(param_1 + 0x65) = 4;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x66) = 3;
  *(char *)(param_1 + 0x67) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_1 + 0x68) = 0xff000000;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  return param_1;
}



// FUNCTION 146221aea FUN_146221aea body=232 status=ok
// SIG undefined FUN_146221aea(void)

longlong * FUN_146221aea(longlong *param_1)

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
  pcVar12 = FUN_1464705cc;
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



// FUNCTION 146221bd8 FUN_146221bd8 body=1415 status=ok
// SIG undefined FUN_146221bd8(void)

void FUN_146221bd8(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong local_108;
  longlong *plStack_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  longlong *local_e0;
  longlong *local_d8;
  uint local_cc;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_cc = param_2;
  if ((int)param_1[0x17] != *(int *)((longlong)param_1 + 0xe4)) {
    plVar6 = param_1 + 0x1d;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x1e];
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[0x1f] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar8 = (longlong)iVar5;
        if (*(uint *)(param_1[0x16] + lVar8 * 0xc) == param_2) {
          plVar6 = (longlong *)FUN_140a68038(CONCAT71((int7)((ulonglong)(lVar8 * 3) >> 8),1));
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x28))(plVar6,&local_e0);
            if (local_e0 != (longlong *)0x0) {
              local_f8 = (longlong *)0x0;
              uStack_f0 = 0;
              (**(code **)(*local_e0 + 0x1c8))(local_e0,local_cc,&DAT_14cb97068,&local_f8);
              local_98 = 0;
              local_90 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_8c = 0xffffffff00000080;
              local_84 = 0;
              local_78 = 0;
              local_70 = 0;
              uVar11 = (uint)uStack_f0;
              if ((longlong)(int)(uint)uStack_f0 != 0) {
                if ((int)(uint)uStack_f0 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456acd4b((longlong)(int)(uint)uStack_f0);
                }
                FUN_1413353b8(&local_b8,uStack_f0 & 0xffffffff);
                iVar5 = 1;
                if (3 < uVar11) {
                  uVar11 = (uVar11 | 1) + 0xe;
                  iVar5 = 0x1f;
                  if (uVar11 != 0) {
                    for (; uVar11 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                    }
                  }
                  iVar5 = 1 << ((byte)iVar5 & 0x1f);
                }
                if ((local_70 == 0) || (local_70 < iVar5)) {
                  local_70 = iVar5;
                  FUN_14133555e();
                }
                if ((longlong)(int)(uint)uStack_f0 != 0) {
                  lVar8 = (longlong)(int)(uint)uStack_f0 << 4;
                  plVar6 = local_f8;
                  do {
                    (**(code **)(*(longlong *)*plVar6 + 8))((longlong *)*plVar6,&local_108);
                    local_c8 = &local_108;
                    local_c0 = plVar6;
                    FUN_141334f98(&local_b8,&local_118,&local_c8);
                    plVar1 = plStack_100;
                    if (plStack_100 != (longlong *)0x0) {
                      LOCK();
                      plVar3 = plStack_100 + 1;
                      *(int *)plVar3 = (int)*plVar3 + -1;
                      UNLOCK();
                      if ((int)*plVar3 == 0) {
                        (**(code **)*plStack_100)(plStack_100);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar1 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar1 + 0x10))(plVar1);
                        }
                      }
                    }
                    plVar6 = plVar6 + 2;
                    lVar8 = lVar8 + -0x10;
                  } while (lVar8 != 0);
                }
              }
              uVar7 = FUN_1458f9e7a(param_1 + 0x7a,local_cc,&local_cc);
              local_108 = 0;
              plStack_100 = (longlong *)0x0;
              local_118 = 0;
              uStack_110 = 0;
              local_148 = &local_128;
              local_128 = 0;
              uStack_120 = 0;
              FUN_141336b0c(&local_b8,uVar7,&local_108);
              FUN_1458f9da0(uVar7,&local_b8);
              FUN_1462223c8(param_1,local_cc,&local_108);
              FUN_146222600(param_1,local_cc,&local_108);
              FUN_146222160(param_1,&local_108);
              lVar8 = param_1[0xa8];
              if ((longlong)(int)lVar8 != 0) {
                lVar9 = param_1[0xa7];
                lVar10 = 0;
                do {
                  if (*(longlong *)(lVar9 + lVar10) != 0) {
                    FUN_143f4527c(*(longlong *)(lVar9 + lVar10),local_cc,&local_108,0);
                  }
                  lVar10 = lVar10 + 8;
                } while ((longlong)(int)lVar8 * 8 != lVar10);
              }
              if ((longlong)(int)plStack_100 != 0) {
                lVar9 = (longlong)(int)plStack_100 << 4;
                lVar8 = local_108;
                do {
                  (**(code **)(*param_1 + 0x28))(param_1,local_cc,lVar8);
                  lVar8 = lVar8 + 0x10;
                  lVar9 = lVar9 + -0x10;
                } while (lVar9 != 0);
              }
              lVar8 = local_118;
              lVar9 = (longlong)(int)uStack_110;
              if (lVar9 == 0) {
                bVar4 = false;
              }
              else {
                lVar10 = 0;
                do {
                  plVar6 = *(longlong **)(lVar8 + lVar10);
                  (**(code **)(*plVar6 + 8))(plVar6,&local_c8);
                  (**(code **)(*param_1 + 0x30))(param_1,local_cc,local_c8);
                  plVar6 = local_c0;
                  if (local_c0 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_c0 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_c0)(local_c0);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar6 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                  }
                  plVar6 = *(longlong **)(lVar8 + lVar10);
                  (**(code **)(*plVar6 + 8))(plVar6,&local_138);
                  local_c8 = local_138;
                  local_c0 = local_130;
                  if (local_130 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                    UNLOCK();
                  }
                  FUN_1462222b2(param_1 + 0xac,&local_c8);
                  plVar6 = local_130;
                  if (local_130 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_130 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_130)(local_130);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar6 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                  }
                  lVar10 = lVar10 + 0x10;
                } while (lVar9 * 0x10 != lVar10);
                bVar4 = 0 < (int)uStack_110;
              }
              if (((0 < (int)plStack_100) || (bVar4)) || (0 < (int)uStack_120)) {
                (**(code **)(*param_1 + 0x20))(param_1,local_cc);
              }
              FUN_141242f30(param_1,local_cc);
              FUN_140b6c1c2(local_128,uStack_120 & 0xffffffff);
              if (local_128 != 0) {
                FUN_1400020a8();
              }
              FUN_140b6c1c2(local_118,uStack_110 & 0xffffffff);
              if (local_118 != 0) {
                FUN_1400020a8();
              }
              FUN_140b6c1c2(local_108,(ulonglong)plStack_100 & 0xffffffff);
              if (local_108 != 0) {
                FUN_1400020a8();
              }
              local_70 = 0;
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              FUN_14581b6ec(&local_b8);
              FUN_140b6c1c2(local_f8,uStack_f0 & 0xffffffff);
              if (local_f8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            if (local_d8 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_d8 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*local_d8)(local_d8);
                LOCK();
                piVar2 = (int *)((longlong)local_d8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_d8 + 0x10))(local_d8);
                }
              }
            }
          }
          break;
        }
        iVar5 = *(int *)(param_1[0x16] + lVar8 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146222160 FUN_146222160 body=337 status=ok
// SIG undefined FUN_146222160(void)

void FUN_146222160(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = param_2[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar4 = *param_2;
    lVar9 = 0;
    do {
      plVar8 = (longlong *)(**(code **)(**(longlong **)(lVar4 + lVar9) + 0x38))();
      if (*plVar8 != 0) {
        (**(code **)(**(longlong **)(lVar4 + lVar9) + 8))(*(longlong **)(lVar4 + lVar9),&local_68);
        local_58 = local_68;
        local_50 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        FUN_1462222b2(param_1 + 0x560,&local_58);
        plVar8 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        iVar3 = *(int *)(param_1 + 0x5b8);
        *(uint *)(param_1 + 0x5b8) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x5bc) < iVar3 + 1U) {
          FUN_140b722da((longlong *)(param_1 + 0x5b0),iVar3);
        }
        lVar5 = *(longlong *)(param_1 + 0x5b0);
        *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = *(undefined8 *)(lVar4 + lVar9);
        lVar6 = *(longlong *)(lVar4 + 8 + lVar9);
        *(longlong *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462222b2 FUN_1462222b2 body=277 status=ok
// SIG undefined FUN_1462222b2(void)

void FUN_1462222b2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      do {
        lVar3 = *param_1;
        lVar7 = (longlong)iVar6;
        puVar4 = *(undefined8 **)(lVar3 + lVar7 * 0x28);
        plVar8 = *(longlong **)(lVar3 + 8 + lVar7 * 0x28);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_2) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
        if (plVar8 != (longlong *)0x0) {
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
        }
        if (cVar5 != '\0') {
          FUN_148a7768c(param_1,*puVar10);
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        iVar6 = *(int *)(lVar3 + 0x20);
        puVar10 = (undefined4 *)(lVar3 + 0x20);
      } while (iVar6 != -1);
    }
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001462223b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1462223c8 FUN_1462223c8 body=567 status=ok
// SIG undefined FUN_1462223c8(void)

void FUN_1462223c8(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar7 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xf0);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 0xc) == param_2) {
          cVar6 = FUN_144729dda(param_1 + 0xa8);
          if (cVar6 != '\0') {
            lVar7 = FUN_14479d2ce(param_1 + 0xa8);
            if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
              lVar10 = 0;
              goto LAB_146222479;
            }
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 0xc + 4);
      } while (iVar9 != -1);
    }
  }
  goto LAB_146222543;
  while (lVar10 = lVar10 + 8, (longlong)*(int *)(lVar7 + 0x40) * 8 != lVar10) {
LAB_146222479:
    lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar10);
    if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xe0) == param_2)) {
      lVar7 = param_3[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar10 = *param_3;
        lVar11 = 0;
        do {
          uVar8 = FUN_140b6de3c();
          plVar4 = *(longlong **)(lVar10 + lVar11);
          (**(code **)(*plVar4 + 8))(plVar4,&local_68);
          FUN_140b6df48(uVar8,&local_58,lVar3,local_68);
          plVar4 = local_50;
          lVar5 = local_58;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          plVar4 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          if (lVar5 == 0) {
            plVar4 = *(longlong **)(lVar10 + lVar11);
            (**(code **)(*plVar4 + 8))(plVar4,&local_58);
            FUN_1413359f4(param_1,lVar3,&local_58);
            plVar4 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_50 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_50)(local_50);
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
          lVar11 = lVar11 + 0x10;
        } while ((longlong)(int)lVar7 * 0x10 != lVar11);
      }
      break;
    }
  }
LAB_146222543:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146222600 FUN_146222600 body=1499 status=ok
// SIG undefined FUN_146222600(void)

/* WARNING: Removing unreachable block (ram,0x000146222a52) */

void FUN_146222600(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_108 [32];
  undefined8 **local_e8;
  uint local_d4;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined1 local_78;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar9 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0xf0);
    }
    iVar11 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        local_d4 = param_2;
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar11 * 0xc) == param_2) {
          local_58 = 0;
          uStack_50 = 0;
          FUN_1408be27e(&local_58,(int)param_3[1]);
          lVar9 = param_3[1];
          local_d0 = param_3;
          if ((longlong)(int)lVar9 != 0) {
            lVar3 = *param_3;
            lVar12 = 0;
            do {
              (**(code **)(**(longlong **)(lVar3 + lVar12) + 8))
                        (*(longlong **)(lVar3 + lVar12),&local_88);
              (**(code **)(*local_88 + 0x30))(local_88,&local_c8);
              uVar5 = uStack_50;
              lVar14 = (longlong)(int)uStack_50;
              uVar7 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
              if (uStack_50._4_4_ < uVar7) {
                FUN_1447a1bd6(&local_58,uVar5 & 0xffffffff);
              }
              plVar10 = plStack_80;
              lVar14 = lVar14 * 0x10;
              *(undefined8 *)(local_58 + lVar14) = 0;
              *(longlong *)(local_58 + lVar14) = local_c8;
              *(undefined4 *)(local_58 + 8 + lVar14) = (undefined4)local_c0;
              *(undefined4 *)(local_58 + 0xc + lVar14) = local_c0._4_4_;
              local_c0 = 0;
              local_c8 = 0;
              if (plStack_80 != (longlong *)0x0) {
                LOCK();
                plVar13 = plStack_80 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
                  (**(code **)*plStack_80)(plStack_80);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              lVar12 = lVar12 + 0x10;
            } while ((longlong)(int)lVar9 * 0x10 != lVar12);
          }
          if (0 < (int)uStack_50) {
            FUN_140b708a0(param_1);
            local_c8 = 0;
            plVar10 = (longlong *)FUN_1401e3228();
            if (plVar10 == (longlong *)0x0) {
              local_68 = (longlong *)0x0;
              plStack_60 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar10 + 0xb8))(plVar10,&local_68);
              uVar7 = local_d4;
              if (local_68 != (longlong *)0x0) {
                local_88 = (longlong *)0x0;
                plStack_80 = (longlong *)0x0;
                local_78 = 0;
                FUN_145cf83a8(param_1,&local_98,local_d4,0);
                plVar10 = local_68;
                if (local_98 != 0) {
                  local_c0 = CONCAT44(local_c0._4_4_,uVar7);
                  local_b8 = 0;
                  iVar11 = (int)local_d0[1];
                  lVar9 = *local_d0;
                  local_c8 = param_1;
                  local_b0 = iVar11;
                  if (iVar11 == 0) {
                    local_ac = 0;
                  }
                  else {
                    FUN_140b6f604(&local_b8,iVar11,0);
                    FUN_140b6ce2b(local_b8,lVar9,iVar11);
                  }
                  local_a8 = (undefined8 *)0x0;
                  local_a0 = 0;
                  FUN_1446efa72(&local_a8,0,5,0x10);
                  iVar11 = local_b0;
                  lVar9 = local_b8;
                  local_a0 = 5;
                  plVar13 = *(longlong **)(param_1 + 0x10);
                  if (plVar13 == (longlong *)0x0) {
LAB_146222a96:
                    *local_a8 = &PTR_LAB_14b438b20;
                    LOCK();
                    UNLOCK();
                    lVar12 = DAT_14c758608 + 1;
                    lVar3 = DAT_14c758608 + 1;
                    if (lVar12 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar12 = DAT_14c758608 + 2;
                      lVar3 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar3;
                    local_a8[2] = lVar12;
                    *local_a8 = &PTR_FUN_14b4e2f40;
                    local_a8[3] = 0;
                    local_a8[4] = 0;
                    bVar16 = true;
                    plVar13 = (longlong *)0x0;
                  }
                  else {
                    iVar8 = (int)plVar13[1];
                    do {
                      if (iVar8 == 0) goto LAB_146222a96;
                      LOCK();
                      iVar6 = (int)plVar13[1];
                      bVar16 = iVar8 == iVar6;
                      if (bVar16) {
                        *(int *)(plVar13 + 1) = iVar8 + 1;
                        iVar6 = iVar8;
                      }
                      iVar8 = iVar6;
                      UNLOCK();
                    } while (!bVar16);
                    uVar4 = *(undefined8 *)(param_1 + 8);
                    LOCK();
                    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                    UNLOCK();
                    LOCK();
                    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                    UNLOCK();
                    *local_a8 = &PTR_LAB_14b438b20;
                    LOCK();
                    UNLOCK();
                    lVar12 = DAT_14c758608 + 1;
                    lVar3 = DAT_14c758608 + 1;
                    if (lVar12 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar12 = DAT_14c758608 + 2;
                      lVar3 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar3;
                    local_a8[2] = lVar12;
                    *local_a8 = &PTR_FUN_14b4e2f40;
                    local_a8[3] = uVar4;
                    local_a8[4] = plVar13;
                    LOCK();
                    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
                    UNLOCK();
                    bVar16 = false;
                  }
                  *(undefined4 *)(local_a8 + 6) = (undefined4)local_c0;
                  local_a8[5] = local_c8;
                  local_a8[7] = 0;
                  *(int *)(local_a8 + 8) = local_b0;
                  if (local_b0 == 0) {
                    *(undefined4 *)((longlong)local_a8 + 0x44) = 0;
                  }
                  else {
                    puVar15 = local_a8 + 7;
                    FUN_140b6f604(puVar15,local_b0,0);
                    FUN_140b6ce2b(*puVar15,lVar9,iVar11);
                  }
                  if (!bVar16) {
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
                  local_e8 = &local_a8;
                  (**(code **)(*plVar10 + 0x48))(plVar10,local_98,&local_88,&local_58);
                  FUN_1449db362(&local_a8);
                  FUN_140b6c1c2(local_b8,local_b0);
                  if (local_b8 != 0) {
                    FUN_1400020a8();
                  }
                }
                if (local_90 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = local_90 + 1;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)*plVar10 == 0) {
                    (**(code **)*local_90)(local_90);
                    LOCK();
                    piVar2 = (int *)((longlong)local_90 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*local_90 + 0x10))(local_90);
                    }
                  }
                }
                if (local_88 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            plVar10 = plStack_60;
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              plVar13 = plStack_60 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*plStack_60)(plStack_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        iVar11 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar11 * 0xc + 4);
      } while (iVar11 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146222bdc FUN_146222bdc body=610 status=ok
// SIG undefined FUN_146222bdc(void)

void FUN_146222bdc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  int local_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb97920);
    FUN_14119d664(*(undefined8 *)(param_1 + 0x180),&local_48);
    if ((int)uStack_30 == local_40) {
      if ((int)uStack_30 < 2) {
        bVar12 = true;
      }
      else {
        lVar10 = 0;
        while( true ) {
          uVar3 = *(ushort *)(local_38 + lVar10);
          uVar7 = (uint)uVar3;
          uVar4 = *(ushort *)(local_48 + lVar10);
          uVar11 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_146222c7d;
            }
            iVar8 = uVar7 - uVar11;
            goto LAB_146222ca8;
          }
          if (uVar3 == 0) break;
LAB_146222c7d:
          lVar10 = lVar10 + 2;
        }
        iVar8 = 0;
LAB_146222ca8:
        bVar12 = iVar8 == 0;
      }
    }
    else {
      bVar12 = local_40 + (int)uStack_30 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar12) {
      uVar5 = *(undefined8 *)*param_2;
      plVar6 = (longlong *)((undefined8 *)*param_2)[1];
      if (plVar6 == (longlong *)0x0) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
        if ((lVar10 == 0) || (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar10 + 0x360);
        }
        FUN_140b6e166(&local_48,uVar9,uVar5);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
        if ((lVar10 == 0) || (lVar10 = *(longlong *)(lVar10 + 0x30), lVar10 == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar10 + 0x360);
        }
        FUN_140b6e166(&local_48,uVar9,uVar5);
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
      if (local_48 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x180);
        local_58 = local_48;
        local_50 = (longlong *)CONCAT44(uStack_3c,local_40);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_146222e40(uVar5,&local_58);
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_50 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      plVar6 = (longlong *)CONCAT44(uStack_3c,local_40);
      if (plVar6 != (longlong *)0x0) {
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
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146222e40 FUN_146222e40 body=162 status=ok
// SIG undefined FUN_146222e40(void)

void FUN_146222e40(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x3c0))(local_38,param_1[2],*param_2);
    }
  }
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



// FUNCTION 146222ee4 FUN_146222ee4 body=389 status=ok
// SIG undefined FUN_146222ee4(void)

void FUN_146222ee4(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = (**(code **)(*param_2 + 0x90))(param_2);
  iVar2 = *(int *)(param_1 + 0x960);
  if ((longlong)iVar2 == 0) {
    return;
  }
  lVar3 = (longlong)iVar2 << 2;
  lVar6 = 0;
  lVar7 = 0;
  while (*(int *)(*(longlong *)(param_1 + 0x958) + lVar6 * 4) != iVar1) {
    lVar7 = lVar7 + 0x100000000;
    lVar6 = lVar6 + 1;
    lVar3 = lVar3 + -4;
    if (lVar3 == 0) {
      return;
    }
  }
  iVar5 = (int)lVar6;
  if (iVar5 == -1) {
    return;
  }
  lVar7 = lVar7 >> 0x20;
  if ((DAT_14c763ae8 < *(uint *)(*(longlong *)(param_1 + 0x968) + lVar7 * 4)) &&
     ((longlong)*(int *)(param_1 + 0x980) != 0)) {
    uVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x978) + uVar4) == iVar1) {
        if ((int)(uVar4 >> 3) * -0x55555555 != -1) {
          FUN_148a43fba(param_1 + 0x978);
          iVar2 = *(int *)(param_1 + 0x960);
        }
        break;
      }
      uVar4 = uVar4 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x980) * 0x18 != uVar4);
  }
  if (iVar2 != 1) {
    if (iVar2 + -1 == iVar5) {
      iVar1 = iVar5;
      if (iVar2 + -1 != iVar5) {
        memmove((void *)(*(longlong *)(param_1 + 0x958) + lVar7 * 4),
                (void *)(*(longlong *)(param_1 + 0x958) + lVar7 * 4 + 4),
                (longlong)((iVar2 + -1) - iVar5) << 2);
        iVar1 = *(int *)(param_1 + 0x960) + -1;
      }
      *(int *)(param_1 + 0x960) = iVar1;
      iVar2 = *(int *)(param_1 + 0x970);
      if (iVar2 + -1 != iVar5) {
        memmove((void *)(*(longlong *)(param_1 + 0x968) + lVar7 * 4),
                (void *)(*(longlong *)(param_1 + 0x968) + lVar7 * 4 + 4),
                (longlong)((iVar2 + -1) - iVar5) << 2);
        iVar2 = *(int *)(param_1 + 0x970);
      }
      *(int *)(param_1 + 0x970) = iVar2 + -1;
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x968) + lVar7 * 4) = 0;
    }
    return;
  }
  FUN_14622306a(param_1);
  return;
}



// FUNCTION 14622306a FUN_14622306a body=128 status=ok
// SIG undefined FUN_14622306a(void)

void FUN_14622306a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x960) = 0;
  if (*(int *)(param_1 + 0x964) != 0x100) {
    FUN_14480809c(param_1 + 0x958,0x100);
  }
  *(undefined4 *)(param_1 + 0x970) = 0;
  if (*(int *)(param_1 + 0x974) != 0x100) {
    FUN_14480809c(param_1 + 0x968,0x100);
  }
  FUN_1459a8f34(param_1 + 0x978,DAT_14c763aec);
  *(undefined1 *)(param_1 + 0x988) = 0;
  *(undefined8 *)(param_1 + 0x990) = 0;
  return;
}



// FUNCTION 1462230ea FUN_1462230ea body=252 status=ok
// SIG undefined FUN_1462230ea(void)

ulonglong FUN_1462230ea(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1462231ca;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x28);
      local_48 = *param_3;
      uStack_44 = param_3[1];
      uStack_40 = param_3[2];
      uStack_3c = param_3[3];
      local_38 = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(param_3 + 4) = 0;
      local_30 = param_3[6];
      local_2c = param_3[7];
      *(undefined8 *)(param_3 + 6) = 0;
      (*pcVar5)(lVar4);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
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
      goto LAB_146223170;
    }
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
LAB_1462231ca:
  uVar8 = 0;
LAB_146223170:
  FUN_141505886(*(undefined8 *)(param_3 + 4),param_3[6]);
  if (*(longlong *)(param_3 + 4) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1462231e8 FUN_1462231e8 body=649 status=ok
// SIG undefined FUN_1462231e8(void)

longlong * FUN_1462231e8(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)FUN_146223472();
  lVar4 = param_3[3];
  plVar5 = (longlong *)param_3[4];
  if (plVar5 == (longlong *)0x0) {
    plVar7[0x30] = lVar4;
    plVar8 = (longlong *)plVar7[0x31];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x31] = 0;
LAB_146223365:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
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
      if (plVar5 != (longlong *)0x0) goto LAB_146223257;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar7[0x30] = lVar4;
    plVar8 = (longlong *)plVar7[0x31];
    if (plVar5 == plVar8) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      plVar7[0x31] = (longlong)plVar5;
      if (plVar8 != (longlong *)0x0) goto LAB_146223365;
    }
LAB_146223257:
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar6 == '\0') goto LAB_146223273;
  FUN_145c43050(param_1 + 400,&local_48,param_3);
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar7[0x34] = local_48;
    plVar8 = (longlong *)plVar7[0x35];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x35] = 0;
LAB_146223425:
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x00014622345e:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar7[0x34] = local_48;
    plVar8 = (longlong *)plVar7[0x35];
    if (local_40 == plVar8) {
      LOCK();
      plVar8 = local_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar8 = plVar5;
        goto joined_r0x00014622345e;
      }
    }
    else {
      plVar7[0x35] = (longlong)local_40;
      if (plVar8 != (longlong *)0x0) goto LAB_146223425;
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_146223273:
  *param_2 = (longlong)(plVar7 + 2);
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146223472 FUN_146223472 body=132 status=ok
// SIG undefined FUN_146223472(void)

undefined8 * FUN_146223472(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1b0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b99a980;
  memset(puVar1 + 2,0,0x1a0);
  FUN_145c42fa8(puVar1 + 2);
  puVar1[0x2f] = 0;
  puVar1[2] = &PTR_FUN_14b633e40;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  return puVar1;
}



// FUNCTION 1462234f6 FUN_1462234f6 body=803 status=ok
// SIG undefined FUN_1462234f6(void)

/* WARNING: Removing unreachable block (ram,0x000146223806) */
/* WARNING: Removing unreachable block (ram,0x0001462237d3) */
/* WARNING: Removing unreachable block (ram,0x0001462237c9) */
/* WARNING: Removing unreachable block (ram,0x0001462237ec) */
/* WARNING: Removing unreachable block (ram,0x000146223810) */

void FUN_1462234f6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&local_38,L"webm");
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(longlong *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  plVar4 = (longlong *)(param_1 + 0x18);
  FUN_140056680(&local_38,L"Linux");
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(longlong *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,&DAT_14a37f8b8);
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(longlong *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_140056680(&local_38,L"Windows");
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1447a1bd6(plVar4,iVar1);
  }
  lVar2 = *plVar4;
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(longlong *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  local_38 = -0x2d4ab09da9c9043f;
  uStack_30 = 0xb184b45aac8e7d4f;
  FUN_14622381a(param_1 + -8);
  FUN_1400b22c2(&local_38,"Windows");
  FUN_1405e9454(plVar4,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_38,&DAT_14a8e6a18);
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x28),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(longlong *)(lVar2 + lVar5) = local_38;
  *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)uStack_30;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = uStack_30._4_4_;
  uStack_30 = 0;
  local_38 = 0;
  FUN_1446ddc76(&local_40,"Media",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_1405f3750(uVar3,local_40,0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x80))(plVar4,param_1 + -8);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14622381a FUN_14622381a body=240 status=ok
// SIG undefined FUN_14622381a(void)

/* WARNING: Removing unreachable block (ram,0x000146223901) */

void FUN_14622381a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446ddc76(&local_28,"Media",1);
  plVar3 = (longlong *)FUN_1447c1074(local_28);
  if ((plVar3 != (longlong *)0x0) &&
     ((**(code **)(*plVar3 + 0x40))(plVar3,&local_30,param_2), local_30 != 0)) {
    FUN_1400021e4(&local_30,&local_40);
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x20),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = local_40;
    local_40 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_38;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = local_38._4_4_;
    local_38 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14622390c FUN_14622390c body=25 status=ok
// SIG undefined FUN_14622390c(void)

undefined8 FUN_14622390c(undefined8 param_1,undefined8 param_2)

{
  FUN_146223926(param_2);
  return param_2;
}



// FUNCTION 146223926 FUN_146223926 body=497 status=ok
// SIG undefined FUN_146223926(void)

undefined8 * FUN_146223926(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb24198 != (longlong *)0x0 && DAT_14cb241a0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb24198 + 0x30))(), cVar2 != '\0')) {
    plVar5 = DAT_14cb24198;
    if (DAT_14cb241a0 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_30);
    goto LAB_146223a4a;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = &PTR_FUN_14ac8c420;
  FUN_1412cbb62(puVar3 + 4);
  *puVar3 = &PTR_FUN_14ac8be20;
  puVar3[4] = &PTR_FUN_14ac8be40;
  puVar3[6] = puVar3 + 6;
  puVar3[7] = puVar3 + 6;
  *(undefined4 *)(puVar3 + 8) = 0;
  puVar3[9] = 0x3f800000;
  *(undefined4 *)(puVar3 + 10) = 0;
  lVar4 = FUN_144860928();
  *(undefined4 *)(puVar3 + 9) = *(undefined4 *)(lVar4 + 0x40);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ac8c5f0;
  plVar5[2] = (longlong)puVar3;
  local_28 = plVar5;
  if (puVar3 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
    goto LAB_146223a4a;
  }
  local_30 = puVar3;
  if (((puVar3[2] != 0) && (puVar3[3] != 0)) && (0 < *(int *)(puVar3[3] + 8))) goto LAB_146223a4a;
  if (plVar5 == (longlong *)0x0) {
    puVar3[2] = puVar3;
    plVar6 = (longlong *)puVar3[3];
    if (plVar6 != (longlong *)0x0) {
LAB_146223abc:
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      puVar3[3] = plVar5;
      if (plVar5 != (longlong *)0x0) goto LAB_146223a40;
    }
    local_28 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    puVar3[2] = puVar3;
    if ((longlong *)puVar3[3] != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar6 = (longlong *)puVar3[3];
      if (plVar6 != (longlong *)0x0) goto LAB_146223abc;
      puVar3[3] = plVar5;
    }
LAB_146223a40:
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_146223a4a:
  *param_1 = local_30;
  param_1[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146223b18 FUN_146223b18 body=1783 status=ok
// SIG undefined FUN_146223b18(void)

void FUN_146223b18(longlong *param_1,undefined8 param_2,ulonglong *param_3,int param_4,
                  ulonglong *param_5,undefined8 param_6,uint param_7,undefined8 param_8)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  byte bVar10;
  undefined *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  uint local_f8;
  undefined8 local_f0;
  char local_d9;
  ulonglong local_d8;
  ulonglong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong lStack_b8;
  ulonglong *local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_90;
  longlong local_88;
  longlong local_80;
  ulonglong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  byte local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar8 = param_3;
  if (param_4 == 1) {
    cVar4 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar4 != '\0') {
      local_d0 = (ulonglong *)FUN_1468c8356(param_1);
      cVar4 = (**(code **)(*param_1 + 0x88))(param_1);
      puVar8 = local_d0;
      if (cVar4 == '\0') {
        param_3 = (ulonglong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
        if (param_3 != local_d0) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,local_d0,param_3,(int)param_1[6]);
          }
          else {
            memcpy(local_d0,param_3,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,local_d0);
      }
      goto LAB_146223b59;
    }
    puVar8 = (ulonglong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
  }
  local_d0 = (ulonglong *)0x0;
LAB_146223b59:
  bVar10 = *(byte *)(param_1 + 0x13);
  local_88 = param_1[0xe];
  local_80 = param_1[0xf];
  local_70 = (undefined4)param_1[0x10];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x84);
  uStack_68 = (undefined4)param_1[0x11];
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x8c);
  local_60 = param_1[0x12];
  local_78 = puVar8;
  local_58 = bVar10;
  if ((int)puVar8[1] == *(int *)((longlong)puVar8 + (ulonglong)((bVar10 & 1) == 0) * 0x10 + 0x24)) {
    FUN_1400020e8(param_2,&DAT_149e6ee3c,2);
  }
  else {
    plVar2 = param_1 + 0x10;
    if (local_80 == 0) {
      local_d8 = 0;
    }
    else {
      puVar11 = *(undefined **)(local_80 + 8);
      FUN_1446dcc8c();
      if (DAT_14c952a10 == 0) {
        bVar13 = puVar11 != (undefined *)0x0;
        if (puVar11 != &DAT_14c952a08 && bVar13) {
          do {
            puVar11 = *(undefined **)(puVar11 + 0x30);
            bVar13 = puVar11 != (undefined *)0x0;
            if (puVar11 == &DAT_14c952a08) break;
          } while (puVar11 != (undefined *)0x0);
        }
      }
      else {
        bVar13 = (*(ulonglong *)(puVar11 + 0x18) & DAT_14c952a10) != 0;
      }
      local_d8 = 0;
      if (((param_7 & 0x40) == 0) && (bVar13)) {
        local_d8 = FUN_14001cc68((longlong)*(int *)((longlong)param_1 + 0x8c),0);
        plVar3 = (longlong *)param_1[0xf];
        if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
          (**(code **)(*plVar3 + 0x160))();
        }
        else {
          memset((void *)((longlong)(int)param_1[0x10] + local_d8),0,
                 (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
        }
      }
    }
    local_90 = *(byte *)(param_1 + 0x13);
    local_c0 = param_1[0xe];
    lStack_b8 = param_1[0xf];
    local_a8 = (int)*plVar2;
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x84);
    uStack_a0 = (undefined4)param_1[0x11];
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0x8c);
    local_98 = param_1[0x12];
    local_b0 = param_5;
    if ((bVar10 & 1) == 0) {
      uVar12 = *puVar8;
      iVar7 = (int)puVar8[1] - *(int *)((longlong)puVar8 + 0x34);
    }
    else {
      uVar6 = *puVar8;
      uVar12 = ((longlong)uVar6 >> 0x18) + (longlong)puVar8;
      if ((uVar6 & 1) == 0) {
        uVar12 = uVar6;
      }
      iVar7 = (int)puVar8[1] - *(int *)((longlong)puVar8 + 0x24);
    }
    local_c8 = plVar2;
    if ((param_7 >> 0x19 & 1) == 0) {
      if (iVar7 != 0) {
        bVar13 = local_d8 == 0;
        iVar9 = 0;
        bVar10 = 1;
        do {
          local_4c = iVar9;
          cVar4 = FUN_1446ec082(&local_88,&local_4c);
          if (cVar4 != '\0') {
            FUN_140002184(param_2,(~bVar10 & 1) * '\x04' + '(');
            FUN_1400020e8(param_2,&DAT_149e06140,1);
            local_f0 = param_8;
            local_100 = param_6;
            local_108 = 0;
            local_f8 = param_7 | 1;
            (**(code **)(*(longlong *)param_1[0xe] + 0xf0))
                      ((longlong *)param_1[0xe],param_2,uVar12,0);
            FUN_1400020e8(param_2,&DAT_149e19f34,2);
            uVar6 = local_d8;
            if (param_5 != (ulonglong *)0x0 && bVar13) {
              iVar5 = FUN_1446e733e(&local_c0,uVar12,0);
              if (iVar5 < 0) {
                uVar6 = 0;
              }
              else if ((local_90 & 1) == 0) {
                uVar6 = (longlong)iVar5 * (longlong)local_98._4_4_ + *local_b0;
              }
              else {
                uVar1 = *local_b0;
                uVar6 = ((longlong)uVar1 >> 0x18) + (longlong)local_b0;
                if ((uVar1 & 1) == 0) {
                  uVar6 = uVar1;
                }
                uVar6 = (longlong)iVar5 * (longlong)local_98._4_4_ + uVar6;
              }
            }
            if ((param_7 & 0x40) != 0) {
              uVar6 = uVar12;
            }
            local_108 = uVar6 + (longlong)(int)param_1[0x10];
            local_f0 = param_8;
            local_100 = param_6;
            bVar10 = 0;
            local_f8 = param_7 | 1;
            (**(code **)(*(longlong *)param_1[0xf] + 0xf0))
                      ((longlong *)param_1[0xf],param_2,(longlong)(int)param_1[0x10] + uVar12);
            FUN_1400020e8(param_2,&DAT_149e06144,1);
            iVar7 = iVar7 + -1;
          }
          uVar12 = uVar12 + (longlong)*(int *)((longlong)param_1 + 0x8c);
          iVar9 = iVar9 + 1;
        } while (iVar7 != 0);
      }
      FUN_1400020e8(param_2,&DAT_149e06144,1);
    }
    else if (iVar7 != 0) {
      local_d9 = param_5 == (ulonglong *)0x0 || local_d8 != 0;
      iVar9 = 0;
      bVar13 = true;
      do {
        local_4c = iVar9;
        cVar4 = FUN_1446ec082(&local_88,&local_4c);
        if (cVar4 != '\0') {
          if (!bVar13) {
            FUN_140002184(param_2,10);
          }
          FUN_1400020e8(param_2,&DAT_149e2b508,1);
          local_f0 = param_8;
          local_100 = param_6;
          local_108 = 0;
          local_f8 = param_7 | 1;
          (**(code **)(*(longlong *)param_1[0xe] + 0xf0))((longlong *)param_1[0xe],param_2,uVar12,0)
          ;
          FUN_1400020e8(param_2,&DAT_149e26dae,2);
          uVar6 = local_d8;
          if (local_d9 == '\0') {
            iVar5 = FUN_1446e733e(&local_c0,uVar12,0);
            if (iVar5 < 0) {
              uVar6 = 0;
            }
            else if ((local_90 & 1) == 0) {
              uVar6 = (longlong)local_98._4_4_ * (longlong)iVar5 + *local_b0;
            }
            else {
              uVar1 = *local_b0;
              uVar6 = ((longlong)uVar1 >> 0x18) + (longlong)local_b0;
              if ((uVar1 & 1) == 0) {
                uVar6 = uVar1;
              }
              uVar6 = (longlong)local_98._4_4_ * (longlong)iVar5 + uVar6;
            }
          }
          if ((param_7 & 0x40) != 0) {
            uVar6 = uVar12;
          }
          local_108 = uVar6 + (longlong)(int)param_1[0x10];
          local_f0 = param_8;
          local_100 = param_6;
          bVar13 = false;
          local_f8 = param_7 | 1;
          (**(code **)(*(longlong *)param_1[0xf] + 0xf0))
                    ((longlong *)param_1[0xf],param_2,(longlong)(int)param_1[0x10] + uVar12);
          iVar7 = iVar7 + -1;
        }
        uVar12 = uVar12 + (longlong)*(int *)((longlong)param_1 + 0x8c);
        iVar9 = iVar9 + 1;
      } while (iVar7 != 0);
    }
    if (local_d8 != 0) {
      plVar2 = (longlong *)param_1[0xf];
      if ((*(byte *)((longlong)plVar2 + 0x3c) & 0x10) == 0) {
        (**(code **)(*plVar2 + 0x148))(plVar2,(longlong)(int)*local_c8 + local_d8);
      }
      FUN_1400020a8(local_d8);
    }
  }
  FUN_146224210(param_1,local_d0);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146224210 FUN_146224210 body=50 status=ok
// SIG undefined FUN_146224210(void)

void FUN_146224210(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x3c) & 0x10) == 0) {
    (**(code **)(*param_1 + 0x148))(param_1,param_2);
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 146224242 FUN_146224242 body=194 status=ok
// SIG undefined FUN_146224242(void)

void FUN_146224242(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [64];
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x1c8))(param_1,local_c8);
  FUN_146224306(local_c8,local_78,param_2);
  (**(code **)(*param_1 + 0x1a8))(param_1,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_78);
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_c8);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146224306 FUN_146224306 body=591 status=ok
// SIG undefined FUN_146224306(void)

undefined8 * FUN_146224306(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar2 = ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34)) +
          ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_140e83416(param_2,uVar2);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar1)) {
      *(int *)(param_2 + 9) = iVar1;
      FUN_14482b9e8(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_14482b35e(param_2,&local_58,(longlong)iStack_64 * 0x18 + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  local_50 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_3;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_14482b35e(param_2,&local_58,(longlong)iStack_64 * 0x18 + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146224566 FUN_146224566 body=1043 status=ok
// SIG undefined FUN_146224566(void)

bool FUN_146224566(double *param_1,longlong *param_2)

{
  float *pfVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if (9 < iVar7) {
    if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
      local_24 = (float)*param_1;
      puVar6 = (ulonglong *)param_2[1];
      pfVar1 = (float *)*puVar6 + 1;
      if ((float *)puVar6[1] < pfVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_24);
        }
      }
      else {
        local_24 = *(float *)*puVar6;
        *puVar6 = (ulonglong)pfVar1;
      }
      *param_1 = (double)local_24;
    }
    else {
      pdVar2 = *(double **)param_2[1];
      if ((double *)((undefined8 *)param_2[1])[1] < pdVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1,8);
        }
        else {
          thunk_FUN_146821949(param_2,param_1);
        }
      }
      else {
        *param_1 = *pdVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
      }
    }
    iVar8 = FUN_1448332aa(param_2,&DAT_149e3906c);
    puVar3 = *(undefined4 **)param_2[1];
    puVar4 = (undefined4 *)((undefined8 *)param_2[1])[1];
    if (iVar8 < 0xc) {
      if (puVar4 < (undefined4 *)((longlong)puVar3 + 1U)) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x1c),1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar5 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x1d),1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x1d) = *puVar5;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      FUN_1475265aa(param_1 + 1,param_2);
    }
    else {
      if (puVar4 < puVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *(undefined4 *)(param_1 + 1) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar3 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0xc),4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0xc) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar3 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *(undefined4 *)(param_1 + 2) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar3 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x14),4);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x14) = *puVar3;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar5 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,1);
      }
      else {
        *(undefined1 *)(param_1 + 3) = *puVar5;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar5 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x1c),1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x1c) = *puVar5;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar5 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x1d),1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x1d) = *puVar5;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
      puVar5 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x1e),1);
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x1e) = *puVar5;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 9 < iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622497a FUN_14622497a body=283 status=ok
// SIG undefined FUN_14622497a(void)

void FUN_14622497a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_14126888e();
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  local_44 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_44 = local_44 >> 0x10 ^ local_44;
  FUN_1448d5e3c(&local_40);
  lVar6 = *(longlong *)(local_40 + 0x600);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xa0));
  *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
  lVar7 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(lVar6 + 0x48);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xa0));
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
  if (lVar3 == lVar7) {
    lVar6 = FUN_1406d14fa(param_1);
    if (lVar6 != 0) {
      lVar7 = FUN_144a5dd5e();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        FUN_146224a96(lVar6 + 0x3c28);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146224a96 FUN_146224a96 body=141 status=ok
// SIG undefined FUN_146224a96(void)

void FUN_146224a96(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = FUN_140c83306();
    if (lVar2 != 0) {
      FUN_14578bad4(lVar2,0);
      lVar2 = FUN_14578bab6(*(undefined8 *)(param_1 + 0x28));
      if (lVar2 != 0) {
        FUN_141664bea(lVar2);
      }
      lVar2 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)(lVar2 + 0x440) != 0) {
        lVar3 = FUN_1412016fe();
        lVar2 = *(longlong *)(lVar2 + 0x440);
        if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
             lVar3 + 0x30)))) {
          *(undefined1 *)(lVar2 + 0x480) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 146224b2a FUN_146224b2a body=657 status=ok
// SIG undefined FUN_146224b2a(void)

longlong * FUN_146224b2a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)FUN_146224dc1();
  lVar4 = param_3[3];
  plVar5 = (longlong *)param_3[4];
  if (plVar5 == (longlong *)0x0) {
    plVar7[0x32] = lVar4;
    plVar8 = (longlong *)plVar7[0x33];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x33] = 0;
LAB_146224ca7:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
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
      if (plVar5 != (longlong *)0x0) goto LAB_146224b99;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar7[0x32] = lVar4;
    plVar8 = (longlong *)plVar7[0x33];
    if (plVar5 == plVar8) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      plVar7[0x33] = (longlong)plVar5;
      if (plVar8 != (longlong *)0x0) goto LAB_146224ca7;
    }
LAB_146224b99:
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar6 == '\0') goto LAB_146224bb5;
  FUN_145c43050(param_1 + 400,&local_48,param_3);
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar7[0x34] = local_48;
    plVar8 = (longlong *)plVar7[0x35];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x35] = 0;
LAB_146224d74:
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x000146224dad:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar7[0x34] = local_48;
    plVar8 = (longlong *)plVar7[0x35];
    if (local_40 == plVar8) {
      LOCK();
      plVar8 = local_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar8 = plVar5;
        goto joined_r0x000146224dad;
      }
    }
    else {
      plVar7[0x35] = (longlong)local_40;
      if (plVar8 != (longlong *)0x0) goto LAB_146224d74;
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_146224bb5:
  *param_2 = (longlong)(plVar7 + 2);
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146224dc1 FUN_146224dc1 body=132 status=ok
// SIG undefined FUN_146224dc1(void)

undefined8 * FUN_146224dc1(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1b0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b99c150;
  memset(puVar1 + 2,0,0x1a0);
  FUN_145c42fa8(puVar1 + 2);
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[2] = &PTR_FUN_14b63f140;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  return puVar1;
}



// FUNCTION 146224e46 FUN_146224e46 body=657 status=ok
// SIG undefined FUN_146224e46(void)

longlong * FUN_146224e46(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)FUN_1462250dd();
  lVar4 = param_3[3];
  plVar5 = (longlong *)param_3[4];
  if (plVar5 == (longlong *)0x0) {
    plVar7[0x32] = lVar4;
    plVar8 = (longlong *)plVar7[0x33];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x33] = 0;
LAB_146224fc3:
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
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
      if (plVar5 != (longlong *)0x0) goto LAB_146224eb5;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar7[0x32] = lVar4;
    plVar8 = (longlong *)plVar7[0x33];
    if (plVar5 == plVar8) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    else {
      plVar7[0x33] = (longlong)plVar5;
      if (plVar8 != (longlong *)0x0) goto LAB_146224fc3;
    }
LAB_146224eb5:
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  cVar6 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar6 == '\0') goto LAB_146224ed1;
  FUN_145c43050(param_1 + 400,&local_48,param_3);
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar7[0x34] = local_48;
    plVar8 = (longlong *)plVar7[0x35];
    if (plVar8 != (longlong *)0x0) {
      plVar7[0x35] = 0;
LAB_146225090:
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001462250c9:
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar7[0x34] = local_48;
    plVar8 = (longlong *)plVar7[0x35];
    if (local_40 == plVar8) {
      LOCK();
      plVar8 = local_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar8 = plVar5;
        goto joined_r0x0001462250c9;
      }
    }
    else {
      plVar7[0x35] = (longlong)local_40;
      if (plVar8 != (longlong *)0x0) goto LAB_146225090;
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_146224ed1:
  *param_2 = (longlong)(plVar7 + 2);
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462250dd FUN_1462250dd body=132 status=ok
// SIG undefined FUN_1462250dd(void)

undefined8 * FUN_1462250dd(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1b0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b99c170;
  memset(puVar1 + 2,0,0x1a0);
  FUN_145c42fa8(puVar1 + 2);
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[2] = &PTR_FUN_14b63f1f0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  return puVar1;
}



// FUNCTION 146225162 FUN_146225162 body=219 status=ok
// SIG undefined FUN_146225162(void)

void FUN_146225162(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          lVar2 = FUN_144a5dd5e();
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
            lVar1 = FUN_144a7ba4c(lVar1);
            if (lVar1 != 0) {
              lVar2 = FUN_14030d4a0();
              if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
                lVar1 = FUN_140e76a6a(lVar1);
                if (lVar1 != 0) {
                  FUN_14166527c(lVar1,param_4);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14622523e FUN_14622523e body=314 status=ok
// SIG undefined FUN_14622523e(void)

undefined8 FUN_14622523e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *puStack_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    lVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    if (lVar3 != 0) {
      local_58 = 0;
      local_48 = 0;
      puStack_50 = &DAT_3f800000ffffffff;
      local_40 = 0;
      uStack_38 = 0;
      lVar6 = *(longlong *)(param_1 + 0x28);
      if (lVar6 == 0) {
        uVar4 = FUN_140c52150();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x28) = lVar6;
      }
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*(longlong *)(param_1 + 0x20) != 0)) {
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if (plVar1 == (longlong *)0x0) {
LAB_146225375:
          lVar5 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 == '\0') goto LAB_146225375;
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x20));
        }
        *(longlong *)(param_1 + 0x30) = lVar5;
      }
      FUN_1416656d2(lVar3,lVar5,&local_58);
      lVar3 = local_40;
      FUN_140de863f(local_40,uStack_38 & 0xffffffff);
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
      }
      uVar4 = 1;
      goto LAB_1462252dd;
    }
  }
  uVar4 = 0;
LAB_1462252dd:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146225384 FUN_146225384 body=2979 status=ok
// SIG undefined FUN_146225384(void)

/* WARNING: Removing unreachable block (ram,0x000146225f04) */
/* WARNING: Removing unreachable block (ram,0x000146225ee1) */
/* WARNING: Removing unreachable block (ram,0x000146225eaf) */
/* WARNING: Removing unreachable block (ram,0x000146225ec8) */
/* WARNING: Removing unreachable block (ram,0x000146225efa) */
/* WARNING: Removing unreachable block (ram,0x000146225f1e) */

undefined8 * FUN_146225384(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 *local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined1 local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined1 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_18c;
  undefined8 local_184;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined1 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined1 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a796540;
  *(undefined4 *)(param_1 + 7) = 2;
  plVar1 = param_1 + 8;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56) = 1;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
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
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = 0x10000ea60;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  FUN_1446f470e(&local_1f0,L"Animation",1);
  param_1[6] = local_1f0;
  FUN_140056680(&local_1f0,&DAT_14a796828);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_1f0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_1e8;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_1e8._4_4_;
  local_1e8 = 0;
  local_1f0 = 0;
  FUN_140056680(&local_1f0,&DAT_14a79682e);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_1f0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_1e8;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_1e8._4_4_;
  local_1e8 = 0;
  local_1f0 = 0;
  FUN_140056680(&local_1f0,L"weapon");
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_1f0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_1e8;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_1e8._4_4_;
  local_1e8 = 0;
  local_1f0 = 0;
  FUN_140056680(&local_1f0,L"hand");
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_1f0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_1e8;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_1e8._4_4_;
  local_1e8 = 0;
  local_1f0 = 0;
  FUN_140056680(&local_1f0,L"attach");
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_1f0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_1e8;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_1e8._4_4_;
  local_1e8 = 0;
  local_1f0 = 0;
  FUN_140056680(&local_1f0,L"camera");
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  lVar4 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_1f0;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_1e8;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_1e8._4_4_;
  local_1e8 = 0;
  local_1f0 = 0;
  local_358 = param_1 + 0x25;
  FUN_1446ddc76(&local_208,&DAT_14a79686a,1);
  FUN_1446ddc76(&local_210,&DAT_14a79686d,1);
  local_1f0 = local_210;
  local_1e8 = local_208;
  local_1e0 = 0;
  FUN_1446ddc76(&local_218,&DAT_14a79686d,1);
  FUN_1446ddc76(&local_220,&DAT_14a79686a,1);
  local_1dc = local_220;
  local_1d4 = local_218;
  local_1cc = 0;
  FUN_1446ddc76(&local_228,&DAT_14a796870,1);
  FUN_1446ddc76(&local_230,&DAT_14a796873,1);
  local_1c8 = local_230;
  local_1c0 = local_228;
  local_1b8 = 0;
  FUN_1446ddc76(&local_238,&DAT_14a796873,1);
  FUN_1446ddc76(&local_240,&DAT_14a796870,1);
  local_1b4 = local_240;
  local_1ac = local_238;
  local_1a4 = 0;
  FUN_1446ddc76(&local_248,&DAT_14a796876,1);
  FUN_1446ddc76(&local_250,&DAT_14a796879,1);
  local_1a0 = local_250;
  local_198 = local_248;
  local_190 = 1;
  FUN_1446ddc76(&local_258,&DAT_14a796879,1);
  FUN_1446ddc76(&local_260,&DAT_14a796876,1);
  local_18c = local_260;
  local_184 = local_258;
  local_17c = 1;
  FUN_1446ddc76(&local_268,&DAT_149eb5f26,1);
  FUN_1446ddc76(&local_270,&DAT_149eb5f29,1);
  local_178 = local_270;
  local_170 = local_268;
  local_168 = 1;
  FUN_1446ddc76(&local_278,&DAT_149eb5f29,1);
  FUN_1446ddc76(&local_280,&DAT_149eb5f26,1);
  local_164 = local_280;
  local_15c = local_278;
  local_154 = 1;
  FUN_1446ddc76(&local_288,&DAT_14a79c9da,1);
  FUN_1446ddc76(&local_290,"right",1);
  local_150 = local_290;
  local_148 = local_288;
  local_140 = 0;
  FUN_1446ddc76(&local_298,"right",1);
  FUN_1446ddc76(&local_2a0,&DAT_14a79c9da,1);
  local_13c = local_2a0;
  local_134 = local_298;
  local_12c = 0;
  FUN_1446ddc76(&local_2a8,&DAT_149ebc792,1);
  FUN_1446ddc76(&local_2b0,"Right",1);
  local_128 = local_2b0;
  local_120 = local_2a8;
  local_118 = 0;
  FUN_1446ddc76(&local_2b8,"Right",1);
  FUN_1446ddc76(&local_2c0,&DAT_149ebc792,1);
  local_114 = local_2c0;
  local_10c = local_2b8;
  local_104 = 0;
  FUN_1446ddc76(&local_2c8,"$1_r_$2",1);
  FUN_1446ddc76(&local_2d0,"([^}]*)_l_([^}]*)",1);
  local_100 = local_2d0;
  local_f8 = local_2c8;
  local_f0 = 2;
  FUN_1446ddc76(&local_2d8,"$1_l_$2",1);
  FUN_1446ddc76(&local_2e0,"([^}]*)_r_([^}]*)",1);
  local_ec = local_2e0;
  local_e4 = local_2d8;
  local_dc = 2;
  FUN_1446ddc76(&local_2e8,"$1_R_$2",1);
  FUN_1446ddc76(&local_2f0,"([^}]*)_L_([^}]*)",1);
  local_d8 = local_2f0;
  local_d0 = local_2e8;
  local_c8 = 2;
  FUN_1446ddc76(&local_2f8,"$1_L_$2",1);
  FUN_1446ddc76(&local_300,"([^}]*)_R_([^}]*)",1);
  local_c4 = local_300;
  local_bc = local_2f8;
  local_b4 = 2;
  FUN_1446ddc76(&local_308,"$1_right_$2",1);
  FUN_1446ddc76(&local_310,"([^}]*)_left_([^}]*)",1);
  local_b0 = local_310;
  local_a8 = local_308;
  local_a0 = 2;
  FUN_1446ddc76(&local_318,"$1_left_$2",1);
  FUN_1446ddc76(&local_320,"([^}]*)_right_([^}]*)",1);
  local_9c = local_320;
  local_94 = local_318;
  local_8c = 2;
  FUN_1446ddc76(&local_328,"$1_Right_$2",1);
  FUN_1446ddc76(&local_330,"([^}]*)_Left_([^}]*)",1);
  local_88 = local_330;
  local_80 = local_328;
  local_78 = 2;
  FUN_1446ddc76(&local_338,"$1_Left_$2",1);
  FUN_1446ddc76(&local_340,"([^}]*)_Right_([^}]*)",1);
  local_74 = local_340;
  local_6c = local_338;
  local_64 = 2;
  FUN_1446ddc76(&local_348,&DAT_14a796968,1);
  FUN_1446ddc76(&local_350,"((?:^[sS]pine|^[rR]oot|^[pP]elvis|^[nN]eck|^[hH]ead|^ik_hand_gun).*)",1)
  ;
  local_60 = local_350;
  local_58 = local_348;
  local_50 = 2;
  local_200 = &local_1f0;
  local_1f8 = local_4c;
  FUN_146225f28(local_358);
  param_1[0x27] = 0x10000001e;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146225f28 FUN_146225f28 body=108 status=ok
// SIG undefined FUN_146225f28(void)

undefined8 * FUN_146225f28(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  
  _Src = (void *)*param_2;
  uVar2 = (param_2[1] - (longlong)_Src >> 2) * -0x3333333333333333;
  iVar1 = (int)uVar2;
  *(int *)(param_1 + 1) = iVar1;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146225f94(param_1,uVar2 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 146225f94 FUN_146225f94 body=115 status=ok
// SIG undefined FUN_146225f94(void)

void FUN_146225f94(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146226008 FUN_146226008 body=1323 status=ok
// SIG undefined FUN_146226008(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146226008(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined2 *local_180;
  int local_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_150 [16];
  undefined2 *local_140 [2];
  undefined2 *local_130;
  int local_128;
  longlong local_120 [2];
  undefined1 local_110 [8];
  longlong local_108 [6];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_108[1] = 0;
  local_108[2] = 0xffffffffffffffff;
  local_108[3] = 0;
  lVar9 = param_2 + 0x80;
  cVar5 = FUN_144a87d38(lVar9);
  if (cVar5 == '\0') goto LAB_146226355;
  lVar7 = 0;
  FUN_141302974(local_108,0);
  param_1 = param_1 + 0x48;
  cVar5 = FUN_144729dda(param_1);
  if (cVar5 != '\0') {
    uVar6 = FUN_14479d2ce(param_1);
    lVar7 = FUN_1447210f0(uVar6);
  }
  cVar5 = FUN_144729dda(param_1);
  if (cVar5 == '\0') {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_14479d2ce(param_1);
    FUN_14026e798(&local_180,*(undefined8 *)(lVar8 + 0x3d0));
    puVar11 = local_180;
    if (local_180 == (undefined2 *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_14479d2ce(param_1);
      if (lVar8 == 0) {
        FUN_140056680(&local_130,&DAT_149e01fe8);
      }
      else {
        local_120[0] = *(longlong *)(lVar8 + 0x18);
        FUN_1400021e4(local_120,&local_130);
      }
      puVar10 = local_130;
      if (local_128 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140056680(local_120,puVar10);
      local_188 = local_188 & 0xffffff00;
      FUN_14084a140(puVar11,local_110,local_120,0);
      FUN_1403c75f4(local_108,local_110);
      FUN_144a61ac8(local_110);
      if (local_120[0] != 0) {
        FUN_1400020a8();
      }
      if (local_130 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_140[0] = local_180;
      if (CONCAT44(uStack_174,local_178) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_174,local_178) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar8 = FUN_140206ee8(lVar9,local_140);
    }
    plVar2 = (longlong *)CONCAT44(uStack_174,local_178);
    if (plVar2 != (longlong *)0x0) {
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
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  cVar5 = FUN_144a8e69e(local_108);
  if (lVar7 != 0 && cVar5 == '\0') {
    local_120[0] = *(longlong *)(lVar7 + 0x18);
    FUN_1400021e4(local_120,&local_180);
    puVar11 = local_180;
    if (local_178 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    FUN_140056680(local_150,puVar11);
    FUN_14084feb6(local_120,lVar7,local_150);
    FUN_1403c75f4(local_108,local_120);
    FUN_144a61ac8(local_120);
    if (local_180 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_108[0] != 0) {
      local_168 = 0;
      uStack_160 = 0;
      lVar8 = FUN_140206ee8(lVar9);
    }
  }
  if ((lVar8 != 0) && (local_108[0] != 0)) {
    local_c8 = *param_3;
    uStack_c0 = param_3[1];
    local_b8 = param_3[2];
    local_108[4] = 0;
    local_108[5] = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0x3ff00000;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a4 = 0x3ff00000;
    uStack_a0 = 0;
    uStack_9c = 0x3ff00000;
    local_98 = 0x3ff0000000000000;
    uStack_90 = 0;
    local_88 = 0x3f800000;
    local_80 = 0;
    local_7c = 0;
    uVar12 = FUN_14150591e();
    lVar9 = *(longlong *)(param_2 + 0xb8);
    if (lVar9 == 0) {
      uVar6 = FUN_1407f787c();
      lVar9 = FUN_14477b664(uVar6);
      *(longlong *)(param_2 + 0xb8) = lVar9;
      uVar12 = extraout_XMM0_Da_00;
    }
    plVar2 = (longlong *)(param_2 + 0xb0);
    lVar7 = *(longlong *)(param_2 + 0xc0);
    if (lVar7 == 0) {
      if ((lVar9 != 0) && (*plVar2 != 0)) {
        plVar3 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          *(undefined8 *)(param_2 + 0xc0) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,plVar2);
          *(longlong *)(param_2 + 0xc0) = lVar7;
          if (lVar7 != 0) {
            lVar9 = *(longlong *)(param_2 + 0xb8);
            uVar12 = extraout_XMM0_Da;
            goto LAB_1462262db;
          }
        }
      }
    }
    else {
LAB_1462262db:
      lVar4 = local_108[0];
      if (lVar9 == 0) {
        uVar6 = FUN_1407f787c(uVar12,lVar7);
        lVar9 = FUN_14477b664(uVar6);
        *(longlong *)(param_2 + 0xb8) = lVar9;
        lVar7 = *(longlong *)(param_2 + 0xc0);
        if (((lVar7 == 0) && (lVar7 = 0, lVar9 != 0)) && (*plVar2 != 0)) {
          plVar3 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
            lVar7 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar7 = FUN_144aff482(uVar6,plVar2);
          }
          *(longlong *)(param_2 + 0xc0) = lVar7;
        }
      }
      local_188 = local_188 & 0xffffff00;
      FUN_1447997cc(lVar4,lVar7,param_4,0);
    }
    uVar6 = FUN_14479d2ce(param_1);
    local_188 = 0;
    FUN_14084a448(local_108[0],&local_180,lVar8,uVar6);
    FUN_1416659c6(local_108 + 1,&local_180);
    local_108[3] = local_170;
  }
  FUN_144a61ac8(local_108);
LAB_146226355:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146226534 FUN_146226534 body=71 status=ok
// SIG undefined FUN_146226534(void)

void FUN_146226534(longlong *param_1,char param_2,undefined4 param_3)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x2043) = 0;
  if (param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    if (cVar1 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146226570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1,param_3,1);
  return;
}



// FUNCTION 14622657c FUN_14622657c body=126 status=ok
// SIG undefined FUN_14622657c(void)

undefined8 FUN_14622657c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((longlong *)(param_1 + -0x518) != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)(param_1 + -0x518) + 0x700))();
    if ((cVar2 != '\0') && (*(longlong *)(param_1 + -0x158) != 0)) {
      lVar3 = FUN_144a5dd5e();
      if (((*(longlong *)(param_1 + -0x158) != 0) &&
          (((lVar3 != 0 &&
            (lVar1 = *(longlong *)(*(longlong *)(param_1 + -0x158) + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar3 = FUN_14030d330();
        if (lVar3 != 0) {
          uVar4 = FUN_141483c74(lVar3);
          return uVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1462265fa FUN_1462265fa body=340 status=ok
// SIG undefined FUN_1462265fa(void)

void FUN_1462265fa(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  plVar6 = param_1 + -0xa3;
  if (plVar6 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar6 + 0x700))(plVar6);
    if (((cVar3 != '\0') || (*(char *)((longlong)param_1 + 0x2042) != '\0')) ||
       (((char)param_1[-0x74] == '\x03' && (param_1[-0x2b] == 0)))) {
      if (param_3 != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x2042) = 0;
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      if (plVar4 != (longlong *)0x0) {
        if (((param_2 == '\0') && ((char)param_1[0x408] != '\0')) &&
           (((char)param_1[0x408] != '\x03' || (*(char *)((longlong)param_1 + 0x2041) != '\0')))) {
          uVar8 = *(undefined4 *)((longlong)param_1 + 0x204c);
          uVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,0);
          uVar8 = FUN_14114c86e(param_1,uVar7,uVar8);
          *(undefined4 *)((longlong)param_1 + 0x204c) = uVar8;
        }
        if (((char)param_1[0x408] != '\0') && (FUN_14596b788(plVar6,3,0), param_1[-0x2b] != 0)) {
          lVar5 = FUN_144a5dd5e();
          lVar1 = param_1[-0x2b];
          if (((lVar1 != 0) &&
              (((lVar5 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
               (*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
             ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
               lVar5 + 0x30 && (*(char *)(lVar1 + 0x3260) == '\0')))) {
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14622674e FUN_14622674e body=40 status=ok
// SIG undefined FUN_14622674e(void)

undefined8 FUN_14622674e(undefined8 param_1,int param_2)

{
  FUN_1416659d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146226776 FUN_146226776 body=375 status=ok
// SIG undefined FUN_146226776(void)

void FUN_146226776(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1462268ee();
  uVar4 = DAT_14cb0d2b0;
  uVar2 = FUN_1447210f0(param_1);
  lVar3 = FUN_1405e677a(uVar4,uVar2);
  uVar4 = FUN_14045d4ce(lVar3 + 8,L"travelstation",&DAT_149dfb77a);
  FUN_140056680(&local_40,uVar4);
  FUN_140c540b4(&local_40,&DAT_149e06162,1,1);
  puVar6 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar6 = local_40;
  }
  FUN_1446f470e(&local_48,puVar6,1);
  if (param_2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) && (local_48 != 0)) {
      FUN_1461170f0(param_2);
    }
    if (*(longlong *)(param_2 + 0x398) != 0) {
      lVar5 = FUN_144a7b4ca();
      lVar3 = *(longlong *)(param_2 + 0x398);
      if ((((lVar3 != 0) && (lVar5 != 0)) &&
          ((lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0 &&
           ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)))))) && (local_4c = *(int *)(lVar3 + 0xef0), local_4c != -1)) {
        local_30 = &local_4c;
        FUN_144a9d2f8(param_1 + 0x720);
      }
    }
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462268ee FUN_1462268ee body=79 status=ok
// SIG undefined FUN_1462268ee(void)

void FUN_1462268ee(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14622693e();
  if (param_2 != 0) {
    lVar1 = FUN_1449f3324();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_146226a14(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14622693e FUN_14622693e body=129 status=ok
// SIG undefined FUN_14622693e(void)

void FUN_14622693e(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_141665abe();
  iVar3 = 1;
  lVar4 = 0x444;
  if (param_2 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      (**(code **)(*param_1 + 0x8e8))(param_1,param_2);
      cVar1 = FUN_1414077a0(param_1,param_2);
      if (cVar1 != '\0') {
        return;
      }
      *(int *)(param_1 + 0x88) = (int)param_1[0x88] + 1;
      iVar3 = -1;
      lVar4 = 0x44c;
    }
  }
  *(int *)((longlong)param_1 + lVar4) = *(int *)((longlong)param_1 + lVar4) + iVar3;
  return;
}



// FUNCTION 1462269c0 FUN_1462269c0 body=83 status=ok
// SIG undefined FUN_1462269c0(void)

void FUN_1462269c0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  local_14 = 1;
  local_10 = 0x40000000;
  (**(code **)(*param_2 + 0xe38))(param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146226a14 FUN_146226a14 body=185 status=ok
// SIG undefined FUN_146226a14(void)

void FUN_146226a14(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x57c) == '\x01') {
    lVar1 = FUN_14479d2ce(param_2 + 0xc08);
    uVar3 = DAT_14cb0d2b0;
    if (lVar1 == 0) {
      uVar2 = FUN_1447210f0(param_1);
      lVar1 = FUN_1405e677a(uVar3,uVar2);
      uVar3 = FUN_14045d4ce(lVar1 + 8,L"team",&DAT_149dfb77a);
      FUN_140056680(local_30,uVar3);
      FUN_14885ce7a(param_1,param_2,local_30);
      if (local_30[0] != 0) {
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



// FUNCTION 146226ace FUN_146226ace body=188 status=ok
// SIG undefined FUN_146226ace(void)

void FUN_146226ace(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     (DAT_14ca84e78 != '\x01')) {
    if (DAT_14cabd108 == 0) goto LAB_146226b1b;
    plVar4 = (longlong *)(DAT_14cabd108 + 0x10);
  }
  if (plVar4 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar4 + 0xa8))();
    FUN_140457ffc(uVar1,param_1);
  }
LAB_146226b1b:
  lVar2 = FUN_1447210f0(param_1);
  if ((lVar2 == 0) || (lVar3 = FUN_1403ca102(param_1), lVar3 == 0)) {
    return;
  }
  if ((*(char *)(param_1 + 0x491) == '\0') && (*(char *)(lVar2 + 0x152) != '\x03')) {
    FUN_144149cae(param_1,lVar3);
    return;
  }
  FUN_141665cdc(param_1);
  FUN_146226b8a(param_1);
  return;
}



// FUNCTION 146226b8a FUN_146226b8a body=299 status=ok
// SIG undefined FUN_146226b8a(void)

void FUN_146226b8a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (1 < *(int *)(param_1 + 0x480)) {
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar2 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b9727e0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar2[4] = FUN_146152dc4;
    local_48 = 0;
    FUN_1405f67fc(uVar4,local_30,&local_40,L"AOakMenuGameMode.StartTryTravelToNextMap");
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146226cb6 FUN_146226cb6 body=369 status=ok
// SIG undefined FUN_146226cb6(void)

ulonglong FUN_146226cb6(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_14625921e();
  FUN_1410d53f0(&local_58,uVar5);
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (local_50 != (longlong *)0x0) {
    iVar4 = (int)local_50[1];
    do {
      if (iVar4 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)local_50[1];
      bVar13 = iVar4 == iVar2;
      if (bVar13) {
        *(int *)(local_50 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
      plVar11 = local_50;
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      uVar8 = CONCAT71(uVar9,1);
      if ((local_58 != 0) && ((longlong)*(int *)(param_1 + 0xf8) != 0)) {
        lVar12 = *(longlong *)(param_1 + 0xf0);
        lVar10 = (longlong)*(int *)(param_1 + 0xf8) << 3;
        do {
          plVar6 = (longlong *)FUN_14479d2ce(lVar12);
          if (plVar6 != (longlong *)0x0) {
            lVar7 = FUN_146226e28(local_58,plVar6);
            if ((((*(byte *)(plVar6 + 0x84) & 2) == 0) ||
                (cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar3 == '\0')) ||
               (cVar3 = FUN_141107632(plVar6), cVar3 == '\0')) {
              cVar3 = '\0';
            }
            else {
              cVar3 = *(char *)(param_1 + 0xe0);
            }
            if ((lVar7 != 0) &&
               (cVar3 != '\0' ||
                *(int *)(lVar7 + 0x20) == *(int *)(param_1 + 0x18) &&
                *(longlong *)(lVar7 + 0x18) == *(longlong *)(param_1 + 0x10))) {
              uVar8 = 0;
              break;
            }
          }
          lVar12 = lVar12 + 8;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      LOCK();
      plVar6 = plVar11 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      goto LAB_146226daa;
    }
  }
  uVar8 = CONCAT71(uVar9,1);
LAB_146226daa:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146226e28 FUN_146226e28 body=97 status=ok
// SIG undefined FUN_146226e28(void)

longlong FUN_146226e28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x238) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x230);
    lVar3 = (longlong)*(int *)(param_1 + 0x238) * 0x98;
    do {
      lVar1 = FUN_14479d2ce(lVar2 + 0x10);
      if (lVar1 == param_2) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x98;
      lVar3 = lVar3 + -0x98;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 146226e8a FUN_146226e8a body=254 status=ok
// SIG undefined FUN_146226e8a(void)

longlong *
FUN_146226e8a(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_146226f8c(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_146227004(&local_30,plVar1);
  plVar2 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146226f8c FUN_146226f8c body=120 status=ok
// SIG undefined FUN_146226f8c(void)

undefined8 * FUN_146226f8c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99e5d0;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99e5f0;
  param_1[6] = &PTR_FUN_14b99e630;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146227004 FUN_146227004 body=162 status=ok
// SIG undefined FUN_146227004(void)

void FUN_146227004(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_146227043;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_146227043;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146227043:
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
                    /* WARNING: Could not recover jumptable at 0x0001462270a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1462270a6 FUN_1462270a6 body=313 status=ok
// SIG undefined FUN_1462270a6(void)

undefined8 *
FUN_1462270a6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined8 **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  FUN_144a9d3d4(puVar1,0x24);
  *puVar1 = &PTR_FUN_14bea9a50;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined1 *)(puVar1 + 0x14) = 2;
  *(undefined4 *)((longlong)puVar1 + 0xa4) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa9) = 0;
  puVar2 = (undefined8 *)0x0;
  local_50 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    local_58 = param_9;
    local_60 = param_8;
    local_68 = param_5;
    FUN_1462271e0(puVar1,param_2,param_3,param_4);
    local_48 = (undefined1 *)&param_6;
    local_40 = &local_50;
    FUN_14622724a(param_1 + 0x88,local_34);
    puVar2 = local_50;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462271e0 FUN_1462271e0 body=106 status=ok
// SIG undefined FUN_1462271e0(void)

void FUN_1462271e0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)((ulonglong)param_4 >> 0x20);
  *(undefined1 *)(param_1 + 0xa8) = param_7;
  iVar1 = (int)((ulonglong)param_5 >> 0x20);
  if ((((*(longlong *)(param_1 + 0x58) != param_2) || (*(int *)(param_1 + 0x20) != param_3)) ||
      (*(int *)(param_1 + 0x2c) != (int)param_4)) ||
     (((*(int *)(param_1 + 0x30) != iVar2 || (*(int *)(param_1 + 0x24) != (int)param_5)) ||
      ((*(int *)(param_1 + 0x28) != iVar1 || (*(int *)(param_1 + 0x34) != param_6)))))) {
    *(int *)(param_1 + 0x20) = param_3;
    *(int *)(param_1 + 0x2c) = (int)param_4;
    *(int *)(param_1 + 0x30) = iVar2;
    *(int *)(param_1 + 0x24) = (int)param_5;
    *(int *)(param_1 + 0x28) = iVar1;
    *(int *)(param_1 + 0x34) = param_6;
    *(longlong *)(param_1 + 0x58) = param_2;
  }
  return;
}



// FUNCTION 14622724a FUN_14622724a body=323 status=ok
// SIG undefined FUN_14622724a(void)

undefined4 * FUN_14622724a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146227410(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14622738e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1462274f8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622738e FUN_14622738e body=130 status=ok
// SIG undefined FUN_14622738e(void)

undefined8 FUN_14622738e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14982ed36((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146227410 FUN_146227410 body=231 status=ok
// SIG undefined FUN_146227410(void)

int * FUN_146227410(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1462274f8 FUN_1462274f8 body=483 status=ok
// SIG undefined FUN_1462274f8(void)

void FUN_1462274f8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1462276dc FUN_1462276dc body=649 status=ok
// SIG undefined FUN_1462276dc(void)

void FUN_1462276dc(longlong param_1,longlong param_2)

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
  if (1 < *(int *)(param_2 + 0x28)) {
    FUN_140cb2ecc(&local_30,param_2 + 0x20);
    if (local_30 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x30);
      lVar4 = FUN_140059518(param_1 + 0x44);
      if (lVar4 != 0) {
        lVar5 = FUN_14030d4a0();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          if (lVar3 == DAT_14cbd70a0) {
            FUN_146227990(param_1,local_30);
          }
          else if (lVar3 == DAT_14cbd7008) {
            FUN_146227966(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7010) {
            FUN_148e47186(param_1,local_30);
            FUN_148da826a(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7018) {
            FUN_148dacf9a(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7020) {
            FUN_148dacfc4(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7028) {
            FUN_148dacfee(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7030) {
            FUN_148dad018(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7038) {
            FUN_148dad06c(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7040) {
            FUN_148dad042(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7048) {
            FUN_148dad096(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7050) {
            FUN_148dad0c0(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7058) {
            FUN_148e46f62(param_1,local_30);
          }
          else if (lVar3 == DAT_14cbd7060) {
            FUN_148e47074(param_1,local_30);
          }
          else if (lVar3 == DAT_14cbd7068) {
            FUN_148dad16e(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7070) {
            FUN_148dad198(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7078) {
            FUN_148dad1c2(lVar4,local_30);
          }
          else if (lVar3 == DAT_14cbd7088) {
            FUN_148e47570(param_1);
          }
        }
      }
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146227966 FUN_146227966 body=41 status=ok
// SIG undefined FUN_146227966(void)

void FUN_146227966(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f0c81a();
  if (lVar1 != 0) {
    FUN_146227a64(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 146227990 FUN_146227990 body=120 status=ok
// SIG undefined FUN_146227990(void)

void FUN_146227990(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_1415866f8();
  if (cVar1 != '\0') {
    lVar2 = FUN_1462281ce(param_1,param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_1400f3ad8(param_1 + 0x44);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_146227a08(lVar3,*(undefined4 *)(lVar2 + 0x394));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146227a08 FUN_146227a08 body=91 status=ok
// SIG undefined FUN_146227a08(void)

void FUN_146227a08(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbad9f8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146227a64 FUN_146227a64 body=466 status=ok
// SIG undefined FUN_146227a64(void)

void FUN_146227a64(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *local_80;
  undefined4 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_145ed9116();
  if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  lVar7 = FUN_1414a727e();
  lVar8 = *(longlong *)(lVar7 + 0x110);
  if (lVar8 == 0) {
    FUN_140aa6c08(lVar7);
    lVar8 = *(longlong *)(lVar7 + 0x110);
  }
  if ((*(char *)(lVar8 + 0x29) != '\x01') || (iVar6 = FUN_146227c68(param_1,param_2), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  if ((iVar6 == 1) && (lVar8 = FUN_14127aa1c(param_1), lVar8 != 0)) {
    plVar9 = *(longlong **)(param_2 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_146227b66:
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_146227b66;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
    }
    local_60 = 0;
    if (plVar9 != (longlong *)0x0) {
      local_60 = *(undefined8 *)(param_2 + 8);
    }
    local_50 = 0;
    local_48 = 0;
    local_58 = plVar9;
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = 3;
    FUN_148ab11fe(local_50,param_1,FUN_148aa86ea,&local_60);
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xe0);
    local_70 = (undefined4 *)0x0;
    local_68 = 1;
    FUN_144a06ca8(&local_70,1,0);
    *local_70 = uVar3;
    local_88 = 0;
    local_80 = &local_50;
    FUN_145d54248(lVar8,&local_70,1,1);
    if (local_70 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
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
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146227c68 FUN_146227c68 body=125 status=ok
// SIG undefined FUN_146227c68(void)

char FUN_146227c68(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  
  cVar1 = FUN_146227ce6();
  cVar4 = '\0';
  if (cVar1 == '\0') {
    lVar3 = FUN_14127aa1c(param_1);
    cVar4 = '\x01';
    if ((lVar3 != 0) &&
       (iVar2 = FUN_1458ff3f0(lVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xe0)),
       iVar2 == 1)) {
      lVar3 = FUN_14127aa1c(param_1);
      if (lVar3 == 0) {
        bVar5 = false;
      }
      else {
        iVar2 = FUN_141543b76(lVar3);
        bVar5 = iVar2 == 1;
      }
      cVar4 = '\x02';
      if (lVar3 != 0) {
        cVar4 = (~bVar5 & 1U) * '\x02';
      }
    }
  }
  return cVar4;
}



// FUNCTION 146227ce6 FUN_146227ce6 body=394 status=ok
// SIG undefined FUN_146227ce6(void)

byte FUN_146227ce6(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x10))(param_2,&local_48);
  FUN_1446f470e(&local_38,L"SHIFT",1);
  if (local_48 == local_38) {
    lVar8 = FUN_14127aa1c(param_1);
    if (lVar8 != 0) {
      plStack_40 = (longlong *)param_2[2];
      if (plStack_40 == (longlong *)0x0) {
LAB_146227e02:
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        bVar9 = true;
      }
      else {
        iVar7 = (int)plStack_40[1];
        do {
          if (iVar7 == 0) goto LAB_146227e02;
          LOCK();
          iVar5 = (int)plStack_40[1];
          bVar9 = iVar7 == iVar5;
          if (bVar9) {
            *(int *)(plStack_40 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar9);
        local_48 = param_2[1];
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
        bVar9 = false;
      }
      plVar4 = plStack_40;
      FUN_145ed8890(*(undefined8 *)(param_1 + 0x20),local_58,0);
      param_1 = FUN_146227e72(lVar8,local_58,&local_48);
      param_1 = param_1 & 0xffffffff;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar3 = (int *)((longlong)local_50 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
      plVar1 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (!bVar9) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    }
    bVar6 = lVar8 != 0 & (byte)param_1;
  }
  else {
    bVar6 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146227e72 FUN_146227e72 body=244 status=ok
// SIG undefined FUN_146227e72(void)

ulonglong FUN_146227e72(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140b7124e(param_1,&local_30,param_2);
  FUN_140b7124e();
  uVar6 = (undefined7)((ulonglong)&local_40 >> 8);
  if (local_28 == local_38) {
    if (local_28 < 2) {
      uVar5 = CONCAT71(uVar6,1);
    }
    else {
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_30 + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)(local_40 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146227eea;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_146227f15;
        }
        if (uVar1 == 0) break;
LAB_146227eea:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
LAB_146227f15:
      uVar5 = CONCAT71(uVar6,iVar4 == 0);
    }
  }
  else {
    uVar5 = CONCAT71(uVar6,local_38 + local_28 == 1);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146227f68 FUN_146227f68 body=613 status=ok
// SIG undefined FUN_146227f68(void)

void FUN_146227f68(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = FUN_145ed8e60();
  if ((cVar4 == '\0') &&
     (((lVar6 = FUN_14127aa1c(param_1), lVar6 == 0 || (cVar4 = FUN_145ed8eb6(lVar6), cVar4 == '\0'))
      && (cVar4 = FUN_148aa8752(param_1), cVar4 != '\0')))) {
    local_50 = L"KickNetworkedPlayersMessageHeader";
    local_48 = 0x21;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"GbxSocialSubsystem";
    local_48 = 0x12;
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(local_60,local_64,&local_88,L"Kick Networked Players");
    local_50 = L"KickNetworkedPlayersMessage";
    local_48 = 0x1b;
    FUN_1446e940c(&local_88,&local_50);
    local_50 = L"GbxSocialSubsystem";
    local_48 = 0x12;
    FUN_1446e940c(local_64,&local_50);
    FUN_140208bae(&local_50,local_64,&local_88,
                  L"Joining this player will disconnect all players. Are you sure you want to continue?"
                 );
    plVar7 = *(longlong **)(param_2 + 0x10);
    if (plVar7 == (longlong *)0x0) {
LAB_1462280ef:
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_1462280ef;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
    }
    local_88 = 0;
    if (plVar7 != (longlong *)0x0) {
      local_88 = *(undefined8 *)(param_2 + 8);
    }
    local_78 = 0;
    local_70 = 0;
    local_80 = plVar7;
    FUN_1446efa72(&local_78,0,3,0x10);
    local_70 = 3;
    FUN_148ab0dfe(local_78,param_1,FUN_148aa87ba,&local_88);
    (**(code **)(*param_1 + 0x2c8))(param_1,local_60,&local_50,&local_78);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  else {
    local_90 = *(longlong *)(param_2 + 0x10);
    if (local_90 == 0) {
LAB_146227ffa:
      local_90 = 0;
    }
    else {
      iVar5 = *(int *)(local_90 + 8);
      do {
        if (iVar5 == 0) goto LAB_146227ffa;
        LOCK();
        iVar3 = *(int *)(local_90 + 8);
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(local_90 + 8) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
    }
    local_98 = 0;
    if (local_90 != 0) {
      local_98 = *(undefined8 *)(param_2 + 8);
    }
    FUN_14166c14e(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462281ce FUN_1462281ce body=736 status=ok
// SIG undefined FUN_1462281ce(void)

longlong FUN_1462281ce(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined **local_68;
  longlong *local_60;
  longlong *local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = (**(code **)(*param_1 + 0x180))();
  if ((lVar8 == 0) || (lVar12 = *(longlong *)(lVar8 + 0x178), lVar12 == 0)) {
    lVar8 = 0;
    goto LAB_146228484;
  }
  (**(code **)(*param_2 + 0x10))(param_2,&local_68);
  FUN_1446f470e(&local_80,L"SHIFT",1);
  if (local_68 == local_80) {
    plVar3 = (longlong *)param_2[2];
    if (plVar3 != (longlong *)0x0) {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_146228361;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar13 = iVar7 == iVar5;
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar13);
      local_78 = (longlong *)param_2[1];
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_70 = plVar3;
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
      goto LAB_14622825c;
    }
LAB_146228361:
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
LAB_146228369:
    lVar8 = *(longlong *)(lVar8 + 0x1f0);
    if ((lVar8 == 0) || (iVar7 = *(int *)(lVar8 + 0x40), (longlong)iVar7 == 0)) goto LAB_14622845b;
    lVar11 = *(longlong *)(lVar8 + 0x38);
    lVar10 = 0;
    do {
      lVar8 = lVar12;
      lVar4 = *(longlong *)(lVar11 + lVar10);
      lVar12 = lVar8;
      if (lVar4 != 0) {
        lVar9 = FUN_14030d4a0();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          (**(code **)(*param_2 + 0x10))(param_2,&local_88);
          FUN_145ed8890(lVar4,&local_68,local_88);
          bVar13 = true;
          if ((local_68 != (undefined **)0x0) &&
             ((cVar6 = (**(code **)*local_68)(local_68,param_2), cVar6 != '\0' &&
              (*(longlong *)(lVar4 + 0x30) != 0)))) {
            lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x398);
            bVar13 = false;
          }
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
          lVar12 = lVar8;
          if (!bVar13) break;
        }
      }
      lVar10 = lVar10 + 8;
      lVar8 = 0;
    } while ((longlong)iVar7 * 8 != lVar10);
  }
  else {
    FUN_140b6ec10(&local_78,lVar8,param_2);
LAB_14622825c:
    if (local_78 == (longlong *)0x0) goto LAB_146228369;
    iVar7 = *(int *)(lVar12 + 0x3b0);
    if ((longlong)iVar7 != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x3a8);
      lVar11 = 0;
      do {
        lVar8 = *(longlong *)(lVar12 + lVar11);
        local_68 = &PTR_FUN_14a184370;
        local_60 = local_78;
        local_58 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
          UNLOCK();
        }
        local_50 = 0;
        cVar6 = FUN_140ba41f1(lVar8 + 0x3a0,&local_68);
        local_68 = &PTR_FUN_14a184370;
        (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
        if (cVar6 != '\0') goto LAB_14622845d;
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar7 * 8 != lVar11);
    }
LAB_14622845b:
    lVar8 = 0;
  }
LAB_14622845d:
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_146228484:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1462284b0 FUN_1462284b0 body=218 status=ok
// SIG undefined FUN_1462284b0(void)

void FUN_1462284b0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  
  FUN_14166c572();
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 0x40;
  lVar4 = FUN_1402735c8();
  fVar5 = *(float *)(lVar4 + 0x614) - *(float *)(lVar4 + 0x610);
  if (1000.0 <= fVar5) {
    fVar5 = 1000.0;
  }
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  *(float *)(param_1 + 0x398) = fVar5;
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(lVar4 + 0x610);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(lVar4 + 0x60c);
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(lVar4 + 0x628);
  uVar1 = *(undefined4 *)(lVar4 + 0x634);
  uVar2 = *(undefined4 *)(lVar4 + 0x638);
  uVar3 = *(undefined4 *)(lVar4 + 0x63c);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(lVar4 + 0x630);
  *(undefined4 *)(param_1 + 0x3b4) = uVar1;
  *(undefined4 *)(param_1 + 0x3b8) = uVar2;
  *(undefined4 *)(param_1 + 0x3bc) = uVar3;
  FUN_144a787a6(param_1 + 0x3c0,lVar4 + 0x640);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(lVar4 + 0x650);
  uVar1 = *(undefined4 *)(lVar4 + 0x65c);
  uVar2 = *(undefined4 *)(lVar4 + 0x660);
  uVar3 = *(undefined4 *)(lVar4 + 0x664);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(lVar4 + 0x658);
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  FUN_144a787a6(param_1 + 1000,lVar4 + 0x668);
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(lVar4 + 0x61c);
  return;
}



// FUNCTION 14622858a FUN_14622858a body=229 status=ok
// SIG undefined FUN_14622858a(void)

void FUN_14622858a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) &&
      (lVar1 = FUN_14094c9c2(), lVar1 != 0)) &&
     ((*(longlong *)(lVar1 + 0x30) != 0 && (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0)))) {
    lVar1 = FUN_1405e654a();
    if (param_1[0x47] != 0) {
      FUN_14480f766(lVar1 + 0x30);
    }
    lVar1 = FUN_1405e654a();
    if (param_1[0x48] != 0) {
      FUN_14480f766(lVar1 + 0x48);
    }
  }
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar2 == 0) goto LAB_146228640;
    }
    if (param_1[0x45] != 0) {
      FUN_14480f766(lVar2 + 0x2e8);
    }
  }
LAB_146228640:
  param_1[0x45] = 0;
  FUN_14166cd12(param_1);
  return;
}



// FUNCTION 146228670 FUN_146228670 body=134 status=ok
// SIG undefined FUN_146228670(void)

void FUN_146228670(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_4 != 0) || (param_4 = FUN_146010909(param_3), param_4 != 0)) {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_4);
    puVar1 = (undefined8 *)
             FUN_1462286f8(param_1 + 0x10,(uint)((ulonglong)local_28 >> 0x20) ^ (uint)local_28,
                           &local_28);
    *puVar1 = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1462286f8 FUN_1462286f8 body=135 status=ok
// SIG undefined FUN_1462286f8(void)

longlong FUN_1462286f8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146010818();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_146228745;
  }
  local_30 = param_3;
  FUN_146228780(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_146228745:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x18 + 8;
}



// FUNCTION 146228780 FUN_146228780 body=275 status=ok
// SIG undefined FUN_146228780(void)

undefined4 * FUN_146228780(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14622891a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_146228894(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146228a02(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146228894 FUN_146228894 body=132 status=ok
// SIG undefined FUN_146228894(void)

undefined8 FUN_146228894(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

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
    iVar5 = FUN_146010818();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_148d383a2(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1462288b8;
    }
  }
  uVar6 = 0;
LAB_1462288b8:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622891a FUN_14622891a body=231 status=ok
// SIG undefined FUN_14622891a(void)

int * FUN_14622891a(longlong *param_1,int *param_2)

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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146228a02 FUN_146228a02 body=445 status=ok
// SIG undefined FUN_146228a02(void)

void FUN_146228a02(longlong *param_1)

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



// FUNCTION 146228bc0 FUN_146228bc0 body=757 status=ok
// SIG undefined FUN_146228bc0(void)

void FUN_146228bc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 **local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_2;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_140b359ca(local_a8);
  FUN_1448729ea(param_1 + 0x78,local_78,local_a8);
  uVar6 = FUN_144a7b41a(local_78,0);
  uVar4 = FUN_146228eb6();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,0);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_78;
    if (0x18 < local_60) {
      pppuVar5 = (undefined8 ***)local_78[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  lVar1 = *param_2;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_140b359ca(local_a8,param_2);
  FUN_1448729ea(param_1 + 200,local_78,local_a8);
  uVar6 = FUN_144a7b41a(local_78,0);
  uVar4 = FUN_146228eb6();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,1);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_78;
    if (0x18 < local_60) {
      pppuVar5 = (undefined8 ***)local_78[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  lVar1 = *param_2;
  local_a8[0] = 0;
  local_80 = 0;
  FUN_140b359ca(local_a8,param_2);
  FUN_1448729ea(param_1 + 0x118,local_78,local_a8);
  uVar6 = FUN_144a7b41a(local_78,0);
  uVar4 = FUN_146228eb6();
  lVar2 = *(longlong *)(lVar1 + 0x200);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar2,uVar4,2);
  }
  FUN_1407cace8(lVar1,uVar4,uVar6,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = local_78;
    if (0x18 < local_60) {
      pppuVar5 = (undefined8 ***)local_78[0];
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  FUN_144a5ac3a(local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146228eb6 FUN_146228eb6 body=57 status=ok
// SIG undefined FUN_146228eb6(void)

void FUN_146228eb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4610 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4610 = FUN_14171c317(FUN_1465be208,uVar1,L"EAtt_GrenadeBehaviorPayloadSingularity");
  }
  return;
}



// FUNCTION 146228ef0 FUN_146228ef0 body=133 status=ok
// SIG undefined FUN_146228ef0(void)

void FUN_146228ef0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40);
  if (lVar1 != 0) {
    local_38 = &LAB_148a878f2;
    local_30 = 0;
    FUN_148a87770(local_28);
    FUN_1459564ca(lVar1,local_28);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146228f7e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146228f7e FUN_146228f7e body=560 status=ok
// SIG undefined FUN_146228f7e(void)

void FUN_146228f7e(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 *local_38;
  int local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(lVar4 + 0x6c) != -1) {
    FUN_141551f14(param_1 + 0x28,&local_38);
    iVar8 = *(int *)(lVar4 + 0x68);
    if (iVar8 == local_30) {
      if (iVar8 < 2) {
        bVar12 = true;
      }
      else {
        lVar10 = 0;
        while( true ) {
          uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x60) + lVar10);
          uVar7 = (uint)uVar2;
          uVar3 = *(ushort *)(local_38 + lVar10);
          uVar11 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_146228ffb;
            }
            iVar8 = uVar7 - uVar11;
            goto LAB_146229026;
          }
          if (uVar2 == 0) break;
LAB_146228ffb:
          lVar10 = lVar10 + 2;
        }
        iVar8 = 0;
LAB_146229026:
        bVar12 = iVar8 == 0;
      }
    }
    else {
      bVar12 = local_30 + iVar8 == 1;
    }
    if (local_38 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar12) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x48))
                (*(longlong **)(param_1 + 0x20),&local_38,*(undefined1 *)(param_1 + 0x62));
      plVar6 = (longlong *)CONCAT44(uStack_2c,local_30);
      if (plVar6 == (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0x20);
        *(undefined1 **)(lVar4 + 0x40) = local_38;
        plVar9 = *(longlong **)(lVar4 + 0x48);
        if (plVar9 != (longlong *)0x0) {
          *(undefined8 *)(lVar4 + 0x48) = 0;
LAB_146229142:
          LOCK();
          plVar6 = plVar9 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
joined_r0x00014622917b:
            if (iVar8 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        lVar4 = *(longlong *)(param_1 + 0x20);
        *(undefined1 **)(lVar4 + 0x40) = local_38;
        plVar9 = *(longlong **)(lVar4 + 0x48);
        if (plVar6 == plVar9) {
          LOCK();
          plVar9 = plVar6 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
            plVar9 = plVar6;
            goto joined_r0x00014622917b;
          }
        }
        else {
          *(longlong **)(lVar4 + 0x48) = plVar6;
          if (plVar9 != (longlong *)0x0) goto LAB_146229142;
        }
      }
      plVar6 = (longlong *)CONCAT44(uStack_2c,local_30);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x40);
      local_38 = &LAB_145f9d9ea;
      local_30 = 0;
      FUN_1462291b0(local_48,param_1);
      FUN_14166d06a(uVar5,param_1 + 0x28,local_48);
      goto LAB_1462290db;
    }
  }
  *(undefined4 *)(param_1 + 0x158) = 3;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_1462290db:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462291b0 FUN_1462291b0 body=428 status=ok
// SIG undefined FUN_1462291b0(void)

longlong * FUN_1462291b0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146229290:
    *puVar5 = &PTR_LAB_14b4edb10;
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
    *puVar5 = &PTR_FUN_14b4e9c40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146229290;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4edb10;
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
    *puVar5 = &PTR_FUN_14b4e9c40;
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



// FUNCTION 146229368 FUN_146229368 body=1080 status=ok
// SIG undefined FUN_146229368(void)

undefined8 FUN_146229368(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined8 ***local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_c0;
  longlong **local_b8;
  undefined1 local_ac [4];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((cVar5 != '\0') && (lVar12 = *(longlong *)(param_1 + 1000), lVar12 != 0)) {
    lVar2 = param_1 + 0x378;
    if (*(longlong *)(param_1 + 0x378) == 0) {
      local_e0 = (longlong *)FUN_14001cc68(0x38,0x10);
      local_e0[1] = (longlong)&DAT_100000001;
      *local_e0 = (longlong)&PTR_FUN_14b403910;
      local_e8 = local_e0 + 2;
      local_e0[2] = (longlong)&PTR_FUN_14b162f88;
      local_e0[3] = lVar12;
      local_e0[4] = 0;
      local_e0[5] = 0;
      local_e0[6] = 0;
      FUN_1457861ac(&local_a8);
      FUN_14029d0b6(lVar2,&local_a8);
      plVar3 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_a0 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_e0 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_e0)(local_e0);
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
    lVar12 = FUN_1412ba9fc(lVar2);
    *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(param_1 + 1000);
    plVar3 = (longlong *)(param_1 + 0x390);
    FUN_1458d8f40(*(undefined8 *)(param_1 + 0x390),*(undefined4 *)(param_1 + 0x398));
    *(undefined4 *)(param_1 + 0x398) = 0;
    if (*(int *)(param_1 + 0x39c) == 1) {
      iVar11 = 0;
      uVar7 = 1;
    }
    else {
      FUN_1488663ec(plVar3);
      iVar11 = *(int *)(param_1 + 0x398);
      uVar7 = *(uint *)(param_1 + 0x39c);
    }
    *(uint *)(param_1 + 0x398) = iVar11 + 1U;
    if (uVar7 < iVar11 + 1U) {
      FUN_14886648e(plVar3,iVar11);
    }
    FUN_1401f3da4((longlong)iVar11 * 0x18 + *plVar3,lVar2);
  }
  cVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*param_2 + 8))(param_2), cVar5 != '\0')) {
    uVar9 = (**(code **)(*param_2 + 0x28))(param_2);
    uVar9 = FUN_144a06846(uVar9,&DAT_14cb7da10);
    plVar10 = (longlong *)FUN_1412446d2(uVar9);
    plVar3 = plVar10 + 3;
    local_a8 = (longlong *)&DAT_100000000;
    local_98 = 0xffffffff;
    local_90 = 0;
    iVar11 = 0;
    local_a0 = plVar3;
    if ((int)plVar10[6] != 0) {
      FUN_1449c0562(&local_a8);
      iVar11 = (int)plVar10[6];
    }
    local_d0 = local_98;
    uVar9 = local_d0;
    local_c8 = local_90;
    local_c4 = local_8c;
    local_e0 = local_a8;
    local_d8 = local_a0;
    local_d0._4_4_ = (int)((ulonglong)local_98 >> 0x20);
    iVar8 = local_d0._4_4_;
    local_e8 = plVar10;
    if ((local_d0._4_4_ != iVar11) || (local_d0 = uVar9, local_a0 != plVar3)) {
      do {
        local_d0 = uVar9;
        local_100 = *local_e8;
        local_58 = 0;
        local_50 = 0;
        FUN_140785e92(local_70,param_2,local_100 + (longlong)iVar8 * 0x40 + 0x28);
        local_f8 = local_70;
        if (local_50 == 0) {
          bVar6 = 0;
        }
        else {
          lVar12 = local_100 + (longlong)iVar8 * 0x40;
          local_100 = param_1 + 0x208;
          FUN_140c5894c(&local_a8,local_70);
          FUN_1447325ac(lVar12,local_f0,1);
          local_c0 = local_f0;
          local_b8 = &local_a8;
          FUN_140ff1448(local_100,local_ac,&local_c0,0);
          FUN_144a2da94(&local_a8);
          bVar6 = local_50;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
        if (pcVar4 != (code *)0x0) {
          if (0x18 < local_58) {
            local_f8 = local_70[0];
          }
          (*pcVar4)(local_f8);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70[0]);
        }
        local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
        FUN_1449c0562(&local_e0);
        iVar8 = local_d0._4_4_;
        uVar9 = local_d0;
      } while (((local_d0._4_4_ != iVar11) || (local_d8 != plVar3)) || (local_e8 != plVar10));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1462297a2 FUN_1462297a2 body=147 status=ok
// SIG undefined FUN_1462297a2(void)

void FUN_1462297a2(longlong param_1,int param_2)

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



// FUNCTION 146229836 FUN_146229836 body=140 status=ok
// SIG undefined FUN_146229836(void)

bool FUN_146229836(longlong param_1,undefined4 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462298c4 FUN_1462298c4 body=132 status=ok
// SIG undefined FUN_1462298c4(void)

void FUN_1462298c4(void)

{
  undefined2 *puVar1;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400b22c2(&local_18,"LevelUp");
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146229be8 FUN_146229be8 body=79 status=ok
// SIG undefined FUN_146229be8(void)

int FUN_146229be8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x5e8))();
  if (lVar1 != 0) {
    lVar2 = FUN_144a7b4ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(byte *)(lVar1 + 0xce4) != 0) {
        return *(byte *)(lVar1 + 0xce4) - 1;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146229c38 FUN_146229c38 body=406 status=ok
// SIG undefined FUN_146229c38(void)

void FUN_146229c38(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146229de2(param_1 + 0x2370);
  if (*(longlong *)(param_1 + -0xab0) != 0) {
    lVar4 = FUN_144a7b4ca();
    if ((((*(longlong *)(param_1 + -0xab0) != 0) && (lVar4 != 0)) &&
        (lVar5 = *(longlong *)(*(longlong *)(param_1 + -0xab0) + 0x10), lVar5 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
  uVar3 = FUN_1401cb356();
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar2 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e02020;
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
  *local_40 = &PTR_FUN_14b995170;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_1 + -0xe48);
  puVar2[4] = param_1 + -0xe48;
  local_48 = 0;
  FUN_1405f67fc(uVar3,local_30,&local_40,
                L"AOakPlayerController.OnChannelWaitingToTransmitProfileData");
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146229de2 FUN_146229de2 body=124 status=ok
// SIG undefined FUN_146229de2(void)

void FUN_146229de2(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146229e60 FUN_146229e60 body=65 status=ok
// SIG undefined FUN_146229e60(void)

void FUN_146229e60(longlong *param_1)

{
  *(short *)((longlong)param_1 + 0x672) = (short)param_1[0xce];
  (**(code **)(*param_1 + 0xdb8))();
  if (param_1[0x89] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146229e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd60))(param_1);
  return;
}



// FUNCTION 146229ea2 FUN_146229ea2 body=195 status=ok
// SIG undefined FUN_146229ea2(void)

void FUN_146229ea2(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  undefined1 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_28 = (undefined1 *)0x0;
  local_20 = 0x1800000000;
  FUN_146229f66(param_1,local_e8);
  if (0 < (int)local_20) {
    lVar4 = 0;
    iVar2 = (int)local_20;
    do {
      puVar3 = local_28;
      if (local_28 == (undefined1 *)0x0) {
        puVar3 = local_e8;
      }
      plVar1 = *(longlong **)(puVar3 + lVar4 * 8);
      if (plVar1[0x8c] == 0) {
        (**(code **)(*plVar1 + 0x420))(plVar1,0);
        iVar2 = (int)local_20;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  if (local_28 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146229f66 FUN_146229f66 body=135 status=ok
// SIG undefined FUN_146229f66(void)

void FUN_146229f66(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_147ca72d8(param_2);
  }
  local_20 = FUN_14117d122();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_146229fee(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146229fee FUN_146229fee body=206 status=ok
// SIG undefined FUN_146229fee(void)

void FUN_146229fee(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14622a03c;
    }
  }
  lVar2 = 0;
LAB_14622a03c:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14622a0d2(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622a0d2 FUN_14622a0d2 body=477 status=ok
// SIG undefined FUN_14622a0d2(void)

void FUN_14622a0d2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar6 = *param_2;
        if ((lVar6 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_14622a1ac:
          lVar5 = FUN_144a78d6a();
          if ((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_14622a258;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar7 = lVar6;
          }
        }
        else {
          if (lVar6 != 0) goto LAB_14622a1ac;
LAB_14622a258:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_147ca7512(param_3,iVar3);
          }
          lVar6 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar6 = param_3;
          }
          *(longlong *)(lVar6 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622a2b0 FUN_14622a2b0 body=603 status=ok
// SIG undefined FUN_14622a2b0(void)

void FUN_14622a2b0(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (param_2 == 0 || (param_3 & 2) == 0) {
    return;
  }
  lVar4 = param_1 + 0x30;
  lVar2 = FUN_1401fe4bc(lVar4);
  if (lVar2 == 0) {
    return;
  }
  plVar8 = *(longlong **)(param_2 + 0x1c8);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  lVar2 = FUN_1401fe4bc(lVar4);
  if (lVar2 != 0) {
    lVar3 = FUN_144a85a6c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      plVar5 = (longlong *)FUN_14579bcd6(param_2);
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      if (*(char *)(param_1 + 0x80) == '\x01') {
        uVar1 = (**(code **)(*plVar8 + 0x580))(plVar8);
        (**(code **)(*plVar5 + 0x730))(plVar5,uVar1);
        uVar6 = (**(code **)(*plVar8 + 0x558))(plVar8);
        (**(code **)(*plVar5 + 0x948))(plVar5,uVar6);
      }
      FUN_140f41b96(plVar5,0);
      FUN_1406547e8(plVar5,lVar2,1);
      if (0 < *(int *)(param_1 + 0x70)) {
        FUN_140d0e9ce(plVar5,param_1 + 0x68);
      }
      goto LAB_14622a3c2;
    }
  }
  lVar4 = FUN_1401fe4bc(lVar4);
  if (lVar4 == 0) {
    return;
  }
  lVar2 = FUN_1406d0862();
  if (*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30) {
    return;
  }
  plVar5 = (longlong *)FUN_140995b6b(param_2);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar1 = (**(code **)(*plVar8 + 0x580))(plVar8);
    (**(code **)(*plVar5 + 0x730))(plVar5,uVar1);
    uVar6 = (**(code **)(*plVar8 + 0x558))(plVar8);
    (**(code **)(*plVar5 + 0x948))(plVar5,uVar6);
  }
  FUN_140f41b96(plVar5,0);
  (**(code **)(*plVar5 + 0xa78))(plVar5,lVar4);
LAB_14622a3c2:
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_14045627c(plVar8,0,1);
  }
  FUN_140486fc4(plVar5,plVar8,*(undefined8 *)(param_1 + 0x78));
  FUN_140b506a4(plVar5);
  (**(code **)(*plVar5 + 0x2a8))(plVar5,0);
  uVar6 = FUN_1408e1156();
  plVar7 = (longlong *)FUN_144718840(param_2,uVar6);
  if (plVar7 != (longlong *)0x0) {
    lVar4 = FUN_14081cebe();
    if ((*(int *)(plVar8[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      plVar8 = (longlong *)0x0;
    }
    lVar4 = (**(code **)(*plVar7 + 0xb8))(plVar7,plVar8);
    if (lVar4 != 0) {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        *(byte *)(lVar4 + 0x78) = *(byte *)(lVar4 + 0x78) | 0x10;
      }
      FUN_14166d440(lVar4,plVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14622a50c FUN_14622a50c body=438 status=ok
// SIG undefined FUN_14622a50c(void)

ulonglong FUN_14622a50c(undefined8 param_1,undefined2 **param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined7 uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14094a6a4(&local_38,param_2,0);
  cVar1 = FUN_14622a6c4(&local_38);
  if (cVar1 == '\0') {
    puVar6 = local_38;
    if (local_30 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_40,puVar6,1);
    uVar3 = FUN_144a7a812();
    local_70 = 0;
    local_78 = 0;
    lVar4 = FUN_140be85e0(uVar3,0,local_40,0);
    uVar7 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    if (lVar4 == 0) {
      uVar2 = FUN_14166d522(&local_38,0,1);
      uVar7 = (ulonglong)uVar2;
    }
    puVar6 = local_38;
    if ((&local_38 != param_2) && ((char)uVar7 != '\0')) {
      *(int *)(param_2 + 1) = local_30;
      uVar8 = (undefined7)(uVar7 >> 8);
      if (local_30 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        uVar7 = CONCAT71(uVar8,1);
      }
      else {
        FUN_1446dd670(param_2,local_30);
        uVar7 = CONCAT71(uVar8,1);
        if (local_30 != 0) {
          memcpy(*param_2,puVar6,(longlong)local_30 * 2);
        }
      }
    }
  }
  else {
    FUN_1446f470e(&local_48,L"AssetRegistry",1);
    uVar3 = FUN_144a52528();
    plVar5 = (longlong *)FUN_1402c9134(uVar3,local_48,&local_50,1);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5);
    local_60 = local_38;
    local_58 = local_30 + -1;
    if (local_30 == 0) {
      local_58 = 0;
    }
    (**(code **)(*plVar5 + 0xf0))(plVar5,&local_50);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_50 != 0);
    if (local_50 != 0) {
      FUN_1400348e2(&local_50,param_2);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14622a6c4 FUN_14622a6c4 body=51 status=ok
// SIG undefined FUN_14622a6c4(void)

ulonglong FUN_14622a6c4(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  iVar1 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar1 - 1U);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  if (iVar1 != 0 && iVar1 - 1U != 0) {
    iVar1 = (int)uVar2;
    lVar3 = 0;
    do {
      bVar4 = *(short *)(*param_1 + lVar3) != 0x2f;
      uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar4);
      if (!bVar4) {
        return uVar2;
      }
      lVar3 = lVar3 + 2;
    } while ((longlong)iVar1 * 2 != lVar3);
    return uVar2;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 14622a6f8 FUN_14622a6f8 body=264 status=ok
// SIG undefined FUN_14622a6f8(void)

undefined8 * FUN_14622a6f8(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = FUN_14479d2ce(param_1 + 1);
  if (lVar2 == 0) {
    FUN_14020fad6(param_2,L"BadEnum");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  if (param_1 != (undefined8 *)0x0) {
    do {
      FUN_1401cfad2(lVar2,&local_50,*param_1);
      if ((char)param_3 == '\x02') {
        iVar1 = local_48 + -1;
        if (local_48 == 0) {
          iVar1 = 0;
        }
        FUN_1402980a2(param_2,local_50,iVar1);
      }
      else {
        puVar3 = &DAT_149dfb77a;
        if (local_48 != 0) {
          puVar3 = local_50;
        }
        FUN_14622a803(param_2,puVar3,param_1 + 3,param_3);
      }
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    } while (((char)param_3 == '\x01') &&
            (param_1 = (undefined8 *)param_1[5], param_1 != (undefined8 *)0x0));
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14622a803 FUN_14622a803 body=851 status=ok
// SIG undefined FUN_14622a803(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14622a803(longlong param_1,wchar_t *param_2,undefined8 *param_3,char param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  undefined1 auStack_1068 [32];
  wchar_t *local_1048;
  wchar_t *local_1040;
  wchar_t *local_1038;
  char local_1030;
  wchar_t local_1028 [2048];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1068;
  local_1048 = local_1028;
  local_1030 = '\0';
  local_1038 = (wchar_t *)&local_28;
  if (param_4 == '\x01') {
    pwVar3 = local_1048;
    if (1 < *(int *)(param_1 + 8)) {
      pwVar3 = local_1028 + 2;
      local_1028[0] = L',';
      local_1028[1] = L' ';
    }
    local_1040 = pwVar3 + 1;
    *pwVar3 = L'(';
    if (local_1038 <= pwVar3 + 8) {
      FUN_140213274(&local_1048,7);
    }
    local_1040[3] = L'u';
    local_1040[4] = L'l';
    local_1040[5] = L't';
    local_1040[6] = L'=';
    *(undefined1 **)local_1040 = &DAT_75007300650052;
    local_1040 = local_1040 + 7;
    if (param_2 == (wchar_t *)0x0) {
      sVar2 = 0;
    }
    else {
      sVar2 = wcslen(param_2);
    }
    FUN_1449668a2(&local_1048,param_2,sVar2);
    if (local_1038 <= local_1040 + 0x10) {
      FUN_140213274(&local_1048,0x10);
    }
    builtin_wcsncpy(local_1040,L", ErrorContext=\"",0x10);
    local_1040 = local_1040 + 0x10;
    if (*(int *)(param_3 + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*param_3;
    }
    if (pwVar3 == (wchar_t *)0x0) {
      sVar2 = 0;
    }
    else {
      sVar2 = wcslen(pwVar3);
    }
    FUN_1449668a2(&local_1048,pwVar3,sVar2);
    pwVar3 = local_1040;
    if (local_1038 <= local_1040 + 1) {
      FUN_140213274(&local_1048,1);
      pwVar3 = local_1040;
    }
    local_1040 = pwVar3 + 1;
    *pwVar3 = L'\"';
    if (local_1038 <= pwVar3 + 2) {
      FUN_140213274(&local_1048,1);
    }
    *local_1040 = L')';
  }
  else {
    builtin_wcsncpy(local_1028,L"Result=",7);
    local_1040 = local_1028 + 7;
    if (param_2 == (wchar_t *)0x0) {
      uVar1 = 0;
    }
    else {
      sVar2 = wcslen(param_2);
      uVar1 = (int)sVar2;
    }
    FUN_1449668a2(&local_1048,param_2,uVar1);
    if (local_1038 <= local_1040 + 0x10) {
      FUN_140213274(&local_1048,0x10);
    }
    builtin_wcsncpy(local_1040,L", ErrorContext=\"",0x10);
    local_1040 = local_1040 + 0x10;
    if (*(int *)(param_3 + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*param_3;
    }
    if (pwVar3 == (wchar_t *)0x0) {
      uVar1 = 0;
    }
    else {
      sVar2 = wcslen(pwVar3);
      uVar1 = (int)sVar2;
    }
    FUN_1449668a2(&local_1048,pwVar3,uVar1);
    if (local_1038 <= local_1040 + 1) {
      FUN_140213274(&local_1048,1);
    }
    *local_1040 = L'\"';
  }
  pwVar3 = local_1048;
  local_1040 = local_1040 + 1;
  *local_1040 = L'\0';
  sVar2 = wcslen(local_1048);
  FUN_1400020e8(param_1,pwVar3,sVar2 & 0xffffffff);
  if (local_1030 == '\x01') {
    FUN_1400020a8(local_1048);
  }
  if ((local_28 ^ (ulonglong)auStack_1068) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622ab58 FUN_14622ab58 body=171 status=ok
// SIG undefined FUN_14622ab58(void)

bool FUN_14622ab58(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622ac04 FUN_14622ac04 body=139 status=ok
// SIG undefined FUN_14622ac04(void)

void FUN_14622ac04(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14158cbd4();
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_40 = param_1;
    FUN_14622ac90(local_38,param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = FUN_14479d2ce(param_1 + 0x30);
    FUN_14119d8d9(uVar3,uVar1,param_1 + 0x50,local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622ac90 FUN_14622ac90 body=422 status=ok
// SIG undefined FUN_14622ac90(void)

longlong * FUN_14622ac90(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14622ad6a:
    *puVar3 = &PTR_LAB_14b4f06a0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f0630;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14622ad6a;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4f06a0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f0630;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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



// FUNCTION 14622ae36 FUN_14622ae36 body=158 status=ok
// SIG undefined FUN_14622ae36(void)

bool FUN_14622ae36(longlong param_1,undefined8 param_2)

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



// FUNCTION 14622aed6 FUN_14622aed6 body=414 status=ok
// SIG undefined FUN_14622aed6(void)

undefined4 * FUN_14622aed6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14622b076(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar12 = puVar2[1];
  local_38[1] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  lVar12 = puVar3[1];
  local_38[3] = lVar12;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 4) = *(undefined4 *)(puVar3 + 2);
  *(undefined4 *)(local_38 + 5) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar8 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar8 = (**(code **)(*plVar4 + 0x40))();
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
  cVar7 = FUN_14622b164(param_1,uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x2c) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 5) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_14622b268(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622b076 FUN_14622b076 body=237 status=ok
// SIG undefined FUN_14622b076(void)

int * FUN_14622b076(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 14622b164 FUN_14622b164 body=259 status=ok
// SIG undefined FUN_14622b164(void)

undefined8 FUN_14622b164(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar14 = FUN_1461bd7ca(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar14 = FUN_1461bd7ca(param_1);
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
    if (iVar14 != -1) {
      lVar5 = *param_1;
      lVar16 = (longlong)iVar14 * 0x30;
      FUN_145c7dde4(lVar5 + lVar16);
      uVar6 = *(undefined4 *)param_3;
      uVar7 = *(undefined4 *)((longlong)param_3 + 4);
      uVar8 = *(undefined4 *)(param_3 + 1);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar10 = *(undefined4 *)(param_3 + 2);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar12 = *(undefined4 *)(param_3 + 3);
      uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(undefined8 *)(lVar5 + 0x20 + lVar16) = param_3[4];
      puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar16);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(lVar5 + lVar16);
      *puVar3 = uVar6;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      FUN_1461bda14(param_1,*param_4);
      *param_4 = iVar14;
      uVar15 = 1;
      goto LAB_14622b18c;
    }
  }
  uVar15 = 0;
LAB_14622b18c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622b268 FUN_14622b268 body=504 status=ok
// SIG undefined FUN_14622b268(void)

void FUN_14622b268(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x30;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x2c) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x28) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14622b462 FUN_14622b462 body=390 status=ok
// SIG undefined FUN_14622b462(void)

void FUN_14622b462(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [4];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_144a53f06();
  local_40 = param_1;
  if ((cVar1 == '\0') || (DAT_14c82b500 == 0)) {
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_149fc9f50;
    local_68[0] = (code *)&LAB_142add8b6;
    uStack_38 = param_3;
    FUN_146ff0726(local_68);
  }
  else {
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_149fc9ef0;
    local_68[0] = FUN_142add068;
    uStack_38 = param_2;
    uVar2 = FUN_1405d8a54(1);
    *(undefined8 *)(param_1 + 0xe30) = uVar2;
    *(int *)(param_1 + 0xe28) = *(int *)(param_1 + 0xe28) + 1;
    local_a8[0] = (code *)0x0;
    local_98 = (longlong *)FUN_14001cc68(0x50,0x10);
    *local_98 = (longlong)&PTR_FUN_149fc9f10;
    local_98[2] = (longlong)FUN_142add068;
    local_98[4] = 0;
    local_98[6] = (longlong)&PTR_LAB_149fc9ef0;
    *(undefined4 *)(local_98 + 7) = (undefined4)local_40;
    *(undefined4 *)((longlong)local_98 + 0x3c) = local_40._4_4_;
    *(undefined4 *)(local_98 + 8) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)local_98 + 0x44) = uStack_38._4_4_;
    if (local_98 + 2 != (longlong *)0x0) {
      local_a8[0] = FUN_142add196;
    }
    FUN_14166ea34(local_a8,local_68);
    if (local_a8[0] != (code *)0x0) {
      plVar3 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar3 = local_88;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (local_68[0] != (code *)0x0) {
    pppuVar4 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar4 = &local_48;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14622b5ea FUN_14622b5ea body=397 status=ok
// SIG undefined FUN_14622b5ea(void)

void FUN_14622b5ea(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_1447210f0();
  if (((lVar5 != 0) && (DAT_14cb0d2b0 != 0)) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
    lVar8 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
      if (*(longlong *)(lVar9 + 0x360) == lVar5) {
        if (lVar9 != 0) {
          lVar9 = lVar9 + 0x160;
          FUN_14622b792(lVar9,L"mode",0,&DAT_14c872af8);
          FUN_14622b792(lVar9,L"team",0,&DAT_14c872af8);
          FUN_14622b792(lVar9,L"travelstation",0,&DAT_14c872af8);
          FUN_14622b792(lVar9,L"TimeSliced",0,&DAT_14c872af8);
        }
        break;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
  }
  FUN_14166ed1e(param_1,param_2,param_3);
  uVar6 = FUN_1447210f0(param_1);
  FUN_1410d53f0(&local_40,uVar6);
  if (local_38 != (longlong *)0x0) {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_38;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_40 != 0) {
        FUN_14622b778(local_40,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14622b778 FUN_14622b778 body=26 status=ok
// SIG undefined FUN_14622b778(void)

void FUN_14622b778(longlong param_1)

{
  FUN_14160980c();
  *(undefined1 *)(param_1 + 200) = 1;
  return;
}



// FUNCTION 14622b792 FUN_14622b792 body=449 status=ok
// SIG undefined FUN_14622b792(void)

void FUN_14622b792(longlong param_1,wchar_t *param_2,wchar_t *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  size_t sVar7;
  undefined2 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_4;
  local_68 = param_3;
  if (((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) &&
     (0 < (longlong)*(int *)(param_1 + 0x50))) {
    plVar16 = (longlong *)(param_1 + 0x48);
    uVar15 = (longlong)*(int *)(param_1 + 0x50);
    do {
      uVar1 = uVar15 - 1;
      lVar9 = *plVar16;
      sVar7 = wcslen(param_2);
      iVar11 = *(int *)(lVar9 + 8 + uVar1 * 0x10);
      puVar8 = &DAT_149dfb77a;
      iVar13 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar13 = 0;
      }
      else {
        puVar8 = *(undefined2 **)(lVar9 + uVar1 * 0x10);
      }
      if ((int)sVar7 < iVar13) {
        iVar13 = (int)sVar7;
      }
      if (iVar13 < 1) {
        iVar13 = 0;
      }
      FUN_14006620a(&local_58,puVar8,iVar13);
      puVar8 = local_58;
      if (local_50 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      lVar9 = 0;
      while( true ) {
        uVar2 = *(ushort *)((longlong)puVar8 + lVar9);
        uVar10 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)param_2 + lVar9);
        uVar14 = (uint)uVar3;
        if (uVar2 != uVar3) {
          if ((uVar3 | uVar2) < 0x80) {
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14622b85f;
          }
          iVar11 = uVar10 - uVar14;
          goto LAB_14622b896;
        }
        if (uVar2 == 0) break;
LAB_14622b85f:
        lVar9 = lVar9 + 2;
      }
      iVar11 = 0;
LAB_14622b896:
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = DAT_14c872ce0;
      if (iVar11 == 0) {
        pwVar12 = local_68;
        if (local_68 == (wchar_t *)0x0) {
          pwVar12 = L"DefaultPlayer";
        }
        FUN_1446f470e(&local_60,param_2,1);
        cVar6 = FUN_14622b954(uVar5,pwVar12,local_60,local_70);
        if (cVar6 != '\0') {
          FUN_140d6d8de(DAT_14c872ce0,0,local_70);
        }
        FUN_14101da94(plVar16,uVar1 & 0xffffffff);
        FUN_140b12644(plVar16);
      }
      bVar4 = 1 < uVar15;
      uVar15 = uVar1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622b954 FUN_14622b954 body=155 status=ok
// SIG undefined FUN_14622b954(void)

byte FUN_14622b954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_4 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_4;
  }
  FUN_140056680(local_38,puVar3);
  lVar2 = FUN_14052bcbc(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  bVar1 = (byte)local_38[0];
  if (lVar2 != 0) {
    bVar1 = FUN_14622b9f0(lVar2,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 != 0 & bVar1;
}



// FUNCTION 14622b9f0 FUN_14622b9f0 body=546 status=ok
// SIG undefined FUN_14622b9f0(void)

undefined8 FUN_14622b9f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  undefined4 uStack_7c;
  longlong local_70;
  longlong local_58;
  longlong *local_50;
  undefined2 **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_3;
  FUN_140056680(&local_88);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  puVar9 = local_88;
  if (local_80 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  uVar12 = 0;
  uVar8 = (ulonglong)(local_80 - 1);
  if (local_80 == 0) {
    uVar8 = uVar12;
  }
  uVar3 = FUN_144a49b4a(uVar8,puVar9);
  iVar4 = FUN_14052bbf0(param_1,uVar3,&local_88);
  if (iVar4 != -1) {
    uVar12 = (longlong)iVar4 * 0xc0 + *param_1;
  }
  plVar11 = (longlong *)(uVar12 + 0x10);
  if (uVar12 == 0) {
    plVar11 = (longlong *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((plVar11 != (longlong *)0x0) && ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34))) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar7 = (uint)param_3 & 0xffff;
    plVar5 = plVar11 + 7;
    if ((longlong *)plVar11[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar11[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar11[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      uVar10 = 0;
      do {
        if (*(longlong *)(*plVar11 + (longlong)iVar4 * 0x40) == param_3) {
          FUN_1406e05e8(plVar11,param_3);
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
          lVar1 = param_1[0x1a];
          uVar10 = 1;
          if (lVar1 != 0) {
            FUN_140056680(&local_88,param_2);
            puVar9 = local_88;
            if (local_80 == 0) {
              puVar9 = &DAT_149dfb77a;
            }
            iVar4 = local_80 + -1;
            if (local_80 == 0) {
              iVar4 = 0;
            }
            uVar3 = FUN_144a49b4a(iVar4,puVar9);
            uVar6 = FUN_140d68dce(lVar1,uVar3,&local_88);
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1406e05e8(uVar6,local_58);
            FUN_1468037c6(&local_88,L"__Clear__");
            local_50 = &local_58;
            local_48 = &local_88;
            FUN_1406e1016(uVar6,local_3c);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_7c,local_80) != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + *plVar11 + 0x38);
      } while (iVar4 != -1);
      goto LAB_14622bb1b;
    }
  }
  uVar10 = 0;
LAB_14622bb1b:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 14622bc14 FUN_14622bc14 body=200 status=ok
// SIG undefined FUN_14622bc14(void)

ulonglong FUN_14622bc14(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_14622bcc0:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14622bcc0;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      pcVar5 = *(code **)(param_1 + 0x30);
      iVar7 = *(int *)(param_1 + 0x38);
      local_48 = 0;
      local_40 = 0;
      FUN_1458c75be(&local_48,param_1 + 8);
      (*pcVar5)(lVar4 + iVar7,param_2,&local_48);
    }
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14622bcde FUN_14622bcde body=79 status=ok
// SIG undefined FUN_14622bcde(void)

void FUN_14622bcde(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14092da54();
  if (param_2 != 0) {
    lVar1 = FUN_144a78c84();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_14166f272(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14622bd2e FUN_14622bd2e body=255 status=ok
// SIG undefined FUN_14622bd2e(void)

void FUN_14622bd2e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba41120;
  FUN_14622be2e(plVar5 + 2,param_2,param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x138);
  *(uint *)(param_1 + 0x138) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x13c) < iVar3 + 1U) {
    FUN_145c3a3e2((longlong *)(param_1 + 0x130),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
        return;
      }
    }
  }
  return;
}



// FUNCTION 14622be2e FUN_14622be2e body=295 status=ok
// SIG undefined FUN_14622be2e(void)

undefined8 *
FUN_14622be2e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140056680(local_58,L"ShiftSDK::Users::FindShiftIdsForThirdPartyIds");
  local_78 = &local_48;
  FUN_145c4b8a8(param_1,local_58,param_2,param_4);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ba41198;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  local_60 = 2;
  *local_68 = &PTR_LAB_149e001f0;
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
  local_68[2] = lVar2;
  *local_68 = &PTR_FUN_14ba411b0;
  local_68[3] = param_1;
  FUN_14622bf56(param_2,param_3,&local_68);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622bf56 FUN_14622bf56 body=596 status=ok
// SIG undefined FUN_14622bf56(void)

void FUN_14622bf56(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined4 local_188 [2];
  undefined8 local_180;
  undefined4 local_178;
  longlong local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  code *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code *local_100;
  undefined1 local_f8 [160];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_168 = 0;
  uStack_160 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0xa00000000;
  if ((longlong)(int)param_2[1] == 0) {
    local_188[0] = 0;
    lVar9 = 0;
  }
  else {
    lVar9 = *param_2;
    lVar8 = (longlong)(int)param_2[1] << 4;
    local_1a8 = param_1;
    local_1a0 = param_3;
    do {
      FUN_1401e7e86(local_188,lVar9);
      uVar3 = uStack_160;
      lVar6 = (longlong)(int)uStack_160;
      uVar4 = (int)uStack_160 + 1;
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar4);
      if (uStack_160._4_4_ < uVar4) {
        FUN_145c4be2a(&local_168,uVar3 & 0xffffffff);
      }
      lVar2 = local_168;
      lVar6 = lVar6 * 0x20;
      lVar7 = local_168 + lVar6;
      FUN_145c4bdca(lVar7,local_188);
      FUN_1401e7e48(local_188);
      FUN_14482e566(lVar7);
      uVar3 = local_50;
      iVar1 = *(int *)(lVar2 + 0x18 + lVar6);
      lVar6 = *(longlong *)(lVar2 + 0x10 + lVar6);
      lVar7 = (longlong)(int)local_50;
      uVar4 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar4);
      if (local_50._4_4_ < uVar4) {
        FUN_145c4beb0(local_f8,uVar3 & 0xffffffff);
      }
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_f8;
      }
      *(longlong *)(puVar5 + lVar7 * 0x10) = lVar6;
      *(longlong *)(puVar5 + lVar7 * 0x10 + 8) = iVar1 + lVar6;
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
    lVar9 = (longlong)(int)local_50;
    local_188[0] = (undefined4)param_2[1];
    param_1 = local_1a8;
    param_3 = local_1a0;
  }
  local_198 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    local_198 = local_f8;
  }
  local_190 = local_198 + lVar9 * 0x10;
  local_150 = *param_3;
  *param_3 = 0;
  local_148 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_118 = FUN_143f003f8;
  local_110 = &LAB_143f00552;
  local_108 = &LAB_143f00576;
  local_100 = FUN_143f005a8;
  local_180 = 0;
  local_178 = 0;
  local_158 = local_188[0];
  bifrost::users::findByThirdPartyId(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_180);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145c4be03(local_168,uStack_160 & 0xffffffff);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_3);
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622c1b6 FUN_14622c1b6 body=1138 status=ok
// SIG undefined FUN_14622c1b6(void)

undefined8 * FUN_14622c1b6(undefined8 *param_1)

{
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  longlong *local_90;
  undefined4 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a9716c0;
  local_58 = L"DivideByZeroWarning";
  local_50._0_4_ = 0x13;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"UKismetMathLibrary";
  local_50 = (longlong *)CONCAT44(local_50._4_4_,0x12);
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_68,local_70,local_6c,L"Divide by zero");
  local_58 = DAT_14cae6e38;
  local_50 = local_68;
  if (local_68 == (longlong *)0x0) {
    local_48 = local_60;
  }
  else {
    (**(code **)(*local_68 + 8))();
    local_48 = local_60;
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_58);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  local_58 = L"NegativeSqrtWarning";
  local_50._0_4_ = 0x13;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"UKismetMathLibrary";
  local_50 = (longlong *)CONCAT44(local_50._4_4_,0x12);
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_80,local_70,local_6c,L"Square root of negative number");
  local_58 = DAT_14cae6e40;
  local_50 = local_80;
  if (local_80 == (longlong *)0x0) {
    local_48 = local_78;
  }
  else {
    (**(code **)(*local_80 + 8))();
    local_48 = local_78;
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_58);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  local_58 = L"ZeroLengthProjectionWarning";
  local_50._0_4_ = 0x1b;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"UKismetMathLibrary";
  local_50 = (longlong *)CONCAT44(local_50._4_4_,0x12);
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_90,local_70,local_6c,L"Projection onto vector of zero length");
  local_58 = DAT_14cae6e48;
  local_50 = local_90;
  if (local_90 == (longlong *)0x0) {
    local_48 = local_88;
  }
  else {
    (**(code **)(*local_90 + 8))();
    local_48 = local_88;
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_58);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  local_58 = L"InvalidDateWarning";
  local_50._0_4_ = 0x12;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"UKismetMathLibrary";
  local_50 = (longlong *)CONCAT44(local_50._4_4_,0x12);
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_a0,local_70,local_6c,L"Invalid date warning");
  local_58 = DAT_14cae6e50;
  local_50 = local_a0;
  if (local_a0 == (longlong *)0x0) {
    local_48 = local_98;
  }
  else {
    (**(code **)(*local_a0 + 8))();
    local_48 = local_98;
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_58);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  local_58 = L"InvalidIndexConversionParameterWarning";
  local_50._0_4_ = 0x26;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"UKismetMathLibrary";
  local_50 = (longlong *)CONCAT44(local_50._4_4_,0x12);
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_b0,local_70,local_6c,L"Invalid index conversion parameter warning");
  local_58 = DAT_14cae6e58;
  local_50 = local_b0;
  if (local_b0 == (longlong *)0x0) {
    local_48 = local_a8;
  }
  else {
    (**(code **)(*local_b0 + 8))();
    local_48 = local_a8;
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_58);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622c62a FUN_14622c62a body=132 status=ok
// SIG undefined FUN_14622c62a(void)

void FUN_14622c62a(longlong param_1,int param_2)

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



// FUNCTION 14622c6ae FUN_14622c6ae body=77 status=ok
// SIG undefined FUN_14622c6ae(void)

void FUN_14622c6ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x80);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x2c8) != 0)) {
    FUN_148952308(lVar1,param_1 + 0x2c8);
  }
  FUN_14622c6fc(param_1 + 0x2c8);
  FUN_14166f856(param_1);
  return;
}



// FUNCTION 14622c6fc FUN_14622c6fc body=38 status=ok
// SIG undefined FUN_14622c6fc(void)

void FUN_14622c6fc(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  param_1[3] = DAT_14c8464f0;
  FUN_141543068(param_1 + 4);
  return;
}



// FUNCTION 14622c722 FUN_14622c722 body=158 status=ok
// SIG undefined FUN_14622c722(void)

bool FUN_14622c722(longlong param_1,undefined8 param_2)

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



// FUNCTION 14622c7cc FUN_14622c7cc body=155 status=ok
// SIG undefined FUN_14622c7cc(void)

void FUN_14622c7cc(longlong *param_1,undefined8 param_2,undefined8 param_3,wchar_t *param_4)

{
  size_t sVar1;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined1 local_60;
  longlong *local_58;
  RTL_SRWLOCK local_50;
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 1;
  local_68 = &PTR_FUN_149e051a0;
  local_58 = param_1;
  InitializeSRWLock(&local_50);
  local_48 = param_2;
  local_40 = param_4;
  if (param_4 == (wchar_t *)0x0) {
    local_38 = 0;
  }
  else {
    sVar1 = wcslen(param_4);
    local_38 = (int)sVar1;
  }
  (**(code **)(*param_1 + 0x1a8))(param_1,param_3);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622c868 FUN_14622c868 body=453 status=ok
// SIG undefined FUN_14622c868(void)

void FUN_14622c868(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_40;
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_39 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar1 = local_40;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = &local_68;
  local_68 = (undefined4)local_58;
  uStack_64 = local_58._4_4_;
  uStack_60 = (undefined4)uStack_50;
  uStack_5c = uStack_50._4_4_;
  (**(code **)(*param_1 + 0x948))(param_1,local_38,local_39,iVar1 != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622ca3a FUN_14622ca3a body=1166 status=ok
// SIG undefined FUN_14622ca3a(void)

undefined8 * FUN_14622ca3a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145887268();
  *param_1 = &PTR_FUN_14ac20140;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0xa00000006;
  *(undefined4 *)(param_1 + 0x2b) = 0x28;
  param_1[0x2c] = 0x3f747ae147ae147b;
  *(undefined4 *)(param_1 + 0x2d) = 0x43960000;
  param_1[0x2e] = 0x4120000042700000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar2 = FUN_145b5ff4c();
    lVar3 = *(longlong *)(lVar2 + 0x110);
    if (lVar3 == 0) {
      FUN_140aa6c08(lVar2);
      lVar3 = *(longlong *)(lVar2 + 0x110);
    }
    lVar2 = FUN_145a76444();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(lVar3 + 0x48) = lVar2;
    if (*(int *)(param_1 + 10) != 3) {
      FUN_1446efa72(param_1 + 9,0,3,0x10);
      *(undefined4 *)(param_1 + 10) = 3;
    }
    puVar1 = (undefined8 *)param_1[9];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar1[2] = lVar2;
    *puVar1 = &PTR_FUN_14ac25bd0;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_147f0442c;
    if (*(int *)(param_1 + 0xc) != 3) {
      FUN_1446efa72(param_1 + 0xb,0,3,0x10);
      *(undefined4 *)(param_1 + 0xc) = 3;
    }
    puVar1 = (undefined8 *)param_1[0xb];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar1[2] = lVar2;
    *puVar1 = &PTR_FUN_14ac25bd0;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_14385b6c8;
    if (*(int *)(param_1 + 0xe) != 3) {
      FUN_1446efa72(param_1 + 0xd,0,3,0x10);
      *(undefined4 *)(param_1 + 0xe) = 3;
    }
    puVar1 = (undefined8 *)param_1[0xd];
    *puVar1 = &PTR_LAB_14ac25af0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar1[2] = lVar2;
    *puVar1 = &PTR_FUN_14ac25bd0;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_147f045e8;
    if (*(int *)(param_1 + 0x32) != 3) {
      FUN_1446efa72(param_1 + 0x31,0,3,0x10);
      *(undefined4 *)(param_1 + 0x32) = 3;
    }
    puVar1 = (undefined8 *)param_1[0x31];
    *puVar1 = &PTR_LAB_14ac25cb0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar1[2] = lVar2;
    *puVar1 = &PTR_FUN_14ac25c40;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_14385bcaa;
    if (*(int *)(param_1 + 0x34) != 3) {
      FUN_1446efa72(param_1 + 0x33,0,3,0x10);
      *(undefined4 *)(param_1 + 0x34) = 3;
    }
    puVar1 = (undefined8 *)param_1[0x33];
    *puVar1 = &PTR_LAB_14a78e0f0;
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar2 == 0) {
      LOCK();
      UNLOCK();
      lVar2 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar1[2] = lVar2;
    *puVar1 = &PTR_FUN_14ac25d20;
    puVar1[3] = 0;
    FUN_14485c47a(puVar1 + 3,param_1);
    puVar1[4] = FUN_14385bd54;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) | 6;
  lVar2 = FUN_1413f6fa8();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  *(uint *)(param_1 + 0x30) = (uint)*(byte *)(lVar3 + 0x100);
  return param_1;
}



// FUNCTION 14622cec8 FUN_14622cec8 body=243 status=ok
// SIG undefined FUN_14622cec8(void)

void FUN_14622cec8(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x48;
  uVar5 = FUN_14479d2ce(lVar1);
  FUN_1459dd192(uVar5);
  cVar4 = FUN_144729dda(lVar1);
  if (cVar4 != '\0') {
    plVar6 = (longlong *)FUN_14479d2ce(lVar1);
    cVar4 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
    if ((cVar4 != '\0') && (lVar3 = *(longlong *)(param_1 + 0x50), lVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(lVar3 + 0xf4);
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(lVar3 + 0xf8);
      if (*(char *)(lVar3 + 0xf0) == '\x01') {
        FUN_14622d096(param_1,local_48);
      }
      else {
        FUN_146625222(param_1,local_48);
      }
      uVar2 = *(undefined4 *)(param_1 + 0x138);
      uVar5 = FUN_14479d2ce(lVar1);
      FUN_14622cfbc(uVar5,local_48,uVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622cfbc FUN_14622cfbc body=217 status=ok
// SIG undefined FUN_14622cfbc(void)

void FUN_14622cfbc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1447210f0(param_1);
  }
  FUN_14027ab42(&local_40,uVar5);
  if (local_38 != (longlong *)0x0) {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_38;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_40 != 0) {
        FUN_14622d1ea(local_40,param_1,param_2,param_3);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14622d096 FUN_14622d096 body=243 status=ok
// SIG undefined FUN_14622d096(void)

undefined8 * FUN_14622d096(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if (cVar1 == '\0') {
LAB_14622d16e:
    local_38 = 0;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x48);
    lVar2 = *(longlong *)(lVar2 + 0xa08);
    if (lVar2 == 0) goto LAB_14622d16e;
    lVar3 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14622d16e;
    FUN_14622d18a(lVar2 + 0x4ea0,local_98);
    if ((local_38 & 1) != 0) {
      *param_2 = local_78;
      param_2[1] = uStack_70;
      param_2[2] = local_68;
      goto LAB_14622d138;
    }
  }
  FUN_146625222(param_1,param_2);
LAB_14622d138:
  if ((local_38 & 1) != 0) {
    local_38 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622d18a FUN_14622d18a body=96 status=ok
// SIG undefined FUN_14622d18a(void)

undefined8 * FUN_14622d18a(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar1 = FUN_144729dda(param_1 + 0x50);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 0x50);
    puVar4 = &DAT_14c846480;
    if (*(longlong *)(lVar3 + 0x1c8) != 0) {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1c8) + 0x240);
    }
    puVar5 = param_2;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar2;
  return param_2;
}



// FUNCTION 14622d1ea FUN_14622d1ea body=963 status=ok
// SIG undefined FUN_14622d1ea(void)

void FUN_14622d1ea(longlong param_1,ulonglong param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  ulonglong local_60;
  ulonglong *local_58;
  longlong **local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar12 = (longlong *)(param_1 + 0x128);
  local_60 = param_2;
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    lVar11 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x168);
    }
    iVar7 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x170) - 1U & (uVar8 >> 0x10 ^ uVar8))
                              * 4);
    if (iVar7 != -1) {
      lVar11 = *plVar12;
      iVar13 = iVar7;
      do {
        if (*(ulonglong *)(lVar11 + (longlong)iVar13 * 0x20) == param_2) goto LAB_14622d4ca;
        iVar13 = *(int *)((longlong)iVar13 * 0x20 + lVar11 + 0x18);
      } while (iVar13 != -1);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 == (longlong *)0x0) {
LAB_14622d435:
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_14622d435;
      LOCK();
      iVar13 = (int)plVar2[1];
      bVar14 = iVar7 == iVar13;
      if (bVar14) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar13 = iVar7;
      }
      iVar7 = iVar13;
      UNLOCK();
    } while (!bVar14);
    local_78 = *(undefined8 *)(param_1 + 0x10);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    plStack_70 = plVar2;
    if ((int)*plVar9 == 0) {
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
  plVar9 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b3f8cb0;
  plVar2 = plVar9 + 2;
  FUN_14622d6d8(plVar2,local_60,&local_78);
  local_98 = plVar2;
  local_90 = plVar9;
  FUN_14622d638(&local_98,plVar2);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_58 = &local_60;
  local_50 = &local_88;
  local_88 = plVar2;
  local_80 = plVar9;
  FUN_14622d77a(plVar12,&local_44);
  plVar2 = local_80;
  lVar11 = *(longlong *)(*plVar12 + 8 + (longlong)local_44 * 0x20);
  plVar12 = *(longlong **)(*plVar12 + 0x10 + (longlong)local_44 * 0x20);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_80 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_70 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_14622d35b:
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0xb0) = 0;
    *(undefined8 *)(lVar11 + 0xa8) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8;
    *(undefined8 *)(lVar11 + 0x98) = DAT_14c8464e0;
    *(undefined8 *)(lVar11 + 0xa0) = uVar3;
    *(undefined1 *)(lVar11 + 0xb8) = 1;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar11 + 0x98) = *param_3;
    *(undefined4 *)(lVar11 + 0x9c) = uVar4;
    *(undefined4 *)(lVar11 + 0xa0) = uVar5;
    *(undefined4 *)(lVar11 + 0xa4) = uVar6;
    *(undefined8 *)(lVar11 + 0xa8) = *(undefined8 *)(param_3 + 4);
    *(undefined4 *)(lVar11 + 0xb0) = param_4;
  }
  lVar11 = *(longlong *)(param_1 + 0x188);
  if (lVar11 != 0) {
    lVar10 = FUN_14073fae1();
    FUN_14622d5ae(lVar11,lVar10 + 0x1f8,param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x188);
    lVar11 = FUN_14073fae1();
    FUN_1410973f2(uVar3,lVar11 + 0x200,param_4);
  }
  FUN_1410974b4(param_1);
  if (plVar12 != (longlong *)0x0) {
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
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar7 = *(int *)(lVar10 + 0x18), iVar7 != -1) {
LAB_14622d4ca:
    lVar10 = lVar11 + (longlong)iVar7 * 0x20;
    if (*(ulonglong *)(lVar11 + (longlong)iVar7 * 0x20) == param_2) goto LAB_14622d591;
  }
  lVar10 = 0;
LAB_14622d591:
  lVar11 = *(longlong *)(lVar10 + 8);
  plVar12 = *(longlong **)(lVar10 + 0x10);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  goto LAB_14622d35b;
}



// FUNCTION 14622d5ae FUN_14622d5ae body=136 status=ok
// SIG undefined FUN_14622d5ae(void)

void FUN_14622d5ae(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (lVar2 == 0) {
      local_38 = param_2;
      local_30 = param_3;
      FUN_1458952b4(param_1 + 0x920,local_24,&local_38,0);
    }
    else {
      FUN_144a083d0(&local_38,param_3);
      FUN_144a9d3f0(lVar2,lVar1,&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622d638 FUN_14622d638 body=159 status=ok
// SIG undefined FUN_14622d638(void)

void FUN_14622d638(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14622d675;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14622d675;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14622d675:
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
                    /* WARNING: Could not recover jumptable at 0x00014622d6d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14622d6d8 FUN_14622d6d8 body=161 status=ok
// SIG undefined FUN_14622d6d8(void)

undefined8 * FUN_14622d6d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined2 *)(param_1 + 5) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  FUN_14485c47a((longlong)param_1 + 0x2c);
  param_1[7] = *param_3;
  lVar1 = param_3[1];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 14622d77a FUN_14622d77a body=340 status=ok
// SIG undefined FUN_14622d77a(void)

undefined4 * FUN_14622d77a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14622d996(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14622d8d0(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14622da7c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14622d8d0 FUN_14622d8d0 body=198 status=ok
// SIG undefined FUN_14622d8d0(void)

undefined8 FUN_14622d8d0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
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
          }
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_1457f0170(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14622d996 FUN_14622d996 body=230 status=ok
// SIG undefined FUN_14622d996(void)

int * FUN_14622d996(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14622da7c FUN_14622da7c body=486 status=ok
// SIG undefined FUN_14622da7c(void)

void FUN_14622da7c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 14622dc64 FUN_14622dc64 body=86 status=ok
// SIG undefined FUN_14622dc64(void)

void FUN_14622dc64(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_141671bae();
  lVar4 = DAT_14ca84b20;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (DAT_14ca84b20 != lVar3) {
    DAT_14ca84b20 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14622dcba FUN_14622dcba body=633 status=ok
// SIG undefined FUN_14622dcba(void)

ulonglong FUN_14622dcba(longlong *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  longlong *_Dst;
  ulonglong uVar6;
  int *piVar7;
  ulonglong unaff_RBP;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar2) {
    uVar6 = (ulonglong)uVar2;
    uVar9 = uVar2;
    do {
      uVar6 = uVar6 >> 1;
      uVar10 = (uint)uVar6 + (int)uVar8;
      if (*(int *)(lVar5 + (ulonglong)uVar10 * 0x18) < (int)param_2) {
        uVar8 = (ulonglong)(uVar10 + (uVar9 & 1));
      }
      bVar3 = 1 < uVar9;
      uVar9 = (uint)uVar6;
    } while (bVar3);
  }
  if ((int)uVar2 <= (int)uVar8) {
    return 0;
  }
  if ((int)param_2 < *(int *)(lVar5 + uVar8 * 0x18)) {
    return 0;
  }
  if (lVar5 + uVar8 * 0x18 == -8) {
    return 0;
  }
  piVar4 = (int *)0x0;
  if (0 < (int)uVar2) {
    uVar8 = (ulonglong)uVar2;
    uVar9 = uVar2;
    do {
      uVar8 = uVar8 >> 1;
      uVar10 = (uint)uVar8 + (int)piVar4;
      if (*(int *)(lVar5 + (ulonglong)uVar10 * 0x18) < (int)param_2) {
        piVar4 = (int *)(ulonglong)(uVar10 + (uVar9 & 1));
      }
      bVar3 = 1 < uVar9;
      uVar9 = (uint)uVar8;
    } while (bVar3);
  }
  if ((int)piVar4 < (int)uVar2) {
    piVar1 = (int *)(lVar5 + (longlong)piVar4 * 0x18);
    piVar4 = piVar1 + 2;
    piVar7 = (int *)0x0;
    if (*piVar1 <= (int)param_2) {
      piVar7 = piVar4;
    }
  }
  else {
    piVar7 = (int *)0x0;
  }
  if (param_3 == 0) {
    uVar6 = 0;
    if (piVar7[2] < 1) {
      return 0;
    }
    if (0 < (int)uVar2) {
      uVar6 = 0;
      piVar4 = (int *)(ulonglong)uVar2;
      uVar9 = uVar2;
      do {
        piVar4 = (int *)((ulonglong)piVar4 >> 1);
        uVar10 = (uint)piVar4 + (int)uVar6;
        if (*(int *)(lVar5 + (ulonglong)uVar10 * 0x18) < (int)param_2) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar3 = 1 < uVar9;
        uVar9 = (uint)piVar4;
      } while (bVar3);
    }
    if ((int)uVar2 <= (int)uVar6) {
      return CONCAT71((int7)((ulonglong)piVar4 >> 8),1);
    }
LAB_14622ddc7:
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    uVar8 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  else {
    uVar9 = piVar7[2];
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),0 < (int)uVar9);
    if ((param_2 & 0xfd000000) != 0x5000000 && (param_2 & 0xfe000000) != 0xa000000) {
      if ((int)uVar9 < 1) {
        return 0;
      }
      uVar6 = 0;
      uVar8 = 0;
      if (**(longlong **)piVar7 != param_3) {
        return 0;
      }
      if (0 < (int)uVar2) {
        uVar6 = 0;
        uVar8 = (ulonglong)uVar2;
        uVar9 = uVar2;
        do {
          uVar8 = uVar8 >> 1;
          uVar10 = (uint)uVar8 + (int)uVar6;
          if (*(int *)(lVar5 + (ulonglong)uVar10 * 0x18) < (int)param_2) {
            uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
          }
          bVar3 = 1 < uVar9;
          uVar9 = (uint)uVar8;
        } while (bVar3);
      }
      if ((int)uVar2 <= (int)uVar6) {
        return CONCAT71((int7)(uVar8 >> 8),1);
      }
      goto LAB_14622ddc7;
    }
    if (0 < (int)uVar9) {
      _Dst = *(longlong **)piVar7;
      uVar8 = 0;
      while (*_Dst != param_3) {
        uVar8 = uVar8 + 1;
        _Dst = _Dst + 2;
        if (uVar9 == uVar8) {
          return 0;
        }
      }
      if (uVar9 - 1 != (int)uVar8) {
        memmove(_Dst,_Dst + 2,(longlong)(int)((uVar9 - 1) - (int)uVar8) << 4);
        uVar9 = piVar7[2];
      }
      piVar7[2] = uVar9 - 1;
      FUN_1467c13bc(piVar7);
      uVar9 = piVar7[2];
    }
    if (uVar9 != 0) goto LAB_14622dde8;
    uVar2 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar8 = (ulonglong)uVar2;
      uVar9 = uVar2;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar6;
        if (*(int *)(lVar5 + (ulonglong)uVar10 * 0x18) < (int)param_2) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar3 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar3);
    }
    if ((int)uVar2 <= (int)uVar6) goto LAB_14622dde8;
    uVar8 = unaff_RBP & 0xffffffff;
  }
  if ((int)param_2 < *(int *)(lVar5 + uVar6 * 0x18)) {
    return uVar8;
  }
  FUN_14622df74(param_1);
  FUN_14622df34(param_1);
LAB_14622dde8:
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14622df34 FUN_14622df34 body=63 status=ok
// SIG undefined FUN_14622df34(void)

void FUN_14622df34(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14622dfd0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14622df74 FUN_14622df74 body=92 status=ok
// SIG undefined FUN_14622df74(void)

void FUN_14622df74(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}


