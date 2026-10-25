// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148eef5a2 FUN_148eef5a2 body=200 status=ok
// SIG undefined FUN_148eef5a2(void)

void FUN_148eef5a2(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148eef63a;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148eef63a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148eef66a FUN_148eef66a body=38 status=ok
// SIG undefined FUN_148eef66a(void)

undefined8 FUN_148eef66a(undefined8 param_1,int param_2)

{
  FUN_148eef6b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eef690 FUN_148eef690 body=38 status=ok
// SIG undefined FUN_148eef690(void)

undefined8 FUN_148eef690(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"OptionUpdate",1);
  return param_2;
}



// FUNCTION 148eef6b6 FUN_148eef6b6 body=81 status=ok
// SIG undefined FUN_148eef6b6(void)

void FUN_148eef6b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0xe0;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x38);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148eef708 FUN_148eef708 body=48 status=ok
// SIG undefined FUN_148eef708(void)

void FUN_148eef708(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148eef738 FUN_148eef738 body=118 status=ok
// SIG undefined FUN_148eef738(void)

undefined8 FUN_148eef738(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cbe50b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbe50b0 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eef800 FUN_148eef800 body=126 status=ok
// SIG undefined FUN_148eef800(void)

void FUN_148eef800(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x5d8))(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(longlong *)(param_1 + 0x248) != 0) {
        FUN_14480f766(param_2 + 0x240);
      }
      *(undefined8 *)(param_1 + 0x248) = 0;
      FUN_14433100c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148eef8a6 FUN_148eef8a6 body=373 status=ok
// SIG undefined FUN_148eef8a6(void)

void FUN_148eef8a6(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1489351c6();
  if (lVar4 != 0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_1489368b0(lVar4,&local_78);
    lVar4 = local_78;
    lVar10 = (longlong)(int)uStack_70;
    if (lVar10 != 0) {
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar4 + lVar9);
        local_88 = 0;
        uStack_80 = 0;
        uVar5 = FUN_14034f1a8();
        lVar6 = FUN_14477b664(uVar5);
        uVar5 = FUN_14034f1a8();
        uVar7 = FUN_14034f1a8();
        FUN_1402d1bfa(&local_68,uVar7,uVar2);
        lVar3 = local_68;
        if (local_68 != 0) {
          uStack_80 = 0;
        }
        local_90 = local_68;
        uVar7 = FUN_14034f1a8();
        lVar8 = FUN_141459e9e(uVar5,uVar7);
        if (lVar6 != lVar8) {
          uStack_80 = 0;
        }
        uVar5 = FUN_14477b664(lVar8);
        local_88 = FUN_14477b664(uVar5);
        if (local_88 != 0 && lVar3 != 0) {
          uStack_80 = uVar2;
        }
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_148efae7a(param_1,iVar1);
        }
        FUN_148efae32((longlong)iVar1 * 0x18 + *param_1,&local_90);
        lVar9 = lVar9 + 8;
      } while (lVar10 * 8 != lVar9);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eefa1c FUN_148eefa1c body=606 status=ok
// SIG undefined FUN_148eefa1c(void)

void FUN_148eefa1c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_140e2014e();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_148eefb69;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar5,param_2);
        param_2[2] = lVar7;
        if (lVar7 == 0) goto LAB_148eefb69;
        lVar6 = param_2[1];
        goto LAB_148eefa66;
      }
    }
    param_2[2] = 0;
    goto LAB_148eefb69;
  }
LAB_148eefa66:
  if (lVar6 == 0) {
    uVar5 = FUN_140e2014e();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
    lVar7 = param_2[2];
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if (plVar1 == (longlong *)0x0) {
LAB_148eefc77:
        lVar7 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar3 == '\0') goto LAB_148eefc77;
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar7;
    }
  }
  iVar8 = *(int *)(lVar7 + 0x70) - *(int *)(lVar7 + 0x9c);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
    FUN_1402191ca(param_3);
  }
  plVar1 = (longlong *)(lVar7 + 0x68);
  lVar6 = lVar7 + 0x78;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_58 = lVar6;
  if (*(int *)(lVar7 + 0x90) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar8 = *(int *)(lVar7 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  uVar5 = local_70;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
  iVar4 = local_70._4_4_;
  local_88 = plVar1;
  if ((local_70._4_4_ != iVar8) || (local_70 = uVar5, uStack_58 != lVar6)) {
    do {
      local_70 = uVar5;
      lVar7 = *local_88;
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_3,iVar2);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) =
           *(undefined8 *)((longlong)iVar4 * 0x90 + lVar7);
      local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
      FUN_1449c0562(&local_80);
      iVar4 = local_70._4_4_;
      uVar5 = local_70;
    } while (local_88 != plVar1 ||
             (CONCAT44(uStack_74,uStack_78) != lVar6 || local_70._4_4_ != iVar8));
  }
LAB_148eefb69:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eefc7c FUN_148eefc7c body=296 status=ok
// SIG undefined FUN_148eefc7c(void)

void FUN_148eefc7c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [36];
  uint local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14098d926(*(undefined8 *)(param_2 + 0x10));
  if (lVar4 != 0) {
    lVar4 = FUN_1400f6f32(lVar4);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x68) != 0)) {
      lVar4 = FUN_140d1732e(*(longlong *)(lVar4 + 0x68),param_2 + 0x18);
      if (lVar4 != 0) {
        uVar5 = FUN_144a7ba4c(lVar4);
        if (uVar5 != 0) {
          uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
          local_44 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          local_44 = local_44 >> 0x10 ^ local_44;
          FUN_1448d5e3c(&local_40);
          lVar4 = *(longlong *)(local_40 + 0x1c0);
          AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x58));
          *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + 1;
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
          FUN_144240e18(lVar4,param_4,param_2);
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x58));
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eefda6 FUN_148eefda6 body=337 status=ok
// SIG undefined FUN_148eefda6(void)

undefined8
FUN_148eefda6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [44];
  uint local_4c;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_14098d926(*(undefined8 *)(param_2 + 0x10));
  if (lVar5 != 0) {
    lVar5 = FUN_1400f6f32(lVar5);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x68) != 0)) {
      lVar5 = FUN_140d1732e(*(longlong *)(lVar5 + 0x68),param_2 + 0x18);
      if (lVar5 != 0) {
        plVar6 = (longlong *)FUN_144a7ba4c(lVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar3 = ((uint)((ulonglong)plVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar6 >> 4)) *
                  -0x7a143595;
          local_4c = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          local_4c = local_4c >> 0x10 ^ local_4c;
          FUN_1448d5e3c(&local_48);
          lVar5 = *(longlong *)(local_48 + 0x1c0);
          SRWLock = (PSRWLOCK)(lVar5 + 0x58);
          AcquireSRWLockShared(SRWLock);
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
          uVar4 = (**(code **)(*plVar6 + 0x328))(plVar6);
          FUN_1442413ba(lVar5,param_4,param_5,uVar4);
          ReleaseSRWLockShared(SRWLock);
          uVar7 = 1;
          goto LAB_148eefed3;
        }
      }
    }
  }
  uVar7 = 0;
LAB_148eefed3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eeff20 FUN_148eeff20 body=373 status=ok
// SIG undefined FUN_148eeff20(void)

void FUN_148eeff20(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1489351c6();
  if (lVar4 != 0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_1489368b0(lVar4,&local_78);
    lVar4 = local_78;
    lVar10 = (longlong)(int)uStack_70;
    if (lVar10 != 0) {
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar4 + lVar9);
        local_88 = 0;
        uStack_80 = 0;
        uVar5 = FUN_14034f1a8();
        lVar6 = FUN_14477b664(uVar5);
        uVar5 = FUN_14034f1a8();
        uVar7 = FUN_14034f1a8();
        FUN_1402d1bfa(&local_68,uVar7,uVar2);
        lVar3 = local_68;
        if (local_68 != 0) {
          uStack_80 = 0;
        }
        local_90 = local_68;
        uVar7 = FUN_14034f1a8();
        lVar8 = FUN_141459e9e(uVar5,uVar7);
        if (lVar6 != lVar8) {
          uStack_80 = 0;
        }
        uVar5 = FUN_14477b664(lVar8);
        local_88 = FUN_14477b664(uVar5);
        if (local_88 != 0 && lVar3 != 0) {
          uStack_80 = uVar2;
        }
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_148efae7a(param_1,iVar1);
        }
        FUN_148efae32((longlong)iVar1 * 0x18 + *param_1,&local_90);
        lVar9 = lVar9 + 8;
      } while (lVar10 * 8 != lVar9);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ef0096 FUN_148ef0096 body=606 status=ok
// SIG undefined FUN_148ef0096(void)

void FUN_148ef0096(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_140e2014e();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_148ef01e3;
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar5,param_2);
        param_2[2] = lVar7;
        if (lVar7 == 0) goto LAB_148ef01e3;
        lVar6 = param_2[1];
        goto LAB_148ef00e0;
      }
    }
    param_2[2] = 0;
    goto LAB_148ef01e3;
  }
LAB_148ef00e0:
  if (lVar6 == 0) {
    uVar5 = FUN_140e2014e();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
    lVar7 = param_2[2];
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar6 + 0xb8);
      if (plVar1 == (longlong *)0x0) {
LAB_148ef02f1:
        lVar7 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar3 == '\0') goto LAB_148ef02f1;
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar5,param_2);
      }
      param_2[2] = lVar7;
    }
  }
  iVar8 = *(int *)(lVar7 + 0x70) - *(int *)(lVar7 + 0x9c);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
    FUN_1402191ca(param_3);
  }
  plVar1 = (longlong *)(lVar7 + 0x68);
  lVar6 = lVar7 + 0x78;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_58 = lVar6;
  if (*(int *)(lVar7 + 0x90) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar8 = *(int *)(lVar7 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  uVar5 = local_70;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
  iVar4 = local_70._4_4_;
  local_88 = plVar1;
  if ((local_70._4_4_ != iVar8) || (local_70 = uVar5, uStack_58 != lVar6)) {
    do {
      local_70 = uVar5;
      lVar7 = *local_88;
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_3,iVar2);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) =
           *(undefined8 *)((longlong)iVar4 * 0x90 + lVar7);
      local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
      FUN_1449c0562(&local_80);
      iVar4 = local_70._4_4_;
      uVar5 = local_70;
    } while (local_88 != plVar1 ||
             (CONCAT44(uStack_74,uStack_78) != lVar6 || local_70._4_4_ != iVar8));
  }
LAB_148ef01e3:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef02f6 FUN_148ef02f6 body=65 status=ok
// SIG undefined FUN_148ef02f6(void)

void FUN_148ef02f6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144829e72();
  if (cVar1 == '\0') {
    FUN_140a17c8c(param_1,param_2);
  }
  FUN_140b42780(param_1,param_2,param_3);
  return;
}



// FUNCTION 148ef0338 FUN_148ef0338 body=136 status=ok
// SIG undefined FUN_148ef0338(void)

void FUN_148ef0338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148ef03d2(param_1,&local_30);
  if (local_30 != 0) {
    FUN_146552870(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef03d2 FUN_148ef03d2 body=202 status=ok
// SIG undefined FUN_148ef03d2(void)

undefined8 * FUN_148ef03d2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x28) == 0) || (lVar4 = FUN_140c83306(), lVar4 == 0)) ||
     (lVar4 = FUN_1447210f0(lVar4), lVar4 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_14132b09a(&local_28,lVar4);
  *param_2 = 0;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    iVar3 = (int)local_20[1];
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        break;
      }
      LOCK();
      iVar2 = (int)local_20[1];
      bVar5 = iVar3 == iVar2;
      if (bVar5) {
        *(int *)(local_20 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar5);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (param_2[1] != 0) {
      *param_2 = local_28;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef049e FUN_148ef049e body=136 status=ok
// SIG undefined FUN_148ef049e(void)

void FUN_148ef049e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148ef03d2(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1488aea8e(local_30,param_2,param_3);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef0538 FUN_148ef0538 body=45 status=ok
// SIG undefined FUN_148ef0538(void)

void FUN_148ef0538(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14578bab6(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    FUN_143d855c8(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148ef0566 FUN_148ef0566 body=209 status=ok
// SIG undefined FUN_148ef0566(void)

void FUN_148ef0566(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148ef03d2(param_1,&local_40);
  bVar3 = true;
  if (local_40 != 0) {
    cVar4 = FUN_148ef064e(local_40,param_2);
    if (cVar4 != '\0') {
      FUN_1488ae998(local_40,param_2,param_3);
      bVar3 = false;
    }
  }
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
  if (bVar3) {
    lVar5 = FUN_14578bab6(*(undefined8 *)(param_1 + 0x28));
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef064e FUN_148ef064e body=131 status=ok
// SIG undefined FUN_148ef064e(void)

longlong FUN_148ef064e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        bVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x20) == lVar1;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar6);
        if (bVar6) {
          return lVar3;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x20) + 0x18);
      } while (iVar5 != -1);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 148ef06d2 FUN_148ef06d2 body=45 status=ok
// SIG undefined FUN_148ef06d2(void)

void FUN_148ef06d2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14578bab6(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    FUN_1488b0418(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148ef0700 FUN_148ef0700 body=56 status=ok
// SIG undefined FUN_148ef0700(void)

void FUN_148ef0700(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14578bab6(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    FUN_1488b05f8(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 148ef0738 FUN_148ef0738 body=36 status=ok
// SIG undefined FUN_148ef0738(void)

void FUN_148ef0738(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14578bab6(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    FUN_1488b0654(lVar1);
    return;
  }
  return;
}



// FUNCTION 148ef075c FUN_148ef075c body=36 status=ok
// SIG undefined FUN_148ef075c(void)

void FUN_148ef075c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14578bab6(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    FUN_143d85806(lVar1);
    return;
  }
  return;
}



// FUNCTION 148ef0788 FUN_148ef0788 body=132 status=ok
// SIG undefined FUN_148ef0788(void)

void FUN_148ef0788(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0x20;
  *puVar2 = &PTR_FUN_14b9da558;
  puVar2[2] = *param_2;
  *(undefined4 *)(puVar2 + 3) = param_3;
  cVar1 = FUN_144729dda(param_1 + 0x80);
  if (cVar1 != '\0') {
    uVar3 = FUN_14479d2ce(param_1 + 0x80);
    FUN_1409ee7a4(uVar3,puVar2);
    return;
  }
  return;
}



// FUNCTION 148ef080c FUN_148ef080c body=82 status=ok
// SIG undefined FUN_148ef080c(void)

void FUN_148ef080c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x80);
  if (lVar1 != 0) {
    lVar2 = FUN_145a8e568();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148efaf0e(lVar1 + 0x140,0);
      return;
    }
  }
  return;
}



// FUNCTION 148ef085e FUN_148ef085e body=729 status=ok
// SIG undefined FUN_148ef085e(void)

void FUN_148ef085e(longlong *param_1,undefined4 param_2,double *param_3,undefined4 param_4,
                  byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_238 [40];
  double local_210;
  double local_208;
  undefined **local_200;
  ushort local_1f8;
  undefined1 local_1f6;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined2 local_190;
  undefined1 local_18e;
  undefined1 local_188 [184];
  float local_d0;
  float local_cc;
  float local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined8 local_a4;
  byte local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  plVar3 = DAT_14c966ea8;
  uVar4 = DAT_14c966ea0;
  uVar6 = DAT_14c966e98;
  if (lVar5 != 0) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if (DAT_14c966ea8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966ea8 + 1) = (int)DAT_14c966ea8[1] + 1;
      UNLOCK();
    }
    local_1dc = (float)param_3[1];
    local_1e0 = (float)*param_3;
    local_1f8 = (ushort)param_5;
    local_1f6 = 0;
    local_1e8 = 0;
    local_200 = &PTR_FUN_149eda650;
    local_1cc = local_1dc - local_1dc;
    local_1d0 = local_1e0 - local_1e0;
    local_1c8 = &local_98;
    local_1c0 = uVar6;
    local_1b8 = uVar4;
    local_1b0 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_1a8 = 10;
    local_1a0 = 0x3f800000;
    local_19c = 0;
    local_198 = 0;
    local_190 = 0;
    local_18e = 0;
    local_1f4 = param_4;
    local_1f0 = param_4;
    local_1d8 = local_1e0;
    local_1d4 = local_1dc;
    local_194 = param_2;
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
    uVar6 = FUN_1449baec6(lVar5);
    FUN_14039c14e(uVar6,&local_210);
    plVar3 = (longlong *)param_1[5];
    local_c8 = *(float *)(plVar3 + 0x1b);
    local_cc = (float)local_208;
    local_d0 = (float)local_210;
    local_b4 = local_c8 + 0.0;
    local_b0 = local_c8 * 0.0 + 0.0;
    local_a4 = 0;
    local_9c = local_9c & 0xfe;
    local_c4 = 0;
    uStack_bc = 0;
    local_ac = local_b0;
    local_a8 = local_b4;
    (**(code **)(*plVar3 + 0x88))(plVar3,local_188,&local_d0,&local_200);
    FUN_14493db24(local_188);
    plVar3 = local_1b0;
    local_200 = &PTR_FUN_149eda650;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1405535a6(&local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef0b38 FUN_148ef0b38 body=38 status=ok
// SIG undefined FUN_148ef0b38(void)

void FUN_148ef0b38(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0x39) & 0x19) == 0) == (bool)param_2) {
      *(bool *)(lVar1 + 0x208) = (*(byte *)(lVar1 + 0x39) & 0x19) != 0;
      FUN_140fe1f54();
      return;
    }
  }
  return;
}



// FUNCTION 148ef0b5e FUN_148ef0b5e body=67 status=ok
// SIG undefined FUN_148ef0b5e(void)

void FUN_148ef0b5e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140ade790();
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = param_3;
  FUN_145d1a736(param_1,param_3,puVar1[1]);
  return;
}



// FUNCTION 148ef0ba2 FUN_148ef0ba2 body=67 status=ok
// SIG undefined FUN_148ef0ba2(void)

void FUN_148ef0ba2(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_140ade790();
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[1] = param_3;
  FUN_145d1a736(param_1,*puVar1,param_3);
  return;
}



// FUNCTION 148ef0be6 FUN_148ef0be6 body=26 status=ok
// SIG undefined FUN_148ef0be6(void)

undefined4 FUN_148ef0be6(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140ade790();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
  }
  return uVar1;
}



// FUNCTION 148ef0c00 FUN_148ef0c00 body=68 status=ok
// SIG undefined FUN_148ef0c00(void)

void FUN_148ef0c00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140ade790();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = param_3;
    if (*(longlong *)(lVar1 + 0xc) != *(longlong *)(param_1 + 0x1a0)) {
      *(longlong *)(param_1 + 0x1a0) = *(longlong *)(lVar1 + 0xc);
      FUN_14595ffec(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148ef0c44 FUN_148ef0c44 body=68 status=ok
// SIG undefined FUN_148ef0c44(void)

void FUN_148ef0c44(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140ade790();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xc) = param_3;
    if (*(longlong *)(lVar1 + 0xc) != *(longlong *)(param_1 + 0x1a0)) {
      *(longlong *)(param_1 + 0x1a0) = *(longlong *)(lVar1 + 0xc);
      FUN_14595ffec(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148ef0c88 FUN_148ef0c88 body=48 status=ok
// SIG undefined FUN_148ef0c88(void)

void FUN_148ef0c88(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140ade790();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 8) = param_3;
  FUN_145d1a5b6(param_1,param_3);
  return;
}



// FUNCTION 148ef0cb8 FUN_148ef0cb8 body=48 status=ok
// SIG undefined FUN_148ef0cb8(void)

void FUN_148ef0cb8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140ade790();
  if (lVar1 == 0) {
    return;
  }
  *(char *)(lVar1 + 0x14) = (char)param_3;
  FUN_145d1a636(param_1,param_3);
  return;
}



// FUNCTION 148ef0ce8 FUN_148ef0ce8 body=48 status=ok
// SIG undefined FUN_148ef0ce8(void)

void FUN_148ef0ce8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140ade790();
  if (lVar1 == 0) {
    return;
  }
  *(char *)(lVar1 + 0x15) = (char)param_3;
  FUN_145d1a6b6(param_1,param_3);
  return;
}



// FUNCTION 148ef0d18 FUN_148ef0d18 body=336 status=ok
// SIG undefined FUN_148ef0d18(void)

void FUN_148ef0d18(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  bool bVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    FUN_140056680(&local_38);
    iVar1 = (int)param_4[1];
    if (iVar1 == local_30) {
      if (1 < iVar1) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*param_4 + lVar5);
          uVar7 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(local_38 + lVar5);
          if (uVar6 != uVar8) break;
          if (uVar6 == 0) goto LAB_148ef0dcc;
LAB_148ef0d8f:
          lVar5 = lVar5 + 2;
        }
        if ((uVar8 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148ef0d8f;
        }
        if (uVar6 != uVar8) goto LAB_148ef0e5d;
      }
    }
    else if (local_30 + iVar1 != 1) {
LAB_148ef0e5d:
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      goto LAB_148ef0e26;
    }
LAB_148ef0dcc:
    if (param_5 < 0) {
      bVar4 = false;
    }
    else {
      bVar4 = param_5 < *(int *)(lVar2 + 0x140);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if ((bVar4) && (*(int *)(lVar2 + 0x148) != param_5)) {
      *(int *)(lVar2 + 0x148) = param_5;
      *(int *)(lVar2 + 0x14c) = *(int *)(lVar2 + 0x14c) + 1;
      puVar3 = *(ushort **)(lVar2 + 0x80);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
      }
    }
  }
LAB_148ef0e26:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ef0e6a FUN_148ef0e6a body=83 status=ok
// SIG undefined FUN_148ef0e6a(void)

void FUN_148ef0e6a(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x30c) = 0;
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x2b8,*param_2,iVar1);
  FUN_148ef2102(param_1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ef0ebe FUN_148ef0ebe body=1518 status=ok
// SIG undefined FUN_148ef0ebe(void)

void FUN_148ef0ebe(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auStack_228 [36];
  undefined4 local_204;
  longlong *local_200;
  longlong *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  longlong local_1e0 [32];
  undefined1 local_e0 [128];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_148ef1447;
  lVar3 = param_1 + 0x208;
  iVar7 = (int)param_3[1];
  if (iVar7 == DAT_14cbe58a8) {
    if (1 < iVar7) {
      lVar11 = 0;
      while( true ) {
        uVar13 = *(ushort *)(*param_3 + lVar11);
        uVar12 = (ulonglong)uVar13;
        uVar14 = *(ushort *)(DAT_14cbe58a0 + lVar11);
        if (uVar13 != uVar14) break;
        if (uVar13 == 0) goto LAB_148ef0f7b;
LAB_148ef0f4f:
        lVar11 = lVar11 + 2;
      }
      if ((uVar14 | uVar13) < 0x80) {
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar15 = (ulonglong)uVar14;
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar15]) goto LAB_148ef0f4f;
      }
      if (uVar13 != uVar14) goto LAB_148ef0ff5;
    }
LAB_148ef0f7b:
    *(undefined1 *)(param_1 + 0x30c) = 1;
    FUN_1448d5e3c(&local_200,lVar3);
    lVar3 = local_200[0x86];
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xf0));
    plVar5 = local_1f8;
    *(int *)(lVar3 + 0xe8) = *(int *)(lVar3 + 0xe8) + 1;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if ((int)param_2[1] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)*param_2;
    }
    iVar7 = _wtoi(pwVar10);
    *(int *)(lVar3 + 0xd8) = iVar7;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xf0));
    if (0 < *(int *)(lVar4 + 0x1c8)) {
      *(int *)(lVar4 + 0x1d0) = *(int *)(lVar4 + 0x1d0) + 1;
      iVar7 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar7 = 0;
      }
      FUN_1402980a2(*(undefined8 *)(lVar4 + 0x1c0),*param_2,iVar7);
    }
    FUN_148ef1d1e(param_1);
    FUN_148ef17f2(param_1);
    if (*(char *)(param_1 + 0x2b2) != '\x01') goto LAB_148ef1447;
    cVar6 = FUN_144729dda();
    if (cVar6 == '\0') goto LAB_148ef1447;
    iVar7 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar7 = 0;
    }
    *(int *)(lVar4 + 0x1d0) = *(int *)(lVar4 + 0x1d0) + 1;
    if (iVar7 < *(int *)(*(longlong *)(lVar4 + 0x1c0) + 0x20)) goto LAB_148ef1447;
    uVar8 = FUN_14479d2ce(param_1 + 0x30);
    local_204 = 1;
  }
  else {
    if (DAT_14cbe58a8 + iVar7 == 1) goto LAB_148ef0f7b;
LAB_148ef0ff5:
    if (iVar7 == DAT_14cbe58b8) {
      if (1 < iVar7) {
        lVar11 = 0;
        while( true ) {
          uVar13 = *(ushort *)(*param_3 + lVar11);
          uVar12 = (ulonglong)uVar13;
          uVar14 = *(ushort *)(DAT_14cbe58b0 + lVar11);
          if (uVar13 != uVar14) break;
          if (uVar13 == 0) goto LAB_148ef1061;
LAB_148ef1031:
          lVar11 = lVar11 + 2;
        }
        if ((uVar14 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar15 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar15]) goto LAB_148ef1031;
        }
        if (uVar13 != uVar14) goto LAB_148ef123f;
      }
    }
    else if (DAT_14cbe58b8 + iVar7 != 1) {
LAB_148ef123f:
      if (iVar7 == DAT_14cbe58c8) {
        if (1 < iVar7) {
          lVar11 = 0;
          while( true ) {
            uVar13 = *(ushort *)(*param_3 + lVar11);
            uVar12 = (ulonglong)uVar13;
            uVar14 = *(ushort *)(DAT_14cbe58c0 + lVar11);
            if (uVar13 != uVar14) break;
            if (uVar13 == 0) goto LAB_148ef137d;
LAB_148ef1283:
            lVar11 = lVar11 + 2;
          }
          if ((uVar14 | uVar13) < 0x80) {
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            uVar15 = (ulonglong)uVar14;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar15]) goto LAB_148ef1283;
          }
          if (uVar13 != uVar14) goto LAB_148ef1447;
        }
      }
      else if (DAT_14cbe58c8 + iVar7 != 1) goto LAB_148ef1447;
LAB_148ef137d:
      *(undefined1 *)(param_1 + 0x30c) = 3;
      FUN_1448d5e3c(&local_200,lVar3);
      lVar3 = local_200[0x86];
      AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xf0));
      plVar5 = local_1f8;
      *(int *)(lVar3 + 0xe8) = *(int *)(lVar3 + 0xe8) + 1;
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if ((int)param_2[1] == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*param_2;
      }
      iVar7 = _wtoi(pwVar10);
      *(int *)(lVar3 + 0xe0) = iVar7;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xf0));
      if (2 < *(int *)(lVar4 + 0x1c8)) {
        *(int *)(lVar4 + 0x1d0) = *(int *)(lVar4 + 0x1d0) + 1;
        iVar7 = (int)param_2[1] + -1;
        if ((int)param_2[1] == 0) {
          iVar7 = 0;
        }
        FUN_1402980a2(*(longlong *)(lVar4 + 0x1c0) + 0x50,*param_2,iVar7);
      }
      FUN_148ef1fb6(param_1);
      FUN_148ef17f2(param_1);
      goto LAB_148ef1447;
    }
LAB_148ef1061:
    *(undefined1 *)(param_1 + 0x30c) = 2;
    FUN_1448d5e3c(&local_200,lVar3);
    lVar3 = local_200[0x86];
    AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xf0));
    plVar5 = local_1f8;
    *(int *)(lVar3 + 0xe8) = *(int *)(lVar3 + 0xe8) + 1;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if ((int)param_2[1] == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)*param_2;
    }
    iVar7 = _wtoi(pwVar10);
    *(int *)(lVar3 + 0xdc) = iVar7;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xf0));
    if (1 < *(int *)(lVar4 + 0x1c8)) {
      *(int *)(lVar4 + 0x1d0) = *(int *)(lVar4 + 0x1d0) + 1;
      iVar7 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar7 = 0;
      }
      FUN_1402980a2(*(longlong *)(lVar4 + 0x1c0) + 0x28,*param_2,iVar7);
    }
    FUN_148ef1e6a(param_1);
    FUN_148ef17f2(param_1);
    if (*(char *)(param_1 + 0x2b2) != '\x01') goto LAB_148ef1447;
    cVar6 = FUN_144729dda();
    if (cVar6 == '\0') goto LAB_148ef1447;
    iVar7 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar7 = 0;
    }
    *(int *)(lVar4 + 0x1d0) = *(int *)(lVar4 + 0x1d0) + 1;
    if (iVar7 < *(int *)(*(longlong *)(lVar4 + 0x1c0) + 0x48)) goto LAB_148ef1447;
    uVar8 = FUN_14479d2ce(param_1 + 0x30);
    local_204 = 2;
  }
  local_200 = local_1e0;
  local_1e8 = '\0';
  local_1f0 = local_e0;
  local_1f8 = local_200;
  pwVar10 = (wchar_t *)FUN_140c7f682(param_1,L"FocusInput",&local_200);
  local_60 = 0;
  if (pwVar10 == (wchar_t *)0x0) {
    local_58 = 0;
    local_50 = 0;
  }
  else {
    sVar9 = wcslen(pwVar10);
    FUN_1446fe5a4(local_e0,pwVar10,sVar9 & 0xffffffff,1);
  }
  FUN_140c7f7d4(uVar8,local_58,&local_204);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_1e8 == '\x01') {
    FUN_1400020a8(local_200);
  }
LAB_148ef1447:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ef14ca FUN_148ef14ca body=807 status=ok
// SIG undefined FUN_148ef14ca(void)

void FUN_148ef14ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((lVar5 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_58,param_1 + 0x208);
    lVar6 = *(longlong *)(local_58 + 0x430);
    AcquireSRWLockShared((PSRWLOCK)(lVar6 + 0xf0));
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (0 < *(int *)(lVar6 + 200)) {
      FUN_140d47191(*(undefined8 *)(lVar5 + 0x238),*(undefined4 *)(lVar5 + 0x240));
      *(undefined4 *)(lVar5 + 0x240) = 0;
      if (*(int *)(lVar5 + 0x244) != 0) {
        FUN_148e6b6d0(lVar5 + 0x238,0);
      }
      if ((longlong)*(int *)(lVar6 + 200) != 0) {
        lVar9 = *(longlong *)(lVar6 + 0xc0);
        lVar8 = (longlong)*(int *)(lVar6 + 200) * 0x30;
        do {
          lVar7 = FUN_1410d1d12(lVar5 + 0x238);
          FUN_144a787a6(lVar7 + 0x10,lVar9);
          *(byte *)(lVar7 + 0x89) = *(byte *)(lVar7 + 0x89) & 0xfe;
          *(byte *)(lVar7 + 0x88) = *(byte *)(lVar7 + 0x88) & 0x9f | 0x20;
          lVar9 = lVar9 + 0x30;
          lVar8 = lVar8 + -0x30;
        } while (lVar8 != 0);
      }
      pbVar3 = (byte *)(*(longlong *)(lVar5 + 0x238) + 0x88 +
                       (longlong)*(int *)(lVar6 + 0xd0) * 0x90);
      *pbVar3 = *pbVar3 | 0x40;
      iVar4 = *(int *)(lVar6 + 0xd0);
      *(int *)(lVar5 + 0x1e8) = iVar4;
      FUN_144a787a6(lVar5 + 0x1f8,(longlong)iVar4 * 0x30 + *(longlong *)(lVar6 + 0xc0));
      *(undefined1 *)(lVar5 + 0x248) = *(undefined1 *)(lVar5 + 0x1a0);
      FUN_140d47191(*(undefined8 *)(lVar5 + 0x2b8),*(undefined4 *)(lVar5 + 0x2c0));
      *(undefined4 *)(lVar5 + 0x2c0) = 0;
      if (*(int *)(lVar5 + 0x2c4) != 0) {
        FUN_148e6b6d0(lVar5 + 0x2b8,0);
      }
      lVar9 = (longlong)*(int *)(lVar6 + 0xd0) * 0x30;
      lVar8 = (longlong)*(int *)(*(longlong *)(lVar6 + 0xc0) + 0x20 + lVar9);
      if (lVar8 != 0) {
        lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0xc0) + 0x18 + lVar9);
        lVar8 = lVar8 * 0x20 + lVar9;
        do {
          lVar7 = FUN_1410d1d12(lVar5 + 0x2b8);
          FUN_144a787a6(lVar7 + 0x10,lVar9);
          FUN_144a787a6(lVar7,lVar9 + 0x10);
          *(byte *)(lVar7 + 0x89) = *(byte *)(lVar7 + 0x89) & 0xfe;
          *(byte *)(lVar7 + 0x88) = *(byte *)(lVar7 + 0x88) & 0x9f | 0x20;
          lVar9 = lVar9 + 0x20;
        } while (lVar9 != lVar8);
      }
      pbVar3 = (byte *)(*(longlong *)(lVar5 + 0x2b8) + 0x88 +
                       (longlong)*(int *)(lVar6 + 0xd4) * 0x90);
      *pbVar3 = *pbVar3 | 0x40;
      iVar4 = *(int *)(lVar6 + 0xd4);
      *(int *)(lVar5 + 0x268) = iVar4;
      FUN_144a787a6(lVar5 + 0x278,
                    (longlong)iVar4 * 0x20 +
                    *(longlong *)
                     (*(longlong *)(lVar6 + 0xc0) + 0x18 + (longlong)*(int *)(lVar6 + 0xd0) * 0x30))
      ;
      *(undefined1 *)(lVar5 + 0x2c8) = *(undefined1 *)(lVar5 + 0x1a0);
      FUN_144a787a6(param_1 + 0x2b8,
                    (longlong)*(int *)(lVar6 + 0xd4) * 0x20 +
                    *(longlong *)
                     (*(longlong *)(lVar6 + 0xc0) + 0x18 + (longlong)*(int *)(lVar6 + 0xd0) * 0x30)
                    + 0x10);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar6 + 0xf0));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef17f2 FUN_148ef17f2 body=1322 status=ok
// SIG undefined FUN_148ef17f2(void)

void FUN_148ef17f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  ushort *puVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong **local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong alStack_98 [2];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_148ef1cad;
  FUN_1448d5e3c(&local_a8,param_1 + 0x208);
  lVar4 = local_a8[0x86];
  AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0xf0));
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  iVar9 = *(int *)(lVar4 + 0xdc);
  if (*(int *)(lVar4 + 0xdc) < 0) {
    iVar9 = 1;
  }
  iVar8 = *(int *)(lVar4 + 0xd8);
  if (*(int *)(lVar4 + 0xd8) < 0) {
    iVar8 = 1;
  }
  iVar11 = 1;
  if (-1 < *(int *)(lVar4 + 0xe0)) {
    iVar11 = *(int *)(lVar4 + 0xe0);
  }
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  uVar7 = FUN_1402131c4(iVar11,iVar8,iVar9,0);
  *(undefined1 *)(param_1 + 0x2b2) = uVar7;
  bVar13 = true;
  if ((*(int *)(lVar4 + 0xe0) != -1) && (*(int *)(lVar4 + 0xd8) != -1)) {
    bVar13 = *(int *)(lVar4 + 0xdc) == -1;
  }
  *(bool *)(param_1 + 0x2b3) = bVar13;
  iVar9 = *(int *)(lVar4 + 0xe0);
  FUN_1402160b8(&local_a8);
  iVar8 = FUN_145c31f02(&local_a8);
  *(byte *)(param_1 + 0x2b2) = *(byte *)(param_1 + 0x2b2) & iVar9 <= iVar8;
  iVar9 = *(int *)(lVar4 + 0xe0);
  FUN_1402160b8(&local_a8);
  iVar8 = FUN_145c31f02(&local_a8);
  if (iVar9 == iVar8) {
    iVar9 = *(int *)(lVar4 + 0xd8);
    FUN_1402160b8(&local_a8);
    iVar8 = FUN_1458c553e(&local_a8);
    *(byte *)(param_1 + 0x2b2) = *(byte *)(param_1 + 0x2b2) & iVar9 <= iVar8;
  }
  iVar9 = *(int *)(lVar4 + 0xe0);
  FUN_1402160b8(&local_a8);
  iVar8 = FUN_145c31f02(&local_a8);
  if (iVar9 == iVar8) {
    iVar9 = *(int *)(lVar4 + 0xd8);
    FUN_1402160b8(&local_b8);
    iVar8 = FUN_1458c553e(&local_b8);
    if (iVar9 == iVar8) {
      iVar9 = *(int *)(lVar4 + 0xdc);
      FUN_1402160b8(&local_a8);
      iVar8 = FUN_145c31eb8(&local_a8);
      *(byte *)(param_1 + 0x2b2) = *(byte *)(param_1 + 0x2b2) & iVar9 <= iVar8;
    }
  }
  iVar9 = *(int *)(lVar3 + 0x154);
  if (*(char *)(param_1 + 0x2b2) == '\0') {
    if (*(char *)(lVar3 + 0x150) == '\0') {
      iVar9 = iVar9 + 1;
LAB_148ef1c49:
      *(undefined1 *)(lVar3 + 0x150) = 1;
      *(int *)(lVar3 + 0x154) = iVar9;
    }
    else if (iVar9 == 0) {
      iVar9 = 1;
      goto LAB_148ef1c49;
    }
    FUN_1410d1eba(&local_a8,&DAT_14cbe58d0);
    FUN_14003c038(lVar3 + 0x158,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  else {
    if (*(char *)(lVar3 + 0x150) == '\0') {
      if (iVar9 == 0) {
        iVar9 = 1;
        goto LAB_148ef19ff;
      }
    }
    else {
      iVar9 = iVar9 + 1;
LAB_148ef19ff:
      *(undefined1 *)(lVar3 + 0x150) = 0;
      *(int *)(lVar3 + 0x154) = iVar9;
    }
    uVar10 = FUN_140e82300();
    FUN_1410e88ee(lVar3 + 0x158,uVar10);
    if (*(char *)(lVar3 + 0x128) == '\x01') {
      local_e8 = (void *)0x0;
      local_e0 = *(int *)(param_1 + 0x2f0);
      lVar12 = (longlong)local_e0;
      pvVar5 = *(void **)(param_1 + 0x2e8);
      if (lVar12 == 0) {
        local_dc = 0;
      }
      else {
        FUN_1446dd670(&local_e8,local_e0,0);
        memcpy(local_e8,pvVar5,lVar12 * 2);
      }
      FUN_14146ec20(&local_a8,&local_e8);
      local_f8 = (void *)0x0;
      local_f0 = *(int *)(param_1 + 0x2e0);
      lVar12 = (longlong)local_f0;
      pvVar5 = *(void **)(param_1 + 0x2d8);
      if (lVar12 == 0) {
        local_ec = 0;
      }
      else {
        FUN_1446dd670(&local_f8,local_f0,0);
        memcpy(local_f8,pvVar5,lVar12 * 2);
      }
      FUN_14146ec20(local_88,&local_f8);
      local_108 = (void *)0x0;
      local_100 = *(int *)(param_1 + 0x2d0);
      lVar12 = (longlong)local_100;
      pvVar5 = *(void **)(param_1 + 0x2c8);
      if (lVar12 == 0) {
        local_fc = 0;
      }
      else {
        FUN_1446dd670(&local_108,local_100,0);
        memcpy(local_108,pvVar5,lVar12 * 2);
      }
      FUN_14146ec20(local_68,&local_108);
      local_d0 = &local_48;
      local_d8 = &local_a8;
      FUN_1407adb6e(&local_c8);
      FUN_140230a2e(&local_b8,L"{0}-{1}-{2}",&local_c8);
      if ((longlong *)(param_1 + 0x2b8) == &local_b8) {
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x2b8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x2b8) = local_b8;
        local_b8 = 0;
        *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_b0;
        *(undefined4 *)(param_1 + 0x2c4) = local_b0._4_4_;
        local_b0 = 0;
      }
      FUN_1407adb3e(local_c8,local_c0);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      lVar12 = 0x60;
      do {
        if (*(longlong *)((longlong)&local_b8 + lVar12) != 0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + -0x20;
      } while (lVar12 != 0);
    }
  }
  puVar6 = *(ushort **)(lVar3 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0xf0));
LAB_148ef1cad:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ef1d1e FUN_148ef1d1e body=331 status=ok
// SIG undefined FUN_148ef1d1e(void)

void FUN_148ef1d1e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  lVar3 = *(longlong *)(local_40 + 0x430);
  SRWLock = (PSRWLOCK)(lVar3 + 0xf0);
  AcquireSRWLockShared(SRWLock);
  plVar5 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if (*(int *)(lVar3 + 0xd8) < 1) {
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    if (*(int *)(param_1 + 0x2e4) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x2d8),0);
    }
    puVar4 = *(undefined2 **)(param_1 + 0x2d8);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
  else {
    FUN_140002266(&local_40,L"%02d");
    if ((longlong *)(param_1 + 0x2d8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x2d8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2d8) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 0x2e0) = local_38;
      *(undefined4 *)(param_1 + 0x2e4) = uStack_34;
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef1e6a FUN_148ef1e6a body=331 status=ok
// SIG undefined FUN_148ef1e6a(void)

void FUN_148ef1e6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  lVar3 = *(longlong *)(local_40 + 0x430);
  SRWLock = (PSRWLOCK)(lVar3 + 0xf0);
  AcquireSRWLockShared(SRWLock);
  plVar5 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if (*(int *)(lVar3 + 0xdc) < 1) {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    if (*(int *)(param_1 + 0x2d4) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x2c8),0);
    }
    puVar4 = *(undefined2 **)(param_1 + 0x2c8);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
  else {
    FUN_140002266(&local_40,L"%02d");
    if ((longlong *)(param_1 + 0x2c8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2c8) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 0x2d0) = local_38;
      *(undefined4 *)(param_1 + 0x2d4) = uStack_34;
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef1fb6 FUN_148ef1fb6 body=331 status=ok
// SIG undefined FUN_148ef1fb6(void)

void FUN_148ef1fb6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  lVar3 = *(longlong *)(local_40 + 0x430);
  SRWLock = (PSRWLOCK)(lVar3 + 0xf0);
  AcquireSRWLockShared(SRWLock);
  plVar5 = (longlong *)CONCAT44(uStack_34,local_38);
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
  if (*(int *)(lVar3 + 0xe0) < 1) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    if (*(int *)(param_1 + 0x2f4) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x2e8),0);
    }
    puVar4 = *(undefined2 **)(param_1 + 0x2e8);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
  else {
    FUN_140002266(&local_40,L"%04d");
    if ((longlong *)(param_1 + 0x2e8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x2e8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2e8) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 0x2f0) = local_38;
      *(undefined4 *)(param_1 + 0x2f4) = uStack_34;
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef2102 FUN_148ef2102 body=131 status=ok
// SIG undefined FUN_148ef2102(void)

void FUN_148ef2102(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x2b4) != '\x01') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 0x150) == '\0') {
    if (*(int *)(lVar1 + 0x154) != 0) goto LAB_148ef213e;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x154) + 1;
  }
  *(undefined1 *)(lVar1 + 0x150) = 0;
  *(int *)(lVar1 + 0x154) = iVar3;
LAB_148ef213e:
  uVar4 = FUN_140e82300();
  FUN_1410e88ee(lVar1 + 0x158,uVar4);
  puVar2 = *(ushort **)(lVar1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  return;
}



// FUNCTION 148ef2186 FUN_148ef2186 body=1456 status=ok
// SIG undefined FUN_148ef2186(void)

void FUN_148ef2186(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  void *pvVar4;
  longlong *plVar5;
  ushort *puVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  size_t sVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_228 [40];
  void *local_200;
  int local_1f8;
  undefined4 local_1f4;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined1 *local_1e0;
  char local_1d8;
  longlong local_1d0 [32];
  undefined1 local_d0 [128];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_228;
  puVar9 = (undefined8 *)FUN_1447a1f4a(param_2);
  local_200 = (void *)0x0;
  local_1f8 = *(int *)(puVar9 + 1);
  lVar14 = (longlong)local_1f8;
  pvVar4 = (void *)*puVar9;
  if (lVar14 == 0) {
    local_1f4 = 0;
  }
  else {
    FUN_1446dd670(&local_200,local_1f8,0);
    memcpy(local_200,pvVar4,lVar14 * 2);
  }
  if (param_3 == '\x01') {
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    plVar5 = *(longlong **)(param_1 + 0x300);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x300) = 0;
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
    iVar8 = local_1f8;
    pvVar4 = local_200;
    ppvVar3 = (void **)(param_1 + 0x2b8);
    if (ppvVar3 != &local_200) {
      lVar14 = (longlong)local_1f8;
      *(int *)(param_1 + 0x2c0) = local_1f8;
      if (local_1f8 == 0 && *(int *)(param_1 + 0x2c4) == 0) {
        *(undefined4 *)(param_1 + 0x2c4) = 0;
      }
      else {
        FUN_1446dd670(ppvVar3,local_1f8);
        if (iVar8 != 0) {
          memcpy(*ppvVar3,pvVar4,lVar14 * 2);
        }
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x288);
    if (lVar14 != 0) {
      cVar7 = *(char *)(param_1 + 0x30c);
      if (cVar7 == '\x01') {
        if (0 < *(int *)(lVar14 + 0x1c8)) {
          FUN_1448d5e3c(&local_1f0,param_1 + 0x208);
          lVar13 = local_1f0[0x86];
          AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0xf0));
          plVar5 = local_1e8;
          *(int *)(lVar13 + 0xe8) = *(int *)(lVar13 + 0xe8) + 1;
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1e8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_1e8)(local_1e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (*(int *)(param_1 + 0x2c0) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *ppvVar3;
          }
          iVar8 = _wtoi(pwVar11);
          *(int *)(lVar13 + 0xd8) = iVar8;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0xf0));
          FUN_148ef1d1e(param_1);
          *(int *)(lVar14 + 0x1d0) = *(int *)(lVar14 + 0x1d0) + 1;
          lVar13 = *(longlong *)(lVar14 + 0x1c0);
          iVar8 = *(int *)(param_1 + 0x2e0) + -1;
          if (*(int *)(param_1 + 0x2e0) == 0) {
            iVar8 = 0;
          }
          uVar10 = *(undefined8 *)(param_1 + 0x2d8);
LAB_148ef2716:
          FUN_1402980a2(lVar13,uVar10,iVar8);
          FUN_148ef17f2(param_1);
        }
      }
      else if (cVar7 == '\x02') {
        if (1 < *(int *)(lVar14 + 0x1c8)) {
          FUN_1448d5e3c(&local_1f0,param_1 + 0x208);
          lVar13 = local_1f0[0x86];
          AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0xf0));
          plVar5 = local_1e8;
          *(int *)(lVar13 + 0xe8) = *(int *)(lVar13 + 0xe8) + 1;
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1e8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_1e8)(local_1e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (*(int *)(param_1 + 0x2c0) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *ppvVar3;
          }
          iVar8 = _wtoi(pwVar11);
          *(int *)(lVar13 + 0xdc) = iVar8;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0xf0));
          FUN_148ef1e6a(param_1);
          *(int *)(lVar14 + 0x1d0) = *(int *)(lVar14 + 0x1d0) + 1;
          lVar13 = *(longlong *)(lVar14 + 0x1c0) + 0x28;
          iVar8 = *(int *)(param_1 + 0x2d0) + -1;
          if (*(int *)(param_1 + 0x2d0) == 0) {
            iVar8 = 0;
          }
          uVar10 = *(undefined8 *)(param_1 + 0x2c8);
          goto LAB_148ef2716;
        }
      }
      else if (cVar7 == '\x03') {
        if (2 < *(int *)(lVar14 + 0x1c8)) {
          FUN_1448d5e3c(&local_1f0,param_1 + 0x208);
          lVar13 = local_1f0[0x86];
          AcquireSRWLockExclusive((PSRWLOCK)(lVar13 + 0xf0));
          plVar5 = local_1e8;
          *(int *)(lVar13 + 0xe8) = *(int *)(lVar13 + 0xe8) + 1;
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1e8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_1e8)(local_1e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (*(int *)(param_1 + 0x2c0) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *ppvVar3;
          }
          iVar8 = _wtoi(pwVar11);
          *(int *)(lVar13 + 0xe0) = iVar8;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar13 + 0xf0));
          FUN_148ef1fb6(param_1);
          *(int *)(lVar14 + 0x1d0) = *(int *)(lVar14 + 0x1d0) + 1;
          lVar13 = *(longlong *)(lVar14 + 0x1c0) + 0x50;
          iVar8 = *(int *)(param_1 + 0x2f0) + -1;
          if (*(int *)(param_1 + 0x2f0) == 0) {
            iVar8 = 0;
          }
          uVar10 = *(undefined8 *)(param_1 + 0x2e8);
          goto LAB_148ef2716;
        }
      }
      else {
        if (0 < *(int *)(lVar14 + 0x1c8)) {
          *(int *)(lVar14 + 0x1d0) = *(int *)(lVar14 + 0x1d0) + 1;
          iVar8 = *(int *)(param_1 + 0x2c0) + -1;
          if (*(int *)(param_1 + 0x2c0) == 0) {
            iVar8 = 0;
          }
          FUN_1402980a2(*(undefined8 *)(lVar14 + 0x1c0),*(undefined8 *)(param_1 + 0x2b8),iVar8);
        }
        FUN_148ef2102(param_1);
      }
      puVar6 = *(ushort **)(lVar14 + 0x80);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar14 + 0x78) & 0x3f));
      }
    }
  }
  else {
    if (param_3 != '\0') goto LAB_148ef2520;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    plVar5 = *(longlong **)(param_1 + 0x300);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x300) = 0;
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
  }
  cVar7 = FUN_144729dda(param_1 + 0x30);
  if (cVar7 != '\0') {
    uVar10 = FUN_14479d2ce(param_1 + 0x30);
    local_1f0 = local_1d0;
    local_1d8 = '\0';
    local_1e0 = local_d0;
    local_1e8 = local_1f0;
    pwVar11 = (wchar_t *)FUN_140c7f682(param_1,L"VirtualKeyboardTextInputComplete",&local_1f0);
    local_50 = 0;
    if (pwVar11 == (wchar_t *)0x0) {
      local_48 = 0;
      local_40 = 0;
    }
    else {
      sVar12 = wcslen(pwVar11);
      FUN_1446fe5a4(local_d0,pwVar11,sVar12 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar10,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_1d8 == '\x01') {
      FUN_1400020a8(local_1f0);
    }
  }
LAB_148ef2520:
  if (local_200 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef2738 FUN_148ef2738 body=520 status=ok
// SIG undefined FUN_148ef2738(void)

void FUN_148ef2738(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  
  plVar3 = (longlong *)FUN_140489acc();
  if (((plVar3 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*plVar3 + 0x410))(plVar3), cVar2 == '\0')) ||
     ((*(byte *)(param_1 + 0x8d) & 0x20) == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x30c) = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 2) goto LAB_148ef28ff;
  if (iVar1 == DAT_14cbe58a8) {
    lVar6 = 0;
    while( true ) {
      uVar8 = *(ushort *)(*param_2 + lVar6);
      uVar7 = (ulonglong)uVar8;
      uVar10 = *(ushort *)(DAT_14cbe58a0 + lVar6);
      if (uVar8 != uVar10) break;
      if (uVar8 == 0) goto LAB_148ef28d3;
LAB_148ef27c7:
      lVar6 = lVar6 + 2;
    }
    if ((uVar10 | uVar8) < 0x80) {
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar9 = (ulonglong)uVar10;
      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148ef27c7;
    }
    if (uVar8 != uVar10) goto LAB_148ef27f6;
LAB_148ef28d3:
    uVar5 = 1;
    lVar6 = 0x2e0;
    lVar4 = 0x2d8;
  }
  else {
    if (DAT_14cbe58a8 + iVar1 == 1) goto LAB_148ef28d3;
LAB_148ef27f6:
    if (iVar1 == DAT_14cbe58b8) {
      lVar6 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*param_2 + lVar6);
        uVar7 = (ulonglong)uVar8;
        uVar10 = *(ushort *)(DAT_14cbe58b0 + lVar6);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_148ef291d;
LAB_148ef2831:
        lVar6 = lVar6 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148ef2831;
      }
      if (uVar8 != uVar10) goto LAB_148ef2860;
LAB_148ef291d:
      uVar5 = 2;
      lVar6 = 0x2d0;
      lVar4 = 0x2c8;
    }
    else {
      if (DAT_14cbe58b8 + iVar1 == 1) goto LAB_148ef291d;
LAB_148ef2860:
      if (iVar1 == DAT_14cbe58c8) {
        lVar6 = 0;
        while( true ) {
          uVar8 = *(ushort *)(*param_2 + lVar6);
          uVar7 = (ulonglong)uVar8;
          uVar10 = *(ushort *)(DAT_14cbe58c0 + lVar6);
          if (uVar8 != uVar10) break;
          if (uVar8 == 0) goto LAB_148ef2932;
LAB_148ef289a:
          lVar6 = lVar6 + 2;
        }
        if ((uVar10 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_148ef289a;
        }
        if (uVar8 != uVar10) goto LAB_148ef28ff;
      }
      else if (DAT_14cbe58c8 + iVar1 != 1) goto LAB_148ef28ff;
LAB_148ef2932:
      uVar5 = 3;
      lVar6 = 0x2f0;
      lVar4 = 0x2e8;
    }
  }
  iVar1 = *(int *)(param_1 + lVar6) + -1;
  if (*(int *)(param_1 + lVar6) == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x2b8,*(undefined8 *)(param_1 + lVar4),iVar1);
  *(undefined1 *)(param_1 + 0x30c) = uVar5;
LAB_148ef28ff:
  FUN_144333842(param_1,param_1 + 0x2b8);
  return;
}



// FUNCTION 148ef2940 FUN_148ef2940 body=342 status=ok
// SIG undefined FUN_148ef2940(void)

void FUN_148ef2940(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  longlong lVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return;
  }
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbe5868) {
    if (1 < iVar1) {
      lVar10 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar10);
        uVar7 = (ulonglong)uVar5;
        uVar6 = *(ushort *)(DAT_14cbe5860 + lVar10);
        if (uVar5 != uVar6) break;
        if (uVar5 == 0) goto LAB_148ef29cf;
LAB_148ef2999:
        lVar10 = lVar10 + 2;
      }
      if ((uVar6 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar8 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar8]) goto LAB_148ef2999;
      }
      if (uVar5 != uVar6) goto LAB_148ef2a15;
    }
LAB_148ef29cf:
    uVar9 = 1;
    uVar4 = 0;
  }
  else {
    if (DAT_14cbe5868 + iVar1 == 1) goto LAB_148ef29cf;
LAB_148ef2a15:
    if (iVar1 == DAT_14cbe5878) {
      if (1 < iVar1) {
        lVar10 = 0;
        while( true ) {
          uVar5 = *(ushort *)(*param_2 + lVar10);
          uVar7 = (ulonglong)uVar5;
          uVar6 = *(ushort *)(DAT_14cbe5870 + lVar10);
          if (uVar5 != uVar6) break;
          if (uVar5 == 0) goto LAB_148ef2a8e;
LAB_148ef2a51:
          lVar10 = lVar10 + 2;
        }
        if ((uVar6 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar8 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar8]) goto LAB_148ef2a51;
        }
        if (uVar5 != uVar6) goto LAB_148ef29f0;
      }
    }
    else if (DAT_14cbe5878 + iVar1 != 1) goto LAB_148ef29f0;
LAB_148ef2a8e:
    uVar4 = 1;
    uVar9 = 0;
  }
  *(undefined1 *)(lVar2 + 0x1f0) = uVar9;
  *(undefined1 *)(lVar2 + 0x270) = uVar4;
  FUN_140de1078((char)param_1,&DAT_14cbe5880,0,0);
LAB_148ef29f0:
  puVar3 = *(ushort **)(lVar2 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ef2a96 FUN_148ef2a96 body=737 status=ok
// SIG undefined FUN_148ef2a96(void)

void FUN_148ef2a96(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  wchar_t *_Str;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  undefined1 auStack_228 [44];
  undefined4 local_1fc;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined1 *local_1e8;
  char local_1e0;
  longlong local_1d8 [32];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(longlong *)(param_1 + 0x288) == 0) goto LAB_148ef2d0a;
  FUN_1448d5e3c(&local_1f8);
  lVar4 = local_1f8[0x86];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xf0));
  plVar5 = local_1f0;
  *(int *)(lVar4 + 0xe8) = *(int *)(lVar4 + 0xe8) + 1;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  iVar3 = (int)param_2[1];
  if (iVar3 == DAT_14cbe5868) {
    if (1 < iVar3) {
      lVar9 = 0;
      while( true ) {
        uVar11 = *(ushort *)(*param_2 + lVar9);
        uVar10 = (ulonglong)uVar11;
        uVar13 = *(ushort *)(DAT_14cbe5860 + lVar9);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_148ef2c21;
LAB_148ef2b77:
        lVar9 = lVar9 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        uVar12 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_148ef2b77;
      }
      if (uVar11 != uVar13) goto LAB_148ef2ba2;
    }
LAB_148ef2c21:
    if (*(int *)(lVar4 + 0xd0) != param_3) {
      *(int *)(lVar4 + 0xd0) = param_3;
      *(undefined4 *)(lVar4 + 0xd4) = 0;
    }
    cVar6 = FUN_144729dda(param_1 + 0x30);
    if (cVar6 != '\0') {
      uVar7 = FUN_14479d2ce(param_1 + 0x30);
      local_1fc = 1;
      local_1f8 = local_1d8;
      local_1e0 = '\0';
      local_1e8 = local_d8;
      local_1f0 = local_1f8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"FocusInput",&local_1f8);
      local_58 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar8 = wcslen(_Str);
        FUN_1446fe5a4(local_d8,_Str,sVar8 & 0xffffffff,1);
      }
      FUN_140c7f7d4(uVar7,local_50,&local_1fc);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_1e0 == '\x01') {
        FUN_1400020a8(local_1f8);
      }
    }
  }
  else {
    if (DAT_14cbe5868 + iVar3 == 1) goto LAB_148ef2c21;
LAB_148ef2ba2:
    if (iVar3 == DAT_14cbe5878) {
      if (1 < iVar3) {
        lVar9 = 0;
        while( true ) {
          uVar11 = *(ushort *)(*param_2 + lVar9);
          uVar10 = (ulonglong)uVar11;
          uVar13 = *(ushort *)(DAT_14cbe5870 + lVar9);
          if (uVar11 != uVar13) break;
          if (uVar11 == 0) goto LAB_148ef2d58;
LAB_148ef2be5:
          lVar9 = lVar9 + 2;
        }
        if ((uVar13 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_148ef2be5;
        }
        if (uVar11 != uVar13) goto LAB_148ef2d01;
      }
LAB_148ef2d58:
      if (*(int *)(lVar4 + 0xd4) != param_3) {
        *(int *)(lVar4 + 0xd4) = param_3;
      }
    }
    else if (DAT_14cbe5878 + iVar3 == 1) goto LAB_148ef2d58;
  }
LAB_148ef2d01:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xf0));
LAB_148ef2d0a:
  if ((local_40 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ef2d78 FUN_148ef2d78 body=189 status=ok
// SIG undefined FUN_148ef2d78(void)

void FUN_148ef2d78(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148ef2f52;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ef2e36(param_1,param_2,&DAT_14cbc9d98,param_1);
      local_38 = (code *)&DAT_148ef2fca;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ef2e36(param_1,param_2,&DAT_14cbc9da0,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef2e36 FUN_148ef2e36 body=282 status=ok
// SIG undefined FUN_148ef2e36(void)

void FUN_148ef2e36(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  uVar3 = FUN_14433abb4(param_2,param_3,param_4);
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



// FUNCTION 148ef2f52 FUN_148ef2f52 body=119 status=ok
// SIG undefined FUN_148ef2f52(void)

void FUN_148ef2f52(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x219) = 0;
    puVar1 = *(ushort **)(lVar2 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
    lVar2 = FUN_140391552(param_1);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar3 = &PTR_FUN_14b9da870;
      FUN_14039144e(lVar2,puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148ef2fcc FUN_148ef2fcc body=214 status=ok
// SIG undefined FUN_148ef2fcc(void)

void FUN_148ef2fcc(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 200))) {
      lVar2 = *(longlong *)(lVar2 + 0xc0);
      lVar3 = FUN_140391552();
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar4 = &PTR_FUN_14b9da890;
        puVar4[1] = 0;
        iVar1 = *(int *)(lVar2 + 0x48 + (ulonglong)param_2 * 0x60);
        _Src = *(void **)(lVar2 + 0x40 + (ulonglong)param_2 * 0x60);
        *(int *)(puVar4 + 2) = iVar1;
        if ((longlong)iVar1 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
        }
        else {
          FUN_1446dd670(puVar4 + 1,iVar1,0);
          memcpy((void *)puVar4[1],_Src,(longlong)iVar1 * 2);
        }
        FUN_14039144e(lVar3,puVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ef30da FUN_148ef30da body=400 status=ok
// SIG undefined FUN_148ef30da(void)

void FUN_148ef30da(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbe5a80) {
      FUN_144b3d300(&DAT_14cbe5a80);
      if (DAT_14cbe5a80 == -1) {
        FUN_144a5dc74(&DAT_14cbe5a70);
        atexit((_func_5014 *)&LAB_144333c57);
        _Init_thread_footer(&DAT_14cbe5a80);
      }
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"SortHeaderText",0);
    FUN_140ac6c96(&local_58,&DAT_14cbe5a70);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if ((-1 < param_3) && (param_3 < *(int *)(lVar3 + 0xf8))) {
      FUN_14148d276(lVar3 + 0x100,param_3);
      *(undefined1 *)(lVar3 + 0x110) = 0;
      lVar2 = FUN_1442afe10(lVar3 + 0x100,param_3);
      iVar1 = *(int *)(lVar2 + 0x18) + -1;
      if (*(int *)(lVar2 + 0x18) == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(lVar3 + 0x118,*(undefined8 *)(lVar2 + 0x10),iVar1);
      lVar3 = FUN_140391552(param_1);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar4 = &PTR_FUN_14b9da8a0;
        *(int *)(puVar4 + 1) = param_3;
        FUN_14039144e(lVar3,puVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef326c FUN_148ef326c body=3036 status=ok
// SIG undefined FUN_148ef326c(void)

void FUN_148ef326c(longlong param_1)

{
  int *piVar1;
  void *pvVar2;
  ushort *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  longlong local_1d8 [2];
  undefined2 **local_1c8;
  undefined1 *local_1c0;
  undefined2 *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8 [2];
  undefined2 *local_198;
  longlong *local_190;
  longlong *local_188;
  undefined4 local_180;
  undefined2 *local_178;
  longlong *local_170;
  longlong *local_168;
  undefined4 local_160;
  undefined2 *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined4 local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined2 *local_128;
  longlong *local_120;
  undefined2 **local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined4 local_100;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  void *pvStack_d8;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [40];
  undefined1 local_a0 [48];
  byte local_70;
  byte local_6f;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_14588cd9e();
  lVar6 = FUN_140391552(param_1);
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar7 = &PTR_FUN_14b9da870;
    FUN_14039144e(lVar6,puVar7);
  }
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 != 0) {
    plVar8 = (longlong *)FUN_140e82300();
    local_138 = (longlong *)*plVar8;
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 8))();
    }
    local_130 = (undefined4)plVar8[1];
    local_f8 = (undefined2 *)0x0;
    uStack_f0 = 0;
    local_e8 = (longlong *)((ulonglong)local_e8._4_4_ << 0x20);
    local_e0 = 0;
    pvStack_d8 = (void *)0x0;
    FUN_1446ddda2(&local_f8,"LANGamesHeadText",0);
    FUN_140ac6c96(&local_f8,&local_138);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_158,&local_138,1);
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    uStack_f0 = 0;
    local_e8 = (longlong *)0x0;
    local_e0 = local_e0 & 0xffffffff00000000;
    local_118 = &local_f8;
    uStack_110 = &pvStack_d8;
    FUN_14010d304(&local_108);
    local_128 = local_158;
    local_120 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_148,&local_128,&local_108);
    FUN_14007f2db(local_108,local_100);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x10))();
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_150 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_150 + 0x10))(local_150);
        }
      }
    }
    uVar9 = FUN_1447a1f4a(&local_148);
    FUN_144a787a6(lVar6 + 0xb0,uVar9);
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 0x10))();
    }
    FUN_1400b22c2(&local_f8,"LANMenuDropdownList");
    if ((undefined2 **)(lVar6 + 0xe0) == &local_f8) {
      if (local_f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar6 + 0xe0) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(lVar6 + 0xe0) = local_f8;
      local_f8 = (undefined2 *)0x0;
      *(undefined4 *)(lVar6 + 0xe8) = (undefined4)uStack_f0;
      *(undefined4 *)(lVar6 + 0xec) = uStack_f0._4_4_;
    }
    puVar7 = (undefined8 *)FUN_140e82300();
    local_148 = (longlong *)*puVar7;
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 8))();
    }
    local_140 = *(undefined4 *)(puVar7 + 1);
    local_f8 = (undefined2 *)0x0;
    uStack_f0 = 0;
    local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffff00000000);
    local_e0 = 0;
    pvStack_d8 = (void *)0x0;
    FUN_1446ddda2(&local_f8,"PingHintText",0);
    FUN_140ac6c96(&local_f8,&local_148);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_178,&local_148,1);
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    uStack_f0 = 0;
    local_e8 = (longlong *)0x0;
    local_e0 = local_e0 & 0xffffffff00000000;
    local_118 = &local_f8;
    uStack_110 = &pvStack_d8;
    FUN_14010d304(&local_108);
    local_128 = local_178;
    local_120 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_170 + 1) = (int)local_170[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_168,&local_128,&local_108);
    FUN_14007f2db(local_108,local_100);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x10))();
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_170 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_170 + 0x10))(local_170);
        }
      }
    }
    FUN_1447a1f4a(&local_168);
    if (local_168 != (longlong *)0x0) {
      (**(code **)(*local_168 + 0x10))();
    }
    puVar7 = (undefined8 *)FUN_140e82300();
    local_168 = (longlong *)*puVar7;
    if (local_168 != (longlong *)0x0) {
      (**(code **)(*local_168 + 8))();
    }
    local_160 = *(undefined4 *)(puVar7 + 1);
    local_f8 = (undefined2 *)0x0;
    uStack_f0 = 0;
    local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffff00000000);
    local_e0 = 0;
    pvStack_d8 = (void *)0x0;
    FUN_1446ddda2(&local_f8,"HostNameHintText",0);
    FUN_140ac6c96(&local_f8,&local_168);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_198,&local_168,1);
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    uStack_f0 = 0;
    local_e8 = (longlong *)0x0;
    local_e0 = local_e0 & 0xffffffff00000000;
    local_118 = &local_f8;
    uStack_110 = &pvStack_d8;
    FUN_14010d304(&local_108);
    local_128 = local_198;
    local_120 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_188,&local_128,&local_108);
    FUN_14007f2db(local_108,local_100);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x10))();
    }
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_190 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_190 + 0x10))(local_190);
        }
      }
    }
    FUN_1447a1f4a(&local_188);
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 0x10))();
    }
    puVar7 = (undefined8 *)FUN_140e82300();
    local_188 = (longlong *)*puVar7;
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 8))();
    }
    local_180 = *(undefined4 *)(puVar7 + 1);
    local_f8 = (undefined2 *)0x0;
    uStack_f0 = 0;
    local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffff00000000);
    local_e0 = 0;
    pvStack_d8 = (void *)0x0;
    FUN_1446ddda2(&local_f8,"PlayersHintText",0);
    FUN_140ac6c96(&local_f8,&local_188);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_1b8,&local_188,1);
    local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffff00000000);
    uStack_f0 = 0;
    local_e8 = (longlong *)0x0;
    local_e0 = local_e0 & 0xffffffff00000000;
    local_118 = &local_f8;
    uStack_110 = &pvStack_d8;
    FUN_14010d304(&local_108);
    local_128 = local_1b8;
    local_120 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1a8,&local_128,&local_108);
    FUN_14007f2db(local_108,local_100);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x10))();
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1b0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1b0 + 0x10))(local_1b0);
        }
      }
    }
    FUN_1447a1f4a(local_1a8);
    if (local_1a8[0] != (longlong *)0x0) {
      (**(code **)(*local_1a8[0] + 0x10))();
    }
    puVar7 = (undefined8 *)FUN_1447a1f4a(&local_148);
    local_f8 = (undefined2 *)0x0;
    uVar5 = *(uint *)(puVar7 + 1);
    pvVar2 = (void *)*puVar7;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
    if ((longlong)(int)uVar5 == 0) {
      uStack_f0 = (ulonglong)uVar5;
    }
    else {
      FUN_1446dd670(&local_f8,uVar5,0);
      memcpy(local_f8,pvVar2,(longlong)(int)uVar5 * 2);
    }
    puVar7 = (undefined8 *)FUN_1447a1f4a(&local_168);
    local_e8 = (void *)0x0;
    uVar5 = *(uint *)(puVar7 + 1);
    pvVar2 = (void *)*puVar7;
    local_e0 = CONCAT44(local_e0._4_4_,uVar5);
    if ((longlong)(int)uVar5 == 0) {
      local_e0 = (ulonglong)uVar5;
    }
    else {
      FUN_1446dd670(&local_e8,uVar5,0);
      memcpy(local_e8,pvVar2,(longlong)(int)uVar5 * 2);
    }
    puVar7 = (undefined8 *)FUN_1447a1f4a(&local_188);
    pvStack_d8 = (void *)0x0;
    local_d0 = *(int *)(puVar7 + 1);
    lVar12 = (longlong)local_d0;
    pvVar2 = (void *)*puVar7;
    if (lVar12 == 0) {
      local_cc = 0;
    }
    else {
      FUN_1446dd670(&pvStack_d8,local_d0,0);
      memcpy(pvStack_d8,pvVar2,lVar12 * 2);
    }
    local_1c0 = local_c8;
    local_1c8 = &local_f8;
    FUN_141469cae(&local_108);
    lVar12 = 0x30;
    do {
      if (*(longlong *)((longlong)&local_108 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
    FUN_140bee9ec(lVar6 + 0xf0,&local_108);
    local_118 = (undefined2 **)0x0;
    uStack_110 = (void **)0x0;
    iVar10 = *(int *)(lVar6 + 0xf8);
    local_1e0 = lVar6;
    if ((longlong)iVar10 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0xf0);
      lVar12 = 0;
      do {
        local_128 = (undefined2 *)0x0;
        uVar5 = *(uint *)(lVar6 + 8 + lVar12);
        pvVar2 = *(void **)(lVar6 + lVar12);
        local_120 = (longlong *)CONCAT44(local_120._4_4_,uVar5);
        if ((longlong)(int)uVar5 == 0) {
          local_120 = (longlong *)(ulonglong)uVar5;
LAB_148ef3ce9:
          puVar11 = &DAT_149dfb77a;
        }
        else {
          FUN_1446dd670(&local_128,uVar5,0);
          memcpy(local_128,pvVar2,(longlong)(int)uVar5 * 2);
          puVar11 = local_128;
          if ((int)local_120 == 0) goto LAB_148ef3ce9;
        }
        FUN_140056680(local_1a8,puVar11);
        puVar11 = &DAT_149dfb77a;
        if ((int)local_120 != 0) {
          puVar11 = local_128;
        }
        FUN_140056680(local_1d8,puVar11);
        FUN_148c921b8(&local_f8,local_1d8);
        if (local_1d8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_1a8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = (ulonglong)uStack_110;
        local_6f = local_6f & 0xfe;
        local_70 = local_70 | 0x20;
        lVar13 = (longlong)(int)uStack_110;
        uVar5 = (int)uStack_110 + 1;
        uStack_110 = (void **)CONCAT44(uStack_110._4_4_,uVar5);
        if (uStack_110._4_4_ < uVar5) {
          FUN_1410d2002(&local_118,uVar4 & 0xffffffff);
        }
        FUN_1410d0c56(local_118 + lVar13 * 0x12,&local_f8);
        FUN_140d471ba(&local_f8);
        if (local_128 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 0x10;
      } while ((longlong)iVar10 * 0x10 != lVar12);
    }
    FUN_14124e07a(&local_f8);
    local_e8._0_2_ = CONCAT11(1,(undefined1)local_e8);
    FUN_1457fd3de(local_a0,&local_118);
    FUN_14148d276(&local_f8,0);
    iVar10 = *(int *)(local_118 + 3) + -1;
    if (*(int *)(local_118 + 3) == 0) {
      iVar10 = 0;
    }
    FUN_1402980a2(&local_e0,local_118[2],iVar10);
    FUN_1410d0ea4(&local_f8);
    lVar6 = local_1e0;
    iVar10 = *(int *)(local_1e0 + 0xe8) + -1;
    if (*(int *)(local_1e0 + 0xe8) == 0) {
      iVar10 = 0;
    }
    FUN_1446f82e2(&local_128,iVar10,*(undefined8 *)(local_1e0 + 0xe0),1);
    local_f8 = local_128;
    FUN_1457fd360(lVar6 + 0x100,&local_f8);
    iVar10 = *(int *)(lVar6 + 0xcc);
    FUN_145cee4a4(*(undefined8 *)(lVar6 + 0xc0),*(undefined4 *)(lVar6 + 200));
    *(undefined4 *)(lVar6 + 200) = 0;
    if ((iVar10 < 0) && (*(int *)(lVar6 + 0xcc) != 0)) {
      FUN_148efcaf8(lVar6 + 0xc0);
    }
    *(undefined2 *)(lVar6 + 0x218) = 1;
    puVar3 = *(ushort **)(lVar6 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
    FUN_140d4710a(&local_f8);
    FUN_140d47191(local_118,(ulonglong)uStack_110 & 0xffffffff);
    if (local_118 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_108,local_100);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_188 != (longlong *)0x0) {
      (**(code **)(*local_188 + 0x10))();
    }
    if (local_168 != (longlong *)0x0) {
      (**(code **)(*local_168 + 0x10))();
    }
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 0x10))();
    }
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ef3e4a FUN_148ef3e4a body=72 status=ok
// SIG undefined FUN_148ef3e4a(void)

void FUN_148ef3e4a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar2 = &PTR_FUN_14b9da880;
    FUN_14039144e(lVar1,puVar2);
  }
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 148ef3e92 FUN_148ef3e92 body=434 status=ok
// SIG undefined FUN_148ef3e92(void)

void FUN_148ef3e92(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [5];
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    local_88[2] = 0;
    local_88[3] = 0;
    uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 0x20);
    if (uVar3 < 3) {
      FUN_14020fad6(local_88 + 2,(&PTR_u_ping_14b9dc4e8)[uVar3]);
    }
    local_88[0] = 0;
    local_88[1] = 0;
    plVar1 = local_88 + 4;
    local_88[4] = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(plVar1,"SortHintText",0);
    FUN_140ac6a88(plVar1,local_88);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_1400b22c2(local_a8,&DAT_149dfc0cb);
    FUN_1407ec8fc(local_98,local_88,local_a8);
    FUN_144a7dea0(plVar1,local_98,local_88 + 2);
    if ((longlong *)(lVar2 + 0xd0) == plVar1) {
      if (local_88[4] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar2 + 0xd0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar2 + 0xd0) = local_88[4];
      local_88[4] = 0;
      *(undefined4 *)(lVar2 + 0xd8) = (undefined4)uStack_60;
      *(undefined4 *)(lVar2 + 0xdc) = uStack_60._4_4_;
      uStack_60 = 0;
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef4046 FUN_148ef4046 body=64 status=ok
// SIG undefined FUN_148ef4046(void)

void FUN_148ef4046(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_145a61fdc((char)param_1,lVar1 + 0x180,param_2);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ef4086 FUN_148ef4086 body=76 status=ok
// SIG undefined FUN_148ef4086(void)

undefined8 * FUN_148ef4086(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b8);
  memset(_Dst,0,0x2b8);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9da8b0;
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  return _Dst;
}



// FUNCTION 148ef40d2 FUN_148ef40d2 body=66 status=ok
// SIG undefined FUN_148ef40d2(void)

undefined8 * FUN_148ef40d2(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2b0);
  memset(_Dst,0,0x2b0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9dacf0;
  return _Dst;
}



// FUNCTION 148ef411a FUN_148ef411a body=79 status=ok
// SIG undefined FUN_148ef411a(void)

void FUN_148ef411a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9db910;
  puVar1[2] = FUN_148ef416a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"Event_OnDropdownClicked",puVar1);
  return;
}



// FUNCTION 148ef416a FUN_148ef416a body=242 status=ok
// SIG undefined FUN_148ef416a(void)

void FUN_148ef416a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    iVar4 = FUN_144a8a8b6(puVar5,"cursor-playground-dropdown");
    if (iVar4 == 0) {
      bVar3 = *(byte *)(lVar1 + 0xc0) ^ 1;
      *(byte *)(lVar1 + 0xc0) = bVar3;
      puVar2 = *(ushort **)(lVar1 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
        bVar3 = *(byte *)(lVar1 + 0xc0);
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      if ((bVar3 & 1) == 0) {
        FUN_1446f470e(&local_30,puVar5,1);
        FUN_148a01b6e(param_1,local_30);
      }
      else {
        FUN_1446f470e(&local_28,puVar5,1);
        FUN_148a01b2c(param_1,local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef4264 FUN_148ef4264 body=57 status=ok
// SIG undefined FUN_148ef4264(void)

void FUN_148ef4264(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_1407cbc56();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (puVar2 = *(ushort **)(lVar1 + 0x80), puVar2 != (ushort *)0x0)) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  return;
}



// FUNCTION 148ef429e FUN_148ef429e body=103 status=ok
// SIG undefined FUN_148ef429e(void)

void FUN_148ef429e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b92dba();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148efcfd8(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef4306 FUN_148ef4306 body=128 status=ok
// SIG undefined FUN_148ef4306(void)

longlong * FUN_148ef4306(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b9dba10;
  return param_2;
}



// FUNCTION 148ef4386 FUN_148ef4386 body=7 status=ok
// SIG undefined FUN_148ef4386(void)

void FUN_148ef4386(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x300) = param_2;
  return;
}



// FUNCTION 148ef438e FUN_148ef438e body=12 status=ok
// SIG undefined FUN_148ef438e(void)

void FUN_148ef438e(longlong param_1)

{
  FUN_144a787a6(param_1 + 0x2a8);
  return;
}



// FUNCTION 148ef439a FUN_148ef439a body=12 status=ok
// SIG undefined FUN_148ef439a(void)

void FUN_148ef439a(longlong param_1)

{
  FUN_144a787a6(param_1 + 0x2b8);
  return;
}



// FUNCTION 148ef43a6 FUN_148ef43a6 body=210 status=ok
// SIG undefined FUN_148ef43a6(void)

undefined8 * FUN_148ef43a6(undefined8 *param_1,uint param_2,float param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (float)(**(code **)(*DAT_14cbe5fd0 + 0xb8))();
  fVar3 = (param_3 - param_4) / (fVar3 * param_4) + 1.0;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar5 = (float)param_2;
  fVar4 = 640.0 / fVar5;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  fVar6 = 1200.0 / fVar5;
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  fVar5 = (SQRT(fVar3) * 1080.0) / fVar5;
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    if ((lVar2 + 0xc == 0x3c) || (*(float *)((longlong)&DAT_14cbe5ef8 + lVar2) <= fVar5)) break;
    lVar1 = lVar2 + 0xc;
  } while (fVar4 < *(float *)((longlong)&DAT_14cbe5f04 + lVar2));
  *param_1 = *(undefined8 *)((longlong)&DAT_14cbe5efc + lVar2);
  return param_1;
}



// FUNCTION 148ef4478 FUN_148ef4478 body=481 status=ok
// SIG undefined FUN_148ef4478(void)

ulonglong FUN_148ef4478(void)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  ulonglong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*DAT_14c98e618 + 0x1c8))(DAT_14c98e618,&local_d8);
  local_e8 = 0;
  uStack_e0 = 0;
  (**(code **)(*DAT_14ca83900 + 0x398))(DAT_14ca83900,&local_e8,0);
  lVar2 = local_e8;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar5 = (longlong)(int)uStack_e0;
  if (lVar5 != 0) {
    lVar12 = 0;
    do {
      uVar7 = uStack_f0;
      if ((*(int *)(lVar2 + lVar12) == local_d8) && (*(int *)(lVar2 + 4 + lVar12) == local_d4)) {
        lVar9 = (longlong)(int)uStack_f0;
        uVar4 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar4);
        if (uStack_f0._4_4_ < uVar4) {
          FUN_146319c42(&local_f8,uVar7 & 0xffffffff);
        }
        *(undefined4 *)(local_f8 + 8 + lVar9 * 0xc) =
             *(undefined4 *)((undefined8 *)(lVar2 + lVar12) + 1);
        *(undefined8 *)(local_f8 + lVar9 * 0xc) = *(undefined8 *)(lVar2 + lVar12);
      }
      lVar12 = lVar12 + 0xc;
    } while (lVar5 * 0xc != lVar12);
  }
  lVar2 = DAT_14cbe5ff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar3 ^ 1);
  }
  uVar6 = (ulonglong)(int)uStack_f0;
  if ((longlong)uVar6 < 1) {
    uVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar2 + uVar7 * 4);
    uVar8 = (undefined7)((ulonglong)lVar2 >> 8);
    uVar7 = CONCAT71(uVar8,1);
    if (*(uint *)(local_f8 + 8) < uVar4) {
      puVar10 = (uint *)(local_f8 + 0x14);
      uVar7 = 1;
      do {
        uVar11 = uVar7;
        if (uVar6 == uVar11) break;
        uVar1 = *puVar10;
        puVar10 = puVar10 + 3;
        uVar7 = uVar11 + 1;
      } while (uVar1 < uVar4);
      uVar7 = CONCAT71(uVar8,uVar11 < uVar6);
    }
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_140ecb711(local_d0,uStack_c8 & 0xffffffff);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148ef465a FUN_148ef465a body=13 status=ok
// SIG undefined FUN_148ef465a(void)

void FUN_148ef465a(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2dc) = param_2;
  FUN_148ef4668(param_1,0);
  return;
}



// FUNCTION 148ef4668 FUN_148ef4668 body=390 status=ok
// SIG undefined FUN_148ef4668(void)

void FUN_148ef4668(longlong *param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_141292688();
  if (DAT_14cb9acd0 != 0) {
    if ((longlong)*(int *)(lVar1 + 200) != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0xc0) + lVar2) == DAT_14cb9acd0) goto LAB_148ef46f3;
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(lVar1 + 200) * 8 != lVar2);
    }
    if ((longlong)*(int *)(lVar1 + 0xd8) != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0xd0) + lVar2) == DAT_14cb9acd0) goto LAB_148ef46f3;
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(lVar1 + 0xd8) * 8 != lVar2);
    }
  }
LAB_148ef47d0:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148ef46f3:
  if (((((*(longlong *)((longlong)param_1 + 0x2cc) != 0) &&
        (*(longlong *)((longlong)param_1 + 0x2d4) != 0)) && (0.0 < *(float *)(param_1 + 0x1c))) &&
      ((0.0 < *(float *)((longlong)param_1 + 0xe4) & (param_2 ^ 1)) != 0)) ||
     (((**(code **)(*param_1 + 800))(param_1,10,0x3f800000,0x3f800000),
      0.0 < *(float *)(param_1 + 0x1c) && (0.0 < *(float *)((longlong)param_1 + 0xe4))))) {
    FUN_144334d2a(param_1);
    FUN_148881096(&local_28);
    FUN_141673a98(param_1,DAT_14cbe5708,local_28);
    FUN_141673a98(param_1,DAT_14cbe5718,*(undefined8 *)((longlong)param_1 + 0x2d4));
    FUN_144334c72(&local_30);
    FUN_141673a98(param_1,DAT_14cbe5730,local_30);
    FUN_143d6c9de(param_1,*(undefined8 *)((longlong)param_1 + 0x2cc));
  }
  goto LAB_148ef47d0;
}



// FUNCTION 148ef47f0 FUN_148ef47f0 body=7 status=ok
// SIG undefined FUN_148ef47f0(void)

undefined1 FUN_148ef47f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2dc);
}



// FUNCTION 148ef47f8 FUN_148ef47f8 body=94 status=ok
// SIG undefined FUN_148ef47f8(void)

void FUN_148ef47f8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14107a740();
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x300))(plVar3,param_3,param_4);
  }
  plVar3 = *(longlong **)(param_3 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148ef484a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ef4856 FUN_148ef4856 body=446 status=ok
// SIG undefined FUN_148ef4856(void)

undefined8 FUN_148ef4856(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8 [5];
  undefined1 local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar8 = FUN_140230656(param_3);
  if ((cVar8 != '\0') || (*param_3 == DAT_14c966e80)) {
    plVar9 = (longlong *)FUN_148b079d2(param_1);
    if (plVar9 != (longlong *)0x0) {
      FUN_147fa0330(local_a8 + 4);
      plVar7 = local_68;
      local_a8[4] = *(undefined8 *)(param_1 + 0x138);
      local_78 = *param_3;
      local_70 = param_3[1];
      plVar4 = (longlong *)param_3[2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_80 = param_2;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_68 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          puVar5 = (undefined8 *)*local_68;
          local_68 = plVar4;
          (*(code *)*puVar5)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar4 = local_68;
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            plVar4 = local_68;
          }
        }
      }
      local_68 = plVar4;
      if (*(longlong *)(param_1 + 0x1d0) != 0) {
        local_60 = *(longlong *)(param_1 + 0x1d0);
      }
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      (**(code **)(*plVar9 + 0x2d8))(plVar9,local_a8 + 4);
      iVar3 = *(int *)(param_1 + 0x1c8);
      if ((longlong)iVar3 != 0) {
        lVar6 = *(longlong *)(param_1 + 0x1c0);
        lVar11 = 0;
        do {
          local_a8[4] = *(undefined8 *)(lVar6 + lVar11);
          (**(code **)(*plVar9 + 0x2d8))(plVar9,local_a8 + 4,local_a8);
          lVar11 = lVar11 + 8;
        } while ((longlong)iVar3 * 8 != lVar11);
      }
      FUN_1459ca14e(param_1,0);
      if (local_a8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      plVar9 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_68 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar10 = 1;
      goto LAB_148ef49e7;
    }
  }
  uVar10 = 0;
LAB_148ef49e7:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef4a16 FUN_148ef4a16 body=232 status=ok
// SIG undefined FUN_148ef4a16(void)

void FUN_148ef4a16(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  
  FUN_148ef4afe();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1);
  if ((longlong)(int)plVar3[1] == 0) {
    return;
  }
  lVar8 = *plVar3;
  lVar1 = lVar8 + (longlong)(int)plVar3[1] * 0x28;
LAB_148ef4a52:
  lVar4 = FUN_1412bf9f0(lVar8);
  if (lVar4 != 0) {
    lVar4 = FUN_1412bf9f0(lVar8);
    iVar2 = *(int *)(lVar4 + 0x38);
    if (iVar2 == (int)param_1[0x35]) {
      if (1 < iVar2) {
        lVar9 = 0;
        do {
          uVar6 = *(ushort *)(*(longlong *)(lVar4 + 0x30) + lVar9);
          uVar7 = (ulonglong)uVar6;
          uVar10 = *(ushort *)(param_1[0x34] + lVar9);
          if (uVar6 == uVar10) {
            if (uVar6 == 0) break;
          }
          else {
            if (0x7f < (uVar10 | uVar6)) goto LAB_148ef4adb;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar11 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar11]) goto LAB_148ef4adb;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
      goto LAB_148ef4ae2;
    }
    if ((int)param_1[0x35] + iVar2 == 1) goto LAB_148ef4ae2;
  }
  goto LAB_148ef4ac8;
LAB_148ef4adb:
  if (uVar6 == uVar10) {
LAB_148ef4ae2:
    uVar5 = FUN_1412bf9f0(lVar8);
    FUN_148ef4d4c(param_1,uVar5);
    return;
  }
LAB_148ef4ac8:
  lVar8 = lVar8 + 0x28;
  if (lVar8 == lVar1) {
    return;
  }
  goto LAB_148ef4a52;
}



// FUNCTION 148ef4afe FUN_148ef4afe body=589 status=ok
// SIG undefined FUN_148ef4afe(void)

void FUN_148ef4afe(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0 [4];
  longlong *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((param_1[0xb] != 0) && (lVar4 = FUN_1400b6e86(), lVar4 != 0)) &&
      ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) &&
     (lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x18))(lVar4 + 0x30), lVar4 != 0)) {
    lVar5 = FUN_1410c44e8();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30)) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1);
      if ((longlong)(int)plVar6[1] != 0) {
        lVar5 = *plVar6;
        local_d0 = lVar5 + (longlong)(int)plVar6[1] * 0x28;
        do {
          lVar7 = FUN_1412bf9f0(lVar5);
          if (lVar7 != 0) {
            lVar7 = FUN_1412bf9f0(lVar5);
            iVar3 = *(int *)(lVar7 + 0x38);
            if (iVar3 == (int)param_1[0x37]) {
              if (1 < iVar3) {
                lVar10 = 0;
                while( true ) {
                  uVar8 = *(ushort *)(*(longlong *)(lVar7 + 0x30) + lVar10);
                  uVar9 = (ulonglong)uVar8;
                  uVar11 = *(ushort *)(param_1[0x36] + lVar10);
                  if (uVar8 != uVar11) break;
                  if (uVar8 == 0) goto LAB_148ef4c80;
LAB_148ef4c3d:
                  lVar10 = lVar10 + 2;
                }
                if ((uVar11 | uVar8) < 0x80) {
                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  uVar12 = (ulonglong)uVar11;
                  uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                  if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_148ef4c3d;
                }
                if (uVar8 != uVar11) goto LAB_148ef4d2c;
              }
            }
            else if ((int)param_1[0x37] + iVar3 != 1) goto LAB_148ef4d2c;
LAB_148ef4c80:
            lVar7 = FUN_1412bf9f0(lVar5);
            iVar3 = *(int *)(lVar7 + 0x58);
            if ((longlong)iVar3 != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x50);
              lVar10 = 0;
              do {
                if (*(longlong *)(lVar7 + lVar10) != 0) {
                  FUN_147fa0330(local_a0);
                  local_a0[0] = *(undefined8 *)(lVar7 + lVar10);
                  local_b8 = 0;
                  uStack_b0 = 0;
                  local_c8 = 0;
                  uStack_c0 = 0;
                  FUN_148d1ab86(lVar4,local_a0);
                  if (local_b8 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  plVar6 = local_80;
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_80 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_80)(local_80);
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
                lVar10 = lVar10 + 0x20;
              } while ((longlong)iVar3 * 0x20 != lVar10);
            }
          }
LAB_148ef4d2c:
          lVar5 = lVar5 + 0x28;
        } while (lVar5 != local_d0);
      }
      (**(code **)(*param_1 + 0x350))(param_1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ef4d4c FUN_148ef4d4c body=576 status=ok
// SIG undefined FUN_148ef4d4c(void)

void FUN_148ef4d4c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8 [5];
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0 && param_1[0xb] != 0) {
    lVar7 = FUN_1400b6e86();
    if ((lVar7 != 0) && ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) {
      lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x30) + 0x18))(lVar7 + 0x30);
      if (lVar7 != 0) {
        lVar8 = FUN_1410c44e8();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
           ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) {
          iVar4 = *(int *)(param_2 + 0x58);
          if ((longlong)iVar4 != 0) {
            lVar8 = *(longlong *)(param_2 + 0x50);
            lVar10 = 0;
            do {
              if (*(longlong *)(lVar8 + lVar10) != 0) {
                cVar6 = FUN_1403e7f2a(lVar8 + 8 + lVar10);
                if (cVar6 != '\0') {
                  FUN_147fa0330(&local_a0);
                  plVar3 = local_80;
                  local_a0 = *(undefined8 *)(lVar8 + lVar10);
                  local_90 = *(undefined8 *)(lVar8 + 8 + lVar10);
                  local_88 = *(undefined8 *)(lVar8 + 0x10 + lVar10);
                  plVar5 = *(longlong **)(lVar8 + 0x18 + lVar10);
                  if (plVar5 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                    UNLOCK();
                  }
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_80 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      puVar9 = (undefined8 *)*local_80;
                      local_80 = plVar5;
                      (*(code *)*puVar9)(plVar3);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar3 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      plVar5 = local_80;
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar3 + 0x10))(plVar3);
                        plVar5 = local_80;
                      }
                    }
                  }
                  local_80 = plVar5;
                  local_98 = 0;
                  local_c8[2] = 0;
                  local_c8[3] = 0;
                  local_c8[0] = 0;
                  local_c8[1] = 0;
                  FUN_148d1a9d0(lVar7,&local_a0,local_c8);
                  if (local_c8[2] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_c8[0] != 0) {
                    FUN_1400020a8();
                  }
                  plVar5 = local_80;
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    plVar3 = local_80 + 1;
                    *(int *)plVar3 = (int)*plVar3 + -1;
                    UNLOCK();
                    if ((int)*plVar3 == 0) {
                      (**(code **)*local_80)(local_80);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar5 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar5 + 0x10))(plVar5);
                      }
                    }
                  }
                }
              }
              lVar10 = lVar10 + 0x20;
            } while ((longlong)iVar4 * 0x20 != lVar10);
          }
          (**(code **)(*param_1 + 0x348))(param_1,param_2);
          lVar7 = FUN_1404960a8(param_1[0xb]);
          if (lVar7 != 0) {
            puVar9 = (undefined8 *)FUN_14001cc68(8,0x10);
            *puVar9 = &PTR_FUN_14b9dae60;
            FUN_14039144e(lVar7,puVar9);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef4f8e FUN_148ef4f8e body=384 status=ok
// SIG undefined FUN_148ef4f8e(void)

void FUN_148ef4f8e(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459ca1d6();
  FUN_148ef4afe(param_1);
  FUN_140e5f3c8(param_1,&local_40);
  if (param_1 + 0x36 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x36] != 0) {
      FUN_1400020a8();
    }
    param_1[0x36] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x37) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = local_34;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x338))(param_1);
  if ((longlong)(int)plVar3[1] == 0) {
LAB_148ef50ec:
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar8 = *plVar3;
  lVar1 = lVar8 + (longlong)(int)plVar3[1] * 0x28;
LAB_148ef503d:
  lVar4 = FUN_1412bf9f0(lVar8);
  if (lVar4 == 0) goto LAB_148ef50af;
  lVar4 = FUN_1412bf9f0(lVar8);
  iVar2 = *(int *)(lVar4 + 0x38);
  if (iVar2 == (int)param_1[0x37]) {
    if (1 < iVar2) {
      lVar9 = 0;
      do {
        uVar6 = *(ushort *)(*(longlong *)(lVar4 + 0x30) + lVar9);
        uVar7 = (ulonglong)uVar6;
        uVar10 = *(ushort *)(param_1[0x36] + lVar9);
        if (uVar6 == uVar10) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar10 | uVar6)) goto LAB_148ef50d2;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar11 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar11]) goto LAB_148ef50d2;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
  }
  else if ((int)param_1[0x37] + iVar2 != 1) goto LAB_148ef50af;
  goto LAB_148ef50d9;
LAB_148ef50d2:
  if (uVar6 == uVar10) {
LAB_148ef50d9:
    uVar5 = FUN_1412bf9f0(lVar8);
    FUN_148ef4d4c(param_1,uVar5);
    goto LAB_148ef50ec;
  }
LAB_148ef50af:
  lVar8 = lVar8 + 0x28;
  if (lVar8 == lVar1) goto LAB_148ef50ec;
  goto LAB_148ef503d;
}



// FUNCTION 148ef5158 FUN_148ef5158 body=20 status=ok
// SIG undefined FUN_148ef5158(void)

longlong FUN_148ef5158(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  return lVar1 + 0x910;
}



// FUNCTION 148ef516c FUN_148ef516c body=32 status=ok
// SIG undefined FUN_148ef516c(void)

undefined8 FUN_148ef516c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 148ef518c FUN_148ef518c body=135 status=ok
// SIG undefined FUN_148ef518c(void)

void FUN_148ef518c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  lVar4 = FUN_14030d4a0();
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (lVar2 == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) {
    return;
  }
  if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30) {
    return;
  }
  if (param_2 != 0) {
    lVar4 = FUN_145b95160();
    iVar1 = *(int *)(lVar4 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        lVar4 + 0x30)) {
      uVar5 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(param_2 + 0x70));
      goto LAB_148ef5200;
    }
  }
  uVar5 = 0;
LAB_148ef5200:
  FUN_148dae080(lVar2,uVar5);
  return;
}



// FUNCTION 148ef5214 FUN_148ef5214 body=85 status=ok
// SIG undefined FUN_148ef5214(void)

void FUN_148ef5214(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = FUN_14030d4a0();
    lVar1 = *(longlong *)(param_1 + 0x58);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_148dae080(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148ef526a FUN_148ef526a body=135 status=ok
// SIG undefined FUN_148ef526a(void)

void FUN_148ef526a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  lVar4 = FUN_14030d4a0();
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (lVar2 == 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar2 + 0x10);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38)) {
    return;
  }
  if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30) {
    return;
  }
  if (param_2 != 0) {
    lVar4 = FUN_145b95160();
    iVar1 = *(int *)(lVar4 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        lVar4 + 0x30)) {
      uVar5 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(param_2 + 0x70));
      goto LAB_148ef52de;
    }
  }
  uVar5 = 0;
LAB_148ef52de:
  FUN_148dae088(lVar2,uVar5);
  return;
}



// FUNCTION 148ef52f2 FUN_148ef52f2 body=85 status=ok
// SIG undefined FUN_148ef52f2(void)

void FUN_148ef52f2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = FUN_14030d4a0();
    lVar1 = *(longlong *)(param_1 + 0x58);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_148dae088(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148ef5348 FUN_148ef5348 body=102 status=ok
// SIG undefined FUN_148ef5348(void)

void FUN_148ef5348(undefined8 param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_145df11f2();
  pwVar2 = L"false";
  if (cVar1 != '\0') {
    pwVar2 = L"true";
  }
  FUN_140056680(local_28,pwVar2);
  FUN_145da60d4(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef53b0 FUN_148ef53b0 body=256 status=ok
// SIG undefined FUN_148ef53b0(void)

ulonglong FUN_148ef53b0(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_145df11f2();
  pwVar6 = L"false";
  if (cVar3 != '\0') {
    pwVar6 = L"true";
  }
  FUN_140056680(&local_30,pwVar6);
  FUN_140e5f3c8(param_1,&local_40);
  uVar8 = (undefined7)((ulonglong)&local_40 >> 8);
  if (local_28 == local_38) {
    uVar7 = CONCAT71(uVar8,1);
    if (1 < local_28) {
      lVar9 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_30 + lVar9);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)(local_40 + lVar9);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148ef5438;
          }
          iVar5 = uVar4 - uVar10;
          goto LAB_148ef54aa;
        }
        if (uVar1 == 0) break;
LAB_148ef5438:
        lVar9 = lVar9 + 2;
      }
      iVar5 = 0;
LAB_148ef54aa:
      uVar7 = CONCAT71(uVar8,iVar5 == 0);
    }
  }
  else {
    uVar7 = CONCAT71(uVar8,local_38 + local_28 == 1);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef54c6 FUN_148ef54c6 body=26 status=ok
// SIG undefined FUN_148ef54c6(void)

void FUN_148ef54c6(undefined8 param_1)

{
  FUN_1412d7cbc();
  FUN_148ef54e0(param_1);
  return;
}



// FUNCTION 148ef54e0 FUN_148ef54e0 body=2605 status=ok
// SIG undefined FUN_148ef54e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ef54e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  char cVar6;
  undefined8 **ppuVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_4d8 [40];
  longlong *local_4b0;
  longlong *local_4a8;
  longlong *local_4a0;
  int local_498;
  int local_494;
  undefined8 local_490;
  undefined8 *local_488;
  undefined8 uStack_480;
  int *local_478;
  ulonglong uStack_470;
  int local_468;
  int local_464;
  longlong local_460;
  undefined4 local_458;
  int local_3e8;
  int iStack_3e4;
  longlong local_3e0;
  ulonglong uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 *local_368;
  undefined8 *local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  FUN_145abf16f(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_148efd024(param_1 + 0x140,0);
  }
  local_4a0 = (longlong *)(param_1 + 0x150);
  FUN_145abf16f(*(undefined8 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x158));
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_148efd024(local_4a0,0);
  }
  local_4b0 = (longlong *)(param_1 + 0x170);
  FUN_145abf16f(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) != 0) {
    FUN_148efd024(local_4b0,0);
  }
  local_4a8 = (longlong *)(param_1 + 0x160);
  FUN_145abf16f(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_148efd024(local_4a8,0);
  }
  local_3c0 = 0;
  uStack_3b8 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = 0;
  uStack_390 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  (**(code **)(*DAT_14c98e618 + 0x1c8))(DAT_14c98e618,&local_3e8);
  local_478 = (int *)0x0;
  uStack_470 = 0;
  (**(code **)(*DAT_14ca83900 + 0x398))(DAT_14ca83900,&local_478,1);
  local_488 = (undefined8 *)0x0;
  uStack_480 = 0;
  local_490 = 0x2d000000500;
  local_494 = iStack_3e4 + -1;
  local_498 = local_3e8 + -1;
  if (0x2d0 < iStack_3e4 && 0x500 < local_3e8) {
    FUN_148ef699c(&local_490,&local_498,&local_488);
  }
  if (DAT_14cb0d284 == 2) {
    ppuVar7 = &local_368;
    local_368 = _DAT_14cb0d27c;
    FUN_148b09e92(&local_488);
    puVar1 = local_488;
    iVar16 = (int)uStack_480;
    uVar25 = (ulonglong)(int)uStack_480;
    if ((longlong)uVar25 < 2) goto LAB_148ef5ada;
    memset(local_358,0,0x2f0);
    local_368 = puVar1;
    local_360 = puVar1 + (uVar25 - 1);
    fVar28 = logf((float)iVar16);
    local_358[0] = (int)(longlong)(fVar28 + fVar28);
    do {
      piVar10 = (int *)*ppuVar7;
      piVar13 = (int *)ppuVar7[1];
      iVar16 = *(int *)(ppuVar7 + 2);
      iVar22 = (int)((ulonglong)((longlong)piVar13 - (longlong)piVar10) >> 3);
      uVar21 = iVar22 + 1;
      piVar11 = piVar13;
      piVar20 = piVar10;
      if (iVar16 != 0) {
LAB_148ef5758:
        if (8 < (int)uVar21) {
          uVar3 = *(undefined8 *)(piVar10 + (ulonglong)(uVar21 >> 1) * 2);
          *(undefined8 *)(piVar10 + (ulonglong)(uVar21 >> 1) * 2) = *(undefined8 *)piVar10;
          *(undefined8 *)piVar10 = uVar3;
          piVar23 = piVar13 + 2;
          piVar9 = piVar10;
          do {
            piVar5 = piVar9 + 2;
            piVar14 = piVar9 + 2;
            do {
              piVar24 = piVar14;
              piVar9 = piVar5;
              if (piVar13 < piVar9) break;
              bVar27 = *piVar10 < *piVar9;
              if (*piVar10 == *piVar9) {
                bVar27 = piVar10[1] < piVar9[1];
              }
              piVar5 = piVar9 + 2;
              piVar14 = piVar24 + 2;
            } while (!bVar27);
            piVar5 = piVar23 + -4;
            do {
              piVar14 = piVar23;
              piVar12 = piVar5;
              piVar23 = piVar14 + -2;
              if (piVar23 <= piVar10) break;
              bVar27 = *piVar23 < *piVar10;
              if (*piVar23 == *piVar10) {
                bVar27 = piVar14[-1] < piVar10[1];
              }
              piVar5 = piVar12 + -2;
            } while (!bVar27);
            if (piVar23 < piVar9) goto LAB_148ef5810;
            uVar3 = *(undefined8 *)piVar9;
            *(undefined8 *)piVar9 = *(undefined8 *)piVar23;
            *(undefined8 *)piVar23 = uVar3;
          } while( true );
        }
        if (piVar10 < piVar13) {
          do {
            piVar11 = piVar10;
            if (piVar10 + 2 <= piVar13) {
              iVar16 = *piVar10;
              piVar20 = piVar10 + 2;
              piVar23 = piVar10;
              do {
                iVar22 = *piVar20;
                bVar27 = iVar16 < iVar22;
                if (iVar16 == iVar22) {
                  bVar27 = piVar23[1] < piVar20[1];
                }
                piVar11 = piVar20;
                if (!bVar27) {
                  piVar11 = piVar23;
                  iVar22 = iVar16;
                }
                iVar16 = iVar22;
                piVar20 = piVar20 + 2;
                piVar23 = piVar11;
              } while (piVar20 <= piVar13);
            }
            uVar3 = *(undefined8 *)piVar11;
            *(undefined8 *)piVar11 = *(undefined8 *)piVar13;
            *(undefined8 *)piVar13 = uVar3;
            piVar13 = piVar13 + -2;
          } while (piVar10 < piVar13);
        }
        goto LAB_148ef5ac0;
      }
LAB_148ef58a3:
      if (uVar21 != 0) {
        iVar16 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
        iVar22 = iVar16;
joined_r0x000148ef58c4:
        do {
          iVar18 = iVar16 * 2 + 1;
          if (iVar18 < (int)uVar21) {
            iVar17 = iVar16 * 2 + 2;
            if (iVar17 < (int)uVar21) {
              bVar27 = piVar10[(longlong)iVar17 * 2] < piVar10[(longlong)iVar18 * 2];
              if (piVar10[(longlong)iVar17 * 2] == piVar10[(longlong)iVar18 * 2]) {
                bVar27 = piVar10[(longlong)iVar17 * 2 + 1] < piVar10[(longlong)iVar18 * 2 + 1];
              }
              if (!bVar27) {
                iVar18 = iVar17;
              }
            }
            lVar19 = (longlong)iVar16;
            lVar15 = (longlong)iVar18;
            bVar27 = piVar10[lVar19 * 2] < piVar10[lVar15 * 2];
            if (piVar10[lVar19 * 2] == piVar10[lVar15 * 2]) {
              bVar27 = piVar10[lVar19 * 2 + 1] < piVar10[lVar15 * 2 + 1];
            }
            if (bVar27) {
              uVar3 = *(undefined8 *)(piVar10 + lVar19 * 2);
              *(undefined8 *)(piVar10 + lVar19 * 2) = *(undefined8 *)(piVar10 + lVar15 * 2);
              *(undefined8 *)(piVar10 + lVar15 * 2) = uVar3;
              iVar16 = iVar18;
              goto joined_r0x000148ef58c4;
            }
          }
          bVar27 = iVar22 != 0;
          iVar16 = iVar22 + -1;
          iVar22 = iVar16;
        } while (bVar27);
        if (1 < (int)uVar21) {
          uVar25 = (ulonglong)uVar21;
          uVar3 = *(undefined8 *)piVar10;
          *(undefined8 *)piVar10 = *(undefined8 *)(piVar10 + uVar25 * 2 + -2);
          *(undefined8 *)(piVar10 + uVar25 * 2 + -2) = uVar3;
          if (uVar21 != 2) {
            do {
              uVar25 = uVar25 - 1;
              iVar16 = 0;
              iVar18 = 1;
              iVar22 = 0;
              do {
                lVar15 = (longlong)(iVar16 + 2);
                iVar17 = iVar18;
                if (lVar15 < (longlong)uVar25) {
                  bVar27 = piVar10[lVar15 * 2] < piVar10[(longlong)iVar18 * 2];
                  if (piVar10[lVar15 * 2] == piVar10[(longlong)iVar18 * 2]) {
                    bVar27 = piVar10[lVar15 * 2 + 1] < piVar10[(longlong)iVar18 * 2 + 1];
                  }
                  if (!bVar27) {
                    iVar17 = iVar16 + 2;
                  }
                }
                lVar15 = (longlong)iVar22;
                lVar19 = (longlong)iVar17;
                bVar27 = piVar10[lVar15 * 2] < piVar10[lVar19 * 2];
                if (piVar10[lVar15 * 2] == piVar10[lVar19 * 2]) {
                  bVar27 = piVar10[lVar15 * 2 + 1] < piVar10[lVar19 * 2 + 1];
                }
                if (!bVar27) break;
                uVar3 = *(undefined8 *)(piVar10 + lVar15 * 2);
                *(undefined8 *)(piVar10 + lVar15 * 2) = *(undefined8 *)(piVar10 + lVar19 * 2);
                *(undefined8 *)(piVar10 + lVar19 * 2) = uVar3;
                iVar16 = iVar17 * 2;
                iVar18 = iVar17 * 2 + 1;
                iVar22 = iVar17;
              } while ((longlong)iVar18 < (longlong)uVar25);
              uVar3 = *(undefined8 *)piVar10;
              *(undefined8 *)piVar10 = *(undefined8 *)(piVar10 + uVar25 * 2 + -2);
              *(undefined8 *)(piVar10 + uVar25 * 2 + -2) = uVar3;
            } while (2 < uVar25);
          }
        }
      }
LAB_148ef5ac0:
      ppuVar7 = ppuVar7 + -3;
    } while (&local_368 <= ppuVar7);
  }
  uVar25 = uStack_480 & 0xffffffff;
LAB_148ef5ada:
  if ((int)uVar25 == 0) {
    uVar3 = CONCAT44(iStack_3e4,local_3e8);
    uStack_480 = CONCAT44(uStack_480._4_4_,1);
    if (uStack_480._4_4_ == 0) {
      FUN_14630406a(&local_488,0);
    }
    *local_488 = uVar3;
    uVar25 = uStack_480 & 0xffffffff;
  }
  FUN_148ef6956(local_4b0,uVar25 & 0xffffffff);
  if ((longlong)(int)uStack_480 != 0) {
    puVar1 = local_488 + (int)uStack_480;
    puVar26 = local_488;
    do {
      plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14b9dbc00;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[4] = 0;
      plVar8[5] = 0;
      FUN_144a5dc74(plVar8 + 4);
      *(undefined4 *)(plVar8 + 2) = *(undefined4 *)puVar26;
      *(undefined4 *)((longlong)plVar8 + 0x14) = *(undefined4 *)((longlong)puVar26 + 4);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      iVar16 = *(int *)(param_1 + 0x178);
      *(uint *)(param_1 + 0x178) = iVar16 + 1U;
      if (*(uint *)(param_1 + 0x17c) < iVar16 + 1U) {
        FUN_148efd0b4(local_4b0,iVar16);
      }
      lVar15 = *local_4b0;
      *(longlong **)(lVar15 + (longlong)iVar16 * 0x10) = plVar8 + 2;
      *(longlong **)(lVar15 + 8 + (longlong)iVar16 * 0x10) = plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar13 = (int *)((longlong)plVar8 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar1);
  }
  if (local_488 != (undefined8 *)0x0) {
    FUN_1400020a8(local_488);
  }
  FUN_148ef7a88(&local_468,&local_3e8);
  lVar15 = (longlong)(int)uStack_470;
  bVar27 = true;
  piVar13 = local_478;
  if (lVar15 != 0) {
    lVar19 = lVar15 * 0xc;
    piVar10 = local_478;
    do {
      bVar27 = piVar10[1] != local_464 || *piVar10 != local_468;
      piVar13 = piVar10;
      if (piVar10[1] == local_464 && *piVar10 == local_468) break;
      piVar10 = piVar10 + 3;
      lVar19 = lVar19 + -0xc;
      piVar13 = local_478 + lVar15 * 3;
    } while (lVar19 != 0);
  }
  FUN_140ecb711(local_460,local_458);
  if (local_460 != 0) {
    FUN_1400020a8();
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b9dbc00;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  FUN_144a5dc74(plVar8 + 4);
  if (bVar27 || piVar13 == (int *)0x0) {
    *(int *)(plVar8 + 2) = local_3e8;
    *(int *)((longlong)plVar8 + 0x14) = iStack_3e4;
    iVar16 = FUN_14682fdfe();
  }
  else {
    *(int *)(plVar8 + 2) = *piVar13;
    *(int *)((longlong)plVar8 + 0x14) = piVar13[1];
    iVar16 = piVar13[2];
  }
  *(int *)(plVar8 + 3) = iVar16;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar16 = *(int *)(param_1 + 0x168);
  *(uint *)(param_1 + 0x168) = iVar16 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar16 + 1U) {
    FUN_148efd0b4(local_4a8,iVar16);
  }
  lVar15 = *local_4a8;
  *(longlong **)(lVar15 + (longlong)iVar16 * 0x10) = plVar8 + 2;
  *(longlong **)(lVar15 + 8 + (longlong)iVar16 * 0x10) = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar13 = (int *)((longlong)plVar8 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  uVar25 = uStack_470 & 0xffffffff;
  if (0 < (int)uStack_470) {
    iVar16 = 0;
    do {
      if (0 < (int)uVar25) {
        lVar15 = 0;
        lVar19 = 0;
        do {
          piVar13 = local_478;
          cVar6 = FUN_148ef7afc((longlong)local_478 + lVar15,iVar16);
          if (cVar6 != '\0') {
            plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
            plVar8[1] = (longlong)&DAT_100000001;
            *plVar8 = (longlong)&PTR_FUN_14b9dbc00;
            plVar8[2] = 0;
            plVar8[3] = 0;
            plVar8[4] = 0;
            plVar8[5] = 0;
            FUN_144a5dc74(plVar8 + 4);
            *(undefined4 *)(plVar8 + 2) = *(undefined4 *)((longlong)piVar13 + lVar15);
            *(undefined4 *)((longlong)plVar8 + 0x14) =
                 *(undefined4 *)((longlong)piVar13 + lVar15 + 4);
            *(undefined4 *)(plVar8 + 3) = *(undefined4 *)((longlong)piVar13 + lVar15 + 8);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            iVar22 = *(int *)(param_1 + 0x158);
            *(uint *)(param_1 + 0x158) = iVar22 + 1U;
            if (*(uint *)(param_1 + 0x15c) < iVar22 + 1U) {
              FUN_148efd0b4(local_4a0,iVar22);
            }
            lVar4 = *local_4a0;
            *(longlong **)(lVar4 + (longlong)iVar22 * 0x10) = plVar8 + 2;
            *(longlong **)(lVar4 + 8 + (longlong)iVar22 * 0x10) = plVar8;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar8 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar13 = (int *)((longlong)plVar8 + 0xc);
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (*piVar13 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
          }
          lVar19 = lVar19 + 1;
          uVar25 = (ulonglong)(int)uStack_470;
          lVar15 = lVar15 + 0xc;
        } while (lVar19 < (longlong)uVar25);
      }
    } while ((*(int *)(param_1 + 0x158) == 0) && (iVar16 = iVar16 + 1, iVar16 != 3));
  }
  FUN_148ef67ea(param_1);
  if (local_478 != (int *)0x0) {
    FUN_1400020a8();
  }
  FUN_140ecb711(local_3e0,uStack_3d8 & 0xffffffff);
  if (local_3e0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148ef5810:
  uVar3 = *(undefined8 *)piVar10;
  *(undefined8 *)piVar10 = *(undefined8 *)piVar23;
  *(undefined8 *)piVar23 = uVar3;
  iVar16 = iVar16 + -1;
  piVar14 = piVar14 + -4;
  if ((longlong)piVar12 - (longlong)piVar20 < (longlong)piVar11 - (longlong)piVar24) {
    if (piVar9 < piVar13) {
      *ppuVar7 = (undefined8 *)piVar9;
      ppuVar7[1] = (undefined8 *)piVar13;
      *(int *)(ppuVar7 + 2) = iVar16;
      ppuVar7 = ppuVar7 + 3;
    }
    piVar24 = piVar10;
    if (piVar23 <= piVar10 + 2) goto LAB_148ef5ac0;
  }
  else {
    if (piVar10 + 2 < piVar23) {
      *ppuVar7 = (undefined8 *)piVar10;
      ppuVar7[1] = (undefined8 *)piVar14;
      *(int *)(ppuVar7 + 2) = iVar16;
      ppuVar7 = ppuVar7 + 3;
    }
    piVar10 = piVar9;
    piVar12 = piVar13;
    piVar14 = piVar13;
    if (piVar13 <= piVar9) goto LAB_148ef5ac0;
  }
  iVar22 = (int)((ulonglong)((longlong)piVar12 - (longlong)piVar24) >> 3);
  uVar21 = iVar22 + 1;
  piVar13 = piVar14;
  piVar11 = piVar12;
  piVar20 = piVar24;
  if (iVar16 == 0) goto LAB_148ef58a3;
  goto LAB_148ef5758;
}



// FUNCTION 148ef5f18 FUN_148ef5f18 body=181 status=ok
// SIG undefined FUN_148ef5f18(void)

void FUN_148ef5f18(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = DAT_14cb0d2b0;
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x148))) &&
     (DAT_14cb0d2b0 != 0 &&
      *(longlong *)(*(longlong *)(param_1 + 0x140) + (ulonglong)param_2 * 0x10) != 0)) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar3 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) {
        return;
      }
      lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar3 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar3 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    FUN_1459ca124(lVar3,**(undefined8 **)
                          (*(longlong *)(param_1 + 0x140) + (ulonglong)param_2 * 0x10));
    FUN_1459ca14e(param_1,0);
    return;
  }
  return;
}



// FUNCTION 148ef5fce FUN_148ef5fce body=188 status=ok
// SIG undefined FUN_148ef5fce(void)

ulonglong FUN_148ef5fce(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  lVar2 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = 0;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar3 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar3 = *(longlong *)(lVar2 + 0x2c8);
      if (lVar3 == 0) goto LAB_148ef6050;
    }
    FUN_1459c9ffc(lVar3,&local_28);
    iVar1 = *(int *)(param_1 + 0x148);
    if (0 < (longlong)iVar1) {
      puVar4 = *(undefined8 **)(param_1 + 0x140);
      uVar5 = 0;
      do {
        if ((*(int *)*puVar4 == local_28) && (((int *)*puVar4)[1] == local_24)) goto LAB_148ef6050;
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 2;
      } while ((longlong)iVar1 != uVar5);
    }
    uVar5 = 0xffffffff;
    if (0 < iVar1) {
      uVar5 = (ulonglong)(iVar1 - 1);
    }
  }
LAB_148ef6050:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148ef608c FUN_148ef608c body=210 status=ok
// SIG undefined FUN_148ef608c(void)

longlong * FUN_148ef608c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x148);
  if (0 < iVar2) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x140) + lVar4);
      if (lVar1 != 0) {
        FUN_148ef6160(lVar1,local_48);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14001d63e(param_2,iVar2);
        }
        FUN_14023423e((longlong)iVar2 * 0x10 + *param_2,local_48);
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        iVar2 = *(int *)(param_1 + 0x148);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148ef6160 FUN_148ef6160 body=1491 status=ok
// SIG undefined FUN_148ef6160(void)

longlong * FUN_148ef6160(uint *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  char *pcVar5;
  float fVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong *local_a8 [2];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_80;
  undefined1 local_7f;
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar3 = FUN_144a7c5f6(param_1 + 4);
  if (cVar3 == '\0') {
    plVar4 = *(longlong **)(param_1 + 4);
    *param_2 = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    *(uint *)(param_2 + 1) = param_1[6];
    goto LAB_148ef65b1;
  }
  plVar4 = (longlong *)FUN_140e82300();
  local_68 = (longlong *)*plVar4;
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  local_60 = (undefined4)plVar4[1];
  if (param_1[1] == 0) {
    FUN_14023423e(param_2,&local_68);
  }
  else {
    fVar6 = (float)*param_1 / (float)param_1[1];
    if (0.0001 <= ABS(fVar6 + -1.3333334)) {
      if (ABS(fVar6 + -1.7777778) < 0.0001) {
        local_48 = (longlong *)((ulonglong)local_48._4_4_ << 0x20);
        pcVar5 = "AspectRatio_16_9";
        goto LAB_148ef6223;
      }
      if (ABS(fVar6 + -1.6) < 0.0001) {
        local_48 = (longlong *)((ulonglong)local_48._4_4_ << 0x20);
        pcVar5 = "AspectRatio_16_10";
        goto LAB_148ef6223;
      }
      if (ABS(fVar6 + -0.75) < 0.0001) {
        local_48 = (longlong *)((ulonglong)local_48._4_4_ << 0x20);
        pcVar5 = "AspectRatio_3_4";
        goto LAB_148ef6223;
      }
      if (ABS(fVar6 + -0.5625) < 0.0001) {
        local_48 = (longlong *)((ulonglong)local_48._4_4_ << 0x20);
        pcVar5 = "AspectRatio_9_16";
        goto LAB_148ef6223;
      }
      if (ABS(fVar6 + -0.625) < 0.0001) {
        local_48 = (longlong *)((ulonglong)local_48._4_4_ << 0x20);
        pcVar5 = "AspectRatio_10_16";
        goto LAB_148ef6223;
      }
    }
    else {
      local_48 = (longlong *)((ulonglong)local_48._4_4_ << 0x20);
      pcVar5 = "AspectRatio_4_3";
LAB_148ef6223:
      uStack_38 = 0;
      local_40 = 0;
      uStack_50 = 0;
      local_58 = 0;
      FUN_1446ddda2(&local_58,pcVar5,0);
      FUN_140ac6c96(&local_58,&local_68);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_141366fce(&local_80);
    local_7f = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    FUN_145c56198(local_a8,*param_1,&local_80);
    local_58 = CONCAT44(local_58._4_4_,4);
    FUN_14023423e(&local_48,local_a8);
    FUN_140056680(local_c8,&DAT_149e25cc8);
    FUN_140233eec(&local_98,local_c8,&local_58);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = local_40 & 0xffffffff00000000;
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    plVar4 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    FUN_145c56198(local_a8,param_1[1],&local_80);
    local_58 = CONCAT44(local_58._4_4_,4);
    FUN_14023423e(&local_48,local_a8);
    FUN_140056680(local_c8,&DAT_149e25ccc);
    FUN_140233eec(&local_98,local_c8,&local_58);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = local_40 & 0xffffffff00000000;
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    plVar4 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    local_58 = CONCAT44(local_58._4_4_,4);
    local_48 = local_68;
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 8))();
    }
    local_40 = CONCAT44(local_40._4_4_,local_60);
    FUN_140056680(local_a8,L"AspectRatio");
    FUN_140233eec(&local_98,local_a8,&local_58);
    if (local_a8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    uStack_50 = (ulonglong)param_1[2];
    local_58 = CONCAT44(local_58._4_4_,1);
    local_48 = (longlong *)0x0;
    local_40 = local_40 & 0xffffffff00000000;
    FUN_140056680(local_a8,L"RefreshRate");
    FUN_140233eec(&local_98,local_a8,&local_58);
    if (local_a8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    FUN_144a5dc74(local_a8);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"AspectRatio",0);
    FUN_140ac6c96(&local_58,local_a8);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(local_d8,local_a8,1);
    FUN_140233c04(param_2,local_d8,&local_98);
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    FUN_14010f8af(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
LAB_148ef65b1:
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef6734 FUN_148ef6734 body=180 status=ok
// SIG undefined FUN_148ef6734(void)

void FUN_148ef6734(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  lVar1 = DAT_14cb0d2b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar4 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) goto LAB_148ef6755;
      lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar4 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar4 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    FUN_1459c9ffc(lVar4,local_20);
    FUN_148ef67ea(param_1);
    uVar3 = FUN_148ef68e8(param_1,local_20);
    (**(code **)(*param_1 + 0x318))(param_1,uVar3);
  }
LAB_148ef6755:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef67ea FUN_148ef67ea body=254 status=ok
// SIG undefined FUN_148ef67ea(void)

void FUN_148ef67ea(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar4 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) {
        return;
      }
      lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar4 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar4 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    uVar3 = FUN_147ac9414(lVar4);
    if (*(char *)(param_1 + 0x13c) == '\0' || *(uint *)(param_1 + 0x138) != uVar3) {
      *(uint *)(param_1 + 0x138) = uVar3;
      *(undefined1 *)(param_1 + 0x13c) = 1;
      FUN_145abf16f(*(undefined8 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x148));
      *(undefined4 *)(param_1 + 0x148) = 0;
      if (*(int *)(param_1 + 0x14c) != 0) {
        FUN_148efd024(param_1 + 0x140,0);
      }
      if (uVar3 < 3) {
        FUN_148ef7c5a(param_1 + 0x140,param_1 + (ulonglong)(uVar3 << 4) + 0x150);
      }
      FUN_1459ca440(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148ef68e8 FUN_148ef68e8 body=109 status=ok
// SIG undefined FUN_148ef68e8(void)

ulonglong FUN_148ef68e8(longlong param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  
  if ((longlong)*(int *)(param_1 + 0x148) < 1) {
    uVar3 = 0;
  }
  else {
    iVar5 = param_2[1] * param_2[1] + *param_2 * *param_2;
    puVar4 = *(undefined8 **)(param_1 + 0x140);
    uVar7 = 0;
    uVar3 = 0;
    iVar8 = iVar5;
    do {
      piVar1 = (int *)*puVar4;
      if (piVar1 != (int *)0x0) {
        iVar9 = iVar5 - (*piVar1 * *piVar1 + piVar1[1] * piVar1[1]);
        iVar6 = -iVar9;
        if (iVar6 < 0) {
          iVar6 = iVar9;
        }
        bVar2 = iVar6 <= iVar8;
        iVar8 = iVar6;
        if (bVar2) {
          uVar3 = uVar7 & 0xffffffff;
        }
      }
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 2;
    } while ((longlong)*(int *)(param_1 + 0x148) != uVar7);
  }
  return uVar3;
}



// FUNCTION 148ef6956 FUN_148ef6956 body=68 status=ok
// SIG undefined FUN_148ef6956(void)

void FUN_148ef6956(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145abf16f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148efd024(param_1,param_2);
  return;
}



// FUNCTION 148ef699c FUN_148ef699c body=4330 status=ok
// SIG undefined FUN_148ef699c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ef699c(int *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int **ppiVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_3c8 [32];
  int *local_3a8;
  longlong *local_3a0;
  int *local_398;
  int *local_390;
  undefined4 local_388 [190];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_3a8 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbe6020) && (FUN_144b3d300(&DAT_14cbe6020), DAT_14cbe6020 == -1)) {
    DAT_14cbe6010 = (int *)0x0;
    _DAT_14cbe6018 = 0;
    atexit((_func_5014 *)&LAB_14433503f);
    _Init_thread_footer(&DAT_14cbe6020);
  }
  lVar4 = (longlong)(int)DAT_14cbe6018;
  if (lVar4 == 0) {
    DAT_14cbe6018 = 1;
    if (DAT_14cbe601c == 0) {
      FUN_14630406a(&DAT_14cbe6010,0);
    }
    piVar10 = DAT_14cbe6010;
    piVar10[0] = 0x400;
    iVar12 = DAT_14cbe6018;
    piVar10[1] = 0x300;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,iVar12);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x556;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x300;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x550;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x300;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x500;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 800;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x480;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x360;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x5a0;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 900;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x500;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x400;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x578;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x41a;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x690;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x41a;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x640;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x4b0;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x780;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x4b0;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x800;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x480;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x800;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x600;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0xa00;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x640;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0xa00;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x800;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0xc80;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x800;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0xc80;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x960;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0xf00;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x960;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1000;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0xc00;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1400;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0xc80;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1400;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x1000;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1900;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x1000;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1900;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x12c0;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1e00;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x12c0;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x280;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x168;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x3c0;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x21c;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x500;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x2d0;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x780;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x438;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0xa00;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x5a0;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0xc80;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x708;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0xf00;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x870;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1000;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x870;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1e00;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x10e0;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1400;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0x870;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    DAT_14cbe6018 = DAT_14cbe6018 + 1;
    if (DAT_14cbe601c < DAT_14cbe6018) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x1400;
    uVar17 = DAT_14cbe6018;
    piVar10[1] = 0xb40;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    uVar3 = DAT_14cbe6018 + 1;
    _DAT_14cbe6018 = CONCAT44(DAT_14cbe601c,uVar3);
    if (DAT_14cbe601c < uVar3) {
      FUN_14630406a(&DAT_14cbe6010,uVar17);
    }
    piVar10 = DAT_14cbe6010 + lVar4 * 2;
    piVar10[0] = 0x3c00;
    piVar8 = DAT_14cbe6010;
    piVar10[1] = 0x21c0;
    iVar12 = DAT_14cbe6018;
    lVar4 = (longlong)(int)DAT_14cbe6018;
    if (1 < lVar4) {
      local_3a0 = param_3;
      memset(local_388,0,0x2f0);
      local_398 = piVar8;
      local_390 = piVar8 + lVar4 * 2 + -2;
      fVar23 = logf((float)iVar12);
      local_388[0] = (int)(longlong)(fVar23 + fVar23);
      ppiVar6 = &local_398;
      do {
        piVar8 = *ppiVar6;
        piVar5 = ppiVar6[1];
        iVar12 = *(int *)(ppiVar6 + 2);
        iVar18 = (int)((ulonglong)((longlong)piVar5 - (longlong)piVar8) >> 3);
        uVar17 = iVar18 + 1;
        piVar10 = piVar5;
        piVar16 = piVar8;
        if (iVar12 != 0) {
LAB_148ef7255:
          if (8 < (int)uVar17) {
            uVar1 = *(undefined8 *)(piVar8 + (ulonglong)(uVar17 >> 1) * 2);
            *(undefined8 *)(piVar8 + (ulonglong)(uVar17 >> 1) * 2) = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = uVar1;
            piVar19 = piVar10 + 2;
            piVar7 = piVar8;
            do {
              piVar2 = piVar7 + 2;
              piVar11 = piVar7 + 2;
              do {
                piVar7 = piVar11;
                piVar21 = piVar2;
                if (piVar10 < piVar7) break;
                piVar2 = piVar21 + 2;
                piVar11 = piVar7 + 2;
              } while (piVar7[1] * *piVar7 <= piVar8[1] * *piVar8);
              piVar2 = piVar19 + -4;
              do {
                piVar11 = piVar19;
                piVar20 = piVar2;
                piVar19 = piVar11 + -2;
                if (piVar19 <= piVar8) break;
                piVar2 = piVar20 + -2;
              } while (piVar8[1] * *piVar8 <= piVar11[-1] * *piVar19);
              if (piVar19 < piVar7) goto LAB_148ef72eb;
              uVar1 = *(undefined8 *)piVar7;
              *(undefined8 *)piVar7 = *(undefined8 *)piVar19;
              *(undefined8 *)piVar19 = uVar1;
            } while( true );
          }
          if (piVar8 < piVar10) {
            do {
              piVar5 = piVar8;
              if (piVar8 + 2 <= piVar10) {
                iVar12 = *piVar8;
                piVar16 = piVar8 + 2;
                piVar19 = piVar8;
                do {
                  piVar5 = piVar16;
                  iVar18 = *piVar16;
                  if (piVar16[1] * *piVar16 <= piVar19[1] * iVar12) {
                    piVar5 = piVar19;
                    iVar18 = iVar12;
                  }
                  iVar12 = iVar18;
                  piVar16 = piVar16 + 2;
                  piVar19 = piVar5;
                } while (piVar16 <= piVar10);
              }
              uVar1 = *(undefined8 *)piVar5;
              *(undefined8 *)piVar5 = *(undefined8 *)piVar10;
              *(undefined8 *)piVar10 = uVar1;
              piVar10 = piVar10 + -2;
            } while (piVar8 < piVar10);
          }
          goto LAB_148ef7552;
        }
LAB_148ef737e:
        if (uVar17 != 0) {
          iVar12 = (iVar18 - (iVar18 + -1 >> 0x1f)) + -1 >> 1;
          iVar18 = iVar12;
joined_r0x000148ef73a3:
          do {
            iVar14 = iVar12 * 2 + 1;
            if (iVar14 < (int)uVar17) {
              iVar13 = iVar12 * 2 + 2;
              if ((iVar13 < (int)uVar17) &&
                 (piVar8[(longlong)iVar14 * 2 + 1] * piVar8[(longlong)iVar14 * 2] <=
                  piVar8[(longlong)iVar13 * 2 + 1] * piVar8[(longlong)iVar13 * 2])) {
                iVar14 = iVar13;
              }
              lVar15 = (longlong)iVar12;
              lVar4 = (longlong)iVar14;
              if (piVar8[lVar15 * 2 + 1] * piVar8[lVar15 * 2] <
                  piVar8[lVar4 * 2 + 1] * piVar8[lVar4 * 2]) {
                uVar1 = *(undefined8 *)(piVar8 + lVar15 * 2);
                *(undefined8 *)(piVar8 + lVar15 * 2) = *(undefined8 *)(piVar8 + lVar4 * 2);
                *(undefined8 *)(piVar8 + lVar4 * 2) = uVar1;
                iVar12 = iVar14;
                goto joined_r0x000148ef73a3;
              }
            }
            bVar22 = iVar18 != 0;
            iVar12 = iVar18 + -1;
            iVar18 = iVar12;
          } while (bVar22);
          if (1 < (int)uVar17) {
            uVar9 = (ulonglong)uVar17;
            uVar1 = *(undefined8 *)piVar8;
            *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + uVar9 * 2 + -2);
            *(undefined8 *)(piVar8 + uVar9 * 2 + -2) = uVar1;
            if (uVar17 != 2) {
              do {
                uVar9 = uVar9 - 1;
                iVar12 = 0;
                iVar14 = 1;
                iVar18 = 0;
                do {
                  lVar4 = (longlong)(iVar12 + 2);
                  iVar13 = iVar14;
                  if ((lVar4 < (longlong)uVar9) &&
                     (piVar8[(longlong)iVar14 * 2 + 1] * piVar8[(longlong)iVar14 * 2] <=
                      piVar8[lVar4 * 2 + 1] * piVar8[lVar4 * 2])) {
                    iVar13 = iVar12 + 2;
                  }
                  lVar4 = (longlong)iVar18;
                  lVar15 = (longlong)iVar13;
                  if (piVar8[lVar15 * 2 + 1] * piVar8[lVar15 * 2] <=
                      piVar8[lVar4 * 2 + 1] * piVar8[lVar4 * 2]) break;
                  uVar1 = *(undefined8 *)(piVar8 + lVar4 * 2);
                  *(undefined8 *)(piVar8 + lVar4 * 2) = *(undefined8 *)(piVar8 + lVar15 * 2);
                  *(undefined8 *)(piVar8 + lVar15 * 2) = uVar1;
                  iVar12 = iVar13 * 2;
                  iVar14 = iVar13 * 2 + 1;
                  iVar18 = iVar13;
                } while ((longlong)iVar14 < (longlong)uVar9);
                uVar1 = *(undefined8 *)piVar8;
                *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + uVar9 * 2 + -2);
                *(undefined8 *)(piVar8 + uVar9 * 2 + -2) = uVar1;
              } while (2 < uVar9);
            }
          }
        }
LAB_148ef7552:
        ppiVar6 = ppiVar6 + -3;
      } while (&local_398 <= ppiVar6);
      param_3 = local_3a0;
    }
    if (DAT_14cbe6018 == 0) goto LAB_148ef7589;
    lVar4 = (longlong)(int)DAT_14cbe6018;
  }
  piVar10 = DAT_14cbe6010 + lVar4 * 2;
  piVar8 = local_3a8;
  piVar5 = DAT_14cbe6010;
  do {
    iVar12 = *piVar5;
    if ((((*param_1 <= iVar12) && (iVar18 = piVar5[1], param_1[1] <= iVar18)) && (iVar12 <= *piVar8)
        ) && ((iVar18 <= piVar8[1] &&
              ((1.6 < (float)iVar12 / (float)iVar18 ||
               (ABS((float)iVar12 / (float)iVar18 + -1.6) <= 1e-08)))))) {
      iVar12 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
        FUN_14630406a(param_3,iVar12);
        piVar8 = local_3a8;
      }
      *(undefined8 *)(*param_3 + (longlong)iVar12 * 8) = *(undefined8 *)piVar5;
    }
    piVar5 = piVar5 + 2;
  } while (piVar5 != piVar10);
LAB_148ef7589:
  if ((local_90 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_148ef72eb:
  uVar1 = *(undefined8 *)piVar8;
  *(undefined8 *)piVar8 = *(undefined8 *)piVar19;
  *(undefined8 *)piVar19 = uVar1;
  iVar12 = iVar12 + -1;
  piVar11 = piVar11 + -4;
  if ((longlong)piVar20 - (longlong)piVar16 < (longlong)piVar5 - (longlong)piVar21) {
    if (piVar7 < piVar10) {
      *ppiVar6 = piVar7;
      ppiVar6[1] = piVar10;
      *(int *)(ppiVar6 + 2) = iVar12;
      ppiVar6 = ppiVar6 + 3;
    }
    piVar21 = piVar8;
    piVar5 = piVar20;
    if (piVar19 <= piVar8 + 2) goto LAB_148ef7552;
  }
  else {
    if (piVar8 + 2 < piVar19) {
      *ppiVar6 = piVar8;
      ppiVar6[1] = piVar11;
      *(int *)(ppiVar6 + 2) = iVar12;
      ppiVar6 = ppiVar6 + 3;
    }
    piVar8 = piVar7;
    piVar11 = piVar10;
    piVar5 = piVar10;
    if (piVar10 <= piVar7) goto LAB_148ef7552;
  }
  iVar18 = (int)((ulonglong)((longlong)piVar5 - (longlong)piVar21) >> 3);
  uVar17 = iVar18 + 1;
  piVar10 = piVar11;
  piVar16 = piVar21;
  if (iVar12 == 0) goto LAB_148ef737e;
  goto LAB_148ef7255;
}



// FUNCTION 148ef7a88 FUN_148ef7a88 body=116 status=ok
// SIG undefined FUN_148ef7a88(void)

undefined8 * FUN_148ef7a88(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140ecb83c(param_1 + 1,iVar1,0);
    FUN_140ecb74e(param_1[1],uVar2,iVar1);
  }
  puVar4 = param_2 + 3;
  puVar5 = param_1 + 3;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}



// FUNCTION 148ef7afc FUN_148ef7afc body=349 status=ok
// SIG undefined FUN_148ef7afc(void)

undefined8 FUN_148ef7afc(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  fVar6 = (float)uVar1 / (float)uVar2;
  uVar3 = uVar2;
  if (uVar1 >= uVar2 && uVar1 != uVar2) {
    uVar3 = uVar1;
  }
  if (uVar1 < uVar2) {
    fVar6 = 1.0 / fVar6;
    uVar2 = uVar1;
  }
  if (param_2 < 1) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*DAT_14c98e618 + 0x1c8))(DAT_14c98e618,local_d8);
    fVar7 = fVar6;
    if (0 < (longlong)(int)uStack_c8) {
      lVar5 = 0;
      do {
        if (*(char *)(local_d0 + 0x50 + lVar5) == '\x01') {
          fVar7 = (float)*(int *)(local_d0 + 0x20 + lVar5) /
                  (float)*(int *)(local_d0 + 0x24 + lVar5);
          break;
        }
        lVar5 = lVar5 + 0x58;
      } while ((longlong)(int)uStack_c8 * 0x58 - lVar5 != 0);
    }
    FUN_140ecb711();
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (0.0001 < ABS(fVar7 - fVar6)) {
      uVar4 = 0;
      goto LAB_148ef7b79;
    }
  }
  if ((1 < param_2) || ((uVar4 = 0, 0x4ff < uVar3 && (0x2cf < uVar2)))) {
    uVar4 = 1;
  }
LAB_148ef7b79:
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef7c5a FUN_148ef7c5a body=94 status=ok
// SIG undefined FUN_148ef7c5a(void)

void FUN_148ef7c5a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_148efd0b4(param_1,iVar2);
  }
  FUN_148efd139((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 148ef7cdc FUN_148ef7cdc body=130 status=ok
// SIG undefined FUN_148ef7cdc(void)

void FUN_148ef7cdc(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_148ef7d60();
  FUN_14101dc7e(param_1,uVar2);
  cVar1 = FUN_148ef7da8(param_1);
  pwVar3 = L"false";
  if (cVar1 != '\0') {
    pwVar3 = L"true";
  }
  FUN_140056680(local_28,pwVar3);
  FUN_145da60d4(param_1,local_28);
  FUN_1459ca14e(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef7d60 FUN_148ef7d60 body=72 status=ok
// SIG undefined FUN_148ef7d60(void)

bool FUN_148ef7d60(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x180))();
    lVar3 = FUN_140e5f200(uVar2);
    if (lVar3 != 0) {
      cVar1 = FUN_148da744c(lVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xe0));
      return cVar1 == '\x03';
    }
  }
  return false;
}



// FUNCTION 148ef7da8 FUN_148ef7da8 body=72 status=ok
// SIG undefined FUN_148ef7da8(void)

bool FUN_148ef7da8(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x180))();
    lVar3 = FUN_140e5f200(uVar2);
    if (lVar3 != 0) {
      cVar1 = FUN_145d27e30(lVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xe0));
      return cVar1 == '\x03';
    }
  }
  return false;
}



// FUNCTION 148ef7df0 FUN_148ef7df0 body=36 status=ok
// SIG undefined FUN_148ef7df0(void)

void FUN_148ef7df0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_148ef7d60();
  FUN_14101dc7e(param_1,uVar1);
  FUN_148af49d6(param_1);
  return;
}



// FUNCTION 148ef7e14 FUN_148ef7e14 body=35 status=ok
// SIG undefined FUN_148ef7e14(void)

uint FUN_148ef7e14(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = FUN_148ef7d60();
  uVar2 = FUN_148ef7e38(param_1);
  return CONCAT31((int3)((uint)uVar2 >> 8),(byte)uVar2 ^ bVar1) ^ 1;
}



// FUNCTION 148ef7e38 FUN_148ef7e38 body=172 status=ok
// SIG undefined FUN_148ef7e38(void)

bool FUN_148ef7e38(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140e5f3c8();
  puVar3 = &DAT_149dfb77a;
  if (local_18 != 0) {
    puVar3 = local_20;
  }
  lVar4 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar4);
    uVar5 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)&DAT_149e06346 + lVar4);
    uVar7 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148ef7e8e;
      }
      iVar6 = uVar5 - uVar7;
      goto LAB_148ef7eb9;
    }
    if (uVar1 == 0) break;
LAB_148ef7e8e:
    lVar4 = lVar4 + 2;
  }
  iVar6 = 0;
LAB_148ef7eb9:
  if (local_20 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar6 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef7ee6 FUN_148ef7ee6 body=163 status=ok
// SIG undefined FUN_148ef7ee6(void)

void FUN_148ef7ee6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar6 = FUN_14030d4a0();
    plVar1 = *(longlong **)(param_1 + 0x58);
    if ((((plVar1 != (longlong *)0x0) && (lVar6 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)))) {
      uVar7 = (**(code **)(*plVar1 + 0x180))(plVar1);
      lVar6 = FUN_140e5f200(uVar7);
      if (lVar6 != 0) {
        cVar3 = FUN_148ef7e38(param_1);
        cVar4 = FUN_148ef7da8(param_1);
        if (cVar3 != cVar4) {
          iVar5 = FUN_145d27ddc(plVar1);
          FUN_1441de910(lVar6,(int)plVar1[0x1c],iVar5 + 2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148ef7f9e FUN_148ef7f9e body=30 status=ok
// SIG undefined FUN_148ef7f9e(void)

void FUN_148ef7f9e(undefined8 param_1)

{
  FUN_1410e5ae4(param_1,1);
  FUN_1459ca14e(param_1,3);
  return;
}



// FUNCTION 148ef7fbc FUN_148ef7fbc body=99 status=ok
// SIG undefined FUN_148ef7fbc(void)

void FUN_148ef7fbc(undefined8 param_1)

{
  undefined1 auStack_48 [46];
  byte local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457e29f8(param_1,&local_1a);
  FUN_14101dc7e(param_1,local_1a & local_19);
  FUN_1410e5ae4(param_1,1);
  FUN_1459ca14e(param_1,3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef8020 FUN_148ef8020 body=187 status=ok
// SIG undefined FUN_148ef8020(void)

void FUN_148ef8020(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  byte local_2a;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457e29f8(param_1,&local_2a);
  FUN_14101dc7e(param_1,local_2a & local_29);
  if (*(int *)(param_1 + 0x164) != -1) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_1 + 0x160);
    lVar1 = (longlong)local_38;
    _Src = *(void **)(param_1 + 0x158);
    if (lVar1 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar1 * 2);
    }
    FUN_145da617a(param_1,&local_40,2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef80dc FUN_148ef80dc body=155 status=ok
// SIG undefined FUN_148ef80dc(void)

void FUN_148ef80dc(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x180))();
  lVar3 = FUN_141030f3a(uVar2);
  if (lVar3 != 0) {
    cVar1 = FUN_1457e1d32(lVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xe0));
    if (cVar1 != '\0') {
      if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        FUN_148af4a7e(param_1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  FUN_140056680(local_28,L"false");
  FUN_145da617a(param_1,local_28,3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 148ef8180 FUN_148ef8180 body=91 status=ok
// SIG undefined FUN_148ef8180(void)

bool FUN_148ef8180(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_48 [46];
  char local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457e29f8(param_1,&local_1a);
  cVar1 = FUN_148ef81dc(param_1);
  cVar2 = '\0';
  if (local_19 != '\0') {
    cVar2 = local_1a;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return cVar2 == cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef81dc FUN_148ef81dc body=95 status=ok
// SIG undefined FUN_148ef81dc(void)

undefined8 FUN_148ef81dc(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = FUN_14030d4a0();
    bVar6 = (byte)param_3;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      bVar2 = 0;
      uVar5 = 0;
      if ((lVar3 == 0) || (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10), lVar1 == 0))
      goto LAB_148ef8226;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        param_3 = *(longlong *)(lVar1 + 0x30);
        if (*(longlong *)(param_3 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30) {
          uVar4 = FUN_145d4dd86();
          bVar6 = (byte)uVar4;
          uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
          bVar2 = 1;
          goto LAB_148ef8226;
        }
      }
    }
  }
  bVar6 = (byte)param_3;
  bVar2 = 0;
  uVar5 = 0;
LAB_148ef8226:
  return CONCAT71(uVar5,bVar2 & bVar6);
}



// FUNCTION 148ef823c FUN_148ef823c body=29 status=ok
// SIG undefined FUN_148ef823c(void)

void FUN_148ef823c(undefined8 param_1)

{
  FUN_1410e5ae4(param_1,1);
  return;
}



// FUNCTION 148ef827c FUN_148ef827c body=35 status=ok
// SIG undefined FUN_148ef827c(void)

void FUN_148ef827c(longlong param_1)

{
  FUN_148ef82a0(param_1,param_1 + 0x158);
  FUN_1459ca14e(param_1,3);
  return;
}



// FUNCTION 148ef82a0 FUN_148ef82a0 body=115 status=ok
// SIG undefined FUN_148ef82a0(void)

void FUN_148ef82a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar1 + 0x1f0) != 0) {
      lVar1 = FUN_1459b10c6();
      if (lVar1 != 0) {
        if ((int)param_1[0x27] == 1) {
          FUN_143f46312();
          return;
        }
        FUN_143f46180(lVar1,*(undefined4 *)(param_1[0xb] + 0xe0),param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ef8314 FUN_148ef8314 body=23 status=ok
// SIG undefined FUN_148ef8314(void)

bool FUN_148ef8314(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 800))();
  return iVar1 == 0;
}



// FUNCTION 148ef832c FUN_148ef832c body=70 status=ok
// SIG undefined FUN_148ef832c(void)

void FUN_148ef832c(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x148))) {
    FUN_148ef82a0(param_1,*(longlong *)(param_1 + 0x140) + (ulonglong)param_2 * 0x20 + 0x10);
    FUN_1459ca14e(param_1,0);
    return;
  }
  return;
}



// FUNCTION 148ef8372 FUN_148ef8372 body=573 status=ok
// SIG undefined FUN_148ef8372(void)

ulonglong FUN_148ef8372(longlong param_1)

{
  int iVar1;
  ushort uVar2;
  void *_Src;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  lVar6 = DAT_14cb0d2b0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = 0;
  if (DAT_14cb0d2b0 != 0) {
    lVar7 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar7 == 0) {
      FUN_145876474();
      lVar7 = *(longlong *)(lVar6 + 0x2c8);
      if (lVar7 == 0) goto LAB_148ef858c;
    }
    if (*(int *)(param_1 + 0x138) == 1) {
      local_38 = *(int *)(lVar7 + 0x2c0);
      _Src = *(void **)(lVar7 + 0x2b8);
    }
    else {
      local_38 = *(int *)(lVar7 + 0x2b0);
      _Src = *(void **)(lVar7 + 0x2a8);
    }
    local_40 = (undefined2 *)0x0;
    lVar6 = (longlong)local_38;
    if (lVar6 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar6 * 2);
      iVar1 = local_38;
    }
    puVar9 = local_40;
    if (iVar1 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    lVar6 = 0;
    while( true ) {
      uVar5 = *(ushort *)((longlong)puVar9 + lVar6);
      uVar8 = (ulonglong)uVar5;
      uVar2 = *(ushort *)((longlong)L"unset" + lVar6);
      if (uVar5 != uVar2) break;
      if (uVar5 == 0) goto LAB_148ef8580;
LAB_148ef8458:
      lVar6 = lVar6 + 2;
    }
    if ((uVar2 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar3 = (ulonglong)uVar2;
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar3]) goto LAB_148ef8458;
    }
    if (uVar5 != uVar2) {
      lVar6 = 0;
      goto LAB_148ef8483;
    }
LAB_148ef8580:
    uVar8 = 0;
LAB_148ef8582:
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_148ef858c:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
LAB_148ef8483:
  uVar5 = *(ushort *)((longlong)puVar9 + lVar6);
  uVar8 = (ulonglong)uVar5;
  uVar2 = *(ushort *)((longlong)&DAT_149dfb77a + lVar6);
  if (uVar5 != uVar2) {
    if ((uVar2 | uVar5) < 0x80) {
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar3 = (ulonglong)uVar2;
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar3]) goto LAB_148ef849c;
    }
    uVar8 = 0;
    if (uVar5 == uVar2) goto LAB_148ef8582;
    if ((longlong)*(int *)(param_1 + 0x148) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x140);
      lVar7 = lVar6;
      goto LAB_148ef84eb;
    }
    goto LAB_148ef8580;
  }
  if (uVar5 == 0) goto LAB_148ef8580;
LAB_148ef849c:
  lVar6 = lVar6 + 2;
  goto LAB_148ef8483;
LAB_148ef84eb:
  if (*(int *)(lVar7 + 0x18) != iVar1) {
    if (*(int *)(lVar7 + 0x18) + iVar1 == 1) goto LAB_148ef8574;
    goto LAB_148ef853e;
  }
  if (1 < iVar1) {
    lVar4 = 0;
    do {
      uVar5 = *(ushort *)(*(longlong *)(lVar7 + 0x10) + lVar4);
      uVar8 = (ulonglong)uVar5;
      uVar2 = *(ushort *)((longlong)local_40 + lVar4);
      if (uVar5 == uVar2) {
        if (uVar5 == 0) break;
      }
      else {
        if (0x7f < (uVar2 | uVar5)) goto LAB_148ef856c;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar3]) goto LAB_148ef856c;
      }
      lVar4 = lVar4 + 2;
    } while( true );
  }
  goto LAB_148ef8574;
LAB_148ef856c:
  if (uVar5 == uVar2) {
LAB_148ef8574:
    uVar8 = (ulonglong)(lVar7 - lVar6) >> 5;
    if ((int)uVar8 != -1) goto LAB_148ef8582;
    goto LAB_148ef8580;
  }
LAB_148ef853e:
  lVar7 = lVar7 + 0x20;
  if (lVar7 == (longlong)*(int *)(param_1 + 0x148) * 0x20 + lVar6) goto LAB_148ef8580;
  goto LAB_148ef84eb;
}



// FUNCTION 148ef85b0 FUN_148ef85b0 body=131 status=ok
// SIG undefined FUN_148ef85b0(void)

longlong * FUN_148ef85b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x140);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x148) * 4;
    do {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_14001d63e(param_2,iVar1);
      }
      lVar2 = *param_2;
      plVar3 = (longlong *)*plVar5;
      *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      *(int *)(lVar2 + (longlong)iVar1 * 0x10 + 8) = (int)plVar5[1];
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar4);
  }
  return param_2;
}



// FUNCTION 148ef8634 FUN_148ef8634 body=73 status=ok
// SIG undefined FUN_148ef8634(void)

void FUN_148ef8634(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1408bb964(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148d3217c(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148ef867e FUN_148ef867e body=87 status=ok
// SIG undefined FUN_148ef867e(void)

void FUN_148ef867e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1408bb964(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar3 = FUN_1403ca142();
      iVar1 = *(int *)(lVar3 + 0x38);
      if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          lVar3 + 0x30)) {
        FUN_148d321a0(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(param_2 + 8)));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ef86d6 FUN_148ef86d6 body=78 status=ok
// SIG undefined FUN_148ef86d6(void)

void FUN_148ef86d6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1408bb964(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148ef871d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x4e0))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148ef8724 FUN_148ef8724 body=81 status=ok
// SIG undefined FUN_148ef8724(void)

void FUN_148ef8724(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1408bb964(param_1 + 0x30);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)) {
    lVar3 = FUN_140b6d0be();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        lVar3 + 0x30)) {
      FUN_148d9445c(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 148ef8776 FUN_148ef8776 body=91 status=ok
// SIG undefined FUN_148ef8776(void)

void FUN_148ef8776(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1408bb964(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_1403ca142();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148d32272(lVar1,param_2 + 8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ef87d2 FUN_148ef87d2 body=1977 status=ok
// SIG undefined FUN_148ef87d2(void)

void FUN_148ef87d2(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178;
  undefined4 local_170;
  longlong *local_168 [2];
  longlong *local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  longlong **local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong *local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar7 = param_1[4];
  if (lVar7 == 0) goto LAB_148ef882a;
  lVar4 = FUN_1449db7f2();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_148ef882a;
  FUN_140056680(local_b8,&DAT_149dfb77a);
  FUN_140056680(local_c8,&DAT_149dfb77a);
  FUN_140056680(local_d8,&DAT_149dfb77a);
  plVar5 = (longlong *)FUN_140e82300();
  local_e8 = (longlong *)*plVar5;
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 8))();
  }
  local_e0 = (undefined4)plVar5[1];
  plVar5 = (longlong *)FUN_140e82300();
  local_f8 = (longlong *)*plVar5;
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_f0 = (undefined4)plVar5[1];
  plVar5 = (longlong *)FUN_140e82300();
  local_108 = (longlong *)*plVar5;
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 8))();
  }
  local_100 = (undefined4)plVar5[1];
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  local_130 = 0;
  lVar4 = FUN_145da44aa(lVar7);
  if (lVar4 != 0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_1446ddda2(&local_78,"CloseText",0);
    FUN_140ac6c96(&local_78,&local_e8);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    local_148 = 0;
    uStack_140 = 0;
    local_78 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 8))();
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,local_e0);
    FUN_1446ddc76(&local_68,"close",1);
    uVar2 = uStack_140;
    local_60 = CONCAT71(local_60._1_7_,1);
    lVar8 = (longlong)(int)uStack_140;
    uVar3 = (int)uStack_140 + 1;
    uStack_140 = CONCAT44(uStack_140._4_4_,uVar3);
    if (uStack_140._4_4_ < uVar3) {
      FUN_145da4fc8(&local_148,uVar2 & 0xffffffff);
    }
    lVar9 = local_148;
    lVar8 = lVar8 * 0x20;
    FUN_14023423e(lVar8 + local_148,&local_78);
    *(undefined1 *)(lVar9 + 0x18 + lVar8) = (undefined1)local_60;
    *(ulonglong *)(lVar9 + 0x10 + lVar8) = CONCAT44(uStack_64,local_68);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    plVar5 = (longlong *)FUN_140773fe2();
    if (plVar5 == (longlong *)0x0) {
LAB_148ef8d8c:
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"LegalPopupErrorTitle",0);
      FUN_140ac6c96(&local_78,&local_f8);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"LegalPopupErrorBody",0);
      FUN_140ac6c96(&local_78,&local_108);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar7 = (**(code **)(*plVar5 + 0x2d0))(plVar5,*(undefined4 *)(lVar7 + 0xe0),uVar6);
      if (lVar7 == 0) goto LAB_148ef8d8c;
      FUN_148a5ece5(&local_78,lVar7);
      FUN_1410e5bda(&local_118,&local_78);
      FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if ((longlong)(int)uStack_110 != 0) {
        lVar8 = (longlong)(int)uStack_110 << 4;
        lVar7 = local_118;
        do {
          FUN_140009b9a(&local_78,lVar7);
          uVar2 = uStack_120;
          lVar9 = (longlong)(int)uStack_120;
          uVar3 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar3);
          if (uStack_120._4_4_ < uVar3) {
            FUN_14001d63e(&local_128,uVar2 & 0xffffffff);
          }
          FUN_14023423e(lVar9 * 0x10 + local_128,&local_78);
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 0x10))();
          }
          lVar7 = lVar7 + 0x10;
          lVar8 = lVar8 + -0x10;
        } while (lVar8 != 0);
      }
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"LegalPopupTitle",0);
      FUN_140ac6c96(&local_78,&local_f8);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      FUN_1446ddda2(&local_78,"LegalPopupBody",0);
      FUN_140ac6c96(&local_78,&local_108);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      FUN_1400b22c2(&local_88,"[newline]");
      FUN_140233b1a(&local_78,&local_88);
      FUN_1467cfb2c(&local_158,&local_78,&local_128);
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_178 = local_158;
      if (local_158 != (longlong *)0x0) {
        (**(code **)(*local_158 + 8))();
      }
      local_170 = local_150;
      FUN_14023409e(&local_188,&local_108,1);
      local_78 = (longlong *)CONCAT44(local_78._4_4_,4);
      FUN_14023423e(&local_68,&local_178);
      local_90 = &uStack_58;
      local_98 = &local_78;
      FUN_14010d304(&local_88);
      local_a8 = local_188;
      local_a0 = local_180;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_180 + 1) = (int)local_180[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_168,&local_a8,&local_88);
      FUN_14007f2db(local_88,local_80);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
      }
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_180 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_180 + 0x10))(local_180);
          }
        }
      }
      if (local_178 != (longlong *)0x0) {
        (**(code **)(*local_178 + 0x10))();
      }
      FUN_140008f88(&local_108,local_168);
      if (local_168[0] != (longlong *)0x0) {
        (**(code **)(*local_168[0] + 0x10))();
      }
      if (local_158 != (longlong *)0x0) {
        (**(code **)(*local_158 + 0x10))();
      }
    }
    local_1a8 = &local_138;
    local_190 = 1;
    local_198 = 0;
    local_1a0 = 0;
    FUN_1459dd948(lVar4,&local_f8,&local_108,&local_148);
    FUN_140e0067b(local_148,uStack_140 & 0xffffffff);
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1449db362(&local_138);
  FUN_1401b9920(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_118,uStack_110 & 0xffffffff);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
LAB_148ef882a:
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef8f8c FUN_148ef8f8c body=123 status=ok
// SIG undefined FUN_148ef8f8c(void)

undefined8 FUN_148ef8f8c(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14624635c(param_1 + 0x20,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Vault Card (Active) Currency [+= %s]",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148ef9008 FUN_148ef9008 body=151 status=ok
// SIG undefined FUN_148ef9008(void)

void FUN_148ef9008(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  if (lVar3 == 0) {
    uVar4 = FUN_141218768();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x90) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x88));
    }
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    return;
  }
  return;
}



// FUNCTION 148ef90a0 FUN_148ef90a0 body=198 status=ok
// SIG undefined FUN_148ef90a0(void)

undefined8 FUN_148ef90a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14624635c(param_1 + 0x28,&local_38);
  puVar3 = &DAT_149dfb77a;
  puVar4 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  uVar1 = FUN_148ba335c();
  FUN_1406f1d90(uVar1,local_48,*(undefined1 *)(param_1 + 0x20));
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_48);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar2;
  }
  FUN_140002266(param_2,L"Vault Card (Active) Experience [%s.%s]",puVar3,puVar4);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef9168 FUN_148ef9168 body=259 status=ok
// SIG undefined FUN_148ef9168(void)

int FUN_148ef9168(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    iVar2 = FUN_148ef926c(param_1);
  }
  else {
    iVar2 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      local_80[0] = 0;
      local_58 = 0;
      FUN_1456bb102(local_80);
      FUN_1448729ea(param_1 + 0x28,local_50,local_80);
      iVar2 = FUN_1405d5f74(local_50);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar3 = local_50;
        if (0x18 < local_38) {
          pppuVar3 = (undefined8 ***)local_50[0];
        }
        (*pcVar1)(pppuVar3);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(local_50[0]);
      }
      FUN_144a5ac3a(local_80);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (int)((float)iVar2 * *(float *)(param_4 + 0x1c));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef926c FUN_148ef926c body=298 status=ok
// SIG undefined FUN_148ef926c(void)

int FUN_148ef926c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = FUN_1441f0270(param_2,param_3);
  uVar5 = FUN_140d72879();
  uVar3 = FUN_140df7d8e(param_2,param_3);
  iVar4 = FUN_140d72a52(uVar5,param_3,uVar3);
  local_98[0] = 0;
  local_70 = 0;
  FUN_1456bb102(local_98,param_2);
  FUN_1448729ea(param_1 + 0x28,local_68,local_98);
  fVar7 = (float)FUN_144a7ecd0(local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar6 = local_68;
    if (0x18 < local_50) {
      pppuVar6 = (undefined8 ***)local_68[0];
    }
    (*pcVar1)(pppuVar6);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_144a5ac3a(local_98);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (int)(fVar7 * (float)(iVar2 - iVar4));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef9398 FUN_148ef9398 body=99 status=ok
// SIG undefined FUN_148ef9398(void)

void FUN_148ef9398(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_140e44844();
  lVar3 = FUN_14620a5eb();
  uVar1 = *(undefined4 *)(lVar3 + 0x24);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_14156016c(lVar2);
  }
  FUN_14164e3a2(param_1 + 0x88,param_2,param_3,uVar4,uVar1,0);
  return;
}



// FUNCTION 148ef93fc FUN_148ef93fc body=134 status=ok
// SIG undefined FUN_148ef93fc(void)

void FUN_148ef93fc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 == 0) {
    uVar3 = FUN_141209660();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x68) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x60));
    }
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    return;
  }
  return;
}



// FUNCTION 148ef94de FUN_148ef94de body=140 status=ok
// SIG undefined FUN_148ef94de(void)

undefined8
FUN_148ef94de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



// FUNCTION 148ef956a FUN_148ef956a body=197 status=ok
// SIG undefined FUN_148ef956a(void)

void FUN_148ef956a(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x78);
      iVar5 = iVar3;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x14) == param_2) goto LAB_148ef960f;
        iVar5 = *(int *)(lVar2 + (longlong)iVar5 * 0x14 + 0xc);
      } while (iVar5 != -1);
    }
  }
  lVar2 = FUN_14075fac2();
  if (lVar2 == 0) {
    return;
  }
  uVar6 = FUN_1404f489e(param_1);
  lVar2 = FUN_14008e0ae(lVar2);
  *(undefined4 *)(lVar2 + 0x58) = uVar6;
  FUN_14020a6cc(lVar2 + 0x50,1);
  return;
  while (iVar3 = *(int *)((longlong)plVar4 + 0xc), iVar3 != -1) {
LAB_148ef960f:
    plVar4 = (longlong *)(lVar2 + (longlong)iVar3 * 0x14);
    if (*plVar4 == param_2) goto LAB_148ef9624;
  }
  plVar4 = (longlong *)0x0;
LAB_148ef9624:
  *(undefined4 *)(plVar4 + 1) = param_3;
  FUN_1404f474c();
  return;
}



// FUNCTION 148ef965a FUN_148ef965a body=10 status=ok
// SIG undefined FUN_148ef965a(void)

void FUN_148ef965a(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  float fStack_28;
  undefined1 uStack_24;
  ulonglong uStack_20;
  
  if (param_1 == 0) {
    return;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x4f0) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x4e8);
    if (cVar1 != '\0') {
      fStack_28 = (float)*(double *)(lVar2 + 0x6d0);
      uStack_24 = 1;
      puVar3 = &DAT_14c9a63f8;
      if (param_2 != '\0') {
        puVar3 = &DAT_14c9a6400;
      }
      uStack_38 = *puVar3;
      uStack_30 = 0xffffffff;
      uStack_48 = DAT_14cbe7058;
      uStack_40 = 0xffffffff;
      FUN_140f8b8f2(param_1 + 0x4d8);
    }
  }
  if ((uStack_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef9664 FUN_148ef9664 body=105 status=ok
// SIG undefined FUN_148ef9664(void)

void FUN_148ef9664(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar1 = FUN_140fb8258();
    if (lVar1 != 0) {
      local_20 = *param_2;
      FUN_140fb8546(lVar1,&local_20,param_3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ef96ce FUN_148ef96ce body=49 status=ok
// SIG undefined FUN_148ef96ce(void)

void FUN_148ef96ce(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140fb8258(param_2);
    if (lVar1 != 0) {
      FUN_148efeeb0(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148ef9728 FUN_148ef9728 body=101 status=ok
// SIG undefined FUN_148ef9728(void)

void FUN_148ef9728(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  if (param_3 == '\0') {
    return;
  }
  if (param_2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148ef9767;
  }
  param_2 = 0;
LAB_148ef9767:
  FUN_148efe9dc(param_1,param_2,1);
  FUN_148efea8c(param_1 + 0x30,param_2,0);
  return;
}



// FUNCTION 148ef978e FUN_148ef978e body=104 status=ok
// SIG undefined FUN_148ef978e(void)

void FUN_148ef978e(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  
  if (param_3 == '\0') {
    return;
  }
  if (param_2 != 0) {
    lVar1 = FUN_144a5dd5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148ef97cd;
  }
  param_2 = 0;
LAB_148ef97cd:
  FUN_148efe9dc(param_1,param_2,0);
  FUN_148efea8c(param_1 + 0x30,param_2,0xffffffff);
  return;
}



// FUNCTION 148ef97f6 FUN_148ef97f6 body=95 status=ok
// SIG undefined FUN_148ef97f6(void)

void FUN_148ef97f6(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      cVar4 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
      if (cVar4 != '\0') {
        FUN_1443399d4(param_1,plVar2,param_3);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  return;
}



// FUNCTION 148ef9856 FUN_148ef9856 body=38 status=ok
// SIG undefined FUN_148ef9856(void)

undefined8 FUN_148ef9856(undefined8 param_1,int param_2)

{
  FUN_145c2088a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef987c FUN_148ef987c body=38 status=ok
// SIG undefined FUN_148ef987c(void)

undefined8 FUN_148ef987c(undefined8 param_1,int param_2)

{
  FUN_140ea16e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef98aa FUN_148ef98aa body=38 status=ok
// SIG undefined FUN_148ef98aa(void)

undefined8 FUN_148ef98aa(undefined8 param_1,int param_2)

{
  FUN_145c46e42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef98d2 FUN_148ef98d2 body=29 status=ok
// SIG undefined FUN_148ef98d2(void)

undefined8 FUN_148ef98d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef98f0 FUN_148ef98f0 body=29 status=ok
// SIG undefined FUN_148ef98f0(void)

undefined8 FUN_148ef98f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef990e FUN_148ef990e body=38 status=ok
// SIG undefined FUN_148ef990e(void)

undefined8 FUN_148ef990e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RefreshLanMenu",1);
  return param_2;
}



// FUNCTION 148ef9934 FUN_148ef9934 body=29 status=ok
// SIG undefined FUN_148ef9934(void)

undefined8 FUN_148ef9934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef9952 FUN_148ef9952 body=38 status=ok
// SIG undefined FUN_148ef9952(void)

undefined8 FUN_148ef9952(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CloseLanMenu",1);
  return param_2;
}



// FUNCTION 148ef9978 FUN_148ef9978 body=47 status=ok
// SIG undefined FUN_148ef9978(void)

longlong FUN_148ef9978(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef99a8 FUN_148ef99a8 body=38 status=ok
// SIG undefined FUN_148ef99a8(void)

undefined8 FUN_148ef99a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"JoinLanSession",1);
  return param_2;
}



// FUNCTION 148ef99ce FUN_148ef99ce body=29 status=ok
// SIG undefined FUN_148ef99ce(void)

undefined8 FUN_148ef99ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef99ec FUN_148ef99ec body=38 status=ok
// SIG undefined FUN_148ef99ec(void)

undefined8 FUN_148ef99ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetLanSortCriteria",1);
  return param_2;
}



// FUNCTION 148ef9a12 FUN_148ef9a12 body=68 status=ok
// SIG undefined FUN_148ef9a12(void)

void FUN_148ef9a12(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x2a0);
  memset(_Dst,0,0x2a0);
  FUN_148c937fa(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148ef9a56 FUN_148ef9a56 body=29 status=ok
// SIG undefined FUN_148ef9a56(void)

undefined8 FUN_148ef9a56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ef9a74 FUN_148ef9a74 body=38 status=ok
// SIG undefined FUN_148ef9a74(void)

undefined8 FUN_148ef9a74(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Option_GameSettings_GamepadBindingsChanged",1);
  return param_2;
}



// FUNCTION 148ef9a9a FUN_148ef9a9a body=148 status=ok
// SIG undefined FUN_148ef9a9a(void)

void FUN_148ef9a9a(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x1a8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x1ac) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x1a8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x1a8) = param_2;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  lVar5 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x198);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148ef9b34 FUN_148ef9b34 body=89 status=ok
// SIG undefined FUN_148ef9b34(void)

bool FUN_148ef9b34(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148ef9b7f;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148ef9b7f:
  return lVar6 == param_2;
}



// FUNCTION 148ef9b8e FUN_148ef9b8e body=118 status=ok
// SIG undefined FUN_148ef9b8e(void)

void FUN_148ef9b8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9daed0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ef9c04 FUN_148ef9c04 body=156 status=ok
// SIG undefined FUN_148ef9c04(void)

void FUN_148ef9c04(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9daed0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ef9c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ef9ca0 FUN_148ef9ca0 body=93 status=ok
// SIG undefined FUN_148ef9ca0(void)

ulonglong FUN_148ef9ca0(longlong param_1)

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
LAB_148ef9cf2:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148ef9cf2;
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



// FUNCTION 148ef9cfe FUN_148ef9cfe body=48 status=ok
// SIG undefined FUN_148ef9cfe(void)

void FUN_148ef9cfe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148ef9d2e FUN_148ef9d2e body=159 status=ok
// SIG undefined FUN_148ef9d2e(void)

void FUN_148ef9d2e(longlong param_1,longlong *param_2)

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
    if ((longlong *)param_2[1] == plVar2) goto LAB_148ef9d6b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148ef9d6b;
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
LAB_148ef9d6b:
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
                    /* WARNING: Could not recover jumptable at 0x000148ef9dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ef9dce FUN_148ef9dce body=364 status=ok
// SIG undefined FUN_148ef9dce(void)

longlong *
FUN_148ef9dce(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

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
  plVar10 = *(longlong **)(param_2 + 0x28);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_148ef9e55:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_148ef9e55;
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
    uVar12 = *(undefined8 *)(param_2 + 0x20);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b9daff0;
  puVar5[1] = *param_4;
  puVar5[2] = *param_5;
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
  puVar5[3] = lVar11;
  *puVar5 = &PTR_FUN_14b9daf80;
  puVar5[4] = uVar12;
  puVar5[5] = plVar10;
  if (bVar9) {
    puVar5[6] = uVar4;
    *(undefined4 *)(puVar5 + 7) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 7) = uVar3;
    puVar5[6] = uVar4;
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



// FUNCTION 148ef9f3a FUN_148ef9f3a body=64 status=ok
// SIG undefined FUN_148ef9f3a(void)

undefined8 * FUN_148ef9f3a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9daf80;
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



// FUNCTION 148ef9f7e FUN_148ef9f7e body=81 status=ok
// SIG undefined FUN_148ef9f7e(void)

undefined8 FUN_148ef9f7e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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
  return uVar6;
}



// FUNCTION 148ef9fd6 FUN_148ef9fd6 body=89 status=ok
// SIG undefined FUN_148ef9fd6(void)

bool FUN_148ef9fd6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148efa021;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_148efa021:
  return lVar6 == param_2;
}



// FUNCTION 148efa058 FUN_148efa058 body=126 status=ok
// SIG undefined FUN_148efa058(void)

void FUN_148efa058(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9daff0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b9daf80;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148efa0d6 FUN_148efa0d6 body=126 status=ok
// SIG undefined FUN_148efa0d6(void)

void FUN_148efa0d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9daff0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b9daf80;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148efa154 FUN_148efa154 body=164 status=ok
// SIG undefined FUN_148efa154(void)

void FUN_148efa154(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _LIST_ENTRY *p_Var8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9daff0;
  p_Var8 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var8;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9daf80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efa1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efa1f8 FUN_148efa1f8 body=126 status=ok
// SIG undefined FUN_148efa1f8(void)

void FUN_148efa1f8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x28);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148efa22e;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x20);
    bVar3 = false;
  }
LAB_148efa22e:
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar7,param_2,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10));
  if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x000148efa266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148efa276 FUN_148efa276 body=109 status=ok
// SIG undefined FUN_148efa276(void)

ulonglong FUN_148efa276(longlong param_1,undefined8 param_2)

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
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_148efa2d8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148efa2d8;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x30))
                (lVar4 + *(int *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x10));
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



// FUNCTION 148efa2e6 FUN_148efa2e6 body=68 status=ok
// SIG undefined FUN_148efa2e6(void)

undefined8 * FUN_148efa2e6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9db060;
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



// FUNCTION 148efa32e FUN_148efa32e body=81 status=ok
// SIG undefined FUN_148efa32e(void)

undefined8 FUN_148efa32e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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
  return uVar6;
}



// FUNCTION 148efa386 FUN_148efa386 body=89 status=ok
// SIG undefined FUN_148efa386(void)

bool FUN_148efa386(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148efa3d1;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_148efa3d1:
  return lVar6 == param_2;
}



// FUNCTION 148efa408 FUN_148efa408 body=126 status=ok
// SIG undefined FUN_148efa408(void)

void FUN_148efa408(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9db0d0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b9db060;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148efa486 FUN_148efa486 body=126 status=ok
// SIG undefined FUN_148efa486(void)

void FUN_148efa486(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9db0d0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b9db060;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148efa504 FUN_148efa504 body=164 status=ok
// SIG undefined FUN_148efa504(void)

void FUN_148efa504(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _LIST_ENTRY *p_Var8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9db0d0;
  p_Var8 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var8;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efa598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efa5a8 FUN_148efa5a8 body=131 status=ok
// SIG undefined FUN_148efa5a8(void)

void FUN_148efa5a8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x28);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148efa5de;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x20);
    bVar3 = false;
  }
LAB_148efa5de:
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar7,param_2,param_1,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10));
  if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x000148efa61b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148efa62e FUN_148efa62e body=68 status=ok
// SIG undefined FUN_148efa62e(void)

undefined8 * FUN_148efa62e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9db140;
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



// FUNCTION 148efa676 FUN_148efa676 body=81 status=ok
// SIG undefined FUN_148efa676(void)

undefined8 FUN_148efa676(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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
  return uVar6;
}



// FUNCTION 148efa6ce FUN_148efa6ce body=89 status=ok
// SIG undefined FUN_148efa6ce(void)

bool FUN_148efa6ce(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148efa719;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_148efa719:
  return lVar6 == param_2;
}



// FUNCTION 148efa728 FUN_148efa728 body=126 status=ok
// SIG undefined FUN_148efa728(void)

void FUN_148efa728(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9db1b0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b9db140;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148efa7a6 FUN_148efa7a6 body=126 status=ok
// SIG undefined FUN_148efa7a6(void)

void FUN_148efa7a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9db1b0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b9db140;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 148efa824 FUN_148efa824 body=164 status=ok
// SIG undefined FUN_148efa824(void)

void FUN_148efa824(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _LIST_ENTRY *p_Var8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9db1b0;
  p_Var8 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var8;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar6;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar7;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efa8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efa8c8 FUN_148efa8c8 body=126 status=ok
// SIG undefined FUN_148efa8c8(void)

void FUN_148efa8c8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x28);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148efa8fe;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x20);
    bVar3 = false;
  }
LAB_148efa8fe:
  (**(code **)(param_1 + 0x30))
            (*(int *)(param_1 + 0x38) + lVar7,param_2,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10));
  if (!bVar3) {
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
                    /* WARNING: Could not recover jumptable at 0x000148efa936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148efa948 FUN_148efa948 body=386 status=ok
// SIG undefined FUN_148efa948(void)

longlong * FUN_148efa948(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x28);
  if (plVar6 == (longlong *)0x0) {
LAB_148efaa59:
    *puVar5 = &PTR_LAB_14b42a9c0;
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
    *puVar5 = &PTR_FUN_14b9db220;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148efaa59;
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
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a9c0;
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
    *puVar5 = &PTR_FUN_14b9db220;
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



// FUNCTION 148efaaca FUN_148efaaca body=64 status=ok
// SIG undefined FUN_148efaaca(void)

undefined8 * FUN_148efaaca(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9db220;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148efab0e FUN_148efab0e body=81 status=ok
// SIG undefined FUN_148efab0e(void)

undefined8 FUN_148efab0e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148efab66 FUN_148efab66 body=89 status=ok
// SIG undefined FUN_148efab66(void)

bool FUN_148efab66(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148efabb1;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148efabb1:
  return lVar6 == param_2;
}



// FUNCTION 148efabdc FUN_148efabdc body=118 status=ok
// SIG undefined FUN_148efabdc(void)

void FUN_148efabdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a9c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db220;
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



// FUNCTION 148efac52 FUN_148efac52 body=118 status=ok
// SIG undefined FUN_148efac52(void)

void FUN_148efac52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a9c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db220;
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



// FUNCTION 148efacc8 FUN_148efacc8 body=156 status=ok
// SIG undefined FUN_148efacc8(void)

void FUN_148efacc8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42a9c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db220;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efad54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efad64 FUN_148efad64 body=104 status=ok
// SIG undefined FUN_148efad64(void)

void FUN_148efad64(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148efadb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148efadc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148efadcc FUN_148efadcc body=101 status=ok
// SIG undefined FUN_148efadcc(void)

ulonglong FUN_148efadcc(longlong param_1)

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
LAB_148efae26:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148efae26;
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



// FUNCTION 148efae32 FUN_148efae32 body=71 status=ok
// SIG undefined FUN_148efae32(void)

undefined8 * FUN_148efae32(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148efae7a FUN_148efae7a body=147 status=ok
// SIG undefined FUN_148efae7a(void)

void FUN_148efae7a(longlong param_1,int param_2)

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



// FUNCTION 148efaf0e FUN_148efaf0e body=110 status=ok
// SIG undefined FUN_148efaf0e(void)

void FUN_148efaf0e(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145afe320(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_145774c3e(param_1);
    return;
  }
  FUN_148efaf7c(param_1);
  FUN_145afe320(param_1,param_2);
  return;
}



// FUNCTION 148efaf7c FUN_148efaf7c body=322 status=ok
// SIG undefined FUN_148efaf7c(void)

void FUN_148efaf7c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 148efb0c0 FUN_148efb0c0 body=30 status=ok
// SIG undefined FUN_148efb0c0(void)

void * FUN_148efb0c0(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efb0e4 FUN_148efb0e4 body=30 status=ok
// SIG undefined FUN_148efb0e4(void)

void * FUN_148efb0e4(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efb10e FUN_148efb10e body=30 status=ok
// SIG undefined FUN_148efb10e(void)

void * FUN_148efb10e(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efb138 FUN_148efb138 body=31 status=ok
// SIG undefined FUN_148efb138(void)

undefined8 FUN_148efb138(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efb172 FUN_148efb172 body=93 status=ok
// SIG undefined FUN_148efb172(void)

void FUN_148efb172(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efb1d0 FUN_148efb1d0 body=93 status=ok
// SIG undefined FUN_148efb1d0(void)

void FUN_148efb1d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efb22e FUN_148efb22e body=126 status=ok
// SIG undefined FUN_148efb22e(void)

void FUN_148efb22e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db380;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efb29d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efb2ac FUN_148efb2ac body=35 status=ok
// SIG undefined FUN_148efb2ac(void)

void FUN_148efb2ac(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efb2cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148efb2d0 FUN_148efb2d0 body=140 status=ok
// SIG undefined FUN_148efb2d0(void)

undefined8 * FUN_148efb2d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b9db3f0;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  return puVar1;
}



// FUNCTION 148efb362 FUN_148efb362 body=118 status=ok
// SIG undefined FUN_148efb362(void)

undefined8 * FUN_148efb362(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9db410;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 148efb3de FUN_148efb3de body=31 status=ok
// SIG undefined FUN_148efb3de(void)

undefined8 FUN_148efb3de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efb418 FUN_148efb418 body=29 status=ok
// SIG undefined FUN_148efb418(void)

bool FUN_148efb418(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efb436 FUN_148efb436 body=26 status=ok
// SIG undefined FUN_148efb436(void)

bool FUN_148efb436(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148efb450 FUN_148efb450 body=93 status=ok
// SIG undefined FUN_148efb450(void)

void FUN_148efb450(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9db4a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efb4ae FUN_148efb4ae body=93 status=ok
// SIG undefined FUN_148efb4ae(void)

void FUN_148efb4ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9db4a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db430;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efb50c FUN_148efb50c body=126 status=ok
// SIG undefined FUN_148efb50c(void)

void FUN_148efb50c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9db4a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db430;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efb57b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efb58a FUN_148efb58a body=46 status=ok
// SIG undefined FUN_148efb58a(void)

void FUN_148efb58a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efb5b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148efb5ba FUN_148efb5ba body=31 status=ok
// SIG undefined FUN_148efb5ba(void)

undefined8 FUN_148efb5ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efb5f4 FUN_148efb5f4 body=29 status=ok
// SIG undefined FUN_148efb5f4(void)

bool FUN_148efb5f4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148efb612 FUN_148efb612 body=93 status=ok
// SIG undefined FUN_148efb612(void)

void FUN_148efb612(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efb670 FUN_148efb670 body=93 status=ok
// SIG undefined FUN_148efb670(void)

void FUN_148efb670(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148efb6ce FUN_148efb6ce body=126 status=ok
// SIG undefined FUN_148efb6ce(void)

void FUN_148efb6ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db510;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efb73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efb74c FUN_148efb74c body=38 status=ok
// SIG undefined FUN_148efb74c(void)

void FUN_148efb74c(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148efb76f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148efb772 FUN_148efb772 body=48 status=ok
// SIG undefined FUN_148efb772(void)

void FUN_148efb772(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,200,8);
  }
  return;
}



// FUNCTION 148efb7a2 FUN_148efb7a2 body=30 status=ok
// SIG undefined FUN_148efb7a2(void)

void * FUN_148efb7a2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efb7cc FUN_148efb7cc body=30 status=ok
// SIG undefined FUN_148efb7cc(void)

void * FUN_148efb7cc(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efb7fc FUN_148efb7fc body=277 status=ok
// SIG undefined FUN_148efb7fc(void)

void FUN_148efb7fc(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  plVar5 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*plVar5 + 0x1c8))(plVar5,&local_48,&local_40);
  FUN_1409ee323(local_48,local_40,&local_58);
  cVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  _Src = local_58;
  if (cVar4 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    local_68 = (void *)0x0;
    lVar6 = (longlong)(int)uStack_50;
    local_60 = (int)uStack_50;
    if (lVar6 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
      memcpy(local_68,_Src,lVar6 * 2);
    }
    (*pcVar2)(iVar1 + lVar3,&local_68);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efb912 FUN_148efb912 body=30 status=ok
// SIG undefined FUN_148efb912(void)

void * FUN_148efb912(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efb942 FUN_148efb942 body=476 status=ok
// SIG undefined FUN_148efb942(void)

void FUN_148efb942(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_88 = (void *)0x0;
  local_58 = 0;
  (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_58,&local_88);
  FUN_1409ee323(local_58,local_88,&local_78);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_58 = 0;
  local_60 = 0;
  (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_60,&local_58);
  FUN_1409ee323(local_60,local_58,&local_88);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  pvVar4 = local_88;
  if (cVar5 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    local_98 = (void *)0x0;
    lVar7 = (longlong)(int)uStack_80;
    local_90 = (int)uStack_80;
    if (lVar7 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,uStack_80 & 0xffffffff,0);
      memcpy(local_98,pvVar4,lVar7 * 2);
    }
    pvVar4 = local_78;
    local_a8 = (void *)0x0;
    lVar7 = (longlong)(int)uStack_70;
    local_a0 = (int)uStack_70;
    if (lVar7 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,uStack_70 & 0xffffffff,0);
      memcpy(local_a8,pvVar4,lVar7 * 2);
    }
    (*pcVar2)(iVar1 + lVar3,&local_a8,&local_98);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efbb20 FUN_148efbb20 body=30 status=ok
// SIG undefined FUN_148efbb20(void)

void * FUN_148efbb20(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efbb50 FUN_148efbb50 body=197 status=ok
// SIG undefined FUN_148efbb50(void)

void FUN_148efbb50(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efbc16 FUN_148efbc16 body=30 status=ok
// SIG undefined FUN_148efbc16(void)

void * FUN_148efbc16(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148efbc46 FUN_148efbc46 body=234 status=ok
// SIG undefined FUN_148efbc46(void)

void FUN_148efbc46(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,local_58 + 3);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58,
               local_58[3] & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efbd32 FUN_148efbd32 body=48 status=ok
// SIG undefined FUN_148efbd32(void)

void FUN_148efbd32(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 148efbd62 FUN_148efbd62 body=63 status=ok
// SIG undefined FUN_148efbd62(void)

longlong FUN_148efbd62(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148efbdd8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_148efbda1(lVar2);
  return lVar2;
}



// FUNCTION 148efbda1 FUN_148efbda1 body=55 status=ok
// SIG undefined FUN_148efbda1(void)

void FUN_148efbda1(longlong param_1)

{
  FUN_1400b22c2(param_1,"Initial Text");
  FUN_1400b22c2(param_1 + 0x10,&DAT_149e02088);
  *(undefined4 *)(param_1 + 0x20) = 0xf;
  *(undefined2 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 148efbdd8 FUN_148efbdd8 body=147 status=ok
// SIG undefined FUN_148efbdd8(void)

void FUN_148efbdd8(longlong param_1,int param_2)

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



// FUNCTION 148efbe6c FUN_148efbe6c body=68 status=ok
// SIG undefined FUN_148efbe6c(void)

undefined8 * FUN_148efbe6c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9db620;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148efbeb4 FUN_148efbeb4 body=81 status=ok
// SIG undefined FUN_148efbeb4(void)

undefined8 FUN_148efbeb4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148efbf0c FUN_148efbf0c body=91 status=ok
// SIG undefined FUN_148efbf0c(void)

bool FUN_148efbf0c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148efbf3c;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148efbf3c:
  return lVar6 == param_2;
}



// FUNCTION 148efbf84 FUN_148efbf84 body=118 status=ok
// SIG undefined FUN_148efbf84(void)

void FUN_148efbf84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db620;
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



// FUNCTION 148efbffa FUN_148efbffa body=118 status=ok
// SIG undefined FUN_148efbffa(void)

void FUN_148efbffa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db620;
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



// FUNCTION 148efc070 FUN_148efc070 body=156 status=ok
// SIG undefined FUN_148efc070(void)

void FUN_148efc070(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efc0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148efc10c FUN_148efc10c body=100 status=ok
// SIG undefined FUN_148efc10c(void)

void FUN_148efc10c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148efc158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148efc165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148efc170 FUN_148efc170 body=100 status=ok
// SIG undefined FUN_148efc170(void)

ulonglong FUN_148efc170(longlong param_1)

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
LAB_148efc1c9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148efc1c9;
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



// FUNCTION 148efc1d4 FUN_148efc1d4 body=24 status=ok
// SIG undefined FUN_148efc1d4(void)

void FUN_148efc1d4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148efc1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148efc1ec FUN_148efc1ec body=29 status=ok
// SIG undefined FUN_148efc1ec(void)

undefined8 FUN_148efc1ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148efc218 FUN_148efc218 body=244 status=ok
// SIG undefined FUN_148efc218(void)

undefined8 *
FUN_148efc218(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148efc30e(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148efc30e FUN_148efc30e body=384 status=ok
// SIG undefined FUN_148efc30e(void)

void FUN_148efc30e(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148efc421:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9db790;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148efc421;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9db790;
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
                    /* WARNING: Could not recover jumptable at 0x000148efc41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148efc48e FUN_148efc48e body=64 status=ok
// SIG undefined FUN_148efc48e(void)

undefined8 * FUN_148efc48e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9db790;
  plVar2 = (longlong *)param_1[4];
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


