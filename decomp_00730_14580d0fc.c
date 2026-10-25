// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14580d0fc FUN_14580d0fc body=335 status=ok
// SIG undefined FUN_14580d0fc(void)

void FUN_14580d0fc(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 14580d24c FUN_14580d24c body=156 status=ok
// SIG undefined FUN_14580d24c(void)

void FUN_14580d24c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_141125c4a();
  *(undefined8 *)(param_1 + 0x1930) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1938);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1938) = 0;
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
  *(undefined8 *)(param_1 + 0x1940) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1948);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1948) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014580d2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14580d2e8 FUN_14580d2e8 body=188 status=ok
// SIG undefined FUN_14580d2e8(void)

void FUN_14580d2e8(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (*(char *)(lVar3 + 0x15a) == '\0') {
    lVar4 = FUN_141169abc(param_1);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(lVar4 + 0x928);
      *(int *)(lVar3 + 0x1a8) = *(int *)(lVar3 + 0x1a8) + 1;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580d3a6 FUN_14580d3a6 body=62 status=ok
// SIG undefined FUN_14580d3a6(void)

void FUN_14580d3a6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14580d3e4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14580d3e4 FUN_14580d3e4 body=89 status=ok
// SIG undefined FUN_14580d3e4(void)

ulonglong FUN_14580d3e4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 14580d440 FUN_14580d440 body=10 status=ok
// SIG undefined FUN_14580d440(void)

void FUN_14580d440(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014580d446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  return;
}



// FUNCTION 14580d4a2 FUN_14580d4a2 body=2922 status=ok
// SIG undefined FUN_14580d4a2(void)

longlong * FUN_14580d4a2(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x30))(param_1,&local_58);
  if (local_58 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_14580d68e;
  }
  uVar9 = param_3[3];
  plVar6 = (longlong *)param_3[4];
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(local_58 + 0x58) = uVar9;
    plVar11 = *(longlong **)(local_58 + 0x60);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(local_58 + 0x60) = 0;
LAB_14580dae0:
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
      if (plVar6 != (longlong *)0x0) goto LAB_14580d522;
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(undefined8 *)(local_58 + 0x58) = uVar9;
    plVar11 = *(longlong **)(local_58 + 0x60);
    if (plVar6 == plVar11) {
      LOCK();
      plVar11 = plVar6 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    else {
      *(longlong **)(local_58 + 0x60) = plVar6;
      if (plVar11 != (longlong *)0x0) goto LAB_14580dae0;
    }
LAB_14580d522:
    LOCK();
    plVar11 = plVar6 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  *(undefined8 *)(local_58 + 0x68) = *(undefined8 *)(param_3[1] + 0xa8);
  FUN_14485c47a(local_58 + 0x80,param_3[1]);
  plVar6 = (longlong *)FUN_14112c5dc(param_3[1]);
  if (plVar6 != (longlong *)0x0) {
    FUN_14485c47a(local_58 + 0x70,plVar6);
    lVar7 = FUN_14479d2ce(local_58 + 0x70);
    if (*(char *)(lVar7 + 0x178) == '\x03') {
      lVar7 = param_1[0x1a];
      if (lVar7 == 0) {
        lVar8 = FUN_1403ca43f();
        lVar7 = *(longlong *)(lVar8 + 0x38);
        plVar11 = *(longlong **)(lVar8 + 0x40);
        if (plVar11 == (longlong *)0x0) {
          if (lVar7 != 0) goto LAB_14580df10;
          plVar11 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
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
          if (lVar7 != 0) goto LAB_14580d711;
        }
      }
      else {
        plVar11 = (longlong *)param_1[0x1b];
        if (plVar11 == (longlong *)0x0) {
LAB_14580df10:
          local_88 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
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
LAB_14580d711:
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          local_88 = plVar11;
        }
        plVar11 = local_88;
        local_90 = lVar7;
        FUN_14112c5bc(&local_80,*param_3,&local_90);
        FUN_140f360c6(lVar7,&local_68,&local_80);
        plVar2 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_70 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        plVar2 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_88 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        plVar2 = local_50;
        if (local_68 == 0) {
          local_68 = 0;
        }
        else {
          local_80 = local_58;
          local_78 = local_50;
          if (local_50 == (longlong *)0x0) {
            FUN_14580e138(local_68 + 0x18,&local_80);
          }
          else {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            FUN_14580e138(local_68 + 0x18);
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
          }
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(local_58 + 0x90);
        *(longlong *)(local_58 + 0x88) = local_68;
        *(longlong **)(local_58 + 0x90) = local_60;
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
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_60 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
      }
      plVar2 = (longlong *)*param_3;
      local_68 = local_58;
      local_60 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
      local_98 = param_2;
      uVar12 = FUN_14580e25c(&local_80,&local_68);
      lVar7 = param_1[0x21];
      if (lVar7 == 0) {
        uVar9 = FUN_14110242a();
        lVar7 = FUN_14477b664(uVar9);
        param_1[0x21] = lVar7;
        uVar12 = extraout_XMM0_Da_00;
      }
      plVar4 = param_1 + 0x20;
      lVar8 = param_1[0x22];
      if (lVar8 == 0) {
        if ((lVar7 != 0) && (*plVar4 != 0)) {
          plVar3 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
            param_1[0x22] = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar8 = FUN_144aff482(uVar9,plVar4);
            param_1[0x22] = lVar8;
            if (lVar8 != 0) {
              lVar7 = param_1[0x21];
              uVar12 = extraout_XMM0_Da;
              goto LAB_14580d8d0;
            }
          }
        }
        lVar10 = FUN_1403ca43f();
        lVar7 = *(longlong *)(lVar10 + 0x28);
        if (lVar7 == 0) {
          uVar9 = FUN_14110242a();
          lVar7 = FUN_14477b664(uVar9);
          *(longlong *)(lVar10 + 0x28) = lVar7;
        }
        lVar8 = *(longlong *)(lVar10 + 0x30);
        if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*(longlong *)(lVar10 + 0x20) != 0)) {
          plVar4 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
            lVar8 = 0;
          }
          else {
            uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar8 = FUN_144aff482(uVar9,(longlong *)(lVar10 + 0x20));
          }
          *(longlong *)(lVar10 + 0x30) = lVar8;
        }
      }
      else {
LAB_14580d8d0:
        if (lVar7 == 0) {
          uVar9 = FUN_14110242a(uVar12,lVar8);
          lVar7 = FUN_14477b664(uVar9);
          param_1[0x21] = lVar7;
          lVar8 = param_1[0x22];
          if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar4 != 0)) {
            plVar3 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
              lVar8 = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar8 = FUN_144aff482(uVar9,plVar4);
            }
            param_1[0x22] = lVar8;
          }
        }
      }
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar8,&local_80);
      FUN_1449db362(&local_80);
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      param_2 = local_98;
      if (plVar11 != (longlong *)0x0) {
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
    }
    lVar7 = (**(code **)(*plVar6 + 0x5d8))(plVar6);
    if (lVar7 != 0) {
      lVar8 = FUN_144a5dd5e();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        lVar8 = FUN_1402a1246(lVar7);
        if (lVar8 != 0) {
          local_68 = local_58;
          local_60 = local_50;
          if (local_50 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            plVar6 = local_50;
          }
          FUN_14580e00e(&local_80,&local_68);
          FUN_14112c702(lVar8 + 0x1338,&local_90,&local_80);
          FUN_1449db362(&local_80);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar6 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
        FUN_14485c47a(local_58 + 0x78,lVar7);
      }
    }
  }
  if ((param_1[0x2c] != 0) && (cVar5 = (**(code **)(*(longlong *)*param_3 + 0x50))(), cVar5 != '\0')
     ) {
    lVar7 = param_1[0x2c];
    plVar6 = (longlong *)param_1[0x2d];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar6 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    local_90 = lVar7;
    local_88 = plVar6;
    FUN_14112c5bc(&local_80,*param_3);
    FUN_140f360c6(lVar7,&local_68,&local_80);
    plVar6 = local_60;
    if ((longlong *)(local_58 + 0xf8) != &local_68) {
      *(longlong *)(local_58 + 0xf8) = local_68;
      local_68 = 0;
      plVar11 = *(longlong **)(local_58 + 0x100);
      if (local_60 != plVar11) {
        local_60 = (longlong *)0x0;
        *(longlong **)(local_58 + 0x100) = plVar6;
        if (plVar11 != (longlong *)0x0) {
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
        }
      }
    }
    plVar6 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_60 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_70 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    plVar6 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_88 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_88)(local_88);
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
  if ((param_1[0x1d] != 0) && (cVar5 = (**(code **)(*(longlong *)*param_3 + 0x50))(), cVar5 != '\0')
     ) {
    lVar7 = param_1[0x1d];
    plVar6 = (longlong *)param_1[0x1e];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar6 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    local_90 = lVar7;
    local_88 = plVar6;
    FUN_14112c5bc(&local_80,*param_3);
    FUN_140f360c6(lVar7,&local_68,&local_80);
    plVar6 = local_60;
    if ((longlong *)(local_58 + 0x108) != &local_68) {
      *(longlong *)(local_58 + 0x108) = local_68;
      local_68 = 0;
      plVar11 = *(longlong **)(local_58 + 0x110);
      if (local_60 != plVar11) {
        local_60 = (longlong *)0x0;
        *(longlong **)(local_58 + 0x110) = plVar6;
        if (plVar11 != (longlong *)0x0) {
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
        }
      }
    }
    plVar6 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_60 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_70 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    plVar6 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_88 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_88)(local_88);
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
  *param_2 = local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
LAB_14580d68e:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14580e00e FUN_14580e00e body=298 status=ok
// SIG undefined FUN_14580e00e(void)

longlong * FUN_14580e00e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_14b982300;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99abf0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_14102a47e;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b982300;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99abf0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_14102a47e;
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
  return param_1;
}



// FUNCTION 14580e138 FUN_14580e138 body=292 status=ok
// SIG undefined FUN_14580e138(void)

void FUN_14580e138(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99aaf0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = &LAB_141085746;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99aaf0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_141085746;
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
                    /* WARNING: Could not recover jumptable at 0x00014580e247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14580e25c FUN_14580e25c body=298 status=ok
// SIG undefined FUN_14580e25c(void)

longlong * FUN_14580e25c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99ab80;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = FUN_14589fde8;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b99ab80;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14589fde8;
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
  return param_1;
}



// FUNCTION 14580e386 FUN_14580e386 body=294 status=ok
// SIG undefined FUN_14580e386(void)

longlong * FUN_14580e386(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_1[0x2c6] == 0) && (cVar3 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar3 == '\0'))
      && (cVar3 = FUN_140769252(param_1), cVar3 == '\0')) && (param_1[0x2c7] == 0)) {
    FUN_14112d730(param_1,param_2);
    if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1447a68a4(param_1,&local_58);
  *param_2 = 0;
  param_2[1] = 0;
  if (-1 < (int)uStack_50) {
    if ((uStack_50 & 0xffffffff) != 0) {
      FUN_1402191ca(param_2);
      lVar2 = local_58;
      lVar4 = (longlong)(int)uStack_50;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar5 = lVar5 + 0x28;
        } while (lVar4 * 0x28 != lVar5);
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uStack_50 & 0xffffffff);
}



// FUNCTION 14580e4b4 FUN_14580e4b4 body=42 status=ok
// SIG undefined FUN_14580e4b4(void)

void FUN_14580e4b4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14112d98e(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014580e4c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_14112dae6();
  FUN_14115bf34(uVar2);
  return;
}



// FUNCTION 14580e4de FUN_14580e4de body=21 status=ok
// SIG undefined FUN_14580e4de(void)

void FUN_14580e4de(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14112dae6();
  FUN_14115bf34(uVar1);
  return;
}



// FUNCTION 14580e4f4 FUN_14580e4f4 body=59 status=ok
// SIG undefined FUN_14580e4f4(void)

void FUN_14580e4f4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_14720284e(param_1);
  }
  FUN_14112dd96(param_1 + 0x30);
  FUN_144a686e6(param_1 + 0x10,0);
  return;
}



// FUNCTION 14580e530 FUN_14580e530 body=46 status=ok
// SIG undefined FUN_14580e530(void)

void FUN_14580e530(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xa90))(param_1,&DAT_100000001);
  FUN_14112e454(param_1,param_2);
  return;
}



// FUNCTION 14580e55e FUN_14580e55e body=124 status=ok
// SIG undefined FUN_14580e55e(void)

longlong * FUN_14580e55e(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x238,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b5dc740;
  FUN_14112f132(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 14580e5da FUN_14580e5da body=91 status=ok
// SIG undefined FUN_14580e5da(void)

void FUN_14580e5da(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x370);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x368) + lVar3 * 8) + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x370);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  FUN_144a7958c(param_1,param_2);
  return;
}



// FUNCTION 14580e635 FUN_14580e635 body=90 status=ok
// SIG undefined FUN_14580e635(void)

void FUN_14580e635(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14580e690 FUN_14580e690 body=98 status=ok
// SIG undefined FUN_14580e690(void)

void FUN_14580e690(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14580e6fa FUN_14580e6fa body=91 status=ok
// SIG undefined FUN_14580e6fa(void)

undefined8 * FUN_14580e6fa(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140265f12();
  param_1[3] = &DAT_14cb83310;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = &PTR_FUN_14b1828b0;
  FUN_140265f12();
  param_1[7] = &DAT_14cb83310;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = &PTR_FUN_14b1828b0;
  *(undefined2 *)(param_1 + 10) = 0x101;
  return param_1;
}



// FUNCTION 14580e755 FUN_14580e755 body=35 status=ok
// SIG undefined FUN_14580e755(void)

void FUN_14580e755(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14580e778(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bd6dfa0;
  return;
}



// FUNCTION 14580e778 FUN_14580e778 body=32 status=ok
// SIG undefined FUN_14580e778(void)

undefined8 * FUN_14580e778(undefined8 *param_1)

{
  FUN_14580e798();
  *param_1 = &PTR_FUN_14bdc8b40;
  return param_1;
}



// FUNCTION 14580e798 FUN_14580e798 body=32 status=ok
// SIG undefined FUN_14580e798(void)

undefined8 * FUN_14580e798(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aedbc50;
  return param_1;
}



// FUNCTION 14580e7be FUN_14580e7be body=57 status=ok
// SIG undefined FUN_14580e7be(void)

void FUN_14580e7be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5af18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5af18 = FUN_140002ddd(FUN_1464cd4cf,uVar1,L"GbxBrainAspect_UseUsable");
  }
  return;
}



// FUNCTION 14580e7fe FUN_14580e7fe body=57 status=ok
// SIG undefined FUN_14580e7fe(void)

void FUN_14580e7fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb616b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb616b8 = FUN_140002ddd(FUN_1464f38c9,uVar1,L"GbxMusicAudioProvider");
  }
  return;
}



// FUNCTION 14580e838 FUN_14580e838 body=68 status=ok
// SIG undefined FUN_14580e838(void)

void FUN_14580e838(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148838654();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144748838(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14580e8ec FUN_14580e8ec body=29 status=ok
// SIG undefined FUN_14580e8ec(void)

void FUN_14580e8ec(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14580e90a FUN_14580e90a body=54 status=ok
// SIG undefined FUN_14580e90a(void)

undefined8 * FUN_14580e90a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c5470;
  FUN_14580e940(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580e940 FUN_14580e940 body=63 status=ok
// SIG undefined FUN_14580e940(void)

void FUN_14580e940(longlong *param_1)

{
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14580e980 FUN_14580e980 body=52 status=ok
// SIG undefined FUN_14580e980(void)

void FUN_14580e980(longlong param_1)

{
  FUN_14580e9b4(param_1 + 0x50);
  FUN_14580e9b4(param_1 + 0x20);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14580e9b4 FUN_14580e9b4 body=62 status=ok
// SIG undefined FUN_14580e9b4(void)

void FUN_14580e9b4(longlong *param_1)

{
  FUN_14117915e();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14580e9f2 FUN_14580e9f2 body=340 status=ok
// SIG undefined FUN_14580e9f2(void)

undefined8 *
FUN_14580e9f2(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar3 = FUN_14155b406();
    lVar6 = FUN_14477b664(uVar3);
    param_3[1] = lVar6;
  }
  lVar4 = param_3[2];
  if (((lVar4 == 0) && (lVar4 = 0, lVar6 != 0)) && (*param_3 != 0)) {
    plVar5 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
      lVar4 = FUN_144aff482(uVar3,param_3);
    }
    param_3[2] = lVar4;
  }
  if ((longlong)*(int *)(param_1 + 0x180) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x178);
    lVar6 = (longlong)*(int *)(param_1 + 0x180) << 4;
    do {
      lVar2 = (**(code **)(*(longlong *)*plVar5 + 8))();
      if (lVar2 == lVar4) {
        if (plVar5 != (longlong *)0x0) {
          lVar6 = *plVar5;
          local_40 = 0;
          local_38 = 0;
          FUN_14112f88e(&local_40,param_4);
          FUN_14112fa36(lVar6 + 0x18,param_2,&local_40);
          FUN_1449db362(&local_40);
          goto LAB_14580eaa8;
        }
        break;
      }
      plVar5 = plVar5 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  *param_2 = 0;
LAB_14580eaa8:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14580eb50 FUN_14580eb50 body=284 status=ok
// SIG undefined FUN_14580eb50(void)

undefined8 * FUN_14580eb50(undefined8 *param_1)

{
  char cVar1;
  
  memset(param_1,0,0x198);
  FUN_140c2310e(param_1);
  *param_1 = &PTR_FUN_14b60bc60;
  FUN_140440628(param_1 + 0x33,&DAT_14cbcabb4,0);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14112fbd2(param_1 + 0x3c);
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined2 *)(param_1 + 0x8e) = 4;
  *(undefined4 *)(param_1 + 0x8b) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x8f) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x90) = cVar1;
  param_1[0x91] = 0;
  *(undefined2 *)(param_1 + 0x95) = 4;
  *(undefined4 *)(param_1 + 0x92) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x96) = 3;
  *(char *)(param_1 + 0x97) = cVar1;
  param_1[0x98] = 0;
  *(undefined2 *)(param_1 + 0x9c) = 4;
  *(undefined4 *)(param_1 + 0x99) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x9d) = 3;
  *(char *)(param_1 + 0x9e) = cVar1;
  param_1[0x9f] = 0;
  *(undefined2 *)(param_1 + 0xa3) = 4;
  *(undefined4 *)(param_1 + 0xa0) = 0x42c80000;
  *(undefined1 *)(param_1 + 0xa4) = 3;
  *(char *)(param_1 + 0xa5) = cVar1;
  *(undefined4 *)(param_1 + 0xa6) = 0x10001;
  *(undefined1 *)((longlong)param_1 + 0x534) = 0;
  return param_1;
}



// FUNCTION 14580ec7a FUN_14580ec7a body=284 status=ok
// SIG undefined FUN_14580ec7a(void)

undefined4 *
FUN_14580ec7a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14580eed4(param_1,local_58);
  FUN_14580ee20(param_4,local_50);
  *(undefined4 *)(local_50 + 0x78) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_14580ed98(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 0x7c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x78) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14113065a(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580ed98 FUN_14580ed98 body=136 status=ok
// SIG undefined FUN_14580ed98(void)

void FUN_14580ed98(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar3 = FUN_1411305fa();
    if (iVar3 != -1) {
      lVar1 = *param_1;
      FUN_1414b56fa((longlong)iVar3 * 0x80 + lVar1 + 0x10);
      memmove((void *)(lVar1 + (longlong)iVar3 * 0x80),param_3,0x78);
      FUN_14885001c(param_1,*param_4);
      *param_4 = iVar3;
      uVar2 = 1;
      goto LAB_14580edcc;
    }
  }
  uVar2 = 0;
LAB_14580edcc:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 14580ee20 FUN_14580ee20 body=178 status=ok
// SIG undefined FUN_14580ee20(void)

undefined8 * FUN_14580ee20(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_48 = 0x8000000000;
  local_40 = 0xffffffff;
  local_20 = 0;
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_2 = *puVar1;
  param_2[2] = 0;
  local_80 = 0;
  param_2[3] = 0;
  local_78 = 0;
  FUN_140295b12(param_2 + 4,&local_70);
  *(undefined1 *)(param_2 + 0xe) = (undefined1)local_20;
  FUN_1414b56fa(&local_80);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580eed4 FUN_14580eed4 body=239 status=ok
// SIG undefined FUN_14580eed4(void)

int * FUN_14580eed4(longlong *param_1,int *param_2)

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
      FUN_140eca382(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x80) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x80 + *param_1;
  return param_2;
}



// FUNCTION 14580efc4 FUN_14580efc4 body=12 status=ok
// SIG undefined FUN_14580efc4(void)

void FUN_14580efc4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014580efcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14580efd0 FUN_14580efd0 body=31 status=ok
// SIG undefined FUN_14580efd0(void)

undefined8 FUN_14580efd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580effe FUN_14580effe body=40 status=ok
// SIG undefined FUN_14580effe(void)

undefined8 FUN_14580effe(undefined8 param_1,int param_2)

{
  FUN_1458260f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580f026 FUN_14580f026 body=100 status=ok
// SIG undefined FUN_14580f026(void)

ulonglong FUN_14580f026(longlong param_1,undefined8 param_2)

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
LAB_14580f06d:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14580f06d;
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
      (**(code **)(param_1 + 0x28))(lVar4,param_2,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 14580f0c2 FUN_14580f0c2 body=128 status=ok
// SIG undefined FUN_14580f0c2(void)

void FUN_14580f0c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f9f120;
  if (param_1[1] != 0) {
    FUN_1411316ac();
    if (param_1[1] != 0) {
      FUN_14480f766(&DAT_14c99a488);
    }
  }
  if (param_1[2] != 0) {
    FUN_141131722();
    if (param_1[2] != 0) {
      FUN_14480f766(&DAT_14c99a4a8);
    }
  }
  if (param_1[3] != 0) {
    FUN_14580f142();
    if (param_1[3] != 0) {
      FUN_14480f766(&DAT_14c99a4c8);
      return;
    }
  }
  return;
}



// FUNCTION 14580f142 FUN_14580f142 body=115 status=ok
// SIG undefined FUN_14580f142(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14580f142(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99a4e0) {
    FUN_144b3d300(&DAT_14c99a4e0);
    if (DAT_14c99a4e0 == -1) {
      DAT_14c99a4c8 = 0;
      _DAT_14c99a4d0 = 0;
      _DAT_14c99a4d8 = 2;
      atexit(FUN_142aa2b2d);
      _Init_thread_footer(&DAT_14c99a4e0);
    }
  }
  return &DAT_14c99a4c8;
}



// FUNCTION 14580f1b6 FUN_14580f1b6 body=230 status=ok
// SIG undefined FUN_14580f1b6(void)

void FUN_14580f1b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1400bac10(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_144a56d22(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 2;
    do {
      FUN_144984904(param_1,local_34,lVar4,0);
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14481578e(param_2,0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580f29e FUN_14580f29e body=42 status=ok
// SIG undefined FUN_14580f29e(void)

void FUN_14580f29e(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14485c47a(param_1 + 0x10);
    FUN_14580f2c8(param_1);
    return;
  }
  return;
}



// FUNCTION 14580f2c8 FUN_14580f2c8 body=548 status=ok
// SIG undefined FUN_14580f2c8(void)

undefined8 FUN_14580f2c8(longlong param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 unaff_RBP;
  undefined7 uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = param_1 + 0x10;
  local_58 = param_1;
  lVar4 = FUN_14479d2ce(lVar8);
  plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x398) + 0x18))(lVar4 + 0x398);
  if (plVar5[3] != 0) {
    cVar2 = FUN_144729dda(plVar5 + 2);
    if (cVar2 != '\0') {
      lVar4 = FUN_14479d2ce(lVar8);
      if (lVar4 != 0) {
        uVar6 = FUN_14593f4b0();
        lVar4 = FUN_144718840(lVar4,uVar6);
        if (lVar4 != 0) {
          local_50 = DAT_14cbe7058;
          local_48 = CONCAT44(local_48._4_4_,0xffffffff);
          cVar2 = FUN_144a7a548(plVar5);
          lVar11 = *plVar5;
          if (((cVar2 == '\0') || (lVar7 = (longlong)(int)local_48 * 0x88 + lVar11, lVar7 == 0)) ||
             (0 < *(int *)(lVar7 + 0x80))) {
            local_50 = DAT_14cbe7060;
            local_48 = CONCAT44(local_48._4_4_,0xffffffff);
            bVar3 = FUN_144a7a548(plVar5,&local_50);
            lVar11 = lVar11 + (longlong)(int)local_48 * 0x88;
            uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
            uVar9 = (undefined4)CONCAT71(uVar10,1);
            if ((lVar11 != 0 & bVar3) == 1) {
              uVar9 = (undefined4)CONCAT71(uVar10,*(int *)(lVar11 + 0x80) < 1);
            }
          }
          else {
            uVar9 = 0;
          }
          uVar6 = FUN_14479d2ce(lVar8);
          lVar8 = FUN_14497e828(uVar6);
          if (lVar8 != 0) {
            lVar8 = FUN_140fb8258(lVar8);
            if (lVar8 != 0) {
              FUN_140fb83f4(lVar8,lVar4,uVar9);
              FUN_140fb913a(lVar8,lVar4,0);
            }
            if (((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
               (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8))) {
              FUN_1401cb356();
              local_50 = *(undefined8 *)(param_1 + 0x18);
              local_48 = *(longlong *)(param_1 + 0x20);
              if (local_48 != 0) {
                LOCK();
                *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
                UNLOCK();
              }
              FUN_140d61352(&local_50);
              plVar5 = *(longlong **)(param_1 + 0x20);
              *(undefined8 *)(param_1 + 0x18) = 0;
              *(undefined8 *)(param_1 + 0x20) = 0;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))();
                }
              }
            }
            uVar6 = 0;
            goto LAB_14580f3f8;
          }
        }
      }
    }
  }
  FUN_144343d88(&local_58);
  uVar6 = 1;
LAB_14580f3f8:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580f4f4 FUN_14580f4f4 body=422 status=ok
// SIG undefined FUN_14580f4f4(void)

void FUN_14580f4f4(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 14580f69c FUN_14580f69c body=40 status=ok
// SIG undefined FUN_14580f69c(void)

undefined8 FUN_14580f69c(undefined8 param_1,int param_2)

{
  FUN_14580f6c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14580f6c4 FUN_14580f6c4 body=203 status=ok
// SIG undefined FUN_14580f6c4(void)

void FUN_14580f6c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a562480;
  param_1[5] = &PTR_FUN_14a562a90;
  param_1[6] = &PTR_LAB_14a562ad0;
  if (param_1[0x1a7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a3] != 0) {
    FUN_1400020a8();
  }
  FUN_14580f78f(param_1[0x1a1],*(undefined4 *)(param_1 + 0x1a2));
  if (param_1[0x1a1] != 0) {
    FUN_1400020a8();
  }
  FUN_14580f7ba(param_1[0x19f],*(undefined4 *)(param_1 + 0x1a0));
  if (param_1[0x19f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x193] != 0) {
    FUN_1400020a8();
  }
  FUN_1411346b4(param_1);
  return;
}



// FUNCTION 14580f78f FUN_14580f78f body=43 status=ok
// SIG undefined FUN_14580f78f(void)

void FUN_14580f78f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 14580f7ba FUN_14580f7ba body=43 status=ok
// SIG undefined FUN_14580f7ba(void)

void FUN_14580f7ba(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 14580f7f0 FUN_14580f7f0 body=437 status=ok
// SIG undefined FUN_14580f7f0(void)

void FUN_14580f7f0(longlong param_1)

{
  FUN_14580f9f9(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x198));
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  FUN_14580f9a5(*(undefined8 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x180));
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  FUN_14580f9a5(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_14580f9a5(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_14580fa3a(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_14580f9d0(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14580f9d0(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_14580f9d0(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14580fa70(param_1);
  return;
}



// FUNCTION 14580f9a5 FUN_14580f9a5 body=43 status=ok
// SIG undefined FUN_14580f9a5(void)

void FUN_14580f9a5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14116e718(param_1);
    param_1 = param_1 + 0x150;
  }
  return;
}



// FUNCTION 14580f9d0 FUN_14580f9d0 body=41 status=ok
// SIG undefined FUN_14580f9d0(void)

void FUN_14580f9d0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141134746(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 14580f9f9 FUN_14580f9f9 body=65 status=ok
// SIG undefined FUN_14580f9f9(void)

void FUN_14580f9f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14580fa3a FUN_14580fa3a body=53 status=ok
// SIG undefined FUN_14580fa3a(void)

void FUN_14580fa3a(longlong *param_1)

{
  FUN_14580faa6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14580fa70 FUN_14580fa70 body=53 status=ok
// SIG undefined FUN_14580fa70(void)

void FUN_14580fa70(longlong *param_1)

{
  FUN_14580fdd8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14580faa6 FUN_14580faa6 body=371 status=ok
// SIG undefined FUN_14580faa6(void)

void FUN_14580faa6(longlong *param_1)

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
      FUN_14580fc1a(lVar2 + lVar3 + 8);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14580fc1a FUN_14580fc1a body=55 status=ok
// SIG undefined FUN_14580fc1a(void)

void FUN_14580fc1a(longlong *param_1)

{
  FUN_14580fc52(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14580fc52 FUN_14580fc52 body=388 status=ok
// SIG undefined FUN_14580fc52(void)

void FUN_14580fc52(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_1411347f0(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
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
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14580fdd8 FUN_14580fdd8 body=375 status=ok
// SIG undefined FUN_14580fdd8(void)

void FUN_14580fdd8(longlong *param_1)

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
      FUN_14598a7f6(lVar2 + lVar3 + 8);
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



// FUNCTION 14580ff50 FUN_14580ff50 body=103 status=ok
// SIG undefined FUN_14580ff50(void)

ulonglong FUN_14580ff50(longlong param_1)

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
LAB_14580ff9a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14580ff9a;
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



// FUNCTION 14580ffca FUN_14580ffca body=57 status=ok
// SIG undefined FUN_14580ffca(void)

void FUN_14580ffca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23808 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23808 = FUN_140002ddd(FUN_14643f68a,uVar1,L"GpsTest_Ticket");
  }
  return;
}



// FUNCTION 14581000a FUN_14581000a body=57 status=ok
// SIG undefined FUN_14581000a(void)

void FUN_14581000a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c98 = FUN_140002ddd(FUN_1465ac0b9,uVar1,L"GbxBrainAspect_Cloak");
  }
  return;
}



// FUNCTION 14581004a FUN_14581004a body=57 status=ok
// SIG undefined FUN_14581004a(void)

void FUN_14581004a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ea0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ea0 = FUN_140002ddd(FUN_1465bba1c,uVar1,L"GpsTest_CanRevive");
  }
  return;
}



// FUNCTION 145810092 FUN_145810092 body=59 status=ok
// SIG undefined FUN_145810092(void)

undefined8 * FUN_145810092(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1458100ce FUN_1458100ce body=40 status=ok
// SIG undefined FUN_1458100ce(void)

undefined8 FUN_1458100ce(undefined8 param_1,int param_2)

{
  FUN_141136054();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458100f6 FUN_1458100f6 body=7 status=ok
// SIG undefined FUN_1458100f6(void)

longlong FUN_1458100f6(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return param_1;
}



// FUNCTION 1458100fe FUN_1458100fe body=31 status=ok
// SIG undefined FUN_1458100fe(void)

longlong FUN_1458100fe(longlong param_1)

{
  FUN_14485c47a(*(longlong *)(param_1 + 8) + 0xc0);
  return param_1;
}



// FUNCTION 14581011e FUN_14581011e body=31 status=ok
// SIG undefined FUN_14581011e(void)

longlong FUN_14581011e(longlong param_1)

{
  FUN_14485c47a(*(longlong *)(param_1 + 8) + 0xd0);
  return param_1;
}



// FUNCTION 14581013e FUN_14581013e body=15 status=ok
// SIG undefined FUN_14581013e(void)

void FUN_14581013e(undefined8 param_1)

{
  FUN_14113bbde(&DAT_14c966da0,param_1);
  return;
}



// FUNCTION 14581014e FUN_14581014e body=45 status=ok
// SIG undefined FUN_14581014e(void)

undefined8 FUN_14581014e(undefined8 param_1,int param_2)

{
  FUN_14581017c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14581017c FUN_14581017c body=110 status=ok
// SIG undefined FUN_14581017c(void)

void FUN_14581017c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2332c0;
  FUN_145810393(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1458101ea(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458101ea FUN_1458101ea body=41 status=ok
// SIG undefined FUN_1458101ea(void)

void FUN_1458101ea(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145810214(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 145810214 FUN_145810214 body=69 status=ok
// SIG undefined FUN_145810214(void)

void FUN_145810214(longlong param_1)

{
  FUN_145810259(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145810306(param_1 + 0x48);
  FUN_1458102a2(param_1 + 0x18);
  return;
}



// FUNCTION 145810259 FUN_145810259 body=73 status=ok
// SIG undefined FUN_145810259(void)

void FUN_145810259(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458102a2 FUN_1458102a2 body=100 status=ok
// SIG undefined FUN_1458102a2(void)

void FUN_1458102a2(longlong *param_1)

{
  FUN_14113d141(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14113d141(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14113d141(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145810306 FUN_145810306 body=141 status=ok
// SIG undefined FUN_145810306(void)

void FUN_145810306(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x000145810351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145810393 FUN_145810393 body=58 status=ok
// SIG undefined FUN_145810393(void)

void FUN_145810393(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_1458103cd(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458103cd FUN_1458103cd body=73 status=ok
// SIG undefined FUN_1458103cd(void)

void FUN_1458103cd(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145810416 FUN_145810416 body=88 status=ok
// SIG undefined FUN_145810416(void)

void FUN_145810416(longlong param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14113d18c();
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 0x620) = local_28.Data1;
  *(undefined4 *)(param_1 + 0x624) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x628) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x62c) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145810486 FUN_145810486 body=65 status=ok
// SIG undefined FUN_145810486(void)

void FUN_145810486(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((*(int *)(param_1 + 0xb18) != 0) && (*(int *)(param_1 + 0xb1c) != 0)) &&
     (*(int *)(param_1 + 0xb18) != DAT_14c948000)) {
    uVar1 = FUN_1458104c8(param_1 + 0xb18,0);
  }
  FUN_14125aa0e(param_1,uVar1);
  return;
}



// FUNCTION 1458104c8 FUN_1458104c8 body=22 status=ok
// SIG undefined FUN_1458104c8(void)

undefined8 FUN_1458104c8(int *param_1)

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
  
  plVar4 = DAT_14cb75d80;
  if (DAT_14cb75d80 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb75d80 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb75d80 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb75d80[0x3a] <= *(int *)((longlong)DAT_14cb75d80 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb75d80 + 0x300))(DAT_14cb75d80);
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



// FUNCTION 1458104de FUN_1458104de body=114 status=ok
// SIG undefined FUN_1458104de(void)

undefined8 FUN_1458104de(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1458105f8(*(longlong *)(param_3 + 0x40) + 0x2c0,local_50,param_1);
  FUN_14082207e(param_2,local_50,0);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145810552 FUN_145810552 body=165 status=ok
// SIG undefined FUN_145810552(void)

void FUN_145810552(longlong param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1447f69b6(param_1 + 0x18);
  puVar2 = &local_40;
  local_28 = 4;
  local_40 = 1;
  local_20 = 1;
  FUN_14113e5d4(param_1,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_28) {
      puVar2 = (undefined4 *)CONCAT44(uStack_3c,local_40);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458105f8 FUN_1458105f8 body=236 status=ok
// SIG undefined FUN_1458105f8(void)

ulonglong * FUN_1458105f8(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if ((plVar2 != (longlong *)0x0) && ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34))) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar5 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar2[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)plVar2[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*plVar2 + (longlong)iVar4 * 0x48);
        if (*puVar1 == param_3) {
          if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
            param_2[2] = 0;
            param_2[3] = 0;
            *(undefined4 *)(param_2 + 4) = 0;
            param_2[5] = 0;
            param_2[6] = 0;
            *param_2 = puVar1[1];
            *(int *)(param_2 + 1) = (int)puVar1[2];
            FUN_1447715ec(param_2 + 2,puVar1 + 3);
            return param_2;
          }
          break;
        }
        iVar4 = (int)puVar1[8];
      } while (iVar4 != -1);
    }
  }
  *(undefined2 *)param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return param_2;
}



// FUNCTION 1458106e4 FUN_1458106e4 body=238 status=ok
// SIG undefined FUN_1458106e4(void)

longlong * FUN_1458106e4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b41d650;
  plVar1 = plVar4 + 2;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 2;
  plVar4[0xe] = 0;
  plVar4[0xf] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b3a48e0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1458107d6(&local_30,plVar1);
  plVar3 = local_28;
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
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
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



// FUNCTION 1458107d6 FUN_1458107d6 body=157 status=ok
// SIG undefined FUN_1458107d6(void)

void FUN_1458107d6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145810810;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145810810;
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
LAB_145810810:
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
                    /* WARNING: Could not recover jumptable at 0x00014581086f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145810874 FUN_145810874 body=110 status=ok
// SIG undefined FUN_145810874(void)

undefined8 FUN_145810874(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar3 = (code *)*param_1;
  plVar5 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[2];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar3)(param_2,uVar4,param_3,param_4);
  plVar5 = *(longlong **)(param_4 + 8);
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
  return param_2;
}



// FUNCTION 1458108e8 FUN_1458108e8 body=28 status=ok
// SIG undefined FUN_1458108e8(void)

undefined8
FUN_1458108e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)*param_2)(param_1,param_3,param_4);
  return param_1;
}



// FUNCTION 145810904 FUN_145810904 body=40 status=ok
// SIG undefined FUN_145810904(void)

undefined8 FUN_145810904(undefined8 param_1,int param_2)

{
  FUN_14581092c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581092c FUN_14581092c body=275 status=ok
// SIG undefined FUN_14581092c(void)

void FUN_14581092c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd721f0;
  param_1[5] = &PTR_FUN_14bd725b0;
  param_1[0x13] = &PTR_FUN_14bd725d0;
  param_1[0x17] = &PTR_FUN_14bd72600;
  param_1[0x18] = &PTR_FUN_14bd72610;
  param_1[0x35] = &PTR_FUN_14bd72628;
  plVar3 = (longlong *)param_1[0x72];
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
  plVar3 = (longlong *)param_1[0x6c];
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
  plVar3 = (longlong *)param_1[0x6a];
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
  FUN_145810a40(param_1);
  return;
}



// FUNCTION 145810a40 FUN_145810a40 body=260 status=ok
// SIG undefined FUN_145810a40(void)

void FUN_145810a40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bd732a0;
  param_1[5] = &PTR_FUN_14bd73660;
  param_1[0x13] = &PTR_FUN_14bd73680;
  param_1[0x17] = &PTR_FUN_14bd736b0;
  param_1[0x18] = &PTR_FUN_14bd736c0;
  param_1[0x35] = &PTR_FUN_14bd736d8;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_145810b44(param_1 + 0x44);
  lVar3 = param_1[0x43];
  if (lVar3 != 0) {
    FUN_149603a88(lVar3);
    FUN_1400020a8(lVar3);
  }
  plVar4 = (longlong *)param_1[0x42];
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
  plVar4 = (longlong *)param_1[0x40];
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
  FUN_145810bd4(param_1);
  return;
}



// FUNCTION 145810b44 FUN_145810b44 body=53 status=ok
// SIG undefined FUN_145810b44(void)

void FUN_145810b44(longlong *param_1)

{
  FUN_145810b7a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145810b7a FUN_145810b7a body=90 status=ok
// SIG undefined FUN_145810b7a(void)

void FUN_145810b7a(longlong param_1)

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



// FUNCTION 145810bd4 FUN_145810bd4 body=252 status=ok
// SIG undefined FUN_145810bd4(void)

void FUN_145810bd4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd74810;
  param_1[5] = &PTR_FUN_14bd74bb0;
  param_1[0x13] = &PTR_FUN_14bd74bd0;
  param_1[0x17] = &PTR_FUN_14bd74c00;
  param_1[0x18] = &PTR_FUN_14bd74c10;
  FUN_145810cd0(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x30];
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
  plVar3 = (longlong *)param_1[0x23];
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
  plVar3 = (longlong *)param_1[0x21];
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
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145810cd0 FUN_145810cd0 body=77 status=ok
// SIG undefined FUN_145810cd0(void)

void FUN_145810cd0(longlong param_1,int param_2)

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



// FUNCTION 145810d1e FUN_145810d1e body=97 status=ok
// SIG undefined FUN_145810d1e(void)

longlong FUN_145810d1e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x9f8))();
  if (lVar1 != 0) {
    uVar3 = (**(code **)(*param_1 + 0xa00))(param_1);
    FUN_1470e5b5e(uVar3,lVar1);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xa00))(param_1);
  if (*(char *)((longlong)plVar2 + 0x24) == '\x01') {
    (**(code **)(*plVar2 + 0x28))(plVar2);
    *(undefined1 *)((longlong)plVar2 + 0x24) = 0;
  }
  return lVar1;
}



// FUNCTION 145810d90 FUN_145810d90 body=51 status=ok
// SIG undefined FUN_145810d90(void)

undefined8 * FUN_145810d90(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a5d8760;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 145810dcc FUN_145810dcc body=111 status=ok
// SIG undefined FUN_145810dcc(void)

undefined8 FUN_145810dcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  uVar1 = DAT_14cbd35a0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_144837462(uVar1,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145810e58 FUN_145810e58 body=63 status=ok
// SIG undefined FUN_145810e58(void)

void FUN_145810e58(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1448332aa(param_2,&DAT_14b40c818);
  if ((iVar1 < 0) && ((*(float *)(param_1 + 0x9c) != 0.0 || (NAN(*(float *)(param_1 + 0x9c)))))) {
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  return;
}



// FUNCTION 145810e98 FUN_145810e98 body=170 status=ok
// SIG undefined FUN_145810e98(void)

void FUN_145810e98(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    local_68[0] = *param_2;
    local_58[0] = 0;
    if (local_68[0] != 0) {
      plVar1 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
    }
    (**(code **)(*plVar2 + 8))(plVar2,param_1 + 0x30,local_68);
  }
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145810f44 FUN_145810f44 body=62 status=ok
// SIG undefined FUN_145810f44(void)

float FUN_145810f44(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xb98);
  if ((*(longlong *)(param_1 + 0xb18) != 0) && (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0))
  {
    fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 0xb20) + 0x40))();
    fVar2 = fVar2 * fVar1;
  }
  return fVar2;
}



// FUNCTION 145810f82 FUN_145810f82 body=74 status=ok
// SIG undefined FUN_145810f82(void)

void FUN_145810f82(longlong *param_1,undefined1 param_2)

{
  if ((char)param_1[0x2f] == '\x03') {
    (**(code **)(*param_1 + 0x578))();
    *(undefined1 *)((longlong)param_1 + 0xd34) = 0xff;
    *(undefined1 *)((longlong)param_1 + 0xd36) = param_2;
    FUN_144a62f0c(param_1,param_1[5],0x18);
    return;
  }
  return;
}



// FUNCTION 145810fcc FUN_145810fcc body=38 status=ok
// SIG undefined FUN_145810fcc(void)

undefined8 FUN_145810fcc(undefined8 param_1,int param_2)

{
  FUN_145810ff2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145810ff2 FUN_145810ff2 body=139 status=ok
// SIG undefined FUN_145810ff2(void)

void FUN_145810ff2(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_141145f8e(param_1 + 8);
  return;
}



// FUNCTION 14581107e FUN_14581107e body=40 status=ok
// SIG undefined FUN_14581107e(void)

undefined8 FUN_14581107e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458110a6 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 1458110ac FUN_1458110ac body=32 status=ok
// SIG undefined FUN_1458110ac(void)

undefined8 * FUN_1458110ac(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ac04b50;
  return param_1;
}



// FUNCTION 1458110da FUN_1458110da body=31 status=ok
// SIG undefined FUN_1458110da(void)

undefined8 FUN_1458110da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145811108 FUN_145811108 body=31 status=ok
// SIG undefined FUN_145811108(void)

undefined8 FUN_145811108(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145811128 FUN_145811128 body=40 status=ok
// SIG undefined FUN_145811128(void)

undefined8 FUN_145811128(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145811150 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 145811166 FUN_145811166 body=44 status=ok
// SIG undefined FUN_145811166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145811166(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8ca84 = _DAT_14cb8ca84 + -1;
  *param_1 = DAT_14cb8ca78;
  DAT_14cb8ca78 = param_1;
  return;
}



// FUNCTION 1458111a0 FUN_1458111a0 body=31 status=ok
// SIG undefined FUN_1458111a0(void)

undefined8 FUN_1458111a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458111de FUN_1458111de body=31 status=ok
// SIG undefined FUN_1458111de(void)

undefined8 FUN_1458111de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581120e FUN_14581120e body=40 status=ok
// SIG undefined FUN_14581120e(void)

undefined8 FUN_14581120e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145811236 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 14581123c FUN_14581123c body=40 status=ok
// SIG undefined FUN_14581123c(void)

undefined8 FUN_14581123c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145811264 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 14581126a FUN_14581126a body=339 status=ok
// SIG undefined FUN_14581126a(void)

void FUN_14581126a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_70;
  undefined2 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14009d2a0();
  if ((param_1 == 0) || (DAT_14c950c29 == 0)) {
    if (param_1 == 0) {
      lVar4 = 0;
      goto LAB_1458112ba;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  lVar4 = param_1 + 0x100;
LAB_1458112ba:
  puVar2 = *(undefined4 **)(param_3 + 8);
  if (puVar2 == (undefined4 *)0x0) {
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
  }
  else {
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
  }
  uVar1 = *(undefined2 *)(lVar3 + 0xfe);
  if (DAT_14c950c29 == 1 && param_1 != 0) {
    FUN_1456cec3c(param_1);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_1 != 0) {
    FUN_1456cec3c(param_1);
  }
  local_40 = 1;
  local_68 = uVar1;
  local_60 = param_1;
  if ((param_1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  local_50 = local_88;
  uStack_4c = uStack_84;
  uStack_48 = uStack_80;
  uStack_44 = uStack_7c;
  local_38 = 1;
  local_70 = &PTR_FUN_14a499410;
  local_58 = lVar4;
  FUN_1458113be(param_4);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458113be FUN_1458113be body=261 status=ok
// SIG undefined FUN_1458113be(void)

void FUN_1458113be(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  longlong unaff_RSI;
  undefined8 unaff_R15;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(undefined2 *)(param_2 + 8);
  cVar2 = *(char *)(param_2 + 0x30);
  if (cVar2 == '\x01') {
    unaff_RSI = *(longlong *)(param_2 + 0x10);
    if ((unaff_RSI != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(unaff_RSI);
    }
    unaff_R15 = *(undefined8 *)(param_2 + 0x18);
    local_58 = *(undefined4 *)(param_2 + 0x20);
    uStack_54 = *(undefined4 *)(param_2 + 0x24);
    uStack_50 = *(undefined4 *)(param_2 + 0x28);
    uStack_4c = *(undefined4 *)(param_2 + 0x2c);
  }
  uVar3 = *(undefined1 *)(param_2 + 0x38);
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_1,iVar5);
  }
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar6 = param_1;
  }
  puVar1 = (undefined8 *)(lVar6 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a499410;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  puVar1[2] = unaff_RSI;
  puVar1[3] = unaff_R15;
  *(undefined4 *)(puVar1 + 4) = local_58;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_54;
  *(undefined4 *)(puVar1 + 5) = uStack_50;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_4c;
  *(char *)(puVar1 + 6) = cVar2;
  *(undefined1 *)(puVar1 + 7) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458114c4 FUN_1458114c4 body=556 status=ok
// SIG undefined FUN_1458114c4(void)

void * FUN_1458114c4(void *param_1)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 local_d8 [40];
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  int local_78;
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_d8;
  lVar3 = 0;
  memset(param_1,0,0x180);
  FUN_1446f470e(local_88,L"GLSL_SAGE",1);
  FUN_1446f470e(&local_80,L"Sage",1);
  local_78 = 0x2b;
  FUN_1446f470e(local_74,L"GLSL_SAGE_MOBILE",1);
  FUN_1446f470e(local_6c,L"Sage",1);
  local_64 = 0x2c;
  FUN_1446f470e(local_60,L"GLSL_SAGE_WIN",1);
  FUN_1446f470e(local_58,L"Sage",1);
  local_50 = 0x2d;
  do {
    uVar1 = (ulonglong)(*(int *)(local_74 + lVar3 + -4) - 0x20);
    *(undefined8 *)((longlong)param_1 + uVar1 * 0x18) = *(undefined8 *)((longlong)&local_80 + lVar3)
    ;
    FUN_1400021e4(local_88 + lVar3,&local_b0);
    puVar2 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar2 = local_b0;
    }
    FUN_140002266(&local_a0,L"SP_%s",puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_98 != 0) {
      puVar2 = local_a0;
    }
    FUN_1446f470e(&local_90,puVar2,1);
    *(undefined8 *)((longlong)param_1 + uVar1 * 0x18 + 8) = local_90;
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(local_88 + lVar3,&local_b0);
    puVar2 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar2 = local_b0;
    }
    FUN_140002266(&local_a0,L"SF_%s",puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_98 != 0) {
      puVar2 = local_a0;
    }
    FUN_1446f470e(&local_90,puVar2,1);
    *(undefined8 *)((longlong)param_1 + uVar1 * 0x18 + 0x10) = local_90;
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + 0x14;
  } while (lVar3 != 0x3c);
  if ((local_48 ^ (ulonglong)local_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458116f2 FUN_1458116f2 body=40 status=ok
// SIG undefined FUN_1458116f2(void)

undefined8 FUN_1458116f2(undefined8 param_1,int param_2)

{
  FUN_14581171a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581171a FUN_14581171a body=84 status=ok
// SIG undefined FUN_14581171a(void)

void FUN_14581171a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b279260;
  param_1[5] = &PTR_FUN_14b279500;
  if (*(int *)((longlong)param_1 + 0x3c) != -1) {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = 0;
    param_1[7] = 0xffffffff00000000;
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145811774 FUN_145811774 body=57 status=ok
// SIG undefined FUN_145811774(void)

void FUN_145811774(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4490 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4490 = FUN_140002ddd(FUN_1465bdb10,uVar1,L"GrenadeBehaviorDef_Payload");
  }
  return;
}



// FUNCTION 1458117ae FUN_1458117ae body=38 status=ok
// SIG undefined FUN_1458117ae(void)

undefined8 FUN_1458117ae(undefined8 param_1,int param_2)

{
  FUN_1458117d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458117d4 FUN_1458117d4 body=352 status=ok
// SIG undefined FUN_1458117d4(void)

void FUN_1458117d4(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14a916998;
  puVar5 = param_1 + 8;
  if ((undefined8 *)param_1[0x1c] != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x1c];
  }
  iVar1 = *(int *)(param_1 + 0x1d);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)((longlong)puVar5 + lVar4 + 0x18) != 0) {
        iVar2 = *(int *)(param_1 + 0x29);
        *(uint *)(param_1 + 0x29) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x14c) < iVar2 + 1U) {
          FUN_147af2b6e(param_1 + 0x26,iVar2);
        }
        puVar3 = (undefined8 *)param_1[0x28];
        if ((undefined8 *)param_1[0x28] == (undefined8 *)0x0) {
          puVar3 = param_1 + 0x26;
        }
        puVar3[iVar2] = *(undefined8 *)((longlong)puVar5 + lVar4 + 0x18);
        *(undefined8 *)((longlong)puVar5 + lVar4 + 0x18) = 0;
      }
      lVar4 = lVar4 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar4);
  }
  FUN_1458119e4(param_1);
  FUN_145811934(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14581195a(param_1 + 0x20);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  return;
}



// FUNCTION 145811934 FUN_145811934 body=38 status=ok
// SIG undefined FUN_145811934(void)

void FUN_145811934(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 14581195a FUN_14581195a body=61 status=ok
// SIG undefined FUN_14581195a(void)

void FUN_14581195a(longlong param_1)

{
  FUN_145811998();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_141148b2e(param_1,0);
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145811998 FUN_145811998 body=76 status=ok
// SIG undefined FUN_145811998(void)

void FUN_145811998(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar3 = param_1;
    }
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_141148a62(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while (iVar1 != (int)lVar4);
  }
  return;
}



// FUNCTION 1458119e4 FUN_1458119e4 body=152 status=ok
// SIG undefined FUN_1458119e4(void)

void FUN_1458119e4(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar4 = param_1 + 0x130;
  }
  iVar1 = *(int *)(param_1 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar3);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)*plVar2)(plVar2,1);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) == 0) {
    return;
  }
  FUN_145811a7c(param_1 + 0x130);
  return;
}



// FUNCTION 145811a7c FUN_145811a7c body=74 status=ok
// SIG undefined FUN_145811a7c(void)

void FUN_145811a7c(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 3);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 145811ac6 FUN_145811ac6 body=38 status=ok
// SIG undefined FUN_145811ac6(void)

undefined8 FUN_145811ac6(undefined8 param_1,int param_2)

{
  FUN_1411488cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145811aec FUN_145811aec body=40 status=ok
// SIG undefined FUN_145811aec(void)

undefined8 FUN_145811aec(undefined8 param_1,int param_2)

{
  FUN_145811b14();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145811b14 FUN_145811b14 body=84 status=ok
// SIG undefined FUN_145811b14(void)

void FUN_145811b14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a612d20;
  param_1[6] = &PTR_FUN_14a612fc0;
  FUN_145811b68(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145811b68 FUN_145811b68 body=49 status=ok
// SIG undefined FUN_145811b68(void)

void FUN_145811b68(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
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



// FUNCTION 145811ba2 FUN_145811ba2 body=109 status=ok
// SIG undefined FUN_145811ba2(void)

void FUN_145811ba2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_14cb284e8 == 0) {
    uVar2 = FUN_140bffa48();
    DAT_14cb284e8 = FUN_140002ddd(FUN_1464530ff,uVar2,L"StateTreeInstanceStorage");
  }
  FUN_144a79930(param_2,DAT_14cb284e8,param_1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = FUN_145811c10();
  FUN_144a79930(param_2,uVar1,uVar2,0);
  return;
}



// FUNCTION 145811c10 FUN_145811c10 body=57 status=ok
// SIG undefined FUN_145811c10(void)

void FUN_145811c10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb28490 == 0) {
    uVar1 = FUN_140bffa48();
    DAT_14cb28490 = FUN_140002ddd(FUN_1464529ad,uVar1,L"StateTreeEventQueue");
  }
  return;
}



// FUNCTION 145811c50 FUN_145811c50 body=102 status=ok
// SIG undefined FUN_145811c50(void)

void FUN_145811c50(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar5 = FUN_1447210f0();
  lVar6 = FUN_1406f625c(uVar5);
  if (lVar6 != 0) {
    lVar3 = *(longlong *)(lVar6 + 0x158);
    plVar4 = *(longlong **)(lVar6 + 0x160);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      FUN_145811cb6();
    }
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
                    /* WARNING: Could not recover jumptable at 0x000145811cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145811cb6 FUN_145811cb6 body=92 status=ok
// SIG undefined FUN_145811cb6(void)

void FUN_145811cb6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
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
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_145811d12();
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
                    /* WARNING: Could not recover jumptable at 0x000145811d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145811d12 FUN_145811d12 body=5 status=ok
// SIG undefined FUN_145811d12(void)

void FUN_145811d12(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 1;
  return;
}



// FUNCTION 145811d18 FUN_145811d18 body=52 status=ok
// SIG undefined FUN_145811d18(void)

void FUN_145811d18(longlong *param_1)

{
  FUN_145811d4c(param_1 + 0x785);
  FUN_145811dca(param_1 + 0x7ad,1);
                    /* WARNING: Could not recover jumptable at 0x000145811d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14b8))(param_1);
  return;
}



// FUNCTION 145811d4c FUN_145811d4c body=42 status=ok
// SIG undefined FUN_145811d4c(void)

void FUN_145811d4c(uint *param_1,longlong param_2)

{
  FUN_145811d76(param_1,0);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = *param_1 | *(uint *)(param_2 + 0x10);
  FUN_141149732(param_1);
  return;
}



// FUNCTION 145811d76 FUN_145811d76 body=83 status=ok
// SIG undefined FUN_145811d76(void)

void FUN_145811d76(undefined8 param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_140161f86();
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  if (*(char *)(lVar1 + 0x18) == param_2) {
    if (*(int *)(lVar1 + 0x1c) != 0) goto LAB_145811dad;
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x1c) + 1;
  }
  *(char *)(lVar1 + 0x18) = param_2;
  *(int *)(lVar1 + 0x1c) = iVar2;
LAB_145811dad:
                    /* WARNING: Could not recover jumptable at 0x000145811db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  return;
}



// FUNCTION 145811dca FUN_145811dca body=99 status=ok
// SIG undefined FUN_145811dca(void)

void FUN_145811dca(longlong param_1,char param_2)

{
  int iVar1;
  
  FUN_144a65a1e(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_145811e2e(param_1 + 8,0);
  }
  if (param_2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (*(int *)(param_1 + 0x14) < iVar1) {
      FUN_145811e2e(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 145811e2e FUN_145811e2e body=111 status=ok
// SIG undefined FUN_145811e2e(void)

void FUN_145811e2e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 145811e9e FUN_145811e9e body=62 status=ok
// SIG undefined FUN_145811e9e(void)

void FUN_145811e9e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145811edc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 145811edc FUN_145811edc body=111 status=ok
// SIG undefined FUN_145811edc(void)

ulonglong FUN_145811edc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xc) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 145811f4c FUN_145811f4c body=72 status=ok
// SIG undefined FUN_145811f4c(void)

void FUN_145811f4c(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000145811f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6d0))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerInputDoubleTap_Validate");
  return;
}



// FUNCTION 145811fb4 FUN_145811fb4 body=47 status=ok
// SIG undefined FUN_145811fb4(void)

void FUN_145811fb4(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba4fa0);
                    /* WARNING: Could not recover jumptable at 0x000145811fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 145811fec FUN_145811fec body=79 status=ok
// SIG undefined FUN_145811fec(void)

undefined8 * FUN_145811fec(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b0dd450;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_144a5dc74(param_1 + 6);
  *(undefined2 *)(param_1 + 8) = 1;
  *param_1 = &PTR_FUN_14b3f5370;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 145812046 FUN_145812046 body=54 status=ok
// SIG undefined FUN_145812046(void)

undefined8 * FUN_145812046(undefined8 *param_1)

{
  FUN_14581207c();
  *param_1 = &PTR_FUN_14ab8a000;
  param_1[5] = &PTR_FUN_14ab8a5e0;
  param_1[6] = &PTR_LAB_14ab8a620;
  return param_1;
}



// FUNCTION 14581207c FUN_14581207c body=54 status=ok
// SIG undefined FUN_14581207c(void)

undefined8 * FUN_14581207c(undefined8 *param_1)

{
  FUN_1458120b2();
  *param_1 = &PTR_FUN_14ab647f0;
  param_1[5] = &PTR_FUN_14ab64dd0;
  param_1[6] = &PTR_LAB_14ab64e10;
  return param_1;
}



// FUNCTION 1458120b2 FUN_1458120b2 body=54 status=ok
// SIG undefined FUN_1458120b2(void)

undefined8 * FUN_1458120b2(undefined8 *param_1)

{
  FUN_14114c36c();
  *param_1 = &PTR_FUN_14ab50b90;
  param_1[5] = &PTR_FUN_14ab51170;
  param_1[6] = &PTR_LAB_14ab511b0;
  return param_1;
}



// FUNCTION 1458120f8 FUN_1458120f8 body=40 status=ok
// SIG undefined FUN_1458120f8(void)

undefined8 FUN_1458120f8(undefined8 param_1,int param_2)

{
  FUN_145812120();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145812120 FUN_145812120 body=427 status=ok
// SIG undefined FUN_145812120(void)

void FUN_145812120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7127b0;
  FUN_14114c968(param_1 + 0x121);
  if (param_1[0x11e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x116] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x104] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd9) = 0;
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  FUN_1458122cc(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xc6) = 0;
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_145812304(param_1 + 0xbd);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  FUN_14581233c(param_1 + 0xb3);
  FUN_14114c8ee(param_1 + 0x7b);
  FUN_14114c8ee(param_1 + 0x54);
  FUN_1458124e2(param_1);
  return;
}



// FUNCTION 1458122cc FUN_1458122cc body=55 status=ok
// SIG undefined FUN_1458122cc(void)

void FUN_1458122cc(longlong *param_1)

{
  FUN_145812468(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145812304 FUN_145812304 body=55 status=ok
// SIG undefined FUN_145812304(void)

void FUN_145812304(longlong *param_1)

{
  FUN_1458123ee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14581233c FUN_14581233c body=55 status=ok
// SIG undefined FUN_14581233c(void)

void FUN_14581233c(longlong *param_1)

{
  FUN_145812374(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145812374 FUN_145812374 body=121 status=ok
// SIG undefined FUN_145812374(void)

void FUN_145812374(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
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



// FUNCTION 1458123ee FUN_1458123ee body=121 status=ok
// SIG undefined FUN_1458123ee(void)

void FUN_1458123ee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 145812468 FUN_145812468 body=121 status=ok
// SIG undefined FUN_145812468(void)

void FUN_145812468(longlong param_1,int param_2)

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



// FUNCTION 1458124e2 FUN_1458124e2 body=162 status=ok
// SIG undefined FUN_1458124e2(void)

void FUN_1458124e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0ef2f0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145812584(param_1 + 0x10);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145812584 FUN_145812584 body=55 status=ok
// SIG undefined FUN_145812584(void)

void FUN_145812584(longlong *param_1)

{
  FUN_1458125bc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458125bc FUN_1458125bc body=121 status=ok
// SIG undefined FUN_1458125bc(void)

void FUN_1458125bc(longlong param_1,int param_2)

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



// FUNCTION 145812636 FUN_145812636 body=33 status=ok
// SIG undefined FUN_145812636(void)

void FUN_145812636(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000145812653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 145812658 FUN_145812658 body=61 status=ok
// SIG undefined FUN_145812658(void)

longlong FUN_145812658(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148a65b30(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_145812695(lVar2);
  return lVar2;
}



// FUNCTION 145812695 FUN_145812695 body=19 status=ok
// SIG undefined FUN_145812695(void)

void FUN_145812695(undefined8 *param_1)

{
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



// FUNCTION 1458126a8 FUN_1458126a8 body=118 status=ok
// SIG undefined FUN_1458126a8(void)

undefined8 FUN_1458126a8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 8);
  local_30 = 0;
  local_28 = 0;
  FUN_14114e6dc(&local_30,param_3);
  FUN_140c6314c(lVar1 + 0x28,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145812720 FUN_145812720 body=73 status=ok
// SIG undefined FUN_145812720(void)

void FUN_145812720(longlong param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  DAT_14c990b38 = 0;
  return;
}



// FUNCTION 14581276a FUN_14581276a body=34 status=ok
// SIG undefined FUN_14581276a(void)

undefined8 FUN_14581276a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14581278c FUN_14581278c body=43 status=ok
// SIG undefined FUN_14581278c(void)

undefined8 FUN_14581278c(undefined8 param_1,int param_2)

{
  FUN_1458127b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1458127b8 FUN_1458127b8 body=71 status=ok
// SIG undefined FUN_1458127b8(void)

void FUN_1458127b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f27bb0;
  FUN_1458127ff(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458127ff FUN_1458127ff body=40 status=ok
// SIG undefined FUN_1458127ff(void)

void FUN_1458127ff(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b1a89c(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 145812828 FUN_145812828 body=38 status=ok
// SIG undefined FUN_145812828(void)

undefined8 FUN_145812828(undefined8 param_1,int param_2)

{
  FUN_14581284e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581284e FUN_14581284e body=92 status=ok
// SIG undefined FUN_14581284e(void)

void FUN_14581284e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14aac60c0;
  if (param_1[0x24] != 0) {
    plVar2 = param_1 + 0x28;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x26];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  puVar1 = (undefined8 *)param_1[0x20];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1458128aa(param_1);
  return;
}



// FUNCTION 1458128aa FUN_1458128aa body=122 status=ok
// SIG undefined FUN_1458128aa(void)

void FUN_1458128aa(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aac3990;
  if (param_1[0x18] != 0) {
    plVar1 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *param_1 = &PTR_LAB_14aabfdc0;
                    /* WARNING: Could not recover jumptable at 0x0001458128e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 145812924 FUN_145812924 body=284 status=ok
// SIG undefined FUN_145812924(void)

void FUN_145812924(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9bfe20;
  param_1[5] = &PTR_FUN_14a9c0190;
  FUN_14493db24(param_1 + 0x3f);
  FUN_14079057a(param_1 + 0x27);
  FUN_144760e21(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145812a5e(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  param_1[9] = &PTR_FUN_14a5af930;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  param_1[9] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0xc)])(param_1 + 10);
  FUN_145812a40(param_1);
  return;
}



// FUNCTION 145812a40 FUN_145812a40 body=30 status=ok
// SIG undefined FUN_145812a40(void)

void FUN_145812a40(longlong param_1)

{
  FUN_14114f6bc(param_1 + 0x28);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145812a5e FUN_145812a5e body=40 status=ok
// SIG undefined FUN_145812a5e(void)

void FUN_145812a5e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140fb9fee(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 145812a86 FUN_145812a86 body=24 status=ok
// SIG undefined FUN_145812a86(void)

void FUN_145812a86(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145812a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145812a9e FUN_145812a9e body=38 status=ok
// SIG undefined FUN_145812a9e(void)

undefined8 FUN_145812a9e(undefined8 param_1,int param_2)

{
  FUN_145812ac4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145812ac4 FUN_145812ac4 body=91 status=ok
// SIG undefined FUN_145812ac4(void)

void FUN_145812ac4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b432ad0;
  param_1[4] = &PTR_FUN_14b432af0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145812b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145812b28 FUN_145812b28 body=73 status=ok
// SIG undefined FUN_145812b28(void)

void FUN_145812b28(longlong param_1)

{
  FUN_145812b71(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_145812bbc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145812b71 FUN_145812b71 body=75 status=ok
// SIG undefined FUN_145812b71(void)

void FUN_145812b71(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145812bbc FUN_145812bbc body=75 status=ok
// SIG undefined FUN_145812bbc(void)

void FUN_145812bbc(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145812c08 FUN_145812c08 body=40 status=ok
// SIG undefined FUN_145812c08(void)

undefined8 FUN_145812c08(undefined8 param_1,int param_2)

{
  FUN_145812c30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145812c30 FUN_145812c30 body=66 status=ok
// SIG undefined FUN_145812c30(void)

void FUN_145812c30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53dad0;
  FUN_14114f721(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4e91c(param_1);
  return;
}



// FUNCTION 145812c72 FUN_145812c72 body=77 status=ok
// SIG undefined FUN_145812c72(void)

void FUN_145812c72(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x88) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x90) = (int)param_2[1];
  return;
}



// FUNCTION 145812cc0 FUN_145812cc0 body=200 status=ok
// SIG undefined FUN_145812cc0(void)

void FUN_145812cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 *local_c0;
  undefined1 local_a9;
  longlong local_a8 [2];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined1 local_68 [40];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_14114ff2e(0,local_a8);
  local_98[0] = 0;
  local_70 = 0;
  FUN_1456bb102(local_98,param_3);
  local_68[0] = 0;
  local_40 = 0;
  local_c0 = &local_a9;
  local_c8 = 1;
  FUN_140c3fc86(local_a8,param_2,param_3,local_98);
  FUN_144a5ac3a(local_68);
  FUN_144a5ac3a(local_98);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145812d98 FUN_145812d98 body=40 status=ok
// SIG undefined FUN_145812d98(void)

undefined8 FUN_145812d98(undefined8 param_1,int param_2)

{
  FUN_145812dc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145812dc0 FUN_145812dc0 body=85 status=ok
// SIG undefined FUN_145812dc0(void)

void FUN_145812dc0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0dd410;
  plVar3 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145812e24 FUN_145812e24 body=36 status=ok
// SIG undefined FUN_145812e24(void)

void FUN_145812e24(undefined8 param_1)

{
  FUN_145812e9c(param_1,0);
  FUN_145812e48(param_1);
  FUN_1411502c2(param_1);
  return;
}



// FUNCTION 145812e48 FUN_145812e48 body=83 status=ok
// SIG undefined FUN_145812e48(void)

void FUN_145812e48(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d1800;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145812e9c FUN_145812e9c body=91 status=ok
// SIG undefined FUN_145812e9c(void)

void FUN_145812e9c(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = &PTR_FUN_14b9d17f0;
      *(undefined1 *)(puVar2 + 1) = param_2;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145812ef8 FUN_145812ef8 body=40 status=ok
// SIG undefined FUN_145812ef8(void)

undefined8 FUN_145812ef8(undefined8 param_1,int param_2)

{
  FUN_145812f20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145812f20 FUN_145812f20 body=223 status=ok
// SIG undefined FUN_145812f20(void)

void FUN_145812f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b79f420;
  param_1[5] = &PTR_FUN_14b79f6c0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1411520aa(param_1 + 0x1e);
  FUN_1411b79c1(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145813000(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145813036(param_1 + 8);
  FUN_1449e6b18(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145813000 FUN_145813000 body=53 status=ok
// SIG undefined FUN_145813000(void)

void FUN_145813000(longlong *param_1)

{
  FUN_14581306e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145813036 FUN_145813036 body=55 status=ok
// SIG undefined FUN_145813036(void)

void FUN_145813036(longlong *param_1)

{
  FUN_14115215c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14581306e FUN_14581306e body=90 status=ok
// SIG undefined FUN_14581306e(void)

void FUN_14581306e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 1458130c8 FUN_1458130c8 body=96 status=ok
// SIG undefined FUN_1458130c8(void)

void FUN_1458130c8(longlong param_1,int param_2)

{
  int extraout_var;
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    FUN_144a3809e((longlong)param_2 << 8,8);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,8);
  }
  return;
}



// FUNCTION 145813128 FUN_145813128 body=21 status=ok
// SIG undefined FUN_145813128(void)

undefined8 FUN_145813128(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145813150 FUN_145813150 body=85 status=ok
// SIG undefined FUN_145813150(void)

undefined8 * FUN_145813150(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b84d3c0;
  FUN_140056680(param_1 + 3,L"FireDamageTypeText");
  FUN_140056680(param_1 + 5,L"[fire_icon]");
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 0;
  return param_1;
}



// FUNCTION 1458131ac FUN_1458131ac body=57 status=ok
// SIG undefined FUN_1458131ac(void)

void FUN_1458131ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7410 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7410 = FUN_140002ddd(FUN_1465cbb0e,uVar1,L"OakBodyNodeState_GlideModifier");
  }
  return;
}



// FUNCTION 1458131e6 FUN_1458131e6 body=38 status=ok
// SIG undefined FUN_1458131e6(void)

undefined8 FUN_1458131e6(undefined8 param_1,int param_2)

{
  FUN_14581320c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581320c FUN_14581320c body=66 status=ok
// SIG undefined FUN_14581320c(void)

void FUN_14581320c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8fbfd0;
  FUN_14581324e(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_14581327e(param_1);
  return;
}



// FUNCTION 14581324e FUN_14581324e body=47 status=ok
// SIG undefined FUN_14581324e(void)

void FUN_14581324e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14581327e FUN_14581327e body=252 status=ok
// SIG undefined FUN_14581327e(void)

void FUN_14581327e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b520c80;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_141152bae(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14581337a FUN_14581337a body=26 status=ok
// SIG undefined FUN_14581337a(void)

void FUN_14581337a(undefined8 param_1)

{
  FUN_145813394();
  FUN_141196df0(param_1);
  return;
}



// FUNCTION 145813394 FUN_145813394 body=79 status=ok
// SIG undefined FUN_145813394(void)

void FUN_145813394(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1407f4ede();
  if (lVar1 != 0) {
    lVar2 = FUN_1407f4df8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140b4b272(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1458133e4 FUN_1458133e4 body=69 status=ok
// SIG undefined FUN_1458133e4(void)

undefined8 * FUN_1458133e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad3a600;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14581342a thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 14581342f FUN_14581342f body=58 status=ok
// SIG undefined FUN_14581342f(void)

void FUN_14581342f(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14581346a FUN_14581346a body=140 status=ok
// SIG undefined FUN_14581346a(void)

void FUN_14581346a(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb97f40;
  if (param_1 <= (int)DAT_14cb97f40) {
    if (DAT_14cb97f44 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb97f40) {
        uVar2 = DAT_14cb97f40;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cb97f40 + ((ulonglong)((longlong)(int)DAT_14cb97f40 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    DAT_14cb97f44 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb97f38,param_1,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458134f8 FUN_1458134f8 body=76 status=ok
// SIG undefined FUN_1458134f8(void)

void FUN_1458134f8(void)

{
  int iVar1;
  
  iVar1 = FUN_148ab62fc(DAT_14cb97f40,DAT_14cb97f44);
  if (iVar1 != DAT_14cb97f44) {
    DAT_14cb97f44 = iVar1;
    FUN_1446f8d3c(&DAT_14cb97f38,DAT_14cb97f40,iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 145813544 FUN_145813544 body=164 status=ok
// SIG undefined FUN_145813544(void)

undefined8 *
FUN_145813544(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_34 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = local_34;
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
  local_20 = param_4[4];
  local_1c = 1;
  local_48 = param_1 + 0x58;
  local_50 = param_1 + 0x40;
  local_58 = param_1 + 0x28;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  *param_2 = &PTR_FUN_14a4c7d00;
  local_34[0] = param_3;
  FUN_1458135ea(param_2 + 1,0,param_1 + 8,param_1 + 0x10);
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  *param_2 = &PTR_FUN_14a4c7ce0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458135ea FUN_1458135ea body=171 status=ok
// SIG undefined FUN_1458135ea(void)

void FUN_1458135ea(undefined2 *param_1,undefined8 param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined2 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 4) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x34] = *param_8;
  cVar1 = *(char *)(param_8 + 0xc);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_8 + 10);
    uVar2 = *(undefined8 *)(param_8 + 6);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_8 + 2);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  return;
}



// FUNCTION 145813696 FUN_145813696 body=181 status=ok
// SIG undefined FUN_145813696(void)

undefined8 *
FUN_145813696(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &local_38;
  local_36 = param_5;
  local_34 = *param_4;
  uStack_30 = param_4[1];
  uStack_2c = param_4[2];
  uStack_28 = param_4[3];
  local_24 = 1;
  local_50 = param_1 + 0x70;
  local_58 = param_1 + 0x58;
  local_60 = param_1 + 0x40;
  local_68 = param_1 + 0x28;
  uVar1 = *(undefined1 *)(param_1 + 0x90);
  *param_2 = &PTR_FUN_14a4c7cc0;
  local_38 = param_3;
  FUN_14581374c(param_2 + 1,0,param_1 + 8,param_1 + 0x10);
  *(undefined1 *)(param_2 + 0x15) = uVar1;
  *param_2 = &PTR_FUN_14a4c7ca0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14581374c FUN_14581374c body=216 status=ok
// SIG undefined FUN_14581374c(void)

void FUN_14581374c(undefined2 *param_1,undefined8 param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined2 *param_8,
                  undefined4 *param_9)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 4) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x34] = *param_8;
  cVar1 = *(char *)(param_8 + 0xc);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_8 + 10);
    uVar2 = *(undefined8 *)(param_8 + 6);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_8 + 2);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x42) = *param_9;
  cVar1 = *(char *)(param_9 + 5);
  *(char *)(param_1 + 0x4c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_9 + 3);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_9 + 1);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  return;
}



// FUNCTION 145813824 FUN_145813824 body=268 status=ok
// SIG undefined FUN_145813824(void)

void FUN_145813824(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_145813932(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145813932 FUN_145813932 body=104 status=ok
// SIG undefined FUN_145813932(void)

void FUN_145813932(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xb0,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c7cc0;
  FUN_14581399a(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0xa8);
  *param_1 = &PTR_FUN_14a4c7ca0;
  return;
}



// FUNCTION 14581399a FUN_14581399a body=192 status=ok
// SIG undefined FUN_14581399a(void)

void FUN_14581399a(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  param_1[0x34] = param_2[0x34];
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
    uVar2 = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
  cVar1 = *(char *)(param_2 + 0x4c);
  *(char *)(param_1 + 0x4c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  return;
}



// FUNCTION 145813a62 FUN_145813a62 body=75 status=ok
// SIG undefined FUN_145813a62(void)

void FUN_145813a62(longlong *param_1)

{
  FUN_141154c75(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145813aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145813aae FUN_145813aae body=103 status=ok
// SIG undefined FUN_145813aae(void)

ulonglong FUN_145813aae(longlong param_1)

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
LAB_145813af8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145813af8;
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



// FUNCTION 145813b16 FUN_145813b16 body=70 status=ok
// SIG undefined FUN_145813b16(void)

void FUN_145813b16(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a7a5f4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_145813b26;
  }
  param_2 = 0;
LAB_145813b26:
  FUN_145813b5c(param_1,param_2);
  return;
}



// FUNCTION 145813b5c FUN_145813b5c body=64 status=ok
// SIG undefined FUN_145813b5c(void)

void FUN_145813b5c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1411aed58(param_1 + 0x40);
  if (cVar1 == '\0') {
    FUN_14485c47a(param_1 + 0x40,param_2);
    FUN_145813b9c(param_1);
    return;
  }
  return;
}



// FUNCTION 145813b9c FUN_145813b9c body=95 status=ok
// SIG undefined FUN_145813b9c(void)

void FUN_145813b9c(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = FUN_14479d2ce(param_1 + 0x40);
  if (((lVar4 != 0) && (bVar1 = *(byte *)(lVar4 + 0xbd8), bVar1 != 0)) &&
     ((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0))) {
    plVar2 = *(longlong **)
              (*(longlong *)(lVar4 + 0xbe8) + 0x10 +
              (ulonglong)bVar1 * 0x80 + (ulonglong)(uint)bVar1 * 8);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x2f8))();
      goto LAB_145813bbf;
    }
  }
  uVar3 = 0;
LAB_145813bbf:
  FUN_1402a7054(param_1,uVar3);
  return;
}



// FUNCTION 145813c0a FUN_145813c0a body=40 status=ok
// SIG undefined FUN_145813c0a(void)

undefined8 FUN_145813c0a(undefined8 param_1,int param_2)

{
  FUN_145813c32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145813c32 FUN_145813c32 body=71 status=ok
// SIG undefined FUN_145813c32(void)

void FUN_145813c32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b222810;
  FUN_140f217f9(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145813c88 FUN_145813c88 body=31 status=ok
// SIG undefined FUN_145813c88(void)

undefined8 FUN_145813c88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145813cc2 FUN_145813cc2 body=157 status=ok
// SIG undefined FUN_145813cc2(void)

void FUN_145813cc2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x770) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x768);
    lVar3 = (longlong)*(int *)(param_1 + 0x770) * 0xc;
    do {
      cVar1 = FUN_14069eaf4(lVar2,param_2);
      if (cVar1 != '\0') {
        if (lVar2 != 0) goto LAB_145813cf7;
        break;
      }
      lVar2 = lVar2 + 0xc;
      lVar3 = lVar3 + -0xc;
    } while (lVar3 != 0);
  }
  lVar2 = FUN_145813d60(param_1 + 0x768);
  FUN_14485c47a(lVar2,param_2);
LAB_145813cf7:
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0x730);
  if (*(int *)(param_1 + 0x770) < 1) {
    return;
  }
  FUN_140cbebe8(param_1 + 0x40,1);
  return;
}



// FUNCTION 145813d60 FUN_145813d60 body=63 status=ok
// SIG undefined FUN_145813d60(void)

longlong FUN_145813d60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145813dae(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_145813d9f(lVar2);
  return lVar2;
}



// FUNCTION 145813d9f FUN_145813d9f body=15 status=ok
// SIG undefined FUN_145813d9f(void)

void FUN_145813d9f(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 145813dae FUN_145813dae body=147 status=ok
// SIG undefined FUN_145813dae(void)

void FUN_145813dae(longlong param_1,int param_2)

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



// FUNCTION 145813e42 FUN_145813e42 body=169 status=ok
// SIG undefined FUN_145813e42(void)

void FUN_145813e42(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb46be0);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e39130);
  if (1 < iVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2b) & 10) != 0) {
      switchD_143c3d4dc::caseD_21(param_1,param_2);
    }
    lVar2 = 0x2a0;
    if ((((*(byte *)(param_2 + 5) & 4) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 10) != 0))
       || (lVar2 = 0x2a8, (*(byte *)(param_2 + 5) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000145813ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + lVar2))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145813eec FUN_145813eec body=1575 status=ok
// SIG undefined FUN_145813eec(void)

void FUN_145813eec(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_1f8 [44];
  int local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  longlong local_188;
  undefined4 local_180;
  undefined1 local_178 [160];
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb46be0);
  FUN_141156948(param_2);
  FUN_1458b7ad0(param_1);
  iVar5 = FUN_1448332aa(param_2,&DAT_14bb46be0);
  if (iVar5 < 0) {
    local_1cc = 1;
    iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (0x33 < iVar5) {
      puVar3 = (ulonglong *)param_2[1];
      piVar1 = (int *)*puVar3 + 1;
      if ((int *)puVar3[1] < piVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_1cc,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_1cc);
        }
      }
      else {
        local_1cc = *(int *)*puVar3;
        *puVar3 = (ulonglong)piVar1;
      }
    }
    iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar5 < 0x72) {
      iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78);
      if (0x60 < iVar5) {
        local_d8[0] = 0;
        local_d8[1] = 0;
        FUN_14021219d(param_2,local_d8);
        if (local_d8[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_1cc == 1) {
      FUN_1490f4c8e(local_d8,1);
      FUN_1490f4c8e(local_178,1);
      FUN_1490f54fc(local_d8,param_2);
      FUN_1490f54fc(local_178,param_2);
      FUN_140219018(param_2,param_1 + 0x208);
      FUN_145814b84(param_1 + 0x138,param_2);
      FUN_145814c2e(param_2,param_1 + 0x250);
      iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78);
      if (iVar5 < 0x2b) {
        FUN_1458b7ad0(param_1);
      }
      else {
        iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc08);
        if (iVar7 < 0x2c) {
          uVar6 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
          cVar4 = FUN_14170fbcc(param_2,uVar6,0x71,1);
          if (cVar4 != '\0') goto LAB_14581443c;
        }
        else {
LAB_14581443c:
          FUN_145814aba(param_2,param_1 + 0x2e8);
        }
        iVar7 = FUN_1448332aa(param_2,&DAT_14bb46be0);
        if ((2 < iVar7) && (iVar7 = FUN_1448332aa(param_2,&DAT_14bb46be0), iVar7 < 5)) {
          local_1a8 = 0;
          local_1a0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_19c = 0xffffffff00000080;
          local_194 = 0;
          local_188 = 0;
          local_180 = 0;
          FUN_1490eebac(param_2,&local_1c8);
          local_180 = 0;
          if (local_188 != 0) {
            FUN_1400020a8();
          }
          FUN_140ba05b6(&local_1c8);
        }
        iVar7 = FUN_1448332aa(param_2,&DAT_14bb46be0);
        if ((3 < iVar7) && (iVar7 = FUN_1448332aa(param_2,&DAT_14bb46be0), iVar7 < 5)) {
          local_1a8 = 0;
          local_1a0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_19c = 0xffffffff00000080;
          local_194 = 0;
          local_188 = 0;
          local_180 = 0;
          FUN_1490eebac(param_2,&local_1c8);
          local_180 = 0;
          if (local_188 != 0) {
            FUN_1400020a8();
          }
          FUN_140ba05b6(&local_1c8);
        }
      }
      FUN_1490f4e6e(local_178);
      FUN_1490f4e6e(local_d8);
      if (iVar5 < 0x2b) goto LAB_1458140c4;
    }
    if (local_1cc != 0) {
      FUN_1458b7ad0(param_1);
      goto LAB_1458140c4;
    }
  }
  iVar5 = FUN_1448332aa(param_2,&DAT_14bb46be0);
  if (0 < iVar5) {
    puVar2 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x338),4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x338) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  FUN_14581458c(param_2,param_1 + 0x118);
  FUN_140219018(param_2,param_1 + 0x208);
  FUN_145814b84(param_1 + 0x138,param_2);
  FUN_1411570ee(param_1 + 0x138);
  FUN_145814c2e(param_2,param_1 + 0x250);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (iVar5 < 0x2c) {
    uVar6 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    cVar4 = FUN_14170fbcc(param_2,uVar6,0x71,1);
    if (cVar4 != '\0') goto LAB_14581400b;
  }
  else {
LAB_14581400b:
    FUN_145814aba(param_2,param_1 + 0x2e8);
  }
  iVar5 = FUN_1448332aa(param_2,&DAT_14bb46be0);
  if ((2 < iVar5) && (iVar5 = FUN_1448332aa(param_2,&DAT_14bb46be0), iVar5 < 5)) {
    local_b8 = 0;
    local_b0 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_1490eebac(param_2,local_d8);
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_140ba05b6(local_d8);
  }
  iVar5 = FUN_1448332aa(param_2,&DAT_14bb46be0);
  if ((3 < iVar5) && (iVar5 = FUN_1448332aa(param_2,&DAT_14bb46be0), iVar5 < 5)) {
    local_b8 = 0;
    local_b0 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_1490eebac(param_2,local_d8);
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_140ba05b6(local_d8);
  }
  iVar5 = FUN_1448332aa(param_2,&DAT_14bb46be0);
  if (5 < iVar5) {
    FUN_145814514(param_1 + 0x28,param_2);
  }
  iVar5 = FUN_1448332aa(param_2,&DAT_14bb46be0);
  if (6 < iVar5) {
    FUN_145814514(param_1 + 0x78,param_2);
    FUN_145814514(param_1 + 200,param_2);
  }
LAB_1458140c4:
  if ((local_30 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145814514 FUN_145814514 body=119 status=ok
// SIG undefined FUN_145814514(void)

undefined8 FUN_145814514(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  FUN_141156ce0();
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x10),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_14581458c(param_2,param_1 + 0x18);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1411569ea(param_1);
    FUN_145814828(param_1);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return 1;
}



// FUNCTION 14581458c FUN_14581458c body=377 status=ok
// SIG undefined FUN_14581458c(void)

longlong * FUN_14581458c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1401f9edd(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1458149c4(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1458147b0(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_14581476a(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_145814706(param_2);
        FUN_1458147b0(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145814706 FUN_145814706 body=70 status=ok
// SIG undefined FUN_145814706(void)

longlong FUN_145814706(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490ee7fc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_14581474c(lVar2,1);
  return lVar2;
}



// FUNCTION 14581474c FUN_14581474c body=30 status=ok
// SIG undefined FUN_14581474c(void)

void FUN_14581474c(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 14581476a FUN_14581476a body=69 status=ok
// SIG undefined FUN_14581476a(void)

void FUN_14581476a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1401f9edd(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1458149c4(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1458147b0 FUN_1458147b0 body=120 status=ok
// SIG undefined FUN_1458147b0(void)

longlong * FUN_1458147b0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14021219d(param_1,param_2 + 2);
  FUN_14021219d(param_1,param_2 + 6);
  return param_1;
}



// FUNCTION 145814828 FUN_145814828 body=295 status=ok
// SIG undefined FUN_145814828(void)

void FUN_145814828(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14115695c((longlong *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x20),1);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0x18;
    lVar4 = 0;
    lVar2 = 0;
    do {
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[0] = 0;
      local_78[1] = 0;
      FUN_145814950(*(longlong *)(param_1 + 0x38) + lVar4,local_78);
      if (local_78[2] != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + -0x18 + lVar3);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x30))) {
        FUN_14581504c(local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8),
                      *(longlong *)(param_1 + 0x18) + lVar3);
        FUN_145814950(*(longlong *)(param_1 + 0x38) + lVar4,local_78);
        if (local_78[2] != 0) {
          FUN_1400020a8();
        }
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + 0x28;
    } while (lVar2 < *(int *)(param_1 + 0x40));
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145814950 FUN_145814950 body=115 status=ok
// SIG undefined FUN_145814950(void)

longlong * FUN_145814950(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 1458149c4 FUN_1458149c4 body=113 status=ok
// SIG undefined FUN_1458149c4(void)

void FUN_1458149c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 145814a36 FUN_145814a36 body=132 status=ok
// SIG undefined FUN_145814a36(void)

void FUN_145814a36(longlong param_1,int param_2)

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



// FUNCTION 145814aba FUN_145814aba body=137 status=ok
// SIG undefined FUN_145814aba(void)

longlong FUN_145814aba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_145814dab();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1490e82a0(param_2);
    }
  }
  return param_1;
}



// FUNCTION 145814b44 FUN_145814b44 body=63 status=ok
// SIG undefined FUN_145814b44(void)

longlong FUN_145814b44(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1[1] != 0) && (lVar1 = *param_1, lVar1 != 0)) {
    lVar2 = FUN_141156bb2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145814b84 FUN_145814b84 body=170 status=ok
// SIG undefined FUN_145814b84(void)

void FUN_145814b84(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb46be0);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e39130);
  if (1 < iVar1) {
    if (((*(byte *)(param_2 + 5) & 4) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 10) != 0)) {
      FUN_1490dceb4(param_1,param_2);
      return;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_141158368(param_1,param_2);
      return;
    }
  }
  return;
}


