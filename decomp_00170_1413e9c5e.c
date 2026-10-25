// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413e9c5e FUN_1413e9c5e body=959 status=ok
// SIG undefined FUN_1413e9c5e(void)

longlong * FUN_1413e9c5e(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = param_2;
  plVar7 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b47bb10;
  local_a0 = plVar7 + 2;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  FUN_1413ea01e();
  plVar7[2] = (longlong)&PTR_FUN_14b4735a0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  local_b0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    local_a8 = plVar7 + 0xc;
    lVar4 = *(longlong *)(param_1 + 0x30);
    local_90 = (longlong)*(int *)(param_1 + 0x38) * 0x58;
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + 0x28 + lVar10);
      if (plVar5 == (longlong *)0x0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(lVar4 + 0x30 + lVar10);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
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
        local_70 = plVar5;
        local_68 = plVar8;
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_88,param_3[1],&local_70);
        plVar5 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_68 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        plVar5 = plStack_80;
        if (local_88 != (longlong *)0x0) {
          if (plStack_80 == (longlong *)0x0) {
            uVar9 = *param_3;
            plVar8 = *(longlong **)(lVar4 + 0x40 + lVar10);
            if ((plVar8 != (longlong *)0x0) ||
               (plVar8 = *(longlong **)(local_b0 + 0x40), plVar8 != (longlong *)0x0)) {
              local_68 = (longlong *)0x0;
              goto LAB_1413e9dcc;
            }
          }
          else {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
            uVar9 = *param_3;
            plVar8 = *(longlong **)(lVar4 + 0x40 + lVar10);
            if ((plVar8 != (longlong *)0x0) ||
               (plVar8 = *(longlong **)(local_b0 + 0x40), plVar8 != (longlong *)0x0)) {
              local_68 = plStack_80;
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
LAB_1413e9dcc:
              local_70 = local_88;
              (**(code **)(*plVar8 + 0x18))(plVar8,uVar9,&local_70);
              plVar8 = local_68;
              if (local_68 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_68 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_68)(local_68);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              if (plVar5 == (longlong *)0x0) goto LAB_1413e9dfa;
            }
            LOCK();
            plVar8 = plVar5 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
LAB_1413e9dfa:
          plVar8 = plStack_80;
          plVar5 = local_88;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          iVar3 = (int)plVar7[0xd];
          *(uint *)(plVar7 + 0xd) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar7 + 0x6c) < iVar3 + 1U) {
            FUN_1459554bc(local_a8,iVar3);
          }
          lVar6 = *local_a8;
          *(longlong **)(lVar6 + (longlong)iVar3 * 0x10) = plVar5;
          *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            plVar5 = plVar8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
        }
      }
      plVar5 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_80 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar10 = lVar10 + 0x58;
    } while (local_90 != lVar10);
  }
  plVar5 = local_98;
  *local_98 = (longlong)local_a0;
  local_98[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1413ea01e FUN_1413ea01e body=56 status=ok
// SIG undefined FUN_1413ea01e(void)

void FUN_1413ea01e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b42acb0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  return;
}



// FUNCTION 1413ea056 FUN_1413ea056 body=452 status=ok
// SIG undefined FUN_1413ea056(void)

void FUN_1413ea056(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
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
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
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



// FUNCTION 1413ea21c FUN_1413ea21c body=109 status=ok
// SIG undefined FUN_1413ea21c(void)

void FUN_1413ea21c(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *(undefined1 *)(param_1 + 0x2d8) = 0;
  }
  else {
    FUN_1413ea28a(param_1,*(longlong *)(param_1 + 0x18) + 0x8c);
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x2e0) == '\x01') {
      fVar1 = *(float *)(param_1 + 0x94);
      fVar2 = (float)FUN_14085b07e(*(longlong *)(param_1 + 0x18) + 0x2d8);
      *(float *)(param_1 + 0xa0) = fVar2 + fVar1;
      *(undefined1 *)(param_1 + 0xa4) = 1;
    }
  }
  return;
}



// FUNCTION 1413ea28a FUN_1413ea28a body=748 status=ok
// SIG undefined FUN_1413ea28a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413ea28a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_1 + 0x2b0);
  uVar14 = param_2[1];
  uVar16 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0x2ac) = *param_2;
  *(undefined8 *)(param_1 + 0x2b4) = uVar14;
  *(undefined4 *)(param_1 + 700) = uVar16;
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  *(undefined4 *)(param_1 + 0x2c4) = uVar4;
  *(undefined4 *)(param_1 + 0x2c8) = uVar5;
  *(undefined4 *)(param_1 + 0x2c8) = uVar6;
  *(undefined4 *)(param_1 + 0x2cc) = uVar7;
  *(undefined4 *)(param_1 + 0x2d0) = uVar8;
  *(undefined4 *)(param_1 + 0x2d4) = uVar9;
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_1 + 0x2ac);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x94);
  FUN_14038ea56();
  FUN_14038c224(param_1,1,0);
  cVar10 = *(char *)(param_1 + 0x2ac);
  if (cVar10 == '\0') goto LAB_1413ea501;
  if (*(char *)(param_1 + 700) == '\x01') {
    uVar16 = FUN_14085b07e(param_1 + 0x2c0);
    *(undefined4 *)(param_1 + 0x29c) = uVar16;
    cVar10 = *(char *)(param_1 + 0x2ac);
  }
  if (cVar10 != '\x01') goto LAB_1413ea501;
  local_20 = 0;
  lVar12 = FUN_14477bcf0();
  local_30 = *(longlong *)(lVar12 + 0x30);
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  if (*(int *)(param_1 + 0x2e0) == 0) {
LAB_1413ea525:
    lVar12 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x2dc);
    lVar12 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)(param_1 + 0x2e0) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1413ea525;
      lVar12 = *plVar13;
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1413ea52c:
    uVar14 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar14 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar15 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar15 == (undefined8 *)0x0) ||
         ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_1413ea52c;
      uVar14 = *puVar15;
    }
  }
  local_28 = lVar12;
  FUN_14038cdaa(&local_a0,uVar14,&local_30);
  local_78 = local_a0;
  local_70 = local_98;
  local_68 = local_90;
  local_60 = local_88;
  if (local_88 == (longlong *)0x0) {
    local_58 = local_80;
    local_50 = 0x43fa0000;
  }
  else {
    LOCK();
    *(int *)((longlong)local_88 + 0xc) = *(int *)((longlong)local_88 + 0xc) + 1;
    UNLOCK();
    local_58 = local_80;
    local_50 = 0x43fa0000;
    local_48 = _DAT_14cbc5fd8;
    uStack_44 = uRam000000014cbc5fdc;
    uStack_40 = _DAT_14cbc5fe0;
    uStack_3c = uRam000000014cbc5fe4;
    local_38 = DAT_14cbc5fe8;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
  }
  local_48 = *(undefined4 *)(param_1 + 0x50);
  uStack_44 = *(undefined4 *)(param_1 + 0x54);
  uStack_40 = *(undefined4 *)(param_1 + 0x58);
  uStack_3c = *(undefined4 *)(param_1 + 0x5c);
  local_38 = *(undefined8 *)(param_1 + 0x60);
  bVar11 = FUN_14039a954(&local_78,param_1 + 0x130);
  *(byte *)(param_1 + 0x290) = bVar11 ^ 1;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
LAB_1413ea501:
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413ea578 FUN_1413ea578 body=22 status=ok
// SIG undefined FUN_1413ea578(void)

undefined8 FUN_1413ea578(undefined8 param_1)

{
  FUN_1402347c4();
  return param_1;
}



// FUNCTION 1413ea58e FUN_1413ea58e body=819 status=ok
// SIG undefined FUN_1413ea58e(void)

void FUN_1413ea58e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if (((lVar7 != 0) && ((*(byte *)(lVar7 + 0x155) & 0x20) == 0)) &&
     (*(char *)(lVar7 + 0x158) == '\0')) {
    if (param_1[0x76] == 0) {
      if (((param_1[0x141] == 0) || (param_1[0x142] == 0)) || (*(int *)(param_1[0x142] + 8) < 1)) {
        uVar9 = FUN_1401cb356();
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,3,0x10);
        puVar4 = local_50;
        local_48 = 3;
        *local_50 = &PTR_LAB_149e02020;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_50[2] = lVar10;
        *local_50 = &PTR_FUN_14b424910;
        local_50[3] = 0;
        FUN_14485c47a(local_50 + 3,param_1);
        *(undefined4 *)(puVar4 + 5) = 0;
        puVar4[4] = FUN_148951fc2;
        local_68 = 0;
        FUN_1405f67fc(uVar9,&local_40,&local_50,L"UGbxLevelSequencePlayer.OnContentLoaded");
        param_1[0x141] = local_40;
        local_40 = 0;
        plVar3 = (longlong *)param_1[0x142];
        param_1[0x142] = (longlong)local_38;
        local_38 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
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
        }
        FUN_1449db362(&local_50);
      }
    }
    else {
      if (((param_1[0x141] != 0) && (param_1[0x142] != 0)) && (0 < *(int *)(param_1[0x142] + 8))) {
        FUN_1401cb356();
        local_60 = param_1[0x141];
        local_58 = param_1[0x142];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + 1;
          UNLOCK();
        }
        FUN_140d61352(&local_60);
        plVar3 = (longlong *)param_1[0x142];
        param_1[0x141] = 0;
        param_1[0x142] = 0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      lVar7 = param_1[0x11c];
      if ((longlong)(int)lVar7 == 0) {
        bVar11 = false;
      }
      else {
        lVar10 = param_1[0x11b];
        bVar6 = 1;
        lVar12 = 0;
        do {
          lVar2 = *(longlong *)(lVar10 + 0x10 + lVar12);
          if (((lVar2 == 0) ||
              (((*(char *)(lVar2 + 0x68) == '\x01' && (*(char *)(lVar2 + 0x69) == '\x01')) &&
               (*(char *)(lVar2 + 0x6a) == '\x01')))) &&
             ((lVar8 = *(longlong *)(lVar10 + 0x20 + lVar12), lVar8 == 0 ||
              (((*(char *)(lVar8 + 0x68) == '\x01' && (*(char *)(lVar8 + 0x69) == '\x01')) &&
               (*(char *)(lVar8 + 0x6a) == '\x01')))))) {
            if (lVar2 != 0) {
              FUN_1413ea8d6();
              lVar8 = *(longlong *)(lVar10 + 0x20 + lVar12);
            }
            if (lVar8 != 0) {
              FUN_1413ea8d6(lVar8);
            }
          }
          else {
            bVar6 = 0;
          }
          lVar12 = lVar12 + 0x30;
        } while ((longlong)(int)lVar7 * 0x30 != lVar12);
        bVar11 = (bool)(bVar6 ^ 1);
      }
      cVar5 = FUN_1413ea91c(param_1 + 0x11d);
      if (cVar5 == '\0') {
        bVar6 = FUN_1413ea91c(param_1 + 0x12e);
        if ((bVar6 & 1) == 0 && !bVar11) {
          *(undefined4 *)(param_1 + 0x13d) = 2;
          if ((char)param_1[0x140] == '\x01') {
            *(undefined1 *)(param_1 + 0x140) = 0;
            FUN_140defd10(param_1);
          }
          else {
            FUN_1449d6bc4(param_1,0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413ea8d6 FUN_1413ea8d6 body=69 status=ok
// SIG undefined FUN_1413ea8d6(void)

void FUN_1413ea8d6(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x40),0,0,0x10);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}



// FUNCTION 1413ea91c FUN_1413ea91c body=49 status=ok
// SIG undefined FUN_1413ea91c(void)

undefined8 FUN_1413ea91c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x50) == 0) ||
      (uVar2 = 1, *(char *)(*(longlong *)(param_1 + 0x50) + 0x10) == '\x01')) &&
     ((lVar1 = *(longlong *)(param_1 + 0x28), lVar1 == 0 ||
      (((uVar2 = 1, *(char *)(lVar1 + 0x30) == '\0' && (*(char *)(lVar1 + 0x31) == '\0')) &&
       (*(int *)(lVar1 + 0x6c) == 2)))))) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1413ea94e FUN_1413ea94e body=813 status=ok
// SIG undefined FUN_1413ea94e(void)

void FUN_1413ea94e(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_d8 [43];
  undefined1 local_ad;
  int local_ac;
  ulonglong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  local_ad = param_3;
  local_a0 = param_1;
  if ((longlong)(int)param_2[1] != 0) {
    plVar12 = (longlong *)*param_2;
    local_98 = plVar12 + (int)param_2[1];
    do {
      lVar3 = *plVar12;
      local_90 = plVar12;
      if (lVar3 != 0) {
        iVar13 = (*(int *)(lVar3 + 0x38) - *(int *)(lVar3 + 100)) + (int)uStack_70;
        if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar13);
        }
        if ((int)uStack_70._4_4_ < iVar13) {
          FUN_1403539de(&local_78);
        }
        uVar14 = *(uint *)(lVar3 + 0x58);
        uVar16 = (ulonglong)uVar14;
        if (uVar14 == 0) {
          uVar15 = 1;
          uVar19 = 0;
          iVar13 = 0;
          uVar7 = 0;
        }
        else {
          puVar9 = *(uint **)(lVar3 + 0x50);
          if (*(uint **)(lVar3 + 0x50) == (uint *)0x0) {
            puVar9 = (uint *)(lVar3 + 0x40);
          }
          uVar7 = *puVar9;
          if (uVar7 == 0) {
            iVar13 = uVar14 + 0x1e;
            if (-1 < (int)(uVar14 - 1)) {
              iVar13 = uVar14 - 1;
            }
            uVar19 = 0;
            uVar15 = (ulonglong)(uint)(iVar13 >> 5);
            if (iVar13 >> 5 < 1) {
              uVar15 = uVar19;
            }
            iVar13 = 0;
            do {
              if (uVar15 == uVar19) goto LAB_1413eaa58;
              iVar13 = iVar13 + 0x20;
              uVar7 = puVar9[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar7 == 0);
          }
          else {
            uVar19 = 0;
            iVar13 = 0;
          }
          uVar15 = (ulonglong)(-uVar7 & uVar7);
          uVar2 = uVar15 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar7 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)uVar14 <= (int)uVar7) {
            uVar7 = uVar14;
          }
        }
        if (uVar7 != uVar14) {
          uVar14 = 0xffffffff;
          local_a8 = uVar16;
          do {
            uVar2 = uStack_70;
            lVar17 = *(longlong *)(lVar3 + 0x30);
            if (*(longlong *)(lVar17 + 0x10 + (longlong)(int)uVar7 * 0x48) != 0) {
              lVar20 = (longlong)(int)uStack_70;
              uVar8 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
              local_ac = iVar13;
              if (uStack_70._4_4_ < uVar8) {
                FUN_1406f071e(&local_78,uVar2 & 0xffffffff);
              }
              lVar17 = lVar17 + (longlong)(int)uVar7 * 0x48;
              lVar20 = lVar20 * 0x20;
              uVar4 = *(undefined4 *)(lVar17 + 0x14);
              uVar5 = *(undefined4 *)(lVar17 + 0x18);
              uVar6 = *(undefined4 *)(lVar17 + 0x1c);
              puVar1 = (undefined4 *)(local_78 + lVar20);
              *puVar1 = *(undefined4 *)(lVar17 + 0x10);
              puVar1[1] = uVar4;
              puVar1[2] = uVar5;
              puVar1[3] = uVar6;
              *(undefined8 *)(local_78 + 0x10 + lVar20) = 0;
              iVar13 = *(int *)(lVar17 + 0x28);
              _Src = *(void **)(lVar17 + 0x20);
              *(int *)(local_78 + 0x18 + lVar20) = iVar13;
              if ((longlong)iVar13 == 0) {
                *(undefined4 *)(local_78 + lVar20 + 0x1c) = 0;
                uVar16 = local_a8;
                iVar13 = local_ac;
              }
              else {
                puVar21 = (undefined8 *)(lVar20 + local_78 + 0x10);
                FUN_1446dd670(puVar21,iVar13,0);
                memcpy((void *)*puVar21,_Src,(longlong)iVar13 * 2);
                uVar16 = local_a8;
                iVar13 = local_ac;
              }
            }
            uVar14 = uVar14 & ~(uint)uVar15;
            puVar9 = *(uint **)(lVar3 + 0x50);
            if (*(uint **)(lVar3 + 0x50) == (uint *)0x0) {
              puVar9 = (uint *)(lVar3 + 0x40);
            }
            uVar8 = *(uint *)(lVar3 + 0x58);
            iVar18 = (int)uVar19;
            lVar17 = (longlong)iVar18;
            uVar7 = puVar9[lVar17] & uVar14;
            if (uVar7 == 0) {
              iVar10 = uVar8 + 0x1e;
              if (-1 < (int)(uVar8 - 1)) {
                iVar10 = uVar8 - 1;
              }
              iVar10 = iVar10 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar18) {
                iVar11 = iVar18;
              }
              if (iVar18 < iVar10) {
                lVar20 = 0;
                do {
                  uVar7 = puVar9[lVar17 + lVar20 + 1];
                  if (uVar7 != 0) {
                    uVar19 = (ulonglong)(iVar18 + (int)lVar20 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_1413eaba7;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar20 = lVar20 + 1;
                } while (iVar11 - lVar17 != lVar20);
                uVar14 = 0xffffffff;
                iVar18 = iVar11;
              }
              uVar19 = (ulonglong)(iVar18 + 1);
              uVar7 = uVar8;
            }
            else {
LAB_1413eaba7:
              uVar15 = (ulonglong)(-uVar7 & uVar7);
              uVar2 = uVar15 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              uVar7 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if ((int)uVar8 <= (int)uVar7) {
                uVar7 = uVar8;
              }
            }
          } while (uVar7 != (uint)uVar16);
        }
      }
LAB_1413eaa58:
      plVar12 = local_90 + 1;
    } while (plVar12 != local_98);
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_142b35dec(local_a0,&local_78,&local_88,local_ad);
  FUN_140861e20(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413eac7e FUN_1413eac7e body=269 status=ok
// SIG undefined FUN_1413eac7e(void)

void FUN_1413eac7e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1413ead8c FUN_1413ead8c body=45 status=ok
// SIG undefined FUN_1413ead8c(void)

void FUN_1413ead8c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1413eadba FUN_1413eadba body=228 status=ok
// SIG undefined FUN_1413eadba(void)

void FUN_1413eadba(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1413eae9e FUN_1413eae9e body=115 status=ok
// SIG undefined FUN_1413eae9e(void)

void FUN_1413eae9e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144723c10(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1413eaf12 FUN_1413eaf12 body=228 status=ok
// SIG undefined FUN_1413eaf12(void)

longlong FUN_1413eaf12(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa84c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146327ece;
    local_38 = &LAB_14747bc79;
    local_40 = &LAB_1461262a6;
    local_48 = L"GameplayTags";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/GameplayTags",L"GameplayTagsSettings",&DAT_14caa84c0,&DAT_14747bc78);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa84c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413eaff8 FUN_1413eaff8 body=228 status=ok
// SIG undefined FUN_1413eaff8(void)

longlong FUN_1413eaff8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5e0d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140fe7df2;
    local_38 = &LAB_14869e995;
    local_40 = FUN_1464df8c8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxForcedSlidingVolume",&DAT_14cb5e0d0,&DAT_14869e994);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5e0d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413eb0de FUN_1413eb0de body=161 status=ok
// SIG undefined FUN_1413eb0de(void)

void FUN_1413eb0de(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac7d250;
  plVar3 = (longlong *)param_1[0x15];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x11];
  if (plVar3 != (longlong *)0x0) {
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
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1413eb180 FUN_1413eb180 body=311 status=ok
// SIG undefined FUN_1413eb180(void)

undefined8 FUN_1413eb180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1413eb2b0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1413eb2b0;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1413eb2b0:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1413eb259;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1413eb259;
    }
  }
  uVar6 = 0;
LAB_1413eb259:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413eb2b8 FUN_1413eb2b8 body=332 status=ok
// SIG undefined FUN_1413eb2b8(void)

void FUN_1413eb2b8(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x2a0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x68));
  *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (((*(int *)(param_1 + 0x4c) == 0) || (uVar2 = *(uint *)(param_1 + 0x48), (int)uVar2 < 0)) ||
     (DAT_14c9647dc <= (int)uVar2)) {
LAB_1413eb3c6:
    if (*(char *)(lVar3 + 0x50) == '\0') {
      if (*(int *)(lVar3 + 0x54) != 0) goto LAB_1413eb391;
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x54) + 1;
    }
    *(undefined1 *)(lVar3 + 0x50) = 0;
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(param_1 + 0x4c))) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
        (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))))) goto LAB_1413eb3c6;
    lVar5 = FUN_140519fd4();
    if (lVar5 == 0) goto LAB_1413eb3c6;
    cVar4 = FUN_140b038fa(lVar5);
    if (*(char *)(lVar3 + 0x50) == cVar4) {
      if (*(int *)(lVar3 + 0x54) != 0) goto LAB_1413eb391;
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(lVar3 + 0x54) + 1;
    }
    *(char *)(lVar3 + 0x50) = cVar4;
  }
  *(int *)(lVar3 + 0x54) = iVar6;
LAB_1413eb391:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x68));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413eb406 FUN_1413eb406 body=270 status=ok
// SIG undefined FUN_1413eb406(void)

undefined8 FUN_1413eb406(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined1 auStack_48 [44];
  int local_1c [2];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x1b0), lVar3 != 0)) {
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_1413eb508:
      uVar5 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 8);
      uVar5 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar7 == (undefined8 *)0x0) ||
           ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1413eb508;
        uVar5 = *puVar7;
      }
    }
    FUN_140fda471(local_1c,uVar5);
    piVar6 = *(int **)(lVar3 + 8);
    piVar4 = &DAT_14c9485f0;
    if (piVar6 != (int *)0x0) {
      piVar4 = piVar6;
    }
    if (((*piVar4 != 0) && (iVar2 = piVar4[1], iVar2 != 0)) && (*piVar4 != DAT_14c948000)) {
      if ((iVar2 < 2) && (piVar4[9] < 1)) {
        piVar4 = piVar4 + 2;
      }
      else {
        piVar4 = *(int **)(piVar4 + 6);
      }
      piVar6 = (int *)&DAT_14c948618;
      if (0 < iVar2) {
        piVar6 = piVar4;
      }
      if ((*piVar6 == local_1c[0]) && (piVar6[2] == local_14)) {
        uVar5 = CONCAT71((uint7)(uint3)((uint)local_14 >> 8),1);
        goto LAB_1413eb4e7;
      }
    }
  }
  uVar5 = 0;
LAB_1413eb4e7:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413eb516 FUN_1413eb516 body=150 status=ok
// SIG undefined FUN_1413eb516(void)

void FUN_1413eb516(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1446e0b6e();
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar3 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar3 = 0;
    do {
      FUN_1400337aa(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1413eb5ac(param_1);
  return;
}



// FUNCTION 1413eb5ac FUN_1413eb5ac body=961 status=ok
// SIG undefined FUN_1413eb5ac(void)

void FUN_1413eb5ac(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  longlong local_138 [2];
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_fc [4];
  code *local_f8 [2];
  undefined8 local_e8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar13 = 0;
    do {
      lVar10 = *(longlong *)(lVar7 + lVar13);
      if (lVar10 != 0) {
        lVar5 = FUN_1413eb96e();
        uVar3 = uStack_120;
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          lVar5 = (longlong)(int)uStack_120;
          uVar4 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar4);
          if (uStack_120._4_4_ < uVar4) {
            FUN_1494e6154(&local_128,uVar3 & 0xffffffff);
          }
          local_128[lVar5] = lVar10;
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar2 * 8 != lVar13);
    if ((longlong)(int)uStack_120 != 0) {
      local_148 = local_128 + (int)uStack_120;
      plVar11 = local_128;
      do {
        lVar7 = *plVar11;
        lVar13 = *(longlong *)(lVar7 + 0x50);
        iVar2 = *(int *)(lVar7 + 0x58);
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = (undefined1 *)0x0;
        local_70 = 0;
        if ((longlong)iVar2 != 0) {
          lVar10 = 0;
          do {
            lVar5 = *(longlong *)(lVar13 + lVar10);
            FUN_1494e7262(lVar5,local_138);
            local_140 = *(undefined8 *)(lVar5 + 0x18);
            local_118 = &local_140;
            uStack_110 = local_138;
            FUN_1494e38c4(&local_b8,local_fc,&local_118);
            if (local_138[0] != 0) {
              FUN_1400020a8();
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar2 * 8 != lVar10);
        }
        local_118 = *(undefined8 **)(lVar7 + 0x40);
        uStack_110 = *(longlong **)(lVar7 + 0x48);
        uVar6 = (**(code **)(*(longlong *)(lVar7 + 0x108) + 0x10))(lVar7 + 0x108,param_1);
        FUN_1494c949e(param_1,lVar7,0);
        lVar7 = FUN_145a96ec4();
        FUN_149499cc8(local_138,param_1,*(undefined8 *)(lVar7 + 0x18));
        lVar7 = local_138[0];
        local_e8 = 0;
        local_d8 = &PTR_LAB_14bd1e5c0;
        local_c8 = (undefined4)local_118;
        uStack_c4 = local_118._4_4_;
        uStack_c0 = (undefined4)uStack_110;
        uStack_bc = uStack_110._4_4_;
        local_f8[0] = FUN_144534b6c;
        local_d0 = uVar6;
        uVar6 = FUN_145a96ec4();
        lVar7 = FUN_1494c95c4(param_1,uVar6,lVar7,local_f8);
        if ((longlong)*(int *)(lVar7 + 0x58) != 0) {
          plVar12 = *(longlong **)(lVar7 + 0x50);
          plVar1 = plVar12 + *(int *)(lVar7 + 0x58);
          do {
            if ((int)uStack_b0 != local_84) {
              lVar7 = *plVar12;
              lVar13 = *(longlong *)(lVar7 + 0x18);
              uVar4 = (uint)((ulonglong)lVar13 >> 0x10);
              uVar9 = (uint)lVar13 & 0xffff;
              puVar8 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar8 = local_80;
              }
              iVar2 = *(int *)(puVar8 + (ulonglong)
                                        (local_70 - 1U &
                                        (int)((ulonglong)lVar13 >> 0x20) +
                                        ((uint)lVar13 << 0x10 | uVar9) +
                                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
              while (iVar2 != -1) {
                lVar10 = local_b8 + (longlong)iVar2 * 0x20;
                if (*(longlong *)(local_b8 + (longlong)iVar2 * 0x20) == lVar13) {
                  if (((lVar10 + 8U & 0xfffffffffffffff7) != 0) &&
                     (iVar2 = *(int *)(lVar10 + 0x10), (longlong)iVar2 != 0)) {
                    lVar13 = *(longlong *)(lVar10 + 8);
                    lVar10 = 0;
                    do {
                      lVar5 = lVar7;
                      if ((*(char *)(lVar7 + 0x29) == '\x02') ||
                         (lVar5 = *(longlong *)(lVar13 + lVar10), *(char *)(lVar7 + 0x29) == '\x01')
                         ) {
                        FUN_1494c969c(param_1,lVar5);
                      }
                      lVar10 = lVar10 + 8;
                    } while ((longlong)iVar2 * 8 != lVar10);
                  }
                  break;
                }
                iVar2 = *(int *)(lVar10 + 0x18);
              }
            }
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar1);
        }
        local_70 = 0;
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1494ced2c(&local_b8);
        plVar11 = plVar11 + 1;
      } while (plVar11 != local_148);
    }
    if (local_128 != (longlong *)0x0) {
      FUN_1400020a8(local_128);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413eb96e FUN_1413eb96e body=228 status=ok
// SIG undefined FUN_1413eb96e(void)

longlong FUN_1413eb96e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc1c3c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a96ebe;
    local_38 = &LAB_14949452f;
    local_40 = FUN_146738b09;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusNode_AnimAttributeDataInterface",&DAT_14cc1c3c0,
                  &DAT_14949452e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1c3c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413eba53 FUN_1413eba53 body=147 status=ok
// SIG undefined FUN_1413eba53(void)

undefined8 * FUN_1413eba53(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xb8);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b428050;
  memset(puVar1 + 3,0,0x90);
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0xffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 2;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
  puVar1[2] = &PTR_FUN_14b2428d0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  return puVar1;
}



// FUNCTION 1413ebae6 FUN_1413ebae6 body=67 status=ok
// SIG undefined FUN_1413ebae6(void)

void FUN_1413ebae6(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_3[1] != 0) {
    lVar1 = *param_3;
    lVar2 = (longlong)(int)param_3[1] * 0x18;
    do {
      FUN_1413ebb2a(param_1,param_2,lVar1);
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1413ebb2a FUN_1413ebb2a body=434 status=ok
// SIG undefined FUN_1413ebb2a(void)

void FUN_1413ebb2a(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined4 local_88;
  uint *local_80;
  int *local_78;
  int local_6c;
  uint local_68 [6];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar4 = *(int *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0x74) < param_2) {
    iVar4 = param_2;
  }
  *(int *)(param_1 + 0x74) = iVar4;
  plVar3 = (longlong *)*param_3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,local_68);
    if (local_68[0] == DAT_14cb8bf58) {
      lVar6 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar6 + 0x2c) == '\0') {
        iVar4 = *(int *)(param_1 + 0x70);
        *(int *)(param_1 + 0x70) = iVar4 + 1;
        *(int *)(lVar6 + 0x28) = 1 << ((byte)iVar4 & 0x1f);
        *(undefined1 *)(lVar6 + 0x2c) = 1;
        lVar6 = *(longlong *)(param_1 + 8);
      }
      puVar5 = (uint *)(lVar6 + 0x30);
    }
    else {
      if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
        lVar6 = param_1 + 0x58;
        if (*(longlong *)(param_1 + 0x60) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x60);
        }
        iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & local_68[0]) * 4);
        if (iVar4 != -1) {
          lVar6 = *(longlong *)(param_1 + 0x20);
          do {
            lVar2 = lVar6 + (longlong)iVar4 * 0x58;
            if (*(uint *)(lVar6 + (longlong)iVar4 * 0x58) == local_68[0]) {
              if (lVar2 != 0) goto LAB_1413ebcd4;
              break;
            }
            iVar4 = *(int *)(lVar2 + 0x50);
          } while (iVar4 != -1);
        }
      }
      local_a8[0] = 1 << ((byte)*(int *)(param_1 + 0x70) & 0x1f);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      FUN_1401f3da4(local_a0,param_3);
      local_88 = 0;
      local_78 = local_a8;
      local_80 = local_68;
      FUN_14898da98((longlong *)(param_1 + 0x20),&local_6c);
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_98 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_98 + 0x10))(local_98);
          }
        }
      }
      lVar2 = lVar2 + (longlong)local_6c * 0x58;
LAB_1413ebcd4:
      puVar5 = (uint *)(lVar2 + 0x48);
    }
    *puVar5 = *puVar5 | 1 << ((byte)param_2 & 0x1f);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413ebcde FUN_1413ebcde body=32 status=ok
// SIG undefined FUN_1413ebcde(void)

undefined8 FUN_1413ebcde(longlong param_1,undefined8 param_2)

{
  FUN_1413ebcfe(param_2,param_1 + 0x140);
  return param_2;
}



// FUNCTION 1413ebcfe FUN_1413ebcfe body=324 status=ok
// SIG undefined FUN_1413ebcfe(void)

undefined8 * FUN_1413ebcfe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  return param_1;
}



// FUNCTION 1413ebe42 FUN_1413ebe42 body=624 status=ok
// SIG undefined FUN_1413ebe42(void)

undefined8 * FUN_1413ebe42(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
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
  uint local_58;
  int local_54;
  code *local_50;
  undefined4 local_48;
  code *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != 0) {
    if (DAT_14cba8288 == 0) {
      local_70 = &local_40;
      local_40 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      local_54 = 0;
      local_58 = *(uint *)(param_3 + 0xc);
      if ((int)local_58 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar1 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar2 = DAT_14c964868 + 1;
        bVar4 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar4) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar2);
        }
        LOCK();
        iVar1 = *(int *)(lVar3 + 0x10);
        bVar4 = iVar1 == 0;
        if (bVar4) {
          *(int *)(lVar3 + 0x10) = iVar2;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar4) {
          iVar1 = iVar2;
        }
      }
      local_50 = FUN_145cf9cb4;
      local_48 = 0;
      local_54 = iVar1;
      FUN_1413ec0b4(&local_40,param_1);
      FUN_1448b6402(param_3 + 0x4e80,param_2,&local_40);
      if (local_38 != 0) {
        if (local_40 == (code *)0x0) goto LAB_1413ebf46;
        (*(code *)**(undefined8 **)local_40)(local_40,0);
        FUN_1446efa72(&local_40,0,0,0x10);
        local_38 = 0;
      }
      if (local_40 != (code *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1413ebf46;
    }
  }
  *param_2 = 0;
LAB_1413ebf46:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413ec0b4 FUN_1413ec0b4 body=351 status=ok
// SIG undefined FUN_1413ec0b4(void)

longlong * FUN_1413ec0b4(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x48);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1413ec1aa:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1413ec1aa;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14ab672c0;
  puVar5[1] = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14b99c740;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return param_1;
}



// FUNCTION 1413ec214 FUN_1413ec214 body=276 status=ok
// SIG undefined FUN_1413ec214(void)

void FUN_1413ec214(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((*(byte *)(param_1 + 0x55) & 2) == 0) {
    FUN_145960f54();
  }
  else {
    (**(code **)(*param_1 + 0x5f0))();
  }
  if (((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x178) == '\x03')) &&
     (plVar1 = (longlong *)param_1[0x5d], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
  }
  if ((DAT_14c872a72 == '\0') && (-1 < *(char *)((longlong)param_1 + 0x1f9))) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x28);
    while (0 < (int)uVar6) {
      uVar5 = (int)uVar6 - 1;
      uVar6 = (ulonglong)uVar5;
      plVar1 = *(longlong **)(param_1[0x27] + uVar6 * 8);
      if (plVar1 != (longlong *)0x0) {
        uVar3 = *(uint *)((longlong)plVar1 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x10200000) == 0) {
          cVar2 = (**(code **)(*plVar1 + 0x480))(plVar1,0);
          if (cVar2 != '\0') {
            (**(code **)(*plVar1 + 0x4a0))();
            uVar3 = *(uint *)(param_1 + 0x28);
            if ((int)uVar5 < (int)*(uint *)(param_1 + 0x28)) {
              uVar3 = uVar5;
            }
            uVar6 = (ulonglong)uVar3;
          }
        }
      }
    }
  }
  FUN_1400f96ca(param_1,param_2);
  return;
}



// FUNCTION 1413ec328 FUN_1413ec328 body=96 status=ok
// SIG undefined FUN_1413ec328(void)

void FUN_1413ec328(longlong *param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1;
  if (*(int *)((longlong)param_1 + 0x23c) < 1) {
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
      if ((*(uint *)(plVar1 + 1) & 0x30) != 0) {
        return;
      }
    }
    (**(code **)(*param_1 + 0x368))(param_1);
    FUN_145a59308(param_1);
    if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001413ec379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x308))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1413ec388 FUN_1413ec388 body=131 status=ok
// SIG undefined FUN_1413ec388(void)

int FUN_1413ec388(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      iVar1 = *(int *)(param_3 + 1);
      do {
        lVar6 = (longlong)iVar5 * 0x20;
        if (*(int *)(lVar2 + 8 + lVar6) == iVar1) {
          if (iVar1 == 0) {
            return iVar5;
          }
          iVar3 = FUN_144a54874(*(undefined8 *)(lVar2 + lVar6),*param_3,(longlong)iVar1);
          if (iVar3 == 0) {
            return iVar5;
          }
        }
        iVar5 = *(int *)(lVar2 + 0x18 + lVar6);
      } while (iVar5 != -1);
    }
  }
  return -1;
}



// FUNCTION 1413ec40c FUN_1413ec40c body=458 status=ok
// SIG undefined FUN_1413ec40c(void)

void FUN_1413ec40c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144a49b4a(*(undefined4 *)(lVar3 + 8 + lVar10),*(undefined8 *)(lVar3 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413ec5d8 FUN_1413ec5d8 body=274 status=ok
// SIG undefined FUN_1413ec5d8(void)

void FUN_1413ec5d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3917f0;
  FUN_143228b08();
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1458683b8(param_1 + 0x1d);
  if (*(int *)(param_1 + 0x1a) != 0) {
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
    if (param_1[0x1b] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1b] = &DAT_14c7585e0;
    if (param_1[0x1c] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1c] = 0;
  }
  if (*(int *)(param_1 + 0x16) != 0) {
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    if (param_1[0x17] != 0) {
      FUN_1400020a8();
    }
    param_1[0x17] = &DAT_14c7585e0;
    if (param_1[0x18] != 0) {
      FUN_1400020a8();
    }
    param_1[0x18] = 0;
  }
  FUN_14631ff1a(param_1 + 7);
  *param_1 = &PTR_LAB_14a392560;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1413ec6ea FUN_1413ec6ea body=531 status=ok
// SIG undefined FUN_1413ec6ea(void)

void FUN_1413ec6ea(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = (int)param_1[9];
    iVar13 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar13 = iVar2;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar13 >> 2) {
      iVar2 = (int)param_1[5];
      if (iVar2 == 0) {
        uVar12 = 1;
        iVar9 = 0;
        uVar10 = 0;
        iVar13 = 0;
      }
      else {
        puVar11 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 2);
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar13 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar13 = iVar2 + -1;
          }
          uVar10 = 0;
          uVar12 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar12 = uVar10;
          }
          iVar9 = 0;
          do {
            if (uVar12 == uVar10) goto LAB_1413ec7e2;
            iVar9 = iVar9 + 0x20;
            uVar8 = puVar11[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar8 == 0);
        }
        else {
          iVar9 = 0;
          uVar10 = 0;
        }
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar13) {
          iVar13 = iVar2;
        }
      }
      if (iVar13 != iVar2) {
        uVar8 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x1c + (longlong)iVar13 * 0x20) * 4) =
               0xffffffff;
          uVar8 = ~(uint)uVar12 & uVar8;
          puVar11 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 2);
          }
          iVar3 = (int)param_1[5];
          iVar13 = (int)uVar10;
          lVar15 = (longlong)iVar13;
          uVar7 = puVar11[lVar15] & uVar8;
          if (uVar7 == 0) {
            iVar5 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar5 = iVar3 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar13) {
              iVar6 = iVar13;
            }
            if (iVar13 < iVar5) {
              lVar14 = 0;
              do {
                uVar7 = puVar11[lVar15 + lVar14 + 1];
                if (uVar7 != 0) {
                  uVar10 = (ulonglong)(iVar13 + (int)lVar14 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_1413ec8ab;
                }
                iVar9 = iVar9 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar6 - lVar15 != lVar14);
              uVar8 = 0xffffffff;
              iVar13 = iVar6;
            }
            uVar10 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar3;
          }
          else {
LAB_1413ec8ab:
            uVar12 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar12 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar13) {
              iVar13 = iVar3;
            }
          }
        } while (iVar13 != iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar15 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar15 * 4) = 0xffffffff;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)param_1[9]);
    }
LAB_1413ec7e2:
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1413ec8fe FUN_1413ec8fe body=120 status=ok
// SIG undefined FUN_1413ec8fe(void)

void FUN_1413ec8fe(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if ((longlong)*(int *)(param_1 + 0x9f8) == 0) {
    iVar2 = 0;
  }
  else {
    lVar3 = 0;
    iVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x9f0) + 8 + lVar3);
      iVar4 = 0;
      if (lVar1 != 0) {
        iVar4 = *(int *)(lVar1 + 0x200);
      }
      if (iVar2 < iVar4) {
        iVar2 = iVar4;
      }
      lVar3 = lVar3 + 0x80;
    } while ((longlong)*(int *)(param_1 + 0x9f8) * 0x80 != lVar3);
  }
  if ((iVar2 == *(int *)(param_1 + 0xbf8)) && (iVar2 != 1)) {
    return;
  }
  *(int *)(param_1 + 0xbf8) = iVar2;
  FUN_148d74c34(param_1 + 0xbe0,param_1 + 0xbf8);
  return;
}



// FUNCTION 1413ec976 FUN_1413ec976 body=242 status=ok
// SIG undefined FUN_1413ec976(void)

void FUN_1413ec976(longlong param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_1 + 0x820);
  lVar3 = *(longlong *)(param_1 + 0x3c0);
  fVar6 = 1.0;
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x4e0);
    if (lVar4 == 0) {
      fVar7 = 0.0;
      pdVar5 = (double *)&DAT_14c8464f0;
    }
    else {
      fVar7 = *(float *)(lVar4 + 0x2a8);
      pdVar5 = (double *)(lVar4 + 0x1a8);
    }
    if (*(char *)(lVar3 + 0x388) == '\0') {
      dVar2 = *pdVar5;
      fVar6 = tanf(*(float *)(lVar3 + 0x38c) * 0.017453292 * 0.5);
      fVar6 = fVar6 * (fVar7 + (float)dVar2);
    }
    else if (*(char *)(lVar3 + 0x388) == '\x01') {
      fVar6 = *(float *)(lVar3 + 0x390) * 0.5;
    }
  }
  *(float *)(param_1 + 0x820) = fVar6;
  if (ABS(fVar1 - fVar6) <= 1e-08) {
    return;
  }
  FUN_145cf5fc0(param_1 + 0xb88,param_1);
  return;
}



// FUNCTION 1413eca68 FUN_1413eca68 body=278 status=ok
// SIG undefined FUN_1413eca68(void)

void FUN_1413eca68(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_48 [44];
  int local_1c;
  int local_18;
  char local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_1404df6a8();
  iVar6 = (int)((ulonglong)DAT_14c967818 >> 0x20);
  uVar4 = DAT_14c967818;
  if (lVar3 != 0) {
    iVar6 = (int)((ulonglong)*(undefined8 *)(lVar3 + 0x50) >> 0x20);
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
  }
  iVar2 = (int)uVar4;
  if (iVar6 < 1 || (int)uVar4 < 1) {
    if (*(int *)(param_1 + 0x3ec) == 0) {
LAB_1413ecb6b:
      uVar4 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 1000);
      uVar4 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x3ec) ||
            ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1413ecb6b;
        uVar4 = *puVar5;
      }
    }
    FUN_140f8b506(&local_1c,uVar4);
    fVar7 = 1.0;
    if (((local_14 != '\x01') || (local_1c < 1)) ||
       (iVar2 = local_1c, iVar6 = local_18, local_18 < 1)) goto LAB_1413ecb4e;
  }
  fVar7 = (float)iVar2 / (float)iVar6;
LAB_1413ecb4e:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar7);
}



// FUNCTION 1413ecb80 FUN_1413ecb80 body=1081 status=ok
// SIG undefined FUN_1413ecb80(void)

void FUN_1413ecb80(longlong param_1,double *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  char cVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  double dVar31;
  undefined1 auVar32 [16];
  
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  iVar1 = *(int *)(param_1 + 0x9f8);
  if ((longlong)iVar1 == 0) {
    cVar16 = '\0';
    dVar25 = 0.0;
    dVar21 = 0.0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x9f0);
    dVar21 = 0.0;
    lVar15 = 0;
    cVar16 = '\0';
    dVar25 = 0.0;
    do {
      lVar4 = *(longlong *)(lVar3 + 8 + lVar15);
      if (((lVar4 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x18), lVar5 != 0)) &&
         (*(char *)(lVar5 + 0x178) != '\0')) {
        dVar13 = *(double *)(lVar4 + 0xd0);
        dVar14 = *(double *)(lVar4 + 0xd8);
        dVar23 = *(double *)(lVar4 + 0xe0);
        dVar9 = *(double *)(lVar4 + 0x110);
        dVar12 = *(double *)(lVar4 + 0x118);
        dVar17 = *(double *)(lVar4 + 0x120);
        dVar22 = dVar23 + dVar23;
        dVar10 = dVar13 + dVar13;
        dVar11 = dVar14 + dVar14;
        dVar8 = *(double *)(lVar4 + 0xd0) * dVar22;
        dVar18 = *(double *)(lVar4 + 0xe8);
        dVar24 = *(double *)(lVar4 + 0xe8);
        dVar31 = dVar11 * dVar18;
        dVar18 = dVar22 * dVar18;
        dVar6 = dVar10 * dVar24;
        auVar32._0_8_ = (dVar31 + dVar8) * dVar17;
        auVar32._8_8_ =
             (dVar10 * dVar24 + *(double *)(lVar4 + 0xd0) * dVar10) * *(double *)(lVar4 + 0x128);
        dVar26 = (1.0 - (dVar22 * dVar23 + dVar11 * dVar14)) * dVar9;
        dVar24 = (1.0 - (dVar22 * dVar23 + dVar10 * dVar13)) * dVar12;
        dVar23 = (dVar18 + dVar11 * dVar13) * dVar9;
        dVar7 = (dVar6 + dVar22 * dVar14) * dVar12;
        dVar9 = (dVar8 - dVar31) * dVar9;
        auVar19._0_8_ = dVar12 * (dVar11 * dVar13 - dVar18);
        auVar19._8_8_ = dVar17 * (dVar22 * dVar14 - dVar6);
        auVar32 = blendpd(auVar32,auVar19,2);
        auVar20._8_4_ = SUB84(dVar24,0);
        auVar20._0_8_ = dVar26;
        auVar20._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        auVar20 = blendpd(auVar19,auVar20,2);
        dVar18 = (*(double *)(lVar5 + 0x160) + *(double *)(lVar5 + 0x148)) * 0.5;
        dVar6 = (*(double *)(lVar5 + 0x168) + *(double *)(lVar5 + 0x150)) * 0.5;
        dVar22 = (*(double *)(lVar5 + 0x170) + *(double *)(lVar5 + 0x158)) * 0.5;
        dVar27 = (*(double *)(lVar5 + 0x160) - *(double *)(lVar5 + 0x148)) * 0.5;
        dVar29 = (*(double *)(lVar5 + 0x168) - *(double *)(lVar5 + 0x150)) * 0.5;
        dVar24 = (*(double *)(lVar5 + 0x170) - *(double *)(lVar5 + 0x158)) * 0.5;
        dVar8 = dVar22 * auVar32._0_8_ + dVar6 * auVar20._0_8_ + dVar18 * dVar26 +
                *(double *)(lVar4 + 0xf0);
        dVar12 = dVar22 * auVar32._8_8_ + dVar6 * auVar20._8_8_ + dVar18 * dVar23 +
                 *(double *)(lVar4 + 0xf8);
        dVar26 = ABS(dVar24 * auVar32._0_8_) + ABS(auVar20._0_8_ * dVar29) + ABS(dVar27 * dVar26);
        dVar31 = ABS(dVar24 * auVar32._8_8_) + ABS(auVar20._8_8_ * dVar29) + ABS(dVar27 * dVar23);
        dVar28 = dVar8 - dVar26;
        dVar30 = dVar12 - dVar31;
        dVar26 = dVar26 + dVar8;
        dVar31 = dVar31 + dVar12;
        dVar17 = (1.0 - (dVar10 * dVar13 + dVar11 * dVar14)) * dVar17;
        dVar23 = dVar22 * dVar17 + dVar6 * dVar7 + dVar18 * dVar9 + *(double *)(lVar4 + 0x100);
        dVar18 = ABS(dVar17 * dVar24) + ABS(dVar7 * dVar29) + ABS(dVar9 * dVar27);
        dVar24 = dVar23 - dVar18;
        dVar18 = dVar18 + dVar23;
        if (cVar16 == '\0') {
          *param_2 = dVar28;
          param_2[1] = dVar30;
          param_2[3] = dVar26;
          param_2[4] = dVar31;
          uVar2 = *(undefined4 *)(lVar5 + 0x179);
          *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(lVar5 + 0x17c);
          *(undefined4 *)((longlong)param_2 + 0x31) = uVar2;
          cVar16 = '\x01';
          dVar21 = dVar24;
          dVar25 = dVar18;
        }
        else {
          dVar23 = *param_2;
          if (dVar28 <= *param_2) {
            dVar23 = dVar28;
          }
          *param_2 = dVar23;
          dVar23 = param_2[1];
          if (dVar30 <= param_2[1]) {
            dVar23 = dVar30;
          }
          param_2[1] = dVar23;
          if (dVar24 <= dVar21) {
            dVar21 = dVar24;
          }
          dVar24 = param_2[3];
          if (param_2[3] <= dVar26) {
            dVar24 = dVar26;
          }
          param_2[3] = dVar24;
          dVar24 = param_2[4];
          if (param_2[4] <= dVar31) {
            dVar24 = dVar31;
          }
          param_2[4] = dVar24;
          if (dVar25 <= dVar18) {
            dVar25 = dVar18;
          }
          cVar16 = '\x01';
        }
      }
      lVar15 = lVar15 + 0x80;
    } while ((longlong)iVar1 * 0x80 != lVar15);
  }
  *(char *)(param_2 + 6) = cVar16;
  param_2[2] = dVar21;
  param_2[5] = dVar25;
  return;
}



// FUNCTION 1413ecfba FUN_1413ecfba body=219 status=ok
// SIG undefined FUN_1413ecfba(void)

void FUN_1413ecfba(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1f0);
    lVar7 = 0;
    do {
      iVar2 = *(int *)(lVar4 + 4 + lVar7);
      if ((((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + lVar7), -1 < (int)uVar3)) &&
          ((int)uVar3 < DAT_14c9647dc)) &&
         (((puVar6 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == iVar2)) &&
          ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
          uVar5 = *puVar6;
        }
        else {
          uVar5 = 0;
        }
        FUN_140aeefbc(uVar5,0,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1));
        *(undefined8 *)(lVar4 + lVar7) = 0;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) < 0) {
    FUN_148d75e76(param_1 + 0x1f0);
  }
  if (*(int *)(param_1 + 0x200) != 0) {
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined1 *)(param_1 + 0x205) = 1;
  }
  return;
}



// FUNCTION 1413ed096 FUN_1413ed096 body=445 status=ok
// SIG undefined FUN_1413ed096(void)

void FUN_1413ed096(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar5 = local_58;
  iVar14 = (int)local_60;
  uVar12 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      FUN_1413ed254((longlong)iVar7 * 0x180 + *param_1 + 0x10);
      uVar12 = ~(uint)uVar13 & uVar12;
      plVar8 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar8 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar11 == lVar9) goto LAB_1413ed1c2;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_1413ed1c2:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14596333e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413ed254 FUN_1413ed254 body=117 status=ok
// SIG undefined FUN_1413ed254(void)

void FUN_1413ed254(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1413ed2ca();
  if (*(char *)(param_1 + 0x148) == '\x01') {
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  if (*(char *)(param_1 + 0xec) == '\x01') {
    *(undefined1 *)(param_1 + 0xec) = 0;
  }
  if (*(char *)(param_1 + 0xd4) == '\x01') {
    *(undefined1 *)(param_1 + 0xd4) = 0;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x98);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001413ed2c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1413ed2ca FUN_1413ed2ca body=123 status=ok
// SIG undefined FUN_1413ed2ca(void)

void FUN_1413ed2ca(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0xe0) != 0) && (uVar1 = *(uint *)(param_1 + 0xdc), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0xe0))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_140aeefbc(uVar2,0,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1));
      *(undefined8 *)(param_1 + 0xdc) = 0;
    }
  }
  return;
}



// FUNCTION 1413ed346 FUN_1413ed346 body=6624 status=ok
// SIG undefined FUN_1413ed346(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413ed346(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  void *pvVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  int iVar19;
  longlong lVar20;
  bool bVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_3c8 [32];
  wchar_t *local_3a8;
  uint local_3a0;
  ulonglong local_398;
  code **local_390;
  wchar_t *local_388;
  code *local_380;
  undefined1 *local_378;
  code **local_370;
  code *local_368;
  code *local_360;
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  double local_330;
  double local_328;
  double dStack_320;
  undefined8 local_318;
  longlong local_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  longlong *local_2a8;
  ulonglong uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  code *local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  undefined8 uStack_1f0;
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
  code *local_178;
  longlong *local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    iVar8 = 0;
  }
  else {
    uVar14 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = uVar14;
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar8 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar8 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar8 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar8 = iVar19;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar8;
  param_1[3] = param_3;
  puVar16 = param_1 + 0x1a;
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar16 = *param_4;
    param_4 = param_4 + 1;
    puVar16 = puVar16 + 1;
  }
  if (param_3 == 0) goto LAB_1413ed43a;
  local_2a8 = (longlong *)0x0;
  uStack_2a0 = 0;
  lVar9 = FUN_14050fd64();
  lVar20 = param_1[3];
  lVar11 = *(longlong *)(lVar20 + 0xa0);
  if (lVar11 == 0) {
    uVar10 = FUN_145733170();
    lVar11 = FUN_14477b664(uVar10);
    *(longlong *)(lVar20 + 0xa0) = lVar11;
  }
  lVar12 = *(longlong *)(lVar20 + 0xa8);
  if (((lVar12 == 0) && (lVar12 = 0, lVar11 != 0)) && (*(longlong *)(lVar20 + 0x98) != 0)) {
    plVar15 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar7 == '\0')) {
      lVar12 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
      lVar12 = FUN_144aff482(uVar10,(longlong *)(lVar20 + 0x98));
    }
    *(longlong *)(lVar20 + 0xa8) = lVar12;
  }
  param_1[0x19] = lVar12;
  lVar20 = param_1[3];
  param_1[4] = *(undefined8 *)(lVar20 + 0xf0);
  uVar10 = *(undefined8 *)(lVar20 + 0x100);
  param_1[5] = *(undefined8 *)(lVar20 + 0xf8);
  param_1[6] = uVar10;
  puVar16 = param_1 + 7;
  if (puVar16 != (undefined8 *)(lVar20 + 0x108)) {
    iVar8 = *(int *)(lVar20 + 0x110);
    pvVar4 = *(void **)(lVar20 + 0x108);
    *(int *)(param_1 + 8) = iVar8;
    if (iVar8 == 0 && *(int *)((longlong)param_1 + 0x44) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      FUN_1446dd670(puVar16,iVar8);
      if (iVar8 != 0) {
        memcpy((void *)*puVar16,pvVar4,(longlong)iVar8 * 2);
      }
    }
  }
  if (((*(int *)((longlong)param_1 + 0x24) == 0) ||
      (uVar14 = *(uint *)(param_1 + 4), (int)uVar14 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar14 ||
      ((((plVar15 = (longlong *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
         plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)((longlong)param_1 + 0x24))) ||
        ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) || (lVar20 = *plVar15, lVar20 == 0)))))) {
    if (param_1[5] != 0) {
      lVar20 = FUN_140007850();
      cVar7 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar20 == 0) || (cVar7 == '\0')) {
        if (lVar20 != 0) {
          uVar14 = *(uint *)(lVar20 + 0xc);
          goto LAB_1413ed6ce;
        }
        param_1[4] = 0;
      }
      else {
        uVar14 = *(uint *)(lVar20 + 0xc);
        if ((int)uVar14 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        if ((*(uint *)(lVar11 + 8) & 0x8400000) == 0) {
LAB_1413ed6ce:
          *(uint *)(param_1 + 4) = uVar14;
          if ((int)uVar14 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar8 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar21 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar21) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            iVar8 = *(int *)(lVar11 + 0x10);
            bVar21 = iVar8 == 0;
            if (bVar21) {
              *(int *)(lVar11 + 0x10) = iVar19;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar21) {
              iVar8 = iVar19;
            }
          }
          *(int *)((longlong)param_1 + 0x24) = iVar8;
        }
        if ((*(uint *)(lVar20 + 8) >> 0x1e & 1) == 0) goto LAB_1413ed710;
      }
    }
LAB_1413ed772:
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,1);
    FUN_1406f071e(&local_2a8,0);
    lVar20 = param_1[6];
    *local_2a8 = param_1[5];
    local_2a8[1] = lVar20;
    local_2a8[2] = 0;
    iVar8 = *(int *)(param_1 + 8);
    pvVar4 = (void *)param_1[7];
    *(int *)(local_2a8 + 3) = iVar8;
    if ((longlong)iVar8 == 0) {
      *(undefined4 *)((longlong)local_2a8 + 0x1c) = 0;
    }
    else {
      plVar15 = local_2a8 + 2;
      FUN_1446dd670(plVar15,iVar8,0);
      memcpy((void *)*plVar15,pvVar4,(longlong)iVar8 * 2);
    }
    bVar21 = true;
  }
  else {
LAB_1413ed710:
    if (DAT_14c949118 == 0) {
      local_278 = FUN_140631fbe;
      lVar11 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar11;
      FUN_1446f470e(&local_1f8,L"Class",1);
      local_378 = &LAB_146891e90;
      local_380 = (code *)&LAB_146273097;
      local_390 = (code **)0x149e2b68a;
      local_388 = (wchar_t *)CONCAT44(local_388._4_4_,199);
      local_398 = 0x20;
      local_3a0 = 0x10000000;
      local_3a8._0_4_ = 8;
      local_370 = &local_278;
      FUN_14574b4b2(lVar11);
      DAT_14c949118 = lVar11;
      if (DAT_14c951858 == 0) {
        local_370 = &local_178;
        local_178 = FUN_1449e2820;
        local_360 = FUN_14081d0ea;
        local_368 = FUN_14081d0ea;
        local_378 = &LAB_1468c5283;
        local_380 = FUN_142809da0;
        local_388 = L"Engine";
        local_390 = (code **)0x400000000;
        local_398 = CONCAT44(local_398._4_4_,0x10000000);
        local_3a0 = 8;
        local_3a8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar12 = DAT_14c951858;
      lVar11 = DAT_14c949118;
      uVar10 = FUN_1449e2fb2();
      local_3a8 = L"Class";
      FUN_14574b446(uVar10,lVar11,lVar12,L"/Script/CoreUObject");
    }
    if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) goto LAB_1413ed772;
    if (DAT_14cac9ca8 == 0) {
      local_370 = &local_178;
      local_178 = FUN_141030f22;
      local_360 = FUN_14081d0ea;
      local_368 = FUN_14081d0ea;
      local_378 = &LAB_1478c0a72;
      local_380 = (code *)&LAB_1417b2375;
      local_388 = L"Engine";
      local_390 = (code **)0x1000000000;
      local_398 = CONCAT44(local_398._4_4_,0x10000004);
      local_3a0 = 8;
      local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,0x390);
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      if (DAT_14cac9ca8 == 0) goto LAB_1413ed772;
    }
    if ((*(int *)(lVar20 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
        != DAT_14cac9ca8 + 0x30)) goto LAB_1413ed772;
    bVar21 = false;
  }
  if (0 < (int)uStack_2a0) {
    FUN_14662bfae(&local_1f8,param_1);
    local_390 = &local_278;
    local_398 = local_398 & 0xffffffffffffff00;
    local_3a0 = local_3a0 & 0xffffff00;
    local_3a8 = (wchar_t *)((ulonglong)local_3a8 & 0xffffffff00000000);
    FUN_1457028c8(lVar9 + 0x1e8,&local_178,&local_2a8,&local_1f8);
    plVar15 = local_170;
    if ((code **)(param_1 + 9) != &local_178) {
      param_1[9] = local_178;
      local_178 = (code *)0x0;
      plVar17 = (longlong *)param_1[10];
      if (local_170 != plVar17) {
        local_170 = (longlong *)0x0;
        param_1[10] = plVar15;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar17 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
      }
    }
    plVar15 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_170 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if ((int)uStack_1f0 != 0) {
      if (local_1f8 == (undefined8 *)0x0) goto LAB_1413ed92b;
      (**(code **)*local_1f8)(local_1f8,0);
      FUN_1446efa72(&local_1f8,0,0,0x10);
      uStack_1f0 = (double)((ulonglong)uStack_1f0._4_4_ << 0x20);
    }
    if (local_1f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1413ed92b:
  if (!bVar21) {
    FUN_1441952a2(param_1);
  }
  plVar15 = (longlong *)FUN_14001cc68(0x4a8,0x10);
  plVar15[1] = (longlong)&DAT_100000001;
  *plVar15 = (longlong)&PTR_FUN_14b97aa60;
  pcVar2 = (code *)(plVar15 + 2);
  FUN_1461da6b6(pcVar2);
  local_178 = pcVar2;
  local_170 = plVar15;
  FUN_148d7508a(&local_178,pcVar2);
  if (plVar15 == (longlong *)0x0) {
    param_1[0xc] = 0x10;
    plVar17 = (longlong *)param_1[0xd];
    if (plVar17 != (longlong *)0x0) {
      param_1[0xd] = 0;
LAB_1413ed9cb:
      LOCK();
      plVar15 = plVar17 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001413ed9fb:
        if (iVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    param_1[0xc] = pcVar2;
    plVar17 = (longlong *)param_1[0xd];
    if (plVar15 == plVar17) {
      LOCK();
      plVar17 = plVar15 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar17 = plVar15;
        goto joined_r0x0001413ed9fb;
      }
    }
    else {
      param_1[0xd] = plVar15;
      if (plVar17 != (longlong *)0x0) goto LAB_1413ed9cb;
    }
  }
  plVar15 = local_170;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_170 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  lVar20 = param_1[0xc];
  if (lVar20 != 0) {
    if ((((*(int *)(param_2 + 0x3ec) == 0) || (uVar14 = *(uint *)(param_2 + 1000), (int)uVar14 < 0))
        || (DAT_14c9647dc <= (int)uVar14)) ||
       (((plVar15 = (longlong *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
         plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_2 + 0x3ec))) ||
        (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 || (lVar11 = *plVar15, lVar11 == 0)))))) {
LAB_1413edb74:
      lVar11 = 0;
    }
    else {
      if (DAT_14cbadd90 == 0) {
        local_178 = FUN_141030f22;
        local_360 = FUN_14081d0ea;
        local_368 = (code *)&LAB_1459f2e4c;
        local_378 = &LAB_148c39de3;
        local_380 = (code *)&LAB_1457a9eb2;
        local_388 = L"Game";
        local_390 = (code **)0x0;
        local_398 = CONCAT44(local_398._4_4_,0x10000004);
        local_3a0 = 0x10;
        local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,0x3de0);
        local_370 = &local_178;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
      goto LAB_1413edb74;
    }
    lVar9 = lVar11 + 0xe60;
    if (lVar11 == 0) {
      lVar9 = 0;
    }
    lVar12 = FUN_14073fae1();
    lVar11 = *(longlong *)(lVar12 + 0x58);
    if (lVar11 == 0) {
      uVar10 = FUN_145d81f02();
      lVar11 = FUN_14477b664(uVar10);
      *(longlong *)(lVar12 + 0x58) = lVar11;
    }
    lVar13 = *(longlong *)(lVar12 + 0x60);
    if (((lVar13 == 0) && (lVar13 = 0, lVar11 != 0)) && (*(longlong *)(lVar12 + 0x50) != 0)) {
      local_358._0_8_ = (longlong *)(lVar12 + 0x50);
      plVar15 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar15 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar7 == '\0')) {
        lVar13 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
        lVar13 = FUN_144aff482(uVar10,local_358._0_8_);
      }
      *(longlong *)(lVar12 + 0x60) = lVar13;
    }
    FUN_145ccdb66(lVar20,lVar13,lVar9);
    lVar20 = param_1[0xc];
    FUN_14662ca74(&local_178,param_1,&LAB_1413fb74e);
    FUN_145bee228(lVar20 + 0x18,&local_1f8,&local_178);
    if ((int)local_170 == 0) {
LAB_1413edc8f:
      if (local_178 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_178 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_178)(local_178,0);
      FUN_1446efa72(&local_178,0,0,0x10);
      local_170 = (longlong *)((ulonglong)local_170 & 0xffffffff00000000);
      goto LAB_1413edc8f;
    }
    param_1[0x31] = local_1f8;
    lVar20 = param_1[0xc];
    FUN_14662cc14(&local_178,param_1);
    FUN_145bee40e(lVar20 + 0x30,&local_1f8,&local_178);
    if ((int)local_170 == 0) {
LAB_1413edd19:
      if (local_178 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_178 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_178)(local_178,0);
      FUN_1446efa72(&local_178,0,0,0x10);
      local_170 = (longlong *)((ulonglong)local_170 & 0xffffffff00000000);
      goto LAB_1413edd19;
    }
    param_1[0x32] = local_1f8;
    lVar20 = param_1[0xc];
    FUN_14662ca74(&local_178,param_1,FUN_1413fc344);
    FUN_145bee228(lVar20 + 0x48,&local_1f8,&local_178);
    if ((int)local_170 == 0) {
LAB_1413eddaa:
      if (local_178 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_178 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_178)(local_178,0);
      FUN_1446efa72(&local_178,0,0,0x10);
      local_170 = (longlong *)((ulonglong)local_170 & 0xffffffff00000000);
      goto LAB_1413eddaa;
    }
    param_1[0x33] = local_1f8;
    local_178 = *(code **)(param_3 + 0x18);
    FUN_145ac0ecc(param_1[0xc]);
    lVar20 = FUN_1461f3dc0(param_1[0xc]);
    if (lVar20 == 0) {
      param_1[0x34] = 0;
    }
    else {
      uVar14 = *(uint *)(lVar20 + 0xc);
      *(uint *)(param_1 + 0x34) = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      iVar8 = *(int *)(lVar20 + 0x10);
      if (iVar8 == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar8 = *(int *)(lVar20 + 0x10);
        bVar21 = iVar8 == 0;
        if (bVar21) {
          *(int *)(lVar20 + 0x10) = iVar19;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar8 = iVar19;
        }
        *(int *)((longlong)param_1 + 0x1a4) = iVar8;
        if (iVar8 == 0) goto LAB_1413eda3d;
      }
      else {
        *(int *)((longlong)param_1 + 0x1a4) = iVar8;
      }
      uVar14 = *(uint *)(param_1 + 0x34);
      if (((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) &&
         ((puVar16 = (undefined8 *)
                     ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
          puVar16 != (undefined8 *)0x0 &&
          ((*(int *)(puVar16 + 2) == iVar8 && ((*(uint *)(puVar16 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
          plVar15 = (longlong *)*puVar16;
        }
        else {
          plVar15 = (longlong *)0x0;
        }
        uVar10 = (**(code **)(*plVar15 + 0x2c0))();
        FUN_14662cdba(&local_178,param_1);
        FUN_1461b21ac(uVar10,&local_1f8,&local_178);
        if ((int)local_170 == 0) {
LAB_1413edf3e:
          if (local_178 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_178 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_178)(local_178,0);
          FUN_1446efa72(&local_178,0,0,0x10);
          local_170 = (longlong *)((ulonglong)local_170 & 0xffffffff00000000);
          goto LAB_1413edf3e;
        }
        param_1[0x35] = local_1f8;
      }
    }
  }
LAB_1413eda3d:
  lVar20 = FUN_1447210f0(param_2);
  if (((((*(int *)(param_2 + 0x3ec) != 0) && (uVar14 = *(uint *)(param_2 + 1000), -1 < (int)uVar14))
       && ((int)uVar14 < DAT_14c9647dc)) &&
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(param_2 + 0x3ec))))) &&
     (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 && (*plVar15 != 0)))) {
    lVar11 = 0;
    if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar15;
    }
    FUN_1447210f0(lVar11);
  }
  lVar11 = FUN_1410ac07e(param_2);
  if (lVar20 != 0 && lVar11 != 0) {
    uVar10 = param_1[3];
    FUN_145ac22e8(uVar10,&local_178);
    dVar31 = (double)*(float *)(param_1[3] + 0x140);
    dVar25 = (local_168 + local_150) * 0.5 * dVar31;
    dVar28 = ((double)local_170 + local_158) * 0.5 * dVar31;
    dVar31 = ((double)local_178 + local_160) * 0.5 * dVar31;
    local_2e8 = ZEXT816(0);
    local_358 = *(undefined1 (*) [16])(param_1 + 0x22);
    dVar32 = local_358._0_8_;
    dVar42 = local_358._8_8_;
    auVar35 = *(undefined1 (*) [16])(param_1 + 0x24);
    dVar29 = auVar35._0_8_;
    dVar30 = auVar35._8_8_;
    auVar27 = minpd(_DAT_149934d80,local_358);
    auVar34 = minpd(ZEXT816(0x3ff0000000000000),auVar35);
    auVar35._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar35._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    iVar8 = movmskpd((int)param_1[3],auVar35);
    auVar27._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    uVar14 = movmskpd((int)uVar10,auVar27);
    if ((uVar14 & 0x3fffffff) == 0 && iVar8 == 0) {
      dVar6 = (double)param_1[0x1a];
      dVar38 = (double)param_1[0x1b];
      dVar39 = (double)param_1[0x1c];
      dVar3 = (double)param_1[0x1d];
      dVar37 = (double)param_1[0x1d];
      dVar31 = dVar31 * dVar32;
      dVar28 = dVar28 * dVar42;
      local_348 = dVar25 * dVar29;
      dStack_340 = dVar30 * 0.0;
      dVar25 = dVar28 * dVar6 - dVar31 * dVar38;
      dVar5 = local_348 * dVar38 - dVar28 * dVar39;
      dVar26 = dVar31 * dVar39 - local_348 * dVar6;
      dVar5 = dVar5 + dVar5;
      dVar26 = dVar26 + dVar26;
      dVar25 = dVar25 + dVar25;
      dVar42 = (double)param_1[0x1b];
      dVar32 = (double)param_1[0x1b];
      local_308 = dVar39 * 0.0 * -1.0 +
                  dVar42 * 0.0 + (double)param_1[0x1a] * 1.0 * 1.0 + dVar3 * 0.0;
      dStack_300 = dVar39 * 0.0 * 1.0 +
                   dVar32 * 1.0 + (double)param_1[0x1a] * 0.0 * -1.0 + dVar37 * 0.0;
      dVar32 = (double)param_1[0x1c] * 0.0 * -1.0 +
               ((dVar6 * 0.0 * -1.0 + dVar37 * 1.0) - dVar32 * 0.0);
      dVar28 = (dVar5 * dVar39 - dVar25 * dVar6) + dVar37 * dVar26 + dVar28 + (double)param_1[0x1f];
      local_108 = (dVar26 * dVar6 - dVar38 * dVar5) + dVar3 * dVar25 + local_348 +
                  (double)param_1[0x20];
      local_2f8._8_4_ = SUB84(dVar32,0);
      local_2f8._0_8_ =
           (double)param_1[0x1c] * 1.0 * 1.0 + ((dVar6 * 0.0 * 1.0 + dVar3 * 0.0) - dVar42 * 0.0);
      local_2f8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      local_2e8._8_4_ = SUB84(dVar28,0);
      local_2e8._0_8_ =
           (dVar25 * dVar38 - dVar39 * dVar26) + dVar3 * dVar5 + dVar31 + (double)param_1[0x1e];
      local_2e8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      dVar29 = dVar29 * 1.0;
      dVar30 = dVar30 * 0.0;
    }
    else {
      dVar26 = (double)param_1[0x1a];
      dVar6 = (double)param_1[0x1b];
      dVar37 = (double)param_1[0x1c];
      dVar38 = dVar6 + dVar6;
      dVar39 = dVar37 + dVar37;
      dVar5 = dVar26 * (dVar26 + dVar26);
      local_1f8 = (undefined8 *)
                  (((double)DAT_149934d80 - (dVar37 * dVar39 + dVar6 * dVar38)) * dVar32);
      dVar3 = (DAT_149934d80._8_8_ - (dVar37 * dVar39 + dVar5)) * dVar42;
      dVar37 = (double)param_1[0x1d];
      dVar40 = dVar39 * dVar37;
      dVar41 = (dVar26 + dVar26) * (double)param_1[0x1d];
      dVar37 = dVar38 * dVar37;
      dStack_1b0 = (dVar39 * dVar6 - dVar41) * dVar29;
      local_1b8 = (dVar37 + (double)param_1[0x1a] * dVar39) * dVar29;
      uStack_1f0 = (dVar38 * dVar26 + dVar40) * dVar32;
      local_1c8 = (dVar39 * dVar6 + dVar41) * dVar42;
      local_1e8 = ((double)param_1[0x1a] * dVar39 - dVar37) * dVar32;
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar3,0);
      local_1d8._0_8_ = (dVar38 * dVar26 - dVar40) * dVar42;
      local_1d8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uStack_1c0 = 0;
      local_1a8 = (1.0 - (dVar5 + dVar6 * dVar38)) * dVar29;
      uStack_1a0 = 0;
      local_198 = param_1[0x1e];
      uStack_190 = param_1[0x1f];
      local_188 = param_1[0x20];
      local_328 = dVar29 * 1.0;
      dStack_320 = dVar30 * 0.0;
      uStack_180 = 0x3ff0000000000000;
      local_278 = (code *)0x3ff0000000000000;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_348 = 0.0;
      dStack_340 = 1.0;
      local_258 = 0;
      uStack_250 = 0x3ff0000000000000;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0x3ff0000000000000;
      uStack_220 = 0;
      uStack_200 = 0x3ff0000000000000;
      local_218 = dVar31;
      dStack_210 = dVar28;
      local_208 = dVar25;
      FUN_1447fea8d(&local_178);
      dVar30 = dStack_320;
      dVar29 = local_328;
      auVar35 = _DAT_149934d80;
      local_330 = local_168;
      dVar42 = local_168 * local_168 +
               (double)local_178 * (double)local_178 + (double)local_170 * (double)local_170;
      dVar31 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      local_338 = local_128;
      dVar32 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar22 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
      dVar42 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar22);
      uVar22 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
      dVar31 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar22);
      uVar22 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
      dVar32 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar32)) & uVar22);
      auVar23._8_8_ = -(ulonglong)(0.0 <= (double)local_358._8_8_);
      auVar23._0_8_ = -(ulonglong)(0.0 <= (double)local_358._0_8_);
      auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
      dVar28 = (double)(~-(ulonglong)(0.0 <= local_328) & 0xbff0000000000000 |
                       (ulonglong)((uint)(-(ulonglong)(0.0 <= local_328) >> 0x20) & 0x3ff00000) <<
                       0x20);
      dVar25 = auVar27._0_8_;
      local_178 = (code *)((double)local_178 * dVar42 * dVar25);
      local_170 = (longlong *)((double)local_170 * dVar42 * dVar25);
      local_168 = dVar42 * local_168 * dVar25;
      dVar42 = auVar27._8_8_;
      local_148 = dVar31 * local_148 * dVar42;
      local_150 = local_150 * dVar31 * dVar42;
      local_158 = dVar42 * local_158 * dVar31;
      local_128 = dVar32 * local_128 * dVar28;
      local_130 = local_130 * dVar32 * dVar28;
      local_138 = dVar28 * local_138 * dVar32;
      FUN_14481fd10(&local_298,&local_178);
      dVar32 = local_288 * local_288 + local_298 * local_298;
      dVar42 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar33._0_8_ = dVar32 + dVar42;
      auVar33._8_8_ = dVar32 + dVar42;
      auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
      auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
      auVar27 = sqrtpd(auVar33,auVar33);
      auVar35 = divpd(auVar35,auVar27);
      auVar36._0_8_ = auVar35._0_8_ * local_288;
      auVar36._8_8_ = auVar35._8_8_ * dStack_280;
      auVar34._8_8_ = dStack_340;
      auVar34._0_8_ = local_348;
      local_2f8 = blendvpd(auVar34,auVar36,auVar24);
      local_308 = (double)((ulonglong)(local_298 * auVar35._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
      dStack_300 = (double)((ulonglong)(dStack_290 * auVar35._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
      local_2e8._8_8_ = uStack_110;
      local_2e8._0_8_ = local_118;
    }
    local_2c8 = local_358._0_8_;
    uStack_2c0 = local_358._8_8_;
    local_2b8._8_4_ = SUB84(dVar30,0);
    local_2b8._0_8_ = dVar29;
    local_2b8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    local_2d8 = (double)*(float *)(param_2 + 0x6c4) + local_108;
    uStack_2d0 = 0;
    uVar10 = FUN_145afa018();
    lVar20 = FUN_14662c154(lVar20,uVar10,&local_308);
    if (lVar20 == 0) {
      param_1[0xe] = 0;
    }
    else {
      uVar14 = *(uint *)(lVar20 + 0xc);
      *(uint *)(param_1 + 0xe) = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      iVar8 = *(int *)(lVar20 + 0x10);
      if (iVar8 == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar8 = *(int *)(lVar20 + 0x10);
        bVar21 = iVar8 == 0;
        if (bVar21) {
          *(int *)(lVar20 + 0x10) = iVar19;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar8 = iVar19;
        }
        *(int *)((longlong)param_1 + 0x74) = iVar8;
        if (iVar8 == 0) goto LAB_1413edaca;
      }
      else {
        *(int *)((longlong)param_1 + 0x74) = iVar8;
      }
      uVar14 = *(uint *)(param_1 + 0xe);
      if (((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) &&
         ((puVar16 = (undefined8 *)
                     ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
          puVar16 != (undefined8 *)0x0 &&
          ((*(int *)(puVar16 + 2) == iVar8 && ((*(uint *)(puVar16 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
          uVar10 = *puVar16;
        }
        else {
          uVar10 = 0;
        }
        local_310 = param_1[1];
        if (local_310 == 0) {
          local_310 = 0;
          local_318 = 0;
        }
        else {
          iVar8 = *(int *)(local_310 + 8);
          local_318 = 0;
          do {
            if (iVar8 == 0) {
              local_310 = 0;
              goto LAB_1413ee7e8;
            }
            LOCK();
            iVar19 = *(int *)(local_310 + 8);
            bVar21 = iVar8 == iVar19;
            if (bVar21) {
              *(int *)(local_310 + 8) = iVar8 + 1;
              iVar19 = iVar8;
            }
            iVar8 = iVar19;
            UNLOCK();
          } while (!bVar21);
          local_318 = *param_1;
        }
LAB_1413ee7e8:
        FUN_14662c220(uVar10,lVar11 + 0xc0,param_1[3] + 0x118);
        if (*(int *)((longlong)param_1 + 0x74) == 0) {
LAB_1413ee94c:
          uVar10 = 0;
        }
        else {
          uVar14 = *(uint *)(param_1 + 0xe);
          uVar10 = 0;
          if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
            puVar16 = (undefined8 *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
            if ((puVar16 == (undefined8 *)0x0) ||
               ((*(int *)(puVar16 + 2) != *(int *)((longlong)param_1 + 0x74) ||
                ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_1413ee94c;
            uVar10 = *puVar16;
          }
        }
        local_3a8 = (wchar_t *)((ulonglong)local_3a8 & 0xffffffffffffff00);
        uVar18 = 0;
        FUN_14113775c(uVar10,&local_308,0,0);
        if (*(int *)((longlong)param_1 + 0x74) != 0) {
          uVar14 = *(uint *)(param_1 + 0xe);
          uVar18 = 0;
          if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
            puVar16 = (undefined8 *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
            if ((puVar16 == (undefined8 *)0x0) ||
               ((*(int *)(puVar16 + 2) != *(int *)((longlong)param_1 + 0x74) ||
                ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) {
              uVar18 = 0;
            }
            else {
              uVar18 = *puVar16;
            }
          }
        }
        FUN_1461f3a80(uVar18);
      }
    }
  }
LAB_1413edaca:
  FUN_140861e20(local_2a8,uStack_2a0 & 0xffffffff);
  if (local_2a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1413ed43a:
  if ((local_f0 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413eed28 FUN_1413eed28 body=38 status=ok
// SIG undefined FUN_1413eed28(void)

undefined8 FUN_1413eed28(undefined8 param_1,int param_2)

{
  FUN_1413eed4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1413eed4e FUN_1413eed4e body=1000 status=ok
// SIG undefined FUN_1413eed4e(void)

void FUN_1413eed4e(undefined8 *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = &PTR_FUN_14a348280;
  param_1[0x39] = &PTR_FUN_14a3482e0;
  FUN_1411d119e(param_1 + 0x72);
  *(undefined2 *)((longlong)param_1 + 0x3bb9) = 0;
  memset(param_1 + 0x714,0,0x30c);
  memset((void *)param_1[0x7b3],0,(longlong)*(int *)(param_1 + 0x7b4) << 3);
  puVar5 = (undefined8 *)param_1[0x7b6];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (param_1[0x7b3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7ad] != 0) {
    FUN_1400020a8();
  }
  FUN_14736f2ca(param_1 + 0x7a4);
  if (param_1[0x7a9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a4] != 0) {
    FUN_1400020a8();
  }
  lVar9 = 0x3cf8;
  do {
    *(undefined ***)((longlong)param_1 + lVar9 + -0x10) = &PTR_FUN_14a349540;
    if (*(longlong *)((longlong)param_1 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar9 = lVar9 + -0x38;
  } while (lVar9 != 0x3ba8);
  lVar9 = param_1[0x776];
  if (lVar9 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar9 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar9 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  FUN_1412ab196(param_1 + 0x6e8);
  lVar9 = 0x3728;
  do {
    if (*(longlong *)((longlong)param_1 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != 0x36c8);
  lVar9 = 0x36c8;
  do {
    if (*(longlong *)((longlong)param_1 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != 0x3668);
  lVar9 = param_1[0x164];
  if (lVar9 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar9 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar9 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar9 = param_1[0x78];
  if (lVar9 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar9 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar9 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_144902b9c(param_1 + 0x60);
  param_1[0x39] = &PTR_LAB_14a1e4500;
  lVar9 = param_1[0x58];
  if (lVar9 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar9 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar9 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  FUN_1402cca0a(param_1);
  return;
}



// FUNCTION 1413ef136 FUN_1413ef136 body=176 status=ok
// SIG undefined FUN_1413ef136(void)

void FUN_1413ef136(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x7a];
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x6f0))();
    lVar2 = param_1[0x7a];
    if (lVar2 != lVar1) {
      local_38 = lVar1;
      uVar3 = FUN_14477b072(param_1,DAT_14cad3a88);
      (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_38);
      FUN_140c1abcc(param_1 + 0x7e,lVar2);
      local_38 = lVar1;
      local_30 = lVar2;
      FUN_1447cd2ec(param_1 + 0x77,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413ef1e8 FUN_1413ef1e8 body=219 status=ok
// SIG undefined FUN_1413ef1e8(void)

void FUN_1413ef1e8(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_1[0x79];
  if (uVar1 == param_2) {
    return;
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  lVar2 = 0xe70;
  if ((uVar1 == DAT_14c893048) || (lVar2 = 0xbc0, param_1[0x79] == (ulonglong)DAT_14c893040)) {
    (**(code **)(*param_1 + lVar2))(param_1);
  }
  FUN_145963a64(param_1,param_2);
  uVar1 = param_1[0x79];
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  lVar2 = 3000;
  if (uVar1 != DAT_14c893040) {
    if (param_1[0x79] != (ulonglong)DAT_14c893048) goto LAB_1413ef299;
    lVar2 = 0xe68;
  }
  (**(code **)(*param_1 + lVar2))(param_1);
LAB_1413ef299:
                    /* WARNING: Could not recover jumptable at 0x0001413ef2a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcd0))(param_1);
  return;
}



// FUNCTION 1413ef2c4 FUN_1413ef2c4 body=238 status=ok
// SIG undefined FUN_1413ef2c4(void)

undefined8 FUN_1413ef2c4(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_2c = 0;
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar1 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar1 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar1 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar1 = iVar3;
      }
    }
    local_2c = iVar1;
    iVar1 = FUN_1413ef3b4(param_1 + 0x6e8);
    if (0 < iVar1) {
      FUN_14596436e(param_2);
      uVar2 = 1;
      goto LAB_1413ef340;
    }
  }
  uVar2 = 0;
LAB_1413ef340:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1413ef3b4 FUN_1413ef3b4 body=153 status=ok
// SIG undefined FUN_1413ef3b4(void)

undefined8 FUN_1413ef3b4(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)(int)param_1[1] << 3;
    iVar3 = 1;
    lVar4 = 0;
    do {
      cVar1 = FUN_1413ef44e(lVar2,param_2);
      if (cVar1 != '\0') {
        if (iVar3 == 0) {
          return 0;
        }
        memmove((void *)(*param_1 + (lVar4 >> 0x20) * 8),
                (void *)(*param_1 + (lVar4 >> 0x20) * 8 + 8),
                (longlong)((int)param_1[1] - iVar3) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      lVar2 = lVar2 + 8;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 1413ef44e FUN_1413ef44e body=104 status=ok
// SIG undefined FUN_1413ef44e(void)

ulonglong FUN_1413ef44e(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 1413ef4b6 FUN_1413ef4b6 body=20 status=ok
// SIG undefined FUN_1413ef4b6(void)

undefined8 FUN_1413ef4b6(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1413ef4ca FUN_1413ef4ca body=49 status=ok
// SIG undefined FUN_1413ef4ca(void)

void FUN_1413ef4ca(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144734574();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 1413ef4fc FUN_1413ef4fc body=491 status=ok
// SIG undefined FUN_1413ef4fc(void)

void FUN_1413ef4fc(longlong param_1)

{
  uint *_Dst;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switchD_143c3d4dc::caseD_1d();
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((lVar4 != 0) &&
     (*(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(longlong *)(lVar4 + 0x238) + 8),
     *(longlong *)(lVar4 + 0x238) != 0)) {
    FUN_143e93adc();
  }
  if ((((*(int *)(param_1 + 0x374) != 0) && (uVar1 = *(uint *)(param_1 + 0x370), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((puVar6 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x374))) &&
      ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
      uVar5 = *puVar6;
    }
    else {
      uVar5 = 0;
    }
    lVar4 = FUN_1400b6e86(uVar5);
    if (lVar4 != 0) {
      FUN_14656e120(local_48);
      FUN_1409ca370((longlong *)(lVar4 + 0x180),param_1);
      iVar3 = *(int *)(lVar4 + 0x188);
      if (0 < iVar3) {
        lVar7 = 0;
        bVar8 = false;
        do {
          while( true ) {
            lVar2 = *(longlong *)(lVar4 + 0x180);
            _Dst = (uint *)(lVar2 + lVar7 * 0x10);
            if (((*(longlong *)(lVar2 + 8 + lVar7 * 0x10) != 0) && (_Dst[1] != 0)) &&
               ((uVar1 = *_Dst, -1 < (int)uVar1 &&
                (((((int)uVar1 < DAT_14c9647dc &&
                   (plVar10 = (longlong *)
                              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar10 != (longlong *)0x0)) && (*(uint *)(plVar10 + 2) == _Dst[1])) &&
                 (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))))) break;
            iVar9 = iVar3 + ~(uint)lVar7;
            if (iVar9 != 0) {
              if (0 < iVar9) {
                iVar9 = 1;
              }
              memmove(_Dst,(void *)(lVar2 + (longlong)(iVar3 - iVar9) * 0x10),(longlong)iVar9 << 4);
              iVar3 = *(int *)(lVar4 + 0x188);
            }
            iVar3 = iVar3 + -1;
            *(int *)(lVar4 + 0x188) = iVar3;
            bVar8 = true;
            if (iVar3 <= lVar7) goto LAB_1413ef6d4;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar3);
        if (bVar8) {
LAB_1413ef6d4:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413ef6fe FUN_1413ef6fe body=472 status=ok
// SIG undefined FUN_1413ef6fe(void)

undefined4 *
FUN_1413ef6fe(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14047ca78(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_48 = *puVar1;
  uVar11 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_48[2] = *puVar2;
  local_48[3] = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50[0];
  iVar9 = *(int *)(local_48 + 1);
  iVar6 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar9 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*local_48;
    }
    lVar7 = 0;
    uVar11 = 0;
    do {
      uVar8 = ((uint)(0x19 < (ushort)puVar4[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar7]) -
              0x20;
      uVar10 = (uint)(uVar11 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar8) & 0xff) * 4);
      uVar11 = (ulonglong)
               (uVar10 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
      lVar7 = lVar7 + 1;
    } while (iVar6 != (int)lVar7);
  }
  local_68 = param_4;
  cVar3 = FUN_14047c804(param_1,uVar11,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar5 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar11;
      *(uint *)((longlong)local_48 + 0x24) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1449ba646(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413ef8d8 FUN_1413ef8d8 body=1807 status=ok
// SIG undefined FUN_1413ef8d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413ef8d8(longlong param_1,longlong param_2,longlong param_3,double *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong local_220;
  longlong local_210;
  longlong local_208;
  undefined1 local_200 [24];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  longlong *plStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_108;
  longlong *local_f8;
  longlong local_e8 [5];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_2 == 0) goto LAB_1413efe28;
  local_128 = 0;
  uStack_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_108 = 0;
  local_f8 = (longlong *)0x0;
  iVar12 = *(int *)(param_3 + 0x5c);
  if (iVar12 != 0) {
    uVar3 = *(uint *)(param_3 + 0x58);
    local_138 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar14 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar14 == (undefined8 *)0x0) ||
         ((*(int *)(puVar14 + 2) != iVar12 || ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) {
        local_138 = 0;
      }
      else {
        local_138 = *puVar14;
      }
    }
  }
  iVar15 = *(int *)(param_3 + 100);
  if (iVar15 == 0) {
LAB_1413efefa:
    uStack_130 = 0;
  }
  else {
    uVar3 = *(uint *)(param_3 + 0x60);
    uStack_130 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar14 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar14 == (undefined8 *)0x0) ||
         ((*(int *)(puVar14 + 2) != iVar15 || ((*(uint *)(puVar14 + 1) & 0x10200000) != 0))))
      goto LAB_1413efefa;
      uStack_130 = *puVar14;
    }
  }
  local_118 = 0x800060101;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0.0;
  plStack_180 = (longlong *)0x0;
  local_168 = 0x3ff0000000000000;
  uStack_160 = 0x3ff0000000000000;
  local_158 = 0x3ff0000000000000;
  uStack_150 = 0;
  lVar13 = *(longlong *)(param_3 + 0x48);
  if (lVar13 == 0) {
    lVar17 = *(longlong *)(param_3 + 0x40);
LAB_1413efabd:
    if (iVar15 == 0) {
LAB_1413eff15:
      lVar18 = 0;
    }
    else {
      uVar3 = *(uint *)(param_3 + 0x60);
      lVar18 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar16 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar16 == (longlong *)0x0) ||
           (((int)plVar16[2] != iVar15 || ((*(uint *)(plVar16 + 1) & 0x10200000) != 0))))
        goto LAB_1413eff15;
        lVar18 = *plVar16;
      }
    }
    if (((((iVar12 == 0) || (uVar3 = *(uint *)(param_3 + 0x58), (int)uVar3 < 0)) ||
         (DAT_14c9647dc <= (int)uVar3)) ||
        ((plVar16 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar16 == (longlong *)0x0 || ((int)plVar16[2] != iVar12)))) ||
       ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) {
      local_210 = 0;
    }
    else {
      local_210 = *plVar16;
      if (local_210 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c();
      }
    }
    local_208 = lVar18;
    if ((lVar18 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar18);
    }
    local_228 = &local_210;
    local_220 = lVar13;
    FUN_14074c3a4(lVar17,&local_1c8,&local_1e8,local_200);
    local_188 = local_1c8;
    plStack_180 = plStack_1c0;
    auVar20._8_8_ = dStack_1e0;
    auVar20._0_8_ = local_1e8;
    local_178 = local_1b8;
    uStack_170 = 0;
    auVar20 = divpd(auVar20,_DAT_1499387d0);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = local_1d8;
    auVar21 = divpd(auVar21,_DAT_1499387d0);
    auVar20 = roundpd(auVar20,auVar20,3);
    auVar21 = roundpd(auVar21,auVar21,3);
    dVar9 = (local_1e8 - auVar20._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar10 = (dStack_1e0 - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar7 = (local_1d8 - auVar21._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar8 = (0.0 - auVar21._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar4 = sin(dVar9);
    dVar5 = sin(dVar10);
    dVar6 = sin(dVar7);
    sin(dVar8);
    dVar9 = cos(dVar9);
    dVar10 = cos(dVar10);
    dVar7 = cos(dVar7);
    cos(dVar8);
    dVar8 = dVar5 * dVar4 * dVar6 + dVar10 * dVar9 * dVar7;
    local_1a8 = dVar4 * dVar5 * dVar7 - dVar9 * dVar10 * dVar6;
    plStack_1a0 = (longlong *)(-(dVar4 * dVar10 * dVar7) - dVar9 * dVar5 * dVar6);
    local_198._8_4_ = SUB84(dVar8,0);
    local_198._0_8_ = -(dVar10 * dVar4 * dVar6) + dVar5 * dVar9 * dVar7;
    local_198._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    if ((*(char *)(param_3 + 7) == '\0') &&
       (lVar17 = *(longlong *)(param_3 + 0x40), (*(byte *)(lVar17 + 0x1a8) & 0x40) == 0))
    goto LAB_1413efabd;
    local_188 = *(double *)(lVar13 + 0x1e0);
    plStack_180 = *(longlong **)(lVar13 + 0x1e8);
    local_178 = *(undefined8 *)(lVar13 + 0x1f0);
    uStack_170 = 0;
    FUN_144a7484c(lVar13 + 0x200,&local_1c8);
    local_1a8 = local_1c8;
    plStack_1a0 = plStack_1c0;
    local_198._8_8_ = uStack_1b0;
    local_198._0_8_ = local_1b8;
  }
  if (*(char *)(param_1 + 0x48) == '\x01') {
    lVar13 = FUN_1413effe8(param_1 + 0x50);
  }
  else {
    lVar13 = FUN_140ccfc10();
    lVar13 = FUN_1413effe8(lVar13 + 0xe80);
    if (lVar13 == 0) {
      lVar13 = FUN_1401726e6();
    }
  }
  plVar16 = (longlong *)FUN_141037e38(param_2,lVar13,&local_1a8,&local_148);
  if (plVar16 != (longlong *)0x0) {
    *(undefined1 *)(param_3 + 8) = 1;
    local_1c8 = *param_4;
    plStack_1c0 = (longlong *)param_4[1];
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar16 + 0x638))(plVar16,&local_1c8);
    plVar11 = plStack_1c0;
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_1c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_1c0)(plStack_1c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    local_228 = (longlong *)((ulonglong)local_228 & 0xffffffffffffff00);
    lVar13 = 0;
    FUN_14113775c(plVar16,&DAT_14c846480,1,0);
    uVar3 = *(uint *)((longlong)plVar16 + 0xc);
    *(uint *)(param_3 + 0x70) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    iVar12 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar12 = *(int *)(lVar13 + 0x10);
      bVar19 = iVar12 == 0;
      if (bVar19) {
        *(int *)(lVar13 + 0x10) = iVar15;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar12 = iVar15;
      }
    }
    *(int *)(param_3 + 0x74) = iVar12;
  }
  if (local_108 != 0) {
    plVar16 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar16 = local_e8;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_1413efe28:
  if ((local_c0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413effe8 FUN_1413effe8 body=405 status=ok
// SIG undefined FUN_1413effe8(void)

longlong FUN_1413effe8(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    if (DAT_14c949118 == 0) {
      local_38 = FUN_140631fbe;
      lVar2 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar2;
      FUN_1446f470e(local_30,L"Class",1);
      local_48 = &LAB_146891e90;
      local_50 = &LAB_146273097;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 0x20;
      local_70 = 0x10000000;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar2);
      DAT_14c949118 = lVar2;
      uVar3 = FUN_144a7a812();
      lVar2 = DAT_14c949118;
      uVar4 = FUN_1449e2fb2();
      local_78 = L"Class";
      FUN_14574b446(uVar4,lVar2,uVar3,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
      lVar2 = FUN_1401726e6();
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_1413f0070;
      }
    }
  }
  lVar5 = 0;
LAB_1413f0070:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f017e FUN_1413f017e body=275 status=ok
// SIG undefined FUN_1413f017e(void)

void FUN_1413f017e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1413f0292 FUN_1413f0292 body=33 status=ok
// SIG undefined FUN_1413f0292(void)

void FUN_1413f0292(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = DAT_14caca218;
  if (DAT_14caca220 == 0) {
    plVar1 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001413f02b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  return;
}



// FUNCTION 1413f02b4 FUN_1413f02b4 body=112 status=ok
// SIG undefined FUN_1413f02b4(void)

void FUN_1413f02b4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x50);
  }
  if (plVar1 != param_2) {
    *(longlong **)(param_1 + 0x50) = param_2;
    if (param_2 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      lVar2 = (**(code **)(*param_2 + 8))(param_2);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
        *(longlong *)(param_1 + 0x48) = lVar2;
        return;
      }
      *(longlong *)(param_1 + 0x48) = lVar2;
      if (lVar2 != 0) {
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    return;
  }
  return;
}



// FUNCTION 1413f0324 FUN_1413f0324 body=173 status=ok
// SIG undefined FUN_1413f0324(void)

void FUN_1413f0324(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_1413f03bb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1413f03bb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1413f03d2 FUN_1413f03d2 body=1171 status=ok
// SIG undefined FUN_1413f03d2(void)

undefined8 * FUN_1413f03d2(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
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
  param_1[2] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
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
  param_1[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
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
  param_1[6] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 7) = 0;
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
  param_1[8] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
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
  param_1[0xc] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1413f0866 FUN_1413f0866 body=497 status=ok
// SIG undefined FUN_1413f0866(void)

ulonglong FUN_1413f0866(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar1 = (int)param_2[1];
  uVar3 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar6 = 0;
    uVar3 = 0;
    do {
      uVar5 = ((uint)(0x19 < (ushort)puVar2[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar3 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar3 ^ uVar5) & 0xff) * 4);
      uVar3 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar4 != (int)lVar6);
  }
  iVar1 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar1 == -1) {
LAB_1413f0932:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar6 = *param_1 + (longlong)local_4c * 0x40;
    plVar8 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 0xc;
    *(undefined8 *)(lVar6 + 0x18) = 4;
    lVar6 = param_1[0xb];
    param_1[0xb] = lVar6 + 4;
    if ((ulonglong)(param_1[0xc] - lVar6) < 4) {
      FUN_14112c458(param_1 + 10,lVar6);
    }
    *(undefined4 *)(param_1[10] + lVar6) = 0;
    *plVar8 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar1 * 0x40;
    if (lVar6 == 0) goto LAB_1413f0932;
    uVar3 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 0xc) goto LAB_1413f09c0;
    plVar8 = (longlong *)(*param_1 + (longlong)iVar1 * 0x40 + 0x10);
    uVar3 = 0x400000;
    if ((*plVar8 < 0) || (param_1[0xb] <= *plVar8)) goto LAB_1413f09c0;
  }
  *(undefined4 *)((longlong)plVar8 + 0x14) = param_4;
  uVar3 = FUN_1413f0a58(param_1,plVar8,local_60);
  if ((uVar3 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1413f09c0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1413f0a58 FUN_1413f0a58 body=216 status=ok
// SIG undefined FUN_1413f0a58(void)

undefined8 FUN_1413f0a58(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else if ((int)param_2[2] == 0xc) {
    if (param_2[1] == 4) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,4);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0x200000;
    }
  }
  else {
    uVar1 = 0x100000;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f0b32 FUN_1413f0b32 body=352 status=ok
// SIG undefined FUN_1413f0b32(void)

undefined4 *
FUN_1413f0b32(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1413f0d2c(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_1413f0c94(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1413f0f06(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f0c94 FUN_1413f0c94 body=152 status=ok
// SIG undefined FUN_1413f0c94(void)

void FUN_1413f0c94(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1411c2752((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1413f0cb8;
    }
  }
  uVar5 = 0;
LAB_1413f0cb8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1413f0d2c FUN_1413f0d2c body=473 status=ok
// SIG undefined FUN_1413f0d2c(void)

int * FUN_1413f0d2c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1413f0f06 FUN_1413f0f06 body=482 status=ok
// SIG undefined FUN_1413f0f06(void)

void FUN_1413f0f06(longlong *param_1)

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
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
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



// FUNCTION 1413f10ea FUN_1413f10ea body=6 status=ok
// SIG undefined FUN_1413f10ea(void)

undefined4 FUN_1413f10ea(undefined8 param_1,longlong param_2)

{
  return *(undefined4 *)(param_2 + 0x1c);
}



// FUNCTION 1413f10f0 FUN_1413f10f0 body=171 status=ok
// SIG undefined FUN_1413f10f0(void)

void FUN_1413f10f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_1 + 0x308))();
  if (lVar1 != 0) {
    local_48 = param_1[3];
    FUN_1409d9716(lVar1 + 0x70);
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3,param_4);
  local_58 = param_5;
  FUN_140bbc088(param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f119e FUN_1413f119e body=465 status=ok
// SIG undefined FUN_1413f119e(void)

longlong FUN_1413f119e(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  byte local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_4 == 0) {
    local_80 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    FUN_1407f8cf8(param_4,&local_80,(undefined8 *)(param_1 + 0x38),1);
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
LAB_1413f1338:
    lVar3 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x4c8))(param_2,local_80);
    if (cVar1 == '\0') {
      iVar2 = FUN_144909502(param_2,local_80);
      if (iVar2 == -1) goto LAB_1413f1338;
    }
    if (param_4 == 0) {
      local_88 = *(undefined8 *)(param_1 + 0x50);
      local_98 = *(undefined8 *)(param_1 + 0x40);
      uStack_90 = *(undefined8 *)(param_1 + 0x48);
      local_a8 = *(undefined8 *)(param_1 + 0x68);
      local_b8 = *(undefined8 *)(param_1 + 0x58);
      uStack_b0 = *(undefined8 *)(param_1 + 0x60);
    }
    else {
      FUN_1433cec3c(&local_98,param_1 + 0x40,*(undefined1 *)(param_4 + 0xc0));
      FUN_1478d46a8(&local_b8,param_1 + 0x58,*(undefined1 *)(param_4 + 0xc0));
    }
    local_e0 = *(byte *)(param_1 + 0x71) ^ 1;
    local_f8 = &local_58;
    local_48 = local_a8;
    local_58 = local_b8;
    uStack_50 = uStack_b0;
    local_68 = local_88;
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = (undefined4)uStack_90;
    uStack_6c = uStack_90._4_4_;
    local_f0 = &local_38;
    local_38 = 0x3ff0000000000000;
    local_30 = 0x3ff0000000000000;
    local_28 = 0x3ff0000000000000;
    local_c8 = 1;
    local_d0 = 1;
    local_d8 = 0;
    local_e8 = 0;
    lVar3 = FUN_140e3e448(*(undefined8 *)(param_1 + 0x30),param_2,local_80);
    if (lVar3 != 0) {
      FUN_144757f48(lVar3,0x40);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f1370 FUN_1413f1370 body=36 status=ok
// SIG undefined FUN_1413f1370(void)

longlong FUN_1413f1370(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = &DAT_14c9a8508;
  lVar1 = 0;
  do {
    if (*param_1 == *plVar2) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
    plVar2 = plVar2 + 0x24;
  } while (lVar1 != 0x24);
  return 0;
}



// FUNCTION 1413f1394 FUN_1413f1394 body=89 status=ok
// SIG undefined FUN_1413f1394(void)

void FUN_1413f1394(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x178) == '\x03')) {
    uVar1 = FUN_14136bb9a();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_140457ffc(lVar3 + 0x10,param_1);
    }
  }
  FUN_1413f13ee(param_1,param_2);
  return;
}



// FUNCTION 1413f13ee FUN_1413f13ee body=533 status=ok
// SIG undefined FUN_1413f13ee(void)

void FUN_1413f13ee(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x160) + 0x230);
  local_59 = param_2;
  if (lVar6 != 0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x160) + 0x228);
    local_58 = lVar6 * 0x188 + lVar12;
    do {
      FUN_1403dcede(lVar12 + 0x38);
      if ((longlong)*(int *)(lVar12 + 0x40) != 0) {
        lVar6 = *(longlong *)(lVar12 + 0x38);
        lVar9 = (longlong)*(int *)(lVar12 + 0x40) * 0xf0 + lVar6;
        do {
          plVar7 = *(longlong **)(param_1 + 0x98);
          lVar4 = (**(code **)(*plVar7 + 0x58))(plVar7,lVar6 + 4);
          if ((lVar4 != 0) || (lVar4 = FUN_140312a30(plVar7,lVar6 + 4), lVar4 != 0)) {
            lVar1 = *(longlong *)(lVar4 + 0xae8);
            if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
              FUN_1456cec3c(lVar1);
            }
            else if (lVar1 == 0) goto LAB_1413f159f;
            lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x1240) + 0x10))(lVar4 + 0x1240);
            plVar7 = &DAT_14cacd708;
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x290) != *(int *)(lVar4 + 700)) {
                lVar2 = *(longlong *)(lVar6 + 0x28);
                uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
                uVar10 = (uint)lVar2 & 0xffff;
                lVar8 = lVar4 + 0x2c0;
                if (*(longlong *)(lVar4 + 0x2c8) != 0) {
                  lVar8 = *(longlong *)(lVar4 + 0x2c8);
                }
                iVar11 = *(int *)(lVar8 + (ulonglong)
                                          (*(int *)(lVar4 + 0x2d0) - 1U &
                                          (int)((ulonglong)lVar2 >> 0x20) +
                                          ((uint)lVar2 << 0x10 | uVar10) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4)) * 4);
                if (iVar11 != -1) {
                  do {
                    plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x288) + (longlong)iVar11 * 0x18);
                    if (*plVar5 == lVar2) goto LAB_1413f1578;
                    iVar11 = (int)plVar5[2];
                  } while (iVar11 != -1);
                }
              }
              plVar5 = (longlong *)0x0;
LAB_1413f1578:
              plVar7 = plVar5 + 1;
              if (plVar5 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
              }
              if (plVar7 == (longlong *)0x0) {
                plVar7 = &DAT_14cacd708;
              }
            }
            local_50 = *plVar7;
            FUN_140671584(lVar1,&local_50);
          }
LAB_1413f159f:
          lVar6 = lVar6 + 0xf0;
        } while (lVar6 != lVar9);
      }
      lVar12 = lVar12 + 0x188;
    } while (lVar12 != local_58);
  }
  FUN_140670e16(param_1,local_59);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413f1604 FUN_1413f1604 body=1384 status=ok
// SIG undefined FUN_1413f1604(void)

void FUN_1413f1604(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88 [10];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[8] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_88[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_88);
    }
  }
  plVar4 = *(longlong **)(param_2 + 0x38);
  local_90 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_b8 = FUN_1446ddbd2();
    local_b0 = FUN_1468d96f0;
    local_c0 = 0;
    local_c8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
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
  local_98 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_b8 = FUN_1446ddbd2();
    local_b0 = FUN_1468d96f0;
    local_c0 = 0;
    local_c8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_98);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_98 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_98);
    }
  }
  uVar2 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = local_90;
  if ((local_90 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c();
  }
  plVar7 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = local_88;
  }
  FUN_1413f1b6e(plVar7,&local_a0,uVar2);
  lVar6 = *plVar7;
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *plVar7;
    }
  }
  bVar5 = DAT_14c950c29;
  *param_3 = lVar6;
  plVar7 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = local_88;
  }
  lVar6 = plVar7[1];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = plVar7[1];
    }
  }
  plVar7 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = local_88;
  }
  param_3[1] = lVar6;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = local_88;
  }
  FUN_1403de7ba(param_3 + 2,plVar4 + 2);
  FUN_1409ed7fc(param_3 + 6,plVar7 + 6);
  param_3[8] = plVar7[8];
  FUN_1409ed859(local_88[6],local_88[7] & 0xffffffff);
  if (local_88[6] != 0) {
    FUN_1400020a8();
  }
  if (local_88[4] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f1b6e FUN_1413f1b6e body=339 status=ok
// SIG undefined FUN_1413f1b6e(void)

longlong FUN_1413f1b6e(longlong param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  uint local_58;
  int iStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 8;
  iStack_54 = 0;
  if (param_3 == 0) {
    local_58 = 0;
    iVar2 = 0;
  }
  else {
    local_58 = *(uint *)(param_3 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_58 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar3;
      }
    }
  }
  puVar5 = &local_58;
  local_38 = 7;
  iStack_54 = iVar2;
  FUN_14095c1ce(param_1 + 0x30,param_2,puVar5,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_40) {
      puVar5 = (uint *)CONCAT44(iStack_54,local_58);
    }
    (*pcVar1)(puVar5);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(iStack_54,local_58));
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1413f1cc2 FUN_1413f1cc2 body=33 status=ok
// SIG undefined FUN_1413f1cc2(void)

undefined8 FUN_1413f1cc2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1413f1ce4 FUN_1413f1ce4 body=6194 status=ok
// SIG undefined FUN_1413f1ce4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413f1ce4(longlong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined *puVar22;
  uint *puVar23;
  int iVar24;
  longlong *plVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  uint uVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  int iVar36;
  longlong lVar37;
  longlong *plVar38;
  longlong lVar39;
  bool bVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  double dVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  float fVar53;
  undefined1 auStack_278 [40];
  longlong local_250;
  double local_248;
  uint *local_240;
  longlong local_238;
  longlong *local_230;
  undefined1 local_228 [16];
  longlong *local_210;
  longlong *local_208;
  uint *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong *local_170;
  double local_168;
  double local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  int local_128;
  undefined4 uStack_124;
  double local_120;
  double local_118;
  longlong local_110;
  longlong local_108;
  undefined8 *local_100;
  undefined1 local_f4 [4];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_208 = (longlong *)*param_2;
  if ((*(longlong *)(param_1 + 0x110) == 0) && (_DAT_000006a0 == local_208[2])) goto LAB_1413f3382;
  local_1f0 = local_208[2];
  local_240 = (uint *)FUN_14481774e(DAT_14cacd528);
  lVar37 = *(longlong *)(param_1 + 0x3f0);
  if (lVar37 == 0) {
    uVar51 = (undefined4)DAT_14c8462c8;
    uVar52 = (undefined4)((ulonglong)DAT_14c8462c8 >> 0x20);
    dVar13 = DAT_14c8462d0;
    dVar14 = DAT_14c8462c0;
  }
  else {
    plVar25 = (longlong *)param_2[1];
    if ((char)plVar25[2] == '\0') {
      FUN_144716af1(*plVar25);
      *(undefined1 *)(plVar25 + 2) = 1;
    }
    uVar27 = *(uint *)(plVar25 + 1);
    lVar39 = *plVar25;
    iVar24 = (int)((ulonglong)lVar37 >> 0x20);
    if ((int)uVar27 < 1) {
      uVar35 = 0;
    }
    else {
      uVar35 = 0;
      uVar18 = uVar27;
      do {
        uVar31 = (uVar18 >> 1) + uVar35;
        uVar8 = *(undefined8 *)(lVar39 + (ulonglong)uVar31 * 0x10);
        iVar26 = (int)uVar8 - (int)lVar37;
        if (iVar26 == 0) {
          iVar26 = (int)((ulonglong)uVar8 >> 0x20) - iVar24;
        }
        if (iVar26 < 0) {
          uVar35 = uVar31 + (uVar18 & 1);
        }
        bVar40 = 1 < uVar18;
        uVar18 = uVar18 >> 1;
      } while (bVar40);
    }
    fVar41 = 0.0;
    if ((int)uVar35 < (int)uVar27) {
      lVar33 = lVar39 + (ulonglong)uVar35 * 0x10;
      uVar8 = *(undefined8 *)(lVar39 + (ulonglong)uVar35 * 0x10);
      iVar26 = (int)lVar37 - (int)uVar8;
      if (iVar26 == 0) {
        iVar26 = iVar24 - (int)((ulonglong)uVar8 >> 0x20);
      }
      if ((lVar33 != 0) && (-1 < iVar26)) {
        fVar41 = *(float *)(lVar33 + 8) * 0.017453292;
      }
    }
    fVar41 = (float)(longlong)
                    (fVar41 * 0.15915494 +
                    *(float *)(&DAT_14a184448 + (ulonglong)(fVar41 < 0.0) * 4)) * -6.2831855 +
             fVar41;
    if (fVar41 <= 1.5707964) {
      if (fVar41 < -1.5707964) {
        fVar53 = -3.1415927;
        goto LAB_1413f1f38;
      }
      fVar53 = 1.0;
    }
    else {
      fVar53 = 3.1415927;
LAB_1413f1f38:
      fVar41 = fVar53 - fVar41;
      fVar53 = -1.0;
    }
    fVar49 = fVar41 * fVar41;
    uVar51 = 0;
    uVar52 = 0;
    dVar13 = (double)((((((fVar49 * -2.6051615e-07 + 2.4760495e-05) * fVar49 + -0.0013888378) *
                         fVar49 + 0.041666638) * fVar49 + -0.5) * fVar49 + 1.0) * fVar53);
    dVar14 = (double)(-(((((fVar49 * -2.3889859e-08 + 2.7525562e-06) * fVar49 + -0.00019840874) *
                          fVar49 + 0.008333331) * fVar49 + -0.16666667) * fVar49 + 1.0) * fVar41);
  }
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1a8 = 0;
  FUN_1417977a6();
  local_210 = (longlong *)(param_1 + 0x5d0);
  dVar46 = (double)param_3[8];
  local_250 = param_1;
  local_230 = param_3;
  if (dVar46 != 0.0) {
    local_198 = 0;
    lStack_190 = 0;
    lVar37 = *(longlong *)((longlong)dVar46 + 0x20);
    if (lVar37 == 0) {
      local_198 = *(longlong *)((longlong)dVar46 + 0x18);
    }
    else if (*(longlong *)(lVar37 + 0x20) == 0) {
      local_198 = *(longlong *)(lVar37 + 0x18);
      lStack_190 = *(longlong *)((longlong)dVar46 + 0x18);
    }
    lVar39 = lStack_190;
    lVar37 = local_198;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb72108);
    if (DAT_14cb720c0 != DAT_14cb720ec) {
      uVar27 = (uint)((ulonglong)lVar37 >> 0x10);
      uVar31 = (uint)lVar37 & 0xffff;
      uVar35 = (uint)((ulonglong)lVar39 >> 0x10);
      uVar18 = (uint)lVar39 & 0xffff;
      uVar27 = (int)((ulonglong)lVar37 >> 0x20) + ((uint)lVar37 << 0x10 | uVar31) +
               (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar31 >> 4);
      puVar22 = &DAT_14cb720f0;
      if (DAT_14cb720f8 != (undefined *)0x0) {
        puVar22 = DAT_14cb720f8;
      }
      iVar24 = *(int *)(puVar22 +
                       (ulonglong)
                       (DAT_14cb72100 - 1U &
                       ((uVar27 >> 2) +
                        ((uint)lVar39 << 0x10 | uVar18) + (int)((ulonglong)lVar39 >> 0x20) +
                        (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar18 >> 4) + uVar27 * 0x40 +
                        0x9e3779b9 ^ uVar27)) * 4);
      while (iVar24 != -1) {
        lVar20 = (longlong)iVar24 * 0x98;
        lVar33 = DAT_14cb720b8 + lVar20;
        if ((*(longlong *)(DAT_14cb720b8 + lVar20) == lVar37) &&
           (*(longlong *)(DAT_14cb720b8 + 8 + lVar20) == lVar39)) {
          if (lVar33 != 0) goto LAB_1413f21cf;
          break;
        }
        iVar24 = *(int *)(lVar33 + 0x90);
      }
    }
    local_170 = &local_198;
    local_168 = dVar46;
    FUN_14620fc7a(&local_128);
    lVar33 = DAT_14cb720b8 + (longlong)local_128 * 0x98;
    param_3 = local_230;
LAB_1413f21cf:
    plVar25 = (longlong *)(lVar33 + 0x10);
    lVar37 = param_3[8];
    local_238 = lVar37;
    if (lVar37 != 0) {
      FUN_1400bbfc4(&local_170,lVar37);
      dVar47 = local_160;
      dVar46 = local_168;
      plVar38 = local_170;
      iVar24 = (int)local_158;
      cVar17 = (*(code *)PTR_FUN_14c758760)();
      uVar27 = *(uint *)(lVar37 + 0xc);
      if (cVar17 == '\0') {
LAB_1413f2220:
        if ((int)uVar27 < DAT_14c9647dc) {
          lVar37 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
        }
        else {
          lVar37 = 0;
        }
        if (*(int *)(lVar37 + 0x10) == 0) {
          LOCK();
          iVar26 = DAT_14c964868 + 1;
          UNLOCK();
          iVar36 = DAT_14c964868 + 1;
          bVar40 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar26;
          if (bVar40) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar36);
          }
          LOCK();
          if (*(int *)(lVar37 + 0x10) == 0) {
            *(int *)(lVar37 + 0x10) = iVar36;
          }
          UNLOCK();
        }
      }
      else {
        if ((int)uVar27 < DAT_14c9647dc) {
          lVar37 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
        }
        else {
          lVar37 = 0;
        }
        param_1 = local_250;
        if ((*(uint *)(lVar37 + 8) & 0x8400000) == 0) goto LAB_1413f2220;
      }
      if ((*(longlong **)(lVar33 + 0x68) == plVar38) && (*(double *)(lVar33 + 0x70) == dVar46)) {
        if (*(int *)(lVar33 + 0x80) == iVar24) {
          bVar40 = true;
          if (iVar24 < 2) goto LAB_1413f2259;
          lVar37 = 0;
          while( true ) {
            uVar6 = *(ushort *)(*(longlong *)(lVar33 + 0x78) + lVar37);
            uVar27 = (uint)uVar6;
            uVar7 = *(ushort *)((longlong)dVar47 + lVar37);
            uVar35 = (uint)uVar7;
            if (uVar6 != uVar7) {
              if ((uVar7 | uVar6) < 0x80) {
                uVar27 = (uint)(byte)(&DAT_149e05da0)[uVar6];
                uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar7];
                if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar7]) goto LAB_1413f2791;
              }
              iVar24 = uVar27 - uVar35;
              goto LAB_1413f3416;
            }
            if (uVar6 == 0) break;
LAB_1413f2791:
            lVar37 = lVar37 + 2;
          }
          iVar24 = 0;
        }
        else {
          iVar24 = *(int *)(lVar33 + 0x80) + iVar24 + -1;
        }
LAB_1413f3416:
        bVar40 = iVar24 == 0;
      }
      else {
        bVar40 = false;
      }
LAB_1413f2259:
      if (dVar47 != 0.0) {
        FUN_1400020a8(dVar47);
      }
      if (bVar40) {
        local_110 = local_230[0x2c];
        if ((local_110 == 0) && (0 < (int)local_230[0x2e])) {
          lVar37 = FUN_144a79778(local_230);
          local_110 = *(longlong *)(lVar37 + 0x18);
        }
        uVar27 = (uint)((ulonglong)local_110 >> 0x10);
        uVar35 = (uint)local_110 & 0xffff;
        if (*(int *)(lVar33 + 0x18) != *(int *)(lVar33 + 0x44)) {
          lVar37 = lVar33 + 0x48;
          if (*(longlong *)(lVar33 + 0x50) != 0) {
            lVar37 = *(longlong *)(lVar33 + 0x50);
          }
          iVar24 = *(int *)(lVar37 + (ulonglong)
                                     (*(int *)(lVar33 + 0x58) - 1U &
                                     ((uint)local_110 << 0x10 | uVar35) +
                                     (int)((ulonglong)local_110 >> 0x20) +
                                     (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar35 >> 4)) * 4);
          if (iVar24 != -1) {
            do {
              lVar37 = *plVar25 + (longlong)iVar24 * 0x60;
              if (*(longlong *)(*plVar25 + (longlong)iVar24 * 0x60) == local_110) {
                if (lVar37 != 0) goto LAB_1413f2325;
                break;
              }
              iVar24 = *(int *)(lVar37 + 0x58);
            } while (iVar24 != -1);
          }
        }
        local_170 = &local_110;
        FUN_14612a8e4(plVar25);
        lVar37 = *plVar25 + (longlong)local_128 * 0x60;
LAB_1413f2325:
        plVar25 = (longlong *)(lVar37 + 8);
        puVar19 = (uint *)(param_1 + 0x5e0);
        iVar24 = *(int *)(param_1 + 0x5f8);
        local_228._0_8_ = puVar19;
        if (iVar24 == 0) {
          uVar34 = 1;
          uVar21 = 0;
          iVar26 = 0;
          iVar36 = 0;
        }
        else {
          puVar23 = *(uint **)(param_1 + 0x5f0);
          if (*(uint **)(param_1 + 0x5f0) == (uint *)0x0) {
            puVar23 = puVar19;
          }
          uVar27 = *puVar23;
          if (uVar27 == 0) {
            iVar26 = iVar24 + 0x1e;
            if (-1 < iVar24 + -1) {
              iVar26 = iVar24 + -1;
            }
            uVar21 = 0;
            uVar34 = (ulonglong)(uint)(iVar26 >> 5);
            if (iVar26 >> 5 < 1) {
              uVar34 = uVar21;
            }
            iVar36 = 0;
            do {
              if (uVar34 == uVar21) goto LAB_1413f2526;
              iVar36 = iVar36 + 0x20;
              uVar27 = puVar23[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar27 == 0);
          }
          else {
            uVar21 = 0;
            iVar36 = 0;
          }
          uVar34 = (ulonglong)(-uVar27 & uVar27);
          uVar30 = uVar34 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar26 = (iVar36 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          if (iVar24 <= iVar26) {
            iVar26 = iVar24;
          }
        }
        if (iVar26 != iVar24) {
          local_1f8 = lVar37 + 0x40;
          puVar23 = *(uint **)(local_250 + 0x5f0);
          if (*(uint **)(local_250 + 0x5f0) == (uint *)0x0) {
            puVar23 = puVar19;
          }
          iVar32 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar32 = iVar24 + -1;
          }
          if (*(int *)(lVar37 + 0x10) == *(int *)(lVar37 + 0x3c)) {
LAB_1413f2854:
            FUN_1461b3ea4(&local_128,local_230);
            FUN_1470d7a4e(&local_170);
            local_158 = 0;
            uStack_150 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_138 = 0;
            uStack_130 = 0;
            FUN_145e2ae7e(&local_170);
            uVar27 = *(uint *)(local_250 + 0x5f8);
            local_248 = (double)(ulonglong)uVar27;
            param_1 = local_250;
            if (uVar27 != 0) {
              puVar19 = *(uint **)(local_250 + 0x5f0);
              if (*(uint **)(local_250 + 0x5f0) == (uint *)0x0) {
                puVar19 = (uint *)local_228._0_8_;
              }
              uVar35 = *puVar19;
              if (uVar35 == 0) {
                iVar24 = uVar27 + 0x1e;
                if (-1 < (int)(uVar27 - 1)) {
                  iVar24 = uVar27 - 1;
                }
                uVar21 = 0;
                uVar34 = (ulonglong)(uint)(iVar24 >> 5);
                if (iVar24 >> 5 < 1) {
                  uVar34 = uVar21;
                }
                iVar24 = 0;
                do {
                  if (uVar34 == uVar21) goto LAB_1413f2c3a;
                  iVar24 = iVar24 + 0x20;
                  uVar35 = puVar19[uVar21 + 1];
                  uVar21 = uVar21 + 1;
                } while (uVar35 == 0);
              }
              else {
                uVar21 = 0;
                iVar24 = 0;
              }
              uVar30 = (ulonglong)(-uVar35 & uVar35);
              uVar34 = uVar30 * 2 + 1;
              lVar39 = 0x3f;
              if (uVar34 != 0) {
                for (; uVar34 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                }
              }
              iVar26 = (iVar24 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
              if (iVar26 < (int)uVar27) {
                local_200 = (uint *)(local_238 + 0x118);
                uVar27 = 0xffffffff;
                do {
                  lVar39 = *(longlong *)(*local_210 + (longlong)iVar26 * 0x28);
                  uVar18 = (uint)lVar39;
                  iVar36 = (int)((ulonglong)lVar39 >> 0x20);
                  uVar35 = (uint)((ulonglong)lVar39 >> 0x10);
                  if (*(int *)(lVar37 + 0x10) != *(int *)(lVar37 + 0x3c)) {
                    lVar33 = *(longlong *)(lVar37 + 0x48);
                    if (*(longlong *)(lVar37 + 0x48) == 0) {
                      lVar33 = local_1f8;
                    }
                    iVar32 = *(int *)(lVar33 + (ulonglong)
                                               (*(int *)(lVar37 + 0x50) - 1U &
                                               iVar36 + (uVar18 << 0x10 | uVar18 & 0xffff) +
                                               (uVar35 << 0x13 | uVar35 & 0xffff) +
                                               ((uVar18 & 0xffff) >> 4)) * 4);
                    if (iVar32 != -1) {
                      do {
                        if (*(longlong *)(*plVar25 + (longlong)iVar32 * 0x28) == lVar39)
                        goto LAB_1413f2b78;
                        iVar32 = *(int *)(*plVar25 + (longlong)iVar32 * 0x28 + 0x20);
                      } while (iVar32 != -1);
                    }
                  }
                  lVar33 = *local_210 + (longlong)iVar26 * 0x28;
                  if ((lVar39 != 0) && (*(int *)(local_238 + 0xe8) != *(int *)(local_238 + 0x114)))
                  {
                    puVar19 = *(uint **)(local_238 + 0x120);
                    if (*(uint **)(local_238 + 0x120) == (uint *)0x0) {
                      puVar19 = local_200;
                    }
                    uVar35 = puVar19[*(int *)(local_238 + 0x128) - 1U &
                                     iVar36 + (uVar18 << 0x10 | uVar18 & 0xffff) +
                                     (uVar35 << 0x13 | uVar35 & 0xffff) + ((uVar18 & 0xffff) >> 4)];
                    if (uVar35 != 0xffffffff) {
                      do {
                        plVar38 = (longlong *)
                                  (*(longlong *)(local_238 + 0xe0) + (longlong)(int)uVar35 * 0x14);
                        if (*plVar38 == lVar39) {
                          if ((plVar38 != (longlong *)0x0) && (plVar38 + 1 != (longlong *)0x0)) {
                            iVar26 = (int)plVar38[1];
                            lVar39 = (longlong)iVar26;
                            if (lVar39 != -1) {
                              if (*(char *)(local_158 + lVar39) == '\0') {
                                FUN_1461dcc1a(&local_170,iVar26);
                              }
                              local_188 = local_170[lVar39 * 0xc + 4];
                              uStack_180 = (undefined8 *)(local_170 + lVar39 * 0xc + 4)[1];
                              local_178 = local_170[lVar39 * 0xc + 6];
                              local_100 = &local_188;
                              local_108 = lVar33;
                              FUN_1458952b4(plVar25,local_f4,&local_108,0);
                              *(longlong *)(lVar33 + 0x18) = local_178;
                              uVar42 = (undefined4)local_188;
                              uVar43 = local_188._4_4_;
                              uVar44 = (undefined4)uStack_180;
                              uVar45 = uStack_180._4_4_;
                              goto LAB_1413f2b71;
                            }
                          }
                          break;
                        }
                        uVar35 = *(uint *)((longlong)plVar38 + 0xc);
                      } while (uVar35 != 0xffffffff);
                    }
                  }
                  uStack_180 = &DAT_14caddeb0;
                  local_188 = lVar33;
                  FUN_1458952b4(plVar25,&local_108,&local_188,0);
                  *(double *)(lVar33 + 0x18) = DAT_14caddec0;
                  uVar42 = (undefined4)DAT_14caddeb0;
                  uVar43 = DAT_14caddeb0._4_4_;
                  uVar44 = _DAT_14caddeb8;
                  uVar45 = uRam000000014caddebc;
LAB_1413f2b71:
                  *(undefined4 *)(lVar33 + 8) = uVar42;
                  *(undefined4 *)(lVar33 + 0xc) = uVar43;
                  *(undefined4 *)(lVar33 + 0x10) = uVar44;
                  *(undefined4 *)(lVar33 + 0x14) = uVar45;
LAB_1413f2b78:
                  uVar27 = uVar27 & ~(uint)uVar30;
                  lVar39 = *(longlong *)(param_1 + 0x5f0);
                  if (*(longlong *)(param_1 + 0x5f0) == 0) {
                    lVar39 = local_228._0_8_;
                  }
                  iVar36 = *(int *)(param_1 + 0x5f8);
                  iVar26 = (int)uVar21;
                  lVar33 = (longlong)iVar26;
                  uVar35 = *(uint *)(lVar39 + lVar33 * 4) & uVar27;
                  if (uVar35 == 0) {
                    iVar32 = iVar36 + 0x1e;
                    if (-1 < iVar36 + -1) {
                      iVar32 = iVar36 + -1;
                    }
                    iVar32 = iVar32 >> 5;
                    iVar24 = iVar24 + 0x20;
                    iVar29 = iVar32;
                    if (iVar32 < iVar26) {
                      iVar29 = iVar26;
                    }
                    if (iVar26 < iVar32) {
                      lVar20 = 0;
                      do {
                        uVar35 = *(uint *)(lVar39 + lVar33 * 4 + 4 + lVar20 * 4);
                        if (uVar35 != 0) {
                          uVar21 = (ulonglong)(iVar26 + (int)lVar20 + 1);
                          uVar27 = 0xffffffff;
                          goto LAB_1413f2bfb;
                        }
                        iVar24 = iVar24 + 0x20;
                        lVar20 = lVar20 + 1;
                      } while (iVar29 - lVar33 != lVar20);
                      uVar27 = 0xffffffff;
                      iVar26 = iVar29;
                    }
                    uVar21 = (ulonglong)(iVar26 + 1);
                    param_1 = local_250;
                    iVar26 = iVar36;
                  }
                  else {
LAB_1413f2bfb:
                    uVar30 = (ulonglong)(-uVar35 & uVar35);
                    uVar34 = uVar30 * 2 + 1;
                    lVar39 = 0x3f;
                    if (uVar34 != 0) {
                      for (; uVar34 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                      }
                    }
                    iVar26 = (iVar24 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
                    if (iVar36 <= iVar26) {
                      iVar26 = iVar36;
                    }
                  }
                } while (iVar26 != local_248._0_4_);
              }
            }
LAB_1413f2c3a:
            FUN_146545bea(&local_170);
            if (CONCAT44(uStack_124,local_128) != 0) {
              FUN_1400020a8();
            }
            goto LAB_1413f2c59;
          }
          local_248 = *(double *)(local_250 + 0x5d0);
          iVar32 = iVar32 >> 5;
          lVar39 = *(longlong *)(lVar37 + 0x48);
          if (*(longlong *)(lVar37 + 0x48) == 0) {
            lVar39 = local_1f8;
          }
          local_200 = puVar23 + 1;
          uVar27 = 0xffffffff;
          do {
            lVar33 = *(longlong *)((longlong)local_248 + (longlong)iVar26 * 0x28);
            uVar35 = (uint)((ulonglong)lVar33 >> 0x10);
            uVar18 = (uint)lVar33 & 0xffff;
            iVar26 = *(int *)(lVar39 + (ulonglong)
                                       ((int)((ulonglong)lVar33 >> 0x20) +
                                        ((uint)lVar33 << 0x10 | uVar18) +
                                        (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar18 >> 4) &
                                       *(int *)(lVar37 + 0x50) - 1U) * 4);
            if (iVar26 == -1) goto LAB_1413f2854;
            while (*(longlong *)(*plVar25 + (longlong)iVar26 * 0x28) != lVar33) {
              iVar26 = *(int *)(*plVar25 + (longlong)iVar26 * 0x28 + 0x20);
              if (iVar26 == -1) goto LAB_1413f2854;
            }
            uVar27 = uVar27 & ~(uint)uVar34;
            iVar26 = (int)uVar21;
            lVar33 = (longlong)iVar26;
            uVar35 = puVar23[lVar33] & uVar27;
            if (uVar35 == 0) {
              iVar29 = iVar32;
              if (iVar32 < iVar26) {
                iVar29 = iVar26;
              }
              if (iVar32 <= iVar26) break;
              lVar20 = 0;
              while( true ) {
                iVar36 = iVar36 + 0x20;
                uVar35 = local_200[lVar33 + lVar20];
                if (uVar35 != 0) break;
                lVar20 = lVar20 + 1;
                if (iVar29 - lVar33 == lVar20) goto LAB_1413f2526;
              }
              uVar21 = (ulonglong)(iVar26 + (int)lVar20 + 1);
              uVar27 = 0xffffffff;
            }
            uVar34 = (ulonglong)(-uVar35 & uVar35);
            uVar30 = uVar34 * 2 + 1;
            lVar33 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar33 == 0; lVar33 = lVar33 + -1) {
              }
            }
            iVar26 = (iVar36 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
          } while (iVar26 < iVar24);
        }
LAB_1413f2526:
        param_1 = local_250;
        if (iVar24 == 0) {
          uVar34 = 1;
          uVar21 = 0;
          iVar26 = 0;
          iVar36 = 0;
        }
        else {
          puVar23 = *(uint **)(local_250 + 0x5f0);
          if (*(uint **)(local_250 + 0x5f0) == (uint *)0x0) {
            puVar23 = puVar19;
          }
          uVar27 = *puVar23;
          if (uVar27 == 0) {
            iVar26 = iVar24 + 0x1e;
            if (-1 < iVar24 + -1) {
              iVar26 = iVar24 + -1;
            }
            uVar21 = 0;
            uVar34 = (ulonglong)(uint)(iVar26 >> 5);
            if (iVar26 >> 5 < 1) {
              uVar34 = uVar21;
            }
            iVar36 = 0;
            do {
              if (uVar34 == uVar21) goto LAB_1413f2c59;
              iVar36 = iVar36 + 0x20;
              uVar27 = puVar23[uVar21 + 1];
              uVar21 = uVar21 + 1;
            } while (uVar27 == 0);
          }
          else {
            uVar21 = 0;
            iVar36 = 0;
          }
          uVar34 = (ulonglong)(-uVar27 & uVar27);
          uVar30 = uVar34 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar26 = (iVar36 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          if (iVar24 <= iVar26) {
            iVar26 = iVar24;
          }
        }
        if (iVar26 != iVar24) {
          uVar27 = 0xffffffff;
          do {
            if (*(int *)(lVar37 + 0x10) != *(int *)(lVar37 + 0x3c)) {
              lVar39 = *(longlong *)(*local_210 + (longlong)iVar26 * 0x28);
              uVar35 = (uint)((ulonglong)lVar39 >> 0x10);
              uVar18 = (uint)lVar39 & 0xffff;
              lVar33 = *(longlong *)(lVar37 + 0x48);
              if (*(longlong *)(lVar37 + 0x48) == 0) {
                lVar33 = lVar37 + 0x40;
              }
              iVar32 = *(int *)(lVar33 + (ulonglong)
                                         (*(int *)(lVar37 + 0x50) - 1U &
                                         (int)((ulonglong)lVar39 >> 0x20) +
                                         ((uint)lVar39 << 0x10 | uVar18) +
                                         (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar18 >> 4)) * 4);
              if (iVar32 != -1) {
                do {
                  plVar38 = (longlong *)(*plVar25 + (longlong)iVar32 * 0x28);
                  if (*plVar38 == lVar39) goto LAB_1413f264d;
                  iVar32 = (int)plVar38[4];
                } while (iVar32 != -1);
              }
            }
            plVar38 = (longlong *)0x0;
LAB_1413f264d:
            lVar39 = *local_210 + (longlong)iVar26 * 0x28;
            *(longlong *)(lVar39 + 0x18) = plVar38[3];
            uVar42 = *(undefined4 *)((longlong)plVar38 + 0xc);
            lVar33 = plVar38[2];
            uVar43 = *(undefined4 *)((longlong)plVar38 + 0x14);
            *(int *)(lVar39 + 8) = (int)plVar38[1];
            *(undefined4 *)(lVar39 + 0xc) = uVar42;
            *(int *)(lVar39 + 0x10) = (int)lVar33;
            *(undefined4 *)(lVar39 + 0x14) = uVar43;
            uVar27 = uVar27 & ~(uint)uVar34;
            puVar23 = *(uint **)(local_250 + 0x5f0);
            if (*(uint **)(local_250 + 0x5f0) == (uint *)0x0) {
              puVar23 = puVar19;
            }
            iVar32 = *(int *)(local_250 + 0x5f8);
            iVar26 = (int)uVar21;
            lVar39 = (longlong)iVar26;
            uVar35 = puVar23[lVar39] & uVar27;
            if (uVar35 == 0) {
              iVar29 = iVar32 + 0x1e;
              if (-1 < iVar32 + -1) {
                iVar29 = iVar32 + -1;
              }
              iVar29 = iVar29 >> 5;
              iVar36 = iVar36 + 0x20;
              iVar28 = iVar29;
              if (iVar29 < iVar26) {
                iVar28 = iVar26;
              }
              if (iVar26 < iVar29) {
                lVar33 = 0;
                do {
                  uVar35 = puVar23[lVar39 + lVar33 + 1];
                  if (uVar35 != 0) {
                    uVar21 = (ulonglong)(iVar26 + (int)lVar33 + 1);
                    uVar27 = 0xffffffff;
                    goto LAB_1413f26ed;
                  }
                  iVar36 = iVar36 + 0x20;
                  lVar33 = lVar33 + 1;
                } while (iVar28 - lVar39 != lVar33);
                uVar27 = 0xffffffff;
                lVar39 = (longlong)iVar28;
              }
              uVar21 = lVar39 + 1U & 0xffffffff;
              iVar26 = iVar32;
            }
            else {
LAB_1413f26ed:
              uVar34 = (ulonglong)(-uVar35 & uVar35);
              uVar30 = uVar34 * 2 + 1;
              lVar39 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                }
              }
              iVar26 = (iVar36 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
              if (iVar32 <= iVar26) {
                iVar26 = iVar32;
              }
            }
          } while (iVar26 != iVar24);
        }
      }
    }
LAB_1413f2c59:
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb72108);
  }
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar37 = *(longlong *)(local_250 + 0x138) + 0x450;
    lVar39 = (longlong)*(int *)(param_1 + 0x140) * 0x4d0;
    do {
      dVar46 = *(double *)(lVar37 + 8) -
               (double)CONCAT44(DAT_14caddeb0._4_4_,(undefined4)DAT_14caddeb0);
      if ((((((dVar46 != 0.0) || (NAN(dVar46))) ||
            (dVar46 = *(double *)(lVar37 + 0x10) -
                      (double)CONCAT44(uRam000000014caddebc,_DAT_14caddeb8), dVar46 != 0.0)) ||
           (((NAN(dVar46) || (dVar46 = *(double *)(lVar37 + 0x18) - DAT_14caddec0, dVar46 != 0.0))
            || (NAN(dVar46))))) &&
          (((dVar46 = *(double *)(lVar37 + 0x20) -
                      (double)CONCAT44(DAT_14caddeb0._4_4_,(undefined4)DAT_14caddeb0), dVar46 != 0.0
            || (NAN(dVar46))) ||
           ((dVar46 = *(double *)(lVar37 + 0x28) -
                      (double)CONCAT44(uRam000000014caddebc,_DAT_14caddeb8), dVar46 != 0.0 ||
            (((NAN(dVar46) || (dVar46 = *(double *)(lVar37 + 0x30) - DAT_14caddec0, dVar46 != 0.0))
             || (NAN(dVar46))))))))) &&
         (((-1 < *(int *)(lVar37 + -0x380) && (*(int *)(lVar37 + -0x37c) != -1)) &&
          ((((cVar17 = FUN_143cb75bc(local_210), cVar17 != '\0' &&
             (((dVar46 = (double)local_170 -
                         (double)CONCAT44(DAT_14caddeb0._4_4_,(undefined4)DAT_14caddeb0),
               dVar46 != 0.0 || (NAN(dVar46))) ||
              ((dVar46 = local_168 - (double)CONCAT44(uRam000000014caddebc,_DAT_14caddeb8),
               dVar46 != 0.0 ||
               (((NAN(dVar46) || (local_160 - DAT_14caddec0 != 0.0)) ||
                (NAN(local_160 - DAT_14caddec0))))))))) &&
            (cVar17 = FUN_143cb75bc(local_210), dVar46 = local_160, cVar17 != '\0')) &&
           (((dVar47 = (double)CONCAT44(uStack_124,local_128) -
                       (double)CONCAT44(DAT_14caddeb0._4_4_,(undefined4)DAT_14caddeb0),
             dVar47 != 0.0 || (NAN(dVar47))) ||
            (((dVar47 = local_120 - (double)CONCAT44(uRam000000014caddebc,_DAT_14caddeb8),
              dVar47 != 0.0 || ((NAN(dVar47) || (local_118 - DAT_14caddec0 != 0.0)))) ||
             (NAN(local_118 - DAT_14caddec0))))))))))) {
        lVar33 = (longlong)*(int *)(lVar37 + -0x37c) * 0x60;
        pdVar1 = (double *)(*local_208 + 0x20 + lVar33);
        dVar15 = *pdVar1;
        dVar16 = pdVar1[1];
        dVar47 = *(double *)(*local_208 + 0x30 + lVar33);
        dVar50 = dVar47;
        dVar4 = dVar15;
        dVar48 = dVar16;
        if (((((((local_240[1] != 0) && (uVar27 = *local_240, -1 < (int)uVar27)) &&
               ((int)uVar27 < DAT_14c9647dc)) &&
              ((lVar33 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8), lVar33 != 0
               && (*(uint *)(lVar33 + 0x10) == local_240[1])))) &&
             (((*(uint *)(lVar33 + 8) & 0x10200000) == 0 &&
              ((local_240[3] != 0 && (uVar27 = local_240[2], -1 < (int)uVar27)))))) &&
            ((int)uVar27 < DAT_14c9647dc)) &&
           (((lVar33 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8), lVar33 != 0
             && (*(uint *)(lVar33 + 0x10) == local_240[3])) &&
            ((*(uint *)(lVar33 + 8) & 0x10200000) == 0)))) {
          iVar24 = *(int *)(*(longlong *)(local_1f0 + 0x70) +
                           (longlong)*(int *)(lVar37 + -0x37c) * 4);
          dVar50 = DAT_14c8464f0;
          dVar4 = DAT_14c8464e0;
          dVar48 = DAT_14c8464e8;
          if ((-1 < (longlong)iVar24) && (iVar24 < (int)local_240[6])) {
            iVar24 = *(int *)(*(longlong *)(local_240 + 4) + (longlong)iVar24 * 4);
            if ((-1 < (longlong)iVar24) && (iVar24 < (int)local_240[0xe])) {
              lVar33 = *(longlong *)(local_240 + 0xc);
              lVar20 = (longlong)iVar24 * 0x40;
              dVar48 = *(double *)(lVar33 + 0x10 + lVar20);
              dVar3 = *(double *)(lVar33 + lVar20);
              dVar4 = *(double *)(lVar33 + 8 + lVar20);
              dVar12 = dVar4 * dVar47 - dVar16 * dVar48;
              dVar12 = dVar12 + dVar12;
              dVar5 = *(double *)(lVar33 + 0x18 + lVar20);
              dVar11 = dVar3 * dVar16 - dVar15 * dVar4;
              dVar11 = dVar11 + dVar11;
              dVar10 = dVar48 * dVar15 - dVar47 * dVar3;
              dVar10 = dVar10 + dVar10;
              dVar50 = (dVar3 * dVar10 - dVar12 * dVar4) + dVar5 * dVar11 + dVar47;
              dVar4 = (dVar4 * dVar11 - dVar10 * dVar48) + dVar12 * dVar5 + dVar15;
              dVar48 = (dVar48 * dVar12 - dVar11 * dVar3) + dVar5 * dVar10 + dVar16;
              local_248 = dVar13;
            }
          }
        }
        dVar47 = local_118 - local_160;
        fVar41 = (float)(*(double *)(lVar37 + 0x30) - *(double *)(lVar37 + 0x18));
        local_228._8_4_ = SUB84(dVar48,0);
        local_228._0_8_ = dVar4;
        local_228._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        fVar53 = (float)(dVar50 * dVar13 + dVar4 * dVar14 + (double)CONCAT44(uVar52,uVar51) * dVar48
                        );
        cVar17 = (**(code **)(*local_230 + 0x2c0))();
        if (cVar17 == '\0') {
          fVar41 = (float)(((double)fVar41 * ((double)fVar53 - dVar46)) / (double)(float)dVar47 +
                          *(double *)(lVar37 + 0x18));
        }
        else {
          fVar41 = (fVar53 / (float)dVar47) * fVar41;
        }
        dVar46 = (double)(fVar41 - fVar53);
        dVar48 = (double)CONCAT44(uVar52,uVar51) * dVar46 + dVar48;
        lVar33 = *local_208;
        lVar20 = (longlong)*(int *)(lVar37 + -0x37c) * 0x60;
        auVar9._8_4_ = SUB84(dVar48,0);
        auVar9._0_8_ = dVar46 * dVar14 + (double)local_228._0_8_;
        auVar9._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
        *(undefined1 (*) [16])(lVar33 + 0x20 + lVar20) = auVar9;
        pdVar1 = (double *)(lVar33 + 0x30 + lVar20);
        *pdVar1 = dVar50 + dVar13 * dVar46;
        pdVar1[1] = 0.0;
      }
      lVar37 = lVar37 + 0x4d0;
      lVar39 = lVar39 + -0x4d0;
    } while (lVar39 != 0);
  }
  iVar24 = *(int *)(local_250 + 0x5f8);
  if (iVar24 == 0) {
    uVar34 = 1;
    uVar21 = 0;
    iVar26 = 0;
    iVar36 = 0;
  }
  else {
    puVar19 = *(uint **)(local_250 + 0x5f0);
    if (*(uint **)(local_250 + 0x5f0) == (uint *)0x0) {
      puVar19 = (uint *)(local_250 + 0x5e0);
    }
    uVar27 = *puVar19;
    if (uVar27 == 0) {
      iVar26 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar26 = iVar24 + -1;
      }
      uVar21 = 0;
      uVar34 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar34 = uVar21;
      }
      iVar36 = 0;
      do {
        if (uVar34 == uVar21) goto LAB_1413f3382;
        iVar36 = iVar36 + 0x20;
        uVar27 = puVar19[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar21 = 0;
      iVar36 = 0;
    }
    uVar34 = (ulonglong)(-uVar27 & uVar27);
    uVar30 = uVar34 * 2 + 1;
    lVar37 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    iVar26 = (iVar36 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
    if (iVar24 <= iVar26) {
      iVar26 = iVar24;
    }
  }
  if (iVar26 != iVar24) {
    uVar27 = 0xffffffff;
    do {
      lVar37 = *(longlong *)(local_250 + 0x5d0);
      *(double *)(lVar37 + 0x18 + (longlong)iVar26 * 0x28) = DAT_14caddec0;
      uVar42 = uRam000000014caddebc;
      uVar52 = _DAT_14caddeb8;
      uVar51 = DAT_14caddeb0._4_4_;
      puVar2 = (undefined4 *)(lVar37 + 8 + (longlong)iVar26 * 0x28);
      *puVar2 = (undefined4)DAT_14caddeb0;
      puVar2[1] = uVar51;
      puVar2[2] = uVar52;
      puVar2[3] = uVar42;
      uVar27 = ~(uint)uVar34 & uVar27;
      puVar19 = *(uint **)(local_250 + 0x5f0);
      if (*(uint **)(local_250 + 0x5f0) == (uint *)0x0) {
        puVar19 = (uint *)(local_250 + 0x5e0);
      }
      iVar32 = *(int *)(local_250 + 0x5f8);
      iVar26 = (int)uVar21;
      lVar37 = (longlong)iVar26;
      uVar35 = puVar19[lVar37] & uVar27;
      if (uVar35 == 0) {
        iVar29 = iVar32 + 0x1e;
        if (-1 < iVar32 + -1) {
          iVar29 = iVar32 + -1;
        }
        iVar29 = iVar29 >> 5;
        iVar36 = iVar36 + 0x20;
        iVar28 = iVar29;
        if (iVar29 < iVar26) {
          iVar28 = iVar26;
        }
        if (iVar26 < iVar29) {
          lVar39 = 0;
          do {
            uVar35 = puVar19[lVar37 + lVar39 + 1];
            if (uVar35 != 0) {
              uVar21 = (ulonglong)(iVar26 + (int)lVar39 + 1);
              uVar27 = 0xffffffff;
              goto LAB_1413f3338;
            }
            iVar36 = iVar36 + 0x20;
            lVar39 = lVar39 + 1;
          } while (iVar28 - lVar37 != lVar39);
          uVar27 = 0xffffffff;
          iVar26 = iVar28;
        }
        uVar21 = (ulonglong)(iVar26 + 1);
        iVar26 = iVar32;
      }
      else {
LAB_1413f3338:
        uVar34 = (ulonglong)(-uVar35 & uVar35);
        uVar30 = uVar34 * 2 + 1;
        lVar37 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar37 == 0; lVar37 = lVar37 + -1) {
          }
        }
        iVar26 = (iVar36 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
        if (iVar32 <= iVar26) {
          iVar26 = iVar32;
        }
      }
    } while (iVar26 != iVar24);
  }
LAB_1413f3382:
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413f3518 FUN_1413f3518 body=617 status=ok
// SIG undefined FUN_1413f3518(void)

void FUN_1413f3518(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1413f3603;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1413f3603:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1413f3782(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f3782 FUN_1413f3782 body=327 status=ok
// SIG undefined FUN_1413f3782(void)

void FUN_1413f3782(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_14047210e();
  if (lVar2 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_40 = &local_28;
      local_28 = FUN_140940982;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146572ba2;
      local_48 = &LAB_148ca13ba;
      local_50 = &LAB_140e51436;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if (((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (lVar2 == param_2)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(lVar2 + 0xd44);
      uVar1 = FUN_140ad710a(lVar2);
      *(undefined1 *)(param_1 + 0xc0) = uVar1;
      FUN_1413f38e0(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f38e0 FUN_1413f38e0 body=735 status=ok
// SIG undefined FUN_1413f38e0(void)

void FUN_1413f38e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_14047210e();
  if (lVar6 == 0) {
LAB_1413f3b13:
    if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (DAT_14cbbd498 == 0) {
    local_60 = &local_40;
    local_40 = FUN_140940982;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_146572ba2;
    local_68 = &LAB_148ca13ba;
    local_70 = &LAB_140e51436;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = 0x1068;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
  }
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_1413f3b13;
  uVar7 = FUN_1409715bc(param_1);
  cVar4 = FUN_14011bf50(uVar7);
  if (cVar4 == '\0') goto LAB_1413f3b13;
  FUN_1403adc5e(&local_40,uVar7);
  lVar3 = *(longlong *)(local_40 + 0xa0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 200));
  *(int *)(lVar3 + 0xc0) = *(int *)(lVar3 + 0xc0) + 1;
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
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    fVar8 = *(float *)(lVar6 + 0xf6c);
    if ((fVar8 != *(float *)(lVar3 + 0x30)) || (NAN(fVar8) || NAN(*(float *)(lVar3 + 0x30)))) {
      iVar5 = *(int *)(lVar3 + 0x34) + 1;
LAB_1413f3b74:
      *(float *)(lVar3 + 0x30) = fVar8;
      *(int *)(lVar3 + 0x34) = iVar5;
    }
    else if (*(int *)(lVar3 + 0x34) == 0) {
      iVar5 = 1;
      goto LAB_1413f3b74;
    }
    fVar8 = (float)FUN_148f17aea(lVar6);
    if ((fVar8 != *(float *)(lVar3 + 0x40)) || (NAN(fVar8) || NAN(*(float *)(lVar3 + 0x40)))) {
      iVar5 = *(int *)(lVar3 + 0x44) + 1;
LAB_1413f3b95:
      *(float *)(lVar3 + 0x40) = fVar8;
      *(int *)(lVar3 + 0x44) = iVar5;
    }
    else if (*(int *)(lVar3 + 0x44) == 0) {
      iVar5 = 1;
      goto LAB_1413f3b95;
    }
    fVar8 = *(float *)(lVar3 + 0x38);
  }
  else {
    if ((*(float *)(lVar3 + 0x30) != 0.0) || (NAN(*(float *)(lVar3 + 0x30)))) {
      iVar5 = *(int *)(lVar3 + 0x34) + 1;
LAB_1413f3a4e:
      *(undefined4 *)(lVar3 + 0x30) = 0;
      *(int *)(lVar3 + 0x34) = iVar5;
    }
    else if (*(int *)(lVar3 + 0x34) == 0) {
      iVar5 = 1;
      goto LAB_1413f3a4e;
    }
    if ((*(float *)(lVar3 + 0x40) != 0.0) || (NAN(*(float *)(lVar3 + 0x40)))) {
      iVar5 = *(int *)(lVar3 + 0x44) + 1;
LAB_1413f3a64:
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(int *)(lVar3 + 0x44) = iVar5;
    }
    else if (*(int *)(lVar3 + 0x44) == 0) {
      iVar5 = 1;
      goto LAB_1413f3a64;
    }
    fVar8 = *(float *)(lVar3 + 0x38);
  }
  if ((fVar8 != 0.0) || (NAN(fVar8))) {
    iVar5 = *(int *)(lVar3 + 0x3c) + 1;
  }
  else {
    if (*(int *)(lVar3 + 0x3c) != 0) goto LAB_1413f3a0e;
    iVar5 = 1;
  }
  *(undefined4 *)(lVar3 + 0x38) = 0;
  *(int *)(lVar3 + 0x3c) = iVar5;
LAB_1413f3a0e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1413f3bd8 FUN_1413f3bd8 body=39 status=ok
// SIG undefined FUN_1413f3bd8(void)

void FUN_1413f3bd8(longlong param_1)

{
  if (*(code **)(&DAT_14c9a8610 + (uint)*(byte *)(param_1 + 0x28) * 0x120) != (code *)0x0) {
                    /* WARNING: Jumptable at 0x0001413f3bfb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_14c9a8610 + (uint)*(byte *)(param_1 + 0x28) * 0x120))(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 1413f3c00 FUN_1413f3c00 body=16 status=ok
// SIG undefined FUN_1413f3c00(void)

undefined4 * FUN_1413f3c00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_2;
  return param_1;
}



// FUNCTION 1413f3c10 FUN_1413f3c10 body=299 status=ok
// SIG undefined FUN_1413f3c10(void)

void FUN_1413f3c10(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_145d85ea2();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  lVar7 = *param_2;
  if (param_2[2] == 0) {
    if (lVar5 == 0 || lVar7 == 0) goto LAB_1413f3ca0;
    plVar6 = *(longlong **)(lVar5 + 0xb8);
    if (plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar5 = FUN_144aff482(uVar4,param_2);
        param_2[2] = lVar5;
        if (lVar5 == 0) goto LAB_1413f3ca0;
        lVar7 = *param_2;
        goto LAB_1413f3cda;
      }
    }
    param_2[2] = 0;
  }
  else {
LAB_1413f3cda:
    uVar2 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar8 = (uint)lVar7 & 0xffff;
    local_30 = lVar7;
    plVar6 = (longlong *)
             FUN_1459e106c(lVar1 + 0xc90,
                           ((uint)lVar7 << 0x10 | uVar8) + (int)((ulonglong)lVar7 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4));
    *plVar6 = param_3;
    *(longlong *)(param_3 + 0xb8) = *param_2;
  }
LAB_1413f3ca0:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f3d3c FUN_1413f3d3c body=393 status=ok
// SIG undefined FUN_1413f3d3c(void)

undefined8 * FUN_1413f3d3c(undefined8 *param_1,longlong param_2)

{
  ushort *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_28,L"Sprite",1);
  FUN_140486538(param_2,local_28);
  FUN_14048646a(param_2 + 0x20,local_28,0,0);
  FUN_140834366(param_1,param_2);
  *param_1 = &PTR_FUN_14aa501d0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  param_1[0x74] = &PTR_FUN_14a5af930;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  lVar2 = 0x412;
  do {
    puVar1 = (ushort *)((longlong)param_1 + lVar2 + -2);
    *puVar1 = *puVar1 & 0xe000;
    *(byte *)((longlong)param_1 + lVar2) = *(byte *)((longlong)param_1 + lVar2) & 0xf8;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x422);
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_1405ba932(param_1,0);
  FUN_1405e4918(param_1,0x3f800000);
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xf7;
  lVar2 = FUN_145967c50();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x7a] = lVar2;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  param_1[0x7e] = (ulonglong)DAT_14c892fbc;
  *(byte *)((longlong)param_1 + 0x39a) = (*(byte *)((longlong)param_1 + 0x39a) & 0x7e) + 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f3ec6 FUN_1413f3ec6 body=509 status=ok
// SIG undefined FUN_1413f3ec6(void)

void FUN_1413f3ec6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._4_4_ = 0;
    plVar13 = local_60;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    plVar13 = local_70;
    uVar12 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar14) {
          iVar2 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_1413f3fe7;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_1413f3fe7:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar13,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f40c4 FUN_1413f40c4 body=730 status=ok
// SIG undefined FUN_1413f40c4(void)

void FUN_1413f40c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14aa48c60;
  param_1[0x72] = &PTR_FUN_14aa49b80;
  param_1[0x85] = &PTR_LAB_14aa49be0;
  lVar4 = 0x8d0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 2000);
  plVar3 = (longlong *)param_1[0xe2];
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
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcf] != 0) {
    FUN_1400020a8();
  }
  FUN_144a65a1e(param_1[0xcb],*(undefined4 *)(param_1 + 0xcc));
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[200] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xbe) = 0;
  if (param_1[0xbd] != 0) {
    FUN_1400020a8();
  }
  FUN_145968600(param_1 + 0xb5);
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xaf];
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
  plVar3 = (longlong *)param_1[0xad];
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
  plVar3 = (longlong *)param_1[0xab];
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
  plVar3 = (longlong *)param_1[0xa9];
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
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  FUN_1459685d8(param_1[0xa2],*(undefined4 *)(param_1 + 0xa3));
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  FUN_1413f439e(param_1);
  return;
}



// FUNCTION 1413f439e FUN_1413f439e body=120 status=ok
// SIG undefined FUN_1413f439e(void)

void FUN_1413f439e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a896ec0;
  param_1[0x72] = &PTR_FUN_14a897670;
  FUN_144760e21(param_1[0x7e],*(undefined4 *)(param_1 + 0x7f));
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1413f4416 FUN_1413f4416 body=354 status=ok
// SIG undefined FUN_1413f4416(void)

void FUN_1413f4416(undefined8 param_1,undefined4 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (1 < *(int *)(param_3 + 8)) {
    FUN_1413f46f8(&local_58);
    plVar3 = local_50;
    if (local_58 != 0) {
      local_48 = local_58;
      local_40 = local_50;
      if (local_50 == (longlong *)0x0) {
        FUN_140b7090e(param_1,&local_68,&local_48);
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        FUN_140b7090e(param_1,&local_68);
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
      if ((local_68 != 0) && (*(int *)(local_68 + 0x14) == 0)) {
        if (1 < *(int *)(param_3 + 8)) {
          local_48 = param_3;
          local_40 = param_4;
          FUN_140ac5c08(local_68 + 0x20,local_34,&local_48,0);
        }
        FUN_1461fff96(param_1,param_2);
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f457a FUN_1413f457a body=380 status=ok
// SIG undefined FUN_1413f457a(void)

undefined8 * FUN_1413f457a(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1413f46f8(&local_38,param_3);
  if (local_38 == 0) goto LAB_1413f462b;
  local_58 = local_38;
  local_50 = local_30;
  if (local_30 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
  }
  FUN_140b7090e(param_1,&local_48,&local_58);
  plVar1 = local_40;
  *param_2 = local_48;
  local_48 = 0;
  if (local_40 == plVar3) {
LAB_1413f468c:
    plVar3 = local_40;
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
  }
  else {
    local_40 = (longlong *)0x0;
    param_2[1] = plVar1;
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
      goto LAB_1413f468c;
    }
  }
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1413f462b:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413f46f8 FUN_1413f46f8 body=218 status=ok
// SIG undefined FUN_1413f46f8(void)

undefined8 * FUN_1413f46f8(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_40,L"SHIFT",1);
  local_28 = local_40;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,param_1,param_2);
      bVar3 = false;
      goto LAB_1413f4770;
    }
  }
  bVar3 = true;
LAB_1413f4770:
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
  if (bVar3) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f47d4 FUN_1413f47d4 body=130 status=ok
// SIG undefined FUN_1413f47d4(void)

undefined4
FUN_1413f47d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_145adb23e(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f4858 FUN_1413f4858 body=205 status=ok
// SIG undefined FUN_1413f4858(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413f4858(void)

{
  if ((DAT_14caad447 & 2) != 0) {
    return;
  }
  DAT_14caad447 = DAT_14caad447 | 2;
  _DAT_14caad3e8 = L"FSlateElementPS";
  _DAT_14caad400 = FUN_146826540;
  _DAT_14caad408 = FUN_146825d77;
  _DAT_14caad410 = FUN_146825fd6;
  _DAT_14caad418 = FUN_1407e02ea;
  _DAT_14caad420 = FUN_146826273;
  _DAT_14caad3f8 = FUN_14750eef2;
  _DAT_14caad438 = 0xffffffff00000118;
  _DAT_14caad440 = 8;
  DAT_14caad444 = 0;
  _DAT_14caad428 = &LAB_14750ef1c;
  FUN_145968fc2();
  FUN_145969392();
  FUN_1407e00cc(&DAT_14caad3e0);
  return;
}



// FUNCTION 1413f4926 FUN_1413f4926 body=419 status=ok
// SIG undefined FUN_1413f4926(void)

void FUN_1413f4926(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar5 * 0xc);
        *(uint *)(lVar2 + 8 + lVar5 * 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 4 + lVar5 * 0xc) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1413f4aca FUN_1413f4aca body=55 status=ok
// SIG undefined FUN_1413f4aca(void)

void FUN_1413f4aca(longlong *param_1)

{
  FUN_1403fa6f6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1413f4b02 FUN_1413f4b02 body=1904 status=ok
// SIG undefined FUN_1413f4b02(void)

void FUN_1413f4b02(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  if ((longlong)(int)param_1[0x47] == 0) {
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      uVar18 = 1;
      uVar19 = 0;
      iVar14 = 0;
      iVar9 = 0;
    }
    else {
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      uVar16 = *puVar6;
      if (uVar16 == 0) {
        iVar14 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar14 = iVar5 + -1;
        }
        uVar19 = 0;
        uVar12 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar12 = uVar19;
        }
        iVar14 = 0;
        do {
          if (uVar12 == uVar19) goto LAB_1413f4c74;
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar6[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar19 = 0;
        iVar14 = 0;
      }
      uVar18 = (ulonglong)(-uVar16 & uVar16);
      uVar12 = uVar18 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar9) {
        iVar9 = iVar5;
      }
    }
    if (iVar9 != iVar5) {
      uVar16 = 0xffffffff;
      iVar8 = iVar5;
      do {
        lVar15 = *(longlong *)(*param_1 + (longlong)iVar9 * 0x10);
        if (lVar15 != 0) {
          if (*(longlong *)(lVar15 + 0x60) != 0) {
            FUN_1400020a8();
          }
          plVar4 = *(longlong **)(lVar15 + 0x50);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar4 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
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
          FUN_1400b4210(lVar15 + 0x40);
          FUN_1400020a8(lVar15);
          iVar8 = (int)param_1[5];
        }
        *(int *)(param_1 + 0x4c) = (int)param_1[0x4c] + -1;
        uVar16 = uVar16 & ~(uint)uVar18;
        puVar6 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 2);
        }
        iVar9 = (int)uVar19;
        lVar15 = (longlong)iVar9;
        uVar7 = puVar6[lVar15] & uVar16;
        if (uVar7 == 0) {
          iVar10 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar10 = iVar8 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar9) {
            iVar11 = iVar9;
          }
          if (iVar9 < iVar10) {
            lVar13 = 0;
            do {
              uVar7 = puVar6[lVar15 + lVar13 + 1];
              if (uVar7 != 0) {
                uVar19 = (ulonglong)(iVar9 + (int)lVar13 + 1);
                uVar16 = 0xffffffff;
                goto LAB_1413f51e0;
              }
              iVar14 = iVar14 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar11 - lVar15 != lVar13);
            uVar16 = 0xffffffff;
            lVar15 = (longlong)iVar11;
          }
          uVar19 = lVar15 + 1U & 0xffffffff;
          iVar9 = iVar8;
        }
        else {
LAB_1413f51e0:
          uVar18 = (ulonglong)(-uVar7 & uVar7);
          uVar12 = uVar18 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar9) {
            iVar9 = iVar8;
          }
        }
      } while (iVar9 != iVar5);
    }
  }
  else {
    plVar17 = (longlong *)param_1[0x46];
    plVar4 = plVar17 + (int)param_1[0x47];
    do {
      lVar15 = *plVar17;
      if (lVar15 != 0) {
        lVar13 = *(longlong *)(lVar15 + -8);
        if (lVar13 != 0) {
          lVar15 = lVar15 + lVar13 * 0x70 + -0x30;
          lVar13 = lVar13 * -0x70;
          do {
            if (*(longlong *)(lVar15 + 0x20) != 0) {
              FUN_1400020a8();
            }
            plVar3 = *(longlong **)(lVar15 + 0x10);
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
            FUN_1400b4210(lVar15);
            lVar15 = lVar15 + -0x70;
            lVar13 = lVar13 + 0x70;
          } while (lVar13 != 0);
        }
        FUN_1400020a8();
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar4);
    *(undefined4 *)(param_1 + 0x47) = 0;
    if (*(int *)((longlong)param_1 + 0x23c) < 0) {
      FUN_140944cba(param_1 + 0x46,0);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
LAB_1413f4c74:
  if ((longlong)(int)param_1[0x49] == 0) {
    iVar5 = (int)param_1[0x37];
    if (iVar5 == 0) {
      uVar18 = 1;
      uVar19 = 0;
      iVar14 = 0;
      iVar9 = 0;
    }
    else {
      puVar6 = (uint *)param_1[0x36];
      if ((uint *)param_1[0x36] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x34);
      }
      uVar16 = *puVar6;
      if (uVar16 == 0) {
        iVar14 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar14 = iVar5 + -1;
        }
        uVar19 = 0;
        uVar12 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar12 = uVar19;
        }
        iVar14 = 0;
        do {
          if (uVar12 == uVar19) goto LAB_1413f4e87;
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar6[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar19 = 0;
        iVar14 = 0;
      }
      uVar18 = (ulonglong)(-uVar16 & uVar16);
      uVar12 = uVar18 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar9) {
        iVar9 = iVar5;
      }
    }
    if (iVar9 < iVar5) {
      uVar16 = 0xffffffff;
      do {
        lVar15 = *(longlong *)(param_1[0x32] + 0x20 + (longlong)iVar9 * 0x30);
        if (lVar15 != 0) {
          FUN_14700e1a8(lVar15);
          FUN_1400020a8(lVar15);
          *(int *)((longlong)param_1 + 0x264) = *(int *)((longlong)param_1 + 0x264) + -1;
          iVar5 = (int)param_1[0x37];
        }
        uVar16 = uVar16 & ~(uint)uVar18;
        puVar6 = (uint *)param_1[0x36];
        if ((uint *)param_1[0x36] == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 0x34);
        }
        iVar9 = (int)uVar19;
        lVar15 = (longlong)iVar9;
        uVar7 = puVar6[lVar15] & uVar16;
        if (uVar7 == 0) {
          iVar8 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar8 = iVar5 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar10 = iVar8;
          if (iVar8 < iVar9) {
            iVar10 = iVar9;
          }
          if (iVar8 <= iVar9) break;
          lVar13 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar7 = puVar6[lVar15 + lVar13 + 1];
            if (uVar7 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar10 - lVar15 == lVar13) goto LAB_1413f4e87;
          }
          uVar19 = (ulonglong)(iVar9 + (int)lVar13 + 1);
          uVar16 = 0xffffffff;
        }
        uVar18 = (ulonglong)(-uVar7 & uVar7);
        uVar12 = uVar18 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar5);
    }
  }
  else {
    plVar17 = (longlong *)param_1[0x48];
    plVar4 = plVar17 + (int)param_1[0x49];
    do {
      lVar15 = *plVar17;
      if (lVar15 != 0) {
        if (*(longlong *)(lVar15 + -8) != 0) {
          lVar13 = *(longlong *)(lVar15 + -8) * 200;
          do {
            FUN_14700e1a8(lVar13 + lVar15 + -200);
            lVar13 = lVar13 + -200;
          } while (lVar13 != 0);
        }
        FUN_1400020a8();
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar4);
    *(undefined4 *)(param_1 + 0x49) = 0;
    if (*(int *)((longlong)param_1 + 0x24c) < 0) {
      FUN_14700a3ca(param_1 + 0x48,0);
    }
    *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  }
LAB_1413f4e87:
  if ((longlong)(int)param_1[0x4b] == 0) {
    iVar5 = (int)param_1[0x41];
    if (iVar5 == 0) {
      uVar18 = 1;
      uVar19 = 0;
      iVar14 = 0;
      iVar9 = 0;
    }
    else {
      puVar6 = (uint *)param_1[0x40];
      if ((uint *)param_1[0x40] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x3e);
      }
      uVar16 = *puVar6;
      if (uVar16 == 0) {
        iVar14 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar14 = iVar5 + -1;
        }
        uVar19 = 0;
        uVar12 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar12 = uVar19;
        }
        iVar14 = 0;
        do {
          if (uVar12 == uVar19) goto LAB_1413f5094;
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar6[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar19 = 0;
        iVar14 = 0;
      }
      uVar18 = (ulonglong)(-uVar16 & uVar16);
      uVar12 = uVar18 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar9) {
        iVar9 = iVar5;
      }
    }
    if (iVar9 < iVar5) {
      uVar16 = 0xffffffff;
      do {
        lVar15 = *(longlong *)(param_1[0x3c] + 8 + (longlong)iVar9 * 0x18);
        if (lVar15 != 0) {
          FUN_146ffe382(lVar15);
          FUN_1400020a8(lVar15);
          *(int *)(param_1 + 0x4d) = (int)param_1[0x4d] + -1;
          iVar5 = (int)param_1[0x41];
        }
        uVar16 = uVar16 & ~(uint)uVar18;
        puVar6 = (uint *)param_1[0x40];
        if ((uint *)param_1[0x40] == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 0x3e);
        }
        iVar9 = (int)uVar19;
        lVar15 = (longlong)iVar9;
        uVar7 = puVar6[lVar15] & uVar16;
        if (uVar7 == 0) {
          iVar8 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar8 = iVar5 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar10 = iVar8;
          if (iVar8 < iVar9) {
            iVar10 = iVar9;
          }
          if (iVar8 <= iVar9) break;
          lVar13 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar7 = puVar6[lVar15 + lVar13 + 1];
            if (uVar7 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar10 - lVar15 == lVar13) goto LAB_1413f5094;
          }
          uVar19 = (ulonglong)(iVar9 + (int)lVar13 + 1);
          uVar16 = 0xffffffff;
        }
        uVar18 = (ulonglong)(-uVar7 & uVar7);
        uVar12 = uVar18 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar9 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar5);
    }
  }
  else {
    plVar17 = (longlong *)param_1[0x4a];
    plVar4 = plVar17 + (int)param_1[0x4b];
    do {
      lVar15 = *plVar17;
      if (lVar15 != 0) {
        if (*(longlong *)(lVar15 + -8) != 0) {
          lVar13 = *(longlong *)(lVar15 + -8) * 0xb8;
          do {
            FUN_146ffe382(lVar13 + lVar15 + -0xb8);
            lVar13 = lVar13 + -0xb8;
          } while (lVar13 != 0);
        }
        FUN_1400020a8(lVar15 + -8);
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar4);
    *(undefined4 *)(param_1 + 0x4b) = 0;
    if (*(int *)((longlong)param_1 + 0x25c) < 0) {
      FUN_14701b2c4(param_1 + 0x4a);
    }
    *(undefined4 *)(param_1 + 0x4d) = 0;
  }
LAB_1413f5094:
  FUN_1459b85fe(param_1 + 10,0);
  FUN_145acf632(param_1 + 0x14);
  FUN_1457a1d1e(param_1 + 0x1e);
  FUN_145915d52(param_1 + 0x28);
  FUN_1458799ee(param_1 + 0x32);
  FUN_14588659a(param_1 + 0x3c);
  FUN_145b089da(param_1,0);
  FUN_14570bf66(param_1 + 0x59);
  return;
}



// FUNCTION 1413f5272 FUN_1413f5272 body=44 status=ok
// SIG undefined FUN_1413f5272(void)

void FUN_1413f5272(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x38))();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1413f529e FUN_1413f529e body=322 status=ok
// SIG undefined FUN_1413f529e(void)

void FUN_1413f529e(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = param_2[1];
  iVar5 = FUN_14119d564();
  if (iVar4 == iVar5) {
    if (param_2[3] == 2) {
      FUN_1411cb5f6(&local_30,*param_2);
      if (local_30 != 0) {
        local_58 = local_30;
        local_50 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
        }
        FUN_1459b6cd8(param_1 + 0xd0,&local_58);
      }
    }
    else {
      if (param_2[3] != 0) goto LAB_1413f53c2;
      FUN_1411cb5f6(&local_30,*param_2);
      if (local_30 != 0) {
        local_40 = local_30;
        local_38 = local_28;
        if (local_28 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
        }
        FUN_140b6d1a4(param_1 + 0xd0,local_44,&local_40,0);
        plVar3 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
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
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
LAB_1413f53c2:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f53e2 FUN_1413f53e2 body=469 status=ok
// SIG undefined FUN_1413f53e2(void)

void FUN_1413f53e2(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar10 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar5 = (longlong)iVar7;
      FUN_1413f55b8(*(undefined8 *)(lVar11 + 0x10 + lVar5 * 0x28),
                    *(undefined4 *)(lVar11 + 0x18 + lVar5 * 0x28));
      if (*(longlong *)(lVar11 + 0x10 + lVar5 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar12;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar10;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar7 <= iVar13) break;
        lVar5 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar5 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar3 - lVar11 == lVar5) goto LAB_1413f551e;
        }
        iVar13 = iVar13 + (int)lVar5 + 1;
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_1413f551e:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f55b8 FUN_1413f55b8 body=73 status=ok
// SIG undefined FUN_1413f55b8(void)

void FUN_1413f55b8(longlong param_1,int param_2)

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



// FUNCTION 1413f5602 FUN_1413f5602 body=25 status=ok
// SIG undefined FUN_1413f5602(void)

void FUN_1413f5602(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001413f5617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1413f561c FUN_1413f561c body=66 status=ok
// SIG undefined FUN_1413f561c(void)

undefined8 * FUN_1413f561c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a158040;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 1413f565e FUN_1413f565e body=770 status=ok
// SIG undefined FUN_1413f565e(void)

void FUN_1413f565e(longlong param_1,char param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != '\0') {
    puVar1 = (uint *)(param_1 + 0x58);
    puVar7 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar8 = *(int *)(param_1 + 0x70) + 0x1f;
    if (0x1f < uVar8) {
      plVar2 = (longlong *)(param_1 + 8);
      lVar9 = 0;
      do {
        uVar3 = *puVar7;
        if (uVar3 != 0) {
          iVar10 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
            }
          }
          if ((iVar10 - (int)lVar9 < *(int *)(param_1 + 0x70)) && (iVar10 + 1 != (int)lVar9)) {
            local_78 = 0;
            iVar10 = 0;
            local_70 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_6c = 0xffffffff00000080;
            local_64 = 0;
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
            lVar9 = param_1 + 0x18;
            local_c0 = 0x100000000;
            local_b0 = 0xffffffff;
            local_a8 = 0;
            local_b8 = lVar9;
            if (*(int *)(param_1 + 0x30) != 0) {
              FUN_1449c0562(&local_c0);
              iVar10 = *(int *)(param_1 + 0x30);
            }
            local_d0 = local_b0;
            uVar4 = local_d0;
            local_c8 = local_a8;
            local_c4 = local_a4;
            local_e0 = (uint *)local_c0;
            local_d8 = local_b8;
            local_d0._4_4_ = (int)(local_b0 >> 0x20);
            iVar5 = local_d0._4_4_;
            local_e8 = plVar2;
            if ((local_d0._4_4_ != iVar10) || (local_d0 = uVar4, local_b8 != lVar9)) {
              do {
                local_d0 = uVar4;
                local_b8 = *local_e8 + (longlong)iVar5 * 0x38;
                local_c0 = (longlong)iVar5 * 0x38 + *local_e8 + 0x28;
                FUN_14596c21a(&local_98,local_9c);
                local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
                FUN_1449c0562(&local_e0);
                iVar5 = local_d0._4_4_;
                uVar4 = local_d0;
              } while (local_e8 != plVar2 || (local_d8 != lVar9 || local_d0._4_4_ != iVar10));
            }
            local_e8 = (longlong *)0x100000000;
            local_d8 = 0xffffffff;
            local_d0 = local_d0 & 0xffffffff00000000;
            local_e0 = puVar1;
            if (*(int *)(param_1 + 0x70) == 0) {
              local_d8._4_4_ = 0;
            }
            else {
              FUN_1449c0562(&local_e8);
            }
            if ((int)local_d8._4_4_ < (int)local_e0[6]) {
              uVar8 = local_d8._4_4_;
              do {
                if ((int)uStack_90 != local_64) {
                  puVar6 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar6 = local_60;
                  }
                  iVar10 = *(int *)(puVar6 + (ulonglong)(local_50 - 1U & uVar8) * 4);
                  while (iVar10 != -1) {
                    lVar9 = local_98 + (longlong)iVar10 * 0x38;
                    if (*(uint *)(local_98 + (longlong)iVar10 * 0x38) == uVar8) {
                      if (lVar9 + 8 != 0 && lVar9 != 0) {
                        FUN_14596c670(plVar2,lVar9 + 8);
                        uVar8 = local_d8._4_4_;
                      }
                      break;
                    }
                    iVar10 = *(int *)(lVar9 + 0x30);
                  }
                }
                FUN_1410928e4(param_3,uVar8);
                local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
                FUN_1449c0562(&local_e8);
                uVar8 = local_d8._4_4_;
              } while ((int)local_d8._4_4_ < (int)local_e0[6]);
            }
            *(undefined4 *)(param_1 + 0x70) = 0;
            local_50 = 0;
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            FUN_14596c18c(&local_98);
          }
          break;
        }
        lVar9 = lVar9 + -0x20;
        puVar7 = puVar7 + 1;
      } while ((ulonglong)(uVar8 & 0xffffffe0) + lVar9 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f5962 FUN_1413f5962 body=3410 status=ok
// SIG undefined FUN_1413f5962(void)

bool FUN_1413f5962(longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined4 local_310;
  longlong *local_308;
  uint local_300 [2];
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  undefined8 *local_2c8;
  ulonglong uStack_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *plStack_280;
  char local_278 [184];
  longlong *local_1c0;
  longlong *local_1b8;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_14054cb04(&local_2e8,param_1 + 0x68,param_2);
  plVar3 = local_2e0;
  if (local_2e8 == (longlong *)0x0) goto LAB_1413f5bfc;
  local_300[0] = 2;
  if (param_3 != '\x02') {
    local_300[0] = (uint)(param_3 == '\x01');
  }
  if (local_2e0 == (longlong *)0x0) {
    local_2f0 = (longlong *)0x0;
    local_2f8 = local_2e8;
  }
  else {
    LOCK();
    *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
    UNLOCK();
    local_2f8 = local_2e8;
    local_2f0 = local_2e0;
    LOCK();
    *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = local_2e0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2e0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  plVar3 = local_2f0;
  if ((longlong)*(int *)(param_1 + 0xa0) < 1) {
    local_288 = (longlong *)0x0;
    plStack_280 = (longlong *)0x0;
  }
  else {
    lVar13 = (longlong)*(int *)(param_1 + 0xa0) * 0x10;
    local_288 = *(longlong **)(*(longlong *)(param_1 + 0x98) + -0x10 + lVar13);
    plStack_280 = *(longlong **)(*(longlong *)(param_1 + 0x98) + -8 + lVar13);
    if (plStack_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_280 + 1) = (int)plStack_280[1] + 1;
      UNLOCK();
    }
  }
  plVar2 = (longlong *)(param_1 + -0x148);
  if (local_300[0] == 2) {
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
    }
    if ((*(byte *)(local_2f8 + 0x6d) & 2) == 0) {
      bVar18 = false;
      if ((*(int *)((longlong)local_2f8 + 0x304) != 2) &&
         (bVar18 = false, *(int *)((longlong)local_2f8 + 0x304) != 4)) {
        plVar15 = *(longlong **)(param_1 + 0x90);
        if (plVar15 == (longlong *)0x0) {
          if (local_2f0 == (longlong *)0x0) goto LAB_1413f658e;
          LOCK();
          *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
          UNLOCK();
          plVar15 = (longlong *)0x0;
          bVar18 = false;
LAB_1413f5ab6:
          LOCK();
          plVar14 = local_2f0 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_2f0)(local_2f0);
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
          iVar11 = (int)plVar15[1];
          plVar14 = (longlong *)0x0;
          do {
            if (iVar11 == 0) {
              plVar15 = (longlong *)0x0;
              goto LAB_1413f5a8e;
            }
            LOCK();
            iVar8 = (int)plVar15[1];
            bVar18 = iVar11 == iVar8;
            if (bVar18) {
              *(int *)(plVar15 + 1) = iVar11 + 1;
              iVar8 = iVar11;
            }
            iVar11 = iVar8;
            UNLOCK();
          } while (!bVar18);
          plVar14 = *(longlong **)(param_1 + 0x88);
LAB_1413f5a8e:
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
            UNLOCK();
            bVar18 = plVar14 == local_2f8 && plVar14 != (longlong *)0x0;
            goto LAB_1413f5ab6;
          }
          bVar18 = plVar14 == local_2f8 && plVar14 != (longlong *)0x0;
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar15 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
    }
    else {
LAB_1413f658e:
      bVar18 = false;
    }
    if (plVar3 != (longlong *)0x0) {
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
    }
    if (bVar18) {
      plVar3 = *(longlong **)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    plVar3 = local_2f0;
    *(undefined1 *)(param_1 + 0x59) = 0;
    if (local_2f0 == (longlong *)0x0) {
LAB_1413f6249:
      (**(code **)(*local_2f8 + 0x240))(local_2f8,local_300);
    }
    else {
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
      LOCK();
      plVar15 = local_2f0 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
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
      plVar3 = local_2f0;
      if (local_2f0 == (longlong *)0x0) goto LAB_1413f6249;
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
      (**(code **)(*local_2f8 + 0x240))(local_2f8,local_300);
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
    }
    plVar15 = local_2f0;
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
    }
    plVar14 = (longlong *)local_2f8[0x75];
    if (plVar14 == (longlong *)0x0) {
LAB_1413f60f4:
      FUN_1413f6830(plVar2);
    }
    else {
      iVar11 = (int)plVar14[1];
      do {
        if (iVar11 == 0) goto LAB_1413f60f4;
        LOCK();
        iVar8 = (int)plVar14[1];
        bVar18 = iVar11 == iVar8;
        if (bVar18) {
          *(int *)(plVar14 + 1) = iVar11 + 1;
          iVar8 = iVar11;
        }
        iVar11 = iVar8;
        UNLOCK();
      } while (!bVar18);
      plVar3 = (longlong *)local_2f8[0x74];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x168))(plVar3,local_300);
      }
      FUN_1413f6830(plVar2);
LAB_1413f5bbe:
      LOCK();
      plVar3 = plVar14 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x1d0);
    if ((longlong)iVar11 != 0) {
      lVar13 = *(longlong *)(param_1 + 0x1c8);
      lVar17 = 0;
      do {
        lVar4 = *(longlong *)(lVar13 + lVar17);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x20) != 0)) {
          FUN_14596c952();
        }
        lVar17 = lVar17 + 0x10;
      } while ((longlong)iVar11 * 0x10 != lVar17);
    }
    if (local_300[0] == 1) {
      dVar19 = (double)(**(code **)(*(longlong *)(param_1 + -0x148) + 0x60))(plVar2);
      if ((*(double *)(param_1 + 0x228) != dVar19) ||
         (NAN(*(double *)(param_1 + 0x228)) || NAN(dVar19))) {
        *(double *)(param_1 + 0x228) = dVar19;
        FUN_1402c1cc6(param_1 + 0x238,dVar19);
      }
    }
    local_1c0 = local_2f8;
    local_1b8 = local_2f0;
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
    }
    FUN_14596c8dc(param_1 + 0x68,&local_1c0);
    plVar3 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_1b8 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_2f0;
    if (local_288 == (longlong *)0x0) {
LAB_1413f5d1c:
      plVar3 = local_2f0;
      if (local_2f0 == (longlong *)0x0) {
LAB_1413f6363:
        (**(code **)(*local_2f8 + 0x240))(local_2f8,local_300);
      }
      else {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = local_2f0 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_2f0)(local_2f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
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
        plVar3 = local_2f0;
        if (local_2f0 == (longlong *)0x0) goto LAB_1413f6363;
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
        (**(code **)(*local_2f8 + 0x240))(local_2f8,local_300);
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
      }
      plVar3 = local_2f0;
      if (local_2f0 == (longlong *)0x0) {
        if ((((*(byte *)(local_2f8 + 0x6d) & 2) == 0) &&
            (*(int *)((longlong)local_2f8 + 0x304) != 2)) &&
           (*(int *)((longlong)local_2f8 + 0x304) != 4)) goto LAB_1413f5dba;
      }
      else {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
        if ((*(byte *)(local_2f8 + 0x6d) & 2) == 0) {
          bVar18 = (*(int *)((longlong)local_2f8 + 0x304) - 2U & 0xfffffffd) != 0;
        }
        else {
          bVar18 = false;
        }
        LOCK();
        plVar15 = local_2f0 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_2f0)(local_2f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        if (bVar18) {
LAB_1413f5dba:
          plVar3 = local_2f0;
          if (local_2f0 == (longlong *)0x0) {
            *(longlong **)(param_1 + 0x88) = local_2f8;
            plVar15 = *(longlong **)(param_1 + 0x90);
            if (plVar15 != (longlong *)0x0) {
LAB_1413f6445:
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))();
              }
              *(longlong **)(param_1 + 0x90) = plVar3;
              if (plVar3 != (longlong *)0x0) goto LAB_1413f5dfb;
            }
          }
          else {
            LOCK();
            *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
            UNLOCK();
            *(longlong **)(param_1 + 0x88) = local_2f8;
            if (*(longlong **)(param_1 + 0x90) != local_2f0) {
              LOCK();
              *(int *)((longlong)local_2f0 + 0xc) = *(int *)((longlong)local_2f0 + 0xc) + 1;
              UNLOCK();
              plVar15 = *(longlong **)(param_1 + 0x90);
              if (plVar15 != (longlong *)0x0) goto LAB_1413f6445;
              *(longlong **)(param_1 + 0x90) = local_2f0;
            }
LAB_1413f5dfb:
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
          }
        }
      }
      plVar3 = local_2f0;
      *(undefined1 *)(param_1 + 0x59) = 1;
      if (local_2f0 == (longlong *)0x0) {
        local_298 = local_2f8;
        local_290 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = local_2f0 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_2f0)(local_2f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
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
        local_298 = local_2f8;
        local_290 = local_2f0;
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
          UNLOCK();
        }
      }
      local_2f8 = local_298;
      FUN_14596ceaa(param_1 + 0xb8,&local_298);
      uVar12 = FUN_1413f66b6();
      local_2a8 = local_2f8;
      local_2a0 = local_2f0;
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
      }
      FUN_14596cc86(uVar12,&local_2a8);
      plVar3 = *(longlong **)(param_1 + -0x128);
      local_2b8 = local_2f8;
      local_2b0 = local_2f0;
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_2b8);
    }
    else {
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
        UNLOCK();
      }
      if ((local_288 == (longlong *)0x0) || (cVar9 = '\x01', local_288 != local_2f8)) {
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
          UNLOCK();
        }
        cVar10 = FUN_146981260(local_2f8,&local_288);
        plVar15 = local_2f0;
        cVar9 = '\x01';
        if (cVar10 == '\0') {
          if (local_2f0 == (longlong *)0x0) {
            local_1b8 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
            UNLOCK();
            local_1b8 = local_2f0;
            LOCK();
            *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
            UNLOCK();
          }
          local_1c0 = local_2f8;
          cVar9 = (**(code **)(*plVar2 + 0x118))(plVar2,&local_1c0);
          plVar14 = local_1b8;
          if (local_1b8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_1b8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_1b8)(local_1b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar15 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
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
        }
      }
      if (plVar3 != (longlong *)0x0) {
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
      }
      if (cVar9 != '\0') goto LAB_1413f5d1c;
      FUN_146981248(local_288,0);
      FUN_146981234(local_288);
    }
    plVar15 = local_2f0;
    plVar3 = local_2f8;
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
      UNLOCK();
    }
    plVar14 = (longlong *)local_2f8[0x75];
    if (plVar14 != (longlong *)0x0) {
      iVar11 = (int)plVar14[1];
      do {
        if (iVar11 == 0) goto LAB_1413f5bc8;
        LOCK();
        iVar8 = (int)plVar14[1];
        bVar18 = iVar11 == iVar8;
        if (bVar18) {
          *(int *)(plVar14 + 1) = iVar11 + 1;
          iVar8 = iVar11;
        }
        iVar11 = iVar8;
        UNLOCK();
      } while (!bVar18);
      plVar5 = (longlong *)local_2f8[0x74];
      if ((plVar5 != (longlong *)0x0) &&
         ((**(code **)(*plVar5 + 0x158))(plVar5,&local_1c0), local_1b8 != (longlong *)0x0)) {
        iVar11 = (int)local_1b8[1];
        do {
          if (iVar11 == 0) {
            plVar16 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar8 = (int)local_1b8[1];
          bVar18 = iVar11 == iVar8;
          if (bVar18) {
            *(int *)(local_1b8 + 1) = iVar11 + 1;
            iVar8 = iVar11;
          }
          iVar11 = iVar8;
          UNLOCK();
          plVar16 = local_1b8;
        } while (!bVar18);
        LOCK();
        piVar1 = (int *)((longlong)local_1b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1b8 + 0x10))();
        }
        plVar7 = local_1c0;
        if (plVar16 != (longlong *)0x0) {
          local_308 = plVar2;
          if (local_1c0 != (longlong *)0x0) {
            local_2c8 = (undefined8 *)0x0;
            uStack_2c0 = 1;
            FUN_1413f6722(&local_2c8,0);
            *local_2c8 = plVar3;
            local_2c8[1] = plVar15;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            uVar6 = DAT_14c96b239;
            local_1c0 = (longlong *)CONCAT71(local_1c0._1_7_,DAT_14c96b238);
            local_98 = 0;
            local_90 = 0x400000000;
            local_88 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
            local_2d8 = plVar7;
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
            local_2d0 = plVar16;
            cVar9 = FUN_1407c4db4(&local_2c8,&local_2d8,&local_1c0,uVar6);
            LOCK();
            plVar3 = plVar16 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
            if (cVar9 != '\0') {
              (**(code **)(*plVar5 + 0x160))(plVar5,local_278,local_300);
              if (local_278[0] == '\x01') {
                local_310 = 0;
                local_318 = 0;
                FUN_1402c1d72(local_308,&local_1c0,local_278,0);
              }
              FUN_14493db24(local_278);
            }
            FUN_1447fa21a(&local_1c0);
            FUN_1401b439d(local_2c8,uStack_2c0 & 0xffffffff);
            if (local_2c8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          LOCK();
          plVar3 = plVar16 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
      goto LAB_1413f5bbe;
    }
  }
LAB_1413f5bc8:
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar15 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  plVar3 = plStack_280;
  if (plStack_280 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_280 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_280)(plStack_280);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_2f0;
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_2f0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_2f0)(local_2f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1413f5bfc:
  if (local_2e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2e0)(local_2e0);
      LOCK();
      piVar1 = (int *)((longlong)local_2e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2e0 + 0x10))(local_2e0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return local_2e8 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f66b6 FUN_1413f66b6 body=108 status=ok
// SIG undefined FUN_1413f66b6(void)

undefined * FUN_1413f66b6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98ebf0) {
    FUN_144b3d300(&DAT_14c98ebf0);
    if (DAT_14c98ebf0 == -1) {
      FUN_14596d128(&DAT_14c98eb70);
      atexit((_func_5014 *)&LAB_1428fd7fc);
      _Init_thread_footer(&DAT_14c98ebf0);
    }
  }
  return &DAT_14c98eb70;
}



// FUNCTION 1413f6722 FUN_1413f6722 body=269 status=ok
// SIG undefined FUN_1413f6722(void)

void FUN_1413f6722(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1413f6830 FUN_1413f6830 body=840 status=ok
// SIG undefined FUN_1413f6830(void)

void FUN_1413f6830(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined4 local_290;
  longlong local_288;
  longlong *local_280;
  undefined1 local_278 [8];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 local_258;
  undefined1 local_250 [16];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_1c8;
  uint local_1c4;
  undefined8 *local_150;
  ulonglong local_148;
  undefined1 local_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  ulonglong local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  undefined1 local_f0 [48];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_68;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((longlong)*(int *)(param_1 + 0x318) == 0) {
    uVar6 = 0x10;
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x310);
    plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x318) * 2;
    local_280 = plVar9;
    do {
      lVar11 = *plVar7;
      if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x20) != 0)) {
        FUN_1413f6ba2(lVar11);
        lVar8 = CONCAT71(uStack_117,local_118);
        if ((longlong)(int)local_110 == 0) {
          uVar5 = 0;
        }
        else {
          lVar10 = (longlong)(int)local_110 * 0x160;
          local_288 = lVar11;
          do {
            local_278[0] = 1;
            local_258 = 0;
            local_270 = 0;
            uStack_268 = 0;
            memset(local_250,0,0x88);
            local_1c8 = 0x20702;
            local_1c4 = (local_1c4 & 0xffffff00) + 1;
            local_240 = 0;
            uStack_238 = 0;
            local_290 = 0;
            local_298 = 0;
            FUN_1402c1d72(param_1,lVar8,local_278,0);
            FUN_14493db24(local_278);
            lVar8 = lVar8 + 0x160;
            lVar10 = lVar10 + -0x160;
          } while (lVar10 != 0);
          uVar5 = local_110 & 0xffffffff;
          lVar8 = CONCAT71(uStack_117,local_118);
          lVar11 = local_288;
        }
        FUN_1413f6b79(lVar8,uVar5);
        if (CONCAT71(uStack_117,local_118) != 0) {
          FUN_1400020a8();
        }
        plVar9 = local_280;
        plVar2 = *(longlong **)(lVar11 + 0x20);
        plVar3 = *(longlong **)(lVar11 + 0x28);
        if (plVar3 == (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))();
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          (**(code **)(*plVar2 + 0x30))();
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
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar9);
    uVar6 = local_64 & 0xffffff00 | 0x10;
  }
  local_118 = 1;
  local_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  memset(local_f0,0,0x88);
  local_68 = 0x20702;
  local_c0 = 0;
  uStack_b8 = 0;
  local_278[0] = DAT_14c96b238;
  local_150 = (undefined8 *)0x0;
  local_148 = 0x400000000;
  local_140 = 0;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_298 = 0;
  local_290 = 0;
  local_64 = uVar6;
  FUN_1402c1d72(param_1,local_278,&local_118,0);
  FUN_1447fa2ac(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  plVar7 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_130 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  puVar4 = local_150;
  if (local_150 == (undefined8 *)0x0) {
    puVar4 = &local_270;
  }
  FUN_1447157bd(puVar4,local_148 & 0xffffffff);
  if (local_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14493db24(&local_118);
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413f6b79 FUN_1413f6b79 body=41 status=ok
// SIG undefined FUN_1413f6b79(void)

void FUN_1413f6b79(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1447fa21a(param_1);
    param_1 = param_1 + 0x160;
  }
  return;
}



// FUNCTION 1413f6ba2 FUN_1413f6ba2 body=260 status=ok
// SIG undefined FUN_1413f6ba2(void)

longlong * FUN_1413f6ba2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a0 [304];
  int local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *param_2 = 0;
  param_2[1] = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  FUN_1413f6d7c(param_1 + 0x148,&local_1b8);
  lVar2 = local_1b8;
  lVar3 = (longlong)(int)uStack_1b0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      local_1c8 = 0;
      FUN_1403d06e2(param_1,local_1a0,*(undefined4 *)(lVar2 + lVar4),0);
      if (0 < local_70) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14596cbf4(param_2,iVar1);
        }
        FUN_1413f6ca8((longlong)iVar1 * 0x160 + *param_2,local_1a0);
      }
      FUN_1447fa21a(local_1a0);
      lVar4 = lVar4 + 4;
    } while (lVar3 * 4 != lVar4);
  }
  if (local_1b8 != 0) {
    FUN_1400020a8(local_1b8);
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413f6ca8 FUN_1413f6ca8 body=211 status=ok
// SIG undefined FUN_1413f6ca8(void)

undefined1 * FUN_1413f6ca8(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x128) = 0;
  puVar4 = param_2 + 8;
  if (*(undefined1 **)(param_2 + 0x128) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x128);
  }
  FUN_1401bb78c(param_1 + 8,puVar4,*(undefined4 *)(param_2 + 0x130),0);
  param_1[0x138] = param_2[0x138];
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  lVar2 = *(longlong *)(param_2 + 0x148);
  *(longlong *)(param_1 + 0x148) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  iVar1 = *(int *)(param_2 + 0x158);
  uVar3 = *(undefined8 *)(param_2 + 0x150);
  *(int *)(param_1 + 0x158) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  else {
    FUN_1401bb8da(param_1 + 0x150,iVar1,0);
    FUN_1401bb89d(*(undefined8 *)(param_1 + 0x150),uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1413f6d7c FUN_1413f6d7c body=431 status=ok
// SIG undefined FUN_1413f6d7c(void)

void FUN_1413f6d7c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_14480809c(param_2);
  }
  local_48 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  local_4c = 1;
  if (iVar3 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = local_48;
    }
    uVar5 = *puVar7;
    if (uVar5 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar8 = 0;
      uVar4 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar4 = uVar8;
      }
      local_50 = (int)uVar4 + 1;
      local_38 = (int)uVar4 * 0x20 + 0x20;
      iVar6 = 0;
      do {
        local_3c = iVar3;
        if (uVar4 == uVar8) goto LAB_1413f6e57;
        iVar6 = iVar6 + 0x20;
        uVar5 = puVar7[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar5 == 0);
      local_50 = (int)uVar8;
      local_38 = iVar6;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar5 & uVar5;
    uVar4 = (ulonglong)local_4c * 2 + 1;
    lVar1 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar1 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_3c) {
      local_3c = iVar3;
    }
  }
LAB_1413f6e57:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar3) {
    do {
      lVar2 = (longlong)local_3c;
      lVar1 = *local_58;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447808da(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar2 * 0x30 + lVar1);
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413f6f2c FUN_1413f6f2c body=60 status=ok
// SIG undefined FUN_1413f6f2c(void)

void FUN_1413f6f2c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1e8) < 1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x1e0);
    lVar2 = (longlong)*(int *)(param_1 + 0x1e8) * 0x10;
    *param_2 = *(undefined8 *)(lVar1 + -0x10 + lVar2);
    lVar1 = *(longlong *)(lVar1 + -8 + lVar2);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 1413f6f68 FUN_1413f6f68 body=64 status=ok
// SIG undefined FUN_1413f6f68(void)

ulonglong FUN_1413f6f68(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (DAT_14c872bf2 == '\0') {
    lVar3 = FUN_14050fd64();
    iVar1 = *(int *)(lVar3 + 0x638);
    if (-1 < iVar1) {
      iVar5 = 0;
      do {
        uVar2 = FUN_14163428b(iVar5);
        uVar4 = (ulonglong)uVar2;
        if (iVar1 == iVar5) break;
        iVar5 = iVar5 + 1;
      } while ((char)uVar2 != '\0');
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1413f6fa8 FUN_1413f6fa8 body=228 status=ok
// SIG undefined FUN_1413f6fa8(void)

longlong FUN_1413f6fa8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1eab0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14639e8c2;
    local_38 = &LAB_147ea5630;
    local_40 = &LAB_145ad4a20;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/AIModule",L"AISystem",&DAT_14cb1eab0,FUN_146428abe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1eab0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f708e FUN_1413f708e body=140 status=ok
// SIG undefined FUN_1413f708e(void)

undefined8 * FUN_1413f708e(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) & 0xf8;
  *param_1 = &PTR_FUN_14abea1e0;
  param_1[5] = &PTR_FUN_14abea500;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xf8;
  *(byte *)((longlong)param_1 + 0x6c) = *(byte *)((longlong)param_1 + 0x6c) & 0xfe;
  return param_1;
}



// FUNCTION 1413f711a thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413f7120 FUN_1413f7120 body=313 status=ok
// SIG undefined FUN_1413f7120(void)

longlong * FUN_1413f7120(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  wchar_t *_Str2;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c8449a0);
  uVar4 = DAT_14c844998;
  lVar2 = DAT_14c844990;
  if ((int)DAT_14c844998 < 1) {
    uVar11 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 1);
    _Str2 = (wchar_t *)*param_2;
    uVar11 = 0;
    uVar10 = DAT_14c844998;
    do {
      uVar1 = uVar11 + (uVar10 >> 1);
      lVar7 = (ulonglong)uVar1 * 0x60;
      iVar5 = *(int *)(lVar2 + 8 + lVar7);
      if ((iVar5 < iVar6) ||
         ((iVar5 <= iVar6 &&
          (iVar5 = wcsncmp(*(wchar_t **)(lVar7 + lVar2),_Str2,(longlong)iVar5), iVar5 < 0)))) {
        uVar11 = uVar1 + (uVar10 & 1);
      }
      bVar3 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar3);
  }
  if ((int)uVar11 < (int)uVar4) {
    iVar6 = *(int *)(param_2 + 1);
    iVar5 = *(int *)(lVar2 + 8 + (ulonglong)uVar11 * 0x60);
    if ((iVar5 <= iVar6) &&
       (((puVar8 = (undefined8 *)(lVar2 + (ulonglong)uVar11 * 0x60), iVar5 < iVar6 ||
         (iVar6 = wcsncmp((wchar_t *)*param_2,(wchar_t *)*puVar8,(longlong)iVar6), -1 < iVar6)) &&
        (puVar8 + 4 != (longlong *)0x0)))) {
      lVar2 = puVar8[4];
      *param_1 = lVar2;
      param_1[2] = 0;
      if (lVar2 != 0) {
        puVar9 = puVar8 + 8;
        if ((undefined8 *)puVar8[6] != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)puVar8[6];
        }
        (**(code **)*puVar9)(puVar9,param_1 + 2);
      }
      goto LAB_1413f7228;
    }
  }
  *param_1 = 0;
  param_1[2] = 0;
LAB_1413f7228:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c8449a0);
  return param_1;
}



// FUNCTION 1413f725a FUN_1413f725a body=278 status=ok
// SIG undefined FUN_1413f725a(void)

void FUN_1413f725a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409f0fb8(param_1,&local_28);
  if (((local_24 != 0) && (-1 < (int)local_28)) && ((int)local_28 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((local_28 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == local_24)) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar3;
      }
      else {
        lVar5 = 0;
      }
      plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar5 + 0x30) + 0x18))(lVar5 + 0x30);
      if (plVar3 != (longlong *)0x0) {
        plVar1 = (longlong *)FUN_1409f0ca6();
        plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_2);
        if (((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x15) == '\x01')) &&
           ((longlong)(int)plVar1[1] != 0)) {
          lVar5 = *plVar1;
          lVar4 = (longlong)(int)plVar1[1] * 0x28;
          do {
            uVar2 = FUN_1409f0d56(lVar5);
            (**(code **)(*plVar3 + 0x328))(plVar3,uVar2);
            lVar5 = lVar5 + 0x28;
            lVar4 = lVar4 + -0x28;
          } while (lVar4 != 0);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f7372 FUN_1413f7372 body=759 status=ok
// SIG undefined FUN_1413f7372(void)

undefined8 FUN_1413f7372(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  undefined1 auStack_98 [44];
  int local_6c;
  ulonglong local_68;
  undefined1 local_5c [4];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    local_58 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    iVar4 = FUN_141422a5a(param_1 + 0x1a,uVar3 >> 0x10 ^ uVar3,&local_58);
    if (iVar4 == -1) {
      local_50 = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      FUN_1459ada6e(param_1 + 0x1a,local_5c,&local_50);
      uVar3 = *(uint *)(param_1 + 0x14);
      if (uVar3 == 0) {
        uVar13 = 1;
        uVar12 = 0;
        local_6c = 0;
        uVar7 = 0;
      }
      else {
        puVar5 = (uint *)param_1[0x13];
        if ((uint *)param_1[0x13] == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0x11);
        }
        uVar7 = *puVar5;
        if (uVar7 == 0) {
          iVar4 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar4 = uVar3 - 1;
          }
          uVar12 = 0;
          uVar13 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar13 = uVar12;
          }
          local_6c = 0;
          do {
            if (uVar13 == uVar12) goto LAB_1413f763f;
            local_6c = local_6c + 0x20;
            uVar7 = puVar5[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar12 = 0;
          local_6c = 0;
        }
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar13 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar7 = (local_6c - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar7) {
          uVar7 = uVar3;
        }
      }
      if (uVar7 != uVar3) {
        uVar15 = 0xffffffff;
        bVar14 = 1;
        local_68 = (ulonglong)uVar3;
        do {
          lVar10 = *(longlong *)(param_1[0xf] + 8 + (longlong)(int)uVar7 * 0x18);
          if ((DAT_14c950c29 == 1) && (lVar10 != 0)) {
            FUN_1456cec3c(lVar10);
          }
          bVar2 = (**(code **)(*param_1 + 0x338))(param_1,lVar10,param_2);
          uVar15 = uVar15 & ~(uint)uVar13;
          puVar5 = (uint *)param_1[0x13];
          if ((uint *)param_1[0x13] == (uint *)0x0) {
            puVar5 = (uint *)(param_1 + 0x11);
          }
          uVar3 = *(uint *)(param_1 + 0x14);
          iVar4 = (int)uVar12;
          lVar10 = (longlong)iVar4;
          uVar7 = puVar5[lVar10] & uVar15;
          if (uVar7 == 0) {
            iVar8 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar8 = uVar3 - 1;
            }
            iVar8 = iVar8 >> 5;
            local_6c = local_6c + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar4) {
              iVar9 = iVar4;
            }
            if (iVar4 < iVar8) {
              lVar11 = 0;
              do {
                uVar7 = puVar5[lVar10 + lVar11 + 1];
                if (uVar7 != 0) {
                  uVar12 = (ulonglong)(iVar4 + (int)lVar11 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_1413f75da;
                }
                local_6c = local_6c + 0x20;
                lVar11 = lVar11 + 1;
              } while (iVar9 - lVar10 != lVar11);
              uVar15 = 0xffffffff;
              iVar4 = iVar9;
            }
            uVar12 = (ulonglong)(iVar4 + 1);
            uVar7 = uVar3;
          }
          else {
LAB_1413f75da:
            uVar13 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar13 * 2 + 1;
            lVar10 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            uVar7 = (local_6c - ((uint)lVar10 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar7) {
              uVar7 = uVar3;
            }
          }
          bVar14 = bVar14 & bVar2;
        } while (uVar7 != (uint)local_68);
        if (bVar14 == 0) goto LAB_1413f73f0;
      }
LAB_1413f763f:
      local_50 = param_2;
      FUN_1447cd2ec(param_1 + 0xc);
      uVar6 = 1;
      goto LAB_1413f73f2;
    }
  }
LAB_1413f73f0:
  uVar6 = 0;
LAB_1413f73f2:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1413f766a FUN_1413f766a body=533 status=ok
// SIG undefined FUN_1413f766a(void)

void FUN_1413f766a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a06ecc(&local_58);
  puVar5 = local_58;
  if ((int)uStack_50 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_48,puVar5,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
      uVar1 = (uint)((ulonglong)local_48 >> 0x10);
      uVar6 = (uint)local_48 & 0xffff;
      lVar2 = param_1 + 0x210;
      if (*(longlong *)(param_1 + 0x218) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x218);
      }
      iVar7 = *(int *)(lVar2 + (ulonglong)
                               (*(int *)(param_1 + 0x220) - 1U &
                               (int)((ulonglong)local_48 >> 0x20) + ((uint)local_48 << 0x10 | uVar6)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        lVar2 = *(longlong *)(param_1 + 0x1d8);
        do {
          if (*(longlong *)(lVar2 + (longlong)iVar7 * 0x10) == local_48) goto LAB_1413f7846;
          iVar7 = *(int *)((longlong)iVar7 * 0x10 + lVar2 + 8);
        } while (iVar7 != -1);
      }
    }
    FUN_144a13f80((longlong *)(param_1 + 0x1d8),&local_58,&local_48,0);
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    lVar2 = FUN_1413f795e(param_1,local_48,3,&local_58);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    FUN_1413f795e(param_1,local_48,2,&local_58);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((lVar2 != 0) && (lVar4 = *(longlong *)(lVar2 + 0x18), lVar4 != 0)) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      uVar3 = FUN_1413f7880();
      local_68 = 0;
      uStack_60 = 0;
      FUN_1400033ba(lVar4,uVar3,puVar5,0);
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + 0x40);
      if (lVar4 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x38);
        lVar4 = lVar4 * 0x28;
        do {
          FUN_1403dd93c(param_1,lVar2);
          lVar2 = lVar2 + 0x28;
          lVar4 = lVar4 + -0x28;
        } while (lVar4 != 0);
      }
    }
  }
LAB_1413f7846:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413f7880 FUN_1413f7880 body=221 status=ok
// SIG undefined FUN_1413f7880(void)

longlong FUN_1413f7880(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14747bc75;
    local_40 = FUN_146328281;
    local_48 = L"GameplayTags";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayTags",L"RestrictedGameplayTagsList",&DAT_14caa8490,
                  &DAT_14747bc74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f795e FUN_1413f795e body=2580 status=ok
// SIG undefined FUN_1413f795e(void)

longlong FUN_1413f795e(longlong param_1,longlong param_2,char param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  size_t sVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  undefined2 *puVar23;
  longlong lVar24;
  int iVar25;
  wchar_t *pwVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined8 *local_90;
  ulonglong local_88;
  undefined2 *local_80;
  int local_78;
  wchar_t *local_70;
  int local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = (longlong *)(param_1 + 0x188);
  iVar30 = *(int *)(param_1 + 400);
  iVar21 = *(int *)(param_1 + 0x1bc);
  uVar29 = (uint)param_2;
  iVar31 = (int)((ulonglong)param_2 >> 0x20);
  uVar27 = (uint)((ulonglong)param_2 >> 0x10);
  local_50 = param_2;
  if (iVar30 != iVar21) {
    lVar28 = param_1 + 0x1c0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      lVar28 = *(longlong *)(param_1 + 0x1c8);
    }
    iVar12 = *(int *)(lVar28 + (ulonglong)
                               (*(int *)(param_1 + 0x1d0) - 1U &
                               iVar31 + (uVar29 << 0x10 | uVar29 & 0xffff) +
                               (uVar27 << 0x13 | uVar27 & 0xffff) + ((uVar29 & 0xffff) >> 4)) * 4);
    if (iVar12 != -1) {
      do {
        lVar28 = *plVar15 + (longlong)iVar12 * 0x30;
        if (*(longlong *)(*plVar15 + (longlong)iVar12 * 0x30) == param_2) {
          if (lVar28 != 0) {
            lVar24 = 0;
            if (*(char *)(lVar28 + 0x10) == param_3) {
              lVar24 = lVar28 + 8;
            }
            goto switchD_1413f7cab_default;
          }
          break;
        }
        iVar12 = *(int *)(lVar28 + 0x28);
      } while (iVar12 != -1);
    }
  }
  local_90 = param_4;
  if (iVar21 == 0) {
    *(int *)(param_1 + 400) = iVar30 + 1;
    if (*(int *)(param_1 + 0x194) == iVar30) {
      FUN_140044672(plVar15,iVar30);
    }
    iVar21 = *(int *)(param_1 + 0x1b0);
    if (iVar21 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar12 = iVar21 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    lVar24 = param_1 + 0x198;
    iVar18 = iVar21 + 1;
    iVar25 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar25 = iVar21;
    }
    if (iVar25 >> 5 == iVar12) {
      *(int *)(param_1 + 0x1b0) = iVar18;
    }
    else {
      if (*(int *)(param_1 + 0x1b4) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar18 = 0x80;
          iVar12 = iVar21;
        }
        else {
          uVar22 = iVar21 + 0x20U >> 5;
          local_88 = (ulonglong)uVar22;
          if (*(int *)(param_1 + 0x1b4) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar22) {
              uVar19 = uVar22;
            }
          }
          else {
            uVar19 = (uVar22 * 3 >> 3) + uVar22 + 0x10;
          }
          uVar20 = FUN_144a3809e(uVar19 << 2,0);
          iVar12 = (int)(uVar20 >> 2);
          iVar18 = -0x20;
          if ((int)local_88 <= iVar12) {
            iVar18 = iVar12 << 5;
          }
          iVar12 = *(int *)(param_1 + 0x1b0);
        }
        *(int *)(param_1 + 0x1b4) = iVar18;
        FUN_1446efbd8(lVar24,iVar12);
        iVar18 = *(int *)(param_1 + 0x1b0) + 1;
      }
      iVar12 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar12 = iVar18;
      }
      *(int *)(param_1 + 0x1b0) = iVar18;
      if (iVar18 % 0x20 != 0) {
        lVar28 = *(longlong *)(param_1 + 0x1a8);
        if (*(longlong *)(param_1 + 0x1a8) == 0) {
          lVar28 = lVar24;
        }
        bVar17 = -(char)(iVar18 % 0x20);
        *(uint *)(lVar28 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)(lVar28 + (longlong)(iVar12 >> 5) * 4) << (bVar17 & 0x1f)) >>
             (bVar17 & 0x1f);
      }
    }
    lVar28 = (longlong)iVar30;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar24 = *(longlong *)(param_1 + 0x1a8);
    }
    bVar17 = (byte)iVar21 & 0x1f;
    puVar4 = (uint *)(lVar24 + (longlong)(iVar25 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
  }
  else {
    iVar30 = *(int *)(param_1 + 0x1b8);
    lVar28 = (longlong)iVar30;
    iVar12 = *(int *)(*(longlong *)(param_1 + 0x188) + 4 + lVar28 * 0x30);
    *(int *)(param_1 + 0x1b8) = iVar12;
    *(int *)(param_1 + 0x1bc) = iVar21 + -1;
    if (iVar21 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar12 * 0x30) = 0xffffffff;
    }
  }
  iVar21 = 1;
  lVar24 = param_1 + 0x198;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    lVar24 = *(longlong *)(param_1 + 0x1a8);
  }
  iVar12 = iVar30 + 0x1f;
  if (-1 < iVar30) {
    iVar12 = iVar30;
  }
  puVar4 = (uint *)(lVar24 + (longlong)(iVar12 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar30 & 0x1f);
  lVar24 = *(longlong *)(param_1 + 0x188);
  lVar28 = lVar28 * 0x30;
  puVar1 = (undefined4 *)(lVar24 + lVar28);
  *(longlong *)(lVar24 + lVar28) = param_2;
  *(longlong *)(lVar24 + 8 + lVar28) = param_2;
  *(char *)(lVar24 + 0x10 + lVar28) = param_3;
  puVar3 = (undefined8 *)(lVar24 + 0x18 + lVar28);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(lVar24 + 0x28 + lVar28) = 0xffffffff;
  uVar27 = (uVar29 << 0x10 | uVar29 & 0xffff) + iVar31 + (uVar27 << 0x13 | uVar27 & 0xffff) +
           ((uVar29 & 0xffff) >> 4);
  uVar29 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x1bc);
  if ((uVar29 != 0) && (uVar29 != 1)) {
    lVar28 = param_1 + 0x1c0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      lVar28 = *(longlong *)(param_1 + 0x1c8);
    }
    iVar31 = *(int *)(lVar28 + (ulonglong)(*(int *)(param_1 + 0x1d0) - 1U & uVar27) * 4);
    if (iVar31 != -1) {
      do {
        puVar2 = (undefined4 *)(*plVar15 + (longlong)iVar31 * 0x30);
        if (*(longlong *)(*plVar15 + (longlong)iVar31 * 0x30) == param_2) {
          uVar13 = *puVar1;
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          uVar8 = puVar1[4];
          uVar9 = puVar1[5];
          uVar10 = puVar1[6];
          uVar11 = puVar1[7];
          *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
          puVar2[4] = uVar8;
          puVar2[5] = uVar9;
          puVar2[6] = uVar10;
          puVar2[7] = uVar11;
          *puVar2 = uVar13;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          FUN_14747e490(plVar15,iVar30);
          goto LAB_1413f7c79;
        }
        iVar31 = puVar2[10];
      } while (iVar31 != -1);
    }
  }
  if (3 < uVar29) {
    uVar20 = (ulonglong)(uVar29 & 0xfffffffe) + 0xf;
    lVar28 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar21 = 1 << ((byte)lVar28 & 0x1f);
  }
  iVar31 = iVar30;
  if (((int)uVar29 < 1) || (iVar21 <= *(int *)(param_1 + 0x1d0))) {
    uVar27 = *(int *)(param_1 + 0x1d0) - 1U & uVar27;
    puVar1[0xb] = uVar27;
    lVar28 = *(longlong *)(param_1 + 0x1c8);
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      lVar28 = param_1 + 0x1c0;
    }
    puVar1[10] = *(undefined4 *)
                  (lVar28 + ((longlong)*(int *)(param_1 + 0x1d0) - 1U & (longlong)(int)uVar27) * 4);
    lVar28 = *(longlong *)(param_1 + 0x1c8);
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      lVar28 = param_1 + 0x1c0;
    }
    *(int *)(lVar28 + ((longlong)*(int *)(param_1 + 0x1d0) - 1U & (longlong)(int)uVar27) * 4) =
         iVar30;
  }
  else {
    *(int *)(param_1 + 0x1d0) = iVar21;
    FUN_1413f8374(plVar15);
  }
LAB_1413f7c79:
  lVar28 = *plVar15 + (longlong)iVar31 * 0x30;
  lVar24 = lVar28 + 8;
  switch(param_3) {
  case '\0':
    lVar14 = FUN_14596e6a3(param_1,param_2);
    break;
  case '\x01':
    plVar15 = (longlong *)FUN_1413eaf12();
    lVar14 = plVar15[0x22];
    if (lVar14 == 0) {
      (**(code **)(*plVar15 + 1000))(plVar15);
      lVar14 = plVar15[0x22];
    }
    break;
  case '\x02':
    lVar14 = FUN_14596e6a3(param_1,param_2);
    if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar14);
    }
    *(longlong *)(lVar28 + 0x18) = lVar14;
    if (*(int *)(local_90 + 1) < 2) {
      FUN_1400021e4(&local_50,&local_70);
      pwVar26 = L"";
      if (local_68 != 0) {
        pwVar26 = local_70;
      }
      FUN_140d6aad2(&local_80);
      puVar23 = &DAT_149dfb77a;
      if (local_78 != 0) {
        puVar23 = local_80;
      }
      FUN_140002266(&local_60,L"%sTags/%s",puVar23,pwVar26);
      lVar14 = *(longlong *)(lVar28 + 0x18);
      if ((longlong *)(lVar14 + 0x28) == &local_60) {
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar14 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar14 + 0x28) = local_60;
        local_60 = 0;
        *(undefined4 *)(lVar14 + 0x30) = (undefined4)local_58;
        *(undefined4 *)(lVar14 + 0x34) = local_58._4_4_;
        local_58 = 0;
      }
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1400021e4(&local_50,&local_70);
      pwVar26 = local_70;
      if (local_68 == 0) {
        pwVar26 = L"";
      }
      sVar16 = wcslen(pwVar26);
      local_98 = (uint)((int)sVar16 != -1 && *(int *)(local_90 + 1) == 0) + (int)sVar16 + 1;
      local_60 = 0;
      FUN_14125bce8(&local_60,*local_90,*(int *)(local_90 + 1),0);
      FUN_1401aebe8(&local_60,pwVar26,sVar16 & 0xffffffff);
      lVar14 = *(longlong *)(lVar28 + 0x18);
      if ((longlong *)(lVar14 + 0x28) == &local_60) {
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar14 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar14 + 0x28) = local_60;
        local_60 = 0;
        *(undefined4 *)(lVar14 + 0x30) = (undefined4)local_58;
        *(undefined4 *)(lVar14 + 0x34) = local_58._4_4_;
        local_58 = 0;
      }
      if (local_70 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      iVar30 = *(int *)(local_90 + 1);
      if (iVar30 == 0) {
        puVar23 = &DAT_149dfb77a;
      }
      else {
        puVar23 = (undefined2 *)*local_90;
      }
      iVar21 = iVar30 + -1;
      if (iVar30 == 0) {
        iVar21 = 0;
      }
      uVar13 = FUN_144a49b4a(iVar21,puVar23);
      FUN_1460493e4(param_1 + 200,uVar13,local_90);
    }
    if (DAT_14c9647bc < *(int *)(param_1 + 0xc)) goto switchD_1413f7cab_default;
    lVar28 = *(longlong *)(lVar28 + 0x18);
    goto LAB_1413f7dac;
  case '\x03':
    lVar14 = FUN_14596e5e7(param_1,param_2);
    if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar14);
    }
    *(longlong *)(lVar28 + 0x20) = lVar14;
    if (*(int *)(local_90 + 1) < 2) {
      FUN_1400021e4(&local_50,&local_70);
      pwVar26 = L"";
      if (local_68 != 0) {
        pwVar26 = local_70;
      }
      FUN_140d6aad2(&local_80);
      puVar23 = &DAT_149dfb77a;
      if (local_78 != 0) {
        puVar23 = local_80;
      }
      FUN_140002266(&local_60,L"%sTags/%s",puVar23,pwVar26);
      lVar14 = *(longlong *)(lVar28 + 0x20);
      if ((longlong *)(lVar14 + 0x28) == &local_60) {
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar14 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar14 + 0x28) = local_60;
        local_60 = 0;
        *(undefined4 *)(lVar14 + 0x30) = (undefined4)local_58;
        *(undefined4 *)(lVar14 + 0x34) = local_58._4_4_;
        local_58 = 0;
      }
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1400021e4(&local_50,&local_70);
      pwVar26 = local_70;
      if (local_68 == 0) {
        pwVar26 = L"";
      }
      sVar16 = wcslen(pwVar26);
      local_98 = (uint)((int)sVar16 != -1 && *(int *)(local_90 + 1) == 0) + (int)sVar16 + 1;
      local_60 = 0;
      FUN_14125bce8(&local_60,*local_90,*(int *)(local_90 + 1),0);
      FUN_1401aebe8(&local_60,pwVar26,sVar16 & 0xffffffff);
      lVar14 = *(longlong *)(lVar28 + 0x20);
      if ((longlong *)(lVar14 + 0x28) == &local_60) {
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar14 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar14 + 0x28) = local_60;
        local_60 = 0;
        *(undefined4 *)(lVar14 + 0x30) = (undefined4)local_58;
        *(undefined4 *)(lVar14 + 0x34) = local_58._4_4_;
        local_58 = 0;
      }
      if (local_70 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      iVar30 = *(int *)(local_90 + 1);
      if (iVar30 == 0) {
        puVar23 = &DAT_149dfb77a;
      }
      else {
        puVar23 = (undefined2 *)*local_90;
      }
      iVar21 = iVar30 + -1;
      if (iVar30 == 0) {
        iVar21 = 0;
      }
      uVar13 = FUN_144a49b4a(iVar21,puVar23);
      FUN_1460493e4(param_1 + 200,uVar13,local_90);
    }
    if (DAT_14c9647bc < *(int *)(param_1 + 0xc)) goto switchD_1413f7cab_default;
    lVar28 = *(longlong *)(lVar28 + 0x20);
LAB_1413f7dac:
    uVar27 = *(uint *)(lVar28 + 0xc);
    if ((int)uVar27 < DAT_14c9647dc) {
      lVar28 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
    }
    else {
      lVar28 = 0;
    }
    FUN_1447f71cc(lVar28,0x40000000);
  default:
    goto switchD_1413f7cab_default;
  }
  if ((lVar14 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar14);
  }
  *(longlong *)(lVar28 + 0x18) = lVar14;
switchD_1413f7cab_default:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar24;
}



// FUNCTION 1413f8374 FUN_1413f8374 body=598 status=ok
// SIG undefined FUN_1413f8374(void)

void FUN_1413f8374(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x30;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x2c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x28 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1413f8581;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1413f8581:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f85cb FUN_1413f85cb body=49 status=ok
// SIG undefined FUN_1413f85cb(void)

longlong FUN_1413f85cb(void)

{
  if (DAT_14c9909b8 == 0) {
    FUN_140f50038(&DAT_14c9909b8,&PTR_s__Script_EngineSettings_149f23b78);
  }
  return DAT_14c9909b8;
}



// FUNCTION 1413f85fc FUN_1413f85fc body=49 status=ok
// SIG undefined FUN_1413f85fc(void)

longlong FUN_1413f85fc(void)

{
  if (DAT_14c9979b8 == 0) {
    FUN_140f50038(&DAT_14c9979b8,&PTR_s__Script_PhysicsCore_149f70528);
  }
  return DAT_14c9979b8;
}



// FUNCTION 1413f862e FUN_1413f862e body=228 status=ok
// SIG undefined FUN_1413f862e(void)

longlong FUN_1413f862e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cada288 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417f6a96;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145893408;
    local_38 = &LAB_147a98965;
    local_40 = FUN_1463c8553;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000e;
    local_60 = 8;
    local_68 = 0x13a8;
    FUN_14081cfa3(L"/Script/Engine",L"GameEngine",&DAT_14cada288,&DAT_147a98964);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cada288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f8713 FUN_1413f8713 body=49 status=ok
// SIG undefined FUN_1413f8713(void)

longlong FUN_1413f8713(void)

{
  if (DAT_14cb248e0 == 0) {
    FUN_140f50038(&DAT_14cb248e0,&PTR_s__Script_GbxDestruction_14ac93528);
  }
  return DAT_14cb248e0;
}



// FUNCTION 1413f8744 FUN_1413f8744 body=49 status=ok
// SIG undefined FUN_1413f8744(void)

longlong FUN_1413f8744(void)

{
  if (DAT_14cb9a000 == 0) {
    FUN_140f50038(&DAT_14cb9a000,&PTR_s__Script_GameSettings_14b5330ed_3_14b5330d0);
  }
  return DAT_14cb9a000;
}



// FUNCTION 1413f8775 FUN_1413f8775 body=49 status=ok
// SIG undefined FUN_1413f8775(void)

longlong FUN_1413f8775(void)

{
  if (DAT_14cc0d890 == 0) {
    FUN_140f50038(&DAT_14cc0d890,&PTR_s__Script_VariantManagerContent_14bc56636_2_14bc56618);
  }
  return DAT_14cc0d890;
}



// FUNCTION 1413f87a6 FUN_1413f87a6 body=91 status=ok
// SIG undefined FUN_1413f87a6(void)

void FUN_1413f87a6(uint param_1,uint param_2,uint param_3,byte param_4,byte param_5,uint *param_6,
                  uint *param_7,uint *param_8)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)((uint)param_4 * 0x30);
  param_1 = param_1 >> (param_5 & 0x1f);
  if (param_1 < *(uint *)((longlong)&DAT_14c87341c + uVar1)) {
    param_1 = *(uint *)((longlong)&DAT_14c87341c + uVar1);
  }
  *param_6 = param_1;
  param_2 = param_2 >> (param_5 & 0x1f);
  if (param_2 < *(uint *)((longlong)&DAT_14c873420 + uVar1)) {
    param_2 = *(uint *)((longlong)&DAT_14c873420 + uVar1);
  }
  *param_7 = param_2;
  param_3 = param_3 >> (param_5 & 0x1f);
  if (param_3 < *(uint *)(&DAT_14c873424 + uVar1)) {
    param_3 = *(uint *)(&DAT_14c873424 + uVar1);
  }
  *param_8 = param_3;
  return;
}



// FUNCTION 1413f8801 FUN_1413f8801 body=42 status=ok
// SIG undefined FUN_1413f8801(void)

void FUN_1413f8801(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_14016450e(param_1);
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1413f882b FUN_1413f882b body=61 status=ok
// SIG undefined FUN_1413f882b(void)

void FUN_1413f882b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1413f8868 FUN_1413f8868 body=415 status=ok
// SIG undefined FUN_1413f8868(void)

void FUN_1413f8868(longlong param_1)

{
  longlong lVar1;
  undefined ***pppuVar2;
  longlong *plVar3;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  code *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  undefined1 *local_c0;
  undefined1 *local_a8;
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(longlong *)(param_1 + 0x60) != 0)) {
    if (*(int *)(param_1 + 0x68) - 1U < 0xfffffffe) {
      local_100 = 0;
      local_110 = *(longlong *)(param_1 + 0x60);
      local_108 = *(int *)(param_1 + 0x68);
      lVar1 = FUN_1414bd2c4();
      if (lVar1 == 0) {
        uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
        FUN_146581d16(&local_f8,0);
        *local_f8 = *(undefined8 *)(param_1 + 0x60);
        *(undefined4 *)(local_f8 + 1) = *(undefined4 *)(param_1 + 0x68);
        local_f8[2] = 0;
      }
    }
  }
  local_118 = local_68;
  local_68[0] = 0;
  local_58 = (longlong *)0x0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b9684d0;
  local_a8 = &LAB_144114aee;
  local_d8 = (undefined ***)0x0;
  local_c8 = &PTR_LAB_14b9684b0;
  local_c0 = &LAB_144114abe;
  local_e8[0] = FUN_1457eef5c;
  local_80 = param_1;
  FUN_1457eebae(param_1,&local_f8,local_e8);
  if (local_e8[0] != (code *)0x0) {
    pppuVar2 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar2 = &local_c8;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_a8 != (undefined1 *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != 0) {
    plVar3 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar3 = local_48;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (local_f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f8a08 FUN_1413f8a08 body=258 status=ok
// SIG undefined FUN_1413f8a08(void)

void FUN_1413f8a08(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x16c) == '\x02') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x178);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x170);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        FUN_14097c15a();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) < 0) {
    FUN_14655254c(param_1 + 0x170,0);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar5 = FUN_14063f846();
        if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          (**(code **)(*plVar3 + 0xa8))(plVar3);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined1 *)(param_1 + 0x16c) = 2;
  *(undefined1 *)(param_1 + 0x180) = 0;
  FUN_1488a5aa8(param_1 + 0x130,param_1);
  return;
}



// FUNCTION 1413f8b0a FUN_1413f8b0a body=261 status=ok
// SIG undefined FUN_1413f8b0a(void)

undefined8 * FUN_1413f8b0a(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = (ulonglong)(param_2[1] - *param_2) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1413f9178(param_1,uVar4 & 0xffffffff);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_1413f8fca(param_1);
    }
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_1413f8c10(param_1,local_34,&local_48,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f8c10 FUN_1413f8c10 body=519 status=ok
// SIG undefined FUN_1413f8c10(void)

void FUN_1413f8c10(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  byte *pbVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 *local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_2;
  FUN_1413f8ee4(param_1,local_58);
  puVar2 = (undefined8 *)param_3[1];
  *local_50 = *(byte *)*param_3;
  pbVar5 = local_50;
  pbVar5[8] = 0;
  pbVar5[9] = 0;
  pbVar5[10] = 0;
  pbVar5[0xb] = 0;
  pbVar5[0xc] = 0;
  pbVar5[0xd] = 0;
  pbVar5[0xe] = 0;
  pbVar5[0xf] = 0;
  iVar9 = *(int *)(puVar2 + 1);
  pvVar3 = (void *)*puVar2;
  *(int *)(local_50 + 0x10) = iVar9;
  if ((longlong)iVar9 == 0) {
    pbVar5[0x14] = 0;
    pbVar5[0x15] = 0;
    pbVar5[0x16] = 0;
    pbVar5[0x17] = 0;
  }
  else {
    FUN_1446dd670(local_50 + 8,iVar9,0);
    memcpy(*(void **)(local_50 + 8),pvVar3,(longlong)iVar9 * 2);
  }
  pbVar5[0x18] = 0;
  pbVar5[0x19] = 0;
  pbVar5[0x1a] = 0;
  pbVar5[0x1b] = 0;
  pbVar5[0x1c] = 0;
  pbVar5[0x1d] = 0;
  pbVar5[0x1e] = 0;
  pbVar5[0x1f] = 0;
  iVar9 = *(int *)(puVar2 + 3);
  pvVar3 = (void *)puVar2[2];
  *(int *)(local_50 + 0x20) = iVar9;
  if ((longlong)iVar9 == 0) {
    pbVar5[0x24] = 0;
    pbVar5[0x25] = 0;
    pbVar5[0x26] = 0;
    pbVar5[0x27] = 0;
  }
  else {
    FUN_1446dd670(local_50 + 0x18,iVar9,0);
    memcpy(*(void **)(local_50 + 0x18),pvVar3,(longlong)iVar9 * 2);
  }
  pbVar5[0x28] = 0;
  pbVar5[0x29] = 0;
  pbVar5[0x2a] = 0;
  pbVar5[0x2b] = 0;
  pbVar5[0x2c] = 0;
  pbVar5[0x2d] = 0;
  pbVar5[0x2e] = 0;
  pbVar5[0x2f] = 0;
  iVar9 = *(int *)(puVar2 + 5);
  uVar4 = puVar2[4];
  *(int *)(local_50 + 0x30) = iVar9;
  if (iVar9 == 0) {
    pbVar5[0x34] = 0;
    pbVar5[0x35] = 0;
    pbVar5[0x36] = 0;
    pbVar5[0x37] = 0;
  }
  else {
    FUN_140b856de(local_50 + 0x28,iVar9,0);
    FUN_140b8566a(*(undefined8 *)(local_50 + 0x28),uVar4,iVar9);
  }
  pbVar5[0x38] = 0xff;
  pbVar5[0x39] = 0xff;
  pbVar5[0x3a] = 0xff;
  pbVar5[0x3b] = 0xff;
  local_5c = local_58[0];
  bVar1 = *local_50;
  local_78 = param_4;
  cVar6 = FUN_1413f8e18(param_1,bVar1,local_50);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_50 + 0x3c) = uVar8;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x38) =
           *(undefined4 *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar8) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar8) * 4) = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1413f8fca(param_1);
    }
  }
  *local_68 = local_5c;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f8e18 FUN_1413f8e18 body=204 status=ok
// SIG undefined FUN_1413f8e18(void)

void FUN_1413f8e18(longlong *param_1,uint param_2,char *param_3,int *param_4,undefined1 *param_5)

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
  undefined1 uVar14;
  longlong *plVar15;
  int iVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x40);
        if (*(char *)(*param_1 + (longlong)iVar16 * 0x40) == *param_3) {
          FUN_141907886(puVar1 + 2);
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x10);
          uVar7 = *(undefined4 *)(param_3 + 0x14);
          uVar8 = *(undefined4 *)(param_3 + 0x18);
          uVar9 = *(undefined4 *)(param_3 + 0x1c);
          uVar10 = *(undefined4 *)(param_3 + 0x20);
          uVar11 = *(undefined4 *)(param_3 + 0x24);
          uVar12 = *(undefined4 *)(param_3 + 0x28);
          uVar13 = *(undefined4 *)(param_3 + 0x2c);
          *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0x30);
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
          FUN_1493c7f26(param_1,*param_4,1);
          *param_4 = iVar16;
          uVar14 = 1;
          break;
        }
        iVar16 = puVar1[0xe];
        uVar14 = 0;
      } while (iVar16 != -1);
      goto LAB_1413f8e68;
    }
  }
  uVar14 = 0;
LAB_1413f8e68:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 1413f8ee4 FUN_1413f8ee4 body=229 status=ok
// SIG undefined FUN_1413f8ee4(void)

int * FUN_1413f8ee4(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1413f8fca FUN_1413f8fca body=428 status=ok
// SIG undefined FUN_1413f8fca(void)

void FUN_1413f8fca(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        lVar6 = (longlong)iVar4 * 0x40;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x3c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x38 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1413f9178 FUN_1413f9178 body=442 status=ok
// SIG undefined FUN_1413f9178(void)

void FUN_1413f9178(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140b7ce44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1406cd6a8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x40 + lVar2 + -0x3c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1413f9332 FUN_1413f9332 body=224 status=ok
// SIG undefined FUN_1413f9332(void)

void FUN_1413f9332(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (((*(int *)(param_1 + 8) != 0) && (uVar1 = *(uint *)(param_1 + 4), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 8))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
        (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))) {
      *(undefined2 *)(param_1 + 0x75) = 1;
      *(undefined1 *)(param_1 + 0x77) = 0;
      iVar2 = *(int *)(param_1 + 0x20);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        lVar7 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + lVar7) + 0x288);
          if ((lVar4 != 0) && (puVar5 = *(ushort **)(lVar4 + 0x80), puVar5 != (ushort *)0x0)) {
            *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar7);
      }
      (**(code **)(*plVar6 + 0x2c8))(plVar6);
      FUN_143eb5142(param_1,1);
      FUN_143eb5e70(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1413f941e FUN_1413f941e body=1006 status=ok
// SIG undefined FUN_1413f941e(void)

undefined8 * FUN_1413f941e(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b5dd7a0;
  param_1[0x72] = &PTR_FUN_14b5dde10;
  param_1[0x73] = &PTR_FUN_14b5dde30;
  param_1[0x74] = &PTR_FUN_14b5dde60;
  param_1[0x75] = &PTR_FUN_14b5dde70;
  param_1[0x76] = &PTR_FUN_14b5ddee0;
  param_1[0x77] = &PTR_FUN_14b5ddf10;
  param_1[0x78] = &PTR_FUN_14b5ddf40;
  param_1[0x7f] = &PTR_FUN_14b5ddff0;
  param_1[0x80] = &PTR_FUN_14b5de060;
  param_1[0x81] = &PTR_FUN_14b5de0d0;
  param_1[0x82] = &PTR_FUN_14b5de100;
  param_1[0x83] = &PTR_FUN_14b5de140;
  param_1[0x84] = &PTR_FUN_14b5de1e0;
  param_1[0x85] = &PTR_FUN_14b5de200;
  param_1[0x89] = &PTR_FUN_14b5de220;
  param_1[0x8a] = &PTR_FUN_14b5de2e0;
  param_1[0x8b] = &PTR_FUN_14b5de360;
  param_1[0x8c] = &PTR_FUN_14b5de3b0;
  param_1[0x8d] = &PTR_FUN_14b5de3f0;
  param_1[0x8e] = &PTR_FUN_14b5de410;
  param_1[0x8f] = &PTR_FUN_14b5de430;
  param_1[0x90] = &PTR_FUN_14b5de450;
  param_1[0x91] = &PTR_FUN_14b5de470;
  param_1[0x92] = &PTR_FUN_14b5de490;
  param_1[0x93] = &PTR_FUN_14b5de4b0;
  param_1[0x94] = &PTR_FUN_14b5de4d0;
  param_1[0x95] = &PTR_FUN_14b5de4f0;
  param_1[0x96] = &PTR_FUN_14b5de510;
  param_1[0x34b] = &PTR_FUN_14b5de530;
  param_1[0x352] = &PTR_FUN_14b5de540;
  param_1[0x353] = &PTR_FUN_14b5de580;
  param_1[0x354] = &PTR_FUN_14b5de5c0;
  param_1[0x355] = &PTR_FUN_14b5de610;
  param_1[0x356] = &PTR_FUN_14b5de640;
  param_1[0x359] = &PTR_FUN_14b5de680;
  param_1[0x35a] = &PTR_FUN_14b5de690;
  param_1[0x35b] = &PTR_FUN_14b5de6c0;
  param_1[0x35c] = &PTR_FUN_14b5de760;
  param_1[0x4c3] = 0;
  param_1[0x4c4] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  *(undefined4 *)(param_1 + 0x4c5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x262c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x263c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2654) = 0;
  *(undefined4 *)((longlong)param_1 + 0x265c) = 0;
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x4cc;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = &DAT_14c846480;
  puVar7 = param_1 + 0x4d8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0x4e8] = 0;
  param_1[0x4e6] = 0;
  param_1[0x4e7] = 0;
  param_1[0x4e4] = 0;
  param_1[0x4e5] = 0;
  uVar4 = DAT_14c8463d8;
  param_1[0x4ea] = DAT_14c8463d0;
  param_1[0x4eb] = uVar4;
  uVar4 = DAT_14c8463e8;
  param_1[0x4ec] = DAT_14c8463e0;
  param_1[0x4ed] = uVar4;
  uVar2 = DAT_14c8464e8._4_4_;
  uVar1 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x4ee) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x2774) = uVar3;
  *(undefined4 *)(param_1 + 0x4ef) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x277c) = uVar2;
  param_1[0x4f0] = DAT_14c8464f0;
  param_1[0x4f1] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x4f2) = 0;
  param_1[0x4f4] = 0;
  *(undefined1 *)(param_1 + 0x4f5) = 3;
  param_1[0x4fa] = 0;
  *(undefined1 *)(param_1 + 0x4fb) = 0;
  param_1[0x4f6] = 0;
  param_1[0x4f7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c4) = 0;
  local_30 = "CarryObjectOverlapVolume";
  local_28 = 0x18;
  local_24 = 0;
  uVar3 = FUN_14001a6c0(&local_30,1);
  uVar4 = FUN_1400b5618();
  local_40 = 0;
  local_48 = 1;
  lVar5 = FUN_14048696c(param_1,uVar3,uVar4,uVar4);
  if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x4ca] = lVar5;
    if (lVar5 == 0) goto LAB_1413f97cc;
  }
  else {
    FUN_1456cec3c(lVar5);
    param_1[0x4ca] = lVar5;
  }
  FUN_140486fc4(lVar5,param_1[0x39],0);
LAB_1413f97cc:
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f980e FUN_1413f980e body=116 status=ok
// SIG undefined FUN_1413f980e(void)

void FUN_1413f980e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar3 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
    do {
      cVar1 = FUN_140d6591c(lVar2,param_4);
      if (cVar1 != '\0') {
        if (lVar2 == 0) {
          return;
        }
        FUN_14596f7bd(lVar2 + 8,param_3,param_5);
        return;
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1413f988e FUN_1413f988e body=982 status=ok
// SIG undefined FUN_1413f988e(void)

undefined8 * FUN_1413f988e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1413f9d4a();
  *param_1 = &PTR_FUN_14b746cc0;
  param_1[0x72] = &PTR_FUN_14b747400;
  param_1[0x73] = &PTR_FUN_14b747470;
  param_1[0x74] = &PTR_FUN_14b7474e0;
  param_1[0x75] = &PTR_FUN_14b747510;
  param_1[0x76] = &PTR_FUN_14b747540;
  param_1[0x77] = &PTR_FUN_14b747570;
  param_1[0x78] = &PTR_FUN_14b7475b0;
  param_1[0x79] = &PTR_FUN_14b7475d0;
  param_1[0x7a] = &PTR_FUN_14b747600;
  param_1[0x7b] = &PTR_FUN_14b7476d0;
  param_1[0x7c] = &PTR_FUN_14b747720;
  param_1[0x7d] = &PTR_FUN_14b7477e0;
  param_1[0x7e] = &PTR_FUN_14b747800;
  param_1[0x7f] = &PTR_FUN_14b747880;
  param_1[0x80] = &PTR_FUN_14b7478a0;
  param_1[0x81] = &PTR_FUN_14b7478b0;
  param_1[0x82] = &PTR_FUN_14b7478f0;
  param_1[0x83] = &PTR_FUN_14b747960;
  param_1[0x84] = &PTR_FUN_14b747990;
  param_1[0x85] = &PTR_FUN_14b747a30;
  param_1[0x86] = &PTR_FUN_14b747a50;
  param_1[0x87] = &PTR_FUN_14b747a70;
  param_1[0x2a7] = &PTR_FUN_14b747a90;
  param_1[0x2a8] = &PTR_FUN_14b747ad0;
  param_1[0x2a9] = &PTR_FUN_14b747b00;
  param_1[0x2aa] = &PTR_FUN_14b747b20;
  param_1[0x2ab] = &PTR_FUN_14b747b60;
  param_1[0x2ac] = &PTR_FUN_14b747bb0;
  param_1[0x588] = &PTR_FUN_14b747bd0;
  param_1[0x589] = &PTR_FUN_14b747c10;
  param_1[0x58a] = &PTR_FUN_14b747c30;
  param_1[0x58b] = &PTR_FUN_14b747c80;
  param_1[0x58c] = &PTR_FUN_14b747cb0;
  param_1[0x58d] = &PTR_FUN_14b747cd0;
  param_1[0x596] = 0;
  param_1[0x594] = 0;
  param_1[0x595] = 0;
  param_1[0x592] = 0;
  param_1[0x593] = 0;
  param_1[0x590] = 0;
  param_1[0x591] = 0;
  param_1[0x58e] = 0;
  param_1[0x58f] = 0;
  uVar1 = FUN_1413f9c64();
  param_1[0x597] = &PTR_FUN_14aac8f28;
  param_1[0x59c] = 0;
  *(undefined4 *)(param_1 + 0x59d) = 0;
  param_1[0x598] = 0;
  param_1[0x599] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2cf4) = 0;
  param_1[0x5a0] = 0;
  *(undefined4 *)(param_1 + 0x5a1) = 0;
  param_1[0x5a6] = 0;
  *(undefined4 *)(param_1 + 0x5a7) = 0;
  param_1[0x5a2] = 0;
  param_1[0x5a3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2d44) = 0;
  param_1[0x5aa] = 0;
  *(undefined4 *)(param_1 + 0x5ab) = 0;
  param_1[0x5ac] = uVar1;
  param_1[0x5ad] = 0;
  *(undefined2 *)(param_1 + 0x5ae) = 0;
  param_1[0x5af] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x5b0) = 0;
  FUN_1405bceb4(param_1 + 0x5af);
  param_1[0x597] = &PTR_FUN_14b747e48;
  param_1[0x5af] = &PTR_LAB_14b747e50;
  *(undefined1 *)(param_1 + 0x5b1) = 0;
  param_1[0x5be] = 0;
  *(undefined4 *)(param_1 + 0x5bf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dfc) = 0x80;
  *(undefined4 *)(param_1 + 0x5c0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2e04) = 0;
  param_1[0x5b2] = 0;
  param_1[0x5b3] = 0;
  param_1[0x5b4] = 0;
  param_1[0x5b5] = 0;
  param_1[0x5b6] = 0;
  param_1[0x5b7] = 0;
  param_1[0x5b8] = 0;
  param_1[0x5b9] = 0;
  param_1[0x5ba] = 0;
  param_1[0x5bb] = 0;
  param_1[0x5c2] = 0;
  *(undefined4 *)(param_1 + 0x5c3) = 0;
  param_1[0x5c4] = 0;
  param_1[0x5c5] = 0;
  param_1[0x5c6] = 0;
  param_1[0x5c7] = 0;
  param_1[0x5c8] = 0;
  param_1[0x5c9] = 0xf;
  *(undefined2 *)(param_1 + 0x5ca) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2e54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e5c) = 0;
  FUN_140c4ac3c(param_1 + 0x5cd);
  param_1[0x5d5] = &PTR_FUN_14b039460;
  param_1[0x5d6] = 0;
  param_1[0x5d8] = 0;
  param_1[0x5d9] = 0;
  param_1[0x5da] = 0;
  param_1[0x5db] = 0;
  param_1[0x5dc] = 0;
  param_1[0x5dd] = 0;
  param_1[0x5de] = 0;
  param_1[0x5df] = 0;
  param_1[0x5e0] = 0;
  param_1[0x5e1] = 0;
  param_1[0x5e2] = 0;
  param_1[0x5e3] = 0;
  *(undefined4 *)(param_1 + 0x5d7) = 0;
  FUN_14020a6cc(param_1 + 0x5d6,1);
  return param_1;
}



// FUNCTION 1413f9c64 FUN_1413f9c64 body=228 status=ok
// SIG undefined FUN_1413f9c64(void)

longlong FUN_1413f9c64(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba9db8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465d5e5a;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_148c0cc61;
    local_40 = &LAB_1459a6781;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/OakGame",L"OakDroneSubsystem",&DAT_14cba9db8,&DAT_148c0cc60);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba9db8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413f9d4a FUN_1413f9d4a body=2352 status=ok
// SIG undefined FUN_1413f9d4a(void)

longlong * FUN_1413f9d4a(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  uVar5 = FUN_14007ca06();
  FUN_140c4ada0(param_1,uVar5);
  *param_1 = (longlong)&PTR_FUN_14b136e40;
  param_1[0x72] = (longlong)&PTR_FUN_14b137570;
  param_1[0x73] = (longlong)&PTR_FUN_14b1375e0;
  param_1[0x74] = (longlong)&PTR_FUN_14b137650;
  param_1[0x75] = (longlong)&PTR_FUN_14b137680;
  param_1[0x76] = (longlong)&PTR_FUN_14b1376b0;
  param_1[0x77] = (longlong)&PTR_FUN_14b1376e0;
  param_1[0x78] = (longlong)&PTR_FUN_14b137720;
  param_1[0x79] = (longlong)&PTR_FUN_14b137740;
  param_1[0x7a] = (longlong)&PTR_FUN_14b137770;
  param_1[0x7b] = (longlong)&PTR_FUN_14b137840;
  param_1[0x7c] = (longlong)&PTR_FUN_14b137890;
  param_1[0x7d] = (longlong)&PTR_FUN_14b137950;
  param_1[0x7e] = (longlong)&PTR_FUN_14b137970;
  param_1[0x7f] = (longlong)&PTR_FUN_14b1379f0;
  param_1[0x80] = (longlong)&PTR_FUN_14b137a10;
  param_1[0x81] = (longlong)&PTR_FUN_14b137a20;
  param_1[0x82] = (longlong)&PTR_FUN_14b137a60;
  param_1[0x83] = (longlong)&PTR_FUN_14b137ad0;
  param_1[0x84] = (longlong)&PTR_FUN_14b137b00;
  param_1[0x85] = (longlong)&PTR_FUN_14b137ba0;
  param_1[0x86] = (longlong)&PTR_FUN_14b137bc0;
  param_1[0x87] = (longlong)&PTR_FUN_14b137be0;
  param_1[0x2a7] = (longlong)&PTR_FUN_14b137c00;
  param_1[0x2a8] = (longlong)&PTR_FUN_14b137c40;
  param_1[0x2a9] = (longlong)&PTR_FUN_14b137c70;
  param_1[0x2aa] = (longlong)&PTR_FUN_14b137c90;
  param_1[0x2ab] = (longlong)&PTR_FUN_14b137cd0;
  param_1[0x2ac] = (longlong)&PTR_FUN_14b137d20;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2ad] = 0;
  param_1[0x2ae] = 0;
  *(undefined4 *)(param_1 + 0x2b1) = 2;
  *(undefined8 *)((longlong)param_1 + 0x158c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x159c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15ac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x15b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15d4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x15dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x161c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x162c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1634) = 0;
  param_1[0x2c7] = 2;
  *(undefined2 *)(param_1 + 0x2c8) = 2;
  *(undefined1 *)((longlong)param_1 + 0x1642) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1644) = 0x442f000041000000;
  *(undefined8 *)((longlong)param_1 + 0x164c) = 0x3f00000042480000;
  *(undefined8 *)((longlong)param_1 + 0x1654) = 0x4248000043480000;
  *(undefined8 *)((longlong)param_1 + 0x165c) = 0x4248000043480000;
  *(undefined8 *)((longlong)param_1 + 0x1664) = 0x42b40000c2b40000;
  *(undefined1 *)((longlong)param_1 + 0x166c) = 0;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c4) = 0x4248000040400000;
  *(undefined4 *)((longlong)param_1 + 0x16cc) = 0x43160000;
  *(undefined2 *)(param_1 + 0x2da) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16d2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x16d4) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x2dc) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x16e4) = uVar1;
  *(undefined4 *)(param_1 + 0x2dd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x16ec) = uVar3;
  param_1[0x2de] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x2df) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170c) = 0x4020000040f00000;
  *(undefined1 *)((longlong)param_1 + 0x1714) = 1;
  *(undefined1 *)(param_1 + 0x2e6) = 0;
  *(undefined1 *)(param_1 + 0x2e7) = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0x200000000;
  *(undefined1 *)(param_1 + 0x2ec) = 0;
  param_1[0x2ed] = 0x4020000042480000;
  *(undefined1 *)(param_1 + 0x2ee) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1774) = 0x4248000043480000;
  *(undefined8 *)((longlong)param_1 + 0x177c) = 0x4248000043480000;
  *(undefined8 *)((longlong)param_1 + 0x1784) = 0x4248000042480000;
  *(undefined2 *)((longlong)param_1 + 0x178c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x178e) = 0;
  param_1[0x2f2] = 0x4248000042480000;
  *(undefined2 *)(param_1 + 0x2f3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x179c) = 0x40a0000040a00000;
  *(undefined4 *)((longlong)param_1 + 0x17a4) = 1;
  *(undefined1 *)(param_1 + 0x2f5) = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f9] = 0x43480000;
  *(undefined4 *)(param_1 + 0x2fa) = 0x43480000;
  *(undefined8 *)((longlong)param_1 + 0x17d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17f4) = 0;
  lVar6 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x2ff] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x300] = lVar6;
  param_1[0x301] = DAT_14c8464f0;
  param_1[0x302] = 0;
  param_1[0x303] = 0;
  param_1[0x304] = 0;
  param_1[0x305] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  *(undefined8 *)((longlong)param_1 + 0x183d) = 0;
  param_1[0x311] = 0;
  param_1[0x312] = 0;
  param_1[0x309] = 0;
  param_1[0x30a] = 0;
  param_1[0x30b] = 0;
  param_1[0x30c] = 0;
  *(undefined1 *)(param_1 + 0x30d) = 0;
  lVar6 = DAT_14c8463e8;
  param_1[0x318] = DAT_14c8463e0;
  param_1[0x319] = lVar6;
  lVar6 = DAT_14c8463d8;
  param_1[0x316] = DAT_14c8463d0;
  param_1[0x317] = lVar6;
  param_1[0x324] = 0;
  param_1[0x325] = 0;
  param_1[0x326] = 2;
  *(undefined2 *)(param_1 + 0x32a) = 0;
  *(undefined1 *)(param_1 + 0x32b) = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x196c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1974) = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  param_1[0x334] = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  param_1[0x337] = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19dd) = 0;
  param_1[0x342] = 0;
  *(undefined4 *)(param_1 + 0x343) = 0;
  param_1[0x33f] = 0;
  param_1[0x33d] = 0;
  param_1[0x33e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a1c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a24) = 0;
  param_1[0x346] = 0;
  *(undefined4 *)(param_1 + 0x347) = 0;
  param_1[0x34c] = 0;
  *(undefined4 *)(param_1 + 0x34d) = 0;
  param_1[0x348] = 0;
  param_1[0x349] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a74) = 0;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x351) = 0;
  param_1[0x352] = 0;
  param_1[0x353] = -0x100000000;
  param_1[0x358] = 0;
  *(undefined4 *)(param_1 + 0x359) = 0;
  param_1[0x354] = 0;
  param_1[0x355] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1acc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ad4) = 0;
  param_1[0x35c] = 0;
  *(undefined4 *)(param_1 + 0x35d) = 0;
  *(undefined1 *)(param_1 + 0x35e) = 0;
  *(undefined4 *)(param_1 + 0x363) = 0;
  param_1[0x368] = 0;
  param_1[0x369] = 0x200000000;
  param_1[0x36b] = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b64) = 0x20;
  *(undefined4 *)(param_1 + 0x36d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1b6c) = 0;
  param_1[0x36f] = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  param_1[0x375] = 0;
  param_1[0x376] = 0x200000000;
  param_1[0x378] = 0;
  *(undefined4 *)(param_1 + 0x379) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bcc) = 0x20;
  *(undefined4 *)(param_1 + 0x37a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1bd4) = 0;
  param_1[0x37c] = 0;
  *(undefined4 *)(param_1 + 0x37d) = 0;
  param_1[0x382] = 0;
  param_1[899] = 0x200000000;
  param_1[0x385] = 0;
  *(undefined4 *)(param_1 + 0x386) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c34) = 0x20;
  *(undefined4 *)(param_1 + 0x387) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c3c) = 0;
  param_1[0x389] = 0;
  *(undefined4 *)(param_1 + 0x38a) = 0;
  param_1[0x391] = 0;
  *(undefined4 *)(param_1 + 0x392) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c69) = 0;
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c94) = 2;
  *(undefined1 *)(param_1 + 0x393) = 0;
  param_1[0x396] = 0;
  param_1[0x397] = 0x200000000;
  param_1[0x398] = 0;
  param_1[0x399] = 0;
  param_1[0x39a] = 0;
  param_1[0x39b] = 0;
  *(undefined4 *)(param_1 + 0x39c) = 2;
  param_1[0x3a8] = 0;
  *(undefined4 *)(param_1 + 0x3a9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ce4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d1c) = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d54) = 0;
  param_1[0x3ac] = 0;
  *(undefined4 *)(param_1 + 0x3ad) = 0;
  param_1[0x3b3] = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  param_1[0x3af] = 0;
  param_1[0x3b0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1da4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1dac) = 0;
  param_1[0x3b7] = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined1 *)(param_1 + 0x3b9) = 0;
  param_1[0x3bc] = 0;
  param_1[0x3bd] = 0x200000000;
  *(undefined2 *)(param_1 + 0x3bf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dfa) = 0;
  param_1[0x3c0] = 0;
  param_1[0x3c1] = 0;
  param_1[0x3c2] = 0;
  *(undefined4 *)(param_1 + 0x3c3) = 2;
  param_1[0x3c8] = 0;
  *(undefined4 *)(param_1 + 0x3c9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e54) = 0;
  param_1[0x3cc] = 0;
  *(undefined4 *)(param_1 + 0x3cd) = 0;
  param_1[0x3df] = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined1 *)(param_1 + 0x3dc) = 0;
  param_1[0x3da] = 0;
  param_1[0x3db] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  param_1[0x3d6] = 0;
  param_1[0x3d7] = 0;
  param_1[0x3d4] = 0;
  param_1[0x3d5] = 0;
  param_1[0x3d2] = 0;
  param_1[0x3d3] = 0;
  param_1[0x3d0] = 0;
  param_1[0x3d1] = 0;
  param_1[0x3ce] = 0;
  param_1[0x3cf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f04) = 0xbf80000000000002;
  *(undefined2 *)((longlong)param_1 + 0x1f0c) = 0;
  param_1[0x504] = 0;
  *(undefined4 *)(param_1 + 0x505) = 0;
  param_1[0x3e2] = 0;
  param_1[0x3e3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x282c) = 0x20;
  *(undefined1 *)((longlong)param_1 + 0x2834) = 0;
  param_1[0x509] = 0;
  param_1[0x50a] = 0;
  param_1[0x507] = 0;
  param_1[0x508] = 0;
  *(undefined4 *)(param_1 + 0x50b) = 2;
  *(undefined4 *)((longlong)param_1 + 0x286c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x285c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2864) = 0;
  FUN_140f23ff6(param_1 + 0x50e);
  param_1[0x530] = 0;
  param_1[0x531] = 0;
  FUN_140f26b6e(param_1 + 0x532);
  param_1[0x56b] = 0;
  param_1[0x56c] = 0;
  param_1[0x56d] = 2;
  *(undefined1 *)(param_1 + 0x56e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b74) = 0;
  param_1[0x579] = 0;
  *(undefined4 *)(param_1 + 0x57a) = 0;
  param_1[0x570] = 0;
  param_1[0x571] = 0;
  param_1[0x572] = 0;
  param_1[0x573] = 0;
  param_1[0x574] = 0;
  param_1[0x575] = 0;
  param_1[0x576] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2bd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2bdc) = 0;
  param_1[0x57d] = 0;
  *(undefined4 *)(param_1 + 0x57e) = 0;
  param_1[0x57f] = 0;
  param_1[0x580] = 0;
  param_1[0x581] = 0;
  param_1[0x582] = 0;
  param_1[0x583] = 0;
  param_1[0x584] = 0;
  param_1[0x585] = 0;
  param_1[0x586] = DAT_14caa8578;
  param_1[0x587] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  *(undefined1 *)(param_1 + 0x127) = 1;
  FUN_1405ba932(param_1,1);
  lVar6 = FUN_1402020be(param_1);
  *(undefined1 *)(lVar6 + 0x84) = 2;
  if ((char)param_1[0x2f] == '\x03') {
    uVar4 = rand();
    fVar8 = (float)(uVar4 & 0x7fff) / 32767.0;
    *(bool *)(param_1 + 0x308) = 0 < (int)(fVar8 + fVar8);
  }
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    return param_1;
  }
  if (param_1 != (longlong *)0x0) {
    uVar5 = FUN_140f26902();
    lVar6 = (**(code **)(*param_1 + 0x288))(param_1,uVar5);
    if (lVar6 != 0) {
      uVar5 = FUN_140f26902();
      lVar7 = FUN_144718840(lVar6,uVar5);
      if (lVar6 != lVar7) goto LAB_1413fa654;
    }
  }
  lVar7 = 0;
LAB_1413fa654:
  FUN_140f269e8(param_1 + 0x532,lVar7);
  return param_1;
}



// FUNCTION 1413fa67a FUN_1413fa67a body=175 status=ok
// SIG undefined FUN_1413fa67a(void)

longlong FUN_1413fa67a(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x178);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x170);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar6 = FUN_14117daa2();
        if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
             lVar6 + 0x30)) && (((int)plVar3[0x11] == *param_3 && ((char)plVar3[0xb] == '\x03')))) {
          FUN_14112ded2(param_2,plVar3);
          uVar4 = 1;
          goto LAB_1413fa70c;
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  uVar4 = 0;
LAB_1413fa70c:
  *(undefined1 *)(param_2 + 0x1b8) = uVar4;
  return param_2;
}



// FUNCTION 1413fa72a FUN_1413fa72a body=328 status=ok
// SIG undefined FUN_1413fa72a(void)

undefined8 FUN_1413fa72a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_144a8232a(&DAT_14cb8dd48);
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar5) == *plVar2) {
        uVar6 = (int)(lVar5 >> 4) * -0x33333333;
        if (((-1 < (int)uVar6) && ((int)uVar6 < iVar1)) &&
           ((byte)(*(char *)(*(longlong *)(param_1 + 0x1f0) + 8 +
                            (ulonglong)(uVar6 & 0x7fffffff) * 0x50) - 1U) < 2)) {
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          local_30 = 0xffff;
          lVar5 = FUN_140b9fe48(param_1,param_3);
          if (lVar5 == 0) {
            puVar4 = &DAT_14c9485f0;
          }
          else {
            uVar3 = FUN_144a8232a(&DAT_14cb8dd48);
            puVar4 = (undefined4 *)FUN_1413fa874(lVar5,&local_48,uVar3);
          }
          FUN_1447a97f4(param_2,puVar4);
          goto LAB_1413fa823;
        }
        break;
      }
      lVar5 = lVar5 + 0x50;
    } while ((longlong)iVar1 * 0x50 != lVar5);
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,DAT_14cb8dc28);
  local_48 = DAT_14cb8dc20;
  FUN_1448075d0(param_2);
LAB_1413fa823:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1413fa874 FUN_1413fa874 body=138 status=ok
// SIG undefined FUN_1413fa874(void)

undefined4 * FUN_1413fa874(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (*param_3 != 0) {
    iVar1 = *(int *)(*param_2 + 0x1f8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(*param_2 + 0x1f0);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) == *param_3) {
          uVar3 = (int)(lVar4 >> 4) * -0x33333333;
          if ((int)uVar3 < 0) {
            return &DAT_14c9485f0;
          }
          if (iVar1 <= (int)uVar3) {
            return &DAT_14c9485f0;
          }
          if (1 < (byte)(*(char *)(lVar2 + 8 + (ulonglong)(uVar3 & 0x7fffffff) * 0x50) - 1U)) {
            return &DAT_14c9485f0;
          }
          return (undefined4 *)
                 (*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar3 & 0x7fffffff) * 0x70 + 0x10);
        }
        lVar4 = lVar4 + 0x50;
      } while ((longlong)iVar1 * 0x50 != lVar4);
    }
  }
  return &DAT_14c9485f0;
}



// FUNCTION 1413fa8fe FUN_1413fa8fe body=189 status=ok
// SIG undefined FUN_1413fa8fe(void)

void FUN_1413fa8fe(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  *(undefined4 *)(param_2 + 0x108) = 0;
  if (*(int *)(param_2 + 0x10c) < 0) {
    FUN_1487be670(param_2);
  }
  uVar6 = FUN_1464c1706();
  plVar7 = (longlong *)FUN_1403566f4(param_1,uVar6);
  lVar4 = plVar7[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *plVar7;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar9);
      uVar6 = FUN_1464c1706();
      if ((lVar3 != 0) && (cVar5 = FUN_1448093f4(lVar3,uVar6), cVar5 != '\0')) {
        iVar1 = *(int *)(param_2 + 0x108);
        *(uint *)(param_2 + 0x108) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x10c) < iVar1 + 1U) {
          FUN_1487be758(param_2,iVar1);
        }
        lVar8 = *(longlong *)(param_2 + 0x100);
        if (*(longlong *)(param_2 + 0x100) == 0) {
          lVar8 = param_2;
        }
        *(longlong *)(lVar8 + (longlong)iVar1 * 8) = lVar3;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar9);
  }
  return;
}



// FUNCTION 1413fa9ec FUN_1413fa9ec body=1 status=ok
// SIG undefined FUN_1413fa9ec(void)

void FUN_1413fa9ec(void)

{
  return;
}



// FUNCTION 1413fa9ee FUN_1413fa9ee body=119 status=ok
// SIG undefined FUN_1413fa9ee(void)

undefined8 * FUN_1413fa9ee(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400841f8();
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a9f0310;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  FUN_1400b22c2(local_28,"Networking");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413faa66 FUN_1413faa66 body=924 status=ok
// SIG undefined FUN_1413faa66(void)

void FUN_1413faa66(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_28);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_28 = *(undefined8 *)(pbVar3 + 1);
        pbVar3 = pbVar3 + 9;
        *(byte **)(param_2 + 0x20) = pbVar3;
        goto LAB_1413fab2d;
      }
      (*pcVar2)(uVar1,param_2,&local_28);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
LAB_1413fab2d:
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38[0] = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_38);
    }
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x3f800000;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
  puVar4 = local_38;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  puVar5 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1413fae04(local_28,puVar4,puVar5);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413fae04 FUN_1413fae04 body=175 status=ok
// SIG undefined FUN_1413fae04(void)

void FUN_1413fae04(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  }
  FUN_141222b64(&local_38,uVar2);
  if (local_38 != 0) {
    local_48 = param_3;
    FUN_14122315c(local_38,param_1,0,param_2);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413faec8 FUN_1413faec8 body=277 status=ok
// SIG undefined FUN_1413faec8(void)

undefined8 FUN_1413faec8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1413fafd7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1413fafd7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1413fafd7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1413faf85;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1413faf85;
    }
  }
  uVar6 = 0;
LAB_1413faf85:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413fafde FUN_1413fafde body=357 status=ok
// SIG undefined FUN_1413fafde(void)

void FUN_1413fafde(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
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
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar3 = FUN_1400d7050(plVar1);
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar3 = *(longlong *)(lVar3 + 0xa08), lVar3 != 0)) {
      cVar2 = FUN_1413fb158(param_1 + 0x70,lVar3);
      if (cVar2 == '\0') {
        FUN_14485c47a(param_1 + 0x70,lVar3);
        FUN_1413fb256(plVar1);
        (**(code **)(*plVar1 + 0x20))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413fb158 FUN_1413fb158 body=252 status=ok
// SIG undefined FUN_1413fb158(void)

ulonglong FUN_1413fb158(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar4 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = uVar6;
      }
    }
  }
  local_24 = uVar4;
  if ((*param_1 != local_28) ||
     (uVar3 = CONCAT71((uint7)(uint3)(*param_1 >> 8),1), param_1[1] != uVar4)) {
    cVar2 = FUN_144729dda(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_144729dda(&local_28);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1413fb256 FUN_1413fb256 body=493 status=ok
// SIG undefined FUN_1413fb256(void)

void FUN_1413fb256(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar6 = FUN_1400d7050();
  if (lVar6 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar6 = FUN_140e06fb1(lVar6);
      if (lVar6 != 0) {
        FUN_140457ffc(lVar6 + 0x18,plVar1);
        FUN_140457ffc(lVar6 + 0x48,plVar1);
        FUN_140457ffc(lVar6 + 0x78,plVar1);
      }
    }
  }
  lVar6 = FUN_140495e96(param_1);
  if (lVar6 != 0) {
    lVar6 = FUN_1403ca91c(lVar6);
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0x80);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(lVar6 + 0x78);
        lVar8 = 0;
        do {
          if ((*(int *)(lVar3 + 8 + lVar8) != 0) &&
             (plVar4 = *(longlong **)(lVar3 + lVar8), plVar4 != (longlong *)0x0)) {
            cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar1);
            if (cVar5 != '\0') goto LAB_1413fb353;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar8);
      }
      FUN_140457ffc(lVar6 + 0x78,plVar1);
    }
  }
LAB_1413fb353:
  uVar7 = (**(code **)(*plVar1 + 0x180))(plVar1);
  lVar6 = FUN_1411db1ae(uVar7);
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413fb45e FUN_1413fb45e body=655 status=ok
// SIG undefined FUN_1413fb45e(void)

void FUN_1413fb45e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
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
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar6 = FUN_140495e96();
  if (lVar6 != 0) {
    lVar6 = FUN_1403ca91c(lVar6);
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0x80);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(lVar6 + 0x78);
        lVar8 = 0;
        do {
          if ((*(int *)(lVar3 + 8 + lVar8) != 0) &&
             (plVar4 = *(longlong **)(lVar3 + lVar8), plVar4 != (longlong *)0x0)) {
            cVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar1);
            if (cVar5 != '\0') goto LAB_1413fb50e;
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar8);
      }
      local_58 = FUN_1413fafde;
      local_50 = 0;
      FUN_1466405ca(lVar6 + 0x78,local_48,plVar1);
    }
  }
LAB_1413fb50e:
  lVar6 = FUN_1400d7050(param_1);
  if (lVar6 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar6 = FUN_140e06fb1(lVar6);
      if (lVar6 != 0) {
        local_58 = FUN_1410ad684;
        local_50 = 0;
        FUN_1466406ca(lVar6 + 0x18,local_48,plVar1,&local_58);
        local_58 = FUN_1415b5554;
        local_50 = 0;
        FUN_1466407ca(lVar6 + 0x48,local_48,plVar1,&local_58);
        local_58 = FUN_14427317c;
        local_50 = 0;
        FUN_14598d316(lVar6 + 0x78,local_48,plVar1,&local_58);
      }
    }
  }
  uVar7 = (**(code **)(*plVar1 + 0x180))(plVar1);
  lVar6 = FUN_1411db1ae(uVar7);
  if (lVar6 != 0) {
    local_58 = (code *)&LAB_148e3a85e;
    local_50 = 0;
    FUN_1466408ca(lVar6 + 8,local_48,plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413fb6ee FUN_1413fb6ee body=96 status=ok
// SIG undefined FUN_1413fb6ee(void)

ulonglong FUN_1413fb6ee(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1413fb731:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1413fb731;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 1413fc344 FUN_1413fc344 body=2584 status=ok
// SIG undefined FUN_1413fc344(void)

void FUN_1413fc344(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  char cVar15;
  bool bVar16;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  uint local_a0;
  int local_9c;
  undefined8 local_98;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0 &&
       (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x14))))) &&
     ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
    if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
      lVar10 = *param_2;
      lVar5 = param_1 + 0xb0;
      lVar4 = *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        lVar4 = lVar5;
      }
      iVar14 = *(int *)(lVar4 + (ulonglong)
                                (*(int *)(param_1 + 0xc0) - 1U &
                                (int)lVar10 + (int)((ulonglong)lVar10 >> 0x20) * 0x17) * 4);
      if (iVar14 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x78);
        iVar12 = iVar14;
        do {
          if (*(longlong *)(lVar4 + (longlong)iVar12 * 0x180) == lVar10) {
            if (((param_3 == 0) || (*(char *)(param_3 + 0x60) != '\x01')) ||
               ((*(byte *)(param_3 + 0x40) & 2) == 0)) goto LAB_1413fc4cc;
            goto LAB_1413fc5b3;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x180 + lVar4 + 0x170);
        } while (iVar12 != -1);
      }
    }
    if (((param_3 != 0) && (*(char *)(param_3 + 0x60) == '\x01')) &&
       ((*(byte *)(param_3 + 0x40) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(DAT_14c707940 ^ (ulonglong)auStack_d8 ^ (ulonglong)auStack_d8);
    }
  }
  goto LAB_1413fc3be;
  while (iVar14 = *(int *)(lVar6 + 0x170), iVar14 != -1) {
LAB_1413fc4cc:
    lVar6 = lVar4 + (longlong)iVar14 * 0x180;
    if (*(longlong *)(lVar4 + (longlong)iVar14 * 0x180) == lVar10) goto LAB_1413fc4f0;
  }
  lVar6 = 0;
LAB_1413fc4f0:
  FUN_140e8ddc0(param_1,lVar6 + 0x10,2);
  if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0xac)) {
LAB_1413fc649:
    if (DAT_000000bc == '\0') goto LAB_1413fc3be;
  }
  else {
    lVar10 = *param_2;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
    }
    iVar14 = *(int *)(lVar5 + (ulonglong)
                              (*(int *)(param_1 + 0xc0) - 1U &
                              (int)lVar10 + (int)((ulonglong)lVar10 >> 0x20) * 0x17) * 4);
    if (iVar14 == -1) goto LAB_1413fc649;
    lVar5 = *(longlong *)(param_1 + 0x78);
    iVar12 = iVar14;
    do {
      lVar4 = lVar5 + (longlong)iVar12 * 0x180;
      if (*(longlong *)(lVar5 + (longlong)iVar12 * 0x180) == lVar10) goto LAB_1413fc57c;
      iVar12 = *(int *)(lVar4 + 0x170);
    } while (iVar12 != -1);
    lVar4 = 0;
LAB_1413fc57c:
    if (*(char *)(lVar4 + 0xbc) != '\x01') goto LAB_1413fc3be;
    do {
      lVar4 = lVar5 + (longlong)iVar14 * 0x180;
      if (*(longlong *)(lVar5 + (longlong)iVar14 * 0x180) == lVar10) goto LAB_1413fc659;
      iVar14 = *(int *)(lVar4 + 0x170);
    } while (iVar14 != -1);
  }
  lVar4 = 0;
LAB_1413fc659:
  *(undefined1 *)(lVar4 + 0xbc) = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1413fcc7c:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x14) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1413fcc7c;
      lVar5 = *plVar7;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  local_a8 = *param_2;
  local_9c = 0;
  if (param_3 == 0) {
    local_a0 = 0;
    iVar14 = 0;
  }
  else {
    local_a0 = *(uint *)(param_3 + 0xc);
    if ((int)local_a0 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_a0 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a0 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar14 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar14 = *(int *)(lVar10 + 0x10);
      bVar16 = iVar14 == 0;
      if (bVar16) {
        *(int *)(lVar10 + 0x10) = iVar12;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar14 = iVar12;
      }
    }
  }
  lVar5 = lVar5 + 0x450;
  local_9c = iVar14;
  local_98 = uVar9;
  goto LAB_1413fcc54;
  while (iVar14 = *(int *)(lVar6 + 0x170), iVar14 != -1) {
LAB_1413fc5b3:
    lVar6 = lVar4 + (longlong)iVar14 * 0x180;
    if (*(longlong *)(lVar4 + (longlong)iVar14 * 0x180) == lVar10) goto LAB_1413fc5d9;
  }
  lVar6 = 0;
LAB_1413fc5d9:
  iVar14 = *(int *)(lVar6 + 0x1c);
  if (iVar14 == 0) {
LAB_1413fc837:
    lVar10 = 0;
    cVar11 = '\0';
    cVar15 = '\0';
    iVar12 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 0x18);
    lVar10 = 0;
    if ((int)uVar1 < 0) goto LAB_1413fc837;
    cVar11 = '\0';
    cVar15 = '\0';
    iVar12 = 0;
    if ((int)uVar1 < DAT_14c9647dc) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar14)) ||
         ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
LAB_1413fc641:
        lVar10 = 0;
      }
      else {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar10 = *plVar7;
        }
        else {
          lVar10 = 0;
        }
        if (*(char *)(lVar10 + 0x60) != '\x01') goto LAB_1413fc641;
        lVar10 = *(longlong *)(lVar10 + 0x50);
      }
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar14)) ||
         ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
LAB_1413fc794:
        cVar11 = '\0';
      }
      else {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar7;
        }
        else {
          lVar4 = 0;
        }
        if (*(char *)(lVar4 + 0x60) != '\x01') goto LAB_1413fc794;
        cVar11 = *(char *)(lVar4 + 0x58);
      }
      iVar12 = 0;
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar14)) ||
         ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
LAB_1413fc7e5:
        cVar15 = '\0';
      }
      else {
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar7;
        }
        else {
          lVar4 = 0;
        }
        if (*(char *)(lVar4 + 0x60) != '\x01') goto LAB_1413fc7e5;
        cVar15 = *(char *)(lVar4 + 0x59);
      }
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == iVar14)) &&
         ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
        iVar12 = 0;
        if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar7;
        }
        else {
          lVar4 = 0;
        }
        if (*(char *)(lVar4 + 0x60) == '\x01') {
          iVar12 = *(int *)(lVar4 + 0x44);
        }
      }
    }
  }
  local_b0 = lVar6 + 0x10;
  if (((lVar10 != *(longlong *)(lVar6 + 0x20)) || (cVar11 != *(char *)(lVar6 + 0x92))) ||
     (cVar15 != *(char *)(lVar6 + 0x93))) {
    if (((*(int *)(lVar6 + 0xf0) != 0) && (uVar1 = *(uint *)(lVar6 + 0xec), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        (((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0 &&
          (*(int *)(lVar4 + 0x10) == *(int *)(lVar6 + 0xf0))) &&
         ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
      FUN_1413ed2ca(local_b0);
    }
    *(longlong *)(lVar6 + 0x20) = lVar10;
    *(char *)(lVar6 + 0x92) = cVar11;
    *(char *)(lVar6 + 0x93) = cVar15;
    if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
      lVar10 = *param_2;
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xb8);
      }
      iVar14 = *(int *)(lVar5 + (ulonglong)
                                (*(int *)(param_1 + 0xc0) - 1U &
                                (int)lVar10 + (int)((ulonglong)lVar10 >> 0x20) * 0x17) * 4);
      if (iVar14 != -1) {
        do {
          lVar5 = *(longlong *)(param_1 + 0x78) + (longlong)iVar14 * 0x180;
          if (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar14 * 0x180) == lVar10)
          goto LAB_1413fc937;
          iVar14 = *(int *)(lVar5 + 0x170);
        } while (iVar14 != -1);
      }
    }
    lVar5 = 0;
LAB_1413fc937:
    FUN_140e8ddc0(param_1,lVar5 + 0x10,1);
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_1413fccb4:
      lVar5 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x10);
      lVar5 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           (((int)plVar7[2] != *(int *)(param_1 + 0x14) ||
            ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_1413fccb4;
        lVar5 = *plVar7;
      }
    }
    FUN_1414c8d40(param_1,local_b0,*(undefined4 *)(lVar5 + 0x410));
  }
  if (iVar12 != *(int *)(lVar6 + 0xb8)) {
    FUN_148d710be(local_b0);
  }
  if (((((*(int *)(lVar6 + 0x1c) == 0) || (uVar1 = *(uint *)(lVar6 + 0x18), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((puVar8 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar8 == (undefined8 *)0x0 || (*(int *)(puVar8 + 2) != *(int *)(lVar6 + 0x1c))))) ||
     ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) {
    plVar7 = &DAT_14c846480;
    plVar13 = &local_a8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar13 = *plVar7;
      plVar7 = plVar7 + 1;
      plVar13 = plVar13 + 1;
    }
  }
  else {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    (**(code **)(*plVar7 + 0x2b0))(plVar7,&local_a8);
  }
  plVar7 = &local_a8;
  plVar13 = (longlong *)(lVar6 + 0x30);
  for (lVar5 = 0xc; dVar3 = DAT_14c846520, dVar2 = DAT_14c846518, lVar5 != 0; lVar5 = lVar5 + -1) {
    *plVar13 = *plVar7;
    plVar7 = plVar7 + 1;
    plVar13 = plVar13 + 1;
  }
  if (((9.999999747378752e-05 < ABS(*(double *)(lVar6 + 0x70) - DAT_14c846510)) ||
      (9.999999747378752e-05 < ABS(*(double *)(lVar6 + 0x78) - DAT_14c846518))) ||
     (9.999999747378752e-05 < ABS(*(double *)(lVar6 + 0x80) - DAT_14c846520))) {
    *(double *)(lVar6 + 0x70) = DAT_14c846510;
    *(double *)(lVar6 + 0x78) = dVar2;
    *(double *)(lVar6 + 0x80) = dVar3;
    *(undefined8 *)(lVar6 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1413fcca6:
    uVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar9 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1413fcca6;
      uVar9 = *puVar8;
    }
  }
  FUN_1413d3b4c(local_b0,uVar9);
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1413fccad:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x14) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1413fccad;
      lVar5 = *plVar7;
    }
  }
  if ((((*(int *)(lVar6 + 0x1c) == 0) || (uVar1 = *(uint *)(lVar6 + 0x18), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(lVar6 + 0x1c))) ||
      ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    local_a8 = *param_2;
LAB_1413fcc9a:
    local_a0 = 0;
    iVar14 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    local_a8 = *param_2;
    local_9c = 0;
    if (*plVar7 == 0) goto LAB_1413fcc9a;
    local_a0 = *(uint *)(*plVar7 + 0xc);
    if ((int)local_a0 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_a0 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a0 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar14 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar14 = *(int *)(lVar10 + 0x10);
      bVar16 = iVar14 == 0;
      if (bVar16) {
        *(int *)(lVar10 + 0x10) = iVar12;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar14 = iVar12;
      }
    }
  }
  lVar5 = lVar5 + 0x468;
  local_9c = iVar14;
  local_98 = uVar9;
LAB_1413fcc54:
  FUN_14419d86a(lVar5);
LAB_1413fc3be:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413fcd7e FUN_1413fcd7e body=525 status=ok
// SIG undefined FUN_1413fcd7e(void)

undefined8 FUN_1413fcd7e(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  byte bVar8;
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
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    uVar6 = 0;
    goto LAB_1413fce1f;
  }
  lVar3 = FUN_1447262c2(param_3);
  if (lVar3 == 0) {
LAB_1413fcdee:
    lVar3 = FUN_140cd1640(param_3);
    if ((lVar3 == 0) || (lVar3 = FUN_14494e0ba(lVar3), lVar3 == 0)) {
LAB_1413fcdff:
      lVar3 = 0;
    }
    else {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_1413fcdff;
    }
    lVar4 = FUN_140cd1532(param_3);
    if (lVar4 == 0) {
      lVar4 = param_3;
      if (lVar3 != 0) goto LAB_1413fcf68;
    }
    else {
      lVar3 = FUN_1401b2ade(lVar4);
      if (lVar3 != 0) {
        lVar5 = FUN_144a5dd5e();
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (lVar4 = *(longlong *)(lVar4 + 0x30),
           *(longlong *)(lVar4 + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30))
        goto LAB_1413fcf68;
      }
    }
LAB_1413fce1b:
    bVar8 = (byte)lVar4;
    bVar2 = 0;
    uVar7 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30),
       *(longlong *)(lVar4 + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
    goto LAB_1413fcdee;
LAB_1413fcf68:
    if (*(char *)(lVar3 + 0x178) != '\x03') goto LAB_1413fce1b;
    uVar6 = FUN_145971fb0(lVar3,(char)param_1[1],param_4);
    bVar8 = (byte)uVar6;
    uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
    bVar2 = 1;
  }
  uVar6 = CONCAT71(uVar7,bVar2 & bVar8);
LAB_1413fce1f:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1413fcf94 FUN_1413fcf94 body=4345 status=ok
// SIG undefined FUN_1413fcf94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413fcf94(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  byte bVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  undefined1 auStack_d8 [46];
  undefined2 local_aa;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar9 = DAT_14cab5c68;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar13 = *(longlong *)(param_1 + 0x28);
  uVar7 = *(uint *)(lVar13 + 0x520);
  lVar14 = *(longlong *)(lVar13 + 0x518);
  uVar20 = 0;
  if (0 < (int)uVar7) {
    uVar20 = 0;
    uVar27 = (ulonglong)uVar7;
    do {
      uVar28 = (int)(uVar27 >> 1) + (int)uVar20;
      uVar26 = (uint)uVar27;
      if (*(uint *)(lVar14 + (ulonglong)uVar28 * 0x18) < DAT_14cab5c68) {
        uVar20 = (ulonglong)(uVar28 + (uVar26 & 1));
      }
      uVar27 = uVar27 >> 1;
    } while (1 < uVar26);
  }
  local_a8 = param_1;
  if (((int)uVar20 < (int)uVar7) && (*(uint *)(lVar14 + uVar20 * 0x18) <= DAT_14cab5c68)) {
    lVar14 = lVar14 + uVar20 * 0x18;
    plVar15 = (longlong *)(lVar14 + 8);
    if (plVar15 == (longlong *)0x0) goto LAB_1413fcff4;
    plVar15 = (longlong *)*plVar15;
    plVar25 = *(longlong **)(lVar14 + 0x10);
    if (plVar25 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      UNLOCK();
      LOCK();
      plVar23 = plVar25 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar25)(plVar25);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    if (plVar15 == (longlong *)0x0) goto LAB_1413fcff6;
  }
  else {
LAB_1413fcff4:
    plVar25 = (longlong *)0x0;
LAB_1413fcff6:
    plVar12 = (longlong *)FUN_14001cc68(0xe8);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14a4d7930;
    memset(plVar12 + 3,0,0xc0);
    *(undefined8 *)((longlong)plVar12 + 0x54) = 0xffffffff00000080;
    plVar12[0xf] = 0;
    plVar12[0x10] = 0;
    *(undefined8 *)((longlong)plVar12 + 0xa4) = 0xffffffff00000080;
    *(undefined8 *)((longlong)plVar12 + 0xac) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xb4) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xbc) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xc4) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xcc) = 0xffffffff00000000;
    plVar12[0x1b] = 0;
    plVar12[0x1c] = 0;
    plVar15 = plVar12 + 2;
    *plVar15 = (longlong)&PTR_FUN_14a4d7950;
    plVar23 = plVar12;
    if (plVar15 == (longlong *)0x0) {
LAB_1413fddaf:
      bVar8 = true;
      if (plVar25 == (longlong *)0x0) {
        plVar23 = (longlong *)0x0;
      }
      else {
LAB_1413fde1e:
        LOCK();
        plVar24 = plVar25 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
        }
        if (!bVar8) goto LAB_1413fd0fc;
      }
    }
    else {
      if (plVar12 == (longlong *)0x0) {
        _DAT_00000018 = 0x10;
        plVar24 = (longlong *)&DAT_00000020;
        plVar18 = _DAT_00000020;
        if (_DAT_00000020 != (longlong *)0x0) {
LAB_1413fdd97:
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))();
          }
          *plVar24 = (longlong)plVar12;
          if (plVar12 != (longlong *)0x0) goto LAB_1413fd0cb;
        }
        goto LAB_1413fddaf;
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      plVar12[3] = (longlong)plVar15;
      if ((longlong *)plVar12[4] != plVar12) {
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar12[4] != (longlong *)0x0) {
          plVar24 = plVar12 + 4;
          plVar18 = (longlong *)plVar12[4];
          goto LAB_1413fdd97;
        }
        plVar12[4] = (longlong)plVar12;
      }
LAB_1413fd0cb:
      LOCK();
      plVar24 = plVar12 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      if (plVar12 != plVar25) {
        if (plVar25 == (longlong *)0x0) goto LAB_1413fd0fc;
        bVar8 = false;
        goto LAB_1413fde1e;
      }
      LOCK();
      plVar24 = plVar12 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      plVar23 = plVar25;
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
LAB_1413fd0fc:
      LOCK();
      plVar25 = plVar12 + 1;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)*plVar25 == 0) {
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
    (**(code **)(plVar12[2] + 0x10))(plVar15,uVar9,lVar13 + 0x430);
    if (plVar23 == (longlong *)0x0) {
      uStack_68 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
      UNLOCK();
      uStack_68 = plVar23;
    }
    local_80 = uVar9;
    local_70 = plVar15;
    FUN_140dd6482(lVar13 + 0x518,&local_80,&local_70);
    plVar25 = uStack_68;
    if (uStack_68 != (longlong *)0x0) {
      LOCK();
      plVar12 = uStack_68 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*uStack_68)(uStack_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    param_1 = local_a8;
    plVar25 = plVar23;
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar23 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
  }
  if (plVar25 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x48) = plVar15;
    plVar15 = *(longlong **)(param_1 + 0x50);
    lVar14 = local_a8;
    if (plVar15 != (longlong *)0x0) {
      *(undefined8 *)(local_a8 + 0x50) = 0;
LAB_1413fdc6f:
      LOCK();
      plVar23 = plVar15 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      lVar14 = local_a8;
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar14 = local_a8;
        if (*piVar1 == 0) {
LAB_1413fdc90:
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      if (plVar25 != (longlong *)0x0) goto LAB_1413fd1a6;
    }
  }
  else {
    LOCK();
    *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x48) = plVar15;
    plVar15 = *(longlong **)(param_1 + 0x50);
    lVar14 = param_1;
    if (plVar25 == plVar15) {
      LOCK();
      plVar15 = plVar25 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar25)(plVar25);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar15 = plVar25;
        if (*piVar1 == 0) goto LAB_1413fdc90;
      }
    }
    else {
      *(longlong **)(param_1 + 0x50) = plVar25;
      if (plVar15 != (longlong *)0x0) goto LAB_1413fdc6f;
    }
LAB_1413fd1a6:
    LOCK();
    plVar15 = plVar25 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar25)(plVar25);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      lVar14 = local_a8;
      if (*piVar1 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
        lVar14 = local_a8;
      }
    }
  }
  uVar9 = DAT_14cab5c6c;
  local_88 = param_1 + 0x48;
  lVar22 = *(longlong *)(lVar14 + 0x28);
  uVar7 = *(uint *)(lVar22 + 0x520);
  lVar13 = *(longlong *)(lVar22 + 0x518);
  uVar20 = 0;
  if (0 < (int)uVar7) {
    uVar27 = (ulonglong)uVar7;
    do {
      uVar28 = (int)(uVar27 >> 1) + (int)uVar20;
      uVar26 = (uint)uVar27;
      if (*(uint *)(lVar13 + (ulonglong)uVar28 * 0x18) < DAT_14cab5c6c) {
        uVar20 = (ulonglong)(uVar28 + (uVar26 & 1));
      }
      uVar27 = uVar27 >> 1;
    } while (1 < uVar26);
  }
  if (((int)uVar20 < (int)uVar7) && (*(uint *)(lVar13 + uVar20 * 0x18) <= DAT_14cab5c6c)) {
    lVar13 = lVar13 + uVar20 * 0x18;
    plVar15 = (longlong *)(lVar13 + 8);
    if (plVar15 == (longlong *)0x0) goto LAB_1413fd206;
    plVar15 = (longlong *)*plVar15;
    plVar25 = *(longlong **)(lVar13 + 0x10);
    if (plVar25 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      UNLOCK();
      LOCK();
      plVar23 = plVar25 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar25)(plVar25);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    if (plVar15 == (longlong *)0x0) goto LAB_1413fd208;
  }
  else {
LAB_1413fd206:
    plVar25 = (longlong *)0x0;
LAB_1413fd208:
    plVar12 = (longlong *)FUN_14001cc68(0xe8);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14a4d79f0;
    memset(plVar12 + 3,0,0xc0);
    *(undefined8 *)((longlong)plVar12 + 0x54) = 0xffffffff00000080;
    plVar12[0xf] = 0;
    plVar12[0x10] = 0;
    *(undefined8 *)((longlong)plVar12 + 0xa4) = 0xffffffff00000080;
    *(undefined8 *)((longlong)plVar12 + 0xac) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xb4) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xbc) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xc4) = 0;
    *(undefined8 *)((longlong)plVar12 + 0xcc) = 0xffffffff00000000;
    plVar12[0x1b] = 0;
    plVar12[0x1c] = 0;
    plVar15 = plVar12 + 2;
    *plVar15 = (longlong)&PTR_FUN_14a4d7a10;
    plVar23 = plVar12;
    if (plVar15 == (longlong *)0x0) {
LAB_1413fdf1c:
      bVar8 = true;
      if (plVar25 == (longlong *)0x0) {
        plVar23 = (longlong *)0x0;
      }
      else {
LAB_1413fdf7d:
        LOCK();
        plVar24 = plVar25 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
          }
        }
        if (!bVar8) goto LAB_1413fd304;
      }
    }
    else {
      if (plVar12 == (longlong *)0x0) {
        _DAT_00000018 = 0x10;
        plVar24 = (longlong *)&DAT_00000020;
        plVar18 = _DAT_00000020;
        if (_DAT_00000020 != (longlong *)0x0) {
LAB_1413fdf04:
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))();
          }
          *plVar24 = (longlong)plVar12;
          if (plVar12 != (longlong *)0x0) goto LAB_1413fd2dd;
        }
        goto LAB_1413fdf1c;
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      plVar12[3] = (longlong)plVar15;
      if ((longlong *)plVar12[4] != plVar12) {
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar12[4] != (longlong *)0x0) {
          plVar24 = plVar12 + 4;
          plVar18 = (longlong *)plVar12[4];
          goto LAB_1413fdf04;
        }
        plVar12[4] = (longlong)plVar12;
      }
LAB_1413fd2dd:
      LOCK();
      plVar24 = plVar12 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      if (plVar12 != plVar25) {
        if (plVar25 == (longlong *)0x0) goto LAB_1413fd304;
        bVar8 = false;
        goto LAB_1413fdf7d;
      }
      LOCK();
      plVar24 = plVar12 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      plVar23 = plVar25;
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
LAB_1413fd304:
      LOCK();
      plVar25 = plVar12 + 1;
      *(int *)plVar25 = (int)*plVar25 + -1;
      UNLOCK();
      if ((int)*plVar25 == 0) {
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
    (**(code **)(plVar12[2] + 0x10))(plVar15,uVar9,lVar22 + 0x430);
    if (plVar23 == (longlong *)0x0) {
      uStack_68 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
      UNLOCK();
      uStack_68 = plVar23;
    }
    local_80 = uVar9;
    local_70 = plVar15;
    FUN_140dd6482(lVar22 + 0x518,&local_80,&local_70);
    plVar25 = uStack_68;
    if (uStack_68 != (longlong *)0x0) {
      LOCK();
      plVar12 = uStack_68 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*uStack_68)(uStack_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    lVar14 = local_a8;
    plVar25 = plVar23;
    if (plVar23 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar23 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar1 = (int *)((longlong)plVar23 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
    }
  }
  if (plVar25 == (longlong *)0x0) {
    *(longlong **)(lVar14 + 0x58) = plVar15;
    plVar15 = *(longlong **)(lVar14 + 0x60);
    if (plVar15 == (longlong *)0x0) goto LAB_1413fd3b4;
    *(undefined8 *)(lVar14 + 0x60) = 0;
LAB_1413fdcd8:
    LOCK();
    plVar23 = plVar15 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
LAB_1413fdcec:
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    if (plVar25 == (longlong *)0x0) goto LAB_1413fd3b4;
  }
  else {
    LOCK();
    *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
    UNLOCK();
    *(longlong **)(lVar14 + 0x58) = plVar15;
    plVar15 = *(longlong **)(lVar14 + 0x60);
    if (plVar25 == plVar15) {
      LOCK();
      plVar15 = plVar25 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar25)(plVar25);
        LOCK();
        piVar1 = (int *)((longlong)plVar25 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar15 = plVar25;
        if (*piVar1 == 0) goto LAB_1413fdcec;
      }
    }
    else {
      *(longlong **)(lVar14 + 0x60) = plVar25;
      if (plVar15 != (longlong *)0x0) goto LAB_1413fdcd8;
    }
  }
  LOCK();
  plVar15 = plVar25 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar25)(plVar25);
    LOCK();
    piVar1 = (int *)((longlong)plVar25 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
LAB_1413fd3b4:
  lVar13 = FUN_14038fb82();
  uVar5 = *(undefined2 *)(lVar13 + 0xe6);
  lVar13 = FUN_14009d2a0();
  uVar6 = *(ushort *)(lVar13 + 0x4a);
  lVar14 = *(longlong *)(lVar14 + 0x28);
  local_a8 = FUN_14009d2a0();
  local_90 = FUN_14038fb82();
  local_98 = lVar14;
  lVar14 = FUN_1409ee0ec(lVar14);
  FUN_1409ee236(lVar14 + 0xb0);
  plVar15 = uStack_68;
  memset(uStack_68,0,0x128);
  *(undefined1 *)(plVar15 + 0x20) = 2;
  plVar15[0x25] = 0x10000000000;
  local_a0 = (longlong)(int)local_70;
  lVar13 = *(longlong *)(lVar14 + 0xb0);
  lVar22 = local_a0 * 0x130;
  lVar14 = lVar13 + lVar22;
  FUN_1409ee0a6(lVar14);
  pbVar4 = (byte *)(lVar13 + 0x100 + lVar22);
  *pbVar4 = *pbVar4 | 3;
  *(undefined8 *)(lVar13 + 0x28 + lVar22) = 0;
  *(undefined4 *)(lVar13 + 0x30 + lVar22) = 0;
  puVar3 = (undefined8 *)(lVar13 + 8 + lVar22);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar13 + 0x34 + lVar22) = 0xffffffff00000080;
  *(undefined4 *)(lVar13 + 0x3c + lVar22) = 0;
  *(undefined8 *)(lVar13 + 0x48 + lVar22) = 0;
  *(undefined4 *)(lVar13 + 0x50 + lVar22) = 0;
  *(undefined8 *)(lVar13 + 0x68 + lVar22) = 0;
  *(undefined8 *)(lVar13 + 0x70 + lVar22) = 0x8000000000;
  *(ushort *)(lVar13 + 0x7a + lVar22) = uVar6;
  *(undefined2 *)(lVar13 + 0x7c + lVar22) = uVar5;
  *(undefined ***)(lVar13 + lVar22) = &PTR_FUN_14a4d7a60;
  local_80 = CONCAT22(uVar5,(undefined2)local_80);
  local_50 = 0x10000000000;
  lVar13 = 2;
  uVar11 = uVar6;
  iVar30 = 0;
  local_aa = uVar5;
  do {
    iVar17 = uVar11 + 1;
    iVar21 = iVar17 - iVar30;
    if (iVar21 != 0 && iVar30 <= iVar17) {
      if (iVar30 == 0) {
LAB_1413fd506:
        if (local_50._4_4_ <= (int)(uint)uVar11) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,iVar30);
          iVar17 = (int)local_50 + iVar21;
        }
        iVar19 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar19 = iVar17;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar17);
        if (iVar17 % 0x20 != 0) {
          bVar16 = -(char)(iVar17 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar19 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar19 >> 5) * 4) << (bVar16 & 0x1f)
                     ) >> (bVar16 & 0x1f);
        }
      }
      else {
        iVar19 = iVar30 + 0x1e;
        if (-1 < iVar30 + -1) {
          iVar19 = iVar30 + -1;
        }
        if (iVar19 >> 5 != (uint)(uVar11 >> 5)) goto LAB_1413fd506;
        local_50 = CONCAT44(local_50._4_4_,iVar17);
      }
      FUN_1447c45ca(&local_70,iVar30,iVar21,0);
    }
    lVar22 = local_88;
    puVar2 = (uint *)((longlong)&local_70 + (ulonglong)(uVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
    if (lVar13 == 4) break;
    uVar11 = *(ushort *)((longlong)&local_80 + lVar13);
    lVar13 = lVar13 + 2;
    iVar30 = (int)local_50;
  } while( true );
  if ((undefined8 *)(lVar14 + 0x108) != &local_70) {
    *(undefined8 *)(lVar14 + 0x118) = local_60;
    *(undefined8 *)(lVar14 + 0x120) = uStack_58;
    *(int *)(lVar14 + 0x108) = (int)local_70;
    *(undefined4 *)(lVar14 + 0x10c) = local_70._4_4_;
    *(int *)(lVar14 + 0x110) = (int)uStack_68;
    *(undefined4 *)(lVar14 + 0x114) = uStack_68._4_4_;
    *(int *)(lVar14 + 0x128) = (int)local_50;
    *(int *)(lVar14 + 300) = local_50._4_4_;
  }
  *(int *)(local_88 + 0x20) = (int)local_a0;
  *(undefined4 *)(local_88 + 0x48) = 0;
  *(undefined4 *)(local_88 + 0x70) = 0;
  if (*(int *)(local_88 + 0x84) < 0) {
    *(undefined4 *)(local_88 + 0x80) = 0;
    FUN_1476644c4(local_88 + 0x78,0);
  }
  else {
    *(undefined4 *)(local_88 + 0x80) = 0;
  }
  plVar15 = local_70;
  uVar5 = local_aa;
  lVar14 = lVar22 + 0x28;
  local_70._0_4_ = CONCAT22(local_aa,uVar6);
  local_70._6_2_ = SUB82(plVar15,6);
  local_70._0_6_ = CONCAT24(*(undefined2 *)(local_a8 + 0xea),(int)local_70);
  lVar13 = 0;
  do {
    uVar11 = *(ushort *)((longlong)&local_70 + lVar13);
    iVar17 = uVar11 + 1;
    iVar30 = *(int *)(lVar22 + 0x48);
    iVar21 = iVar17 - iVar30;
    if (iVar21 != 0 && iVar30 <= iVar17) {
      if (iVar30 == 0) {
LAB_1413fd64d:
        if (*(int *)(lVar22 + 0x4c) <= (int)(uint)uVar11) {
          *(undefined4 *)(lVar22 + 0x4c) = 0x100;
          FUN_14497ddce(lVar14,iVar30);
          iVar17 = *(int *)(lVar22 + 0x48) + iVar21;
        }
        iVar19 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar19 = iVar17;
        }
        *(int *)(lVar22 + 0x48) = iVar17;
        if (iVar17 % 0x20 != 0) {
          bVar16 = -(char)(iVar17 % 0x20);
          *(uint *)(lVar14 + (longlong)(iVar19 >> 5) * 4) =
               (uint)(*(int *)(lVar14 + (longlong)(iVar19 >> 5) * 4) << (bVar16 & 0x1f)) >>
               (bVar16 & 0x1f);
        }
      }
      else {
        iVar19 = iVar30 + 0x1e;
        if (-1 < iVar30 + -1) {
          iVar19 = iVar30 + -1;
        }
        if (iVar19 >> 5 != (uint)(uVar11 >> 5)) goto LAB_1413fd64d;
        *(int *)(lVar22 + 0x48) = iVar17;
      }
      FUN_1447c45ca(lVar14,iVar30,iVar21,0);
    }
    puVar2 = (uint *)(lVar14 + (ulonglong)(uVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
    lVar13 = lVar13 + 2;
  } while (lVar13 != 6);
  *(undefined4 *)(lVar22 + 0xa8) = 0;
  *(undefined4 *)(lVar22 + 0xd0) = 0;
  if (*(int *)(lVar22 + 0xe4) < 0) {
    *(undefined4 *)(lVar22 + 0xe0) = 0;
    FUN_1476644c4(lVar22 + 0xd8,0);
  }
  else {
    *(undefined4 *)(lVar22 + 0xe0) = 0;
  }
  lVar14 = lVar22 + 0x88;
  local_70._0_4_ = CONCAT22(uVar5,uVar6);
  lVar13 = 0;
  do {
    uVar11 = *(ushort *)((longlong)&local_70 + lVar13);
    iVar17 = uVar11 + 1;
    iVar30 = *(int *)(lVar22 + 0xa8);
    iVar21 = iVar17 - iVar30;
    if (iVar21 != 0 && iVar30 <= iVar17) {
      if (iVar30 == 0) {
LAB_1413fd72b:
        if (*(int *)(lVar22 + 0xac) <= (int)(uint)uVar11) {
          *(undefined4 *)(lVar22 + 0xac) = 0x100;
          FUN_14497ddce(lVar14,iVar30);
          iVar17 = *(int *)(lVar22 + 0xa8) + iVar21;
        }
        iVar19 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar19 = iVar17;
        }
        *(int *)(lVar22 + 0xa8) = iVar17;
        if (iVar17 % 0x20 != 0) {
          bVar16 = -(char)(iVar17 % 0x20);
          *(uint *)(lVar14 + (longlong)(iVar19 >> 5) * 4) =
               (uint)(*(int *)(lVar14 + (longlong)(iVar19 >> 5) * 4) << (bVar16 & 0x1f)) >>
               (bVar16 & 0x1f);
        }
      }
      else {
        iVar19 = iVar30 + 0x1e;
        if (-1 < iVar30 + -1) {
          iVar19 = iVar30 + -1;
        }
        if (iVar19 >> 5 != (uint)(uVar11 >> 5)) goto LAB_1413fd72b;
        *(int *)(lVar22 + 0xa8) = iVar17;
      }
      FUN_1447c45ca(lVar14,iVar30,iVar21,0);
    }
    lVar10 = local_90;
    puVar2 = (uint *)(lVar14 + (ulonglong)(uVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
    lVar13 = lVar13 + 2;
  } while (lVar13 != 4);
  uStack_68 = (longlong *)local_74;
  local_80 = CONCAT22(*(undefined2 *)(local_90 + 0xf0),*(undefined2 *)(local_90 + 0xea));
  local_7c = *(undefined2 *)(local_90 + 0xee);
  local_7a = *(undefined2 *)(local_90 + 0xf4);
  local_78 = *(undefined2 *)(local_90 + 0xf6);
  local_76 = *(undefined2 *)(local_90 + 0xf8);
  local_70 = (longlong *)&local_80;
  FUN_1403b5126(lVar14,&local_70,2);
  lVar29 = local_98 + 0x640;
  local_70 = (undefined8 *)0x0;
  uStack_68 = (longlong *)((ulonglong)uStack_68 & 0xffffffff00000000);
  FUN_1446efa72(&local_70,0,3,0x10);
  uStack_68._0_4_ = 3;
  *local_70 = (longlong)&PTR_LAB_14a4d7af0;
  *(ushort *)(local_70 + 1) = uVar6;
  *(undefined2 *)((longlong)local_70 + 10) = uVar5;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_70[2] = lVar13;
  *local_70 = (longlong)&PTR_FUN_14a4d7a80;
  local_70[3] = lVar22;
  local_70[4] = (longlong)FUN_14094602e;
  FUN_1409960cc(lVar29,&local_80,&local_70);
  if ((int)uStack_68 == 0) {
LAB_1413fd8b5:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    uStack_68._0_4_ = 0;
    goto LAB_1413fd8b5;
  }
  puVar3 = local_70;
  lVar14 = lVar22 + 0xe8;
  local_70._0_4_ = CONCAT22(uVar6,*(undefined2 *)(lVar10 + 0xfa));
  local_70._6_2_ = SUB82(puVar3,6);
  local_70._0_6_ = CONCAT24(local_aa,(int)local_70);
  lVar13 = 0;
  do {
    uVar6 = *(ushort *)((longlong)&local_70 + lVar13);
    iVar17 = uVar6 + 1;
    iVar30 = *(int *)(lVar22 + 0x108);
    iVar21 = iVar17 - iVar30;
    if (iVar21 != 0 && iVar30 <= iVar17) {
      if (iVar30 == 0) {
LAB_1413fd91b:
        if (*(int *)(lVar22 + 0x10c) <= (int)(uint)uVar6) {
          *(undefined4 *)(lVar22 + 0x10c) = 0x100;
          FUN_14497ddce(lVar14,iVar30);
          iVar17 = *(int *)(lVar22 + 0x108) + iVar21;
        }
        iVar19 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar19 = iVar17;
        }
        *(int *)(lVar22 + 0x108) = iVar17;
        if (iVar17 % 0x20 != 0) {
          bVar16 = -(char)(iVar17 % 0x20);
          *(uint *)(lVar14 + (longlong)(iVar19 >> 5) * 4) =
               (uint)(*(int *)(lVar14 + (longlong)(iVar19 >> 5) * 4) << (bVar16 & 0x1f)) >>
               (bVar16 & 0x1f);
        }
      }
      else {
        iVar19 = iVar30 + 0x1e;
        if (-1 < iVar30 + -1) {
          iVar19 = iVar30 + -1;
        }
        if (iVar19 >> 5 != (uint)(uVar6 >> 5)) goto LAB_1413fd91b;
        *(int *)(lVar22 + 0x108) = iVar17;
      }
      FUN_1447c45ca(lVar14,iVar30,iVar21,0);
    }
    puVar2 = (uint *)(lVar14 + (ulonglong)(uVar6 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar6 & 0x1f);
    lVar13 = lVar13 + 2;
  } while (lVar13 != 6);
  uVar6 = *(ushort *)(local_a8 + 0x11c);
  lVar14 = lVar22 + 0x110;
  iVar17 = uVar6 + 1;
  iVar30 = *(int *)(lVar22 + 0x130);
  iVar21 = iVar17 - iVar30;
  if (iVar21 == 0 || iVar17 < iVar30) goto LAB_1413fda16;
  if (iVar30 == 0) {
LAB_1413fd9cf:
    if (*(int *)(lVar22 + 0x134) <= (int)(uint)uVar6) {
      *(undefined4 *)(lVar22 + 0x134) = 0x100;
      FUN_14497ddce(lVar14,iVar30);
      iVar17 = *(int *)(lVar22 + 0x130) + iVar21;
    }
    iVar19 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar19 = iVar17;
    }
    *(int *)(lVar22 + 0x130) = iVar17;
    if (iVar17 % 0x20 != 0) {
      bVar16 = -(char)(iVar17 % 0x20);
      *(uint *)(lVar14 + (longlong)(iVar19 >> 5) * 4) =
           (uint)(*(int *)(lVar14 + (longlong)(iVar19 >> 5) * 4) << (bVar16 & 0x1f)) >>
           (bVar16 & 0x1f);
    }
  }
  else {
    iVar19 = iVar30 + 0x1e;
    if (-1 < iVar30 + -1) {
      iVar19 = iVar30 + -1;
    }
    if (iVar19 >> 5 != (uint)(uVar6 >> 5)) goto LAB_1413fd9cf;
    *(int *)(lVar22 + 0x130) = iVar17;
  }
  FUN_1447c45ca(lVar14,iVar30,iVar21,0);
LAB_1413fda16:
  puVar2 = (uint *)(lVar14 + (ulonglong)(uVar6 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar6 & 0x1f);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413fe08e FUN_1413fe08e body=25 status=ok
// SIG undefined FUN_1413fe08e(void)

void FUN_1413fe08e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 1413fe0a8 FUN_1413fe0a8 body=483 status=ok
// SIG undefined FUN_1413fe0a8(void)

void FUN_1413fe0a8(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
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



// FUNCTION 1413fe28c FUN_1413fe28c body=195 status=ok
// SIG undefined FUN_1413fe28c(void)

int FUN_1413fe28c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1413fe2ce:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1413fe347;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1413fe347;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1413fe331;
    }
  }
  return -1;
LAB_1413fe347:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1413fe331:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1413fe2ce;
}



// FUNCTION 1413fe350 FUN_1413fe350 body=485 status=ok
// SIG undefined FUN_1413fe350(void)

void FUN_1413fe350(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413fe536 FUN_1413fe536 body=2188 status=ok
// SIG undefined FUN_1413fe536(void)

void FUN_1413fe536(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b141360;
  param_1[0x198] = &PTR_FUN_14affcd20;
  FUN_14096d529(param_1[0x19d],*(undefined4 *)(param_1 + 0x19e));
  if (param_1[0x19d] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f404(param_1[0x196],*(undefined4 *)(param_1 + 0x197));
  if (param_1[0x196] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x194] != 0) {
    FUN_1400020a8();
  }
  if (param_1[399] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x17a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x17e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x17d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x17d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x172;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x176) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x175)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x175)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x16a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x16d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x16d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x162;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x166) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x165)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x165)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x15a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x153;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x157) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x156)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x156)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x14c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x150) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14f)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x145;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x149) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x148)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x148)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x13e;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x142) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x141)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x141)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x136;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x13a) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x139)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x139)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 299;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x12e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x12e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x124;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x128) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x127)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x127)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x121) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x120)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x120)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x119] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x114] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x10a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x10e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x10d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x10d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x103;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x107) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x106)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x106)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xfc;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x100) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xff)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xff)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xf5;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xf9) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xf8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xf8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xee;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xf2) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xf1)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xf1)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xe7;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xeb) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xea)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xea)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xe0;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe4) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe3)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe3)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140adedd4(param_1);
  return;
}



// FUNCTION 1413fedc2 FUN_1413fedc2 body=863 status=ok
// SIG undefined FUN_1413fedc2(void)

void FUN_1413fedc2(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  code *local_70;
  ulonglong local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = param_1 + -0x30;
  lVar6 = FUN_140495e96();
  if ((lVar6 != 0) && (lVar6 = FUN_1403ca91c(lVar6), lVar6 != 0)) {
    iVar5 = *(int *)(lVar6 + 0x80);
    if ((longlong)iVar5 != 0) {
      lVar9 = *(longlong *)(lVar6 + 0x78);
      lVar8 = 0;
      do {
        if (((*(int *)(lVar9 + 8 + lVar8) != 0) &&
            (plVar3 = *(longlong **)(lVar9 + lVar8), plVar3 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar1), cVar4 != '\0')) goto LAB_1413fee72;
        lVar8 = lVar8 + 0x10;
      } while ((longlong)iVar5 * 0x10 != lVar8);
    }
    local_58 = FUN_140cf3f46;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    FUN_14597378e(lVar6 + 0x78,local_60,lVar1);
  }
LAB_1413fee72:
  lVar6 = FUN_14026506e(param_1);
  if (lVar6 != 0) {
    if (DAT_14cba8288 == 0) {
      local_80 = &local_58;
      local_58 = FUN_141864c34;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464cee30;
      local_88 = &LAB_148bfac22;
      local_90 = &LAB_140f21842;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_1412a3650(&local_68);
      local_58._0_4_ = 0;
      uStack_50 = 0;
      if (lVar1 == 0) {
        iVar5 = 0;
        uVar2 = (uint)local_58;
      }
      else {
        uVar2 = *(uint *)(param_1 + -0x24);
        local_58 = (code *)(ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar5 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar5 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar5 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar7;
            iVar5 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_58;
          if (bVar10) {
            iVar5 = iVar7;
          }
        }
      }
      local_58._0_4_ = uVar2;
      local_58 = (code *)CONCAT44(iVar5,(uint)local_58);
      uStack_50 = local_68;
      if ((local_68 != 0) && (lVar9 = FUN_14479d2ce(&local_58), lVar9 != 0)) {
        FUN_1400796d0(*(undefined8 *)(lVar9 + 0x10),local_68,1);
      }
      FUN_14053c012(lVar6 + 0x5fc0,&local_58);
      uVar2 = *(uint *)(lVar6 + 0xc);
      *(uint *)(param_1 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar5 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar6 + 0x10);
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(lVar6 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar5 = iVar7;
        }
      }
      *(int *)(param_1 + 0x1c) = iVar5;
    }
  }
  FUN_140a2d218(lVar1);
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413ff1ca FUN_1413ff1ca body=486 status=ok
// SIG undefined FUN_1413ff1ca(void)

void FUN_1413ff1ca(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 1413ff3b2 FUN_1413ff3b2 body=84 status=ok
// SIG undefined FUN_1413ff3b2(void)

void FUN_1413ff3b2(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        lVar4 = 0x200;
        do {
          if (*(longlong *)(lVar1 + -0x10 + lVar4) != 0) {
            FUN_1400020a8();
          }
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
        FUN_1400020a8(lVar1);
      }
      plVar2 = plVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 1413ff406 FUN_1413ff406 body=154 status=ok
// SIG undefined FUN_1413ff406(void)

void FUN_1413ff406(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 3) = 0;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    param_1[1] = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    param_1[2] = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1413ff4a0 FUN_1413ff4a0 body=1134 status=ok
// SIG undefined FUN_1413ff4a0(void)

void FUN_1413ff4a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8e2ba0;
  if (param_1[0x2fa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f5] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2ee] = &PTR_FUN_14affcd20;
  FUN_14096d529(param_1[0x2f3],*(undefined4 *)(param_1 + 0x2f4));
  if (param_1[0x2f3] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f404(param_1[0x2ec],*(undefined4 *)(param_1 + 0x2ed));
  if (param_1[0x2ec] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2ea] != 0) {
    FUN_1400020a8();
  }
  FUN_140d01cbe(param_1[0x2e8],*(undefined4 *)(param_1 + 0x2e9));
  if (param_1[0x2e8] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d17b(param_1[0x2e6],*(undefined4 *)(param_1 + 0x2e7));
  if (param_1[0x2e6] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d148(param_1[0x2db],*(undefined4 *)(param_1 + 0x2dc));
  if (param_1[0x2db] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x2d7] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2d7] + 0x50));
  }
  if ((param_1[0x2d1] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2d1] + 0x50));
  }
  if ((param_1[0x2cb] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2cb] + 0x50));
  }
  if ((param_1[0x2c5] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2c5] + 0x50));
  }
  if ((param_1[0x2bf] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2bf] + 0x50));
  }
  if ((param_1[0x2b9] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2b9] + 0x50));
  }
  if ((param_1[0x2b0] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2b0] + 0x50));
  }
  if ((param_1[0x2aa] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2aa] + 0x50));
  }
  if ((param_1[0x2a4] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2a4] + 0x50));
  }
  if ((param_1[0x29e] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x29e] + 0x50));
  }
  if ((param_1[0x298] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x298] + 0x50));
  }
  if ((param_1[0x291] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x291] + 0x50));
  }
  if ((param_1[0x28a] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x28a] + 0x50));
  }
  if ((param_1[0x26e] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x26e] + 0x50));
  }
  FUN_140bb60bc(param_1 + 0x24e);
  if (param_1[0x24c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x22f) = 0;
  if (param_1[0x22e] != 0) {
    FUN_1400020a8();
  }
  FUN_1418d1b1c(param_1 + 0x226,0);
  if (param_1[0x22a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x226] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x220] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x216] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x211] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x1f6);
  if (param_1[0x1ec] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e6] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x1ca);
  if (param_1[0x1c3] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1498(param_1 + 0x32);
  FUN_1418d1d0e(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140753a84(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 1413ff90e FUN_1413ff90e body=510 status=ok
// SIG undefined FUN_1413ff90e(void)

void FUN_1413ff90e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar7 = FUN_140789e1e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) == lVar7 + 0x30)) {
      local_78 = 0;
      uStack_70 = 0;
      iVar6 = *(int *)(param_1 + 0x30);
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if (iVar6 != 0) {
        FUN_1413ffb0e(&local_78);
        if ((longlong)*(int *)(param_1 + 0x30) != 0) {
          puVar9 = *(undefined8 **)(param_1 + 0x28);
          puVar1 = (undefined8 *)((longlong)puVar9 + (longlong)*(int *)(param_1 + 0x30) * 0x14);
          do {
            uVar4 = uStack_70;
            lVar7 = (longlong)(int)uStack_70;
            uVar5 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
            if (uStack_70._4_4_ < uVar5) {
              FUN_1407256aa(&local_78,uVar4 & 0xffffffff);
            }
            lVar3 = local_78;
            lVar7 = lVar7 * 0x1c;
            *(undefined8 *)(local_78 + lVar7) = *puVar9;
            *(undefined1 *)(local_78 + 8 + lVar7) = *(undefined1 *)(puVar9 + 1);
            puVar2 = (undefined8 *)(local_78 + 0xc + lVar7);
            *puVar2 = 0;
            puVar2[1] = 0;
            uVar5 = *(uint *)(param_2 + 0xc);
            *(uint *)(local_78 + 0xc + lVar7) = uVar5;
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            iVar6 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar11 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar11) {
                local_7c = iVar8;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
                iVar8 = local_7c;
              }
              LOCK();
              iVar6 = *(int *)(lVar10 + 0x10);
              bVar11 = iVar6 == 0;
              if (bVar11) {
                *(int *)(lVar10 + 0x10) = iVar8;
                iVar6 = 0;
              }
              UNLOCK();
              if (bVar11) {
                iVar6 = iVar8;
              }
            }
            *(int *)(lVar3 + lVar7 + 0x10) = iVar6;
            *(undefined8 *)(lVar3 + lVar7 + 0x14) = *(undefined8 *)((longlong)puVar9 + 0xc);
            puVar9 = (undefined8 *)((longlong)puVar9 + 0x14);
          } while (puVar9 != puVar1);
        }
      }
      FUN_1410b77f0(param_2 + 0x80,&local_78);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1413ffb0e FUN_1413ffb0e body=327 status=ok
// SIG undefined FUN_1413ffb0e(void)

undefined8 FUN_1413ffb0e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0x492) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x1ffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1413ffb76;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0x1ffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,4);
    }
  }
LAB_1413ffb76:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6 >> 2;
  uVar5 = SUB168(auVar3 * ZEXT816(0x4924924924924925),0);
  uVar6 = (uVar6 >> 2) / 7;
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)uVar6) {
    uVar4 = uVar6 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x1c,4);
  }
  return uVar5;
}



// FUNCTION 1413ffc56 FUN_1413ffc56 body=342 status=ok
// SIG undefined FUN_1413ffc56(void)

undefined8 FUN_1413ffc56(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)(param_1 + 0xd0) != '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 200);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return 0;
  }
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  if ((int)plVar4[2] != *(int *)(param_1 + 0xcc)) {
    return 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
    return 0;
  }
  lVar8 = *plVar4;
  if (lVar8 == 0) {
    return 0;
  }
  if (*(char *)(lVar8 + 0x742) != '\0') {
    return 0;
  }
  if (*(char *)(lVar8 + 0x743) != '\0') {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x398) == 0) {
LAB_1413ffd47:
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_140082f10();
    lVar8 = *(longlong *)(param_2 + 0x398);
    if (lVar8 == 0) goto LAB_1413ffd47;
    lVar7 = 0;
    if ((lVar5 != 0) && (lVar3 = *(longlong *)(lVar8 + 0x10), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38)) goto LAB_1413ffd47;
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar7 = lVar8;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0xcc);
  uVar6 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 200);
    lVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1413ffd98;
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       ((*(uint *)(plVar4 + 2) == uVar1 &&
        (uVar6 = (ulonglong)*(uint *)(plVar4 + 1), (*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar8 = *plVar4;
      goto LAB_1413ffd98;
    }
  }
  lVar8 = 0;
LAB_1413ffd98:
  if (lVar7 == lVar8) {
    return 0;
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 1413ffdac FUN_1413ffdac body=188 status=ok
// SIG undefined FUN_1413ffdac(void)

undefined4 FUN_1413ffdac(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x180))();
  local_20 = param_2;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      uVar3 = (**(code **)(*local_38 + 0x138))(local_38,*(undefined4 *)(param_1[4] + 0xe0));
      goto LAB_1413ffe14;
    }
  }
  uVar3 = 0;
LAB_1413ffe14:
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1413ffe6a FUN_1413ffe6a body=1567 status=ok
// SIG undefined FUN_1413ffe6a(void)

void FUN_1413ffe6a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_38 = 0;
  uStack_34 = 0;
  local_30 = 0x19101;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  iStack_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_3c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_3c = (int)uVar2;
      local_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_3c);
    }
  }
  iVar4 = iStack_3c;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14067a048;
      local_70 = 0;
      local_78 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_40 = (int)uVar2;
      iStack_3c = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT44(uStack_34,local_38);
  local_50 = local_30;
  local_48 = 0;
  FUN_14140048a(local_20,&local_58,iVar4 != 0,local_40 != 0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14140048a FUN_14140048a body=173 status=ok
// SIG undefined FUN_14140048a(void)

void FUN_14140048a(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    local_50 = *param_2;
    FUN_1446dcdd4(local_48);
    if (DAT_14cb8b9b8 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144837462(DAT_14cb8b9b8,local_48);
    }
    cVar2 = FUN_14109961a(lVar1 + 0x48,uVar3,param_3,param_4);
    if (cVar2 != '\0') {
      FUN_1447f69b6(lVar1 + 0x1f0);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141400538 FUN_141400538 body=135 status=ok
// SIG undefined FUN_141400538(void)

void FUN_141400538(uint *param_1,uint param_2)

{
  void *_Src;
  uint uVar1;
  void *_Dst;
  
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    _Dst = (void *)FUN_14001cc68((ulonglong)param_2 << 2,0x10);
    if ((ulonglong)param_1[1] != 0) {
      _Src = *(void **)(param_1 + 4);
      memcpy(_Dst,_Src,(ulonglong)param_1[1] << 2);
      if (_Src != (void *)0x0) {
        FUN_1400020a8(_Src);
      }
    }
    uVar1 = *param_1;
    if (param_2 <= *param_1) {
      uVar1 = param_2;
    }
    *param_1 = uVar1;
    param_1[1] = param_2;
    *(void **)(param_1 + 4) = _Dst;
  }
  return;
}



// FUNCTION 1414005c0 FUN_1414005c0 body=229 status=ok
// SIG undefined FUN_1414005c0(void)

void FUN_1414005c0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    lVar3 = FUN_14001cc68((ulonglong)param_2 << 2,0x10);
    lVar4 = FUN_14001cc68((ulonglong)param_2 << 2,0x10);
    uVar6 = (ulonglong)*(uint *)(param_1 + 8);
    if (uVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar5 = *(longlong *)(param_1 + 0x20);
      uVar7 = 0;
      do {
        *(undefined4 *)(lVar3 + uVar7 * 4) = *(undefined4 *)(lVar2 + uVar7 * 4);
        *(undefined4 *)(lVar4 + uVar7 * 4) = *(undefined4 *)(lVar5 + uVar7 * 4);
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      if (lVar2 != 0) {
        FUN_1400020a8(lVar2);
        lVar5 = *(longlong *)(param_1 + 0x20);
      }
      if (lVar5 != 0) {
        FUN_1400020a8();
      }
    }
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < param_2) {
      memset((void *)(lVar4 + (ulonglong)uVar1 * 4),(int)CONCAT71((int7)(uVar6 >> 8),0xff),
             (ulonglong)(~uVar1 + param_2) * 4 + 4);
    }
    *(uint *)(param_1 + 8) = param_2;
    *(longlong *)(param_1 + 0x18) = lVar3;
    *(longlong *)(param_1 + 0x20) = lVar4;
  }
  return;
}



// FUNCTION 1414006a6 FUN_1414006a6 body=248 status=ok
// SIG undefined FUN_1414006a6(void)

void FUN_1414006a6(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a323b60;
  param_1[0x43] = &PTR_FUN_14a328840;
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  FUN_141149308(param_1 + 0x40);
  puVar2 = (undefined8 *)param_1[0x3d];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2c474(param_1 + 0x2d);
  puVar2 = (undefined8 *)param_1[0x2b];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((longlong *)param_1[0x29] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x29] + 0x38))();
  }
  if ((longlong *)param_1[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x28] + 0x38))();
  }
  FUN_14732cd76(param_1 + 1);
  return;
}



// FUNCTION 14140079e FUN_14140079e body=483 status=ok
// SIG undefined FUN_14140079e(void)

void FUN_14140079e(longlong *param_1)

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



// FUNCTION 141400982 FUN_141400982 body=127 status=ok
// SIG undefined FUN_141400982(void)

undefined8 FUN_141400982(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb95d30) {
    FUN_144b3d300(&DAT_14cb95d30);
    if (DAT_14cb95d30 == -1) {
      FUN_1446f470e(&DAT_14cb95d28,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_14cb95d30);
    }
  }
  lVar1 = FUN_1447c1074(DAT_14cb95d28);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}



// FUNCTION 141400a02 FUN_141400a02 body=1256 status=ok
// SIG undefined FUN_141400a02(void)

longlong * FUN_141400a02(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_1;
  local_78 = param_2;
  plVar14 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar14[1] = (longlong)&DAT_100000001;
  *plVar14 = (longlong)&PTR_FUN_14b428770;
  plVar14[8] = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  plVar14[5] = 0;
  plVar14[6] = 0;
  *(undefined8 *)((longlong)plVar14 + 0x31) = 0;
  *(undefined8 *)((longlong)plVar14 + 0x39) = 0;
  *(undefined4 *)((longlong)plVar14 + 0x44) = 0xffffffff;
  plVar14[9] = 0;
  plVar14[10] = 0;
  plVar14[0xb] = 2;
  plVar14[2] = (longlong)&PTR_FUN_14b24d330;
  plVar14[0xc] = 0;
  plVar14[0xd] = 0;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar14 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  local_80 = plVar14 + 2;
  if ((longlong)*(int *)(local_98 + 0x38) != 0) {
    local_88 = plVar14 + 0xc;
    lVar6 = *(longlong *)(local_98 + 0x30);
    local_70 = (longlong)*(int *)(local_98 + 0x38) * 0x58;
    lVar19 = 0;
    do {
      plVar7 = *(longlong **)(lVar6 + 0x28 + lVar19);
      plVar8 = *(longlong **)(lVar6 + 0x30 + lVar19);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar16 = plVar8 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
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
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_68,param_3);
        lVar12 = local_68;
        if (local_68 != 0) {
          bVar4 = *(byte *)(local_98 + 0x40);
          lVar15 = FUN_141400eec(param_3[1]);
          puVar3 = (undefined4 *)(lVar6 + 0x18 + lVar19);
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          *(undefined4 *)(lVar12 + 0x30) = *puVar3;
          *(undefined4 *)(lVar12 + 0x34) = uVar9;
          *(undefined4 *)(lVar12 + 0x38) = uVar10;
          *(undefined4 *)(lVar12 + 0x3c) = uVar11;
          if (lVar15 == 0) {
            *(undefined4 *)(lVar12 + 0x40) = 0;
            iVar13 = 0;
          }
          else {
            uVar5 = *(uint *)(lVar15 + 0xc);
            *(uint *)(lVar12 + 0x40) = uVar5;
            if ((int)uVar5 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            iVar13 = *(int *)(lVar15 + 0x10);
            if (*(int *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar13 = DAT_14c964868 + 1;
              UNLOCK();
              iVar18 = DAT_14c964868 + 1;
              bVar20 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar13;
              if (bVar20) {
                local_8c = iVar18;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar18);
                iVar18 = local_8c;
              }
              LOCK();
              iVar13 = *(int *)(lVar15 + 0x10);
              bVar20 = iVar13 == 0;
              if (bVar20) {
                *(int *)(lVar15 + 0x10) = iVar18;
                iVar13 = 0;
              }
              UNLOCK();
              if (bVar20) {
                iVar13 = iVar18;
              }
            }
          }
          plVar7 = local_60;
          *(int *)(lVar12 + 0x44) = iVar13;
          *(byte *)(lVar12 + 0x68) = *(byte *)(lVar12 + 0x68) & 0xfe | bVar4;
          if (local_60 == (longlong *)0x0) {
            uVar17 = *param_3;
            plVar16 = *(longlong **)(lVar6 + 0x40 + lVar19);
            if (plVar16 != (longlong *)0x0) {
              local_50 = (longlong *)0x0;
              goto LAB_141400bd3;
            }
            plVar16 = *(longlong **)(local_98 + 0x48);
            if (plVar16 != (longlong *)0x0) {
              local_50 = (longlong *)0x0;
              goto LAB_141400d8a;
            }
          }
          else {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
            uVar17 = *param_3;
            plVar16 = *(longlong **)(lVar6 + 0x40 + lVar19);
            if (plVar16 == (longlong *)0x0) {
              plVar16 = *(longlong **)(local_98 + 0x48);
              if (plVar16 != (longlong *)0x0) {
                local_50 = local_60;
                LOCK();
                *(int *)(local_60 + 1) = (int)local_60[1] + 1;
                UNLOCK();
LAB_141400d8a:
                (**(code **)(*plVar16 + 0x18))(plVar16,uVar17,local_58);
                goto LAB_141400be3;
              }
            }
            else {
              local_50 = local_60;
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
LAB_141400bd3:
              (**(code **)(*plVar16 + 0x18))(plVar16,uVar17,local_58);
LAB_141400be3:
              plVar16 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_50 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar16 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                }
              }
              if (plVar7 == (longlong *)0x0) goto LAB_141400c04;
            }
            LOCK();
            plVar16 = plVar7 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
LAB_141400c04:
          plVar7 = local_60;
          lVar12 = local_68;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          iVar13 = (int)plVar14[0xd];
          *(uint *)(plVar14 + 0xd) = iVar13 + 1U;
          if (*(uint *)((longlong)plVar14 + 0x6c) < iVar13 + 1U) {
            FUN_145977ad4(local_88,iVar13);
          }
          lVar15 = *local_88;
          *(longlong *)(lVar15 + (longlong)iVar13 * 0x10) = lVar12;
          *(longlong **)(lVar15 + 8 + (longlong)iVar13 * 0x10) = plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar16 = plVar7 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
        }
        plVar7 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_60 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*local_60)(local_60);
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
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      lVar19 = lVar19 + 0x58;
    } while (local_70 != lVar19);
  }
  plVar7 = local_78;
  *local_78 = (longlong)local_80;
  local_78[1] = (longlong)plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar14 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 141400eec FUN_141400eec body=292 status=ok
// SIG undefined FUN_141400eec(void)

longlong FUN_141400eec(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
    if (lVar1 != 0) {
      if (DAT_14cb5b388 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141864c34;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_146431698;
        local_38 = &LAB_1486775cb;
        local_40 = &LAB_1464cee35;
        local_48 = &DAT_149e063b2;
        local_50 = 0;
        local_58 = 0x10000005;
        local_60 = 0x10;
        local_68 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30))
      goto LAB_141400f50;
    }
  }
  lVar1 = 0;
LAB_141400f50:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141401012 FUN_141401012 body=16 status=ok
// SIG undefined FUN_141401012(void)

char FUN_141401012(void)

{
  char cVar1;
  
  cVar1 = FUN_141401022();
  return cVar1 * '\x02';
}



// FUNCTION 141401022 FUN_141401022 body=986 status=ok
// SIG undefined FUN_141401022(void)

undefined8 FUN_141401022(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined7 uVar11;
  undefined8 uVar10;
  int iVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 ****ppppuVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_b8 [32];
  char local_98 [8];
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x48);
  iVar8 = FUN_1412b37f4();
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar16 = 0;
    param_1 = 0;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_141401285:
      lVar16 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar18 + 0x48);
      lVar16 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar17 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar17 == (longlong *)0x0) ||
           (((int)plVar17[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_141401285;
        lVar16 = *plVar17;
      }
    }
    plVar17 = *(longlong **)(lVar18 + 0x118);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar17 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      LOCK();
      *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
      UNLOCK();
      bVar7 = false;
      local_90 = param_1;
      local_88 = plVar17;
      goto LAB_1414010f6;
    }
  }
  local_88 = (longlong *)0x0;
  bVar7 = true;
  local_90 = param_1;
LAB_1414010f6:
  plVar17 = local_88;
  local_70 = 0;
  local_98[0] = '\x03';
  local_80._0_4_ = 0;
  if (lVar16 == 0) {
    iVar9 = 0;
    uVar4 = (uint)local_80;
  }
  else {
    uVar4 = *(uint *)(lVar16 + 0xc);
    local_80 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar9 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar9 = *(int *)(lVar18 + 0x10);
      bVar20 = iVar9 == 0;
      if (bVar20) {
        *(int *)(lVar18 + 0x10) = iVar14;
        iVar9 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_80;
      if (bVar20) {
        iVar9 = iVar14;
      }
    }
  }
  local_80._0_4_ = uVar4;
  local_80 = CONCAT44(iVar9,(uint)local_80);
  local_78 = 2;
  if (local_70 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_70 + -1,1);
    local_70 = 0;
  }
  if (!bVar7) {
    LOCK();
    piVar2 = (int *)((longlong)plVar17 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  FUN_1447c3578(lVar5 + 0x88,local_68,local_98);
  iVar9 = FUN_1405d5f74(local_68);
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar6 != (code *)0x0) {
    ppppuVar15 = local_68;
    if (0x18 < local_50) {
      ppppuVar15 = (undefined8 ****)local_68[0];
    }
    (*pcVar6)(ppppuVar15);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  lVar18 = DAT_14c9a3da0;
  if ((longlong)local_70 != 0) {
    lVar16 = (longlong)local_70 + -1;
    lVar19 = lVar16 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar19),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar19));
    if (*(longlong *)(lVar18 + lVar19) != 0) {
      FUN_1400020a8();
    }
    lVar18 = DAT_14c9a3da0;
    iVar14 = (int)lVar16;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar14;
    }
    *(undefined4 *)(lVar18 + lVar19) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar18 + 4 + lVar19) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar13 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar13 = DAT_14c9a3dc0;
    }
    iVar12 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar12 = iVar14;
    }
    bVar3 = (byte)lVar16 & 0x1f;
    DAT_14c9a3dd0 = iVar14;
    *(uint *)(puVar13 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_70 = 0;
  }
  if ((local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_88 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  bVar3 = *(byte *)(lVar5 + 0x80);
  uVar11 = (undefined7)
           ((ulonglong)
            ((longlong)&switchD_141401204::switchdataD_14ac8b5b4 +
            (longlong)(int)(&switchD_141401204::switchdataD_14ac8b5b4)[bVar3]) >> 8);
  switch(bVar3) {
  case 0:
    uVar10 = CONCAT71(uVar11,iVar8 < iVar9);
    break;
  case 1:
    uVar10 = CONCAT71(uVar11,iVar9 < iVar8);
    break;
  case 2:
    uVar10 = CONCAT71(uVar11,iVar8 <= iVar9);
    break;
  case 3:
    uVar10 = CONCAT71(uVar11,iVar9 <= iVar8);
    break;
  case 4:
    uVar10 = CONCAT71(uVar11,iVar8 == iVar9);
    break;
  case 5:
    uVar10 = CONCAT71(uVar11,iVar8 != iVar9);
    break;
  default:
    uVar10 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1414013fe FUN_1414013fe body=428 status=ok
// SIG undefined FUN_1414013fe(void)

longlong * FUN_1414013fe(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_1414014de:
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
    *puVar5 = &PTR_FUN_14b9d3ba0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1414014de;
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
    *puVar5 = &PTR_FUN_14b9d3ba0;
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



// FUNCTION 1414015aa FUN_1414015aa body=84 status=ok
// SIG undefined FUN_1414015aa(void)

void FUN_1414015aa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x500,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 10;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1414015fe FUN_1414015fe body=208 status=ok
// SIG undefined FUN_1414015fe(void)

void FUN_1414015fe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint *_Dst;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0xcd8);
  if (0 < (longlong)iVar1) {
    iVar7 = -iVar1;
    uVar5 = (longlong)iVar1;
    do {
      lVar2 = *(longlong *)(param_1 + 0xcd0);
      lVar6 = lVar2 + uVar5 * 8;
      _Dst = (uint *)(lVar6 + -8);
      iVar1 = *(int *)(lVar6 + -4);
      if ((((iVar1 == 0) || (uVar4 = *_Dst, (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) ||
         (((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 == 0 ||
           (*(int *)(lVar6 + 0x10) != iVar1)) || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))) {
        uVar4 = *(uint *)(param_1 + 0xcd8);
        if (uVar5 != uVar4) {
          memmove(_Dst,(void *)(lVar2 + uVar5 * 8),(longlong)(int)(iVar7 + uVar4) << 3);
          uVar4 = *(uint *)(param_1 + 0xcd8);
        }
        *(uint *)(param_1 + 0xcd8) = uVar4 - 1;
        FUN_1414016ce((longlong *)(param_1 + 0xcd0));
      }
      iVar7 = iVar7 + 1;
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 1414016ce FUN_1414016ce body=142 status=ok
// SIG undefined FUN_1414016ce(void)

void FUN_1414016ce(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,4);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,4);
    }
  }
  return;
}



// FUNCTION 14140175c FUN_14140175c body=1038 status=ok
// SIG undefined FUN_14140175c(void)

/* WARNING: Removing unreachable block (ram,0x00014140188a) */
/* WARNING: Removing unreachable block (ram,0x000141401b22) */

void FUN_14140175c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [40];
  undefined2 *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  ulonglong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  ulonglong uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = param_1;
  plVar4 = (longlong *)FUN_1413eaf12();
  lVar11 = plVar4[0x22];
  if (lVar11 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar11 = plVar4[0x22];
    if (lVar11 == 0) goto LAB_1414018ad;
  }
  iVar6 = *(int *)(lVar11 + 0xb0);
  if ((longlong)iVar6 != 0) {
    lVar11 = *(longlong *)(lVar11 + 0xa8);
    lVar12 = 0;
    do {
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(lVar11 + 8 + lVar12) != 0) {
        puVar9 = *(undefined2 **)(lVar11 + lVar12);
      }
      FUN_140d6aad2(&local_68);
      puVar7 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        puVar7 = local_68;
      }
      FUN_140002266(&local_90,L"%sTags/%s",puVar7,puVar9);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_2,iVar2);
      }
      lVar13 = *param_2;
      lVar10 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar13 + lVar10) = 0;
      *(longlong **)(lVar13 + lVar10) = local_90;
      *(undefined4 *)(lVar13 + 8 + lVar10) = (undefined4)local_88;
      *(uint *)(lVar13 + 0xc + lVar10) = local_88._4_4_;
      local_88 = (undefined2 *)0x0;
      local_90 = (longlong *)0x0;
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + 0x20;
    } while ((longlong)iVar6 * 0x20 != lVar12);
  }
LAB_1414018ad:
  lVar11 = local_c0;
  plVar4 = (longlong *)(local_c0 + 200);
  uVar1 = local_c0 + 0xd8;
  local_68 = (undefined2 *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  uStack_60 = uVar1;
  if (*(int *)(local_c0 + 0xf0) != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(lVar11 + 0xf0);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = uStack_60;
  local_90 = plVar4;
  if ((iStack_54 != iVar6) || (uStack_60 != uVar1)) {
    do {
      local_c0 = CONCAT44(local_c0._4_4_,iVar6);
      lVar11 = (longlong)*(int *)(*local_90 + 0x28 + (longlong)iStack_74 * 0x40);
      if (lVar11 != 0) {
        lVar12 = *(longlong *)(*local_90 + 0x20 + (longlong)iStack_74 * 0x40);
        lVar11 = lVar11 * 0x10 + lVar12;
        do {
          local_68 = (undefined2 *)0x0;
          uStack_60 = 0;
          FUN_141401b93(lVar12,&local_68);
          puVar9 = local_68;
          lVar13 = (longlong)(int)uStack_60;
          uVar5 = 0;
          if (lVar13 != 0) {
            local_c8 = 0;
            do {
              local_b8 = &DAT_149dfb77a;
              local_d0 = &DAT_149dfb77a;
              if (*(int *)((longlong)puVar9 + local_c8 + 8) != 0) {
                local_d0 = *(undefined2 **)((longlong)puVar9 + local_c8);
              }
              FUN_140bee914(&local_b0,lVar12);
              if (local_a8 != 0) {
                local_b8 = local_b0;
              }
              FUN_140002266(&local_a0,L"%s/%s",local_b8,local_d0);
              local_d0 = (undefined2 *)(longlong)(int)param_2[1];
              uVar3 = (int)param_2[1] + 1;
              *(uint *)(param_2 + 1) = uVar3;
              if (*(uint *)((longlong)param_2 + 0xc) < uVar3) {
                FUN_1447a1bd6(param_2,local_d0);
              }
              lVar10 = *param_2;
              lVar8 = (longlong)local_d0 * 0x10;
              *(undefined8 *)(lVar10 + lVar8) = 0;
              *(undefined8 *)(lVar10 + lVar8) = local_a0;
              *(undefined4 *)(lVar10 + 8 + lVar8) = (undefined4)local_98;
              *(undefined4 *)(lVar10 + 0xc + lVar8) = local_98._4_4_;
              local_98 = 0;
              local_a0 = 0;
              if (local_b0 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              local_c8 = local_c8 + 0x20;
            } while (lVar13 * 0x20 != local_c8);
            uVar5 = uStack_60 & 0xffffffff;
          }
          FUN_141401b6b(local_68,uVar5);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != lVar11);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
      iVar6 = (int)local_c0;
    } while (((iStack_74 != (int)local_c0) || (local_80 != uVar1)) || (local_90 != plVar4));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141401b6b FUN_141401b6b body=40 status=ok
// SIG undefined FUN_141401b6b(void)

void FUN_141401b6b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459783c6(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 141401b93 FUN_141401b93 body=586 status=ok
// SIG undefined FUN_141401b93(void)

void FUN_141401b93(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined8 local_1b0;
  code **local_1a8;
  undefined1 local_1a0;
  longlong local_198 [2];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  ulonglong uStack_160;
  longlong *local_150;
  code *local_148;
  longlong **local_140;
  undefined1 local_138 [216];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1408e76da(local_138);
  FUN_140fa61d5(local_138,param_1,0);
  local_168 = 0;
  uStack_160 = 0;
  iVar2 = FUN_14105ab36(local_138,L"/Script/GameplayTags.GameplayTagsSettings",
                        L"RestrictedConfigFiles",&local_168);
  lVar1 = local_168;
  uVar5 = uStack_160 & 0xffffffff;
  if (iVar2 != 0) {
    if ((int)uStack_160 == 0) {
      uVar5 = 0;
    }
    else {
      lVar7 = (longlong)(int)uStack_160;
      lVar8 = 0;
      do {
        local_178 = 0;
        uStack_170 = 0;
        local_188 = 0;
        uStack_180 = 0;
        lVar4 = DAT_14caa84b0;
        if (DAT_14caa84b0 == 0) {
          uVar3 = FUN_140608922();
          DAT_14caa84b0 = FUN_140002ddd(FUN_146328315,uVar3,L"RestrictedConfigInfo");
          lVar4 = DAT_14caa84b0;
          if (DAT_14caa84b0 == 0) {
            uVar3 = FUN_140608922();
            DAT_14caa84b0 = FUN_140002ddd(FUN_146328315,uVar3,L"RestrictedConfigInfo");
            lVar4 = 0;
          }
        }
        local_148 = *(code **)(DAT_14caa84b0 + 0x18);
        FUN_1400021e4(&local_148,local_198);
        puVar6 = &DAT_149dfb77a;
        if (*(int *)(lVar1 + 8 + lVar8) != 0) {
          puVar6 = *(undefined2 **)(lVar1 + lVar8);
        }
        local_140 = &local_150;
        local_148 = FUN_1427ded96;
        local_1a0 = 1;
        local_1b0 = 0;
        local_1b8 = 0;
        local_1a8 = &local_148;
        local_150 = local_198;
        lVar4 = FUN_1408de6dc(lVar4,puVar6,&local_188,0);
        if (local_198[0] != 0) {
          FUN_1400020a8();
        }
        if (lVar4 != 0) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_14747d1da(param_2,iVar2);
          }
          FUN_14747d142((longlong)iVar2 * 0x20 + *param_2,&local_188);
        }
        FUN_1459783c6(&local_188);
        lVar8 = lVar8 + 0x10;
      } while (lVar7 * 0x10 != lVar8);
      uVar5 = uStack_160 & 0xffffffff;
    }
  }
  FUN_1447a1747(local_168,uVar5);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_1409263a6(local_138);
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141401dde FUN_141401dde body=89 status=ok
// SIG undefined FUN_141401dde(void)

void FUN_141401dde(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 141401e38 FUN_141401e38 body=197 status=ok
// SIG undefined FUN_141401e38(void)

void FUN_141401e38(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1ce410;
  param_1[7] = &PTR_FUN_14b1ce700;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f634a(param_1 + 0xe);
  plVar3 = (longlong *)param_1[0xd];
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
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141401efe FUN_141401efe body=98 status=ok
// SIG undefined FUN_141401efe(void)

void FUN_141401efe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x108))(*(longlong **)(param_1 + 8),param_3);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x1c0))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  }
  FUN_141401f60(param_1,param_2,param_3,param_4,0);
  return;
}



// FUNCTION 141401f60 FUN_141401f60 body=4108 status=ok
// SIG undefined FUN_141401f60(void)

/* WARNING: Removing unreachable block (ram,0x000141402ab0) */
/* WARNING: Removing unreachable block (ram,0x000141402873) */

void FUN_141401f60(longlong param_1,longlong *param_2,undefined8 param_3,wchar_t *param_4,
                  char param_5)

{
  undefined8 *puVar1;
  void *_Src;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  ushort uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort uVar13;
  int iVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  uint *puVar29;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  int local_1b0;
  char local_1a5;
  int local_1a4;
  wchar_t *local_1a0;
  longlong local_198;
  size_t local_190;
  longlong *local_188;
  ulonglong local_180;
  longlong local_178;
  uint *local_170;
  uint local_164;
  longlong local_160;
  ulonglong local_158;
  longlong local_150;
  ulonglong local_148;
  longlong local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined2 *local_118;
  int local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined2 *local_e8;
  int local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f8 = 0;
  uStack_f0 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_140115598(&local_f8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((int)uStack_f0 == 0) {
    uVar11 = 0;
  }
  else {
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_190 = 0;
    local_70 = 0;
    local_108 = *param_2;
    local_100 = (undefined4)param_2[1];
    local_188 = param_2;
    FUN_14282d1cc();
    FUN_140056680(&local_118,param_3);
    if (param_4 != (wchar_t *)0x0) {
      local_190 = wcslen(param_4);
    }
    FUN_1401ae5e4(&local_118);
    local_128 = (undefined8 *)0x0;
    uStack_120 = 0;
    FUN_1408be2c4(&local_128,0x40);
    if (0 < (int)uStack_f0) {
      local_158 = local_190 & 0xffffffff;
      local_160 = -local_158;
      lVar10 = 0;
      local_1a0 = param_4;
      do {
        uVar11 = 0;
        puVar3 = &DAT_149dfb77a;
        if (local_110 != 0) {
          puVar3 = local_118;
        }
        lVar28 = *(longlong *)(local_f8 + 8 + lVar10 * 0x10);
        FUN_140056680(&local_e8,puVar3);
        uVar27 = local_e0 - 1;
        if (local_e0 == 0) {
          uVar27 = 0;
        }
        local_150 = lVar10;
        if ((0 < (int)uVar27) && (local_e8[(ulonglong)uVar27 - 1] != 0x2f)) {
          FUN_1400020e8(&local_e8,&DAT_149e065c6,1);
        }
        iVar5 = *(int *)(lVar28 + 0xd0);
        uVar22 = (ulonglong)(iVar5 - 1);
        if (iVar5 == 0) {
          uVar22 = uVar11;
        }
        puVar3 = *(undefined2 **)(lVar28 + 200);
        local_198 = lVar28;
        if ((int)uVar22 < 1) {
LAB_141402cf1:
          uVar27 = local_e0 - 1;
          if (local_e0 == 0) {
            uVar27 = 0;
          }
          if (0 < (int)uVar27) {
            puVar21 = local_e8;
            if (local_e0 == 0) {
              puVar21 = &DAT_149dfb77a;
            }
            uVar19 = (ulonglong)uVar27;
            puVar15 = puVar3;
            if (iVar5 == 0) {
              puVar15 = &DAT_149dfb77a;
            }
            lVar10 = 0;
            while( true ) {
              uVar9 = *(ushort *)((longlong)puVar15 + lVar10);
              uVar16 = (ulonglong)uVar9;
              uVar13 = *(ushort *)((longlong)puVar21 + lVar10);
              if (uVar9 != uVar13) break;
              if (uVar9 == 0) goto LAB_1414021d2;
LAB_141402d36:
              uVar19 = uVar19 - 1;
              if (uVar19 == 0) goto LAB_1414021d2;
              lVar10 = lVar10 + 2;
            }
            if ((uVar13 | uVar9) < 0x80) {
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              uVar12 = (ulonglong)uVar13;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar12]) goto LAB_141402d36;
            }
            if (uVar9 != uVar13) goto LAB_141402cab;
            goto LAB_1414021d2;
          }
        }
        else {
          puVar21 = puVar3;
          if (iVar5 == 0) {
            puVar21 = &DAT_149dfb77a;
          }
          puVar15 = local_e8;
          if (local_e0 == 0) {
            puVar15 = &DAT_149dfb77a;
          }
          lVar10 = 0;
          uVar19 = uVar22;
          while( true ) {
            uVar9 = *(ushort *)((longlong)puVar15 + lVar10);
            uVar16 = (ulonglong)uVar9;
            uVar13 = *(ushort *)((longlong)puVar21 + lVar10);
            if (uVar9 != uVar13) break;
            if ((uVar9 == 0) || (uVar19 == 1)) goto LAB_1414021d2;
LAB_141402195:
            uVar19 = uVar19 - 1;
            lVar10 = lVar10 + 2;
          }
          if ((uVar13 | uVar9) < 0x80) {
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            uVar12 = (ulonglong)uVar13;
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar12]) {
              if (uVar19 != 1) goto LAB_141402195;
              goto LAB_1414021d2;
            }
          }
          if (uVar9 != uVar13) goto LAB_141402cf1;
LAB_1414021d2:
          local_1a5 = *(char *)(lVar28 + 0x214);
          if (local_1a5 == '\x01') {
            AcquireSRWLockShared((PSRWLOCK)(lVar28 + 0x188));
            iVar5 = *(int *)(lVar28 + 0xd0);
            puVar3 = *(undefined2 **)(lVar28 + 200);
            uVar22 = (ulonglong)(iVar5 - 1);
            if (iVar5 == 0) {
              uVar22 = uVar11;
            }
          }
          iVar25 = (int)uVar22;
          if (iVar25 < 1) {
            uVar22 = (ulonglong)(local_e0 - 1);
            if (local_e0 == 0) {
              uVar22 = uVar11;
            }
            uVar27 = (uint)uVar22;
LAB_14140229c:
            if (iVar25 < 2) {
              iVar25 = 1;
            }
            uVar2 = iVar25 - 1;
            if ((int)uVar2 < (int)uVar27) {
              uVar27 = uVar2;
            }
            uVar18 = 0;
            if (0 < (int)uVar27) {
              uVar18 = uVar27;
            }
            if (uVar2 == uVar18) {
              lVar10 = 0;
              if (uVar2 == 0) {
LAB_14140233f:
                lVar10 = 0;
                uVar22 = 0;
              }
              else {
                uVar22 = 0;
                if (0 < (int)uVar27) {
                  uVar11 = (ulonglong)uVar2;
                  lVar7 = 0;
                  while( true ) {
                    uVar9 = *(ushort *)((longlong)puVar3 + lVar7);
                    uVar22 = (ulonglong)uVar9;
                    uVar13 = *(ushort *)((longlong)local_e8 + lVar7);
                    if (uVar9 != uVar13) {
                      if ((uVar13 | uVar9) < 0x80) {
                        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                        uVar19 = (ulonglong)uVar13;
                        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                        if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar19]) {
                          if (uVar11 != 1) goto LAB_141402304;
                          goto LAB_14140233f;
                        }
                      }
                      param_4 = local_1a0;
                      lVar28 = local_198;
                      if (uVar9 == uVar13) goto LAB_14140233f;
                      goto LAB_141402c8c;
                    }
                    lVar10 = 0;
                    if (uVar9 == 0) goto LAB_14140233f;
                    uVar22 = 0;
                    if (uVar11 == 1) break;
LAB_141402304:
                    uVar11 = uVar11 - 1;
                    lVar7 = lVar7 + 2;
                  }
                }
              }
              goto LAB_14140236e;
            }
          }
          else {
            puVar21 = puVar3;
            if (iVar5 == 0) {
              puVar21 = &DAT_149dfb77a;
            }
            puVar15 = local_e8;
            if (local_e0 == 0) {
              puVar15 = &DAT_149dfb77a;
            }
            lVar10 = 0;
            while( true ) {
              uVar9 = *(ushort *)((longlong)puVar15 + lVar10);
              uVar19 = (ulonglong)uVar9;
              uVar13 = *(ushort *)((longlong)puVar21 + lVar10);
              if (uVar9 != uVar13) {
                if ((uVar13 | uVar9) < 0x80) {
                  uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                  uVar16 = (ulonglong)uVar13;
                  uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
                  if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar16]) goto LAB_141402256;
                }
                uVar22 = (ulonglong)(local_e0 - 1);
                if (local_e0 == 0) {
                  uVar22 = uVar11;
                }
                uVar27 = (uint)uVar22;
                if (uVar9 != uVar13) goto LAB_14140229c;
                goto LAB_14140234b;
              }
              if (uVar9 == 0) break;
LAB_141402256:
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) break;
              lVar10 = lVar10 + 2;
            }
            uVar22 = (ulonglong)(local_e0 - 1);
            if (local_e0 == 0) {
              uVar22 = uVar11;
            }
LAB_14140234b:
            uVar2 = (uint)uVar22;
            uVar27 = uVar2 - iVar25;
            if ((int)uVar2 <= (int)(uVar2 - iVar25)) {
              uVar27 = uVar2;
            }
            uVar22 = (ulonglong)uVar27;
            if ((int)uVar27 < 1) {
              uVar22 = uVar11;
            }
            lVar10 = (longlong)local_e8 +
                     ((longlong)(int)uVar2 * 2 - (ulonglong)(uint)((int)uVar22 * 2));
LAB_14140236e:
            puVar29 = (uint *)(lVar28 + 0xf8);
            iVar5 = *(int *)(lVar28 + 0x110);
            if (iVar5 == 0) {
              uVar19 = 1;
              uVar11 = 0;
              iVar25 = 0;
              iVar4 = 0;
            }
            else {
              puVar6 = *(uint **)(lVar28 + 0x108);
              if (*(uint **)(lVar28 + 0x108) == (uint *)0x0) {
                puVar6 = puVar29;
              }
              uVar27 = *puVar6;
              if (uVar27 == 0) {
                iVar25 = iVar5 + 0x1e;
                if (-1 < iVar5 + -1) {
                  iVar25 = iVar5 + -1;
                }
                uVar11 = 0;
                uVar19 = (ulonglong)(uint)(iVar25 >> 5);
                if (iVar25 >> 5 < 1) {
                  uVar19 = uVar11;
                }
                iVar25 = 0;
                do {
                  if (uVar19 == uVar11) goto LAB_141402c80;
                  iVar25 = iVar25 + 0x20;
                  uVar27 = puVar6[uVar11 + 1];
                  uVar11 = uVar11 + 1;
                } while (uVar27 == 0);
              }
              else {
                uVar11 = 0;
                iVar25 = 0;
              }
              uVar19 = (ulonglong)(-uVar27 & uVar27);
              uVar16 = uVar19 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              iVar4 = (iVar25 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              if (iVar5 <= iVar4) {
                iVar4 = iVar5;
              }
            }
            if (iVar4 < iVar5) {
              local_140 = lVar28 + 200;
              local_180 = uVar22;
              local_178 = lVar10;
              local_170 = puVar29;
              local_148 = uVar22;
              uVar27 = 0xffffffff;
              do {
                local_164 = uVar27;
                lVar7 = *(longlong *)(lVar28 + 0xe8);
                iVar26 = (int)uVar22;
                local_130 = uVar19;
                if (iVar26 == 0) {
LAB_141402529:
                  lVar10 = (longlong)iVar4 * 0x68;
                  FUN_1404740bc(&local_c8,local_140,lVar7 + lVar10);
                  local_138 = uVar11;
                  if (param_5 == '\0') {
                    iVar5 = local_c0 + -1;
                    if (local_c0 == 0) {
                      iVar5 = 0;
                    }
                    iVar4 = local_e0 + -1;
                    if (local_e0 == 0) {
                      iVar4 = 0;
                    }
                    local_1a4 = iVar25;
                    if (iVar4 < iVar5) {
                      local_1b0 = iVar4 + 1;
                      local_1b8 = 0;
                      iVar5 = FUN_1447ee042(&local_c8,&DAT_149e065c6,1,0);
                      if (iVar5 != -1) goto LAB_141402b66;
                    }
                    lVar28 = *(longlong *)(local_198 + 0xe8);
                    puVar29 = (uint *)(lVar28 + lVar10 + 0x20);
                    iVar5 = *(int *)(lVar28 + lVar10 + 0x38);
                    if (iVar5 == 0) {
                      uVar11 = 1;
                      uVar22 = 0;
                      iVar4 = 0;
                      iVar25 = 0;
                    }
                    else {
                      puVar6 = *(uint **)(lVar28 + 0x30 + lVar10);
                      if (puVar6 == (uint *)0x0) {
                        puVar6 = puVar29;
                      }
                      uVar27 = *puVar6;
                      if (uVar27 == 0) {
                        iVar25 = iVar5 + 0x1e;
                        if (-1 < iVar5 + -1) {
                          iVar25 = iVar5 + -1;
                        }
                        uVar22 = 0;
                        uVar11 = (ulonglong)(uint)(iVar25 >> 5);
                        if (iVar25 >> 5 < 1) {
                          uVar11 = uVar22;
                        }
                        iVar4 = 0;
                        do {
                          if (uVar11 == uVar22) goto LAB_141402b66;
                          iVar4 = iVar4 + 0x20;
                          uVar27 = puVar6[uVar22 + 1];
                          uVar22 = uVar22 + 1;
                        } while (uVar27 == 0);
                      }
                      else {
                        uVar22 = 0;
                        iVar4 = 0;
                      }
                      uVar11 = (ulonglong)(-uVar27 & uVar27);
                      uVar19 = uVar11 * 2 + 1;
                      lVar7 = 0x3f;
                      if (uVar19 != 0) {
                        for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                        }
                      }
                      iVar25 = (iVar4 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                      if (iVar5 <= iVar25) {
                        iVar25 = iVar5;
                      }
                    }
                    if (iVar25 < iVar5) {
                      lVar28 = lVar28 + lVar10;
                      uVar27 = 0xffffffff;
                      do {
                        lVar10 = *(longlong *)(lVar28 + 0x10);
                        lVar7 = (longlong)iVar25 * 0x20;
                        iVar25 = *(int *)(lVar10 + 8 + lVar7);
                        iVar26 = iVar25 + -1;
                        if (iVar25 == 0) {
                          iVar26 = 0;
                        }
                        if ((int)local_190 == 0) {
LAB_141402a1d:
                          FUN_1404740bc(&local_d8,&local_c8,lVar10 + lVar7);
                          lVar10 = (longlong)(int)uStack_120;
                          uVar2 = (int)uStack_120 + 1;
                          uStack_120 = CONCAT44(uStack_120._4_4_,uVar2);
                          if (uStack_120._4_4_ < uVar2) {
                            FUN_1447a1bd6(&local_128);
                          }
                          local_128[lVar10 * 2] = 0;
                          local_128[lVar10 * 2] = local_d8;
                          *(undefined4 *)(local_128 + lVar10 * 2 + 1) = (undefined4)local_d0;
                          *(undefined4 *)((longlong)local_128 + lVar10 * 0x10 + 0xc) =
                               local_d0._4_4_;
                          local_d0 = 0;
                          local_d8 = 0;
                          iVar5 = *(int *)(lVar28 + 0x38);
                        }
                        else {
                          iVar25 = iVar26;
                          if ((int)local_190 < iVar26) {
                            iVar25 = (int)local_190;
                          }
                          iVar14 = 0;
                          if (0 < iVar25) {
                            iVar14 = iVar25;
                          }
                          if ((int)local_190 == iVar14) {
                            if (0 < iVar25) {
                              lVar20 = 0;
                              uVar19 = local_158;
                              while( true ) {
                                uVar9 = *(ushort *)((longlong)param_4 + lVar20);
                                uVar16 = (ulonglong)uVar9;
                                uVar13 = *(ushort *)
                                          (*(longlong *)(lVar10 + lVar7) + (longlong)iVar26 * 2 +
                                           local_160 * 2 + lVar20);
                                if (uVar9 != uVar13) break;
                                if ((uVar9 == 0) || (uVar19 == 1)) goto LAB_141402a1d;
LAB_1414029e4:
                                uVar19 = uVar19 - 1;
                                lVar20 = lVar20 + 2;
                              }
                              param_4 = local_1a0;
                              if ((uVar13 | uVar9) < 0x80) {
                                uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
                                uVar12 = (ulonglong)uVar13;
                                uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                                if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar12]) {
                                  if (uVar19 != 1) goto LAB_1414029e4;
                                  goto LAB_141402a1d;
                                }
                              }
                              if (uVar9 != uVar13) goto LAB_141402ab8;
                            }
                            goto LAB_141402a1d;
                          }
                        }
LAB_141402ab8:
                        uVar27 = uVar27 & ~(uint)uVar11;
                        puVar6 = *(uint **)(lVar28 + 0x30);
                        if (*(uint **)(lVar28 + 0x30) == (uint *)0x0) {
                          puVar6 = puVar29;
                        }
                        iVar25 = (int)uVar22;
                        lVar10 = (longlong)iVar25;
                        uVar2 = puVar6[lVar10] & uVar27;
                        if (uVar2 == 0) {
                          iVar26 = iVar5 + 0x1e;
                          if (-1 < iVar5 + -1) {
                            iVar26 = iVar5 + -1;
                          }
                          iVar26 = iVar26 >> 5;
                          iVar14 = iVar26;
                          if (iVar26 < iVar25) {
                            iVar14 = iVar25;
                          }
                          if (iVar26 <= iVar25) break;
                          lVar7 = 0;
                          while( true ) {
                            iVar4 = iVar4 + 0x20;
                            uVar2 = puVar6[lVar10 + lVar7 + 1];
                            if (uVar2 != 0) break;
                            lVar7 = lVar7 + 1;
                            if (iVar14 - lVar10 == lVar7) goto LAB_141402b66;
                          }
                          uVar22 = (ulonglong)(iVar25 + (int)lVar7 + 1);
                          uVar27 = 0xffffffff;
                        }
                        uVar11 = (ulonglong)(-uVar2 & uVar2);
                        uVar19 = uVar11 * 2 + 1;
                        lVar10 = 0x3f;
                        if (uVar19 != 0) {
                          for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                          }
                        }
                        iVar25 = (iVar4 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
                      } while (iVar25 < iVar5);
                    }
                  }
                  else {
                    lVar28 = *(longlong *)(lVar28 + 0xe8);
                    puVar29 = (uint *)(lVar28 + lVar10 + 0x20);
                    iVar5 = *(int *)(lVar28 + lVar10 + 0x38);
                    if (iVar5 == 0) {
                      uVar11 = 1;
                      uVar22 = 0;
                      iVar26 = 0;
                      iVar4 = 0;
                    }
                    else {
                      puVar6 = *(uint **)(lVar28 + 0x30 + lVar10);
                      if (puVar6 == (uint *)0x0) {
                        puVar6 = puVar29;
                      }
                      uVar27 = *puVar6;
                      if (uVar27 == 0) {
                        iVar4 = iVar5 + 0x1e;
                        if (-1 < iVar5 + -1) {
                          iVar4 = iVar5 + -1;
                        }
                        uVar22 = 0;
                        uVar11 = (ulonglong)(uint)(iVar4 >> 5);
                        if (iVar4 >> 5 < 1) {
                          uVar11 = uVar22;
                        }
                        iVar26 = 0;
                        do {
                          local_1a4 = iVar25;
                          if (uVar11 == uVar22) goto LAB_141402b66;
                          iVar26 = iVar26 + 0x20;
                          uVar27 = puVar6[uVar22 + 1];
                          uVar22 = uVar22 + 1;
                        } while (uVar27 == 0);
                      }
                      else {
                        uVar22 = 0;
                        iVar26 = 0;
                      }
                      uVar11 = (ulonglong)(-uVar27 & uVar27);
                      uVar19 = uVar11 * 2 + 1;
                      lVar7 = 0x3f;
                      if (uVar19 != 0) {
                        for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                        }
                      }
                      iVar4 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                      if (iVar5 <= iVar4) {
                        iVar4 = iVar5;
                      }
                    }
                    local_1a4 = iVar25;
                    if (iVar4 < iVar5) {
                      lVar28 = lVar28 + lVar10;
                      uVar27 = 0xffffffff;
                      do {
                        lVar10 = *(longlong *)(lVar28 + 0x10);
                        lVar7 = (longlong)iVar4 * 0x20;
                        iVar25 = *(int *)(lVar10 + 8 + lVar7);
                        iVar4 = iVar25 + -1;
                        if (iVar25 == 0) {
                          iVar4 = 0;
                        }
                        if ((int)local_190 == 0) {
LAB_1414027e0:
                          FUN_1404740bc(&local_d8,&local_c8,lVar10 + lVar7);
                          lVar10 = (longlong)(int)uStack_120;
                          uVar2 = (int)uStack_120 + 1;
                          uStack_120 = CONCAT44(uStack_120._4_4_,uVar2);
                          if (uStack_120._4_4_ < uVar2) {
                            FUN_1447a1bd6(&local_128);
                          }
                          local_128[lVar10 * 2] = 0;
                          local_128[lVar10 * 2] = local_d8;
                          *(undefined4 *)(local_128 + lVar10 * 2 + 1) = (undefined4)local_d0;
                          *(undefined4 *)((longlong)local_128 + lVar10 * 0x10 + 0xc) =
                               local_d0._4_4_;
                          local_d0 = 0;
                          local_d8 = 0;
                          iVar5 = *(int *)(lVar28 + 0x38);
                        }
                        else {
                          iVar25 = iVar4;
                          if ((int)local_190 < iVar4) {
                            iVar25 = (int)local_190;
                          }
                          iVar14 = 0;
                          if (0 < iVar25) {
                            iVar14 = iVar25;
                          }
                          if ((int)local_190 == iVar14) {
                            if (0 < iVar25) {
                              lVar20 = 0;
                              uVar19 = local_158;
                              while( true ) {
                                uVar9 = *(ushort *)((longlong)param_4 + lVar20);
                                uVar13 = *(ushort *)
                                          (*(longlong *)(lVar10 + lVar7) + (longlong)iVar4 * 2 +
                                           local_160 * 2 + lVar20);
                                param_4 = local_1a0;
                                if (uVar9 != uVar13) break;
                                if ((uVar9 == 0) || (uVar19 == 1)) goto LAB_1414027e0;
LAB_1414027a0:
                                uVar19 = uVar19 - 1;
                                lVar20 = lVar20 + 2;
                              }
                              if ((uVar13 | uVar9) < 0x80) {
                                if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[(uint)uVar13]) {
                                  if (uVar19 != 1) goto LAB_1414027a0;
                                  goto LAB_1414027e0;
                                }
                                iVar25 = (uint)(byte)(&DAT_149e05da0)[uVar9] -
                                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar13];
                              }
                              else {
                                iVar25 = (uint)uVar9 - (uint)uVar13;
                              }
                              if (iVar25 != 0) goto LAB_14140287b;
                            }
                            goto LAB_1414027e0;
                          }
                        }
LAB_14140287b:
                        uVar27 = uVar27 & ~(uint)uVar11;
                        puVar6 = *(uint **)(lVar28 + 0x30);
                        if (*(uint **)(lVar28 + 0x30) == (uint *)0x0) {
                          puVar6 = puVar29;
                        }
                        iVar25 = (int)uVar22;
                        lVar10 = (longlong)iVar25;
                        uVar2 = puVar6[lVar10] & uVar27;
                        if (uVar2 == 0) {
                          iVar4 = iVar5 + 0x1e;
                          if (-1 < iVar5 + -1) {
                            iVar4 = iVar5 + -1;
                          }
                          iVar4 = iVar4 >> 5;
                          iVar14 = iVar4;
                          if (iVar4 < iVar25) {
                            iVar14 = iVar25;
                          }
                          if (iVar4 <= iVar25) break;
                          lVar7 = 0;
                          while( true ) {
                            iVar26 = iVar26 + 0x20;
                            uVar2 = puVar6[lVar10 + lVar7 + 1];
                            if (uVar2 != 0) break;
                            lVar7 = lVar7 + 1;
                            if (iVar14 - lVar10 == lVar7) goto LAB_141402b66;
                          }
                          uVar22 = (ulonglong)(iVar25 + (int)lVar7 + 1);
                          uVar27 = 0xffffffff;
                        }
                        uVar11 = (ulonglong)(-uVar2 & uVar2);
                        uVar19 = uVar11 * 2 + 1;
                        lVar10 = 0x3f;
                        if (uVar19 != 0) {
                          for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                          }
                        }
                        iVar4 = (iVar26 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
                      } while (iVar4 < iVar5);
                    }
                  }
LAB_141402b66:
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  iVar5 = *(int *)(local_198 + 0x110);
                  uVar11 = local_138;
                  uVar22 = local_180;
                  puVar29 = local_170;
                  lVar28 = local_198;
                  lVar10 = local_178;
                  iVar25 = local_1a4;
                }
                else {
                  lVar20 = (longlong)iVar4 * 0x68;
                  iVar14 = *(int *)(lVar7 + 8 + lVar20);
                  iVar24 = iVar14 + -1;
                  if (iVar14 == 0) {
                    iVar24 = 0;
                  }
                  iVar14 = iVar24;
                  if (iVar26 < iVar24) {
                    iVar14 = iVar26;
                  }
                  iVar8 = 0;
                  if (0 < iVar14) {
                    iVar8 = iVar14;
                  }
                  if (iVar26 <= iVar24) {
                    if (iVar14 < 1) {
                      iVar26 = iVar26 - iVar8;
                    }
                    else {
                      lVar23 = 0;
                      uVar19 = local_148;
                      while( true ) {
                        uVar9 = *(ushort *)(lVar10 + lVar23);
                        uVar13 = *(ushort *)(*(longlong *)(lVar20 + lVar7) + lVar23);
                        puVar29 = local_170;
                        if (uVar9 != uVar13) break;
                        if ((uVar9 == 0) || (uVar19 == 1)) goto LAB_141402505;
LAB_1414024c7:
                        uVar19 = uVar19 - 1;
                        lVar23 = lVar23 + 2;
                      }
                      uVar22 = local_180;
                      lVar10 = local_178;
                      if (0x7f < (uVar13 | uVar9)) {
                        iVar14 = (uint)uVar9 - (uint)uVar13;
LAB_141402c61:
                        iVar26 = (int)local_180 - iVar8;
                        local_1a4 = iVar25;
                        if (iVar14 != 0) {
                          iVar26 = iVar14;
                        }
                        goto LAB_141402520;
                      }
                      if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[(uint)uVar13]) {
                        iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar9] -
                                 (uint)(byte)(&DAT_149e05da0)[(uint)uVar13];
                        goto LAB_141402c61;
                      }
                      if (uVar19 != 1) goto LAB_1414024c7;
LAB_141402505:
                      iVar26 = (int)uVar22 - iVar8;
                      local_1a4 = iVar25;
                    }
LAB_141402520:
                    if (iVar26 == 0) goto LAB_141402529;
                  }
                }
                uVar27 = local_164 & ~(uint)local_130;
                puVar6 = *(uint **)(lVar28 + 0x108);
                if (*(uint **)(lVar28 + 0x108) == (uint *)0x0) {
                  puVar6 = puVar29;
                }
                iVar4 = (int)uVar11;
                lVar7 = (longlong)iVar4;
                uVar2 = puVar6[lVar7] & uVar27;
                if (uVar2 == 0) {
                  iVar26 = iVar5 + 0x1e;
                  if (-1 < iVar5 + -1) {
                    iVar26 = iVar5 + -1;
                  }
                  iVar26 = iVar26 >> 5;
                  iVar14 = iVar26;
                  if (iVar26 < iVar4) {
                    iVar14 = iVar4;
                  }
                  if (iVar26 <= iVar4) break;
                  lVar20 = 0;
                  while( true ) {
                    iVar25 = iVar25 + 0x20;
                    uVar2 = puVar6[lVar7 + lVar20 + 1];
                    if (uVar2 != 0) break;
                    lVar20 = lVar20 + 1;
                    if (iVar14 - lVar7 == lVar20) goto LAB_141402c80;
                  }
                  uVar11 = (ulonglong)(iVar4 + (int)lVar20 + 1);
                  uVar27 = 0xffffffff;
                }
                uVar19 = (ulonglong)(-uVar2 & uVar2);
                uVar16 = uVar19 * 2 + 1;
                lVar7 = 0x3f;
                if (uVar16 != 0) {
                  for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                iVar4 = (iVar25 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              } while (iVar4 < iVar5);
            }
LAB_141402c80:
            FUN_1447a1747(0,0);
          }
LAB_141402c8c:
          if (local_1a5 != '\0') {
            ReleaseSRWLockShared((PSRWLOCK)(lVar28 + 0x188));
          }
        }
LAB_141402cab:
        lVar10 = local_150;
        if (local_e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uStack_f0);
    }
    if ((longlong)(int)uStack_120 == 0) {
      uVar11 = 0;
    }
    else {
      lVar10 = (longlong)(int)uStack_120 << 4;
      puVar17 = local_128;
      do {
        local_d8 = local_d8 & 0xffffffffffffff00;
        FUN_14482b35e(&local_b8,&local_c8,puVar17,&local_d8);
        if ((char)local_d8 == '\0') {
          iVar5 = (int)local_188[1];
          *(uint *)(local_188 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)local_188 + 0xc) < iVar5 + 1U) {
            FUN_1447a1bd6(local_188,iVar5);
          }
          lVar28 = *local_188;
          lVar7 = (longlong)iVar5 * 0x10;
          puVar1 = (undefined8 *)(lVar28 + lVar7);
          *(undefined8 *)(lVar28 + lVar7) = 0;
          iVar5 = *(int *)(puVar17 + 1);
          _Src = (void *)*puVar17;
          *(int *)(lVar28 + 8 + lVar7) = iVar5;
          if ((longlong)iVar5 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar5,0);
            memcpy((void *)*puVar1,_Src,(longlong)iVar5 * 2);
          }
        }
        puVar17 = puVar17 + 2;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
      uVar11 = uStack_120 & 0xffffffff;
    }
    FUN_1447a1747(local_128,uVar11);
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (local_118 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_b8);
    uVar11 = uStack_f0 & 0xffffffff;
  }
  FUN_14482b2f5(local_f8,uVar11);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141402f6e caseD_1d body=5 status=ok
// SIG undefined caseD_1d(void)

void switchD_143c3d4dc::caseD_1d(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *puStack_30;
  int iStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (-1 < (short)*(undefined4 *)(param_1 + 8)) {
    uStack_20 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(&uStack_20,&puStack_30);
    puVar1 = puStack_30;
    if (iStack_28 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Obj.cpp",0x3ee,
                  L"Trying to call UObject::BeginDestroy from outside of UObject::ConditionalBeginDestroy on object %s. Please fix up the calling code."
                  ,puVar1);
    if (puStack_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1400f84b8(param_1,0,0xffffffff,1);
  FUN_1400f9b98(param_1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1400f8a51(param_1);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_140070ec4(param_1);
  }
  if ((uStack_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141402f74 FUN_141402f74 body=27 status=ok
// SIG undefined FUN_141402f74(void)

void FUN_141402f74(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = DAT_14cab2cd4;
  return;
}



// FUNCTION 141402f90 FUN_141402f90 body=29 status=ok
// SIG undefined FUN_141402f90(void)

void FUN_141402f90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x14) = param_2;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 141402fae FUN_141402fae body=62 status=ok
// SIG undefined FUN_141402fae(void)

void FUN_141402fae(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14a492a60;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}



// FUNCTION 141402fec FUN_141402fec body=228 status=ok
// SIG undefined FUN_141402fec(void)

longlong FUN_141402fec(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb94110 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f42;
    local_38 = &LAB_148a1401b;
    local_40 = &LAB_140d28e25;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior_VisibleAmmo",&DAT_14cb94110,FUN_1465757fc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb94110;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414030d2 FUN_1414030d2 body=972 status=ok
// SIG undefined FUN_1414030d2(void)

undefined8 * FUN_1414030d2(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140724c88();
  param_1[0x1a] = param_2;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = param_2;
  param_1[0x25] = 0;
  *param_1 = &PTR_FUN_14b431380;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  param_1[0x2d] = 0;
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x44)) {
    uVar3 = (uint)((ulonglong)DAT_14cb8ce80 >> 0x10);
    uVar7 = (uint)DAT_14cb8ce80 & 0xffff;
    lVar6 = param_3 + 0x48;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      lVar6 = *(longlong *)(param_3 + 0x50);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_3 + 0x58) - 1U &
                             (int)((ulonglong)DAT_14cb8ce80 >> 0x20) +
                             ((uint)DAT_14cb8ce80 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(param_3 + 0x10) + (longlong)iVar8 * 0x38;
        if (*(longlong *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar8 * 0x38) == DAT_14cb8ce80)
        {
          if (lVar6 != 0) {
            puVar9 = (undefined8 *)(lVar6 + 8);
            bVar1 = *(byte *)(lVar6 + 0x28);
            local_40 = *(ushort *)(lVar6 + 0x20);
            if (local_40 < 0x19) {
              ppppuVar5 = local_58;
            }
            else {
              ppppuVar5 = (undefined8 ****)FUN_14001cc68(local_40,0);
              puVar9 = (undefined8 *)*puVar9;
              local_58[0] = ppppuVar5;
            }
            uVar4 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
            if (pcVar2 == (code *)0x0) {
              memcpy(ppppuVar5,puVar9,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
            }
            else {
              (*pcVar2)(ppppuVar5,puVar9);
            }
            local_38 = *(byte *)(lVar6 + 0x28);
            goto LAB_14140323f;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x30);
      } while (iVar8 != -1);
    }
  }
  local_40 = 0;
  local_38 = 0;
LAB_14140323f:
  FUN_1405b801a(local_58,&local_70,&DAT_14c8464e0);
  param_1[0x2c] = local_60;
  *(undefined4 *)(param_1 + 0x2a) = local_70;
  *(undefined4 *)((longlong)param_1 + 0x154) = uStack_6c;
  *(undefined4 *)(param_1 + 0x2b) = uStack_68;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uStack_64;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar5 = local_58;
    if (0x18 < local_40) {
      ppppuVar5 = (undefined8 ****)local_58[0];
    }
    (*pcVar2)(ppppuVar5);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x44)) {
    uVar3 = (uint)((ulonglong)DAT_14cb8ce88 >> 0x10);
    uVar7 = (uint)DAT_14cb8ce88 & 0xffff;
    lVar6 = param_3 + 0x48;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      lVar6 = *(longlong *)(param_3 + 0x50);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_3 + 0x58) - 1U &
                             (int)((ulonglong)DAT_14cb8ce88 >> 0x20) +
                             ((uint)DAT_14cb8ce88 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(param_3 + 0x10) + (longlong)iVar8 * 0x38;
        if (*(longlong *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar8 * 0x38) == DAT_14cb8ce88)
        {
          if (lVar6 != 0) {
            puVar9 = (undefined8 *)(lVar6 + 8);
            bVar1 = *(byte *)(lVar6 + 0x28);
            local_40 = *(ushort *)(lVar6 + 0x20);
            if (local_40 < 0x19) {
              ppppuVar5 = local_58;
            }
            else {
              ppppuVar5 = (undefined8 ****)FUN_14001cc68(local_40,0);
              puVar9 = (undefined8 *)*puVar9;
              local_58[0] = ppppuVar5;
            }
            uVar4 = (ulonglong)((uint)bVar1 * 0x120);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
            if (pcVar2 == (code *)0x0) {
              memcpy(ppppuVar5,puVar9,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
            }
            else {
              (*pcVar2)(ppppuVar5,puVar9);
            }
            local_38 = *(byte *)(lVar6 + 0x28);
            goto LAB_141403381;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x30);
      } while (iVar8 != -1);
    }
  }
  local_40 = 0;
  local_38 = 0;
LAB_141403381:
  local_78 = 0;
  FUN_141250f7a(local_58,&local_70);
  param_1[0x2d] = CONCAT44(uStack_6c,local_70);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar5 = local_58;
    if (0x18 < local_40) {
      ppppuVar5 = (undefined8 ****)local_58[0];
    }
    (*pcVar2)(ppppuVar5);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1414034a0 FUN_1414034a0 body=620 status=ok
// SIG undefined FUN_1414034a0(void)

void FUN_1414034a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb4f0;
  param_1[0xb2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xc6];
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
  param_1[0x9c] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xb0];
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
  param_1[0x86] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9a];
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
  param_1[0x70] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x84];
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
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x6e];
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
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x000141403708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14140370c FUN_14140370c body=151 status=ok
// SIG undefined FUN_14140370c(void)

void FUN_14140370c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    FUN_14597db2c(param_1 + 0x58);
  }
  FUN_144345652(param_1);
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    FUN_1411cf6d8(param_1,local_38,1);
    FUN_14597db2c(lVar1 + 0x538,local_38);
    FUN_1457996ca(lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414037a4 FUN_1414037a4 body=16293 status=ok
// SIG undefined FUN_1414037a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1414037a4(undefined1 (*param_1) [16],undefined8 *param_2,undefined1 (*param_3) [16],
             undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  void *pvVar6;
  bool bVar7;
  longlong *plVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 **ppuVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 uVar14;
  ushort *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined2 *puVar19;
  undefined1 uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  wchar_t *pwVar27;
  int iVar28;
  longlong lVar29;
  undefined2 *puVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  short sVar33;
  undefined1 (*pauVar34) [16];
  uint uVar35;
  ulonglong uVar36;
  undefined8 *puVar37;
  int iVar38;
  longlong lVar39;
  undefined1 (*pauVar40) [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  undefined1 auStack_238 [32];
  undefined1 (*local_218) [16];
  undefined1 (*local_210) [16];
  uint local_204;
  undefined1 (*local_200) [16];
  longlong local_1f8;
  int local_1f0;
  wchar_t *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  ushort *local_1a0;
  uint local_198;
  undefined4 local_194;
  undefined2 *local_190;
  int local_188;
  undefined4 uStack_184;
  undefined2 **local_110;
  ulonglong local_108;
  undefined1 local_100 [96];
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_210 = param_1;
  local_200 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8445f0) && (FUN_144b3d300(&DAT_14c8445f0), DAT_14c8445f0 == -1)) {
    _DAT_14c8445e0 = (undefined1  [16])0x0;
    FUN_140056680(&local_190,&DAT_149dfb77a);
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141404cb7:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141404b62;
LAB_141404b33:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141404b33;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141404b62:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141404cb7;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141404dd1;
LAB_141404da2:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141404da2;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141404cb7;
LAB_141404dd1:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"en-US-POSIX";
    *(undefined1 (*) [16])(puVar37 + 3) = (undefined1  [16])0x0;
    FUN_140056680(&local_190,&DAT_149e18a00);
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141404f01:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141404ecd;
LAB_141404ea4:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141404ea4;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141404ecd:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141404f01;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_14140507c;
LAB_14140504d:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_14140504d;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141404f01;
LAB_14140507c:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"en-US-POSIX";
    *(undefined1 (*) [16])(puVar37 + 3) = (undefined1  [16])0x0;
    FUN_140056680(&local_190,L"posix");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_1414051a5:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141405178;
LAB_14140514f:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_14140514f;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141405178:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_1414051a5;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141405257;
LAB_141405228:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141405228;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_1414051a5;
LAB_141405257:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"en-US-POSIX";
    *(undefined1 (*) [16])(puVar37 + 3) = (undefined1  [16])0x0;
    FUN_140056680(&local_190,L"ca-ES-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141405386:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141405359;
LAB_14140532b:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_14140532b;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141405359:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141405386;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141405438;
LAB_141405409:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141405409;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141405386;
LAB_141405438:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"ca-ES";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18a2e;
    FUN_140056680(&local_190,L"de-AT-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_14140556d:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141405540;
LAB_141405517:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141405517;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141405540:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_14140556d;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_14140561f;
LAB_1414055f0:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_1414055f0;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_14140556d;
LAB_14140561f:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"de-AT";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18a5e;
    FUN_140056680(&local_190,L"de-DE-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141405754:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141405727;
LAB_1414056fe:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_1414056fe;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141405727:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141405754;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141405806;
LAB_1414057d7:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_1414057d7;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141405754;
LAB_141405806:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"de-DE";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18a8e;
    FUN_140056680(&local_190,L"de-LU-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_14140593b:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_14140590e;
LAB_1414058e5:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_1414058e5;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_14140590e:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_14140593b;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_1414059ed;
LAB_1414059be:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_1414059be;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_14140593b;
LAB_1414059ed:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"de-LU";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18abe;
    FUN_140056680(&local_190,L"el-GR-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141405b22:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141405af5;
LAB_141405acc:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141405acc;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141405af5:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141405b22;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141405bd4;
LAB_141405ba5:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141405ba5;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141405b22;
LAB_141405bd4:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"el-GR";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18aee;
    FUN_140056680(&local_190,L"en-BE-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141405d09:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141405cdc;
LAB_141405cb3:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141405cb3;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141405cdc:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141405d09;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141405dbb;
LAB_141405d8c:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141405d8c;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141405d09;
LAB_141405dbb:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"en-BE";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18b1e;
    FUN_140056680(&local_190,L"en-IE-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141405ef0:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141405ec3;
LAB_141405e9a:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141405e9a;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141405ec3:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141405ef0;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141405fa2;
LAB_141405f73:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141405f73;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141405ef0;
LAB_141405fa2:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"en-IE";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18b4e;
    FUN_140056680(&local_190,L"es-ES-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_1414060d7:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_1414060aa;
LAB_141406081:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141406081;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_1414060aa:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_1414060d7;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141406189;
LAB_14140615a:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_14140615a;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_1414060d7;
LAB_141406189:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = &DAT_149e18b72;
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18a2e;
    FUN_140056680(&local_190,L"eu-ES-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_1414062be:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141406291;
LAB_141406268:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141406268;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141406291:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_1414062be;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141406370;
LAB_141406341:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141406341;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_1414062be;
LAB_141406370:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"eu-ES";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18a2e;
    FUN_140056680(&local_190,L"fi-FI-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_1414064a5:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141406478;
LAB_14140644f:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_14140644f;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141406478:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_1414064a5;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141406557;
LAB_141406528:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141406528;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_1414064a5;
LAB_141406557:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"fi-FI";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18bce;
    FUN_140056680(&local_190,L"fr-BE-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_14140668c:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_14140665f;
LAB_141406636:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141406636;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_14140665f:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_14140668c;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_14140673e;
LAB_14140670f:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_14140670f;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_14140668c;
LAB_14140673e:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"fr-BE";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18b1e;
    FUN_140056680(&local_190,L"fr-FR-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141406873:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141406846;
LAB_14140681d:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_14140681d;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141406846:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141406873;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141406925;
LAB_1414068f6:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_1414068f6;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141406873;
LAB_141406925:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"fr-FR";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18c26;
    FUN_140056680(&local_190,L"fr-LU-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141406a5a:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141406a2d;
LAB_141406a04:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141406a04;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141406a2d:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141406a5a;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141406b0c;
LAB_141406add:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141406add;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141406a5a;
LAB_141406b0c:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"fr-LU";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18abe;
    FUN_140056680(&local_190,L"ga-IE-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141406c41:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141406c14;
LAB_141406beb:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141406beb;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141406c14:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141406c41;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141406cf3;
LAB_141406cc4:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141406cc4;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141406c41;
LAB_141406cf3:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"ga-IE";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18b4e;
    FUN_140056680(&local_190,L"gl-ES-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_141406e28:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141406dfb;
LAB_141406dd2:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141406dd2;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141406dfb:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_141406e28;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141406eda;
LAB_141406eab:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141406eab;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_141406e28;
LAB_141406eda:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"gl-ES";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18a2e;
    FUN_140056680(&local_190,L"it-IT-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_14140700f:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141406fe2;
LAB_141406fb9:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141406fb9;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_141406fe2:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_14140700f;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_1414070c1;
LAB_141407092:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141407092;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_14140700f;
LAB_1414070c1:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"it-IT";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18cce;
    FUN_140056680(&local_190,L"nl-BE-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_1414071f6:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)local_218;
      do {
        uVar25 = (int)(uVar26 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)uVar26;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_1414071c9;
LAB_1414071a0:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_1414071a0;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_1414071c9:
        uVar26 = uVar26 >> 1;
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_1414071f6;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_1414072a8;
LAB_141407279:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141407279;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_1414071f6;
LAB_1414072a8:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"nl-BE";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18b1e;
    FUN_140056680(&local_190,L"nl-NL-PREEURO");
    uVar21 = DAT_14c8445e8;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar23 = 0;
LAB_1414073dd:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,local_218);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = (ulonglong)uVar23 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)((int)local_218 - uVar23) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar23 = 0;
      pauVar34 = local_218;
      do {
        uVar25 = (int)(undefined1 (*) [16])((ulonglong)pauVar34 >> 1) + uVar23;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        uVar35 = (uint)pauVar34;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_1414073b0;
LAB_141407387:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141407387;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar23 = uVar25 + (uVar35 & 1);
        }
LAB_1414073b0:
        pauVar34 = (undefined1 (*) [16])((ulonglong)pauVar34 >> 1);
      } while (1 < uVar35);
      if ((int)DAT_14c8445e8 <= (int)uVar23) goto LAB_1414073dd;
      uVar26 = (ulonglong)uVar23;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar25 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_14140748f;
LAB_141407460:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141407460;
      }
      if ((int)(uVar25 - uVar35) < 0) goto LAB_1414073dd;
LAB_14140748f:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    local_190 = (undefined2 *)0x0;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"nl-NL";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18d26;
    FUN_140056680(&local_190,L"pt-PT-PREEURO");
    uVar21 = DAT_14c8445e8;
    if ((int)DAT_14c8445e8 < 1) {
      uVar26 = 0;
LAB_1414075ba:
      DAT_14c8445e8 = DAT_14c8445e8 + 1;
      lVar39 = DAT_14c8445e0;
      if (DAT_14c8445ec == uVar21) {
        FUN_14276149a(&DAT_14c8445e0,uVar21);
        lVar39 = DAT_14c8445e0;
      }
      lVar29 = uVar26 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)(uVar21 - (int)uVar26) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445e0);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar26 = 0;
      uVar16 = (ulonglong)DAT_14c8445e8;
      uVar23 = DAT_14c8445e8;
      do {
        uVar16 = uVar16 >> 1;
        uVar25 = (uint)uVar16 + (int)uVar26;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar25 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar25 * 0x28);
        }
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar18 = (uint)uVar4;
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          uVar35 = (uint)uVar5;
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141407595;
LAB_14140756a:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_14140756a;
        }
        if ((int)(uVar18 - uVar35) < 0) {
          uVar26 = (ulonglong)(uVar25 + (uVar23 & 1));
        }
LAB_141407595:
        bVar7 = 1 < uVar23;
        uVar23 = (uint)uVar16;
      } while (bVar7);
      if ((int)DAT_14c8445e8 <= (int)uVar26) goto LAB_1414075ba;
      if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445e0 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar23 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar25 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141407664;
LAB_141407635:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141407635;
      }
      if ((int)(uVar23 - uVar25) < 0) goto LAB_1414075ba;
LAB_141407664:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = L"pt-PT";
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18d56;
    atexit(FUN_14275fd25);
    _Init_thread_footer(&DAT_14c8445f0);
    param_1 = local_210;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844608) && (FUN_144b3d300(&DAT_14c844608), DAT_14c844608 == -1)) {
    _DAT_14c8445f8 = (undefined1  [16])0x0;
    FUN_140056680(&local_190,L"EURO");
    uVar21 = DAT_14c844600;
    local_218 = (undefined1 (*) [16])(ulonglong)DAT_14c844600;
    if ((int)DAT_14c844600 < 1) {
      uVar26 = 0;
LAB_141404d1c:
      DAT_14c844600 = DAT_14c844600 + 1;
      lVar39 = DAT_14c8445f8;
      if (DAT_14c844604 == uVar21) {
        FUN_14276149a(&DAT_14c8445f8,local_218);
        lVar39 = DAT_14c8445f8;
      }
      lVar29 = uVar26 * 0x28;
      memmove((void *)(lVar39 + lVar29 + 0x28),(void *)(lVar39 + lVar29),
              (ulonglong)(uint)((int)local_218 - (int)uVar26) * 0x28);
      puVar37 = (undefined8 *)(lVar29 + DAT_14c8445f8);
    }
    else {
      puVar30 = &DAT_149dfb77a;
      if (local_188 != 0) {
        puVar30 = local_190;
      }
      uVar26 = 0;
      pauVar34 = local_218;
      do {
        uVar23 = (int)(undefined1 (*) [16])((ulonglong)pauVar34 >> 1) + (int)uVar26;
        puVar19 = &DAT_149dfb77a;
        if (*(int *)(DAT_14c8445f8 + 8 + (ulonglong)uVar23 * 0x28) != 0) {
          puVar19 = *(undefined2 **)(DAT_14c8445f8 + (ulonglong)uVar23 * 0x28);
        }
        uVar25 = (uint)pauVar34;
        lVar39 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
          uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
          if (uVar4 != uVar5) break;
          if (uVar4 == 0) goto LAB_141404c5d;
LAB_141404c30:
          lVar39 = lVar39 + 2;
        }
        if ((uVar5 | uVar4) < 0x80) {
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_141404c30;
          iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
        }
        else {
          iVar38 = (uint)uVar4 - (uint)uVar5;
        }
        if (iVar38 < 0) {
          uVar26 = (ulonglong)(uVar23 + (uVar25 & 1));
        }
LAB_141404c5d:
        pauVar34 = (undefined1 (*) [16])((ulonglong)pauVar34 >> 1);
      } while (1 < uVar25);
      if ((int)DAT_14c844600 <= (int)uVar26) goto LAB_141404d1c;
      if (*(int *)(DAT_14c8445f8 + 8 + uVar26 * 0x28) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = *(undefined2 **)(DAT_14c8445f8 + uVar26 * 0x28);
      }
      puVar37 = (undefined8 *)(DAT_14c8445f8 + uVar26 * 0x28);
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar23 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar25 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141404fb6;
LAB_141404f87:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141404f87;
      }
      if ((int)(uVar23 - uVar25) < 0) goto LAB_141404d1c;
LAB_141404fb6:
      FUN_14276146f(puVar37,1);
    }
    *puVar37 = local_190;
    *(int *)(puVar37 + 1) = local_188;
    *(undefined4 *)((longlong)puVar37 + 0xc) = uStack_184;
    puVar37[2] = 0;
    puVar37[3] = L"currency";
    puVar37[4] = &DAT_149e18d7a;
    atexit(FUN_14275fd56);
    _Init_thread_footer(&DAT_14c844608);
    param_1 = local_210;
  }
  local_198 = *(uint *)(param_2 + 1);
  lVar39 = (longlong)(int)local_198;
  uVar26 = (ulonglong)local_198;
  local_1a0 = (ushort *)0x0;
  pvVar6 = (void *)*param_2;
  if (lVar39 < 2) {
    if (uVar26 == 0) {
      local_194 = 0;
      param_1 = local_210;
      uVar21 = local_198;
    }
    else {
      FUN_1446dd670(&local_1a0,local_198,0);
      memcpy(local_1a0,pvVar6,lVar39 * 2);
      param_1 = local_210;
      uVar21 = local_198;
    }
  }
  else {
    FUN_1446dd670(&local_1a0,uVar26,0);
    memcpy(local_1a0,pvVar6,uVar26 * 2);
    uVar23 = local_198;
    puVar15 = local_1a0;
    uVar26 = (ulonglong)(int)local_198;
    uVar21 = local_198;
    if (uVar26 != 0) {
      uVar4 = *local_1a0;
      uVar21 = 0;
      if (uVar4 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        if ((9 < (ushort)(uVar4 - 0x30)) && (0x19 < (ushort)((uVar4 & 0xffdf) - 0x41))) {
          uVar16 = 1;
          if ((ushort)(uVar4 - 0x2d) < 0x33) {
            uVar16 = 0x3fffffff6bffc >> ((byte)(uVar4 - 0x2d) & 0x3f);
          }
        }
      }
      uVar36 = 0;
LAB_1414038eb:
      uVar25 = (uint)uVar36;
      uVar36 = (ulonglong)(uVar25 + 1);
      if ((int)(uVar25 + 1) < (int)uVar23) goto code_r0x0001414038f8;
      if ((uVar16 & 1) == 0) {
        bVar7 = false;
        goto LAB_14140397b;
      }
    }
  }
LAB_1414039c4:
  local_198 = uVar21;
  FUN_1412ab498(param_4,&local_190,&local_1a0);
  puVar30 = local_190;
  plVar8 = (longlong *)CONCAT44(uStack_184,local_188);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)();
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  puVar15 = local_1a0;
  if (puVar30 != (undefined2 *)0x0) {
    *(undefined8 *)*param_1 = 0;
    lVar39 = (longlong)(int)local_198;
    *(uint *)(*param_1 + 8) = local_198;
    if (lVar39 == 0) {
      *(undefined4 *)(*param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,local_198,0);
      memcpy(*(void **)*param_1,puVar15,lVar39 * 2);
    }
    goto LAB_1414049be;
  }
  local_a0 = (undefined1 *)0x0;
  local_98 = 0x400000000;
  local_110 = (undefined2 **)0x0;
  local_108 = 0x400000000;
  local_1b8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  lVar39 = (longlong)(int)local_198;
  if (lVar39 == 0) {
    iVar38 = -1;
  }
  else {
    lVar29 = lVar39 * 2;
    lVar22 = 0;
    do {
      if (local_1a0[lVar22] == 0x40) goto LAB_141403ac5;
      lVar22 = lVar22 + 1;
      lVar29 = lVar29 + -2;
    } while (lVar29 != 0);
    lVar22 = 0xffffffff;
LAB_141403ac5:
    iVar38 = (int)lVar22;
    lVar39 = lVar39 * 2;
    lVar29 = 0;
    do {
      if (local_1a0[lVar29] == 0x2e) {
        iVar10 = local_198 - 1;
        if (local_198 == 0) {
          iVar10 = 0;
        }
        iVar28 = (int)lVar29;
        if ((int)lVar29 == -1) {
          iVar28 = iVar10;
        }
        goto LAB_141403b16;
      }
      lVar29 = lVar29 + 1;
      lVar39 = lVar39 + -2;
    } while (lVar39 != 0);
  }
  iVar28 = local_198 - 1;
  iVar10 = local_198 - 1;
  if (local_198 == 0) {
    iVar28 = 0;
    iVar10 = 0;
  }
LAB_141403b16:
  iVar13 = iVar38;
  if (iVar38 == -1) {
    iVar13 = iVar10;
  }
  if (iVar28 <= iVar13) {
    iVar13 = iVar28;
  }
  if (local_198 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  if (iVar10 <= iVar13) {
    iVar13 = iVar10;
  }
  iVar10 = 0;
  if (0 < iVar13) {
    iVar10 = iVar13;
  }
  FUN_14006620a(local_1d8,puVar15,iVar10);
  if (local_1b8._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_1b8 = local_1d8;
  if ((longlong)(int)local_1d8._8_4_ != 0) {
    lVar39 = 0;
    do {
      sVar33 = *(short *)(local_1d8._0_8_ + lVar39);
      if (sVar33 == 0x5f) {
        sVar33 = 0x2d;
      }
      *(short *)(local_1d8._0_8_ + lVar39) = sVar33;
      lVar39 = lVar39 + 2;
    } while ((longlong)(int)local_1d8._8_4_ * 2 != lVar39);
  }
  if (iVar38 != -1) {
    uVar21 = local_198 - 1;
    puVar15 = local_1a0;
    if (local_198 == 0) {
      uVar21 = 0;
      puVar15 = &DAT_149dfb77a;
    }
    uVar23 = iVar38 + 1U;
    if ((int)uVar21 <= (int)(iVar38 + 1U)) {
      uVar23 = uVar21;
    }
    uVar26 = (ulonglong)uVar23;
    if ((int)uVar23 < 1) {
      uVar26 = 0;
    }
    FUN_14006620a(local_1d8,puVar15 + uVar26,uVar21 - (int)uVar26);
    if (local_1c8._0_8_ != 0) {
      FUN_1400020a8();
    }
    local_1c8 = local_1d8;
  }
  if ((int)DAT_14c8445e8 < 1) {
    uVar21 = 0;
  }
  else {
    puVar30 = &DAT_149dfb77a;
    if (local_1b8._8_4_ != 0) {
      puVar30 = (undefined2 *)local_1b8._0_8_;
    }
    uVar21 = 0;
    uVar26 = (ulonglong)DAT_14c8445e8;
    do {
      uVar23 = (int)(uVar26 >> 1) + uVar21;
      puVar19 = &DAT_149dfb77a;
      if (*(int *)(DAT_14c8445e0 + 8 + (ulonglong)uVar23 * 0x28) != 0) {
        puVar19 = *(undefined2 **)(DAT_14c8445e0 + (ulonglong)uVar23 * 0x28);
      }
      uVar25 = (uint)uVar26;
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
        uVar18 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_141403cb2;
LAB_141403c85:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141403c85;
      }
      if ((int)(uVar18 - uVar35) < 0) {
        uVar21 = uVar23 + (uVar25 & 1);
      }
LAB_141403cb2:
      uVar26 = uVar26 >> 1;
    } while (1 < uVar25);
  }
  if ((int)uVar21 < (int)DAT_14c8445e8) {
    uVar26 = (ulonglong)uVar21;
    puVar30 = &DAT_149dfb77a;
    if (*(int *)(DAT_14c8445e0 + 8 + uVar26 * 0x28) != 0) {
      puVar30 = *(undefined2 **)(DAT_14c8445e0 + uVar26 * 0x28);
    }
    puVar19 = &DAT_149dfb77a;
    if (local_1b8._8_4_ != 0) {
      puVar19 = (undefined2 *)local_1b8._0_8_;
    }
    lVar39 = 0;
    while( true ) {
      uVar4 = *(ushort *)((longlong)puVar19 + lVar39);
      uVar23 = (uint)uVar4;
      uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
      uVar21 = (uint)uVar5;
      if (uVar4 != uVar5) break;
      if (uVar4 == 0) goto LAB_141403d3b;
LAB_141403d12:
      lVar39 = lVar39 + 2;
    }
    if ((uVar5 | uVar4) < 0x80) {
      uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
      uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar5];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141403d12;
    }
    if ((int)(uVar23 - uVar21) < 0) goto LAB_141403d69;
LAB_141403d3b:
    lVar39 = DAT_14c8445e0 + uVar26 * 0x28;
    if ((((undefined8 *)(lVar39 + 0x10) != (undefined8 *)0x0) &&
        (FUN_14020fad6(local_1b8,*(undefined8 *)(lVar39 + 0x10)), *(longlong *)(lVar39 + 0x18) != 0)
        ) && (*(longlong *)(lVar39 + 0x20) != 0)) {
      FUN_140056680(local_1d8);
      FUN_140056680(&local_1e8,*(undefined8 *)(lVar39 + 0x18));
      FUN_1467d988e(&local_190,&local_1e8,local_1d8);
      if (local_1e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_1d8._0_8_ != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_141403d69:
  auVar43 = pmovsxbd(unaff_XMM6,0xbfbfbfbf);
  auVar44 = pmovsxbd(unaff_XMM7,0x19191919);
  auVar45 = pmovsxbw(unaff_XMM8,0x2020202020202020);
  uVar21 = 0;
  do {
    uVar26 = 0;
    uVar23 = local_1b8._8_4_ - 1;
    if (local_1b8._8_4_ == 0) {
      uVar23 = 0;
    }
    lVar39 = (longlong)(int)uVar21;
    uVar16 = (ulonglong)(int)uVar23;
    uVar25 = uVar21;
    if ((int)uVar21 < (int)uVar23) {
      lVar29 = 0;
      do {
        if (*(short *)(local_1b8._0_8_ + (lVar39 + lVar29) * 2) == 0x2d) {
          uVar25 = (int)lVar29 + uVar21;
          break;
        }
        lVar29 = lVar29 + 1;
        uVar25 = uVar23;
      } while (uVar16 - lVar39 != lVar29);
    }
    if ((int)(uVar25 - uVar21) < 0) {
      local_1d8 = ZEXT816(0);
    }
    else {
      uVar35 = uVar21;
      if ((int)uVar23 <= (int)uVar21) {
        uVar35 = uVar23;
      }
      uVar36 = (ulonglong)uVar35;
      if ((int)uVar35 < 1) {
        uVar36 = uVar26;
      }
      uVar31 = (ulonglong)(uVar25 - uVar21) + lVar39;
      if ((longlong)uVar16 <= (longlong)uVar31) {
        uVar31 = uVar16;
      }
      if ((longlong)uVar31 < (longlong)uVar36) {
        uVar31 = uVar36;
      }
      puVar30 = &DAT_149dfb77a;
      if (local_1b8._8_4_ != 0) {
        puVar30 = (undefined2 *)local_1b8._0_8_;
      }
      FUN_14006620a(local_1d8,puVar30 + uVar36,(int)uVar31 - (int)uVar36);
    }
    uVar16 = local_98;
    uVar14 = local_1d8._8_4_;
    uVar17 = local_1d8._0_8_;
    if ((local_98 & 0xffffffff) == 1) {
      puVar12 = local_a0;
      if (local_a0 == (undefined1 *)0x0) {
        puVar12 = local_100;
      }
      if (local_1d8._8_4_ != 5 || puVar12[0x10] != '\0') {
LAB_141403f53:
        puVar12 = local_a0;
        if (local_a0 == (undefined1 *)0x0) {
          puVar12 = local_100;
        }
        if ((byte)puVar12[(local_98 & 0xffffffff) * 0x18 + -8] < 2) {
          uVar36 = (ulonglong)(local_1d8._8_4_ - 1);
          if (local_1d8._8_4_ == 0) {
            uVar36 = uVar26;
          }
          if (((uint)uVar36 & 0xfffffffe) == 2) {
            uVar26 = 0;
            do {
              uVar4 = *(ushort *)(local_1d8._0_8_ + uVar26 * 2);
              *(ushort *)(local_1d8._0_8_ + uVar26 * 2) =
                   uVar4 + (ushort)(0x19 < uVar4 - 0x61) * 0x20 + -0x20;
              uVar26 = uVar26 + 1;
              uVar20 = 2;
            } while (uVar36 != uVar26);
            goto LAB_14140412a;
          }
        }
        goto LAB_141403fc0;
      }
      uVar26 = *(ulonglong *)local_1d8._0_8_;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar26;
      auVar41 = pmovzxwd(in_XMM1,auVar41);
      in_XMM1._0_4_ = auVar41._0_4_ + auVar43._0_4_;
      in_XMM1._4_4_ = auVar41._4_4_ + auVar43._4_4_;
      in_XMM1._8_4_ = auVar41._8_4_ + auVar43._8_4_;
      in_XMM1._12_4_ = auVar41._12_4_ + auVar43._12_4_;
      uVar21 = auVar44._0_4_;
      uVar23 = auVar44._4_4_;
      uVar35 = auVar44._8_4_;
      uVar18 = auVar44._12_4_;
      auVar42._0_4_ =
           -(uint)(((uVar21 < in_XMM1._0_4_) * uVar21 | (uVar21 >= in_XMM1._0_4_) * in_XMM1._0_4_)
                  == in_XMM1._0_4_);
      auVar42._4_4_ =
           -(uint)(((uVar23 < in_XMM1._4_4_) * uVar23 | (uVar23 >= in_XMM1._4_4_) * in_XMM1._4_4_)
                  == in_XMM1._4_4_);
      auVar42._8_4_ =
           -(uint)(((uVar35 < in_XMM1._8_4_) * uVar35 | (uVar35 >= in_XMM1._8_4_) * in_XMM1._8_4_)
                  == in_XMM1._8_4_);
      auVar42._12_4_ =
           -(uint)(((uVar18 < in_XMM1._12_4_) * uVar18 | (uVar18 >= in_XMM1._12_4_) * in_XMM1._12_4_
                   ) == in_XMM1._12_4_);
      auVar41 = packssdw(auVar42,auVar42);
      auVar41 = auVar41 & auVar45;
      *(ulonglong *)local_1d8._0_8_ =
           CONCAT26(auVar41._6_2_ + (short)(uVar26 >> 0x30),
                    CONCAT24(auVar41._4_2_ + (short)(uVar26 >> 0x20),
                             CONCAT22(auVar41._2_2_ + (short)(uVar26 >> 0x10),
                                      auVar41._0_2_ + (short)uVar26)));
      uVar20 = 1;
      if (local_1d8._8_4_ - 2 < 0x7fffffff) {
        *(ushort *)local_1d8._0_8_ =
             *(ushort *)local_1d8._0_8_ + (ushort)(0x19 < *(ushort *)local_1d8._0_8_ - 0x61) * 0x20
             + -0x20;
      }
LAB_14140412a:
      if (local_1d8._8_4_ - 2 < 0x7fffffff) {
        uVar9 = local_1d8._12_4_;
        local_1d8 = ZEXT816(0);
        lVar39 = (longlong)(int)local_98;
        uVar21 = (int)local_98 + 1;
        local_98 = CONCAT44(local_98._4_4_,uVar21);
        if (local_98._4_4_ < uVar21) {
          FUN_14276196a(local_100,uVar16 & 0xffffffff);
        }
        puVar12 = local_a0;
        if (local_a0 == (undefined1 *)0x0) {
          puVar12 = local_100;
        }
        *(undefined8 *)(puVar12 + lVar39 * 0x18) = uVar17;
        *(undefined4 *)(puVar12 + lVar39 * 0x18 + 8) = uVar14;
        *(undefined4 *)(puVar12 + lVar39 * 0x18 + 0xc) = uVar9;
        puVar12[lVar39 * 0x18 + 0x10] = uVar20;
      }
    }
    else {
      if ((int)local_98 == 0) {
        uVar36 = (ulonglong)(local_1d8._8_4_ - 1);
        if (local_1d8._8_4_ == 0) {
          uVar36 = uVar26;
        }
        if (((uint)uVar36 & 0xfffffffe) == 2) {
          uVar26 = 0;
          do {
            uVar4 = *(ushort *)(local_1d8._0_8_ + uVar26 * 2);
            *(ushort *)(local_1d8._0_8_ + uVar26 * 2) = (ushort)(uVar4 - 0x41 < 0x1a) * 0x20 + uVar4
            ;
            uVar26 = uVar26 + 1;
          } while (uVar36 != uVar26);
          uVar20 = 0;
          goto LAB_14140412a;
        }
      }
      else if ((int)local_98 - 1U < 2) goto LAB_141403f53;
LAB_141403fc0:
      uVar21 = local_1d8._8_4_ - 1;
      if (local_1d8._8_4_ == 0) {
        uVar21 = 0;
      }
      if (0 < (int)uVar21) {
        uVar26 = 0;
        do {
          uVar4 = *(ushort *)(local_1d8._0_8_ + uVar26 * 2);
          *(ushort *)(local_1d8._0_8_ + uVar26 * 2) =
               uVar4 + (ushort)(0x19 < uVar4 - 0x61) * 0x20 + -0x20;
          uVar26 = uVar26 + 1;
        } while (uVar21 != uVar26);
      }
      if ((int)DAT_14c844600 < 1) {
        uVar21 = 0;
      }
      else {
        puVar32 = (ulonglong *)&DAT_149dfb77a;
        if (local_1d8._8_4_ != 0) {
          puVar32 = (ulonglong *)local_1d8._0_8_;
        }
        uVar21 = 0;
        uVar26 = (ulonglong)DAT_14c844600;
        do {
          uVar23 = (int)(uVar26 >> 1) + uVar21;
          puVar30 = &DAT_149dfb77a;
          if (*(int *)(DAT_14c8445f8 + 8 + (ulonglong)uVar23 * 0x28) != 0) {
            puVar30 = *(undefined2 **)(DAT_14c8445f8 + (ulonglong)uVar23 * 0x28);
          }
          uVar35 = (uint)uVar26;
          lVar39 = 0;
          while( true ) {
            uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
            uVar24 = (uint)uVar4;
            uVar5 = *(ushort *)((longlong)puVar32 + lVar39);
            uVar18 = (uint)uVar5;
            if (uVar4 != uVar5) break;
            if (uVar4 == 0) goto LAB_14140408b;
LAB_141404063:
            lVar39 = lVar39 + 2;
          }
          if ((uVar5 | uVar4) < 0x80) {
            uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_141404063;
          }
          if ((int)(uVar24 - uVar18) < 0) {
            uVar21 = uVar23 + (uVar35 & 1);
          }
LAB_14140408b:
          uVar26 = uVar26 >> 1;
        } while (1 < uVar35);
      }
      uVar20 = 3;
      if ((int)DAT_14c844600 <= (int)uVar21) goto LAB_14140412a;
      puVar30 = &DAT_149dfb77a;
      if (*(int *)(DAT_14c8445f8 + 8 + (ulonglong)uVar21 * 0x28) != 0) {
        puVar30 = *(undefined2 **)(DAT_14c8445f8 + (ulonglong)uVar21 * 0x28);
      }
      puVar32 = (ulonglong *)&DAT_149dfb77a;
      if (local_1d8._8_4_ != 0) {
        puVar32 = (ulonglong *)local_1d8._0_8_;
      }
      lVar39 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar32 + lVar39);
        uVar23 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
        uVar35 = (uint)uVar5;
        if (uVar4 != uVar5) break;
        if (uVar4 == 0) goto LAB_14140410a;
LAB_1414040df:
        lVar39 = lVar39 + 2;
      }
      if ((uVar5 | uVar4) < 0x80) {
        uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar4];
        uVar35 = (uint)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_1414040df;
      }
      if ((int)(uVar23 - uVar35) < 0) goto LAB_14140412a;
LAB_14140410a:
      lVar39 = DAT_14c8445f8 + (longlong)(int)uVar21 * 0x28;
      if (lVar39 == -0x10 || uVar21 == 0xffffffff) goto LAB_14140412a;
      FUN_140056680(&local_1e8,*(undefined8 *)(lVar39 + 0x20));
      FUN_140056680(&local_1f8,*(undefined8 *)(lVar39 + 0x18));
      FUN_1467d988e(&local_190,&local_1f8,&local_1e8);
      if (local_1f8 != 0) {
        FUN_1400020a8();
      }
      if (local_1e8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_1d8._0_8_ != 0) {
      FUN_1400020a8();
    }
    uVar21 = uVar25 + 1;
    iVar38 = local_1b8._8_4_ + -1;
    if (local_1b8._8_4_ == 0) {
      iVar38 = 0;
    }
  } while ((int)uVar21 < iVar38);
  local_1d8 = (undefined1  [16])0x0;
  FUN_1403de9f2(local_1c8,local_1d8,&DAT_149e06120,1);
  if ((longlong)(int)local_1d8._8_4_ == 0) {
    uVar14 = 0;
  }
  else {
    pauVar34 = (undefined1 (*) [16])(local_1d8._0_8_ + (longlong)(int)local_1d8._8_4_ * 0x10);
    pauVar40 = (undefined1 (*) [16])local_1d8._0_8_;
    local_218 = pauVar34;
    do {
      uVar26 = local_98;
      uVar21 = 0;
      lVar39 = *(longlong *)*pauVar40;
      iVar38 = *(int *)(*pauVar40 + 8);
      if ((longlong)iVar38 != 0) {
        lVar29 = (longlong)iVar38 * 2;
        lVar22 = 0;
LAB_14140429e:
        if (*(short *)(lVar39 + lVar22 * 2) != 0x3d) goto code_r0x0001414042a6;
        uVar23 = (uint)lVar22;
        if (uVar23 == 0xffffffff) goto LAB_1414044d4;
        uVar25 = iVar38 - 1;
        if (iVar38 == 0) {
          uVar25 = uVar21;
        }
        if ((int)uVar23 < (int)uVar25) {
          uVar25 = uVar23;
        }
        if ((int)uVar25 < 1) {
          uVar25 = uVar21;
        }
        FUN_14006620a(&local_1e8,lVar39,uVar25);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844b40) && (FUN_144b3d300(), DAT_14c844b40 == -1)) {
          FUN_140056680(&DAT_14c844b00,L"calendar");
          FUN_140056680(&DAT_14c844b10,L"collation");
          FUN_140056680(&DAT_14c844b20,L"currency");
          FUN_140056680(&DAT_14c844b30,L"numbers");
          atexit(FUN_142761605);
          _Init_thread_footer();
        }
        iVar38 = local_1e0;
        pwVar27 = local_1e8;
        uVar25 = local_1e0 - 1;
        if (local_1e0 == 0) {
          uVar25 = uVar21;
        }
        if (0 < (int)uVar25) {
          uVar26 = 0;
          do {
            local_1e8[uVar26] =
                 (ushort)((ushort)local_1e8[uVar26] - 0x41 < 0x1a) * 0x20 + local_1e8[uVar26];
            uVar26 = uVar26 + 1;
          } while (uVar25 != uVar26);
        }
        lVar39 = 0;
        do {
          if (iVar38 == *(int *)((longlong)&DAT_14c844b08 + lVar39)) {
            if ((1 < iVar38) &&
               (iVar10 = wcscmp(pwVar27,*(wchar_t **)((longlong)&DAT_14c844b00 + lVar39)),
               iVar10 != 0)) goto LAB_141404379;
            goto LAB_1414043ad;
          }
          if (*(int *)((longlong)&DAT_14c844b08 + lVar39) + iVar38 == 1) goto LAB_1414043ad;
LAB_141404379:
          lVar39 = lVar39 + 0x10;
        } while (lVar39 != 0x40);
        local_1e0 = 0;
        if (local_1dc < 0) {
          FUN_1446f8c06(&local_1e8,0);
          pwVar27 = local_1e8;
        }
        if (pwVar27 != (wchar_t *)0x0) {
          *pwVar27 = L'\0';
        }
LAB_1414043ad:
        iVar38 = *(int *)(*pauVar40 + 8);
        puVar30 = &DAT_149dfb77a;
        if (iVar38 != 0) {
          puVar30 = *(undefined2 **)*pauVar40;
        }
        uVar21 = iVar38 - 1;
        if (iVar38 == 0) {
          uVar21 = 0;
        }
        uVar25 = uVar23 + 1;
        if ((int)uVar21 <= (int)(uVar23 + 1)) {
          uVar25 = uVar21;
        }
        if ((int)uVar25 < 1) {
          uVar25 = 0;
        }
        FUN_14006620a(&local_1f8,puVar30 + uVar25);
        if ((local_1e0 - 2U < 0x7fffffff) && (local_1f0 - 2U < 0x7fffffff)) {
          ppuVar11 = local_110;
          if (local_110 == (undefined2 **)0x0) {
            ppuVar11 = &local_190;
          }
          local_204 = (uint)local_108;
          if ((int)(uint)local_108 < 1) {
            uVar21 = 0;
          }
          else {
            uVar21 = 0;
            uVar26 = local_108 & 0xffffffff;
            uVar23 = (uint)local_108;
            do {
              uVar26 = uVar26 >> 1;
              uVar25 = (uint)uVar26 + uVar21;
              puVar30 = &DAT_149dfb77a;
              if (*(int *)(ppuVar11 + (ulonglong)uVar25 * 4 + 1) != 0) {
                puVar30 = ppuVar11[(ulonglong)uVar25 * 4];
              }
              lVar39 = 0;
              while( true ) {
                uVar4 = *(ushort *)((longlong)puVar30 + lVar39);
                uVar5 = *(ushort *)((longlong)local_1e8 + lVar39);
                if (uVar4 != uVar5) break;
                if (uVar4 == 0) goto LAB_1414044be;
LAB_14140448b:
                lVar39 = lVar39 + 2;
              }
              if ((uVar5 | uVar4) < 0x80) {
                if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5]) goto LAB_14140448b;
                iVar38 = (uint)(byte)(&DAT_149e05da0)[uVar4] -
                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
              }
              else {
                iVar38 = (uint)uVar4 - (uint)uVar5;
              }
              if (iVar38 < 0) {
                uVar21 = uVar25 + (uVar23 & 1);
              }
LAB_1414044be:
              bVar7 = 1 < uVar23;
              uVar23 = (uint)uVar26;
            } while (bVar7);
          }
          if ((int)uVar21 < (int)(uint)local_108) {
            uVar26 = (ulonglong)uVar21;
            puVar30 = &DAT_149dfb77a;
            if (*(int *)(ppuVar11 + uVar26 * 4 + 1) != 0) {
              puVar30 = ppuVar11[uVar26 * 4];
            }
            pwVar27 = L"";
            if (local_1e0 != 0) {
              pwVar27 = local_1e8;
            }
            lVar39 = 0;
            while( true ) {
              uVar4 = *(ushort *)((longlong)pwVar27 + lVar39);
              uVar21 = (uint)uVar4;
              uVar5 = *(ushort *)((longlong)puVar30 + lVar39);
              uVar23 = (uint)uVar5;
              if (uVar4 != uVar5) break;
              if (uVar4 == 0) goto joined_r0x00014140460e;
LAB_1414045db:
              lVar39 = lVar39 + 2;
            }
            if ((uVar5 | uVar4) < 0x80) {
              uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar5];
              if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_1414045db;
            }
            if ((int)(uVar21 - uVar23) < 0) goto LAB_141404610;
joined_r0x00014140460e:
            if (ppuVar11 + uVar26 * 4 != (undefined2 **)&DAT_fffffffffffffff0) goto LAB_141404632;
          }
LAB_141404610:
          FUN_1467d988e(&local_190,&local_1e8,&local_1f8);
        }
LAB_141404632:
        if (local_1f8 != 0) {
          FUN_1400020a8();
        }
        pauVar34 = local_218;
        if (local_1e8 != (wchar_t *)0x0) {
          FUN_1400020a8();
          pauVar34 = local_218;
        }
        goto LAB_141404655;
      }
LAB_1414044d4:
      uVar23 = iVar38 - 1;
      if (iVar38 == 0) {
        uVar23 = uVar21;
      }
      if (0 < (int)uVar23) {
        uVar16 = 0;
        do {
          uVar4 = *(ushort *)(lVar39 + uVar16 * 2);
          *(ushort *)(lVar39 + uVar16 * 2) = uVar4 + (ushort)(0x19 < uVar4 - 0x61) * 0x20 + -0x20;
          uVar16 = uVar16 + 1;
        } while (uVar23 != uVar16);
        iVar38 = *(int *)(*pauVar40 + 8);
      }
      if (iVar38 - 2U < 0x7fffffff) {
        uVar17 = *(undefined8 *)*pauVar40;
        uVar14 = *(undefined4 *)(*pauVar40 + 0xc);
        *pauVar40 = (undefined1  [16])0x0;
        lVar39 = (longlong)(int)local_98;
        uVar21 = (int)local_98 + 1;
        local_98 = CONCAT44(local_98._4_4_,uVar21);
        if (local_98._4_4_ < uVar21) {
          FUN_14276196a(local_100,uVar26 & 0xffffffff);
          pauVar34 = local_218;
        }
        puVar12 = local_a0;
        if (local_a0 == (undefined1 *)0x0) {
          puVar12 = local_100;
        }
        *(undefined8 *)(puVar12 + lVar39 * 0x18) = uVar17;
        *(int *)(puVar12 + lVar39 * 0x18 + 8) = iVar38;
        *(undefined4 *)(puVar12 + lVar39 * 0x18 + 0xc) = uVar14;
        puVar12[lVar39 * 0x18 + 0x10] = 3;
      }
LAB_141404655:
      pauVar40 = pauVar40 + 1;
    } while (pauVar40 != pauVar34);
    uVar14 = local_1d8._8_4_;
  }
  FUN_1447a1747(local_1d8._0_8_,uVar14);
  param_1 = local_210;
  if (local_1d8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_1c8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_1b8._0_8_ != 0) {
    FUN_1400020a8();
  }
  *param_1 = (undefined1  [16])0x0;
  if ((int)local_98 < 1) {
LAB_14140490b:
    if (param_1 != local_200) {
LAB_141404915:
      iVar38 = *(int *)(*local_200 + 8);
      pvVar6 = *(void **)*local_200;
      *(int *)(*param_1 + 8) = iVar38;
      if (iVar38 == 0 && *(int *)(*param_1 + 0xc) == 0) {
        *(undefined4 *)(*param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar38);
        if (iVar38 != 0) {
          memcpy(*(void **)*param_1,pvVar6,(longlong)iVar38 * 2);
        }
      }
    }
  }
  else {
    puVar12 = local_a0;
    if (local_a0 == (undefined1 *)0x0) {
      puVar12 = local_100;
    }
    if (puVar12[0x10] != '\0') goto LAB_14140490b;
    lVar29 = 0;
    lVar39 = 0;
    do {
      puVar12 = local_a0;
      if (local_a0 == (undefined1 *)0x0) {
        puVar12 = local_100;
      }
      bVar3 = puVar12[lVar29 + 0x10];
      if (bVar3 - 1 < 2) {
LAB_14140480b:
        FUN_140002184(param_1,0x2d);
        iVar38 = *(int *)(puVar12 + lVar29 + 8) + -1;
        if (*(int *)(puVar12 + lVar29 + 8) == 0) {
          iVar38 = 0;
        }
        FUN_1400020e8(param_1,*(undefined8 *)(puVar12 + lVar29),iVar38);
      }
      else {
        if (bVar3 == 3) {
          if (((lVar39 != 0) && (puVar12[lVar29 + -8] == '\0')) &&
             (1 < *(int *)(puVar12 + lVar29 + 8))) {
            FUN_140002184(param_1,0x2d);
          }
          goto LAB_14140480b;
        }
        if ((bVar3 == 0) && ((undefined1 (*) [16])(puVar12 + lVar29) != param_1)) {
          iVar38 = *(int *)(puVar12 + lVar29 + 8);
          pvVar6 = *(void **)(puVar12 + lVar29);
          *(int *)(*param_1 + 8) = iVar38;
          if (iVar38 == 0 && *(int *)(*param_1 + 0xc) == 0) {
            *(undefined4 *)(*param_1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_1,iVar38);
            if (iVar38 != 0) {
              memcpy(*(void **)*param_1,pvVar6,(longlong)iVar38 * 2);
            }
          }
        }
      }
      lVar39 = lVar39 + 1;
      lVar29 = lVar29 + 0x18;
    } while (lVar39 < (int)local_98);
    iVar38 = *(int *)(*param_1 + 8);
    if (0x7ffffffe < iVar38 - 2U) goto LAB_14140490b;
    lVar39 = (longlong)(int)(uint)local_108;
    if (0 < lVar39) {
      ppuVar11 = local_110;
      if (local_110 == (undefined2 **)0x0) {
        ppuVar11 = &local_190;
      }
      uVar17 = 0x40;
      lVar29 = 0;
      do {
        FUN_140002184(param_1,uVar17);
        iVar38 = *(int *)((longlong)ppuVar11 + lVar29 + 8);
        iVar10 = iVar38 + -1;
        if (iVar38 == 0) {
          iVar10 = 0;
        }
        FUN_1400020e8(param_1,*(undefined8 *)((longlong)ppuVar11 + lVar29),iVar10);
        FUN_140002184(param_1,0x3d);
        iVar38 = *(int *)((longlong)ppuVar11 + lVar29 + 0x18);
        iVar10 = iVar38 + -1;
        if (iVar38 == 0) {
          iVar10 = 0;
        }
        FUN_1400020e8(param_1,*(undefined8 *)((longlong)ppuVar11 + lVar29 + 0x10),iVar10);
        lVar29 = lVar29 + 0x20;
        uVar17 = 0x3b;
      } while (lVar39 * 0x20 != lVar29);
      iVar38 = *(int *)(*param_1 + 8);
    }
    if (param_1 != local_200 && iVar38 < 2) goto LAB_141404915;
  }
  ppuVar11 = &local_190;
  if (local_110 != (undefined2 **)0x0) {
    ppuVar11 = local_110;
  }
  FUN_141535be2(ppuVar11,local_108 & 0xffffffff);
  if (local_110 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  puVar12 = local_100;
  if (local_a0 != (undefined1 *)0x0) {
    puVar12 = local_a0;
  }
  FUN_14276193f(puVar12,local_98 & 0xffffffff);
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1414049be:
  if (local_1a0 != (ushort *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
code_r0x0001414038f8:
  uVar36 = (longlong)(int)uVar25 + 1;
  bVar7 = true;
  do {
    while ((((uVar4 = puVar15[uVar36], uVar4 != 0 && (9 < (ushort)(uVar4 - 0x30))) &&
            (0x19 < (ushort)((uVar4 & 0xffdf) - 0x41))) &&
           ((1 < uVar4 - 0x2d &&
            ((0x24 < uVar4 - 0x3b ||
             ((0x1000000025U >> ((ulonglong)(uVar4 - 0x3b) & 0x3f) & 1) == 0))))))) {
      if ((uVar16 & 1) == 0) goto LAB_14140397b;
      uVar36 = uVar36 + 1;
      bVar7 = (longlong)uVar36 < (longlong)uVar26;
      param_1 = local_210;
      if (uVar36 == uVar26) goto LAB_1414039c4;
    }
    if ((uVar16 & 1) != 0) {
      uVar16 = 0;
      if (bVar7) goto LAB_1414038eb;
      goto LAB_1414039c4;
    }
    uVar36 = uVar36 + 1;
    bVar7 = (longlong)uVar36 < (longlong)uVar26;
  } while (uVar36 != uVar26);
  uVar36 = (ulonglong)uVar23;
LAB_14140397b:
  iVar38 = (int)uVar36 - uVar25;
  if (uVar21 != uVar25) {
    memmove(puVar15 + (int)uVar21,puVar15 + (int)uVar25,(longlong)iVar38 * 2);
  }
  uVar21 = uVar21 + iVar38;
  uVar16 = 1;
  param_1 = local_210;
  if (!bVar7) goto LAB_1414039c4;
  goto LAB_1414038eb;
code_r0x0001414042a6:
  lVar22 = lVar22 + 1;
  lVar29 = lVar29 + -2;
  if (lVar29 == 0) goto LAB_1414044d4;
  goto LAB_14140429e;
}



// FUNCTION 1414077a0 FUN_1414077a0 body=160 status=ok
// SIG undefined FUN_1414077a0(void)

void FUN_1414077a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cadae98);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_30 = 0;
    local_38 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000141407808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x678))(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141407870 FUN_141407870 body=837 status=ok
// SIG undefined FUN_141407870(void)

void FUN_141407870(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_1a8 [32];
  uint local_188;
  int local_184;
  longlong local_180;
  undefined4 local_174;
  undefined8 local_170;
  ulonglong *local_168;
  byte local_146;
  byte local_7c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = param_2;
  if (param_2 != 0) {
    plVar1 = param_1 + 0xe;
    if ((*(byte *)((longlong)param_1 + 0x31) & 0x10) == 0) {
      uVar3 = *(uint *)(param_2 + 0xc);
      local_170 = (uint *)(ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar4 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar4 = *(uint *)(lVar7 + 0x10);
        bVar9 = uVar4 == 0;
        if (bVar9) {
          *(uint *)(lVar7 + 0x10) = uVar8;
          uVar4 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_170;
        if (bVar9) {
          uVar4 = uVar8;
        }
      }
      local_170._0_4_ = uVar3;
      local_170 = (uint *)CONCAT44(uVar4,(uint)local_170);
      FUN_145d6a70c(plVar1,uVar4 ^ (uint)local_170);
    }
    else {
      uVar3 = *(uint *)(param_2 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar4 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar4 = *(uint *)(lVar7 + 0x10);
        bVar9 = uVar4 == 0;
        if (bVar9) {
          *(uint *)(lVar7 + 0x10) = uVar8;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar9) {
          uVar4 = uVar8;
        }
      }
      local_170 = (uint *)CONCAT44(uVar4,uVar3);
      iVar5 = FUN_1489b3690(plVar1,uVar3 ^ uVar4);
      if (iVar5 != -1) {
        if ((*plVar1 + (longlong)iVar5 * 0x30 != 0) && ((longlong)iVar5 * 0x30 + *plVar1 != -8))
        goto LAB_14140789b;
      }
      local_184 = 0;
      local_188 = *(uint *)(param_2 + 0xc);
      if ((int)local_188 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((local_188 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_188 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar5 = iVar6;
        }
      }
      local_170 = &local_188;
      local_184 = iVar5;
      FUN_1465635ee(plVar1,&local_174);
      FUN_1449daf8c(&local_170,param_1,0);
      local_174 = 7;
      puVar2 = (undefined4 *)*local_168 + 1;
      if ((undefined4 *)local_168[1] < puVar2) {
        if ((local_146 & 2) == 0) {
          (**(code **)(local_170 + 0x5c))(&local_170,&local_174,4);
        }
        else {
          FUN_14572512c(&local_170,&local_174);
        }
      }
      else {
        local_174 = *(undefined4 *)*local_168;
        *local_168 = (ulonglong)puVar2;
      }
      FUN_1403f2d54(&local_170,&local_180);
      local_7c = local_7c | 0x10;
      (**(code **)(*param_1 + 0x308))(param_1,&local_188,&local_170,0);
      FUN_1449daebe(&local_170);
    }
  }
LAB_14140789b:
  if ((local_38 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141407bb6 FUN_141407bb6 body=764 status=ok
// SIG undefined FUN_141407bb6(void)

void FUN_141407bb6(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != '\0') {
    iVar3 = *(int *)(param_1 + 0x78);
    if ((longlong)iVar3 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x70);
      lVar9 = 0;
      do {
        iVar4 = *(int *)(lVar8 + 4 + lVar9);
        if (((((iVar4 != 0) && (uVar5 = *(uint *)(lVar8 + lVar9), -1 < (int)uVar5)) &&
             ((int)uVar5 < DAT_14c9647dc)) &&
            ((puVar7 = (undefined8 *)
                       ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
             puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == iVar4)))) &&
           ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
            plVar6 = (longlong *)*puVar7;
          }
          else {
            plVar6 = (longlong *)0x0;
          }
          (**(code **)(*plVar6 + 0xa68))();
          iVar4 = *(int *)(lVar8 + 4 + lVar9);
          if ((iVar4 == 0) || (uVar5 = *(uint *)(lVar8 + lVar9), (int)uVar5 < 0)) {
LAB_141407ccc:
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)0x0;
            if ((int)uVar5 < DAT_14c9647dc) {
              puVar7 = (undefined8 *)
                       ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
              if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar4)) ||
                 ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_141407ccc;
              plVar6 = (longlong *)*puVar7;
            }
          }
          (**(code **)(*plVar6 + 0xa48))();
          *(undefined8 *)(lVar8 + lVar9) = 0;
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar3 * 8 != lVar9);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) < 0) {
      FUN_148851cd2(param_1 + 0x70);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x40) + 0x50;
    lVar9 = (longlong)*(int *)(param_1 + 0x48) * 0xe8;
    do {
      if ((((*(int *)(lVar8 + 0x18) != 0) && (uVar5 = *(uint *)(lVar8 + 0x14), -1 < (int)uVar5)) &&
          (((int)uVar5 < DAT_14c9647dc &&
           ((puVar7 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
            puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == *(int *)(lVar8 + 0x18))))))) &&
         ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
        if (param_2 == '\0') {
          if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
            plVar6 = (longlong *)*puVar7;
          }
          else {
            plVar6 = (longlong *)0x0;
          }
          (**(code **)(*plVar6 + 0xa50))(plVar6,0);
          iVar3 = *(int *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x7c) < iVar3 + 1U) {
            FUN_148851d02((longlong *)(param_1 + 0x70),iVar3);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar3 * 8) =
               *(undefined8 *)(lVar8 + 0x14);
        }
        else {
          FUN_148849358(lVar8,CONCAT71((uint7)(byte)(uVar5 >> 0x18),1));
        }
      }
      lVar8 = lVar8 + 0xe8;
      lVar9 = lVar9 + -0xe8;
    } while (lVar9 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar3 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x50);
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar8 + lVar9) != 0) {
        local_88[0] = 0;
        local_78 = (longlong *)0x0;
        FUN_14702925e(*(longlong *)(lVar8 + lVar9),local_88);
        if (local_88[0] != 0) {
          plVar6 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar6 = local_68;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        *(undefined8 *)(lVar8 + lVar9) = 0;
        plVar6 = *(longlong **)(lVar8 + 8 + lVar9);
        if (plVar6 != (longlong *)0x0) {
          *(undefined8 *)(lVar8 + 8 + lVar9) = 0;
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
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
  }
  FUN_141506615(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_148851d88(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x68) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141407eb4 FUN_141407eb4 body=437 status=ok
// SIG undefined FUN_141407eb4(void)

void FUN_141407eb4(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *param_1 = &PTR_FUN_14b14bcb0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x43480000;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x4416000000000000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0x461c400041200000;
  *(undefined4 *)(param_1 + 0x4a) = 0x3f800000;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0x3e4ccccd00000002;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  return;
}



// FUNCTION 14140806a FUN_14140806a body=198 status=ok
// SIG undefined FUN_14140806a(void)

undefined8 *
FUN_14140806a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined2 *puVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_50,puVar1,1);
  local_80 = param_6;
  local_88 = param_5;
  local_60 = 0;
  local_68 = 0;
  local_78 = param_3;
  local_70 = param_4;
  FUN_1412ce282(param_1,3,local_50,&local_48);
  *param_1 = &PTR_FUN_149eeb470;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141408132 FUN_141408132 body=94 status=ok
// SIG undefined FUN_141408132(void)

void FUN_141408132(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_28;
  local_18 = &local_30;
  local_30 = param_3;
  local_28 = param_2;
  FUN_140e9bc46(param_1 + 0x218,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141408192 FUN_141408192 body=257 status=ok
// SIG undefined FUN_141408192(void)

void FUN_141408192(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x450,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb730;
  FUN_145c1e400(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
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
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141408294 FUN_141408294 body=39 status=ok
// SIG undefined FUN_141408294(void)

void FUN_141408294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1414082bc(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1414082bc FUN_1414082bc body=632 status=ok
// SIG undefined FUN_1414082bc(void)

ulonglong FUN_1414082bc(undefined8 *param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  short *psVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined8 local_b0;
  code **local_a8;
  undefined1 local_a0;
  undefined8 local_90;
  longlong local_88 [2];
  short *local_78;
  undefined8 uStack_70;
  longlong *local_60;
  code *local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  uVar8 = param_3 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = (short *)0x0;
  uStack_70 = 0;
  lVar5 = FUN_1401e9420(*param_2,&local_78,1);
  uVar4 = (uint)param_3;
  if (lVar5 == 0) {
    uVar8 = 0;
  }
  else {
    lVar3 = *param_2;
    *param_2 = lVar5;
    psVar7 = local_78;
    if ((int)uStack_70 == 0) {
      psVar7 = &DAT_149dfb77a;
    }
    lVar5 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)psVar7 + lVar5);
      uVar2 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar5);
      if (uVar1 != uVar2) break;
      if (uVar1 == 0) goto LAB_141408448;
LAB_141408355:
      lVar5 = lVar5 + 2;
    }
    if ((uVar2 | uVar1) < 0x80) {
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_141408355;
      iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
    }
    else {
      iVar9 = (uint)uVar1 - (uint)uVar2;
    }
    if ((1 < (int)uStack_70) && (iVar9 != 0)) {
      if (*local_78 != 0x28) {
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        lVar5 = DAT_14caa8580;
        psVar7 = local_78;
        if ((int)uStack_70 == 0) {
          psVar7 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_90,psVar7,1);
        uVar4 = FUN_141408536(lVar5,param_1,local_90,(uVar4 & 0x20) >> 5);
        uVar8 = (ulonglong)uVar4;
        goto LAB_141408452;
      }
      if (DAT_14caa7e28 == 0) {
        uVar6 = FUN_140608922();
        DAT_14caa7e28 = FUN_140002ddd(FUN_1417948e9,uVar6,L"GameplayTag");
      }
      lVar5 = DAT_14caa7e28;
      local_58 = *(code **)(DAT_14caa7e28 + 0x18);
      FUN_1400021e4(&local_58,local_88);
      local_50 = &local_60;
      local_58 = FUN_1427ded96;
      local_b0 = param_5;
      local_a0 = 0;
      local_b8 = uVar4;
      local_a8 = &local_58;
      local_60 = local_88;
      lVar5 = FUN_1408de6dc(lVar5,lVar3,param_1,param_4);
      *param_2 = lVar5;
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      uVar8 = 0;
      FUN_141408536(DAT_14caa8580,param_1,*param_1,(uVar4 & 0x20) >> 5);
      goto LAB_14140844f;
    }
LAB_141408448:
    *param_1 = 0;
LAB_14140844f:
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  }
LAB_141408452:
  if (local_78 != (short *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141408536 FUN_141408536 body=630 status=ok
// SIG undefined FUN_141408536(void)

ulonglong FUN_141408536(longlong param_1,longlong *param_2,longlong param_3,byte param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 == 0) goto LAB_141408657;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa8238) && (FUN_144b3d300(&DAT_14caa8238), DAT_14caa8238 == -1)) {
    FUN_1432721ec(&DAT_14caa81e8);
    atexit(FUN_143272a51);
    _Init_thread_footer(&DAT_14caa8238);
  }
  uVar7 = (uint)param_3;
  iVar9 = (int)((ulonglong)param_3 >> 0x20);
  uVar6 = (uint)((ulonglong)param_3 >> 0x10);
  if (DAT_14caa81f0 != DAT_14caa821c) {
    puVar10 = &DAT_14caa8220;
    if (DAT_14caa8228 != (undefined *)0x0) {
      puVar10 = DAT_14caa8228;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)
                    (DAT_14caa8230 - 1U &
                    iVar9 + (uVar7 << 0x10 | uVar7 & 0xffff) + (uVar6 << 0x13 | uVar6 & 0xffff) +
                    ((uVar7 & 0xffff) >> 4)) * 4);
    while (iVar5 != -1) {
      plVar1 = (longlong *)(DAT_14caa81e8 + (longlong)iVar5 * 0x18);
      if (*plVar1 == param_3) {
        if (plVar1 != (longlong *)0x0) {
          param_3 = plVar1[1];
          goto LAB_141408645;
        }
        break;
      }
      iVar5 = (int)plVar1[2];
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x250);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x130) == *(int *)(param_1 + 0x15c)) {
LAB_141408626:
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x168);
    }
    iVar9 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(param_1 + 0x170) - 1U &
                             iVar9 + (uVar7 << 0x10 | uVar7 & 0xffff) +
                             (uVar6 << 0x13 | uVar6 & 0xffff) + ((uVar7 & 0xffff) >> 4)) * 4);
    if (iVar9 == -1) goto LAB_141408626;
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x128) + (longlong)iVar9 * 0x20;
      if (*(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar9 * 0x20) == param_3) {
        if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) goto LAB_141408626;
        lVar8 = *(longlong *)(lVar2 + 8);
        plVar1 = *(longlong **)(lVar2 + 0x10);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
          UNLOCK();
          LeaveCriticalSection(lpCriticalSection);
          LOCK();
          plVar3 = plVar1 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar4 = (int *)((longlong)plVar1 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
          goto LAB_141408632;
        }
        break;
      }
      iVar9 = *(int *)(lVar2 + 0x18);
    } while (iVar9 != -1);
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_141408632:
  if ((lVar8 == 0 & (param_4 ^ 1)) == 0) {
LAB_141408645:
    *param_2 = param_3;
    FUN_1401d2d7a(param_1 + 0x28,param_2);
  }
  else {
    *param_2 = 0;
    uVar11 = 0;
  }
LAB_141408657:
  return uVar11 & 0xffffffff;
}



// FUNCTION 1414087ac FUN_1414087ac body=265 status=ok
// SIG undefined FUN_1414087ac(void)

undefined * FUN_1414087ac(void)

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
              0x110) < DAT_14ca08520) {
    FUN_144b3d300(&DAT_14ca08520);
    if (DAT_14ca08520 == -1) {
      FUN_1414088b6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMegaLightsParameters";
      local_38 = 0;
      local_50 = 0x2c0;
      local_58 = 9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca084a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd4117);
      _Init_thread_footer(&DAT_14ca08520);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca084a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414088b6 FUN_1414088b6 body=226 status=ok
// SIG undefined FUN_1414088b6(void)

longlong * FUN_1414088b6(longlong *param_1)

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
  pcVar13 = FUN_1462eb014;
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



// FUNCTION 14140899a FUN_14140899a body=1110 status=ok
// SIG undefined FUN_14140899a(void)

void FUN_14140899a(void **param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  void **ppvVar22;
  longlong lVar23;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  void *local_118;
  undefined8 uStack_110;
  void **local_108 [5];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pvVar4 = param_1[9];
  pvVar5 = param_1[6];
  pvVar6 = param_1[7];
  pvVar7 = param_1[8];
  local_120 = ((double)pvVar4 - (double)pvVar6) * 0.5;
  dVar10 = ((double)pvVar7 - (double)pvVar5) * 0.5;
  pvVar8 = param_1[0xb];
  pvVar9 = param_1[0xc];
  dVar11 = local_120 + (double)pvVar9;
  dVar12 = (double)pvVar8 - dVar10;
  dVar10 = dVar10 + (double)pvVar8;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  uVar3 = *(undefined4 *)(param_1 + 0xd);
  local_128 = (double)pvVar9 + 0.0;
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = dVar12;
  puVar20[7] = pvVar9;
  puVar20[8] = (double)pvVar8 + 0.0;
  puVar20[9] = dVar11;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = ((double)pvVar8 + 0.0 + dVar12) * 0.5;
  puVar20[0xc] = (dVar11 + (double)pvVar9) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  param_1[2] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = pvVar8;
  puVar20[7] = pvVar9;
  puVar20[8] = pvVar7;
  puVar20[9] = pvVar4;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = ((double)pvVar7 + (double)pvVar8) * 0.5;
  puVar20[0xc] = ((double)pvVar4 + (double)pvVar9) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[3] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = pvVar5;
  puVar20[7] = pvVar6;
  puVar20[8] = pvVar8;
  puVar20[9] = pvVar9;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = ((double)pvVar5 + (double)pvVar8) * 0.5;
  puVar20[0xc] = ((double)pvVar6 + (double)pvVar9) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[4] = puVar20;
  puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar20 = 0;
  puVar20[1] = 0;
  puVar20[6] = pvVar8;
  puVar20[7] = (double)pvVar9 - local_120;
  puVar20[8] = dVar10;
  puVar20[9] = local_128;
  *(undefined1 *)(puVar20 + 10) = 1;
  puVar20[0xb] = (dVar10 + (double)pvVar8) * 0.5;
  puVar20[0xc] = (((double)pvVar9 - local_120) + local_128) * 0.5;
  *(undefined4 *)(puVar20 + 0xd) = uVar3;
  *(undefined1 *)((longlong)puVar20 + 0x6c) = 0;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  param_1[5] = puVar20;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  local_118 = (void *)0x0;
  uStack_110 = 0;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar20 = *param_1;
    lVar23 = (longlong)*(int *)(param_1 + 1) * 0x30;
    do {
      iVar19 = FUN_1405e5186(param_1,puVar20,local_108);
      ppvVar22 = local_108[0];
      uVar18 = uStack_110;
      if (iVar19 == 1) {
        iVar19 = *(int *)(local_108[0] + 1);
        *(uint *)(local_108[0] + 1) = iVar19 + 1U;
        if (*(uint *)((longlong)local_108[0] + 0xc) < iVar19 + 1U) {
          FUN_141408df2(local_108[0],iVar19);
        }
      }
      else {
        iVar19 = (int)uStack_110;
        uVar1 = (int)uStack_110 + 1;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar1);
        ppvVar22 = &local_118;
        if (uStack_110._4_4_ < uVar1) {
          FUN_141408df2(&local_118,uVar18 & 0xffffffff);
        }
      }
      pvVar4 = *ppvVar22;
      lVar21 = (longlong)iVar19 * 0x30;
      uVar13 = *puVar20;
      uVar14 = puVar20[1];
      uVar15 = puVar20[2];
      uVar16 = puVar20[3];
      uVar17 = puVar20[5];
      puVar2 = (undefined8 *)((longlong)pvVar4 + lVar21 + 0x20);
      *puVar2 = puVar20[4];
      puVar2[1] = uVar17;
      puVar2 = (undefined8 *)((longlong)pvVar4 + lVar21 + 0x10);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      *(undefined8 *)((longlong)pvVar4 + lVar21) = uVar13;
      ((undefined8 *)((longlong)pvVar4 + lVar21))[1] = uVar14;
      puVar20 = puVar20 + 6;
      lVar23 = lVar23 + -0x30;
    } while (lVar23 != 0);
  }
  pvVar4 = local_118;
  if (&local_118 != param_1) {
    iVar19 = (int)uStack_110;
    lVar23 = (longlong)(int)uStack_110;
    *(int *)(param_1 + 1) = (int)uStack_110;
    if ((int)uStack_110 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14597b450(param_1,uStack_110 & 0xffffffff);
      if (iVar19 != 0) {
        memcpy(*param_1,pvVar4,lVar23 * 0x30);
      }
    }
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141408df2 FUN_141408df2 body=275 status=ok
// SIG undefined FUN_141408df2(void)

void FUN_141408df2(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 141408f06 FUN_141408f06 body=489 status=ok
// SIG undefined FUN_141408f06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141408f06(void)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0x100000000;
  local_50 = &DAT_14cb82370;
  local_48 = 0xffffffff;
  local_40 = 0;
  if (DAT_14cb82388 == 0) {
    uVar16 = 1;
    local_48._0_4_ = 0xffffffff;
    local_48._4_4_ = 0;
    local_58._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar16 = local_58 >> 0x20;
  }
  puVar7 = local_50;
  iVar15 = (int)local_58;
  uVar13 = (uint)local_48;
  iVar9 = local_48._4_4_;
  iVar12 = local_40;
  if (local_48._4_4_ < *(int *)(local_50 + 0x18)) {
    do {
      plVar5 = *(longlong **)(DAT_14cb82360 + 0x10 + (longlong)iVar9 * 0x20);
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
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar10 = *(undefined **)(puVar7 + 0x10);
      if (*(undefined **)(puVar7 + 0x10) == (undefined *)0x0) {
        puVar10 = puVar7;
      }
      iVar4 = *(int *)(puVar7 + 0x18);
      lVar14 = (longlong)iVar15;
      uVar8 = *(uint *)(puVar10 + lVar14 * 4) & uVar13;
      if (uVar8 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar15) {
          iVar6 = iVar15;
        }
        if (iVar9 <= iVar15) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)(puVar10 + lVar11 * 4 + lVar14 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar14 == lVar11) goto LAB_141409047;
        }
        iVar15 = iVar15 + (int)lVar11 + 1;
        uVar13 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8);
      uVar3 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_141409047:
  DAT_14cb82368 = 0;
  if (DAT_14cb8236c != 0) {
    FUN_1446f4a44(&DAT_14cb82360,0);
  }
  _DAT_14cb82390 = 0xffffffff;
  DAT_14cb82388 = 0;
  if (0x80 < DAT_14cb8238c) {
    DAT_14cb8238c = 0x80;
    FUN_1446efbd8(&DAT_14cb82370,0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414090f0 FUN_1414090f0 body=146 status=ok
// SIG undefined FUN_1414090f0(void)

void FUN_1414090f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x48);
  *(undefined2 **)(param_1 + 0x20) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_140115c12(param_1 + 0x30,0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014140917e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141409182 FUN_141409182 body=221 status=ok
// SIG undefined FUN_141409182(void)

longlong FUN_141409182(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc05720 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14917178f;
    local_40 = &LAB_1466c4a5b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x278;
    FUN_14081cfa3(L"/Script/RigVM",L"RigVMHost",&DAT_14cc05720,FUN_1466c4a34);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc05720;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141409260 FUN_141409260 body=286 status=ok
// SIG undefined FUN_141409260(void)

undefined8 FUN_141409260(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141409378;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141409378;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_141409378:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141409325;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_141409325;
    }
  }
  uVar6 = 0;
LAB_141409325:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141409380 FUN_141409380 body=357 status=ok
// SIG undefined FUN_141409380(void)

void FUN_141409380(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  if (param_2 != 0) {
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
    if ((((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
        (*(longlong *)(param_2 + 0x428) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x428) + 0xae8), lVar1 != 0)) {
      lVar2 = FUN_140890cca();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_14485c47a(param_1 + 0x648,lVar1);
        *(undefined1 *)(param_1 + 0x6f4) = 1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414094e6 FUN_1414094e6 body=173 status=ok
// SIG undefined FUN_1414094e6(void)

void FUN_1414094e6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141409594(param_1 + 0xc48,&local_38);
  if ((longlong)local_30 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(local_38 + lVar2);
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x3f4) < 0) {
          *(undefined4 *)(lVar1 + 0x3f0) = 0;
          FUN_140210e5a(lVar1 + 0x378,0);
        }
        else {
          *(undefined4 *)(lVar1 + 0x3f0) = 0;
        }
        *(undefined4 *)(lVar1 + 0x330) = 0;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)local_30 * 8 != lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141409594 FUN_141409594 body=17 status=ok
// SIG undefined FUN_141409594(void)

void FUN_141409594(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 141409608 FUN_141409608 body=73 status=ok
// SIG undefined FUN_141409608(void)

void FUN_141409608(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_141409652(local_28,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141409652 FUN_141409652 body=787 status=ok
// SIG undefined FUN_141409652(void)

void FUN_141409652(longlong param_1,longlong param_2,double *param_3)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(int *)(param_1 + 0xc4) == 0) || (uVar1 = *(uint *)(param_1 + 0xc0), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0xc4))) ||
      (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar5 = *plVar7, lVar5 == 0)))))) {
    uVar4 = FUN_1400d7050(param_1 + 0x30);
    lVar5 = FUN_140ade8e4(uVar4);
    if (lVar5 == 0) goto LAB_14140983d;
    lVar6 = FUN_140ade7fe();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_14140983d;
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(param_1 + 0xc0) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar6 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar8;
      }
    }
    *(int *)(param_1 + 0xc4) = iVar3;
  }
  if ((((param_2 == 0) || (9.999999747378752e-05 < ABS(*param_3))) ||
      (9.999999747378752e-05 < ABS(param_3[1]))) || (9.999999747378752e-05 < ABS(param_3[2]))) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined1 *)(param_1 + 0x124) = 0;
    if (*(char *)(param_1 + 0x125) == '\x01') {
      FUN_144259a3a(param_1,0);
    }
    local_48 = *(undefined8 *)(param_1 + 0xe0);
    uStack_40 = *(undefined8 *)(param_1 + 0xe8);
    dVar10 = (double)(*(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x128));
    dVar2 = (double)*(float *)(param_1 + 0x130) * *param_3 * dVar10;
    dVar10 = (double)*(float *)(param_1 + 0x134) * param_3[1] * dVar10;
    if (0.0 < *(float *)(param_1 + 0x110)) {
      fVar11 = 1.0 - *(float *)(param_1 + 0x110);
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.01) {
        fVar11 = 0.01;
      }
      dVar2 = dVar2 * (double)fVar11;
      dVar10 = dVar10 * (double)fVar11;
    }
    if (*(char *)(param_1 + 0x78) != '\0') {
      dVar2 = -dVar2;
    }
    dVar2 = dVar2 + *(double *)(param_1 + 0xe0);
    if (*(char *)(param_1 + 0x79) != '\0') {
      dVar10 = -dVar10;
    }
    if (*(double *)(param_1 + 0xf0) <= dVar2) {
      dVar2 = *(double *)(param_1 + 0xf0);
    }
    dVar10 = *(double *)(param_1 + 0xe8) - dVar10;
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    *(double *)(param_1 + 0xe0) = dVar2;
    if (*(double *)(param_1 + 0xf8) <= dVar10) {
      dVar10 = *(double *)(param_1 + 0xf8);
    }
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    *(double *)(param_1 + 0xe8) = dVar10;
    FUN_14162cbe6(param_1,&local_48);
    *(undefined1 *)(lVar5 + 0x170) = 1;
  }
  else {
    fVar11 = *(float *)(param_1 + 0x128) + *(float *)(param_1 + 0x120);
    *(float *)(param_1 + 0x120) = fVar11;
    if ((*(char *)(param_1 + 0x125) == '\0') &&
       (*(float *)(param_1 + 0x94) <= fVar11 && fVar11 != *(float *)(param_1 + 0x94))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
LAB_14140983d:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140997c FUN_14140997c body=730 status=ok
// SIG undefined FUN_14140997c(void)

void FUN_14140997c(longlong param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  PSRWLOCK SRWLock;
  undefined4 uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(int *)(param_1 + 0xc4) == 0) || (uVar2 = *(uint *)(param_1 + 0xc0), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0xc4))))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar6 = *plVar7, lVar6 == 0)))) {
    uVar5 = FUN_1400d7050(param_1 + 0x30);
    lVar6 = FUN_140ade8e4(uVar5);
    if (lVar6 == 0) goto LAB_141409bfb;
    lVar4 = FUN_140ade7fe();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_141409bfb;
    uVar2 = *(uint *)(lVar6 + 0xc);
    *(uint *)(param_1 + 0xc0) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar4 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar8;
      }
    }
    *(int *)(param_1 + 0xc4) = iVar3;
  }
  if (*(char *)(lVar6 + 0x170) != '\x01') {
    if (param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    goto LAB_141409bfb;
  }
  lVar4 = FUN_140495e96(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(undefined4 *)(lVar4 + 0x100);
  }
  if (param_2 == '\x03') {
LAB_141409afd:
    FUN_1449027d0(param_1,&local_58);
    lVar6 = local_58[0x50];
    SRWLock = (PSRWLOCK)(lVar6 + 0x20);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    iVar3 = FUN_1412fabe8(lVar6,&DAT_14cbd5b60);
    if (iVar3 != -1) goto LAB_141409bef;
  }
  else {
    if (param_2 != '\x02') {
      if (param_2 == '\0') {
        local_48 = *(undefined4 *)(param_1 + 0xe0);
        uStack_44 = *(undefined4 *)(param_1 + 0xe4);
        uStack_40 = *(undefined4 *)(param_1 + 0xe8);
        uStack_3c = *(undefined4 *)(param_1 + 0xec);
        FUN_14665b426(lVar6,1,&local_48,uVar9);
        goto LAB_141409afd;
      }
      local_68 = *(undefined4 *)(param_1 + 0xe0);
      uStack_64 = *(undefined4 *)(param_1 + 0xe4);
      uStack_60 = *(undefined4 *)(param_1 + 0xe8);
      uStack_5c = *(undefined4 *)(param_1 + 0xec);
      FUN_14665b426(lVar6,0,&local_68,uVar9);
    }
    FUN_1449027d0(param_1,&local_58);
    lVar6 = local_58[0x50];
    SRWLock = (PSRWLOCK)(lVar6 + 0x20);
    AcquireSRWLockExclusive(SRWLock);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    local_58 = &DAT_14cbd5b60;
    iVar3 = FUN_140c8411c(lVar6);
    if (0 < iVar3) {
LAB_141409bef:
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_141409bfb:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141409c6a FUN_141409c6a body=365 status=ok
// SIG undefined FUN_141409c6a(void)

void FUN_141409c6a(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_141409d65;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_141409d65:
  local_f8 = param_1 + 6;
  FUN_146650f88(param_2,local_58,param_1 + 2,param_1 + 4);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141409dd8 FUN_141409dd8 body=41 status=ok
// SIG undefined FUN_141409dd8(void)

undefined8 FUN_141409dd8(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  (*(code *)((undefined8 *)*param_2)[1])(param_1,*(undefined8 *)*param_2,param_3,0,param_2[1]);
  return param_1;
}



// FUNCTION 141409e02 FUN_141409e02 body=53 status=ok
// SIG undefined FUN_141409e02(void)

undefined8 FUN_141409e02(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_140686164(*param_2,param_1,param_2[2],param_2[3],param_3,param_2[1]);
  return param_1;
}



// FUNCTION 141409e38 FUN_141409e38 body=332 status=ok
// SIG undefined FUN_141409e38(void)

double * FUN_141409e38(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  
  piVar2 = (int *)param_2[2];
  lVar3 = *(longlong *)*param_2;
  lVar4 = *(longlong *)(lVar3 + 0x88);
  if ((longlong)*(int *)(lVar4 + 0x38) < 1) {
    *piVar2 = -1;
  }
  else {
    lVar5 = param_2[1];
    dVar1 = (double)((longlong *)*param_2)[1];
    dVar11 = *param_3 * *(double *)(lVar3 + 0x20);
    fVar10 = (float)dVar11;
    pfVar7 = (float *)(*(longlong *)(lVar4 + 0x30) + 8);
    uVar9 = 0xffffffff;
    fVar12 = -3.4028235e+38;
    uVar6 = 0;
    do {
      fVar13 = *pfVar7 * (float)(param_3[2] * *(double *)(lVar3 + 0x30)) +
               pfVar7[-2] * fVar10 + pfVar7[-1] * (float)(param_3[1] * *(double *)(lVar3 + 0x28));
      if (fVar12 < fVar13) {
        uVar9 = uVar6 & 0xffffffff;
        fVar12 = fVar13;
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 3;
    } while ((longlong)*(int *)(lVar4 + 0x38) != uVar6);
    iVar8 = (int)uVar9;
    *piVar2 = iVar8;
    if (iVar8 != -1) {
      if ((dVar1 == 0.0) && (!NAN(dVar1))) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        lVar5 = (longlong)iVar8;
        fVar12 = *(float *)(lVar4 + 8 + lVar5 * 0xc);
        fVar10 = *(float *)(lVar4 + 4 + lVar5 * 0xc);
        dVar1 = *(double *)(lVar3 + 0x30);
        dVar11 = *(double *)(lVar3 + 0x28);
        *param_1 = (double)*(float *)(lVar4 + lVar5 * 0xc) * *(double *)(lVar3 + 0x20);
        param_1[1] = (double)fVar10 * dVar11;
        param_1[2] = (double)fVar12 * dVar1;
        return param_1;
      }
      FUN_14068b0c6(lVar4,param_1,CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar10),piVar2,
                    lVar3 + 0x20,lVar5);
      return param_1;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return param_1;
}



// FUNCTION 141409f84 FUN_141409f84 body=884 status=ok
// SIG undefined FUN_141409f84(void)

double * FUN_141409f84(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  float *pfVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)*param_2;
  lVar9 = *(longlong *)(lVar8 + 0x88);
  if ((longlong)*(int *)(lVar9 + 0x38) < 1) {
    *(int *)param_2[4] = -1;
  }
  else {
    pdVar10 = (double *)param_2[2];
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    dVar4 = pdVar10[2];
    dVar5 = *pdVar10;
    dVar6 = pdVar10[1];
    dVar21 = dVar6 * dVar3 - dVar2 * dVar4;
    dVar21 = dVar21 + dVar21;
    dVar7 = pdVar10[3];
    dVar19 = dVar5 * dVar2 - dVar1 * dVar6;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar4 * dVar1 - dVar3 * dVar5;
    dVar16 = dVar16 + dVar16;
    lVar11 = param_2[3];
    dVar18 = (double)((longlong *)*param_2)[1];
    pfVar12 = (float *)(*(longlong *)(lVar9 + 0x30) + 8);
    uVar14 = 0xffffffff;
    fVar17 = -3.4028235e+38;
    uVar15 = 0;
    do {
      fVar20 = *pfVar12 *
               (float)(((dVar5 * dVar16 - dVar21 * dVar6) + dVar7 * dVar19 + dVar3) *
                      *(double *)(lVar8 + 0x30)) +
               pfVar12[-2] *
               (float)(((dVar6 * dVar19 - dVar16 * dVar4) + dVar21 * dVar7 + dVar1) *
                      *(double *)(lVar8 + 0x20)) +
               pfVar12[-1] *
               (float)(((dVar4 * dVar21 - dVar19 * dVar5) + dVar7 * dVar16 + dVar2) *
                      *(double *)(lVar8 + 0x28));
      if (fVar17 < fVar20) {
        uVar14 = uVar15 & 0xffffffff;
        fVar17 = fVar20;
      }
      uVar15 = uVar15 + 1;
      pfVar12 = pfVar12 + 3;
    } while ((longlong)*(int *)(lVar9 + 0x38) != uVar15);
    iVar13 = (int)uVar14;
    *(int *)param_2[4] = iVar13;
    if (iVar13 != -1) {
      if ((dVar18 != 0.0) || (NAN(dVar18))) {
        local_a8 = lVar8 + 0x20;
        local_a0 = lVar11;
        FUN_14068b0c6(lVar9,&local_98);
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x30);
        lVar11 = (longlong)iVar13;
        local_88 = (double)*(float *)(lVar9 + 8 + lVar11 * 0xc) * *(double *)(lVar8 + 0x30);
        dStack_90 = (double)*(float *)(lVar9 + 4 + lVar11 * 0xc) * *(double *)(lVar8 + 0x28);
        local_98 = (double)*(float *)(lVar9 + lVar11 * 0xc) * *(double *)(lVar8 + 0x20);
      }
      goto LAB_14140a1a3;
    }
  }
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_88 = 0.0;
LAB_14140a1a3:
  pdVar10 = (double *)param_2[1];
  dVar5 = *pdVar10;
  dVar6 = pdVar10[1];
  dVar7 = pdVar10[2];
  dVar2 = pdVar10[3];
  dVar1 = pdVar10[3];
  dVar16 = local_98 * dVar7 - dVar5 * local_88;
  dVar18 = dStack_90 * dVar5 - local_98 * dVar6;
  dVar19 = local_88 * dVar6 - dStack_90 * dVar7;
  dVar19 = dVar19 + dVar19;
  dVar16 = dVar16 + dVar16;
  dVar18 = dVar18 + dVar18;
  dVar4 = pdVar10[5];
  dVar3 = pdVar10[6];
  *param_1 = (dVar18 * dVar6 - dVar16 * dVar7) + dVar2 * dVar19 + local_98 + pdVar10[4];
  param_1[1] = (dVar7 * dVar19 - dVar5 * dVar18) + dVar1 * dVar16 + dStack_90 + dVar4;
  param_1[2] = dVar18 * dVar2 + local_88 + (dVar16 * dVar5 - dVar19 * dVar6) + dVar3;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14140a2fc FUN_14140a2fc body=370 status=ok
// SIG undefined FUN_14140a2fc(void)

undefined8 * FUN_14140a2fc(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14140a47c FUN_14140a47c body=103 status=ok
// SIG undefined FUN_14140a47c(void)

ulonglong FUN_14140a47c(longlong param_1)

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
LAB_14140a4c6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14140a4c6;
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



// FUNCTION 14140a4e4 FUN_14140a4e4 body=573 status=ok
// SIG undefined FUN_14140a4e4(void)

void FUN_14140a4e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *plStack_c0;
  float local_b8;
  char local_b4;
  float local_b0;
  char local_ac;
  undefined1 *local_a8 [2];
  undefined8 *local_98;
  undefined1 local_68 [8];
  char local_60;
  undefined1 local_58 [8];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = *(int *)(*param_2 + 0x74);
  if (((((iVar3 == 0) || (uVar4 = *(uint *)(*param_2 + 0x70), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != iVar3)))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))) {
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
  }
  else {
    FUN_1410f26bc(*plVar5 + 0x118,&local_c8);
    if ((local_c8 != 0) && ((*(byte *)(local_c8 + 8) & 0xfd) != 0)) {
      plVar5 = param_2 + 9;
      FUN_140c601cc(&local_b0,plVar5);
      FUN_1411a0942(&local_b8,plVar5);
      FUN_1411a08ba(local_58,plVar5);
      FUN_1411a0b3a(local_68,plVar5);
      if (((local_ac == '\x01') &&
          (((local_b4 == '\x01' && (local_50 == '\x01')) && (local_60 == '\x01')))) &&
         ((((local_b0 != 0.0 || (NAN(local_b0))) ||
           (*(char *)(*(longlong *)(param_1 + 0xa8) + 8) == '\0')) &&
          ((0.0 < local_b8 || (*(char *)(*(longlong *)(param_1 + 0xa8) + 9) == '\0')))))) {
        local_a8[0] = (undefined1 *)0x0;
        local_98 = (undefined8 *)FUN_14001cc68(0x38,8);
        *local_98 = &PTR_FUN_14b99d460;
        local_98[1] = &local_c8;
        local_98[2] = param_2;
        local_98[3] = &local_b0;
        local_98[4] = &local_b8;
        local_98[5] = local_58;
        local_98[6] = local_68;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = &LAB_14110984e;
        }
        FUN_140f73374(param_1,local_a8);
      }
    }
  }
  plVar5 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140a722 FUN_14140a722 body=8 status=ok
// SIG undefined FUN_14140a722(void)

undefined8 FUN_14140a722(void)

{
  return DAT_14cb758b8;
}



// FUNCTION 14140a72a FUN_14140a72a body=116 status=ok
// SIG undefined FUN_14140a72a(void)

void FUN_14140a72a(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_2,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  (**(code **)(*param_1 + 0xd0))(param_1,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140a7a0 FUN_14140a7a0 body=1502 status=ok
// SIG undefined FUN_14140a7a0(void)

void FUN_14140a7a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 ***local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  uint uStack_84;
  undefined8 uStack_80;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(char *)(param_1 + 0x298) == '\0') && ((longlong)(int)param_2[1] != 0)) {
    plVar13 = (longlong *)*param_2;
    local_c8 = (longlong *)((longlong)(int)param_2[1] * 0x14 + (longlong)plVar13);
    plVar2 = (longlong *)(param_1 + 0x448);
    local_d0 = param_1 + 0x238;
    do {
      lVar14 = local_d0;
      uStack_90 = 0;
      uStack_84 = uStack_84 & 0xffffff00;
      uStack_80 = 0x4120000000000000;
      local_78 = local_78 & 0xffffff00;
      local_98 = plVar13[1];
      local_88 = (undefined4)plVar13[2];
      local_a0 = (undefined8 ***)*plVar13;
      iVar9 = *(int *)(param_1 + 0x450);
      iVar10 = *(int *)(param_1 + 0x47c);
      if (iVar9 != iVar10) {
        uVar6 = (uint)((ulonglong)local_a0 >> 0x10);
        uVar11 = (uint)local_a0 & 0xffff;
        lVar8 = *(longlong *)(param_1 + 0x488);
        if (*(longlong *)(param_1 + 0x488) == 0) {
          lVar8 = param_1 + 0x480;
        }
        iVar15 = *(int *)(lVar8 + (ulonglong)
                                  (*(int *)(param_1 + 0x490) - 1U &
                                  (int)((ulonglong)local_a0 >> 0x20) +
                                  ((uint)local_a0 << 0x10 | uVar11) +
                                  (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar15 != -1) {
          do {
            if (*(undefined8 *****)(*plVar2 + (longlong)iVar15 * 0x20) == (undefined8 ****)local_a0)
            goto LAB_14140aa16;
            iVar15 = *(int *)((longlong)iVar15 * 0x20 + *plVar2 + 0x18);
          } while (iVar15 != -1);
        }
      }
      plVar7 = (longlong *)FUN_14001cc68(0x70,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14afe3140;
      local_b0 = plVar7 + 2;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      plVar7[8] = 0;
      plVar7[9] = 0;
      plVar7[10] = 0;
      plVar7[0xb] = 0;
      plVar7[0xc] = 0;
      plVar7[0xd] = 0;
      local_a8 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      *local_b0 = (longlong)local_a0;
      local_70 = &local_a0;
      uStack_68 = &local_b0;
      FUN_14579dcce(plVar2,&local_b8,&local_70);
      iVar9 = *(int *)(param_1 + 0x210);
      if ((longlong)iVar9 != 0) {
        local_e8 = *(longlong **)(param_1 + 0x208);
        lVar8 = 0;
        do {
          local_b8 = *(undefined8 *)((longlong)local_e8 + lVar8);
          cVar5 = FUN_144729dda(&local_b8);
          if (cVar5 != '\0') {
            lVar14 = FUN_14479d2ce(&local_b8);
            (**(code **)(*(longlong *)(lVar14 + 0x3c8) + 0x18))(lVar14 + 0x3c8,&local_70);
            plVar7 = local_b0;
            if (local_70 == (undefined8 ****)local_a0) {
              local_d8 = local_b0 + 1;
              local_c0 = FUN_14479d2ce(&local_b8);
              FUN_148607248(&local_70,&local_c0);
              local_e0 = (longlong)(int)plVar7[2];
              uVar6 = (int)plVar7[2] + 1;
              *(uint *)(plVar7 + 2) = uVar6;
              if (*(uint *)((longlong)plVar7 + 0x14) < uVar6) {
                FUN_14579dc48(local_d8,local_e0);
              }
              puVar3 = (undefined4 *)(*local_d8 + local_e0 * 0x10);
              *puVar3 = (undefined4)local_70;
              puVar3[1] = local_70._4_4_;
              puVar3[2] = (undefined4)uStack_68;
              puVar3[3] = uStack_68._4_4_;
            }
          }
          lVar8 = lVar8 + 8;
          lVar14 = local_d0;
        } while ((longlong)iVar9 * 8 != lVar8);
      }
      cVar5 = FUN_144729dda(lVar14);
      if (cVar5 != '\0') {
        lVar8 = FUN_14479d2ce(lVar14);
        (**(code **)(*(longlong *)(lVar8 + 0x3a0) + 0x18))(lVar8 + 0x3a0,&local_70);
        plVar7 = local_b0;
        if (local_70 == (undefined8 ****)local_a0) {
          local_e8 = local_b0 + 1;
          local_b8 = FUN_14479d2ce(lVar14);
          FUN_148607292(&local_70);
          iVar9 = (int)plVar7[2];
          *(uint *)(plVar7 + 2) = iVar9 + 1U;
          if (*(uint *)((longlong)plVar7 + 0x14) < iVar9 + 1U) {
            FUN_14579dc48(local_e8,iVar9);
          }
          puVar3 = (undefined4 *)(*local_e8 + (longlong)iVar9 * 0x10);
          *puVar3 = (undefined4)local_70;
          puVar3[1] = local_70._4_4_;
          puVar3[2] = (undefined4)uStack_68;
          puVar3[3] = uStack_68._4_4_;
        }
      }
      plVar7 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      iVar9 = *(int *)(param_1 + 0x450);
      iVar10 = *(int *)(param_1 + 0x47c);
LAB_14140aa16:
      if (iVar9 == iVar10) {
LAB_14140aba0:
        lVar14 = 0;
      }
      else {
        uVar6 = (uint)((ulonglong)local_a0 >> 0x10);
        uVar11 = (uint)local_a0 & 0xffff;
        lVar14 = *(longlong *)(param_1 + 0x488);
        if (*(longlong *)(param_1 + 0x488) == 0) {
          lVar14 = param_1 + 0x480;
        }
        iVar9 = *(int *)(lVar14 + (ulonglong)
                                  (*(int *)(param_1 + 0x490) - 1U &
                                  (int)((ulonglong)local_a0 >> 0x20) +
                                  ((uint)local_a0 << 0x10 | uVar11) +
                                  (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar9 == -1) goto LAB_14140aba0;
        do {
          lVar14 = *plVar2 + (longlong)iVar9 * 0x20;
          if (*(undefined8 *****)(*plVar2 + (longlong)iVar9 * 0x20) == (undefined8 ****)local_a0)
          break;
          iVar9 = *(int *)(lVar14 + 0x18);
          lVar14 = 0;
        } while (iVar9 != -1);
      }
      lVar8 = *(longlong *)(lVar14 + 8);
      plVar7 = *(longlong **)(lVar14 + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar8 != 0) {
        if (&local_98 != (undefined8 *)(lVar8 + 0x28)) {
          *(uint *)(lVar8 + 0x48) = local_78;
          *(ulonglong *)(lVar8 + 0x38) = CONCAT44(uStack_84,local_88);
          *(undefined8 *)(lVar8 + 0x40) = uStack_80;
          *(undefined4 *)(lVar8 + 0x28) = (undefined4)local_98;
          *(undefined4 *)(lVar8 + 0x2c) = local_98._4_4_;
          *(undefined4 *)(lVar8 + 0x30) = (undefined4)uStack_90;
          *(undefined4 *)(lVar8 + 0x34) = uStack_90._4_4_;
          *(undefined1 *)(lVar8 + 0x4c) = 1;
        }
        if ((longlong)*(int *)(lVar8 + 0x10) != 0) {
          puVar16 = *(uint **)(lVar8 + 8);
          puVar12 = puVar16 + (longlong)*(int *)(lVar8 + 0x10) * 4;
          do {
            plVar4 = *(longlong **)(puVar16 + 2);
            if ((((puVar16[1] != 0 && plVar4 != (longlong *)0x0) &&
                 (uVar6 = *puVar16, -1 < (int)uVar6)) && ((int)uVar6 < DAT_14c9647dc)) &&
               (((lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8),
                 lVar14 != 0 && (*(uint *)(lVar14 + 0x10) == puVar16[1])) &&
                ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))) {
              (**(code **)(*plVar4 + 0x40))(plVar4,&local_98);
            }
            puVar16 = puVar16 + 4;
          } while (puVar16 != puVar12);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      plVar13 = (longlong *)((longlong)plVar13 + 0x14);
    } while (plVar13 != local_c8);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140ad80 FUN_14140ad80 body=264 status=ok
// SIG undefined FUN_14140ad80(void)

void FUN_14140ad80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_140d3be2e(param_1 + 0x28);
  if (lVar3 != 0) {
    lVar1 = *param_2;
    if (lVar1 == 0) {
LAB_14140ae1c:
      if ((*(char *)((longlong)param_2 + 0x14) != '\x01') ||
         (uVar7 = 0, 0.0 < *(float *)(param_2 + 3))) {
        *(longlong *)(param_1 + 0x14) = *param_2;
        uVar7 = (undefined4)param_2[2];
      }
      else {
        FUN_140d3bf04(lVar3,&local_58,*(undefined8 *)(param_1 + 8));
        *(undefined8 *)(param_1 + 0x14) = local_58;
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar7;
    }
    else if ((longlong)*(int *)(lVar3 + 0x98) != 0) {
      puVar6 = *(undefined8 **)(lVar3 + 0x90);
      lVar5 = (longlong)*(int *)(lVar3 + 0x98) * 0x90;
      do {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(puVar6 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar6;
        }
        cVar2 = FUN_1402ca022(lVar1,puVar4);
        if (cVar2 != '\0') {
          if (puVar6 != (undefined8 *)0x0) goto LAB_14140ae1c;
          break;
        }
        puVar6 = puVar6 + 0x12;
        lVar5 = lVar5 + -0x90;
      } while (lVar5 != 0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14140ae8a FUN_14140ae8a body=4624 status=ok
// SIG undefined FUN_14140ae8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14140ae8a(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                 undefined1 (*param_5) [16])

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 *puVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  int *piVar23;
  longlong *plVar24;
  int *piVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  void *pvVar30;
  int *piVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_3f8 [40];
  void *local_3d0;
  undefined8 *local_3c8;
  longlong local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  int *local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong *local_390;
  int *local_388;
  int *local_380;
  longlong local_378;
  undefined1 local_36c [12];
  longlong local_360 [2];
  longlong local_350 [2];
  longlong local_340 [2];
  longlong local_330 [2];
  longlong local_320 [2];
  undefined1 local_30c [12];
  int local_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  int local_2f4;
  undefined1 local_2f0 [12];
  int local_2e4;
  undefined4 uStack_2e0;
  undefined4 local_2dc;
  double local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined4 local_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined1 *local_278;
  double *pdStack_270;
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
  int *local_178;
  int *local_170;
  double local_168;
  longlong local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_3c8 = param_4;
  if ((*(longlong *)(param_1 + 0x268) == 0) ||
     (cVar16 = FUN_1409c91c4(*(longlong *)(param_1 + 0x268),param_2), cVar16 != '\0')) {
    local_2a0 = 0;
    uStack_298 = 0;
    local_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_2b0 = *(undefined8 *)(param_2 + 0x18);
    local_2a8 = *(undefined4 *)(param_2 + 0x20);
    FUN_1447715ec(&local_2a0,param_2 + 0x28);
    local_178 = (int *)*local_3c8;
    FUN_1401533ba(&local_2e4,&local_178,1);
    local_178 = DAT_14cb7bb98;
    uVar17 = DAT_14cb7bba0;
    if (local_2e4 != 0) {
      local_178 = (int *)CONCAT44(uStack_2e0,local_2e4);
      uVar17 = local_2dc;
    }
    local_170 = (int *)CONCAT44(local_170._4_4_,uVar17);
    FUN_144928d62(&local_2a0,1,&local_178);
    local_178 = (int *)*param_3;
    local_390 = param_3;
    FUN_1401533ba(local_2f0,&local_178,1);
    FUN_14013eb2c(&local_2b0);
    iVar18 = *(int *)(param_1 + 0x80);
    local_3c0 = param_1;
    if ((longlong)iVar18 == 0) {
      iVar18 = 0;
    }
    else {
      lVar21 = *(longlong *)(param_1 + 0x78);
      lVar29 = 0;
      do {
        cVar16 = FUN_14493b798(lVar29 + lVar21 + 8);
        if (cVar16 != '\0') {
          iVar18 = *(int *)(lVar21 + 0x80 + lVar29);
          goto LAB_14140bb4c;
        }
        lVar29 = lVar29 + 0x280;
      } while ((longlong)iVar18 * 0x280 != lVar29);
      iVar18 = *(int *)(local_3c0 + 0x80);
    }
    lVar21 = local_3c0;
    *(uint *)(local_3c0 + 0x80) = iVar18 + 1U;
    local_2f4 = iVar18;
    if (*(uint *)(local_3c0 + 0x84) < iVar18 + 1U) {
      FUN_1456ef666(local_3c0 + 0x78);
    }
    lVar27 = *(longlong *)(lVar21 + 0x78);
    lVar26 = (longlong)iVar18 * 0x280;
    pvVar30 = (void *)(lVar27 + lVar26);
    memset(pvVar30,0,0x280);
    local_3d0 = pvVar30;
    FUN_14597ece2(pvVar30);
    lVar29 = lVar27 + lVar26;
    *(int *)(lVar29 + 0x80) = local_2f4;
    *(undefined4 *)(lVar29 + 0x10) = local_2a8;
    *(undefined8 *)(lVar29 + 8) = local_2b0;
    FUN_1447715ec(lVar27 + lVar26 + 0x18,&local_2a0);
    plVar24 = (longlong *)(lVar27 + lVar26 + 0x40);
    (**(code **)(*plVar24 + 0x20))(plVar24,0);
    *(undefined8 *)(lVar27 + lVar26 + 0x48) = *(undefined8 *)(param_2 + 0x58);
    FUN_1406022fe(lVar27 + lVar26 + 0x50,param_2 + 0x60);
    FUN_1405dc634(plVar24,param_2 + 0x70);
    plVar24 = (longlong *)(lVar27 + lVar26 + 0x60);
    (**(code **)(*plVar24 + 0x20))(plVar24,0);
    *(undefined8 *)(lVar27 + lVar26 + 0x68) = *(undefined8 *)(param_2 + 0x78);
    FUN_1406022fe(lVar27 + lVar26 + 0x70,param_2 + 0x80);
    lVar21 = lVar21 + 0x148;
    local_398 = lVar21;
    local_178 = (int *)(lVar29 + 8);
    local_170 = &local_2f4;
    uVar17 = FUN_1402b3ac6(lVar21,local_1f8,&local_178,0);
    auVar51 = _DAT_149934d80;
    auVar38 = param_5[4];
    dVar3 = auVar38._0_8_;
    dVar7 = auVar38._8_8_;
    auVar4 = param_5[5];
    dVar42 = auVar4._0_8_;
    auVar39 = *(undefined1 (*) [16])(param_2 + 0xd0);
    dVar45 = auVar39._0_8_;
    dVar8 = auVar39._8_8_;
    auVar5 = *(undefined1 (*) [16])(param_2 + 0xe0);
    dVar35 = auVar5._0_8_;
    auVar38 = minpd(auVar39,auVar38);
    auVar43 = minpd(auVar5,auVar4);
    auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
    auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
    iVar18 = movmskpd(uVar17,auVar39);
    auVar38._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
    auVar38._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
    uVar20 = movmskpd((int)lVar21,auVar38);
    if ((uVar20 & 0x3fffffff) == 0 && iVar18 == 0) {
      dVar50 = *(double *)(param_2 + 0x90);
      dVar10 = *(double *)(param_2 + 0x98);
      dVar11 = *(double *)(param_2 + 0xa0);
      dVar12 = *(double *)(param_2 + 0xa8);
      dVar47 = SUB168(*param_5,0);
      dVar48 = SUB168(*param_5,8);
      dVar13 = *(double *)param_5[1];
      dVar14 = *(double *)(param_5[1] + 8);
      dVar44 = *(double *)(param_5[1] + 8);
      dVar49 = *(double *)(param_5[1] + 8);
      dVar36 = *(double *)(*param_5 + 8);
      dVar2 = *(double *)(*param_5 + 8);
      dVar46 = *(double *)param_5[1];
      dVar41 = *(double *)param_5[1];
      dVar37 = dVar10 * dVar46 * -1.0 +
               dVar11 * dVar36 + dVar12 * *(double *)*param_5 * 1.0 + dVar50 * dVar44;
      dVar40 = dVar50 * dVar41 * 1.0 +
               dVar12 * dVar2 + dVar11 * *(double *)*param_5 * -1.0 + dVar10 * dVar49;
      auVar51._0_8_ =
           dVar12 * dVar46 * 1.0 +
           ((*(double *)*param_5 * dVar10 * 1.0 + dVar11 * dVar44) - dVar50 * dVar36);
      auVar51._8_8_ =
           dVar11 * dVar41 * -1.0 +
           ((*(double *)*param_5 * dVar50 * -1.0 + dVar12 * dVar49) - dVar10 * dVar2);
      dVar41 = *(double *)(param_2 + 0xb0) * dVar3;
      dVar50 = *(double *)(param_2 + 0xb8) * dVar7;
      dVar10 = *(double *)(param_2 + 0xc0) * dVar42;
      dVar11 = *(double *)(param_2 + 200) * auVar4._8_8_;
      dVar36 = dVar50 * dVar47 - dVar48 * dVar41;
      dVar2 = dVar10 * dVar48 - dVar13 * dVar50;
      dVar46 = dVar41 * dVar13 - dVar47 * dVar10;
      dVar12 = dVar11 * dVar14 - dVar14 * dVar11;
      dVar2 = dVar2 + dVar2;
      dVar46 = dVar46 + dVar46;
      dVar36 = dVar36 + dVar36;
      dVar12 = dVar12 + dVar12;
      local_118 = (dVar36 * dVar48 - dVar13 * dVar46) + dVar44 * dVar2 + dVar41 +
                  *(double *)param_5[2];
      dStack_110 = (dVar2 * dVar13 - dVar36 * dVar47) + dVar49 * dVar46 + dVar50 +
                   *(double *)(param_5[2] + 8);
      local_108 = (dVar46 * dVar47 - dVar48 * dVar2) + dVar44 * dVar36 + dVar10 +
                  *(double *)param_5[3];
      dVar49 = (dVar12 * dVar14 - dVar12 * dVar14) + dVar49 * dVar12 + dVar11 +
               *(double *)(param_5[3] + 8);
    }
    else {
      dVar36 = *(double *)*param_5;
      dVar2 = *(double *)(*param_5 + 8);
      dVar46 = *(double *)param_5[1];
      dVar41 = dVar2 + dVar2;
      dVar47 = dVar46 + dVar46;
      dVar40 = dVar36 * (dVar36 + dVar36);
      local_1a8 = (1.0 - (dVar40 + dVar2 * dVar41)) * dVar42;
      dVar44 = *(double *)*param_5 * dVar47;
      dVar37 = *(double *)(param_5[1] + 8);
      dVar48 = dVar47 * dVar37;
      dVar50 = (dVar36 + dVar36) * *(double *)(param_5[1] + 8);
      dVar37 = dVar41 * dVar37;
      local_1b8 = (dVar37 + dVar44) * dVar42;
      dVar40 = (DAT_149934d80._8_8_ - (dVar46 * dVar47 + dVar40)) * dVar7;
      dVar49 = (dVar41 * dVar36 + dVar48) * dVar3;
      local_1c8 = (dVar47 * dVar2 + dVar50) * dVar7;
      dStack_1b0 = (dVar47 * dVar2 - dVar50) * dVar42;
      local_1e8 = (dVar44 - dVar37) * dVar3;
      local_1f8._8_4_ = SUB84(dVar49,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar46 * dVar47 + dVar2 * dVar41)) * dVar3;
      local_1f8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar40,0);
      local_1d8._0_8_ = (dVar41 * dVar36 - dVar48) * dVar7;
      local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = *(undefined8 *)param_5[2];
      uStack_190 = *(undefined8 *)(param_5[2] + 8);
      local_188 = *(undefined8 *)param_5[3];
      uStack_180 = 0x3ff0000000000000;
      dVar44 = *(double *)(param_2 + 0x90);
      dVar36 = *(double *)(param_2 + 0x98);
      dVar2 = *(double *)(param_2 + 0xa0);
      dVar46 = dVar36 + dVar36;
      dVar41 = dVar2 + dVar2;
      dVar40 = dVar44 * (dVar44 + dVar44);
      local_228 = (1.0 - (dVar40 + dVar36 * dVar46)) * dVar35;
      dVar49 = *(double *)(param_2 + 0x90) * dVar41;
      dVar37 = *(double *)(param_2 + 0xa8);
      dVar47 = dVar41 * dVar37;
      dVar48 = (dVar44 + dVar44) * *(double *)(param_2 + 0xa8);
      dVar37 = dVar46 * dVar37;
      local_238 = (dVar37 + dVar49) * dVar35;
      dStack_230 = (dVar41 * dVar36 - dVar48) * dVar35;
      local_278 = (undefined1 *)
                  (((double)DAT_149934d80 - (dVar2 * dVar41 + dVar36 * dVar46)) * dVar45);
      dVar40 = (DAT_149934d80._8_8_ - (dVar2 * dVar41 + dVar40)) * dVar8;
      pdStack_270 = (double *)((dVar46 * dVar44 + dVar47) * dVar45);
      local_248 = (dVar41 * dVar36 + dVar48) * dVar8;
      local_268 = (dVar49 - dVar37) * dVar45;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar40,0);
      local_258._0_8_ = (dVar46 * dVar44 - dVar47) * dVar8;
      local_258._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = *(undefined8 *)(param_2 + 0xb0);
      uStack_210 = *(undefined8 *)(param_2 + 0xb8);
      local_208 = *(undefined8 *)(param_2 + 0xc0);
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar43._8_8_ = -(ulonglong)(0.0 <= dVar7 * dVar8);
      auVar43._0_8_ = -(ulonglong)(0.0 <= dVar3 * dVar45);
      auVar38 = blendvpd(_DAT_149936790,auVar51,auVar43);
      uVar32 = -(ulonglong)(0.0 <= dVar42 * dVar35);
      dVar37 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
      dVar40 = auVar38._0_8_;
      local_168 = local_168 * dVar40;
      local_170 = (int *)((double)local_170 * dVar40);
      local_178 = (int *)((double)local_178 * dVar40);
      dVar40 = auVar38._8_8_;
      local_148 = local_148 * dVar40;
      local_150 = local_150 * dVar40;
      local_158 = dVar40 * local_158;
      local_128 = local_128 * dVar37;
      local_130 = local_130 * dVar37;
      local_138 = dVar37 * local_138;
      FUN_14481fd10(&local_2d8,&local_178);
      dVar49 = (double)CONCAT44(uStack_2cc,uStack_2d0);
      dVar37 = local_2c8._0_8_;
      dVar40 = local_2c8._8_8_;
      dVar44 = dVar37 * dVar37 + local_2d8 * local_2d8;
      dVar36 = dVar40 * dVar40 + dVar49 * dVar49;
      auVar34._0_8_ = dVar44 + dVar36;
      auVar34._8_8_ = dVar44 + dVar36;
      auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
      auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
      auVar38 = sqrtpd(auVar34,auVar34);
      auVar38 = divpd(auVar51,auVar38);
      auVar52._0_8_ = auVar38._0_8_ * dVar37;
      auVar52._8_8_ = auVar38._8_8_ * dVar40;
      dVar37 = (double)((ulonglong)(local_2d8 * auVar38._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
      dVar40 = (double)((ulonglong)(dVar49 * auVar38._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
      auVar51 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar33);
      dVar49 = 0.0;
    }
    lVar21 = local_3c0;
    pvVar30 = local_3d0;
    dVar44 = auVar5._8_8_ * auVar4._8_8_;
    *(double *)((longlong)local_3d0 + 0x1f0) = dVar37;
    *(double *)((longlong)local_3d0 + 0x1f8) = dVar40;
    *(undefined1 (*) [16])((longlong)local_3d0 + 0x200) = auVar51;
    auVar4._8_4_ = SUB84(dStack_110,0);
    auVar4._0_8_ = local_118;
    auVar4._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_3d0 + 0x210) = auVar4;
    *(double *)((longlong)local_3d0 + 0x220) = local_108;
    *(double *)((longlong)local_3d0 + 0x228) = dVar49;
    auVar9._8_4_ = SUB84(dVar8 * dVar7,0);
    auVar9._0_8_ = dVar45 * dVar3;
    auVar9._12_4_ = (int)((ulonglong)(dVar8 * dVar7) >> 0x20);
    *(undefined1 (*) [16])((longlong)local_3d0 + 0x230) = auVar9;
    auVar5._8_4_ = SUB84(dVar44,0);
    auVar5._0_8_ = dVar35 * dVar42;
    auVar5._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_3d0 + 0x240) = auVar5;
    uVar6 = *local_3c8;
    uVar20 = (uint)((ulonglong)uVar6 >> 0x10);
    uVar28 = (uint)uVar6 & 0xffff;
    plVar24 = (longlong *)
              FUN_1402b391e(local_3c0 + 0x1a8,
                            ((uint)uVar6 << 0x10 | uVar28) + (int)((ulonglong)uVar6 >> 0x20) +
                            (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar28 >> 4));
    iVar18 = (int)plVar24[1];
    *(uint *)(plVar24 + 1) = iVar18 + 1U;
    if (*(uint *)((longlong)plVar24 + 0xc) < iVar18 + 1U) {
      FUN_1446f48e2(plVar24,iVar18);
    }
    *(int *)(*plVar24 + (longlong)iVar18 * 4) = local_2f4;
    iVar22 = *(int *)(param_2 + 0x100);
    if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar22);
    }
    lVar29 = (longlong)pvVar30 + 0xe8;
    if (*(int *)((longlong)pvVar30 + 0xf4) < iVar22) {
      FUN_1402b39de(lVar29);
      iVar22 = *(int *)(param_2 + 0x100);
    }
    iVar18 = local_2f4;
    if (iVar22 != 0) {
      local_3b0 = (longlong *)(lVar21 + 600);
      local_3b8 = (longlong *)(lVar21 + 0x198);
      pvVar30 = (void *)(*(longlong *)(param_2 + 0xf8) + 0x58);
      lVar27 = (longlong)iVar22 * 0x60;
      local_3a0 = lVar29;
      do {
        puVar15 = local_3c8;
        local_378 = lVar27;
        piVar19 = (int *)FUN_1402b3886(local_3a0);
        piVar19[0x20] = local_2f4;
        piVar19[4] = *(int *)((longlong)pvVar30 + -0x50);
        *(undefined8 *)(piVar19 + 2) = *(undefined8 *)((longlong)pvVar30 + -0x58);
        piVar31 = piVar19 + 6;
        local_3d0 = pvVar30;
        FUN_1447715ec(piVar31,(longlong)pvVar30 + -0x48);
        local_178 = (int *)*puVar15;
        FUN_1401533ba(&local_300,&local_178,1);
        plVar24 = local_390;
        local_178 = DAT_14cb7bb98;
        uVar17 = DAT_14cb7bba0;
        if (local_300 != 0) {
          local_178 = (int *)CONCAT44(uStack_2fc,local_300);
          uVar17 = local_2f8;
        }
        local_170 = (int *)CONCAT44(local_170._4_4_,uVar17);
        piVar25 = piVar19 + 2;
        FUN_144928d62(piVar31,1,&local_178);
        local_178 = (int *)*plVar24;
        FUN_1401533ba(local_30c,&local_178,1);
        FUN_14013eb2c(piVar25,local_30c);
        (**(code **)(*(longlong *)(piVar19 + 0x10) + 0x20))(piVar19 + 0x10,0);
        pvVar30 = local_3d0;
        *(undefined8 *)(piVar19 + 0x12) = *(undefined8 *)((longlong)local_3d0 + -0x18);
        local_388 = piVar19 + 0x14;
        FUN_1406022fe(local_388,(longlong)local_3d0 + -0x10);
        FUN_1446dcdd4(&local_178,pvVar30);
        lVar29 = FUN_1410002c4(&local_178);
        if (local_160 != 0) {
          FUN_1400020a8();
        }
        if (lVar29 != 0) {
          local_3a8 = piVar25;
          local_380 = piVar31;
          FUN_1400021e4(plVar24,local_1f8);
          FUN_1400b22c2(&local_2d8,L"_Common");
          FUN_1400021e4(puVar15,local_330);
          FUN_1400b22c2(local_350,"_StaticLI_");
          FUN_1400021e4(local_3d0,local_360);
          FUN_1401c7f3e(local_340,local_360,local_350);
          FUN_1401c7f3e(local_320,local_340,local_330);
          FUN_1401c7f3e(&local_278,local_320,&local_2d8);
          FUN_1401c7f3e(&local_178,&local_278,local_1f8);
          iVar18 = (int)local_170 + -1;
          if ((int)local_170 == 0) {
            iVar18 = 0;
          }
          FUN_1446f82e2(&local_2b8,iVar18,local_178,1);
          *(undefined8 *)(piVar19 + 0x21) = local_2b8;
          if (local_178 != (int *)0x0) {
            FUN_1400020a8();
          }
          if (local_278 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          piVar31 = local_380;
          piVar25 = local_3a8;
          lVar21 = local_3c0;
          if (local_320[0] != 0) {
            FUN_1400020a8();
          }
          if (local_340[0] != 0) {
            FUN_1400020a8();
          }
          if (local_360[0] != 0) {
            FUN_1400020a8();
          }
          if (local_350[0] != 0) {
            FUN_1400020a8();
          }
          if (local_330[0] != 0) {
            FUN_1400020a8();
          }
          if (local_2d8 != 0.0) {
            FUN_1400020a8();
          }
          if (local_1f8._0_8_ != 0) {
            FUN_1400020a8();
          }
          FUN_1446dcdd4(&local_178,piVar19 + 0x21);
          dVar49 = *(double *)(lVar29 + 0x60) * *(double *)param_5[4];
          dVar35 = *(double *)(lVar29 + 0x68) * *(double *)(param_5[4] + 8);
          dVar40 = *(double *)(lVar29 + 0x70) * *(double *)param_5[5];
          dVar7 = *(double *)*param_5;
          dVar8 = *(double *)(*param_5 + 8);
          dVar37 = *(double *)param_5[1];
          dVar3 = *(double *)(param_5[1] + 8);
          dVar42 = dVar35 * dVar7 - dVar49 * dVar8;
          dVar44 = dVar40 * dVar8 - dVar35 * dVar37;
          dVar45 = dVar49 * dVar37 - dVar7 * dVar40;
          dVar44 = dVar44 + dVar44;
          dVar45 = dVar45 + dVar45;
          dVar42 = dVar42 + dVar42;
          dVar35 = (dVar37 * dVar44 - dVar7 * dVar42) +
                   *(double *)(param_5[1] + 8) * dVar45 + dVar35 + *(double *)(param_5[2] + 8);
          local_1e8 = dVar42 * dVar3 + dVar40 + (dVar45 * dVar7 - dVar44 * dVar8) +
                      *(double *)param_5[3];
          local_1f8._8_4_ = SUB84(dVar35,0);
          local_1f8._0_8_ =
               (dVar42 * dVar8 - dVar45 * dVar37) + dVar3 * dVar44 + dVar49 + *(double *)param_5[2];
          local_1f8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          if (DAT_14cb7cbd0 != 0) {
            cVar16 = FUN_14140c09c(DAT_14cb7cbd0,&local_178,local_1f8,piVar25);
            if (cVar16 != '\0') {
              iVar18 = *(int *)(lVar21 + 0x260);
              *(uint *)(lVar21 + 0x260) = iVar18 + 1U;
              if (*(uint *)(lVar21 + 0x264) < iVar18 + 1U) {
                FUN_14014a81a(local_3b0,iVar18);
              }
              FUN_1447a97f4((longlong)iVar18 * 0x28 + *local_3b0,&local_178);
            }
          }
          if ((((*piVar31 == 0) || (iVar18 = piVar19[7], iVar18 == 0)) ||
              (*piVar31 == DAT_14c948000)) || ((iVar18 == 1 || (iVar18 < 2)))) {
            uStack_2d0 = DAT_14c948620;
            local_2d8 = DAT_14c948618;
          }
          else {
            uStack_2d0 = *(undefined4 *)(*(longlong *)(piVar19 + 0xc) + 0x14);
            local_2d8 = *(double *)(*(longlong *)(piVar19 + 0xc) + 0xc);
          }
          local_278 = *(undefined1 **)(piVar19 + 0x21);
          FUN_1401533ba(local_36c,&local_278,1);
          pdStack_270 = &local_2d8;
          local_278 = local_36c;
          FUN_1402b4156(local_320,&local_278);
          piVar25 = local_3a8;
          if (local_160 != 0) {
            FUN_1400020a8();
            piVar25 = local_3a8;
          }
        }
        local_170 = &local_2f4;
        local_178 = piVar25;
        FUN_1402b3ac6(local_398,local_1f8,&local_178,0);
        lVar27 = local_378;
        iVar18 = *(int *)(lVar21 + 0x1a0);
        *piVar19 = iVar18;
        *(uint *)(lVar21 + 0x1a0) = iVar18 + 1U;
        if (*(uint *)(lVar21 + 0x1a4) < iVar18 + 1U) {
          FUN_1456ef5d2(local_3b8,iVar18);
        }
        lVar29 = *local_3b8;
        lVar26 = (longlong)iVar18 * 0x90;
        piVar1 = (int *)(lVar29 + lVar26);
        piVar23 = piVar1 + 6;
        *piVar1 = *piVar19;
        *(undefined2 *)(piVar1 + 2) = 0;
        piVar1[3] = 0;
        piVar1[4] = 0;
        piVar23[0] = 0;
        piVar23[1] = 0;
        piVar1[8] = 0;
        piVar1[9] = 0;
        piVar1[10] = 0;
        piVar1[0xc] = 0;
        piVar1[0xd] = 0;
        piVar1[0xe] = 0;
        piVar1[0xf] = 0;
        *(undefined8 *)(piVar1 + 2) = *(undefined8 *)piVar25;
        piVar1[4] = piVar25[2];
        FUN_1447715ec(piVar23,piVar31);
        *(undefined2 **)(piVar1 + 0x10) = &DAT_14a171d50;
        lVar21 = lVar29 + lVar26;
        *(undefined8 *)(lVar21 + 0x48) = 0;
        *(undefined8 *)(lVar21 + 0x50) = 0;
        *(undefined8 *)(lVar21 + 0x58) = 0;
        *(undefined8 *)(lVar21 + 0x48) = *(undefined8 *)(piVar19 + 0x12);
        FUN_1406022fe(lVar21 + 0x50,local_388);
        *(undefined2 **)(lVar21 + 0x60) = &DAT_14a171d50;
        lVar29 = lVar29 + lVar26;
        *(undefined8 *)(lVar29 + 0x68) = 0;
        *(undefined8 *)(lVar29 + 0x70) = 0;
        *(undefined8 *)(lVar29 + 0x78) = 0;
        *(undefined8 *)(lVar29 + 0x68) = *(undefined8 *)(piVar19 + 0x1a);
        FUN_1406022fe(lVar29 + 0x70,piVar19 + 0x1c);
        *(undefined8 *)(lVar29 + 0x80) = *(undefined8 *)(piVar19 + 0x20);
        *(int *)(lVar29 + 0x88) = piVar19[0x22];
        pvVar30 = (void *)((longlong)local_3d0 + 0x60);
        lVar27 = lVar27 + -0x60;
        lVar21 = local_3c0;
        iVar18 = local_2f4;
      } while (lVar27 != 0);
    }
LAB_14140bb4c:
    if (local_288 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar18 = -1;
  }
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar18;
}



// FUNCTION 14140c09c FUN_14140c09c body=314 status=ok
// SIG undefined FUN_14140c09c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14140c09c(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar5 = (undefined8 *)FUN_14140c1d8(&DAT_14cb7cc68);
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 2) = 0;
  *puVar5 = &PTR_FUN_14b3e3930;
  *(undefined1 *)(puVar5 + 3) = 1;
  *(undefined2 *)(puVar5 + 4) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(puVar5 + 0xc) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)puVar5 + 100) = uVar2;
  *(undefined4 *)(puVar5 + 0xd) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x6c) = uVar4;
  puVar5[0xe] = DAT_14c8464f0;
  local_50 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xe] = *(undefined8 *)(param_3 + 4);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *(undefined4 *)(puVar5 + 0xc) = *param_3;
    *(undefined4 *)((longlong)puVar5 + 100) = uVar2;
    *(undefined4 *)(puVar5 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x6c) = uVar4;
    *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(param_4 + 1);
    puVar5[4] = *param_4;
    FUN_1447715ec(puVar5 + 6,param_4 + 2);
    local_40 = &local_50;
    local_48 = param_2;
    FUN_14140c22c(param_1 + 0x390,local_34,&local_48,0);
    puVar1 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      (**(code **)*local_50)(local_50,0);
      _DAT_14cb7cc74 = _DAT_14cb7cc74 + -1;
      *puVar1 = DAT_14cb7cc68;
      DAT_14cb7cc68 = puVar1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar5 != (undefined8 *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14140c1d8 FUN_14140c1d8 body=84 status=ok
// SIG undefined FUN_14140c1d8(void)

void FUN_14140c1d8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0xf00,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0xf;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14140c22c FUN_14140c22c body=931 status=ok
// SIG undefined FUN_14140c22c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_14140c22c(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
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
  char cVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  int iVar27;
  int iVar28;
  undefined4 *puVar29;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar25 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_1447030e2(param_1,iVar25);
    }
    iVar28 = (int)param_1[5];
    if (iVar28 == 0) {
      iVar17 = -1;
    }
    else {
      iVar17 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar17 = iVar28 + -1;
      }
      iVar17 = iVar17 >> 5;
    }
    plVar20 = param_1 + 2;
    iVar23 = iVar28 + 1;
    iVar27 = iVar28 + 0x1f;
    if (-1 < iVar28) {
      iVar27 = iVar28;
    }
    if (iVar27 >> 5 == iVar17) {
      *(int *)(param_1 + 5) = iVar23;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar28) {
        if (iVar28 + 0x20U < 0xa0) {
          iVar23 = 0x80;
          iVar17 = iVar28;
        }
        else {
          uVar22 = iVar28 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar22) {
              uVar18 = uVar22;
            }
          }
          else {
            uVar18 = (uVar22 * 3 >> 3) + uVar22 + 0x10;
          }
          uVar24 = FUN_144a3809e(uVar18 << 2,0);
          iVar17 = (int)(uVar24 >> 2);
          iVar23 = -0x20;
          if ((int)uVar22 <= iVar17) {
            iVar23 = iVar17 << 5;
          }
          iVar17 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar23;
        FUN_1446efbd8(plVar20,iVar17);
        iVar23 = (int)param_1[5] + 1;
      }
      iVar17 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar17 = iVar23;
      }
      *(int *)(param_1 + 5) = iVar23;
      if (iVar23 % 0x20 != 0) {
        plVar26 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar26 = plVar20;
        }
        bVar21 = -(char)(iVar23 % 0x20);
        *(uint *)((longlong)plVar26 + (longlong)(iVar17 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar26 + (longlong)(iVar17 >> 5) * 4) << (bVar21 & 0x1f)) >>
             (bVar21 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[4];
    }
    bVar21 = (byte)iVar28 & 0x1f;
    puVar2 = (uint *)((longlong)plVar20 + (longlong)(iVar27 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar19 = (longlong)iVar25;
    iVar28 = *(int *)(*param_1 + 4 + lVar19 * 0x38);
    *(int *)(param_1 + 6) = iVar28;
    iVar17 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar17;
    if (iVar17 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar28 * 0x38) = 0xffffffff;
    }
  }
  plVar20 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar20 = (longlong *)param_1[4];
  }
  iVar28 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar28 = iVar25;
  }
  puVar2 = (uint *)((longlong)plVar20 + (longlong)(iVar28 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar25 & 0x1f);
  lVar3 = *param_1;
  lVar19 = lVar19 * 0x38;
  puVar29 = (undefined4 *)(lVar3 + lVar19);
  puVar4 = (undefined8 *)param_3[1];
  FUN_1447a97f4(puVar29,*param_3);
  *(undefined8 *)(lVar3 + 0x28 + lVar19) = *puVar4;
  *puVar4 = 0;
  *(undefined4 *)(lVar3 + 0x30 + lVar19) = 0xffffffff;
  uVar22 = *(uint *)(lVar3 + lVar19);
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar20 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[8];
    }
    iVar28 = *(int *)((longlong)plVar20 + (ulonglong)((int)param_1[9] - 1U & uVar22) * 4);
    if (iVar28 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar28 * 0x38);
        if (*(uint *)(*param_1 + (longlong)iVar28 * 0x38) == uVar22) {
          plVar20 = *(longlong **)(puVar1 + 10);
          if (plVar20 != (longlong *)0x0) {
            (**(code **)*plVar20)(plVar20,0);
            _DAT_14cb7cc74 = _DAT_14cb7cc74 + -1;
            *plVar20 = (longlong)DAT_14cb7cc68;
            DAT_14cb7cc68 = plVar20;
          }
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar5 = *puVar29;
          uVar6 = puVar29[1];
          uVar7 = puVar29[2];
          uVar8 = puVar29[3];
          uVar9 = puVar29[4];
          uVar10 = puVar29[5];
          uVar11 = puVar29[6];
          uVar12 = puVar29[7];
          uVar13 = puVar29[9];
          uVar14 = puVar29[10];
          uVar15 = puVar29[0xb];
          puVar1[8] = puVar29[8];
          puVar1[9] = uVar13;
          puVar1[10] = uVar14;
          puVar1[0xb] = uVar15;
          puVar1[4] = uVar9;
          puVar1[5] = uVar10;
          puVar1[6] = uVar11;
          puVar1[7] = uVar12;
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          FUN_14885008e(param_1,iVar25);
          cVar16 = '\x01';
          goto LAB_14140c38c;
        }
        iVar28 = puVar1[0xc];
      } while (iVar28 != -1);
    }
  }
  cVar16 = '\0';
  iVar28 = iVar25;
LAB_14140c38c:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar16;
  }
  if (cVar16 == '\0') {
    uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar18 < 4) {
      iVar25 = 1;
    }
    else {
      uVar24 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar25 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar18 < 1) || (iVar25 <= (int)param_1[9])) {
      uVar22 = (int)param_1[9] - 1U & uVar22;
      puVar29[0xd] = uVar22;
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = param_1 + 7;
      }
      puVar29[0xc] = *(undefined4 *)
                      ((longlong)plVar20 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4);
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = param_1 + 7;
      }
      *(int *)((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4) =
           iVar28;
    }
    else {
      *(int *)(param_1 + 9) = iVar25;
      FUN_14140c5d0(param_1);
    }
  }
  *param_2 = iVar28;
  return param_2;
}



// FUNCTION 14140c5d0 FUN_14140c5d0 body=536 status=ok
// SIG undefined FUN_14140c5d0(void)

void FUN_14140c5d0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x38;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x34 + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x30 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_14140c7a3;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_14140c7a3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


