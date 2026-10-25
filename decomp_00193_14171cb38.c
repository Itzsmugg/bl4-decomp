// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14171cb38 FUN_14171cb38 body=259 status=ok
// SIG undefined FUN_14171cb38(void)

ulonglong FUN_14171cb38(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_14171cc18:
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
    }
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_14171cc18;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_14171cb5c;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x40)) & 0xffffffffffffff01
  ;
LAB_14171cb5c:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14171cc3c FUN_14171cc3c body=262 status=ok
// SIG undefined FUN_14171cc3c(void)

undefined8 FUN_14171cc3c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_14171cd1f:
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
    }
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_14171cd1f;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar6 = 0;
      goto LAB_14171cc63;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x40)) & 0xffffffffffffff08
  ;
  uVar6 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 3);
LAB_14171cc63:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14171cd44 FUN_14171cd44 body=264 status=ok
// SIG undefined FUN_14171cd44(void)

undefined8 FUN_14171cd44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_14171ce29:
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
    }
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_14171ce29;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_14171cd6d;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),(byte)(*(char *)(lVar4 + 0x42) - 5U) < 0xfd);
LAB_14171cd6d:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14171ce4e FUN_14171ce4e body=318 status=ok
// SIG undefined FUN_14171ce4e(void)

undefined8 * FUN_14171ce4e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_1[1];
  if (lVar4 != 0) goto LAB_14171ce72;
  local_50 = *param_1;
  local_48 = 0;
  local_40 = param_1[2];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_1402df5c4(&local_38,&local_50);
  plVar1 = local_30;
  param_1[1] = local_38;
  local_38 = 0;
  plVar3 = (longlong *)param_1[2];
  if (local_30 == plVar3) {
LAB_14171cf6e:
    plVar3 = local_30;
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
        }
      }
    }
  }
  else {
    local_30 = (longlong *)0x0;
    param_1[2] = plVar1;
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
      goto LAB_14171cf6e;
    }
  }
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
LAB_14171ce72:
  *param_2 = *(undefined8 *)(lVar4 + 0x20);
  param_2[1] = *(undefined8 *)(lVar4 + 0x28);
  lVar4 = *(longlong *)(lVar4 + 0x30);
  param_2[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14171cf92 FUN_14171cf92 body=128 status=ok
// SIG undefined FUN_14171cf92(void)

void FUN_14171cf92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ec52d0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_149ec5260;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14171d012 FUN_14171d012 body=29 status=ok
// SIG undefined FUN_14171d012(void)

undefined8 FUN_14171d012(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171d030 FUN_14171d030 body=632 status=ok
// SIG undefined FUN_14171d030(void)

void FUN_14171d030(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c966de0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c966de0,0,0,4);
  }
  uVar5 = DAT_14c966de8;
  if (DAT_14c966de8 != 0) {
    FUN_144a1cbf0(&DAT_14c966dd8,0,DAT_14c966de8,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14c966de0;
        if (DAT_14c966de0 == (undefined *)0x0) {
          puVar7 = &DAT_14c966dd8;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c966de8 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14c966db0;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14c966dc8 == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar9 = local_48;
    if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
      do {
        lVar13 = DAT_14c966da0;
        lVar12 = (longlong)iVar6 * 0x30;
        uVar1 = *(undefined8 *)(DAT_14c966da0 + lVar12);
        uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
        uVar14 = (uint)uVar1 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar1 << 0x10 | uVar14) + (int)((ulonglong)uVar1 >> 0x20) +
                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) &
                 (longlong)(int)DAT_14c966de8 - 1U;
        iVar10 = (int)uVar11;
        *(int *)(DAT_14c966da0 + 0x2c + lVar12) = iVar10;
        puVar7 = DAT_14c966de0;
        if (DAT_14c966de0 == (undefined *)0x0) {
          puVar7 = &DAT_14c966dd8;
        }
        *(undefined4 *)(lVar13 + 0x28 + lVar12) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c966de8 - 1U & uVar11) * 4);
        puVar7 = DAT_14c966de0;
        if (DAT_14c966de0 == (undefined *)0x0) {
          puVar7 = &DAT_14c966dd8;
        }
        *(int *)(puVar7 + ((longlong)iVar10 & (longlong)(int)DAT_14c966de8 - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        puVar7 = *(undefined **)(local_58 + 0x10);
        if (*(undefined **)(local_58 + 0x10) == (undefined *)0x0) {
          puVar7 = local_58;
        }
        iVar10 = *(int *)(local_58 + 0x18);
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar6 = iVar10 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)(puVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_14171d261;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar11 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar10);
    }
  }
LAB_14171d261:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171d2aa FUN_14171d2aa body=363 status=ok
// SIG undefined FUN_14171d2aa(void)

undefined4 * FUN_14171d2aa(undefined4 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  ulonglong *local_d0;
  byte local_b0;
  byte local_af;
  longlong *local_80;
  longlong local_60;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  memset(&local_d8,0,0x90);
  FUN_144869430(&local_d8);
  local_48 = 0;
  local_38 = 0;
  local_b0 = local_b0 | 4;
  local_af = local_af | 1;
  local_d8 = &PTR_FUN_149e1e330;
  local_40 = plVar1;
  if (local_d0[1] < *local_d0 + 4) {
    iVar2 = param_1[4];
    if ((iVar2 < 4) && (param_1[4] = 4, (uint)(param_1[5] - iVar2) < 4U - iVar2)) {
      FUN_1447403be(plVar1);
      lVar3 = (longlong)(int)local_48;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(*local_40 + lVar3) = param_2 & 0xff;
    local_48 = local_48 + 4;
  }
  else {
    *local_d0 = *local_d0 + 4;
  }
  *param_1 = 2;
  local_d8 = &PTR__purecall_149e35f70;
  if (local_80 != (longlong *)0x0) {
    if (*local_80 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_80);
  }
  if (local_60 != 0) {
    if (*(longlong *)(local_60 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_60);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171d416 FUN_14171d416 body=474 status=ok
// SIG undefined FUN_14171d416(void)

HICON FUN_14171d416(undefined8 param_1,longlong param_2,int param_3,int param_4,double *param_5)

{
  longlong lVar1;
  HBITMAP ho;
  HBITMAP ho_00;
  HICON pHVar2;
  uint uVar3;
  undefined1 auStackY_c8 [32];
  ICONINFO local_98;
  void *local_78;
  ulonglong uStack_70;
  void *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStackY_c8;
  uVar3 = param_4 * param_3;
  local_68 = (void *)0x0;
  uStack_60 = (ulonglong)uVar3;
  if (uVar3 == 0) {
    local_78 = (void *)0x0;
    uStack_70 = 0;
  }
  else {
    FUN_14602b1fc(&local_68,0);
    local_78 = (void *)0x0;
    uStack_70 = (ulonglong)uVar3;
    FUN_1447403be(&local_78,0);
    if (0 < (int)uStack_60) {
      lVar1 = 0;
      do {
        *(uint *)((longlong)local_68 + lVar1 * 4) =
             (uint)*(byte *)(param_2 + 1 + lVar1 * 4) << 8 |
             (uint)*(byte *)(param_2 + 3 + lVar1 * 4) << 0x18 |
             (uint)*(byte *)(param_2 + 2 + lVar1 * 4) | (uint)*(byte *)(param_2 + lVar1 * 4) << 0x10
        ;
        *(undefined1 *)((longlong)local_78 + lVar1) = 0xff;
        lVar1 = lVar1 + 1;
      } while (lVar1 < (int)uStack_60);
    }
  }
  ho = CreateBitmap(param_3,param_4,1,0x20,local_68);
  ho_00 = CreateBitmap(param_3,param_4,1,8,local_78);
  local_98._0_8_ =
       ((ulonglong)(longlong)ROUND((double)param_3 * *param_5 + (double)param_3 * *param_5 + 0.5) >>
       1) << 0x20;
  local_98._8_8_ =
       (ulonglong)(longlong)ROUND((double)param_4 * param_5[1] + (double)param_4 * param_5[1] + 0.5)
       >> 1 & 0xffffffff;
  local_98.hbmMask = ho;
  local_98.hbmColor = ho;
  pHVar2 = CreateIconIndirect(&local_98);
  DeleteObject(ho);
  DeleteObject(ho_00);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStackY_c8) == DAT_14c707940) {
    return pHVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171d5f2 FUN_14171d5f2 body=468 status=ok
// SIG undefined FUN_14171d5f2(void)

undefined4 *
FUN_14171d5f2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
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
  FUN_1409bc900(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_48 = *puVar1;
  uVar11 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_48 + 2) = *puVar2;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
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
  cVar3 = FUN_1409bc7bc(param_1,uVar11,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar8 < 4) {
      iVar9 = 1;
    }
    else {
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
      *(uint *)((longlong)local_48 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
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
      FUN_1409bd292(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171d7c8 FUN_14171d7c8 body=29 status=ok
// SIG undefined FUN_14171d7c8(void)

undefined8 FUN_14171d7c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171d7e5 FUN_14171d7e5 body=692 status=ok
// SIG undefined FUN_14171d7e5(void)

undefined8 FUN_14171d7e5(HWND param_1,int param_2)

{
  char cVar1;
  int iVar2;
  HDC hdc;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  COLORREF color;
  ulonglong uVar7;
  LPCWSTR pWVar8;
  undefined1 auStackY_108 [32];
  uint local_b0;
  int local_ac;
  int local_a8;
  tagRECT local_a0;
  tagPAINTSTRUCT local_90;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_108;
  if (param_2 == 2) {
    PostQuitMessage(0);
  }
  else {
    if (param_2 != 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_108);
    }
    if (DAT_14c9679f8 != 0) {
      hdc = BeginPaint(param_1,&local_90);
      DrawStateW(hdc,(HBRUSH)0x0,(DRAWSTATEPROC)0x0,DAT_14c9679f8,0,0,0,0,0,4);
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9679d0);
      uVar7 = 0;
      do {
        puVar5 = &DAT_14c967990 + uVar7 * 2;
        cVar1 = FUN_144a7c5f6(puVar5);
        if (cVar1 == '\0') {
          puVar6 = &DAT_14c967a50;
          if (uVar7 == 3) {
            puVar6 = (undefined8 *)&DAT_14c967a48;
          }
          puVar3 = &DAT_14c967a40;
          if (1 < uVar7) {
            puVar3 = puVar6;
          }
          SelectObject(hdc,(HGDIOBJ)*puVar3);
          SetTextAlign(hdc,0);
          SetBkColor(hdc,0);
          SetBkMode(hdc,1);
          GetClientRect(param_1,&local_a0);
          local_b0 = 0xffffffff;
          do {
            local_a8 = -1;
            local_ac = 0;
            if (local_b0 < 7) {
              local_a8 = *(int *)(&DAT_149ecae6c + (ulonglong)local_b0 * 4);
              local_ac = *(int *)(&DAT_149ecae88 + (ulonglong)local_b0 * 4);
            }
            SetTextColor(hdc,0);
            lVar4 = FUN_1447a1f4a(puVar5);
            iVar2 = *(int *)(lVar4 + 8) + -1;
            if (*(int *)(lVar4 + 8) == 0) {
              iVar2 = 0;
            }
            puVar6 = (undefined8 *)FUN_1447a1f4a(puVar5);
            pWVar8 = L"";
            if (*(int *)(puVar6 + 1) != 0) {
              pWVar8 = (LPCWSTR)*puVar6;
            }
            TextOutW(hdc,local_a8 + (&DAT_14c967a00)[uVar7 * 4],
                     local_ac + (&DAT_14c967a04)[uVar7 * 4],pWVar8,iVar2);
            local_b0 = local_b0 + 1;
          } while (local_b0 != 7);
          color = 0xa0a0a0;
          if (uVar7 == 3) {
            color = 0xffffff;
          }
          SetTextColor(hdc,color);
          lVar4 = FUN_1447a1f4a(puVar5);
          iVar2 = *(int *)(lVar4 + 8) + -1;
          if (*(int *)(lVar4 + 8) == 0) {
            iVar2 = 0;
          }
          puVar5 = (undefined8 *)FUN_1447a1f4a(puVar5);
          if (*(int *)(puVar5 + 1) == 0) {
            pWVar8 = L"";
          }
          else {
            pWVar8 = (LPCWSTR)*puVar5;
          }
          TextOutW(hdc,(&DAT_14c967a00)[uVar7 * 4],(&DAT_14c967a04)[uVar7 * 4],pWVar8,iVar2);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 4);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9679d0);
      EndPaint(param_1,&local_90);
    }
  }
  if ((local_48 ^ (ulonglong)auStackY_108) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171dabf FUN_14171dabf body=49 status=ok
// SIG undefined FUN_14171dabf(void)

longlong FUN_14171dabf(void)

{
  if (DAT_14c967aa8 == 0) {
    FUN_14073dd9a(&DAT_14c967aa8,&PTR_LAB_149ecb4a8);
  }
  return DAT_14c967aa8;
}



// FUNCTION 14171daf0 FUN_14171daf0 body=49 status=ok
// SIG undefined FUN_14171daf0(void)

longlong FUN_14171daf0(void)

{
  if (DAT_14c967c60 == 0) {
    FUN_14086a14e(&DAT_14c967c60,&PTR_FUN_149ecd100);
  }
  return DAT_14c967c60;
}



// FUNCTION 14171db21 FUN_14171db21 body=49 status=ok
// SIG undefined FUN_14171db21(void)

longlong FUN_14171db21(void)

{
  if (DAT_14c967d68 == 0) {
    FUN_1409ce572(&DAT_14c967d68,&PTR_FUN_149ecd740);
  }
  return DAT_14c967d68;
}



// FUNCTION 14171db52 FUN_14171db52 body=49 status=ok
// SIG undefined FUN_14171db52(void)

longlong FUN_14171db52(void)

{
  if (DAT_14c967d80 == 0) {
    FUN_1409ce572(&DAT_14c967d80,&PTR_FUN_149ecd7d0);
  }
  return DAT_14c967d80;
}



// FUNCTION 14171db83 FUN_14171db83 body=49 status=ok
// SIG undefined FUN_14171db83(void)

longlong FUN_14171db83(void)

{
  if (DAT_14c967e40 == 0) {
    FUN_14086a14e(&DAT_14c967e40,&PTR_FUN_149ecde60);
  }
  return DAT_14c967e40;
}



// FUNCTION 14171dbb4 FUN_14171dbb4 body=101 status=ok
// SIG undefined FUN_14171dbb4(void)

undefined4 * FUN_14171dbb4(void)

{
  undefined4 *puVar1;
  
  if (DAT_14c967e88 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_14001cc68(0x20,0x10);
    *puVar1 = 1;
    FUN_141471170(puVar1 + 2,L"Slate.bAllowThrottling",puVar1,
                  L"Allow Slate to throttle parts of the engine to ensure the UI is responsive",0);
    *(undefined8 *)(puVar1 + 6) = 0;
    DAT_14c967e88 = puVar1;
  }
  return DAT_14c967e88;
}



// FUNCTION 14171dc1a FUN_14171dc1a body=98 status=ok
// SIG undefined FUN_14171dc1a(void)

undefined8 * FUN_14171dc1a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 14171dc7c FUN_14171dc7c body=93 status=ok
// SIG undefined FUN_14171dc7c(void)

void FUN_14171dc7c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x40) = lVar2 + 0x10000;
    puVar3 = (uint *)*param_1;
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 + puVar3[0x12] + 1;
    UNLOCK();
    if ((uVar1 ^ puVar3[0x12]) == 0xffffffff) {
      lVar2 = *param_1;
      lVar4 = DAT_14c872d30;
      if (DAT_14c872d30 == 0) {
        lVar4 = FUN_145bdc178();
      }
      FUN_140028df4(lVar4,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14171dcda FUN_14171dcda body=63 status=ok
// SIG undefined FUN_14171dcda(void)

void FUN_14171dcda(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0xe0) == 0) {
    uVar1 = FUN_14574f6a4(*(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x48),param_1 + 0x50,
                          *(undefined4 *)(param_1 + 0xd0));
    *(undefined2 *)(param_1 + 0xe0) = uVar1;
  }
  return;
}



// FUNCTION 14171dd1a FUN_14171dd1a body=151 status=ok
// SIG undefined FUN_14171dd1a(void)

undefined8 FUN_14171dd1a(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406d8dea(param_1,&local_28,param_2);
  if (local_28 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((param_3 & 0xffffffff) >> 8);
    if (*(char *)(local_28 + 3) == '\0') {
      iVar3 = FUN_144b42f90(*local_28,param_3 & 0xffffffff);
      uVar4 = CONCAT71(uVar5,iVar3 != 0);
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
    }
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
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171ddb2 FUN_14171ddb2 body=49 status=ok
// SIG undefined FUN_14171ddb2(void)

longlong FUN_14171ddb2(void)

{
  if (DAT_14c9684e8 == 0) {
    FUN_14086a14e(&DAT_14c9684e8,&PTR_FUN_149ed3240);
  }
  return DAT_14c9684e8;
}



// FUNCTION 14171dde3 FUN_14171dde3 body=49 status=ok
// SIG undefined FUN_14171dde3(void)

longlong FUN_14171dde3(void)

{
  if (DAT_14c96b010 == 0) {
    FUN_14086a14e(&DAT_14c96b010,&PTR_FUN_149ed79d8);
  }
  return DAT_14c96b010;
}



// FUNCTION 14171de14 FUN_14171de14 body=49 status=ok
// SIG undefined FUN_14171de14(void)

longlong FUN_14171de14(void)

{
  if (DAT_14c96b028 == 0) {
    FUN_14086a14e(&DAT_14c96b028,&PTR_FUN_149ed7a30);
  }
  return DAT_14c96b028;
}



// FUNCTION 14171de45 FUN_14171de45 body=49 status=ok
// SIG undefined FUN_14171de45(void)

longlong FUN_14171de45(void)

{
  if (DAT_14c96b070 == 0) {
    FUN_14086a14e(&DAT_14c96b070,&PTR_FUN_149ed7b68);
  }
  return DAT_14c96b070;
}



// FUNCTION 14171de76 FUN_14171de76 body=49 status=ok
// SIG undefined FUN_14171de76(void)

longlong FUN_14171de76(void)

{
  if (DAT_14c96b178 == 0) {
    FUN_14086a14e(&DAT_14c96b178,&PTR_FUN_149ed8250);
  }
  return DAT_14c96b178;
}



// FUNCTION 14171dea8 FUN_14171dea8 body=176 status=ok
// SIG undefined FUN_14171dea8(void)

void FUN_14171dea8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14171dec7;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14171dec7:
  plVar1 = *(longlong **)(param_1 + 0x18);
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
  plVar1 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014171df4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14171df58 FUN_14171df58 body=806 status=ok
// SIG undefined FUN_14171df58(void)

bool FUN_14171df58(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  char cVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8;
  longlong *local_1b0;
  undefined ***local_1a8;
  undefined ****local_1a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  iVar9 = FUN_1448332aa(param_2,&DAT_149e3cc28);
  if (8 < iVar9) {
    uVar13 = 0;
    if (param_2[0xd] != 0) {
      uVar13 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
    }
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_1b8 = (undefined **)CONCAT44(local_1b8._4_4_,uVar13);
      (**(code **)(*param_2 + 0x170))(param_2,&local_1b8,4);
      uVar13 = (uint)local_1b8;
      if (1 < (uint)local_1b8) {
        FUN_14572541c(param_2);
        uVar13 = (uint)local_1b8;
      }
    }
    else {
      uVar13 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar13 == 0) {
      if (DAT_14c968228 == (longlong *)0x0) {
        uVar11 = FUN_140d946fa();
        DAT_14c968228 = (longlong *)FUN_140002ddd(FUN_14627917b,uVar11,L"FontData");
      }
      plVar6 = DAT_14c968228;
      cVar8 = FUN_1427dc71c(DAT_14c968228,param_2);
      if (cVar8 == '\0') {
        local_1c8 = 0;
        uStack_1c0 = 0;
        FUN_14496b17c(plVar6,param_2,param_3,plVar6);
      }
      else {
        local_1a0 = &local_1a8;
        local_1b8 = &PTR_FUN_149e37810;
        local_1a8 = &local_1b8;
        local_1b0 = param_2;
        (**(code **)(*plVar6 + 0x2c0))(plVar6);
      }
    }
    else {
      local_1b8 = (undefined **)param_3[4];
      (**(code **)(*param_2 + 0x150))(param_2,&local_1b8);
      ppuVar7 = local_1b8;
      if ((local_1b8 == (undefined **)0x0) || (DAT_14c950c29 == '\0')) {
        param_3[4] = local_1b8;
        if (local_1b8 == (undefined **)0x0) {
          FUN_14021219d(param_2,param_3);
          puVar5 = *(undefined1 **)param_2[1];
          if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
            (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_3 + 0x14),1);
          }
          else {
            *(undefined1 *)((longlong)param_3 + 0x14) = *puVar5;
            *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
          }
          puVar5 = *(undefined1 **)param_2[1];
          if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
            (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_3 + 0x15),1);
          }
          else {
            *(undefined1 *)((longlong)param_3 + 0x15) = *puVar5;
            *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
          }
        }
      }
      else {
        FUN_1456cec3c(local_1b8);
        param_3[4] = ppuVar7;
      }
      puVar4 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2);
        }
        else {
          thunk_FUN_14572512c(param_2);
        }
      }
      else {
        *(undefined4 *)(param_3 + 3) = *puVar4;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
    }
    iVar2 = *(int *)(param_3 + 1);
    uVar13 = 0;
    iVar12 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar12 = 0;
    }
    if (0 < iVar12) {
      if (iVar2 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)*param_3;
      }
      lVar15 = 0;
      uVar13 = 0;
      do {
        uVar14 = ((uint)(0x19 < (ushort)puVar10[lVar15] - 0x61) * 0x20 +
                 (uint)(ushort)puVar10[lVar15]) - 0x20;
        uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar14) & 0xff) * 4)
        ;
        uVar13 = uVar13 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar14 >> 8 & 0xff) * 4);
        lVar15 = lVar15 + 1;
      } while (iVar12 != (int)lVar15);
    }
    *(uint *)(param_3 + 2) = uVar13;
  }
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return 8 < iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171e280 FUN_14171e280 body=14 status=ok
// SIG undefined FUN_14171e280(void)

void FUN_14171e280(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14171e28e FUN_14171e28e body=29 status=ok
// SIG undefined FUN_14171e28e(void)

undefined8 FUN_14171e28e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171e2ac FUN_14171e2ac body=212 status=ok
// SIG undefined FUN_14171e2ac(void)

void FUN_14171e2ac(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 14171e380 FUN_14171e380 body=269 status=ok
// SIG undefined FUN_14171e380(void)

void FUN_14171e380(longlong param_1,int param_2)

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



// FUNCTION 14171e48e FUN_14171e48e body=29 status=ok
// SIG undefined FUN_14171e48e(void)

undefined8 FUN_14171e48e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171e4ac FUN_14171e4ac body=29 status=ok
// SIG undefined FUN_14171e4ac(void)

undefined8 FUN_14171e4ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171e4ca FUN_14171e4ca body=29 status=ok
// SIG undefined FUN_14171e4ca(void)

undefined8 FUN_14171e4ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171e4e8 FUN_14171e4e8 body=162 status=ok
// SIG undefined FUN_14171e4e8(void)

void FUN_14171e4e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    FUN_1447fa2ac(*(undefined8 *)(lVar3 + 0x150),*(undefined4 *)(lVar3 + 0x158));
    if (*(longlong *)(lVar3 + 0x150) != 0) {
      FUN_1400020a8();
    }
    plVar4 = *(longlong **)(lVar3 + 0x148);
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
    lVar5 = lVar3 + 8;
    if (*(longlong *)(lVar3 + 0x128) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x128);
    }
    FUN_1447157bd(lVar5,*(undefined4 *)(lVar3 + 0x130));
    if (*(longlong *)(lVar3 + 0x128) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 14171e58a FUN_14171e58a body=29 status=ok
// SIG undefined FUN_14171e58a(void)

undefined8 FUN_14171e58a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171e5a8 FUN_14171e5a8 body=269 status=ok
// SIG undefined FUN_14171e5a8(void)

void FUN_14171e5a8(longlong param_1,int param_2)

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



// FUNCTION 14171e6b6 FUN_14171e6b6 body=303 status=ok
// SIG undefined FUN_14171e6b6(void)

void FUN_14171e6b6(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 == 0) goto LAB_14171e6d8;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(lVar3 + 0x1c);
    if (2 < iVar2) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
        goto LAB_14171e7ee;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_58);
  }
  else {
LAB_14171e7ee:
    FUN_140082318(lVar3);
  }
  lVar3 = *(longlong *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
  }
LAB_14171e6d8:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171e7fc FUN_14171e7fc body=1013 status=ok
// SIG undefined FUN_14171e7fc(void)

void FUN_14171e7fc(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x50) != 0) || (*(int *)(param_1 + 0xb8) != 0)) {
    puVar5 = TlsGetValue(DAT_14c896140);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar5);
    }
    puVar7 = (undefined8 *)puVar5[1];
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar5;
      if (puVar7 == (undefined8 *)0x0) {
        uVar11 = (uint)DAT_14c896180;
        uVar3 = DAT_14c896180;
        while (DAT_14c896180 = uVar3, local_58 = uVar3, (uVar3 & 0x3ffffff) != 0) {
          local_60 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
          if (local_60 >> 0x1a < uVar3 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar10 = (ulonglong)((uVar11 & 0x3ffffff) >> 0xe);
          uVar12 = (ulonglong)((uint)uVar3 & 0x3fff);
          local_60 = local_60 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 0x10 + uVar12 * 0x18);
          LOCK();
          bVar13 = local_58 == DAT_14c896180;
          uVar3 = local_60;
          if (!bVar13) {
            uVar3 = DAT_14c896180;
          }
          DAT_14c896180 = uVar3;
          UNLOCK();
          if (bVar13) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + uVar12 * 0x18 + 0x10) = 0;
            puVar7 = *(undefined8 **)
                      (*(longlong *)(&DAT_14c833b00 + uVar10 * 8) + 8 +
                      (ulonglong)(uVar11 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar11 & 0x3ffffff);
            puVar5[1] = puVar7;
            if (puVar7 != (undefined8 *)0x0) goto LAB_14171eaee;
            goto LAB_14171eb30;
          }
          uVar11 = (uint)DAT_14c896180;
          uVar3 = DAT_14c896180;
        }
        puVar5[1] = 0;
LAB_14171eb30:
        puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar5[1] = puVar7;
        iVar4 = 0xff;
        puVar8 = puVar7;
        do {
          puVar9 = puVar8 + 0x20;
          *puVar8 = puVar9;
          iVar4 = iVar4 + -1;
          puVar8 = puVar9;
        } while (iVar4 != 0);
      }
      else {
        puVar5[1] = puVar7;
        puVar9 = puVar5;
      }
      *puVar9 = 0;
LAB_14171eaee:
      *(undefined4 *)(puVar5 + 2) = 0x100;
      iVar4 = 0xff;
    }
    else {
      iVar4 = *(int *)(puVar5 + 2) + -1;
    }
    puVar5[1] = *puVar7;
    *(int *)(puVar5 + 2) = iVar4;
    *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
    puVar7[1] = &DAT_100000002;
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(undefined4 *)(puVar7 + 4) = 0xffffffff;
    puVar7[6] = 0;
    puVar7[7] = 0x100000000;
    *(undefined1 *)(puVar7 + 8) = 1;
    puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0xe800000000000020;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0x100000000;
    *(undefined2 *)(puVar7 + 0x14) = 0;
    LOCK();
    bVar13 = *(char *)(puVar7 + 8) == '\x01';
    if (bVar13) {
      *(char *)(puVar7 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar13) {
      FUN_14008cdb0(puVar7 + 8);
    }
    *puVar7 = &PTR_FUN_149ee9910;
    if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
    }
    puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar7[9] = puVar7;
    puVar7[10] = puVar7;
    lVar2 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar2 + 0x30);
    }
    puVar7[0xf] = uVar6;
    puVar7[0x10] = 0xc80000527b6b1c00;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
    puVar7[0x15] = param_1;
    *puVar7 = &PTR_FUN_149ee9900;
    local_58 = CONCAT71(local_58._1_7_,1);
    FUN_1447439e4(puVar7);
    puVar5 = *(undefined8 **)(param_1 + 0x118);
    *(undefined8 **)(param_1 + 0x118) = puVar7;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171ebf2 FUN_14171ebf2 body=31 status=ok
// SIG undefined FUN_14171ebf2(void)

void FUN_14171ebf2(longlong param_1)

{
  if (*(int *)(param_1 + 0x128) != 0) {
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
    FUN_14479f406(param_1 + 0x120);
    return;
  }
  return;
}



// FUNCTION 14171ec12 FUN_14171ec12 body=137 status=ok
// SIG undefined FUN_14171ec12(void)

undefined8 *
FUN_14171ec12(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x40))(DAT_14c8407a8,param_2,param_3,param_4,param_6);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = FAutoConsoleVariableRef::vftable;
  (**(code **)(*(longlong *)param_1[1] + 200))((longlong *)param_1[1],param_5);
  return param_1;
}



// FUNCTION 14171ec9c FUN_14171ec9c body=22 status=ok
// SIG undefined FUN_14171ec9c(void)

void FUN_14171ec9c(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c();
    return;
  }
  return;
}



// FUNCTION 14171ecb2 FUN_14171ecb2 body=49 status=ok
// SIG undefined FUN_14171ecb2(void)

longlong FUN_14171ecb2(void)

{
  if (DAT_14c96b330 == 0) {
    FUN_14086a14e(&DAT_14c96b330,&PTR_FUN_149edb6c8);
  }
  return DAT_14c96b330;
}



// FUNCTION 14171ece3 FUN_14171ece3 body=49 status=ok
// SIG undefined FUN_14171ece3(void)

longlong FUN_14171ece3(void)

{
  if (DAT_14c96b520 == 0) {
    FUN_14086a14e(&DAT_14c96b520,&PTR_FUN_149edd988);
  }
  return DAT_14c96b520;
}



// FUNCTION 14171ed14 FUN_14171ed14 body=49 status=ok
// SIG undefined FUN_14171ed14(void)

longlong FUN_14171ed14(void)

{
  if (DAT_14c96b410 == 0) {
    FUN_14086a14e(&DAT_14c96b410,&PTR_FUN_149edc3d8);
  }
  return DAT_14c96b410;
}



// FUNCTION 14171ed45 FUN_14171ed45 body=49 status=ok
// SIG undefined FUN_14171ed45(void)

longlong FUN_14171ed45(void)

{
  if (DAT_14c96b440 == 0) {
    FUN_14086a14e(&DAT_14c96b440,&PTR_FUN_149edc6d8);
  }
  return DAT_14c96b440;
}



// FUNCTION 14171ed76 FUN_14171ed76 body=49 status=ok
// SIG undefined FUN_14171ed76(void)

longlong FUN_14171ed76(void)

{
  if (DAT_14c96b550 == 0) {
    FUN_14086a14e(&DAT_14c96b550,&PTR_FUN_149eddeb8);
  }
  return DAT_14c96b550;
}



// FUNCTION 14171eda7 FUN_14171eda7 body=49 status=ok
// SIG undefined FUN_14171eda7(void)

longlong FUN_14171eda7(void)

{
  if (DAT_14c96b568 == 0) {
    FUN_14086a14e(&DAT_14c96b568,&PTR_FUN_149ede2f0);
  }
  return DAT_14c96b568;
}



// FUNCTION 14171edd8 FUN_14171edd8 body=49 status=ok
// SIG undefined FUN_14171edd8(void)

longlong FUN_14171edd8(void)

{
  if (DAT_14c96b5e0 == 0) {
    FUN_14086a14e(&DAT_14c96b5e0,&PTR_FUN_149edefd0);
  }
  return DAT_14c96b5e0;
}



// FUNCTION 14171ee09 FUN_14171ee09 body=123 status=ok
// SIG undefined FUN_14171ee09(void)

void FUN_14171ee09(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x88);
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
      plVar3 = (longlong *)plVar4[-4];
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
      plVar4 = plVar4 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14171ee84 FUN_14171ee84 body=88 status=ok
// SIG undefined FUN_14171ee84(void)

undefined8 * FUN_14171ee84(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171eedc FUN_14171eedc body=88 status=ok
// SIG undefined FUN_14171eedc(void)

undefined8 * FUN_14171eedc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171ef34 FUN_14171ef34 body=307 status=ok
// SIG undefined FUN_14171ef34(void)

void FUN_14171ef34(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14171efc8;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_14171efc8:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 14171f068 FUN_14171f068 body=29 status=ok
// SIG undefined FUN_14171f068(void)

undefined8 FUN_14171f068(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f086 FUN_14171f086 body=325 status=ok
// SIG undefined FUN_14171f086(void)

void FUN_14171f086(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
    if (4 < param_2) {
      uVar3 = (longlong)(int)param_2 * 4;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar5 = uVar3 + 0xf;
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
              uVar4 = 0x32;
              if (0x32 < bVar2) {
                uVar4 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14171f123;
                lVar1 = uVar4 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
          }
        }
        else {
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
LAB_14171f123:
      uVar5 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar3 >> 2)) {
        uVar5 = uVar3 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1400c4e26(param_1,*(undefined4 *)(param_1 + 0x18),uVar5,4);
    return;
  }
  return;
}



// FUNCTION 14171f1cc FUN_14171f1cc body=29 status=ok
// SIG undefined FUN_14171f1cc(void)

undefined8 FUN_14171f1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f1ea FUN_14171f1ea body=29 status=ok
// SIG undefined FUN_14171f1ea(void)

undefined8 FUN_14171f1ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f208 FUN_14171f208 body=88 status=ok
// SIG undefined FUN_14171f208(void)

undefined8 * FUN_14171f208(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f260 FUN_14171f260 body=29 status=ok
// SIG undefined FUN_14171f260(void)

undefined8 FUN_14171f260(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f27e FUN_14171f27e body=29 status=ok
// SIG undefined FUN_14171f27e(void)

undefined8 FUN_14171f27e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f29c FUN_14171f29c body=29 status=ok
// SIG undefined FUN_14171f29c(void)

undefined8 FUN_14171f29c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f2ba FUN_14171f2ba body=311 status=ok
// SIG undefined FUN_14171f2ba(void)

undefined8 *
FUN_14171f2ba(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 3) = *param_4;
  param_1[4] = 0;
  iVar3 = param_4[4];
  pvVar5 = *(void **)(param_4 + 2);
  *(int *)(param_1 + 5) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 4,iVar3,0);
    memcpy((void *)param_1[4],pvVar5,(longlong)iVar3);
  }
  *(undefined4 *)(param_1 + 6) = *param_5;
  param_1[7] = 0;
  iVar3 = param_5[4];
  pvVar5 = *(void **)(param_5 + 2);
  *(int *)(param_1 + 8) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 7,iVar3,0);
    memcpy((void *)param_1[7],pvVar5,(longlong)iVar3);
  }
  *(undefined4 *)(param_1 + 9) = param_6;
  plVar6 = (longlong *)param_2[1];
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
  if (*(longlong *)(param_4 + 2) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_5 + 2) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14171f3f2 FUN_14171f3f2 body=792 status=ok
// SIG undefined FUN_14171f3f2(void)

undefined4
FUN_14171f3f2(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  float *pfVar11;
  char cVar12;
  undefined8 *puVar13;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  float *local_140;
  longlong local_138;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_8c;
  byte local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar10 = *(longlong *)(param_1 + 0x1e0);
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0x1c) != '\0')) {
    if (param_8 == '\0') {
      cVar12 = ' ';
    }
    else {
      cVar12 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
    }
    pfVar11 = (float *)(param_1 + 0x1e8);
    cVar9 = *(char *)(param_1 + 0x1f8);
    if (cVar9 != '\0') {
      if (cVar9 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar9 == '\x03') {
        pfVar11 = param_7 + 8;
      }
      else {
        pfVar11 = param_7 + 4;
      }
    }
    fVar1 = param_7[3];
    fVar2 = pfVar11[3];
    fVar3 = param_7[2];
    fVar4 = pfVar11[2];
    fVar5 = *param_7;
    fVar6 = param_7[1];
    fVar7 = pfVar11[1];
    fVar8 = *pfVar11;
    pfVar11 = (float *)(lVar10 + 8);
    cVar9 = *(char *)(lVar10 + 0x18);
    if (cVar9 != '\0') {
      if (cVar9 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar9 == '\x03') {
        pfVar11 = param_7 + 8;
      }
      else {
        pfVar11 = param_7 + 4;
      }
    }
    local_114 = fVar1 * fVar2 * pfVar11[3];
    local_118 = fVar3 * fVar4 * pfVar11[2];
    local_11c = fVar6 * fVar7 * pfVar11[1];
    local_120 = fVar5 * fVar8 * *pfVar11;
    if ((*(char *)(param_1 + 0x218) == '\x01') && (DAT_14c96b1e0 == '\x01')) {
      local_148 = &local_128;
      local_128 = 0x3f0000003f000000;
      local_f0 = 0xbf800000;
      uStack_e8 = 0;
      uStack_e4 = 0x3f800000;
      uStack_e0 = 0;
      uStack_dc = 0;
      local_138 = (longlong)param_3 + 0x1c;
      local_f8 = *(undefined8 *)((longlong)param_3 + 0xc);
      local_fc = *(undefined4 *)(param_3 + 1);
      local_140 = (float *)&local_fc;
      local_108 = 0x3f800000;
      local_100 = 0;
      local_110 = *param_3;
      FUN_146978c22(&local_b8,&local_110,&local_108,&local_f0);
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = (undefined4)local_b8;
      uStack_d8 = (undefined4)((ulonglong)local_b8 >> 0x20);
      local_bc = local_84 * '\x02' & 2;
      puVar13 = &local_f0;
    }
    else {
      local_a4 = *param_3;
      local_b8 = *(undefined8 *)((longlong)param_3 + 0xc);
      local_b0 = *(undefined4 *)(param_3 + 1);
      puVar13 = &local_b8;
      local_ac = 0;
      local_9c = *(undefined4 *)((longlong)param_3 + 0x1c);
      uStack_98 = *(undefined4 *)(param_3 + 4);
      uStack_94 = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_90 = *(undefined4 *)(param_3 + 5);
      local_8c = *(undefined8 *)((longlong)param_3 + 0x2c);
      local_84 = *(char *)((longlong)param_3 + 0x34) * '\x02' & 2;
    }
    local_140 = &local_120;
    local_148 = (undefined8 *)CONCAT71(local_148._1_7_,cVar12);
    FUN_140239bd2(param_5,param_6,puVar13,lVar10);
  }
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 14171f70c FUN_14171f70c body=43 status=ok
// SIG undefined FUN_14171f70c(void)

void FUN_14171f70c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 14171f738 FUN_14171f738 body=88 status=ok
// SIG undefined FUN_14171f738(void)

undefined8 * FUN_14171f738(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149eec6a0;
  lVar1 = 0x7c8;
  do {
    if (*(longlong **)((longlong)param_1 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)param_1 + lVar1) + 0x10))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x3f8);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f790 FUN_14171f790 body=103 status=ok
// SIG undefined FUN_14171f790(void)

longlong FUN_14171f790(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14171f7ae;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14171f7ae:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f7f8 FUN_14171f7f8 body=29 status=ok
// SIG undefined FUN_14171f7f8(void)

undefined8 FUN_14171f7f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14171f816 FUN_14171f816 body=387 status=ok
// SIG undefined FUN_14171f816(void)

undefined1 *
FUN_14171f816(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *plStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [80];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_48;
  char local_47;
  undefined1 local_46;
  undefined2 local_45;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    cVar4 = (**(code **)(*param_1 + 400))();
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*DAT_14c968098 + 0xa0))();
      if (cVar4 != '\a') {
        local_f8 = *(undefined8 *)(param_4 + 0x20);
        local_f0 = *(undefined8 *)(param_4 + 0x28);
        plStack_e8 = *(longlong **)(param_4 + 0x30);
        if (plStack_e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_e8 + 1) = (int)plStack_e8[1] + 1;
          UNLOCK();
        }
        uVar5 = FUN_140230656(&local_f8);
        plVar3 = plStack_e8;
        if (plStack_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_e8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_e8)(plStack_e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        local_f8 = CONCAT71(local_f8._1_7_,1);
        local_d8 = 0;
        local_f0 = 0;
        plStack_e8 = (longlong *)0x0;
        memset(local_d0,0,0x88);
        local_48 = 2;
        local_45 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_47 = cVar4;
        local_46 = uVar5;
        FUN_1403d4c6e(param_2,&local_f8);
        FUN_14493db24(&local_f8);
        goto LAB_14171f877;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_14171f877:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14171f99a FUN_14171f99a body=37 status=ok
// SIG undefined FUN_14171f99a(void)

void FUN_14171f99a(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*DAT_14c968098 + 0x58))();
  FUN_1405d299c(param_1,uVar1);
  return;
}



// FUNCTION 14171f9c0 FUN_14171f9c0 body=47 status=ok
// SIG undefined FUN_14171f9c0(void)

void FUN_14171f9c0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x208))();
  if (cVar1 == '\0') {
    return;
  }
  FUN_142860bc8(param_1 + 0x4d);
  return;
}



// FUNCTION 14171f9f0 FUN_14171f9f0 body=1619 status=ok
// SIG undefined FUN_14171f9f0(void)

undefined8 FUN_14171f9f0(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong *plStack_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  longlong *local_190;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*param_2 != 2) {
    if (*param_2 == 0) {
      plVar10 = param_1 + 1;
      local_1a8 = 0;
      uStack_1a0 = 0;
      plVar11 = (longlong *)param_1[2];
      bVar15 = true;
      if (plVar11 == (longlong *)0x0) {
LAB_14171fe6e:
        lVar9 = 0;
        plVar11 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar11[1];
        do {
          if (iVar7 == 0) goto LAB_14171fe6e;
          LOCK();
          iVar4 = (int)plVar11[1];
          bVar14 = iVar7 == iVar4;
          if (bVar14) {
            *(int *)(plVar11 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar14);
        lVar9 = *plVar10;
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        bVar15 = false;
      }
      uVar3 = uStack_1a0;
      lVar12 = (longlong)(int)uStack_1a0;
      uVar8 = (int)uStack_1a0 + 1;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar8);
      if (uStack_1a0._4_4_ < uVar8) {
        FUN_1413f6722(&local_1a8,uVar3 & 0xffffffff);
      }
      *(longlong *)(local_1a8 + lVar12 * 0x10) = lVar9;
      *(longlong **)(local_1a8 + 8 + lVar12 * 0x10) = plVar11;
      if (!bVar15) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      plVar11 = (longlong *)param_1[0x90];
      if (plVar11 == (longlong *)0x0) {
LAB_14171fc7d:
        cVar5 = (**(code **)(*param_1 + 400))(param_1);
        if (cVar5 != '\0') {
          bVar15 = true;
          plVar11 = (longlong *)0x0;
LAB_14171fc96:
          FUN_144a8759e(&local_198);
          if (((param_1[0x91] == 0) ||
              (plStack_1c0 = (longlong *)param_1[0x92], plStack_1c0 == (longlong *)0x0)) ||
             ((int)plStack_1c0[1] < 1)) {
            plStack_1c0 = (longlong *)param_1[2];
            if (plStack_1c0 != (longlong *)0x0) {
              iVar7 = (int)plStack_1c0[1];
              do {
                if (iVar7 == 0) goto LAB_14171fe52;
                LOCK();
                iVar4 = (int)plStack_1c0[1];
                bVar14 = iVar7 == iVar4;
                if (bVar14) {
                  *(int *)(plStack_1c0 + 1) = iVar7 + 1;
                  iVar4 = iVar7;
                }
                iVar7 = iVar4;
                UNLOCK();
              } while (!bVar14);
              goto LAB_14171fce4;
            }
LAB_14171fe52:
            local_1c8 = 0;
            plStack_1c0 = (longlong *)0x0;
            bVar14 = true;
            uVar13 = DAT_14c96b238;
          }
          else {
            plVar10 = param_1 + 0x91;
            iVar7 = (int)plStack_1c0[1];
            do {
              if (iVar7 == 0) goto LAB_14171fe52;
              LOCK();
              iVar4 = (int)plStack_1c0[1];
              bVar14 = iVar7 == iVar4;
              if (bVar14) {
                *(int *)(plStack_1c0 + 1) = iVar7 + 1;
                iVar4 = iVar7;
              }
              iVar7 = iVar4;
              UNLOCK();
            } while (!bVar14);
LAB_14171fce4:
            uVar13 = DAT_14c96b238;
            local_1c8 = *plVar10;
            LOCK();
            *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
            UNLOCK();
            bVar14 = false;
          }
          plVar10 = plStack_1c0;
          cVar5 = FUN_1407c4db4(&local_1a8,&local_1c8,&local_198,uVar13);
          if (cVar5 != '\0') {
            (**(code **)(*DAT_14c968098 + 0x160))(DAT_14c968098,&local_198,5);
          }
          if (!bVar14) {
            LOCK();
            plVar2 = plVar10 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          FUN_1447fa21a(&local_198);
          if (!bVar15) goto LAB_14171fff0;
        }
      }
      else {
        iVar7 = (int)plVar11[1];
        do {
          if (iVar7 == 0) goto LAB_14171fc7d;
          LOCK();
          iVar4 = (int)plVar11[1];
          bVar15 = iVar7 == iVar4;
          if (bVar15) {
            *(int *)(plVar11 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar15);
        lVar9 = param_1[0x8f];
        if (lVar9 == 0) {
          cVar5 = (**(code **)(*param_1 + 400))(param_1);
          if (cVar5 != '\0') {
            bVar15 = false;
            goto LAB_14171fc96;
          }
        }
        else {
          FUN_144a8759e(&local_198);
          uVar13 = DAT_14c96b238;
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          local_1b8 = lVar9;
          local_1b0 = plVar11;
          cVar5 = FUN_1407c4db4(&local_1a8,&local_1b8,&local_198,uVar13);
          LOCK();
          plVar10 = plVar11 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          if (cVar5 != '\0') {
            (**(code **)(*DAT_14c968098 + 0x158))(DAT_14c968098,&local_198,5);
          }
          FUN_1447fa21a(&local_198);
        }
LAB_14171fff0:
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      FUN_1401b439d(local_1a8,uStack_1a0 & 0xffffffff);
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
    }
    if (((int)param_1[0xa6] != 0) && ((longlong *)param_1[0xa5] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0xa5] + 0x60))();
    }
    FUN_1447f69b6(param_1 + 0xa7);
    goto LAB_14171fbb7;
  }
  if (((int)param_1[0xab] != 0) && ((longlong *)param_1[0xaa] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0xaa] + 0x60))();
  }
  FUN_1447f69b6(param_1 + 0xac);
  plVar10 = (longlong *)param_1[0x92];
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  iVar7 = (**(code **)(*(longlong *)param_1[0xa2] + 0x68))();
  if ((((iVar7 == 0) || (param_1[0x8f] == 0)) ||
      (plVar10 = (longlong *)param_1[0x90], plVar10 == (longlong *)0x0)) || ((int)plVar10[1] < 1)) {
LAB_14171fa77:
    cVar5 = (**(code **)(*param_1 + 400))(param_1);
    if (cVar5 == '\0') goto LAB_14171fbb7;
    (**(code **)(*DAT_14c968098 + 0x98))(DAT_14c968098,&local_198);
    plVar11 = local_190;
    param_1[0x91] = local_198;
    plVar10 = (longlong *)param_1[0x92];
    if (plVar10 != local_190) {
      if (local_190 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_190 + 0xc) = *(int *)((longlong)local_190 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)param_1[0x92];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      param_1[0x92] = (longlong)plVar11;
    }
    plVar10 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_190 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (((param_1[0x91] != 0) && (param_1[0x92] != 0)) && (0 < *(int *)(param_1[0x92] + 8)))
    goto LAB_14171fbb7;
    (**(code **)(*DAT_14c968098 + 0x168))(DAT_14c968098,&local_198,0);
    plVar11 = local_190;
    param_1[0x91] = local_198;
    plVar10 = (longlong *)param_1[0x92];
    if (plVar10 != local_190) {
      if (local_190 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_190 + 0xc) = *(int *)((longlong)local_190 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)param_1[0x92];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      param_1[0x92] = (longlong)plVar11;
      plVar11 = local_190;
    }
    if (plVar11 == (longlong *)0x0) goto LAB_14171fbb7;
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_14171fbb7;
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14171fbb7;
    lVar9 = *plVar11;
  }
  else {
    iVar7 = (int)plVar10[1];
    lVar9 = 0;
    do {
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14171ff17;
      }
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar15 = iVar7 == iVar4;
      if (bVar15) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar15);
    lVar9 = param_1[0x8f];
LAB_14171ff17:
    cVar5 = FUN_140591fd6(lVar9);
    if (cVar5 == '\0') {
      bVar6 = 0;
    }
    else {
      bVar6 = (**(code **)(*DAT_14c968098 + 0x100))();
      bVar6 = bVar6 ^ 1;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (bVar6 == 0) goto LAB_14171fa77;
    plVar11 = (longlong *)param_1[0x90];
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    if (plVar11 == (longlong *)0x0) goto LAB_14171fbb7;
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_14171fbb7;
    lVar9 = *plVar11;
  }
  (**(code **)(lVar9 + 0x10))(plVar11);
LAB_14171fbb7:
  if ((local_38 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 141720044 FUN_141720044 body=103 status=ok
// SIG undefined FUN_141720044(void)

longlong FUN_141720044(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_141720062;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_141720062:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417200ac FUN_1417200ac body=73 status=ok
// SIG undefined FUN_1417200ac(void)

void FUN_1417200ac(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef0850;
  FUN_140d33455(*(undefined8 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x210));
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 1417200f6 FUN_1417200f6 body=29 status=ok
// SIG undefined FUN_1417200f6(void)

undefined8 FUN_1417200f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720114 FUN_141720114 body=29 status=ok
// SIG undefined FUN_141720114(void)

undefined8 FUN_141720114(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720132 FUN_141720132 body=29 status=ok
// SIG undefined FUN_141720132(void)

undefined8 FUN_141720132(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720162 FUN_141720162 body=74 status=ok
// SIG undefined FUN_141720162(void)

void FUN_141720162(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef6260;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1417201ac FUN_1417201ac body=29 status=ok
// SIG undefined FUN_1417201ac(void)

undefined8 FUN_1417201ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417201ca FUN_1417201ca body=14 status=ok
// SIG undefined FUN_1417201ca(void)

void FUN_1417201ca(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001417201d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x720) + 8))();
  return;
}



// FUNCTION 1417201d8 FUN_1417201d8 body=183 status=ok
// SIG undefined FUN_1417201d8(void)

undefined8 * FUN_1417201d8(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x318))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_3 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)param_3 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      if (lVar3 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        FUN_1400c3152(lVar3,param_2);
      }
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return param_2;
    }
    if (lVar3 != 0) {
      FUN_1400c3152(lVar3,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141720290 FUN_141720290 body=268 status=ok
// SIG undefined FUN_141720290(void)

undefined1 * FUN_141720290(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined1 local_42;
  byte local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x310);
    lVar8 = 0;
    bVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar8);
      if (lVar5 == 0) {
LAB_141720371:
        if ((bVar7 & 1) != 0) {
          bVar7 = 0;
          goto LAB_14172031f;
        }
      }
      else {
        local_58 = *param_3;
        local_50 = param_3[1];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        FUN_1400c307c(lVar5,&local_42,&local_58);
        if ((local_41 & 1) == 0) {
          bVar7 = param_2[1];
          goto LAB_141720371;
        }
        *param_2 = local_42;
        bVar7 = 1;
LAB_14172031f:
        param_2[1] = bVar7;
      }
    } while (((bVar7 & 1) == 0) && (lVar8 = lVar8 + 0x10, (longlong)iVar3 * 0x10 != lVar8));
  }
  plVar6 = (longlong *)param_3[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1417203a0 FUN_1417203a0 body=402 status=ok
// SIG undefined FUN_1417203a0(void)

undefined4
FUN_1417203a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined1 local_8a [2];
  undefined **local_88 [6];
  longlong *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *plStack_38;
  undefined4 local_30;
  byte local_2c;
  undefined4 local_28;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uStack_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_48 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x20))
            (*(longlong **)(param_1 + 0x5d8),&local_28,param_4);
  if (local_24 == 1) {
    cVar4 = FUN_1403e7f2a(&local_48);
    if (cVar4 != '\0') {
      local_2c = local_24;
      if ((local_24 & 1) != 0) {
        local_30 = local_28;
      }
      (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,local_8a);
      local_a8 = (undefined4)local_48;
      uStack_a4 = local_48._4_4_;
      uStack_a0 = (undefined4)uStack_40;
      uStack_9c = uStack_40._4_4_;
      local_98 = plStack_38;
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
        UNLOCK();
      }
      local_b0 = &local_30;
      local_b8 = param_5;
      FUN_1402c1b84(local_88,&local_a8,local_8a,param_4);
      uVar5 = FUN_1409eff00(param_1 + -0x148,local_88);
      local_88[0] = &PTR_FUN_149eda6d0;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar3 = (int *)((longlong)local_58 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
      goto LAB_1417204c3;
    }
  }
  uVar5 = 0;
LAB_1417204c3:
  plVar1 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141720534 FUN_141720534 body=402 status=ok
// SIG undefined FUN_141720534(void)

undefined4
FUN_141720534(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined1 local_8a [2];
  undefined **local_88 [6];
  longlong *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *plStack_38;
  undefined4 local_30;
  byte local_2c;
  undefined4 local_28;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uStack_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_48 = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x20))
            (*(longlong **)(param_1 + 0x5d8),&local_28,param_4);
  if (local_24 == 1) {
    cVar4 = FUN_1403e7f2a(&local_48);
    if (cVar4 != '\0') {
      local_2c = local_24;
      if ((local_24 & 1) != 0) {
        local_30 = local_28;
      }
      (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,local_8a);
      local_a8 = (undefined4)local_48;
      uStack_a4 = local_48._4_4_;
      uStack_a0 = (undefined4)uStack_40;
      uStack_9c = uStack_40._4_4_;
      local_98 = plStack_38;
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
        UNLOCK();
      }
      local_b0 = &local_30;
      local_b8 = param_5;
      FUN_1402c1b84(local_88,&local_a8,local_8a,param_4);
      uVar5 = FUN_140dcb8ee(param_1 + -0x148,local_88);
      local_88[0] = &PTR_FUN_149eda6d0;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar3 = (int *)((longlong)local_58 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
      goto LAB_141720657;
    }
  }
  uVar5 = 0;
LAB_141720657:
  plVar1 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417206c8 FUN_1417206c8 body=43 status=ok
// SIG undefined FUN_1417206c8(void)

void FUN_1417206c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  longlong lStack_38;
  longlong *plStack_30;
  ulonglong uStack_28;
  
  puVar8 = (undefined8 *)(param_1 + 0x10);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eee890;
  if (*(char *)(param_1 + 0x220) == '\x01') {
    *(undefined1 *)(param_1 + 0x220) = 0;
    FUN_140c057ec();
    return;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *puVar8 = &PTR_LAB_149ef0d00;
  bVar3 = *(byte *)(param_1 + 0x41);
  *(byte *)(param_1 + 0x41) = bVar3 & 0xfe;
  lVar7 = DAT_14c968098;
  if (DAT_14c968098 != 0) {
    if ((bVar3 & 0x10) != 0) {
      FUN_14697d42a(puVar8,&lStack_38);
      if ((longlong)*(int *)(lStack_38 + 0x10) != 0) {
        lVar9 = *(longlong *)(lStack_38 + 8);
        lVar10 = (longlong)*(int *)(lStack_38 + 0x10) << 4;
        do {
          FUN_14692fa20(lVar7,lVar9);
          lVar9 = lVar9 + 0x10;
          lVar10 = lVar10 + -0x10;
        } while (lVar10 != 0);
      }
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_30 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plStack_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plStack_30 + 0x10))(plStack_30);
          }
        }
      }
    }
    uVar4 = *(undefined8 *)(lVar7 + 200);
    plVar5 = *(longlong **)(lVar7 + 0xd0);
    if (plVar5 == (longlong *)0x0) {
      FUN_142878456(uVar4,puVar8);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_142878456(uVar4,puVar8);
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
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c98e0a8);
    FUN_14287c456(&DAT_14c98e058,puVar8);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c98e0a8);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c98e100);
    FUN_14287c456(&DAT_14c98e0b0,puVar8);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c98e100);
  }
  lVar7 = FUN_14007026e(&DAT_14c967f20,*(undefined4 *)(param_1 + 0x30));
  if (lVar7 != 0) {
    FUN_14693080e(lVar7,puVar8);
  }
  uVar6 = DAT_14c967f78;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_1428693e8(param_1 + 0x158);
  plVar5 = *(longlong **)(param_1 + 0x1d8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_140a50355(*(undefined8 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c8));
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x160);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    if (*(char *)(param_1 + 0x94) == '\x01') {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x58);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0x20) + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uStack_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((uStack_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417206f4 FUN_1417206f4 body=29 status=ok
// SIG undefined FUN_1417206f4(void)

undefined8 FUN_1417206f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720712 FUN_141720712 body=45 status=ok
// SIG undefined FUN_141720712(void)

void FUN_141720712(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 141720740 FUN_141720740 body=29 status=ok
// SIG undefined FUN_141720740(void)

undefined8 FUN_141720740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172075e FUN_14172075e body=45 status=ok
// SIG undefined FUN_14172075e(void)

void FUN_14172075e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 14172078c FUN_14172078c body=29 status=ok
// SIG undefined FUN_14172078c(void)

undefined8 FUN_14172078c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417207aa FUN_1417207aa body=45 status=ok
// SIG undefined FUN_1417207aa(void)

void FUN_1417207aa(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f14520;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 1417207d8 FUN_1417207d8 body=29 status=ok
// SIG undefined FUN_1417207d8(void)

undefined8 FUN_1417207d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417207f6 FUN_1417207f6 body=29 status=ok
// SIG undefined FUN_1417207f6(void)

undefined8 FUN_1417207f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720814 FUN_141720814 body=336 status=ok
// SIG undefined FUN_141720814(void)

void FUN_141720814(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x90) = 0;
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
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
  FUN_1403d040a(&local_50,param_2);
  FUN_1400e7f6e((longlong *)(param_1 + 0x70),&local_50);
  if ((longlong *)(param_1 + 0x70) != &local_50) {
    *(undefined8 *)(param_1 + 0x80) = local_40;
    local_40 = 0;
    plVar3 = *(longlong **)(param_1 + 0x88);
    *(longlong **)(param_1 + 0x88) = local_38;
    local_38 = (longlong *)0x0;
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_1447de57f(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0xa0) = param_3;
  *(undefined1 *)(param_1 + 0xa1) = param_4;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141720966 FUN_141720966 body=458 status=ok
// SIG undefined FUN_141720966(void)

void FUN_141720966(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined1 local_180;
  undefined1 local_178 [288];
  undefined1 *local_58;
  ulonglong local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0);
    local_180 = DAT_14c96b238;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x400000000;
    local_48 = 0;
    local_40 = 0;
    plStack_38 = (longlong *)0x0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1403d040a(&local_1a0);
    FUN_1400e7f6e((longlong *)(param_1 + 600),&local_1a0);
    if ((longlong *)(param_1 + 600) != &local_1a0) {
      *(undefined8 *)(param_1 + 0x268) = local_190;
      local_190 = 0;
      plVar3 = *(longlong **)(param_1 + 0x270);
      *(longlong **)(param_1 + 0x270) = local_188;
      local_188 = (longlong *)0x0;
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
    if (local_188 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_188 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_188 + 0x10))();
      }
    }
    FUN_1447de57f(local_1a0,local_198);
    if (local_1a0 != 0) {
      FUN_1400020a8();
    }
    lVar4 = local_30;
    FUN_1447fa2ac(local_30,uStack_28 & 0xffffffff);
    if (lVar4 != 0) {
      FUN_1400020a8(lVar4);
    }
    plVar3 = plStack_38;
    if (plStack_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_38)(plStack_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_178;
    }
    FUN_1447157bd(puVar5,local_50 & 0xffffffff);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141720b31 FUN_141720b31 body=49 status=ok
// SIG undefined FUN_141720b31(void)

longlong FUN_141720b31(void)

{
  if (DAT_14c98e850 == 0) {
    FUN_14086a14e(&DAT_14c98e850,&PTR_FUN_149eff6a8);
  }
  return DAT_14c98e850;
}



// FUNCTION 141720b62 FUN_141720b62 body=118 status=ok
// SIG undefined FUN_141720b62(void)

void FUN_141720b62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f01c50;
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



// FUNCTION 141720bd8 FUN_141720bd8 body=118 status=ok
// SIG undefined FUN_141720bd8(void)

void FUN_141720bd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f01cc0;
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



// FUNCTION 141720c4e FUN_141720c4e body=118 status=ok
// SIG undefined FUN_141720c4e(void)

void FUN_141720c4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f01d30;
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



// FUNCTION 141720cc4 FUN_141720cc4 body=118 status=ok
// SIG undefined FUN_141720cc4(void)

void FUN_141720cc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f01da0;
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



// FUNCTION 141720d3a FUN_141720d3a body=29 status=ok
// SIG undefined FUN_141720d3a(void)

undefined8 FUN_141720d3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720d58 FUN_141720d58 body=9 status=ok
// SIG undefined FUN_141720d58(void)

void FUN_141720d58(longlong param_1)

{
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 141720d62 FUN_141720d62 body=29 status=ok
// SIG undefined FUN_141720d62(void)

undefined8 FUN_141720d62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720d80 FUN_141720d80 body=29 status=ok
// SIG undefined FUN_141720d80(void)

undefined8 FUN_141720d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720d9e FUN_141720d9e body=29 status=ok
// SIG undefined FUN_141720d9e(void)

undefined8 FUN_141720d9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141720dbc FUN_141720dbc body=70 status=ok
// SIG undefined FUN_141720dbc(void)

void FUN_141720dbc(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141720e02 FUN_141720e02 body=955 status=ok
// SIG undefined FUN_141720e02(void)

longlong *
FUN_141720e02(longlong *param_1,undefined8 *param_2,int *param_3,int *param_4,undefined8 param_5,
             undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_f8 [2];
  undefined1 local_e8 [8];
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined6 local_b8;
  undefined2 uStack_b2;
  undefined6 local_b0;
  undefined2 uStack_aa;
  undefined1 local_a8 [56];
  longlong *local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140863c1e(*param_2,&local_b8,param_3,param_5);
  lVar7 = CONCAT26(uStack_b2,local_b8);
  plVar6 = (longlong *)CONCAT26(uStack_aa,local_b0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar9 = (longlong *)CONCAT26(uStack_aa,local_b0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  if ((*param_3 == *param_4) && (param_3[1] == param_4[1])) goto LAB_141720e8c;
  local_b0 = (undefined6)((ulonglong)*(undefined8 *)((longlong)param_3 + 6) >> 0x10);
  local_b8 = (undefined6)*(undefined8 *)param_3;
  uStack_b2 = (undefined2)((ulonglong)*(undefined8 *)param_3 >> 0x30);
  FUN_144a87366(local_a8,param_3 + 4);
  local_b8 = (undefined6)*(undefined8 *)param_4;
  uStack_b2 = (undefined2)((ulonglong)*(undefined8 *)param_4 >> 0x30);
  FUN_140863f54(*param_2,&local_c8,&local_b8);
  plVar9 = local_c0;
  if (local_c8 == 0) {
    FUN_146935f2c(lVar7,&local_d8,*param_4,param_4[1]);
    plVar9 = local_d0;
    lVar7 = local_d8;
    local_d8 = 0;
    plVar8 = plVar6;
    if (local_d0 == plVar6) {
LAB_14172100e:
      plVar6 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_d0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_d0)(local_d0);
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
    else {
      local_d0 = (longlong *)0x0;
      plVar8 = plVar9;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        goto LAB_14172100e;
      }
    }
    if (lVar7 == 0) {
      local_108 = param_6;
      FUN_146a23a9e(*param_2,&local_d8,&local_b8,param_5);
      plVar6 = local_d0;
      lVar7 = local_d8;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      if (local_d0 == plVar8) {
        if (plVar8 == (longlong *)0x0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          plVar9 = plVar8;
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar3 = *piVar2;
            UNLOCK();
            plVar8 = plVar6;
            goto joined_r0x000141721178;
          }
        }
      }
      else {
        plVar9 = local_d0;
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
            iVar3 = *piVar2;
            UNLOCK();
            plVar9 = plVar6;
joined_r0x000141721178:
            if (iVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        }
      }
      plVar6 = local_d0;
      plVar8 = plVar9;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            lVar5 = *plVar6;
            goto LAB_141720f62;
          }
        }
      }
    }
    else {
      uVar4 = *param_2;
      local_f8[0] = lVar7;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      FUN_140865e56(uVar4,local_e8,&local_b8,local_f8);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_e0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
    }
  }
  else {
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    lVar7 = local_c8;
    plVar8 = plVar9;
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
        if (*piVar2 != 0) goto LAB_141721096;
        lVar5 = *plVar6;
LAB_141720f62:
        (**(code **)(lVar5 + 0x10))(plVar6);
        plVar8 = plVar9;
      }
    }
  }
LAB_141721096:
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c0 + 0x10))(local_c0);
      }
    }
  }
  plVar6 = plVar8;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_70 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
LAB_141720e8c:
  *param_1 = lVar7;
  param_1[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417211be FUN_1417211be body=29 status=ok
// SIG undefined FUN_1417211be(void)

undefined8 FUN_1417211be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417211dc FUN_1417211dc body=86 status=ok
// SIG undefined FUN_1417211dc(void)

void FUN_1417211dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014172122e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141721232 FUN_141721232 body=29 status=ok
// SIG undefined FUN_141721232(void)

undefined8 FUN_141721232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141721250 FUN_141721250 body=47 status=ok
// SIG undefined FUN_141721250(void)

void FUN_141721250(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 141721280 FUN_141721280 body=29 status=ok
// SIG undefined FUN_141721280(void)

undefined8 FUN_141721280(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172129e FUN_14172129e body=99 status=ok
// SIG undefined FUN_14172129e(void)

void FUN_14172129e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x78);
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
  plVar3 = *(longlong **)(param_1 + 0x48);
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
                    /* WARNING: Could not recover jumptable at 0x0001417212fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141721302 FUN_141721302 body=29 status=ok
// SIG undefined FUN_141721302(void)

undefined8 FUN_141721302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141721320 FUN_141721320 body=29 status=ok
// SIG undefined FUN_141721320(void)

undefined8 FUN_141721320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172133e FUN_14172133e body=29 status=ok
// SIG undefined FUN_14172133e(void)

undefined8 FUN_14172133e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172135c FUN_14172135c body=29 status=ok
// SIG undefined FUN_14172135c(void)

undefined8 FUN_14172135c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172137a FUN_14172137a body=206 status=ok
// SIG undefined FUN_14172137a(void)

double * FUN_14172137a(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1f8) != 0) && (*(longlong *)(param_1 + 0x200) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x200) + 8))) {
    FUN_140398bd0(param_1 + 0x1e0,&local_28);
    pfVar4 = (float *)&DAT_14c84635c;
    if ((*(byte *)(local_28 + 0x31) & 0x20) != 0) {
      pfVar4 = (float *)(local_28 + 0x168);
    }
    fVar3 = pfVar4[1];
    *param_2 = (double)*pfVar4;
    param_2[1] = (double)fVar3;
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14172144a FUN_14172144a body=363 status=ok
// SIG undefined FUN_14172144a(void)

undefined4
FUN_14172144a(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,char param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  longlong *plStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_170 [8];
  undefined1 local_168 [56];
  undefined8 local_130 [29];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_170[0] = DAT_14c96b238;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x400000000;
  local_38 = 0;
  (**(code **)(*param_1 + 0x238))(param_1,param_3,local_170);
  if (0 < (int)local_40) {
    puVar1 = (undefined8 *)(local_48 + 0x38);
    puVar2 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar1 = local_130;
      puVar2 = local_168;
    }
    if (param_8 == '\0') {
      local_1b0 = 0;
    }
    else {
      local_1b0 = *(undefined1 *)((longlong)param_1 + 0x3a);
    }
    local_1a8 = *param_2;
    uStack_1a4 = param_2[1];
    uStack_1a0 = param_2[2];
    uStack_19c = param_2[3];
    local_198 = param_2[4];
    uStack_194 = param_2[5];
    local_188 = param_2[8];
    uStack_184 = param_2[9];
    uStack_180 = param_2[10];
    uStack_17c = param_2[0xb];
    local_1b8 = param_7;
    local_1c0 = param_6;
    local_1c8 = param_5;
    plStack_190 = param_1;
    param_6 = FUN_14016eaf2(*puVar1,&local_1a8,puVar2,param_4);
  }
  puVar2 = local_168;
  if (local_48 != (undefined1 *)0x0) {
    puVar2 = local_48;
  }
  FUN_1447157bd(puVar2,(int)local_40);
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 1417215b6 FUN_1417215b6 body=2351 status=ok
// SIG undefined FUN_1417215b6(void)

void FUN_1417215b6(longlong param_1,float *param_2,byte *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  int iVar13;
  float *pfVar14;
  double *pdVar15;
  byte *pbVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  byte bVar20;
  bool bVar21;
  undefined8 uVar22;
  longlong *plVar23;
  undefined8 uVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 *local_1d0;
  float *local_1c8;
  undefined8 local_1b8;
  undefined8 local_1b0;
  float local_1a4;
  longlong local_1a0;
  byte *local_198;
  float *local_190;
  longlong local_188;
  float local_180;
  float fStack_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 uStack_14e;
  undefined5 uStack_14d;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (0 < *(int *)(param_1 + 0x200)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c98f144) && (FUN_144b3d300(&DAT_14c98f144), DAT_14c98f144 == -1)) {
      lVar17 = FUN_145a50ee8();
      lVar25 = *(longlong *)(lVar17 + 0x110);
      if (lVar25 == 0) {
        FUN_140aa6c08(lVar17);
        lVar25 = *(longlong *)(lVar17 + 0x110);
      }
      DAT_14c98f140 = *(char *)(lVar25 + 0x28);
      _Init_thread_footer(&DAT_14c98f144);
    }
    iVar13 = *(int *)(param_1 + 0x200);
    if (0 < iVar13) {
      local_190 = param_2 + 7;
      local_198 = param_3 + 8;
      local_1a4 = -3.4028235e+38;
      lVar25 = 0;
      local_1a0 = param_4;
      local_188 = param_1;
      do {
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar25 * 8);
        bVar9 = *(byte *)(*(longlong *)(lVar17 + 0x10) + 0x39);
        if ((*param_3 & bVar9) != 0) {
          pfVar14 = (float *)FUN_140133f88(lVar17 + 0x20);
          fVar30 = *pfVar14;
          fVar32 = pfVar14[1];
          fVar26 = pfVar14[3];
          fVar35 = pfVar14[2];
          pdVar15 = (double *)FUN_140133f12(lVar17 + 0x80);
          dVar28 = *pdVar15;
          dVar5 = pdVar15[1];
          pdVar15 = (double *)FUN_140133ffe(lVar17 + 0x48);
          dVar29 = *pdVar15;
          dVar6 = pdVar15[1];
          dVar7 = pdVar15[2];
          dVar8 = pdVar15[3];
          cVar12 = FUN_140133ebc(lVar17);
          dVar10 = (double)fVar26;
          dVar11 = (double)fVar35;
          if (cVar12 != '\0') {
            pfVar14 = (float *)(*(longlong *)(lVar17 + 0x10) + 0x168);
            if ((*(byte *)(*(longlong *)(lVar17 + 0x10) + 0x31) & 0x20) == 0) {
              pfVar14 = (float *)&DAT_14c84635c;
            }
            dVar10 = (double)pfVar14[1];
            dVar11 = (double)*pfVar14;
          }
          fVar27 = (float)(dVar29 * (double)*param_2);
          if ((dVar29 != dVar7) || (NAN(dVar29) || NAN(dVar7))) {
            dVar28 = (double)(fVar30 + fVar27);
            dVar11 = ((double)(float)(dVar7 * (double)*param_2) - dVar28) - (double)fVar35;
          }
          else {
            dVar28 = (double)(fVar30 + fVar27) - dVar28 * dVar11;
          }
          dVar29 = (double)(fVar32 + (float)(dVar6 * (double)param_2[1]));
          if ((dVar6 != dVar8) || (NAN(dVar6) || NAN(dVar8))) {
            dVar10 = ((double)(float)(dVar8 * (double)param_2[1]) - dVar29) - (double)fVar26;
          }
          else {
            dVar29 = dVar29 - dVar5 * dVar10;
          }
          fStack_17c = (float)dVar10;
          local_180 = (float)dVar11;
          fVar30 = (float)dVar29;
          fVar32 = (float)dVar28;
          local_174 = 0x3f800000;
          uVar24 = CONCAT44(fVar30,fVar32);
          lVar19 = *(longlong *)(lVar17 + 0x10);
          local_100 = *(char *)(lVar19 + 0x198);
          local_170 = uVar24;
          if (DAT_14c96b1e0 == '\0') {
            if (local_100 != '\0') {
              local_108 = *(ulonglong *)(lVar19 + 400);
              local_118 = *(undefined8 *)(lVar19 + 0x180);
              uStack_110 = *(undefined8 *)(lVar19 + 0x188);
              goto LAB_141721bb7;
            }
LAB_14172185c:
            bVar20 = *(byte *)(param_2 + 0xd);
            fVar26 = param_2[2];
            fVar35 = param_2[7];
            fVar27 = param_2[8];
            fVar3 = param_2[10];
            fVar4 = param_2[9];
            fVar36 = fVar32 * fVar27 + fVar3 * fVar30 + param_2[0xc];
            fVar33 = fVar32 * fVar35 + fVar4 * fVar30 + param_2[0xb];
            fVar31 = fVar30 * fVar26 + param_2[4];
            fVar30 = fVar26 * fVar32 + param_2[3];
            uVar18 = CONCAT44(fStack_17c,local_180);
            uVar22 = *(undefined8 *)(lVar17 + 0x10);
            plVar23 = *(longlong **)(lVar17 + 0x18);
            if (plVar23 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
              UNLOCK();
              local_15c = (float)CONCAT22(CONCAT11(local_15c._3_1_,uStack_14e),local_150);
              LOCK();
              *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar23 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                local_1b8 = uVar18;
                local_1b0 = uVar22;
                (**(code **)*plVar23)(plVar23);
                LOCK();
                piVar2 = (int *)((longlong)plVar23 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                uVar18 = local_1b8;
                uVar22 = local_1b0;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                  uVar18 = local_1b8;
                  uVar22 = local_1b0;
                }
              }
            }
            bVar20 = bVar20 & 1;
            fVar34 = fVar27 * 0.0 + fVar3;
            fVar32 = fVar35 * 0.0 + fVar4;
            fVar27 = fVar3 * 0.0 + fVar27;
            fVar35 = fVar4 * 0.0 + fVar35;
          }
          else {
            if (local_100 == '\0') goto LAB_14172185c;
            local_118 = *(undefined8 *)(lVar19 + 0x180);
            uStack_110 = *(undefined8 *)(lVar19 + 0x188);
            local_108 = *(ulonglong *)(lVar19 + 400) ^ 0x80000000;
LAB_141721bb7:
            fVar30 = (float)*(double *)(*(longlong *)(lVar17 + 0x10) + 0x170);
            if (DAT_14c96b1e0 != '\0') {
              fVar30 = (0.5 - fVar30) + 0.5;
            }
            local_168 = CONCAT44((float)*(double *)(*(longlong *)(lVar17 + 0x10) + 0x178),fVar30);
            local_1d8 = &local_168;
            local_158 = *(undefined8 *)(param_2 + 3);
            local_15c = param_2[2];
            local_1d0 = &local_15c;
            local_1c8 = local_190;
            FUN_146978c22(&local_150,&local_180,&local_174,&local_118);
            bVar20 = local_11c;
            fVar36 = local_120;
            fVar33 = local_124;
            fVar34 = local_128;
            fVar32 = local_12c;
            fVar27 = local_130;
            fVar35 = local_134;
            uVar24 = local_13c;
            fVar31 = local_140;
            fVar30 = local_144;
            fVar26 = local_148;
            uVar22 = *(undefined8 *)(lVar17 + 0x10);
            plVar23 = *(longlong **)(lVar17 + 0x18);
            local_1b0 = uVar22;
            if (plVar23 == (longlong *)0x0) {
              uVar18 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
              local_15c._0_3_ = CONCAT12(local_119,local_11b);
              local_1b8 = uVar18;
            }
            else {
              LOCK();
              *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
              UNLOCK();
              local_1b8 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
              local_15c._0_3_ = CONCAT12(local_119,local_11b);
              LOCK();
              *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar23 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              uVar18 = local_1b8;
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar23)(plVar23);
                LOCK();
                piVar2 = (int *)((longlong)plVar23 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                uVar18 = local_1b8;
                uVar22 = local_1b0;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                  uVar18 = local_1b8;
                  uVar22 = local_1b0;
                }
              }
            }
          }
          if ((*param_3 & bVar9) == 0) {
            if (plVar23 != (longlong *)0x0) goto LAB_1417219f9;
          }
          else {
            iVar13 = *(int *)(param_3 + 0x130);
            lVar19 = (longlong)iVar13;
            *(uint *)(param_3 + 0x130) = iVar13 + 1U;
            if (*(uint *)(param_3 + 0x134) < iVar13 + 1U) {
              local_1b8 = uVar18;
              local_1b0 = uVar22;
              FUN_14022ed06(local_198,iVar13);
              uVar18 = local_1b8;
              uVar22 = local_1b0;
            }
            pbVar16 = *(byte **)(param_3 + 0x128);
            if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
              pbVar16 = local_198;
            }
            *(undefined8 *)(pbVar16 + lVar19 * 0x48) = uVar18;
            *(float *)(pbVar16 + lVar19 * 0x48 + 8) = fVar26;
            *(float *)(pbVar16 + lVar19 * 0x48 + 0xc) = fVar30;
            *(float *)(pbVar16 + lVar19 * 0x48 + 0x10) = fVar31;
            *(undefined8 *)(pbVar16 + lVar19 * 0x48 + 0x14) = uVar24;
            *(float *)(pbVar16 + lVar19 * 0x48 + 0x1c) = fVar35;
            *(float *)(pbVar16 + lVar19 * 0x48 + 0x20) = fVar27;
            *(float *)(pbVar16 + lVar19 * 0x48 + 0x24) = fVar32;
            *(float *)(pbVar16 + lVar19 * 0x48 + 0x28) = fVar34;
            *(float *)(pbVar16 + lVar19 * 0x48 + 0x2c) = fVar33;
            *(float *)(pbVar16 + lVar19 * 0x48 + 0x30) = fVar36;
            pbVar16[lVar19 * 0x48 + 0x34] = bVar20;
            *(undefined2 *)(pbVar16 + lVar19 * 0x48 + 0x35) = (undefined2)local_15c;
            pbVar16[lVar19 * 0x48 + 0x37] = local_15c._2_1_;
            *(undefined8 *)(pbVar16 + lVar19 * 0x48 + 0x38) = uVar22;
            *(longlong **)(pbVar16 + lVar19 * 0x48 + 0x40) = plVar23;
            if (plVar23 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
              UNLOCK();
LAB_1417219f9:
              LOCK();
              plVar1 = plVar23 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar23)(plVar23);
                LOCK();
                piVar2 = (int *)((longlong)plVar23 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                }
              }
            }
          }
          lVar19 = local_1a0;
          if (DAT_14c98f140 == '\0') {
            iVar13 = *(int *)(local_1a0 + 0x18);
            bVar21 = true;
          }
          else {
            fVar30 = *(float *)(lVar17 + 0xc0);
            iVar13 = *(int *)(local_1a0 + 0x18);
            bVar21 = local_1a4 + 1e-05 < fVar30;
            if (bVar21) {
              local_1a4 = fVar30;
            }
            bVar21 = bVar21 && 0 < iVar13;
          }
          *(uint *)(local_1a0 + 0x18) = iVar13 + 1U;
          if (*(uint *)(local_1a0 + 0x1c) < iVar13 + 1U) {
            FUN_146abed50(local_1a0,iVar13);
          }
          lVar17 = *(longlong *)(lVar19 + 0x10);
          if (lVar17 == 0) {
            lVar17 = lVar19;
          }
          *(bool *)(lVar17 + iVar13) = bVar21;
          iVar13 = *(int *)(local_188 + 0x200);
          param_1 = local_188;
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < iVar13);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141721ee6 FUN_141721ee6 body=1885 status=ok
// SIG undefined FUN_141721ee6(void)

void FUN_141721ee6(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  float *pfVar8;
  byte *pbVar9;
  byte bVar10;
  longlong *plVar11;
  undefined8 uVar12;
  float *pfVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  float *local_180;
  float *local_178;
  float local_170;
  float fStack_16c;
  float local_164;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  undefined2 local_144;
  byte local_142;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_12c;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  byte local_10c;
  undefined2 local_10b;
  byte local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  char local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar16 = *(longlong *)(param_1 + 0x208);
  bVar3 = *(byte *)(lVar16 + 0x39);
  if ((*param_3 & bVar3) == 0) goto LAB_141722275;
  fVar20 = *param_2;
  fVar22 = param_2[1];
  pfVar13 = (float *)(lVar16 + 0x168);
  pfVar8 = pfVar13;
  if ((*(byte *)(lVar16 + 0x31) & 0x20) == 0) {
    pfVar8 = (float *)&DAT_14c84635c;
  }
  fVar23 = *pfVar8;
  fVar27 = pfVar8[1];
  iVar4 = *(int *)(param_1 + 0x26c);
  if (*(char *)(param_1 + 0x2fc) == '\x01') {
    fVar18 = *(float *)(param_1 + 0x2f8);
  }
  else {
    fVar18 = (float)FUN_14041b020(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  if (ABS(fVar18) <= 1e-08) goto LAB_141722275;
  if (iVar4 == 1) {
    fVar19 = 0.0;
    fVar21 = 0.0;
  }
  else {
    fVar19 = *(float *)(param_1 + 0x218);
    iVar4 = *(int *)(param_1 + 0x228);
    if (iVar4 != 0) {
      pfVar8 = pfVar13;
      if ((*(byte *)(lVar16 + 0x31) & 0x20) == 0) {
        pfVar8 = (float *)&DAT_14c84635c;
      }
      fVar21 = *pfVar8 * fVar18;
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      if (iVar4 == 3) {
        fVar19 = fVar20 - fVar21;
      }
      else {
        if (iVar4 != 2) goto LAB_141722005;
        fVar19 = fVar19 + (fVar20 - fVar21) * 0.5;
      }
      fVar19 = fVar19 - *(float *)(param_1 + 0x220);
    }
LAB_141722005:
    fVar21 = *(float *)(param_1 + 0x21c);
    iVar5 = *(int *)(param_1 + 0x22c);
    if (iVar5 != 0) {
      if ((*(byte *)(lVar16 + 0x31) & 0x20) == 0) {
        pfVar13 = (float *)&DAT_14c84635c;
      }
      fVar17 = pfVar13[1] * fVar18;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if (iVar5 == 2) {
        fVar21 = fVar21 + (fVar22 - fVar17) * 0.5;
      }
      else {
        if (iVar5 != 3) goto LAB_14172201b;
        fVar21 = fVar22 - fVar17;
      }
      fVar21 = fVar21 - *(float *)(param_1 + 0x224);
    }
LAB_14172201b:
    if (iVar5 == 0) {
      fVar27 = fVar22 / fVar18;
    }
    dVar7 = (double)fVar21 * (1.0 / (double)fVar18);
    dVar6 = (1.0 / (double)fVar18) * (double)fVar19;
    *(double *)(param_1 + 0x300) = dVar6;
    *(double *)(param_1 + 0x308) = dVar7;
    if (iVar4 == 0) {
      fVar23 = fVar20 / fVar18;
    }
    fVar21 = (float)dVar7;
    fVar19 = (float)dVar6;
    fVar20 = fVar23;
    fVar22 = fVar27;
  }
  fVar21 = fVar21 * fVar18;
  fVar19 = fVar19 * fVar18;
  uVar12 = CONCAT44(fVar21,fVar19);
  local_f0 = *(char *)(lVar16 + 0x198);
  local_170 = fVar20;
  fStack_16c = fVar22;
  local_164 = fVar18;
  local_160 = uVar12;
  if (DAT_14c96b1e0 == '\0') {
    if (local_f0 != '\0') {
      local_f8 = *(ulonglong *)(lVar16 + 400);
      local_108 = *(undefined8 *)(lVar16 + 0x180);
      uStack_100 = *(undefined8 *)(lVar16 + 0x188);
      goto LAB_141722409;
    }
LAB_1417220d6:
    bVar10 = *(byte *)(param_2 + 0xd) & 1;
    uVar14 = CONCAT44(fVar22,fVar20);
    fVar20 = param_2[8];
    fVar22 = param_2[10];
    fVar23 = param_2[2];
    fVar27 = param_2[7];
    fVar17 = param_2[9];
    fVar26 = fVar19 * fVar20 + fVar21 * fVar22 + param_2[0xc];
    fVar29 = fVar19 * fVar27 + fVar21 * fVar17 + param_2[0xb];
    fVar25 = fVar20 * 0.0 + fVar18 * fVar22;
    fVar28 = fVar27 * 0.0 + fVar18 * fVar17;
    fVar24 = fVar22 * 0.0 + fVar18 * fVar20;
    fVar22 = fVar21 * fVar23 + param_2[4];
    fVar20 = fVar19 * fVar23 + param_2[3];
    fVar27 = fVar17 * 0.0 + fVar18 * fVar27;
    fVar18 = fVar18 * fVar23;
    plVar11 = *(longlong **)(param_1 + 0x210);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      goto LAB_1417221b1;
    }
    if ((*param_3 & bVar3) == 0) goto LAB_141722275;
    plVar11 = (longlong *)0x0;
LAB_1417221c8:
    iVar4 = *(int *)(param_3 + 0x130);
    lVar15 = (longlong)iVar4;
    *(uint *)(param_3 + 0x130) = iVar4 + 1U;
    if (*(uint *)(param_3 + 0x134) < iVar4 + 1U) {
      FUN_14022ed06(param_3 + 8,iVar4);
    }
    pbVar9 = param_3 + 8;
    if (*(byte **)(param_3 + 0x128) != (byte *)0x0) {
      pbVar9 = *(byte **)(param_3 + 0x128);
    }
    *(undefined8 *)(pbVar9 + lVar15 * 0x48) = uVar14;
    *(float *)(pbVar9 + lVar15 * 0x48 + 8) = fVar18;
    *(float *)(pbVar9 + lVar15 * 0x48 + 0xc) = fVar20;
    *(float *)(pbVar9 + lVar15 * 0x48 + 0x10) = fVar22;
    *(undefined8 *)(pbVar9 + lVar15 * 0x48 + 0x14) = uVar12;
    *(float *)(pbVar9 + lVar15 * 0x48 + 0x1c) = fVar27;
    *(float *)(pbVar9 + lVar15 * 0x48 + 0x20) = fVar24;
    *(float *)(pbVar9 + lVar15 * 0x48 + 0x24) = fVar28;
    *(float *)(pbVar9 + lVar15 * 0x48 + 0x28) = fVar25;
    *(float *)(pbVar9 + lVar15 * 0x48 + 0x2c) = fVar29;
    *(float *)(pbVar9 + lVar15 * 0x48 + 0x30) = fVar26;
    pbVar9[lVar15 * 0x48 + 0x34] = bVar10;
    *(undefined2 *)(pbVar9 + lVar15 * 0x48 + 0x35) = local_144;
    pbVar9[lVar15 * 0x48 + 0x37] = local_142;
    *(longlong *)(pbVar9 + lVar15 * 0x48 + 0x38) = lVar16;
    *(longlong **)(pbVar9 + lVar15 * 0x48 + 0x40) = plVar11;
    if (plVar11 == (longlong *)0x0) goto LAB_141722275;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  else {
    if (local_f0 == '\0') goto LAB_1417220d6;
    local_108 = *(undefined8 *)(lVar16 + 0x180);
    uStack_100 = *(undefined8 *)(lVar16 + 0x188);
    local_f8 = *(ulonglong *)(lVar16 + 400) ^ 0x80000000;
LAB_141722409:
    fVar20 = (float)*(double *)(lVar16 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar20 = (0.5 - fVar20) + 0.5;
    }
    local_158 = CONCAT44((float)*(double *)(lVar16 + 0x178),fVar20);
    local_188 = &local_158;
    local_178 = param_2 + 7;
    local_14c = *(undefined8 *)(param_2 + 3);
    local_150 = param_2[2];
    local_180 = &local_150;
    FUN_146978c22(&local_140,&local_170,&local_164,&local_108);
    lVar16 = *(longlong *)(param_1 + 0x208);
    plVar11 = *(longlong **)(param_1 + 0x210);
    bVar10 = local_10c;
    if (plVar11 == (longlong *)0x0) {
      local_144 = local_10b;
      local_142 = local_109;
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      local_144 = local_10b;
      local_142 = local_109;
      uVar12 = local_12c;
      uVar14 = local_140;
      fVar18 = local_138;
      fVar20 = local_134;
      fVar22 = local_130;
      fVar24 = local_120;
      fVar25 = local_118;
      fVar26 = local_110;
      fVar27 = local_124;
      fVar28 = local_11c;
      fVar29 = local_114;
LAB_1417221b1:
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_12c = uVar12;
      local_140 = uVar14;
      local_138 = fVar18;
      local_134 = fVar20;
      local_130 = fVar22;
      local_120 = fVar24;
      local_118 = fVar25;
      local_110 = fVar26;
      local_124 = fVar27;
      local_11c = fVar28;
      local_114 = fVar29;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    uVar12 = local_12c;
    uVar14 = local_140;
    fVar18 = local_138;
    fVar20 = local_134;
    fVar22 = local_130;
    fVar24 = local_120;
    fVar25 = local_118;
    fVar26 = local_110;
    fVar27 = local_124;
    fVar28 = local_11c;
    fVar29 = local_114;
    if ((*param_3 & bVar3) != 0) goto LAB_1417221c8;
    if (plVar11 == (longlong *)0x0) goto LAB_141722275;
  }
  LOCK();
  plVar1 = plVar11 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_141722275:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141722644 FUN_141722644 body=450 status=ok
// SIG undefined FUN_141722644(void)

undefined4
FUN_141722644(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_6c [36];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar1 = param_3[1];
  if (*(char *)(param_1 + 0x298) == '\x01') {
    if ((ABS(*param_3 - (float)*(double *)(param_1 + 0x288)) <= 0.0001) &&
       (ABS(fVar1 - (float)*(double *)(param_1 + 0x290)) <= 0.0001)) goto LAB_1417226e8;
  }
  *(double *)(param_1 + 0x288) = (double)*param_3;
  *(double *)(param_1 + 0x290) = (double)fVar1;
  *(undefined1 *)(param_1 + 0x298) = 1;
  if ((float *)(param_1 + 0x2a0) != param_3) {
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_3 + 0xc);
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = param_3[4];
    fVar6 = param_3[5];
    fVar7 = param_3[6];
    fVar8 = param_3[7];
    fVar9 = param_3[9];
    fVar10 = param_3[10];
    fVar11 = param_3[0xb];
    *(float *)(param_1 + 0x2c0) = param_3[8];
    *(float *)(param_1 + 0x2c4) = fVar9;
    *(float *)(param_1 + 0x2c8) = fVar10;
    *(float *)(param_1 + 0x2cc) = fVar11;
    *(float *)(param_1 + 0x2b0) = fVar5;
    *(float *)(param_1 + 0x2b4) = fVar6;
    *(float *)(param_1 + 0x2b8) = fVar7;
    *(float *)(param_1 + 700) = fVar8;
    *(float *)(param_1 + 0x2a0) = fVar1;
    *(float *)(param_1 + 0x2a4) = fVar2;
    *(float *)(param_1 + 0x2a8) = fVar3;
    *(float *)(param_1 + 0x2ac) = fVar4;
    *(undefined1 *)(param_1 + 0x2d8) = 1;
  }
  if ((1 < *(uint *)(param_1 + 0x26c)) && (2 < *(uint *)(param_1 + 0x26c) - 6)) {
    FUN_140163244(param_1,0x80);
  }
LAB_1417226e8:
  if (((*(char *)(param_1 + 0x35) == '\0') && (*(uint *)(param_1 + 0x26c) < 9)) &&
     ((0x138U >> (*(uint *)(param_1 + 0x26c) & 0x1f) & 1) != 0)) {
    FUN_1401bbb82(local_6c,param_3);
    FUN_1400d7f4c(param_5,local_6c);
    local_80 = param_8;
    local_88 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    uVar12 = FUN_1400c0302(param_1,param_2,param_3,param_4);
    FUN_14171ebf2(param_5);
    if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return uVar12;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 141722828 FUN_141722828 body=253 status=ok
// SIG undefined FUN_141722828(void)

double * FUN_141722828(longlong param_1,double *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0x26c);
  if ((uVar2 < 2) || (uVar2 - 6 < 3)) {
    if (*(char *)(param_1 + 0x2fc) != '\x01') {
LAB_141722901:
      FUN_140105618(param_1,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    FUN_140105618(param_1,&local_30);
    fVar1 = *(float *)(param_1 + 0x2f8);
    *param_2 = (double)fVar1 * local_30;
    param_2[1] = local_28 * (double)fVar1;
  }
  else {
    if (*(char *)(param_1 + 0x2f0) != '\x01') goto LAB_141722901;
    uVar3 = *(undefined4 *)(param_1 + 0x2e4);
    uVar4 = *(undefined4 *)(param_1 + 0x2e8);
    uVar5 = *(undefined4 *)(param_1 + 0x2ec);
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x2e0);
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 1) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
    if ((uVar2 - 3 < 2) && (*(char *)(param_1 + 0x2fc) == '\x01')) {
      fVar1 = *(float *)(param_1 + 0x2f8);
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        if (uVar2 == 3) {
          param_2[1] = (double)fVar1 * param_2[1];
        }
        else {
          *param_2 = (double)fVar1 * *param_2;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141722928 FUN_141722928 body=43 status=ok
// SIG undefined FUN_141722928(void)

void FUN_141722928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 141722954 FUN_141722954 body=1468 status=ok
// SIG undefined FUN_141722954(void)

void FUN_141722954(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined4 *local_1a0;
  longlong local_198;
  float local_188;
  float fStack_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  char local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (0 < *(int *)(param_1 + 0x200)) {
    lVar11 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar11 * 8);
      dVar5 = *(double *)(lVar8 + 0x40);
      if (*(int *)(lVar8 + 0x28) == 3) {
        dVar10 = -dVar5;
      }
      else {
        dVar10 = 0.0;
        if (*(int *)(lVar8 + 0x28) == 2) {
          dVar10 = dVar5 * -0.5;
        }
      }
      dVar6 = *(double *)(lVar8 + 0x48);
      if (*(int *)(lVar8 + 0x2c) == 2) {
        dVar17 = dVar6 * -0.5;
      }
      else {
        dVar17 = 0.0;
        if (*(int *)(lVar8 + 0x2c) == 3) {
          dVar17 = -dVar6;
        }
      }
      fStack_184 = (float)dVar6;
      local_188 = (float)dVar5;
      fVar13 = (float)(dVar17 + *(double *)(lVar8 + 0x38));
      fVar14 = (float)(dVar10 + *(double *)(lVar8 + 0x30));
      local_17c = 0x3f800000;
      local_178 = CONCAT44(fVar13,fVar14);
      lVar9 = *(longlong *)(lVar8 + 0x10);
      local_c0 = *(char *)(lVar9 + 0x198);
      if (DAT_14c96b1e0 == '\0') {
        if (local_c0 == '\0') goto LAB_141722a98;
        local_c8 = *(ulonglong *)(lVar9 + 400);
        local_d8 = *(undefined8 *)(lVar9 + 0x180);
        uStack_d0 = *(undefined8 *)(lVar9 + 0x188);
LAB_141722d1c:
        fVar13 = (float)*(double *)(*(longlong *)(lVar8 + 0x10) + 0x170);
        if (DAT_14c96b1e0 != '\0') {
          fVar13 = (0.5 - fVar13) + 0.5;
        }
        local_170 = CONCAT44((float)*(double *)(*(longlong *)(lVar8 + 0x10) + 0x178),fVar13);
        local_1a8 = &local_170;
        local_160 = *(undefined8 *)(param_2 + 0xc);
        local_164 = *(undefined4 *)(param_2 + 8);
        local_1a0 = &local_164;
        local_198 = param_2 + 0x1c;
        FUN_146978c22(&local_110,&local_188,&local_17c,&local_d8);
        local_120 = *(undefined8 *)(lVar8 + 0x10);
        plVar12 = *(longlong **)(lVar8 + 0x18);
        if (plVar12 == (longlong *)0x0) {
          local_128 = local_e0;
          local_138 = CONCAT44(uStack_ec,local_f0);
          uStack_130 = CONCAT44(uStack_e4,uStack_e8);
          local_148 = local_100;
          fStack_144 = fStack_fc;
          fStack_140 = fStack_f8;
          fStack_13c = fStack_f4;
          local_158 = CONCAT44(uStack_10c,local_110);
          fStack_150 = fStack_108;
          fStack_14c = fStack_104;
          goto LAB_141722e74;
        }
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        local_128 = local_e0;
        local_138 = CONCAT44(uStack_ec,local_f0);
        uStack_130 = CONCAT44(uStack_e4,uStack_e8);
        local_148 = local_100;
        fStack_144 = fStack_fc;
        fStack_140 = fStack_f8;
        fStack_13c = fStack_f4;
        local_158 = CONCAT44(uStack_10c,local_110);
        fStack_150 = fStack_108;
        fStack_14c = fStack_104;
LAB_141722bc8:
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar12 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_118 = plVar12;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      else {
        if (local_c0 != '\0') {
          local_d8 = *(undefined8 *)(lVar9 + 0x180);
          uStack_d0 = *(undefined8 *)(lVar9 + 0x188);
          local_c8 = *(ulonglong *)(lVar9 + 400) ^ 0x80000000;
          goto LAB_141722d1c;
        }
LAB_141722a98:
        uVar7 = *(undefined1 *)(param_2 + 0x34);
        fStack_150 = *(float *)(param_2 + 8);
        fStack_13c = *(float *)(param_2 + 0x1c);
        fVar16 = *(float *)(param_2 + 0x20);
        fVar3 = *(float *)(param_2 + 0x28);
        fVar4 = *(float *)(param_2 + 0x24);
        fVar15 = fVar14 * fVar16 + fVar3 * fVar13 + *(float *)(param_2 + 0x30);
        fVar18 = fVar14 * fStack_13c + fVar4 * fVar13 + *(float *)(param_2 + 0x2c);
        local_158 = CONCAT44(fStack_184,local_188);
        fVar19 = fVar16 * 0.0 + fVar3;
        fVar20 = fStack_13c * 0.0 + fVar4;
        fVar16 = fVar3 * 0.0 + fVar16;
        local_148 = fVar13 * fStack_150 + *(float *)(param_2 + 0x10);
        fStack_14c = fVar14 * fStack_150 + *(float *)(param_2 + 0xc);
        fStack_13c = fVar4 * 0.0 + fStack_13c;
        local_120 = *(undefined8 *)(lVar8 + 0x10);
        plVar12 = *(longlong **)(lVar8 + 0x18);
        fStack_144 = fVar14;
        fStack_140 = fVar13;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          local_138 = CONCAT44(fVar20,fVar16);
          uStack_130 = CONCAT44(fVar18,fVar19);
          local_128 = CONCAT17(local_110._2_1_,
                               CONCAT25((undefined2)local_110,CONCAT14(uVar7,fVar15))) &
                      0xffffff01ffffffff;
          goto LAB_141722bc8;
        }
        local_138 = CONCAT44(fVar20,fVar16);
        uStack_130 = CONCAT44(fVar18,fVar19);
        local_128 = CONCAT35(local_128._5_3_,CONCAT14(uVar7,fVar15)) & 0xffffff01ffffffff;
LAB_141722e74:
        local_118 = (longlong *)0x0;
      }
      FUN_1402018be(param_3,&local_158);
      plVar12 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_118 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x200));
  }
  if ((local_b0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141722f12 FUN_141722f12 body=441 status=ok
// SIG undefined FUN_141722f12(void)

int FUN_141722f12(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined1 local_180 [288];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_188 = DAT_14c96b238;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 0;
  uVar3 = (**(code **)(*param_1 + 0x238))(param_1,param_3);
  if (param_8 == '\0') {
    local_1bc = 0;
  }
  else {
    local_1bc = (undefined4)
                CONCAT71((int7)((ulonglong)uVar3 >> 8),*(undefined1 *)((longlong)param_1 + 0x3a));
  }
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 4);
  local_198 = *(undefined8 *)(param_2 + 8);
  uStack_190 = *(undefined8 *)(param_2 + 10);
  plStack_1a0 = param_1;
  if (0 < (int)local_58) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      puVar4 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar4 = local_180;
      }
      cVar1 = FUN_14022ea56(param_1,param_4,puVar4 + lVar5);
      if (cVar1 == '\0') {
        local_1e0 = param_6 + 1;
        local_1d0 = (undefined1)local_1bc;
        local_1d8 = param_7;
        local_1e8 = param_5;
        iVar2 = FUN_14016eaf2(*(undefined8 *)(puVar4 + lVar5 + 0x38),&local_1b8,puVar4 + lVar5,
                              param_4);
        if (param_6 < iVar2) {
          param_6 = iVar2;
        }
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < (int)local_58);
  }
  puVar4 = local_180;
  if (local_60 != (undefined1 *)0x0) {
    puVar4 = local_60;
  }
  FUN_1447157bd(puVar4);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417230cc FUN_1417230cc body=174 status=ok
// SIG undefined FUN_1417230cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417230cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_1403d1d7a();
  if (((*(longlong *)(param_1 + 0x268) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x270), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141723156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(_DAT_00000000 + 0x90))(0,param_2,param_3);
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
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x90))
              (*(longlong **)(param_1 + 0x268),param_2,param_3);
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
                    /* WARNING: Could not recover jumptable at 0x000141723176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14172317a FUN_14172317a body=157 status=ok
// SIG undefined FUN_14172317a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14172317a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_1403d1e68();
  if (((*(longlong *)(param_1 + 0x268) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x270), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001417231f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(_DAT_00000000 + 0x98))(0,param_2);
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
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x98))(*(longlong **)(param_1 + 0x268),param_2);
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
                    /* WARNING: Could not recover jumptable at 0x000141723213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141723218 FUN_141723218 body=64 status=ok
// SIG undefined FUN_141723218(void)

void FUN_141723218(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  
  FUN_1402527da();
  if ((*(char *)(param_3 + 0x138) == '\x01') &&
     (plVar1 = *(longlong **)(param_1 + 0x2b0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141723255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 141723258 FUN_141723258 body=22 status=ok
// SIG undefined FUN_141723258(void)

undefined8 FUN_141723258(undefined8 param_1,undefined8 param_2)

{
  FUN_140105618();
  return param_2;
}



// FUNCTION 14172326e FUN_14172326e body=145 status=ok
// SIG undefined FUN_14172326e(void)

void FUN_14172326e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  if (*(char *)(param_1 + 0x689) == '\x01') {
    FUN_14020e3ec(param_5);
  }
  FUN_1400c0302(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x689) == '\x01') {
    *(undefined1 *)(param_5 + 0x168) = 1;
  }
  return;
}



// FUNCTION 141723300 FUN_141723300 body=164 status=ok
// SIG undefined FUN_141723300(void)

void FUN_141723300(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1402527da();
  if ((*(char *)(param_3 + 0x138) == '\x01') &&
     (plVar3 = (longlong *)FUN_146981fd8(param_1), 0 < (int)plVar3[1])) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar1 = *plVar3;
      FUN_1401e2e48(*(undefined8 *)(lVar1 + lVar4),local_70);
      plVar2 = *(longlong **)(lVar1 + lVar4);
      (**(code **)(*plVar2 + 0x238))(plVar2,local_70,param_3);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < (int)plVar3[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417233a6 FUN_1417233a6 body=84 status=ok
// SIG undefined FUN_1417233a6(void)

void FUN_1417233a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1410f0078(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001417233f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1417233fa FUN_1417233fa body=29 status=ok
// SIG undefined FUN_1417233fa(void)

undefined8 FUN_1417233fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141723418 FUN_141723418 body=181 status=ok
// SIG undefined FUN_141723418(void)

undefined2 * FUN_141723418(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,local_30);
      cVar1 = FUN_14010cee6(*(undefined8 *)(param_1 + 0x18),local_30,3);
      if (cVar1 == '\0') {
        FUN_140008f88(*(undefined8 *)(param_1 + 0x18),local_30);
        *param_2 = 0x100;
      }
      if (local_30[0] != (longlong *)0x0) {
        (**(code **)(*local_30[0] + 0x10))();
      }
      if (cVar1 == '\0') goto LAB_141723493;
    }
  }
  *param_2 = 0;
LAB_141723493:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417234ce FUN_1417234ce body=103 status=ok
// SIG undefined FUN_1417234ce(void)

longlong FUN_1417234ce(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1417234ec;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1417234ec:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141723536 FUN_141723536 body=242 status=ok
// SIG undefined FUN_141723536(void)

longlong * FUN_141723536(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(short *)(param_1 + 8) == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_1447403be(param_2,0);
    *(char *)*param_2 = (char)uVar1;
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1447403be(param_2,iVar2);
    }
    *(char *)(*param_2 + (longlong)iVar2) = (char)((uint)uVar1 >> 8);
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1447403be(param_2,iVar2);
    }
    *(char *)(*param_2 + (longlong)iVar2) = (char)((uint)uVar1 >> 0x10);
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1447403be(param_2,iVar2);
    }
    *(char *)(*param_2 + (longlong)iVar2) = (char)((uint)uVar1 >> 0x18);
  }
  else if (*(short *)(param_1 + 8) == 0x17) {
    lVar3 = 0;
    do {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447403be(param_2,iVar2);
      }
      *(undefined1 *)(*param_2 + (longlong)iVar2) = *(undefined1 *)(param_1 + 0x10 + lVar3);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x10);
  }
  return param_2;
}



// FUNCTION 141723628 FUN_141723628 body=95 status=ok
// SIG undefined FUN_141723628(void)

undefined8 FUN_141723628(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0xa8))(param_1,&local_18);
  cVar1 = FUN_1403f35db(local_18,&DAT_14c9908e8);
  uVar2 = 0x1c;
  if (cVar1 != '\0') {
    uVar2 = 0x10;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141723688 FUN_141723688 body=67 status=ok
// SIG undefined FUN_141723688(void)

undefined8 FUN_141723688(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1403f35db(*param_2,&DAT_14c9908e8);
  uVar2 = 2;
  if (cVar1 == '\0') {
    cVar1 = FUN_1403f35db(*param_2,&DAT_14c9908f8);
    uVar2 = 0x17;
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 1417236cc FUN_1417236cc body=29 status=ok
// SIG undefined FUN_1417236cc(void)

undefined8 FUN_1417236cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417236ea FUN_1417236ea body=370 status=ok
// SIG undefined FUN_1417236ea(void)

void FUN_1417236ea(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141723773;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141723773:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 14172385c FUN_14172385c body=370 status=ok
// SIG undefined FUN_14172385c(void)

void FUN_14172385c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417238e5;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1417238e5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,4);
  return;
}



// FUNCTION 1417239ce FUN_1417239ce body=221 status=ok
// SIG undefined FUN_1417239ce(void)

undefined8 * FUN_1417239ce(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_3 + 8) + -1;
  if (*(int *)(param_3 + 8) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  iVar2 = FUN_1457511aa((longlong *)(param_1 + 0x2b8));
  if ((iVar2 != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x2b8) + (longlong)iVar2 * 0x28, lVar1 != -0x10 && lVar1 != 0)
     ) {
    FUN_144a787a6(param_2);
  }
  return param_2;
}



// FUNCTION 141723aac FUN_141723aac body=89 status=ok
// SIG undefined FUN_141723aac(void)

undefined8 * FUN_141723aac(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x2a0);
  _Src = *(void **)(param_1 + 0x298);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 141723b06 FUN_141723b06 body=69 status=ok
// SIG undefined FUN_141723b06(void)

bool FUN_141723b06(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x2a8) & 1) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x270), lVar2 = FUN_141054386(),
     *(float *)(lVar2 + 0x30) <= fVar1)) {
    return true;
  }
  return *(int *)(param_1 + 0x2ac) != 0;
}



// FUNCTION 141723b4c FUN_141723b4c body=208 status=ok
// SIG undefined FUN_141723b4c(void)

undefined8 FUN_141723b4c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_158 [40];
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar2 = *(uint *)(param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x38);
  local_30 = 0;
  if (lVar1 == 0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    if ((int)uVar2 < 1) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)(lVar1 + (ulonglong)(uVar2 - 1)) == '\0';
      if (bVar3) {
        uVar2 = uVar2 - 1;
      }
    }
    FUN_1446e6fe8(local_130,lVar1,uVar2,bVar3);
  }
  FUN_1400089be(param_2,local_20,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141723c1e FUN_141723c1e body=222 status=ok
// SIG undefined FUN_141723c1e(void)

void FUN_141723c1e(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = *(ulonglong *)(param_2 + 0x278);
  if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
    uVar2 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x6a8;
    if (*(longlong *)(param_1 + 0x6b0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x6b0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x6b8) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x670) + (longlong)iVar4 * 0x18);
        if (*puVar1 == uVar5) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) != 0) {
            FUN_144bba090(DAT_14c990be8,uVar5);
            FUN_1411e09ac((longlong *)(param_1 + 0x670),uVar5);
            uVar5 = *(ulonglong *)(param_2 + 0x278);
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  FUN_144b46fc0(uVar5,0x2774,0);
  return;
}



// FUNCTION 141723cfc FUN_141723cfc body=260 status=ok
// SIG undefined FUN_141723cfc(void)

undefined8 * FUN_141723cfc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x228) != *(int *)(param_1 + 0x254)) {
    uVar1 = (uint)((ulonglong)param_3 >> 0x10);
    uVar3 = (uint)param_3 & 0xffff;
    lVar2 = param_1 + 600;
    if (*(longlong *)(param_1 + 0x260) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x260);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x268) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x220) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x220) + (longlong)iVar4 * 0x20) == param_3) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = 0;
            iVar4 = *(int *)(lVar2 + 0x10);
            _Src = *(void **)(lVar2 + 8);
            *(int *)(param_2 + 1) = iVar4;
            if ((longlong)iVar4 != 0) {
              FUN_1446dd670(param_2,iVar4,0);
              memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
              return param_2;
            }
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
            return param_2;
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 141723e00 FUN_141723e00 body=111 status=ok
// SIG undefined FUN_141723e00(void)

undefined4 FUN_141723e00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  uVar1 = FUN_140988638(&local_28,L"HTTP",1);
  if ((char)uVar1 != '\0') {
    FUN_14291b692(param_1 + -8,local_28,param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141723e70 FUN_141723e70 body=29 status=ok
// SIG undefined FUN_141723e70(void)

undefined8 FUN_141723e70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141723e8e FUN_141723e8e body=406 status=ok
// SIG undefined FUN_141723e8e(void)

void FUN_141723e8e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)param_1[0x40];
  if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
    puVar5 = param_1;
  }
  uVar2 = puVar5[1];
  *param_2 = *puVar5;
  param_2[1] = uVar2;
  iVar4 = *(int *)(param_1 + 0x41) + -1;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  else {
    if (0 < iVar4) {
      iVar4 = 1;
    }
    puVar5 = (undefined8 *)param_1[0x40];
    if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
      puVar5 = param_1;
    }
    memmove(puVar5,puVar5 + (longlong)(*(int *)(param_1 + 0x41) - iVar4) * 2,(longlong)iVar4 << 4);
    iVar1 = *(int *)(param_1 + 0x41);
    iVar4 = iVar1 + -1;
    *(int *)(param_1 + 0x41) = iVar4;
    puVar5 = (undefined8 *)param_1[0x40];
    if ((undefined8 *)param_1[0x40] == (undefined8 *)0x0) {
      puVar5 = param_1;
    }
    if (2 < iVar1) {
      iVar9 = 0;
      iVar1 = 1;
      iVar6 = 0;
      do {
        iVar8 = iVar1;
        iVar9 = iVar9 + 2;
        if (iVar9 < iVar4) {
          local_58 = puVar5[(longlong)iVar9 * 2];
          uStack_50 = (puVar5 + (longlong)iVar9 * 2)[1];
          puVar7 = puVar5 + (longlong)iVar8 * 2;
          local_68 = *(undefined4 *)puVar7;
          uStack_64 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_60 = *(undefined4 *)(puVar7 + 1);
          uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
          cVar3 = FUN_1410be3f8(param_3,&local_68,&local_58);
          if (cVar3 == '\0') {
            iVar8 = iVar9;
          }
        }
        local_58 = puVar5[(longlong)iVar6 * 2];
        uStack_50 = (puVar5 + (longlong)iVar6 * 2)[1];
        puVar7 = puVar5 + (longlong)iVar8 * 2;
        local_68 = *(undefined4 *)puVar7;
        uStack_64 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_60 = *(undefined4 *)(puVar7 + 1);
        uStack_5c = *(undefined4 *)((longlong)puVar7 + 0xc);
        cVar3 = FUN_1410be3f8(param_3,&local_68,&local_58);
        if (cVar3 == '\0') break;
        puVar7 = puVar5 + (longlong)iVar6 * 2;
        puVar10 = puVar5 + (longlong)iVar8 * 2;
        local_58 = *puVar7;
        uStack_50 = puVar7[1];
        uVar2 = puVar10[1];
        *puVar7 = *puVar10;
        puVar7[1] = uVar2;
        *puVar10 = local_58;
        puVar10[1] = uStack_50;
        iVar9 = iVar8 * 2;
        iVar1 = iVar8 * 2 + 1;
        iVar6 = iVar8;
      } while (iVar1 < iVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141724026 FUN_141724026 body=600 status=ok
// SIG undefined FUN_141724026(void)

bool FUN_141724026(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  longlong *plVar18;
  undefined1 uVar19;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 == 0) goto LAB_14172404d;
  *param_2 = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = *(undefined8 *)(lVar1 + 0x20);
  uVar12 = *(undefined8 *)(lVar1 + 0x28);
  uVar13 = *(undefined8 *)(lVar1 + 0x30);
  uVar14 = *(undefined8 *)(lVar1 + 0x38);
  uVar15 = *(undefined8 *)(lVar1 + 0x40);
  uVar16 = *(undefined8 *)(lVar1 + 0x48);
  uVar17 = *(undefined8 *)(lVar1 + 0x58);
  param_2[8] = *(undefined8 *)(lVar1 + 0x50);
  param_2[9] = uVar17;
  param_2[6] = uVar15;
  param_2[7] = uVar16;
  param_2[4] = uVar13;
  param_2[5] = uVar14;
  param_2[2] = uVar11;
  param_2[3] = uVar12;
  *(undefined8 *)(lVar1 + 0x50) = uVar9;
  *(undefined8 *)(lVar1 + 0x58) = uVar10;
  *(undefined8 *)(lVar1 + 0x40) = uVar7;
  *(undefined8 *)(lVar1 + 0x48) = uVar8;
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined8 *)(lVar1 + 0x38) = uVar6;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  if ((undefined8 *)(lVar1 + 0x10) != param_2) {
    if (*(char *)(lVar1 + 0x68) == '\x01') {
      param_2[10] = *(undefined8 *)(lVar1 + 0x60);
      uVar19 = 1;
    }
    else {
      if (*(char *)(param_2 + 0xb) != '\x01') goto LAB_141724107;
      uVar19 = 0;
    }
    *(undefined1 *)(param_2 + 0xb) = uVar19;
  }
LAB_141724107:
  *(undefined2 *)(param_2 + 0xe) = *(undefined2 *)(lVar1 + 0x80);
  uVar3 = *(undefined8 *)(lVar1 + 0x78);
  param_2[0xc] = *(undefined8 *)(lVar1 + 0x70);
  param_2[0xd] = uVar3;
  lVar2 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  local_c8 = *(longlong *)(lVar1 + 0x20);
  uStack_c0 = *(undefined8 *)(lVar1 + 0x28);
  local_b8 = *(longlong **)(lVar1 + 0x30);
  uStack_b0 = *(undefined8 *)(lVar1 + 0x38);
  local_38 = *(longlong *)(lVar1 + 0x40);
  uStack_30 = *(undefined8 *)(lVar1 + 0x48);
  local_28 = *(undefined8 *)(lVar1 + 0x50);
  uStack_20 = *(undefined8 *)(lVar1 + 0x58);
  local_48 = local_b8;
  uStack_40 = uStack_b0;
  local_58 = local_c8;
  uStack_50 = uStack_c0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(longlong *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  local_98 = local_28;
  uStack_90 = uStack_20;
  local_a8 = local_38;
  uStack_a0 = uStack_30;
  if ((&local_d8 != (undefined8 *)(lVar1 + 0x10)) && (*(char *)(lVar1 + 0x68) == '\x01')) {
    *(undefined1 *)(lVar1 + 0x68) = 0;
  }
  *(undefined2 *)(lVar1 + 0x80) = 0;
  *(undefined4 *)(lVar1 + 0x70) = 0;
  *(undefined4 *)(lVar1 + 0x74) = 0;
  *(undefined4 *)(lVar1 + 0x78) = 0;
  *(undefined4 *)(lVar1 + 0x7c) = 0;
  if (local_c8 != 0) {
    plVar18 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar18 = &local_a8;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x68) == '\x01') {
      *(undefined1 *)(lVar2 + 0x68) = 0;
    }
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      plVar18 = (longlong *)(lVar2 + 0x40);
      if (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) {
        plVar18 = *(longlong **)(lVar2 + 0x30);
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    FUN_1400020a8(lVar2);
  }
LAB_14172404d:
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141724280 FUN_141724280 body=449 status=ok
// SIG undefined FUN_141724280(void)

bool FUN_141724280(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  longlong *plVar18;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    uVar9 = param_2[8];
    uVar10 = param_2[9];
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x28);
    uVar13 = *(undefined8 *)(lVar1 + 0x30);
    uVar14 = *(undefined8 *)(lVar1 + 0x38);
    uVar15 = *(undefined8 *)(lVar1 + 0x40);
    uVar16 = *(undefined8 *)(lVar1 + 0x48);
    uVar17 = *(undefined8 *)(lVar1 + 0x58);
    param_2[8] = *(undefined8 *)(lVar1 + 0x50);
    param_2[9] = uVar17;
    param_2[6] = uVar15;
    param_2[7] = uVar16;
    param_2[4] = uVar13;
    param_2[5] = uVar14;
    param_2[2] = uVar11;
    param_2[3] = uVar12;
    *(undefined8 *)(lVar1 + 0x50) = uVar9;
    *(undefined8 *)(lVar1 + 0x58) = uVar10;
    *(undefined8 *)(lVar1 + 0x40) = uVar7;
    *(undefined8 *)(lVar1 + 0x48) = uVar8;
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    *(undefined8 *)(lVar1 + 0x38) = uVar6;
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    *(undefined8 *)(lVar1 + 0x28) = uVar4;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_a8 = 0;
    uStack_a0 = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_98 = *(longlong *)(lVar1 + 0x20);
    uStack_90 = *(undefined8 *)(lVar1 + 0x28);
    local_88 = *(longlong **)(lVar1 + 0x30);
    uStack_80 = *(undefined8 *)(lVar1 + 0x38);
    local_38 = *(longlong *)(lVar1 + 0x40);
    uStack_30 = *(undefined8 *)(lVar1 + 0x48);
    local_28 = *(undefined8 *)(lVar1 + 0x50);
    uStack_20 = *(undefined8 *)(lVar1 + 0x58);
    local_48 = local_88;
    uStack_40 = uStack_80;
    local_58 = local_98;
    uStack_50 = uStack_90;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    local_68 = local_28;
    uStack_60 = uStack_20;
    local_78 = local_38;
    uStack_70 = uStack_30;
    if (local_98 != 0) {
      plVar18 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar18 = &local_78;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        plVar18 = (longlong *)(lVar2 + 0x40);
        if (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) {
          plVar18 = *(longlong **)(lVar2 + 0x30);
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141724442 FUN_141724442 body=456 status=ok
// SIG undefined FUN_141724442(void)

void FUN_141724442(longlong *param_1)

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
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
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



// FUNCTION 14172460c FUN_14172460c body=29 status=ok
// SIG undefined FUN_14172460c(void)

undefined8 FUN_14172460c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172462a FUN_14172462a body=29 status=ok
// SIG undefined FUN_14172462a(void)

undefined8 FUN_14172462a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141724648 FUN_141724648 body=143 status=ok
// SIG undefined FUN_141724648(void)

void FUN_141724648(longlong param_1)

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
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1417246d8 FUN_1417246d8 body=230 status=ok
// SIG undefined FUN_1417246d8(void)

void FUN_1417246d8(longlong param_1,int param_2,int param_3)

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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1417247be FUN_1417247be body=29 status=ok
// SIG undefined FUN_1417247be(void)

undefined8 FUN_1417247be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417247dc FUN_1417247dc body=41 status=ok
// SIG undefined FUN_1417247dc(void)

void FUN_1417247dc(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1447a8aa0();
  return;
}



// FUNCTION 141724806 FUN_141724806 body=269 status=ok
// SIG undefined FUN_141724806(void)

void FUN_141724806(longlong param_1,int param_2)

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



// FUNCTION 141724914 FUN_141724914 body=457 status=ok
// SIG undefined FUN_141724914(void)

void FUN_141724914(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_140171ad2(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + uVar8 * 0x14 + -0x10);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -5;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 141724ade FUN_141724ade body=228 status=ok
// SIG undefined FUN_141724ade(void)

void FUN_141724ade(longlong param_1,int param_2,int param_3)

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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141724bc2 FUN_141724bc2 body=108 status=ok
// SIG undefined FUN_141724bc2(void)

void FUN_141724bc2(longlong *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_144893a1c(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447403be(param_1,iVar1);
      }
      *(undefined1 *)(*param_1 + (longlong)iVar1) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 141724c30 FUN_141724c30 body=122 status=ok
// SIG undefined FUN_141724c30(void)

void FUN_141724c30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141724cac FUN_141724cac body=206 status=ok
// SIG undefined FUN_141724cac(void)

void FUN_141724cac(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146c977cf(param_2,param_1 + 0x10);
  }
  else {
    FUN_1406781f6(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141724d7c FUN_141724d7c body=59 status=ok
// SIG undefined FUN_141724d7c(void)

undefined8 * FUN_141724d7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f45d00;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141724db8 FUN_141724db8 body=110 status=ok
// SIG undefined FUN_141724db8(void)

undefined8 * FUN_141724db8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f45dc0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141724e26 FUN_141724e26 body=42 status=ok
// SIG undefined FUN_141724e26(void)

undefined8 * FUN_141724e26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141724e50 FUN_141724e50 body=42 status=ok
// SIG undefined FUN_141724e50(void)

undefined8 * FUN_141724e50(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141724e7a FUN_141724e7a body=182 status=ok
// SIG undefined FUN_141724e7a(void)

longlong * FUN_141724e7a(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = 0;
  do {
    local_2c = (float)*(double *)(param_2 + lVar3 * 8);
    puVar2 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_2c);
      }
    }
    else {
      local_2c = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_2 + lVar3 * 8) = (double)local_2c;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141724f32 FUN_141724f32 body=38 status=ok
// SIG undefined FUN_141724f32(void)

undefined8 FUN_141724f32(undefined8 param_1,int param_2)

{
  FUN_14008cd08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141724f58 FUN_141724f58 body=218 status=ok
// SIG undefined FUN_141724f58(void)

void FUN_141724f58(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = param_1 + 0x30;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_140ca8596(lVar1,0);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (-2 < iVar4) {
    if (*(int *)(param_1 + 0x3c) < iVar4 / 2) {
      FUN_140ca8596(lVar1);
      iVar4 = *(int *)(param_1 + 0x18);
    }
    if (0 < iVar4) {
      lVar5 = 4;
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x10);
        if ((longlong)*(short *)(lVar3 + lVar5) != -0x8000) {
          sVar2 = *(short *)(lVar3 + -2 + lVar5);
          if ((sVar2 != -0x8000) &&
             (sVar2 < *(short *)(lVar3 + 2 + (longlong)*(short *)(lVar3 + lVar5) * 6))) {
            iVar4 = *(int *)(param_1 + 0x38);
            *(uint *)(param_1 + 0x38) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x3c) < iVar4 + 1U) {
              FUN_1405b572a(lVar1,iVar4);
            }
            *(short *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 2) = (short)lVar6;
            iVar4 = *(int *)(param_1 + 0x18);
          }
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 6;
      } while (lVar6 < iVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4 / 2);
}



// FUNCTION 141725034 FUN_141725034 body=73 status=ok
// SIG undefined FUN_141725034(void)

undefined8 * FUN_141725034(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f49700;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14172507e FUN_14172507e body=879 status=ok
// SIG undefined FUN_14172507e(void)

void FUN_14172507e(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar16 = 0;
    iVar4 = 0;
    iVar13 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar14 == uVar16) goto LAB_141725204;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar5[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar4 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar15 = 0xffffffff;
    do {
      plVar10 = *(longlong **)(*param_2 + (longlong)iVar4 * 0x10);
      local_78 = 0;
      uStack_70 = 0;
      lVar6 = (longlong)(int)plVar10[1] * 0x10;
      lVar12 = (longlong)*(int *)(*(longlong *)(*plVar10 + 0x1b8) + 8 + lVar6);
      if (lVar12 != 0) {
        local_88 = *(longlong **)(*(longlong *)(*plVar10 + 0x1b8) + lVar6);
        local_80 = local_88 + lVar12;
        do {
          local_90 = *local_88;
          if (*(longlong *)(local_90 + 8) != 0) {
            local_98 = (longlong *)(*(longlong *)(local_90 + 8) + 8);
            plVar7 = (longlong *)FUN_140a37a82();
            do {
              if (*plVar7 == *local_98) {
                if (local_90 != 0) {
                  if (*(longlong *)(local_90 + 8) == 0) {
                    *(undefined1 *)(local_90 + 0x118) = 1;
                  }
                  else if (*(longlong **)(local_90 + 0x108) == plVar10) {
                    *(undefined1 *)(local_90 + 0x118) = 1;
                    *(undefined8 *)(local_90 + 0x108) = 0;
                  }
                  else if (*(longlong **)(local_90 + 0x110) == plVar10) {
                    local_98 = (longlong *)(longlong)(int)uStack_70;
                    uVar11 = (int)uStack_70 + 1;
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar11);
                    if (uStack_70._4_4_ < uVar11) {
                      FUN_146ce5c6e(&local_78,local_98);
                    }
                    *(longlong *)(local_78 + (longlong)local_98 * 8) = local_90;
                  }
                }
                break;
              }
              local_98 = (longlong *)local_98[1];
            } while (local_98 != (longlong *)0x0);
          }
          local_88 = local_88 + 1;
        } while (local_88 != local_80);
        local_98 = (longlong *)local_78;
        lVar6 = (longlong)(int)uStack_70;
        if (lVar6 != 0) {
          plVar10 = (longlong *)0x0;
          do {
            local_88 = plVar10;
            FUN_146cb4d0c(*(undefined8 *)((longlong)local_98 + (longlong)plVar10),0);
            plVar10 = local_88 + 1;
          } while ((longlong *)(lVar6 * 8) != plVar10);
        }
        local_98 = (longlong *)local_78;
        if (local_78 != 0) {
          FUN_1400020a8(local_78);
        }
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)param_2[5];
      iVar4 = (int)uVar16;
      lVar6 = (longlong)iVar4;
      uVar11 = puVar5[lVar6] & uVar15;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar4) {
          iVar9 = iVar4;
        }
        if (iVar4 < iVar8) {
          lVar12 = 0;
          do {
            uVar11 = puVar5[lVar6 + lVar12 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1417251d5;
            }
            iVar13 = iVar13 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar6 != lVar12);
          uVar15 = 0xffffffff;
          iVar4 = iVar9;
        }
        uVar16 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1417251d5:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar14 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar4 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_141725204:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417253ee FUN_1417253ee body=75 status=ok
// SIG undefined FUN_1417253ee(void)

undefined8 * FUN_1417253ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f49700;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172543a FUN_14172543a body=48 status=ok
// SIG undefined FUN_14172543a(void)

undefined8
FUN_14172543a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_144916780(param_2,param_1,param_3,*(undefined8 *)(param_2 + 0x10),param_4,param_5);
  return param_1;
}



// FUNCTION 14172546a FUN_14172546a body=67 status=ok
// SIG undefined FUN_14172546a(void)

void FUN_14172546a(undefined8 param_1,float param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_144947d2c(local_18,&local_18,(double)param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417254ae FUN_1417254ae body=176 status=ok
// SIG undefined FUN_1417254ae(void)

void FUN_1417254ae(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)((longlong)(int)param_2 * 0xc + *(longlong *)(param_1 + 8));
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140aacb36((longlong *)(param_3 + 8),iVar2);
  }
  lVar1 = *(longlong *)(param_3 + 8);
  *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(puVar5 + 1);
  *(undefined8 *)(lVar1 + (longlong)iVar2 * 0xc) = *puVar5;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0xc),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 0xc),
            (longlong)iVar4 * 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 14172555e FUN_14172555e body=76 status=ok
// SIG undefined FUN_14172555e(void)

undefined8 * FUN_14172555e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f4c068;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417255aa FUN_1417255aa body=38 status=ok
// SIG undefined FUN_1417255aa(void)

undefined8 FUN_1417255aa(undefined8 param_1,int param_2)

{
  FUN_140062832();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417255d0 FUN_1417255d0 body=353 status=ok
// SIG undefined FUN_1417255d0(void)

void FUN_1417255d0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141725655;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_141725655:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 141725732 FUN_141725732 body=269 status=ok
// SIG undefined FUN_141725732(void)

void FUN_141725732(longlong param_1,int param_2)

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



// FUNCTION 141725840 FUN_141725840 body=29 status=ok
// SIG undefined FUN_141725840(void)

undefined8 FUN_141725840(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172585e FUN_14172585e body=29 status=ok
// SIG undefined FUN_14172585e(void)

undefined8 FUN_14172585e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172587c FUN_14172587c body=102 status=ok
// SIG undefined FUN_14172587c(void)

undefined8 FUN_14172587c(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b5d90(*param_2,param_1,&local_28,*(undefined8 *)(*param_2 + 8));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417258e4 FUN_1417258e4 body=601 status=ok
// SIG undefined FUN_1417258e4(void)

double * FUN_1417258e4(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_1404b5d90(*param_2,&local_88,&local_a0,*(undefined8 *)(*param_2 + 8));
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141725b3e FUN_141725b3e body=102 status=ok
// SIG undefined FUN_141725b3e(void)

undefined8 FUN_141725b3e(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b5d90(*param_2,param_1,&local_28,*(undefined8 *)(*param_2 + 8));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141725ba6 FUN_141725ba6 body=604 status=ok
// SIG undefined FUN_141725ba6(void)

double * FUN_141725ba6(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_144916780(*(undefined8 *)*param_2,&local_88,&local_a0,((undefined8 *)*param_2)[1]);
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141725e04 FUN_141725e04 body=102 status=ok
// SIG undefined FUN_141725e04(void)

undefined8 FUN_141725e04(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b5d90(*param_2,param_1,&local_28,*(undefined8 *)(*param_2 + 8));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141725e6c FUN_141725e6c body=608 status=ok
// SIG undefined FUN_141725e6c(void)

double * FUN_141725e6c(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_2 + 0x28),&local_88,&local_a0,
                ((longlong *)*param_2)[1]);
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417260ce FUN_1417260ce body=102 status=ok
// SIG undefined FUN_1417260ce(void)

undefined8 FUN_1417260ce(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b5d90(*param_2,param_1,&local_28,*(undefined8 *)(*param_2 + 8));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141726136 FUN_141726136 body=884 status=ok
// SIG undefined FUN_141726136(void)

double * FUN_141726136(double *param_1,longlong *param_2,double *param_3)

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
      goto LAB_141726355;
    }
  }
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_88 = 0.0;
LAB_141726355:
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



// FUNCTION 1417264ac FUN_1417264ac body=332 status=ok
// SIG undefined FUN_1417264ac(void)

double * FUN_1417264ac(double *param_1,longlong *param_2,double *param_3)

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



// FUNCTION 1417265f8 FUN_1417265f8 body=601 status=ok
// SIG undefined FUN_1417265f8(void)

double * FUN_1417265f8(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_1404b5d90(*param_2,&local_88,&local_a0,*(undefined8 *)(*param_2 + 8));
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141726852 FUN_141726852 body=332 status=ok
// SIG undefined FUN_141726852(void)

double * FUN_141726852(double *param_1,longlong *param_2,double *param_3)

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



// FUNCTION 14172699e FUN_14172699e body=604 status=ok
// SIG undefined FUN_14172699e(void)

double * FUN_14172699e(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_144916780(*(undefined8 *)*param_2,&local_88,&local_a0,((undefined8 *)*param_2)[1]);
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141726bfc FUN_141726bfc body=105 status=ok
// SIG undefined FUN_141726bfc(void)

undefined8 FUN_141726bfc(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)*param_2,param_1,&local_28,((undefined8 *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141726c66 FUN_141726c66 body=608 status=ok
// SIG undefined FUN_141726c66(void)

double * FUN_141726c66(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_2 + 0x28),&local_88,&local_a0,
                ((longlong *)*param_2)[1]);
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141726ec8 FUN_141726ec8 body=332 status=ok
// SIG undefined FUN_141726ec8(void)

double * FUN_141726ec8(double *param_1,longlong *param_2,double *param_3)

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



// FUNCTION 141727014 FUN_141727014 body=608 status=ok
// SIG undefined FUN_141727014(void)

double * FUN_141727014(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_2 + 0x28),&local_88,&local_a0,
                ((longlong *)*param_2)[1]);
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141727276 FUN_141727276 body=100 status=ok
// SIG undefined FUN_141727276(void)

undefined8 FUN_141727276(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1449cbc5a(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417272dc FUN_1417272dc body=100 status=ok
// SIG undefined FUN_1417272dc(void)

undefined8 FUN_1417272dc(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1449cbad8(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141727342 FUN_141727342 body=100 status=ok
// SIG undefined FUN_141727342(void)

undefined8 FUN_141727342(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1449c37f8(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417273a7 FUN_1417273a7 body=3089 status=ok
// SIG undefined FUN_1417273a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1417273a7(double *param_1,undefined8 param_2,longlong param_3,double *param_4,
                      undefined8 param_5,double *param_6,double *param_7,double *param_8,
                      double param_9,undefined8 param_10,undefined1 *param_11,double *param_12)

{
  undefined1 auVar1 [12];
  char cVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  double dVar14;
  double dVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  double dVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_318 [32];
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  float *local_2e8;
  float *local_2e0;
  float *local_2d8;
  undefined1 local_2d0;
  undefined8 *local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float local_18c;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  dVar35 = *param_4;
  dVar41 = param_4[1];
  dVar44 = param_4[2];
  dVar26 = param_4[3];
  dVar40 = *(double *)(param_3 + 0x20);
  dVar42 = *(double *)(param_3 + 0x28);
  dVar43 = *(double *)(param_3 + 0x30);
  dVar45 = 0.0;
  local_218 = dVar35;
  dStack_210 = dVar41;
  local_208 = dVar44;
  dStack_200 = dVar26;
  local_1f8 = dVar40;
  dStack_1f0 = dVar42;
  local_1e8 = dVar43;
  uStack_1e0 = 0;
  local_1d8 = 0x3ff0000000000000;
  uStack_1d0 = 0x3ff0000000000000;
  local_1c8 = 1.0;
  uStack_1c0 = 0;
  dVar27 = *param_7;
  dVar33 = param_7[1];
  dVar39 = param_7[2];
  dVar32 = param_7[3];
  dVar9 = param_6[4];
  dVar24 = param_6[5];
  dVar7 = param_6[6];
  local_278 = dVar27;
  dStack_270 = dVar33;
  local_268 = dVar39;
  uStack_260 = dVar32;
  local_258 = dVar9;
  dStack_250 = dVar24;
  local_248 = dVar7;
  uStack_240 = 0;
  local_238 = 1.0;
  dStack_230 = 1.0;
  local_228 = 0x3ff0000000000000;
  uStack_220 = 0;
  local_158 = ZEXT816(0);
  local_148 = 0.0;
  dStack_140 = 1.0;
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118._8_8_ = 0x3ff0000000000000;
  local_118._0_8_ = 0x3ff0000000000000;
  local_108 = 1.0;
  uStack_100 = 0;
  dVar14 = dVar39 * dVar39 + dVar27 * dVar27;
  dVar20 = dVar32 * dVar32 + dVar33 * dVar33;
  auVar10._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar14 + dVar20)));
  auVar10._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar14 + dVar20)));
  iVar3 = movmskpd(0xffffffff,auVar10);
  if (iVar3 == 0) {
    auVar10 = minpd(_DAT_149934d80,_DAT_149934d80);
    auVar15 = minpd(ZEXT816(0x3ff0000000000000),ZEXT816(0x3ff0000000000000));
    auVar11._8_8_ = -(ulonglong)(auVar10._8_8_ < 0.0);
    auVar11._0_8_ = -(ulonglong)(auVar10._0_8_ < 0.0);
    iVar3 = movmskpd(0,auVar11);
    auVar16._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
    auVar16._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
    uVar4 = movmskpd((int)param_1,auVar16);
    if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c8460b0) {
        FUN_144b3d300(&DAT_14c8460b0);
        if (DAT_14c8460b0 == -1) {
          DAT_14c8460a0 = 0x322bcc77322bcc77;
          DAT_14c8460a8 = 0x322bcc77322bcc77;
          _Init_thread_footer(&DAT_14c8460b0);
        }
      }
      dVar40 = dVar40 - dVar9;
      dVar42 = dVar42 - dVar24;
      dVar43 = dVar43 - dVar7;
      dVar20 = -dVar27;
      dVar21 = -dVar33;
      dVar39 = dVar39 * -1.0;
      dVar32 = dVar32 * 1.0;
      dVar7 = dVar42 * dVar20 - dVar40 * dVar21;
      dVar9 = dVar43 * dVar21 - dVar42 * dVar39;
      dVar24 = dVar40 * dVar39 - dVar43 * dVar20;
      dVar25 = dVar32 * 0.0 - dVar32 * 0.0;
      dVar9 = dVar9 + dVar9;
      dVar24 = dVar24 + dVar24;
      dVar7 = dVar7 + dVar7;
      dVar25 = dVar25 + dVar25;
      dVar14 = (double)(-(ulonglong)((float)DAT_14c8460a8 < 1.0) & 0x3ff0000000000000);
      dVar45 = dVar25 * dVar32;
      local_128 = ((dVar24 * dVar20 - dVar21 * dVar9) + dVar32 * dVar7 + dVar43) * dVar14;
      uVar4 = -(uint)((float)DAT_14c8460a0 < 1.0) & 0x3ff00000;
      auVar1._4_8_ = 0;
      auVar1._0_4_ = uVar4;
      local_118._0_12_ = auVar1 << 0x20;
      local_118._12_4_ = -(uint)(DAT_14c8460a0._4_4_ < 1.0) & 0x3ff00000;
      local_138 = ((dVar7 * dVar21 - dVar39 * dVar24) + dVar32 * dVar9 + dVar40) *
                  (double)((ulonglong)uVar4 << 0x20);
      dStack_130 = ((dVar9 * dVar39 - dVar7 * dVar20) + dVar32 * dVar24 + dVar42) * local_118._8_8_;
      pdVar5 = (double *)local_158;
      local_108 = dVar14 * 1.0;
      uStack_100 = 0;
      dStack_120 = ((dVar25 * dVar32 - dVar45) + dVar32 * dVar25 + 0.0) * 0.0;
      local_158._8_8_ =
           dVar35 * dVar39 * 1.0 + ((dVar41 * dVar32 - dVar27 * dVar44 * -1.0) - dVar26 * dVar33);
      local_158._0_8_ =
           dVar41 * dVar39 * -1.0 + ((dVar35 * dVar32 - dVar27 * dVar26 * 1.0) - dVar44 * dVar33);
      dVar43 = local_128;
      dVar7 = local_138;
      dVar40 = dStack_130;
      dVar42 = dVar26 * dVar39 * 1.0 + dVar33 * dVar35 + (dVar32 * dVar44 - dVar27 * dVar41 * 1.0);
      dVar39 = dVar44 * dVar39 * -1.0 + dVar33 * dVar41 + (dVar32 * dVar26 - dVar27 * dVar35 * -1.0)
      ;
    }
    else {
      pdVar5 = (double *)local_158;
      FUN_1402db8fa(pdVar5,&local_218,&local_278);
      dVar43 = local_128;
      dVar7 = local_138;
      dVar40 = dStack_130;
      dVar42 = local_148;
      dVar39 = dStack_140;
    }
  }
  else {
    pdVar5 = (double *)&DAT_14c846480;
    dVar43 = DAT_14c8464b0;
    dVar7 = DAT_14c8464a0;
    dVar40 = DAT_14c8464a8;
    dVar42 = DAT_14c846490;
    dVar39 = DAT_14c846498;
  }
  fVar22 = (float)*pdVar5;
  fVar23 = (float)pdVar5[1];
  dVar41 = *param_8;
  dVar44 = param_8[1];
  dVar26 = param_6[2] * -1.0;
  dVar27 = param_6[3] * 1.0;
  dVar32 = -*param_6;
  dVar33 = -param_6[1];
  dVar35 = dVar44 * dVar32 - dVar41 * dVar33;
  dVar9 = param_8[2] * dVar33 - dVar44 * dVar26;
  dVar24 = dVar41 * dVar26 - dVar32 * param_8[2];
  dVar9 = dVar9 + dVar9;
  dVar24 = dVar24 + dVar24;
  dVar35 = dVar35 + dVar35;
  dVar32 = dVar27 * dVar35 + param_8[2] + (dVar24 * dVar32 - dVar9 * dVar33);
  dVar41 = (dVar35 * dVar33 - dVar24 * dVar26) + dVar27 * dVar9 + dVar41;
  dVar35 = *param_6 * dVar35 + dVar26 * dVar9 + dVar27 * dVar24 + dVar44;
  fVar13 = (float)dVar42;
  fVar19 = (float)dVar39;
  local_168._0_4_ = (float)dVar7;
  local_168._4_4_ = (float)dVar40;
  local_168._8_4_ = (float)dVar43;
  local_168._12_4_ = 0;
  fVar6 = fVar22 * fVar22 + fVar23 * fVar23;
  fVar8 = fVar13 * fVar13 + fVar19 * fVar19;
  auVar12._0_4_ = fVar8 + fVar6;
  auVar12._4_4_ = fVar8 + fVar6;
  auVar12._8_4_ = fVar6 + fVar8;
  auVar12._12_4_ = fVar6 + fVar8;
  auVar15._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar15._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar15._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar15._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  auVar10 = sqrtps(auVar12,auVar12);
  auVar10 = divps(_DAT_1499314a0,auVar10);
  auVar17._0_4_ = auVar10._0_4_ * fVar22;
  auVar17._4_4_ = auVar10._4_4_ * fVar23;
  auVar17._8_4_ = auVar10._8_4_ * fVar13;
  auVar17._12_4_ = auVar10._12_4_ * fVar19;
  local_158 = blendvps(_DAT_149932320,auVar17,auVar15);
  uVar37 = 0;
  uVar38 = 0x3ff00000;
  local_2c8 = &local_178;
  local_188._0_4_ = (float)dVar41;
  local_188._4_4_ = (float)dVar35;
  local_178 = 0x3f800000;
  uStack_170 = 0;
  local_188._8_4_ = (float)dVar32;
  local_188._12_4_ = 0;
  local_2f8 = local_188;
  local_2e8 = &local_18c;
  local_18c = 0.0;
  local_2d8 = &local_1b8;
  local_2e0 = &local_1a8;
  local_2f0 = (undefined1 *)CONCAT44(local_2f0._4_4_,(float)param_9);
  local_2d0 = 1;
  cVar2 = FUN_1448541f8(param_5,param_2,local_158,local_168);
  fVar6 = local_18c;
  if (cVar2 != '\0') {
    dVar43 = (double)local_1b8;
    dVar7 = (double)fStack_1b0;
    dVar39 = (double)fStack_1b4;
    dVar44 = (double)fStack_1a0;
    local_2f8 = param_11;
    local_2f0 = local_158;
    local_2e8 = (float *)local_168;
    cVar2 = FUN_1408d1e72(dVar32 * dVar7 + dVar41 * dVar43 + dVar35 * dVar39);
    if (cVar2 != '\0') {
      if (0.0 < fVar6) {
        dVar40 = param_4[2];
        dVar42 = param_4[3];
        dVar32 = 1.0 - (double)local_158._0_8_;
        local_298 = param_4[6] * (double)local_158._0_8_ + *(double *)(param_3 + 0x30) * dVar32;
        dVar41 = param_4[5] * (double)local_158._0_8_ + *(double *)(param_3 + 0x28) * dVar32;
        dVar27 = param_4[4] * (double)local_158._0_8_ + *(double *)(param_3 + 0x20) * dVar32;
        uStack_290 = 0;
        uVar28 = *(undefined4 *)(param_7 + 2);
        uVar29 = *(undefined4 *)((longlong)param_7 + 0x14);
        uVar30 = *(undefined4 *)(param_7 + 3);
        uVar31 = *(undefined4 *)((longlong)param_7 + 0x1c);
        local_2a8 = param_7[6] * (double)local_158._0_8_ + param_6[6] * dVar32;
        dVar9 = param_7[5] * (double)local_158._0_8_ + param_6[5] * dVar32;
        dVar33 = (double)local_158._0_8_ * param_7[4] + dVar32 * param_6[4];
        uStack_2a0 = 0;
        dVar32 = (double)DAT_149934d80;
        dVar35 = DAT_149934d80._8_8_;
        dVar26 = 1.0;
        auVar18 = _DAT_149934d80;
      }
      else {
        param_4 = &local_218;
        local_298 = local_1e8;
        uStack_290 = uStack_1e0;
        auVar18._8_8_ = uStack_1d0;
        auVar18._0_8_ = local_1d8;
        param_7 = &local_278;
        local_2a8 = local_248;
        uStack_2a0 = uStack_240;
        dVar27 = local_1f8;
        dVar41 = dStack_1f0;
        uVar28 = (undefined4)local_268;
        uVar29 = local_268._4_4_;
        uVar30 = (undefined4)uStack_260;
        uVar31 = uStack_260._4_4_;
        uVar37 = (undefined4)local_228;
        uVar38 = local_228._4_4_;
        dVar32 = local_238;
        dVar35 = dStack_230;
        dVar33 = local_258;
        dVar9 = dStack_250;
        dVar40 = local_208;
        dVar42 = dStack_200;
        dVar26 = local_1c8;
      }
      dVar36 = dVar44 * (double)CONCAT44(uVar38,uVar37);
      dVar32 = dVar32 * (double)local_1a8;
      dVar35 = dVar35 * (double)fStack_1a4;
      dVar14 = *param_7;
      dVar20 = param_7[1];
      dVar25 = dVar35 * dVar14 - dVar32 * dVar20;
      dVar34 = dVar36 * dVar20 - dVar35 * (double)CONCAT44(uVar29,uVar28);
      dVar24 = dVar32 * (double)CONCAT44(uVar29,uVar28) - dVar14 * dVar36;
      dVar34 = dVar34 + dVar34;
      dVar24 = dVar24 + dVar24;
      dVar25 = dVar25 + dVar25;
      dVar21 = *param_4;
      dVar27 = ((dVar25 * dVar20 - dVar24 * (double)CONCAT44(uVar29,uVar28)) +
                (double)CONCAT44(uVar31,uVar30) * dVar34 + dVar32 + dVar33) - dVar27;
      dVar41 = (((double)CONCAT44(uVar29,uVar28) * dVar34 - dVar25 * dVar14) +
                (double)CONCAT44(uVar31,uVar30) * dVar24 + dVar35 + dVar9) - dVar41;
      dVar32 = ((double)CONCAT44(uVar31,uVar30) * dVar25 + dVar36 +
                (dVar24 * dVar14 - dVar34 * dVar20) + local_2a8) - local_298;
      dVar40 = dVar40 * -1.0;
      dVar42 = dVar42 * 1.0;
      dVar35 = -dVar21;
      dVar33 = -param_4[1];
      dVar24 = dVar27 * dVar40 - dVar35 * dVar32;
      dVar9 = dVar41 * dVar35 - dVar33 * dVar27;
      dVar14 = dVar32 * dVar33 - dVar40 * dVar41;
      dVar14 = dVar14 + dVar14;
      dVar24 = dVar24 + dVar24;
      dVar9 = dVar9 + dVar9;
      auVar10 = divpd(_DAT_149934d80,auVar18);
      *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar18._0_8_)) & auVar10._0_8_) *
                 ((dVar9 * dVar33 - dVar24 * dVar40) + dVar42 * dVar14 + dVar27);
      param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar18._8_8_)) & auVar10._8_8_)
                   * (dVar21 * dVar9 + dVar40 * dVar14 + dVar42 * dVar24 + dVar41);
      param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar26)) &
                           (ulonglong)(1.0 / dVar26)) *
                   (dVar42 * dVar9 + dVar32 + (dVar24 * dVar35 - dVar14 * dVar33));
      param_1[3] = (double)local_1a8;
      param_1[4] = (double)fStack_1a4;
      param_1[5] = dVar44;
      param_1[6] = dVar43;
      param_1[7] = dVar39;
      param_1[8] = dVar7;
      param_1[9] = (double)local_168._0_8_;
      *param_12 = (double)local_158._0_8_;
      local_2c0 = dVar39;
      local_2b8 = dVar7;
      local_2b0 = dVar43;
      local_288 = dVar44;
      dStack_280 = dVar45;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141727fba FUN_141727fba body=276 status=ok
// SIG undefined FUN_141727fba(void)

undefined8 * FUN_141727fba(void)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_140198ac2();
  if (cVar1 == '\x01') {
    puVar2 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
    *(undefined1 *)(puVar2 + 1) = 1;
    *(undefined2 *)((longlong)puVar2 + 10) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    puVar2[5] = 0;
    puVar2[6] = 0xffffffff;
    puVar2[7] = 0xffffffffffffffff;
    *puVar2 = &PTR_FUN_149f4e0d0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0x100000000;
  }
  else if (cVar1 == '\0') {
    puVar2 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined2 *)((longlong)puVar2 + 10) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
    puVar2[5] = 0;
    puVar2[6] = 0xffffffff;
    puVar2[7] = 0xffffffffffffffff;
    *puVar2 = &PTR_FUN_149f4e100;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x6c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar2 + 0x74) = 0;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0xd8,0x10);
    FUN_146d5bad8(puVar2);
  }
  return puVar2;
}



// FUNCTION 1417280ce FUN_1417280ce body=353 status=ok
// SIG undefined FUN_1417280ce(void)

void FUN_1417280ce(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141728155;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141728155:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141728230 FUN_141728230 body=269 status=ok
// SIG undefined FUN_141728230(void)

void FUN_141728230(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14172833e FUN_14172833e body=41 status=ok
// SIG undefined FUN_14172833e(void)

void FUN_14172833e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14475e67c();
  return;
}



// FUNCTION 141728368 FUN_141728368 body=111 status=ok
// SIG undefined FUN_141728368(void)

undefined8 * FUN_141728368(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f4f4b0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417283d7 FUN_1417283d7 body=501 status=ok
// SIG undefined FUN_1417283d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417283d7(undefined8 param_1,undefined8 param_2,double *param_3,double *param_4,
                  double param_5,double *param_6,double *param_7,double *param_8,undefined8 param_9,
                  undefined1 param_10,double *param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  float local_e0;
  float *local_d8;
  float *local_d0;
  float *local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar1 = (float)param_3[2];
  fVar3 = (float)param_3[3];
  fVar5 = (float)*param_3;
  fVar6 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar2 = fVar5 * fVar5 + fVar6 * fVar6;
  fVar4 = fVar1 * fVar1 + fVar3 * fVar3;
  auVar7._0_4_ = fVar4 + fVar2;
  auVar7._4_4_ = fVar4 + fVar2;
  auVar7._8_4_ = fVar2 + fVar4;
  auVar7._12_4_ = fVar2 + fVar4;
  auVar8 = sqrtps(auVar7,auVar7);
  auVar8 = divps(_DAT_1499314a0,auVar8);
  auVar9._0_4_ = auVar8._0_4_ * fVar5;
  auVar9._4_4_ = auVar8._4_4_ * fVar6;
  auVar9._8_4_ = auVar8._8_4_ * fVar1;
  auVar9._12_4_ = auVar8._12_4_ * fVar3;
  auVar8._4_4_ = -(uint)(1e-08 <= auVar7._4_4_);
  auVar8._0_4_ = -(uint)(1e-08 <= auVar7._0_4_);
  auVar8._8_4_ = -(uint)(1e-08 <= auVar7._8_4_);
  auVar8._12_4_ = -(uint)(1e-08 <= auVar7._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar9,auVar8);
  local_b8 = local_68;
  local_68._4_4_ = (float)param_11[1];
  local_68._0_4_ = (float)*param_11;
  local_68._8_4_ = (float)param_11[2];
  local_68._12_4_ = 0;
  local_e8 = local_78;
  local_78._4_4_ = (float)param_4[1];
  local_78._0_4_ = (float)*param_4;
  local_78._8_4_ = (float)param_4[2];
  local_78._12_4_ = 0;
  local_d8 = &local_7c;
  local_7c = 0.0;
  local_e0 = (float)param_5;
  local_c0 = param_10;
  local_c8 = &local_a8;
  local_d0 = &local_98;
  FUN_1448541f8();
  *param_6 = (double)local_7c;
  *param_8 = (double)local_a8;
  param_8[1] = (double)fStack_a4;
  param_8[2] = (double)fStack_a0;
  *param_7 = (double)local_98;
  param_7[1] = (double)fStack_94;
  param_7[2] = (double)fStack_90;
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417285ce FUN_1417285ce body=78 status=ok
// SIG undefined FUN_1417285ce(void)

longlong * FUN_1417285ce(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x90,0x10);
  FUN_14089889a(lVar1,param_1,param_3,0);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14172861c FUN_14172861c body=191 status=ok
// SIG undefined FUN_14172861c(void)

void FUN_14172861c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined8 local_98 [13];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
  }
  local_b0 = &local_2c;
  local_2c = 0;
  local_b8 = &local_30;
  local_30 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_a8 = param_4;
  (**(code **)(*param_2 + 0x128))(param_2,param_3,local_98,0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417286f6 FUN_1417286f6 body=106 status=ok
// SIG undefined FUN_1417286f6(void)

void FUN_1417286f6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14475e4ac((longlong *)(param_1 + 8));
    }
    memset((void *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 8)),0,
           (longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x10) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141728762 FUN_141728762 body=141 status=ok
// SIG undefined FUN_141728762(void)

void FUN_141728762(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_14475e4ac((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 4) =
       *(undefined4 *)(lVar1 + (longlong)(int)param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 4),
            (longlong)iVar4 << 2);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 1417287f0 FUN_1417287f0 body=159 status=ok
// SIG undefined FUN_1417287f0(void)

void FUN_1417287f0(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x10);
  iVar3 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar3 + 1U) {
    FUN_1400d13d6((longlong *)(param_3 + 8),iVar3);
  }
  uVar2 = puVar6[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar3 * 0x10);
  *puVar1 = *puVar6;
  puVar1[1] = uVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar3 - iVar4) * 0x10 + *(longlong *)(param_1 + 8)),
            (longlong)iVar4 << 4);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar3 + -1;
  return;
}



// FUNCTION 141728890 FUN_141728890 body=106 status=ok
// SIG undefined FUN_141728890(void)

void FUN_141728890(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_140619960((longlong *)(param_3 + 8),iVar1);
  }
  lVar3 = (longlong)param_2;
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar1 * 8) =
       *(undefined8 *)(lVar2 + lVar3 * 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  FUN_1400627cc(param_1 + 8,lVar3,1);
  return;
}



// FUNCTION 1417288fa FUN_1417288fa body=137 status=ok
// SIG undefined FUN_1417288fa(void)

undefined8 *
FUN_1417288fa(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x30))(DAT_14c8407a8,param_2,param_3,param_4,param_6);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = FAutoConsoleVariableRef::vftable;
  (**(code **)(*(longlong *)param_1[1] + 200))((longlong *)param_1[1],param_5);
  return param_1;
}



// FUNCTION 141728984 FUN_141728984 body=115 status=ok
// SIG undefined FUN_141728984(void)

void FUN_141728984(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_2 + 0x58);
  iVar4 = iVar2 + 1;
  plVar1 = (longlong *)(param_1 + 0x248);
  iVar3 = *(int *)(param_1 + 0x250);
  uVar5 = iVar4 - iVar3;
  if (uVar5 != 0 && iVar3 <= iVar4) {
    *(int *)(param_1 + 0x250) = iVar4;
    if ((uint)(*(int *)(param_1 + 0x254) - iVar3) < uVar5) {
      FUN_140fa4948(plVar1);
    }
    memset((void *)((longlong)iVar3 * 8 + *plVar1),0,(ulonglong)uVar5 << 3);
  }
  *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = param_2;
  return;
}



// FUNCTION 1417289f8 FUN_1417289f8 body=88 status=ok
// SIG undefined FUN_1417289f8(void)

undefined8 * FUN_1417289f8(undefined8 *param_1,int param_2)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141728a50 FUN_141728a50 body=165 status=ok
// SIG undefined FUN_141728a50(void)

void FUN_141728a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  int *param_5,int *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined1 auStack_78 [32];
  int *local_58;
  int *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_140ee380c();
  if (cVar1 != '\0') {
    local_34 = *param_6;
    local_38 = *param_5;
    local_50 = &local_34;
    local_58 = &local_38;
    local_48 = param_1;
    local_3c = param_4;
    (*(code *)*param_7)(param_7[1],&local_48,param_3);
  }
  *param_5 = *param_5 + 1;
  *param_6 = *param_6 + 1;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141728af6 FUN_141728af6 body=93 status=ok
// SIG undefined FUN_141728af6(void)

void FUN_141728af6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f539d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 141728b54 FUN_141728b54 body=211 status=ok
// SIG undefined FUN_141728b54(void)

void FUN_141728b54(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x30);
  iVar4 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar4 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar4 + 1U) {
    FUN_1400b4f0c((longlong *)(param_3 + 8),iVar4);
  }
  lVar2 = *(longlong *)(param_3 + 8);
  lVar6 = (longlong)iVar4 * 0x30;
  *(undefined8 *)(lVar2 + 0x10 + lVar6) = puVar8[2];
  uVar3 = puVar8[1];
  *(undefined8 *)(lVar2 + lVar6) = *puVar8;
  ((undefined8 *)(lVar2 + lVar6))[1] = uVar3;
  *(undefined8 *)(lVar2 + 0x28 + lVar6) = puVar8[5];
  uVar3 = puVar8[4];
  puVar1 = (undefined8 *)(lVar2 + 0x18 + lVar6);
  *puVar1 = puVar8[3];
  puVar1[1] = uVar3;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar7 = ~param_2 + iVar4;
  if (iVar7 != 0) {
    iVar5 = 1;
    if (iVar7 < 1) {
      iVar5 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar4 - iVar5) * 0x30 + *(longlong *)(param_1 + 8)),
            (longlong)iVar5 * 0x30);
    iVar4 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar4 + -1;
  return;
}



// FUNCTION 141728c34 FUN_141728c34 body=202 status=ok
// SIG undefined FUN_141728c34(void)

void FUN_141728c34(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x40);
  iVar10 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar10 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar10 + 1U) {
    FUN_140332e3e((longlong *)(param_3 + 8),iVar10);
  }
  lVar2 = *(longlong *)(param_3 + 8);
  lVar14 = (longlong)iVar10 * 0x40;
  uVar3 = *puVar13;
  uVar4 = puVar13[1];
  uVar5 = puVar13[2];
  uVar6 = puVar13[3];
  uVar7 = puVar13[4];
  uVar8 = puVar13[5];
  uVar9 = puVar13[7];
  puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar14);
  *puVar1 = puVar13[6];
  puVar1[1] = uVar9;
  puVar13 = (undefined8 *)(lVar2 + 0x20 + lVar14);
  *puVar13 = uVar7;
  puVar13[1] = uVar8;
  puVar13 = (undefined8 *)(lVar2 + 0x10 + lVar14);
  *puVar13 = uVar5;
  puVar13[1] = uVar6;
  *(undefined8 *)(lVar2 + lVar14) = uVar3;
  ((undefined8 *)(lVar2 + lVar14))[1] = uVar4;
  iVar10 = *(int *)(param_1 + 0x10);
  iVar12 = ~param_2 + iVar10;
  if (iVar12 != 0) {
    iVar11 = 1;
    if (iVar12 < 1) {
      iVar11 = iVar12;
    }
    memmove((void *)((longlong)(int)param_2 * 0x40 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar10 - iVar11) * 0x40 + *(longlong *)(param_1 + 8)),
            (longlong)iVar11 << 6);
    iVar10 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar10 + -1;
  return;
}



// FUNCTION 141728cfe FUN_141728cfe body=141 status=ok
// SIG undefined FUN_141728cfe(void)

void FUN_141728cfe(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_144941252((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 141728d8c FUN_141728d8c body=137 status=ok
// SIG undefined FUN_141728d8c(void)

void FUN_141728d8c(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140cd36ae((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2) =
       *(undefined1 *)(lVar1 + (int)param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar4) + *(longlong *)(param_1 + 8)),(longlong)iVar4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 141728e16 FUN_141728e16 body=104 status=ok
// SIG undefined FUN_141728e16(void)

void FUN_141728e16(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1446f48e2((longlong *)(param_1 + 8));
    }
    memset((void *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 8)),0,
           (longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x10) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141728e80 FUN_141728e80 body=137 status=ok
// SIG undefined FUN_141728e80(void)

void FUN_141728e80(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 4) =
       *(undefined4 *)(lVar1 + (longlong)(int)param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 4),
            (longlong)iVar4 << 2);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 141728f0a FUN_141728f0a body=137 status=ok
// SIG undefined FUN_141728f0a(void)

void FUN_141728f0a(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140543018((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 4) =
       *(undefined4 *)(lVar1 + (longlong)(int)param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 4),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 4),
            (longlong)iVar4 << 2);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 141728f94 FUN_141728f94 body=138 status=ok
// SIG undefined FUN_141728f94(void)

void FUN_141728f94(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_14075ce18((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 14172901e FUN_14172901e body=138 status=ok
// SIG undefined FUN_14172901e(void)

void FUN_14172901e(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140310156((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined2 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 2) =
       *(undefined2 *)(lVar1 + (longlong)(int)param_2 * 2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 2),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 2),(longlong)iVar4 * 2
           );
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 1417290a8 FUN_1417290a8 body=138 status=ok
// SIG undefined FUN_1417290a8(void)

void FUN_1417290a8(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140479b38((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 141729132 FUN_141729132 body=1051 status=ok
// SIG undefined FUN_141729132(void)

void FUN_141729132(longlong param_1,double *param_2,undefined8 param_3,ulonglong param_4,
                  int *param_5,undefined4 *param_6,undefined8 *param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auStack_1e8 [32];
  int *local_1c8;
  undefined4 *local_1c0;
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  float local_1a0 [3];
  float local_194 [3];
  longlong local_188;
  undefined8 uStack_180;
  undefined8 *local_170;
  undefined8 local_168;
  longlong local_160;
  char local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined8 local_88;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  *param_5 = *param_5 + 1;
  plVar5 = *(longlong **)(param_1 + 0x60);
  if ((plVar5 == (longlong *)0x0) || ((DAT_14c75f1a4 & 1) == 0)) {
    if (0 < *(int *)(param_1 + 0x28)) {
      uVar14 = 0;
      do {
        uVar9 = uVar14;
        if ((int)param_4 != -1) {
          uVar9 = param_4;
        }
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x20) + uVar14 * 8);
        local_1b8 = param_7;
        local_1c0 = param_6;
        local_1c8 = param_5;
        (**(code **)(*plVar5 + 0x128))(plVar5,param_2,param_3,uVar9 & 0xffffffff);
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < (longlong)*(int *)(param_1 + 0x28));
    }
  }
  else {
    local_1a0[2] = (float)param_2[2];
    local_1a0[1] = (float)param_2[1];
    local_1a0[0] = (float)*param_2;
    local_194[2] = (float)param_2[5];
    local_194[1] = (float)param_2[4];
    local_194[0] = (float)param_2[3];
    if ((int)plVar5[5] != 0) {
      local_e0 = local_148;
      local_e8 = FUN_140036a08;
      lVar11 = FUN_144a773aa(&local_e8,&DAT_14c7585d0);
      local_170 = (undefined8 *)(lVar11 + 0x10);
      local_168 = *(undefined8 *)(lVar11 + 0x10);
      local_160 = *(longlong *)(lVar11 + 0x20);
      local_158 = '\0';
      local_150 = *(undefined8 *)(lVar11 + 0x28);
      *(undefined8 ***)(lVar11 + 0x28) = &local_170;
      *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
      local_188 = 0;
      uStack_180 = 0;
      iVar13 = (int)plVar5[6];
      if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar13);
      }
      if (iVar13 != 0) {
        FUN_14595390e(&local_188);
      }
      iVar13 = 0;
      do {
        while( true ) {
          uVar14 = uStack_180;
          lVar15 = (longlong)iVar13 * 0x28 + plVar5[4];
          lVar11 = -3;
          do {
            fVar2 = *(float *)(lVar15 + 0xc + lVar11 * 4);
            pfVar1 = (float *)((longlong)&local_188 + lVar11 * 4);
            if ((*pfVar1 <= fVar2 && fVar2 != *pfVar1) ||
               (pfVar1 = (float *)(lVar15 + 0x18 + lVar11 * 4),
               *pfVar1 <= local_194[lVar11] && local_194[lVar11] != *pfVar1)) goto LAB_1417294c2;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0);
          iVar13 = *(int *)(lVar15 + 0x20);
          if (iVar13 == -1) break;
          lVar11 = (longlong)(int)uStack_180;
          uVar10 = (int)uStack_180 + 1;
          uStack_180 = CONCAT44(uStack_180._4_4_,uVar10);
          if (uStack_180._4_4_ < uVar10) {
            FUN_14015d11a(&local_188,uVar14 & 0xffffffff);
          }
          *(undefined4 *)(local_188 + lVar11 * 4) = *(undefined4 *)(lVar15 + 0x24);
        }
        lVar11 = (longlong)*(int *)(lVar15 + 0x18);
        if (*(int *)(lVar15 + 0x18) < *(int *)(lVar15 + 0x1c)) {
          do {
            lVar6 = *plVar5;
            lVar12 = (longlong)*(int *)(plVar5[2] + lVar11 * 4);
            local_1b0 = *(undefined4 *)(lVar6 + 0x40 + lVar12 * 0x48);
            local_1ac = *(undefined4 *)(lVar6 + 0x34 + lVar12 * 0x48);
            local_1a8 = *(undefined8 *)(lVar6 + 0x38 + lVar12 * 0x48);
            iVar13 = *param_5;
            local_118 = (double)*(float *)(lVar6 + 0x18 + lVar12 * 0x48);
            dVar7 = (double)*(float *)(lVar6 + 0x14 + lVar12 * 0x48);
            fVar2 = *(float *)(lVar6 + 0x10 + lVar12 * 0x48);
            dVar8 = (double)*(float *)(lVar6 + 0xc + lVar12 * 0x48);
            fVar3 = *(float *)(lVar6 + 8 + lVar12 * 0x48);
            dVar16 = (double)*(float *)(lVar6 + 4 + lVar12 * 0x48);
            fVar4 = *(float *)(lVar6 + lVar12 * 0x48);
            *param_5 = iVar13 + 1;
            local_148._8_4_ = SUB84(dVar16,0);
            local_148._0_8_ = (double)fVar4;
            local_148._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
            local_138._8_4_ = SUB84(dVar8,0);
            local_138._0_8_ = (double)fVar3;
            local_138._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            local_128._8_4_ = SUB84(dVar7,0);
            local_128._0_8_ = (double)fVar2;
            local_128._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            uStack_110 = 0;
            local_108 = 0x3ff0000000000000;
            uStack_100 = 0x3ff0000000000000;
            local_f8 = 0x3ff0000000000000;
            uStack_f0 = 0;
            FUN_1447dc19e(local_148,&local_e8,param_3);
            local_74 = local_1b0;
            local_7c = local_1ac;
            local_88 = local_1a8;
            local_1c0 = &local_74;
            local_1c8 = &local_78;
            local_78 = iVar13;
            (*(code *)*param_7)(param_7[1],&local_88,&local_e8,&local_7c);
            lVar11 = lVar11 + 1;
          } while (lVar11 < *(int *)(lVar15 + 0x1c));
        }
LAB_1417294c2:
        if ((longlong)(int)uStack_180 == 0) goto LAB_1417294e0;
        iVar13 = *(int *)(local_188 + -4 + (longlong)(int)uStack_180 * 4);
        uStack_180 = CONCAT44(uStack_180._4_4_,(int)uStack_180 + -1);
      } while( true );
    }
  }
LAB_1417291ea:
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1417294e0:
  if (local_158 == '\0') {
    local_158 = '\x01';
    *(int *)(local_170 + 4) = *(int *)(local_170 + 4) + -1;
    if (local_160 != local_170[2]) {
      FUN_14004673c();
    }
    *local_170 = local_168;
    local_170[3] = local_150;
  }
  goto LAB_1417291ea;
}



// FUNCTION 141729550 FUN_141729550 body=301 status=ok
// SIG undefined FUN_141729550(void)

longlong * FUN_141729550(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_140836c88(&local_58);
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar5 + lVar6);
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_60,param_3);
        uVar3 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_140619960(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar7 * 8) = local_60;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  lVar5 = FUN_14001cc68(0x70,0x10);
  FUN_14014f414(lVar5,&local_58);
  *param_2 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  FUN_144756766(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172967e FUN_14172967e body=779 status=ok
// SIG undefined FUN_14172967e(void)

longlong * FUN_14172967e(longlong param_1,longlong *param_2,double *param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  float local_a0 [3];
  float local_94 [3];
  longlong local_88;
  undefined8 uStack_80;
  code *local_70;
  longlong *local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *(longlong *)(param_1 + 0x60);
  if ((lVar3 == 0) || ((DAT_14c75f1a4 & 1) == 0)) {
    if ((longlong *)(param_1 + 0x70) != param_2) {
      iVar10 = *(int *)(param_1 + 0x78);
      _Src = *(void **)(param_1 + 0x70);
      *(int *)(param_2 + 1) = iVar10;
      if ((longlong)iVar10 != 0) {
        FUN_140509e62(param_2,iVar10,0);
        memcpy((void *)*param_2,_Src,(longlong)iVar10 << 3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
    }
  }
  else {
    local_a0[2] = (float)param_3[2];
    local_a0[1] = (float)param_3[1];
    local_a0[0] = (float)*param_3;
    local_94[2] = (float)param_3[5];
    local_94[1] = (float)param_3[4];
    local_94[0] = (float)param_3[3];
    if (*(int *)(lVar3 + 0x28) != 0) {
      local_68 = &local_88;
      local_70 = FUN_140036a08;
      lVar7 = FUN_144a773aa(&local_70,&DAT_14c7585d0);
      local_70 = (code *)(lVar7 + 0x10);
      local_68 = *(longlong **)(lVar7 + 0x10);
      local_60 = *(longlong *)(lVar7 + 0x20);
      local_58 = '\0';
      local_50 = *(undefined8 *)(lVar7 + 0x28);
      *(code ***)(lVar7 + 0x28) = &local_70;
      *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
      local_88 = 0;
      uStack_80 = 0;
      iVar10 = *(int *)(lVar3 + 0x30);
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if (iVar10 != 0) {
        FUN_14595390e(&local_88);
      }
      iVar10 = 0;
      do {
        while( true ) {
          uVar5 = uStack_80;
          lVar7 = (longlong)iVar10;
          lVar11 = lVar7 * 0x28 + *(longlong *)(lVar3 + 0x20);
          lVar9 = -3;
          do {
            fVar2 = *(float *)(lVar11 + 0xc + lVar9 * 4);
            pfVar1 = (float *)((longlong)&local_88 + lVar9 * 4);
            if ((*pfVar1 <= fVar2 && fVar2 != *pfVar1) ||
               (pfVar1 = (float *)(lVar11 + 0x18 + lVar9 * 4),
               *pfVar1 <= local_94[lVar9] && local_94[lVar9] != *pfVar1)) goto LAB_14172987a;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0);
          iVar10 = *(int *)(lVar11 + 0x20);
          if (iVar10 == -1) break;
          lVar7 = (longlong)(int)uStack_80;
          uVar6 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
          if (uStack_80._4_4_ < uVar6) {
            FUN_14015d11a(&local_88,uVar5 & 0xffffffff);
          }
          *(undefined4 *)(local_88 + lVar7 * 4) = *(undefined4 *)(lVar11 + 0x24);
        }
        plVar4 = *(longlong **)(param_1 + 0x60);
        lVar9 = plVar4[4];
        if (*(int *)(lVar9 + 0x20 + lVar7 * 0x28) == -1) {
          iVar10 = *(int *)(lVar9 + 0x18 + lVar7 * 0x28);
          lVar11 = (longlong)iVar10;
          iVar8 = *(int *)(lVar9 + 0x1c + lVar7 * 0x28);
          if (iVar10 < iVar8) {
            local_a8 = lVar9 + lVar7 * 0x28;
            do {
              iVar10 = *(int *)(*plVar4 + 0x40 + (longlong)*(int *)(plVar4[2] + lVar11 * 4) * 0x48);
              if ((-1 < (longlong)iVar10) && (iVar10 < *(int *)(param_1 + 0x78))) {
                lVar7 = *(longlong *)(param_1 + 0x70);
                iVar8 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                  FUN_1406b7a4a(param_2,iVar8);
                }
                *(undefined8 *)(*param_2 + (longlong)iVar8 * 8) =
                     *(undefined8 *)(lVar7 + (longlong)iVar10 * 8);
                iVar8 = *(int *)(local_a8 + 0x1c);
              }
              lVar11 = lVar11 + 1;
            } while (lVar11 < iVar8);
          }
        }
LAB_14172987a:
        if ((longlong)(int)uStack_80 == 0) goto LAB_141729916;
        iVar10 = *(int *)(local_88 + -4 + (longlong)(int)uStack_80 * 4);
        uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + -1);
      } while( true );
    }
  }
LAB_141729955:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_141729916:
  if (local_58 == '\0') {
    local_58 = '\x01';
    *(int *)(local_70 + 0x20) = *(int *)(local_70 + 0x20) + -1;
    if (local_60 != *(longlong *)(local_70 + 0x10)) {
      FUN_14004673c();
    }
    *(longlong **)local_70 = local_68;
    *(undefined8 *)(local_70 + 0x18) = local_50;
  }
  goto LAB_141729955;
}



// FUNCTION 1417299a6 FUN_1417299a6 body=42 status=ok
// SIG undefined FUN_1417299a6(void)

undefined8 * FUN_1417299a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417299d0 FUN_1417299d0 body=225 status=ok
// SIG undefined FUN_1417299d0(void)

double * FUN_1417299d0(longlong param_1,double *param_2,undefined8 param_3,undefined4 param_4)

{
  double dVar1;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140490318(*(undefined8 *)(param_1 + 0x88),&local_38,param_4);
  local_28 = local_28 * *(double *)(param_1 + 0x48);
  local_30 = local_30 * *(double *)(param_1 + 0x40);
  local_38 = local_38 * *(double *)(param_1 + 0x38);
  dVar1 = local_28 * local_28 + local_38 * local_38 + local_30 * local_30;
  if (2.2250738585072014e-308 <= dVar1) {
    dVar1 = SQRT(dVar1);
    *param_2 = local_38 / dVar1;
    param_2[1] = local_30 / dVar1;
    param_2[2] = local_28 / dVar1;
    if ((dVar1 != 0.0) || (NAN(dVar1))) goto LAB_141729a78;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 1.0;
LAB_141729a78:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141729ab2 FUN_141729ab2 body=76 status=ok
// SIG undefined FUN_141729ab2(void)

undefined8 * FUN_141729ab2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f55a98;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141729b08 FUN_141729b08 body=29 status=ok
// SIG undefined FUN_141729b08(void)

undefined8 FUN_141729b08(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140490318(*(undefined8 *)(param_1 + 0x28),param_2,param_4);
  return param_2;
}



// FUNCTION 141729b26 FUN_141729b26 body=320 status=ok
// SIG undefined FUN_141729b26(void)

void FUN_141729b26(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141729b8f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141729b8f:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 141729c66 FUN_141729c66 body=265 status=ok
// SIG undefined FUN_141729c66(void)

longlong FUN_141729c66(longlong param_1)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_50;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14076cd6b();
  FUN_14076d8a0(&local_78,param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar3 = *(double *)(param_1 + 0x38);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar5 = *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x30);
  dVar7 = *(double *)(param_1 + 0x40);
  dVar8 = *(double *)(param_1 + 0x40);
  *(double *)(param_1 + 0x30) =
       dStack_70 * dVar7 * -1.0 + local_68 * dVar3 + dVar5 * dStack_60 * 1.0 + dVar1 * local_78;
  *(double *)(param_1 + 0x38) =
       local_78 * dVar8 * 1.0 + dStack_60 * dVar4 + dVar6 * local_68 * -1.0 + dVar2 * dStack_70;
  *(double *)(param_1 + 0x40) =
       dStack_60 * dVar7 * 1.0 + ((dVar5 * dStack_70 * 1.0 + dVar1 * local_68) - dVar3 * local_78);
  *(double *)(param_1 + 0x48) =
       local_68 * dVar8 * -1.0 + ((dVar6 * local_78 * -1.0 + dVar2 * dStack_60) - dVar4 * dStack_70)
  ;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141729d70 FUN_141729d70 body=69 status=ok
// SIG undefined FUN_141729d70(void)

void FUN_141729d70(longlong param_1)

{
  longlong lVar1;
  
  if (((((*(byte *)(param_1 + 0x94) & 0x10) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x50), lVar1 != 0)) && (*(char *)(lVar1 + 0x1c) == '\x05'))
     && ((*(byte *)(lVar1 + 0x6c) & 1) == 0)) {
    *(byte *)(lVar1 + 0x6c) = *(byte *)(lVar1 + 0x6c) | 1;
    FUN_1401183f6(lVar1);
    FUN_14011842e(lVar1);
    return;
  }
  return;
}



// FUNCTION 141729db6 FUN_141729db6 body=209 status=ok
// SIG undefined FUN_141729db6(void)

void FUN_141729db6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) == (int)param_2[1]) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140393c76(&local_38,*(int *)(param_1 + 0x10),1);
    if (0 < (int)param_2[1]) {
      lVar1 = 0;
      do {
        *(undefined1 *)(local_38 + *(int *)(*param_2 + lVar1 * 4)) =
             *(undefined1 *)(*(longlong *)(param_1 + 8) + lVar1);
        lVar1 = lVar1 + 1;
      } while (lVar1 < (int)param_2[1]);
    }
    if ((longlong *)(param_1 + 8) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_38;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0x14) = uStack_30._4_4_;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141729e88 FUN_141729e88 body=109 status=ok
// SIG undefined FUN_141729e88(void)

longlong FUN_141729e88(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar2 = param_1 * 4;
    lVar1 = FUN_14001cc68(lVar2 + (ulonglong)(lVar2 == 0),0x10);
    if (lVar2 == 0 || lVar1 != 0) {
      return lVar1;
    }
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  return 0;
}



// FUNCTION 141729ef6 FUN_141729ef6 body=141 status=ok
// SIG undefined FUN_141729ef6(void)

void FUN_141729ef6(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[1] == param_2) goto LAB_141729f4f;
  FUN_1400020a8(*param_1);
  if ((longlong)param_2 < 1) {
LAB_141729f7f:
    lVar2 = 0;
  }
  else {
    if (param_2 >> 0x3e != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar1 = param_2 * 4;
    lVar2 = FUN_14001cc68(lVar1 + (ulonglong)(lVar1 == 0),0x10);
    if (lVar1 != 0 && lVar2 == 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      goto LAB_141729f7f;
    }
  }
  *param_1 = lVar2;
LAB_141729f4f:
  param_1[1] = param_2;
  return;
}



// FUNCTION 141729f83 FUN_141729f83 body=109 status=ok
// SIG undefined FUN_141729f83(void)

longlong FUN_141729f83(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    if (param_1 >> 0x3e != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar2 = param_1 * 4;
    lVar1 = FUN_14001cc68(lVar2 + (ulonglong)(lVar2 == 0),0x10);
    if (lVar2 == 0 || lVar1 != 0) {
      return lVar1;
    }
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  return 0;
}



// FUNCTION 141729ff0 FUN_141729ff0 body=102 status=ok
// SIG undefined FUN_141729ff0(void)

void FUN_141729ff0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1447808da((longlong *)(param_1 + 8));
    }
    memset((void *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 8)),0,
           (longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x10) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14172a058 FUN_14172a058 body=203 status=ok
// SIG undefined FUN_14172a058(void)

undefined8 * FUN_14172a058(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    *(undefined4 *)(puVar2 + 1) = param_3;
    *puVar2 = &PTR_FUN_149f4f4b0;
    puVar2[2] = param_1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0x3f800000;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
  }
  else if (iVar1 == 1) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xb90,0x10);
    FUN_146d6dace(puVar2,param_1,param_3);
  }
  else if (iVar1 == 2) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_146d697de(puVar2,param_1,param_3);
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 14172a124 FUN_14172a124 body=430 status=ok
// SIG undefined FUN_14172a124(void)

void FUN_14172a124(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      FUN_1447eb164(param_1 + 0x28,*(undefined8 *)(*param_2 + (longlong)iVar4 * 0x10));
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)param_2[5];
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar10 = puVar5[lVar12] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar11 = 0;
          do {
            uVar10 = puVar5[lVar12 + lVar11 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar11 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14172a249;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar12 != lVar11);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_14172a249:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}


