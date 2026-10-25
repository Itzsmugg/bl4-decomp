// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b08dea FUN_148b08dea body=222 status=ok
// SIG undefined FUN_148b08dea(void)

void FUN_148b08dea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_140d5712e();
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  plVar3 = *(longlong **)(lVar4 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_14142d800(uVar5);
  FUN_144a2b0a4(uVar5,&local_30);
  if ((longlong *)(param_1 + 0x148) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x148) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x148) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x150) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x154) = local_28._4_4_;
    local_28 = 0;
  }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b08eca FUN_148b08eca body=65 status=ok
// SIG undefined FUN_148b08eca(void)

undefined8 FUN_148b08eca(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    uVar1 = FUN_145b84bf4();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (lVar3 != 0) {
      uVar1 = FUN_148b0a8b6(lVar3);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 148b08f0e FUN_148b08f0e body=166 status=ok
// SIG undefined FUN_148b08f0e(void)

void FUN_148b08f0e(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = param_1[0xb];
  uVar2 = FUN_145b84bf4();
  plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
  lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (lVar4 != 0) {
    FUN_148b0a97c(lVar4);
    FUN_148b0a5d8(lVar4,local_30);
    iVar1 = FUN_140e1307c(param_1 + 0x27,local_30);
    if (iVar1 != -1) {
      (**(code **)(*param_1 + 0x318))(param_1,iVar1);
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b08fb6 FUN_148b08fb6 body=118 status=ok
// SIG undefined FUN_148b08fb6(void)

void FUN_148b08fb6(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = param_1[0xb];
  if (lVar4 != 0) {
    uVar1 = FUN_145b84bf4();
    plVar3 = (longlong *)FUN_144718840(lVar4,uVar1);
    lVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if (lVar4 != 0) {
      FUN_148b0a66a(lVar4);
      iVar2 = FUN_140e1307c(param_1 + 0x27,param_1 + 0x29);
      if (iVar2 != -1) {
        (**(code **)(*param_1 + 0x318))(param_1,iVar2);
      }
      FUN_1459ca14e(param_1,3);
      return;
    }
  }
  return;
}



// FUNCTION 148b0902c FUN_148b0902c body=109 status=ok
// SIG undefined FUN_148b0902c(void)

void FUN_148b0902c(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    uVar1 = FUN_145b84bf4();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (lVar3 != 0) {
      if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x140))) {
        FUN_148b0a89a(lVar3,(ulonglong)param_2 * 0x10 + *(longlong *)(param_1 + 0x138));
      }
      FUN_1459ca14e(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 148b0909a FUN_148b0909a body=491 status=ok
// SIG undefined FUN_148b0909a(void)

ulonglong FUN_148b0909a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(param_1 + 0x58);
  if (lVar7 != 0) {
    uVar5 = FUN_145b84bf4();
    plVar6 = (longlong *)FUN_144718840(lVar7,uVar5);
    lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)FUN_148b0a69e(lVar7);
      local_48 = (void *)0x0;
      local_40 = *(int *)(puVar8 + 1);
      lVar7 = (longlong)local_40;
      _Src = (void *)*puVar8;
      if (lVar7 == 0) {
        local_3c = 0;
LAB_148b09195:
        lVar7 = FUN_140d5712e();
        uVar5 = *(undefined8 *)(lVar7 + 0x28);
        plVar6 = *(longlong **)(lVar7 + 0x30);
        if (plVar6 == (longlong *)0x0) {
          uVar5 = FUN_14142d806(uVar5);
          FUN_144a787a6(&local_48,uVar5);
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          uVar5 = FUN_14142d806(uVar5);
          FUN_144a787a6(&local_48,uVar5);
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
      else {
        FUN_1446dd670(&local_48,local_40,0);
        memcpy(local_48,_Src,lVar7 * 2);
        if (local_40 < 2) goto LAB_148b09195;
      }
      uVar4 = FUN_140e1307c((longlong *)(param_1 + 0x138),&local_48);
      if (uVar4 == 0xffffffff) {
        uVar5 = FUN_140d5712e();
        FUN_1406db95e(uVar5,&local_58,&local_48);
        if (*(int *)(param_1 + 0x140) < 1) {
          uVar9 = 0xffffffff;
          bVar3 = 1;
        }
        else {
          lVar7 = 0;
          uVar9 = 0;
          do {
            bVar3 = FUN_144a23846(&local_58,*(longlong *)(param_1 + 0x138) + lVar7);
            if (bVar3 != 0) goto LAB_148b0923d;
            uVar9 = uVar9 + 1;
            lVar7 = lVar7 + 0x10;
          } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x140));
          uVar9 = 0xffffffff;
LAB_148b0923d:
          bVar3 = bVar3 ^ 1;
        }
        FUN_1447a1747(local_58,local_50);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        uVar9 = (ulonglong)uVar4;
        bVar3 = 0;
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (bVar3 == 0) goto LAB_148b090c1;
    }
  }
  uVar9 = 0;
LAB_148b090c1:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 148b09286 FUN_148b09286 body=503 status=ok
// SIG undefined FUN_148b09286(void)

longlong * FUN_148b09286(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78 [2];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x140) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x138);
    lVar7 = (longlong)*(int *)(param_1 + 0x140) << 4;
    do {
      uVar5 = FUN_140d5712e();
      FUN_14588f6b4(uVar5,&local_58,lVar8);
      if (local_58 != (longlong *)0x0) {
        puVar6 = (undefined8 *)FUN_1467c506e();
        local_68 = (void *)0x0;
        local_60 = *(int *)(puVar6 + 1);
        lVar9 = (longlong)local_60;
        _Src = (void *)*puVar6;
        if (lVar9 == 0) {
          local_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,local_60,0);
          memcpy(local_68,_Src,lVar9 * 2);
        }
        FUN_140009b9a(local_78,&local_68);
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14001d63e(param_2,iVar3);
        }
        FUN_14023423e((longlong)iVar3 * 0x10 + *param_2,local_78);
        if (local_78[0] != (longlong *)0x0) {
          (**(code **)(*local_78[0] + 0x10))();
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
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
      lVar8 = lVar8 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
    if ((int)param_2[1] != 0) goto LAB_148b09453;
  }
  FUN_1400b22c2(&local_68,&DAT_149e3cc88);
  FUN_140233b1a(&local_58,&local_68);
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_14001d63e(param_2,iVar3);
  }
  FUN_14023423e((longlong)iVar3 * 0x10 + *param_2,&local_58);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148b09453:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0947e FUN_148b0947e body=535 status=ok
// SIG undefined FUN_148b0947e(void)

void FUN_148b0947e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong *local_40 [2];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410fa8b6();
  (**(code **)(*param_1 + 0x2f0))(param_1);
  local_30 = param_1;
  FUN_1400b22c2(local_50,"VideoQualityOverall_Low");
  FUN_1412459d2(local_40,local_50);
  FUN_143fa5abc(&local_30,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"VideoQualityOverall_Medium");
  FUN_1412459d2(local_40,local_50);
  FUN_143fa5abc(&local_30,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"VideoQualityOverall_High");
  FUN_1412459d2(local_40,local_50);
  FUN_143fa5abc(&local_30,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_50,"VideoQualityOverall_Epic");
  FUN_1412459d2(local_40,local_50);
  FUN_143fa5abc(&local_30,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x29;
  FUN_1407b2780(plVar1,param_1 + 0x27);
  FUN_1400b22c2(local_50,"VideoQualityOverall_Custom");
  FUN_1412459d2(local_40,local_50);
  iVar2 = (int)param_1[0x2a];
  *(uint *)(param_1 + 0x2a) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x154) < iVar2 + 1U) {
    FUN_14001d63e(plVar1,iVar2);
  }
  FUN_14023423e((longlong)iVar2 * 0x10 + *plVar1,local_40);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b096a0 FUN_148b096a0 body=102 status=ok
// SIG undefined FUN_148b096a0(void)

void FUN_148b096a0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
    if (plVar2 == (longlong *)0x0) {
      FUN_145876474(DAT_14cb0d2b0);
      plVar2 = *(longlong **)(lVar1 + 0x2c8);
    }
    if (*(int *)(param_1 + 0x150) + -1 != param_2) {
      (**(code **)(*plVar2 + 0x2c0))(plVar2,param_2);
    }
    FUN_1459ca14e(param_1,0);
    return;
  }
  return;
}



// FUNCTION 148b09706 FUN_148b09706 body=92 status=ok
// SIG undefined FUN_148b09706(void)

int FUN_148b09706(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  lVar1 = DAT_14cb0d2b0;
  iVar2 = 0;
  if (DAT_14cb0d2b0 != 0) {
    plVar3 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
    if (plVar3 == (longlong *)0x0) {
      FUN_145876474(DAT_14cb0d2b0);
      plVar3 = *(longlong **)(lVar1 + 0x2c8);
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
    }
    iVar2 = (**(code **)(*plVar3 + 0x2c8))();
    if (iVar2 == -1) {
      iVar2 = *(int *)(param_1 + 0x150) + -1;
    }
  }
  return iVar2;
}



// FUNCTION 148b09762 FUN_148b09762 body=173 status=ok
// SIG undefined FUN_148b09762(void)

undefined8 * FUN_148b09762(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    plVar3 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
    if (plVar3 == (longlong *)0x0) {
      FUN_145876474(DAT_14cb0d2b0);
      plVar3 = *(longlong **)(lVar1 + 0x2c8);
      if (plVar3 == (longlong *)0x0) goto LAB_148b09795;
    }
    iVar2 = (**(code **)(*plVar3 + 0x2c8))();
    if (iVar2 == -1) {
      *param_2 = 0;
      iVar2 = *(int *)(param_1 + 0x150);
      uVar4 = *(undefined8 *)(param_1 + 0x148);
      goto LAB_148b097a9;
    }
  }
LAB_148b09795:
  *param_2 = 0;
  iVar2 = *(int *)(param_1 + 0x140);
  uVar4 = *(undefined8 *)(param_1 + 0x138);
LAB_148b097a9:
  *(int *)(param_2 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1406fd828(param_2,iVar2,0);
    FUN_1406fd7df(*param_2,uVar4,iVar2);
  }
  return param_2;
}



// FUNCTION 148b0981e FUN_148b0981e body=171 status=ok
// SIG undefined FUN_148b0981e(void)

undefined4 FUN_148b0981e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  lVar1 = DAT_14cb0d2b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar4 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = DAT_14cb0d2b0;
      if (*(longlong *)(lVar1 + 0x2c8) == 0) goto LAB_148b098aa;
      lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
      if (lVar4 == 0) {
        FUN_145876474(DAT_14cb0d2b0);
        lVar4 = *(longlong *)(lVar2 + 0x2c8);
      }
    }
    FUN_1459c9ffc(lVar4,&local_20);
    if (*(int *)(param_1 + 0x180) == local_20) {
      uVar3 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x184) >> 8),
                       *(int *)(param_1 + 0x184) == local_1c);
      goto LAB_148b098ac;
    }
  }
LAB_148b098aa:
  uVar3 = 0;
LAB_148b098ac:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b098cc FUN_148b098cc body=150 status=ok
// SIG undefined FUN_148b098cc(void)

void FUN_148b098cc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == (int)param_3[1]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*param_3 + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) {
          return;
        }
LAB_148b0990b:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_148b0990b;
      }
      if (uVar5 != uVar2) goto LAB_148b09934;
    }
  }
  else if ((int)param_3[1] + iVar1 != 1) {
LAB_148b09934:
    FUN_144a787a6(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000148b0994c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1);
    return;
  }
  return;
}



// FUNCTION 148b099e4 FUN_148b099e4 body=59 status=ok
// SIG undefined FUN_148b099e4(void)

undefined8 FUN_148b099e4(longlong *param_1)

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



// FUNCTION 148b09a92 FUN_148b09a92 body=56 status=ok
// SIG undefined FUN_148b09a92(void)

void FUN_148b09a92(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000148b09abf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b09ae0 FUN_148b09ae0 body=75 status=ok
// SIG undefined FUN_148b09ae0(void)

undefined8 FUN_148b09ae0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1413a517a();
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b09b54 FUN_148b09b54 body=59 status=ok
// SIG undefined FUN_148b09b54(void)

undefined8 FUN_148b09b54(longlong *param_1)

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



// FUNCTION 148b09b9a FUN_148b09b9a body=64 status=ok
// SIG undefined FUN_148b09b9a(void)

void FUN_148b09b9a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x18);
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
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148b09c38 FUN_148b09c38 body=31 status=ok
// SIG undefined FUN_148b09c38(void)

undefined8 FUN_148b09c38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b09c72 FUN_148b09c72 body=29 status=ok
// SIG undefined FUN_148b09c72(void)

bool FUN_148b09c72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b09c90 FUN_148b09c90 body=93 status=ok
// SIG undefined FUN_148b09c90(void)

void FUN_148b09c90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b549c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b09cee FUN_148b09cee body=93 status=ok
// SIG undefined FUN_148b09cee(void)

void FUN_148b09cee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b549c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b09d4c FUN_148b09d4c body=126 status=ok
// SIG undefined FUN_148b09d4c(void)

void FUN_148b09d4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b549c00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b09dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b09dca FUN_148b09dca body=48 status=ok
// SIG undefined FUN_148b09dca(void)

void FUN_148b09dca(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b09df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148b09dfa FUN_148b09dfa body=151 status=ok
// SIG undefined FUN_148b09dfa(void)

bool FUN_148b09dfa(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
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



// FUNCTION 148b09e92 FUN_148b09e92 body=114 status=ok
// SIG undefined FUN_148b09e92(void)

ulonglong FUN_148b09e92(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if ((*(int *)(lVar2 + uVar3 * 8) == *param_2) &&
         (*(int *)(lVar2 + 4 + uVar3 * 8) == param_2[1])) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_148b09ee2;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14630406a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(undefined8 *)(lVar2 + uVar4 * 8) = *(undefined8 *)param_2;
LAB_148b09ee2:
  return uVar4 & 0xffffffff;
}



// FUNCTION 148b09f0a FUN_148b09f0a body=156 status=ok
// SIG undefined FUN_148b09f0a(void)

bool FUN_148b09f0a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar2 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar2 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar2 == 0) {
      bVar3 = false;
      goto LAB_148b09f6c;
    }
  }
  FUN_1412629c6(&local_28,*(undefined8 *)(param_1 + 0x70));
  FUN_141277db8(lVar2,&local_30,local_28);
  if (local_30 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(longlong *)(param_1 + 0x148) == local_30;
  }
LAB_148b09f6c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b09fa8 FUN_148b09fa8 body=129 status=ok
// SIG undefined FUN_148b09fa8(void)

void FUN_148b09fa8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar2 == 0) goto LAB_148b09ff5;
    }
    FUN_1412629c6(&local_28,*(undefined8 *)(param_1 + 0x70));
    FUN_148880afc(lVar2,local_28);
  }
LAB_148b09ff5:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b0a02a FUN_148b0a02a body=235 status=ok
// SIG undefined FUN_148b0a02a(void)

void FUN_148b0a02a(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14cb0d2b0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar2 == 0) goto LAB_148b0a0d9;
    }
    FUN_1412629c6(&local_38,*(undefined8 *)(param_1 + 0x70));
    FUN_1412d7cdc(lVar2,local_48,local_38);
    lVar1 = *(longlong *)(local_48[0] + (longlong)param_2 * 8);
    FUN_141277db8(lVar2,&local_50,local_38);
    if (local_50 != lVar1) {
      FUN_141673a98(lVar2,local_38,lVar1);
      FUN_1459ca14e(param_1,0);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_148b0a0d9:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b0a11e FUN_148b0a11e body=65 status=ok
// SIG undefined FUN_148b0a11e(void)

void FUN_148b0a11e(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 == 0) {
    return;
  }
  if ((*(longlong *)(DAT_14cb0d2b0 + 0x2c8) == 0) &&
     (FUN_145876474(DAT_14cb0d2b0), *(longlong *)(lVar1 + 0x2c8) == 0)) {
    return;
  }
  FUN_148880ca2();
  return;
}



// FUNCTION 148b0a164 FUN_148b0a164 body=122 status=ok
// SIG undefined FUN_148b0a164(void)

undefined8 FUN_148b0a164(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cb0d2b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
  if (lVar3 == 0) {
    FUN_145876474(DAT_14cb0d2b0);
    lVar3 = *(longlong *)(lVar1 + 0x2c8);
    if (lVar3 == 0) {
      uVar2 = 0;
      goto LAB_148b0a1a9;
    }
  }
  FUN_145a602f6(lVar3,&local_20);
  uVar2 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x140) >> 8),
                   *(longlong *)(param_1 + 0x140) == local_20);
LAB_148b0a1a9:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0a1e0 FUN_148b0a1e0 body=199 status=ok
// SIG undefined FUN_148b0a1e0(void)

void FUN_148b0a1e0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  lVar1 = DAT_14cb0d2b0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar2 == 0) goto LAB_148b0a26b;
    }
    FUN_1459767be(lVar2,local_40);
    FUN_145a602f6(lVar2,&local_48);
    if (local_48 != *(longlong *)(local_40[0] + (longlong)param_2 * 8)) {
      FUN_143d6c9de(lVar2,*(undefined8 *)(local_40[0] + (longlong)param_2 * 8));
      FUN_1459ca14e(param_1,0);
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_148b0a26b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b0a2b0 FUN_148b0a2b0 body=45 status=ok
// SIG undefined FUN_148b0a2b0(void)

undefined4 FUN_148b0a2b0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x27c;
  if ((0.0 < *(float *)(param_1 + 0xe0)) && (0.0 < *(float *)(param_1 + 0xe4))) {
    lVar1 = 0x260;
  }
  return *(undefined4 *)(param_1 + lVar1);
}



// FUNCTION 148b0a2de FUN_148b0a2de body=20 status=ok
// SIG undefined FUN_148b0a2de(void)

void FUN_148b0a2de(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x270) = param_2;
  FUN_145bcdd78(L"r.screenpercentage");
  return;
}



// FUNCTION 148b0a2f2 FUN_148b0a2f2 body=7 status=ok
// SIG undefined FUN_148b0a2f2(void)

undefined4 FUN_148b0a2f2(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x260);
}



// FUNCTION 148b0a2fa FUN_148b0a2fa body=7 status=ok
// SIG undefined FUN_148b0a2fa(void)

undefined4 FUN_148b0a2fa(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x264);
}



// FUNCTION 148b0a302 FUN_148b0a302 body=13 status=ok
// SIG undefined FUN_148b0a302(void)

void FUN_148b0a302(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x268) = param_2;
  FUN_1458809fc();
  return;
}



// FUNCTION 148b0a310 FUN_148b0a310 body=83 status=ok
// SIG undefined FUN_148b0a310(void)

void FUN_148b0a310(longlong param_1,float param_2)

{
  undefined1 auStack_38 [40];
  uint local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(float *)(param_1 + 0x274) = param_2;
  local_10 = -(uint)(0.0 <= param_2) & (uint)param_2;
  local_c = 1;
  FUN_145bcdc2c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0a364 FUN_148b0a364 body=38 status=ok
// SIG undefined FUN_148b0a364(void)

undefined8 FUN_148b0a364(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,&DAT_14c764000,1);
  return param_2;
}



// FUNCTION 148b0a38a FUN_148b0a38a body=10 status=ok
// SIG undefined FUN_148b0a38a(void)

undefined8 * FUN_148b0a38a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148b0a394 FUN_148b0a394 body=10 status=ok
// SIG undefined FUN_148b0a394(void)

undefined8 * FUN_148b0a394(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148b0a39e FUN_148b0a39e body=48 status=ok
// SIG undefined FUN_148b0a39e(void)

void FUN_148b0a39e(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 148b0a3d4 FUN_148b0a3d4 body=447 status=ok
// SIG undefined FUN_148b0a3d4(void)

void FUN_148b0a3d4(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  byte bVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_148b0a9c0(param_1);
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_148b0a5d8();
    uVar4 = FUN_140d5712e();
    bVar3 = FUN_1467c9f6a(uVar4,&local_40);
    if ((DAT_14c872ce0 != 0 & bVar3) == 1) {
      puVar5 = local_40;
      if (local_38 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      local_48 = &DAT_14c872b08;
      FUN_1410abc14(DAT_14c872ce0,L"Internationalization",L"Culture",puVar5);
      FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872b08);
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x68);
    if ((int)uVar2 < 2) goto LAB_148b0a40d;
    puVar1 = (undefined8 *)(param_1 + 0x60);
    local_40 = (undefined2 *)0x0;
    _Src = (void *)*puVar1;
    local_38 = uVar2;
    FUN_1446dd670(&local_40,(ulonglong)uVar2,0);
    memcpy(local_40,_Src,(ulonglong)uVar2 * 2);
    uVar4 = FUN_140d5712e();
    bVar3 = FUN_1467c9f6a(uVar4,&local_40);
    if ((DAT_14c872ce0 != 0 & bVar3) == 1) {
      puVar5 = local_40;
      if (local_38 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      local_48 = &DAT_14c872b08;
      FUN_1410abc14(DAT_14c872ce0,L"Internationalization",L"Culture",puVar5);
      FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872b08);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(int *)(param_1 + 0x6c) < 0) {
      FUN_1446f8c06(puVar1,0);
    }
    if ((undefined2 *)*puVar1 != (undefined2 *)0x0) {
      *(undefined2 *)*puVar1 = 0;
    }
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_148b0a40d:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b0a594 FUN_148b0a594 body=68 status=ok
// SIG undefined FUN_148b0a594(void)

void FUN_148b0a594(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar1 = FUN_1400b6e86();
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x30) + 0x18))(lVar1 + 0x30);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b0a5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x2b8))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b0a5d8 FUN_148b0a5d8 body=145 status=ok
// SIG undefined FUN_148b0a5d8(void)

undefined8 FUN_148b0a5d8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_140d5712e();
  uVar5 = *(undefined8 *)(lVar4 + 0x58);
  plVar3 = *(longlong **)(lVar4 + 0x60);
  if (plVar3 == (longlong *)0x0) {
    uVar5 = FUN_14142d800(uVar5);
    FUN_148b0a6a4(param_2,uVar5);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    uVar5 = FUN_14142d800(uVar5);
    FUN_148b0a6a4(param_2,uVar5);
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



// FUNCTION 148b0a66a FUN_148b0a66a body=51 status=ok
// SIG undefined FUN_148b0a66a(void)

void FUN_148b0a66a(longlong param_1)

{
  undefined2 *puVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x60);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 148b0a69e FUN_148b0a69e body=5 status=ok
// SIG undefined FUN_148b0a69e(void)

longlong FUN_148b0a69e(longlong param_1)

{
  return param_1 + 0x60;
}



// FUNCTION 148b0a6a4 FUN_148b0a6a4 body=500 status=ok
// SIG undefined FUN_148b0a6a4(void)

undefined8 * FUN_148b0a6a4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  void *_Src;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  int local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a2b0a4(param_2,&local_58);
  uVar5 = FUN_140008f10();
  FUN_140e825f0(uVar5,&local_68,4);
  if ((longlong)local_60 != 0) {
    lVar7 = (longlong)local_60 << 4;
    lVar6 = local_68;
    do {
      uVar5 = FUN_140d5712e();
      FUN_14588f6b4(uVar5,&local_78,lVar6);
      if (local_78 != 0) {
        uVar5 = FUN_14142d800();
        FUN_144a2b0a4(uVar5,&local_88);
        iVar4 = *(int *)(param_2 + 1);
        if (iVar4 == local_80) {
          bVar8 = true;
          if (1 < iVar4) {
            iVar4 = FUN_144a80a00(*param_2,local_88);
            bVar8 = iVar4 == 0;
          }
        }
        else {
          bVar8 = local_80 + iVar4 == 1;
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        _Src = local_58;
        if (bVar8) {
          *param_1 = 0;
          *(int *)(param_1 + 1) = local_50;
          if ((longlong)local_50 == 0) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_1,local_50,0);
            memcpy((void *)*param_1,_Src,(longlong)local_50 * 2);
          }
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar3 = (int *)((longlong)local_70 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*local_70 + 0x10))(local_70);
              }
            }
          }
          goto LAB_148b0a7ca;
        }
      }
      plVar1 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_70 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      lVar6 = lVar6 + 0x10;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  FUN_140056680(param_1,&DAT_149e19e7a);
LAB_148b0a7ca:
  FUN_1447a1747(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148b0a89a FUN_148b0a89a body=27 status=ok
// SIG undefined FUN_148b0a89a(void)

void FUN_148b0a89a(longlong param_1)

{
  FUN_144a787a6(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 148b0a8b6 FUN_148b0a8b6 body=196 status=ok
// SIG undefined FUN_148b0a8b6(void)

ulonglong FUN_148b0a8b6(void)

{
  int iVar1;
  ulonglong unaff_RBX;
  bool bVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong local_38;
  int local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (DAT_14c872ce0 != 0) {
    local_48 = &DAT_14c872b08;
    uVar3 = FUN_1449da20c(DAT_14c872ce0,L"Internationalization",L"Culture",&local_28);
  }
  FUN_148b0a5d8(uVar3,&local_38);
  if ((int)uStack_20 == local_30) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if ((int)uStack_20 < 2) goto LAB_148b0a93d;
    iVar1 = FUN_144a80a00(local_28,local_38);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = local_30 + (int)uStack_20 == 1;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar2);
LAB_148b0a93d:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RBX & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0a97c FUN_148b0a97c body=67 status=ok
// SIG undefined FUN_148b0a97c(void)

void FUN_148b0a97c(longlong param_1)

{
  undefined2 *puVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
  }
  puVar1 = *(undefined2 **)(param_1 + 0x60);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_148b0a3d4(param_1);
  return;
}



// FUNCTION 148b0a9c0 FUN_148b0a9c0 body=343 status=ok
// SIG undefined FUN_148b0a9c0(void)

void FUN_148b0a9c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void *_Src;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = FUN_140d5712e();
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  plVar4 = *(longlong **)(lVar6 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_14142d800(uVar3);
  local_40 = (void *)0x0;
  local_38 = *(int *)(puVar7 + 1);
  lVar6 = (longlong)local_38;
  _Src = (void *)*puVar7;
  if (lVar6 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar6 * 2);
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x60),0);
  }
  puVar5 = *(undefined2 **)(param_1 + 0x60);
  if (puVar5 != (undefined2 *)0x0) {
    *puVar5 = 0;
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_148b0ab18(&local_50,&local_40);
  if ((longlong *)(param_1 + 0x40) == &local_50) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x40) = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 0x48) = local_48;
    *(undefined4 *)(param_1 + 0x4c) = local_44;
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0ab18 FUN_148b0ab18 body=199 status=ok
// SIG undefined FUN_148b0ab18(void)

undefined8 * FUN_148b0ab18(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a2b0a4(param_2,&local_28);
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  iVar1 = FUN_144a8a8b6(puVar2,&DAT_14b54a3e4);
  if (iVar1 != 0) {
    puVar2 = local_28;
    if (local_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    iVar1 = FUN_144a8a8b6(puVar2,&DAT_149e178d0);
    if (iVar1 != 0) {
      FUN_140056680(param_1,&DAT_149e19e7a);
      if (local_28 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_148b0abbf;
    }
  }
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
LAB_148b0abbf:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148b0abe0 FUN_148b0abe0 body=81 status=ok
// SIG undefined FUN_148b0abe0(void)

void FUN_148b0abe0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 10;
  if (param_2 < 10) {
    iVar1 = param_2;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  if (*(int *)(param_1 + 0xbc) != iVar2) {
    *(int *)(param_1 + 0xbc) = iVar2;
    (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x60))
              (*(longlong **)(DAT_14c98e618 + 0x20),*(undefined1 *)(param_1 + 0xb8),iVar2,1,0);
  }
  return;
}



// FUNCTION 148b0ac32 FUN_148b0ac32 body=7 status=ok
// SIG undefined FUN_148b0ac32(void)

undefined4 FUN_148b0ac32(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xbc);
}



// FUNCTION 148b0ac3a FUN_148b0ac3a body=60 status=ok
// SIG undefined FUN_148b0ac3a(void)

void FUN_148b0ac3a(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xb8) != param_2) {
    *(char *)(param_1 + 0xb8) = param_2;
    (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x60))
              (*(longlong **)(DAT_14c98e618 + 0x20),param_2,*(undefined4 *)(param_1 + 0xbc),1,0);
  }
  return;
}



// FUNCTION 148b0ac76 FUN_148b0ac76 body=7 status=ok
// SIG undefined FUN_148b0ac76(void)

undefined1 FUN_148b0ac76(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



// FUNCTION 148b0ac80 FUN_148b0ac80 body=107 status=ok
// SIG undefined FUN_148b0ac80(void)

void FUN_148b0ac80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_140e21508();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          (**(code **)(*plVar3 + 0x2f8))(plVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 148b0acec FUN_148b0acec body=124 status=ok
// SIG undefined FUN_148b0acec(void)

ulonglong FUN_148b0acec(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        lVar5 = FUN_140e21508();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          cVar4 = (**(code **)(*plVar3 + 0x300))(plVar3);
          if (cVar4 == '\0') {
            uVar6 = 0;
            break;
          }
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148b0ad68 FUN_148b0ad68 body=1249 status=ok
// SIG undefined FUN_148b0ad68(void)

longlong * FUN_148b0ad68(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_388 [32];
  longlong *local_368;
  longlong *local_360;
  int local_354;
  undefined8 *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar23 = *(longlong *)(param_1 + 0x60);
    lVar1 = lVar23 + (longlong)*(int *)(param_1 + 0x68) * 0x28;
    local_360 = param_2;
    do {
      lVar11 = FUN_1409f0d56(lVar23);
      if (lVar11 != 0) {
        lVar11 = FUN_1409f0d56(lVar23);
        if ((longlong)*(int *)(lVar11 + 0x38) != 0) {
          lVar25 = *(longlong *)(lVar11 + 0x30);
          lVar11 = (longlong)*(int *)(lVar11 + 0x38) * 0x50 + lVar25;
          do {
            cVar5 = FUN_140230656(lVar25 + 0x28);
            if (cVar5 != '\0') {
              iVar7 = *(int *)(param_1 + 0x58);
              if ((longlong)iVar7 != 0) {
                lVar2 = *(longlong *)(param_1 + 0x50);
                lVar17 = 0;
                do {
                  FUN_14022188c(lVar25);
                  if (local_348 == *(longlong *)(lVar2 + lVar17)) goto LAB_148b0ae6b;
                  lVar17 = lVar17 + 0x20;
                } while ((longlong)iVar7 * 0x20 != lVar17);
              }
              FUN_14022188c(lVar25);
              plVar13 = local_360;
              lVar2 = local_360[1];
              uVar6 = (int)lVar2 + 1;
              *(uint *)(local_360 + 1) = uVar6;
              if (*(uint *)((longlong)local_360 + 0xc) < uVar6) {
                FUN_1446f84a2(local_360);
              }
              *(longlong *)(*plVar13 + (longlong)(int)lVar2 * 8) = local_348;
            }
LAB_148b0ae6b:
            lVar25 = lVar25 + 0x50;
          } while (lVar25 != lVar11);
        }
      }
      lVar23 = lVar23 + 0x28;
    } while (lVar23 != lVar1);
    iVar7 = (int)local_360[1];
    param_2 = local_360;
    if (1 < (longlong)iVar7) {
      lVar1 = *local_360;
      memset(local_338,0,0x2f0);
      local_340 = lVar1 + (longlong)iVar7 * 8 + -8;
      local_348 = lVar1;
      fVar28 = logf((float)iVar7);
      local_338[0] = (int)(longlong)(fVar28 + fVar28);
      plVar13 = &local_348;
      do {
        puVar15 = (undefined8 *)*plVar13;
        puVar18 = (undefined8 *)plVar13[1];
        iVar7 = (int)plVar13[2];
        iVar8 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar15) >> 3);
        uVar6 = iVar8 + 1;
        puVar21 = puVar18;
        puVar24 = puVar15;
        local_368 = plVar13;
        if (iVar7 != 0) {
LAB_148b0af36:
          plVar13 = local_368;
          param_2 = local_360;
          if (8 < (int)uVar6) {
            uVar3 = puVar15[uVar6 >> 1];
            puVar15[uVar6 >> 1] = *puVar15;
            *puVar15 = uVar3;
            puVar26 = puVar21 + 1;
            puVar14 = puVar15;
            local_354 = iVar7;
            local_350 = puVar24;
            do {
              puVar4 = puVar14 + 1;
              puVar22 = puVar14 + 1;
              do {
                puVar14 = puVar22;
                puVar24 = puVar4;
                if (puVar21 < puVar14) break;
                iVar7 = FUN_144a78538(puVar15,puVar14);
                puVar4 = puVar24 + 1;
                puVar22 = puVar14 + 1;
              } while (-1 < iVar7);
              puVar4 = puVar26 + -2;
              do {
                puVar22 = puVar26;
                puVar12 = puVar4;
                puVar26 = puVar22 + -1;
                if (puVar26 <= puVar15) break;
                iVar7 = FUN_144a78538(puVar26,puVar15);
                puVar4 = puVar12 + -1;
              } while (-1 < iVar7);
              if (puVar26 < puVar14) goto LAB_148b0afcd;
              uVar3 = *puVar14;
              *puVar14 = *puVar26;
              *puVar26 = uVar3;
            } while( true );
          }
          for (; local_368 = plVar13, local_360 = param_2, puVar24 = puVar15, puVar18 = puVar15,
              puVar15 < puVar21; puVar21 = puVar21 + -1) {
            while (puVar26 = puVar24, puVar18 = puVar18 + 1, puVar18 <= puVar21) {
              iVar7 = FUN_144a78538(puVar26,puVar18);
              puVar24 = puVar18;
              if (-1 < iVar7) {
                puVar24 = puVar26;
              }
            }
            uVar3 = *puVar26;
            *puVar26 = *puVar21;
            *puVar21 = uVar3;
            plVar13 = local_368;
            param_2 = local_360;
          }
          goto LAB_148b0b22c;
        }
LAB_148b0b081:
        plVar13 = local_368;
        param_2 = local_360;
        if (uVar6 != 0) {
          iVar7 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
          iVar8 = iVar7;
joined_r0x000148b0b0a2:
          do {
            iVar10 = iVar7 * 2 + 1;
            if (iVar10 < (int)uVar6) {
              iVar16 = iVar7 * 2 + 2;
              if ((iVar16 < (int)uVar6) &&
                 (iVar9 = FUN_144a78538(puVar15 + iVar16,puVar15 + iVar10), -1 < iVar9)) {
                iVar10 = iVar16;
              }
              puVar21 = puVar15 + iVar7;
              puVar18 = puVar15 + iVar10;
              iVar7 = FUN_144a78538(puVar21,puVar18);
              if (iVar7 < 0) {
                uVar3 = *puVar21;
                *puVar21 = *puVar18;
                *puVar18 = uVar3;
                iVar7 = iVar10;
                goto joined_r0x000148b0b0a2;
              }
            }
            param_2 = local_360;
            bVar27 = iVar8 != 0;
            iVar7 = iVar8 + -1;
            iVar8 = iVar7;
          } while (bVar27);
          plVar13 = local_368;
          if (1 < (int)uVar6) {
            uVar19 = (ulonglong)uVar6;
            uVar3 = *puVar15;
            *puVar15 = puVar15[uVar19 - 1];
            puVar15[uVar19 - 1] = uVar3;
            if (uVar6 != 2) {
              do {
                uVar20 = uVar19 - 1;
                iVar7 = 0;
                iVar10 = 1;
                iVar8 = 0;
                do {
                  iVar7 = iVar7 + 2;
                  iVar16 = iVar10;
                  if (((longlong)iVar7 < (longlong)uVar20) &&
                     (iVar10 = FUN_144a78538(puVar15 + iVar7,puVar15 + iVar10), -1 < iVar10)) {
                    iVar16 = iVar7;
                  }
                  puVar21 = puVar15 + iVar8;
                  puVar18 = puVar15 + iVar16;
                  iVar7 = FUN_144a78538(puVar21,puVar18);
                  if (-1 < iVar7) break;
                  uVar3 = *puVar21;
                  *puVar21 = *puVar18;
                  *puVar18 = uVar3;
                  iVar7 = iVar16 * 2;
                  iVar10 = iVar16 * 2 + 1;
                  iVar8 = iVar16;
                } while ((longlong)iVar10 < (longlong)uVar20);
                uVar3 = *puVar15;
                *puVar15 = puVar15[uVar19 - 2];
                puVar15[uVar19 - 2] = uVar3;
                plVar13 = local_368;
                uVar19 = uVar20;
              } while (2 < uVar20);
            }
          }
        }
LAB_148b0b22c:
        plVar13 = plVar13 + -3;
      } while (&local_348 <= plVar13);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_148b0afcd:
  uVar3 = *puVar15;
  *puVar15 = *puVar26;
  *puVar26 = uVar3;
  iVar7 = local_354 + -1;
  puVar22 = puVar22 + -2;
  param_2 = local_360;
  if ((longlong)puVar12 - (longlong)local_350 < (longlong)puVar18 - (longlong)puVar24) {
    plVar13 = local_368;
    if (puVar14 < puVar21) {
      *local_368 = (longlong)puVar14;
      local_368[1] = (longlong)puVar21;
      *(int *)(local_368 + 2) = iVar7;
      plVar13 = local_368 + 3;
    }
    puVar18 = puVar12;
    puVar24 = puVar15;
    if (puVar26 <= puVar15 + 1) goto LAB_148b0b22c;
  }
  else {
    if (puVar15 + 1 < puVar26) {
      *local_368 = (longlong)puVar15;
      local_368[1] = (longlong)puVar22;
      *(int *)(local_368 + 2) = iVar7;
      local_368 = local_368 + 3;
    }
    plVar13 = local_368;
    puVar15 = puVar14;
    puVar18 = puVar21;
    puVar22 = puVar21;
    if (puVar21 <= puVar14) goto LAB_148b0b22c;
  }
  local_368 = plVar13;
  iVar8 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar24) >> 3);
  uVar6 = iVar8 + 1;
  puVar21 = puVar22;
  if (iVar7 == 0) goto LAB_148b0b081;
  goto LAB_148b0af36;
}



// FUNCTION 148b0b24a FUN_148b0b24a body=31 status=ok
// SIG undefined FUN_148b0b24a(void)

undefined8 FUN_148b0b24a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b0b284 FUN_148b0b284 body=29 status=ok
// SIG undefined FUN_148b0b284(void)

bool FUN_148b0b284(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b0b2a2 FUN_148b0b2a2 body=93 status=ok
// SIG undefined FUN_148b0b2a2(void)

void FUN_148b0b2a2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b54a440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b0b300 FUN_148b0b300 body=93 status=ok
// SIG undefined FUN_148b0b300(void)

void FUN_148b0b300(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b54a440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b0b35e FUN_148b0b35e body=123 status=ok
// SIG undefined FUN_148b0b35e(void)

void FUN_148b0b35e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b54a440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b0b3da FUN_148b0b3da body=35 status=ok
// SIG undefined FUN_148b0b3da(void)

void FUN_148b0b3da(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b0b3f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148b0b3fe FUN_148b0b3fe body=130 status=ok
// SIG undefined FUN_148b0b3fe(void)

bool FUN_148b0b3fe(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0b482 FUN_148b0b482 body=31 status=ok
// SIG undefined FUN_148b0b482(void)

undefined8 FUN_148b0b482(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b0b4bc FUN_148b0b4bc body=29 status=ok
// SIG undefined FUN_148b0b4bc(void)

bool FUN_148b0b4bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148b0b4da FUN_148b0b4da body=93 status=ok
// SIG undefined FUN_148b0b4da(void)

void FUN_148b0b4da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b54a4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b0b538 FUN_148b0b538 body=93 status=ok
// SIG undefined FUN_148b0b538(void)

void FUN_148b0b538(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b54a4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b0b596 FUN_148b0b596 body=123 status=ok
// SIG undefined FUN_148b0b596(void)

void FUN_148b0b596(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b54a4b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b0b612 FUN_148b0b612 body=35 status=ok
// SIG undefined FUN_148b0b612(void)

void FUN_148b0b612(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b0b631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148b0b636 FUN_148b0b636 body=130 status=ok
// SIG undefined FUN_148b0b636(void)

bool FUN_148b0b636(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0b6d2 FUN_148b0b6d2 body=31 status=ok
// SIG undefined FUN_148b0b6d2(void)

undefined8 FUN_148b0b6d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b0b70e FUN_148b0b70e body=93 status=ok
// SIG undefined FUN_148b0b70e(void)

void FUN_148b0b70e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b54a540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b0b76c FUN_148b0b76c body=123 status=ok
// SIG undefined FUN_148b0b76c(void)

void FUN_148b0b76c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b54a540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b0b7e8 FUN_148b0b7e8 body=21 status=ok
// SIG undefined FUN_148b0b7e8(void)

undefined8 FUN_148b0b7e8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b0b814 FUN_148b0b814 body=323 status=ok
// SIG undefined FUN_148b0b814(void)

void FUN_148b0b814(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [34];
  undefined1 local_26;
  undefined1 local_25;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_25 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_25);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_25);
  }
  local_26 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_26);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_26);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_25;
  if (iVar1 == 0) {
    puVar2 = &local_26;
  }
  *param_3 = *puVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0b95c FUN_148b0b95c body=663 status=ok
// SIG undefined FUN_148b0b95c(void)

void FUN_148b0b95c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_288 [32];
  undefined **local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  longlong local_230;
  undefined8 local_228 [10];
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined **local_1b8 [20];
  longlong *local_118;
  undefined4 local_104;
  undefined8 local_100;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined8 local_b8 [10];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_140ca8f8e(&local_f8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_100 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  uVar4 = local_100;
  uVar3 = local_104;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_268 = &PTR_FUN_149ed05f0;
  local_260 = local_f0;
  uStack_25c = uStack_ec;
  uStack_258 = uStack_e8;
  uStack_254 = uStack_e4;
  local_250 = local_e0;
  uStack_24c = uStack_dc;
  uStack_248 = uStack_d8;
  uStack_244 = uStack_d4;
  local_240 = local_d0;
  uStack_23c = uStack_cc;
  uStack_238 = uStack_c8;
  uStack_234 = uStack_c4;
  local_230 = local_c0;
  if ((local_c0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_b8;
  puVar7 = local_228;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1d4 = local_64;
  local_1d8 = local_68;
  local_1d0 = local_60;
  local_1c8 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_1c0 = local_50;
  FUN_148b0bbf4(local_1b8,&local_268,uVar4,uVar3);
  FUN_140f13d9e(param_3,local_1b8);
  local_1b8[0] = &PTR_FUN_149ed05f0;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar2 = (int *)((longlong)local_118 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
      }
    }
  }
  local_f8 = &PTR_FUN_149ed05f0;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0bbf4 FUN_148b0bbf4 body=131 status=ok
// SIG undefined FUN_148b0bbf4(void)

undefined8
FUN_148b0bbf4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = FUN_148b0cd56(param_2,0);
  if (lVar4 != 0) {
    FUN_14472da24(lVar4,param_3,param_4);
  }
  FUN_140e361c2(param_1,param_2);
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
  return param_1;
}



// FUNCTION 148b0bc78 FUN_148b0bc78 body=761 status=ok
// SIG undefined FUN_148b0bc78(void)

void FUN_148b0bc78(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined **local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  longlong local_250;
  undefined8 local_248 [10];
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8 [20];
  longlong *local_138;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined **local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined8 local_c8 [10];
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_140ca8f8e(&local_108);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_110 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  local_118 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_11c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  uVar5 = local_110;
  uVar4 = local_118;
  uVar3 = local_11c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_288 = &PTR_FUN_149ed05f0;
  local_280 = local_100;
  uStack_27c = uStack_fc;
  uStack_278 = uStack_f8;
  uStack_274 = uStack_f4;
  local_270 = local_f0;
  uStack_26c = uStack_ec;
  uStack_268 = uStack_e8;
  uStack_264 = uStack_e4;
  local_260 = local_e0;
  uStack_25c = uStack_dc;
  uStack_258 = uStack_d8;
  uStack_254 = uStack_d4;
  local_250 = local_d0;
  if ((local_d0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar7 = local_c8;
  puVar8 = local_248;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_1f4 = local_74;
  local_1f8 = local_78;
  local_1f0 = local_70;
  local_1e8 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  local_1e0 = local_60;
  local_298 = uVar3;
  FUN_148b0bf72(local_1d8,&local_288,uVar5,uVar4);
  FUN_140f13d9e(param_3,local_1d8);
  local_1d8[0] = &PTR_FUN_149ed05f0;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_138 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar2 = (int *)((longlong)local_138 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
      }
    }
  }
  local_108 = &PTR_FUN_149ed05f0;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0bf72 FUN_148b0bf72 body=122 status=ok
// SIG undefined FUN_148b0bf72(void)

undefined8
FUN_148b0bf72(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = FUN_148b0cd56(param_2,param_3);
  if (lVar4 != 0) {
    FUN_14472da24(lVar4,param_4,param_5);
  }
  FUN_140e361c2(param_1,param_2);
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
  return param_1;
}



// FUNCTION 148b0bfec FUN_148b0bfec body=651 status=ok
// SIG undefined FUN_148b0bfec(void)

void FUN_148b0bfec(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_278 [32];
  undefined **local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  longlong local_220;
  undefined8 local_218 [10];
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined **local_1a8 [20];
  longlong *local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_140ca8f8e(&local_e8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_f0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  uVar4 = local_f0;
  uVar3 = local_f8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_258 = &PTR_FUN_149ed05f0;
  local_250 = local_e0;
  uStack_24c = uStack_dc;
  uStack_248 = uStack_d8;
  uStack_244 = uStack_d4;
  local_240 = local_d0;
  uStack_23c = uStack_cc;
  uStack_238 = uStack_c8;
  uStack_234 = uStack_c4;
  local_230 = local_c0;
  uStack_22c = uStack_bc;
  uStack_228 = uStack_b8;
  uStack_224 = uStack_b4;
  local_220 = local_b0;
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_a8;
  puVar7 = local_218;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1c4 = local_54;
  local_1c8 = local_58;
  local_1c0 = local_50;
  local_1b8 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_1b0 = local_40;
  FUN_148b0c278(local_1a8,&local_258,uVar4,uVar3);
  FUN_140f13d9e(param_3,local_1a8);
  local_1a8[0] = &PTR_FUN_149ed05f0;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_108 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
      }
    }
  }
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0c278 FUN_148b0c278 body=125 status=ok
// SIG undefined FUN_148b0c278(void)

undefined8
FUN_148b0c278(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = FUN_148b0cd56(param_2,0);
  if (lVar4 != 0) {
    FUN_14016d8b0(lVar4,param_3,param_4);
  }
  FUN_140e361c2(param_1,param_2);
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
  return param_1;
}



// FUNCTION 148b0c2f6 FUN_148b0c2f6 body=748 status=ok
// SIG undefined FUN_148b0c2f6(void)

void FUN_148b0c2f6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined **local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  longlong local_240;
  undefined8 local_238 [10];
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined **local_1c8 [20];
  longlong *local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  undefined8 local_b8 [10];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_140ca8f8e(&local_f8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_100 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_108 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_110 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  uVar5 = local_100;
  uVar4 = local_108;
  uVar3 = local_110;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_278 = &PTR_FUN_149ed05f0;
  local_270 = local_f0;
  uStack_26c = uStack_ec;
  uStack_268 = uStack_e8;
  uStack_264 = uStack_e4;
  local_260 = local_e0;
  uStack_25c = uStack_dc;
  uStack_258 = uStack_d8;
  uStack_254 = uStack_d4;
  local_250 = local_d0;
  uStack_24c = uStack_cc;
  uStack_248 = uStack_c8;
  uStack_244 = uStack_c4;
  local_240 = local_c0;
  if ((local_c0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar7 = local_b8;
  puVar8 = local_238;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_1e4 = local_64;
  local_1e8 = local_68;
  local_1e0 = local_60;
  local_1d8 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_1d0 = local_50;
  local_288 = uVar3;
  FUN_148b0c5e4(local_1c8,&local_278,uVar5,uVar4);
  FUN_140f13d9e(param_3,local_1c8);
  local_1c8[0] = &PTR_FUN_149ed05f0;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_128 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)local_128 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_128 + 0x10))(local_128);
      }
    }
  }
  local_f8 = &PTR_FUN_149ed05f0;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0c5e4 FUN_148b0c5e4 body=121 status=ok
// SIG undefined FUN_148b0c5e4(void)

undefined8
FUN_148b0c5e4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = FUN_148b0cd56(param_2,param_3);
  if (lVar4 != 0) {
    FUN_14016d8b0(lVar4,param_4,param_5);
  }
  FUN_140e361c2(param_1,param_2);
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
  return param_1;
}



// FUNCTION 148b0c65e FUN_148b0c65e body=648 status=ok
// SIG undefined FUN_148b0c65e(void)

void FUN_148b0c65e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_298 [32];
  undefined **local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  longlong local_240;
  undefined8 local_238 [10];
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8 [20];
  longlong *local_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_140ca8f8e(&local_e8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_f0 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  uVar3 = local_f0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = local_100;
  uStack_1c0 = uStack_f8;
  local_278 = &PTR_FUN_149ed05f0;
  local_270 = local_e0;
  uStack_26c = uStack_dc;
  uStack_268 = uStack_d8;
  uStack_264 = uStack_d4;
  local_260 = local_d0;
  uStack_25c = uStack_cc;
  uStack_258 = uStack_c8;
  uStack_254 = uStack_c4;
  local_250 = local_c0;
  uStack_24c = uStack_bc;
  uStack_248 = uStack_b8;
  uStack_244 = uStack_b4;
  local_240 = local_b0;
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar5 = local_a8;
  puVar6 = local_238;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  local_1e4 = local_54;
  local_1e8 = local_58;
  local_1e0 = local_50;
  local_1d8 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_1d0 = local_40;
  FUN_148b0c8e8(local_1b8,&local_278,uVar3,&local_1c8);
  FUN_140f13d9e(param_3,local_1b8);
  local_1b8[0] = &PTR_FUN_149ed05f0;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar2 = (int *)((longlong)local_118 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
      }
    }
  }
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0c8e8 FUN_148b0c8e8 body=172 status=ok
// SIG undefined FUN_148b0c8e8(void)

undefined8
FUN_148b0c8e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_148b0cd56(param_2,0);
  if (lVar4 != 0) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    FUN_144a9d3f0(lVar4,param_3);
  }
  FUN_140e361c2(param_1,param_2);
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0c996 FUN_148b0c996 body=748 status=ok
// SIG undefined FUN_148b0c996(void)

void FUN_148b0c996(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined **local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  longlong local_240;
  undefined8 local_238 [10];
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8 [20];
  longlong *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined8 local_a8 [10];
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_140ca8f8e(&local_e8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_f0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  uVar4 = local_f0;
  uVar3 = local_f8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c8 = local_108;
  uStack_1c0 = uStack_100;
  local_278 = &PTR_FUN_149ed05f0;
  local_270 = local_e0;
  uStack_26c = uStack_dc;
  uStack_268 = uStack_d8;
  uStack_264 = uStack_d4;
  local_260 = local_d0;
  uStack_25c = uStack_cc;
  uStack_258 = uStack_c8;
  uStack_254 = uStack_c4;
  local_250 = local_c0;
  uStack_24c = uStack_bc;
  uStack_248 = uStack_b8;
  uStack_244 = uStack_b4;
  local_240 = local_b0;
  if ((local_b0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar6 = local_a8;
  puVar7 = local_238;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1e4 = local_54;
  local_1e8 = local_58;
  local_1e0 = local_50;
  local_1d8 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_1d0 = local_40;
  local_288 = &local_1c8;
  FUN_148b0cc84(local_1b8,&local_278,uVar4,uVar3);
  FUN_140f13d9e(param_3,local_1b8);
  local_1b8[0] = &PTR_FUN_149ed05f0;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar2 = (int *)((longlong)local_118 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
      }
    }
  }
  local_e8 = &PTR_FUN_149ed05f0;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0cc84 FUN_148b0cc84 body=173 status=ok
// SIG undefined FUN_148b0cc84(void)

undefined8
FUN_148b0cc84(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_148b0cd56(param_2,param_3);
  if (lVar4 != 0) {
    local_38 = *param_5;
    uStack_34 = param_5[1];
    uStack_30 = param_5[2];
    uStack_2c = param_5[3];
    FUN_144a9d3f0(lVar4,param_4);
  }
  FUN_140e361c2(param_1,param_2);
  *param_2 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_2[0x14];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0cd56 FUN_148b0cd56 body=183 status=ok
// SIG undefined FUN_148b0cd56(void)

longlong * FUN_148b0cd56(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1402d2740();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      plVar3 = plVar1;
      if (param_2 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
        lVar4 = (**(code **)(*param_2 + 0x2b8))(param_2);
        plVar3 = param_2;
        if (lVar2 == lVar4) {
          plVar3 = plVar1;
        }
      }
      goto LAB_148b0cd93;
    }
  }
  plVar3 = param_2;
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
LAB_148b0cd93:
  lVar2 = FUN_144a772c4();
  if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    plVar3 = (longlong *)FUN_14090ceee(plVar3,0,0);
    FUN_140648376(param_1,plVar3);
  }
  return plVar3;
}



// FUNCTION 148b0ce0d FUN_148b0ce0d body=249 status=ok
// SIG undefined FUN_148b0ce0d(void)

longlong FUN_148b0ce0d(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_140d2ab24();
  if ((*(byte *)(param_1 + 0xb2) & 0x40) != 0) {
    if (param_1 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(longlong *)(param_1 + 0x50);
    }
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    local_38 = param_1;
    FUN_144a2daf0(&local_38);
    if (local_30 != 0) {
      do {
        uVar1 = *(ulonglong *)(local_30 + 0x38);
        if (-1 < (char)uVar1) break;
        if (((uint)uVar1 & 0x8000102) == 0x100) {
          if (lVar2 == 0) {
            lVar2 = 0;
            if ((uVar1 & 0x820000000) == 0) {
              lVar2 = local_30;
            }
          }
          else if (lVar2 != local_30) {
            lVar2 = 0;
            break;
          }
        }
        local_30 = *(longlong *)(local_30 + 0x18);
        FUN_144a2daf0(&local_38);
      } while (local_30 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 148b0cf07 FUN_148b0cf07 body=205 status=ok
// SIG undefined FUN_148b0cf07(void)

longlong FUN_148b0cf07(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(longlong *)(param_1 + 0x50);
  }
  local_20 = 0xffffffff;
  local_1c = 0x101;
  local_1a = 0;
  local_30 = param_1;
  FUN_144a2daf0(&local_30);
  if (local_28 != 0) {
    do {
      uVar1 = *(ulonglong *)(local_28 + 0x38);
      if (-1 < (char)uVar1) break;
      lVar2 = local_28;
      if ((uVar1 & 0x820000480) == 0x80 && ((uint)uVar1 & 0x8000102) != 0x100) goto LAB_148b0cfb0;
      local_28 = *(longlong *)(local_28 + 0x18);
      FUN_144a2daf0(&local_30);
    } while (local_28 != 0);
  }
  lVar2 = 0;
LAB_148b0cfb0:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0cfd5 FUN_148b0cfd5 body=126 status=ok
// SIG undefined FUN_148b0cfd5(void)

longlong * FUN_148b0cfd5(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a797b2();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = FUN_1400796d0(param_2,param_3,1), lVar1 != 0)) {
      *param_1 = lVar1;
      *(undefined1 *)(param_1 + 1) = 1;
      return param_1;
    }
    lVar1 = FUN_1468c842b(param_3,param_2);
    if (lVar1 != 0) {
      *param_1 = lVar1;
      *(undefined1 *)(param_1 + 1) = 2;
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 148b0d053 FUN_148b0d053 body=405 status=ok
// SIG undefined FUN_148b0d053(void)

undefined8 FUN_148b0d053(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (param_1 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = FUN_14475b26a();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar10 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar10) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar10 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
    }
    plVar7 = (longlong *)0x0;
    if (bVar10) {
      plVar7 = param_1;
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar6 = param_2[1];
    lVar5 = FUN_14475b26a();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar10 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar10) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar10 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0;
    }
    plVar9 = (longlong *)0x0;
    if (bVar10) {
      plVar9 = param_2;
    }
    if (plVar7 == (longlong *)0x0) {
      return 0;
    }
    if (!bVar10) {
      return 0;
    }
    cVar1 = (**(code **)(*param_2 + 0x1b0))(param_2,param_1);
    cVar2 = (**(code **)(*plVar7 + 0x1e0))(plVar7);
    if (cVar2 == '\0') {
      uVar8 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar9 + 0x1e0))(plVar9);
      uVar8 = (ulonglong)uVar4;
    }
    cVar2 = (**(code **)(*plVar7 + 0x1e8))(plVar7);
    if (cVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      bVar3 = (**(code **)(*plVar9 + 0x1e8))(plVar9);
    }
    lVar6 = (**(code **)(*plVar7 + 0x1f0))(plVar7);
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*plVar9 + 0x1f0))(plVar9);
      bVar10 = lVar6 == 0;
    }
    else {
      bVar10 = false;
    }
    if (cVar1 == '\0') {
      return CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 | bVar3 & bVar10);
    }
  }
  return 0;
}



// FUNCTION 148b0d1e8 FUN_148b0d1e8 body=418 status=ok
// SIG undefined FUN_148b0d1e8(void)

void FUN_148b0d1e8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 uVar8;
  
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar5 = param_1[1];
    lVar2 = FUN_14475b26a();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar7 = lVar5 != 0;
      if (lVar5 != lVar2 && bVar7) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar7 = lVar5 != 0;
          if (lVar5 == lVar2) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar7 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    plVar4 = (longlong *)0x0;
    if (bVar7) {
      plVar4 = param_1;
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar5 = param_2[1];
    lVar2 = FUN_14475b26a();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar7 = lVar5 != 0;
      if (lVar5 != lVar2 && bVar7) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar7 = lVar5 != 0;
          if (lVar5 == lVar2) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar7 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    plVar6 = (longlong *)0x0;
    if (bVar7) {
      plVar6 = param_2;
    }
    if ((plVar4 != (longlong *)0x0) && (bVar7)) {
      cVar1 = (**(code **)(*plVar4 + 0x1e0))(plVar4);
      if ((cVar1 != '\0') && (cVar1 = (**(code **)(*plVar6 + 0x1e0))(plVar6), cVar1 != '\0')) {
        uVar8 = (**(code **)(*plVar4 + 0x240))(plVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x000148b0d2bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x208))(plVar6,param_3,uVar8);
        return;
      }
      cVar1 = (**(code **)(*plVar4 + 0x1e8))(plVar4);
      if ((cVar1 != '\0') && (cVar1 = (**(code **)(*plVar6 + 0x1e8))(plVar6), cVar1 != '\0')) {
        uVar3 = (**(code **)(*plVar4 + 0x220))(plVar4,param_3);
                    /* WARNING: Could not recover jumptable at 0x000148b0d37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x1f8))(plVar6,param_3,uVar3,*(code **)(*plVar6 + 0x1f8));
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b0d38a FUN_148b0d38a body=526 status=ok
// SIG undefined FUN_148b0d38a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b0d38a(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *_Dst;
  undefined8 uStack_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  plVar7 = &local_48;
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  uVar1 = *(ushort *)(param_1 + 0xb6);
  if ((ulonglong)uVar1 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x5c);
    if (lVar8 < 0x11) {
      uStack_50 = 0x148b0d3d0;
      lVar8 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      plVar7 = (longlong *)((longlong)&local_48 + lVar8);
      _Dst = (undefined1 *)((longlong)&local_48 + lVar8);
    }
    else {
      uStack_50 = 0x148b0d3ef;
      lVar5 = -((ulonglong)(((uint)uVar1 + *(int *)(param_1 + 0x5c)) - 1) + 0xf & 0xfffffffffffffff0
               );
      plVar7 = (longlong *)((longlong)&local_48 + lVar5);
      _Dst = (undefined1 *)(-lVar8 & (longlong)&uStack_50 + lVar8 + lVar5 + 7);
    }
    *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d40f;
    memset(_Dst,0,(ulonglong)uVar1);
  }
  if (param_1 == 0) {
    local_40 = (longlong *)0x0;
  }
  else {
    local_40 = *(longlong **)(param_1 + 0x50);
  }
  local_38 = 0xffffffff;
  local_34 = 0x101;
  local_32 = 0;
  local_48 = param_1;
  *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d44c;
  FUN_144a2daf0(&local_48);
  while ((local_40 != (longlong *)0x0 && ((char)local_40[7] < '\0'))) {
    if (((uint)local_40[7] >> 9 & 1) == 0) {
      pcVar4 = *(code **)(*local_40 + 0x160);
      *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d47b;
      (*pcVar4)();
    }
    else {
      iVar2 = *(int *)((longlong)local_40 + 0x34);
      lVar8 = local_40[6];
      iVar3 = *(int *)((longlong)local_40 + 0x44);
      *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d49b;
      memset(_Dst + iVar3,0,(longlong)(int)lVar8 * (longlong)iVar2);
    }
    local_40 = (longlong *)local_40[3];
    *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d4b7;
    FUN_144a2daf0(&local_48);
  }
  pcVar4 = *(code **)(*param_2 + 0x248);
  *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d4d7;
  (*pcVar4)(param_2,param_1,_Dst);
  if (param_1 == 0) {
    local_40 = (longlong *)0x0;
  }
  else {
    local_40 = *(longlong **)(param_1 + 0x50);
  }
  local_38 = 0xffffffff;
  local_34 = 0x101;
  local_32 = 0;
  local_48 = param_1;
  *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d511;
  FUN_144a2daf0(&local_48);
  while ((plVar6 = local_40, local_40 != (longlong *)0x0 && ((char)local_40[7] < '\0'))) {
    if (((ulonglong)local_40[7] >> 0x24 & 1) == 0) {
      iVar2 = *(int *)((longlong)local_40 + 0x44);
      pcVar4 = *(code **)(*local_40 + 0x148);
      *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d541;
      (*pcVar4)(plVar6,_Dst + iVar2);
    }
    local_40 = (longlong *)local_40[3];
    *(undefined8 *)((longlong)plVar7 + -0x28) = 0x148b0d55d;
    FUN_144a2daf0(&local_48);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)plVar7 + -0x28) = &UNK_148b0d58a;
  FUN_144d8e3a0();
}



// FUNCTION 148b0d59d FUN_148b0d59d body=208 status=ok
// SIG undefined FUN_148b0d59d(void)

longlong FUN_148b0d59d(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140d2ab24();
  if (lVar1 == 0) {
    if ((*(byte *)(param_1 + 0xb2) & 0x40) != 0) {
      if (param_1 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = *(longlong *)(param_1 + 0x50);
      }
      local_20 = 0xffffffff;
      local_1c = 0x101;
      local_1a = 0;
      local_30 = param_1;
      FUN_144a2daf0(&local_30);
      if (local_28 != 0) {
        do {
          if (-1 < (char)*(ulonglong *)(local_28 + 0x38)) break;
          lVar1 = local_28;
          if ((*(ulonglong *)(local_28 + 0x38) & 0x828000102) == 0x100) goto LAB_148b0d5bf;
          local_28 = *(longlong *)(local_28 + 0x18);
          FUN_144a2daf0(&local_30);
        } while (local_28 != 0);
      }
    }
    lVar1 = 0;
  }
LAB_148b0d5bf:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 148b0d66e FUN_148b0d66e body=872 status=ok
// SIG undefined FUN_148b0d66e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b0d66e(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *_Dst;
  undefined8 uStack_60;
  undefined1 auStack_58 [15];
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  lVar11 = param_1[4];
  plVar8 = (longlong *)param_1[3];
  if ((char)lVar11 != '\x02') {
    plVar8 = (longlong *)FUN_148b0d59d(plVar8);
  }
  local_49 = (char)param_2[4];
  plVar9 = (longlong *)param_2[3];
  if (local_49 != '\x02') {
    plVar9 = (longlong *)FUN_148b0cf07(plVar9);
  }
  iVar5 = *(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6];
  iVar13 = *(int *)((longlong)plVar8 + 0x34) * (int)plVar8[6];
  if (iVar13 < iVar5) {
    iVar13 = iVar5;
  }
  uVar6 = (**(code **)(*plVar9 + 0x178))(plVar9);
  uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8);
  puVar12 = auStack_58;
  if ((int)uVar7 < (int)uVar6) {
    uVar7 = uVar6;
  }
  if (iVar13 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else if ((int)uVar7 < 0x11) {
    uStack_60 = 0x148b0d760;
    lVar3 = -((longlong)iVar13 + 0x1eU & 0xfffffffffffffff0);
    puVar12 = auStack_58 + lVar3;
    _Dst = auStack_58 + lVar3;
  }
  else {
    uStack_60 = 0x148b0d8d3;
    lVar3 = -((longlong)(int)(iVar13 + uVar7 + -1) + 0xfU & 0xfffffffffffffff0);
    puVar12 = auStack_58 + lVar3;
    _Dst = (undefined1 *)
           ((longlong)(int)-uVar7 & (ulonglong)(auStack_58 + (ulonglong)uVar7 + lVar3 + -1));
  }
  if ((*(byte *)((longlong)plVar8 + 0x39) & 2) == 0) {
    pcVar1 = *(code **)(*plVar8 + 0x160);
    *(undefined8 *)(puVar12 + -0x28) = 0x148b0d745;
    (*pcVar1)(plVar8,_Dst);
  }
  else {
    iVar13 = *(int *)((longlong)plVar8 + 0x34);
    lVar3 = plVar8[6];
    *(undefined8 *)(puVar12 + -0x28) = 0x148b0d782;
    memset(_Dst,0,(longlong)(int)lVar3 * (longlong)iVar13);
  }
  if ((char)lVar11 == '\x02') {
    if ((&DAT_14b55ab30)[*(byte *)(param_1 + 2)] == '\x01') {
      lVar11 = *param_1;
    }
    else if ((&DAT_14b55ab33)[*(byte *)(param_1 + 2)] == '\x01') {
      lVar11 = param_1[1];
    }
    else {
      lVar11 = 0;
    }
    pcVar1 = *(code **)(*plVar8 + 0x88);
    *(undefined8 *)(puVar12 + -0x28) = 0x148b0d7b6;
    cVar4 = (*pcVar1)(plVar8);
    if (cVar4 == '\0') {
      puVar10 = (undefined1 *)(lVar11 + *(int *)((longlong)plVar8 + 0x44));
      if (puVar10 != _Dst) {
        if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
          lVar11 = plVar8[6];
          pcVar1 = *(code **)(*plVar8 + 0x100);
          *(undefined8 *)(puVar12 + -0x28) = 0x148b0d93c;
          (*pcVar1)(plVar8,_Dst,puVar10,(int)lVar11);
        }
        else {
          iVar13 = *(int *)((longlong)plVar8 + 0x34);
          lVar11 = plVar8[6];
          *(undefined8 *)(puVar12 + -0x28) = 0x148b0d9d6;
          memcpy(_Dst,puVar10,(longlong)(int)lVar11 * (longlong)iVar13);
        }
      }
    }
    else {
      pcVar1 = *(code **)(*plVar8 + 0xa0);
      *(undefined8 *)(puVar12 + -0x28) = 0x148b0d7d8;
      (*pcVar1)(plVar8,lVar11,_Dst);
    }
  }
  else {
    plVar2 = (longlong *)*param_1;
    lVar11 = param_1[3];
    pcVar1 = *(code **)(*plVar2 + 0x248);
    *(undefined8 *)(puVar12 + -0x28) = 0x148b0d7f1;
    (*pcVar1)(plVar2,lVar11,_Dst);
  }
  *(undefined8 *)(puVar12 + -0x28) = 0x148b0d807;
  FUN_148b0d1e8(plVar8,plVar9,_Dst);
  if (local_49 == '\x02') {
    if ((&DAT_14b55ab30)[*(byte *)(param_2 + 2)] == '\x01') {
      lVar11 = *param_2;
    }
    else if ((&DAT_14b55ab33)[*(byte *)(param_2 + 2)] == '\x01') {
      lVar11 = param_2[1];
    }
    else {
      lVar11 = 0;
    }
    pcVar1 = *(code **)(*plVar9 + 0x80);
    *(undefined8 *)(puVar12 + -0x28) = 0x148b0d833;
    cVar4 = (*pcVar1)(plVar9);
    if (cVar4 == '\0') {
      puVar10 = (undefined1 *)(lVar11 + *(int *)((longlong)plVar9 + 0x44));
      if (puVar10 != _Dst) {
        if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
          lVar11 = plVar9[6];
          pcVar1 = *(code **)(*plVar9 + 0x100);
          *(undefined8 *)(puVar12 + -0x28) = 0x148b0d987;
          (*pcVar1)(plVar9,puVar10,_Dst,(int)lVar11);
        }
        else {
          iVar13 = *(int *)((longlong)plVar9 + 0x34);
          lVar11 = plVar9[6];
          *(undefined8 *)(puVar12 + -0x28) = 0x148b0d9b6;
          memcpy(puVar10,_Dst,(longlong)(int)lVar11 * (longlong)iVar13);
        }
      }
    }
    else {
      pcVar1 = *(code **)(*plVar9 + 0x98);
      *(undefined8 *)(puVar12 + -0x28) = 0x148b0d855;
      (*pcVar1)(plVar9,lVar11,_Dst);
    }
  }
  else {
    plVar9 = (longlong *)*param_2;
    lVar11 = param_2[3];
    pcVar1 = *(code **)(*plVar9 + 0x248);
    *(undefined8 *)(puVar12 + -0x28) = 0x148b0d86e;
    (*pcVar1)(plVar9,lVar11,_Dst);
  }
  if ((*(byte *)((longlong)plVar8 + 0x3c) & 0x10) == 0) {
    pcVar1 = *(code **)(*plVar8 + 0x148);
    *(undefined8 *)(puVar12 + -0x28) = 0x148b0d88b;
    (*pcVar1)(plVar8,_Dst);
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar12 + -0x28) = &UNK_148b0d8b9;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b0d9db FUN_148b0d9db body=1439 status=ok
// SIG undefined FUN_148b0d9db(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b0d9db(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined8 uStack_70;
  undefined1 auStack_68 [4];
  uint local_64;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  puVar11 = auStack_68;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  local_60 = param_2[1];
  uVar1 = *(ushort *)(local_60 + 0xb6);
  if (uVar1 == 0) {
    puVar13 = (undefined1 *)0x0;
  }
  else {
    lVar12 = (longlong)*(int *)(local_60 + 0x5c);
    if (lVar12 < 0x11) {
      uStack_70 = 0x148b0da3c;
      lVar12 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar11 = auStack_68 + lVar12;
      puVar13 = auStack_68 + lVar12;
    }
    else {
      uStack_70 = 0x148b0dbfc;
      lVar4 = -((ulonglong)(((uint)uVar1 + *(int *)(local_60 + 0x5c)) - 1) + 0xf &
               0xfffffffffffffff0);
      puVar11 = auStack_68 + lVar4;
      puVar13 = (undefined1 *)(-lVar12 & (ulonglong)(auStack_68 + lVar12 + lVar4 + -1));
    }
  }
  if (local_60 == 0) {
    local_58 = (longlong *)0x0;
  }
  else {
    local_58 = *(longlong **)(local_60 + 0x50);
  }
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  *(undefined8 *)(puVar11 + -0x28) = 0x148b0da70;
  FUN_144a2daf0(&local_60);
  while ((local_58 != (longlong *)0x0 && ((char)local_58[7] < '\0'))) {
    if (((uint)local_58[7] >> 9 & 1) == 0) {
      pcVar2 = *(code **)(*local_58 + 0x160);
      *(undefined8 *)(puVar11 + -0x28) = 0x148b0da9f;
      (*pcVar2)();
    }
    else {
      iVar14 = *(int *)((longlong)local_58 + 0x34);
      lVar12 = local_58[6];
      iVar6 = *(int *)((longlong)local_58 + 0x44);
      *(undefined8 *)(puVar11 + -0x28) = 0x148b0dabf;
      memset(puVar13 + iVar6,0,(longlong)(int)lVar12 * (longlong)iVar14);
    }
    local_58 = (longlong *)local_58[3];
    *(undefined8 *)(puVar11 + -0x28) = 0x148b0dadb;
    FUN_144a2daf0(&local_60);
  }
  plVar8 = (longlong *)*param_2;
  uVar3 = param_2[1];
  puVar15 = puVar11 + -0x20;
  pcVar2 = *(code **)(*plVar8 + 0x248);
  *(undefined8 *)(puVar11 + -0x28) = 0x148b0dafc;
  (*pcVar2)(plVar8,uVar3,puVar13);
  uVar3 = param_2[1];
  *(undefined8 *)(puVar11 + -0x28) = 0x148b0db0d;
  plVar8 = (longlong *)FUN_148b0d59d(uVar3);
  if (plVar8 == (longlong *)0x0) goto LAB_148b0db1a;
  lVar12 = param_1[4];
  plVar9 = (longlong *)param_1[3];
  if ((char)lVar12 == '\x02') {
    *(undefined8 *)(puVar11 + -0x28) = 0x148b0dc33;
    cVar5 = FUN_148b0d053(plVar8);
    if (cVar5 == '\0') {
      if ((&DAT_14b55ab30)[*(byte *)(param_1 + 2)] == '\x01') {
        lVar12 = *param_1;
      }
      else if ((&DAT_14b55ab33)[*(byte *)(param_1 + 2)] == '\x01') {
        lVar12 = param_1[1];
      }
      else {
        lVar12 = 0;
      }
      puVar15 = puVar13 + *(int *)((longlong)plVar8 + 0x44);
      pcVar2 = *(code **)(*plVar9 + 0x80);
      *(undefined8 *)(puVar11 + -0x28) = 0x148b0dc6e;
      cVar5 = (*pcVar2)(plVar9);
      if (cVar5 == '\0') {
        puVar10 = (undefined1 *)(lVar12 + *(int *)((longlong)plVar9 + 0x44));
        if (puVar10 == puVar15) goto LAB_148b0db1a;
        if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
          lVar12 = plVar9[6];
          pcVar2 = *(code **)(*plVar9 + 0x100);
          *(undefined8 *)(puVar11 + -0x28) = 0x148b0dd23;
          (*pcVar2)(plVar9,puVar10,puVar15,(int)lVar12);
          puVar15 = puVar11 + -0x20;
        }
        else {
          iVar14 = *(int *)((longlong)plVar9 + 0x34);
          lVar12 = plVar9[6];
          *(undefined8 *)(puVar11 + -0x28) = 0x148b0dd47;
          memcpy(puVar10,puVar15,(longlong)(int)lVar12 * (longlong)iVar14);
          puVar15 = puVar11 + -0x20;
        }
      }
      else {
        pcVar2 = *(code **)(*plVar9 + 0x98);
        *(undefined8 *)(puVar11 + -0x28) = 0x148b0dc8c;
        (*pcVar2)(plVar9,lVar12,puVar15);
        puVar15 = puVar11 + -0x20;
      }
    }
    else {
LAB_148b0dd49:
      iVar6 = *(int *)((longlong)plVar8 + 0x34) * (int)plVar8[6];
      iVar14 = *(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6];
      if (iVar14 < iVar6) {
        iVar14 = iVar6;
      }
      pcVar2 = *(code **)(*plVar8 + 0x178);
      *(undefined8 *)(puVar11 + -0x28) = 0x148b0dd72;
      local_64 = (*pcVar2)(plVar8);
      pcVar2 = *(code **)(*plVar9 + 0x178);
      *(undefined8 *)(puVar11 + -0x28) = 0x148b0dd89;
      uVar7 = (*pcVar2)(plVar9);
      if ((int)uVar7 < (int)local_64) {
        uVar7 = local_64;
      }
      if (iVar14 == 0) {
        puVar10 = (undefined1 *)0x0;
      }
      else if ((int)uVar7 < 0x11) {
        *(undefined8 *)(puVar11 + -8) = 0x148b0ddd0;
        lVar4 = -((longlong)iVar14 + 0x1eU & 0xfffffffffffffff0);
        puVar10 = puVar11 + lVar4;
        puVar11 = puVar11 + lVar4;
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x148b0de3b;
        lVar4 = -((longlong)(int)(iVar14 + uVar7 + -1) + 0xfU & 0xfffffffffffffff0);
        puVar10 = (undefined1 *)
                  ((longlong)(int)-uVar7 & (ulonglong)(puVar11 + (ulonglong)uVar7 + lVar4 + -1));
        puVar11 = puVar11 + lVar4;
      }
      if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
        pcVar2 = *(code **)(*plVar9 + 0x160);
        *(undefined8 *)(puVar11 + -0x28) = 0x148b0ddb9;
        (*pcVar2)(plVar9,puVar10);
      }
      else {
        iVar14 = *(int *)((longlong)plVar9 + 0x34);
        lVar4 = plVar9[6];
        *(undefined8 *)(puVar11 + -0x28) = 0x148b0ddf2;
        memset(puVar10,0,(longlong)(int)lVar4 * (longlong)iVar14);
      }
      puVar15 = puVar13 + *(int *)((longlong)plVar8 + 0x44);
      if (puVar10 != puVar15) {
        if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
          lVar4 = plVar8[6];
          pcVar2 = *(code **)(*plVar8 + 0x100);
          *(undefined8 *)(puVar11 + -0x28) = 0x148b0de24;
          (*pcVar2)(plVar8,puVar10,puVar15,(int)lVar4);
        }
        else {
          iVar14 = *(int *)((longlong)plVar8 + 0x34);
          lVar4 = plVar8[6];
          *(undefined8 *)(puVar11 + -0x28) = 0x148b0de71;
          memcpy(puVar10,puVar15,(longlong)(int)lVar4 * (longlong)iVar14);
        }
      }
      *(undefined8 *)(puVar11 + -0x28) = 0x148b0de87;
      FUN_148b0d1e8(plVar8,plVar9,puVar10);
      if ((char)lVar12 == '\x02') {
        if ((&DAT_14b55ab30)[*(byte *)(param_1 + 2)] == '\x01') {
          lVar12 = *param_1;
        }
        else if ((&DAT_14b55ab33)[*(byte *)(param_1 + 2)] == '\x01') {
          lVar12 = param_1[1];
        }
        else {
          lVar12 = 0;
        }
        pcVar2 = *(code **)(*plVar9 + 0x80);
        *(undefined8 *)(puVar11 + -0x28) = 0x148b0deb5;
        cVar5 = (*pcVar2)(plVar9);
        if (cVar5 == '\0') {
          puVar15 = (undefined1 *)(lVar12 + *(int *)((longlong)plVar9 + 0x44));
          if (puVar15 != puVar10) {
            if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
              lVar12 = plVar9[6];
              pcVar2 = *(code **)(*plVar9 + 0x100);
              *(undefined8 *)(puVar11 + -0x28) = 0x148b0df56;
              (*pcVar2)(plVar9,puVar15,puVar10,(int)lVar12);
            }
            else {
              iVar14 = *(int *)((longlong)plVar9 + 0x34);
              lVar12 = plVar9[6];
              *(undefined8 *)(puVar11 + -0x28) = 0x148b0df7a;
              memcpy(puVar15,puVar10,(longlong)(int)lVar12 * (longlong)iVar14);
            }
          }
        }
        else {
          pcVar2 = *(code **)(*plVar9 + 0x98);
          *(undefined8 *)(puVar11 + -0x28) = 0x148b0ded3;
          (*pcVar2)(plVar9,lVar12,puVar10);
        }
      }
      else {
        plVar8 = (longlong *)*param_1;
        lVar12 = param_1[3];
        pcVar2 = *(code **)(*plVar8 + 0x248);
        *(undefined8 *)(puVar11 + -0x28) = 0x148b0deec;
        (*pcVar2)(plVar8,lVar12,puVar10);
      }
      if ((*(byte *)((longlong)plVar9 + 0x3c) & 0x10) != 0) goto LAB_148b0db1a;
      puVar15 = puVar11 + -0x20;
      pcVar2 = *(code **)(*plVar9 + 0x148);
      *(undefined8 *)(puVar11 + -0x28) = 0x148b0df0e;
      (*pcVar2)(plVar9,puVar10);
    }
  }
  else {
    *(undefined8 *)(puVar11 + -0x28) = 0x148b0dc96;
    plVar9 = (longlong *)FUN_148b0cf07(plVar9);
    *(undefined8 *)(puVar11 + -0x28) = 0x148b0dcac;
    cVar5 = FUN_148b0d053(plVar8);
    if (cVar5 != '\0') goto LAB_148b0dd49;
    iVar14 = *(int *)((longlong)plVar8 + 0x44);
    plVar8 = (longlong *)*param_1;
    lVar12 = param_1[3];
    pcVar2 = *(code **)(*plVar8 + 0x248);
    *(undefined8 *)(puVar11 + -0x28) = 0x148b0dcd3;
    (*pcVar2)(plVar8,lVar12,puVar13 + iVar14);
  }
  puVar11 = puVar15 + 0x20;
LAB_148b0db1a:
  local_60 = param_2[1];
  if (local_60 == 0) {
    local_58 = (longlong *)0x0;
  }
  else {
    local_58 = *(longlong **)(local_60 + 0x50);
  }
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  *(undefined8 *)(puVar11 + -0x28) = 0x148b0db54;
  FUN_144a2daf0(&local_60);
  plVar8 = local_58;
  while ((local_58 = plVar8, plVar8 != (longlong *)0x0 && ((char)plVar8[7] < '\0'))) {
    if ((plVar8[7] & 0x1000000000U) == 0) {
      iVar14 = *(int *)((longlong)plVar8 + 0x44);
      pcVar2 = *(code **)(*plVar8 + 0x148);
      *(undefined8 *)(puVar11 + -0x28) = 0x148b0db8c;
      (*pcVar2)(plVar8,puVar13 + iVar14);
    }
    local_58 = (longlong *)local_58[3];
    *(undefined8 *)(puVar11 + -0x28) = 0x148b0dba8;
    FUN_144a2daf0(&local_60);
    plVar8 = local_58;
  }
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -0x28) = &UNK_148b0dbdf;
  FUN_144d8e3a0();
}



// FUNCTION 148b0df7f FUN_148b0df7f body=2507 status=ok
// SIG undefined FUN_148b0df7f(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b0df7f(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *_Dst;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  puVar13 = auStack_78;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  local_60 = param_3[1];
  uVar1 = *(ushort *)(local_60 + 0xb6);
  if (uVar1 == 0) {
    puVar15 = (undefined1 *)0x0;
  }
  else {
    lVar14 = (longlong)*(int *)(local_60 + 0x5c);
    if (lVar14 < 0x11) {
      uStack_80 = 0x148b0dfe3;
      lVar14 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar13 = auStack_78 + lVar14;
      puVar15 = auStack_78 + lVar14;
    }
    else {
      uStack_80 = 0x148b0e1e3;
      lVar4 = -((ulonglong)(((uint)uVar1 + *(int *)(local_60 + 0x5c)) - 1) + 0xf &
               0xfffffffffffffff0);
      puVar13 = auStack_78 + lVar4;
      puVar15 = (undefined1 *)(-lVar14 & (ulonglong)(auStack_78 + lVar14 + lVar4 + -1));
    }
  }
  if (local_60 == 0) {
    local_58 = (longlong *)0x0;
  }
  else {
    local_58 = *(longlong **)(local_60 + 0x50);
  }
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  *(undefined8 *)(puVar13 + -0x28) = 0x148b0e017;
  FUN_144a2daf0(&local_60);
  while ((local_58 != (longlong *)0x0 && ((char)local_58[7] < '\0'))) {
    if (((uint)local_58[7] >> 9 & 1) == 0) {
      pcVar2 = *(code **)(*local_58 + 0x160);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e046;
      (*pcVar2)();
    }
    else {
      iVar16 = *(int *)((longlong)local_58 + 0x34);
      lVar14 = local_58[6];
      iVar6 = *(int *)((longlong)local_58 + 0x44);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e066;
      memset(puVar15 + iVar6,0,(longlong)(int)lVar14 * (longlong)iVar16);
    }
    local_58 = (longlong *)local_58[3];
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e082;
    FUN_144a2daf0(&local_60);
  }
  uVar3 = param_3[1];
  local_68 = param_2;
  *(undefined8 *)(puVar13 + -0x28) = 0x148b0e09d;
  plVar9 = (longlong *)FUN_148b0cf07(uVar3);
  lVar14 = param_1[4];
  plVar10 = (longlong *)param_1[3];
  if ((char)lVar14 == '\x02') {
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e0c0;
    cVar5 = FUN_148b0d053(plVar10);
    plVar11 = local_68;
    if (cVar5 == '\0') {
      if ((&DAT_14b55ab30)[*(byte *)(param_1 + 2)] == '\x01') {
        lVar14 = *param_1;
      }
      else if ((&DAT_14b55ab33)[*(byte *)(param_1 + 2)] == '\x01') {
        lVar14 = param_1[1];
      }
      else {
        lVar14 = 0;
      }
      puVar17 = puVar15 + *(int *)((longlong)plVar9 + 0x44);
      pcVar2 = *(code **)(*plVar10 + 0x88);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e101;
      cVar5 = (*pcVar2)(plVar10);
      if (cVar5 == '\0') {
        puVar18 = (undefined1 *)(lVar14 + *(int *)((longlong)plVar10 + 0x44));
        if (puVar18 == puVar17) goto LAB_148b0e452;
        if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
          lVar14 = plVar10[6];
          puVar12 = puVar13 + -0x20;
          pcVar2 = *(code **)(*plVar10 + 0x100);
          *(undefined8 *)(puVar13 + -0x28) = 0x148b0e382;
          (*pcVar2)(plVar10,puVar17,puVar18,(int)lVar14);
        }
        else {
          iVar16 = *(int *)((longlong)plVar10 + 0x34);
          lVar14 = plVar10[6];
          puVar12 = puVar13 + -0x20;
          *(undefined8 *)(puVar13 + -0x28) = 0x148b0e743;
          memcpy(puVar17,puVar18,(longlong)(int)lVar14 * (longlong)iVar16);
        }
      }
      else {
        puVar12 = puVar13 + -0x20;
        pcVar2 = *(code **)(*plVar10 + 0xa0);
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e123;
        (*pcVar2)(plVar10,lVar14,puVar17);
      }
    }
    else {
LAB_148b0e152:
      iVar6 = *(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6];
      iVar16 = *(int *)((longlong)plVar10 + 0x34) * (int)plVar10[6];
      if (iVar16 < iVar6) {
        iVar16 = iVar6;
      }
      pcVar2 = *(code **)(*plVar9 + 0x178);
      local_70 = param_3;
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e180;
      uVar7 = (*pcVar2)(plVar9);
      pcVar2 = *(code **)(*plVar10 + 0x178);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e197;
      uVar8 = (*pcVar2)(plVar10);
      if ((int)uVar8 < (int)uVar7) {
        uVar8 = uVar7;
      }
      if (iVar16 == 0) {
        puVar17 = (undefined1 *)0x0;
      }
      else if ((int)uVar8 < 0x11) {
        *(undefined8 *)(puVar13 + -8) = 0x148b0e23c;
        lVar4 = -((longlong)iVar16 + 0x1eU & 0xfffffffffffffff0);
        puVar17 = puVar13 + lVar4;
        puVar13 = puVar13 + lVar4;
      }
      else {
        *(undefined8 *)(puVar13 + -8) = 0x148b0e39b;
        lVar4 = -((longlong)(int)(iVar16 + uVar8 + -1) + 0xfU & 0xfffffffffffffff0);
        puVar17 = (undefined1 *)
                  ((longlong)(int)-uVar8 & (ulonglong)(puVar13 + (ulonglong)uVar8 + lVar4 + -1));
        puVar13 = puVar13 + lVar4;
      }
      param_3 = local_70;
      if ((*(byte *)((longlong)plVar10 + 0x39) & 2) == 0) {
        pcVar2 = *(code **)(*plVar10 + 0x160);
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e1cd;
        (*pcVar2)(plVar10,puVar17);
      }
      else {
        iVar16 = *(int *)((longlong)plVar10 + 0x34);
        lVar4 = plVar10[6];
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e261;
        memset(puVar17,0,(longlong)(int)lVar4 * (longlong)iVar16);
      }
      plVar11 = local_68;
      if ((char)lVar14 == '\x02') {
        if ((&DAT_14b55ab30)[*(byte *)(param_1 + 2)] == '\x01') {
          lVar14 = *param_1;
        }
        else if ((&DAT_14b55ab33)[*(byte *)(param_1 + 2)] == '\x01') {
          lVar14 = param_1[1];
        }
        else {
          lVar14 = 0;
        }
        pcVar2 = *(code **)(*plVar10 + 0x88);
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e297;
        cVar5 = (*pcVar2)(plVar10);
        if (cVar5 == '\0') {
          puVar18 = (undefined1 *)(lVar14 + *(int *)((longlong)plVar10 + 0x44));
          if (puVar18 != puVar17) {
            if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
              lVar14 = plVar10[6];
              pcVar2 = *(code **)(*plVar10 + 0x100);
              *(undefined8 *)(puVar13 + -0x28) = 0x148b0e405;
              (*pcVar2)(plVar10,puVar17,puVar18,(int)lVar14);
            }
            else {
              iVar16 = *(int *)((longlong)plVar10 + 0x34);
              lVar14 = plVar10[6];
              *(undefined8 *)(puVar13 + -0x28) = 0x148b0e763;
              memcpy(puVar17,puVar18,(longlong)(int)lVar14 * (longlong)iVar16);
            }
          }
        }
        else {
          pcVar2 = *(code **)(*plVar10 + 0xa0);
          *(undefined8 *)(puVar13 + -0x28) = 0x148b0e2b9;
          (*pcVar2)(plVar10,lVar14,puVar17);
        }
      }
      else {
        plVar11 = (longlong *)*param_1;
        lVar14 = param_1[3];
        pcVar2 = *(code **)(*plVar11 + 0x248);
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e2d6;
        (*pcVar2)(plVar11,lVar14,puVar17);
        plVar11 = local_68;
      }
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e2f0;
      FUN_148b0d1e8(plVar10,plVar9,puVar17);
      puVar18 = puVar15 + *(int *)((longlong)plVar9 + 0x44);
      if (puVar18 != puVar17) {
        if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
          lVar14 = plVar9[6];
          pcVar2 = *(code **)(*plVar9 + 0x100);
          *(undefined8 *)(puVar13 + -0x28) = 0x148b0e32a;
          (*pcVar2)(plVar9,puVar18,puVar17,(int)lVar14);
        }
        else {
          iVar16 = *(int *)((longlong)plVar9 + 0x34);
          lVar14 = plVar9[6];
          *(undefined8 *)(puVar13 + -0x28) = 0x148b0e427;
          memcpy(puVar18,puVar17,(longlong)(int)lVar14 * (longlong)iVar16);
        }
      }
      if ((plVar10[7] & 0x1000000000U) != 0) goto LAB_148b0e452;
      puVar12 = puVar13 + -0x20;
      pcVar2 = *(code **)(*plVar10 + 0x148);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e44e;
      (*pcVar2)(plVar10,puVar17);
    }
    puVar13 = puVar12 + 0x20;
  }
  else {
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e130;
    plVar10 = (longlong *)FUN_148b0d59d(plVar10);
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e146;
    cVar5 = FUN_148b0d053(plVar10);
    if (cVar5 != '\0') goto LAB_148b0e152;
    iVar16 = *(int *)((longlong)plVar9 + 0x44);
    plVar10 = (longlong *)*param_1;
    lVar14 = param_1[3];
    pcVar2 = *(code **)(*plVar10 + 0x248);
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e216;
    (*pcVar2)(plVar10,lVar14,puVar15 + iVar16);
    plVar11 = local_68;
  }
LAB_148b0e452:
  plVar10 = (longlong *)*param_3;
  uVar3 = param_3[1];
  puVar17 = puVar13 + -0x20;
  pcVar2 = *(code **)(*plVar10 + 0x248);
  *(undefined8 *)(puVar13 + -0x28) = 0x148b0e469;
  (*pcVar2)(plVar10,uVar3,puVar15);
  uVar3 = param_3[1];
  *(undefined8 *)(puVar13 + -0x28) = 0x148b0e47a;
  plVar9 = (longlong *)FUN_148b0d59d(uVar3);
  lVar14 = plVar11[4];
  plVar10 = (longlong *)plVar11[3];
  if ((char)lVar14 == '\x02') {
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e49e;
    cVar5 = FUN_148b0d053(plVar9);
    if (cVar5 != '\0') goto LAB_148b0e6b1;
    if ((&DAT_14b55ab30)[*(byte *)(plVar11 + 2)] == '\x01') {
      lVar14 = *plVar11;
    }
    else if ((&DAT_14b55ab33)[*(byte *)(plVar11 + 2)] == '\x01') {
      lVar14 = plVar11[1];
    }
    else {
      lVar14 = 0;
    }
    puVar18 = puVar15 + *(int *)((longlong)plVar9 + 0x44);
    pcVar2 = *(code **)(*plVar10 + 0x80);
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e4e4;
    cVar5 = (*pcVar2)(plVar10);
    if (cVar5 == '\0') {
      _Dst = (undefined1 *)(lVar14 + *(int *)((longlong)plVar10 + 0x44));
      if (_Dst == puVar18) goto LAB_148b0e560;
      if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
        lVar14 = plVar10[6];
        pcVar2 = *(code **)(*plVar10 + 0x100);
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e675;
        (*pcVar2)(plVar10,_Dst,puVar18,(int)lVar14);
        puVar17 = puVar13 + -0x20;
      }
      else {
        iVar16 = *(int *)((longlong)plVar10 + 0x34);
        lVar14 = plVar10[6];
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e69c;
        memcpy(_Dst,puVar18,(longlong)(int)lVar14 * (longlong)iVar16);
      }
    }
    else {
      pcVar2 = *(code **)(*plVar10 + 0x98);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e506;
      (*pcVar2)(plVar10,lVar14,puVar18);
      puVar17 = puVar13 + -0x20;
    }
  }
  else {
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e514;
    plVar10 = (longlong *)FUN_148b0cf07(plVar10);
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e52a;
    cVar5 = FUN_148b0d053(plVar9);
    if (cVar5 == '\0') {
      iVar16 = *(int *)((longlong)plVar9 + 0x44);
      plVar10 = (longlong *)*plVar11;
      lVar14 = plVar11[3];
      pcVar2 = *(code **)(*plVar10 + 0x248);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e552;
      (*pcVar2)(plVar10,lVar14,puVar15 + iVar16);
      goto LAB_148b0e560;
    }
LAB_148b0e6b1:
    iVar6 = *(int *)((longlong)plVar9 + 0x34) * (int)plVar9[6];
    iVar16 = *(int *)((longlong)plVar10 + 0x34) * (int)plVar10[6];
    if (iVar16 < iVar6) {
      iVar16 = iVar6;
    }
    pcVar2 = *(code **)(*plVar9 + 0x178);
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e6de;
    uVar7 = (*pcVar2)(plVar9);
    pcVar2 = *(code **)(*plVar10 + 0x178);
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e6f5;
    uVar8 = (*pcVar2)(plVar10);
    if ((int)uVar8 < (int)uVar7) {
      uVar8 = uVar7;
    }
    if (iVar16 == 0) {
      puVar18 = (undefined1 *)0x0;
    }
    else if ((int)uVar8 < 0x11) {
      *(undefined8 *)(puVar13 + -8) = 0x148b0e77d;
      lVar4 = -((longlong)iVar16 + 0x1eU & 0xfffffffffffffff0);
      puVar18 = puVar13 + lVar4;
      puVar13 = puVar13 + lVar4;
    }
    else {
      *(undefined8 *)(puVar13 + -8) = 0x148b0e7ef;
      lVar4 = -((longlong)(int)(iVar16 + uVar8 + -1) + 0xfU & 0xfffffffffffffff0);
      puVar18 = (undefined1 *)
                ((longlong)(int)-uVar8 & (ulonglong)(puVar13 + (ulonglong)uVar8 + lVar4 + -1));
      puVar13 = puVar13 + lVar4;
    }
    if ((*(byte *)((longlong)plVar10 + 0x39) & 2) == 0) {
      pcVar2 = *(code **)(*plVar10 + 0x160);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e726;
      (*pcVar2)(plVar10,puVar18);
    }
    else {
      iVar16 = *(int *)((longlong)plVar10 + 0x34);
      lVar4 = plVar10[6];
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e79f;
      memset(puVar18,0,(longlong)(int)lVar4 * (longlong)iVar16);
    }
    plVar11 = local_68;
    puVar17 = puVar15 + *(int *)((longlong)plVar9 + 0x44);
    if (puVar18 != puVar17) {
      if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
        lVar4 = plVar9[6];
        pcVar2 = *(code **)(*plVar9 + 0x100);
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e7d9;
        (*pcVar2)(plVar9,puVar18,puVar17,(int)lVar4);
      }
      else {
        iVar16 = *(int *)((longlong)plVar9 + 0x34);
        lVar4 = plVar9[6];
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e827;
        memcpy(puVar18,puVar17,(longlong)(int)lVar4 * (longlong)iVar16);
      }
    }
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e83d;
    FUN_148b0d1e8(plVar9,plVar10,puVar18);
    if ((char)lVar14 == '\x02') {
      if ((&DAT_14b55ab30)[*(byte *)(plVar11 + 2)] == '\x01') {
        lVar14 = *plVar11;
      }
      else if ((&DAT_14b55ab33)[*(byte *)(plVar11 + 2)] == '\x01') {
        lVar14 = plVar11[1];
      }
      else {
        lVar14 = 0;
      }
      pcVar2 = *(code **)(*plVar10 + 0x80);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e875;
      cVar5 = (*pcVar2)(plVar10);
      if (cVar5 == '\0') {
        puVar17 = (undefined1 *)(lVar14 + *(int *)((longlong)plVar10 + 0x44));
        if (puVar17 != puVar18) {
          if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
            lVar14 = plVar10[6];
            pcVar2 = *(code **)(*plVar10 + 0x100);
            *(undefined8 *)(puVar13 + -0x28) = 0x148b0e923;
            (*pcVar2)(plVar10,puVar17,puVar18,(int)lVar14);
          }
          else {
            iVar16 = *(int *)((longlong)plVar10 + 0x34);
            lVar14 = plVar10[6];
            *(undefined8 *)(puVar13 + -0x28) = 0x148b0e94a;
            memcpy(puVar17,puVar18,(longlong)(int)lVar14 * (longlong)iVar16);
          }
        }
      }
      else {
        pcVar2 = *(code **)(*plVar10 + 0x98);
        *(undefined8 *)(puVar13 + -0x28) = 0x148b0e893;
        (*pcVar2)(plVar10,lVar14,puVar18);
      }
    }
    else {
      plVar9 = (longlong *)*plVar11;
      lVar14 = plVar11[3];
      pcVar2 = *(code **)(*plVar9 + 0x248);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e8b0;
      (*pcVar2)(plVar9,lVar14,puVar18);
    }
    if ((plVar10[7] & 0x1000000000U) != 0) goto LAB_148b0e560;
    puVar17 = puVar13 + -0x20;
    pcVar2 = *(code **)(*plVar10 + 0x148);
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e8db;
    (*pcVar2)(plVar10,puVar18);
  }
  puVar13 = puVar17 + 0x20;
LAB_148b0e560:
  local_60 = param_3[1];
  if (local_60 == 0) {
    local_58 = (longlong *)0x0;
  }
  else {
    local_58 = *(longlong **)(local_60 + 0x50);
  }
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  *(undefined8 *)(puVar13 + -0x28) = 0x148b0e59a;
  FUN_144a2daf0(&local_60);
  while ((plVar10 = local_58, local_58 != (longlong *)0x0 && ((char)local_58[7] < '\0'))) {
    if ((local_58[7] & 0x1000000000U) == 0) {
      iVar16 = *(int *)((longlong)local_58 + 0x44);
      pcVar2 = *(code **)(*local_58 + 0x148);
      *(undefined8 *)(puVar13 + -0x28) = 0x148b0e5c8;
      (*pcVar2)(plVar10,puVar15 + iVar16);
    }
    local_58 = (longlong *)local_58[3];
    *(undefined8 *)(puVar13 + -0x28) = 0x148b0e5e4;
    FUN_144a2daf0(&local_60);
  }
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar13 + -0x28) = &UNK_148b0e618;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b0e962 FUN_148b0e962 body=78 status=ok
// SIG undefined FUN_148b0e962(void)

undefined8 * FUN_148b0e962(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_2 != 0) {
    uVar1 = FUN_14570ab3e(param_2);
    FUN_14485c47a(param_1,uVar1);
    param_1[1] = *(undefined8 *)(param_2 + 0x18);
    *(bool *)(param_1 + 2) = (*(uint *)(param_2 + 0xb0) & 0x2001) == 0;
  }
  return param_1;
}



// FUNCTION 148b0e9b0 FUN_148b0e9b0 body=73 status=ok
// SIG undefined FUN_148b0e9b0(void)

undefined8 FUN_148b0e9b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (param_2 == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else {
    lVar1 = FUN_14479d2ce(param_1);
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  uVar2 = FUN_1400796d0(lVar1,uVar2,1);
  return uVar2;
}



// FUNCTION 148b0e9fa FUN_148b0e9fa body=536 status=ok
// SIG undefined FUN_148b0e9fa(void)

undefined8 FUN_148b0e9fa(undefined8 param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switch(param_2) {
  case 0:
    local_38 = L"FailingReasonIncompatibleLibrary";
    local_30 = 0x20;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"MVVMCompiledBindingLibrary";
    local_30 = 0x1a;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Incompatible Library";
    break;
  case 1:
    local_38 = L"FailingReasonInvalidSource";
    local_30 = 0x1a;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"MVVMCompiledBindingLibrary";
    local_30 = 0x1a;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Invalid Source";
    break;
  case 2:
    local_38 = L"FailingReasonInvalidDestination";
    local_30 = 0x1f;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"MVVMCompiledBindingLibrary";
    local_30 = 0x1a;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Invalid Destination";
    break;
  case 3:
    local_38 = L"FailingReasonInvalidConversionFunction";
    local_30 = 0x26;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"MVVMCompiledBindingLibrary";
    local_30 = 0x1a;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Invalid Conversion Function";
    break;
  case 4:
    local_38 = L"FailingReasonInvalidCast";
    local_30 = 0x18;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"MVVMCompiledBindingLibrary";
    local_30 = 0x1a;
    FUN_1446e940c(local_40,&local_38);
    pwVar1 = L"Invalid Cast";
    break;
  default:
    FUN_144a5dc74(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_140208bae(param_1,local_40,local_3c,pwVar1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148b0ec16 FUN_148b0ec16 body=67 status=ok
// SIG undefined FUN_148b0ec16(void)

void FUN_148b0ec16(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140005516(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_148b1e00a(param_1 + 0x10);
  return;
}



// FUNCTION 148b0ec5a FUN_148b0ec5a body=566 status=ok
// SIG undefined FUN_148b0ec5a(void)

undefined4 *
FUN_148b0ec5a(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,int param_5
             )

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_128 [32];
  int local_108;
  undefined8 local_f8 [2];
  byte local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  char local_d0;
  undefined1 local_c8 [16];
  byte local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  char local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  longlong lStack_60;
  byte local_58;
  undefined7 uStack_57;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_78 = 0;
  if (param_5 == 1) {
LAB_148b0ecb6:
    FUN_148b0ef30(param_1,local_c8,param_3,param_4 + 4);
    if (local_a0 != '\0') {
      local_68 = 0;
      lStack_60 = 0;
      if (-1 < *(short *)(param_4 + 10)) {
        puVar3 = local_f8;
        FUN_148b0ef30(param_1,puVar3,param_3,param_4 + 8);
        if ((local_d0 != '\x01') || ((char)uStack_d8 != '\x01')) {
LAB_148b0ed9a:
          *param_2 = 3;
          goto LAB_148b0ecda;
        }
        lVar1 = CONCAT44(uStack_dc,local_e0);
        if ((*(byte *)(lVar1 + 0xb1) & 0x20) == 0) {
          if ((&DAT_14b55ab30)[local_e8] != '\x01') goto LAB_148b0ed9a;
        }
        else {
          if ((*(uint *)(lVar1 + 8) & 0x10) == 0) {
            lVar2 = *(longlong *)(lVar1 + 0x20);
          }
          else {
            lVar2 = 0;
          }
          puVar3 = (undefined8 *)(lVar2 + 0x110);
          if (*(longlong *)(lVar2 + 0x110) == 0) {
            FUN_140aa6c08();
          }
        }
        local_68 = *puVar3;
        lStack_60 = lVar1;
      }
      local_108 = param_5;
      FUN_148b0f2be(param_2,&local_98,local_c8,&local_68);
      goto LAB_148b0ecde;
    }
    *param_2 = 2;
  }
  else {
    FUN_148b0ef30(param_1,local_c8,param_3,param_4);
    if (local_a0 == '\x01') {
      local_e8 = local_b8;
      (*(code *)(&PTR_LAB_14b559a50)[local_b8])(local_f8,local_c8);
      local_e0 = local_b0;
      uStack_dc = uStack_ac;
      uStack_d8 = uStack_a8;
      uStack_d4 = uStack_a4;
      if (local_a0 == '\x01') {
        local_a0 = '\0';
      }
      local_58 = local_e8;
      (*(code *)(&PTR_LAB_14b559a50)[local_e8])(&local_68);
      local_88 = CONCAT71(uStack_57,local_58);
      local_98 = local_68;
      lStack_90 = lStack_60;
      uStack_80 = CONCAT44(uStack_dc,local_e0);
      local_78 = CONCAT44(uStack_d4,uStack_d8);
      goto LAB_148b0ecb6;
    }
    *param_2 = 1;
  }
LAB_148b0ecda:
  *(undefined1 *)(param_2 + 1) = 1;
LAB_148b0ecde:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b0ee92 FUN_148b0ee92 body=157 status=ok
// SIG undefined FUN_148b0ee92(void)

longlong * FUN_148b0ee92(longlong *param_1,longlong *param_2,undefined8 *param_3,short *param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*param_4 * 4 + param_1[4];
  lVar1 = (longlong)*(short *)(lVar3 + -4 + (longlong)param_4[1] * 4);
  if ((*(byte *)(lVar3 + -2 + (longlong)param_4[1] * 4) & 4) == 0) {
    lVar1 = lVar1 * 0x14 + param_1[2];
    if ((&DAT_14b55ab30)[*(byte *)(param_3 + 2)] == '\x01') {
      lVar1 = FUN_148b0e9b0(lVar1,*param_3);
LAB_148b0eef7:
      uVar2 = 1;
      goto LAB_148b0ef04;
    }
    lVar3 = FUN_14479d2ce(lVar1);
    if (lVar3 != 0) {
      lVar1 = FUN_1400796d0(lVar3,*(undefined8 *)(lVar1 + 8),1);
      goto LAB_148b0eef7;
    }
  }
  else {
    lVar1 = *(longlong *)(*param_1 + lVar1 * 8);
    uVar2 = 2;
LAB_148b0ef04:
    if (lVar1 != 0) {
      *param_2 = lVar1;
      *(undefined1 *)(param_2 + 1) = uVar2;
      uVar2 = 1;
      goto LAB_148b0ef11;
    }
  }
  uVar2 = 0;
LAB_148b0ef11:
  *(undefined1 *)(param_2 + 2) = uVar2;
  return param_2;
}



// FUNCTION 148b0ef30 FUN_148b0ef30 body=908 status=ok
// SIG undefined FUN_148b0ef30(void)

longlong FUN_148b0ef30(longlong *param_1,longlong param_2,longlong param_3,short *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 local_90 [16];
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_68;
  longlong local_60;
  longlong local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 0) {
    uVar2 = param_4[1];
    if (-1 < (longlong)(short)uVar2) {
      local_50 = 2;
      local_60 = param_3;
      if (1 < uVar2) {
        lVar8 = (longlong)*param_4;
        lVar9 = (short)uVar2 + lVar8 + -1;
        local_98 = lVar9;
        do {
          lVar7 = local_60;
          if ((((&DAT_14b55ab30)[local_50] == '\0') &&
              (lVar7 = local_58, (&DAT_14b55ab33)[local_50] != '\x01')) || (lVar7 == 0))
          goto LAB_148b0f1dd;
          lVar7 = (longlong)*(short *)(param_1[4] + lVar8 * 4);
          bVar1 = *(byte *)(param_1[4] + 2 + lVar8 * 4);
          if ((bVar1 & 4) == 0) {
            lVar9 = lVar7 * 0x14 + param_1[2];
            if ((&DAT_14b55ab30)[local_50] == '\0') {
              lVar7 = FUN_14479d2ce(lVar9);
              if (lVar7 == 0) goto LAB_148b0f1dd;
              lVar9 = FUN_1400796d0(lVar7,*(undefined8 *)(lVar9 + 8),1);
            }
            else {
              lVar9 = FUN_148b0e9b0(lVar9,local_60);
            }
            if (((lVar9 == 0) || ((bVar1 & 1) == 0)) ||
               (FUN_148b0ce0d(lVar9), (&DAT_14b55ab30)[local_50] == '\0')) goto LAB_148b0f1dd;
            lVar7 = FUN_148b0f418(local_60,lVar9);
            (*(code *)(&PTR_FUN_14b55ab40)[local_50])(&local_60);
            local_50 = 2;
            lVar9 = local_98;
            local_60 = lVar7;
          }
          else {
            plVar10 = *(longlong **)(*param_1 + lVar7 * 8);
            if (plVar10 == (longlong *)0x0) goto LAB_148b0f1dd;
            if ((bVar1 & 1) == 0) {
              if (((bVar1 & 2) == 0) ||
                 (cVar4 = (**(code **)(*plVar10 + 0x88))(plVar10), cVar4 != '\0'))
              goto LAB_148b0f1dd;
              uVar5 = (ulonglong)local_50;
              lVar7 = local_60;
              if (((&DAT_14b55ab30)[uVar5] != '\x01') &&
                 (lVar7 = local_58, (&DAT_14b55ab33)[uVar5] == '\0')) {
                lVar7 = 0;
              }
              iVar3 = *(int *)((longlong)plVar10 + 0x44);
              lVar6 = plVar10[0xe];
              (*(code *)(&PTR_FUN_14b55ab40)[uVar5])(&local_60);
              local_50 = 1;
              local_60 = lVar6;
              local_58 = iVar3 + lVar7;
            }
            else {
              lVar7 = plVar10[1];
              lVar6 = FUN_1446f4b16();
              if (*(ulonglong *)(lVar6 + 8) == 0) {
                bVar11 = lVar7 != 0;
                if (lVar7 != lVar6 && bVar11) {
                  do {
                    lVar7 = *(longlong *)(lVar7 + 0x30);
                    bVar11 = lVar7 != 0;
                    if (lVar7 == lVar6) break;
                  } while (lVar7 != 0);
                }
              }
              else {
                bVar11 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0;
              }
              if (!bVar11) {
                plVar10 = (longlong *)0x0;
              }
              lVar7 = local_60;
              if (((&DAT_14b55ab30)[local_50] != '\x01') &&
                 (lVar7 = local_58, (&DAT_14b55ab33)[local_50] == '\0')) {
                lVar7 = 0;
              }
              lVar7 = (**(code **)(*plVar10 + 0x220))(plVar10,lVar7,0);
              (*(code *)(&PTR_FUN_14b55ab40)[local_50])(&local_60);
              local_50 = 2;
              local_60 = lVar7;
            }
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar9);
      }
      uVar5 = (ulonglong)local_50;
      lVar9 = local_60;
      if ((((&DAT_14b55ab30)[uVar5] != '\0') ||
          (lVar9 = local_58, (&DAT_14b55ab33)[uVar5] == '\x01')) && (lVar9 != 0)) {
        local_80 = local_50;
        (*(code *)(&PTR_LAB_14b559a70)[uVar5])(local_90,&local_60);
        FUN_148b0ee92(param_1,&local_78,local_90,param_4);
        if (local_68 == '\x01') {
          *(byte *)(param_2 + 0x10) = local_50;
          (*(code *)(&PTR_LAB_14b559a50)[local_50])(param_2);
          *(undefined4 *)(param_2 + 0x18) = local_78;
          *(undefined4 *)(param_2 + 0x1c) = uStack_74;
          *(undefined4 *)(param_2 + 0x20) = uStack_70;
          *(undefined4 *)(param_2 + 0x24) = uStack_6c;
        }
        *(bool *)(param_2 + 0x28) = local_68 == '\x01';
        goto LAB_148b0f1e1;
      }
    }
  }
LAB_148b0f1dd:
  *(undefined1 *)(param_2 + 0x28) = 0;
LAB_148b0f1e1:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b0f2be FUN_148b0f2be body=304 status=ok
// SIG undefined FUN_148b0f2be(void)

undefined4 *
FUN_148b0f2be(undefined4 *param_1,longlong *param_2,longlong *param_3,longlong param_4,int param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_5 == 1) {
LAB_148b0f2e2:
    if ((&DAT_14b55ab30)[*(byte *)(param_3 + 2)] == '\x01') {
      if (*param_3 == 0) {
LAB_148b0f333:
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*param_3 + 0x10);
      }
    }
    else {
      if ((&DAT_14b55ab33)[*(byte *)(param_3 + 2)] == '\0') goto LAB_148b0f333;
      lVar3 = *param_3;
    }
    lVar2 = FUN_148b0f3ee(param_3 + 3);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if (*(longlong *)(param_4 + 8) == 0) {
        FUN_148b0d66e(param_2,param_3);
      }
      else if (param_5 == 1) {
        FUN_148b0d9db(param_3,param_4);
      }
      else {
        FUN_148b0df7f(param_2,param_3,param_4);
      }
      uVar1 = 0;
      goto LAB_148b0f3b9;
    }
  }
  else {
    if ((&DAT_14b55ab30)[*(byte *)(param_2 + 2)] == '\x01') {
      if (*param_2 == 0) {
LAB_148b0f384:
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*param_2 + 0x10);
      }
    }
    else {
      if ((&DAT_14b55ab33)[*(byte *)(param_2 + 2)] == '\0') goto LAB_148b0f384;
      lVar3 = *param_2;
    }
    lVar2 = FUN_148b0f3ee(param_2 + 3);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_148b0f2e2;
  }
  *param_1 = 4;
  uVar1 = 1;
LAB_148b0f3b9:
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 148b0f3ee FUN_148b0f3ee body=42 status=ok
// SIG undefined FUN_148b0f3ee(void)

longlong FUN_148b0f3ee(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  wchar_t *pwStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  wchar_t *pwStack_60;
  undefined4 uStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  undefined1 auStack_30 [8];
  ulonglong uStack_28;
  
  if ((char)param_1[1] == '\x01') {
    lVar4 = *param_1;
    if (lVar4 != 0) {
      uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
      lVar1 = DAT_14c949118;
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
        if (lVar1 == 0) {
          pcStack_38 = FUN_140631fbe;
          lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar1;
          FUN_1446f470e(auStack_30,L"Class",1);
          puStack_48 = &LAB_146891e90;
          puStack_50 = &LAB_146273097;
          pwStack_60 = L"Engine";
          uStack_58 = 199;
          uStack_68 = 0x20;
          uStack_70 = 0x10000000;
          pwStack_78 = (wchar_t *)CONCAT44(pwStack_78._4_4_,8);
          ppcStack_40 = &pcStack_38;
          FUN_14574b4b2(lVar1);
          DAT_14c949118 = lVar1;
          uVar2 = FUN_144a7a812();
          lVar1 = DAT_14c949118;
          uVar3 = FUN_1449e2fb2();
          pwStack_78 = L"Class";
          FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
          lVar1 = DAT_14c949118;
        }
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) goto LAB_14570ab90;
      }
      lVar4 = 0;
LAB_14570ab90:
      if ((uStack_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  else if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
    lVar4 = FUN_1448f9ec4();
    return lVar4;
  }
  return 0;
}



// FUNCTION 148b0f418 FUN_148b0f418 body=306 status=ok
// SIG undefined FUN_148b0f418(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_148b0f418(longlong *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 *_Dst;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  ulonglong local_30;
  
  puVar6 = auStack_38;
  local_30 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffd8;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if (uVar1 == 0) {
    _Dst = (undefined1 *)0x0;
  }
  else {
    lVar7 = (longlong)*(int *)(param_2 + 0x5c);
    if (lVar7 < 0x11) {
      uStack_40 = 0x148b0f463;
      lVar7 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar6 = auStack_38 + lVar7;
      _Dst = auStack_38 + lVar7;
    }
    else {
      uStack_40 = 0x148b0f538;
      lVar4 = -((ulonglong)(((uint)uVar1 + *(int *)(param_2 + 0x5c)) - 1) + 0xf & 0xfffffffffffffff0
               );
      puVar6 = auStack_38 + lVar4;
      _Dst = (undefined1 *)(-lVar7 & (ulonglong)(auStack_38 + lVar7 + lVar4 + -1));
    }
  }
  if ((*(byte *)((longlong)param_3 + 0x39) & 2) == 0) {
    pcVar3 = *(code **)(*param_3 + 0x160);
    *(undefined8 *)(puVar6 + -0x28) = 0x148b0f487;
    (*pcVar3)(param_3,_Dst);
  }
  else {
    iVar2 = *(int *)((longlong)param_3 + 0x34);
    lVar7 = param_3[6];
    *(undefined8 *)(puVar6 + -0x28) = 0x148b0f4a3;
    memset(_Dst,0,(longlong)(int)lVar7 * (longlong)iVar2);
  }
  pcVar3 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)(puVar6 + -0x28) = 0x148b0f4bd;
  (*pcVar3)(param_1,param_2,_Dst);
  pcVar3 = *(code **)(*param_3 + 0x220);
  *(undefined8 *)(puVar6 + -0x28) = 0x148b0f4d7;
  uVar5 = (*pcVar3)(param_3,_Dst,0);
  if ((*(byte *)((longlong)param_3 + 0x3c) & 0x10) == 0) {
    pcVar3 = *(code **)(*param_3 + 0x148);
    *(undefined8 *)(puVar6 + -0x28) = 0x148b0f4f7;
    (*pcVar3)(param_3,_Dst);
  }
  if ((local_30 ^ (ulonglong)&stack0xffffffffffffffd8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar6 + -0x28) = &UNK_148b0f521;
  FUN_144d8e3a0();
}



// FUNCTION 148b0f550 FUN_148b0f550 body=42 status=ok
// SIG undefined FUN_148b0f550(void)

longlong FUN_148b0f550(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  wchar_t *pwStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  wchar_t *pwStack_60;
  undefined4 uStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  undefined1 auStack_30 [8];
  ulonglong uStack_28;
  
  if ((char)param_1[1] == '\x01') {
    lVar4 = *param_1;
    if (lVar4 != 0) {
      uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
      lVar1 = DAT_14c949118;
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
        if (lVar1 == 0) {
          pcStack_38 = FUN_140631fbe;
          lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar1;
          FUN_1446f470e(auStack_30,L"Class",1);
          puStack_48 = &LAB_146891e90;
          puStack_50 = &LAB_146273097;
          pwStack_60 = L"Engine";
          uStack_58 = 199;
          uStack_68 = 0x20;
          uStack_70 = 0x10000000;
          pwStack_78 = (wchar_t *)CONCAT44(pwStack_78._4_4_,8);
          ppcStack_40 = &pcStack_38;
          FUN_14574b4b2(lVar1);
          DAT_14c949118 = lVar1;
          uVar2 = FUN_144a7a812();
          lVar1 = DAT_14c949118;
          uVar3 = FUN_1449e2fb2();
          pwStack_78 = L"Class";
          FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
          lVar1 = DAT_14c949118;
        }
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) goto LAB_14570ab90;
      }
      lVar4 = 0;
LAB_14570ab90:
      if ((uStack_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  else if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
    lVar4 = FUN_1448f9ec4();
    return lVar4;
  }
  return 0;
}



// FUNCTION 148b0f57a FUN_148b0f57a body=662 status=ok
// SIG undefined FUN_148b0f57a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_148b0f57a(undefined8 *param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *_Dst;
  bool bVar11;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)&stack0xffffffffffffffc8;
  plVar7 = param_2;
  if ((&DAT_14b55ab30)[*(byte *)(param_2 + 2)] == '\0') {
    if ((&DAT_14b55ab33)[*(byte *)(param_2 + 2)] == '\x01') {
      plVar7 = param_2 + 1;
      goto LAB_148b0f5ba;
    }
  }
  else {
LAB_148b0f5ba:
    if (*plVar7 != 0) {
      lVar8 = param_2[4];
      plVar7 = (longlong *)param_2[3];
      if ((char)lVar8 != '\x02') {
        plVar7 = (longlong *)FUN_148b0ce0d(plVar7);
      }
      puVar9 = auStack_48;
      if (plVar7 != (longlong *)0x0) {
        lVar10 = plVar7[1];
        lVar5 = FUN_1446f4b16();
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar11 = lVar10 != 0;
          if (lVar10 != lVar5 && bVar11) {
            do {
              lVar10 = *(longlong *)(lVar10 + 0x30);
              bVar11 = lVar10 != 0;
              if (lVar10 == lVar5) break;
            } while (lVar10 != 0);
          }
          if (bVar11) goto LAB_148b0f604;
        }
        else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_148b0f604:
          if ((char)lVar8 == '\x02') {
            if ((&DAT_14b55ab30)[*(byte *)(param_2 + 2)] == '\x01') {
              lVar8 = *param_2;
            }
            else if ((&DAT_14b55ab33)[*(byte *)(param_2 + 2)] == '\x01') {
              lVar8 = param_2[1];
            }
            else {
              lVar8 = 0;
            }
            uVar6 = (**(code **)(*plVar7 + 0x220))(plVar7,lVar8,0);
LAB_148b0f63a:
            *param_1 = uVar6;
            uVar4 = 1;
            goto LAB_148b0f68b;
          }
          lVar8 = param_2[3];
          if (((*(uint *)(lVar8 + 8) & 0x10) == 0) &&
             (lVar10 = *(longlong *)(lVar8 + 0x20), lVar10 != 0)) {
            if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(*param_2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
              uVar1 = *(ushort *)(lVar8 + 0xb6);
              if (uVar1 == 0) {
                _Dst = (undefined1 *)0x0;
                puVar9 = auStack_48;
              }
              else {
                lVar10 = (longlong)*(int *)(lVar8 + 0x5c);
                if (lVar10 < 0x11) {
                  uStack_50 = 0x148b0f716;
                  lVar10 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
                  _Dst = auStack_48 + lVar10;
                  puVar9 = auStack_48 + lVar10;
                }
                else {
                  uStack_50 = 0x148b0f7fe;
                  lVar5 = -((ulonglong)(((uint)uVar1 + *(int *)(lVar8 + 0x5c)) - 1) + 0xf &
                           0xfffffffffffffff0);
                  _Dst = (undefined1 *)(-lVar10 & (ulonglong)(auStack_48 + lVar10 + lVar5 + -1));
                  puVar9 = auStack_48 + lVar5;
                }
              }
              if ((*(byte *)((longlong)plVar7 + 0x39) & 2) == 0) {
                pcVar3 = *(code **)(*plVar7 + 0x160);
                *(undefined8 *)(puVar9 + -0x28) = 0x148b0f76f;
                (*pcVar3)(plVar7,_Dst);
              }
              else {
                iVar2 = *(int *)((longlong)plVar7 + 0x34);
                lVar10 = plVar7[6];
                *(undefined8 *)(puVar9 + -0x28) = 0x148b0f78b;
                memset(_Dst,0,(longlong)(int)lVar10 * (longlong)iVar2);
              }
              param_2 = (longlong *)*param_2;
              pcVar3 = *(code **)(*param_2 + 0x248);
              *(undefined8 *)(puVar9 + -0x28) = 0x148b0f7a5;
              (*pcVar3)(param_2,lVar8,_Dst);
              pcVar3 = *(code **)(*plVar7 + 0x220);
              *(undefined8 *)(puVar9 + -0x28) = 0x148b0f7bf;
              uVar6 = (*pcVar3)(plVar7,_Dst,0);
              if ((*(byte *)((longlong)plVar7 + 0x3c) & 0x10) == 0) {
                pcVar3 = *(code **)(*plVar7 + 0x148);
                *(undefined8 *)(puVar9 + -0x28) = 0x148b0f7e3;
                (*pcVar3)(plVar7,_Dst);
              }
              goto LAB_148b0f63a;
            }
          }
        }
      }
    }
  }
  puVar9 = auStack_48;
  uVar4 = 0;
LAB_148b0f68b:
  *(undefined1 *)(param_1 + 1) = uVar4;
  if ((local_40 ^ (ulonglong)&stack0xffffffffffffffc8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar9 + -0x28) = &UNK_148b0f6b8;
  FUN_144d8e3a0();
}



// FUNCTION 148b0f81a FUN_148b0f81a body=2042 status=ok
// SIG undefined FUN_148b0f81a(void)

void FUN_148b0f81a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8 [2];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined8 local_198;
  longlong *local_190;
  longlong *local_188 [2];
  undefined1 local_178 [16];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160 [2];
  undefined8 local_150;
  longlong *local_148;
  longlong local_140;
  longlong *local_138 [2];
  longlong *local_128 [2];
  undefined1 local_118 [16];
  undefined8 **local_108;
  wchar_t **local_100;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  char local_98;
  undefined1 local_90 [40];
  char local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_148b0ef30(*(longlong *)(param_3 + 0x28) + 0x88,local_90,param_2,param_1 + 0x38);
  if (local_68 == '\x01') {
    FUN_148b0f57a(&local_a0,local_90);
    if ((local_98 == '\x01') && (local_a0 != (longlong *)0x0)) {
      lVar5 = FUN_14595833a();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(local_a0[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(local_a0[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        local_60 = (wchar_t *)0x0;
        FUN_14485c47a(&local_60,local_a0);
        local_b0 = (longlong *)0x0;
        if (param_3 != 0) {
          local_108 = (undefined8 **)0x0;
          FUN_14485c47a(&local_108,param_3);
          local_b0 = (longlong *)local_108;
        }
        local_108 = &local_b0;
        local_100 = &local_60;
        FUN_148b1e03e(param_1 + 0x40,&local_c0,&local_108);
        local_108 = (undefined8 **)0x0;
        local_100 = (wchar_t **)((ulonglong)local_100 & 0xffffffff00000000);
        FUN_1446efa72(&local_108,0,4,0x10);
        ppuVar4 = local_108;
        local_100 = (wchar_t **)CONCAT44(local_100._4_4_,4);
        *local_108 = &PTR_LAB_14b55abd0;
        local_108[1] = param_2;
        local_108[2] = local_a0;
        local_108[3] = *(undefined8 **)(param_1 + 0x30);
        puVar6 = (undefined8 *)FUN_144a3f946();
        ppuVar4[4] = puVar6;
        *ppuVar4 = &PTR_FUN_14b55ab60;
        ppuVar4[5] = (undefined8 *)0x0;
        FUN_14485c47a(ppuVar4 + 5,param_1);
        ppuVar4[6] = (undefined8 *)FUN_148b10016;
        FUN_148b1e50e(local_a0 + 0x4a,&local_60,&local_108);
        FUN_1449db362(&local_108);
        goto LAB_148b0fccd;
      }
      FUN_14276766e(&local_108,&DAT_14cb9b118);
      local_d8 = 0;
      FUN_14485c47a(&local_d8,param_2);
      local_140 = local_a0[3];
      FUN_145715fae(local_138);
      local_60 = L"BindToEntryGenerationFailWidgetNotList";
      local_58 = 0x26;
      FUN_1446e940c(local_164,&local_60);
      local_60 = L"MVVMViewListViewBaseExtension";
      local_58 = 0x1d;
      FUN_1446e940c(local_168,&local_60);
      FUN_140208bae(local_160,local_168,local_164,
                    L"The object property \'{0}\' is not of type ListViewBase, but has an Viewmodel extension meant for ListViewBase widgets. The extension won\'t have any effects."
                   );
      FUN_14023409e(&local_150,local_160,1);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(local_50,local_138);
      local_b8 = &local_40;
      local_c0 = &local_60;
      FUN_14010d304(&local_b0);
      local_d0 = local_150;
      local_c8 = local_148;
      if (local_148 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_148 + 1) = (int)local_148[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_128,&local_d0,&local_b0);
      FUN_14007f2db(local_b0,local_a8);
      if ((undefined8 **)local_b0 != (undefined8 **)0x0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_148 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_148 + 0x10))(local_148);
          }
        }
      }
      if (local_138[0] != (longlong *)0x0) {
        (**(code **)(*local_138[0] + 0x10))();
      }
      puVar7 = local_118;
    }
    else {
      FUN_14276766e(&local_108,&DAT_14cb9b118);
      local_d8 = 0;
      FUN_14485c47a(&local_d8,param_2);
      FUN_145715fae(local_188,param_1 + 0x28);
      local_60 = L"BindToEntryGenerationFailInvalidObjectPropertyWidget";
      local_58 = 0x34;
      FUN_1446e940c(&local_140,&local_60);
      local_60 = L"MVVMViewListViewBaseExtension";
      local_58 = 0x1d;
      FUN_1446e940c(local_164,&local_60);
      FUN_140208bae(local_160,local_164,&local_140,
                    L"The property object for list-type widget \'{0}\' is not found, so viewmodels won\'t be bound to its entries."
                   );
      FUN_14023409e(&local_198,local_160,1);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(local_50,local_188);
      local_b8 = &local_40;
      local_c0 = &local_60;
      FUN_14010d304(&local_b0);
      local_d0 = local_198;
      local_c8 = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_190 + 1) = (int)local_190[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_128,&local_d0,&local_b0);
      FUN_14007f2db(local_b0,local_a8);
      if ((undefined8 **)local_b0 != (undefined8 **)0x0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_190 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_188[0] != (longlong *)0x0) {
        (**(code **)(*local_188[0] + 0x10))();
      }
      puVar7 = local_178;
    }
    FUN_148b121ee(&local_108,puVar7,1,local_128);
    plVar3 = *(longlong **)(puVar7 + 8);
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
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
  }
  else {
    FUN_14276766e(&local_108,&DAT_14cb9b118);
    local_d8 = 0;
    FUN_14485c47a(&local_d8,param_2);
    FUN_145715fae(local_1b8,param_1 + 0x28);
    local_60 = L"BindToEntryGenerationFailInvalidFieldPathWidget";
    local_58 = 0x2f;
    FUN_1446e940c(local_160,&local_60);
    local_60 = L"MVVMViewListViewBaseExtension";
    local_58 = 0x1d;
    FUN_1446e940c(&local_140,&local_60);
    FUN_140208bae(local_128,&local_140,local_160,
                  L"The field path for list-type widget \'{0}\' is invalid, so viewmodels won\'t be bound to its entries."
                 );
    FUN_14023409e(&local_1c8,local_128,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_1b8);
    local_b8 = &local_40;
    local_c0 = &local_60;
    FUN_14010d304(&local_b0);
    local_d0 = local_1c8;
    local_c8 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_a0,&local_d0,&local_b0);
    FUN_14007f2db(local_b0,local_a8);
    if ((undefined8 **)local_b0 != (undefined8 **)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1c0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1c0 + 0x10))(local_1c0);
        }
      }
    }
    if (local_1b8[0] != (longlong *)0x0) {
      (**(code **)(*local_1b8[0] + 0x10))();
    }
    FUN_148b121ee(&local_108,local_1a8,1,&local_a0);
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1a0 + 0x10))(local_1a0);
        }
      }
    }
    local_160[0] = local_128[0];
    if (local_a0 != (longlong *)0x0) {
      (**(code **)(*local_a0 + 0x10))();
      local_160[0] = local_128[0];
    }
  }
  if (local_160[0] != (longlong *)0x0) {
    (**(code **)(*local_160[0] + 0x10))();
  }
  FUN_1427678c0(&local_108);
LAB_148b0fccd:
  if ((local_40 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b10016 FUN_148b10016 body=760 status=ok
// SIG undefined FUN_148b10016(void)

void FUN_148b10016(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [48];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != 0) {
    lVar5 = FUN_148b12a0a(param_2);
    if (lVar5 != 0) {
      lVar6 = (**(code **)(*param_4 + 0x300))(param_4,param_2);
      if (lVar6 != 0) {
        lVar3 = *(longlong *)(lVar6 + 0x10);
        if (lVar3 != 0) {
          uVar7 = FUN_1458f046a();
          cVar4 = FUN_144a7ff9e(lVar3,uVar7);
          if (cVar4 != '\0') {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar6);
            }
            local_90 = lVar6;
            uVar7 = FUN_1458f046a();
            local_88 = FUN_144718840(lVar6,uVar7);
            FUN_148b103ea(lVar5,param_5,&local_90);
            goto LAB_148b1003b;
          }
        }
        FUN_14276766e(local_c8,&DAT_14cb9b118);
        local_98 = 0;
        FUN_14485c47a(&local_98,param_3);
        FUN_145715fae(local_f8,param_1 + 0x28);
        local_50 = L"SetViewModelOnEntryWidgetFailNotViewModel";
        local_48 = 0x29;
        FUN_1446e940c(local_11c,&local_50);
        local_50 = L"MVVMViewListViewBaseExtension";
        local_48 = 0x1d;
        FUN_1446e940c(local_120,&local_50);
        FUN_140208bae(local_118,local_120,local_11c,
                      L"Trying to set an object that is not a viewmodel on entries of list-type widget \'{0}\'. Check the implementation of widget \'{0}\' and make sure the function GetListObjectFromEntry is overriden to return a viewmodel object. If you do not wish to set viewmodels on the entries of this widget, please remove the corresonding Viewmodel extension from it."
                     );
        FUN_14023409e(&local_108,local_118,1);
        local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
        FUN_14023423e(local_40,local_f8);
        local_68 = &local_30;
        local_70 = &local_50;
        FUN_14010d304(&local_60);
        local_80 = local_108;
        local_78 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_100 + 1) = (int)local_100[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_e8,&local_80,&local_60);
        FUN_14007f2db(local_60,local_58);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (local_40[0] != (longlong *)0x0) {
          (**(code **)(*local_40[0] + 0x10))();
        }
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_100 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar2 = (int *)((longlong)local_100 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_100 + 0x10))(local_100);
            }
          }
        }
        if (local_f8[0] != (longlong *)0x0) {
          (**(code **)(*local_f8[0] + 0x10))();
        }
        FUN_148b121ee(local_c8,local_d8,1,local_e8);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
            }
          }
        }
        if (local_e8[0] != (longlong *)0x0) {
          (**(code **)(*local_e8[0] + 0x10))();
        }
        if (local_118[0] != (longlong *)0x0) {
          (**(code **)(*local_118[0] + 0x10))();
        }
        FUN_1427678c0(local_c8);
      }
    }
  }
LAB_148b1003b:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b10310 FUN_148b10310 body=198 status=ok
// SIG undefined FUN_148b10310(void)

void FUN_148b10310(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x40);
  local_38 = 0;
  if (param_3 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_38 = local_30;
  }
  FUN_148b1e8c0(plVar1,&local_24,&local_38);
  if ((longlong)local_24 != -1) {
    local_30 = *(undefined8 *)(*plVar1 + 8 + (longlong)local_24 * 0x18);
    FUN_148b1e940(plVar1);
    lVar2 = FUN_14479d2ce(&local_30);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b103ea FUN_148b103ea body=834 status=ok
// SIG undefined FUN_148b103ea(void)

undefined8 FUN_148b103ea(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [16];
  undefined1 local_70 [48];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar6 = 0;
    }
    FUN_14276766e(local_70,&DAT_14cb9b118);
    local_40 = 0;
    FUN_14485c47a(&local_40,uVar6);
    local_38 = L"SetViewModelInvalidName";
    local_30 = 0x17;
    FUN_1446e940c(local_84,&local_38);
    local_38 = L"MVVMView";
    local_30 = 8;
    FUN_1446e940c(local_88,&local_38);
    FUN_140208bae(&local_38,local_88,local_84,L"The viewmodel name is empty.");
    puVar8 = local_80;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (lVar3 == 0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar6 = 0;
      }
      FUN_14276766e(local_70,&DAT_14cb9b118);
      local_40 = 0;
      FUN_14485c47a(&local_40,uVar6);
      local_38 = L"SetViewModelInvalidClass";
      local_30 = 0x18;
      FUN_1446e940c(local_84,&local_38);
      local_38 = L"MVVMView";
      local_30 = 8;
      FUN_1446e940c(local_88,&local_38);
      FUN_140208bae(&local_38,local_88,local_84,L"The view is not constructed.");
      puVar8 = local_98;
    }
    else {
      if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
        uVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x24 + uVar5) == param_2) {
            iVar7 = (int)(uVar5 >> 3) * -0x3b13b13b;
            if (iVar7 != -1) {
              local_b8 = *param_3;
              if ((local_b8 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_b0 = param_3[1];
              uVar6 = FUN_143fa9582(param_1,iVar7,&local_b8,0);
              goto LAB_148b10499;
            }
            break;
          }
          uVar5 = uVar5 + 0x68;
        } while ((longlong)*(int *)(lVar3 + 0x30) * 0x68 - uVar5 != 0);
      }
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar6 = 0;
      }
      FUN_14276766e(local_70,&DAT_14cb9b118);
      local_40 = 0;
      FUN_14485c47a(&local_40,uVar6);
      local_38 = L"SetViewModelViewModelNameNotFound";
      local_30 = 0x21;
      FUN_1446e940c(local_84,&local_38);
      local_38 = L"MVVMView";
      local_30 = 8;
      FUN_1446e940c(local_88,&local_38);
      FUN_140208bae(&local_38,local_88,local_84,L"The viewmodel name could not be found.");
      puVar8 = local_a8;
    }
  }
  FUN_148b121ee(local_70,puVar8,1,&local_38);
  plVar4 = *(longlong **)(puVar8 + 8);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  FUN_1427678c0(local_70);
  uVar6 = 0;
LAB_148b10499:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1072e FUN_148b1072e body=180 status=ok
// SIG undefined FUN_148b1072e(void)

void FUN_148b1072e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b107e4(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b107e4 FUN_148b107e4 body=2702 status=ok
// SIG undefined FUN_148b107e4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148b107e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_268 [40];
  longlong *local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined4 local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong *local_200 [2];
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  longlong *local_1d0 [2];
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong local_1b0 [2];
  longlong *local_1a0 [2];
  longlong *local_190 [2];
  longlong *local_180 [2];
  longlong local_170 [2];
  longlong *local_160 [2];
  longlong *local_150 [2];
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [48];
  undefined8 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  longlong local_a0 [2];
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    local_240 = param_2;
    plVar8 = (longlong *)FUN_147743eb0();
    lVar12 = plVar8[1];
    if ((longlong)(int)lVar12 != 0) {
      lVar15 = *plVar8;
      lVar13 = 0;
      do {
        lVar14 = *(longlong *)(lVar15 + lVar13);
        if (*(longlong *)(lVar14 + 0x30) != 0) {
          lVar9 = FUN_1405e2bf2();
          if ((((*(longlong *)(lVar14 + 0x30) != 0) && (lVar9 != 0)) &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar14 + 0x30) + 0x10), lVar4 != 0)) &&
             ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
               lVar9 + 0x30)))) {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38);
            if ((lVar9 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c();
            }
            else if (lVar9 == 0) goto LAB_148b108d1;
            lVar10 = FUN_1405e2bf2();
            if ((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) {
              if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                  != lVar10 + 0x30) {
                lVar9 = 0;
              }
              if ((((lVar4 == lVar9) && (lVar9 = FUN_148b12a0a(), lVar9 != 0)) &&
                  (FUN_148b1127a(lVar9,&local_a8,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30)),
                  uVar6 = uStack_e0, local_a8 != (wchar_t *)0x0)) &&
                 (*(longlong *)(local_a8 + 8) == *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50)
                 )) {
                lVar9 = (longlong)(int)uStack_e0;
                uVar7 = (int)uStack_e0 + 1;
                uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
                if (uStack_e0._4_4_ < uVar7) {
                  FUN_148b1e998(&local_e8,uVar6 & 0xffffffff);
                }
                plVar8 = local_e8;
                local_e8[lVar9 * 3] = lVar14;
                local_e8[lVar9 * 3 + 1] = (longlong)local_a8;
                if ((local_a8 != (wchar_t *)0x0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                plVar8[lVar9 * 3 + 2] = local_a0[0];
              }
            }
          }
        }
LAB_148b108d1:
        lVar13 = lVar13 + 8;
      } while ((longlong)(int)lVar12 * 8 != lVar13);
    }
    local_238 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x50);
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar12 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar12 = 0;
    }
    uStack_f0._0_4_ = 0;
    if ((*(uint *)(lVar12 + 8) & 0x10) == 0) {
      lVar12 = *(longlong *)(lVar12 + 0x20);
    }
    else {
      lVar12 = 0;
    }
    local_f8 = 0;
    uStack_f0 = 0;
    if (0 < (int)local_240[1]) {
      lVar15 = 0;
      local_230 = lVar12;
      local_228 = param_1;
      do {
        lVar13 = *(longlong *)(*local_240 + lVar15 * 8);
        if (lVar13 == 0) {
          FUN_14276766e(local_130,&DAT_14cb9b118);
          local_100 = 0;
          FUN_14485c47a(&local_100,lVar12);
          local_a8 = *(wchar_t **)(*(longlong *)(param_1 + 0x28) + 0x18);
          FUN_1400021e4(&local_a8,local_170);
          FUN_140233b1a(local_200,local_170);
          local_a8 = L"SetPanelWidgetItemsViewmodelNullObject";
          local_a0[0]._0_4_ = 0x26;
          FUN_1446e940c(local_1b0,&local_a8);
          local_a8 = L"MVVMViewPanelWidgetExtension";
          local_a0[0] = CONCAT44(local_a0[0]._4_4_,0x1c);
          FUN_1446e940c(local_1d0,&local_a8);
          FUN_140208bae(local_190,local_1d0,local_1b0,
                        L"The item at index {0} passed as an entry of widget {1} is null. An entry widget won\'t be generated for this item."
                       );
          FUN_14023409e(&local_210,local_190,1);
          local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffff00000000);
          local_a0[1] = 0;
          local_90 = 0;
          local_88 = 4;
          local_a0[0] = lVar15;
          FUN_14023423e(local_78,local_200);
          local_c0 = (ulonglong *)local_68;
          local_c8 = &local_a8;
          FUN_14010d304(&local_b8,&local_c8);
          local_d8 = local_210;
          local_d0 = local_208;
          if (local_208 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_208 + 1) = (int)local_208[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_150,&local_d8,&local_b8);
          FUN_14007f2db(local_b8,local_b0);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          param_1 = local_228;
          lVar12 = local_230;
          lVar13 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_a8 + lVar13) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_a8 + lVar13) + 0x10))();
              *(undefined8 *)((longlong)&local_a8 + lVar13) = 0;
              *(undefined4 *)((longlong)local_a0 + lVar13) = 0;
            }
            plVar8 = local_208;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != -0x10);
          if (local_208 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_208 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_208)(local_208);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          if (local_200[0] != (longlong *)0x0) {
            (**(code **)(*local_200[0] + 0x10))();
          }
          FUN_148b121ee(local_130,local_1f0,3,local_150);
          plVar8 = local_1e8;
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1e8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_1e8)(local_1e8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          if (local_150[0] != (longlong *)0x0) {
            (**(code **)(*local_150[0] + 0x10))();
          }
          if (local_190[0] != (longlong *)0x0) {
            (**(code **)(*local_190[0] + 0x10))();
          }
          if (local_170[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1427678c0(local_130);
        }
        else {
          if ((longlong)(int)uStack_e0 != 0) {
            lVar14 = (longlong)(int)uStack_e0 * 0x18;
            plVar8 = local_e8;
            do {
              if (plVar8[1] == lVar13) goto LAB_148b10c89;
              plVar8 = plVar8 + 3;
              lVar14 = lVar14 + -0x18;
            } while (lVar14 != 0);
          }
          plVar8 = (longlong *)0x0;
LAB_148b10c89:
          if ((lVar12 != 0) && (*(longlong *)(lVar13 + 0x10) != local_238)) {
            FUN_14276766e(local_130,&DAT_14cb9b118);
            local_100 = 0;
            FUN_14485c47a(&local_100,lVar12);
            local_a8 = *(wchar_t **)(local_238 + 0x18);
            FUN_1400021e4(&local_a8,local_170);
            FUN_140233b1a(local_160,local_170);
            local_a8 = *(wchar_t **)(*(longlong *)(param_1 + 0x28) + 0x18);
            FUN_1400021e4(&local_a8,local_190);
            FUN_140233b1a(local_180,local_190);
            local_a8 = *(wchar_t **)(lVar13 + 0x18);
            FUN_1400021e4(&local_a8,local_1b0);
            FUN_140233b1a(local_1a0,local_1b0);
            local_a8 = L"SetPanelWidgetItemsViewmodelTypeMismatch";
            local_a0[0]._0_4_ = 0x28;
            FUN_1446e940c(local_1d4,&local_a8);
            local_a8 = L"MVVMViewPanelWidgetExtension";
            local_a0[0] = CONCAT44(local_a0[0]._4_4_,0x1c);
            FUN_1446e940c(local_1d8,&local_a8);
            FUN_140208bae(local_1d0,local_1d8,local_1d4,
                          L"The item {0} passed as an entry of widget {1} is not a viewmodel of the selected type {2}."
                         );
            FUN_14023409e(&local_1c0,local_1d0,1);
            local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
            FUN_14023423e(local_a0 + 1,local_1a0);
            local_88 = 4;
            FUN_14023423e(local_78,local_180);
            local_68[0] = 4;
            FUN_14023423e(local_58,local_160);
            local_c0 = &local_48;
            local_c8 = &local_a8;
            FUN_14010d304(&local_b8,&local_c8);
            local_d8 = local_1c0;
            local_d0 = local_1b8;
            if (local_1b8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_150,&local_d8,&local_b8);
            FUN_14007f2db(local_b8,local_b0);
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            lVar12 = local_230;
            lVar14 = 0x50;
            do {
              if (*(longlong **)((longlong)&local_a8 + lVar14) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_a8 + lVar14) + 0x10))();
                *(undefined8 *)((longlong)&local_a8 + lVar14) = 0;
                *(undefined4 *)((longlong)local_a0 + lVar14) = 0;
              }
              plVar1 = local_1b8;
              lVar14 = lVar14 + -0x20;
            } while (lVar14 != -0x10);
            if (local_1b8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_1b8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_1b8)(local_1b8);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (local_1a0[0] != (longlong *)0x0) {
              (**(code **)(*local_1a0[0] + 0x10))();
            }
            if (local_180[0] != (longlong *)0x0) {
              (**(code **)(*local_180[0] + 0x10))();
            }
            if (local_160[0] != (longlong *)0x0) {
              (**(code **)(*local_160[0] + 0x10))();
            }
            FUN_148b121ee(local_130,local_140,3,local_150);
            plVar1 = local_138;
            if (local_138 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_138 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_138)(local_138);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (local_150[0] != (longlong *)0x0) {
              (**(code **)(*local_150[0] + 0x10))();
            }
            if (local_1d0[0] != (longlong *)0x0) {
              (**(code **)(*local_1d0[0] + 0x10))();
            }
            if (local_1b0[0] != 0) {
              FUN_1400020a8();
            }
            if (local_190[0] != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_170[0] != 0) {
              FUN_1400020a8();
            }
            FUN_1427678c0(local_130);
          }
          uVar6 = uStack_f0;
          if (plVar8 == (longlong *)0x0) {
            local_1e0 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38);
            if ((local_1e0 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c();
            }
            uVar11 = FUN_14779ec92(*(undefined8 *)(param_1 + 0x28),&local_1e0,0);
            FUN_148b11352(param_1,uVar11,lVar13,lVar12);
            uVar6 = uStack_f0;
            uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x40);
            lVar13 = (longlong)(int)uStack_f0;
            uVar7 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
            if (uStack_f0._4_4_ < uVar7) {
              FUN_148b1ea2c(&local_f8,uVar6 & 0xffffffff);
            }
            *(undefined8 *)(local_f8 + lVar13 * 0x10) = uVar5;
            *(undefined8 *)(local_f8 + 8 + lVar13 * 0x10) = uVar11;
          }
          else {
            lVar13 = *plVar8;
            uVar5 = *(undefined8 *)(lVar13 + 0x30);
            lVar14 = (longlong)(int)uStack_f0;
            uVar7 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
            if (uStack_f0._4_4_ < uVar7) {
              FUN_148b1ea2c(&local_f8,uVar6 & 0xffffffff);
            }
            *(longlong *)(local_f8 + lVar14 * 0x10) = lVar13;
            *(undefined8 *)(local_f8 + 8 + lVar14 * 0x10) = uVar5;
            FUN_148b11640(&local_e8,plVar8);
          }
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)local_240[1]);
    }
    local_220 = local_f8;
    local_218 = (int)uStack_f0;
    FUN_148b116b0(param_1);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b1127a FUN_148b1127a body=214 status=ok
// SIG undefined FUN_148b1127a(void)

undefined8 FUN_148b1127a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x30);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar1 + 0x24 + lVar3) == param_3) &&
         ((*(ushort *)(lVar1 + 0x60 + lVar3) & 0x200) != 0)) {
        uVar4 = (int)(lVar3 >> 3) * -0x3b13b13b;
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x38))) {
          local_18 = *(longlong *)
                      (*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar4 & 0x7fffffff) * 0x18);
          if ((DAT_14c950c29 == '\x01') && (local_18 != 0)) {
            FUN_1456cec3c();
          }
          goto LAB_148b112a7;
        }
        break;
      }
      lVar3 = lVar3 + 0x68;
    } while (lVar2 * 0x68 - lVar3 != 0);
  }
  local_18 = 0;
LAB_148b112a7:
  FUN_14797d7b6(param_2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b11352 FUN_148b11352 body=749 status=ok
// SIG undefined FUN_148b11352(void)

void FUN_148b11352(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [48];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != 0) {
    lVar5 = FUN_148b12a0a(param_2);
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(param_3 + 0x10);
      if (lVar3 != 0) {
        uVar6 = FUN_1458f046a();
        cVar4 = FUN_144a7ff9e(lVar3,uVar6);
        if (cVar4 != '\0') {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_3);
          }
          local_90 = param_3;
          uVar6 = FUN_1458f046a();
          local_88 = FUN_144718840(param_3,uVar6);
          FUN_148b103ea(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30),&local_90);
          goto LAB_148b11377;
        }
      }
      if (param_4 != 0) {
        FUN_14276766e(local_c8,&DAT_14cb9b118);
        local_98 = 0;
        FUN_14485c47a(&local_98,param_4);
        local_100 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28);
        FUN_145715fae(local_f8);
        local_50 = L"SetViewModelOnEntryWidgetFailNotViewModel";
        local_48 = 0x29;
        FUN_1446e940c(local_124,&local_50);
        local_50 = L"MVVMViewPanelWidgetExtension";
        local_48 = 0x1c;
        FUN_1446e940c(local_128,&local_50);
        FUN_140208bae(local_120,local_128,local_124,
                      L"Trying to set an object that is not a viewmodel on entries of panel-type widget \'{0}\'. If you do not wish to set viewmodels on the entries of this widget, please remove the corresonding Viewmodel extension from it."
                     );
        FUN_14023409e(&local_110,local_120,1);
        local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
        FUN_14023423e(local_40,local_f8);
        local_68 = &local_30;
        local_70 = &local_50;
        FUN_14010d304(&local_60);
        local_80 = local_110;
        local_78 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_108 + 1) = (int)local_108[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_e8,&local_80,&local_60);
        FUN_14007f2db(local_60,local_58);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (local_40[0] != (longlong *)0x0) {
          (**(code **)(*local_40[0] + 0x10))();
        }
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_108 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)local_108 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_108 + 0x10))(local_108);
            }
          }
        }
        if (local_f8[0] != (longlong *)0x0) {
          (**(code **)(*local_f8[0] + 0x10))();
        }
        FUN_148b121ee(local_c8,local_d8,1,local_e8);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
            }
          }
        }
        if (local_e8[0] != (longlong *)0x0) {
          (**(code **)(*local_e8[0] + 0x10))();
        }
        if (local_120[0] != (longlong *)0x0) {
          (**(code **)(*local_120[0] + 0x10))();
        }
        FUN_1427678c0(local_c8);
      }
    }
  }
LAB_148b11377:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b11640 FUN_148b11640 body=111 status=ok
// SIG undefined FUN_148b11640(void)

void FUN_148b11640(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_148b1eab2();
  if (uVar1 == 0xffffffff) {
    return;
  }
  iVar3 = (int)param_1[1];
  iVar2 = ~uVar1 + iVar3;
  if (iVar2 != 0) {
    iVar4 = 1;
    if (iVar2 < 1) {
      iVar4 = iVar2;
    }
    memmove((void *)(*param_1 + (longlong)(int)uVar1 * 0x18),
            (void *)(*param_1 + (longlong)(iVar3 - iVar4) * 0x18),(longlong)iVar4 * 0x18);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_148b1eb1c(param_1);
  return;
}



// FUNCTION 148b116b0 FUN_148b116b0 body=211 status=ok
// SIG undefined FUN_148b116b0(void)

void FUN_148b116b0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    lVar3 = FUN_147743eb0();
    uVar4 = *(uint *)(lVar3 + 8);
    uVar1 = *(uint *)(param_2 + 1);
    uVar2 = uVar1;
    if ((int)uVar4 < (int)uVar1) {
      uVar2 = uVar4;
    }
    if (0 < (int)uVar2) {
      lVar3 = 8;
      uVar6 = 0;
      do {
        FUN_147743906(*(undefined8 *)(param_1 + 0x28),uVar6 & 0xffffffff);
        FUN_147743cfa(*(undefined8 *)(param_1 + 0x28),uVar6 & 0xffffffff,
                      *(undefined8 *)(*param_2 + lVar3),*(undefined8 *)(*param_2 + -8 + lVar3));
        uVar6 = uVar6 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar2 != uVar6);
    }
    iVar5 = uVar1 - uVar4;
    if ((int)uVar1 < (int)uVar4) {
      do {
        uVar4 = uVar4 - 1;
        FUN_147743906(*(undefined8 *)(param_1 + 0x28),uVar4);
      } while ((int)uVar1 < (int)uVar4);
    }
    else if (iVar5 != 0 && (int)uVar4 <= (int)uVar1) {
      uVar6 = (longlong)(int)uVar4 << 4 | 8;
      do {
        FUN_147743a5a(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*param_2 + uVar6),
                      *(undefined8 *)(*param_2 + -8 + uVar6));
        uVar6 = uVar6 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



// FUNCTION 148b11784 FUN_148b11784 body=1931 status=ok
// SIG undefined FUN_148b11784(void)

longlong FUN_148b11784(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8 [2];
  undefined1 local_198 [8];
  longlong *local_190;
  undefined8 local_188;
  longlong *local_180;
  longlong *local_178 [2];
  undefined1 local_168 [16];
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  longlong *local_150 [2];
  undefined8 local_140;
  longlong *local_138;
  longlong local_130;
  longlong *local_128 [2];
  longlong *local_118 [2];
  undefined1 local_108 [16];
  undefined1 local_f8 [48];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  wchar_t **local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  undefined4 local_98;
  longlong *local_90;
  char local_88;
  undefined1 local_80 [40];
  char local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_148b0ef30(*(longlong *)(param_3 + 0x28) + 0x88,local_80,param_2,param_1 + 0x58);
  if (local_58 == '\x01') {
    FUN_148b0f57a(&local_90,local_80);
    if ((local_88 == '\x01') && (local_90 != (longlong *)0x0)) {
      lVar6 = FUN_140ec5834();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(local_90[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(local_90[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        lVar6 = FUN_148b11f10(param_3);
        if (param_1 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_1);
        }
        bVar5 = DAT_14c950c29;
        *(longlong *)(lVar6 + 0x30) = param_1;
        if ((bVar5 & 1) != 0) {
          FUN_1456cec3c(local_90);
        }
        *(longlong **)(lVar6 + 0x28) = local_90;
        lVar7 = FUN_1408c92bc(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 0x48),3);
        if (lVar7 != 0) {
          lVar4 = *(longlong *)(lVar7 + 0x70);
          lVar8 = FUN_145a879f6();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            FUN_1408c8fa8(lVar7,param_2,lVar6,0);
          }
        }
        goto LAB_148b11c37;
      }
      FUN_14276766e(local_f8,&DAT_14cb9b118);
      local_c8 = 0;
      FUN_14485c47a(&local_c8,param_2);
      local_130 = local_90[3];
      FUN_145715fae(local_128);
      local_50 = L"BindToEntryGenerationFailWidgetNotPanel";
      local_48 = 0x27;
      FUN_1446e940c(local_154,&local_50);
      local_50 = L"MVVMViewPanelWidgetExtension";
      local_48 = 0x1c;
      FUN_1446e940c(local_158,&local_50);
      FUN_140208bae(local_150,local_158,local_154,
                    L"The object property \'{0}\' is not of type panel widget, but has an Viewmodel extension meant for panel widgets. The extension won\'t have any effects."
                   );
      FUN_14023409e(&local_140,local_150,1);
      local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
      FUN_14023423e(local_40,local_128);
      local_a8 = &local_30;
      local_b0 = &local_50;
      FUN_14010d304(&local_a0);
      local_c0 = local_140;
      local_b8 = local_138;
      if (local_138 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_138 + 1) = (int)local_138[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_118,&local_c0,&local_a0);
      FUN_14007f2db(local_a0,local_98);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_40[0] != (longlong *)0x0) {
        (**(code **)(*local_40[0] + 0x10))();
      }
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_138 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_138 + 0x10))(local_138);
          }
        }
      }
      if (local_128[0] != (longlong *)0x0) {
        (**(code **)(*local_128[0] + 0x10))();
      }
      puVar9 = local_108;
    }
    else {
      FUN_14276766e(local_f8,&DAT_14cb9b118);
      local_c8 = 0;
      FUN_14485c47a(&local_c8,param_2);
      FUN_145715fae(local_178,param_1 + 0x28);
      local_50 = L"BindToEntryGenerationFailInvalidObjectPropertyWidget";
      local_48 = 0x34;
      FUN_1446e940c(&local_130,&local_50);
      local_50 = L"MVVMViewPanelWidgetExtension";
      local_48 = 0x1c;
      FUN_1446e940c(local_154,&local_50);
      FUN_140208bae(local_150,local_154,&local_130,
                    L"The property object for panel-type widget \'{0}\' is not found, so viewmodels won\'t be bound to its entries."
                   );
      FUN_14023409e(&local_188,local_150,1);
      local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
      FUN_14023423e(local_40,local_178);
      local_a8 = &local_30;
      local_b0 = &local_50;
      FUN_14010d304(&local_a0);
      local_c0 = local_188;
      local_b8 = local_180;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_180 + 1) = (int)local_180[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_118,&local_c0,&local_a0);
      FUN_14007f2db(local_a0,local_98);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_40[0] != (longlong *)0x0) {
        (**(code **)(*local_40[0] + 0x10))();
      }
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_180 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_178[0] != (longlong *)0x0) {
        (**(code **)(*local_178[0] + 0x10))();
      }
      puVar9 = local_168;
    }
    FUN_148b121ee(local_f8,puVar9,1,local_118);
    plVar3 = *(longlong **)(puVar9 + 8);
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
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
  }
  else {
    FUN_14276766e(local_f8,&DAT_14cb9b118);
    local_c8 = 0;
    FUN_14485c47a(&local_c8,param_2);
    FUN_145715fae(local_1a8,param_1 + 0x28);
    local_50 = L"BindToEntryGenerationFailInvalidFieldPathWidget";
    local_48 = 0x2f;
    FUN_1446e940c(local_150,&local_50);
    local_50 = L"MVVMViewPanelWidgetExtension";
    local_48 = 0x1c;
    FUN_1446e940c(&local_130,&local_50);
    FUN_140208bae(local_118,&local_130,local_150,
                  L"The field path for panel-type widget \'{0}\' is invalid, so viewmodels won\'t be bound to its entries."
                 );
    FUN_14023409e(&local_1b8,local_118,1);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(local_40,local_1a8);
    local_a8 = &local_30;
    local_b0 = &local_50;
    FUN_14010d304(&local_a0);
    local_c0 = local_1b8;
    local_b8 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_90,&local_c0,&local_a0);
    FUN_14007f2db(local_a0,local_98);
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1b0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_1a8[0] != (longlong *)0x0) {
      (**(code **)(*local_1a8[0] + 0x10))();
    }
    FUN_148b121ee(local_f8,local_198,1,&local_90);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_190 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    local_150[0] = local_118[0];
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x10))();
      local_150[0] = local_118[0];
    }
  }
  if (local_150[0] != (longlong *)0x0) {
    (**(code **)(*local_150[0] + 0x10))();
  }
  FUN_1427678c0(local_f8);
  lVar6 = 0;
LAB_148b11c37:
  if ((local_30 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 148b11f10 FUN_148b11f10 body=175 status=ok
// SIG undefined FUN_148b11f10(void)

undefined8 FUN_148b11f10(undefined8 param_1)

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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145a879f6();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b11fc0 FUN_148b11fc0 body=58 status=ok
// SIG undefined FUN_148b11fc0(void)

void FUN_148b11fc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1408c92bc(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 0x48),3);
  if (lVar1 != 0) {
    FUN_1408c8fa8(lVar1,param_2,0,0);
    return;
  }
  return;
}



// FUNCTION 148b11ffa FUN_148b11ffa body=69 status=ok
// SIG undefined FUN_148b11ffa(void)

void FUN_148b11ffa(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  if (uVar1 < 4) {
    return;
  }
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_140635eb8(param_2,3,uVar1 & 0xff000000,0);
  return;
}



// FUNCTION 148b12040 FUN_148b12040 body=99 status=ok
// SIG undefined FUN_148b12040(void)

void FUN_148b12040(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (DAT_14c872bd8 == '\0') {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar1 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"MVVM.DefaultExecutionMode",1);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0xd0))(plVar1);
      FUN_140457ffc(uVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148b120c9 FUN_148b120c9 body=292 status=ok
// SIG undefined FUN_148b120c9(void)

void FUN_148b120c9(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60 [2];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    uVar4 = *param_1;
    local_68 = *(undefined8 *)(param_2 + 0x18);
    FUN_145715fae(local_60);
    FUN_1467eb2e4(&local_50,local_60,1);
    local_40 = local_50;
    local_38 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FUN_1467eb24e(uVar4,local_30,&local_40);
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
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b121ee FUN_148b121ee body=333 status=ok
// SIG undefined FUN_148b121ee(void)

undefined8 *
FUN_148b121ee(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a5dc74(&local_48);
  FUN_1467e96f6(param_2,param_3,&local_48);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  uVar4 = *param_2;
  FUN_1467eb2e4(&local_68,param_4,1);
  local_48 = local_68;
  local_40 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  FUN_1467eb24e(uVar4,local_58,&local_48);
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
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  uVar4 = FUN_14479d2ce(param_1 + 0x30);
  FUN_148b120c9(param_2,uVar4);
  FUN_14276791a(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b12342 FUN_148b12342 body=231 status=ok
// SIG undefined FUN_148b12342(void)

void FUN_148b12342(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b1242a(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1242a FUN_148b1242a body=152 status=ok
// SIG undefined FUN_148b1242a(void)

ulonglong FUN_148b1242a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0 || param_1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    FUN_14779cc1a();
    if ((longlong)(int)uStack_20 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      lVar1 = 0;
      do {
        bVar3 = *(longlong *)(local_28 + lVar1) == param_2;
        plVar2 = (longlong *)CONCAT71((int7)((ulonglong)plVar2 >> 8),bVar3);
        if (bVar3) break;
        bVar3 = (longlong)(int)uStack_20 * 8 + -8 != lVar1;
        lVar1 = lVar1 + 8;
      } while (bVar3);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar2 & 0xffffffff;
}



// FUNCTION 148b124e2 FUN_148b124e2 body=378 status=ok
// SIG undefined FUN_148b124e2(void)

void FUN_148b124e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b1265e(local_19,local_20,local_24,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1265e FUN_148b1265e body=150 status=ok
// SIG undefined FUN_148b1265e(void)

undefined8 FUN_148b1265e(byte param_1,float param_2,float param_3,float param_4)

{
  undefined7 uVar1;
  bool bVar2;
  float fVar3;
  
  uVar1 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_148b12674::switchdataD_14b55aebc +
           (longlong)(int)(&switchD_148b12674::switchdataD_14b55aebc)[param_1]) >> 8);
  fVar3 = param_3;
  switch(param_1) {
  case 0:
    bVar2 = 1e-06 < ABS(param_2 - param_3);
    break;
  case 1:
    return CONCAT71(uVar1,1e-06 < ABS(param_2 - param_3));
  case 2:
    bVar2 = param_2 < param_3;
    goto LAB_148b1268e;
  case 3:
    bVar2 = param_2 < param_3;
    break;
  case 5:
switchD_148b12674_caseD_5:
    bVar2 = fVar3 < param_2;
    break;
  case 6:
  case 7:
    if (param_3 <= param_4) {
      fVar3 = param_4;
      param_4 = param_3;
    }
    if (param_1 != 7) {
      if (param_2 < param_4) {
        return 0;
      }
      goto switchD_148b12674_caseD_5;
    }
    if (param_2 <= param_4) {
      return 0;
    }
  case 4:
    bVar2 = fVar3 < param_2;
    param_3 = fVar3;
LAB_148b1268e:
    return CONCAT71(uVar1,!bVar2 && param_3 != param_2);
  default:
    return 0;
  }
  return CONCAT71(uVar1,!bVar2);
}



// FUNCTION 148b126f4 FUN_148b126f4 body=325 status=ok
// SIG undefined FUN_148b126f4(void)

void FUN_148b126f4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_1446dcc8c();
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
  FUN_148b132f7(&local_3c,local_28,local_20,local_30);
  *(undefined4 *)(param_3 + 1) = local_34;
  *param_3 = local_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1283a FUN_148b1283a body=289 status=ok
// SIG undefined FUN_148b1283a(void)

void FUN_148b1283a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b12ffe(&local_38,local_20);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1295c FUN_148b1295c body=165 status=ok
// SIG undefined FUN_148b1295c(void)

void FUN_148b1295c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_148b12a0a();
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b12a0a FUN_148b12a0a body=98 status=ok
// SIG undefined FUN_148b12a0a(void)

void FUN_148b12a0a(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458d5b06();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14779361a(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b12a6d FUN_148b12a6d body=287 status=ok
// SIG undefined FUN_148b12a6d(void)

undefined8 * FUN_148b12a6d(undefined8 *param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9b170) {
    FUN_144b3d300(&DAT_14cb9b170);
    if (DAT_14cb9b170 == -1) {
      FUN_1446f470e(&DAT_14cb9b168,L"AllowPrivateAccess",1);
      _Init_thread_footer(&DAT_14cb9b170);
    }
  }
  if (param_2 == 0) {
    bVar4 = false;
    bVar3 = false;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xb0);
    if (((uVar1 & 0x64000840) == 0x44000000) && (*(char *)(param_2 + 0xb4) == '\x01')) {
      lVar2 = FUN_148b0ce0d(param_2);
      bVar3 = lVar2 != 0;
      uVar1 = *(uint *)(param_2 + 0xb0);
    }
    else {
      bVar3 = false;
    }
    if (((uVar1 & 0x74000840) == 0x4000000) && (*(char *)(param_2 + 0xb4) == '\x01')) {
      lVar2 = FUN_148b0cf07(param_2);
      bVar4 = lVar2 != 0;
    }
    else {
      bVar4 = false;
    }
  }
  if ((byte)(bVar4 | bVar3 | param_3) == 1) {
    *param_1 = *(undefined8 *)(param_2 + 0x18);
    *(bool *)(param_1 + 1) = bVar3;
    *(bool *)((longlong)param_1 + 9) = bVar4;
    *(byte *)((longlong)param_1 + 10) = param_3 & bVar3;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  return param_1;
}



// FUNCTION 148b12b8c FUN_148b12b8c body=134 status=ok
// SIG undefined FUN_148b12b8c(void)

void FUN_148b12b8c(undefined8 *param_1,longlong param_2,byte param_3)

{
  ulonglong uVar1;
  bool bVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    if (param_3 == 0) goto LAB_148b12c03;
    param_3 = 0;
    bVar2 = false;
    bVar4 = false;
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x30) == 1) {
      uVar1 = *(ulonglong *)(param_2 + 0x38);
      bVar4 = (uVar1 & 0x10000004) != 0;
      bVar2 = (uVar1 & 0x820000000) == 0 && bVar4;
      bVar4 = (uVar1 & 0x820000010) == 0 && bVar4;
    }
    else {
      bVar2 = false;
      bVar4 = false;
    }
    if ((bVar2 == false && bVar4 == false) && param_3 == 0) {
LAB_148b12c03:
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return;
    }
    param_3 = param_3 & bVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  *param_1 = uVar3;
  *(bool *)(param_1 + 1) = bVar2;
  *(bool *)((longlong)param_1 + 9) = bVar4;
  *(byte *)((longlong)param_1 + 10) = param_3;
  return;
}



// FUNCTION 148b12c12 FUN_148b12c12 body=1002 status=ok
// SIG undefined FUN_148b12c12(void)

longlong * FUN_148b12c12(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined4 local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  code *local_b8;
  longlong **local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  if (param_3 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_d0 = &local_a8;
    local_b0 = &local_d0;
    local_b8 = FUN_143faa74a;
    (**(code **)*param_3)(param_3,param_2,&local_b8);
    iVar4 = (int)uStack_a0 - local_74;
    *param_1 = 0;
    param_1[1] = 0;
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar4 != 0) {
      FUN_148b1ee90(param_1);
    }
  }
  if (param_2 == (longlong *)0x0) {
    local_d0 = (longlong *)0x0;
    local_c8 = 0;
  }
  else {
    lVar2 = FUN_144a797b2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      local_c8 = param_2[9];
      local_c0 = 0xffffffff;
      local_bc = 0x101;
      local_ba = 0;
      local_d0 = param_2;
      FUN_1468b2202(&local_d0);
      if (local_c8 != 0) {
        do {
          if ((int)uStack_a0 == local_74) {
LAB_148b12f5b:
            uVar6 = 0;
          }
          else {
            lVar2 = *(longlong *)(local_c8 + 0x18);
            uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
            uVar5 = (uint)lVar2 & 0xffff;
            puVar3 = local_68;
            if (local_68 == (undefined1 *)0x0) {
              puVar3 = local_70;
            }
            uVar6 = (ulonglong)
                    (local_60 - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4));
            iVar4 = *(int *)(puVar3 + uVar6 * 4);
            if (iVar4 == -1) goto LAB_148b12f5b;
            do {
              bVar7 = *(longlong *)(local_a8 + (longlong)iVar4 * 0x10) == lVar2;
              uVar6 = CONCAT71((int7)(uVar6 >> 8),bVar7);
              if (bVar7) break;
              iVar4 = *(int *)((longlong)iVar4 * 0x10 + local_a8 + 8);
            } while (iVar4 != -1);
          }
          FUN_148b12a6d(&local_e0,local_c8,uVar6);
          if (local_e0 != 0) {
            iVar4 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
              FUN_148b1ef00(param_1,iVar4);
            }
            lVar2 = *param_1;
            *(undefined4 *)(lVar2 + 8 + (longlong)iVar4 * 0xc) = local_d8;
            *(longlong *)(lVar2 + (longlong)iVar4 * 0xc) = local_e0;
          }
          local_c8 = *(longlong *)(local_c8 + 0x28);
          FUN_1468b2202(&local_d0);
        } while (local_c8 != 0);
      }
    }
    local_c8 = param_2[10];
    local_d0 = param_2;
  }
  local_c0 = 0xffffffff;
  local_bc = 0x101;
  local_ba = 0;
  FUN_14688bc9a(&local_d0);
  if (local_c8 != 0) {
    do {
      if ((int)uStack_a0 == local_74) {
LAB_148b12df1:
        uVar6 = 0;
      }
      else {
        lVar2 = *(longlong *)(local_c8 + 0x20);
        uVar1 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar5 = (uint)lVar2 & 0xffff;
        puVar3 = local_68;
        if (local_68 == (undefined1 *)0x0) {
          puVar3 = local_70;
        }
        uVar6 = (ulonglong)
                (local_60 - 1U &
                (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4));
        iVar4 = *(int *)(puVar3 + uVar6 * 4);
        if (iVar4 == -1) goto LAB_148b12df1;
        do {
          bVar7 = *(longlong *)(local_a8 + (longlong)iVar4 * 0x10) == lVar2;
          uVar6 = CONCAT71((int7)(uVar6 >> 8),bVar7);
          if (bVar7) break;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + local_a8 + 8);
        } while (iVar4 != -1);
      }
      FUN_148b12b8c(&local_e0,local_c8,uVar6);
      if (local_e0 != 0) {
        iVar4 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
          FUN_148b1ef00(param_1,iVar4);
        }
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 8 + (longlong)iVar4 * 0xc) = local_d8;
        *(longlong *)(lVar2 + (longlong)iVar4 * 0xc) = local_e0;
      }
      local_c8 = *(longlong *)(local_c8 + 0x18);
      FUN_14688bc9a(&local_d0);
    } while (local_c8 != 0);
  }
  local_60 = 0;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_a8);
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148b12ffe FUN_148b12ffe body=157 status=ok
// SIG undefined FUN_148b12ffe(void)

undefined8 FUN_148b12ffe(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    uVar2 = FUN_1458f046a();
    cVar1 = FUN_144a7ff9e(param_2,uVar2);
    if (cVar1 != '\0') {
      lVar4 = *(longlong *)(param_2 + 0x110);
      if (lVar4 == 0) {
        FUN_140aa6c08();
        lVar4 = *(longlong *)(param_2 + 0x110);
      }
      if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar4 != 0) goto LAB_148b13055;
        plVar3 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c(lVar4);
LAB_148b13055:
        uVar2 = FUN_1458f046a();
        plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
      }
      uVar2 = (**(code **)(*plVar3 + 0x30))();
      goto LAB_148b13082;
    }
  }
  uVar2 = 0;
LAB_148b13082:
  FUN_148b12c12(param_1,param_2,uVar2);
  return param_1;
}



// FUNCTION 148b1309b FUN_148b1309b body=324 status=ok
// SIG undefined FUN_148b1309b(void)

undefined8 *
FUN_148b1309b(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong *local_60;
  ulonglong local_58;
  undefined1 *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == (undefined8 *)0x0) {
    uVar2 = 0;
    goto LAB_148b13149;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) goto LAB_148b130f8;
    puVar1 = (ulonglong *)(*param_2 + 0x18);
LAB_148b1319f:
    uVar4 = *puVar1 & 0xffffffff00000000;
    uVar2 = *puVar1 & 0xffffffff;
  }
  else {
    if (((char)param_2[1] == '\x02') && (*param_2 != 0)) {
      puVar1 = (ulonglong *)(*param_2 + 0x20);
      goto LAB_148b1319f;
    }
LAB_148b130f8:
    uVar4 = 0;
    uVar2 = 0;
  }
  uVar3 = FUN_148b0f550(param_2);
  local_60 = local_70;
  local_70[0] = 0;
  local_48 = &local_60;
  local_50 = &LAB_147764a16;
  local_58 = uVar4 | uVar2;
  (**(code **)*param_4)(param_4,uVar3);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_70[0] != 0);
LAB_148b13149:
  FUN_148b0f550(param_2);
  if (param_3 != 0) {
    FUN_148b0f550(param_2);
  }
  if ((char)param_2[1] == '\x01') {
    FUN_148b12a6d(param_1,*param_2,uVar2 & 0xffffffff);
  }
  else if ((char)param_2[1] == '\x02') {
    FUN_148b12b8c(param_1,*param_2,uVar2 & 0xffffffff);
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b131e0 FUN_148b131e0 body=278 status=ok
// SIG undefined FUN_148b131e0(void)

undefined8 FUN_148b131e0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_148b0f550(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_144a797b2();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = FUN_1458f046a();
      cVar1 = FUN_144a7ff9e(lVar2,uVar4);
      if (cVar1 != '\0') {
        lVar3 = *(longlong *)(lVar2 + 0x110);
        if (lVar3 == 0) {
          FUN_140aa6c08();
          lVar3 = *(longlong *)(lVar2 + 0x110);
        }
        if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
          if (lVar3 != 0) goto LAB_148b13280;
          plVar5 = (longlong *)0x0;
        }
        else {
          FUN_1456cec3c(lVar3);
LAB_148b13280:
          uVar4 = FUN_1458f046a();
          plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
        }
        uVar4 = (**(code **)(*plVar5 + 0x30))();
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        puVar6 = &local_48;
        goto LAB_148b132c3;
      }
    }
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  puVar6 = &local_58;
  uVar4 = 0;
LAB_148b132c3:
  FUN_148b1309b(param_1,puVar6,param_3,uVar4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b132f7 FUN_148b132f7 body=168 status=ok
// SIG undefined FUN_148b132f7(void)

undefined8 *
FUN_148b132f7(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_148b0cfd5(&local_30,param_3,param_2);
  if (local_28 == '\x01') {
    local_38 = 1;
  }
  else if (local_28 == '\x02') {
    local_38 = 2;
  }
  else {
    local_38 = 0;
    local_30 = 0;
  }
  local_40 = local_30;
  FUN_148b131e0(param_1,&local_40,param_4);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b133a0 FUN_148b133a0 body=240 status=ok
// SIG undefined FUN_148b133a0(void)

void FUN_148b133a0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_148b13492(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13492 FUN_148b13492 body=176 status=ok
// SIG undefined FUN_148b13492(void)

void FUN_148b13492(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 *local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(param_1 + 0x28);
    local_48 = &local_54;
    local_54 = 0;
    local_30 = &local_48;
    local_38 = &LAB_147764a16;
    local_40 = param_2;
    (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0x10));
    local_60 = local_54;
    local_58 = local_4c;
    FUN_148b13d34(param_1 + 0x30,param_1,&local_60,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13544 FUN_148b13544 body=156 status=ok
// SIG undefined FUN_148b13544(void)

void FUN_148b13544(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b135e2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b135e2 FUN_148b135e2 body=155 status=ok
// SIG undefined FUN_148b135e2(void)

void FUN_148b135e2(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(param_1 + 0x28);
  local_40 = &local_4c;
  local_4c = 0;
  local_28 = &local_40;
  local_30 = &LAB_147764a16;
  local_38 = param_2;
  (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0x10));
  local_58 = local_4c;
  local_50 = local_44;
  FUN_148b1427a(param_1 + 0x30,param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1367e FUN_148b1367e body=240 status=ok
// SIG undefined FUN_148b1367e(void)

void FUN_148b1367e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_148b13770(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13770 FUN_148b13770 body=176 status=ok
// SIG undefined FUN_148b13770(void)

void FUN_148b13770(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 *local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(param_1 + 0x28);
    local_48 = &local_54;
    local_54 = 0;
    local_30 = &local_48;
    local_38 = &LAB_147764a16;
    local_40 = param_2;
    (**(code **)*puVar1)(puVar1,*(undefined8 *)(param_1 + 0x10));
    local_60 = local_54;
    local_58 = local_4c;
    FUN_148b13f48(param_1 + 0x30,param_1,&local_60,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13828 FUN_148b13828 body=863 status=ok
// SIG undefined FUN_148b13828(void)

void FUN_148b13828(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  void *_Dst;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  longlong ***ppplVar11;
  undefined1 auStack_b8 [40];
  longlong **local_90;
  undefined4 local_88;
  undefined1 local_84 [4];
  longlong **local_80;
  undefined4 local_78;
  undefined1 local_74 [4];
  wchar_t *local_70;
  longlong ***local_68;
  undefined4 local_60;
  longlong ***local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  plVar2 = *(longlong **)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar4 = *(longlong *)(param_2 + 0x30);
  _Src = *(void **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (param_1 == 0) {
LAB_148b138d7:
    local_70 = L"MissingInputProperty";
    local_68._0_4_ = 0x14;
    ppplVar11 = &local_80;
    FUN_1446e940c(ppplVar11,&local_70);
    local_70 = L"MVVMViewModelBase";
    local_68 = (longlong ***)CONCAT44(local_68._4_4_,0x11);
    puVar10 = local_74;
    FUN_1446e940c(puVar10,&local_70);
    pwVar9 = L"Failed to resolve the input parameter for SetPropertyValue.";
LAB_148b1392c:
    FUN_140208bae(&local_58,puVar10,ppplVar11,pwVar9);
    local_70 = (wchar_t *)CONCAT44(local_70._4_4_,3);
    local_68 = local_58;
    if ((longlong ****)local_58 == (longlong ****)0x0) {
      local_60 = (undefined4)local_50;
    }
    else {
      (*(code *)(*local_58)[1])();
      local_60 = (undefined4)local_50;
      if ((longlong ****)local_58 != (longlong ****)0x0) {
        (*(code *)(*local_58)[2])();
      }
    }
    FUN_14282556a(param_1,param_2,&local_70);
    if ((longlong ****)local_68 != (longlong ****)0x0) {
      (*(code *)(*local_68)[2])();
    }
  }
  else {
    lVar6 = FUN_14123c702();
    if ((((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) || (plVar2 == (longlong *)0x0))
       || (lVar4 == 0)) goto LAB_148b138d7;
    plVar1 = (longlong *)(param_1 + 0x28);
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(plVar1);
    local_50 = plVar2[4];
    local_58 = &local_80;
    local_80 = (longlong **)0x0;
    local_68 = (longlong ***)&local_58;
    local_70 = L"譈䰂䆋䰈쀹౵劋䠈ঋ襈褁ࡑ㥌࿀삕쳃쀱襈뢂";
    (**(code **)*puVar7)(puVar7,*(undefined8 *)(param_1 + 0x10));
    if ((longlong ***)local_80 == (longlong ***)0x0) {
      local_70 = L"Bad FieldId";
      local_68._0_4_ = 0xb;
      ppplVar11 = (longlong ***)local_74;
      FUN_1446e940c(ppplVar11,&local_70);
      local_70 = L"MVVMViewModelBase";
      local_68 = (longlong ***)CONCAT44(local_68._4_4_,0x11);
      puVar10 = local_84;
      FUN_1446e940c(puVar10,&local_70);
      pwVar9 = L"Failed to find the FieldId that correspond to the set value.";
      goto LAB_148b1392c;
    }
    uVar8 = 0;
    cVar5 = (**(code **)(*plVar2 + 200))(plVar2,uVar3,_Src,0);
    if (cVar5 != '\0') goto LAB_148b1399b;
    cVar5 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (cVar5 == '\0') {
      _Dst = (void *)(param_1 + *(int *)((longlong)plVar2 + 0x44));
      if (_Dst != _Src) {
        if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
          (**(code **)(*plVar2 + 0x100))(plVar2,_Dst,_Src,(int)plVar2[6]);
        }
        else {
          memcpy(_Dst,_Src,(longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_1,_Src);
    }
    local_88 = local_78;
    local_90 = local_80;
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  uVar8 = 1;
LAB_148b1399b:
  *param_3 = uVar8;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13b8c FUN_148b13b8c body=144 status=ok
// SIG undefined FUN_148b13b8c(void)

undefined8
FUN_148b13b8c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_4;
  local_48 = &local_28;
  *param_4 = 0;
  local_20 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_30 = *(undefined4 *)(param_3 + 1);
  local_38 = *param_3;
  FUN_148b13c1e(param_1 + 8,param_2,param_1 + -0x28);
  FUN_1449db362(param_4);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13c1e FUN_148b13c1e body=277 status=ok
// SIG undefined FUN_148b13c1e(void)

longlong *
FUN_148b13c1e(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  if (*param_4 != 0) {
    local_50 = *param_5;
    local_68 = &local_50;
    *param_5 = 0;
    local_48 = *(undefined4 *)(param_5 + 1);
    *(undefined4 *)(param_5 + 1) = 0;
    local_58 = (undefined4)param_4[1];
    local_60 = *param_4;
    FUN_147023f3a(param_1,&local_40);
    *param_2 = local_40;
    if (local_40 != 0) {
      lVar5 = param_1 + 0x18;
      iVar3 = (int)param_4[1];
      iVar4 = (iVar3 - *(int *)(param_1 + 0x30)) + 1;
      if (0 < iVar4) {
        uVar2 = FUN_144a54ea4(lVar5,iVar4);
        FUN_1447c6044(lVar5,uVar2,iVar4,0);
        iVar3 = (int)param_4[1];
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x28);
      }
      iVar4 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
    }
  }
  FUN_1449db362(param_5);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13d34 FUN_148b13d34 body=205 status=ok
// SIG undefined FUN_148b13d34(void)

void FUN_148b13d34(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 != 0) {
    local_40 = *param_3;
    local_38 = (undefined4)param_3[1];
    local_48 = param_4;
    FUN_1470241e0(param_1,&local_30,param_2,&local_40);
    if (local_30 != 0) {
      lVar4 = param_1 + 0x18;
      iVar3 = (int)param_3[1];
      iVar5 = (iVar3 - *(int *)(param_1 + 0x30)) + 1;
      if (0 < iVar5) {
        uVar2 = FUN_144a54ea4(lVar4,iVar5);
        FUN_1447c6044(lVar4,uVar2,iVar5,0);
        iVar3 = (int)param_3[1];
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x28);
      }
      iVar5 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13e02 FUN_148b13e02 body=83 status=ok
// SIG undefined FUN_148b13e02(void)

void FUN_148b13e02(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_148b13e56(param_1 + 8,param_1 + -0x28,&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13e56 FUN_148b13e56 body=240 status=ok
// SIG undefined FUN_148b13e56(void)

undefined1 FUN_148b13e56(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_38;
  undefined4 local_30;
  undefined1 local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_4 != 0 && *param_3 != 0) && (uVar4 = *(uint *)(param_3 + 1), -1 < (int)uVar4)) &&
     ((int)uVar4 < *(int *)(param_1 + 0x30))) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar2 = param_1 + 0x18;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
      local_38 = *param_3;
      local_30 = (undefined4)param_3[1];
      local_48 = param_4;
      FUN_14702455a(param_1,&local_2a,param_2,&local_38);
      iVar1 = (int)param_3[1];
      uVar4 = 1 << ((byte)iVar1 & 0x1f);
      lVar2 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x28);
      }
      iVar5 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar5 = iVar1;
      }
      lVar3 = (longlong)(iVar5 >> 5);
      if (local_29 == '\x01') {
        uVar4 = uVar4 | *(uint *)(lVar2 + lVar3 * 4);
      }
      else {
        uVar4 = ~uVar4 & *(uint *)(lVar2 + lVar3 * 4);
      }
      *(uint *)(lVar2 + lVar3 * 4) = uVar4;
      goto LAB_148b13f1a;
    }
  }
  local_2a = 0;
LAB_148b13f1a:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_2a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b13f48 FUN_148b13f48 body=221 status=ok
// SIG undefined FUN_148b13f48(void)

void FUN_148b13f48(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38;
  undefined4 local_30;
  undefined1 local_2a;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*param_3 != 0) && (uVar2 = *(uint *)(param_3 + 1), -1 < (int)uVar2)) &&
     ((int)uVar2 < *(int *)(param_1 + 0x30))) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar3 = param_1 + 0x18;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
      local_38 = *param_3;
      local_30 = (undefined4)param_3[1];
      local_48 = param_4;
      FUN_147024712(param_1,&local_2a,param_2,&local_38);
      iVar1 = (int)param_3[1];
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      lVar3 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x28) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
      iVar5 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar5 = iVar1;
      }
      lVar4 = (longlong)(iVar5 >> 5);
      if (local_29 == '\x01') {
        uVar2 = uVar2 | *(uint *)(lVar3 + lVar4 * 4);
      }
      else {
        uVar2 = ~uVar2 & *(uint *)(lVar3 + lVar4 * 4);
      }
      *(uint *)(lVar3 + lVar4 * 4) = uVar2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b14036 FUN_148b14036 body=122 status=ok
// SIG undefined FUN_148b14036(void)

undefined4 FUN_148b14036(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == 0) {
    local_40[0] = 0;
  }
  else {
    FUN_1470248d0(param_1,local_40,param_2,param_3);
    if ((undefined1 *)(param_1 + 0x18) != local_38) {
      FUN_144a69486((undefined1 *)(param_1 + 0x18));
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_40[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b140b2 FUN_148b140b2 body=83 status=ok
// SIG undefined FUN_148b140b2(void)

void FUN_148b140b2(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_148b14106(param_1 + 8,param_1 + -0x28,&local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b14106 FUN_148b14106 body=156 status=ok
// SIG undefined FUN_148b14106(void)

undefined4 FUN_148b14106(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = 0;
  if ((param_4 != 0) && (uVar1 = 0, *param_3 != 0)) {
    local_50 = *param_3;
    local_48 = (undefined4)param_3[1];
    local_58 = param_4;
    FUN_147024ada(param_1,local_40,param_2,&local_50);
    if ((undefined1 *)(param_1 + 0x18) != local_38) {
      FUN_144a69486((undefined1 *)(param_1 + 0x18));
    }
    uVar1 = local_40[0];
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b141ac FUN_148b141ac body=123 status=ok
// SIG undefined FUN_148b141ac(void)

void FUN_148b141ac(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_14043ab18();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = *param_3;
      local_20 = param_3[1];
      FUN_14797ef84(param_2,&local_28,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b14228 FUN_148b14228 body=80 status=ok
// SIG undefined FUN_148b14228(void)

void FUN_148b14228(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_148b1427a(param_1 + 8,param_1 + -0x28);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1427a FUN_148b1427a body=124 status=ok
// SIG undefined FUN_148b1427a(void)

void FUN_148b1427a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*param_3 != 0) && (uVar1 = *(uint *)(param_3 + 1), -1 < (int)uVar1)) &&
     ((int)uVar1 < *(int *)(param_1 + 0x30))) {
    lVar2 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    if ((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      local_10 = (undefined4)param_3[1];
      local_18 = *param_3;
      FUN_147024d16(param_1,param_2,&local_18);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b142fe FUN_148b142fe body=326 status=ok
// SIG undefined FUN_148b142fe(void)

void FUN_148b142fe(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  lVar2 = local_58;
  uVar1 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_58);
  }
  uVar3 = uStack_50;
  local_40 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_38 = uVar3;
  uVar4 = FUN_148b1495c(param_1 + 0x28,&local_40,uVar1);
  *param_3 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b14446 FUN_148b14446 body=181 status=ok
// SIG undefined FUN_148b14446(void)

void FUN_148b14446(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b14880(param_1 + 0x28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b144fc FUN_148b144fc body=244 status=ok
// SIG undefined FUN_148b144fc(void)

void FUN_148b144fc(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  lVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_48);
  }
  uVar2 = uStack_40;
  local_38 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_30 = uVar2;
  uVar2 = FUN_148b14798(param_1 + 0x28);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b145f2 FUN_148b145f2 body=167 status=ok
// SIG undefined FUN_148b145f2(void)

void FUN_148b145f2(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b14cf0(param_1 + 0x28,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b146a0 FUN_148b146a0 body=243 status=ok
// SIG undefined FUN_148b146a0(void)

void FUN_148b146a0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  lVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_48);
  }
  uVar2 = uStack_40;
  local_38 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_30 = uVar2;
  uVar3 = FUN_148b14b90(param_1 + 0x28);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b14798 FUN_148b14798 body=230 status=ok
// SIG undefined FUN_148b14798(void)

longlong FUN_148b14798(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = param_2[1];
  if ((longlong)*(int *)(param_1 + 1) == 0) {
LAB_148b1487b:
    lVar2 = 0;
  }
  else {
    plVar3 = (longlong *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) * 0x18;
    lVar2 = 0;
    do {
      local_40 = *plVar3;
      if ((local_40 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_38 = plVar3[1];
      cVar1 = FUN_148b14e34(&local_40,&local_50);
      if (cVar1 != '\0') {
        if (plVar3 == (longlong *)0x0) goto LAB_148b1487b;
        lVar2 = plVar3[2];
        break;
      }
      plVar3 = plVar3 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b14880 FUN_148b14880 body=218 status=ok
// SIG undefined FUN_148b14880(void)

longlong FUN_148b14880(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((longlong)*(int *)(param_1 + 1) == 0) {
LAB_148b14957:
    lVar2 = 0;
  }
  else {
    plVar3 = (longlong *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) * 0x18;
    lVar2 = 0;
    do {
      local_40 = *plVar3;
      if ((local_40 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_38 = plVar3[1];
      cVar1 = FUN_148b14ebe(&local_40,&local_48);
      if (cVar1 != '\0') {
        if (plVar3 == (longlong *)0x0) goto LAB_148b14957;
        lVar2 = plVar3[2];
        break;
      }
      plVar3 = plVar3 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1495c FUN_148b1495c body=442 status=ok
// SIG undefined FUN_148b1495c(void)

undefined8 FUN_148b1495c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = *param_2;
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_48 = param_2[1];
  if ((longlong)(int)param_1[1] != 0) {
    plVar5 = (longlong *)*param_1;
    lVar6 = (longlong)(int)param_1[1] * 0x18;
    do {
      local_68 = *plVar5;
      if ((local_68 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_60 = plVar5[1];
      cVar2 = FUN_148b14e34(&local_68,&local_50);
      if (cVar2 != '\0') {
        if (plVar5 != (longlong *)0x0) goto LAB_148b14a12;
        break;
      }
      plVar5 = plVar5 + 3;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  local_78 = *param_2;
  if ((local_78 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_70 = param_2[1];
  FUN_148b14b18(&local_68,&local_78,param_3);
  lVar6 = local_68;
  if ((((local_60 == 0) || (local_68 == 0)) || (lVar3 = FUN_14123c702(), lVar3 == 0)) ||
     (*(int *)(lVar6 + 0x38) < *(int *)(lVar3 + 0x38))) {
LAB_148b14a12:
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) && (local_68 != 0)) && (local_58 != 0)) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_148b1ef94(param_1,iVar1);
      }
      FUN_148b1cdfa((longlong)iVar1 * 0x18 + *param_1,&local_68);
      FUN_1447f69b6(param_1 + 2);
      uVar4 = 1;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 148b14b18 FUN_148b14b18 body=119 status=ok
// SIG undefined FUN_148b14b18(void)

longlong * FUN_148b14b18(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  param_1[1] = param_2[1];
  param_1[2] = param_3;
  if ((param_3 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(param_3);
    param_3 = param_1[2];
  }
  cVar3 = FUN_148b14fc6(param_1,param_3);
  if (cVar3 == '\0') {
    param_1[2] = 0;
  }
  return param_1;
}



// FUNCTION 148b14b90 FUN_148b14b90 body=351 status=ok
// SIG undefined FUN_148b14b90(void)

undefined8 FUN_148b14b90(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  if ((local_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_58 = param_2[1];
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar10 = 0;
    do {
      local_50 = *(longlong *)(lVar2 + lVar10);
      if ((local_50 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      lVar1 = lVar2 + lVar10;
      local_48 = *(undefined8 *)(lVar1 + 8);
      cVar4 = FUN_148b14e34(&local_50,&local_60);
      if (cVar4 != '\0') {
        uVar7 = (int)(lVar10 >> 3) * -0x55555555;
        if (uVar7 != 0xffffffff) {
          iVar5 = (int)param_1[1];
          iVar8 = ~uVar7 + iVar5;
          if (iVar8 != 0) {
            iVar9 = 1;
            if (iVar8 < 1) {
              iVar9 = iVar8;
            }
            memmove((void *)(*param_1 + (longlong)(int)uVar7 * 0x18),
                    (void *)(*param_1 + (longlong)(iVar5 - iVar9) * 0x18),(longlong)iVar9 * 0x18);
            iVar5 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar5 + -1;
          FUN_148b1f028(param_1);
          FUN_1447f69b6(param_1 + 2);
          uVar6 = 1;
          goto LAB_148b14c43;
        }
        break;
      }
      lVar10 = lVar10 + 0x18;
    } while (lVar1 + 0x18 != lVar2 + (longlong)(int)lVar3 * 0x18);
  }
  uVar6 = 0;
LAB_148b14c43:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b14cf0 FUN_148b14cf0 body=247 status=ok
// SIG undefined FUN_148b14cf0(void)

int FUN_148b14cf0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar1;
  if (lVar5 != 0) {
    lVar2 = *param_1;
    uVar4 = 0;
    bVar13 = *(longlong *)(lVar2 + 0x10) == param_2;
    uVar10 = 0;
    do {
      uVar8 = (ulonglong)uVar10;
      uVar6 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      plVar7 = (longlong *)(lVar2 + 0x28 + uVar8 * 0x18);
      uVar11 = uVar10;
      uVar9 = uVar8;
      do {
        uVar9 = uVar9 + 1;
        uVar12 = uVar6;
        if (lVar5 <= (longlong)uVar9) break;
        lVar3 = *plVar7;
        uVar11 = uVar11 + 1;
        plVar7 = plVar7 + 3;
        uVar12 = uVar11;
      } while (bVar13 == (lVar3 == param_2));
      if (bVar13 == false) {
        if (uVar4 != uVar10) {
          memmove((void *)(lVar2 + (longlong)(int)uVar4 * 0x18),(void *)(lVar2 + uVar8 * 0x18),
                  (longlong)(int)(uVar12 - uVar10) * 0x18);
        }
        uVar4 = uVar4 + (uVar12 - uVar10);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      uVar10 = uVar12;
    } while ((longlong)uVar9 < lVar5);
    *(uint *)(param_1 + 1) = uVar4;
    if (uVar1 - uVar4 != 0) {
      FUN_1447f69b6(param_1 + 2);
      return uVar1 - uVar4;
    }
  }
  return 0;
}



// FUNCTION 148b14de8 FUN_148b14de8 body=75 status=ok
// SIG undefined FUN_148b14de8(void)

undefined8 FUN_148b14de8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_1[1] != 0) && (lVar1 = *param_1, lVar1 != 0)) &&
      (lVar2 = FUN_14123c702(), lVar2 != 0)) &&
     ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)))) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*param_1 != 0);
  }
  return 0;
}



// FUNCTION 148b14e34 FUN_148b14e34 body=137 status=ok
// SIG undefined FUN_148b14e34(void)

undefined8 FUN_148b14e34(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2[1] == param_1[1]) {
    lVar3 = *param_1;
    if ((((lVar3 == 0) || (lVar1 = FUN_14123c702(), lVar1 == 0)) ||
        (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *param_1;
    }
    lVar1 = *param_2;
    if (((lVar1 == 0) || (lVar2 = FUN_14123c702(), lVar2 == 0)) ||
       ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar1 = 0;
    }
    else {
      lVar1 = *param_2;
    }
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar3 == lVar1);
  }
  return 0;
}



// FUNCTION 148b14ebe FUN_148b14ebe body=264 status=ok
// SIG undefined FUN_148b14ebe(void)

undefined8 FUN_148b14ebe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (((lVar4 != 0) && (lVar2 = FUN_14123c702(), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) {
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30) {
      return 0;
    }
    if (*param_2 == 0) {
      return 0;
    }
    lVar4 = *param_1;
    if (((lVar4 != 0) && (lVar2 = FUN_14123c702(), lVar2 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38) &&
        ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30 && (lVar4 = *param_1, lVar4 != 0)))))) {
      lVar2 = FUN_14123c702();
      if ((lVar2 == 0) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) {
        lVar4 = 0;
      }
      else {
        lVar4 = *param_1;
      }
      lVar2 = *param_2;
      if ((((lVar2 != 0) && (lVar3 = FUN_14123c702(), lVar3 != 0)) &&
          (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         ((lVar1 = *param_2,
          lVar1 != 0 &&
          *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30 && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar4 + 0x38))))) {
        return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                        *(longlong *)
                         (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                        lVar1 + 0x30);
      }
    }
  }
  return 0;
}



// FUNCTION 148b14fc6 FUN_148b14fc6 body=154 status=ok
// SIG undefined FUN_148b14fc6(void)

undefined8 FUN_148b14fc6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if ((((lVar1 != 0) && (lVar2 = FUN_14123c702(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar1 = *param_1, param_2 != 0 && lVar1 != 0)))) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar3 = FUN_14123c702();
    if ((((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) && (lVar1 = *param_1, lVar1 != 0)) &&
       (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                      lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 148b15064 FUN_148b15064 body=624 status=ok
// SIG undefined FUN_148b15064(void)

void FUN_148b15064(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 **local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400012c4();
  plVar5 = (longlong *)(param_1 + 0x3b0);
  iVar3 = *(int *)(param_1 + 0x3b8);
  if (0 < iVar3) {
    lVar9 = 0;
    bVar4 = false;
    do {
      uVar6 = (uint)lVar9;
      lVar9 = (longlong)(int)uVar6;
      lVar8 = *plVar5 + lVar9 * 8;
      lVar11 = 0;
      while (*(longlong *)(lVar8 + lVar11 * 8) != 0) {
        lVar1 = lVar9 + lVar11;
        lVar11 = lVar11 + 1;
        if ((longlong)iVar3 <= lVar1 + 1) {
          if (!bVar4) goto LAB_148b15134;
          goto LAB_148b15126;
        }
      }
      iVar10 = (int)lVar11;
      if (~uVar6 + iVar3 != iVar10) {
        iVar7 = (~uVar6 + iVar3) - iVar10;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        memmove((void *)(lVar8 + lVar11 * 8),(void *)(*plVar5 + (longlong)(iVar3 - iVar7) * 8),
                (longlong)iVar7 << 3);
        iVar3 = *(int *)(param_1 + 0x3b8);
      }
      lVar9 = lVar9 + lVar11;
      iVar3 = iVar3 + -1;
      *(int *)(param_1 + 0x3b8) = iVar3;
      bVar4 = true;
    } while ((int)(uVar6 + iVar10) < iVar3);
LAB_148b15126:
    FUN_148b1f0d6(plVar5);
    iVar3 = *(int *)(param_1 + 0x3b8);
  }
LAB_148b15134:
  if (iVar3 != 0) {
    lVar9 = *plVar5;
    lVar8 = 0;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar9 + lVar8) + 0x18);
      iVar10 = *(int *)(param_1 + 0x1f8);
      *(uint *)(param_1 + 0x1f8) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0x1fc) < iVar10 + 1U) {
        FUN_14069ca4a((longlong *)(param_1 + 0x1f0),iVar10);
      }
      lVar11 = *(longlong *)(param_1 + 0x1f0);
      *(undefined8 *)(lVar11 + (longlong)iVar10 * 0x10) = uVar2;
      *(code **)(lVar11 + 8 + (longlong)iVar10 * 0x10) = FUN_148b152d6;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  FUN_148b1f172(param_1 + 0x3c0);
  if (param_1 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = *(longlong *)(param_1 + 0x50);
  }
  local_68 = 0xffffffff;
  local_64 = 0x100;
  local_62 = 0;
  local_78 = param_1;
  FUN_144a2daf0(&local_78);
  if (local_70 != 0) {
    do {
      if ((*(longlong *)(local_70 + 0x68) != 0) && ((longlong)*(int *)(param_1 + 0x3b8) != 0)) {
        plVar5 = *(longlong **)(param_1 + 0x3b0);
        lVar9 = (longlong)*(int *)(param_1 + 0x3b8) << 3;
        do {
          if (*(longlong *)(*plVar5 + 0x18) == *(longlong *)(local_70 + 0x68)) {
            if (plVar5 != (longlong *)0x0) {
              local_80 = local_70;
              local_88 = (undefined8 **)0x0;
              if (*plVar5 != 0) {
                local_60 = (undefined8 **)0x0;
                FUN_14485c47a(&local_60);
                local_88 = local_60;
              }
              local_60 = &local_88;
              local_58 = &local_80;
              FUN_148b1f4b6(param_1 + 0x3c0,local_4c,&local_60);
            }
            break;
          }
          plVar5 = plVar5 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      local_70 = *(longlong *)(local_70 + 0x18);
      FUN_144a2daf0(&local_78);
    } while (local_70 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b152d6 FUN_148b152d6 body=339 status=ok
// SIG undefined FUN_148b152d6(void)

void FUN_148b152d6(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = FUN_1458f046a();
    cVar4 = FUN_144a7ff9e(uVar2,uVar6);
    if ((cVar4 != '\0') && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)) {
      lVar7 = FUN_145b85344();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        if (*(longlong *)(param_2 + 0x90) == 0) {
          iVar9 = 0;
          iVar10 = 0;
        }
        else {
          local_38 = 0;
          FUN_14485c47a(&local_38);
          iVar10 = (int)local_38;
          iVar9 = local_38._4_4_;
        }
        uVar5 = FUN_144a78877(iVar10,iVar9);
        if (*(int *)(lVar3 + 0x3c8) != *(int *)(lVar3 + 0x3f4)) {
          lVar7 = lVar3 + 0x3f8;
          if (*(longlong *)(lVar3 + 0x400) != 0) {
            lVar7 = *(longlong *)(lVar3 + 0x400);
          }
          iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar3 + 0x408) - 1U & uVar5) * 4);
          if (iVar8 != -1) {
            do {
              piVar1 = (int *)(*(longlong *)(lVar3 + 0x3c0) + (longlong)iVar8 * 0x18);
              if ((*piVar1 == iVar10) &&
                 (*(int *)(*(longlong *)(lVar3 + 0x3c0) + 4 + (longlong)iVar8 * 0x18) == iVar9)) {
                if (piVar1 != (int *)&DAT_fffffffffffffff8 && piVar1 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
                }
                break;
              }
              iVar8 = piVar1[4];
            } while (iVar8 != -1);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b15444 FUN_148b15444 body=237 status=ok
// SIG undefined FUN_148b15444(void)

void FUN_148b15444(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      plVar2 = (longlong *)0x0;
      goto LAB_148b1548e;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  uVar1 = FUN_1458f046a();
  plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
LAB_148b1548e:
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 0x20);
  }
  local_40 = &local_50;
  local_50 = 0;
  local_28 = &local_40;
  local_30 = &LAB_147764a16;
  (**(code **)*puVar3)(puVar3,*(undefined8 *)(param_1 + 0x10));
  if (local_50 != 0) {
    local_58 = local_48;
    local_60 = local_50;
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b15546 FUN_148b15546 body=88 status=ok
// SIG undefined FUN_148b15546(void)

void FUN_148b15546(longlong param_1)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x40), 0 < (longlong)iVar1)) {
    lVar4 = *(longlong *)(lVar4 + 0x38);
    uVar3 = 0;
    do {
      cVar2 = FUN_148b1a32a(lVar4);
      if (cVar2 == '\x02') {
        FUN_148b192f4(param_1,lVar4,uVar3 & 0xffffffff);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 != uVar3);
  }
  return;
}



// FUNCTION 148b1559e FUN_148b1559e body=127 status=ok
// SIG undefined FUN_148b1559e(void)

void FUN_148b1559e(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a();
  iVar1 = *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_148b20b60((longlong *)(param_1 + 0x88),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 8) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1561e FUN_148b1561e body=186 status=ok
// SIG undefined FUN_148b1561e(void)

void FUN_148b1561e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar7 = (longlong)(int)param_1[1] << 3;
    iVar4 = 1;
    lVar6 = 0;
    do {
      cVar1 = FUN_148b20be6(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar4 == 0) {
          return;
        }
        iVar2 = (int)param_1[1];
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(*param_1 + (lVar6 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_148b20c1c(param_1);
        return;
      }
      lVar3 = lVar3 + 8;
      lVar6 = lVar6 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 148b15770 FUN_148b15770 body=112 status=ok
// SIG undefined FUN_148b15770(void)

void FUN_148b15770(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if (param_2 != 0) {
    local_20 = 0;
    FUN_14485c47a(&local_20);
    local_28 = local_20;
  }
  FUN_148b20e58(param_1 + 0x38,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b157e2 FUN_148b157e2 body=478 status=ok
// SIG undefined FUN_148b157e2(void)

void FUN_148b157e2(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    iVar7 = 0;
    iVar8 = 0;
  }
  else {
    local_50 = 0;
    FUN_14485c47a(&local_50,param_2);
    iVar8 = (int)local_50;
    iVar7 = local_50._4_4_;
  }
  uVar3 = FUN_144a78877(iVar8,iVar7);
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar10 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x78);
    }
    iVar5 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x38);
      do {
        lVar6 = (longlong)iVar5 * 0x40;
        lVar1 = lVar10 + lVar6;
        if ((*(int *)(lVar10 + lVar6) == iVar8) && (*(int *)(lVar10 + 4 + lVar6) == iVar7)) {
          lVar10 = lVar1 + 8;
          if (lVar10 != 0 && lVar1 != 0) {
            iVar8 = *(int *)(lVar1 + 0x30);
            if (0 < (longlong)iVar8) {
              lVar6 = *(longlong *)(param_2 + 0x28);
              iVar7 = -iVar8;
              uVar9 = (longlong)iVar8;
              do {
                lVar4 = *(longlong *)(lVar1 + 0x28);
                if (*(longlong *)(lVar1 + 0x28) == 0) {
                  lVar4 = lVar10;
                }
                if ((*(ulonglong *)
                      (*(longlong *)(lVar6 + 0x38) + 0x10 +
                      (longlong)*(int *)(lVar4 + -4 + uVar9 * 4) * 0x18) & 1L << (param_3 & 0x3f))
                    != 0) {
                  uVar3 = *(uint *)(lVar1 + 0x30);
                  if (uVar9 != uVar3) {
                    iVar8 = uVar3 + iVar7;
                    if (0 < iVar8) {
                      iVar8 = 1;
                    }
                    memmove((void *)(lVar4 + uVar9 * 4 + -4),
                            (void *)(lVar4 + (longlong)(int)(uVar3 - iVar8) * 4),
                            (longlong)iVar8 << 2);
                    uVar3 = *(uint *)(lVar1 + 0x30);
                  }
                  *(uint *)(lVar1 + 0x30) = uVar3 - 1;
                  FUN_148b20a32(lVar10);
                }
                iVar7 = iVar7 + 1;
                bVar2 = 1 < uVar9;
                uVar9 = uVar9 - 1;
              } while (bVar2);
              iVar8 = *(int *)(lVar1 + 0x30);
            }
            if (iVar8 == 0) {
              local_58 = 0;
              if (param_2 != 0) {
                local_50 = 0;
                FUN_14485c47a(&local_50,param_2);
                local_58 = local_50;
              }
              FUN_148b20e58((longlong *)(param_1 + 0x38),&local_58);
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x38);
      } while (iVar5 != -1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b15a34 FUN_148b15a34 body=161 status=ok
// SIG undefined FUN_148b15a34(void)

void FUN_148b15a34(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b15ad6(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b15ad6 FUN_148b15ad6 body=728 status=ok
// SIG undefined FUN_148b15ad6(void)

undefined8 FUN_148b15ad6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    uVar5 = *(ulonglong *)(*(longlong *)(lVar4 + 0x38) + 0x10 + (longlong)param_2 * 0x18);
    uVar6 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar4 + 0x38) >> 8),1);
    if ((uVar5 & ~*(ulonglong *)(param_1 + 0x60)) == 0) goto LAB_148b15b33;
    if ((uVar5 & ~*(ulonglong *)(param_1 + 0x60) & ~*(ulonglong *)(lVar4 + 0xd8)) != 0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar6 = 0;
      }
      FUN_14276766e(local_b8,&DAT_14cb9b118);
      local_88 = 0;
      FUN_14485c47a(&local_88,uVar6);
      local_f8 = 0;
      plStack_f0 = (longlong *)0x0;
      FUN_1413a454c(local_e8,param_2,0);
      local_50 = L"ExecuteGraphBindingFailInvalidSource";
      local_48 = 0x24;
      FUN_1446e940c(local_11c,&local_50);
      local_50 = L"MVVMView";
      local_48 = 8;
      FUN_1446e940c(local_120,&local_50);
      FUN_140208bae(local_118,local_120,local_11c,
                    L"The binding \'{0}\' was not executed. There are invalid sources.");
      FUN_14023409e(&local_108,local_118,1);
      local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
      FUN_14023423e(local_40,local_e8);
      local_68 = &local_30;
      local_70 = &local_50;
      FUN_14010d304(&local_60);
      local_80 = local_108;
      local_78 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_d8,&local_80,&local_60);
      FUN_14007f2db(local_60,local_58);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_40[0] != (longlong *)0x0) {
        (**(code **)(*local_40[0] + 0x10))();
      }
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_100 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar2 = (int *)((longlong)local_100 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_100 + 0x10))(local_100);
          }
        }
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      FUN_148b121ee(local_b8,local_c8,4,local_d8);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
      plVar1 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_f0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_1427678c0(local_b8);
    }
  }
  uVar6 = 0;
LAB_148b15b33:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b15db6 FUN_148b15db6 body=161 status=ok
// SIG undefined FUN_148b15db6(void)

void FUN_148b15db6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b15e58(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b15e58 FUN_148b15e58 body=728 status=ok
// SIG undefined FUN_148b15e58(void)

undefined8 FUN_148b15e58(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    uVar5 = *(ulonglong *)(*(longlong *)(lVar4 + 0x58) + 0x10 + (longlong)param_2 * 0x18);
    uVar6 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar4 + 0x58) >> 8),1);
    if ((uVar5 & ~*(ulonglong *)(param_1 + 0x60)) == 0) goto LAB_148b15eb5;
    if ((uVar5 & ~*(ulonglong *)(param_1 + 0x60) & ~*(ulonglong *)(lVar4 + 0xd8)) != 0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar6 = 0;
      }
      FUN_14276766e(local_b8,&DAT_14cb9b118);
      local_88 = 0;
      FUN_14485c47a(&local_88,uVar6);
      local_f8 = 0;
      plStack_f0 = (longlong *)0x0;
      FUN_1413a454c(local_e8,param_2,0);
      local_50 = L"ExecuteEventFailInvalidSource";
      local_48 = 0x1d;
      FUN_1446e940c(local_11c,&local_50);
      local_50 = L"MVVMView";
      local_48 = 8;
      FUN_1446e940c(local_120,&local_50);
      FUN_140208bae(local_118,local_120,local_11c,
                    L"The event \'{0}\' was not executed. There are invalid sources.");
      FUN_14023409e(&local_108,local_118,1);
      local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
      FUN_14023423e(local_40,local_e8);
      local_68 = &local_30;
      local_70 = &local_50;
      FUN_14010d304(&local_60);
      local_80 = local_108;
      local_78 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_d8,&local_80,&local_60);
      FUN_14007f2db(local_60,local_58);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_40[0] != (longlong *)0x0) {
        (**(code **)(*local_40[0] + 0x10))();
      }
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_100 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar2 = (int *)((longlong)local_100 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_100 + 0x10))(local_100);
          }
        }
      }
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      FUN_148b121ee(local_b8,local_c8,1,local_d8);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
      plVar1 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_f0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      FUN_1427678c0(local_b8);
    }
  }
  uVar6 = 0;
LAB_148b15eb5:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b16138 FUN_148b16138 body=163 status=ok
// SIG undefined FUN_148b16138(void)

void FUN_148b16138(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b161dc(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b161dc FUN_148b161dc body=771 status=ok
// SIG undefined FUN_148b161dc(void)

undefined8 FUN_148b161dc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [16];
  undefined1 local_70 [48];
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar6 = 0;
    }
    FUN_14276766e(local_70,&DAT_14cb9b118);
    local_40 = 0;
    FUN_14485c47a(&local_40,uVar6);
    local_38 = L"SetViewModelInvalidName";
    local_30 = 0x17;
    FUN_1446e940c(local_84,&local_38);
    local_38 = L"MVVMView";
    local_30 = 8;
    FUN_1446e940c(local_88,&local_38);
    FUN_140208bae(&local_38,local_88,local_84,L"The viewmodel name is empty.");
    puVar7 = local_80;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (lVar3 == 0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar6 = 0;
      }
      FUN_14276766e(local_70,&DAT_14cb9b118);
      local_40 = 0;
      FUN_14485c47a(&local_40,uVar6);
      local_38 = L"SetViewModelInvalidClass";
      local_30 = 0x18;
      FUN_1446e940c(local_84,&local_38);
      local_38 = L"MVVMView";
      local_30 = 8;
      FUN_1446e940c(local_88,&local_38);
      FUN_140208bae(&local_38,local_88,local_84,L"The view is not constructed.");
      puVar7 = local_98;
    }
    else {
      if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
        uVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x24 + uVar5) == param_2) {
            if ((int)(uVar5 >> 3) * -0x3b13b13b != -1) {
              FUN_143fa9f6e();
              uVar6 = 1;
              goto LAB_148b16256;
            }
            break;
          }
          uVar5 = uVar5 + 0x68;
        } while ((longlong)*(int *)(lVar3 + 0x30) * 0x68 - uVar5 != 0);
      }
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar6 = 0;
      }
      FUN_14276766e(local_70,&DAT_14cb9b118);
      local_40 = 0;
      FUN_14485c47a(&local_40,uVar6);
      local_38 = L"SetViewModelViewModelNameNotFound";
      local_30 = 0x21;
      FUN_1446e940c(local_84,&local_38);
      local_38 = L"MVVMView";
      local_30 = 8;
      FUN_1446e940c(local_88,&local_38);
      FUN_140208bae(&local_38,local_88,local_84,L"The viewmodel name could not be found.");
      puVar7 = local_a8;
    }
  }
  FUN_148b121ee(local_70,puVar7,1,&local_38);
  plVar4 = *(longlong **)(puVar7 + 8);
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
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  FUN_1427678c0(local_70);
  uVar6 = 0;
LAB_148b16256:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b164e0 FUN_148b164e0 body=212 status=ok
// SIG undefined FUN_148b164e0(void)

void FUN_148b164e0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b1127a(param_1,&local_38,local_28);
  if (DAT_14c950c29 == '\x01') {
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_38;
  param_3[1] = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b165e2 FUN_148b165e2 body=167 status=ok
// SIG undefined FUN_148b165e2(void)

void FUN_148b165e2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x6d) == '\0') {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x60);
    FUN_148b1a4b2(param_1 + 0x40,iVar1);
    if (0 < (longlong)iVar1) {
      uVar6 = 0;
      do {
        FUN_148b1a4dc(param_1,lVar5,uVar6 & 0xffffffff);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while ((longlong)iVar1 != uVar6);
    }
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x80);
    if (0 < lVar5) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78);
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar7 * 8);
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar4 = 0;
        }
        (**(code **)(*plVar3 + 0x2b8))
                  (plVar3,uVar4,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
    }
    *(undefined1 *)(param_1 + 0x6d) = 1;
  }
  return;
}



// FUNCTION 148b166a6 FUN_148b166a6 body=278 status=ok
// SIG undefined FUN_148b166a6(void)

void FUN_148b166a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = uStack_30;
  uVar1 = FUN_148b103ea(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b167c4 FUN_148b167c4 body=202 status=ok
// SIG undefined FUN_148b167c4(void)

void FUN_148b167c4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_40 = uStack_30;
  uVar1 = FUN_148b16890(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b16890 FUN_148b16890 body=1545 status=ok
// SIG undefined FUN_148b16890(void)

undefined8 FUN_148b16890(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  wchar_t *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120 [2];
  longlong *local_110 [2];
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [48];
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*param_2 == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar9 = 0;
    }
    FUN_14276766e(local_d0,&DAT_14cb9b118);
    local_a0 = 0;
    FUN_14485c47a(&local_a0,uVar9);
    local_68 = L"SetViewModelInvalidObject";
    local_60 = 0x19;
    FUN_1446e940c(&local_78,&local_68);
    local_68 = L"MVVMView";
    local_60 = 8;
    FUN_1446e940c(&local_88,&local_68);
    FUN_140208bae(&local_68,&local_88,&local_78,L"The new viewmodel is null.");
    puVar12 = local_e0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 == 0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar9 = 0;
      }
      FUN_14276766e(local_d0,&DAT_14cb9b118);
      local_a0 = 0;
      FUN_14485c47a(&local_a0,uVar9);
      local_68 = L"SetViewModelInvalidGeneratedViewClass";
      local_60 = 0x25;
      FUN_1446e940c(&local_78,&local_68);
      local_68 = L"MVVMView";
      local_60 = 8;
      FUN_1446e940c(&local_88,&local_68);
      FUN_140208bae(&local_68,&local_88,&local_78,L"The view is not initialized.");
      puVar12 = local_f0;
    }
    else {
      iVar3 = *(int *)(lVar4 + 0x30);
      if ((longlong)iVar3 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x28);
        lVar13 = 0;
        iVar10 = -1;
        iVar11 = 0;
        local_178 = param_1;
        do {
          lVar5 = *(longlong *)(lVar4 + lVar13);
          if (lVar5 != 0) {
            lVar6 = *(longlong *)(*param_2 + 0x10);
            lVar8 = FUN_1446f8646();
            if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
                 == lVar8 + 0x30)) &&
               (((lVar5 = *(longlong *)(lVar4 + lVar13), lVar5 != 0 &&
                 (*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
                ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                  == lVar5 + 0x30 && (bVar14 = iVar10 != -1, iVar10 = iVar11, bVar14)))))) {
              if ((*(uint *)(local_178 + 8) & 0x10) == 0) {
                uVar9 = *(undefined8 *)(local_178 + 0x20);
              }
              else {
                uVar9 = 0;
              }
              FUN_14276766e(local_d0,&DAT_14cb9b118);
              local_a0 = 0;
              FUN_14485c47a(&local_a0,uVar9);
              local_128 = *(undefined8 *)(*(longlong *)(*param_2 + 0x10) + 0x18);
              FUN_145715fae(local_120);
              local_68 = L"SetViewModelViewModelNotUnique";
              local_60 = 0x1e;
              FUN_1446e940c(local_14c,&local_68);
              local_68 = L"MVVMView";
              local_60 = 8;
              FUN_1446e940c(local_150,&local_68);
              FUN_140208bae(local_148,local_150,local_14c,
                            L"More than one viewmodel match the type of the passed instance. Make sure there exists only one viewmodel of type {0} in the widget blueprint, or try SetViewModel by name."
                           );
              FUN_14023409e(&local_138,local_148,1);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(local_58,local_120);
              local_80 = &local_48;
              local_88 = &local_68;
              FUN_14010d304(&local_78);
              local_98 = local_138;
              local_90 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_110,&local_98,&local_78);
              FUN_14007f2db(local_78,local_70);
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              if (local_58[0] != (longlong *)0x0) {
                (**(code **)(*local_58[0] + 0x10))();
              }
              if (local_130 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_130 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_130)(local_130);
                  LOCK();
                  piVar2 = (int *)((longlong)local_130 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*local_130 + 0x10))(local_130);
                  }
                }
              }
              if (local_120[0] != (longlong *)0x0) {
                (**(code **)(*local_120[0] + 0x10))();
              }
              FUN_148b121ee(local_d0,local_100,1,local_110);
              if (local_f8 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_f8 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_f8)(local_f8);
                  LOCK();
                  piVar2 = (int *)((longlong)local_f8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*local_f8 + 0x10))(local_f8);
                  }
                }
              }
              if (local_110[0] != (longlong *)0x0) {
                (**(code **)(*local_110[0] + 0x10))();
              }
              goto LAB_148b16b01;
            }
          }
          lVar5 = local_178;
          iVar11 = iVar11 + 1;
          lVar13 = lVar13 + 0x68;
        } while ((longlong)iVar3 * 0x68 - lVar13 != 0);
        param_1 = local_178;
        if (iVar10 != -1) {
          local_170 = *param_2;
          if ((local_170 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          local_168 = param_2[1];
          uVar9 = FUN_143fa9582(lVar5,iVar10,&local_170,0);
          goto LAB_148b169b5;
        }
      }
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar9 = 0;
      }
      FUN_14276766e(local_d0,&DAT_14cb9b118);
      local_a0 = 0;
      FUN_14485c47a(&local_a0,uVar9);
      local_68 = L"SetViewModelViewModelNotFound";
      local_60 = 0x1d;
      FUN_1446e940c(&local_78,&local_68);
      local_68 = L"MVVMView";
      local_60 = 8;
      FUN_1446e940c(&local_88,&local_68);
      FUN_140208bae(&local_68,&local_88,&local_78,
                    L"A created viewmodel matching the class of the passed instance could not be found."
                   );
      puVar12 = local_160;
    }
  }
  FUN_148b121ee(local_d0,puVar12,1,&local_68);
  plVar7 = *(longlong **)(puVar12 + 8);
  local_148[0] = local_68;
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
      local_148[0] = local_68;
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        local_148[0] = local_68;
      }
    }
  }
LAB_148b16b01:
  if (local_148[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_148[0] + 0x10))();
  }
  FUN_1427678c0(local_d0);
  uVar9 = 0;
LAB_148b169b5:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 148b16ec6 FUN_148b16ec6 body=129 status=ok
// SIG undefined FUN_148b16ec6(void)

void FUN_148b16ec6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x6d) == '\x01') {
    *(undefined1 *)(param_1 + 0x6d) = 0;
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x80);
    if (0 < lVar5) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78);
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6 * 8);
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar3 = 0;
        }
        (**(code **)(*plVar2 + 0x2c0))
                  (plVar2,uVar3,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    if (0 < *(int *)(param_1 + 0x48)) {
      uVar4 = *(int *)(param_1 + 0x48) + 1;
      do {
        FUN_148b1a856(param_1,uVar4 - 2);
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
  }
  return;
}



// FUNCTION 148b16f84 FUN_148b16f84 body=103 status=ok
// SIG undefined FUN_148b16f84(void)

void FUN_148b16f84(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a87ae2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148b20ed8(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b16fec FUN_148b16fec body=93 status=ok
// SIG undefined FUN_148b16fec(void)

void FUN_148b16fec(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  iVar1 = *(int *)(param_2 + 0x30);
  FUN_148b1704a((longlong *)(param_1 + 0x30),iVar1);
  if (0 < (longlong)iVar1) {
    lVar2 = 8;
    lVar3 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x30) + lVar2) = (int)lVar3;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (iVar1 != lVar3);
  }
  return;
}



// FUNCTION 148b1704a FUN_148b1704a body=110 status=ok
// SIG undefined FUN_148b1704a(void)

void FUN_148b1704a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148b20f42(param_1,iVar1);
    }
    FUN_148b20f24((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148b20fd6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148b170ba FUN_148b170ba body=264 status=ok
// SIG undefined FUN_148b170ba(void)

void FUN_148b170ba(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  FUN_148b171c2(plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x80));
  lVar7 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(lVar7 + 0x80);
  if ((longlong)iVar2 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x78);
    lVar9 = 0;
    do {
      plVar4 = *(longlong **)(lVar7 + lVar9);
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar8 = 0;
      }
      lVar6 = (**(code **)(*plVar4 + 0x2a0))(plVar4,uVar8,param_1);
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      iVar3 = *(int *)(param_1 + 0x58);
      uVar5 = iVar3 + 1;
      *(uint *)(param_1 + 0x58) = uVar5;
      if (*(uint *)(param_1 + 0x5c) < uVar5) {
        FUN_148b210e4(plVar1);
      }
      *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar6;
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  if (*(char *)(lVar7 + 0xe4) != '\0') {
    FUN_143fa8d3a(param_1);
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  if (*(char *)(lVar7 + 0xe6) == '\x01') {
    FUN_148b165e2(param_1);
  }
  *(undefined1 *)(param_1 + 0x6a) = 1;
  return;
}



// FUNCTION 148b171c2 FUN_148b171c2 body=41 status=ok
// SIG undefined FUN_148b171c2(void)

void FUN_148b171c2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148b21084();
  return;
}



// FUNCTION 148b171ec FUN_148b171ec body=209 status=ok
// SIG undefined FUN_148b171ec(void)

void FUN_148b171ec(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  
  *(undefined1 *)(param_1 + 0x6a) = 0;
  FUN_148b16ec6();
  FUN_143fa906e(param_1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x80);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78);
    iVar8 = -iVar1;
    uVar7 = (longlong)iVar1;
    do {
      plVar3 = *(longlong **)(lVar2 + -8 + uVar7 * 8);
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar6 = 0;
      }
      (**(code **)(*plVar3 + 0x2d8))
                (plVar3,uVar6,param_1,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x50) + -8 + uVar7 * 8));
      uVar5 = *(uint *)(param_1 + 0x58);
      if (uVar7 != uVar5) {
        iVar1 = iVar8 + uVar5;
        if (0 < (int)(iVar8 + uVar5)) {
          iVar1 = 1;
        }
        memmove((void *)(*(longlong *)(param_1 + 0x50) + uVar7 * 8 + -8),
                (void *)(*(longlong *)(param_1 + 0x50) + (longlong)(int)(uVar5 - iVar1) * 8),
                (longlong)iVar1 << 3);
        uVar5 = *(uint *)(param_1 + 0x58);
      }
      *(uint *)(param_1 + 0x58) = uVar5 - 1;
      FUN_148b2116a(param_1 + 0x50);
      iVar8 = iVar8 + 1;
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar4);
  }
  return;
}



// FUNCTION 148b172be FUN_148b172be body=210 status=ok
// SIG undefined FUN_148b172be(void)

undefined8 FUN_148b172be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b55ad60;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_3);
  puVar1[4] = FUN_148b17392;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b17392 FUN_148b17392 body=307 status=ok
// SIG undefined FUN_148b17392(void)

void FUN_148b17392(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x30), 0 < lVar2)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x30);
      if (((*(char *)(lVar1 + 0x10 + lVar6) == '\x01') && (*(char *)(lVar1 + 0x12 + lVar6) == '\0'))
         && (lVar4 = (longlong)*(int *)(lVar1 + 8 + lVar6) * 0x68 +
                     *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28),
            (*(byte *)(lVar4 + 0x61) & 8) != 0)) {
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar3 = 0;
        }
        local_50 = 0;
        lVar4 = FUN_148b1aa96(uVar3,lVar4 + 0x10,&local_50);
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar4);
          }
          lVar5 = lVar4 + 0x28;
        }
        if (*(longlong *)(lVar1 + lVar6) != lVar4) {
          local_60 = lVar4;
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar4);
          }
          local_58 = lVar5;
          FUN_143fa9582(param_1,*(undefined4 *)(lVar1 + 8 + lVar6),&local_60,1);
        }
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar2 * 0x18 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b174c6 FUN_148b174c6 body=112 status=ok
// SIG undefined FUN_148b174c6(void)

void FUN_148b174c6(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30) + (longlong)param_2 * 0x18;
  if (*(char *)(lVar1 + 0x12) == '\0') {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)param_2 * 0x18) * 0x68
            + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar2 = 0;
    }
    uVar2 = FUN_148b17df4(lVar3,*(longlong *)(param_1 + 0x28),param_1,uVar2);
    FUN_148b18e66(param_1,uVar2,*(undefined4 *)(lVar1 + 8),lVar3,lVar1);
  }
  *(undefined1 *)(lVar1 + 0x10) = 1;
  return;
}



// FUNCTION 148b17536 FUN_148b17536 body=1820 status=ok
// SIG undefined FUN_148b17536(void)

void FUN_148b17536(longlong param_1,int param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  wchar_t **ppwVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_198 [40];
  longlong local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160 [2];
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138 [2];
  longlong *local_128 [2];
  undefined1 local_118 [8];
  longlong *local_110;
  undefined8 local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  wchar_t **local_d0;
  wchar_t ***local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68 [2];
  wchar_t **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 0x18);
  lVar15 = (longlong)(int)plVar2[1] * 0x68 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  if (*plVar2 == 0) {
    if ((*(byte *)(lVar15 + 0x60) & 8) == 0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar7 = 0;
      }
      FUN_14276766e(&local_b0,&DAT_14cb9b118);
      local_80 = 0;
      FUN_14485c47a(&local_80,uVar7);
      local_140 = *(undefined8 *)(lVar15 + 0x24);
      FUN_145715fae(local_138);
      local_78 = L"InitializeBindingFailInvalidSource";
      local_70 = 0x22;
      FUN_1446e940c(local_164,&local_78);
      local_78 = L"MVVMView";
      local_70 = 8;
      FUN_1446e940c(local_168,&local_78);
      FUN_140208bae(local_160,local_168,local_164,
                    L"The source \'{0}\' is invalid and could not initialize the bindings.");
      FUN_14023409e(&local_150,local_160,1);
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,4);
      FUN_14023423e(local_68,local_138);
      local_c8 = &local_58;
      local_d0 = &local_78;
      FUN_14010d304(&local_c0);
      local_e0 = local_150;
      local_d8 = local_148;
      if (local_148 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_148 + 1) = (int)local_148[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_128,&local_e0,&local_c0);
      FUN_14007f2db(local_c0,local_b8);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != (longlong *)0x0) {
        (**(code **)(*local_68[0] + 0x10))();
      }
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_148 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_148 + 0x10))(local_148);
          }
        }
      }
      if (local_138[0] != (longlong *)0x0) {
        (**(code **)(*local_138[0] + 0x10))();
      }
      FUN_148b121ee(&local_b0,local_118,1,local_128);
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_110 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_110 + 0x10))(local_110);
          }
        }
      }
      if (local_128[0] != (longlong *)0x0) {
        (**(code **)(*local_128[0] + 0x10))();
      }
      if (local_160[0] != (longlong *)0x0) {
        (**(code **)(*local_160[0] + 0x10))();
      }
      FUN_1427678c0(&local_b0);
    }
  }
  else {
    if ((0 < *(int *)(lVar15 + 0x38)) && (lVar14 = *(longlong *)(*plVar2 + 0x10), lVar14 != 0)) {
      uVar7 = FUN_1458f046a();
      cVar6 = FUN_144a7ff9e(lVar14,uVar7);
      if (cVar6 != '\0') {
        local_e8 = *plVar2;
        if ((local_e8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14797d7b6(&local_b0,&local_e8);
        if (((local_b0 != 0) && (local_a8 != (longlong *)0x0)) &&
           ((longlong)*(int *)(lVar15 + 0x38) != 0)) {
          lVar14 = *(longlong *)(lVar15 + 0x30);
          lVar13 = (longlong)*(int *)(lVar15 + 0x38) * 0xc;
          lVar11 = 0;
          local_170 = lVar13;
          do {
            if ((*(int *)(lVar14 + 8 + lVar11) != -1) && (*(longlong *)(lVar14 + lVar11) != 0)) {
              local_78 = (wchar_t *)0x0;
              local_70 = 0;
              FUN_1446efa72(&local_78,0,3,0x10);
              pwVar4 = local_78;
              local_70 = 3;
              *(undefined ***)local_78 = &PTR_LAB_14b55ae40;
              *(int *)(local_78 + 4) = param_2;
              uVar7 = FUN_144a3f946();
              *(undefined8 *)(pwVar4 + 8) = uVar7;
              *(undefined ***)pwVar4 = &PTR_FUN_14b55add0;
              pwVar4[0xc] = L'\0';
              pwVar4[0xd] = L'\0';
              pwVar4[0xe] = L'\0';
              pwVar4[0xf] = L'\0';
              FUN_14485c47a(pwVar4 + 0xc);
              *(code **)(pwVar4 + 0x10) = FUN_143fa9162;
              plVar8 = (longlong *)0x0;
              if (local_b0 != 0) {
                plVar8 = local_a8;
              }
              local_f8 = local_78;
              local_78 = (wchar_t *)0x0;
              local_f0 = local_70;
              local_70 = 0;
              local_100 = *(undefined4 *)(lVar14 + 8 + lVar11);
              local_108 = *(undefined8 *)(lVar14 + lVar11);
              (**(code **)(*plVar8 + 0x10))();
              *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
              FUN_1449db362(&local_78);
              lVar13 = local_170;
            }
            lVar11 = lVar11 + 0xc;
          } while (lVar13 != lVar11);
        }
      }
    }
    if (param_3 == '\0') {
      iVar3 = *(int *)(lVar15 + 0x48);
      if ((longlong)iVar3 != 0) {
        lVar14 = *(longlong *)(lVar15 + 0x40);
        lVar13 = 0;
        do {
          if ((*(byte *)(lVar14 + 0xc + lVar13) & 1) != 0) {
            FUN_148b192f4(param_1,(longlong)*(int *)(lVar14 + 8 + lVar13) * 0x18 +
                                  *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38));
          }
          lVar13 = lVar13 + 0x10;
        } while ((longlong)iVar3 * 0x10 != lVar13);
      }
      if ((longlong)*(int *)(lVar15 + 0x58) != 0) {
        lVar14 = *(longlong *)(lVar15 + 0x50);
        lVar13 = (longlong)*(int *)(lVar15 + 0x58) * 0xc;
        do {
          FUN_148b19aee(param_1,lVar14);
          lVar14 = lVar14 + 0xc;
          lVar13 = lVar13 + -0xc;
        } while (lVar13 != 0);
      }
    }
    else {
      local_90 = (longlong *)0x0;
      local_88 = 0x800000000;
      if ((longlong)*(int *)(lVar15 + 0x48) != 0) {
        lVar14 = *(longlong *)(lVar15 + 0x40);
        lVar13 = (longlong)*(int *)(lVar15 + 0x48) * 0x10 + lVar14;
        do {
          uVar5 = local_88;
          iVar3 = *(int *)(lVar14 + 8);
          plVar8 = local_90;
          if (local_90 == (longlong *)0x0) {
            plVar8 = &local_b0;
          }
          lVar11 = (longlong)(int)local_88;
          if (lVar11 != 0) {
            lVar12 = 0;
            do {
              if (*(int *)((longlong)plVar8 + lVar12) == iVar3) goto LAB_148b17686;
              lVar12 = lVar12 + 4;
            } while (lVar11 * 4 - lVar12 != 0);
          }
          uVar10 = (int)local_88 + 1;
          local_88 = CONCAT44(local_88._4_4_,uVar10);
          if (local_88._4_4_ < uVar10) {
            FUN_148b2093e(&local_b0,uVar5 & 0xffffffff);
          }
          plVar8 = local_90;
          if (local_90 == (longlong *)0x0) {
            plVar8 = &local_b0;
          }
          *(int *)((longlong)plVar8 + lVar11 * 4) = iVar3;
          FUN_148b192f4(param_1,(longlong)*(int *)(lVar14 + 8) * 0x18 +
                                *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38));
LAB_148b17686:
          lVar14 = lVar14 + 0x10;
        } while (lVar14 != lVar13);
      }
      local_58 = (wchar_t **)0x0;
      local_50 = 0x800000000;
      if ((longlong)*(int *)(lVar15 + 0x58) != 0) {
        lVar13 = *(longlong *)(lVar15 + 0x50);
        lVar14 = lVar13 + (longlong)*(int *)(lVar15 + 0x58) * 0xc;
        do {
          uVar5 = local_50;
          iVar3 = *(int *)(lVar13 + 8);
          ppwVar9 = local_58;
          if (local_58 == (wchar_t **)0x0) {
            ppwVar9 = &local_78;
          }
          lVar11 = (longlong)(int)local_50;
          if (lVar11 != 0) {
            lVar12 = 0;
            do {
              if (*(int *)((longlong)ppwVar9 + lVar12) == iVar3) goto LAB_148b1774c;
              lVar12 = lVar12 + 4;
            } while (lVar11 * 4 - lVar12 != 0);
          }
          uVar10 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar10);
          if (local_50._4_4_ < uVar10) {
            FUN_148b217bc(&local_78,uVar5 & 0xffffffff);
          }
          ppwVar9 = local_58;
          if (local_58 == (wchar_t **)0x0) {
            ppwVar9 = &local_78;
          }
          *(int *)((longlong)ppwVar9 + lVar11 * 4) = iVar3;
          FUN_148b19aee(param_1,lVar13);
LAB_148b1774c:
          lVar13 = lVar13 + 0xc;
        } while (lVar13 != lVar14);
        if (local_58 != (wchar_t **)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((((*(byte *)(lVar15 + 0x61) & 1) != 0) &&
        (cVar6 = *(char *)(param_1 + 0x68), *(char *)(param_1 + 0x68) = cVar6 + '\x01',
        cVar6 == '\0')) && (*(char *)(param_1 + 0x6e) == '\0')) {
      uVar7 = FUN_148b18f3c(DAT_14cb0d2b0);
      FUN_148b1559e(uVar7,param_1);
    }
  }
  *(undefined1 *)((longlong)plVar2 + 0x11) = 1;
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b17c54 FUN_148b17c54 body=216 status=ok
// SIG undefined FUN_148b17c54(void)

void FUN_148b17c54(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb9b358) {
      FUN_144b3d300(&DAT_14cb9b358);
      if (DAT_14cb9b358 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb9b350 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"MVVM.DefaultExecutionMode",1);
        _Init_thread_footer(&DAT_14cb9b358);
      }
    }
    if (DAT_14cb9b350 == (longlong *)0x0) {
      bVar3 = false;
    }
    else {
      cVar1 = (**(code **)(*DAT_14cb9b350 + 0xb0))();
      bVar3 = cVar1 == '\x02';
    }
    *(bool *)(param_1 + 0x6e) = bVar3;
  }
  if ((*(char *)(param_1 + 0x68) == '\0') && (*(char *)(param_1 + 0x6e) == '\x01')) {
    uVar2 = FUN_148b18f3c(DAT_14cb0d2b0);
    FUN_148b1559e(uVar2,param_1);
  }
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return;
}



// FUNCTION 148b17d2c FUN_148b17d2c body=200 status=ok
// SIG undefined FUN_148b17d2c(void)

void FUN_148b17d2c(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x10 + (longlong)param_2 * 0x18) == '\x01') {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)param_2 * 0x18);
    lVar5 = (longlong)*(int *)(puVar1 + 1) * 0x68 +
            *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
    *(undefined1 *)(puVar1 + 2) = 0;
    if (*(char *)((longlong)puVar1 + 0x12) == '\0') {
      plVar2 = *(longlong **)(lVar5 + 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2a8))(plVar2,*puVar1,param_1);
      }
      *(undefined1 *)(puVar1 + 2) = 0;
      *puVar1 = 0;
      if (*(char *)((longlong)puVar1 + 0x13) == '\x01') {
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          lVar4 = *(longlong *)(param_1 + 0x20);
        }
        else {
          lVar4 = 0;
        }
        if ((*(byte *)(lVar5 + 0x60) & 2) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(lVar5 + 0x24);
        }
        lVar5 = FUN_1408c92bc(*(undefined8 *)(lVar4 + 0x10),uVar3,3);
        if (lVar5 != 0) {
          FUN_1408c8fa8(lVar5,lVar4,0,0);
        }
        *(undefined1 *)((longlong)puVar1 + 0x13) = 0;
      }
      *(ulonglong *)(param_1 + 0x60) =
           *(ulonglong *)(param_1 + 0x60) &
           (-2L << (*(byte *)(puVar1 + 1) & 0x3f) |
           0xfffffffffffffffeU >> 0x40 - (*(byte *)(puVar1 + 1) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148b17df4 FUN_148b17df4 body=4209 status=ok
// SIG undefined FUN_148b17df4(void)

longlong FUN_148b17df4(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  byte bVar10;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_290;
  longlong *local_288;
  longlong *local_280 [2];
  undefined1 local_270 [16];
  undefined8 local_260;
  longlong *local_258;
  longlong *local_250 [2];
  undefined1 local_240 [20];
  undefined1 local_22c [4];
  undefined8 local_228;
  longlong *local_220;
  longlong *local_218 [2];
  undefined1 local_208 [16];
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  longlong *local_1e0 [2];
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong *local_1b0 [2];
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong *local_180 [2];
  undefined1 local_170 [20];
  undefined1 local_15c [4];
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138 [2];
  longlong *local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [48];
  undefined8 local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  byte *local_b0;
  byte local_a1;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_c8 = &local_90;
  local_d0 = &local_98;
  local_b8 = &local_a0;
  local_a0 = 0;
  bVar10 = (byte)*(ushort *)(param_1 + 0xc);
  local_a1 = bVar10 >> 3 & 1;
  local_b0 = &local_a1;
  local_c0 = param_1;
  local_98 = param_2;
  local_90 = param_4;
  if ((*(ushort *)(param_1 + 0xc) & 1) == 0) {
    lVar8 = param_4;
    if ((char)bVar10 < '\0') goto LAB_148b18155;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 == (longlong *)0x0) {
      plVar3 = param_1 + 2;
      cVar5 = FUN_148b14de8(plVar3);
      if (cVar5 == '\0') {
        lVar8 = local_a0;
        if ((*(short *)((longlong)param_1 + 0x22) < 0) ||
           (cVar5 = FUN_143faa460(&local_d0), lVar6 = local_90, lVar8 = local_a0, cVar5 != '\0'))
        goto LAB_148b18155;
        FUN_14276766e(local_108,&DAT_14cb9b118);
        local_d8 = 0;
        FUN_14485c47a(&local_d8,lVar6);
        FUN_145715fae(local_280,(longlong)param_1 + 0x24);
        local_58 = L"CreateInstanceInvalidBinding";
        local_50 = 0x1c;
        FUN_1446e940c(&local_1f8,&local_58);
        local_58 = L"MVVMViewClass";
        local_50 = 0xd;
        FUN_1446e940c(local_15c,&local_58);
        FUN_140208bae(local_158,local_15c,&local_1f8,
                      L"The source \'{0}\' was evaluated to be invalid at initialization.");
        FUN_14023409e(&local_290,local_158,1);
        local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
        FUN_14023423e(local_48,local_280);
        local_70 = &local_38;
        local_78 = &local_58;
        FUN_14010d304(&local_68);
        local_88 = local_290;
        local_80 = local_288;
        if (local_288 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_288 + 1) = (int)local_288[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_128,&local_88,&local_68);
        FUN_14007f2db(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        if (local_288 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_288 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_288)(local_288);
            LOCK();
            piVar1 = (int *)((longlong)local_288 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_288 + 0x10))(local_288);
            }
          }
        }
        if (local_280[0] != (longlong *)0x0) {
          (**(code **)(*local_280[0] + 0x10))();
        }
        puVar9 = local_270;
      }
      else {
        local_1f8 = 0;
        lVar8 = FUN_148b1aa96(local_90,plVar3);
        lVar6 = local_90;
        if (lVar8 != 0) {
          if ((*plVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_14123c702();
          goto LAB_148b18155;
        }
        lVar8 = local_a0;
        if (local_a1 != 0) goto LAB_148b18155;
        FUN_14276766e(local_108,&DAT_14cb9b118);
        local_d8 = 0;
        FUN_14485c47a(&local_d8,lVar6);
        if (local_1f8 == 0) {
          FUN_145715fae(local_250,param_1 + 3);
          local_58 = L"CreateInstanceFailedGlobalInstance";
          local_50 = 0x22;
          FUN_1446e940c(local_15c,&local_58);
          local_58 = L"MVVMViewClass";
          local_50 = 0xd;
          FUN_1446e940c(local_22c,&local_58);
          FUN_140208bae(local_158,local_22c,local_15c,
                        L"The source \'{0}\' will be invalid because the global view model collection could not be found."
                       );
          FUN_14023409e(&local_260,local_158,1);
          local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
          FUN_14023423e(local_48,local_250);
          local_70 = &local_38;
          local_78 = &local_58;
          FUN_14010d304(&local_68);
          local_88 = local_260;
          local_80 = local_258;
          if (local_258 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_258 + 1) = (int)local_258[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_128,&local_88,&local_68);
          FUN_14007f2db(local_68,local_60);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_48[0] != (longlong *)0x0) {
            (**(code **)(*local_48[0] + 0x10))();
          }
          if (local_258 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_258 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_258)(local_258);
              LOCK();
              piVar1 = (int *)((longlong)local_258 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_258 + 0x10))(local_258);
              }
            }
          }
          if (local_250[0] != (longlong *)0x0) {
            (**(code **)(*local_250[0] + 0x10))();
          }
          puVar9 = local_240;
        }
        else {
          FUN_145715fae(local_218,param_1 + 3);
          local_58 = L"CreateInstanceFailedGlobal";
          local_50 = 0x1a;
          FUN_1446e940c(local_15c,&local_58);
          local_58 = L"MVVMViewClass";
          local_50 = 0xd;
          FUN_1446e940c(local_22c,&local_58);
          FUN_140208bae(local_158,local_22c,local_15c,
                        L"The source \'{0}\' was not found in the global view model collection.");
          FUN_14023409e(&local_228,local_158,1);
          local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
          FUN_14023423e(local_48,local_218);
          local_70 = &local_38;
          local_78 = &local_58;
          FUN_14010d304(&local_68);
          local_88 = local_228;
          local_80 = local_220;
          if (local_220 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_220 + 1) = (int)local_220[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_128,&local_88,&local_68);
          FUN_14007f2db(local_68,local_60);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_48[0] != (longlong *)0x0) {
            (**(code **)(*local_48[0] + 0x10))();
          }
          if (local_220 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_220 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_220)(local_220);
              LOCK();
              piVar1 = (int *)((longlong)local_220 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_220 + 0x10))(local_220);
              }
            }
          }
          if (local_218[0] != (longlong *)0x0) {
            (**(code **)(*local_218[0] + 0x10))();
          }
          puVar9 = local_208;
        }
      }
    }
    else {
      lVar8 = *param_1;
      if ((((lVar8 == 0) || (lVar6 = FUN_1446f8646(), lVar6 == 0)) ||
          (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *param_1;
      }
      local_a0 = (**(code **)(*plVar3 + 0x2a0))(plVar3,lVar8,param_4,param_3);
      lVar6 = local_90;
      if (local_a0 == 0) {
        lVar8 = local_a0;
        if (local_a1 != 0) goto LAB_148b18155;
        FUN_14276766e(local_108,&DAT_14cb9b118);
        local_d8 = 0;
        FUN_14485c47a(&local_d8,lVar6);
        FUN_145715fae(local_1b0,(longlong)param_1 + 0x24);
        local_58 = L"CreateInstanceFailResolver";
        local_50 = 0x1a;
        FUN_1446e940c(&local_1f8,&local_58);
        local_58 = L"MVVMViewClass";
        local_50 = 0xd;
        FUN_1446e940c(local_15c,&local_58);
        FUN_140208bae(local_158,local_15c,&local_1f8,
                      L"The source \'{0}\' could not be created. Resolver returned an invalid value."
                     );
        FUN_14023409e(&local_1c0,local_158,1);
        local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
        FUN_14023423e(local_48,local_1b0);
        local_70 = &local_38;
        local_78 = &local_58;
        FUN_14010d304(&local_68);
        local_88 = local_1c0;
        local_80 = local_1b8;
        if (local_1b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_128,&local_88,&local_68);
        FUN_14007f2db(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        if (local_1b8 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_1b8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_1b8)(local_1b8);
            LOCK();
            piVar1 = (int *)((longlong)local_1b8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_1b8 + 0x10))(local_1b8);
            }
          }
        }
        if (local_1b0[0] != (longlong *)0x0) {
          (**(code **)(*local_1b0[0] + 0x10))();
        }
        FUN_148b121ee(local_108,local_1a0,1,local_128);
        if (local_198 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_198 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_198)(local_198);
            LOCK();
            piVar1 = (int *)((longlong)local_198 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_198 + 0x10))(local_198);
            }
          }
        }
        if (local_128[0] != (longlong *)0x0) {
          (**(code **)(*local_128[0] + 0x10))();
        }
        if (local_158[0] != (longlong *)0x0) {
          (**(code **)(*local_158[0] + 0x10))();
        }
        FUN_1427678c0(local_108);
        lVar8 = local_a0;
        if (local_a0 == 0) goto LAB_148b18155;
      }
      lVar6 = local_a0;
      lVar8 = *param_1;
      if (((lVar8 == 0) || (lVar7 = FUN_1446f8646(), lVar7 == 0)) ||
         ((*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
           lVar7 + 0x30)))) {
        lVar7 = 0;
      }
      else {
        lVar7 = *param_1;
      }
      lVar4 = local_90;
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (lVar8 = local_a0,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         == lVar7 + 0x30)) goto LAB_148b18155;
      local_a0 = 0;
      FUN_14276766e(local_108,&DAT_14cb9b118);
      local_d8 = 0;
      FUN_14485c47a(&local_d8,lVar4);
      FUN_145715fae(local_1e0,(longlong)param_1 + 0x24);
      local_58 = L"CreateInstanceFailResolverExpected";
      local_50 = 0x22;
      FUN_1446e940c(&local_1f8,&local_58);
      local_58 = L"MVVMViewClass";
      local_50 = 0xd;
      FUN_1446e940c(local_15c,&local_58);
      FUN_140208bae(local_158,local_15c,&local_1f8,
                    L"The source \'{0}\' could not be created. Resolver returned viewodel of an unexpected type."
                   );
      FUN_14023409e(&local_1f0,local_158,1);
      local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(local_48,local_1e0);
      local_70 = &local_38;
      local_78 = &local_58;
      FUN_14010d304(&local_68);
      local_88 = local_1f0;
      local_80 = local_1e8;
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_128,&local_88,&local_68);
      FUN_14007f2db(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1e8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)local_1e8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1e8 + 0x10))(local_1e8);
          }
        }
      }
      if (local_1e0[0] != (longlong *)0x0) {
        (**(code **)(*local_1e0[0] + 0x10))();
      }
      puVar9 = local_1d0;
    }
  }
  else {
    lVar8 = *param_1;
    if ((((lVar8 == 0) || (lVar6 = FUN_1446f8646(), lVar6 == 0)) ||
        (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
         lVar6 + 0x30 || (lVar8 = *param_1, lVar8 == 0)))) {
      lVar6 = local_90;
      lVar8 = local_a0;
      if (local_a1 != 0) goto LAB_148b18155;
      FUN_14276766e(local_108,&DAT_14cb9b118);
      local_d8 = 0;
      FUN_14485c47a(&local_d8,lVar6);
      FUN_145715fae(local_180,(longlong)param_1 + 0x24);
      local_58 = L"CreateInstanceCreateInstance";
      local_50 = 0x1c;
      FUN_1446e940c(&local_1f8,&local_58);
      local_58 = L"MVVMViewClass";
      local_50 = 0xd;
      FUN_1446e940c(local_15c,&local_58);
      FUN_140208bae(local_158,local_15c,&local_1f8,
                    L"The source \'{0}\' could not be created. The class is not loaded.");
      FUN_14023409e(&local_190,local_158,1);
      local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(local_48,local_180);
      local_70 = &local_38;
      local_78 = &local_58;
      FUN_14010d304(&local_68);
      local_88 = local_190;
      local_80 = local_188;
      if (local_188 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_188 + 1) = (int)local_188[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_128,&local_88,&local_68);
      FUN_14007f2db(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_188 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar1 = (int *)((longlong)local_188 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_188 + 0x10))(local_188);
          }
        }
      }
      if (local_180[0] != (longlong *)0x0) {
        (**(code **)(*local_180[0] + 0x10))();
      }
      puVar9 = local_170;
    }
    else {
      if ((*(byte *)((longlong)param_1 + 0x61) & 4) == 0) {
        lVar6 = FUN_1446f8646();
        if (((lVar6 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) {
          lVar8 = 0;
        }
        else {
          lVar8 = *param_1;
        }
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_2b0 = 0;
        local_2b8 = 0;
        lVar8 = FUN_140584627(local_90,lVar8,0,0x40);
        goto LAB_148b18155;
      }
      lVar8 = local_a0;
      if ((*(short *)((longlong)param_1 + 0x22) < 0) ||
         (cVar5 = FUN_143faa460(&local_d0), lVar6 = local_90, lVar8 = local_a0, cVar5 != '\0'))
      goto LAB_148b18155;
      FUN_14276766e(local_108,&DAT_14cb9b118);
      local_d8 = 0;
      FUN_14485c47a(&local_d8,lVar6);
      FUN_145715fae(local_138,(longlong)param_1 + 0x24);
      local_58 = L"CreateInstanceInvalidStaticInstance";
      local_50 = 0x23;
      FUN_1446e940c(&local_1f8,&local_58);
      local_58 = L"MVVMViewClass";
      local_50 = 0xd;
      FUN_1446e940c(local_15c,&local_58);
      FUN_140208bae(local_158,local_15c,&local_1f8,
                    L"The source \'{0}\' was not found for the static view model at initialization."
                   );
      FUN_14023409e(&local_148,local_158,1);
      local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
      FUN_14023423e(local_48,local_138);
      local_70 = &local_38;
      local_78 = &local_58;
      FUN_14010d304(&local_68);
      local_88 = local_148;
      local_80 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_128,&local_88,&local_68);
      FUN_14007f2db(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_140 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)local_140 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_140 + 0x10))(local_140);
          }
        }
      }
      if (local_138[0] != (longlong *)0x0) {
        (**(code **)(*local_138[0] + 0x10))();
      }
      puVar9 = local_118;
    }
  }
  FUN_148b121ee(local_108,puVar9,1,local_128);
  plVar3 = *(longlong **)(puVar9 + 8);
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
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  FUN_1427678c0(local_108);
  lVar8 = local_a0;
LAB_148b18155:
  local_a0 = lVar8;
  if ((local_38 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_a0;
}



// FUNCTION 148b18e66 FUN_148b18e66 body=213 status=ok
// SIG undefined FUN_148b18e66(void)

void FUN_148b18e66(longlong param_1,longlong param_2,byte param_3,longlong param_4,longlong *param_5
                  )

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar3 = 1L << (param_3 & 0x3f);
  if (param_2 == 0) {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) & ~uVar3;
  }
  else {
    *(ulonglong *)(param_1 + 0x60) = *(ulonglong *)(param_1 + 0x60) | uVar3;
  }
  if ((*(ushort *)(param_4 + 0x60) & 4) != 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar5 = 0;
    }
    if ((*(ushort *)(param_4 + 0x60) & 2) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_4 + 0x24);
    }
    lVar2 = FUN_1408c92bc(*(undefined8 *)(lVar5 + 0x10),uVar4,3);
    if (lVar2 != 0) {
      if (param_2 != 0) {
        lVar1 = *(longlong *)(lVar2 + 0x70);
        if (lVar1 == 0) goto LAB_148b18e96;
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) goto LAB_148b18e96;
      }
      FUN_1408c8fa8(lVar2,lVar5,param_2,0);
      *(undefined1 *)((longlong)param_5 + 0x13) = 1;
    }
  }
LAB_148b18e96:
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *param_5 = param_2;
  return;
}



// FUNCTION 148b18f3c FUN_148b18f3c body=103 status=ok
// SIG undefined FUN_148b18f3c(void)

void FUN_148b18f3c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b85518();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148b2147c(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b18fa4 FUN_148b18fa4 body=846 status=ok
// SIG undefined FUN_148b18fa4(void)

void FUN_148b18fa4(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  undefined1 local_e8 [8];
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(char *)((longlong)param_3 + 0x11) == '\x01') && (0 < *(int *)((longlong)param_3 + 0xc))) {
    lVar3 = *param_3;
    if (lVar3 == 0) {
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar5 = 0;
      }
      FUN_14276766e(&local_d8,&DAT_14cb9b118);
      local_a8 = 0;
      FUN_14485c47a(&local_a8,uVar5);
      local_110 = *(undefined8 *)(param_2 + 0x24);
      FUN_145715fae(local_108);
      local_68 = L"UninitializeBindingFailInvalidSource";
      local_60 = 0x24;
      FUN_1446e940c(local_134,&local_68);
      local_68 = L"MVVMView";
      local_60 = 8;
      FUN_1446e940c(local_138,&local_68);
      FUN_140208bae(local_130,local_138,local_134,
                    L"The source \'{0}\' is invalid and could not uninitialize the bindings.");
      FUN_14023409e(&local_120,local_130,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_108);
      local_80 = &local_48;
      local_88 = &local_68;
      FUN_14010d304(&local_78);
      local_98 = local_120;
      local_90 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_118 + 1) = (int)local_118[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_f8,&local_98,&local_78);
      FUN_14007f2db(local_78,local_70);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_118 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_118 + 0x10))(local_118);
          }
        }
      }
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))();
      }
      FUN_148b121ee(&local_d8,local_e8,1,local_f8);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_e0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_130[0] != (longlong *)0x0) {
        (**(code **)(*local_130[0] + 0x10))();
      }
      FUN_1427678c0(&local_d8);
    }
    else {
      local_a0 = lVar3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      FUN_14797d7b6(&local_d8,&local_a0);
      plVar4 = (longlong *)0x0;
      if (local_d8 != 0) {
        plVar4 = local_d0;
      }
      (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
    }
    if ((*(byte *)(param_2 + 0x61) & 1) != 0) {
      pcVar2 = (char *)(param_1 + 0x68);
      *pcVar2 = *pcVar2 + -1;
      if ((*pcVar2 == '\0') && (*(char *)(param_1 + 0x6e) == '\0')) {
        lVar3 = FUN_148b18f3c(DAT_14cb0d2b0);
        if (lVar3 != 0) {
          local_d8 = 0;
          FUN_14485c47a(&local_d8,param_1);
          FUN_148b1561e(lVar3 + 0x88,&local_d8);
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x11) = 0;
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b192f4 FUN_148b192f4 body=2041 status=ok
// SIG undefined FUN_148b192f4(void)

void FUN_148b192f4(longlong param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  wchar_t **ppwVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0 [2];
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  longlong *local_198;
  longlong *local_190 [2];
  undefined1 local_180 [16];
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  longlong *local_168 [2];
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *plStack_140;
  longlong *local_130 [2];
  longlong *local_120 [2];
  longlong *local_110 [2];
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  wchar_t **local_e0;
  ulonglong *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  char local_bc;
  wchar_t *local_b8;
  undefined4 local_b0;
  longlong *local_a8 [2];
  ulonglong local_98 [2];
  undefined8 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((*(ulonglong *)(param_2 + 0x10) & ~*(ulonglong *)(param_1 + 0x60)) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar7 = 0;
    }
    local_1d8 = (uint)(*(char *)(param_2 + 0xc) == '\x02');
    FUN_148b0ec5a(*(longlong *)(param_1 + 0x28) + 0x88,&local_c0,uVar7,param_2);
    if (local_bc != '\x01') {
      if (*(char *)(param_1 + 0x69) != '\x01') goto LAB_148b19343;
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar7 = 0;
      }
      FUN_14276766e(&local_80,&DAT_14cb9b118);
      local_50[0] = 0;
      FUN_14485c47a(local_50,uVar7);
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      FUN_1413a454c(local_190,param_3,0);
      local_b8 = L"ExecuteBindingGeneric";
      local_b0 = 0x15;
      FUN_1446e940c(local_16c,&local_b8);
      local_b8 = L"MVVMView";
      local_b0 = 8;
      FUN_1446e940c(local_170,&local_b8);
      FUN_140208bae(local_168,local_170,local_16c,L"Execute binding \'{0}\'.");
      FUN_14023409e(&local_1a0,local_168,1);
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,4);
      FUN_14023423e(local_a8,local_190);
      local_d8 = local_98;
      local_e0 = &local_b8;
      FUN_14010d304(&local_d0);
      local_f0 = local_1a0;
      local_e8 = local_198;
      if (local_198 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_198 + 1) = (int)local_198[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_110,&local_f0,&local_d0);
      FUN_14007f2db(local_d0,local_c8);
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      if (local_a8[0] != (longlong *)0x0) {
        (**(code **)(*local_a8[0] + 0x10))();
      }
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_198 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)local_198 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_198 + 0x10))(local_198);
          }
        }
      }
      if (local_190[0] != (longlong *)0x0) {
        (**(code **)(*local_190[0] + 0x10))();
      }
      puVar5 = local_180;
      uVar7 = 4;
      goto LAB_148b195af;
    }
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar7 = 0;
    }
    FUN_14276766e(&local_b8,&DAT_14cb9b118);
    local_88 = 0;
    FUN_14485c47a(&local_88,uVar7);
    FUN_148b0e9fa(local_120,local_c0);
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    FUN_1413a454c(local_130,param_3,0);
    local_80 = L"ExecuteBindingFailGeneric";
    local_78[0] = 0x19;
    FUN_1446e940c(local_16c,&local_80);
    local_80 = L"MVVMView";
    local_78[0] = 8;
    FUN_1446e940c(local_170,&local_80);
    FUN_140208bae(local_168,local_170,local_16c,L"The binding \'{0}\' was not executed. {1}.");
    FUN_14023409e(&local_158,local_168,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,local_130);
    local_60 = 4;
    FUN_14023423e(local_50,local_120);
    local_d8 = &local_40;
    local_e0 = &local_80;
    FUN_14010d304(&local_d0);
    local_f0 = local_158;
    local_e8 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_110,&local_f0,&local_d0);
    FUN_14007f2db(local_d0,local_c8);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    lVar6 = 0x30;
    do {
      plVar3 = *(longlong **)((longlong)local_78 + lVar6 + -8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar6 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar6) = 0;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != -0x10);
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_150 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (local_130[0] != (longlong *)0x0) {
      (**(code **)(*local_130[0] + 0x10))();
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    FUN_148b121ee(&local_b8,local_100,1,local_110);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_f8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_168[0] != (longlong *)0x0) {
      (**(code **)(*local_168[0] + 0x10))();
    }
    plVar3 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_140 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    ppwVar4 = &local_b8;
  }
  else {
    if ((*(ulonglong *)(param_2 + 0x10) & ~*(ulonglong *)(param_1 + 0x60) &
        ~*(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0xd8)) == 0) goto LAB_148b19343;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar7 = 0;
    }
    FUN_14276766e(&local_80,&DAT_14cb9b118);
    local_50[0] = 0;
    FUN_14485c47a(local_50,uVar7);
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    FUN_1413a454c(local_1c0,param_3,0);
    local_b8 = L"ExecuteBindingFailInvalidSource";
    local_b0 = 0x1f;
    FUN_1446e940c(&local_c0,&local_b8);
    local_b8 = L"MVVMView";
    local_b0 = 8;
    FUN_1446e940c(local_16c,&local_b8);
    FUN_140208bae(local_168,local_16c,&local_c0,
                  L"The binding \'{0}\' was not executed. There are invalid sources.");
    FUN_14023409e(&local_1d0,local_168,1);
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,4);
    FUN_14023423e(local_a8,local_1c0);
    local_d8 = local_98;
    local_e0 = &local_b8;
    FUN_14010d304(&local_d0);
    local_f0 = local_1d0;
    local_e8 = local_1c8;
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_110,&local_f0,&local_d0);
    FUN_14007f2db(local_d0,local_c8);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1c8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1c8 + 0x10))(local_1c8);
        }
      }
    }
    if (local_1c0[0] != (longlong *)0x0) {
      (**(code **)(*local_1c0[0] + 0x10))();
    }
    puVar5 = local_1b0;
    uVar7 = 1;
LAB_148b195af:
    FUN_148b121ee(&local_80,puVar5,uVar7,local_110);
    plVar3 = *(longlong **)(puVar5 + 8);
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
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_168[0] != (longlong *)0x0) {
      (**(code **)(*local_168[0] + 0x10))();
    }
    plVar3 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_140 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    ppwVar4 = &local_80;
  }
  FUN_1427678c0(ppwVar4);
LAB_148b19343:
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b19aee FUN_148b19aee body=74 status=ok
// SIG undefined FUN_148b19aee(void)

void FUN_148b19aee(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  uVar1 = FUN_1400796d0(*(undefined8 *)(lVar2 + 0x10),
                        *(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68) +
                         (longlong)*(int *)(param_2 + 8) * 0x18),1);
  FUN_148b0d38a(uVar1,lVar2);
  return;
}



// FUNCTION 148b19b38 FUN_148b19b38 body=1424 status=ok
// SIG undefined FUN_148b19b38(void)

void FUN_148b19b38(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  longlong *local_160;
  longlong *local_158 [2];
  undefined1 local_148 [8];
  longlong *local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [48];
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_2 == -1) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar7 = 0;
    }
    FUN_14276766e(local_b8,&DAT_14cb9b118);
    local_88 = 0;
    FUN_14485c47a(&local_88,uVar7);
    local_f8 = (longlong *)0x0;
    plStack_f0 = (longlong *)0x0;
    FUN_1413a454c(local_e8,0xffffffff,0);
    local_50 = L"ReevaluateDynamicSourceViewModelNameNotFound";
    local_48 = 0x2c;
    FUN_1446e940c(local_11c,&local_50);
    local_50 = L"MVVMView";
    local_48 = 8;
    FUN_1446e940c(local_120,&local_50);
    FUN_140208bae(local_118,local_120,local_11c,
                  L"Internal error. The dynamic source {0} cound not be found.");
    FUN_14023409e(&local_108,local_118,1);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(local_40,local_e8);
    local_68 = &local_30;
    local_70 = &local_50;
    FUN_14010d304(&local_60);
    local_80 = local_108;
    local_78 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d8,&local_80,&local_60);
    FUN_14007f2db(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    FUN_148b121ee(local_b8,local_c8,1,local_d8);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    plVar1 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar7 = 0;
    }
    lVar8 = (longlong)param_2 * 0x68 + *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
    lVar5 = FUN_148b17df4(lVar8,*(longlong *)(param_1 + 0x28),param_1,uVar7);
    if (lVar5 == 0) {
      local_138 = 0;
      uStack_130 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar5 + 0x10);
      uVar6 = FUN_1458f046a();
      FUN_144a7ff9e(uVar7,uVar6);
      uStack_130 = 0;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      local_138 = lVar5;
      uVar7 = FUN_1458f046a();
      uStack_130 = FUN_144718840(lVar5,uVar7);
    }
    cVar4 = FUN_143fa9582(param_1,param_2,&local_138,1);
    if (cVar4 != '\0') goto LAB_148b19de2;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar7 = 0;
    }
    FUN_14276766e(local_b8,&DAT_14cb9b118);
    local_88 = 0;
    FUN_14485c47a(&local_88,uVar7);
    local_118[0] = *(longlong **)(lVar8 + 0x24);
    FUN_145715fae(local_158);
    local_50 = L"ExecuteBindingFailEvaluate";
    local_48 = 0x1a;
    FUN_1446e940c(local_11c,&local_50);
    local_50 = L"MVVMView";
    local_48 = 8;
    FUN_1446e940c(local_120,&local_50);
    FUN_140208bae(&local_f8,local_120,local_11c,L"The evaluate source \'{0}\' fail execution.");
    FUN_14023409e(&local_168,&local_f8,1);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(local_40,local_158);
    local_68 = &local_30;
    local_70 = &local_50;
    FUN_14010d304(&local_60);
    local_80 = local_168;
    local_78 = local_160;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_160 + 1) = (int)local_160[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d8,&local_80,&local_60);
    FUN_14007f2db(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_160 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)local_160 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_160 + 0x10))(local_160);
        }
      }
    }
    if (local_158[0] != (longlong *)0x0) {
      (**(code **)(*local_158[0] + 0x10))();
    }
    FUN_148b121ee(local_b8,local_148,1,local_d8);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_140 + 0x10))(local_140);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
  }
  FUN_1427678c0(local_b8);
LAB_148b19de2:
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1a0ca FUN_148b1a0ca body=561 status=ok
// SIG undefined FUN_148b1a0ca(void)

void FUN_148b1a0ca(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [48];
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38);
  if ((*(byte *)(lVar3 + 0xe + (longlong)*(int *)(param_2 + 8) * 0x18) & 1) != 0) {
    lVar3 = lVar3 + (longlong)*(int *)(param_2 + 8) * 0x18;
    cVar5 = FUN_148b1a32a(lVar3);
    iVar4 = DAT_14cb9b348;
    if (cVar5 == '\x01') {
      FUN_148b18f3c(DAT_14cb0d2b0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
    if (cVar5 == '\0') {
      iVar2 = *(int *)(param_2 + 8);
      lVar9 = (longlong)(int)DAT_14cb9b348;
      if (lVar9 != 0) {
        lVar6 = lVar9 << 4;
        plVar7 = DAT_14cb9b340;
        do {
          if ((*plVar7 == param_1) && ((int)plVar7[1] == iVar2)) {
            if (plVar7 != (longlong *)0x0) {
              if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
                uVar8 = *(undefined8 *)(param_1 + 0x20);
              }
              else {
                uVar8 = 0;
              }
              FUN_14276766e(local_78,&DAT_14cb9b118);
              local_48 = 0;
              FUN_14485c47a(&local_48,uVar8);
              local_40 = L"RecursionDetected";
              local_38 = 0x11;
              FUN_1446e940c(local_8c,&local_40);
              local_40 = L"MVVMView";
              local_38 = 8;
              FUN_1446e940c(local_90,&local_40);
              FUN_140208bae(&local_40,local_90,local_8c,
                            L"A recursive binding was detected (ie. A->B->C->A->B->C) at runtime.");
              FUN_148b121ee(local_78,local_88,3,&local_40);
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_80 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar1 = (int *)((longlong)local_80 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_80 + 0x10))(local_80);
                  }
                }
              }
              if (local_40 != (wchar_t *)0x0) {
                (**(code **)(*(longlong *)local_40 + 0x10))();
              }
              FUN_1427678c0(local_78);
              goto LAB_148b1a103;
            }
            break;
          }
          plVar7 = plVar7 + 2;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
      }
      DAT_14cb9b348 = DAT_14cb9b348 + 1;
      if (DAT_14cb9b34c < DAT_14cb9b348) {
        FUN_148b218b0(iVar4);
      }
      plVar7 = DAT_14cb9b340;
      DAT_14cb9b340[lVar9 * 2] = param_1;
      *(int *)(plVar7 + lVar9 * 2 + 1) = iVar2;
      FUN_148b192f4(param_1,lVar3,*(undefined4 *)(param_2 + 8));
      DAT_14cb9b348 = DAT_14cb9b348 - 1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
  }
LAB_148b1a103:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b1a32a FUN_148b1a32a body=123 status=ok
// SIG undefined FUN_148b1a32a(void)

byte FUN_148b1a32a(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9b434) {
    FUN_144b3d300(&DAT_14cb9b434);
    if (DAT_14cb9b434 == -1) {
      FUN_143faa546();
      _Init_thread_footer(&DAT_14cb9b434);
    }
  }
  pbVar2 = &DAT_14cb9b430;
  if ((*(byte *)(param_1 + 0xe) & 4) != 0) {
    pbVar2 = (byte *)(param_1 + 0xf);
  }
  bVar1 = *(byte *)(param_1 + 0xe) >> 1 & 1;
  if (*pbVar2 != 3) {
    bVar1 = *pbVar2;
  }
  return bVar1;
}



// FUNCTION 148b1a3a6 FUN_148b1a3a6 body=267 status=ok
// SIG undefined FUN_148b1a3a6(void)

void FUN_148b1a3a6(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 != 0) && (0 < *(int *)(param_1 + 0x48))) {
    local_48 = 0;
    FUN_14485c47a(&local_48,param_3);
    uVar7 = (ulonglong)*(int *)(param_1 + 0x48);
    if (0 < (longlong)uVar7) {
      iVar3 = (int)local_48;
      iVar4 = local_48._4_4_;
      lVar6 = uVar7 * 0x14;
      do {
        lVar6 = lVar6 + -0x14;
        lVar1 = *(longlong *)(param_1 + 0x40);
        if (((*(int *)(lVar1 + lVar6) == iVar3) && (*(int *)(lVar1 + 4 + lVar6) == iVar4)) ||
           ((cVar5 = FUN_144729dda(lVar1 + lVar6), cVar5 == '\0' &&
            (cVar5 = FUN_144729dda(&local_48), cVar5 == '\0')))) {
          FUN_148b1a856(param_1,(int)uVar7 + -1);
        }
        bVar2 = 1 < uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar2);
    }
  }
  uVar7 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x60);
  if (0 < (longlong)uVar7) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
    uVar8 = 0;
    do {
      if (*(int *)(lVar6 + 0xc) == param_2) {
        FUN_148b1a4dc(param_1,lVar6,uVar8 & 0xffffffff);
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 != uVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b1a4b2 FUN_148b1a4b2 body=41 status=ok
// SIG undefined FUN_148b1a4b2(void)

void FUN_148b1a4b2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_148b219e8();
  return;
}



// FUNCTION 148b1a4dc FUN_148b1a4dc body=888 status=ok
// SIG undefined FUN_148b1a4dc(void)

void FUN_148b1a4dc(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t **ppwVar4;
  undefined1 *puVar5;
  wchar_t **ppwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [40];
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined4 local_60;
  byte local_58;
  longlong *local_50;
  char local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar8 = 0;
  }
  local_98 = param_1;
  local_90 = lVar8;
  local_88 = param_2;
  local_80 = param_3;
  lVar2 = FUN_1400796d0(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(param_2 + 4),1);
  if (lVar2 == 0) {
    local_68 = L"EnableLibraryEventFailed_FunctionNotFound";
    local_60 = 0x29;
    ppwVar6 = &local_78;
    FUN_1446e940c(ppwVar6,&local_68);
    local_68 = L"MVVMView";
    local_60 = 8;
    puVar5 = local_9c;
    FUN_1446e940c(puVar5,&local_68);
    pwVar7 = L"Function not found";
    ppwVar4 = &local_68;
  }
  else {
    FUN_148b0ef30(*(longlong *)(param_1 + 0x28) + 0x88,&local_68,lVar8,param_2);
    if (local_40 == '\0') {
      if (((ulonglong)*(uint *)(param_2 + 0xc) != 0xffffffff) &&
         ((*(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0xd8) >>
           ((ulonglong)*(uint *)(param_2 + 0xc) & 0x3f) & 1) != 0)) goto LAB_148b1a5c4;
      local_78 = L"EnableLibraryEventFailed_CantEvaluateBindingPath";
      uStack_70._0_4_ = 0x30;
      FUN_1446e940c(local_9c,&local_78);
      local_78 = L"MVVMView";
      uStack_70 = CONCAT44(uStack_70._4_4_,8);
      FUN_1446e940c(local_a0,&local_78);
      pwVar7 = L"The binding path couldn\'t be evaluated.";
    }
    else if (((&DAT_14b55ab30)[local_58] == '\x01') && (local_68 != (wchar_t *)0x0)) {
      if ((local_48 == '\x02') && (local_50 != (longlong *)0x0)) {
        lVar2 = local_50[1];
        lVar3 = FUN_140019da0();
        pwVar7 = local_68;
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar9 = lVar2 != 0;
          if (lVar2 != lVar3 && bVar9) {
            do {
              lVar2 = *(longlong *)(lVar2 + 0x30);
              bVar9 = lVar2 != 0;
              if (lVar2 == lVar3) break;
            } while (lVar2 != 0);
          }
          if (bVar9) goto LAB_148b1a7e7;
        }
        else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_148b1a7e7:
          lVar2 = FUN_148b1aa32(param_1 + 0x40);
          FUN_14485c47a(lVar2,pwVar7);
          *(longlong *)(lVar2 + 8) = local_50[4];
          *(undefined4 *)(lVar2 + 0x10) = param_3;
          local_78 = (wchar_t *)0x0;
          uStack_70 = 0;
          uVar1 = *(undefined8 *)(param_2 + 4);
          FUN_14485c47a(&local_78,lVar8);
          local_b0 = local_78;
          local_a8 = uVar1;
          uStack_70 = uVar1;
          (**(code **)(*local_50 + 0x1f0))(local_50,&local_b0,pwVar7,0);
          goto LAB_148b1a5c4;
        }
      }
      local_78 = L"EnableLibraryEventFailed_NotAProperty";
      uStack_70._0_4_ = 0x25;
      FUN_1446e940c(local_9c,&local_78);
      local_78 = L"MVVMView";
      uStack_70 = CONCAT44(uStack_70._4_4_,8);
      FUN_1446e940c(local_a0,&local_78);
      pwVar7 = L"The path doesn\'t point to a multicast delegate property.";
    }
    else {
      if (((ulonglong)*(uint *)(param_2 + 0xc) != 0xffffffff) &&
         ((*(ulonglong *)(*(longlong *)(param_1 + 0x28) + 0xd8) >>
           ((ulonglong)*(uint *)(param_2 + 0xc) & 0x3f) & 1) != 0)) goto LAB_148b1a5c4;
      local_78 = L"EnableLibraryEventFailed_OwnerInvalid";
      uStack_70._0_4_ = 0x25;
      FUN_1446e940c(local_9c,&local_78);
      local_78 = L"MVVMView";
      uStack_70 = CONCAT44(uStack_70._4_4_,8);
      FUN_1446e940c(local_a0,&local_78);
      pwVar7 = L"The owner is invalid.";
    }
    ppwVar6 = (wchar_t **)local_9c;
    puVar5 = local_a0;
    ppwVar4 = &local_78;
  }
  FUN_140208bae(ppwVar4,puVar5,ppwVar6,pwVar7);
  FUN_143faa02e(&local_98,ppwVar4);
  if (*ppwVar4 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)*ppwVar4 + 0x10))();
  }
LAB_148b1a5c4:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1a856 FUN_148b1a856 body=450 status=ok
// SIG undefined FUN_148b1a856(void)

void FUN_148b1a856(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (longlong)(int)param_2;
  lVar11 = lVar3 * 0x14 + *(longlong *)(param_1 + 0x40);
  lVar4 = FUN_14479d2ce(lVar11);
  if ((lVar4 != 0) &&
     (plVar5 = (longlong *)FUN_144a87586(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar11 + 8)),
     plVar5 != (longlong *)0x0)) {
    lVar10 = plVar5[1];
    lVar6 = FUN_140019da0();
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar12 = lVar10 != 0;
      if (lVar10 != lVar6 && bVar12) {
        do {
          lVar10 = *(longlong *)(lVar10 + 0x30);
          bVar12 = lVar10 != 0;
          if (lVar10 == lVar6) break;
        } while (lVar10 != 0);
      }
      if (bVar12) {
LAB_148b1a96c:
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar7 = 0;
        }
        local_58 = 0;
        uStack_50 = 0;
        uVar1 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 4 +
                 (longlong)*(int *)(lVar11 + 0x10) * 0x18);
        FUN_14485c47a(&local_58,uVar7);
        uStack_50 = uVar1;
        (**(code **)(*plVar5 + 0x1f8))(plVar5,&local_58,lVar4,0);
        iVar2 = *(int *)(param_1 + 0x48);
        iVar8 = ~param_2 + iVar2;
        if (iVar8 != 0) {
          iVar9 = 1;
          if (iVar8 < 1) {
            iVar9 = iVar8;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x40) + lVar3 * 0x14),
                  (void *)(*(longlong *)(param_1 + 0x40) + (longlong)(iVar2 - iVar9) * 0x14),
                  (longlong)iVar9 * 0x14);
          iVar2 = *(int *)(param_1 + 0x48);
        }
        *(int *)(param_1 + 0x48) = iVar2 + -1;
        FUN_148b21afa(param_1 + 0x40);
        if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
    else if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) goto LAB_148b1a96c;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  iVar8 = ~param_2 + iVar2;
  if (iVar8 != 0) {
    iVar9 = 1;
    if (iVar8 < 1) {
      iVar9 = iVar8;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x40) + lVar3 * 0x14),
            (void *)(*(longlong *)(param_1 + 0x40) + (longlong)(iVar2 - iVar9) * 0x14),
            (longlong)iVar9 * 0x14);
    iVar2 = *(int *)(param_1 + 0x48);
  }
  *(int *)(param_1 + 0x48) = iVar2 + -1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 148b1aa32 FUN_148b1aa32 body=63 status=ok
// SIG undefined FUN_148b1aa32(void)

longlong FUN_148b1aa32(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148b21a66(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x14 + *param_1;
  FUN_148b21a58(lVar2);
  return lVar2;
}



// FUNCTION 148b1aa96 FUN_148b1aa96 body=270 status=ok
// SIG undefined FUN_148b1aa96(void)

longlong FUN_148b1aa96(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  cVar3 = FUN_148b14de8(param_2);
  if (cVar3 != '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
      lVar4 = FUN_148b16f84();
      lVar4 = *(longlong *)(lVar4 + 0x30);
      *param_3 = lVar4;
      if (lVar4 != 0) {
        lVar1 = *param_2;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        lVar2 = param_2[1];
        local_38 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        local_30 = lVar2;
        lVar4 = FUN_148b14798(lVar4 + 0x28);
        if (lVar4 != 0) {
          if ((*param_2 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_14123c702();
          goto LAB_148b1aae9;
        }
      }
    }
  }
  lVar4 = 0;
LAB_148b1aae9:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1aba6 FUN_148b1aba6 body=73 status=ok
// SIG undefined FUN_148b1aba6(void)

void FUN_148b1aba6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_148b12a0a(param_2);
  lVar1 = FUN_148b1abf0(param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_144757f48(lVar1,0x40);
  FUN_148b16fec(lVar1,param_1);
  return;
}



// FUNCTION 148b1abf0 FUN_148b1abf0 body=98 status=ok
// SIG undefined FUN_148b1abf0(void)

void FUN_148b1abf0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458d5b06();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1477924da(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1ac54 FUN_148b1ac54 body=425 status=ok
// SIG undefined FUN_148b1ac54(void)

void FUN_148b1ac54(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (iVar2 == 0) {
    FUN_143fa7a60(param_1 + 0x88);
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x28);
      local_80 = plVar6 + (longlong)*(int *)(param_1 + 0x30) * 0xd;
      do {
        lVar3 = plVar6[7];
        local_88 = plVar6;
        if (0 < (longlong)(int)lVar3) {
          puVar9 = (undefined8 *)plVar6[6];
          lVar8 = *plVar6;
          if ((((lVar8 == 0) || (lVar4 = FUN_1446f8646(), lVar4 == 0)) ||
              (*(int *)(lVar8 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) {
            lVar8 = 0;
          }
          else {
            lVar8 = *plVar6;
          }
          lVar4 = *(longlong *)(lVar8 + 0x110);
          if (lVar4 == 0) {
            FUN_140aa6c08(lVar8);
            lVar4 = *(longlong *)(lVar8 + 0x110);
          }
          if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar4 != 0) goto LAB_148b1ad68;
            plVar6 = (longlong *)0x0;
          }
          else {
            FUN_1456cec3c(lVar4);
LAB_148b1ad68:
            uVar5 = FUN_1458f046a();
            plVar6 = (longlong *)FUN_144718840(lVar4,uVar5);
          }
          puVar1 = (undefined8 *)((longlong)puVar9 + (longlong)(int)lVar3 * 0xc);
          do {
            puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6);
            local_60 = *puVar9;
            local_74 = 0;
            local_58 = &LAB_147764a16;
            local_68 = &local_74;
            local_50 = &local_68;
            (**(code **)*puVar7)(puVar7,lVar8,&local_58);
            *(undefined4 *)(puVar9 + 1) = local_6c;
            puVar9 = (undefined8 *)((longlong)puVar9 + 0xc);
          } while (puVar9 != puVar1);
        }
        plVar6 = local_88 + 0xd;
      } while (plVar6 != local_80);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b1ae36 FUN_148b1ae36 body=29 status=ok
// SIG undefined FUN_148b1ae36(void)

undefined8 FUN_148b1ae36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b1ae54 FUN_148b1ae54 body=48 status=ok
// SIG undefined FUN_148b1ae54(void)

longlong FUN_148b1ae54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_145c378e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b1ae84 FUN_148b1ae84 body=48 status=ok
// SIG undefined FUN_148b1ae84(void)

longlong FUN_148b1ae84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_140731102(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b1aeb4 FUN_148b1aeb4 body=45 status=ok
// SIG undefined FUN_148b1aeb4(void)

longlong FUN_148b1aeb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c18376(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b1af6e FUN_148b1af6e body=109 status=ok
// SIG undefined FUN_148b1af6e(void)

int FUN_148b1af6e(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1b0ae FUN_148b1b0ae body=109 status=ok
// SIG undefined FUN_148b1b0ae(void)

int FUN_148b1b0ae(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b1b1ca FUN_148b1b1ca body=59 status=ok
// SIG undefined FUN_148b1b1ca(void)

undefined8 FUN_148b1b1ca(longlong *param_1)

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



// FUNCTION 148b1b2d6 FUN_148b1b2d6 body=59 status=ok
// SIG undefined FUN_148b1b2d6(void)

undefined8 FUN_148b1b2d6(longlong *param_1)

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



// FUNCTION 148b1b3b0 FUN_148b1b3b0 body=103 status=ok
// SIG undefined FUN_148b1b3b0(void)

undefined1 FUN_148b1b3b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b1b440 FUN_148b1b440 body=59 status=ok
// SIG undefined FUN_148b1b440(void)

undefined8 FUN_148b1b440(longlong *param_1)

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



// FUNCTION 148b1b53a FUN_148b1b53a body=54 status=ok
// SIG undefined FUN_148b1b53a(void)

undefined1 FUN_148b1b53a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b1b638(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148b1b598 FUN_148b1b598 body=59 status=ok
// SIG undefined FUN_148b1b598(void)

undefined8 FUN_148b1b598(longlong *param_1)

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



// FUNCTION 148b1b638 FUN_148b1b638 body=151 status=ok
// SIG undefined FUN_148b1b638(void)

longlong * FUN_148b1b638(longlong *param_1,longlong *param_2)

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
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  param_1[3] = param_2[3];
  lVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar2;
  *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
  return param_1;
}



// FUNCTION 148b1b788 FUN_148b1b788 body=59 status=ok
// SIG undefined FUN_148b1b788(void)

undefined8 FUN_148b1b788(longlong *param_1)

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



// FUNCTION 148b1b8ac FUN_148b1b8ac body=59 status=ok
// SIG undefined FUN_148b1b8ac(void)

undefined8 FUN_148b1b8ac(longlong *param_1)

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



// FUNCTION 148b1b986 FUN_148b1b986 body=54 status=ok
// SIG undefined FUN_148b1b986(void)

undefined1 FUN_148b1b986(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b1ba84(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148b1b9e4 FUN_148b1b9e4 body=59 status=ok
// SIG undefined FUN_148b1b9e4(void)

undefined8 FUN_148b1b9e4(longlong *param_1)

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



// FUNCTION 148b1ba84 FUN_148b1ba84 body=99 status=ok
// SIG undefined FUN_148b1ba84(void)

longlong * FUN_148b1ba84(longlong *param_1,longlong *param_2)

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
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 148b1bb6c FUN_148b1bb6c body=59 status=ok
// SIG undefined FUN_148b1bb6c(void)

undefined8 FUN_148b1bb6c(longlong *param_1)

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



// FUNCTION 148b1bc7a FUN_148b1bc7a body=59 status=ok
// SIG undefined FUN_148b1bc7a(void)

undefined8 FUN_148b1bc7a(longlong *param_1)

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


