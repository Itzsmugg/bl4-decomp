// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c03ce0 FUN_145c03ce0 body=88 status=ok
// SIG undefined FUN_145c03ce0(void)

void FUN_145c03ce0(longlong param_1)

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



// FUNCTION 145c03d38 FUN_145c03d38 body=77 status=ok
// SIG undefined FUN_145c03d38(void)

void FUN_145c03d38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b412d38;
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145c03d86(param_1 + 0xc);
  FUN_145c03dbe(param_1);
  return;
}



// FUNCTION 145c03d86 FUN_145c03d86 body=55 status=ok
// SIG undefined FUN_145c03d86(void)

void FUN_145c03d86(longlong *param_1)

{
  FUN_145c03eb4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c03dbe FUN_145c03dbe body=68 status=ok
// SIG undefined FUN_145c03dbe(void)

void FUN_145c03dbe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b412d48;
  FUN_145c03e02(param_1 + 5);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c03e02 FUN_145c03e02 body=55 status=ok
// SIG undefined FUN_145c03e02(void)

void FUN_145c03e02(longlong *param_1)

{
  FUN_145c03e3a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c03e3a FUN_145c03e3a body=121 status=ok
// SIG undefined FUN_145c03e3a(void)

void FUN_145c03e3a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c03eb4 FUN_145c03eb4 body=362 status=ok
// SIG undefined FUN_145c03eb4(void)

void FUN_145c03eb4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
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
      puVar2 = (undefined8 *)(*local_70 + (longlong)iStack_54 * 0x18);
      (**(code **)*puVar2)(puVar2,0);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c04020 FUN_145c04020 body=782 status=ok
// SIG undefined FUN_145c04020(void)

void FUN_145c04020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_e8 [38];
  byte local_c2;
  byte local_c1;
  int local_c0;
  int local_bc;
  longlong *local_b8;
  int local_ac;
  longlong local_a8;
  longlong local_a0;
  int *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0x100000000;
  local_60 = &DAT_14c9a3cd0;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  if (DAT_14c9a3ce8 != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = DAT_14c9a3ce8;
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = &DAT_14c9a3cc0;
  if ((iStack_54 != iVar8) || (local_60 != &DAT_14c9a3cd0)) {
    do {
      lVar7 = *local_90;
      lVar5 = (longlong)iStack_74;
      local_a8 = (longlong)*(int *)(lVar7 + 0x18 + lVar5 * 0x28);
      if (local_a8 != 0) {
        local_b8 = *(longlong **)(lVar7 + 0x10 + lVar5 * 0x28);
        plVar3 = (longlong *)local_b8[1];
        if (plVar3 == (longlong *)0x0) {
LAB_145c04172:
          lVar6 = 0;
        }
        else {
          iVar9 = (int)plVar3[1];
          do {
            if (iVar9 == 0) goto LAB_145c04172;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar10 = iVar9 == iVar4;
            if (bVar10) {
              *(int *)(plVar3 + 1) = iVar9 + 1;
              iVar4 = iVar9;
            }
            iVar9 = iVar4;
            UNLOCK();
          } while (!bVar10);
          lVar6 = *local_b8;
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
        local_98 = (int *)(lVar7 + lVar5 * 0x28 + 0x18);
        local_c2 = lVar6 == param_1;
        local_c0 = 0;
        local_bc = 0;
        do {
          local_ac = local_bc;
          lVar7 = (longlong)local_bc;
          local_bc = local_bc + 1;
          if (local_bc < (int)local_a8) {
            local_bc = (int)local_a8;
          }
          local_c1 = local_c2;
          bVar10 = (bool)(local_c2 & 1);
          local_c2 = local_c2 ^ 1;
          local_a0 = lVar7;
          do {
            lVar7 = lVar7 + 1;
            if (local_a8 <= lVar7) goto LAB_145c0423c;
            plVar3 = (longlong *)local_b8[lVar7 * 2 + 1];
            if (plVar3 == (longlong *)0x0) {
LAB_145c0422b:
              lVar5 = 0;
            }
            else {
              iVar9 = (int)plVar3[1];
              do {
                if (iVar9 == 0) goto LAB_145c0422b;
                LOCK();
                iVar4 = (int)plVar3[1];
                bVar11 = iVar9 == iVar4;
                if (bVar11) {
                  *(int *)(plVar3 + 1) = iVar9 + 1;
                  iVar4 = iVar9;
                }
                iVar9 = iVar4;
                UNLOCK();
              } while (!bVar11);
              lVar5 = local_b8[lVar7 * 2];
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
          } while (bVar10 == (lVar5 == param_1));
          local_bc = (int)lVar7;
LAB_145c0423c:
          iVar9 = local_bc - local_ac;
          if ((local_c1 & 1) == 0) {
            if (local_c0 != local_ac) {
              memmove(local_b8 + (longlong)local_c0 * 2,local_b8 + local_a0 * 2,(longlong)iVar9 << 4
                     );
            }
            local_c0 = local_c0 + iVar9;
          }
          else {
            FUN_14597daf4(local_b8 + local_a0 * 2,iVar9);
          }
        } while (lVar7 < local_a8);
        *local_98 = local_c0;
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar8) || (local_80 != &DAT_14c9a3cd0)) || (local_90 != &DAT_14c9a3cc0))
    ;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c0432f FUN_145c0432f body=165 status=ok
// SIG undefined FUN_145c0432f(void)

void FUN_145c0432f(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1414e215e();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_1414e210d(param_1,param_2);
  return;
}



// FUNCTION 145c043d4 FUN_145c043d4 body=53 status=ok
// SIG undefined FUN_145c043d4(void)

void FUN_145c043d4(longlong *param_1)

{
  FUN_1414e2bf4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c0440a FUN_145c0440a body=172 status=ok
// SIG undefined FUN_145c0440a(void)

void FUN_145c0440a(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

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
            lVar1 = FUN_14030d330(lVar1);
            if (lVar1 != 0) {
              lVar1 = FUN_140cee904(lVar1);
              if (lVar1 != 0) {
                FUN_145c044b6(lVar1,param_4);
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 145c044b6 FUN_145c044b6 body=480 status=ok
// SIG undefined FUN_145c044b6(void)

/* WARNING: Removing unreachable block (ram,0x000145c0465d) */

void FUN_145c044b6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  byte *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar10 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cbd8468);
  if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 0x6b) == 2)) {
    plVar1 = (longlong *)(param_1 + 0x58);
    iVar4 = *(int *)(param_1 + 100);
    FUN_1447a1747(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
    if ((iVar4 < 0) && (*(int *)(param_1 + 100) != 0)) {
      FUN_1408be2c4(plVar1,0);
    }
    puVar10 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cbd8468);
    pbVar5 = (byte *)*puVar10;
    puVar10 = &DAT_14c9a1270;
    if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 2) != 0)) {
      puVar10 = *(undefined8 **)(pbVar5 + 8);
    }
    if ((longlong)*(int *)(puVar10 + 2) != 0) {
      puVar12 = (undefined8 *)*puVar10;
      puVar10 = puVar12 + (longlong)*(int *)(puVar10 + 2) * 2;
      do {
        local_58 = (byte *)*puVar12;
        local_50 = (longlong *)puVar12[1];
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        cVar8 = FUN_144a8ab0e(&local_58);
        if (cVar8 != '\0') {
          if ((local_58 == (byte *)0x0) || ((*local_58 & 3) != 1)) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(local_58 + 8);
          }
          FUN_1400b22c2(&local_68,uVar11);
          iVar4 = *(int *)(param_1 + 0x60);
          uVar9 = iVar4 + 1;
          *(uint *)(param_1 + 0x60) = uVar9;
          if (*(uint *)(param_1 + 100) < uVar9) {
            FUN_1447a1bd6(plVar1);
          }
          lVar6 = *plVar1;
          lVar13 = (longlong)iVar4 * 0x10;
          *(undefined8 *)(lVar6 + lVar13) = 0;
          *(undefined8 *)(lVar6 + lVar13) = local_68;
          local_68 = 0;
          *(undefined4 *)(lVar6 + 8 + lVar13) = (undefined4)local_60;
          *(undefined4 *)(lVar6 + 0xc + lVar13) = local_60._4_4_;
          local_60 = 0;
        }
        plVar7 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0469c FUN_145c0469c body=82 status=ok
// SIG undefined FUN_145c0469c(void)

void FUN_145c0469c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149e4c410;
  *(undefined4 *)(puVar1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0xffffffff;
  *(undefined4 *)(puVar1 + 7) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x3e) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  puVar1[8] = 0;
  *(undefined1 (*) [16])((longlong)puVar1 + 0x4c) = (undefined1  [16])0x0;
  return;
}



// FUNCTION 145c046f6 FUN_145c046f6 body=79 status=ok
// SIG undefined FUN_145c046f6(void)

undefined8 * FUN_145c046f6(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149f85060;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff00000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 145c04746 FUN_145c04746 body=40 status=ok
// SIG undefined FUN_145c04746(void)

undefined8 FUN_145c04746(undefined8 param_1,int param_2)

{
  FUN_145c0476e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0476e FUN_145c0476e body=47 status=ok
// SIG undefined FUN_145c0476e(void)

void FUN_145c0476e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab0ff00;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c047a8 FUN_145c047a8 body=76 status=ok
// SIG undefined FUN_145c047a8(void)

undefined8 * FUN_145c047a8(undefined8 *param_1)

{
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14a631c90;
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14cad0f30,1);
  *(undefined1 *)(param_1[0x75] + 0x1fb) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 2;
  return param_1;
}



// FUNCTION 145c04800 FUN_145c04800 body=76 status=ok
// SIG undefined FUN_145c04800(void)

undefined8 * FUN_145c04800(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a64f830;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145c04858 FUN_145c04858 body=76 status=ok
// SIG undefined FUN_145c04858(void)

undefined8 * FUN_145c04858(undefined8 *param_1)

{
  FUN_1459a4106();
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *param_1 = &PTR_FUN_14a6598f0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 145c048b0 FUN_145c048b0 body=76 status=ok
// SIG undefined FUN_145c048b0(void)

undefined8 * FUN_145c048b0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a65edc0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145c04908 FUN_145c04908 body=76 status=ok
// SIG undefined FUN_145c04908(void)

undefined8 * FUN_145c04908(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67f810;
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
  return param_1;
}



// FUNCTION 145c04960 FUN_145c04960 body=76 status=ok
// SIG undefined FUN_145c04960(void)

undefined8 * FUN_145c04960(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67c170;
  *(undefined1 *)(param_1 + 0x16) = 3;
  return param_1;
}



// FUNCTION 145c049b8 FUN_145c049b8 body=76 status=ok
// SIG undefined FUN_145c049b8(void)

undefined8 * FUN_145c049b8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a68a1c0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return param_1;
}



// FUNCTION 145c04a10 FUN_145c04a10 body=76 status=ok
// SIG undefined FUN_145c04a10(void)

undefined8 * FUN_145c04a10(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6a86d0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  return param_1;
}



// FUNCTION 145c04a68 FUN_145c04a68 body=76 status=ok
// SIG undefined FUN_145c04a68(void)

undefined8 * FUN_145c04a68(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6a9530;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 145c04ab4 FUN_145c04ab4 body=40 status=ok
// SIG undefined FUN_145c04ab4(void)

undefined8 FUN_145c04ab4(undefined8 param_1,int param_2)

{
  FUN_145c04adc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c04adc FUN_145c04adc body=47 status=ok
// SIG undefined FUN_145c04adc(void)

void FUN_145c04adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c04b10 FUN_145c04b10 body=82 status=ok
// SIG undefined FUN_145c04b10(void)

void FUN_145c04b10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa65cf0;
  *(undefined2 *)(puVar1 + 5) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2a) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 1;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 145c04b62 FUN_145c04b62 body=40 status=ok
// SIG undefined FUN_145c04b62(void)

undefined8 FUN_145c04b62(undefined8 param_1,int param_2)

{
  FUN_145c04b8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c04b8a FUN_145c04b8a body=47 status=ok
// SIG undefined FUN_145c04b8a(void)

void FUN_145c04b8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abac2a0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c04bba FUN_145c04bba body=40 status=ok
// SIG undefined FUN_145c04bba(void)

undefined8 FUN_145c04bba(undefined8 param_1,int param_2)

{
  FUN_145c04be2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c04be2 FUN_145c04be2 body=47 status=ok
// SIG undefined FUN_145c04be2(void)

void FUN_145c04be2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abc8d30;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c04c11 FUN_145c04c11 body=67 status=ok
// SIG undefined FUN_145c04c11(void)

void FUN_145c04c11(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c04c54(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae58870;
  puVar1[5] = &PTR_FUN_14ae58bc0;
  puVar1[0x52] = &PTR_LAB_14ae58c00;
  *(undefined1 *)((longlong)puVar1 + 0x194) = 1;
  return;
}



// FUNCTION 145c04c54 FUN_145c04c54 body=107 status=ok
// SIG undefined FUN_145c04c54(void)

undefined8 * FUN_145c04c54(undefined8 *param_1)

{
  FUN_145861f48();
  *param_1 = &PTR_FUN_14a5325f0;
  param_1[5] = &PTR_FUN_14a532940;
  param_1[0x52] = &PTR_LAB_14a532980;
  param_1[0x168] = 0x4300000043000000;
  *(undefined2 *)((longlong)param_1 + 0xb49) = 0x100;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined1 *)(param_1 + 0x16c) = 1;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) | 1;
  return param_1;
}



// FUNCTION 145c04cc0 FUN_145c04cc0 body=40 status=ok
// SIG undefined FUN_145c04cc0(void)

undefined8 FUN_145c04cc0(undefined8 param_1,int param_2)

{
  FUN_145c04ce8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c04ce8 FUN_145c04ce8 body=47 status=ok
// SIG undefined FUN_145c04ce8(void)

void FUN_145c04ce8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac05a30;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c04d26 FUN_145c04d26 body=73 status=ok
// SIG undefined FUN_145c04d26(void)

undefined8 * FUN_145c04d26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14affcd20;
  FUN_14096d529(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c04d70 FUN_145c04d70 body=37 status=ok
// SIG undefined FUN_145c04d70(void)

void FUN_145c04d70(longlong param_1)

{
  FUN_1400f80f0();
  FUN_145c04d96(param_1);
  *(undefined4 *)(param_1 + 0x368) = 0;
  return;
}



// FUNCTION 145c04d96 FUN_145c04d96 body=71 status=ok
// SIG undefined FUN_145c04d96(void)

void FUN_145c04d96(longlong param_1)

{
  FUN_145c04ddd(*(undefined8 *)(param_1 + 0x358),*(undefined4 *)(param_1 + 0x360));
  *(undefined4 *)(param_1 + 0x360) = 0;
  if (*(int *)(param_1 + 0x364) == 0) {
    return;
  }
  FUN_1489ef692(param_1 + 0x358);
  return;
}



// FUNCTION 145c04ddd FUN_145c04ddd body=66 status=ok
// SIG undefined FUN_145c04ddd(void)

void FUN_145c04ddd(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 145c04e20 FUN_145c04e20 body=40 status=ok
// SIG undefined FUN_145c04e20(void)

undefined8 FUN_145c04e20(undefined8 param_1,int param_2)

{
  FUN_145c04e48();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c04e48 FUN_145c04e48 body=91 status=ok
// SIG undefined FUN_145c04e48(void)

void FUN_145c04e48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4b5090;
  FUN_145c04ea3(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c04ea3 FUN_145c04ea3 body=43 status=ok
// SIG undefined FUN_145c04ea3(void)

void FUN_145c04ea3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148a3501c(param_1);
    param_1 = param_1 + 0xe8;
  }
  return;
}



// FUNCTION 145c04eda FUN_145c04eda body=71 status=ok
// SIG undefined FUN_145c04eda(void)

undefined8 * FUN_145c04eda(undefined8 *param_1)

{
  FUN_145c04f22();
  *param_1 = &PTR_FUN_14b56cf30;
  param_1[5] = &PTR_FUN_14b56d4d0;
  param_1[0x2d] = &PTR_FUN_14b56d510;
  param_1[0x276] = &PTR_FUN_14b56d540;
  return param_1;
}



// FUNCTION 145c04f22 FUN_145c04f22 body=92 status=ok
// SIG undefined FUN_145c04f22(void)

undefined8 * FUN_145c04f22(undefined8 *param_1)

{
  FUN_145791474();
  *param_1 = &PTR_FUN_14ae641c0;
  param_1[5] = &PTR_FUN_14ae64760;
  param_1[0x2d] = &PTR_FUN_14ae647a0;
  param_1[0x276] = &PTR_FUN_14ae647d0;
  param_1[0x277] = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  return param_1;
}



// FUNCTION 145c04f7e FUN_145c04f7e body=43 status=ok
// SIG undefined FUN_145c04f7e(void)

void FUN_145c04f7e(undefined8 param_1,longlong *param_2)

{
  FUN_145c04fa9(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c04fa9 FUN_145c04fa9 body=44 status=ok
// SIG undefined FUN_145c04fa9(void)

void FUN_145c04fa9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 145c04fe0 FUN_145c04fe0 body=131 status=ok
// SIG undefined FUN_145c04fe0(void)

undefined8 * FUN_145c04fe0(undefined8 *param_1)

{
  FUN_145c05064();
  *param_1 = &PTR_FUN_14b927d00;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(byte *)(param_1 + 0xe) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x13) = 4;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x14) = 2;
  *(byte *)(param_1 + 0x15) = (byte)~DAT_14c9a8754 >> 4 & 2;
  return param_1;
}



// FUNCTION 145c05064 FUN_145c05064 body=32 status=ok
// SIG undefined FUN_145c05064(void)

undefined8 * FUN_145c05064(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab58df0;
  return param_1;
}



// FUNCTION 145c05084 FUN_145c05084 body=87 status=ok
// SIG undefined FUN_145c05084(void)

longlong FUN_145c05084(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_145c050be;
  }
  lVar1 = 0;
LAB_145c050be:
  return (ulonglong)(lVar1 != 0) << 2;
}



// FUNCTION 145c050ea FUN_145c050ea body=224 status=ok
// SIG undefined FUN_145c050ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145c050ea(void)

{
  longlong lVar1;
  
  if (DAT_14c765e4c != 0) {
    FUN_145c051ca();
    if (DAT_14c765cfc != '\0') {
      lVar1 = (*DAT_14c765d68)(2);
      if (lVar1 != 0) {
        (*DAT_14c765d78)(lVar1);
        (*DAT_14c765d88)(lVar1);
      }
    }
    DAT_14c765e4c = 0;
  }
  if (DAT_14c765e5c != 0) {
    if (DAT_14c765db8 != (code *)0x0) {
      (*DAT_14c765db8)(DAT_14c765da8);
    }
    DAT_14c765e5c = 0;
  }
  if (DAT_14c765e58 != 0) {
    if (DAT_14c765d48 != (code *)0x0) {
      (*DAT_14c765d48)(DAT_14c765d50);
    }
    DAT_14cc1eba8 = 0;
    _DAT_14cc1ebb0 = 0;
    DAT_14cc1eb98 = 0;
    DAT_14cc1eba0 = 0;
    DAT_14c765e58 = 0;
    DAT_14cc1ecc0 = 0;
  }
  if (DAT_14c765e54 != 0) {
    if (DAT_14c765d60 != (code *)0x0) {
      (*DAT_14c765d60)();
    }
    DAT_14c765e54 = 0;
  }
  return 0;
}



// FUNCTION 145c051ca FUN_145c051ca body=3 status=ok
// SIG undefined FUN_145c051ca(void)

undefined8 FUN_145c051ca(void)

{
  return 0;
}



// FUNCTION 145c051e1 FUN_145c051e1 body=35 status=ok
// SIG undefined FUN_145c051e1(void)

void FUN_145c051e1(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c05204(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bdd8e70;
  return;
}



// FUNCTION 145c05204 FUN_145c05204 body=52 status=ok
// SIG undefined FUN_145c05204(void)

undefined8 * FUN_145c05204(undefined8 *param_1)

{
  FUN_140a823f6();
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *param_1 = &PTR_FUN_14a4a55c0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145c05238 FUN_145c05238 body=185 status=ok
// SIG undefined FUN_145c05238(void)

void FUN_145c05238(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pcVar1 = (char *)FUN_145c052f2();
  if (pcVar1 == (char *)0x0) {
    local_68[0] = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    FUN_140c3a2ac(local_68);
    local_68[0] = 7;
    local_60 = CONCAT44(local_60._4_4_,param_3);
    local_48 = param_2;
    local_40 = local_68;
    FUN_140dfa58e(param_1 + 8,local_34,&local_48,0);
    FUN_140c3a2ac(local_68);
  }
  else if (*pcVar1 == '\a') {
    FUN_140c3a2ac(pcVar1);
    *pcVar1 = '\a';
    *(undefined4 *)(pcVar1 + 8) = param_3;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c052f2 FUN_145c052f2 body=97 status=ok
// SIG undefined FUN_145c052f2(void)

longlong FUN_145c052f2(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_140dfa800((longlong *)(param_1 + 8),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x38 + *(longlong *)(param_1 + 8);
  }
  lVar3 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 145c0535e FUN_145c0535e body=454 status=ok
// SIG undefined FUN_145c0535e(void)

undefined8 * FUN_145c0535e(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b373940;
  *(undefined4 *)(param_1 + 0x16) = 0xa004;
  param_1[0x17] = "input_schema";
  lVar4 = FUN_145c05526();
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
    FUN_1400bbfae(&local_48,lVar4);
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
        goto LAB_145c05435;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145c05435:
  FUN_1400b22c2(local_58,"GbxInput.Schema");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c05526 FUN_145c05526 body=57 status=ok
// SIG undefined FUN_145c05526(void)

void FUN_145c05526(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5fb68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5fb68 = FUN_140002ddd(FUN_1464e8bb0,uVar1,L"GbxInputSchemaDef");
  }
  return;
}



// FUNCTION 145c0556a FUN_145c0556a body=454 status=ok
// SIG undefined FUN_145c0556a(void)

undefined8 * FUN_145c0556a(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b377130;
  *(undefined4 *)(param_1 + 0x16) = 0x19109;
  param_1[0x17] = "skill_event";
  lVar4 = FUN_145c05732();
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
        goto LAB_145c05641;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145c05641:
  FUN_1400b22c2(local_58,"GbxSkills.Event");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c05732 FUN_145c05732 body=57 status=ok
// SIG undefined FUN_145c05732(void)

void FUN_145c05732(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb650d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb650d8 = FUN_140002ddd(FUN_14650829a,uVar1,L"GbxSkillEventDef");
  }
  return;
}



// FUNCTION 145c0576c FUN_145c0576c body=42 status=ok
// SIG undefined FUN_145c0576c(void)

void FUN_145c0576c(longlong param_1)

{
  FUN_145c05796();
  if (*(int *)(param_1 + 0x394) != -1) {
    FUN_145c05818(param_1);
    return;
  }
  return;
}



// FUNCTION 145c05796 FUN_145c05796 body=129 status=ok
// SIG undefined FUN_145c05796(void)

void FUN_145c05796(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145c05aaa();
  if (*(int *)(param_1 + 0x394) != -1) {
    FUN_1413d8c86(param_1);
    FUN_145c058ca(local_18,param_1);
    FUN_145c059ba(local_18,param_1);
    FUN_1413d8be4(&DAT_14cb896c8,param_1);
    FUN_1447f69b6(param_1 + 0x450);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c05818 FUN_145c05818 body=177 status=ok
// SIG undefined FUN_145c05818(void)

void FUN_145c05818(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = FUN_1447210f0();
  FUN_14027ab42(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_1414e2db4(local_28,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c058ca FUN_145c058ca body=239 status=ok
// SIG undefined FUN_145c058ca(void)

undefined8 FUN_145c058ca(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14aa6ea50;
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
  *local_30 = &PTR_FUN_14b4204a0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_1461d3300;
  FUN_1412b4546(&DAT_14cb10968,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c059ba FUN_145c059ba body=239 status=ok
// SIG undefined FUN_145c059ba(void)

undefined8 FUN_145c059ba(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1ca5b0;
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
  *local_30 = &PTR_FUN_14b420510;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = &LAB_145aac5ee;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c05aaa FUN_145c05aaa body=256 status=ok
// SIG undefined FUN_145c05aaa(void)

void FUN_145c05aaa(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar3 = FUN_14487fd02();
  if (iVar3 != 0) {
    if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 0x3b8)] == '\x01') {
      if (*(longlong **)(param_1 + 0x3a8) == (longlong *)0x0) {
        return;
      }
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0x28))();
      if (cVar2 == '\0') {
        return;
      }
    }
    else if ((*(uint *)(param_1 + 0x3a8) & 0xffffff) == 0) {
      return;
    }
    lVar4 = FUN_1400d1928();
    lVar7 = *(longlong *)(lVar4 + 0x110);
    if (lVar7 == 0) {
      FUN_140aa6c08(lVar4);
      lVar7 = *(longlong *)(lVar4 + 0x110);
    }
    plVar5 = (longlong *)FUN_140489acc();
    uVar1 = *(undefined8 *)(lVar7 + 0x3f0);
    uVar6 = FUN_1447210f0(param_1);
    cVar2 = (**(code **)(*plVar5 + 0x328))(plVar5,uVar6,uVar1);
    if (cVar2 != '\0') {
      plVar5 = (longlong *)FUN_140489acc();
      uVar1 = *(undefined8 *)(lVar7 + 0x3f0);
      uVar6 = FUN_1447210f0(param_1);
      (**(code **)(*plVar5 + 0x340))(plVar5,uVar6,uVar1,param_1 + 0x3a0,param_2);
    }
  }
  return;
}



// FUNCTION 145c05bb2 FUN_145c05bb2 body=101 status=ok
// SIG undefined FUN_145c05bb2(void)

undefined8 * FUN_145c05bb2(undefined8 *param_1)

{
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
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
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14b4049d0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  return param_1;
}



// FUNCTION 145c05c18 FUN_145c05c18 body=212 status=ok
// SIG undefined FUN_145c05c18(void)

void FUN_145c05c18(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_145c05cec();
  if (0 < (int)param_1[0x26]) {
    lVar2 = FUN_14479d2ce(param_1[8] + 0x48);
    if (lVar2 != 0) {
      lVar3 = FUN_144a6c4d8();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        plVar5 = param_1 + 0xd;
        if ((longlong *)param_1[0x25] != (longlong *)0x0) {
          plVar5 = (longlong *)param_1[0x25];
        }
        if ((longlong)(int)param_1[0x26] != 0) {
          lVar3 = (longlong)(int)param_1[0x26] * 0x18;
          do {
            lVar4 = FUN_14479d2ce(plVar5);
            if (lVar4 != 0) {
              uVar1 = (**(code **)(*param_1 + 0x98))(param_1);
              *(undefined1 *)(param_2 + 0xc) = uVar1;
              (**(code **)(*param_2 + 0x78))(param_2,lVar2,lVar4,*param_3);
            }
            plVar5 = plVar5 + 3;
            lVar3 = lVar3 + -0x18;
          } while (lVar3 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 145c05cec FUN_145c05cec body=197 status=ok
// SIG undefined FUN_145c05cec(void)

void FUN_145c05cec(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    FUN_144a7bec8(param_2,&local_30);
    local_48 = local_30;
    plStack_40 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
      UNLOCK();
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
  }
  local_38 = *param_3;
  FUN_145c05dc4(param_1 + 0x50,&local_48);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c05dc4 FUN_145c05dc4 body=96 status=ok
// SIG undefined FUN_145c05dc4(void)

void FUN_145c05dc4(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_145c05e24();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    lVar3 = (longlong)iVar2;
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_14188664c(param_1,iVar2);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + lVar3 * 0x18) = *param_2;
    *(undefined8 *)(lVar1 + 8 + lVar3 * 0x18) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined8 *)(lVar1 + 0x10 + lVar3 * 0x18) = param_2[2];
  }
  return;
}



// FUNCTION 145c05e24 FUN_145c05e24 body=263 status=ok
// SIG undefined FUN_145c05e24(void)

int FUN_145c05e24(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_145c05ec4:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_145c05ec4;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_145c05ec8:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_145c05ec8;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if ((lVar8 == lVar9) && (plVar10[2] == param_2[2])) {
        return (int)((ulonglong)((longlong)plVar10 - (longlong)param_1) >> 3) * -0x55555555;
      }
      plVar10 = plVar10 + 3;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 3);
  }
  return -1;
}



// FUNCTION 145c05f2c FUN_145c05f2c body=329 status=ok
// SIG undefined FUN_145c05f2c(void)

void FUN_145c05f2c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c06076(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c06076 FUN_145c06076 body=511 status=ok
// SIG undefined FUN_145c06076(void)

void FUN_145c06076(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
  if (cVar4 != '\0') {
    if (((param_3 != (longlong *)0x0) && ((*(uint *)(param_3 + 1) >> 0x1e & 1) == 0)) &&
       ((*(byte *)(param_3 + 0x84) & 2) != 0)) {
      cVar4 = (**(code **)(*param_3 + 0x6c8))(param_3);
      if (cVar4 != '\0') {
        lVar5 = FUN_144a5dd5e();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
            == lVar5 + 0x30)) {
          cVar4 = FUN_14129433e(param_3);
          if (cVar4 != '\0') {
            FUN_145c06276(&local_38,param_3);
            local_48 = *(undefined8 *)(local_38 + 0x520);
            local_40 = *(longlong *)(local_38 + 0x528);
            if (local_40 != 0) {
              LOCK();
              *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
              UNLOCK();
            }
            (**(code **)(*(longlong *)(param_1 + 0x48) + 0x18))
                      ((longlong *)(param_1 + 0x48),&local_48);
            plVar2 = local_30;
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_30 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_30)(local_30);
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
        }
      }
    }
    if (((param_4 != (longlong *)0x0) && ((*(uint *)(param_4 + 1) >> 0x1e & 1) == 0)) &&
       ((*(byte *)(param_4 + 0x84) & 2) != 0)) {
      cVar4 = (**(code **)(*param_4 + 0x6c8))(param_4);
      if (cVar4 != '\0') {
        lVar5 = FUN_144a5dd5e();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(param_4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
            == lVar5 + 0x30)) {
          cVar4 = FUN_14129433e(param_4);
          if (cVar4 != '\0') {
            FUN_145c06276(&local_38,param_4);
            local_58 = *(undefined8 *)(local_38 + 0x520);
            local_50 = *(longlong *)(local_38 + 0x528);
            if (local_50 != 0) {
              LOCK();
              *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
              UNLOCK();
            }
            (**(code **)(*(longlong *)(param_1 + 0x48) + 0x10))
                      ((longlong *)(param_1 + 0x48),&local_58);
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_30 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar3 = (int *)((longlong)local_30 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*local_30 + 0x10))(local_30);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c06276 FUN_145c06276 body=179 status=ok
// SIG undefined FUN_145c06276(void)

undefined8 FUN_145c06276(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_2 + 0x84) & 2) != 0)) {
    cVar1 = (**(code **)(*param_2 + 0x6c8))(param_2);
    if (cVar1 != '\0') {
      lVar3 = FUN_144a7ba4c(param_2);
      if (lVar3 != 0) {
        uVar4 = FUN_144a7ba4c(param_2);
        uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        local_1c = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        local_1c = local_1c >> 0x10 ^ local_1c;
        goto LAB_145c062f4;
      }
    }
  }
  local_1c = 0;
LAB_145c062f4:
  FUN_1448d5e3c(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0632a FUN_145c0632a body=149 status=ok
// SIG undefined FUN_145c0632a(void)

void FUN_145c0632a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aab56();
  FUN_1446f470e(&local_38,L"VHETargetList",1);
  uVar1 = FUN_1458ce0a2();
  FUN_1458ce0a2();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 2;
  local_30 = 0;
  local_28 = FUN_145c063c0();
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c063c0 FUN_145c063c0 body=3 status=ok
// SIG undefined FUN_145c063c0(void)

undefined8 FUN_145c063c0(void)

{
  return 0;
}



// FUNCTION 145c063c4 FUN_145c063c4 body=76 status=ok
// SIG undefined FUN_145c063c4(void)

void FUN_145c063c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eb5d60;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 5));
  FUN_145c06410(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 5));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c06410 FUN_145c06410 body=99 status=ok
// SIG undefined FUN_145c06410(void)

void FUN_145c06410(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_146908242(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 145c06474 FUN_145c06474 body=40 status=ok
// SIG undefined FUN_145c06474(void)

undefined8 FUN_145c06474(undefined8 param_1,int param_2)

{
  FUN_145c0649c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0649c FUN_145c0649c body=75 status=ok
// SIG undefined FUN_145c0649c(void)

void FUN_145c0649c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad619a0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c064e7(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c064e7 FUN_145c064e7 body=60 status=ok
// SIG undefined FUN_145c064e7(void)

void FUN_145c064e7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1480654d2(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c06524 FUN_145c06524 body=40 status=ok
// SIG undefined FUN_145c06524(void)

undefined8 FUN_145c06524(undefined8 param_1,int param_2)

{
  FUN_145c0654c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0654c FUN_145c0654c body=86 status=ok
// SIG undefined FUN_145c0654c(void)

void FUN_145c0654c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad7ecd0;
  param_1[7] = &PTR_FUN_14ad7f110;
  FUN_145c065a2(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145c065a2 FUN_145c065a2 body=49 status=ok
// SIG undefined FUN_145c065a2(void)

void FUN_145c065a2(longlong param_1,int param_2)

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



// FUNCTION 145c065de FUN_145c065de body=164 status=ok
// SIG undefined FUN_145c065de(void)

undefined8 * FUN_145c065de(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14b72b400;
  param_1[0x72] = 0;
  uVar2 = DAT_14cbc6550;
  uVar3 = FUN_14595de26();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar4;
  if ((lVar4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
    lVar4 = param_1[0x72];
  }
  param_1[0x39] = lVar4;
  return param_1;
}



// FUNCTION 145c06682 FUN_145c06682 body=140 status=ok
// SIG undefined FUN_145c06682(void)

void FUN_145c06682(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c06710();
  FUN_1446f470e(&local_38,L"bIsUsing",1);
  uVar1 = FUN_145908c4c();
  FUN_145908c4c();
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



// FUNCTION 145c06710 FUN_145c06710 body=658 status=ok
// SIG undefined FUN_145c06710(void)

void FUN_145c06710(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c069a4();
  local_30 = 0;
  local_40 = 0;
  local_38 = 1;
  local_48 = 0;
  local_58 = 3;
  local_50 = 1;
  local_68 = L"EquipTime";
  local_60 = (undefined1 *)0x10000000d;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"PutDownTime";
  local_60 = (undefined1 *)0x10000000e;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"SwitchModeTimeScale";
  local_60 = &DAT_10000000f;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"ZoomTimeScale";
  local_60 = (undefined1 *)0x100000015;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"CurrentUseModeIndex";
  local_60 = (undefined1 *)0x100000012;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"SwitchModeOption";
  local_60 = &DAT_100000010;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"PendingUseModeIndex";
  local_60 = (undefined1 *)0x100000011;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"RemoteShotSocketState";
  local_60 = (undefined1 *)0x100000013;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"RemoteShotState";
  local_60 = &DAT_100000014;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"VisibleAmmoState";
  local_60 = &DAT_10000000c;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"PendingAttachState";
  local_60 = &DAT_100000018;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"PrimaryRepHeatState";
  local_60 = (undefined1 *)0x100000016;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"AltRepHeatState";
  local_60 = &DAT_100000017;
  FUN_140c2c993(&local_68,param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c069a4 FUN_145c069a4 body=118 status=ok
// SIG undefined FUN_145c069a4(void)

void FUN_145c069a4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c2c6fa();
  local_18 = 0;
  local_28 = 1;
  local_20 = 1;
  local_38 = L"Item";
  local_30 = &DAT_10000000b;
  FUN_140c2c993(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c06a2a FUN_145c06a2a body=40 status=ok
// SIG undefined FUN_145c06a2a(void)

undefined8 FUN_145c06a2a(undefined8 param_1,int param_2)

{
  FUN_145c06a52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c06a52 FUN_145c06a52 body=80 status=ok
// SIG undefined FUN_145c06a52(void)

void FUN_145c06a52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae5bfc0;
  param_1[6] = &PTR_FUN_14ae5c260;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c06aa2(param_1 + 8);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c06aa2 FUN_145c06aa2 body=53 status=ok
// SIG undefined FUN_145c06aa2(void)

void FUN_145c06aa2(longlong *param_1)

{
  FUN_145c06ad8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c06ad8 FUN_145c06ad8 body=90 status=ok
// SIG undefined FUN_145c06ad8(void)

void FUN_145c06ad8(longlong param_1)

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



// FUNCTION 145c06b32 FUN_145c06b32 body=123 status=ok
// SIG undefined FUN_145c06b32(void)

void FUN_145c06b32(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      iVar5 = 0x20;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_145c06bae(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145c06bae FUN_145c06bae body=140 status=ok
// SIG undefined FUN_145c06bae(void)

void FUN_145c06bae(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 145c06c3a FUN_145c06c3a body=198 status=ok
// SIG undefined FUN_145c06c3a(void)

void FUN_145c06c3a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_30);
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  if (1 < (int)param_1[6]) {
    FUN_1400020e8(param_2,&DAT_149e31048,1);
    iVar1 = (int)param_1[6] + -1;
    if ((int)param_1[6] == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,param_1[5],iVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c06d02 FUN_145c06d02 body=32 status=ok
// SIG undefined FUN_145c06d02(void)

undefined8 FUN_145c06d02(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AutomationTestExcludelist");
  return param_2;
}



// FUNCTION 145c06d22 FUN_145c06d22 body=32 status=ok
// SIG undefined FUN_145c06d22(void)

undefined8 FUN_145c06d22(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AutomationTestExcludelistSettings");
  return param_2;
}



// FUNCTION 145c06d42 FUN_145c06d42 body=941 status=ok
// SIG undefined FUN_145c06d42(void)

void FUN_145c06d42(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_3d8 [32];
  undefined8 *local_3b8;
  undefined4 local_3b0;
  undefined4 *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_378;
  undefined4 local_374;
  undefined8 local_370;
  undefined4 local_368;
  undefined8 local_364;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined1 local_338 [4];
  undefined8 local_334;
  undefined8 uStack_32c;
  undefined1 local_320 [704];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_340 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_340);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_340);
  }
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_358);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_358);
  }
  local_338[0] = 0;
  local_60 = 0;
  local_58 = 0x800000000;
  local_334 = 0;
  uStack_32c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_338);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_338);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_364 = 0;
  local_35c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_364);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_364);
  }
  local_370 = 0;
  local_368 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_370);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_370);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_374 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_374);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_374);
  }
  local_378 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_378);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_378);
  }
  uVar3 = local_374;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_388 = local_364;
  local_380 = local_35c;
  local_3a0 = local_358;
  puVar6 = &local_378;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  puVar7 = &local_370;
  if (puVar2 != (undefined8 *)0x0) {
    puVar7 = puVar2;
  }
  puVar8 = local_338;
  if (puVar1 != (undefined1 *)0x0) {
    puVar8 = puVar1;
  }
  uVar5 = FUN_14477b664(uStack_350);
  local_398 = FUN_14477b664(uVar5);
  local_390 = local_348;
  local_3b0 = uVar3;
  local_3b8 = puVar7;
  local_3a8 = puVar6;
  uVar4 = FUN_145c070f0(local_340,&local_3a0,puVar8,&local_388);
  *param_3 = uVar4;
  FUN_1407acd04(local_320);
  if ((local_50 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c070f0 FUN_145c070f0 body=482 status=ok
// SIG undefined FUN_145c070f0(void)

bool FUN_145c070f0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,int *param_7)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_1 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_1 + 0x180))(), lVar4 == 0)) ||
     (lVar4 = FUN_140115352(lVar4), lVar4 == 0)) {
    lVar4 = FUN_14479d2ce(param_3 + 4);
    if (lVar4 == 0) {
      *param_7 = 0;
      goto LAB_145c0724a;
    }
    lVar4 = FUN_140115352(lVar4);
    *param_7 = 0;
    if (lVar4 == 0) goto LAB_145c0724a;
  }
  else {
    *param_7 = 0;
  }
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_1407ad36c();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  if (param_2[2] == 0) {
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_145c0724a;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_2[2] = 0;
      goto LAB_145c0724a;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar5,param_2);
    param_2[2] = lVar6;
    if (lVar6 == 0) goto LAB_145c0724a;
  }
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_8c = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_42 = 1;
  local_41 = 0;
  local_c0 = param_6;
  local_c8 = param_5;
  iVar3 = FUN_1407af00a(lVar4,param_2,param_3);
  *param_7 = iVar3;
  *param_4 = *param_5;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_5 + 1);
LAB_145c0724a:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *param_7 != 0;
}



// FUNCTION 145c072de FUN_145c072de body=340 status=ok
// SIG undefined FUN_145c072de(void)

undefined8 * FUN_145c072de(undefined8 *param_1)

{
  FUN_140c4ada0();
  *param_1 = &PTR_FUN_14afe5bb0;
  param_1[0x72] = &PTR_FUN_14afe6290;
  param_1[0x73] = &PTR_FUN_14afe6300;
  param_1[0x74] = &PTR_FUN_14afe6370;
  param_1[0x75] = &PTR_FUN_14afe63a0;
  param_1[0x76] = &PTR_FUN_14afe63d0;
  param_1[0x77] = &PTR_FUN_14afe6400;
  param_1[0x78] = &PTR_FUN_14afe6440;
  param_1[0x79] = &PTR_FUN_14afe6460;
  param_1[0x7a] = &PTR_FUN_14afe6490;
  param_1[0x7b] = &PTR_FUN_14afe6560;
  param_1[0x7c] = &PTR_FUN_14afe65b0;
  param_1[0x7d] = &PTR_FUN_14afe6670;
  param_1[0x7e] = &PTR_FUN_14afe6690;
  param_1[0x7f] = &PTR_FUN_14afe6710;
  param_1[0x80] = &PTR_FUN_14afe6730;
  param_1[0x81] = &PTR_FUN_14afe6740;
  param_1[0x82] = &PTR_FUN_14afe6780;
  param_1[0x83] = &PTR_FUN_14afe67f0;
  param_1[0x84] = &PTR_FUN_14afe6820;
  param_1[0x85] = &PTR_FUN_14afe68c0;
  param_1[0x86] = &PTR_FUN_14afe68e0;
  param_1[0x87] = &PTR_FUN_14afe6900;
  return param_1;
}



// FUNCTION 145c07432 FUN_145c07432 body=302 status=ok
// SIG undefined FUN_145c07432(void)

void FUN_145c07432(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145c075da(param_1 + 8);
  if (*(longlong *)(param_1 + 0x98) == 0) {
    FUN_145c07562(&local_80);
    lVar1 = *(longlong *)(param_1 + 0x98);
    if (lVar1 == local_80) {
      if (local_78 != 0) {
        FUN_1470fb82e(&local_80);
      }
    }
    else {
      if (lVar1 != 0) {
        FUN_1402c7646((longlong *)(param_1 + 0x98));
      }
      *(longlong *)(param_1 + 0x98) = local_80;
      *(longlong *)(param_1 + 0xa0) = local_78;
      *(undefined8 *)(param_1 + 0xa8) = local_70;
    }
  }
  local_58 = 0;
  local_48 = &PTR_LAB_14a1dec30;
  local_68 = FUN_1414e42b6;
  local_40[0] = param_2;
  AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
  FUN_1414e42b6(local_40,*(undefined8 *)(param_1 + 0x98));
  ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0xb0) = 1;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c07562 FUN_145c07562 body=119 status=ok
// SIG undefined FUN_145c07562(void)

undefined8 * FUN_145c07562(undefined8 *param_1)

{
  undefined8 *puVar1;
  PSRWLOCK SRWLock;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *param_1 = puVar1;
  SRWLock = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(SRWLock);
  param_1[1] = SRWLock;
  puVar2 = (undefined4 *)FUN_14001cc68(4,0x10);
  *puVar2 = 1;
  param_1[2] = puVar2;
  return param_1;
}



// FUNCTION 145c075da FUN_145c075da body=422 status=ok
// SIG undefined FUN_145c075da(void)

undefined1 * FUN_145c075da(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  param_1[0x80] = param_2[0x80];
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  if ((*(longlong *)(param_1 + 0x90) == 0) && (*(longlong *)(param_2 + 0x90) != 0)) {
    if (*(PSRWLOCK *)(param_2 + 0x98) != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(param_2 + 0x98));
    }
    if (*(PSRWLOCK *)(param_1 + 0x98) != (PSRWLOCK)0x0) {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x98));
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      **(int **)(param_1 + 0xa0) = **(int **)(param_1 + 0xa0) + -1;
      piVar3 = *(int **)(param_1 + 0xa0);
      if (*piVar3 == 0) {
        if (*(longlong *)(param_1 + 0x90) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x90));
          piVar3 = *(int **)(param_1 + 0xa0);
        }
        *(undefined8 *)(param_1 + 0x90) = 0;
        if (piVar3 != (int *)0x0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x98));
        if (*(longlong *)(param_1 + 0x98) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x98));
      }
    }
    lVar1 = *(longlong *)(param_2 + 0x90);
    *(longlong *)(param_1 + 0x90) = lVar1;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    piVar3 = *(int **)(param_2 + 0xa0);
    *(int **)(param_1 + 0xa0) = piVar3;
    if (lVar1 != 0) {
      *piVar3 = *piVar3 + 1;
      ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x98));
    }
  }
  return param_1;
}



// FUNCTION 145c07788 FUN_145c07788 body=80 status=ok
// SIG undefined FUN_145c07788(void)

undefined8 * FUN_145c07788(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149f8e240;
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
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 145c077e0 FUN_145c077e0 body=80 status=ok
// SIG undefined FUN_145c077e0(void)

undefined8 * FUN_145c077e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14077009c(param_1,uVar1);
  *param_1 = &PTR_FUN_14a1dee90;
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
  return param_1;
}



// FUNCTION 145c0783c FUN_145c0783c body=77 status=ok
// SIG undefined FUN_145c0783c(void)

undefined8 * FUN_145c0783c(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6c9330;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x82;
  return param_1;
}



// FUNCTION 145c07894 FUN_145c07894 body=77 status=ok
// SIG undefined FUN_145c07894(void)

undefined8 * FUN_145c07894(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0x80;
  *param_1 = &PTR_FUN_14a6c9850;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 145c078ec FUN_145c078ec body=77 status=ok
// SIG undefined FUN_145c078ec(void)

undefined8 * FUN_145c078ec(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6cbd40;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x17 | 0xc0;
  return param_1;
}



// FUNCTION 145c07944 FUN_145c07944 body=77 status=ok
// SIG undefined FUN_145c07944(void)

undefined8 * FUN_145c07944(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6cf140;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 145c0799c FUN_145c0799c body=77 status=ok
// SIG undefined FUN_145c0799c(void)

undefined8 * FUN_145c0799c(undefined8 *param_1)

{
  FUN_145be5784();
  *param_1 = &PTR_FUN_14a6d2260;
  param_1[0x19] = 0;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xf0 | 4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c079f4 FUN_145c079f4 body=77 status=ok
// SIG undefined FUN_145c079f4(void)

undefined8 * FUN_145c079f4(undefined8 *param_1)

{
  FUN_145cb035c();
  *param_1 = &PTR_FUN_14a6d7450;
  param_1[0x28] = 0;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xf0 | 4;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c07a4c FUN_145c07a4c body=77 status=ok
// SIG undefined FUN_145c07a4c(void)

undefined8 * FUN_145c07a4c(undefined8 *param_1)

{
  FUN_14598182e();
  *param_1 = &PTR_FUN_14a6dac90;
  param_1[0x27] = 0;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf0 | 4;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c07aa4 FUN_145c07aa4 body=77 status=ok
// SIG undefined FUN_145c07aa4(void)

undefined8 * FUN_145c07aa4(undefined8 *param_1)

{
  FUN_14597bb9c();
  *param_1 = &PTR_FUN_14a6dda20;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf0 | 4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c07afc FUN_145c07afc body=77 status=ok
// SIG undefined FUN_145c07afc(void)

undefined8 * FUN_145c07afc(undefined8 *param_1)

{
  FUN_14597bb9c();
  *param_1 = &PTR_FUN_14a6ddec0;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf0 | 4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c07b54 FUN_145c07b54 body=77 status=ok
// SIG undefined FUN_145c07b54(void)

undefined8 * FUN_145c07b54(undefined8 *param_1)

{
  FUN_145ae1e28();
  *param_1 = &PTR_FUN_14a6e0050;
  param_1[0x12] = 0;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xf0 | 4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c07bac FUN_145c07bac body=77 status=ok
// SIG undefined FUN_145c07bac(void)

undefined8 * FUN_145c07bac(undefined8 *param_1)

{
  FUN_145af70e2();
  *param_1 = &PTR_FUN_14a6e0500;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 0xf0 | 4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c07c04 FUN_145c07c04 body=77 status=ok
// SIG undefined FUN_145c07c04(void)

undefined8 * FUN_145c07c04(undefined8 *param_1)

{
  FUN_145aea1c8();
  *param_1 = &PTR_FUN_14a6f65e0;
  param_1[0x19] = 0;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xf0 | 4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 0xc;
  return param_1;
}



// FUNCTION 145c07c52 FUN_145c07c52 body=40 status=ok
// SIG undefined FUN_145c07c52(void)

undefined8 FUN_145c07c52(undefined8 param_1,int param_2)

{
  FUN_145c07c7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c07c7a FUN_145c07c7a body=59 status=ok
// SIG undefined FUN_145c07c7a(void)

void FUN_145c07c7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a923e70;
  FUN_145c07cb5(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c07cb5 FUN_145c07cb5 body=77 status=ok
// SIG undefined FUN_145c07cb5(void)

void FUN_145c07cb5(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c07d02 FUN_145c07d02 body=40 status=ok
// SIG undefined FUN_145c07d02(void)

undefined8 FUN_145c07d02(undefined8 param_1,int param_2)

{
  FUN_145c07d2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c07d2a FUN_145c07d2a body=87 status=ok
// SIG undefined FUN_145c07d2a(void)

void FUN_145c07d2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa52210;
  FUN_145c07d81(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140595ef6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c07d81 FUN_145c07d81 body=49 status=ok
// SIG undefined FUN_145c07d81(void)

void FUN_145c07d81(longlong param_1,int param_2)

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



// FUNCTION 145c07db8 FUN_145c07db8 body=83 status=ok
// SIG undefined FUN_145c07db8(void)

void FUN_145c07db8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a758a80;
  puVar1[5] = 0;
  puVar1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 7),4000);
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *puVar1 = &PTR_FUN_14aa9db70;
  return;
}



// FUNCTION 145c07e0c FUN_145c07e0c body=264 status=ok
// SIG undefined FUN_145c07e0c(void)

void FUN_145c07e0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x4b0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x7a] = 0;
  param_2[0x7b] = 0x1000000000;
  *(undefined1 *)((longlong)param_2 + 0x3e4) = 0;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *(undefined1 *)(param_2 + 0x82) = 0;
  param_2[0x8b] = 0;
  param_2[0x8c] = 0x800000000;
  *param_2 = &PTR_FUN_14ac6e750;
  param_2[0x8f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x8d] = DAT_14c8464e0;
  param_2[0x8e] = uVar1;
  *(undefined4 *)(param_2 + 0x90) = 0x447a0000;
  uVar1 = DAT_14c846500;
  param_2[0x91] = DAT_14c8464f8;
  param_2[0x92] = uVar1;
  param_2[0x93] = DAT_14c846508;
  *(undefined4 *)(param_2 + 0x94) = 10;
  *(undefined8 *)((longlong)param_2 + 0x4a4) = 0x42c80000;
  return;
}



// FUNCTION 145c07f16 FUN_145c07f16 body=40 status=ok
// SIG undefined FUN_145c07f16(void)

undefined8 FUN_145c07f16(undefined8 param_1,int param_2)

{
  FUN_145c07f3e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c07f3e FUN_145c07f3e body=59 status=ok
// SIG undefined FUN_145c07f3e(void)

void FUN_145c07f3e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acd2cd0;
  FUN_145c07f79(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c07f79 FUN_145c07f79 body=77 status=ok
// SIG undefined FUN_145c07f79(void)

void FUN_145c07f79(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c07fc6 FUN_145c07fc6 body=40 status=ok
// SIG undefined FUN_145c07fc6(void)

undefined8 FUN_145c07fc6(undefined8 param_1,int param_2)

{
  FUN_145c07fee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c07fee FUN_145c07fee body=87 status=ok
// SIG undefined FUN_145c07fee(void)

void FUN_145c07fee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad95440;
  FUN_145c08045(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c08045 FUN_145c08045 body=49 status=ok
// SIG undefined FUN_145c08045(void)

void FUN_145c08045(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c08076 FUN_145c08076 body=40 status=ok
// SIG undefined FUN_145c08076(void)

undefined8 FUN_145c08076(undefined8 param_1,int param_2)

{
  FUN_145c0809e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0809e FUN_145c0809e body=181 status=ok
// SIG undefined FUN_145c0809e(void)

void FUN_145c0809e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aea8a80;
  param_1[5] = &PTR_FUN_14aea8d20;
  if (param_1[0x22] != 0) {
    plVar1 = param_1 + 0x26;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x24];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x1a] != 0) {
    plVar1 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1c];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14585f5fa(param_1);
  return;
}



// FUNCTION 145c08160 FUN_145c08160 body=31 status=ok
// SIG undefined FUN_145c08160(void)

undefined8 FUN_145c08160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c08180 FUN_145c08180 body=37 status=ok
// SIG undefined FUN_145c08180(void)

void FUN_145c08180(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4306();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c081a6 FUN_145c081a6 body=37 status=ok
// SIG undefined FUN_145c081a6(void)

void FUN_145c081a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e430e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c081d6 FUN_145c081d6 body=165 status=ok
// SIG undefined FUN_145c081d6(void)

undefined8 * FUN_145c081d6(undefined8 *param_1)

{
  FUN_140c6b9f8();
  *param_1 = &PTR_FUN_14b38b0f0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 2;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0x100000000;
  *(undefined4 *)(param_1 + 0x16) = 0x3000;
  param_1[0x17] = "stat_collection";
  return param_1;
}



// FUNCTION 145c0827c FUN_145c0827c body=29 status=ok
// SIG undefined FUN_145c0827c(void)

void FUN_145c0827c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145c0829a FUN_145c0829a body=59 status=ok
// SIG undefined FUN_145c0829a(void)

undefined8 * FUN_145c0829a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b478e10;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c082d6 FUN_145c082d6 body=51 status=ok
// SIG undefined FUN_145c082d6(void)

void FUN_145c082d6(longlong *param_1)

{
  FUN_140457ffc(&DAT_14c8673d8,param_1);
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  FUN_145c08309();
  return;
}



// FUNCTION 145c08309 FUN_145c08309 body=37 status=ok
// SIG undefined FUN_145c08309(void)

void FUN_145c08309(void)

{
  if (DAT_14cb96650 != (HMODULE)0x0) {
    FreeLibrary(DAT_14cb96650);
    DAT_14cb96650 = (HMODULE)0x0;
  }
  return;
}



// FUNCTION 145c0832e FUN_145c0832e body=55 status=ok
// SIG undefined FUN_145c0832e(void)

void FUN_145c0832e(longlong *param_1)

{
  FUN_145c08366(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c08366 FUN_145c08366 body=384 status=ok
// SIG undefined FUN_145c08366(void)

void FUN_145c08366(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c084e8 FUN_145c084e8 body=119 status=ok
// SIG undefined FUN_145c084e8(void)

void FUN_145c084e8(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_1414dac37();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x100))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x50))(plVar2);
      uVar3 = (**(code **)(*plVar2 + 0xa0))(plVar2);
      FUN_140457ffc(uVar3,param_1);
      LOCK();
      *(undefined4 *)(param_1 + 0x1e) = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      UNLOCK();
      (**(code **)(*param_1 + 0x2b8))(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c0855c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b8))(param_1,0);
  return;
}



// FUNCTION 145c08560 FUN_145c08560 body=101 status=ok
// SIG undefined FUN_145c08560(void)

ulonglong FUN_145c08560(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((((int)param_1[7] == 0) || (0 < (int)param_1[6])) && (*(int *)((longlong)param_1 + 0x34) == 0)
     ) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x34) = 1;
    UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000145c085ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x2c0))(param_1);
    return uVar2;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 7);
  if (((*(uint *)(param_1 + 7) != 0) &&
      (uVar2 = (ulonglong)*(uint *)(param_1 + 6), (int)*(uint *)(param_1 + 6) < 1)) &&
     (uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x34),
     *(uint *)((longlong)param_1 + 0x34) != 0)) {
    (**(code **)(*param_1 + 0x2c8))(param_1);
    LOCK();
    uVar1 = *(uint *)((longlong)param_1 + 0x34);
    *(uint *)((longlong)param_1 + 0x34) = 0;
    uVar2 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 145c085d0 FUN_145c085d0 body=77 status=ok
// SIG undefined FUN_145c085d0(void)

undefined8 * FUN_145c085d0(undefined8 *param_1)

{
  FUN_141219ba0();
  *param_1 = &PTR_FUN_14b52ad20;
  param_1[5] = &PTR_FUN_14b52b040;
  *(undefined1 *)(param_1 + 0x30) = 1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  thunk_FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145c08628 FUN_145c08628 body=77 status=ok
// SIG undefined FUN_145c08628(void)

undefined8 * FUN_145c08628(undefined8 *param_1)

{
  FUN_145bcb802();
  *param_1 = &PTR_FUN_14b56c970;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 145c08676 FUN_145c08676 body=37 status=ok
// SIG undefined FUN_145c08676(void)

void FUN_145c08676(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4316();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c0869c FUN_145c0869c body=37 status=ok
// SIG undefined FUN_145c0869c(void)

void FUN_145c0869c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c086c2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c086c2 FUN_145c086c2 body=7 status=ok
// SIG undefined FUN_145c086c2(void)

undefined1 FUN_145c086c2(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x371);
}



// FUNCTION 145c086ca FUN_145c086ca body=37 status=ok
// SIG undefined FUN_145c086ca(void)

void FUN_145c086ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e431e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c086f0 FUN_145c086f0 body=37 status=ok
// SIG undefined FUN_145c086f0(void)

void FUN_145c086f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c08716();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08716 FUN_145c08716 body=7 status=ok
// SIG undefined FUN_145c08716(void)

undefined1 FUN_145c08716(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x367);
}



// FUNCTION 145c0871e FUN_145c0871e body=37 status=ok
// SIG undefined FUN_145c0871e(void)

void FUN_145c0871e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c08744();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08744 FUN_145c08744 body=7 status=ok
// SIG undefined FUN_145c08744(void)

undefined1 FUN_145c08744(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3e5);
}



// FUNCTION 145c0874c FUN_145c0874c body=37 status=ok
// SIG undefined FUN_145c0874c(void)

void FUN_145c0874c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c08772();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08772 FUN_145c08772 body=7 status=ok
// SIG undefined FUN_145c08772(void)

undefined4 FUN_145c08772(longlong param_1)

{
  return *(undefined4 *)(param_1 + 1000);
}



// FUNCTION 145c0877a FUN_145c0877a body=37 status=ok
// SIG undefined FUN_145c0877a(void)

void FUN_145c0877a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4326();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c087a0 FUN_145c087a0 body=37 status=ok
// SIG undefined FUN_145c087a0(void)

void FUN_145c087a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e432e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c087c6 FUN_145c087c6 body=37 status=ok
// SIG undefined FUN_145c087c6(void)

void FUN_145c087c6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c087ec();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c087ec FUN_145c087ec body=7 status=ok
// SIG undefined FUN_145c087ec(void)

undefined1 FUN_145c087ec(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b0);
}



// FUNCTION 145c087f4 FUN_145c087f4 body=37 status=ok
// SIG undefined FUN_145c087f4(void)

void FUN_145c087f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4336();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c0881a FUN_145c0881a body=37 status=ok
// SIG undefined FUN_145c0881a(void)

void FUN_145c0881a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e433e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08840 FUN_145c08840 body=37 status=ok
// SIG undefined FUN_145c08840(void)

void FUN_145c08840(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4346();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08866 FUN_145c08866 body=37 status=ok
// SIG undefined FUN_145c08866(void)

void FUN_145c08866(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e434e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c0888c FUN_145c0888c body=37 status=ok
// SIG undefined FUN_145c0888c(void)

void FUN_145c0888c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4356();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c088b2 FUN_145c088b2 body=37 status=ok
// SIG undefined FUN_145c088b2(void)

void FUN_145c088b2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e435e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c088d8 FUN_145c088d8 body=37 status=ok
// SIG undefined FUN_145c088d8(void)

void FUN_145c088d8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c088fe();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c088fe FUN_145c088fe body=7 status=ok
// SIG undefined FUN_145c088fe(void)

undefined1 FUN_145c088fe(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x39c);
}



// FUNCTION 145c08906 FUN_145c08906 body=37 status=ok
// SIG undefined FUN_145c08906(void)

void FUN_145c08906(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4366();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c0892c FUN_145c0892c body=37 status=ok
// SIG undefined FUN_145c0892c(void)

void FUN_145c0892c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e436e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08952 FUN_145c08952 body=37 status=ok
// SIG undefined FUN_145c08952(void)

void FUN_145c08952(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4376();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08978 FUN_145c08978 body=37 status=ok
// SIG undefined FUN_145c08978(void)

void FUN_145c08978(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e437e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c0899e FUN_145c0899e body=37 status=ok
// SIG undefined FUN_145c0899e(void)

void FUN_145c0899e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4386();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c089c4 FUN_145c089c4 body=37 status=ok
// SIG undefined FUN_145c089c4(void)

void FUN_145c089c4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c089ea();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c089ea FUN_145c089ea body=7 status=ok
// SIG undefined FUN_145c089ea(void)

undefined4 FUN_145c089ea(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3f0);
}



// FUNCTION 145c089f2 FUN_145c089f2 body=37 status=ok
// SIG undefined FUN_145c089f2(void)

void FUN_145c089f2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c08a18();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08a18 FUN_145c08a18 body=44 status=ok
// SIG undefined FUN_145c08a18(void)

ulonglong FUN_145c08a18(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1458f73f0();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145c08a44(lVar2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145c08a44 FUN_145c08a44 body=7 status=ok
// SIG undefined FUN_145c08a44(void)

undefined1 FUN_145c08a44(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



// FUNCTION 145c08a4c FUN_145c08a4c body=37 status=ok
// SIG undefined FUN_145c08a4c(void)

void FUN_145c08a4c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c08a72();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08a72 FUN_145c08a72 body=44 status=ok
// SIG undefined FUN_145c08a72(void)

ulonglong FUN_145c08a72(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1458f73f0();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145c08a9e(lVar2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145c08a9e FUN_145c08a9e body=7 status=ok
// SIG undefined FUN_145c08a9e(void)

undefined1 FUN_145c08a9e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x82);
}



// FUNCTION 145c08aa6 FUN_145c08aa6 body=37 status=ok
// SIG undefined FUN_145c08aa6(void)

void FUN_145c08aa6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e438e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08acc FUN_145c08acc body=37 status=ok
// SIG undefined FUN_145c08acc(void)

void FUN_145c08acc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e4396();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08af2 FUN_145c08af2 body=37 status=ok
// SIG undefined FUN_145c08af2(void)

void FUN_145c08af2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e439e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08b18 FUN_145c08b18 body=37 status=ok
// SIG undefined FUN_145c08b18(void)

void FUN_145c08b18(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414e43a6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145c08b3e FUN_145c08b3e body=137 status=ok
// SIG undefined FUN_145c08b3e(void)

longlong * FUN_145c08b3e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = FUN_145c08bc8();
  plVar4 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b98f570;
  FUN_145c08bd2(plVar4 + 2,uVar3);
  *param_2 = (longlong)(plVar4 + 2);
  param_2[1] = (longlong)plVar4;
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
  return param_2;
}



// FUNCTION 145c08bc8 FUN_145c08bc8 body=9 status=ok
// SIG undefined FUN_145c08bc8(void)

undefined8 FUN_145c08bc8(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x38);
}



// FUNCTION 145c08bd2 FUN_145c08bd2 body=161 status=ok
// SIG undefined FUN_145c08bd2(void)

undefined8 * FUN_145c08bd2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2 != 0) {
    lVar1 = FUN_1403ca142();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (uVar2 = 4,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
       == lVar1 + 0x30)) goto LAB_145c08c21;
  }
  uVar2 = 0;
LAB_145c08c21:
  FUN_145c08c74(param_1,param_2,uVar2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b98e130;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c08c74 FUN_145c08c74 body=196 status=ok
// SIG undefined FUN_145c08c74(void)

undefined8 *
FUN_145c08c74(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_145c08d38(param_1,param_2,DAT_14c892fbc);
  *param_1 = &PTR_FUN_14b4ef6b0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 145c08d38 FUN_145c08d38 body=199 status=ok
// SIG undefined FUN_145c08d38(void)

undefined8 * FUN_145c08d38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14b4ef980;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1400021e4(param_1 + 2,&local_40);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(local_30,L"GbxSession_%s",puVar2);
  uVar1 = FUN_1413da074(local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  param_1[5] = uVar1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c08e00 FUN_145c08e00 body=40 status=ok
// SIG undefined FUN_145c08e00(void)

undefined8 FUN_145c08e00(undefined8 param_1,int param_2)

{
  FUN_145c08e28();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c08e28 FUN_145c08e28 body=59 status=ok
// SIG undefined FUN_145c08e28(void)

void FUN_145c08e28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd39ed0;
  FUN_145c08e63(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145907244(param_1);
  return;
}



// FUNCTION 145c08e63 FUN_145c08e63 body=77 status=ok
// SIG undefined FUN_145c08e63(void)

void FUN_145c08e63(longlong param_1,int param_2)

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



// FUNCTION 145c08eb0 FUN_145c08eb0 body=427 status=ok
// SIG undefined FUN_145c08eb0(void)

void FUN_145c08eb0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x358) = uVar4;
    plVar5 = *(longlong **)(param_1 + 0x360);
    if (plVar5 == (longlong *)0x0) goto LAB_145c08f24;
    *(undefined8 *)(param_1 + 0x360) = 0;
LAB_145c08fbe:
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_145c08f24;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x358) = uVar4;
    plVar5 = *(longlong **)(param_1 + 0x360);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x360) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_145c08fbe;
    }
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_145c08f24:
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_140cc9e04(param_1,&local_48,param_3,param_4);
  uVar4 = FUN_145c0905c(*(undefined8 *)(param_1 + 0x358));
  *(undefined8 *)(param_1 + 0x368) = uVar4;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c0905c FUN_145c0905c body=144 status=ok
// SIG undefined FUN_145c0905c(void)

undefined8 FUN_145c0905c(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x2e0) == 0) || (0xfffffffd < *(int *)(param_1 + 0x2e8) - 1U)) {
    uVar1 = 0;
  }
  else {
    local_40 = *(longlong *)(param_1 + 0x2e0);
    FUN_1446dcdd4(local_38);
    if (DAT_14cb85168 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_144837462(DAT_14cb85168,local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c090ee FUN_145c090ee body=63 status=ok
// SIG undefined FUN_145c090ee(void)

undefined1 FUN_145c090ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145c0912e(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 145c0912e FUN_145c0912e body=262 status=ok
// SIG undefined FUN_145c0912e(void)

longlong FUN_145c0912e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  uVar1 = *(undefined4 *)(param_2 + 0xe4);
  uVar2 = *(undefined4 *)(param_2 + 0xe8);
  uVar3 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  FUN_145c09234(param_1 + 0xf8,param_2 + 0xf8);
  puVar13 = (undefined8 *)(param_2 + 0x108);
  puVar14 = (undefined8 *)(param_1 + 0x108);
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  return param_1;
}



// FUNCTION 145c09234 FUN_145c09234 body=89 status=ok
// SIG undefined FUN_145c09234(void)

undefined8 * FUN_145c09234(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145c0928e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c0928e FUN_145c0928e body=115 status=ok
// SIG undefined FUN_145c0928e(void)

void FUN_145c0928e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,4);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145c09302 FUN_145c09302 body=72 status=ok
// SIG undefined FUN_145c09302(void)

void FUN_145c09302(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x9e8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145c09332. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x9f0))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerTryToThrow_Validate");
  return;
}



// FUNCTION 145c09360 FUN_145c09360 body=141 status=ok
// SIG undefined FUN_145c09360(void)

void FUN_145c09360(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c093ee(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7fac10;
  puVar1[5] = &PTR_FUN_14b7faed0;
  puVar1[6] = &PTR_FUN_14b7faf10;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 2;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
  puVar1[0x1c] = 0;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  return;
}



// FUNCTION 145c093ee FUN_145c093ee body=124 status=ok
// SIG undefined FUN_145c093ee(void)

undefined8 * FUN_145c093ee(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = &PTR_LAB_14b2a8bc0;
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14b2a8840;
  param_1[5] = &PTR_FUN_14b2a8b00;
  param_1[6] = &PTR_FUN_14b2a8b40;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    FUN_1449db8d8(param_1 + 6);
  }
  return param_1;
}



// FUNCTION 145c09476 FUN_145c09476 body=232 status=ok
// SIG undefined FUN_145c09476(void)

undefined8 * FUN_145c09476(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 2;
  *param_1 = &PTR_FUN_14b11e7f0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x412000003f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x42c80000;
  param_1[0xe] = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0xf] = DAT_14c8463f0;
  param_1[0x10] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x11] = DAT_14c8463f0;
  param_1[0x12] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x13] = DAT_14c8463f0;
  param_1[0x14] = uVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x55000000469c4000;
  param_1[0x19] = 0x55000000469c4000;
  param_1[0x1a] = 0x1003f000000;
  *(undefined4 *)(param_1 + 0x1b) = 0x100;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xffffffff00000000;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 145c0955e FUN_145c0955e body=747 status=ok
// SIG undefined FUN_145c0955e(void)

void FUN_145c0955e(undefined8 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  wchar_t *_Str;
  undefined2 *puVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong alStack_80 [3];
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = (int)param_2[1];
  if (iVar2 == DAT_14cbced88) {
    if (1 < iVar2) {
      lVar7 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*param_2 + lVar7);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)(DAT_14cbced80 + lVar7);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_145c0979a;
LAB_145c0976b:
        lVar7 = lVar7 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_145c0976b;
      }
      if (uVar8 != uVar10) goto LAB_145c09599;
    }
  }
  else if (DAT_14cbced88 + iVar2 != 1) {
LAB_145c09599:
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    FUN_1403de9f2(param_2,&local_a8,&DAT_149e001d8,1);
    if ((int)uStack_a0 == 8) {
      _Str = L"";
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(local_a8 + 1) != 0) {
        puVar5 = (undefined2 *)*local_a8;
      }
      FUN_1446f470e(&local_98,puVar5,1);
      *param_1 = local_98;
      pwVar3 = L"";
      if (*(int *)(local_a8 + 3) != 0) {
        pwVar3 = (wchar_t *)local_a8[2];
      }
      iVar2 = _wtoi(pwVar3);
      *(int *)(param_1 + 1) = iVar2;
      pwVar3 = L"";
      if (*(int *)(local_a8 + 5) != 0) {
        pwVar3 = (wchar_t *)local_a8[4];
      }
      iVar2 = _wtoi(pwVar3);
      *(int *)((longlong)param_1 + 0xc) = iVar2;
      if (*(int *)(local_a8 + 7) != 0) {
        _Str = (wchar_t *)local_a8[6];
      }
      iVar2 = _wtoi(_Str);
      *(int *)(param_1 + 2) = iVar2;
      FUN_14000bbd8(&local_98,local_a8 + 8,0);
      FUN_1404e49fa(param_1 + 3,&local_98);
      if (alStack_80[0] != 0) {
        FUN_1400020a8();
      }
      puVar6 = &DAT_149dfb77a;
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(local_a8 + 0xb) != 0) {
        puVar5 = (undefined2 *)local_a8[10];
      }
      uVar1 = FUN_14052c20c(puVar5);
      *(undefined1 *)(param_1 + 8) = uVar1;
      if (*(int *)(local_a8 + 0xd) != 0) {
        puVar6 = (undefined2 *)local_a8[0xc];
      }
      FUN_1446f470e(&local_98,puVar6,1);
      *(undefined8 *)((longlong)param_1 + 0x44) = local_98;
      FUN_14000bbd8(&local_98,local_a8 + 0xe,0);
      FUN_1404e49fa(param_1 + 10,&local_98);
      if (alStack_80[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_1447a1747(local_a8,(int)uStack_a0);
    puVar4 = local_a8;
    goto LAB_145c0970e;
  }
LAB_145c0979a:
  local_98 = 0;
  local_88 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  uStack_90 = 1;
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  uStack_50 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_58 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  FUN_1404e49fa(param_1 + 3,alStack_80);
  param_1[8] = local_58;
  *(undefined4 *)(param_1 + 9) = (undefined4)uStack_50;
  FUN_1404e49fa(param_1 + 10,&local_48);
  puVar4 = local_68;
  if (local_30 != 0) {
    FUN_1400020a8();
    puVar4 = local_68;
  }
LAB_145c0970e:
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c0984a FUN_145c0984a body=418 status=ok
// SIG undefined FUN_145c0984a(void)

ulonglong FUN_145c0984a(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  void *_Src;
  int iVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_140056680(&local_78,&DAT_149e31048);
  cVar2 = FUN_1407cdba6(param_2,&local_78,&local_48,&local_58);
  if (cVar2 == '\0') {
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar1 = (int)uStack_40;
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
    if (1 < iVar1) {
      local_5c = 0;
      cVar2 = FUN_145c099ed(&local_48);
      _Src = local_58;
      if (cVar2 != '\0') {
        local_78 = local_5c;
        local_70 = (void *)0x0;
        lVar3 = (longlong)(int)uStack_50;
        local_68 = (int)uStack_50;
        if (lVar3 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,uStack_50 & 0xffffffff,0);
          memcpy(local_70,_Src,lVar3 * 2);
        }
        *param_3 = local_78;
        if (&local_78 == param_3) {
          if (local_70 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_3 + 2) != 0) {
            FUN_1400020a8();
          }
          *(void **)(param_3 + 2) = local_70;
          local_70 = (void *)0x0;
          param_3[4] = local_68;
          param_3[5] = local_64;
        }
        uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_145c0996f;
      }
    }
  }
  uVar4 = 0;
LAB_145c0996f:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c099ed FUN_145c099ed body=386 status=ok
// SIG undefined FUN_145c099ed(void)

undefined8 FUN_145c099ed(undefined8 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  lVar3 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)puVar1 + lVar3);
    uVar4 = (ulonglong)uVar5;
    uVar6 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar3);
    if (uVar5 != uVar6) break;
    if (uVar5 == 0) goto LAB_145c09b4d;
LAB_145c09a2a:
    lVar3 = lVar3 + 2;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_145c09a2a;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_145c09a63;
  }
LAB_145c09b4d:
  uVar2 = 0;
  goto LAB_145c09b50;
LAB_145c09a63:
  uVar5 = *(ushort *)((longlong)puVar1 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"OnlineSession" + lVar3);
  if (uVar5 != uVar6) {
    if ((uVar6 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_145c09a7c;
    }
    uVar2 = 1;
    if (uVar5 == uVar6) goto LAB_145c09b50;
    lVar3 = 0;
    goto LAB_145c09abb;
  }
  if (uVar5 == 0) goto LAB_145c09b57;
LAB_145c09a7c:
  lVar3 = lVar3 + 2;
  goto LAB_145c09a63;
LAB_145c09abb:
  uVar5 = *(ushort *)((longlong)puVar1 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"OnlineSessionSeamless" + lVar3);
  if (uVar5 == uVar6) {
    if (uVar5 == 0) goto LAB_145c09b5f;
LAB_145c09ad4:
    lVar3 = lVar3 + 2;
    goto LAB_145c09abb;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_145c09ad4;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_145c09b09;
  }
LAB_145c09b5f:
  uVar2 = 2;
  goto LAB_145c09b50;
LAB_145c09b57:
  uVar2 = 1;
  goto LAB_145c09b50;
LAB_145c09b09:
  uVar5 = *(ushort *)((longlong)puVar1 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"OnlineSessionSeamlessLocked" + lVar3);
  if (uVar5 == uVar6) {
    if (uVar5 == 0) goto LAB_145c09b67;
LAB_145c09b1e:
    lVar3 = lVar3 + 2;
    goto LAB_145c09b09;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_145c09b1e;
  }
  if (uVar5 != uVar6) {
    return 0;
  }
LAB_145c09b67:
  uVar2 = 3;
LAB_145c09b50:
  *param_2 = uVar2;
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// FUNCTION 145c09b70 FUN_145c09b70 body=55 status=ok
// SIG undefined FUN_145c09b70(void)

void FUN_145c09b70(longlong *param_1)

{
  FUN_145c09ba8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c09ba8 FUN_145c09ba8 body=121 status=ok
// SIG undefined FUN_145c09ba8(void)

void FUN_145c09ba8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c09c22 FUN_145c09c22 body=40 status=ok
// SIG undefined FUN_145c09c22(void)

undefined8 FUN_145c09c22(undefined8 param_1,int param_2)

{
  FUN_145c09c4a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c09c4a FUN_145c09c4a body=74 status=ok
// SIG undefined FUN_145c09c4a(void)

void FUN_145c09c4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a16b060;
  FUN_140457ffc(&DAT_14c872cf8,param_1);
  FUN_145c09c94(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c09c94 FUN_145c09c94 body=63 status=ok
// SIG undefined FUN_145c09c94(void)

void FUN_145c09c94(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c09cde FUN_145c09cde body=166 status=ok
// SIG undefined FUN_145c09cde(void)

undefined8 * FUN_145c09cde(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14ae4ed50;
  param_1[5] = &PTR_FUN_14ae4f050;
  FUN_140ca8f8e(param_1 + 0x2e);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 2;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x54] = 2;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  FUN_140e2f50a(param_1,4);
  return param_1;
}



// FUNCTION 145c09d84 FUN_145c09d84 body=158 status=ok
// SIG undefined FUN_145c09d84(void)

bool FUN_145c09d84(longlong param_1,undefined8 param_2)

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



// FUNCTION 145c09e38 FUN_145c09e38 body=55 status=ok
// SIG undefined FUN_145c09e38(void)

void FUN_145c09e38(longlong *param_1)

{
  FUN_145c09e70(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c09e70 FUN_145c09e70 body=121 status=ok
// SIG undefined FUN_145c09e70(void)

void FUN_145c09e70(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c09eea FUN_145c09eea body=55 status=ok
// SIG undefined FUN_145c09eea(void)

void FUN_145c09eea(longlong *param_1)

{
  FUN_145c09f22(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c09f22 FUN_145c09f22 body=121 status=ok
// SIG undefined FUN_145c09f22(void)

void FUN_145c09f22(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c09f9c FUN_145c09f9c body=55 status=ok
// SIG undefined FUN_145c09f9c(void)

void FUN_145c09f9c(longlong *param_1)

{
  FUN_145c09fd4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c09fd4 FUN_145c09fd4 body=121 status=ok
// SIG undefined FUN_145c09fd4(void)

void FUN_145c09fd4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c0a04e FUN_145c0a04e body=55 status=ok
// SIG undefined FUN_145c0a04e(void)

void FUN_145c0a04e(longlong *param_1)

{
  FUN_145c0a086(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c0a086 FUN_145c0a086 body=121 status=ok
// SIG undefined FUN_145c0a086(void)

void FUN_145c0a086(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c0a100 FUN_145c0a100 body=55 status=ok
// SIG undefined FUN_145c0a100(void)

void FUN_145c0a100(longlong *param_1)

{
  FUN_145c0a138(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c0a138 FUN_145c0a138 body=121 status=ok
// SIG undefined FUN_145c0a138(void)

void FUN_145c0a138(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c0a1be FUN_145c0a1be body=134 status=ok
// SIG undefined FUN_145c0a1be(void)

undefined8 * FUN_145c0a1be(undefined8 *param_1)

{
  FUN_145c0a244();
  *param_1 = &PTR_FUN_14bc0b680;
  *(undefined2 *)(param_1 + 5) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3c23d70a3c23d70a;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3c23d70a3a83126f;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 145c0a244 FUN_145c0a244 body=32 status=ok
// SIG undefined FUN_145c0a244(void)

undefined8 * FUN_145c0a244(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bb6c250;
  return param_1;
}



// FUNCTION 145c0a264 FUN_145c0a264 body=177 status=ok
// SIG undefined FUN_145c0a264(void)

void FUN_145c0a264(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145c0a316();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9c8e28,param_4);
  local_78 = &DAT_14c9c8e28;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_145c0a41a(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0a316 FUN_145c0a316 body=258 status=ok
// SIG undefined FUN_145c0a316(void)

void FUN_145c0a316(void)

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
              0x110) < DAT_14c9c8ea8) {
    FUN_144b3d300(&DAT_14c9c8ea8);
    if (DAT_14c9c8ea8 == -1) {
      FUN_145c0a5a6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x6e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8e28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be778a);
      _Init_thread_footer(&DAT_14c9c8ea8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0a41a FUN_145c0a41a body=395 status=ok
// SIG undefined FUN_145c0a41a(void)

void FUN_145c0a41a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9c8e70;
  if (DAT_14c9c8e70 != 0) {
    LOCK();
    *(int *)(DAT_14c9c8e70 + 8) = *(int *)(DAT_14c9c8e70 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9c8e28;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a20b310;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0a5a6 FUN_145c0a5a6 body=226 status=ok
// SIG undefined FUN_145c0a5a6(void)

longlong * FUN_145c0a5a6(longlong *param_1)

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
  pcVar13 = FUN_1462c124e;
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



// FUNCTION 145c0a68e FUN_145c0a68e body=132 status=ok
// SIG undefined FUN_145c0a68e(void)

undefined1 * FUN_145c0a68e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDistanceFieldBrickAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<UNORM float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c0a68a;
}



// FUNCTION 145c0a712 FUN_145c0a712 body=439 status=ok
// SIG undefined FUN_145c0a712(void)

undefined8 *
FUN_145c0a712(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = param_3[1];
  if (lVar8 == 0) {
    uVar7 = FUN_145cd93aa();
    lVar8 = FUN_14477b664(uVar7);
    param_3[1] = lVar8;
  }
  if (param_3[2] != 0) {
LAB_145c0a7ab:
    if (lVar8 == 0) {
      lVar8 = FUN_145cd93aa();
    }
    lVar2 = *param_3;
    uVar9 = FUN_14477b664(lVar8);
    uVar4 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
    uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar10 = (uint)lVar2 & 0xffff;
    uVar6 = FUN_144a78877(((uint)lVar2 << 0x10 | uVar10) + (int)((ulonglong)lVar2 >> 0x20) +
                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4),uVar5 >> 0x10 ^ uVar5);
    lVar8 = FUN_145c0a8ca(param_1 + 0x198,uVar6,param_3);
    local_40 = 0;
    local_38 = 0;
    FUN_145c0a952(&local_40,param_4);
    FUN_145c0aa46(lVar8 + 0x10,param_2,&local_40);
    FUN_1449db362(&local_40);
    goto LAB_145c0a865;
  }
  if ((lVar8 != 0) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar8 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 != '\0') {
        uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar8 = FUN_144aff482(uVar7,param_3);
        param_3[2] = lVar8;
        if (lVar8 != 0) {
          lVar8 = param_3[1];
          goto LAB_145c0a7ab;
        }
        goto LAB_145c0a89b;
      }
    }
    param_3[2] = 0;
  }
LAB_145c0a89b:
  *param_2 = 0;
LAB_145c0a865:
  FUN_1449db362(param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0a8ca FUN_145c0a8ca body=135 status=ok
// SIG undefined FUN_145c0a8ca(void)

longlong FUN_145c0a8ca(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1412208fe();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x48 != 0) goto LAB_145c0a904;
  }
  local_30 = param_3;
  FUN_145c0abda(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145c0a904:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x48 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0a952 FUN_145c0a952 body=124 status=ok
// SIG undefined FUN_145c0a952(void)

void FUN_145c0a952(longlong *param_1,longlong *param_2)

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



// FUNCTION 145c0a9d0 FUN_145c0a9d0 body=118 status=ok
// SIG undefined FUN_145c0a9d0(void)

void FUN_145c0a9d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b429390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 145c0aa46 FUN_145c0aa46 body=216 status=ok
// SIG undefined FUN_145c0aa46(void)

undefined8 * FUN_145c0aa46(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145c0ab64 FUN_145c0ab64 body=118 status=ok
// SIG undefined FUN_145c0ab64(void)

void FUN_145c0ab64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b429390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429320;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 145c0abda FUN_145c0abda body=269 status=ok
// SIG undefined FUN_145c0abda(void)

undefined4 * FUN_145c0abda(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_145c0ae00(param_1,local_48);
  FUN_145c0ad6c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x40) = 0xffffffff;
  cVar1 = FUN_145c0ace8(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x40) =
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
      FUN_145c0aee8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0ace8 FUN_145c0ace8 body=132 status=ok
// SIG undefined FUN_145c0ace8(void)

undefined8 FUN_145c0ace8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_1412208fe(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    FUN_1457b4098(puVar1 + 6);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    uVar14 = param_3[0xd];
    uVar15 = param_3[0xe];
    uVar16 = param_3[0xf];
    puVar1[0xc] = param_3[0xc];
    puVar1[0xd] = uVar14;
    puVar1[0xe] = uVar15;
    puVar1[0xf] = uVar16;
    puVar1[8] = uVar10;
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_148982460(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 145c0ad6c FUN_145c0ad6c body=147 status=ok
// SIG undefined FUN_145c0ad6c(void)

longlong FUN_145c0ad6c(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 2;
  FUN_145c882a2(param_2,*param_1);
  *(undefined8 *)(param_2 + 0x18) = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 2;
  FUN_14019d794(param_2 + 0x28,&local_48);
  FUN_1457b4098(&local_58);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c0ae00 FUN_145c0ae00 body=231 status=ok
// SIG undefined FUN_145c0ae00(void)

int * FUN_145c0ae00(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 145c0aee8 FUN_145c0aee8 body=565 status=ok
// SIG undefined FUN_145c0aee8(void)

void FUN_145c0aee8(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar5 != uVar10);
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
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar11 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar3 = *local_80;
        lVar8 = *(longlong *)(lVar3 + 8 + (longlong)iVar11 * 0x48);
        if (lVar8 == 0) {
          lVar8 = FUN_145cd93aa();
        }
        puVar2 = (undefined8 *)(lVar3 + (longlong)iVar11 * 0x48);
        uVar4 = *puVar2;
        uVar7 = FUN_14477b664(lVar8);
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar10 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar12 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar12) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4),
                              uVar10 >> 0x10 ^ uVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)((longlong)puVar2 + 0x44) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(puVar2 + 8) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar11 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c0b11e FUN_145c0b11e body=38 status=ok
// SIG undefined FUN_145c0b11e(void)

undefined8 FUN_145c0b11e(undefined8 param_1,int param_2)

{
  FUN_145c0b144();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0b144 FUN_145c0b144 body=117 status=ok
// SIG undefined FUN_145c0b144(void)

void FUN_145c0b144(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e0e90;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c0b1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c0b1ba FUN_145c0b1ba body=40 status=ok
// SIG undefined FUN_145c0b1ba(void)

undefined8 FUN_145c0b1ba(undefined8 param_1,int param_2)

{
  FUN_145c0b1e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c0b1e2 FUN_145c0b1e2 body=151 status=ok
// SIG undefined FUN_145c0b1e2(void)

void FUN_145c0b1e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b008e70;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0b2aa(param_1 + 0x7f);
  FUN_145c0b2df(param_1[0x7d],*(undefined4 *)(param_1 + 0x7e));
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0b279(param_1[0x7b],*(undefined4 *)(param_1 + 0x7c));
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c0b279 FUN_145c0b279 body=49 status=ok
// SIG undefined FUN_145c0b279(void)

void FUN_145c0b279(longlong param_1,int param_2)

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



// FUNCTION 145c0b2aa FUN_145c0b2aa body=53 status=ok
// SIG undefined FUN_145c0b2aa(void)

void FUN_145c0b2aa(longlong *param_1)

{
  FUN_145c0b31c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c0b2df FUN_145c0b2df body=60 status=ok
// SIG undefined FUN_145c0b2df(void)

void FUN_145c0b2df(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_148627934(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c0b31c FUN_145c0b31c body=90 status=ok
// SIG undefined FUN_145c0b31c(void)

void FUN_145c0b31c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
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


