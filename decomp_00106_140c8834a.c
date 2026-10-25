// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c8834a FUN_140c8834a body=730 status=ok
// SIG undefined FUN_140c8834a(void)

ulonglong FUN_140c8834a(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  undefined ***pppuVar5;
  int *unaff_RBX;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  char local_8a [2];
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  char *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_1;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    piVar3 = *(int **)(param_1 + 0x90);
    lVar6 = (longlong)*(int *)(param_1 + 0x98) * 0x48;
    do {
      if ((*piVar3 == *param_2) && (piVar3[2] == param_2[2])) {
        unaff_RBX = (int *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if (piVar3 != (int *)0x0) goto LAB_140c884c4;
        break;
      }
      piVar3 = piVar3 + 0x12;
      lVar6 = lVar6 + -0x48;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    piVar3 = *(int **)(param_1 + 0x80);
    piVar8 = piVar3 + (longlong)*(int *)(param_1 + 0x88) * 0xc;
    do {
      unaff_RBX = (int *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if ((*piVar3 == *param_2) && (piVar3[2] == param_2[2])) goto LAB_140c884c4;
      local_8a[0] = '\0';
      plVar4 = (longlong *)FUN_1409c4b9a(piVar3);
      if ((plVar4 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4), lVar6 != 0)
         ) {
        local_50 = param_2[2];
        local_58 = *(undefined8 *)param_2;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b41a8d0;
        local_60 = local_8a;
        local_88[0] = &LAB_143df34c4;
        local_8a[1] = 0;
        FUN_140c88625(local_8a + 1,lVar6,local_88);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar5 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar5 = &local_68;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      if (local_8a[0] != '\0') goto LAB_140c884c4;
      piVar3 = piVar3 + 0xc;
    } while (piVar3 != piVar8);
  }
  if ((longlong)*(int *)(local_98 + 0xa8) != 0) {
    lVar6 = *(longlong *)(local_98 + 0xa0);
    lVar7 = (longlong)*(int *)(local_98 + 0xa8) * 0x130 + lVar6;
    do {
      iVar1 = *(int *)(lVar6 + 0x20);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar6 + 0x18);
        piVar3 = (int *)(lVar2 + 8);
        do {
          if ((piVar3[-2] == *param_2) &&
             (unaff_RBX = (int *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1),
             *piVar3 == param_2[2])) goto LAB_140c884c4;
          local_8a[0] = '\0';
          local_50 = param_2[2];
          local_58 = *(undefined8 *)param_2;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14b41a8f0;
          local_60 = local_8a;
          local_88[0] = &LAB_143df3530;
          local_8a[1] = 0;
          unaff_RBX = piVar3 + 0x20;
          FUN_140c88625(local_8a + 1,unaff_RBX,local_88);
          if (local_88[0] != (undefined1 *)0x0) {
            pppuVar5 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar5 = &local_68;
            }
            (*(code *)(*pppuVar5)[2])();
          }
          if (local_8a[0] != '\0') goto LAB_140c8860d;
          unaff_RBX = piVar3 + 0x24;
          piVar3 = piVar3 + 0x26;
        } while (unaff_RBX != (int *)((longlong)iVar1 * 0x98 + lVar2));
      }
      lVar6 = lVar6 + 0x130;
    } while (lVar6 != lVar7);
  }
  if ((*param_2 == DAT_14cb88900) && (param_2[2] == DAT_14cb88904._4_4_)) {
LAB_140c8860d:
    unaff_RBX = (int *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else if (*param_2 == DAT_14cb88810) {
    unaff_RBX = (int *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2[2] == DAT_14cb88814._4_4_)
    ;
  }
  else {
    unaff_RBX = (int *)0x0;
  }
LAB_140c884c4:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// FUNCTION 140c88625 FUN_140c88625 body=235 status=ok
// SIG undefined FUN_140c88625(void)

void FUN_140c88625(char *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar9 = (longlong *)*param_2;
    plVar2 = plVar9 + (longlong)(int)param_2[1] * 3;
    do {
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        plVar4 = (longlong *)plVar9[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar8 = plVar4 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
        pcVar5 = (code *)*param_3;
        plVar8 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar8 = param_3 + 4;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        cVar6 = (*pcVar5)(uVar7,lVar3);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar4 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
        if (cVar6 != '\0') {
          *param_1 = '\x01';
          return;
        }
        FUN_140c88625(param_1,*plVar9 + 0x20,param_3);
        if (*param_1 != '\0') {
          return;
        }
      }
      plVar9 = plVar9 + 3;
    } while (plVar9 != plVar2);
  }
  return;
}



// FUNCTION 140c8871e FUN_140c8871e body=240 status=ok
// SIG undefined FUN_140c8871e(void)

undefined8 * FUN_140c8871e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39b9b0;
  FUN_1447cd778(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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



// FUNCTION 140c8880e FUN_140c8880e body=41 status=ok
// SIG undefined FUN_140c8880e(void)

void FUN_140c8880e(longlong param_1,undefined8 param_2)

{
  FUN_140c88838();
  FUN_140c888e6(param_1 + 0x9a8,param_1,param_2);
  return;
}



// FUNCTION 140c88838 FUN_140c88838 body=172 status=ok
// SIG undefined FUN_140c88838(void)

void FUN_140c88838(undefined1 *param_1,ulonglong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_1;
  local_28 = param_2;
  FUN_1447cd2ec(param_1 + 0x628);
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x65) & 0x18) != 0x10)) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_2);
    local_30 = &LAB_147e26dba;
    local_28 = local_28 & 0xffffffff00000000;
    local_48 = &local_38;
    FUN_147e26ca6(param_2 + 0x350,local_40,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c888e6 FUN_140c888e6 body=173 status=ok
// SIG undefined FUN_140c888e6(void)

void FUN_140c888e6(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_140c8897d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140c8897d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140c8899a FUN_140c8899a body=57 status=ok
// SIG undefined FUN_140c8899a(void)

void FUN_140c8899a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb211e0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb211e0 = FUN_140002ddd(FUN_146432496,uVar1,L"GbxBrainAspect_CanSense");
  }
  return;
}



// FUNCTION 140c889d4 FUN_140c889d4 body=172 status=ok
// SIG undefined FUN_140c889d4(void)

void FUN_140c889d4(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c88a82(&local_28,param_1);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_20;
    } while (!bVar6);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_140c88bba(local_28,param_2);
      }
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c88a82 FUN_140c88a82 body=310 status=ok
// SIG undefined FUN_140c88a82(void)

longlong * FUN_140c88a82(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb89548;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c88bba FUN_140c88bba body=1388 status=ok
// SIG undefined FUN_140c88bba(void)

void FUN_140c88bba(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    iVar18 = *(int *)(param_1 + 0x88);
    iVar14 = *(int *)(param_1 + 0xb4);
    if (iVar18 != iVar14) {
      uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      lVar16 = param_1 + 0xb8;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar16 = *(longlong *)(param_1 + 0xc0);
      }
      iVar9 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 200) - 1U & (uVar8 >> 0x10 ^ uVar8))
                                * 4);
      if (iVar9 != -1) {
        do {
          puVar2 = (ulonglong *)(*plVar1 + (longlong)iVar9 * 0x18);
          if (*puVar2 == param_2) {
            puVar12 = puVar2 + 1;
            if (puVar12 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
              *(int *)puVar12 = (int)*puVar12 + 1;
              goto LAB_140c88eb3;
            }
            break;
          }
          iVar9 = (int)puVar2[2];
        } while (iVar9 != -1);
      }
    }
    if (iVar14 == 0) {
      *(int *)(param_1 + 0x88) = iVar18 + 1;
      if (*(int *)(param_1 + 0x8c) == iVar18) {
        FUN_14482b872(plVar1,iVar18);
      }
      lVar19 = (longlong)iVar18;
      iVar14 = FUN_144a54ea4(param_1 + 0x90,1);
      lVar16 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar16 = param_1 + 0x90;
      }
      iVar9 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar9 = iVar14;
      }
      bVar4 = (byte)iVar14 & 0x1f;
      puVar7 = (uint *)(lVar16 + (longlong)(iVar9 >> 5) * 4);
      *puVar7 = *puVar7 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    }
    else {
      iVar18 = *(int *)(param_1 + 0xb0);
      lVar19 = (longlong)iVar18;
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + lVar19 * 0x18);
      *(int *)(param_1 + 0xb0) = iVar9;
      *(int *)(param_1 + 0xb4) = iVar14 + -1;
      if (iVar14 + -1 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar9 * 0x18) = 0xffffffff;
      }
    }
    lVar16 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar16 = *(longlong *)(param_1 + 0xa0);
    }
    iVar14 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar14 = iVar18;
    }
    puVar7 = (uint *)(lVar16 + (longlong)(iVar14 >> 5) * 4);
    *puVar7 = *puVar7 | 1 << ((byte)iVar18 & 0x1f);
    iVar14 = 1;
    puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x80) + lVar19 * 0x18);
    *puVar2 = param_2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    uVar17 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xb4);
    if (1 < uVar17) {
      lVar16 = param_1 + 0xb8;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar16 = *(longlong *)(param_1 + 0xc0);
      }
      iVar9 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar8) * 4);
      if (iVar9 != -1) {
        do {
          puVar12 = (ulonglong *)(*plVar1 + (longlong)iVar9 * 0x18);
          if (*puVar12 == param_2) {
            uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
            uVar11 = puVar2[1];
            uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
            *(int *)puVar12 = (int)*puVar2;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar5;
            *(int *)(puVar12 + 1) = (int)uVar11;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar6;
            FUN_143e06d12(plVar1,iVar18);
            goto LAB_140c88e28;
          }
          iVar9 = (int)puVar12[2];
        } while (iVar9 != -1);
      }
    }
    if (3 < uVar17) {
      uVar11 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uVar17 < 1) || (iVar14 <= *(int *)(param_1 + 200))) {
      uVar8 = *(int *)(param_1 + 200) - 1U & uVar8;
      *(uint *)((longlong)puVar2 + 0x14) = uVar8;
      lVar16 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar16 = param_1 + 0xb8;
      }
      *(undefined4 *)(puVar2 + 2) =
           *(undefined4 *)
            (lVar16 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)(int)uVar8) * 4);
      lVar16 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar16 = param_1 + 0xb8;
      }
      *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 200) - 1U & (longlong)(int)uVar8) * 4) =
           iVar18;
    }
    else {
      *(int *)(param_1 + 200) = iVar14;
      FUN_14655acce();
    }
LAB_140c88e28:
    uVar8 = *(uint *)(param_1 + 0x58);
    uVar11 = (ulonglong)uVar8;
    if (uVar8 == 0) {
      uVar21 = 1;
      uVar20 = 0;
      iVar14 = 0;
      uVar17 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x40);
      }
      uVar17 = *puVar7;
      if (uVar17 == 0) {
        iVar14 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar14 = uVar8 - 1;
        }
        uVar20 = 0;
        uVar21 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar21 = uVar20;
        }
        iVar14 = 0;
        do {
          if (uVar21 == uVar20) goto LAB_140c88eb3;
          iVar14 = iVar14 + 0x20;
          uVar17 = puVar7[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar20 = 0;
        iVar14 = 0;
      }
      uVar21 = (ulonglong)(-uVar17 & uVar17);
      uVar3 = uVar21 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar17 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar8 <= (int)uVar17) {
        uVar17 = uVar8;
      }
    }
    if (uVar17 != uVar8) {
      uVar13 = 0xffffffff;
      local_60 = uVar11;
      do {
        if (*(int *)(param_2 + 0x20) != *(int *)(param_2 + 0x4c)) {
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)uVar17 * 0x14);
          uVar17 = (uint)((ulonglong)lVar16 >> 0x10);
          uVar15 = (uint)lVar16 & 0xffff;
          lVar19 = *(longlong *)(param_2 + 0x58);
          if (*(longlong *)(param_2 + 0x58) == 0) {
            lVar19 = param_2 + 0x50;
          }
          iVar18 = *(int *)(lVar19 + (ulonglong)
                                     (*(int *)(param_2 + 0x60) - 1U &
                                     (int)((ulonglong)lVar16 >> 0x20) +
                                     ((uint)lVar16 << 0x10 | uVar15) +
                                     (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar15 >> 4)) * 4);
          if (iVar18 != -1) {
            do {
              lVar19 = *(longlong *)(param_2 + 0x18) + (longlong)iVar18 * 0x38;
              if (*(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar18 * 0x38) == lVar16)
              {
                if ((lVar19 != -8 && lVar19 != 0) && (*(longlong *)(lVar19 + 0x10) != 0)) {
                  local_58 = param_2;
                  local_50 = lVar16;
                  FUN_1410b4430(param_1,&local_58);
                  uVar8 = *(uint *)(param_1 + 0x58);
                  uVar11 = local_60;
                }
                break;
              }
              iVar18 = *(int *)(lVar19 + 0x30);
            } while (iVar18 != -1);
          }
        }
        uVar13 = uVar13 & ~(uint)uVar21;
        puVar7 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x40);
        }
        iVar18 = (int)uVar20;
        lVar16 = (longlong)iVar18;
        uVar17 = puVar7[lVar16] & uVar13;
        if (uVar17 == 0) {
          iVar9 = uVar8 + 0x1e;
          if (-1 < (int)(uVar8 - 1)) {
            iVar9 = uVar8 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar18) {
            iVar10 = iVar18;
          }
          if (iVar18 < iVar9) {
            lVar19 = 0;
            do {
              uVar17 = puVar7[lVar16 + lVar19 + 1];
              if (uVar17 != 0) {
                uVar20 = (ulonglong)(iVar18 + (int)lVar19 + 1);
                uVar13 = 0xffffffff;
                goto LAB_140c8902f;
              }
              iVar14 = iVar14 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar10 - lVar16 != lVar19);
            uVar13 = 0xffffffff;
            iVar18 = iVar10;
          }
          uVar20 = (ulonglong)(iVar18 + 1);
          uVar17 = uVar8;
        }
        else {
LAB_140c8902f:
          uVar21 = (ulonglong)(-uVar17 & uVar17);
          uVar3 = uVar21 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar17 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar8 <= (int)uVar17) {
            uVar17 = uVar8;
          }
        }
      } while (uVar17 != (uint)uVar11);
    }
  }
LAB_140c88eb3:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c89136 FUN_140c89136 body=248 status=ok
// SIG undefined FUN_140c89136(void)

void FUN_140c89136(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0xc58);
  fVar2 = *(float *)(param_1 + 0xc68);
  fVar4 = fVar1;
  if (fVar1 <= *(float *)(param_1 + 0xc5c)) {
    fVar4 = *(float *)(param_1 + 0xc5c);
  }
  *(float *)(param_1 + 0xc5c) = fVar4;
  fVar5 = *(float *)(param_1 + 0xcdc);
  if (fVar4 <= *(float *)(param_1 + 0xcdc)) {
    fVar5 = fVar4;
  }
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  *(float *)(param_1 + 0xcdc) = fVar5;
  fVar1 = *(float *)(param_1 + 0xce0);
  if (*(float *)(param_1 + 0xc64) <= *(float *)(param_1 + 0xce0)) {
    fVar1 = *(float *)(param_1 + 0xc64);
  }
  if (fVar1 <= *(float *)(param_1 + 0xc60)) {
    fVar1 = *(float *)(param_1 + 0xc60);
  }
  *(float *)(param_1 + 0xce0) = fVar1;
  fVar1 = (float)FUN_140c8922e();
  fVar2 = (fVar1 / 1000.0) * fVar2;
  fVar1 = *(float *)(param_1 + 0xc7c);
  if (*(float *)(param_1 + 0xc7c) <= fVar2) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0xc7c) = fVar1;
  uVar3 = FUN_140c8927c(param_1,0);
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  fVar1 = 0.0;
  if (0.0 < *(float *)(param_1 + 0xc48)) {
    fVar1 = *(float *)(param_1 + 0xc44) / *(float *)(param_1 + 0xc48);
  }
  *(float *)(param_1 + 0xc54) = fVar1;
  *(float *)(param_1 + 0x2cc) = fVar1 * *(float *)(param_1 + 0xc6c);
  if (0.0 < *(float *)(param_1 + 0xcd8)) {
    *(float *)(param_1 + 0x2cc) = *(float *)(param_1 + 0xcd8);
  }
  return;
}



// FUNCTION 140c8922e FUN_140c8922e body=78 status=ok
// SIG undefined FUN_140c8922e(void)

undefined4 FUN_140c8922e(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if ((lVar1 == 0) && (lVar1 = FUN_1448abda6(), lVar1 == 0)) {
    return 0x42c80000;
  }
  uVar2 = 0x42c80000;
  if ((*(longlong *)(lVar1 + 0x30) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 != 0)) {
    uVar2 = *(undefined4 *)(lVar1 + 0x408);
  }
  return uVar2;
}



// FUNCTION 140c8927c FUN_140c8927c body=158 status=ok
// SIG undefined FUN_140c8927c(void)

undefined8 FUN_140c8927c(longlong param_1,char param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Db;
  float fVar6;
  
  fVar4 = *(float *)(param_1 + 0xcdc);
  fVar2 = 0.0;
  uVar5 = 0;
  if (0.0 < fVar4) {
    fVar3 = *(float *)(param_1 + 0xc44) * *(float *)(param_1 + 0xc6c);
    fVar2 = *(float *)(param_1 + 0xcd8);
    if (0.0 < fVar2) {
      fVar6 = fVar3 / *(float *)(param_1 + 0xc48);
      uVar1 = -(uint)(fVar2 < fVar6);
      fVar3 = (float)(~uVar1 & (uint)fVar3 | (uint)((fVar2 / fVar6) * fVar3) & uVar1);
    }
    if (param_2 == '\0') {
      fVar2 = 1.0;
    }
    else {
      fVar2 = *(float *)(param_1 + 0x2d4) + 1.0;
    }
    fVar4 = atanf((fVar3 * fVar2) / (fVar4 + fVar4));
    fVar2 = (fVar4 + fVar4) * 57.295776;
    uVar5 = extraout_XMM0_Db;
  }
  return CONCAT44(uVar5,fVar2);
}



// FUNCTION 140c8931a FUN_140c8931a body=37 status=ok
// SIG undefined FUN_140c8931a(void)

void FUN_140c8931a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(PSRWLOCK *)(lVar1 + 0x28) != (PSRWLOCK)0x0)) &&
     (0 < *(int *)(lVar1 + 0x24))) {
    *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + -1;
                    /* WARNING: Could not recover jumptable at 0x000140c89338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(lVar1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 140c89340 FUN_140c89340 body=843 status=ok
// SIG undefined FUN_140c89340(void)

longlong * FUN_140c89340(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  if ((param_2 == 0) ||
     ((lVar8 = *(longlong *)(param_2 + 0xb0), lVar8 == 0 &&
      (lVar8 = FUN_1448abda6(param_2), lVar8 == 0)))) goto LAB_140c89520;
  uVar3 = DAT_14cb71f80;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_60,uVar3,lVar8);
  plVar13 = local_58;
  lVar8 = local_60;
  if ((local_60 == 0) || (local_58 == (longlong *)0x0)) {
    plVar13 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_58 + 0xc) = *(int *)((longlong)local_58 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar12 = local_58 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_58 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if (plVar13 == (longlong *)0x0) goto LAB_140c89520;
  iVar6 = (int)plVar13[1];
  do {
    plVar12 = (longlong *)0x0;
    if (iVar6 == 0) break;
    LOCK();
    iVar4 = (int)plVar13[1];
    bVar15 = iVar6 == iVar4;
    if (bVar15) {
      *(int *)(plVar13 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    plVar12 = plVar13;
  } while (!bVar15);
  LOCK();
  piVar1 = (int *)((longlong)plVar13 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if (plVar12 == (longlong *)0x0) goto LAB_140c89520;
  if (lVar8 != 0) {
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    uVar7 = *(uint *)(lVar14 + 0x10);
    if (*(uint *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar7 = *(uint *)(lVar14 + 0x10);
      bVar15 = uVar7 == 0;
      if (bVar15) {
        *(uint *)(lVar14 + 0x10) = uVar10;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar15) {
        uVar7 = uVar10;
      }
    }
    if (*(int *)(lVar8 + 0xa8) == *(int *)(lVar8 + 0xd4)) {
LAB_140c895c5:
      lVar14 = 0;
    }
    else {
      lVar14 = lVar8 + 0xd8;
      if (*(longlong *)(lVar8 + 0xe0) != 0) {
        lVar14 = *(longlong *)(lVar8 + 0xe0);
      }
      iVar6 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar8 + 0xe8) - 1U & (uVar7 ^ uVar2)) * 4);
      if (iVar6 == -1) goto LAB_140c895c5;
      lVar9 = *(longlong *)(lVar8 + 0xa0);
      lVar14 = 0;
      do {
        lVar11 = (longlong)iVar6 * 0x230;
        local_60 = *(longlong *)(lVar9 + lVar11);
        local_50 = CONCAT44(uVar7,uVar2);
        cVar5 = FUN_144717174(&local_60,&local_50);
        lVar9 = *(longlong *)(lVar8 + 0xa0);
        if (cVar5 != '\0') {
          lVar14 = lVar9 + lVar11;
          break;
        }
        iVar6 = *(int *)(lVar9 + 0x228 + lVar11);
      } while (iVar6 != -1);
    }
    lVar8 = lVar14 + 8;
    if (lVar14 == 0) {
      lVar8 = 0;
    }
    *param_1 = lVar8;
    if (((lVar8 != 0) && (*(PSRWLOCK *)(lVar8 + 0x28) != (PSRWLOCK)0x0)) &&
       (*(int *)(lVar8 + 0x24) == 0)) {
      AcquireSRWLockExclusive(*(PSRWLOCK *)(lVar8 + 0x28));
      *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
    }
  }
  LOCK();
  plVar13 = plVar12 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_140c89520:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140c8968c FUN_140c8968c body=505 status=ok
// SIG undefined FUN_140c8968c(void)

undefined8 * FUN_140c8968c(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_140c89886();
  param_1[0x124] = &PTR_LAB_14aabc518;
  puVar1 = param_1 + 0x13b;
  FUN_14033066a(puVar1);
  _Dst = param_1 + 0x125;
  memset(_Dst,0,0xb0);
  *(undefined8 *)((longlong)param_1 + 0x9c4) = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_14aab5280;
  param_1[0x124] = &PTR_FUN_14aab54d8;
  *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) & 0xfe;
  *(byte *)((longlong)param_1 + 0x77) = *(byte *)((longlong)param_1 + 0x77) | 2;
  if ((longlong)*(int *)(param_1 + 0x54) != 0) {
    lVar7 = param_1[0x53];
    lVar6 = (longlong)*(int *)(param_1 + 0x54) * 0x60 + lVar7;
    bVar5 = false;
LAB_140c89745:
    do {
      if (*(longlong **)(lVar7 + 8) != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar7 + 8) + 0x40))();
        cVar2 = (**(code **)(*plVar3 + 0x340))(plVar3,6);
        if (cVar2 == '\0') {
          bVar5 = true;
          FUN_147ccaee0(lVar7,1,1);
          lVar7 = lVar7 + 0x60;
          if (lVar7 == lVar6) goto LAB_140c89810;
          goto LAB_140c89745;
        }
      }
      lVar7 = lVar7 + 0x60;
    } while (lVar7 != lVar6);
    if (bVar5) {
LAB_140c89810:
      FUN_144ae871a(param_1,0);
    }
  }
  FUN_144961d36(param_3,&local_f8);
  memcpy(_Dst,&local_f8,0xb0);
  FUN_1403304fa(puVar1,_Dst);
  param_1[0x12] = puVar1;
  *(byte *)((longlong)param_1 + 0x8fa) = *(byte *)((longlong)param_1 + 0x8fa) | 2;
  if ((DAT_14ca96da8 != '\0') && (0 < *(int *)(param_1[0x62] + 8))) {
    lVar7 = 0x40;
    uVar4 = 0;
    do {
      FUN_140330954(param_3,uVar4 & 0xffffffff,0);
      if (((longlong)uVar4 < (longlong)*(int *)(param_3 + 0x6b0)) &&
         (*(longlong *)(*(longlong *)(param_3 + 0x6a8) + lVar7) != 0)) {
        FUN_140330954(param_3,uVar4 & 0xffffffff);
      }
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 0xa0;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1[0x62] + 8));
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140c89886 FUN_140c89886 body=176 status=ok
// SIG undefined FUN_140c89886(void)

undefined8
FUN_140c89886(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_218 [40];
  undefined **local_1f0 [17];
  longlong local_168;
  char local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1401ea154(local_1f0);
  FUN_1401ea8ec(local_1f0,param_3);
  FUN_1401eba66(param_1,param_2,local_1f0,param_4);
  if (local_48 == '\x01') {
    local_48 = '\0';
  }
  local_1f0[0] = &PTR_FUN_14a9758a8;
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c89938 FUN_140c89938 body=67 status=ok
// SIG undefined FUN_140c89938(void)

void FUN_140c89938(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c8997c(param_1 + 0x4b0);
  FUN_140c89a76(param_1 + 0x510,param_2,param_3);
  FUN_140c89b70(param_1,param_2,param_3);
  return;
}



// FUNCTION 140c8997c FUN_140c8997c body=140 status=ok
// SIG undefined FUN_140c8997c(void)

void FUN_140c8997c(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((param_3 != 0) && (*(char *)(param_3 + 0x60) == '\x01')) &&
     ((*(byte *)(param_3 + 0x44) & 1) != 0)) {
    if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
      lVar1 = *param_2;
      plVar3 = param_1 + 8;
      if ((longlong *)param_1[9] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[9];
      }
      iVar2 = *(int *)((longlong)plVar3 +
                      (ulonglong)
                      ((int)param_1[10] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17)
                      * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)(param_1[1] + (longlong)iVar2 * 0x20) == lVar1) {
            return;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x20 + param_1[1] + 0x18);
        } while (iVar2 != -1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000140c899a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c89996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 140c89a08 FUN_140c89a08 body=109 status=ok
// SIG undefined FUN_140c89a08(void)

void FUN_140c89a08(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = *param_2;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x20) == lVar1) {
          FUN_148d14572();
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 8) + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 140c89a76 FUN_140c89a76 body=140 status=ok
// SIG undefined FUN_140c89a76(void)

void FUN_140c89a76(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (((param_3 != 0) && (*(char *)(param_3 + 0x60) == '\x01')) &&
     ((*(byte *)(param_3 + 0x44) & 8) != 0)) {
    if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
      lVar1 = *param_2;
      plVar3 = param_1 + 8;
      if ((longlong *)param_1[9] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[9];
      }
      iVar2 = *(int *)((longlong)plVar3 +
                      (ulonglong)
                      ((int)param_1[10] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17)
                      * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)(param_1[1] + (longlong)iVar2 * 0x20) == lVar1) {
            return;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x20 + param_1[1] + 0x18);
        } while (iVar2 != -1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000140c89a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c89aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 140c89b02 FUN_140c89b02 body=109 status=ok
// SIG undefined FUN_140c89b02(void)

void FUN_140c89b02(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = *param_2;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x20) == lVar1) {
          FUN_148d14cd0();
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 8) + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 140c89b70 FUN_140c89b70 body=293 status=ok
// SIG undefined FUN_140c89b70(void)

void FUN_140c89b70(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  
  if (((param_3 != 0) && (*(char *)(param_3 + 0x60) == '\x01')) &&
     ((*(byte *)(param_3 + 0x44) & 0x10) != 0)) {
    if (*(int *)(param_1 + 0x578) != *(int *)(param_1 + 0x5a4)) {
      lVar1 = *param_2;
      lVar3 = param_1 + 0x5a8;
      if (*(longlong *)(param_1 + 0x5b0) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x5b0);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x5b8) - 1U &
                               (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x570) + (longlong)iVar4 * 0x18) == lVar1) {
            bVar2 = true;
            goto LAB_140c89b86;
          }
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x570) + (longlong)iVar4 * 0x18 + 0x10);
        } while (iVar4 != -1);
      }
    }
LAB_140c89c7b:
    FUN_148d107c2();
    return;
  }
  bVar2 = false;
LAB_140c89b86:
  if (*(int *)(param_1 + 0x578) != *(int *)(param_1 + 0x5a4)) {
    lVar1 = *param_2;
    lVar3 = param_1 + 0x5a8;
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x5b0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x5b8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x570) + (longlong)iVar4 * 0x18) == lVar1) {
          if (bVar2) {
            return;
          }
          goto LAB_140c89c7b;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x570) + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 140c89c96 FUN_140c89c96 body=1367 status=ok
// SIG undefined FUN_140c89c96(void)

void FUN_140c89c96(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong **pplVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 auStack_178 [40];
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong **local_138;
  undefined1 local_12c [4];
  longlong *local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8 [12];
  undefined1 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((param_3 == (longlong *)0x0) || ((char)param_3[0xc] != '\x01')) ||
      ((*(byte *)((longlong)param_3 + 0x44) & 8) == 0)) ||
     (lVar6 = (**(code **)(*param_3 + 0x2d0))(param_3), lVar6 == 0)) goto LAB_140c89d4f;
  lVar7 = FUN_140c8a1ee();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) {
    lVar7 = FUN_14050c909();
    lVar6 = *(longlong *)(lVar7 + 0x520);
    if (lVar6 == 0) {
      uVar8 = FUN_145a4fed4();
      lVar6 = FUN_14477b664(uVar8);
      *(longlong *)(lVar7 + 0x520) = lVar6;
    }
    plVar9 = *(longlong **)(lVar7 + 0x528);
    if (plVar9 == (longlong *)0x0) {
      if ((*(longlong *)(lVar7 + 0x518) == 0) || (lVar6 == 0)) goto LAB_140c89d4f;
      plVar9 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar9 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
        plVar9 = (longlong *)0x0;
      }
      else {
        uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
        plVar9 = (longlong *)FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x518));
      }
      *(longlong **)(lVar7 + 0x528) = plVar9;
      goto LAB_140c89de7;
    }
  }
  else {
    lVar7 = FUN_14050c909();
    lVar6 = *(longlong *)(lVar7 + 0x538);
    if (lVar6 == 0) {
      uVar8 = FUN_145a4fed4();
      lVar6 = FUN_14477b664(uVar8);
      *(longlong *)(lVar7 + 0x538) = lVar6;
    }
    plVar9 = *(longlong **)(lVar7 + 0x540);
    if (plVar9 == (longlong *)0x0) {
      if ((lVar6 == 0) || (*(longlong *)(lVar7 + 0x530) == 0)) goto LAB_140c89d4f;
      plVar9 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar9 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar5 == '\0')) {
        plVar9 = (longlong *)0x0;
      }
      else {
        uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
        plVar9 = (longlong *)FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x530));
      }
      *(longlong **)(lVar7 + 0x540) = plVar9;
LAB_140c89de7:
      if (plVar9 == (longlong *)0x0) goto LAB_140c89d4f;
    }
  }
  plVar10 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b967760;
  plVar1 = plVar10 + 2;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  local_128 = plVar1;
  plStack_120 = plVar10;
  FUN_148d14710(&local_128,plVar1);
  plVar13 = plStack_120;
  local_150 = plVar1;
  local_148 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  plVar1 = local_150;
  if (local_150 != (longlong *)0x0) {
    FUN_14485c47a(local_150 + 2,param_3);
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    plStack_120 = (longlong *)0x0;
    lVar6 = *param_3;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8[0] = 0;
    puVar12 = &DAT_14c846480;
    puVar14 = local_d8;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    local_78 = 0;
    local_128 = plVar9;
    uVar8 = (**(code **)(lVar6 + 0x2d0))(param_3);
    FUN_14485c47a(local_e8,uVar8);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_140272888();
    }
    FUN_14485c47a(&local_f8,uVar8);
    (**(code **)(*param_3 + 0x2b0))(param_3,local_d8);
    lVar6 = FUN_14050c909();
    local_78 = *(undefined1 *)(lVar6 + 0x548);
    plVar11 = (longlong *)FUN_14001cc68(400);
    plVar11[1] = (longlong)&DAT_100000001;
    *plVar11 = (longlong)&PTR_FUN_14b967740;
    plVar9 = plVar11 + 2;
    memset(plVar9,0,0x180);
    plVar13 = &DAT_14c846480;
    plVar10 = plVar11 + 0xe;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *plVar10 = *plVar13;
      plVar13 = plVar13 + 1;
      plVar10 = plVar10 + 1;
    }
    plVar11[0x2a] = 0;
    plVar11[0x1c] = 0;
    plVar11[0x1d] = 0;
    plVar11[0x1e] = 0;
    plVar11[0x1f] = 0;
    plVar11[0x20] = 0;
    plVar11[0x21] = 0;
    plVar11[0x22] = 0;
    plVar11[0x23] = 0;
    plVar11[0x24] = 0;
    plVar11[0x25] = 0;
    plVar11[0x26] = 0;
    plVar11[0x27] = 0;
    *(undefined8 *)((longlong)plVar11 + 0x15c) = 0xffffffff00000080;
    plVar11[0x2e] = 0;
    plVar11[0x30] = 0;
    local_140 = plVar9;
    local_138 = (longlong **)plVar11;
    FUN_148d13fb6(&local_140,plVar9);
    if (plVar11 == (longlong *)0x0) {
      plVar1[3] = 0x10;
      plVar9 = (longlong *)plVar1[4];
      if (plVar9 != (longlong *)0x0) {
        plVar1[4] = 0;
LAB_140c8a1a5:
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x000140c8a194:
          if (iVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      local_150[3] = (longlong)plVar9;
      plVar9 = (longlong *)local_150[4];
      if (plVar11 == plVar9) {
        LOCK();
        plVar9 = plVar11 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar9 = plVar11;
          goto joined_r0x000140c8a194;
        }
      }
      else {
        local_150[4] = (longlong)plVar11;
        if (plVar9 != (longlong *)0x0) goto LAB_140c8a1a5;
      }
    }
    pplVar4 = local_138;
    if (local_138 != (longlong **)0x0) {
      LOCK();
      plVar9 = (longlong *)(local_138 + 1);
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (*(code *)**local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)pplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*pplVar4 + 0x10))(pplVar4);
        }
      }
    }
    if (local_150[3] != 0) {
      FUN_1460071d0(local_150[3],&local_128);
    }
    local_138 = &local_150;
    local_140 = param_2;
    FUN_148d147b4(param_1 + 8,local_12c);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  plVar9 = local_148;
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_148 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_140c89d4f:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8a1ee FUN_140c8a1ee body=228 status=ok
// SIG undefined FUN_140c8a1ee(void)

longlong FUN_140c8a1ee(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba4998 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148bd0083;
    local_40 = &LAB_1411c5904;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2610;
    FUN_14081cfa3(L"/Script/OakGame",L"InteractiveDamageable",&DAT_14cba4998,&DAT_148bd0082);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4998;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8a2d4 FUN_140c8a2d4 body=266 status=ok
// SIG undefined FUN_140c8a2d4(void)

longlong FUN_140c8a2d4(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) {
      return 0;
    }
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar6 == iVar5;
    if (bVar9) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar9);
  lVar4 = *(longlong *)(param_1 + 200);
  if (lVar4 != 0) {
    if ((((*(int *)(lVar4 + 0x3c) != 0) && (uVar2 = *(uint *)(lVar4 + 0x38), -1 < (int)uVar2)) &&
        ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(lVar4 + 0x3c))) &&
        (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar7 = *plVar8, lVar7 != 0))))))
    goto LAB_140c8a3a8;
    if (*(int *)(lVar4 + 0x44) != 0) {
      uVar2 = *(uint *)(lVar4 + 0x40);
      lVar7 = 0;
      if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c8a3a8;
      plVar8 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar8 != (longlong *)0x0) &&
         ((((int)plVar8[2] == *(int *)(lVar4 + 0x44) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))
          && (*plVar8 != 0)))) {
        lVar7 = *(longlong *)(*plVar8 + 0xa8);
        goto LAB_140c8a3a8;
      }
    }
  }
  lVar7 = 0;
LAB_140c8a3a8:
  LOCK();
  plVar8 = plVar3 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return lVar7;
}



// FUNCTION 140c8a3ec FUN_140c8a3ec body=40 status=ok
// SIG undefined FUN_140c8a3ec(void)

undefined8 FUN_140c8a3ec(undefined8 param_1,int param_2)

{
  FUN_140c8a414();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c8a414 FUN_140c8a414 body=95 status=ok
// SIG undefined FUN_140c8a414(void)

void FUN_140c8a414(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3184e0;
  plVar3 = (longlong *)param_1[0x28];
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
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140c8a474(param_1);
  return;
}



// FUNCTION 140c8a474 FUN_140c8a474 body=315 status=ok
// SIG undefined FUN_140c8a474(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c8a474(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b303990;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x19];
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
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  param_1[10] = &PTR_FUN_14b3039d0;
  FUN_140485972(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000140c8a563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c8a5af FUN_140c8a5af body=100 status=ok
// SIG undefined FUN_140c8a5af(void)

void FUN_140c8a5af(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b00be10;
    FUN_14487da0a(param_1[3],*(undefined4 *)(param_1 + 4));
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    FUN_14487da48(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 140c8a613 FUN_140c8a613 body=198 status=ok
// SIG undefined FUN_140c8a613(void)

void FUN_140c8a613(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x18);
    piVar4 = (int *)(param_2 + 0x20);
    do {
      puVar3[-3] = &PTR_FUN_14b00be10;
      puVar3[-2] = 0;
      iVar1 = piVar4[-4];
      uVar2 = *(undefined8 *)(piVar4 + -6);
      *(int *)(puVar3 + -1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + -4) = 0;
      }
      else {
        FUN_1407fb7e8(puVar3 + -2,iVar1,0);
        FUN_1406b363d(puVar3[-2],uVar2);
      }
      *puVar3 = 0;
      iVar1 = *piVar4;
      uVar2 = *(undefined8 *)(piVar4 + -2);
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1407fb936(puVar3,iVar1,0);
        FUN_1406b40b4(*puVar3,uVar2);
      }
      puVar3 = puVar3 + 5;
      piVar4 = piVar4 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c8a6d9 FUN_140c8a6d9 body=100 status=ok
// SIG undefined FUN_140c8a6d9(void)

void FUN_140c8a6d9(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b00be10;
    FUN_14487da0a(param_1[3],*(undefined4 *)(param_1 + 4));
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    FUN_14487da48(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 140c8a73d FUN_140c8a73d body=44 status=ok
// SIG undefined FUN_140c8a73d(void)

void FUN_140c8a73d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140c8a769 FUN_140c8a769 body=85 status=ok
// SIG undefined FUN_140c8a769(void)

void FUN_140c8a769(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar2);
      *(longlong **)(param_1 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      *(undefined2 *)(param_1 + 0x10 + lVar2) = *(undefined2 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c8a7be FUN_140c8a7be body=219 status=ok
// SIG undefined FUN_140c8a7be(void)

void FUN_140c8a7be(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x18);
    puVar4 = (undefined1 *)(param_2 + 0x28);
    do {
      puVar3[-3] = &PTR_FUN_14b00be10;
      puVar3[-2] = 0;
      iVar1 = *(int *)(puVar4 + -0x18);
      uVar2 = *(undefined8 *)(puVar4 + -0x20);
      *(int *)(puVar3 + -1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + -4) = 0;
      }
      else {
        FUN_1407fb7e8(puVar3 + -2,iVar1,0);
        FUN_1406b363d(puVar3[-2],uVar2);
      }
      *puVar3 = 0;
      iVar1 = *(int *)(puVar4 + -8);
      uVar2 = *(undefined8 *)(puVar4 + -0x10);
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1407fb936(puVar3,iVar1,0);
        FUN_1406b40b4(*puVar3,uVar2);
      }
      puVar3[-3] = &PTR_FUN_14b35c290;
      *(undefined1 *)(puVar3 + 2) = *puVar4;
      puVar3 = puVar3 + 6;
      puVar4 = puVar4 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c8a89a FUN_140c8a89a body=1800 status=ok
// SIG undefined FUN_140c8a89a(void)

void FUN_140c8a89a(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  undefined1 auStack_128 [40];
  uint local_100;
  int local_fc;
  uint *local_f8;
  int local_ec;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c0 = param_2;
  cVar3 = (**(code **)(*param_1 + 0x300))();
  local_e8 = param_1;
  if (cVar3 == '\0') {
    local_e0 = param_1 + 0x5f;
    local_90 = (uint *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_e0;
    if ((int)param_1[0x62] == 0) {
      uVar13 = 1;
      local_100 = 0xffffffff;
      iVar17 = 0;
      iVar19 = 0;
      iVar4 = 0;
      local_d8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      local_d8 = (ulonglong)local_90 & 0xffffffff;
      uVar13 = (ulonglong)local_90 >> 0x20;
      local_100 = (uint)uStack_80;
      iVar17 = (int)param_1[0x62];
      iVar4 = uStack_80._4_4_;
      iVar19 = (uint)local_78;
    }
    plVar16 = local_88;
    lVar15 = local_78;
    if (iVar4 != iVar17 || local_88 != local_e0) {
      do {
        local_d0 = plVar16;
        local_fc = iVar17;
        lVar15 = *(longlong *)(param_1[0x5d] + 0x10 + (longlong)iVar4 * 0x20);
        local_ec = iVar19;
        local_c8 = uVar13;
        if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x30) != 0)) {
          local_f8 = (uint *)(lVar15 + 0x80);
          iVar17 = *(int *)(lVar15 + 0x98);
          if (iVar17 == 0) {
            uVar13 = 1;
            uVar14 = 0;
            iVar4 = 0;
            iVar19 = 0;
          }
          else {
            puVar5 = *(uint **)(lVar15 + 0x90);
            if (*(uint **)(lVar15 + 0x90) == (uint *)0x0) {
              puVar5 = local_f8;
            }
            uVar12 = *puVar5;
            if (uVar12 == 0) {
              iVar4 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar4 = iVar17 + -1;
              }
              uVar14 = 0;
              uVar13 = (ulonglong)(uint)(iVar4 >> 5);
              if (iVar4 >> 5 < 1) {
                uVar13 = uVar14;
              }
              iVar19 = 0;
              do {
                if (uVar13 == uVar14) goto LAB_140c8ab38;
                iVar19 = iVar19 + 0x20;
                uVar12 = puVar5[uVar14 + 1];
                uVar14 = uVar14 + 1;
              } while (uVar12 == 0);
            }
            else {
              uVar14 = 0;
              iVar19 = 0;
            }
            uVar13 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar13 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar4 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar4) {
              iVar4 = iVar17;
            }
          }
          if (iVar4 != iVar17) {
            uVar12 = 0xffffffff;
            do {
              plVar16 = *(longlong **)
                         (*(longlong *)
                           (*(longlong *)(lVar15 + 0x70) + 0x10 + (longlong)iVar4 * 0x20) + 0x30);
              if (plVar16 != (longlong *)0x0) {
                lVar6 = (**(code **)(*plVar16 + 8))(plVar16);
                lVar7 = FUN_14070f4be();
                if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                    lVar7 + 0x30)) {
                  (*(code *)*local_c0)(local_c0[1],plVar16);
                }
              }
              uVar12 = uVar12 & ~(uint)uVar13;
              puVar5 = *(uint **)(lVar15 + 0x90);
              if (*(uint **)(lVar15 + 0x90) == (uint *)0x0) {
                puVar5 = local_f8;
              }
              iVar10 = *(int *)(lVar15 + 0x98);
              iVar4 = (int)uVar14;
              lVar6 = (longlong)iVar4;
              uVar11 = puVar5[lVar6] & uVar12;
              if (uVar11 == 0) {
                iVar8 = iVar10 + 0x1e;
                if (-1 < iVar10 + -1) {
                  iVar8 = iVar10 + -1;
                }
                iVar8 = iVar8 >> 5;
                iVar19 = iVar19 + 0x20;
                iVar9 = iVar8;
                if (iVar8 < iVar4) {
                  iVar9 = iVar4;
                }
                if (iVar4 < iVar8) {
                  lVar7 = 0;
                  do {
                    uVar11 = puVar5[lVar6 + lVar7 + 1];
                    if (uVar11 != 0) {
                      uVar14 = (ulonglong)(iVar4 + (int)lVar7 + 1);
                      uVar12 = 0xffffffff;
                      goto LAB_140c8ab0b;
                    }
                    iVar19 = iVar19 + 0x20;
                    lVar7 = lVar7 + 1;
                  } while (iVar9 - lVar6 != lVar7);
                  uVar12 = 0xffffffff;
                  iVar4 = iVar9;
                }
                uVar14 = (ulonglong)(iVar4 + 1);
                iVar4 = iVar10;
              }
              else {
LAB_140c8ab0b:
                uVar13 = (ulonglong)(-uVar11 & uVar11);
                uVar1 = uVar13 * 2 + 1;
                lVar6 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                  }
                }
                iVar4 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                if (iVar10 <= iVar4) {
                  iVar4 = iVar10;
                }
              }
            } while (iVar4 != iVar17);
          }
        }
LAB_140c8ab38:
        local_100 = local_100 & ~(uint)local_c8;
        plVar16 = (longlong *)local_d0[2];
        if ((longlong *)local_d0[2] == (longlong *)0x0) {
          plVar16 = local_d0;
        }
        iVar17 = (int)local_d0[3];
        iVar4 = (int)local_d8;
        lVar15 = (longlong)iVar4;
        uVar12 = *(uint *)((longlong)plVar16 + lVar15 * 4) & local_100;
        iVar19 = local_ec;
        if (uVar12 == 0) {
          iVar10 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar10 = iVar17 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar19 = local_ec + 0x20;
          iVar8 = iVar10;
          if (iVar10 < iVar4) {
            iVar8 = iVar4;
          }
          if (iVar4 < iVar10) {
            lVar6 = 0;
            do {
              uVar12 = *(uint *)((longlong)plVar16 + lVar6 * 4 + lVar15 * 4 + 4);
              if (uVar12 != 0) {
                local_d8 = (ulonglong)(iVar4 + (int)lVar6 + 1);
                local_100 = 0xffffffff;
                goto LAB_140c8abca;
              }
              iVar19 = iVar19 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar8 - lVar15 != lVar6);
            local_100 = 0xffffffff;
            iVar4 = iVar8;
          }
          local_d8 = (ulonglong)(iVar4 + 1);
          uVar13 = local_c8;
          iVar4 = iVar17;
        }
        else {
LAB_140c8abca:
          uVar13 = (ulonglong)(-uVar12 & uVar12);
          uVar14 = uVar13 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar4 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar4) {
            iVar4 = iVar17;
          }
        }
        param_1 = local_e8;
        iVar17 = local_fc;
        plVar16 = local_d0;
        lVar15 = local_78;
      } while (iVar4 != local_fc || local_d0 != local_e0);
    }
  }
  else {
    local_f8 = (uint *)(param_1 + 0x3f);
    plVar16 = param_1 + 0x41;
    local_b8 = (longlong *)&DAT_100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    uStack_b0 = plVar16;
    if ((int)param_1[0x44] == 0) {
      iVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar17 = (int)local_e8[0x44];
    }
    local_78 = local_a8;
    lVar15 = local_78;
    uStack_70 = uStack_a0;
    local_88 = local_b8;
    uStack_80 = uStack_b0;
    local_90 = local_f8;
    local_78._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    if ((local_78._4_4_ != iVar17) || (uStack_b0 != plVar16)) {
      iVar4 = local_78._4_4_;
      local_78 = lVar15;
      do {
        lVar6 = *(longlong *)local_90;
        lVar15 = lVar6 + (longlong)iVar4 * 0x70;
        lVar7 = lVar15 + 0x28;
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = lVar7;
        if (*(int *)(lVar15 + 0x40) != 0) {
          FUN_1449c0562(&local_68);
        }
        lVar6 = lVar6 + (longlong)iVar4 * 0x70;
        plVar18 = (longlong *)(lVar6 + 0x18);
        uStack_a0 = local_58;
        local_98 = local_50;
        local_94 = local_4c;
        uStack_b0 = local_68;
        local_a8 = local_60;
        uVar12 = *(uint *)(lVar6 + 0x40);
        local_68 = (longlong *)CONCAT44(1 << ((byte)uVar12 & 0x1f),(int)uVar12 >> 5);
        local_58 = CONCAT44(uVar12,-1 << ((byte)uVar12 & 0x1f));
        local_50 = uVar12 & 0xffffffe0;
        local_b8 = plVar18;
        local_60 = lVar7;
        if (*(uint *)(lVar6 + 0x40) != uVar12) {
          FUN_1449c0562(&local_68);
          uVar12 = local_58._4_4_;
        }
        lVar15 = local_60;
        while (((uStack_a0._4_4_ != uVar12 || (local_a8 != lVar15)) || (local_b8 != plVar18))) {
          plVar2 = *(longlong **)(*local_b8 + 0x10 + (longlong)(int)uStack_a0._4_4_ * 0x20);
          if (plVar2 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar2 + 8))(plVar2);
            lVar7 = FUN_14070f4be();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              (*(code *)*local_c0)(local_c0[1],plVar2);
            }
          }
          uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        lVar15 = local_78;
      } while (local_90 != local_f8 || (uStack_80 != plVar16 || local_78._4_4_ != iVar17));
    }
  }
  local_78 = lVar15;
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c8afa4 FUN_140c8afa4 body=2325 status=ok
// SIG undefined FUN_140c8afa4(void)

void FUN_140c8afa4(longlong param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  
  if (*(int *)(param_1 + 0x6c) != *(int *)(param_1 + 0x68)) {
    FUN_140d32cb6(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x78)) {
    FUN_140d32bce(param_1 + 0x70);
  }
  if (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x88)) {
    FUN_140d32ed6(param_1 + 0x80);
  }
  iVar4 = *(int *)(param_1 + 0x3d0);
  if (iVar4 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = -1;
    lVar12 = *(longlong *)(param_1 + 0x3c8);
    if (*(longlong *)(param_1 + 0x3c8) == 0) {
      lVar12 = param_1 + 0x3b8;
    }
    uVar11 = (ulonglong)(iVar4 + 0x1fU >> 5);
    iVar10 = -0x3e - (iVar4 + 0x1fU & 0xffffffe0);
    uVar9 = 0xffffffff >> (-(char)iVar4 & 0x1fU);
    do {
      bVar16 = uVar11 == 0;
      uVar11 = uVar11 - 1;
      if (bVar16) goto LAB_140c8b05c;
      iVar10 = iVar10 + 0x20;
      uVar13 = uVar9 & *(uint *)(lVar12 + uVar11 * 4);
      uVar9 = 0xffffffff;
    } while (uVar13 == 0);
    uVar11 = (ulonglong)uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = -(((uint)lVar12 ^ 0x3f) + iVar10);
  }
LAB_140c8b05c:
  iVar4 = iVar6 + 1;
  iVar10 = *(int *)(param_1 + 0x3b0);
  if (iVar4 < iVar10) {
    if ((0 < *(int *)(param_1 + 0x3dc)) &&
       (uVar11 = (ulonglong)*(uint *)(param_1 + 0x3d8), *(uint *)(param_1 + 0x3d8) != 0xffffffff)) {
      lVar12 = *(longlong *)(param_1 + 0x3a8);
      do {
        lVar14 = (longlong)(int)uVar11 * 0x20;
        if (iVar6 < (int)uVar11) {
          iVar10 = *(int *)(lVar12 + lVar14);
          iVar3 = *(int *)(lVar12 + 4 + lVar14);
          uVar11 = (ulonglong)iVar3;
          if (uVar11 != 0xffffffffffffffff) {
            *(int *)(lVar12 + uVar11 * 0x20) = iVar10;
          }
          if (iVar10 == -1) {
            *(int *)(param_1 + 0x3d8) = iVar3;
          }
          else {
            *(int *)(lVar12 + 4 + (longlong)iVar10 * 0x20) = iVar3;
          }
          *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + -1;
        }
        else {
          uVar11 = (ulonglong)*(uint *)(lVar12 + 4 + lVar14);
        }
      } while ((int)uVar11 != -1);
      iVar10 = *(int *)(param_1 + 0x3b0);
    }
    if (iVar10 != iVar4) {
      *(int *)(param_1 + 0x3b0) = iVar4;
    }
    FUN_144a6134a(param_1 + 0x3b8,iVar4,*(int *)(param_1 + 0x3d0) - iVar4);
    iVar10 = *(int *)(param_1 + 0x3b0);
  }
  if (*(int *)(param_1 + 0x3b4) != iVar10) {
    FUN_1446f4a44(param_1 + 0x3a8,iVar10);
    iVar10 = *(int *)(param_1 + 0x3b0);
  }
  uVar9 = iVar10 - *(int *)(param_1 + 0x3dc);
  iVar4 = 1;
  if (3 < uVar9) {
    uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar12 & 0x1f);
  }
  if ((0 < (int)uVar9 && *(int *)(param_1 + 0x3f0) < iVar4) || (iVar4 < *(int *)(param_1 + 0x3f0)))
  {
    *(int *)(param_1 + 0x3f0) = iVar4;
    FUN_1406b7310(param_1 + 0x3a8);
  }
  if (*(int *)(param_1 + 0x394) != *(int *)(param_1 + 0x390)) {
    FUN_140d32fbe(param_1 + 0x388);
  }
  iVar4 = *(int *)(param_1 + 0x420);
  if (iVar4 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = -1;
    lVar12 = *(longlong *)(param_1 + 0x418);
    if (*(longlong *)(param_1 + 0x418) == 0) {
      lVar12 = param_1 + 0x408;
    }
    uVar11 = (ulonglong)(iVar4 + 0x1fU >> 5);
    iVar10 = -0x3e - (iVar4 + 0x1fU & 0xffffffe0);
    uVar9 = 0xffffffff >> (-(char)iVar4 & 0x1fU);
    do {
      bVar16 = uVar11 == 0;
      uVar11 = uVar11 - 1;
      if (bVar16) goto LAB_140c8b16a;
      iVar10 = iVar10 + 0x20;
      uVar13 = uVar9 & *(uint *)(lVar12 + uVar11 * 4);
      uVar9 = 0xffffffff;
    } while (uVar13 == 0);
    uVar11 = (ulonglong)uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = -(((uint)lVar12 ^ 0x3f) + iVar10);
  }
LAB_140c8b16a:
  iVar4 = iVar6 + 1;
  iVar10 = *(int *)(param_1 + 0x400);
  if (iVar4 < iVar10) {
    if ((0 < *(int *)(param_1 + 0x42c)) &&
       (uVar11 = (ulonglong)*(uint *)(param_1 + 0x428), *(uint *)(param_1 + 0x428) != 0xffffffff)) {
      lVar12 = *(longlong *)(param_1 + 0x3f8);
      do {
        lVar14 = (longlong)(int)uVar11 * 0x20;
        if (iVar6 < (int)uVar11) {
          iVar10 = *(int *)(lVar12 + lVar14);
          iVar3 = *(int *)(lVar12 + 4 + lVar14);
          uVar11 = (ulonglong)iVar3;
          if (uVar11 != 0xffffffffffffffff) {
            *(int *)(lVar12 + uVar11 * 0x20) = iVar10;
          }
          if (iVar10 == -1) {
            *(int *)(param_1 + 0x428) = iVar3;
          }
          else {
            *(int *)(lVar12 + 4 + (longlong)iVar10 * 0x20) = iVar3;
          }
          *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + -1;
        }
        else {
          uVar11 = (ulonglong)*(uint *)(lVar12 + 4 + lVar14);
        }
      } while ((int)uVar11 != -1);
      iVar10 = *(int *)(param_1 + 0x400);
    }
    if (iVar10 != iVar4) {
      *(int *)(param_1 + 0x400) = iVar4;
    }
    FUN_144a6134a(param_1 + 0x408,iVar4,*(int *)(param_1 + 0x420) - iVar4);
    iVar10 = *(int *)(param_1 + 0x400);
  }
  if (*(int *)(param_1 + 0x404) != iVar10) {
    FUN_1446f4a44(param_1 + 0x3f8,iVar10);
    iVar10 = *(int *)(param_1 + 0x400);
  }
  uVar9 = iVar10 - *(int *)(param_1 + 0x42c);
  iVar4 = 1;
  if (3 < uVar9) {
    uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar12 & 0x1f);
  }
  if ((0 < (int)uVar9 && *(int *)(param_1 + 0x440) < iVar4) || (iVar4 < *(int *)(param_1 + 0x440)))
  {
    *(int *)(param_1 + 0x440) = iVar4;
    FUN_1406b7796(param_1 + 0x3f8);
  }
  if (*(int *)(param_1 + 0x2fc) != *(int *)(param_1 + 0x2f8)) {
    FUN_140c8bc4a(param_1 + 0x2f0);
  }
  puVar1 = (uint *)(param_1 + 0x310);
  iVar4 = *(int *)(param_1 + 0x328);
  if (iVar4 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = -1;
    puVar5 = *(uint **)(param_1 + 800);
    if (*(uint **)(param_1 + 800) == (uint *)0x0) {
      puVar5 = puVar1;
    }
    uVar11 = (ulonglong)(iVar4 + 0x1fU >> 5);
    iVar10 = -0x3e - (iVar4 + 0x1fU & 0xffffffe0);
    uVar9 = 0xffffffff >> (-(char)iVar4 & 0x1fU);
    do {
      bVar16 = uVar11 == 0;
      uVar11 = uVar11 - 1;
      if (bVar16) goto LAB_140c8b261;
      iVar10 = iVar10 + 0x20;
      uVar13 = uVar9 & puVar5[uVar11];
      uVar9 = 0xffffffff;
    } while (uVar13 == 0);
    uVar11 = (ulonglong)uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = -(((uint)lVar12 ^ 0x3f) + iVar10);
  }
LAB_140c8b261:
  iVar4 = iVar6 + 1;
  iVar10 = *(int *)(param_1 + 0x308);
  if (iVar4 < iVar10) {
    if ((0 < *(int *)(param_1 + 0x334)) &&
       (uVar11 = (ulonglong)*(uint *)(param_1 + 0x330), *(uint *)(param_1 + 0x330) != 0xffffffff)) {
      lVar12 = *(longlong *)(param_1 + 0x300);
      do {
        lVar14 = (longlong)(int)uVar11;
        if (iVar6 < (int)uVar11) {
          iVar10 = *(int *)(lVar12 + lVar14 * 0x28);
          iVar3 = *(int *)(lVar12 + 4 + lVar14 * 0x28);
          uVar11 = (ulonglong)iVar3;
          if (uVar11 != 0xffffffffffffffff) {
            *(int *)(lVar12 + uVar11 * 0x28) = iVar10;
          }
          if (iVar10 == -1) {
            *(int *)(param_1 + 0x330) = iVar3;
          }
          else {
            *(int *)(lVar12 + 4 + (longlong)iVar10 * 0x28) = iVar3;
          }
          *(int *)(param_1 + 0x334) = *(int *)(param_1 + 0x334) + -1;
        }
        else {
          uVar11 = (ulonglong)*(uint *)(lVar12 + 4 + lVar14 * 0x28);
        }
      } while ((int)uVar11 != -1);
      iVar10 = *(int *)(param_1 + 0x308);
    }
    if (iVar10 != iVar4) {
      *(int *)(param_1 + 0x308) = iVar4;
    }
    FUN_144a6134a(puVar1,iVar4,*(int *)(param_1 + 0x328) - iVar4);
    iVar10 = *(int *)(param_1 + 0x308);
  }
  if (*(int *)(param_1 + 0x30c) != iVar10) {
    FUN_140549ad6(param_1 + 0x300,iVar10);
    iVar10 = *(int *)(param_1 + 0x308);
  }
  uVar9 = iVar10 - *(int *)(param_1 + 0x334);
  iVar4 = 1;
  if (3 < uVar9) {
    uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar12 & 0x1f);
  }
  if ((0 < (int)uVar9 && *(int *)(param_1 + 0x348) < iVar4) || (iVar4 < *(int *)(param_1 + 0x348)))
  {
    *(int *)(param_1 + 0x348) = iVar4;
    FUN_1409c5c0c(param_1 + 0x300);
  }
  iVar4 = *(int *)(param_1 + 0x328);
  if (iVar4 == 0) {
    uVar15 = 1;
    uVar11 = 0;
    iVar6 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 800);
    if (*(uint **)(param_1 + 800) == (uint *)0x0) {
      puVar5 = puVar1;
    }
    uVar9 = *puVar5;
    if (uVar9 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_140c8b41f;
        iVar10 = iVar10 + 0x20;
        uVar9 = puVar5[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar11 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 != iVar4) {
    uVar9 = 0xffffffff;
    do {
      FUN_140c8b8ba(*(undefined8 *)(*(longlong *)(param_1 + 0x300) + 0x10 + (longlong)iVar6 * 0x28))
      ;
      uVar9 = ~(uint)uVar15 & uVar9;
      puVar5 = *(uint **)(param_1 + 800);
      if (*(uint **)(param_1 + 800) == (uint *)0x0) {
        puVar5 = puVar1;
      }
      iVar3 = *(int *)(param_1 + 0x328);
      iVar6 = (int)uVar11;
      lVar12 = (longlong)iVar6;
      uVar13 = puVar5[lVar12] & uVar9;
      if (uVar13 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar6 < iVar7) {
          lVar14 = 0;
          do {
            uVar13 = puVar5[lVar12 + lVar14 + 1];
            if (uVar13 != 0) {
              uVar11 = (ulonglong)(iVar6 + (int)lVar14 + 1);
              uVar9 = 0xffffffff;
              goto LAB_140c8b3e8;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar8 - lVar12 != lVar14);
          uVar9 = 0xffffffff;
          iVar6 = iVar8;
        }
        uVar11 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_140c8b3e8:
        uVar15 = (ulonglong)(-uVar13 & uVar13);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar4);
  }
LAB_140c8b41f:
  iVar4 = *(int *)(param_1 + 0x35c);
  if (iVar4 != *(int *)(param_1 + 0x358)) {
    FUN_1404d18a6((longlong *)(param_1 + 0x350));
    iVar4 = *(int *)(param_1 + 0x358);
  }
  if (iVar4 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x350);
    lVar14 = 0;
    do {
      FUN_140c8b8ba(*(undefined8 *)(lVar12 + lVar14));
      lVar14 = lVar14 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar14);
  }
  iVar4 = *(int *)(param_1 + 0x36c);
  if (iVar4 != *(int *)(param_1 + 0x368)) {
    FUN_14578c6b6((longlong *)(param_1 + 0x360));
    iVar4 = *(int *)(param_1 + 0x368);
  }
  if (iVar4 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x360);
    lVar14 = 0;
    do {
      FUN_14578c668(*(undefined8 *)(lVar12 + lVar14));
      lVar14 = lVar14 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar14);
  }
  FUN_140c8bb18(param_1 + 0x448);
  FUN_140c8bac8(param_1 + 0x448,*(int *)(param_1 + 0x450) - *(int *)(param_1 + 0x47c),1);
  if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xa8)) {
    FUN_140d331dc(param_1 + 0xa0);
  }
  if (*(int *)(param_1 + 0x4a4) != *(int *)(param_1 + 0x4a0)) {
    FUN_140c8bd2c(param_1 + 0x498);
  }
  if (*(int *)(param_1 + 0x4b4) != *(int *)(param_1 + 0x4b0)) {
    FUN_140c8bd2c(param_1 + 0x4a8);
  }
  if (*(int *)(param_1 + 0x4c4) != *(int *)(param_1 + 0x4c0)) {
    FUN_1406b31c8(param_1 + 0x4b8);
  }
  if (*(int *)(param_1 + 0x4d4) == *(int *)(param_1 + 0x4d0)) {
    return;
  }
  FUN_14578c716(param_1 + 0x4c8);
  return;
}



// FUNCTION 140c8b8ba FUN_140c8b8ba body=73 status=ok
// SIG undefined FUN_140c8b8ba(void)

void FUN_140c8b8ba(longlong param_1)

{
  if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x40)) {
    FUN_140c8b9e6(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0x50)) {
    FUN_140c8b904(param_1 + 0x48);
  }
  if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x60)) {
    return;
  }
  FUN_140c8be0e(param_1 + 0x58);
  return;
}



// FUNCTION 140c8b904 FUN_140c8b904 body=226 status=ok
// SIG undefined FUN_140c8b904(void)

void FUN_140c8b904(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 140c8b9e6 FUN_140c8b9e6 body=226 status=ok
// SIG undefined FUN_140c8b9e6(void)

void FUN_140c8b9e6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 140c8bac8 FUN_140c8bac8 body=79 status=ok
// SIG undefined FUN_140c8bac8(void)

undefined8 FUN_140c8bac8(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_1406b6d8c(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140c8bb18 FUN_140c8bb18 body=306 status=ok
// SIG undefined FUN_140c8bb18(void)

void FUN_140c8bb18(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = -1;
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    uVar8 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar7 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar5 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar11 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar11) goto LAB_140c8bb94;
      iVar7 = iVar7 + 0x20;
      uVar9 = uVar5 & *(uint *)((longlong)plVar6 + uVar8 * 4);
      uVar5 = 0xffffffff;
    } while (uVar9 == 0);
    uVar8 = (ulonglong)uVar9 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = -(((uint)lVar3 ^ 0x3f) + iVar7);
  }
LAB_140c8bb94:
  iVar1 = iVar4 + 1;
  iVar7 = (int)param_1[1];
  if (iVar1 < iVar7) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar8 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar3 = *param_1;
      do {
        lVar10 = (longlong)(int)uVar8 * 0x20;
        if (iVar4 < (int)uVar8) {
          iVar7 = *(int *)(lVar3 + lVar10);
          iVar2 = *(int *)(lVar3 + 4 + lVar10);
          uVar8 = (ulonglong)iVar2;
          if (uVar8 != 0xffffffffffffffff) {
            *(int *)(lVar3 + uVar8 * 0x20) = iVar7;
          }
          if (iVar7 == -1) {
            *(int *)(param_1 + 6) = iVar2;
          }
          else {
            *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x20) = iVar2;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar8 = (ulonglong)*(uint *)(lVar3 + 4 + lVar10);
        }
      } while ((int)uVar8 != -1);
      iVar7 = (int)param_1[1];
    }
    if (iVar7 != iVar1) {
      *(int *)(param_1 + 1) = iVar1;
    }
    FUN_144a6134a(param_1 + 2,iVar1,(int)param_1[5] - iVar1);
    iVar7 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar7) {
    return;
  }
  FUN_1446f4a44(param_1,iVar7);
  return;
}



// FUNCTION 140c8bc4a FUN_140c8bc4a body=226 status=ok
// SIG undefined FUN_140c8bc4a(void)

void FUN_140c8bc4a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 140c8bd2c FUN_140c8bd2c body=226 status=ok
// SIG undefined FUN_140c8bd2c(void)

void FUN_140c8bd2c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 140c8be0e FUN_140c8be0e body=332 status=ok
// SIG undefined FUN_140c8be0e(void)

void FUN_140c8be0e(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140c8be7c;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140c8be7c:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x28)) {
      uVar5 = uVar3 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x28,8);
  }
  return;
}



// FUNCTION 140c8bf5a FUN_140c8bf5a body=238 status=ok
// SIG undefined FUN_140c8bf5a(void)

undefined8 FUN_140c8bf5a(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD dwTlsIndex;
  DWORD DVar3;
  LPVOID lpTlsValue;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      dwTlsIndex = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar3 = 0xffffffff;
        LOCK();
        bVar6 = DAT_14c75ec34 != 0xffffffff;
        DVar2 = dwTlsIndex;
        if (bVar6) {
          DVar3 = DAT_14c75ec34;
          DVar2 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar2;
        UNLOCK();
        if (bVar6) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar3;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      if (*(char *)((longlong)lpTlsValue + 0x20) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140c8bfda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x370))();
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 140c8c052 FUN_140c8c052 body=1397 status=ok
// SIG undefined FUN_140c8c052(void)

double * FUN_140c8c052(longlong *param_1,double *param_2,double *param_3,uint param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined8 *local_270;
  undefined1 *local_268;
  undefined4 local_258;
  undefined4 uStack_254;
  double local_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined4 local_1b4;
  byte local_1ab;
  undefined4 local_188;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined2 local_ff;
  undefined1 local_fd;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined2 local_f9;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_298;
  param_2[2] = DAT_14c846508;
  dVar6 = DAT_14c846500;
  *param_2 = DAT_14c8464f8;
  param_2[1] = dVar6;
  uVar12 = SUB84(DAT_14c8464f8,0);
  uVar13 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
  uVar16 = SUB84(DAT_14c846500,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  uVar14 = SUB84(DAT_14c846508,0);
  uVar15 = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
  cVar2 = (**(code **)(param_1[0x1c8] + 0x20))(param_1 + 0x1c8,param_4);
  if (cVar2 != '\0') {
    (**(code **)(param_1[0x1c8] + 0x38))(param_1 + 0x1c8,param_4);
    if ((-1 < (int)param_4) && ((int)param_4 < (int)param_1[0x691])) {
      plVar3 = param_1 + 0x684;
      if ((longlong *)param_1[0x690] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x690];
      }
      uVar5 = (ulonglong)param_4;
      uVar12 = (undefined4)plVar3[uVar5 * 4 + 1];
      uVar13 = (undefined4)((ulonglong)plVar3[uVar5 * 4 + 1] >> 0x20);
      uVar16 = (undefined4)plVar3[uVar5 * 4 + 2];
      uVar17 = (undefined4)((ulonglong)plVar3[uVar5 * 4 + 2] >> 0x20);
      uVar14 = (undefined4)plVar3[uVar5 * 4 + 3];
      uVar15 = (undefined4)((ulonglong)plVar3[uVar5 * 4 + 3] >> 0x20);
    }
  }
  if (param_1[0x7a] == 0) {
    (**(code **)(*param_1 + 0x680))(param_1,&local_258);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x788))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x718))(param_1,&local_128,&local_140);
      local_140 = (double)CONCAT44(uVar13,uVar12) + local_140;
      local_138 = (double)CONCAT44(uVar17,uVar16) + local_138;
      local_130 = (double)CONCAT44(uVar15,uVar14) + local_130;
      dVar6 = (double)FUN_144719204(local_140,0x4076800000000000);
      dVar7 = (double)FUN_144719204(local_138);
      dVar8 = sin(dVar6 * 0.017453292519943295);
      dVar9 = cos(dVar6 * 0.017453292519943295);
      dVar10 = sin(dVar7 * 0.017453292519943295);
      dVar11 = cos(dVar7 * 0.017453292519943295);
      dVar6 = dVar8 * 16384.0 + local_118;
      dVar7 = dVar10 * dVar9 * 16384.0 + local_120;
      dVar8 = dVar11 * dVar9 * 16384.0 + local_128;
      local_158 = dVar8;
      dStack_150 = dVar7;
      local_148 = dVar6;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cbcfb80) {
        FUN_144b3d300(&DAT_14cbcfb80);
        if (DAT_14cbcfb80 == -1) {
          FUN_1446f470e(&DAT_14cbcfb78,L"ThirdPersonAiming",1);
          _Init_thread_footer(&DAT_14cbcfb80);
        }
      }
      lVar1 = param_1[0x7a];
      local_ec = 0;
      local_108 = 0;
      local_e8 = 0x101;
      local_c0 = 0;
      local_b8 = 0x800000000;
      local_a0 = 0;
      local_98 = 0x400000000;
      local_100 = 1;
      local_f4 = 0;
      local_110 = DAT_14cbcfb78;
      local_ff = 1;
      local_fd = 0;
      local_f0 = 0;
      local_fc = 0;
      local_fa = 0;
      if (lVar1 != 0) {
        local_b0 = *(undefined4 *)(lVar1 + 0xc);
        local_98 = 0x400000001;
        local_108 = *(undefined8 *)(lVar1 + 0x18);
      }
      local_f9 = 0x101;
      memset(&local_258,0,0x100);
      local_188 = 0xffffffff;
      uStack_254 = 0x3f800000;
      local_1b4 = 0xffffffff;
      uVar4 = FUN_1447210f0(param_1);
      local_268 = &DAT_14cad0f10;
      local_278 = 4;
      local_270 = &local_110;
      FUN_1400b50cc(uVar4,&local_258,&local_128,&local_158);
      if ((local_1ab & 1) != 0) {
        local_148 = local_238;
        local_158 = local_248;
        dStack_150 = dStack_240;
        dVar6 = local_238;
        dVar7 = dStack_240;
        dVar8 = local_248;
      }
      dVar6 = dVar6 - param_3[2];
      dVar7 = dVar7 - param_3[1];
      dVar8 = dVar8 - *param_3;
      dVar9 = 0.0;
      if ((((dVar7 != 0.0) || (NAN(dVar7))) || (dVar8 != 0.0)) || (NAN(dVar8))) {
        dVar9 = atan2(dVar7,dVar8);
        dVar9 = dVar9 * 57.29577951308232;
      }
      param_2[1] = dVar9;
      dVar8 = SQRT(dVar8 * dVar8 + dVar7 * dVar7);
      dVar7 = 0.0;
      if (((dVar6 != 0.0) || (NAN(dVar6))) || ((dVar8 != 0.0 || (NAN(dVar8))))) {
        dVar7 = atan2(dVar6,dVar8);
        dVar7 = dVar7 * 57.29577951308232;
      }
      *param_2 = dVar7;
      param_2[2] = 0.0;
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      goto LAB_140c8c198;
    }
    (**(code **)(*(longlong *)param_1[0x7a] + 0x720))((longlong *)param_1[0x7a],&local_258);
  }
  *param_2 = (double)CONCAT44(uVar13,uVar12) + (double)CONCAT44(uStack_254,local_258);
  param_2[1] = (double)CONCAT44(uVar17,uVar16) + local_250;
  param_2[2] = (double)CONCAT44(uVar15,uVar14) + local_248;
LAB_140c8c198:
  if ((local_90 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8c5c8 FUN_140c8c5c8 body=61 status=ok
// SIG undefined FUN_140c8c5c8(void)

undefined1 FUN_140c8c5c8(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  uVar2 = 1;
  if (cVar1 == '\0') {
    lVar3 = FUN_140c8d816(param_1 + -0x1c8,param_2);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)(lVar3 + 0x54);
    }
  }
  return uVar2;
}



// FUNCTION 140c8c606 FUN_140c8c606 body=1024 status=ok
// SIG undefined FUN_140c8c606(void)

void FUN_140c8c606(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  float fVar17;
  
  plVar2 = param_1 + -0x1c8;
  plVar6 = param_1 + 0x4bc;
  if ((param_2 < 0) || ((int)param_1[0x4c9] <= param_2)) {
    FUN_14578c776(plVar6,(param_2 - (int)param_1[0x4c9]) + 1);
  }
  plVar5 = (longlong *)param_1[0x4c8];
  if ((longlong *)param_1[0x4c8] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  lVar8 = (longlong)param_2;
  fVar9 = *(float *)(plVar5 + lVar8 * 4);
  lVar4 = FUN_1447210f0(plVar2);
  if ((*(double *)(lVar4 + 0x6d0) == (double)fVar9) &&
     (!NAN(*(double *)(lVar4 + 0x6d0)) && !NAN((double)fVar9))) {
    return;
  }
  plVar5 = (longlong *)param_1[0x4c8];
  if ((longlong *)param_1[0x4c8] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)((longlong)plVar5 + lVar8 * 0x20 + 4));
  plVar5 = (longlong *)param_1[0x4c8];
  if ((longlong *)param_1[0x4c8] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  plVar5[lVar8 * 4 + 3] = DAT_14c846508;
  uVar14 = DAT_14c846500._4_4_;
  uVar13 = (undefined4)DAT_14c846500;
  uVar11 = DAT_14c8464f8._4_4_;
  plVar5 = plVar5 + lVar8 * 4 + 1;
  *(undefined4 *)plVar5 = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)plVar5 + 4) = uVar11;
  *(undefined4 *)(plVar5 + 1) = uVar13;
  *(undefined4 *)((longlong)plVar5 + 0xc) = uVar14;
  lVar4 = FUN_1447210f0(plVar2);
  plVar5 = (longlong *)param_1[0x4c8];
  if ((longlong *)param_1[0x4c8] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  *(float *)(plVar5 + lVar8 * 4) = (float)*(double *)(lVar4 + 0x6d0);
  plVar5 = (longlong *)param_1[0x4c8];
  if ((longlong *)param_1[0x4c8] == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  plVar7 = param_1 + 0x49c;
  if ((longlong *)param_1[0x4ba] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[0x4ba];
  }
  if (param_1[-0x14e] == 0) {
    return;
  }
  iVar1 = *(int *)((longlong)plVar5 + lVar8 * 0x20 + 4);
  dVar12 = (double)FUN_144719204((int)plVar7[(longlong)iVar1 * 0xf + 4],0);
  dVar12 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                   (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
  if ((dVar12 == 0.0) && (!NAN(dVar12))) {
    dVar12 = (double)FUN_144719204((int)plVar7[(longlong)iVar1 * 0xf + 5],0);
    dVar12 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                     (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
    if ((dVar12 == 0.0) && (!NAN(dVar12))) {
      dVar12 = (double)FUN_144719204((int)plVar7[(longlong)iVar1 * 0xf + 6]);
      dVar12 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                       (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
      if ((dVar12 == 0.0) && (!NAN(dVar12))) {
        return;
      }
    }
  }
  lVar4 = FUN_140c8d816(plVar2,param_2);
  if (lVar4 == 0) {
    return;
  }
  plVar2 = (longlong *)param_1[0x2d8];
  if (plVar2 == (longlong *)0x0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)(**(code **)(*plVar2 + 0x6e8))(plVar2);
    fVar9 = tanf(fVar9 * 0.5 * 0.017453292);
    fVar10 = tanf(*(float *)(plVar2 + 0x75) * 0.5 * 0.017453292);
    fVar9 = (float)(-(uint)(0.0 < fVar10) & (uint)(fVar9 / fVar10));
  }
  fVar10 = *(float *)(lVar4 + 0x58);
  fVar17 = *(float *)(lVar4 + 0x5c);
  if (*(char *)(lVar4 + 0x60) == '\x01') {
    fVar9 = powf(fVar9,*(float *)(lVar4 + 100));
  }
  fVar17 = fVar17 * fVar9;
  fVar10 = fVar10 * fVar9;
  fVar9 = *(float *)(plVar7 + (longlong)iVar1 * 0xf + 0xe);
  if ((fVar9 < 0.0) || (fVar10 < fVar9)) {
    fVar9 = *(float *)(plVar7 + (longlong)iVar1 * 0xf + 7);
    if (fVar10 < fVar9) {
      return;
    }
    if (fVar17 < fVar9) {
      fVar10 = 1.0 - (fVar9 - fVar17) / (fVar10 - fVar17);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      dVar12 = (double)((fVar10 * fVar17) / fVar9);
      dVar3 = (double)plVar7[(longlong)iVar1 * 0xf + 6] * dVar12;
      dVar16 = (double)plVar7[(longlong)iVar1 * 0xf + 5] * dVar12;
      dVar12 = dVar12 * (double)plVar7[(longlong)iVar1 * 0xf + 4];
      goto LAB_140c8c94a;
    }
    if ((longlong *)param_1[0x4c8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x4c8];
    }
    plVar6[lVar8 * 4 + 3] = plVar7[(longlong)iVar1 * 0xf + 6];
    uVar11 = (undefined4)plVar7[(longlong)iVar1 * 0xf + 4];
    uVar13 = *(undefined4 *)((longlong)plVar7 + (longlong)iVar1 * 0x78 + 0x24);
    uVar14 = (undefined4)plVar7[(longlong)iVar1 * 0xf + 5];
    uVar15 = *(undefined4 *)((longlong)plVar7 + (longlong)iVar1 * 0x78 + 0x2c);
  }
  else {
    if (fVar17 < fVar9) {
      fVar10 = 1.0 - (fVar9 - fVar17) / (fVar10 - fVar17);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      dVar12 = (double)((fVar10 * fVar17) / fVar9);
      dVar3 = (double)plVar7[(longlong)iVar1 * 0xf + 0xd] * dVar12;
      dVar16 = (double)plVar7[(longlong)iVar1 * 0xf + 0xc] * dVar12;
      dVar12 = dVar12 * (double)plVar7[(longlong)iVar1 * 0xf + 0xb];
LAB_140c8c94a:
      if ((longlong *)param_1[0x4c8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[0x4c8];
      }
      plVar6[lVar8 * 4 + 1] = (longlong)dVar12;
      plVar6[lVar8 * 4 + 2] = (longlong)dVar16;
      plVar6[lVar8 * 4 + 3] = (longlong)dVar3;
      return;
    }
    if ((longlong *)param_1[0x4c8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x4c8];
    }
    plVar6[lVar8 * 4 + 3] = plVar7[(longlong)iVar1 * 0xf + 0xd];
    uVar11 = (undefined4)plVar7[(longlong)iVar1 * 0xf + 0xb];
    uVar13 = *(undefined4 *)((longlong)plVar7 + (longlong)iVar1 * 0x78 + 0x5c);
    uVar14 = (undefined4)plVar7[(longlong)iVar1 * 0xf + 0xc];
    uVar15 = *(undefined4 *)((longlong)plVar7 + (longlong)iVar1 * 0x78 + 100);
  }
  plVar6 = plVar6 + lVar8 * 4 + 1;
  *(undefined4 *)plVar6 = uVar11;
  *(undefined4 *)((longlong)plVar6 + 4) = uVar13;
  *(undefined4 *)(plVar6 + 1) = uVar14;
  *(undefined4 *)((longlong)plVar6 + 0xc) = uVar15;
  return;
}



// FUNCTION 140c8ca06 FUN_140c8ca06 body=3598 status=ok
// SIG undefined FUN_140c8ca06(void)

void FUN_140c8ca06(longlong *param_1,uint param_2)

{
  uint uVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  double *pdVar12;
  longlong *plVar13;
  ulonglong uVar14;
  float *pfVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined1 auStack_208 [32];
  uint local_1e8;
  float local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  double **local_1b0;
  code *local_1a8;
  code *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  longlong *local_180;
  ulonglong local_178;
  double *local_170;
  undefined4 *local_168;
  double *local_160;
  double *local_158;
  double *local_150;
  undefined8 *local_148;
  undefined4 local_13c;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar13 = param_1 + -0x1c8;
  iVar4 = (int)param_1[0x4bb];
  if ((((int)param_2 < 0) || (iVar4 <= (int)param_2)) &&
     (*(uint *)(param_1 + 0x4bb) = param_2 + 1,
     (uint)(*(int *)((longlong)param_1 + 0x25dc) - iVar4) < (param_2 + 1) - iVar4)) {
    FUN_148dbfeda(param_1 + 0x49c);
  }
  plVar6 = param_1 + 0x49c;
  if ((longlong *)param_1[0x4ba] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[0x4ba];
  }
  lVar5 = FUN_1447210f0(plVar13);
  if ((*(double *)(lVar5 + 0x6d0) == (double)*(float *)(plVar6 + (longlong)(int)param_2 * 0xf)) &&
     (!NAN(*(double *)(lVar5 + 0x6d0)) &&
      !NAN((double)*(float *)(plVar6 + (longlong)(int)param_2 * 0xf)))) goto LAB_140c8cd5e;
  pfVar15 = (float *)(plVar6 + (longlong)(int)param_2 * 0xf);
  *(double *)(pfVar15 + 6) = DAT_14c8464f0;
  dVar20 = DAT_14c8464e8;
  *(double *)(pfVar15 + 2) = DAT_14c8464e0;
  *(double *)(pfVar15 + 4) = dVar20;
  *(double *)(pfVar15 + 0x14) = DAT_14c8464f0;
  dVar20 = DAT_14c8464e8;
  *(double *)(pfVar15 + 0x10) = DAT_14c8464e0;
  *(double *)(pfVar15 + 0x12) = dVar20;
  *(longlong *)(pfVar15 + 0xc) = DAT_14c846508;
  lVar5 = DAT_14c846500;
  *(longlong *)(pfVar15 + 8) = DAT_14c8464f8;
  *(longlong *)(pfVar15 + 10) = lVar5;
  lVar5 = DAT_14c846500;
  *(longlong *)(pfVar15 + 0x16) = DAT_14c8464f8;
  *(longlong *)(pfVar15 + 0x18) = lVar5;
  *(longlong *)(pfVar15 + 0x1a) = DAT_14c846508;
  pfVar15[0xe] = -1.0;
  pfVar15[0x1c] = -1.0;
  lVar5 = FUN_1447210f0(plVar13);
  *pfVar15 = (float)*(double *)(lVar5 + 0x6d0);
  plVar6 = (longlong *)FUN_14071752e(plVar13);
  lVar5 = param_1[-0x14e];
  if (lVar5 == 0) goto LAB_140c8cd5e;
  if (DAT_14cb94538 == 0) {
    local_1b0 = &local_170;
    local_170 = (double *)FUN_1449e2820;
    local_1a0 = FUN_14081d0ea;
    local_1a8 = FUN_1427b09ee;
    local_1b8 = &LAB_148a18249;
    local_1c0 = FUN_14657713c;
    local_1c8 = L"Engine";
    local_1d0 = 0;
    local_1d8 = 0x10004001;
    local_1e0 = 1.12104e-44;
    local_1e8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  plVar7 = (longlong *)FUN_144718840(lVar5,DAT_14cb94538);
  if ((plVar6 == (longlong *)0x0) || (plVar7 == (longlong *)0x0)) goto LAB_140c8cd5e;
  uVar8 = (**(code **)(*plVar6 + 0x30))(plVar6);
  plVar9 = (longlong *)FUN_1408a1fe2(uVar8);
  plVar6 = (longlong *)param_1[-0x14e];
  if (plVar6 == (longlong *)0x0) goto LAB_140c8cd5e;
  if (DAT_14cb223d8 == 0) {
    local_1b0 = &local_170;
    local_170 = (double *)FUN_1449e2820;
    local_1a0 = FUN_14081d0ea;
    local_1a8 = FUN_1427b09ee;
    local_1b8 = &LAB_147f29feb;
    local_1c0 = FUN_1464384fe;
    local_1c8 = L"Engine";
    local_1d0 = 0;
    local_1d8 = 0x10004001;
    local_1e0 = 1.12104e-44;
    local_1e8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14cb223d8);
  if (plVar6 == (longlong *)0x0) goto LAB_140c8cd5e;
  if (DAT_14cb223d8 == 0) {
    local_1b0 = &local_170;
    local_170 = (double *)FUN_1449e2820;
    local_1a0 = FUN_14081d0ea;
    local_1a8 = FUN_1427b09ee;
    local_1b8 = &LAB_147f29feb;
    local_1c0 = FUN_1464384fe;
    local_1c8 = L"Engine";
    local_1d0 = 0;
    local_1d8 = 0x10004001;
    local_1e0 = 1.12104e-44;
    local_1e8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar10 = (longlong *)FUN_144718840(plVar6,DAT_14cb223d8);
  if ((((plVar6 == plVar10) || (plVar10 == (longlong *)0x0)) ||
      (lVar5 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar5 == 0)) ||
     ((iVar4 = FUN_14486116a(lVar5,plVar9), plVar9 == (longlong *)0x0 || (iVar4 != 2))))
  goto LAB_140c8cd5e;
  uVar8 = FUN_14069ce7c();
  lVar5 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar8);
  if (lVar5 != 0) {
    uVar8 = FUN_14069ce7c();
    FUN_144718840(lVar5,uVar8);
  }
  lVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
  iVar4 = *(int *)(lVar5 + 0xa8);
  if ((longlong)iVar4 < 1) goto LAB_140c8cd5e;
  local_188 = pfVar15 + 8;
  local_198 = pfVar15 + 0x16;
  local_190 = pfVar15 + 0xe;
  lVar17 = 4;
  uVar14 = 0;
  lVar5 = 0;
  local_180 = plVar9;
  local_178 = (ulonglong)param_2;
  do {
    cVar3 = (**(code **)(*param_1 + 0x20))(param_1,uVar14 & 0xffffffff);
    if (cVar3 != '\0') {
      if ((longlong)uVar14 < (longlong)(int)param_1[0x4c9]) {
        plVar6 = (longlong *)param_1[0x4c8];
        if ((longlong *)param_1[0x4c8] == (longlong *)0x0) {
          plVar6 = param_1 + 0x4bc;
        }
        if (*(int *)((longlong)plVar6 + lVar17) != (int)local_178) goto LAB_140c8cd0c;
      }
      lVar11 = FUN_140c8d816(plVar13,uVar14 & 0xffffffff);
      if ((lVar11 != 0) &&
         ((lVar5 == 0 ||
          (*(float *)(lVar5 + 0x58) <= *(float *)(lVar11 + 0x58) &&
           *(float *)(lVar11 + 0x58) != *(float *)(lVar5 + 0x58))))) {
        lVar5 = lVar11;
      }
    }
LAB_140c8cd0c:
    plVar6 = local_180;
    uVar14 = uVar14 + 1;
    lVar17 = lVar17 + 0x20;
  } while ((longlong)iVar4 != uVar14);
  if (((lVar5 == 0) || (*(float *)(lVar5 + 0x58) <= 0.0)) ||
     ((**(code **)(param_1[-0x1c8] + 0x718))(plVar13,&local_c8,&local_e0),
     *(char *)((longlong)param_1 + 0x2451) != '\0')) goto LAB_140c8cd5e;
  dVar20 = (double)FUN_144719204(local_e0,0x4076800000000000);
  dVar21 = (double)FUN_144719204(local_d8,0x4076800000000000);
  dVar22 = sin(dVar20 * 0.017453292519943295);
  dVar20 = cos(dVar20 * 0.017453292519943295);
  dVar23 = sin(dVar21 * 0.017453292519943295);
  local_f8 = cos(dVar21 * 0.017453292519943295);
  local_f0 = dVar23 * dVar20;
  local_f8 = local_f8 * dVar20;
  dVar23 = (double)*(float *)(lVar5 + 0x3c);
  dVar20 = dVar22 * dVar23 + local_b8;
  dVar21 = local_f0 * dVar23 + dStack_c0;
  dVar23 = local_f8 * dVar23 + local_c8;
  lVar17 = plVar6[0x39];
  if (lVar17 == 0) {
    pdVar12 = &DAT_14c8464e0;
    uVar28 = SUB84(DAT_14c8464f0,0);
    uVar29 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar28 = (undefined4)*(undefined8 *)(lVar17 + 0x270);
    uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x270) >> 0x20);
    pdVar12 = (double *)(lVar17 + 0x260);
  }
  dVar24 = dVar20 - local_b8;
  dVar27 = dVar21 - dStack_c0;
  dVar26 = dVar23 - local_c8;
  dVar25 = ((double)CONCAT44(uVar29,uVar28) - local_b8) * dVar24 +
           (*pdVar12 - local_c8) * dVar26 + (pdVar12[1] - dStack_c0) * dVar27;
  if (dVar25 <= 0.0) {
    local_108 = local_b8;
    local_118 = local_c8;
    dStack_110 = dStack_c0;
  }
  else {
    dVar2 = dVar24 * dVar24 + dVar26 * dVar26 + dVar27 * dVar27;
    local_118 = dVar23;
    dStack_110 = dVar21;
    local_108 = dVar20;
    if (dVar25 < dVar2) {
      dVar25 = dVar25 / dVar2;
      local_118 = dVar26 * dVar25 + local_c8;
      dStack_110 = dVar27 * dVar25 + dStack_c0;
      local_108 = dVar24 * dVar25 + local_b8;
    }
  }
  fVar30 = (float)SQRT((local_108 - local_b8) * (local_108 - local_b8) +
                       (local_118 - local_c8) * (local_118 - local_c8) +
                       (dStack_110 - dStack_c0) * (dStack_110 - dStack_c0));
  local_e8 = dVar22;
  fVar19 = tanf(*(float *)(lVar5 + 0x58) * 0.5 * 0.017453292);
  fVar19 = (fVar30 + 100.0) * fVar19;
  if (*(float *)(lVar5 + 0x3c) - fVar30 <= 0.0001) {
    local_1e8 = local_1e8 & 0xffffff00;
    (**(code **)(*plVar6 + 800))(plVar6,1,&local_170,&local_138);
    if (local_138 <= dStack_130) {
      local_138 = dStack_130;
    }
    if (local_138 <= local_128) {
      local_138 = local_128;
    }
    fVar30 = (float)local_138 + fVar19;
    local_138 = 0.0;
    dStack_130 = 0.0;
    if (fVar30 * fVar30 <
        (float)(((double)local_160 - dVar20) * ((double)local_160 - dVar20) +
               ((double)local_170 - dVar23) * ((double)local_170 - dVar23) +
               ((double)local_168 - dVar21) * ((double)local_168 - dVar21))) goto LAB_140c8cd5e;
  }
  dStack_130 = 0.0;
  local_138 = 0.0;
  local_1e8 = CONCAT31(local_1e8._1_3_,1);
  local_1e0 = fVar19;
  cVar3 = FUN_140c8da72(plVar6,&local_138,&local_118,0x10);
  if (cVar3 == '\0') goto LAB_140c8d37e;
  if (DAT_14cb56270 == 0) {
    local_1b0 = &local_170;
    local_170 = (double *)FUN_1449e2820;
    local_1a0 = FUN_14081d0ea;
    local_1a8 = FUN_1427b09ee;
    local_1b8 = &LAB_148630fef;
    local_1c0 = FUN_1464b6a91;
    local_1c8 = L"Engine";
    local_1d0 = 0;
    local_1d8 = 0x10004001;
    local_1e0 = 1.12104e-44;
    local_1e8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar13 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14cb56270);
  iVar4 = -1;
  uVar14 = 0;
  if (plVar13 == (longlong *)0x0) {
LAB_140c8d30e:
    local_148 = &local_e0;
    local_168 = &local_13c;
    local_13c = 0x40800000;
    local_170 = &local_138;
    local_160 = &local_118;
    local_158 = &local_c8;
    local_150 = &local_f8;
    FUN_140c8dbe8(&local_170,uVar14,local_188,local_190);
    if ((iVar4 != -1) && (iVar4 != (int)uVar14)) {
      FUN_140c8dbe8(&local_170,iVar4,local_198,pfVar15 + 0x1c);
    }
  }
  else {
    if (DAT_14cb56270 == 0) {
      local_1b0 = &local_170;
      local_170 = (double *)FUN_1449e2820;
      local_1a0 = FUN_14081d0ea;
      local_1a8 = FUN_1427b09ee;
      local_1b8 = &LAB_148630fef;
      local_1c0 = FUN_1464b6a91;
      local_1c8 = L"Engine";
      local_1d0 = 0;
      local_1d8 = 0x10004001;
      local_1e0 = 1.12104e-44;
      local_1e8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar6 = (longlong *)FUN_144718840(plVar13,DAT_14cb56270);
    if ((plVar13 == plVar6) || (plVar6 == (longlong *)0x0)) goto LAB_140c8d30e;
    if (0 < dStack_130._0_4_) {
      uVar14 = 0xffffffff;
      lVar17 = 0x24;
      uVar18 = 0;
      do {
        dVar20 = local_138;
        lVar11 = (**(code **)(*plVar6 + 0x20))(plVar6);
        if (lVar11 != 0) {
          iVar4 = *(int *)((longlong)dVar20 + -4 + lVar17);
          if ((iVar4 == 0) || (uVar1 = *(uint *)((longlong)dVar20 + -8 + lVar17), (int)uVar1 < 0)) {
LAB_140c8d470:
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            if ((int)uVar1 < DAT_14c9647dc) {
              puVar16 = (undefined8 *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if (((puVar16 == (undefined8 *)0x0) || (*(int *)(puVar16 + 2) != iVar4)) ||
                 ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) goto LAB_140c8d470;
              uVar8 = *puVar16;
            }
          }
          FUN_1407176ee(lVar11 + 0x270,&local_170,uVar8,*(undefined8 *)((longlong)dVar20 + lVar17));
          lVar11 = FUN_1402179b4(&local_170);
          iVar4 = (int)uVar14;
          if ((lVar11 == 0) && (iVar4 == -1)) {
            uVar14 = uVar18 & 0xffffffff;
          }
          else {
            lVar11 = FUN_1402179b4(&local_170);
            if (lVar11 != 0) {
              lVar11 = FUN_1402179b4(&local_170);
              if ((*(byte *)(lVar11 + 0x18) & 8) == 0) {
                if (iVar4 == -1) {
                  uVar14 = uVar18 & 0xffffffff;
                }
              }
              else {
                dVar21 = *(double *)((longlong)dVar20 + -0x14 + lVar17) - local_b8;
                dVar22 = *(double *)((longlong)dVar20 + -0x1c + lVar17) - dStack_c0;
                dVar23 = *(double *)((longlong)dVar20 + -0x24 + lVar17) - local_c8;
                dVar20 = dVar21 * dVar21 + dVar23 * dVar23 + dVar22 * dVar22;
                if (((dVar20 != 1.0) ||
                    (dVar24 = dVar23, dVar25 = dVar22, dVar26 = dVar21, NAN(dVar20))) &&
                   (dVar24 = DAT_14c8464e0, dVar25 = DAT_14c8464e8, dVar26 = DAT_14c8464f0,
                   9.99999993922529e-09 <= dVar20)) {
                  dVar20 = 1.0 / SQRT(dVar20);
                  dVar24 = dVar23 * dVar20;
                  dVar25 = dVar22 * dVar20;
                  dVar26 = dVar21 * dVar20;
                }
                dVar21 = dVar26 * local_e8 + dVar24 * local_f8 + dVar25 * local_f0;
                dVar20 = dVar21;
                if (1.0 <= dVar21) {
                  dVar20 = 1.0;
                }
                dVar20 = acos((double)(-(ulonglong)(dVar21 < -1.0) & 0xbff0000000000000 |
                                      ~-(ulonglong)(dVar21 < -1.0) & (ulonglong)dVar20));
                if ((float)(dVar20 * 57.29577951308232 + dVar20 * 57.29577951308232) <=
                    *(float *)(lVar5 + 0x58)) {
                  if (iVar4 == -1) {
                    uVar14 = uVar18 & 0xffffffff;
                  }
                  goto LAB_140c8d301;
                }
              }
            }
          }
        }
        uVar18 = uVar18 + 1;
        lVar17 = lVar17 + 0x30;
      } while ((longlong)uVar18 < (longlong)dStack_130._0_4_);
      uVar18 = 0xffffffff;
LAB_140c8d301:
      iVar4 = (int)uVar18;
      if ((int)uVar14 != -1) goto LAB_140c8d30e;
    }
  }
LAB_140c8d37e:
  if (local_138 != 0.0) {
    FUN_1400020a8();
  }
LAB_140c8cd5e:
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c8d816 FUN_140c8d816 body=603 status=ok
// SIG undefined FUN_140c8d816(void)

undefined8 FUN_140c8d816(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    puVar4 = (undefined8 *)(param_1 + 0x3258);
LAB_140c8d83f:
    uVar3 = *puVar4;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x3d0);
    if (lVar2 != 0) {
      if (DAT_14cb94538 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148a18249;
        local_50 = FUN_14657713c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar1 = (longlong *)FUN_144718840(lVar2,DAT_14cb94538);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
        uVar3 = 0;
        if (((int)param_2 < 0) || (*(int *)(lVar2 + 0xa8) <= (int)param_2)) goto LAB_140c8d842;
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x20 + (ulonglong)param_2 * 0x170);
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          FUN_1456cec3c(lVar2);
        }
        else if (lVar2 == 0) goto LAB_140c8da5e;
        if (DAT_14cbbd498 == 0) {
          local_40 = &local_20;
          local_20 = FUN_140940982;
          local_30 = FUN_14081d0ea;
          local_38 = (code *)&LAB_146572ba2;
          local_48 = &LAB_148ca13ba;
          local_50 = (code *)&LAB_140e51436;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0x1068;
          FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
        }
        if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
          puVar4 = (undefined8 *)(lVar2 + 0xf70);
          goto LAB_140c8d83f;
        }
      }
    }
LAB_140c8da5e:
    uVar3 = 0;
  }
LAB_140c8d842:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8da72 FUN_140c8da72 body=373 status=ok
// SIG undefined FUN_140c8da72(void)

bool FUN_140c8da72(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 unaff_RBP;
  longlong lVar4;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_120 [192];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1478c8952(param_2,0);
  }
  local_60 = (undefined1 *)0x0;
  local_58 = 0x1800000000;
  FUN_14024dbd6(param_1,local_120,0);
  if (0 < (int)local_58) {
    lVar4 = 0;
    do {
      puVar3 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar3 = local_120;
      }
      plVar1 = *(longlong **)(puVar3 + lVar4 * 8);
      if ((*(byte *)((longlong)plVar1 + 0x9c) & 1) != 0) {
        iVar2 = (**(code **)(*plVar1 + 0x570))(plVar1);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*plVar1 + 0x578))(plVar1,param_4);
          if (iVar2 == 2) {
            local_138 = param_6;
            (**(code **)(*plVar1 + 0x9b8))
                      (plVar1,param_2,param_3,
                       CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)local_58);
  }
  iVar2 = *(int *)(param_2 + 1);
  if (1 < iVar2) {
    FUN_140c8df38(*param_2,iVar2);
    iVar2 = *(int *)(param_2 + 1);
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return 0 < iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8dbe8 FUN_140c8dbe8 body=848 status=ok
// SIG undefined FUN_140c8dbe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c8dbe8(undefined8 *param_1,int param_2,undefined1 (*param_3) [16],float *param_4)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  pdVar1 = (double *)param_1[2];
  lVar2 = *(longlong *)*param_1;
  lVar3 = (longlong)param_2 * 0x30;
  dVar7 = *(double *)(lVar2 + 0x10 + lVar3);
  dVar4 = dVar7 - pdVar1[2];
  dVar6 = *(double *)(lVar2 + 8 + lVar3);
  dVar11 = dVar6 - pdVar1[1];
  dVar17 = *(double *)(lVar2 + lVar3) - *pdVar1;
  dVar19 = dVar4 * dVar4 + dVar17 * dVar17 + dVar11 * dVar11;
  if (((dVar19 != 1.0) || (dVar18 = dVar17, dVar5 = dVar4, dVar12 = dVar11, NAN(dVar19))) &&
     (dVar18 = DAT_14c8464e0, dVar5 = DAT_14c8464f0, dVar12 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar19)) {
    dVar19 = 1.0 / SQRT(dVar19);
    dVar18 = dVar17 * dVar19;
    dVar5 = dVar4 * dVar19;
    dVar12 = dVar11 * dVar19;
  }
  pdVar1 = (double *)param_1[3];
  dVar7 = (dVar7 + dVar5 * 4.0) - pdVar1[2];
  dVar6 = (dVar6 + dVar12 * 4.0) - pdVar1[1];
  dVar4 = (*(double *)(lVar2 + lVar3) + dVar18 * 4.0) - *pdVar1;
  dVar11 = dVar7 * dVar7 + dVar4 * dVar4 + dVar6 * dVar6;
  if (((dVar11 != 1.0) || (dVar17 = dVar7, dVar19 = dVar6, dVar18 = dVar4, NAN(dVar11))) &&
     (dVar17 = DAT_14c8464f0, dVar19 = DAT_14c8464e8, dVar18 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar11)) {
    dVar11 = 1.0 / SQRT(dVar11);
    dVar17 = dVar7 * dVar11;
    dVar19 = dVar6 * dVar11;
    dVar18 = dVar4 * dVar11;
  }
  pdVar1 = (double *)param_1[4];
  dVar6 = pdVar1[2] * dVar17 + *pdVar1 * dVar18 + pdVar1[1] * dVar19;
  dVar7 = dVar6;
  if (1.0 <= dVar6) {
    dVar7 = 1.0;
  }
  dVar7 = acos((double)(-(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar7));
  *param_4 = (float)(dVar7 * 57.29577951308232 + dVar7 * 57.29577951308232);
  dVar7 = 0.0;
  if (((dVar18 != 0.0) || (NAN(dVar18))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
    dVar7 = atan2(dVar19,dVar18);
    dVar7 = dVar7 * 57.29577951308232;
  }
  dVar4 = SQRT(dVar18 * dVar18 + dVar19 * dVar19);
  dVar6 = 0.0;
  if ((((dVar17 != 0.0) || (NAN(dVar17))) || (dVar4 != 0.0)) || (NAN(dVar4))) {
    dVar6 = atan2(dVar17,dVar4);
    dVar6 = dVar6 * 57.29577951308232;
  }
  pdVar1 = (double *)param_1[5];
  dVar4 = (double)DAT_1499387d0;
  dVar11 = DAT_1499387d0._8_8_;
  auVar13._8_8_ = dVar7 - pdVar1[1];
  auVar13._0_8_ = dVar6 - *pdVar1;
  auVar14 = divpd(auVar13,_DAT_1499387d0);
  auVar8._0_8_ = (0.0 - pdVar1[2]) / 360.0;
  auVar8._8_8_ = 0;
  auVar15 = roundpd(auVar14,auVar14,3);
  auVar14 = roundpd(auVar8,auVar8,3);
  auVar22._0_8_ = (0.0 - pdVar1[2]) - auVar14._0_8_ * dVar4;
  auVar22._8_8_ = 0.0 - auVar14._8_8_ * dVar11;
  dVar6 = (dVar6 - *pdVar1) - auVar15._0_8_ * dVar4;
  dVar7 = (dVar7 - pdVar1[1]) - auVar15._8_8_ * dVar11;
  auVar21._0_8_ = dVar6 + dVar4;
  auVar21._8_8_ = dVar7 + dVar11;
  auVar20._0_8_ = dVar4 + auVar22._0_8_;
  auVar20._8_8_ = dVar11 + auVar22._8_8_;
  auVar15._8_8_ = -(ulonglong)(0.0 <= dVar7);
  auVar15._0_8_ = -(ulonglong)(0.0 <= dVar6);
  auVar14._8_8_ = dVar7;
  auVar14._0_8_ = dVar6;
  auVar8 = blendvpd(auVar21,auVar14,auVar15);
  auVar9._8_8_ = -(ulonglong)(0.0 <= auVar22._8_8_);
  auVar9._0_8_ = -(ulonglong)(0.0 <= auVar22._0_8_);
  auVar14 = blendvpd(auVar20,auVar22,auVar9);
  auVar16._0_8_ = auVar8._0_8_ + -360.0;
  auVar16._8_8_ = auVar8._8_8_ + -360.0;
  auVar10._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
  auVar10._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
  auVar8 = blendvpd(auVar8,auVar16,auVar10);
  dVar7 = auVar14._0_8_;
  *param_3 = auVar8;
  *(ulonglong *)param_3[1] =
       ~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
       (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7);
  return;
}



// FUNCTION 140c8df38 FUN_140c8df38 body=950 status=ok
// SIG undefined FUN_140c8df38(void)

void FUN_140c8df38(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  float fVar27;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = (ulonglong)param_2 * 0x30 + param_1 + -0x30;
    local_368 = param_1;
    fVar27 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar27 + fVar27);
    plVar21 = &local_368;
    do {
      puVar14 = (undefined8 *)*plVar21;
      puVar22 = (undefined8 *)plVar21[1];
      iVar23 = (int)plVar21[2];
      iVar15 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar14) >> 4);
      puVar24 = puVar22;
      puVar25 = puVar14;
      if (iVar23 != 0) {
LAB_140c8dfdf:
        uVar17 = iVar15 * -0x55555555 + 1;
        if (8 < (int)uVar17) {
          uVar18 = (ulonglong)(uVar17 >> 1);
          uVar1 = puVar14[uVar18 * 6];
          uVar2 = (puVar14 + uVar18 * 6)[1];
          uVar3 = puVar14[uVar18 * 6 + 2];
          uVar4 = (puVar14 + uVar18 * 6 + 2)[1];
          uVar5 = puVar14[uVar18 * 6 + 4];
          uVar6 = (puVar14 + uVar18 * 6 + 4)[1];
          uVar7 = *puVar14;
          uVar8 = puVar14[1];
          uVar9 = puVar14[2];
          uVar10 = puVar14[3];
          uVar11 = puVar14[5];
          puVar14[uVar18 * 6 + 4] = puVar14[4];
          (puVar14 + uVar18 * 6 + 4)[1] = uVar11;
          puVar14[uVar18 * 6 + 2] = uVar9;
          (puVar14 + uVar18 * 6 + 2)[1] = uVar10;
          puVar14[uVar18 * 6] = uVar7;
          (puVar14 + uVar18 * 6)[1] = uVar8;
          puVar14[4] = uVar5;
          puVar14[5] = uVar6;
          puVar14[2] = uVar3;
          puVar14[3] = uVar4;
          *puVar14 = uVar1;
          puVar14[1] = uVar2;
          puVar19 = puVar22 + 6;
          puVar16 = puVar14;
          do {
            puVar12 = puVar16 + 6;
            puVar13 = puVar16 + 6;
            do {
              puVar16 = puVar13;
              puVar20 = puVar12;
              if (puVar22 < puVar16) break;
              puVar12 = puVar20 + 6;
              puVar13 = puVar16 + 6;
            } while (*(float *)(puVar16 + 3) < *(float *)(puVar14 + 3) ||
                     *(float *)(puVar16 + 3) == *(float *)(puVar14 + 3));
            puVar12 = puVar19 + -0xc;
            do {
              puVar13 = puVar19;
              puVar26 = puVar12;
              puVar19 = puVar13 + -6;
              if (puVar19 <= puVar14) break;
              puVar12 = puVar26 + -6;
            } while (*(float *)(puVar14 + 3) < *(float *)(puVar13 + -3) ||
                     *(float *)(puVar14 + 3) == *(float *)(puVar13 + -3));
            if (puVar19 < puVar16) goto LAB_140c8e112;
            uVar1 = *puVar16;
            uVar2 = puVar16[1];
            uVar3 = puVar16[2];
            uVar4 = puVar16[3];
            uVar5 = puVar16[4];
            uVar6 = puVar16[5];
            uVar7 = *puVar19;
            uVar8 = puVar13[-5];
            uVar9 = puVar13[-4];
            uVar10 = puVar13[-3];
            uVar11 = puVar13[-1];
            puVar16[4] = puVar13[-2];
            puVar16[5] = uVar11;
            puVar16[2] = uVar9;
            puVar16[3] = uVar10;
            *puVar16 = uVar7;
            puVar16[1] = uVar8;
            puVar13[-2] = uVar5;
            puVar13[-1] = uVar6;
            puVar13[-4] = uVar3;
            puVar13[-3] = uVar4;
            *puVar19 = uVar1;
            puVar13[-5] = uVar2;
          } while( true );
        }
        for (; puVar25 = puVar14, puVar24 = puVar14, puVar14 < puVar22; puVar22 = puVar22 + -6) {
          while (puVar19 = puVar25, puVar24 = puVar24 + 6, puVar24 <= puVar22) {
            puVar25 = puVar24;
            if (*(float *)(puVar24 + 3) < *(float *)(puVar19 + 3) ||
                *(float *)(puVar24 + 3) == *(float *)(puVar19 + 3)) {
              puVar25 = puVar19;
            }
          }
          local_68 = *puVar19;
          uStack_60 = puVar19[1];
          local_58 = puVar19[2];
          uStack_50 = puVar19[3];
          local_48 = puVar19[4];
          uStack_40 = puVar19[5];
          uVar6 = local_68;
          uVar7 = uStack_60;
          uVar1 = *puVar22;
          uVar2 = puVar22[1];
          uVar3 = puVar22[2];
          uVar4 = puVar22[3];
          uVar5 = puVar22[5];
          puVar19[4] = puVar22[4];
          puVar19[5] = uVar5;
          puVar19[2] = uVar3;
          puVar19[3] = uVar4;
          *puVar19 = uVar1;
          puVar19[1] = uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar22[4] = local_48;
          puVar22[5] = uStack_40;
          puVar22[2] = local_58;
          puVar22[3] = uStack_50;
          *(undefined4 *)puVar22 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar22 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_60._4_4_;
          local_68 = uVar6;
          uStack_60 = uVar7;
        }
        goto LAB_140c8e238;
      }
LAB_140c8e2e5:
      FUN_1478c89c3(puVar14);
LAB_140c8e238:
      plVar21 = plVar21 + -3;
    } while (&local_368 <= plVar21);
  }
  if ((local_38 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140c8e112:
  local_68 = *puVar14;
  uStack_60 = puVar14[1];
  local_58 = puVar14[2];
  uStack_50 = puVar14[3];
  local_48 = puVar14[4];
  uStack_40 = puVar14[5];
  uVar6 = local_68;
  uVar7 = uStack_60;
  uVar1 = *puVar19;
  uVar2 = puVar13[-5];
  uVar3 = puVar13[-4];
  uVar4 = puVar13[-3];
  uVar5 = puVar13[-1];
  puVar14[4] = puVar13[-2];
  puVar14[5] = uVar5;
  puVar14[2] = uVar3;
  puVar14[3] = uVar4;
  *puVar14 = uVar1;
  puVar14[1] = uVar2;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar13[-2] = local_48;
  puVar13[-1] = uStack_40;
  puVar13[-4] = local_58;
  puVar13[-3] = uStack_50;
  *(undefined4 *)puVar19 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar13 + -0x2c) = local_68._4_4_;
  *(undefined4 *)(puVar13 + -5) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar13 + -0x24) = uStack_60._4_4_;
  iVar23 = iVar23 + -1;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)puVar26 - (longlong)puVar25 < (longlong)puVar24 - (longlong)puVar20) {
    if (puVar16 < puVar22) {
      *plVar21 = (longlong)puVar16;
      plVar21[1] = (longlong)puVar22;
      *(int *)(plVar21 + 2) = iVar23;
      plVar21 = plVar21 + 3;
    }
    puVar20 = puVar14;
    puVar22 = puVar13 + -0xc;
    if (puVar19 <= puVar14 + 6) goto LAB_140c8e238;
  }
  else {
    if (puVar14 + 6 < puVar19) {
      *plVar21 = (longlong)puVar14;
      plVar21[1] = (longlong)(puVar13 + -0xc);
      *(int *)(plVar21 + 2) = iVar23;
      plVar21 = plVar21 + 3;
    }
    puVar14 = puVar16;
    puVar26 = puVar22;
    if (puVar22 <= puVar16) goto LAB_140c8e238;
  }
  iVar15 = (int)((ulonglong)((longlong)puVar26 - (longlong)puVar20) >> 4);
  puVar24 = puVar26;
  puVar25 = puVar20;
  if (iVar23 == 0) goto LAB_140c8e2e5;
  goto LAB_140c8dfdf;
}



// FUNCTION 140c8e2fc FUN_140c8e2fc body=6717 status=ok
// SIG undefined FUN_140c8e2fc(void)

uint * FUN_140c8e2fc(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  longlong *plVar17;
  uint *puVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong *puVar34;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  uint *local_230;
  longlong *local_228;
  uint local_21c;
  uint *local_218;
  longlong *local_210;
  uint *local_208;
  uint *local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  uint *local_1c8;
  longlong *local_1c0;
  int local_1b8;
  uint local_1b4;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  uint *local_190;
  int *local_188;
  undefined1 local_17c [4];
  undefined4 local_178 [8];
  undefined4 *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_138 [16];
  undefined4 *local_128;
  undefined8 local_120;
  undefined4 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  int local_100;
  undefined4 local_f8 [8];
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(byte *)((longlong)param_3 + 0x10c) & 4) != 0) {
LAB_140c8e87e:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_258);
  }
  lVar7 = FUN_1418518b4();
  local_1b0 = lVar7;
  local_1a8 = param_1;
  local_1a0 = param_3;
  local_198 = param_2;
  FUN_143d8c936();
  local_228 = param_2;
  local_210 = param_3;
  if (param_2[0xd] == 0) {
    local_1d8 = lVar7;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      local_108 = *(undefined ***)param_2[0xf];
      puVar9 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar31 = 1;
        uVar32 = 0;
        iVar30 = 0;
        iVar26 = 0;
      }
      else {
        puVar28 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar28 = puVar9;
        }
        uVar24 = *puVar28;
        if (uVar24 == 0) {
          iVar30 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar30 = iVar22 + -1;
          }
          uVar32 = 0;
          uVar31 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar31 = uVar32;
          }
          iVar30 = 0;
          do {
            if (uVar31 == uVar32) goto LAB_140c8e6a1;
            iVar30 = iVar30 + 0x20;
            uVar24 = puVar28[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar24 == 0);
        }
        else {
          uVar32 = 0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar24 & uVar24);
        uVar1 = uVar31 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar26 = (iVar30 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar26) {
          iVar26 = iVar22;
        }
      }
      if (iVar26 == iVar22) {
LAB_140c8e6a1:
        local_230 = (uint *)0x0;
        puVar28 = local_230;
      }
      else {
        uVar24 = 0xffffffff;
        local_230 = (uint *)0x0;
        iVar15 = iVar22;
        do {
          lVar7 = param_3[0xb];
          lVar23 = (longlong)iVar26 * 200;
          if (*(int *)(lVar7 + 0x60 + lVar23) != *(int *)(lVar7 + 0x8c + lVar23)) {
            lVar33 = lVar7 + lVar23;
            lVar29 = lVar33 + 0x90;
            if (*(longlong *)(lVar33 + 0x98) != 0) {
              lVar29 = *(longlong *)(lVar33 + 0x98);
            }
            iVar26 = *(int *)(lVar29 + (ulonglong)
                                       (*(int *)(lVar33 + 0xa0) - 1U &
                                       (int)local_108 + (int)((ulonglong)local_108 >> 0x20) * 0x17)
                                       * 4);
            if (iVar26 != -1) {
              local_228 = (longlong *)CONCAT44(local_228._4_4_,iVar30);
              plVar17 = (longlong *)(lVar23 + lVar7 + 0x58);
              lVar7 = *plVar17;
              do {
                if (*(undefined ***)(lVar7 + (longlong)iVar26 * 0x10) == local_108) {
                  lVar33 = lVar33 + 8;
                  FUN_140326250(plVar17,&local_108);
                  FUN_140325a06(lVar33,&local_148,&local_108,0);
                  iVar15 = (int)param_3[0x10];
                  local_230 = (uint *)CONCAT71((int7)((ulonglong)lVar33 >> 8),1);
                  break;
                }
                iVar26 = *(int *)((longlong)iVar26 * 0x10 + lVar7 + 8);
              } while (iVar26 != -1);
              iVar30 = (int)local_228;
            }
          }
          uVar24 = uVar24 & ~(uint)uVar31;
          puVar28 = (uint *)param_3[0xf];
          if ((uint *)param_3[0xf] == (uint *)0x0) {
            puVar28 = puVar9;
          }
          iVar26 = (int)uVar32;
          lVar7 = (longlong)iVar26;
          uVar20 = puVar28[lVar7] & uVar24;
          if (uVar20 == 0) {
            iVar13 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar13 = iVar15 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar26) {
              iVar14 = iVar26;
            }
            if (iVar26 < iVar13) {
              lVar23 = 0;
              do {
                uVar20 = puVar28[lVar7 + lVar23 + 1];
                if (uVar20 != 0) {
                  uVar32 = (ulonglong)(iVar26 + (int)lVar23 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_140c8e815;
                }
                iVar30 = iVar30 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar14 - lVar7 != lVar23);
              uVar24 = 0xffffffff;
              iVar26 = iVar14;
            }
            uVar32 = (ulonglong)(iVar26 + 1);
            param_3 = local_210;
            iVar26 = iVar15;
          }
          else {
LAB_140c8e815:
            uVar31 = (ulonglong)(-uVar20 & uVar20);
            uVar1 = uVar31 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar26 = (iVar30 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if (iVar15 <= iVar26) {
              iVar26 = iVar15;
            }
          }
          puVar28 = local_230;
        } while (iVar26 != iVar22);
      }
      goto LAB_140c8fd2b;
    }
    local_1e0 = param_1;
    if ((char)param_2[9] == '\x01') {
      local_128 = (undefined4 *)0x0;
      local_120 = 0x800000000;
      puVar9 = (uint *)(param_3 + 0xd);
      iVar22 = (int)param_3[0x10];
      if (iVar22 == 0) {
        uVar31 = 1;
        puVar28 = (uint *)0x0;
        iVar30 = 0;
        iVar26 = 0;
      }
      else {
        puVar16 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar16 = puVar9;
        }
        uVar24 = *puVar16;
        if (uVar24 == 0) {
          iVar30 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar30 = iVar22 + -1;
          }
          puVar28 = (uint *)0x0;
          puVar18 = (uint *)(ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            puVar18 = puVar28;
          }
          iVar30 = 0;
          do {
            if (puVar18 == puVar28) goto LAB_140c8ee9f;
            iVar30 = iVar30 + 0x20;
            uVar24 = puVar16[(longlong)puVar28 + 1];
            puVar28 = (uint *)((longlong)puVar28 + 1);
          } while (uVar24 == 0);
        }
        else {
          puVar28 = (uint *)0x0;
          iVar30 = 0;
        }
        uVar31 = (ulonglong)(-uVar24 & uVar24);
        uVar32 = uVar31 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar32 != 0) {
          for (; uVar32 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar26 = (iVar30 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar26) {
          iVar26 = iVar22;
        }
      }
      if (iVar26 < iVar22) {
        local_200 = (uint *)(param_3 + 0xb);
        local_1c0 = param_3 + 7;
        uVar24 = 0xffffffff;
        local_1c8 = puVar9;
LAB_140c8e937:
        local_1cc = iVar26;
        puVar18 = (uint *)((longlong)local_1cc * 200 + *(longlong *)local_200);
        puVar16 = puVar18 + 2;
        uVar20 = *puVar18;
        local_230 = puVar16;
        if (((puVar18[4] != puVar18[0xf]) || (puVar18[0x18] != puVar18[0x23])) &&
           ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34))) {
          plVar17 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar17 = local_1c0;
          }
          iVar22 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_3[9] - 1U & uVar20) * 4);
          if (iVar22 != -1) {
            do {
              lVar7 = *param_3 + (longlong)iVar22 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar22 * 0x10) == uVar20) {
                if ((lVar7 != 0) && (lVar7 != -4)) {
                  uVar6 = puVar18[0xc];
                  local_1f0 = CONCAT44(local_1f0._4_4_,iVar30);
                  local_218 = puVar28;
                  local_1f8 = uVar31;
                  local_21c = uVar24;
                  local_1d0 = uVar20;
                  if (uVar6 == 0) {
                    uVar31 = 1;
                    uVar32 = 0;
                    iVar22 = 0;
                    uVar24 = 0;
                    goto LAB_140c8ea91;
                  }
                  puVar28 = *(uint **)(puVar18 + 10);
                  if (*(uint **)(puVar18 + 10) == (uint *)0x0) {
                    puVar28 = puVar18 + 6;
                  }
                  uVar24 = *puVar28;
                  if (uVar24 != 0) {
                    uVar32 = 0;
                    iVar22 = 0;
                    goto LAB_140c8ea58;
                  }
                  iVar22 = uVar6 + 0x1e;
                  if (-1 < (int)(uVar6 - 1)) {
                    iVar22 = uVar6 - 1;
                  }
                  uVar32 = 0;
                  uVar31 = (ulonglong)(uint)(iVar22 >> 5);
                  if (iVar22 >> 5 < 1) {
                    uVar31 = uVar32;
                  }
                  iVar22 = 0;
                  goto LAB_140c8ea3f;
                }
                break;
              }
              iVar22 = *(int *)(lVar7 + 8);
            } while (iVar22 != -1);
          }
        }
        goto LAB_140c8eda2;
      }
LAB_140c8ee9f:
      if (*(int *)((longlong)param_3 + 0x8c) < (int)param_3[0xc]) {
        *(undefined1 *)((longlong)param_2 + 0x4b) = 1;
      }
      puVar8 = local_128;
      if (*(char *)((longlong)param_2 + 0x49) == '\x01') {
        FUN_143d85bf2(param_3);
        puVar8 = local_128;
      }
    }
    else {
      bVar2 = *(byte *)((longlong)param_3 + 0x10c);
      if ((((bVar2 & 1) == 0) &&
          (*(byte *)((longlong)param_3 + 0x10c) = bVar2 | 1, (bVar2 & 2) != 0)) &&
         (*(char *)((longlong)param_2 + 0x4f) != '\0')) {
        *(byte *)((longlong)param_3 + 0x10c) = bVar2 | 5;
        goto LAB_140c8e87e;
      }
      plVar17 = (longlong *)*param_2;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)param_2[1];
        local_d8 = (undefined4 *)0x0;
        local_d0 = 0x800000000;
        cVar5 = FUN_143d8d410(&local_1b0);
        if (cVar5 == '\0') {
LAB_140c8faaa:
          if (local_d8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
LAB_140c8fabc:
          puVar28 = (uint *)0x0;
          goto LAB_140c8fd2b;
        }
        iVar22 = 0;
        local_128 = (undefined4 *)0x0;
        local_120 = 0x800000000;
        local_158 = (undefined4 *)0x0;
        local_150 = 0x800000000;
        plVar11 = local_228;
        if (0 < local_100) {
          plVar25 = param_3 + 7;
          local_1e8 = param_3 + 0xb;
          do {
            plVar11 = local_1e0;
            local_1b4 = 0;
            puVar34 = (ulonglong *)plVar17[1];
            puVar9 = (uint *)*puVar34 + 1;
            if ((uint *)puVar34[1] < puVar9) {
              if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar17 + 0x170))(plVar17,&local_1b4,4);
              }
              else {
                FUN_14572512c(plVar17,&local_1b4);
              }
            }
            else {
              local_1b4 = *(uint *)*puVar34;
              *puVar34 = (ulonglong)puVar9;
            }
            uVar31 = local_120;
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar19 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar19 = plVar25;
              }
              iVar30 = *(int *)((longlong)plVar19 +
                               (ulonglong)((int)param_3[9] - 1U & local_1b4) * 4);
              if (iVar30 != -1) {
                do {
                  lVar7 = *param_3 + (longlong)iVar30 * 0x10;
                  if (*(uint *)(*param_3 + (longlong)iVar30 * 0x10) == local_1b4) {
                    if ((lVar7 != 0) && ((int *)(lVar7 + 4) != (int *)0x0)) {
                      local_1b8 = *(int *)(lVar7 + 4);
                      puVar9 = (uint *)((longlong)local_1b8 * 0x14 + *plVar11);
                      lVar7 = (longlong)(int)local_120;
                      uVar24 = (int)local_120 + 1;
                      local_120 = CONCAT44(local_120._4_4_,uVar24);
                      if (local_120._4_4_ < uVar24) {
                        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
                      }
                      puVar8 = local_128;
                      if (local_128 == (undefined4 *)0x0) {
                        puVar8 = &local_148;
                      }
                      puVar8[lVar7] = local_1b8;
                      goto LAB_140c8f127;
                    }
                    break;
                  }
                  iVar30 = *(int *)(lVar7 + 8);
                } while (iVar30 != -1);
              }
            }
            local_1b8 = 0;
            puVar9 = (uint *)FUN_1488b644a(plVar11);
            *puVar9 = local_1b4;
            local_1b8 = (int)plVar11[1] + -1;
            local_190 = &local_1b4;
            local_188 = &local_1b8;
            FUN_140263e2a(param_3,local_17c,&local_190);
            uVar31 = local_150;
            lVar7 = (longlong)(int)local_150;
            uVar24 = (int)local_150 + 1;
            local_150 = CONCAT44(local_150._4_4_,uVar24);
            if (local_150._4_4_ < uVar24) {
              FUN_1400cc390(local_178,uVar31 & 0xffffffff);
            }
            puVar8 = local_158;
            if (local_158 == (undefined4 *)0x0) {
              puVar8 = local_178;
            }
            puVar8[lVar7] = local_1b8;
LAB_140c8f127:
            plVar11 = local_228;
            puVar9[2] = (uint)local_108;
            puVar9[1] = puVar9[1] + 1;
            lVar7 = local_228[4];
            FUN_144958770(lVar7 + 0x30,0);
            FUN_144958770(lVar7 + 0x80,0);
            *(undefined1 *)(lVar7 + 0x28) = 1;
            puVar28 = (uint *)plVar17[0x15];
            plVar11[7] = local_1d8;
            plVar11[6] = (longlong)puVar9;
            local_190 = puVar28;
            (**(code **)(*(longlong *)plVar11[8] + 8))((longlong *)plVar11[8],plVar11);
            if ((*(byte *)((longlong)plVar17 + 0x29) & 2) == 0) {
              lVar7 = plVar11[4];
              if ((*(int *)(lVar7 + 0x38) == *(int *)(lVar7 + 100)) &&
                 (*(int *)(lVar7 + 0x88) == *(int *)(lVar7 + 0xb4))) {
                FUN_1456fd588(local_1e8,local_1b4);
                plVar11 = local_228;
              }
              else {
                local_208 = (uint *)(lVar7 + 0x30);
                puVar9 = (uint *)FUN_1456fd5f6(local_1e8,local_1b4);
                local_230 = puVar9;
                if (puVar9[2] - puVar9[0xd] == *(int *)(lVar7 + 0x38) - *(int *)(lVar7 + 100)) {
                  local_218 = puVar9 + 4;
                  uVar24 = puVar9[10];
                  if (uVar24 == 0) {
                    uVar32 = 1;
                    uVar31 = 0;
                    iVar30 = 0;
                    uVar20 = 0;
                  }
                  else {
                    puVar16 = *(uint **)(puVar9 + 8);
                    if (*(uint **)(puVar9 + 8) == (uint *)0x0) {
                      puVar16 = local_218;
                    }
                    uVar20 = *puVar16;
                    if (uVar20 == 0) {
                      iVar30 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar30 = uVar24 - 1;
                      }
                      uVar31 = 0;
                      uVar32 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar32 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar32 == uVar31) goto LAB_140c8f34c;
                        iVar30 = iVar30 + 0x20;
                        uVar20 = puVar16[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar20 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar20 & uVar20);
                    uVar1 = uVar32 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar20 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar20) {
                      uVar20 = uVar24;
                    }
                  }
                  if (uVar20 != uVar24) {
                    if (*(uint **)(puVar9 + 8) != (uint *)0x0) {
                      local_218 = *(uint **)(puVar9 + 8);
                    }
                    iVar26 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar26 = uVar24 - 1;
                    }
                    if (*(int *)(lVar7 + 0x38) == *(int *)(lVar7 + 100)) goto LAB_140c8f334;
                    local_1f0 = *(longlong *)puVar9;
                    iVar26 = iVar26 >> 5;
                    local_1f8 = lVar7 + 0x68;
                    if (*(ulonglong *)(lVar7 + 0x70) != 0) {
                      local_1f8 = *(ulonglong *)(lVar7 + 0x70);
                    }
                    local_21c = *(int *)(lVar7 + 0x78) - 1;
                    local_200 = local_218 + 1;
                    uVar6 = 0xffffffff;
                    do {
                      lVar23 = *(longlong *)(local_1f0 + (longlong)(int)uVar20 * 0x10);
                      iVar15 = *(int *)(local_1f8 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       local_21c) * 4);
                      if (iVar15 == -1) goto LAB_140c8f334;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar15 * 0x10) !=
                             lVar23) {
                        iVar15 = *(int *)((longlong)iVar15 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar15 == -1) goto LAB_140c8f334;
                      }
                      uVar6 = uVar6 & ~(uint)uVar32;
                      iVar15 = (int)uVar31;
                      lVar23 = (longlong)iVar15;
                      uVar20 = local_218[lVar23] & uVar6;
                      if (uVar20 == 0) {
                        iVar13 = iVar26;
                        if (iVar26 < iVar15) {
                          iVar13 = iVar15;
                        }
                        if (iVar26 <= iVar15) break;
                        lVar33 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar20 = local_200[lVar23 + lVar33];
                          if (uVar20 != 0) break;
                          lVar33 = lVar33 + 1;
                          if (iVar13 - lVar23 == lVar33) goto LAB_140c8f34c;
                        }
                        uVar31 = (ulonglong)(iVar15 + (int)lVar33 + 1);
                        uVar6 = 0xffffffff;
                      }
                      uVar32 = (ulonglong)(-uVar20 & uVar20);
                      uVar1 = uVar32 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar20 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar20 < (int)uVar24);
                  }
                }
                else {
LAB_140c8f334:
                  FUN_140492002(puVar9,local_208);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_140c8f34c:
                local_208 = (uint *)(lVar7 + 0x80);
                if (local_230[0x16] - local_230[0x21] ==
                    *(int *)(lVar7 + 0x88) - *(int *)(lVar7 + 0xb4)) {
                  local_218 = puVar9 + 0x18;
                  uVar24 = local_230[0x1e];
                  if (uVar24 == 0) {
                    uVar32 = 1;
                    uVar31 = 0;
                    iVar30 = 0;
                    uVar20 = 0;
                  }
                  else {
                    puVar16 = *(uint **)(local_230 + 0x1c);
                    if (*(uint **)(local_230 + 0x1c) == (uint *)0x0) {
                      puVar16 = local_218;
                    }
                    uVar20 = *puVar16;
                    if (uVar20 == 0) {
                      iVar30 = uVar24 + 0x1e;
                      if (-1 < (int)(uVar24 - 1)) {
                        iVar30 = uVar24 - 1;
                      }
                      uVar31 = 0;
                      uVar32 = (ulonglong)(uint)(iVar30 >> 5);
                      if (iVar30 >> 5 < 1) {
                        uVar32 = uVar31;
                      }
                      iVar30 = 0;
                      do {
                        if (uVar32 == uVar31) goto LAB_140c8f464;
                        iVar30 = iVar30 + 0x20;
                        uVar20 = puVar16[uVar31 + 1];
                        uVar31 = uVar31 + 1;
                      } while (uVar20 == 0);
                    }
                    else {
                      uVar31 = 0;
                      iVar30 = 0;
                    }
                    uVar32 = (ulonglong)(-uVar20 & uVar20);
                    uVar1 = uVar32 * 2 + 1;
                    lVar23 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                      }
                    }
                    uVar20 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    if ((int)uVar24 <= (int)uVar20) {
                      uVar20 = uVar24;
                    }
                  }
                  if (uVar20 != uVar24) {
                    if (*(uint **)(local_230 + 0x1c) != (uint *)0x0) {
                      local_218 = *(uint **)(local_230 + 0x1c);
                    }
                    iVar26 = uVar24 + 0x1e;
                    if (-1 < (int)(uVar24 - 1)) {
                      iVar26 = uVar24 - 1;
                    }
                    if (*(int *)(lVar7 + 0x88) == *(int *)(lVar7 + 0xb4)) goto LAB_140c8f44d;
                    iVar26 = iVar26 >> 5;
                    local_1f0 = lVar7 + 0xb8;
                    if (*(longlong *)(lVar7 + 0xc0) != 0) {
                      local_1f0 = *(longlong *)(lVar7 + 0xc0);
                    }
                    uVar6 = *(int *)(lVar7 + 200) - 1;
                    local_1f8 = CONCAT44(local_1f8._4_4_,uVar6);
                    local_200 = local_218 + 1;
                    local_21c = 0xffffffff;
                    do {
                      lVar23 = *(longlong *)
                                (*(longlong *)(local_230 + 0x14) + (longlong)(int)uVar20 * 0x10);
                      iVar15 = *(int *)(local_1f0 +
                                       (ulonglong)
                                       ((int)lVar23 + (int)((ulonglong)lVar23 >> 0x20) * 0x17 &
                                       uVar6) * 4);
                      if (iVar15 == -1) goto LAB_140c8f44d;
                      while (*(longlong *)(*(longlong *)local_208 + (longlong)iVar15 * 0x10) !=
                             lVar23) {
                        iVar15 = *(int *)((longlong)iVar15 * 0x10 + *(longlong *)local_208 + 8);
                        if (iVar15 == -1) goto LAB_140c8f44d;
                      }
                      uVar27 = local_21c & ~(uint)uVar32;
                      iVar15 = (int)uVar31;
                      lVar23 = (longlong)iVar15;
                      uVar20 = local_218[lVar23] & uVar27;
                      if (uVar20 == 0) {
                        iVar13 = iVar26;
                        if (iVar26 < iVar15) {
                          iVar13 = iVar15;
                        }
                        if (iVar26 <= iVar15) break;
                        lVar33 = 0;
                        while( true ) {
                          iVar30 = iVar30 + 0x20;
                          uVar20 = local_200[lVar23 + lVar33];
                          if (uVar20 != 0) break;
                          lVar33 = lVar33 + 1;
                          if (iVar13 - lVar23 == lVar33) goto LAB_140c8f464;
                        }
                        uVar31 = (ulonglong)(iVar15 + (int)lVar33 + 1);
                        local_21c = 0xffffffff;
                        uVar27 = local_21c;
                      }
                      local_21c = uVar27;
                      uVar32 = (ulonglong)(-uVar20 & uVar20);
                      uVar1 = uVar32 * 2 + 1;
                      lVar23 = 0x3f;
                      if (uVar1 != 0) {
                        for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                        }
                      }
                      uVar20 = (iVar30 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
                    } while ((int)uVar20 < (int)uVar24);
                  }
                }
                else {
LAB_140c8f44d:
                  FUN_140492002(puVar9 + 0x14,local_208);
                  *(undefined1 *)((longlong)local_228 + 0x4c) = 1;
                }
LAB_140c8f464:
                puVar16 = local_230;
                local_230[0x2a] = 0;
                if (local_230[0x2b] != 0) {
                  FUN_144893a1c(puVar9 + 0x28,0);
                }
                puVar16[0x2c] = (int)plVar17[0x15] - (int)puVar28;
                FUN_14049209c(&local_190,plVar17,puVar9 + 0x28);
                plVar11 = local_228;
                if (*(int *)(lVar7 + 0x38) != *(int *)(lVar7 + 100)) {
                  *(undefined1 *)((longlong)local_228 + 0x4b) = 1;
                }
              }
            }
            lVar7 = plVar11[4];
            FUN_144958770(lVar7 + 0x30,0);
            FUN_144958770(lVar7 + 0x80,0);
            *(undefined1 *)(lVar7 + 0x28) = 0;
            if ((*(byte *)((longlong)plVar17 + 0x29) & 2) != 0) {
              if (local_158 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_128 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_140c8faaa;
            }
            iVar22 = iVar22 + 1;
            param_3 = local_210;
            plVar11 = local_198;
          } while (iVar22 < local_100);
        }
        plVar17 = local_1a8;
        if (((char)plVar11[10] == '\0') && (iVar22 = (int)local_1a8[1], 0 < iVar22)) {
          uVar31 = 0;
          do {
            uVar32 = local_d0;
            iVar30 = *(int *)(*plVar17 + 8 + uVar31 * 0x14);
            if ((iVar30 < (int)(uint)local_108) && (local_108._4_4_ < iVar30)) {
              puVar8 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar8 = local_f8;
              }
              lVar7 = (longlong)(int)local_d0;
              if (lVar7 != 0) {
                lVar23 = 0;
                do {
                  if (uVar31 == *(uint *)((longlong)puVar8 + lVar23)) goto LAB_140c8fb81;
                  lVar23 = lVar23 + 4;
                } while (lVar7 * 4 - lVar23 != 0);
              }
              uVar24 = (int)local_d0 + 1;
              local_d0 = CONCAT44(local_d0._4_4_,uVar24);
              if (local_d0._4_4_ < uVar24) {
                FUN_1400cc390(local_f8,uVar32 & 0xffffffff);
              }
              puVar8 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar8 = local_f8;
              }
              puVar8[lVar7] = (int)uVar31;
              iVar22 = (int)plVar17[1];
            }
LAB_140c8fb81:
            uVar31 = uVar31 + 1;
          } while ((longlong)uVar31 < (longlong)iVar22);
        }
        if ((0 < (int)local_d0) || (0 < local_100)) {
          FUN_140705914(local_1a0);
        }
        plVar17 = local_1a8;
        puVar8 = local_d8;
        if (local_d8 == (undefined4 *)0x0) {
          puVar8 = local_f8;
        }
        if ((int)local_d0 != 0) {
          local_210 = local_210 + 0xb;
          lVar7 = (longlong)(int)local_d0;
          lVar23 = 0;
          do {
            iVar22 = *(int *)((longlong)puVar8 + lVar23);
            if (((-1 < (longlong)iVar22) && (iVar22 < (int)plVar17[1])) &&
               (iVar22 = FUN_1456fd588(local_210,*(undefined4 *)(*plVar17 + (longlong)iVar22 * 0x14)
                                      ), 0 < iVar22)) {
              *(undefined1 *)((longlong)plVar11 + 0x4c) = 1;
            }
            lVar23 = lVar23 + 4;
          } while (lVar7 * 4 != lVar23);
        }
        plVar17 = local_1a0;
        FUN_143d85bf2(local_1a0);
        if (0 < (int)local_d0) {
          puVar8 = local_d8;
          if (local_d8 == (undefined4 *)0x0) {
            puVar8 = local_f8;
          }
          FUN_144958a06(puVar8);
          plVar11 = local_1a8;
          if (0 < (longlong)(int)local_d0) {
            uVar31 = (longlong)(int)local_d0 + 1;
            do {
              puVar8 = local_d8;
              if (local_d8 == (undefined4 *)0x0) {
                puVar8 = local_f8;
              }
              uVar24 = puVar8[uVar31 - 2];
              if ((-1 < (longlong)(int)uVar24) && (iVar22 = (int)plVar11[1], (int)uVar24 < iVar22))
              {
                iVar30 = ~uVar24 + iVar22;
                if (iVar30 != 0) {
                  if (0 < iVar30) {
                    iVar30 = 1;
                  }
                  memmove((void *)(*plVar11 + (longlong)(int)uVar24 * 0x14),
                          (void *)(*plVar11 + (ulonglong)(uint)(iVar22 - iVar30) * 0x14),
                          (longlong)iVar30 * 0x14);
                  iVar22 = (int)plVar11[1];
                }
                *(int *)(plVar11 + 1) = iVar22 + -1;
              }
              uVar31 = uVar31 - 1;
            } while (1 < uVar31);
          }
          FUN_14010afec(plVar17,0);
        }
        if (local_158 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        puVar8 = local_d8;
        if (local_128 != (undefined4 *)0x0) {
          FUN_1400020a8();
          puVar8 = local_d8;
        }
        goto LAB_140c8fd1f;
      }
      lVar7 = param_2[3];
      if (lVar7 == 0) {
        local_230 = (uint *)CONCAT44(local_230._4_4_,0xffffffff);
        lVar7 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(lVar7 + 0x70);
        cVar5 = FUN_143d8ca1a(&local_1b0,uVar3);
        if (cVar5 == '\0') goto LAB_140c8fabc;
        local_230 = (uint *)CONCAT44(local_230._4_4_,uVar3);
        lVar7 = lVar7 + 0x20;
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = &PTR_FUN_14ab190a0;
      puVar10[8] = 0;
      *(undefined4 *)(puVar10 + 9) = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined8 *)((longlong)puVar10 + 0x4c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar10 + 0x54) = 0;
      puVar10[0xc] = 0;
      *(undefined4 *)(puVar10 + 0xd) = 0;
      *(undefined4 *)(puVar10 + 0xe) = 0xffffffff;
      puVar12 = (undefined8 *)local_228[2];
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_14ab190c0;
      plVar11[2] = (longlong)puVar10;
      if (puVar10 == (undefined8 *)0x0) {
LAB_140c8f85c:
        *puVar12 = puVar10;
        plVar25 = (longlong *)puVar12[1];
        if (plVar11 == plVar25) {
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar25 = plVar11 + 1;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)*plVar25 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar4 = (int *)((longlong)plVar11 + 0xc);
              *piVar4 = *piVar4 + -1;
              iVar22 = *piVar4;
              UNLOCK();
              plVar25 = plVar11;
              goto joined_r0x000140c8f899;
            }
          }
        }
        else {
          puVar12[1] = plVar11;
          if (plVar25 != (longlong *)0x0) goto LAB_140c8f8b5;
        }
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          puVar10[1] = puVar10;
          if ((longlong *)puVar10[2] != plVar11) {
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            plVar25 = (longlong *)puVar10[2];
            if (plVar25 != (longlong *)0x0) {
              LOCK();
              piVar4 = (int *)((longlong)plVar25 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar25 + 0x10))();
              }
            }
            puVar10[2] = plVar11;
          }
          LOCK();
          plVar25 = plVar11 + 1;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)*plVar25 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar4 = (int *)((longlong)plVar11 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          goto LAB_140c8f85c;
        }
        puVar10[1] = puVar10;
        *puVar12 = puVar10;
        plVar25 = (longlong *)puVar12[1];
        if (plVar25 != (longlong *)0x0) {
          puVar12[1] = 0;
LAB_140c8f8b5:
          LOCK();
          plVar11 = plVar25 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar25)(plVar25);
            LOCK();
            piVar4 = (int *)((longlong)plVar25 + 0xc);
            *piVar4 = *piVar4 + -1;
            iVar22 = *piVar4;
            UNLOCK();
joined_r0x000140c8f899:
            if (iVar22 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
            }
          }
        }
      }
      local_148 = *(undefined4 *)((longlong)param_3 + 0x54);
      *(undefined4 *)(puVar10 + 0xe) = local_148;
      local_144 = local_230._0_4_;
      local_140 = 0;
      local_118 = (undefined4 *)0x0;
      local_110 = 0x800000000;
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0x800000000;
      if (*(char *)((longlong)local_228 + 0x4e) == '\x01') {
        FUN_143d8cd08(&local_1b0,puVar10 + 4,&local_108);
      }
      else {
        local_238 = local_138;
        FUN_143d8cdf0(&local_1b0,puVar10 + 4,lVar7,&local_108);
        *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x54);
      }
      local_140 = (int)local_c0;
      FUN_143d8d21e(&local_1b0);
      if (0 < (int)local_c0) {
        lVar7 = 0;
        do {
          puVar12 = local_c8;
          if (local_c8 == (undefined8 *)0x0) {
            puVar12 = &local_108;
          }
          iVar22 = *(int *)(puVar12 + lVar7);
          lVar23 = *local_1e0;
          local_178[0] = *(undefined4 *)((longlong)puVar12 + lVar7 * 8 + 4);
          puVar34 = (ulonglong *)plVar17[1];
          puVar8 = (undefined4 *)*puVar34 + 1;
          if ((undefined4 *)puVar34[1] < puVar8) {
            if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar17 + 0x170))(plVar17,local_178,4);
            }
            else {
              FUN_14572512c(plVar17,local_178);
            }
          }
          else {
            local_178[0] = *(undefined4 *)*puVar34;
            *puVar34 = (ulonglong)puVar8;
          }
          local_228[7] = local_1d8;
          local_228[6] = (longlong)iVar22 * 0x14 + lVar23;
          (**(code **)(*(longlong *)local_228[8] + 8))();
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)local_c0);
      }
      puVar8 = local_118;
      if (local_c8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        puVar8 = local_118;
      }
    }
LAB_140c8fd1f:
    if (puVar8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar22 = (int)param_3[0x10];
    if (iVar22 == 0) {
      uVar31 = 1;
      iVar26 = 0;
      uVar32 = 0;
      iVar30 = 0;
    }
    else {
      puVar9 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar9 = (uint *)(param_3 + 0xd);
      }
      uVar24 = *puVar9;
      if (uVar24 == 0) {
        iVar30 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar30 = iVar22 + -1;
        }
        uVar32 = 0;
        uVar31 = (ulonglong)(uint)(iVar30 >> 5);
        if (iVar30 >> 5 < 1) {
          uVar31 = uVar32;
        }
        iVar26 = 0;
        do {
          if (uVar31 == uVar32) goto LAB_140c8fd29;
          iVar26 = iVar26 + 0x20;
          uVar24 = puVar9[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar24 == 0);
      }
      else {
        iVar26 = 0;
        uVar32 = 0;
      }
      uVar31 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar31 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar30 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar30) {
        iVar30 = iVar22;
      }
    }
    puVar28 = (uint *)0x1;
    if (iVar30 == iVar22) goto LAB_140c8fd2b;
    uVar24 = 0xffffffff;
    local_230 = (uint *)(param_3 + 0xd);
    do {
      lVar7 = local_210[0xb];
      lVar23 = (longlong)iVar30 * 200;
      FUN_1403257c8(param_2[0xd],lVar23 + lVar7 + 8);
      FUN_1403257c8(param_2[0xd],lVar23 + lVar7 + 0x58);
      piVar4 = (int *)param_2[0xe];
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar4 + *(int *)(lVar7 + lVar23 + 0xb0);
      }
      uVar24 = uVar24 & ~(uint)uVar31;
      puVar9 = (uint *)local_210[0xf];
      if ((uint *)local_210[0xf] == (uint *)0x0) {
        puVar9 = local_230;
      }
      iVar15 = (int)local_210[0x10];
      iVar30 = (int)uVar32;
      lVar7 = (longlong)iVar30;
      uVar20 = puVar9[lVar7] & uVar24;
      if (uVar20 == 0) {
        iVar13 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar13 = iVar15 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar26 = iVar26 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar30) {
          iVar14 = iVar30;
        }
        if (iVar30 < iVar13) {
          lVar23 = 0;
          do {
            uVar20 = puVar9[lVar7 + lVar23 + 1];
            if (uVar20 != 0) {
              uVar32 = (ulonglong)(iVar30 + (int)lVar23 + 1);
              uVar24 = 0xffffffff;
              goto LAB_140c8e590;
            }
            iVar26 = iVar26 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar14 - lVar7 != lVar23);
          uVar24 = 0xffffffff;
          iVar30 = iVar14;
        }
        uVar32 = (ulonglong)(iVar30 + 1);
        iVar30 = iVar15;
      }
      else {
LAB_140c8e590:
        uVar31 = (ulonglong)(-uVar20 & uVar20);
        uVar1 = uVar31 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar30 = (iVar26 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar30) {
          iVar30 = iVar15;
        }
      }
    } while (iVar30 != iVar22);
  }
LAB_140c8fd29:
  puVar28 = (uint *)0x1;
LAB_140c8fd2b:
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return puVar28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    iVar22 = iVar22 + 0x20;
    uVar24 = puVar28[uVar32 + 1];
    uVar32 = uVar32 + 1;
    if (uVar24 != 0) break;
LAB_140c8ea3f:
    if (uVar31 == uVar32) goto LAB_140c8ed70;
  }
LAB_140c8ea58:
  uVar31 = (ulonglong)(-uVar24 & uVar24);
  uVar1 = uVar31 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  uVar24 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
  if ((int)uVar6 <= (int)uVar24) {
    uVar24 = uVar6;
  }
LAB_140c8ea91:
  if ((int)uVar24 < (int)uVar6) {
    local_208 = puVar18 + 0x16;
    uVar20 = 0xffffffff;
    local_1e8 = (longlong *)((ulonglong)local_1e8 & 0xffffffff00000000);
    do {
      plVar17 = local_228;
      puVar34 = (ulonglong *)((longlong)(int)uVar24 * 0x10 + *(longlong *)puVar16);
      cVar5 = (**(code **)(*(longlong *)local_228[4] + 0x330))((longlong *)local_228[4],puVar34,0);
      puVar16 = local_230;
      if (cVar5 == '\0') {
        puVar21 = puVar34;
        lVar7 = (**(code **)(*(longlong *)plVar17[4] + 800))((longlong *)plVar17[4],puVar34);
        puVar16 = local_230;
        if (lVar7 != 0) {
          local_1e8 = (longlong *)
                      CONCAT44(local_1e8._4_4_,(int)CONCAT71((int7)((ulonglong)puVar21 >> 8),1));
          if ((*puVar34 & 1) == 0 && *puVar34 != 0) {
            FUN_140325a06(local_208,&local_108,puVar34,0);
          }
          goto LAB_140c8eb27;
        }
      }
      else {
LAB_140c8eb27:
        FUN_140646052(puVar16,uVar24);
      }
      param_2 = local_228;
      uVar20 = uVar20 & ~(uint)uVar31;
      puVar9 = *(uint **)(puVar16 + 8);
      if (*(uint **)(puVar16 + 8) == (uint *)0x0) {
        puVar9 = puVar18 + 6;
      }
      uVar6 = puVar16[10];
      iVar30 = (int)uVar32;
      lVar7 = (longlong)iVar30;
      uVar24 = puVar9[lVar7] & uVar20;
      if (uVar24 == 0) {
        iVar26 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar26 = uVar6 - 1;
        }
        iVar26 = iVar26 >> 5;
        iVar15 = iVar26;
        if (iVar26 < iVar30) {
          iVar15 = iVar30;
        }
        if (iVar26 <= iVar30) break;
        lVar23 = 0;
        while( true ) {
          iVar22 = iVar22 + 0x20;
          uVar24 = puVar9[lVar7 + lVar23 + 1];
          if (uVar24 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar15 - lVar7 == lVar23) goto LAB_140c8ebc5;
        }
        uVar32 = (ulonglong)(iVar30 + (int)lVar23 + 1);
        uVar20 = 0xffffffff;
      }
      uVar31 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar31 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar24 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while ((int)uVar24 < (int)uVar6);
LAB_140c8ebc5:
    puVar9 = local_1c8;
    if (((ulonglong)local_1e8 & 1) != 0) {
      *(undefined1 *)((longlong)local_228 + 0x49) = 1;
      if (*(char *)((longlong)local_228 + 0x4a) == '\0') {
        (**(code **)(*(longlong *)local_228[0xb] + 0x210))();
        *(undefined1 *)((longlong)param_2 + 0x4a) = 1;
      }
      uVar31 = local_120;
      lVar7 = local_1d8;
      if ((int)local_210[1] != *(int *)((longlong)local_210 + 0x34)) {
        plVar17 = (longlong *)local_210[8];
        if ((longlong *)local_210[8] == (longlong *)0x0) {
          plVar17 = local_1c0;
        }
        iVar22 = *(int *)((longlong)plVar17 + (ulonglong)((int)local_210[9] - 1U & local_1d0) * 4);
        if (iVar22 != -1) {
          do {
            lVar23 = *local_210 + (longlong)iVar22 * 0x10;
            if (*(uint *)(*local_210 + (longlong)iVar22 * 0x10) == local_1d0) goto LAB_140c8ec56;
            iVar22 = *(int *)(lVar23 + 8);
          } while (iVar22 != -1);
        }
      }
      lVar23 = 0;
LAB_140c8ec56:
      iVar22 = *(int *)(lVar23 + 4);
      lVar23 = *local_1e0;
      lVar33 = (longlong)(int)local_120;
      uVar24 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,uVar24);
      if (local_120._4_4_ < uVar24) {
        FUN_1400cc390(&local_148,uVar31 & 0xffffffff);
      }
      puVar8 = local_128;
      if (local_128 == (undefined4 *)0x0) {
        puVar8 = &local_148;
      }
      puVar8[lVar33] = iVar22;
      FUN_1448fcc30(&local_108,param_2[4],*(undefined8 *)(local_230 + 0x28),
                    (longlong)(int)local_230[0x2c]);
      param_2[7] = lVar7;
      param_2[6] = (longlong)iVar22 * 0x14 + lVar23;
      param_2[1] = (longlong)&local_108;
      (**(code **)(*(longlong *)param_2[8] + 8))((longlong *)param_2[8],param_2);
      local_108 = &PTR_FUN_149e73df0;
      if (local_50 != 0) {
        (**(code **)(local_50 + -0x10))(local_50 + -0x10);
      }
      puVar9 = local_1c8;
      local_108 = &PTR_FUN_149e37220;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar17 = local_b0;
      local_108 = &PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar17);
      }
      lVar7 = local_90;
      puVar16 = local_230;
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar7);
        puVar16 = local_230;
      }
    }
  }
LAB_140c8ed70:
  uVar20 = (uint)local_1f8;
  param_3 = local_210;
  puVar28 = local_218;
  iVar30 = (int)local_1f0;
  uVar24 = local_21c;
  if ((puVar16[2] == puVar16[0xd]) && (uVar31 = local_1f8, local_230[0x16] == local_230[0x21])) {
LAB_140c8eda2:
    uVar20 = (uint)uVar31;
    FUN_1456fd4bc(local_200,local_1cc);
  }
  uVar24 = uVar24 & ~uVar20;
  puVar16 = (uint *)param_3[0xf];
  if ((uint *)param_3[0xf] == (uint *)0x0) {
    puVar16 = puVar9;
  }
  iVar22 = (int)param_3[0x10];
  iVar26 = (int)puVar28;
  lVar7 = (longlong)iVar26;
  uVar20 = puVar16[lVar7] & uVar24;
  if (uVar20 == 0) {
    iVar15 = iVar22 + 0x1e;
    if (-1 < iVar22 + -1) {
      iVar15 = iVar22 + -1;
    }
    iVar15 = iVar15 >> 5;
    iVar13 = iVar15;
    if (iVar15 < iVar26) {
      iVar13 = iVar26;
    }
    if (iVar15 <= iVar26) goto LAB_140c8ee9f;
    lVar23 = 0;
    while( true ) {
      iVar30 = iVar30 + 0x20;
      uVar20 = puVar16[lVar7 + lVar23 + 1];
      if (uVar20 != 0) break;
      lVar23 = lVar23 + 1;
      if (iVar13 - lVar7 == lVar23) goto LAB_140c8ee9f;
    }
    puVar28 = (uint *)(ulonglong)(iVar26 + (int)lVar23 + 1);
    uVar24 = 0xffffffff;
  }
  uVar31 = (ulonglong)(-uVar20 & uVar20);
  uVar32 = uVar31 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar32 != 0) {
    for (; uVar32 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  iVar26 = (iVar30 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
  if (iVar22 <= iVar26) goto LAB_140c8ee9f;
  goto LAB_140c8e937;
}



// FUNCTION 140c8fd5b FUN_140c8fd5b body=166 status=ok
// SIG undefined FUN_140c8fd5b(void)

undefined1 FUN_140c8fd5b(void)

{
  char cVar1;
  undefined2 *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868254) {
    FUN_144b3d300(&DAT_14c868254);
    if (DAT_14c868254 == -1) {
      cVar1 = FUN_144a65942();
      if (cVar1 == '\0') {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)&DAT_14c846b20;
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
      }
      DAT_14c868250 = FUN_14054d46e(puVar2,L"WaitAndFork");
      _Init_thread_footer(&DAT_14c868254);
    }
  }
  return DAT_14c868250;
}



// FUNCTION 140c8fe02 FUN_140c8fe02 body=62 status=ok
// SIG undefined FUN_140c8fe02(void)

void FUN_140c8fe02(longlong *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_140c8fe40();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x000140c8fe35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 140c8fe40 FUN_140c8fe40 body=57 status=ok
// SIG undefined FUN_140c8fe40(void)

void FUN_140c8fe40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62d98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62d98 = FUN_140002ddd(FUN_1464fafd2,uVar1,L"GbxRotationTargetModifier");
  }
  return;
}



// FUNCTION 140c8fe7a FUN_140c8fe7a body=34 status=ok
// SIG undefined FUN_140c8fe7a(void)

undefined8 FUN_140c8fe7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140c8fe9c(param_2,param_3,param_1);
  return param_2;
}



// FUNCTION 140c8fe9c FUN_140c8fe9c body=153 status=ok
// SIG undefined FUN_140c8fe9c(void)

undefined8 * FUN_140c8fe9c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (((*(byte *)(param_2 + 0x31) & 1) != 0) &&
     (lVar1 = **(longlong **)(param_2 + 0x1b0), lVar1 != 0)) {
    lVar3 = lVar1 + 8;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x88);
    }
    if ((longlong)*(int *)(lVar1 + 0x90) != 0) {
      uVar5 = 0;
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar3 + uVar5) == param_3) {
          if ((int)(~uVar5 >> 5) != 0) {
            plVar2 = *(longlong **)(lVar3 + 8 + (lVar4 >> 0x20) * 0x20);
            (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
            return param_1;
          }
          break;
        }
        lVar4 = lVar4 + 0x100000000;
        uVar5 = uVar5 + 0x20;
      } while ((longlong)*(int *)(lVar1 + 0x90) * 0x20 != uVar5);
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140c8ff36 FUN_140c8ff36 body=91 status=ok
// SIG undefined FUN_140c8ff36(void)

bool FUN_140c8ff36(longlong param_1,int param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((((param_2 < 4) && (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x388) + 8))(), cVar1 != '\0')) &&
     (*(longlong *)(param_1 + 0x390) != 0)) {
    puVar3 = (undefined8 *)(**(code **)(*param_3 + 0x18))(param_3);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x390) + 0x28))
                      (*(longlong **)(param_1 + 0x390),*puVar3);
    return iVar2 == 3;
  }
  return false;
}



// FUNCTION 140c8ff98 FUN_140c8ff98 body=2201 status=ok
// SIG undefined FUN_140c8ff98(void)

void FUN_140c8ff98(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_2c8 [40];
  undefined **local_2a0;
  longlong local_298;
  undefined1 local_290;
  undefined8 local_288 [10];
  undefined8 *local_238;
  undefined8 local_230;
  undefined8 local_228 [16];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined3 local_bb;
  undefined5 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_2a0 = &PTR_FUN_14b423b70;
  local_290 = 0;
  uVar19 = 0;
  local_238 = (undefined8 *)0x0;
  local_230 = 0x400000000;
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = 0x400000000;
  uVar15 = *(uint *)(param_3 + 0x24);
  if (SBORROW4(0,uVar15)) {
    puVar16 = (uint *)(param_3 + 4);
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar16 = (uint *)(param_3 + 0x10);
    }
    uVar15 = *puVar16;
    uVar19 = (ulonglong)puVar16[1];
  }
  local_298 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar23 = *(longlong *)(param_1 + 0x68) + 0x10;
    lVar20 = (longlong)*(int *)(param_1 + 0x70) * 0x120;
    do {
      local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
      cVar10 = FUN_1400f0204(lVar23,0,(ulonglong)uVar15 + (uVar19 << 0x20),&local_158);
      uVar6 = local_230;
      if (cVar10 != '\0') {
        lVar22 = (longlong)(int)local_230;
        uVar14 = (int)local_230 + 1;
        local_230 = CONCAT44(local_230._4_4_,uVar14);
        if (local_230._4_4_ < uVar14) {
          FUN_140c90832(local_288,uVar6 & 0xffffffff);
        }
        puVar17 = local_238;
        if (local_238 == (undefined8 *)0x0) {
          puVar17 = local_288;
        }
        *(undefined8 *)((longlong)puVar17 + lVar22 * 0x14) = 0;
        *(undefined1 *)((longlong)puVar17 + lVar22 * 0x14 + 8) = 2;
        *(undefined4 *)((longlong)puVar17 + lVar22 * 0x14 + 0xc) = 0xffffffff;
        uVar5 = *(undefined8 *)(lVar23 + -8);
        puVar18 = (undefined8 *)((longlong)puVar17 + lVar22 * 0x14);
        *puVar18 = *(undefined8 *)(lVar23 + -0x10);
        puVar18[1] = uVar5;
        *(undefined4 *)((longlong)puVar17 + lVar22 * 0x14 + 0x10) = (undefined4)local_158;
      }
      lVar23 = lVar23 + 0x120;
      lVar20 = lVar20 + -0x120;
    } while (lVar20 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    uVar19 = (ulonglong)uVar15 | uVar19 << 0x20;
    lVar20 = *(longlong *)(param_1 + 0x78) + 0x340;
    lVar23 = (longlong)*(int *)(param_1 + 0x80) * 0x450;
    do {
      local_158 = &DAT_3f8000003f800000;
      uStack_150 = &DAT_3f8000003f800000;
      cVar10 = FUN_1400f0204(lVar20 + -0x330,0,uVar19,&local_158);
      cVar11 = FUN_1400f0204(lVar20 + -0x220,0,uVar19,(longlong)&local_158 + 4);
      cVar12 = FUN_1400f0204(lVar20 + -0x110,0,uVar19,&uStack_150);
      cVar13 = FUN_1400f0204(lVar20,0,uVar19,(longlong)&uStack_150 + 4);
      if ((((cVar10 != '\0') || (cVar11 != '\0')) || (cVar12 != '\0')) || (cVar13 != '\0')) {
        lVar22 = (longlong)(int)local_1a0;
        uVar15 = (int)local_1a0 + 1;
        local_1a0 = CONCAT44(local_1a0._4_4_,uVar15);
        if (local_1a0._4_4_ < uVar15) {
          FUN_148952f32(local_228);
        }
        puVar17 = local_1a8;
        if (local_1a8 == (undefined8 *)0x0) {
          puVar17 = local_228;
        }
        puVar17[lVar22 * 4] = 0;
        *(undefined1 *)(puVar17 + lVar22 * 4 + 1) = 2;
        *(undefined4 *)((longlong)puVar17 + lVar22 * 0x20 + 0xc) = 0xffffffff;
        uVar5 = *(undefined8 *)(lVar20 + -0x338);
        puVar17[lVar22 * 4] = *(undefined8 *)(lVar20 + -0x340);
        (puVar17 + lVar22 * 4)[1] = uVar5;
        uVar7 = local_158._4_4_;
        uVar8 = (undefined4)uStack_150;
        uVar9 = uStack_150._4_4_;
        puVar17 = puVar17 + lVar22 * 4 + 2;
        *(undefined4 *)puVar17 = (undefined4)local_158;
        *(undefined4 *)((longlong)puVar17 + 4) = uVar7;
        *(undefined4 *)(puVar17 + 1) = uVar8;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
      }
      lVar20 = lVar20 + 0x450;
      lVar23 = lVar23 + -0x450;
    } while (lVar23 != 0);
  }
  puVar17 = (undefined8 *)FUN_14001cc68(0x108,8);
  *puVar17 = &PTR_FUN_14b423b70;
  *(undefined1 *)(puVar17 + 2) = local_290;
  puVar17[1] = local_298;
  if (local_238 == (undefined8 *)0x0) {
    puVar18 = local_288;
    puVar21 = puVar17 + 3;
    for (lVar20 = 10; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar21 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  puVar17[0xd] = local_238;
  local_238 = (undefined8 *)0x0;
  *(int *)(puVar17 + 0xe) = (int)local_230;
  *(uint *)((longlong)puVar17 + 0x74) = local_230._4_4_;
  local_230 = 0x400000000;
  if (local_1a8 == (undefined8 *)0x0) {
    puVar18 = local_228;
    puVar21 = puVar17 + 0xf;
    for (lVar20 = 0x10; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar21 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar21 = puVar21 + 1;
    }
  }
  puVar17[0x1f] = local_1a8;
  local_1a8 = (undefined8 *)0x0;
  *(int *)(puVar17 + 0x20) = (int)local_1a0;
  *(uint *)((longlong)puVar17 + 0x104) = local_1a0._4_4_;
  local_1a0 = 0x400000000;
  local_148 = (int)param_5[0x24];
  local_158 = (undefined1 *)param_5[0x22];
  uStack_150 = (undefined1 *)param_5[0x23];
  uStack_144 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
  uStack_140 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
  uStack_13c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
  uStack_138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
  local_130 = (int)param_5[0x27];
  uStack_12c = *(undefined4 *)((longlong)param_5 + 0x13c);
  uStack_128 = (int)param_5[0x28];
  uStack_124 = *(undefined4 *)((longlong)param_5 + 0x144);
  local_120 = (int)param_5[0x29];
  uStack_11c = *(undefined4 *)((longlong)param_5 + 0x14c);
  uStack_118 = (int)param_5[0x2a];
  uStack_114 = *(undefined4 *)((longlong)param_5 + 0x154);
  local_110 = param_5[0x2b];
  local_100 = (int)param_5[0x2d];
  local_108 = param_5[0x2c];
  local_f8 = 0;
  iVar3 = (int)param_5[0x2f];
  lVar20 = param_5[0x2e];
  local_f0 = CONCAT44(local_f0._4_4_,iVar3);
  if (iVar3 == 0) {
    local_f0 = 0;
  }
  else {
    FUN_14753cf4a(&local_f8,iVar3,0);
    FUN_14753cfbd(local_f8,lVar20,iVar3);
  }
  local_e8 = (void *)0x0;
  uVar15 = *(uint *)(param_5 + 0x31);
  pvVar4 = (void *)param_5[0x30];
  local_e0 = CONCAT44(local_e0._4_4_,uVar15);
  if ((longlong)(int)uVar15 == 0) {
    local_e0 = (ulonglong)uVar15;
  }
  else {
    FUN_1456c5740(&local_e8,uVar15,0);
    memcpy(local_e8,pvVar4,(longlong)(int)uVar15 << 3);
  }
  local_d8 = (char)param_5[0x32];
  local_d0 = (void *)0x0;
  uVar15 = *(uint *)(param_5 + 0x34);
  pvVar4 = (void *)param_5[0x33];
  local_c8 = CONCAT44(local_c8._4_4_,uVar15);
  if ((longlong)(int)uVar15 == 0) {
    local_c8 = (ulonglong)uVar15;
  }
  else {
    FUN_1447bda9e(&local_d0,uVar15,0);
    memcpy(local_d0,pvVar4,(longlong)(int)uVar15 << 2);
  }
  uStack_b8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
  uStack_c0 = (undefined5)param_5[0x35];
  local_bb = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
  local_70 = (local_70 & 0xfc) + 1;
  local_b0 = puVar17;
  uStack_a8 = local_198;
  uStack_a4 = uStack_194;
  uStack_a0 = uStack_190;
  uStack_9c = uStack_18c;
  uStack_98 = local_188;
  uStack_94 = uStack_184;
  uStack_90 = uStack_180;
  uStack_8c = uStack_17c;
  local_88 = local_178;
  uStack_84 = uStack_174;
  uStack_80 = uStack_170;
  uStack_7c = uStack_16c;
  local_78 = local_168;
  iVar3 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
    FUN_140ac5684(param_5,iVar3);
  }
  lVar20 = *param_5;
  lVar23 = (longlong)iVar3 * 0xf0;
  *(undefined4 *)(lVar20 + 0x20 + lVar23) = uStack_138;
  puVar17 = (undefined8 *)(lVar20 + 0x10 + lVar23);
  *puVar17 = CONCAT44(uStack_144,local_148);
  puVar17[1] = CONCAT44(uStack_13c,uStack_140);
  *(longlong *)(lVar20 + lVar23) = (longlong)local_158;
  ((longlong *)(lVar20 + lVar23))[1] = (longlong)uStack_150;
  *(longlong *)(lVar20 + 0x48 + lVar23) = local_110;
  puVar1 = (undefined4 *)(lVar20 + 0x38 + lVar23);
  *puVar1 = local_120;
  puVar1[1] = uStack_11c;
  puVar1[2] = uStack_118;
  puVar1[3] = uStack_114;
  puVar1 = (undefined4 *)(lVar20 + 0x28 + lVar23);
  *puVar1 = local_130;
  puVar1[1] = uStack_12c;
  puVar1[2] = uStack_128;
  puVar1[3] = uStack_124;
  *(longlong *)(lVar20 + 0x50 + lVar23) = local_108;
  *(undefined4 *)(lVar20 + 0x58 + lVar23) = local_100;
  *(undefined8 *)(lVar20 + 0x60 + lVar23) = 0;
  *(longlong *)(lVar20 + 0x60 + lVar23) = local_f8;
  local_f8 = 0;
  *(undefined4 *)(lVar20 + 0x68 + lVar23) = (undefined4)local_f0;
  *(undefined4 *)(lVar20 + 0x6c + lVar23) = local_f0._4_4_;
  local_f0 = 0;
  *(undefined8 *)(lVar20 + 0x70 + lVar23) = 0;
  *(void **)(lVar20 + 0x70 + lVar23) = local_e8;
  local_e8 = (void *)0x0;
  *(undefined4 *)(lVar20 + 0x78 + lVar23) = (undefined4)local_e0;
  *(undefined4 *)(lVar20 + 0x7c + lVar23) = local_e0._4_4_;
  local_e0 = 0;
  *(undefined1 *)(lVar20 + 0x80 + lVar23) = local_d8;
  *(undefined8 *)(lVar20 + 0x88 + lVar23) = 0;
  *(void **)(lVar20 + 0x88 + lVar23) = local_d0;
  local_d0 = (void *)0x0;
  *(undefined4 *)(lVar20 + 0x90 + lVar23) = (undefined4)local_c8;
  *(undefined4 *)(lVar20 + 0x94 + lVar23) = local_c8._4_4_;
  local_c8 = 0;
  *(ulonglong *)(lVar20 + 0x9d + lVar23) = CONCAT53(uStack_b8,local_bb);
  *(ulonglong *)(lVar20 + 0x98 + lVar23) = CONCAT35(local_bb,uStack_c0);
  bVar2 = *(byte *)(lVar20 + 0xe8 + lVar23);
  *(byte *)(lVar20 + 0xe8 + lVar23) = bVar2 & 0xfc | 2;
  if ((local_70 & 1) != 0) {
    lVar20 = lVar20 + lVar23;
    *(byte *)(lVar20 + 0xe8) = bVar2 | 3;
    *(byte *)(lVar20 + 0xe8) = *(byte *)(lVar20 + 0xe8) & 0xfd | local_70 & 2;
    *(ulonglong *)(lVar20 + 0xd8) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(lVar20 + 0xe0) = local_78;
    *(ulonglong *)(lVar20 + 200) = CONCAT44(uStack_8c,uStack_90);
    *(ulonglong *)(lVar20 + 0xd0) = CONCAT44(uStack_84,local_88);
    *(undefined4 *)(lVar20 + 0xb8) = uStack_a0;
    *(undefined4 *)(lVar20 + 0xbc) = uStack_9c;
    *(undefined4 *)(lVar20 + 0xc0) = uStack_98;
    *(undefined4 *)(lVar20 + 0xc4) = uStack_94;
    *(undefined4 *)(lVar20 + 0xa8) = (undefined4)local_b0;
    *(undefined4 *)(lVar20 + 0xac) = local_b0._4_4_;
    *(undefined4 *)(lVar20 + 0xb0) = uStack_a8;
    *(undefined4 *)(lVar20 + 0xb4) = uStack_a4;
    local_70 = local_70 & 0xfe;
  }
  if ((local_70 & 1) != 0) {
    puVar17 = &local_b0;
    if ((local_70 & 2) == 0) {
      puVar17 = local_b0;
    }
    local_70 = local_70 & 0xfe;
    (**(code **)*puVar17)(puVar17,0);
    if ((local_70 & 2) == 0) {
      FUN_1400020a8(local_b0);
    }
  }
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_f8,local_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  local_2a0 = &PTR_FUN_14b423b70;
  if (local_1a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_238 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c90832 FUN_140c90832 body=534 status=ok
// SIG undefined FUN_140c90832(void)

void FUN_140c90832(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x58);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 4;
    _Src = *(void **)((longlong)param_1 + 0x50);
joined_r0x000140c909dd:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (4 < *(uint *)((longlong)param_1 + 0x5c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c908bb;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_140c908bb:
    uVar7 = uVar7 / 0x14;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0x7fffffff;
      uVar7 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x50);
    }
    else {
      *(uint *)((longlong)param_1 + 0x5c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x50);
      if (uVar6 < 5) goto joined_r0x000140c909dd;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x50,0,uVar7,0x14);
      memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 * 0x14);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,uVar7,0x14);
  return;
}



// FUNCTION 140c90a48 FUN_140c90a48 body=58 status=ok
// SIG undefined FUN_140c90a48(void)

void FUN_140c90a48(undefined8 param_1)

{
  FUN_140c90a82();
  FUN_140c90fdc(param_1);
  FUN_140c90d7a(param_1);
  FUN_140c90b3e(param_1);
  FUN_140c90c5c(param_1);
  FUN_140c90ea2(param_1);
  return;
}



// FUNCTION 140c90a82 FUN_140c90a82 body=129 status=ok
// SIG undefined FUN_140c90a82(void)

void FUN_140c90a82(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 0x33c) = 1;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      uVar5 = FUN_140c90b04();
      cVar4 = FUN_1448093f4(plVar3,uVar5);
      if ((((cVar4 != '\0') && (plVar3 != (longlong *)0x0)) &&
          (cVar4 = (**(code **)(*plVar3 + 0x18))(plVar3), cVar4 != '\0')) &&
         (cVar4 = (**(code **)(*plVar3 + 0x90))(plVar3), cVar4 == '\0')) {
        *(undefined1 *)(param_1 + 0x33c) = 0;
        return;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 140c90b04 FUN_140c90b04 body=57 status=ok
// SIG undefined FUN_140c90b04(void)

void FUN_140c90b04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22da0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22da0 = FUN_140002ddd(FUN_14643b869,uVar1,L"GpsNodeSettings");
  }
  return;
}



// FUNCTION 140c90b3e FUN_140c90b3e body=227 status=ok
// SIG undefined FUN_140c90b3e(void)

void FUN_140c90b3e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x368) = 0;
  if (*(int *)(param_1 + 0x36c) < 0) {
    FUN_147f5c1ac(plVar1,0);
  }
  lVar6 = FUN_140c90c22();
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        iVar3 = *(int *)(param_1 + 0x368);
        *(uint *)(param_1 + 0x368) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x36c) < iVar3 + 1U) {
          FUN_140c9127e(plVar1,iVar3);
        }
        *(longlong **)(*plVar1 + (longlong)iVar3 * 8) = plVar5;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  return;
}



// FUNCTION 140c90c22 FUN_140c90c22 body=57 status=ok
// SIG undefined FUN_140c90c22(void)

void FUN_140c90c22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22858 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22858 = FUN_140002ddd(FUN_14180e617,uVar1,L"GpsGeneratorSettings");
  }
  return;
}



// FUNCTION 140c90c5c FUN_140c90c5c body=228 status=ok
// SIG undefined FUN_140c90c5c(void)

void FUN_140c90c5c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0x370);
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) < 0) {
    FUN_147f5c20c(plVar1,0);
  }
  lVar6 = FUN_140c90d40();
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        iVar3 = *(int *)(param_1 + 0x378);
        *(uint *)(param_1 + 0x378) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x37c) < iVar3 + 1U) {
          FUN_140c91542(plVar1,iVar3);
        }
        *(longlong **)(*plVar1 + (longlong)iVar3 * 8) = plVar5;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  return;
}



// FUNCTION 140c90d40 FUN_140c90d40 body=57 status=ok
// SIG undefined FUN_140c90d40(void)

void FUN_140c90d40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22c98 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22c98 = FUN_140002ddd(FUN_14643b3d9,uVar1,L"GpsModifierSettings");
  }
  return;
}



// FUNCTION 140c90d7a FUN_140c90d7a body=238 status=ok
// SIG undefined FUN_140c90d7a(void)

void FUN_140c90d7a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)(param_1 + 0x350);
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(int *)(param_1 + 0x35c) < 0) {
    FUN_147f5c14c(plVar1,0);
  }
  lVar6 = FUN_140c90e68();
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar9 = 0;
    iVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar9);
      lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        *(int *)((longlong)plVar5 + 0x3c) = iVar8;
        iVar3 = *(int *)(param_1 + 0x358);
        *(uint *)(param_1 + 0x358) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x35c) < iVar3 + 1U) {
          FUN_140c916a4(plVar1,(longlong)iVar3);
        }
        *(longlong **)(*plVar1 + (longlong)iVar3 * 8) = plVar5;
        iVar8 = iVar8 + 1;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  return;
}



// FUNCTION 140c90e68 FUN_140c90e68 body=57 status=ok
// SIG undefined FUN_140c90e68(void)

void FUN_140c90e68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb225a8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb225a8 = FUN_140002ddd(FUN_146438fab,uVar1,L"GpsConditionSettings");
  }
  return;
}



// FUNCTION 140c90ea2 FUN_140c90ea2 body=255 status=ok
// SIG undefined FUN_140c90ea2(void)

void FUN_140c90ea2(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  plVar1 = (longlong *)(param_1 + 0x380);
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (*(int *)(param_1 + 0x38c) < 0) {
    FUN_147f5c26c(plVar1,0);
  }
  lVar6 = FUN_140c90fa2();
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar8 = 0;
    iVar9 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        *(int *)(plVar5 + 7) = iVar9;
        iVar3 = *(int *)(param_1 + 0x388);
        *(uint *)(param_1 + 0x388) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x38c) < iVar3 + 1U) {
          FUN_140c9111c(plVar1,iVar3);
        }
        *(longlong **)(*plVar1 + (longlong)iVar3 * 8) = plVar5;
        if (0x3e < iVar9) {
          return;
        }
        iVar9 = iVar9 + 1;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  return;
}



// FUNCTION 140c90fa2 FUN_140c90fa2 body=57 status=ok
// SIG undefined FUN_140c90fa2(void)

void FUN_140c90fa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22e00 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22e00 = FUN_140002ddd(FUN_14643b9fc,uVar1,L"GpsResultsNodeSettings");
  }
  return;
}



// FUNCTION 140c90fdc FUN_140c90fdc body=261 status=ok
// SIG undefined FUN_140c90fdc(void)

void FUN_140c90fdc(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)(param_1 + 0x340);
  *(undefined4 *)(param_1 + 0x348) = 0;
  if (*(int *)(param_1 + 0x34c) < 0) {
    FUN_147f5c0ec(plVar1,0);
  }
  lVar6 = FUN_140c910e2();
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar9 = 0;
    iVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar9);
      lVar7 = (**(code **)(*plVar5 + 8))(plVar5);
      if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        *(int *)((longlong)plVar5 + 0x7c) = iVar8;
        iVar3 = *(int *)(param_1 + 0x348);
        *(uint *)(param_1 + 0x348) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x34c) < iVar3 + 1U) {
          FUN_140c913e0(plVar1,iVar3);
        }
        *(longlong **)(*plVar1 + (longlong)iVar3 * 8) = plVar5;
        iVar8 = iVar8 + 1;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  return;
}



// FUNCTION 140c910e2 FUN_140c910e2 body=57 status=ok
// SIG undefined FUN_140c910e2(void)

void FUN_140c910e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22f20 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22f20 = FUN_140002ddd(FUN_14180ec91,uVar1,L"GpsTestSettings");
  }
  return;
}



// FUNCTION 140c9111c FUN_140c9111c body=353 status=ok
// SIG undefined FUN_140c9111c(void)

void FUN_140c9111c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c911a1;
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
LAB_140c911a1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c9127e FUN_140c9127e body=353 status=ok
// SIG undefined FUN_140c9127e(void)

void FUN_140c9127e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c91303;
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
LAB_140c91303:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c913e0 FUN_140c913e0 body=353 status=ok
// SIG undefined FUN_140c913e0(void)

void FUN_140c913e0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c91465;
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
LAB_140c91465:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c91542 FUN_140c91542 body=353 status=ok
// SIG undefined FUN_140c91542(void)

void FUN_140c91542(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c915c7;
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
LAB_140c915c7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c916a4 FUN_140c916a4 body=353 status=ok
// SIG undefined FUN_140c916a4(void)

void FUN_140c916a4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c91729;
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
LAB_140c91729:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c91806 FUN_140c91806 body=151 status=ok
// SIG undefined FUN_140c91806(void)

undefined8 FUN_140c91806(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float extraout_XMM0_Da;
  
  fVar6 = (float)(**(code **)(*param_1 + 0x2b0))();
  if (0.0 < fVar6) {
    if (((int)param_1[0x12] != 0) &&
       ((**(code **)(*param_1 + 0x2b0))(param_1), 0.0 < extraout_XMM0_Da)) {
      return 1;
    }
    iVar3 = (int)param_1[0x19];
    if (0 < iVar3) {
      lVar5 = 0;
      lVar4 = 0;
      do {
        if ((*(char *)(param_1[0x18] + 0x1c + lVar5) == '\x01') &&
           (plVar1 = *(longlong **)(param_1[0x18] + lVar5), plVar1 != (longlong *)0x0)) {
          cVar2 = (**(code **)(*plVar1 + 0x3e0))();
          if (cVar2 != '\0') {
            return 1;
          }
          iVar3 = (int)param_1[0x19];
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x40;
      } while (lVar4 < iVar3);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140c9189e FUN_140c9189e body=40 status=ok
// SIG undefined FUN_140c9189e(void)

bool FUN_140c9189e(longlong *param_1)

{
  bool bVar1;
  float extraout_XMM0_Da;
  
  if ((int)param_1[0x12] == 0) {
    bVar1 = false;
  }
  else {
    (**(code **)(*param_1 + 0x2b0))();
    bVar1 = 0.0 < extraout_XMM0_Da;
  }
  return bVar1;
}



// FUNCTION 140c918c6 FUN_140c918c6 body=1017 status=ok
// SIG undefined FUN_140c918c6(void)

void FUN_140c918c6(byte *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  ushort *puVar13;
  longlong lVar14;
  float *pfVar15;
  byte bVar16;
  byte *pbVar17;
  longlong lVar18;
  int iVar19;
  int *piVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  int *piVar26;
  undefined1 auStack_188 [40];
  byte *local_160;
  ulonglong local_158;
  float *local_150 [2];
  int local_140;
  float *local_138;
  int local_128;
  float *local_120;
  int local_110;
  float *local_108 [2];
  int local_f8;
  float *local_f0;
  int local_e0;
  float *local_d8;
  int local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_140c91cc0(local_c0,param_1);
  if (*param_1 == 1) {
    iVar19 = *(int *)(param_1 + 0x30);
    uVar24 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8);
    iVar19 = *(int *)(param_1 + 0x44) * uVar24;
    bVar16 = 1;
  }
  else {
    puVar13 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar12 = *puVar13;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar13 + 1;
    uVar21 = uVar12 & 0x7fff;
    uVar24 = (uint)(uVar12 >> 0xf);
    lVar25 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar12 < 0) {
      lVar22 = (ulonglong)(uVar21 * *(int *)(lVar25 + 0x80)) + *(longlong *)(lVar25 + 0x70);
    }
    else {
      iVar19 = **(int **)(lVar25 + 0x20);
      lVar22 = 0;
      if (iVar19 <= (int)uVar21) {
        do {
          uVar21 = uVar21 - iVar19;
          iVar19 = (*(int **)(lVar25 + 0x20))[lVar22 + 1];
          lVar22 = lVar22 + 1;
        } while (iVar19 <= (int)uVar21);
      }
      lVar22 = (longlong)(int)uVar21 + *(longlong *)(*(longlong *)(lVar25 + 0x18) + lVar22 * 8);
    }
    iVar19 = *(int *)(lVar25 + 0x4c) * uVar24;
    bVar16 = *param_1;
  }
  if ((bVar16 & 1) == 0) {
    puVar13 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar12 = *puVar13;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar13 + 1;
    uVar21 = uVar12 & 0x7fff;
    lVar14 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar12 < 0) {
      lVar25 = (ulonglong)(uVar21 * *(int *)(lVar14 + 0x80)) + *(longlong *)(lVar14 + 0x70);
    }
    else {
      iVar23 = **(int **)(lVar14 + 0x20);
      lVar25 = 0;
      if (iVar23 <= (int)uVar21) {
        do {
          uVar21 = uVar21 - iVar23;
          iVar23 = (*(int **)(lVar14 + 0x20))[lVar25 + 1];
          lVar25 = lVar25 + 1;
        } while (iVar23 <= (int)uVar21);
      }
      lVar25 = (longlong)(int)uVar21 + *(longlong *)(*(longlong *)(lVar14 + 0x18) + lVar25 * 8);
    }
    uVar21 = (uint)(uVar12 >> 0xf);
    pbVar17 = (byte *)(lVar14 + 0x4c);
  }
  else {
    iVar23 = *(int *)(param_1 + 0x30);
    uVar21 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar23);
    *(int *)(param_1 + 0x30) = iVar23 + 1;
    lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar23 * 8);
    pbVar17 = param_1 + 0x44;
  }
  iVar23 = *(int *)pbVar17;
  FUN_1448a432c(local_108,param_1);
  FUN_1448a432c(local_150,param_1);
  lVar14 = *local_b8;
  if (lVar14 != 0) {
    bVar16 = *param_1;
    lVar18 = *(longlong *)(param_1 + 0x80);
    pbVar17 = (byte *)(lVar18 + 0x40);
    if (bVar16 != 0) {
      pbVar17 = param_1 + 0x3c;
    }
    if (0 < *(int *)pbVar17) {
      piVar20 = (int *)(lVar22 + (longlong)iVar19 * 4);
      piVar26 = (int *)(lVar25 + (longlong)(int)(iVar23 * uVar21) * 4);
      local_158 = (ulonglong)(uVar24 << 2);
      iVar19 = 0;
      local_160 = param_1 + 0x3c;
      do {
        iVar23 = *piVar26;
        pfVar1 = local_d8 + local_c8;
        fVar6 = *local_d8;
        pfVar2 = local_f0 + local_e0;
        fVar7 = *local_f0;
        pfVar3 = local_108[0] + local_f8;
        fVar8 = *local_108[0];
        pfVar4 = local_120 + local_110;
        fVar9 = *local_120;
        pfVar5 = local_138 + local_128;
        fVar10 = *local_138;
        pfVar15 = local_150[0] + local_140;
        local_138 = pfVar5;
        local_120 = pfVar4;
        local_108[0] = pfVar3;
        local_f0 = pfVar2;
        local_d8 = pfVar1;
        if (*piVar20 != 0) {
          fVar11 = *local_150[0];
          local_150[0] = local_150[0] + local_140;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar14 + 0x150));
          *(double *)(lVar14 + 0x158) = (double)fVar8;
          *(double *)(lVar14 + 0x160) = (double)fVar7;
          *(double *)(lVar14 + 0x168) = (double)fVar6;
          *(double *)(lVar14 + 0x170) = (double)fVar11;
          *(double *)(lVar14 + 0x178) = (double)fVar10;
          *(double *)(lVar14 + 0x180) = (double)fVar9;
          *(bool *)(lVar14 + 0x188) = iVar23 != 0;
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar14 + 0x150));
          bVar16 = *param_1;
          lVar18 = *(longlong *)(param_1 + 0x80);
          pfVar15 = local_150[0];
        }
        local_150[0] = pfVar15;
        iVar19 = iVar19 + 1;
        pbVar17 = (byte *)(lVar18 + 0x40);
        if ((bVar16 & 1) != 0) {
          pbVar17 = local_160;
        }
        piVar26 = (int *)((longlong)piVar26 + (ulonglong)(uVar21 << 2));
        piVar20 = (int *)((longlong)piVar20 + local_158);
      } while (iVar19 < *(int *)pbVar17);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c91cc0 FUN_140c91cc0 body=148 status=ok
// SIG undefined FUN_140c91cc0(void)

void FUN_140c91cc0(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 140c91d54 FUN_140c91d54 body=66 status=ok
// SIG undefined FUN_140c91d54(void)

void FUN_140c91d54(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_140ac1c72(puVar1,uVar2);
  puVar1[7] = 0;
  puVar1[8] = 0;
  *puVar1 = &PTR_FUN_14b949340;
  FUN_140c91d96(puVar1 + 9);
  *(undefined4 *)(puVar1 + 0x16) = 0;
  return;
}



// FUNCTION 140c91d96 FUN_140c91d96 body=184 status=ok
// SIG undefined FUN_140c91d96(void)

undefined8 * FUN_140c91d96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8028e0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  FUN_14020a6cc(param_1 + 2,1);
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  FUN_14020a6cc(param_1 + 5,1);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x1c,1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x34,1);
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  FUN_14020a6cc(param_1 + 8,1);
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x4c,1);
  return param_1;
}



// FUNCTION 140c91e4e FUN_140c91e4e body=24 status=ok
// SIG undefined FUN_140c91e4e(void)

void FUN_140c91e4e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c91e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140c91e66 FUN_140c91e66 body=29 status=ok
// SIG undefined FUN_140c91e66(void)

undefined8 FUN_140c91e66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c91e84 FUN_140c91e84 body=358 status=ok
// SIG undefined FUN_140c91e84(void)

undefined8 *
FUN_140c91e84(undefined8 *param_1,ulonglong param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  
  uVar3 = 0x7fffffffffffffff;
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  param_2 = param_2 + _Size;
  uVar1 = param_1[3];
  uVar2 = 0x8000000000000000;
  if ((-1 < (longlong)param_2) &&
     (uVar2 = 0x8000000000000000, uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar3 = (uVar1 >> 1) + uVar1;
    if (uVar3 < (param_2 | 0xf)) {
      uVar3 = param_2 | 0xf;
    }
    uVar2 = uVar3 + 1;
    if (uVar2 < 0x1000) {
      if (uVar2 == 0) {
        uVar3 = 0xffffffffffffffff;
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(uVar2,0x10);
      }
      goto LAB_140c91f1e;
    }
  }
  _Dst = (void *)FUN_140c1ca1d(uVar2);
LAB_140c91f1e:
  param_1[2] = param_2;
  param_1[3] = uVar3;
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),param_4,param_5);
    *(undefined1 *)(param_5 + (longlong)(_Size + (longlong)_Dst)) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memcpy((void *)(_Size + (longlong)_Dst),param_4,param_5);
    *(undefined1 *)(param_5 + (longlong)(_Size + (longlong)_Dst)) = 0;
    pvVar4 = _Src;
    if ((uVar1 - 0xfff < 0xfffffffffffff000) &&
       (pvVar4 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(pvVar4);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 140c91fec FUN_140c91fec body=20448 status=ok
// SIG undefined FUN_140c91fec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c91fec(ulonglong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 uVar8;
  ushort uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
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
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  longlong *plVar39;
  char cVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  undefined4 uVar45;
  int iVar46;
  uint *puVar47;
  undefined8 *puVar48;
  longlong *plVar49;
  uint *puVar50;
  LARGE_INTEGER LVar51;
  undefined8 *puVar52;
  LARGE_INTEGER *pLVar53;
  undefined8 uVar54;
  longlong *plVar55;
  byte bVar56;
  double *pdVar57;
  void *pvVar58;
  byte *pbVar59;
  longlong *plVar60;
  byte bVar61;
  longlong *plVar62;
  longlong *plVar63;
  undefined2 *puVar64;
  uint uVar65;
  void *pvVar66;
  bool bVar67;
  longlong lVar68;
  undefined8 *puVar69;
  uint uVar70;
  longlong lVar71;
  void *pvVar72;
  undefined1 *puVar73;
  longlong *plVar74;
  DWORD DVar75;
  longlong lVar76;
  ulonglong uVar77;
  LARGE_INTEGER LVar78;
  byte bVar79;
  bool bVar80;
  ulonglong uVar81;
  longlong *plVar82;
  int iVar83;
  longlong *plVar84;
  longlong lVar85;
  undefined8 *puVar86;
  undefined8 *puVar87;
  ulonglong uVar88;
  longlong lVar89;
  longlong *plVar90;
  ulonglong uVar91;
  longlong lVar92;
  float fVar93;
  undefined4 uVar94;
  double dVar95;
  double dVar96;
  undefined1 auVar97 [16];
  float fVar98;
  undefined4 uVar99;
  float fVar100;
  undefined4 uVar101;
  double dVar102;
  double dVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  float fVar106;
  float fVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  float fVar110;
  undefined4 uVar111;
  undefined4 uVar112;
  double dVar113;
  double dVar114;
  double dVar115;
  undefined1 auStack_988 [32];
  LARGE_INTEGER *local_968;
  byte *local_960;
  undefined8 **local_958;
  int *local_950;
  undefined8 *local_948;
  ulonglong local_940;
  uint local_934;
  undefined1 local_92d;
  int local_92c;
  LARGE_INTEGER local_928;
  longlong *local_920;
  uint *local_918;
  byte local_90b;
  byte local_90a;
  char local_909;
  longlong *local_908;
  uint local_8fc;
  byte *local_8f8;
  double dStack_8f0;
  ulonglong local_8e8;
  longlong local_8e0;
  ulonglong local_8d8;
  longlong local_8d0;
  int local_8c4;
  longlong local_8c0;
  longlong *local_8b8;
  uint local_8ac;
  double local_8a8;
  double dStack_8a0;
  LARGE_INTEGER *local_890;
  ulonglong local_888;
  int local_87c;
  undefined1 local_878 [12];
  undefined4 uStack_86c;
  undefined1 local_868 [12];
  undefined4 uStack_85c;
  double local_858;
  double dStack_850;
  undefined1 local_848 [16];
  double local_838;
  double dStack_830;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  double local_818;
  double dStack_810;
  uint *local_808;
  double dStack_800;
  undefined1 local_7f8 [12];
  undefined4 uStack_7ec;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  LARGE_INTEGER *local_7d0;
  longlong *local_7c8;
  longlong *local_7c0;
  longlong local_7b8;
  longlong local_7b0;
  undefined8 local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  undefined1 local_788 [16];
  undefined8 local_778;
  undefined8 uStack_770;
  longlong local_768;
  longlong local_760;
  undefined1 local_758 [16];
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  longlong local_6e8;
  undefined8 uStack_6e0;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined1 local_6cc [12];
  double local_6c0;
  double local_6b0;
  double local_6a8;
  undefined1 local_690 [16];
  double local_680;
  double local_678;
  double local_670;
  undefined8 local_668;
  undefined1 local_660;
  undefined1 local_658 [12];
  undefined4 uStack_64c;
  double local_648;
  double local_640;
  double local_638;
  undefined8 local_630;
  undefined1 local_628;
  double local_620 [4];
  double local_600;
  double local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  double dStack_5e0;
  int local_5d4;
  int local_5d0;
  int local_5cc;
  undefined8 *local_5c8;
  double adStack_5c0 [14];
  undefined8 uStack_550;
  undefined8 local_540;
  LARGE_INTEGER local_538;
  byte *pbStack_530;
  undefined8 local_528;
  undefined1 *puStack_520;
  longlong *local_518;
  longlong *plStack_510;
  longlong *local_508;
  double dStack_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  LARGE_INTEGER *local_478;
  undefined8 local_468;
  double local_458 [2];
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  double *local_358;
  undefined8 local_348;
  longlong local_338;
  undefined8 local_328;
  longlong local_218;
  undefined8 local_208;
  char local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined2 local_1a8;
  undefined1 local_190 [8];
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_988;
  iVar46 = *(int *)(param_1 + 0x8a4);
  local_87c = *(int *)(*(longlong *)(param_1 + 8) + 0x38b8);
  uVar9 = *(ushort *)(param_1 + 0x8a8);
  uVar8 = (undefined1)(uVar9 >> 8);
  local_940 = param_1;
  local_8c0 = param_2;
  if ((&DAT_14ca814b8)[(ulonglong)uVar9 * 0xf] == 1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca5b050) && (FUN_144b3d300(&DAT_14ca5b050), DAT_14ca5b050 == -1)) {
      FUN_140056680(&DAT_14ca5b038,L"r.Mobile.EnableMovablePointLightsShadows");
      DAT_14ca5b048 = (longlong *)0x0;
      atexit((_func_5014 *)&LAB_14307ee4e);
      _Init_thread_footer(&DAT_14ca5b050);
    }
    puVar52 = &DAT_14ca84468;
    if ((ulonglong)uVar9 == 0x31) goto switchD_140c96f12_caseD_33;
    switch(uVar9) {
    case 0x30:
switchD_140c96f12_caseD_30:
      puVar52 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_140c96f12_caseD_31:
      if ((uVar9 & 0xfff0) == 0x20) {
        lVar76 = FUN_14741392a();
        puVar52 = (undefined8 *)(lVar76 + (ulonglong)(uVar9 & 0xf) * 0x18);
        break;
      }
      uVar54 = 0;
      goto LAB_140c96630;
    case 0x33:
      break;
    case 0x34:
switchD_140c96f12_caseD_34:
      puVar52 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_140c96f12_caseD_35:
      puVar52 = &DAT_14ca84478;
      break;
    default:
      switch((uint)uVar9) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_140c96f12_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_140c96f12_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_140c96f12_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_140c96f12_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar52 = &DAT_14ca84488;
      }
    }
switchD_140c96f12_caseD_33:
    uVar54 = *puVar52;
LAB_140c96630:
    if (DAT_14ca5b048 == (longlong *)0x0) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar64 = DAT_14ca5b038;
      if (DAT_14ca5b040 == 0) {
        puVar64 = &DAT_149dfb77a;
      }
      DAT_14ca5b048 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar64,1);
    }
    cVar40 = FUN_14002b5e0(uVar54,"Windows",7);
    if (((cVar40 == '\0') && (uVar9 != DAT_14ca85550)) ||
       (cVar40 = (**(code **)(*DAT_14ca5b048 + 0xa8))(), cVar40 == '\0')) {
      uVar43 = 0;
    }
    else {
      uVar43 = (uint)CONCAT11(uVar8,DAT_14ca96500);
    }
  }
  else {
    uVar43 = (uint)CONCAT11(uVar8,DAT_14c760e15);
  }
  bVar56 = DAT_14ca964dc;
  uVar91 = 0;
  local_6cc._0_4_ = 0;
  local_6d0 = 0;
  local_6d4 = 0;
  uVar8 = *(undefined1 *)(local_8c0 + 0x36);
  local_6e8 = 0;
  uStack_6e0 = 0;
  iVar41 = FUN_144ab8e82();
  lVar76 = *(longlong *)(local_940 + 8);
  if (iVar41 != 0) {
    puVar47 = (uint *)(lVar76 + 0x3560);
    iVar41 = *(int *)(lVar76 + 0x3578);
    local_918 = puVar47;
    if (iVar41 == 0) {
      uVar88 = 1;
      iVar83 = 0;
      iVar42 = 0;
    }
    else {
      puVar50 = *(uint **)(lVar76 + 0x3570);
      if (*(uint **)(lVar76 + 0x3570) == (uint *)0x0) {
        puVar50 = puVar47;
      }
      uVar65 = *puVar50;
      if (uVar65 == 0) {
        iVar83 = iVar41 + 0x1e;
        if (-1 < iVar41 + -1) {
          iVar83 = iVar41 + -1;
        }
        uVar91 = 0;
        uVar88 = (ulonglong)(uint)(iVar83 >> 5);
        if (iVar83 >> 5 < 1) {
          uVar88 = uVar91;
        }
        iVar83 = 0;
        do {
          if (uVar88 == uVar91) goto LAB_140c9574d;
          iVar83 = iVar83 + 0x20;
          uVar65 = puVar50[uVar91 + 1];
          uVar91 = uVar91 + 1;
        } while (uVar65 == 0);
      }
      else {
        uVar91 = 0;
        iVar83 = 0;
      }
      uVar88 = (ulonglong)(-uVar65 & uVar65);
      uVar81 = uVar88 * 2 + 1;
      lVar68 = 0x3f;
      if (uVar81 != 0) {
        for (; uVar81 >> lVar68 == 0; lVar68 = lVar68 + -1) {
        }
      }
      iVar42 = (iVar83 - ((uint)lVar68 ^ 0x3f)) + 0x3e;
      if (iVar41 <= iVar42) {
        iVar42 = iVar41;
      }
    }
    if (iVar42 < iVar41) {
      local_90b = 2 < iVar46 | bVar56;
      local_7d0 = (LARGE_INTEGER *)(local_8c0 + 0x40);
      local_8b8 = (longlong *)(local_8c0 + 0x50);
      local_760 = local_940 + 0x98;
      local_920 = (longlong *)(local_940 + 1000);
      puVar52 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xea8);
      local_768 = local_940 + 0x5b0;
      local_7c0 = (longlong *)(local_940 + 0x588);
      local_890 = (LARGE_INTEGER *)0xffffffffffffffff;
      uVar65 = 0xffffffff;
      local_92d = uVar8;
      local_8e0 = lVar76;
      local_8c4 = iVar46;
      local_8ac = uVar43;
      local_888 = uVar88;
LAB_140c92271:
      local_92c = iVar83;
      lVar76 = *(longlong *)(local_8e0 + 0x3550) + (longlong)iVar42 * 0x40;
      LVar51 = (LARGE_INTEGER)
               ((LARGE_INTEGER *)
               (*(longlong *)(local_8e0 + 0x3550) + 0x30 + (longlong)iVar42 * 0x40))->QuadPart;
      plVar84 = (longlong *)
                ((longlong)*(int *)(LVar51.QuadPart + 0x34) * 0x68 +
                *(longlong *)(local_940 + 0x4d8));
      local_934 = uVar65;
      local_8e8 = uVar91;
      uVar43 = FUN_144aae591(lVar76,local_760);
      uVar91 = (ulonglong)uVar43;
      if ((local_87c < 1) || ((char)uVar43 != '\x01')) {
LAB_140c92328:
        uVar65 = local_934;
        if (((((char)uVar43 == '\x03') || ((uVar43 & 0xff) == 0)) &&
            (uVar43 = *(uint *)(lVar76 + 0x38), puVar47 = local_918, (uVar43 & 0xc) != 0)) &&
           (lVar68 = (longlong)*(int *)(local_940 + 0x3f0), 0 < lVar68)) {
          lVar85 = *local_920;
          do {
            cVar40 = FUN_1400bd22a(LVar51.QuadPart,lVar85,0);
            puVar47 = local_918;
            if (cVar40 != '\0') {
              uVar65 = uVar43 & 3;
              plVar55 = *(longlong **)(LVar51.QuadPart + 0x28);
              if ((uVar43 & 4) == 0) {
                bVar56 = *(byte *)(plVar55 + 0x3a);
                bVar79 = bVar56 & 8;
                bVar61 = 0;
              }
              else {
                bVar56 = *(byte *)(plVar55 + 0x3a);
                bVar79 = bVar56 & 8;
                if (((bVar79 == 0) || (DAT_14c760e18 == '\0')) &&
                   (((uVar65 | 2) != 3 || ((char)local_8ac != '\0')))) {
                  bVar61 = uVar65 != 2 | local_90b;
                }
                else {
                  bVar61 = 0;
                }
              }
              bVar67 = false;
              if (((uVar43 & 8) != 0) && (bVar67 = false, bVar79 != 0)) {
                if ((*(byte *)(LVar51.QuadPart + 0xe4) & 1) == 0) {
                  if ((bVar56 & 8) != 0) {
LAB_140c924f5:
                    if (((uVar65 | 2) != 3) || ((char)local_8ac != '\0')) {
                      bVar67 = 2 < local_8c4 || uVar65 == 0;
                      goto LAB_140c92525;
                    }
                  }
                  bVar67 = false;
                }
                else {
                  bVar67 = false;
                  if ((DAT_14c760480 <= *(int *)(LVar51.QuadPart + 0xf8)) && ((bVar56 & 8) != 0))
                  goto LAB_140c924f5;
                }
              }
LAB_140c92525:
              bVar80 = false;
              if (((uVar43 & 8) != 0) && (bVar80 = false, (bVar56 & 0xc) == 8)) {
                if ((*(byte *)(LVar51.QuadPart + 0xe4) & 1) == 0) {
                  bVar80 = false;
                }
                else if (((*(int *)(LVar51.QuadPart + 0xf8) < DAT_14c760480) &&
                         (*(int *)((longlong)plVar55 + 0x18c) == -1)) &&
                        (((uVar65 | 2) != 3 || ((char)local_8ac != '\0')))) {
                  bVar80 = 2 < local_8c4 || uVar65 == 0;
                }
                else {
                  bVar80 = false;
                }
              }
              local_928 = LVar51;
              if (((bVar61 & 1) != 0 || bVar67 != false) || (bVar80)) {
                if ((longlong)local_890 < 0) {
                  local_890 = (LARGE_INTEGER *)FUN_144b15ab4(*(undefined8 *)(local_940 + 8));
                }
                local_960 = (byte *)&local_6d0;
                local_968 = (LARGE_INTEGER *)local_6cc;
                FUN_143073d16(local_940);
                plVar55 = *(longlong **)(LVar51.QuadPart + 0x28);
              }
              if ((0 < local_87c) && ((char)plVar55[0x3d] != '\0')) {
                FUN_14716de02(*(undefined8 *)(local_940 + 8),local_920,LVar51.QuadPart,&local_6e8);
                plVar55 = *(longlong **)(LVar51.QuadPart + 0x28);
              }
              uVar65 = local_934;
              if ((*(byte *)(plVar55 + 0x3a) & 4) == 0) {
                bVar67 = (bool)(*(byte *)(lVar76 + 0x38) >> 2 & 1 | bVar67);
              }
              if (bVar67 == false) goto LAB_140c954c0;
              if ((local_8c4 < 3) &&
                 (((cVar40 = (**(code **)(*plVar55 + 0xb0))(), uVar88 = local_940, cVar40 == '\0' &&
                   ((*(byte *)(*(longlong *)(LVar51.QuadPart + 0x28) + 0x1d0) & 8) != 0)) ||
                  ((lVar76 = *(longlong *)(local_940 + 8),
                   (byte *)LVar51.QuadPart != *(byte **)(lVar76 + 0x36a0) &&
                   (((byte *)LVar51.QuadPart != *(byte **)(lVar76 + 0x36a8) &&
                    ((byte *)LVar51.QuadPart != *(byte **)(lVar76 + 14000)))))))))
              goto LAB_140c9543f;
              if ((longlong)local_890 < 0) {
                local_890 = (LARGE_INTEGER *)FUN_144b15ab4(*(undefined8 *)(local_940 + 8));
              }
              lVar76 = *(longlong *)(LVar51.QuadPart + 0x28);
              if ((*(byte *)(lVar76 + 0x1d3) & 0x20) == 0) {
                local_8fc = 0;
              }
              else {
                local_8fc = (uint)CONCAT71((int7)((ulonglong)lVar76 >> 8),
                                           *(char *)(lVar76 + 0x1e8) == '\0' &
                                           *(byte *)(local_940 + 0x7b4));
              }
              uVar81 = (ulonglong)*(uint *)(local_940 + 0x3f0);
              uVar88 = local_940;
              uVar65 = local_934;
              if ((int)*(uint *)(local_940 + 0x3f0) < 1) goto LAB_140c9543f;
              local_90a = (byte)local_8fc ^ 1;
              local_7c8 = plVar84 + 10;
              local_7b0 = 1;
              local_7b8 = 0x5678;
              uVar91 = 0;
              local_909 = *(char *)(lVar76 + 0x1e8);
              goto LAB_140c92716;
            }
            lVar85 = lVar85 + 0x13c10;
            lVar68 = lVar68 + -1;
            uVar65 = local_934;
          } while (lVar68 != 0);
        }
      }
      else {
        uVar65 = local_934;
        if ((*(char *)(*(longlong *)(LVar51.QuadPart + 0x28) + 0x1e8) != '\0') &&
           (((*(byte *)(lVar76 + 0x38) & 0xc) != 0 &&
            (lVar68 = (longlong)*(int *)(local_940 + 0x3f0), 0 < lVar68)))) {
          lVar85 = *local_920;
          do {
            cVar40 = FUN_1400bd22a(LVar51.QuadPart,lVar85,0);
            if (cVar40 != '\0') {
              FUN_14716de02(*(undefined8 *)(local_940 + 8),local_920);
              break;
            }
            lVar85 = lVar85 + 0x13c10;
            lVar68 = lVar68 + -1;
          } while (lVar68 != 0);
          goto LAB_140c92328;
        }
      }
      goto LAB_140c923a2;
    }
  }
  goto LAB_140c9574d;
LAB_140c92716:
  do {
    local_8f8 = (byte *)(uVar91 * 0x13c10 + *local_920);
    uVar45 = *(undefined4 *)(*(longlong *)(LVar51.QuadPart + 0x28) + 0x21c);
    local_188 = (undefined1 *)0x0;
    local_180 = 0x200000000;
    if ((int)uVar81 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar81 & 0xffffffff);
    }
    uVar88 = local_940;
    if ((int)uVar81 != 2) {
      FUN_144b18a6a(local_190);
      uVar88 = local_940;
    }
    do {
      lVar76 = (longlong)(int)local_180;
      uVar43 = (int)local_180 + 1;
      local_180 = CONCAT44(local_180._4_4_,uVar43);
      if (local_180._4_4_ < uVar43) {
        FUN_147313b3e(local_190);
        uVar88 = local_940;
      }
      puVar73 = local_188;
      if (local_188 == (undefined1 *)0x0) {
        puVar73 = local_190;
      }
      *(undefined4 *)(puVar73 + lVar76 * 4) = 0;
      uVar43 = (int)uVar81 - 1;
      uVar81 = (ulonglong)uVar43;
    } while (uVar43 != 0);
    puVar73 = local_188;
    if (local_188 == (undefined1 *)0x0) {
      puVar73 = local_190;
    }
    *(undefined4 *)(puVar73 + uVar91 * 4) = uVar45;
    if (*(uint *)(local_8f8 + 0x1dd0) < 2) {
      uVar81 = (ulonglong)*(int *)(uVar88 + 0x3f0);
      lVar76 = local_7b8;
      lVar68 = local_7b0;
      if ((longlong)(uVar91 + 1) < (longlong)uVar81) {
        do {
          uVar43 = *(uint *)(*local_920 + lVar76 * 4);
          if (uVar43 == 2) {
            puVar73 = local_188;
            if (local_188 == (undefined1 *)0x0) {
              puVar73 = local_190;
            }
            *(undefined4 *)(puVar73 + lVar68 * 4) = uVar45;
            uVar81 = (ulonglong)*(uint *)(uVar88 + 0x3f0);
          }
          else if (uVar43 < 2) break;
          lVar68 = lVar68 + 1;
          lVar76 = lVar76 + 0x4f04;
        } while ((int)lVar68 < (int)uVar81);
        if (1 < *(uint *)(local_8f8 + 0x1dd0)) goto LAB_140c94eae;
      }
      plVar55 = *(longlong **)(LVar51.QuadPart + 0x28);
      auVar97._0_12_ = ZEXT812(0x3727c5ac);
      auVar97._12_4_ = 0;
      local_8d8 = uVar91;
      if (((1e-05 <= *(float *)(plVar55 + 8) * *(float *)(plVar55 + 8)) ||
          (auVar97._0_12_ = ZEXT812(0x3727c5ac), auVar97._12_4_ = 0,
          1e-05 <= *(float *)((longlong)plVar55 + 0x44) * *(float *)((longlong)plVar55 + 0x44))) ||
         (auVar97._0_12_ = ZEXT812(0x3727c5ac), auVar97._12_4_ = 0,
         1e-05 <= *(float *)(plVar55 + 9) * *(float *)(plVar55 + 9))) {
        bVar56 = *(byte *)(plVar55 + 0x3a);
        if ((bVar56 & 4) == 0) {
          uVar45 = *(undefined4 *)(local_8f8 + 0x4f8);
          if ((*(uint *)(LVar51.QuadPart + 0xe4) & 1) == 0) {
LAB_140c928cf:
            bVar67 = (bVar56 & 8) == 0;
          }
          else {
            iVar46 = *(int *)(LVar51.QuadPart + 0xf8);
LAB_140c9504e:
            bVar67 = true;
            LVar51 = local_928;
            if (DAT_14c760480 <= iVar46) goto LAB_140c928cf;
          }
          uVar43 = (**(code **)(*plVar55 + 0xf0))
                             (plVar55,*(undefined4 *)(local_8f8 + 0x3090),bVar67,uVar45);
          plVar55 = *(longlong **)(LVar51.QuadPart + 0x28);
        }
        else {
          if ((*(uint *)(LVar51.QuadPart + 0xe4) & 1) != 0) {
            LVar51 = local_928;
            if (((bVar56 & 8) != 0) &&
               (iVar46 = *(int *)(local_928.QuadPart + 0xf8), DAT_14c760480 <= iVar46)) {
              uVar45 = *(undefined4 *)(local_8f8 + 0x4f8);
              goto LAB_140c9504e;
            }
            goto LAB_140c94f40;
          }
          if ((bVar56 & 8) != 0) {
            uVar45 = *(undefined4 *)(local_8f8 + 0x4f8);
            LVar51 = local_928;
            goto LAB_140c928cf;
          }
          uVar43 = 0;
          LVar51 = local_928;
        }
      }
      else {
LAB_140c94f40:
        uVar43 = 0;
      }
      iVar46 = (**(code **)(*plVar55 + 0xb8))();
      uVar65 = (uVar43 & 0xff) + iVar46;
      puVar47 = (uint *)(ulonglong)uVar65;
      fVar93 = 0.0;
      if (0 < (int)uVar65) {
        bVar56 = *(int *)(DAT_14ca5b348 + 4) == 0 | local_90a;
        local_8d0 = CONCAT71(local_8d0._1_7_,bVar56);
        if (*(int *)(DAT_14ca5b318 + 4) != 0 || bVar56 != 0) {
          local_7f8._0_4_ = uVar43;
          uVar70 = 0;
          local_808 = puVar47;
          do {
            local_448 = 0;
            uStack_440 = 0;
            local_438 = 0;
            local_430 = 0x3ff0000000000000;
            local_418 = 0x5500000000000000;
            uStack_410 = 0;
            local_408 = 0x55000000;
            local_338 = 0;
            local_328 = 0x600000000;
            local_218 = 0;
            local_208 = 0x800000000;
            local_1b8 = '\0';
            local_1b4 = 0xffffffff;
            local_908 = (longlong *)CONCAT44(local_908._4_4_,uVar70 + 1);
            puVar73 = (undefined1 *)(ulonglong)uVar70;
            if (uVar70 + 1 == (int)puVar47) {
              puVar73 = &DAT_ffffffff;
            }
            local_1b0 = 0xbf8000003f800000;
            if ((char)uVar43 == '\0') {
              puVar73 = (undefined1 *)(ulonglong)uVar70;
            }
            local_1a8 = 0;
            plVar55 = *(longlong **)(LVar51.QuadPart + 0x28);
            if (((*(byte *)(LVar51.QuadPart + 0xe4) & 1) == 0) ||
               (bVar67 = true, DAT_14c760480 <= *(int *)(LVar51.QuadPart + 0xf8))) {
              bVar67 = (*(byte *)(plVar55 + 0x3a) & 8) == 0;
            }
            local_968 = &local_538;
            cVar40 = (**(code **)(*plVar55 + 0xc0))(plVar55,local_8f8,puVar73,bVar67);
            if (cVar40 != '\0') {
              if (((local_1b8 == '\0') && (local_1a8._1_1_ == '\0')) && (fVar93 <= local_418._4_4_))
              {
                fVar93 = local_418._4_4_;
              }
              if (((char)local_8d0 != '\0') || (local_1a8._1_1_ == '\x01')) {
                iVar46 = (DAT_14ca84e18 ^ 1) << 2;
                if (*(int *)(local_940 + 0x8a4) < 3) {
                  iVar46 = 4;
                }
                local_5cc = DAT_14ca84e3c;
                if (DAT_14cb0cc08 < DAT_14ca84e3c) {
                  local_5cc = DAT_14cb0cc08;
                }
                if (local_5cc < 0x21) {
                  local_5cc = 0x20;
                }
                local_5cc = local_5cc + iVar46 * -2;
                local_5d0 = DAT_14ca84e38;
                if (DAT_14cb0cc08 < DAT_14ca84e38) {
                  local_5d0 = DAT_14cb0cc08;
                }
                if (local_5d0 < 0x21) {
                  local_5d0 = 0x20;
                }
                local_5d0 = local_5d0 + iVar46 * -2;
                local_5d4 = 1;
                local_540 = 0x300000003;
                if ((local_8f8[0x23e8] == 1) || (local_1a8._1_1_ != '\0')) {
LAB_140c92b4e:
                  lVar76 = 0;
                  do {
                    puVar47 = (uint *)*puVar52;
                    if (puVar47 != (uint *)0x0) goto LAB_140c92b6a;
                    while( true ) {
                      FUN_14472e504(puVar52);
                      puVar47 = (uint *)*puVar52;
LAB_140c92b6a:
                      puVar86 = (undefined8 *)
                                (*(longlong *)(puVar47 + 0x10) + 0xfU & 0xfffffffffffffff0);
                      uVar43 = puVar47[0x12];
                      if (puVar86 + 0x22a <= puVar47 + 0x4000) break;
                      while( true ) {
                        *(uint **)(puVar47 + 0x10) = puVar47 + 0x4000;
                        LOCK();
                        uVar65 = *puVar47;
                        *puVar47 = *puVar47 + uVar43 + 1;
                        UNLOCK();
                        if ((uVar65 ^ uVar43) != 0xffffffff) break;
                        puVar47 = (uint *)*puVar52;
                        *puVar47 = 0xffffffff;
                        *(uint **)(puVar47 + 0x10) = puVar47 + 0x16;
                        puVar47[0x12] = 0;
                        *puVar52 = puVar47;
                        puVar86 = (undefined8 *)((longlong)puVar47 + 0x67U & 0xfffffffffffffff0);
                        uVar43 = 0;
                        if (puVar86 + 0x22a <= puVar47 + 0x4000) {
                          uVar43 = 1;
                          goto LAB_140c92be8;
                        }
                      }
                    }
                    uVar43 = uVar43 + 1;
LAB_140c92be8:
                    *(undefined8 **)(puVar47 + 0x10) = puVar86 + 0x22b;
                    puVar47[0x12] = uVar43;
                    *(int *)(puVar86 + -1) = ((int)puVar86 + -8) - (int)puVar47;
                    *(undefined4 *)((longlong)puVar86 + -4) = 0x1150;
                    puVar86[1] = 0;
                    *puVar86 = &PTR_FUN_14a3099b0;
                    lVar68 = *(longlong *)(local_940 + 0x90);
                    do {
                      puVar86[1] = lVar68;
                      LOCK();
                      lVar85 = *(longlong *)(local_940 + 0x90);
                      bVar67 = lVar68 == lVar85;
                      if (bVar67) {
                        *(longlong *)(local_940 + 0x90) = (longlong)puVar86;
                        lVar85 = lVar68;
                      }
                      UNLOCK();
                      lVar68 = lVar85;
                    } while (!bVar67);
                    puVar69 = puVar86 + 2;
                    FUN_144ab9098(puVar69);
                    local_948 = (undefined8 *)CONCAT44(local_948._4_4_,iVar46);
                    local_950 = (int *)CONCAT44(local_950._4_4_,local_5cc);
                    local_958 = (undefined8 **)CONCAT44(local_958._4_4_,local_5d0);
                    local_960 = (byte *)CONCAT44(local_960._4_4_,local_5cc);
                    local_968 = (LARGE_INTEGER *)CONCAT44(local_968._4_4_,local_5d0);
                    FUN_14491cf12(puVar69,local_928.QuadPart,local_8f8,&local_538);
                    FUN_140143e58(puVar86 + 0x131);
                    *(uint *)(puVar86 + 0x166) = uVar70;
                    iVar41 = *(int *)((longlong)&local_540 + lVar76 * 4);
                    *(int *)(puVar86 + 8) = iVar41;
                    lVar68 = plVar84[1];
                    uVar43 = (int)lVar68 + 1;
                    *(uint *)(plVar84 + 1) = uVar43;
                    if (*(uint *)((longlong)plVar84 + 0xc) < uVar43) {
                      FUN_1447417ac(plVar84);
                    }
                    *(undefined8 **)(*plVar84 + (longlong)(int)lVar68 * 8) = puVar69;
                    lVar68 = (longlong)(int)uStack_6e0;
                    uVar43 = (int)uStack_6e0 + 1;
                    uStack_6e0 = CONCAT44(uStack_6e0._4_4_,uVar43);
                    if (uStack_6e0._4_4_ < uVar43) {
                      FUN_1447417ac(&local_6e8);
                    }
                    *(undefined8 **)(local_6e8 + lVar68 * 8) = puVar69;
                    if (((char)local_8fc != '\0') && (local_1a8._1_1_ == '\0')) {
                      *(byte *)((longlong)puVar86 + 0x9a2) =
                           *(byte *)((longlong)puVar86 + 0x9a2) & 0xfe;
                      *(undefined1 *)((longlong)puVar86 + 0x9a4) = 1;
                    }
                    if ((*(byte *)((longlong)puVar86 + 0x9a1) & 2) == 0) {
                      iVar83 = *(int *)(local_8c0 + 0x58);
                      uVar43 = iVar83 + 1;
                      *(uint *)(local_8c0 + 0x58) = uVar43;
                      if (*(uint *)(local_8c0 + 0x5c) < uVar43) {
                        FUN_1447417ac(local_8b8);
                      }
                      *(undefined8 **)(*local_8b8 + (longlong)iVar83 * 8) = puVar69;
                      if (iVar41 != 3) {
                        lVar68 = *(longlong *)(local_940 + 8);
                        if (*(int *)(lVar68 + 0x4bc0) != *(int *)(lVar68 + 0x4bec)) {
                          lVar85 = lVar68 + 0x4bf0;
                          if (*(longlong *)(lVar68 + 0x4bf8) != 0) {
                            lVar85 = *(longlong *)(lVar68 + 0x4bf8);
                          }
                          iVar83 = *(int *)(lVar85 + (ulonglong)
                                                     (*(int *)(lVar68 + 0x4c00) - 1U &
                                                     *(uint *)(local_928.QuadPart + 0x34)) * 4);
                          if (iVar83 != -1) {
                            do {
                              lVar85 = *(longlong *)(lVar68 + 0x4bb8) + (longlong)iVar83 * 0x20;
                              if (*(uint *)(*(longlong *)(lVar68 + 0x4bb8) + (longlong)iVar83 * 0x20
                                           ) == *(uint *)(local_928.QuadPart + 0x34))
                              goto LAB_140c92de2;
                              iVar83 = *(int *)(lVar85 + 0x18);
                            } while (iVar83 != -1);
                          }
                        }
                        lVar85 = 0;
LAB_140c92de2:
                        lVar92 = (longlong)*(int *)((longlong)puVar86 + 0x954) * 0x430;
                        lVar68 = *(longlong *)(lVar85 + 8) + lVar92;
                        *(undefined4 *)(*(longlong *)(lVar85 + 8) + 0x428 + lVar92) = 0;
                        if (iVar41 == 1) {
                          *(undefined4 *)(lVar68 + 0x420) =
                               *(undefined4 *)((longlong)puVar86 + 0x2b4);
                          *(undefined4 *)(lVar68 + 0x424) = *(undefined4 *)(puVar86 + 0x57);
                          uVar45 = *(undefined4 *)((longlong)puVar86 + 0x5c);
                          uVar94 = *(undefined4 *)(puVar86 + 0xc);
                          uVar104 = *(undefined4 *)((longlong)puVar86 + 100);
                          *(undefined4 *)(lVar68 + 0x408) = *(undefined4 *)(puVar86 + 0xb);
                          *(undefined4 *)(lVar68 + 0x40c) = uVar45;
                          *(undefined4 *)(lVar68 + 0x410) = uVar94;
                          *(undefined4 *)(lVar68 + 0x414) = uVar104;
                          *(undefined8 *)(lVar68 + 0x418) = puVar86[0xd];
                        }
                        else if (iVar41 == 2) {
                          local_5f0 = 1.0;
                          uStack_5e8 = 0.0;
                          dStack_5e0 = 0.0;
                          FUN_1467fc32a(&local_5f0,local_620 + 3,local_620);
                          dVar6 = dStack_5e0 * dStack_5e0 +
                                  local_5f0 * local_5f0 + uStack_5e8 * uStack_5e8;
                          if ((dVar6 != 1.0) || (NAN(dVar6))) {
                            if (dVar6 < 9.99999993922529e-09) {
                              local_648 = DAT_14c8464f0;
                              local_658._0_4_ = (undefined4)DAT_14c8464e0;
                              local_658._4_4_ = DAT_14c8464e0._4_4_;
                              local_658._8_4_ = (undefined4)DAT_14c8464e8;
                              uStack_64c = DAT_14c8464e8._4_4_;
                              goto LAB_140c92f2a;
                            }
                            dVar6 = 1.0 / SQRT(dVar6);
                            stack0xfffffffffffff9b0 = uStack_5e8 * dVar6;
                            local_658._0_8_ = local_5f0 * dVar6;
                            local_648 = dStack_5e0 * dVar6;
                          }
                          else {
                            local_648 = dStack_5e0;
                            local_658._0_4_ = (undefined4)local_5f0;
                            local_658._4_4_ = local_5f0._4_4_;
                            local_658._8_4_ = (undefined4)uStack_5e8;
                            uStack_64c = uStack_5e8._4_4_;
LAB_140c92f2a:
                          }
                          local_778 = CONCAT44(local_778._4_4_,fVar93);
                          local_690._8_4_ = SUB84(local_600,0);
                          local_690._0_8_ = -local_620[3];
                          local_690._12_4_ = (int)((ulonglong)-local_600 >> 0x20);
                          local_680 = -local_5f8;
                          lVar85 = 0;
                          do {
                            *(undefined8 *)((longlong)&local_5c8 + lVar85 * 4) =
                                 *(undefined8 *)(local_690 + lVar85);
                            *(undefined8 *)((longlong)adStack_5c0 + lVar85 * 4) =
                                 *(undefined8 *)((longlong)local_620 + lVar85);
                            *(undefined8 *)((longlong)adStack_5c0 + lVar85 * 4 + 8) =
                                 *(undefined8 *)(local_658 + lVar85);
                            *(undefined8 *)((longlong)adStack_5c0 + lVar85 * 4 + 0x10) = 0;
                            lVar85 = lVar85 + 8;
                          } while (lVar85 != 0x18);
                          dVar6 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                          dVar96 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                          local_8a8 = DAT_14c8464f0 * -local_5f8 +
                                      dVar6 * -local_620[3] + dVar96 * -local_600;
                          dStack_8a0 = local_620[2] * DAT_14c8464f0 +
                                       local_620[0] * dVar6 + local_620[1] * dVar96;
                          adStack_5c0[0xd] =
                               DAT_14c8464f0 * local_648 +
                               dVar6 * (double)local_658._0_8_ + dVar96 * stack0xfffffffffffff9b0;
                          uStack_550 = 0x3ff0000000000000;
                          dVar114 = local_8a8 * dStack_500 +
                                    adStack_5c0[7] * (double)local_508 +
                                    adStack_5c0[3] * (double)plStack_510 +
                                    (double)local_5c8 * (double)local_518;
                          dVar13 = dStack_8a0 * dStack_500 +
                                   adStack_5c0[8] * (double)local_508 +
                                   adStack_5c0[4] * (double)plStack_510 +
                                   adStack_5c0[0] * (double)local_518;
                          dVar12 = dStack_500 * adStack_5c0[0xd] +
                                   (double)local_508 * adStack_5c0[9] +
                                   (double)plStack_510 * adStack_5c0[5] +
                                   (double)local_518 * adStack_5c0[1];
                          dVar6 = dStack_500 * 1.0 +
                                  (double)local_508 * adStack_5c0[10] +
                                  (double)plStack_510 * adStack_5c0[6] +
                                  (double)local_518 * adStack_5c0[2];
                          dVar16 = local_8a8 * local_4e0 +
                                   adStack_5c0[7] * local_4e8 +
                                   adStack_5c0[3] * local_4f0 + (double)local_5c8 * local_4f8;
                          dVar17 = dStack_8a0 * local_4e0 +
                                   adStack_5c0[8] * local_4e8 +
                                   adStack_5c0[4] * local_4f0 + adStack_5c0[0] * local_4f8;
                          dVar14 = local_4e0 * adStack_5c0[0xd] +
                                   local_4e8 * adStack_5c0[9] +
                                   local_4f0 * adStack_5c0[5] + local_4f8 * adStack_5c0[1];
                          dVar96 = local_4e0 * 1.0 +
                                   local_4e8 * adStack_5c0[10] +
                                   local_4f0 * adStack_5c0[6] + local_4f8 * adStack_5c0[2];
                          dVar24 = local_8a8 * local_4c0 +
                                   adStack_5c0[7] * local_4c8 +
                                   adStack_5c0[3] * local_4d0 + (double)local_5c8 * local_4d8;
                          dVar25 = dStack_8a0 * local_4c0 +
                                   adStack_5c0[8] * local_4c8 +
                                   adStack_5c0[4] * local_4d0 + adStack_5c0[0] * local_4d8;
                          dVar19 = local_4c0 * adStack_5c0[0xd] +
                                   local_4c8 * adStack_5c0[9] +
                                   local_4d0 * adStack_5c0[5] + local_4d8 * adStack_5c0[1];
                          dVar20 = local_4c0 * 1.0 +
                                   local_4c8 * adStack_5c0[10] +
                                   local_4d0 * adStack_5c0[6] + local_4d8 * adStack_5c0[2];
                          dVar22 = local_8a8 * local_4a0 +
                                   adStack_5c0[7] * local_4a8 +
                                   adStack_5c0[3] * local_4b0 + (double)local_5c8 * local_4b8;
                          dVar23 = dStack_8a0 * local_4a0 +
                                   adStack_5c0[8] * local_4a8 +
                                   adStack_5c0[4] * local_4b0 + adStack_5c0[0] * local_4b8;
                          dVar18 = adStack_5c0[0xd] * local_4a0 +
                                   adStack_5c0[9] * local_4a8 +
                                   adStack_5c0[5] * local_4b0 + adStack_5c0[1] * local_4b8;
                          dVar7 = local_4a0 * 1.0 +
                                  adStack_5c0[10] * local_4a8 +
                                  adStack_5c0[6] * local_4b0 + adStack_5c0[2] * local_4b8;
                          local_178._8_4_ = SUB84(dVar13,0);
                          local_178._0_8_ = dVar114;
                          local_178._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                          local_168._8_4_ = SUB84(dVar6,0);
                          local_168._0_8_ = dVar12;
                          local_168._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                          local_158._8_4_ = SUB84(dVar17,0);
                          local_158._0_8_ = dVar16;
                          local_158._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
                          local_148._8_4_ = SUB84(dVar96,0);
                          local_148._0_8_ = dVar14;
                          local_148._12_4_ = (int)((ulonglong)dVar96 >> 0x20);
                          local_138._8_4_ = SUB84(dVar25,0);
                          local_138._0_8_ = dVar24;
                          local_138._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
                          local_128._8_4_ = SUB84(dVar20,0);
                          local_128._0_8_ = dVar19;
                          local_128._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
                          local_118._8_4_ = SUB84(dVar23,0);
                          local_118._0_8_ = dVar22;
                          local_118._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                          local_108._8_4_ = SUB84(dVar7,0);
                          local_108._0_8_ = dVar18;
                          local_108._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                          adStack_5c0[0xb] = local_8a8;
                          adStack_5c0[0xc] = dStack_8a0;
                          FUN_14007522e(&local_5c8,local_178);
                          dVar15 = adStack_5c0[0xc];
                          dVar115 = adStack_5c0[0xb];
                          local_7e8 = SUB84(local_5c8,0);
                          uStack_7e4 = (undefined4)((ulonglong)local_5c8 >> 0x20);
                          uStack_7e0 = SUB84(adStack_5c0[0],0);
                          uStack_7dc = (undefined4)((ulonglong)adStack_5c0[0] >> 0x20);
                          local_828 = SUB84(adStack_5c0[3],0);
                          uStack_824 = (undefined4)((ulonglong)adStack_5c0[3] >> 0x20);
                          uStack_820 = SUB84(adStack_5c0[4],0);
                          uStack_81c = (undefined4)((ulonglong)adStack_5c0[4] >> 0x20);
                          local_838 = adStack_5c0[7];
                          dStack_830 = adStack_5c0[8];
                          dVar6 = (double)puVar86[0xd];
                          dVar113 = -(double)puVar86[0xc];
                          dVar96 = (double)puVar86[0xb];
                          dVar95 = -*(double *)(lVar68 + 0x410);
                          dVar7 = *(double *)(lVar68 + 0x408);
                          dVar20 = *(double *)(lVar68 + 0x418);
                          local_858 = adStack_5c0[1];
                          local_868._0_8_ = adStack_5c0[5];
                          local_878._0_8_ = adStack_5c0[9];
                          local_8a8 = adStack_5c0[0xd];
                          dVar10 = ((dVar113 * dVar16 - dVar96 * dVar114) - dVar6 * dVar24) + dVar22
                          ;
                          dVar11 = ((dVar113 * dVar17 - dVar96 * dVar13) - dVar6 * dVar25) + dVar23;
                          dVar113 = ((dVar113 * dVar14 - dVar96 * dVar12) - dVar6 * dVar19) + dVar18
                          ;
                          *(float *)(puVar86 + 0x14d) =
                               (float)((((dVar95 * dVar14 - dVar12 * dVar7) - dVar19 * dVar20) +
                                       dVar18) - dVar113);
                          dVar96 = (double)((float)(*(uint *)((longlong)puVar86 + 0x96c) +
                                                   *(int *)(puVar86 + 0x12e) * 2) /
                                           (float)*(uint *)((longlong)puVar86 + 0x96c));
                          dVar6 = (double)((float)(*(uint *)(puVar86 + 0x12d) +
                                                  *(int *)(puVar86 + 0x12e) * 2) /
                                          (float)*(uint *)(puVar86 + 0x12d));
                          local_638 = local_458[0] * dVar96;
                          local_640 = local_458[0] * dVar6;
                          dVar96 = dVar96 * *(double *)(lVar68 + 0xe0);
                          dVar6 = *(double *)(lVar68 + 0xe0) * dVar6;
                          local_658._8_4_ = SUB84(local_638,0);
                          local_658._0_8_ = -local_640;
                          uStack_64c = (uint)((ulonglong)local_638 >> 0x20) ^ 0x80000000;
                          local_848._8_4_ = SUB84(dVar11,0);
                          local_848._0_8_ = dVar10;
                          local_848._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
                          dVar10 = (((dVar95 * dVar16 - dVar7 * dVar114) - dVar20 * dVar24) + dVar22
                                   ) - dVar10;
                          dVar11 = (((dVar95 * dVar17 - dVar7 * dVar13) - dVar20 * dVar25) + dVar23)
                                   - dVar11;
                          local_648 = 0.0;
                          local_670 = dVar11 + dVar96;
                          local_678 = dVar10 + dVar6;
                          local_690._8_8_ = dVar11 - dVar96;
                          local_690._0_8_ = dVar10 - dVar6;
                          local_680 = 0.0;
                          local_630 = 0;
                          local_628 = 1;
                          local_668 = 0;
                          local_660 = 1;
                          FUN_14730eb50(local_658);
                          uVar104 = SUB84(local_6a8,0);
                          uVar105 = (undefined4)((ulonglong)local_6a8 >> 0x20);
                          *(float *)(puVar86 + 0x14e) =
                               (float)(((double)local_6cc._4_8_ - (double)local_690._0_8_) /
                                      (double)(float)(local_678 - (double)local_690._0_8_));
                          *(float *)((longlong)puVar86 + 0xa74) =
                               (float)((local_670 - local_6a8) /
                                      (double)(float)(local_670 - (double)local_690._8_8_));
                          *(float *)(puVar86 + 0x14f) =
                               (float)((local_6b0 - (double)local_690._0_8_) /
                                      (double)(float)(local_678 - (double)local_690._0_8_));
                          *(float *)((longlong)puVar86 + 0xa7c) =
                               (float)((local_670 - local_6c0) /
                                      (double)(float)(local_670 - (double)local_690._8_8_));
                          uVar45 = SUB84(local_638,0);
                          uVar94 = (undefined4)((ulonglong)local_638 >> 0x20);
                          *(float *)(puVar86 + 0x150) =
                               (float)(((double)local_6cc._4_8_ - (double)local_658._0_8_) /
                                      (double)(float)(local_640 - (double)local_658._0_8_));
                          *(float *)((longlong)puVar86 + 0xa84) =
                               (float)((local_638 - local_6a8) /
                                      (double)(float)(local_638 - stack0xfffffffffffff9b0));
                          *(float *)(puVar86 + 0x151) =
                               (float)((local_6b0 - (double)local_658._0_8_) /
                                      (double)(float)(local_640 - (double)local_658._0_8_));
                          *(float *)((longlong)puVar86 + 0xa8c) =
                               (float)((local_638 - local_6c0) /
                                      (double)(float)(local_638 - stack0xfffffffffffff9b0));
                          puVar69 = puVar86 + 0x152;
                          *(undefined4 *)(puVar86 + 0x164) = 0;
                          if (*(int *)((longlong)puVar86 + 0xb24) != 0) {
                            FUN_147314162(puVar69);
                            uVar45 = SUB84(local_638,0);
                            uVar94 = (undefined4)((ulonglong)local_638 >> 0x20);
                            uVar104 = SUB84(local_6a8,0);
                            uVar105 = (undefined4)((ulonglong)local_6a8 >> 0x20);
                          }
                          auVar34._8_4_ = uStack_7e0;
                          auVar34._0_8_ = CONCAT44(uStack_7e4,local_7e8);
                          auVar34._12_4_ = uStack_7dc;
                          auVar32._8_4_ = uStack_820;
                          auVar32._0_8_ = CONCAT44(uStack_824,local_828);
                          auVar32._12_4_ = uStack_81c;
                          dVar6 = dStack_830 * 0.0;
                          local_788._8_4_ = SUB84(dVar6,0);
                          local_788._0_8_ = local_838 * 0.0;
                          local_788._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                          local_818 = dVar115;
                          dStack_810 = dVar15;
                          dVar115 = dVar115 * 0.0;
                          dVar15 = dVar15 * 0.0;
                          dVar20 = (double)CONCAT44(uStack_7e4,local_7e8) * 0.0 +
                                   (double)CONCAT44(uStack_824,local_828) + local_838 * 0.0 +
                                   dVar115;
                          dVar10 = auVar34._8_8_ * 0.0 + auVar32._8_8_ + dVar6 + dVar15;
                          dVar6 = (double)local_878._0_8_ * 0.0;
                          dVar96 = local_8a8 * 0.0;
                          dVar7 = local_858 * 0.0 + (double)local_868._0_8_ + dVar6 + dVar96;
                          uVar54 = local_848._8_8_;
                          local_7a8 = dVar10;
                          dStack_7a0 = dVar10;
                          if ((double)CONCAT44(uVar105,uVar104) <= (double)CONCAT44(uVar94,uVar45)
                              && (double)CONCAT44(uVar94,uVar45) !=
                                 (double)CONCAT44(uVar105,uVar104)) {
                            lVar68 = (longlong)*(int *)(puVar86 + 0x164);
                            uVar43 = *(int *)(puVar86 + 0x164) + 1;
                            *(uint *)(puVar86 + 0x164) = uVar43;
                            if (*(uint *)((longlong)puVar86 + 0xb24) < uVar43) {
                              FUN_1471d6c5e(puVar69);
                            }
                            dVar11 = dVar113 + 0.0;
                            dVar114 = (double)CONCAT44(uVar105,uVar104) + (double)uVar54;
                            dVar12 = (double)local_848._0_8_ + 0.0;
                            auVar33._8_4_ = uStack_820;
                            auVar33._0_8_ = CONCAT44(uStack_824,local_828);
                            auVar33._12_4_ = uStack_81c;
                            puVar48 = (undefined8 *)puVar86[0x162];
                            if ((undefined8 *)puVar86[0x162] == (undefined8 *)0x0) {
                              puVar48 = puVar69;
                            }
                            puVar48[lVar68 * 4] = -dVar20;
                            puVar48[lVar68 * 4 + 1] = -local_7a8;
                            puVar48[lVar68 * 4 + 2] = -dVar7;
                            puVar48[lVar68 * 4 + 3] =
                                 ((dVar11 * local_838 +
                                   dVar114 * (double)CONCAT44(uStack_824,local_828) +
                                   dVar12 * (double)CONCAT44(uStack_7e4,local_7e8) + local_818) *
                                  -dVar20 -
                                 (dVar11 * dStack_830 +
                                  dVar114 * auVar33._8_8_ +
                                  dVar12 * (double)CONCAT44(uStack_7dc,uStack_7e0) + dStack_810) *
                                 local_7a8) -
                                 (dVar11 * (double)local_878._0_8_ +
                                  dVar114 * (double)local_868._0_8_ + dVar12 * local_858 + local_8a8
                                 ) * dVar7;
                          }
                          dVar11 = local_6c0;
                          dVar113 = dVar113 + 0.0;
                          if (stack0xfffffffffffff9b0 < local_6c0) {
                            lVar68 = (longlong)*(int *)(puVar86 + 0x164);
                            uVar43 = *(int *)(puVar86 + 0x164) + 1;
                            *(uint *)(puVar86 + 0x164) = uVar43;
                            if (*(uint *)((longlong)puVar86 + 0xb24) < uVar43) {
                              FUN_1471d6c5e(puVar69);
                            }
                            dVar11 = dVar11 + (double)uVar54;
                            dVar12 = (double)local_848._0_8_ + 0.0;
                            puVar48 = (undefined8 *)puVar86[0x162];
                            if ((undefined8 *)puVar86[0x162] == (undefined8 *)0x0) {
                              puVar48 = puVar69;
                            }
                            puVar48[lVar68 * 4] = dVar20;
                            *(undefined4 *)(puVar48 + lVar68 * 4 + 1) = (undefined4)local_7a8;
                            *(undefined4 *)((longlong)(puVar48 + lVar68 * 4 + 1) + 4) =
                                 local_7a8._4_4_;
                            puVar48[lVar68 * 4 + 2] = dVar7;
                            puVar48[lVar68 * 4 + 3] =
                                 ((double)local_878._0_8_ * dVar113 +
                                  dVar11 * (double)local_868._0_8_ + dVar12 * local_858 + local_8a8)
                                 * dVar7 + (dVar113 * local_838 +
                                            dVar11 * (double)CONCAT44(uStack_824,local_828) +
                                            dVar12 * (double)CONCAT44(uStack_7e4,local_7e8) +
                                           local_818) * dVar20 +
                                           dVar10 * (dVar113 * dStack_830 +
                                                     dVar11 * (double)CONCAT44(uStack_81c,uStack_820
                                                                              ) +
                                                     dVar12 * (double)CONCAT44(uStack_7dc,uStack_7e0
                                                                              ) + dStack_810);
                          }
                          uVar30 = local_6cc._4_8_;
                          uVar105 = uStack_7dc;
                          uVar104 = uStack_7e0;
                          uVar94 = uStack_7e4;
                          uVar45 = local_7e8;
                          dVar115 = (double)CONCAT44(uStack_824,local_828) * 0.0 +
                                    (double)CONCAT44(uStack_7e4,local_7e8) + (double)local_788._0_8_
                                    + dVar115;
                          dVar15 = (double)CONCAT44(uStack_81c,uStack_820) * 0.0 +
                                   (double)CONCAT44(uStack_7dc,uStack_7e0) + (double)local_788._8_8_
                                   + dVar15;
                          uVar111 = local_868._0_4_;
                          uVar112 = local_868._4_4_;
                          dVar96 = (double)local_868._0_8_ * 0.0 + local_858 + dVar6 + dVar96;
                          dVar6 = (double)uVar54 + 0.0;
                          uVar99 = SUB84(local_8a8,0);
                          uVar101 = (undefined4)((ulonglong)local_8a8 >> 0x20);
                          uVar108 = local_878._0_4_;
                          uVar109 = local_878._4_4_;
                          if ((double)local_658._0_8_ < (double)local_6cc._4_8_) {
                            lVar68 = (longlong)*(int *)(puVar86 + 0x164);
                            uVar43 = *(int *)(puVar86 + 0x164) + 1;
                            *(uint *)(puVar86 + 0x164) = uVar43;
                            if (*(uint *)((longlong)puVar86 + 0xb24) < uVar43) {
                              FUN_1471d6c5e(puVar69);
                              uVar111 = local_868._0_4_;
                              uVar112 = local_868._4_4_;
                              uVar108 = local_878._0_4_;
                              uVar109 = local_878._4_4_;
                              uVar99 = SUB84(local_8a8,0);
                              uVar101 = (undefined4)((ulonglong)local_8a8 >> 0x20);
                            }
                            dVar7 = (double)uVar30 + (double)local_848._0_8_;
                            puVar48 = (undefined8 *)puVar86[0x162];
                            if ((undefined8 *)puVar86[0x162] == (undefined8 *)0x0) {
                              puVar48 = puVar69;
                            }
                            puVar48[lVar68 * 4] = dVar115;
                            puVar48[lVar68 * 4 + 1] = dVar15;
                            puVar48[lVar68 * 4 + 2] = dVar96;
                            puVar48[lVar68 * 4 + 3] =
                                 ((double)CONCAT44(uVar109,uVar108) * dVar113 +
                                  (double)CONCAT44(uVar112,uVar111) * dVar6 + dVar7 * local_858 +
                                 (double)CONCAT44(uVar101,uVar99)) * dVar96 +
                                 (dVar113 * local_838 +
                                  dVar6 * (double)CONCAT44(uStack_824,local_828) +
                                  dVar7 * (double)CONCAT44(uVar94,uVar45) + local_818) * dVar115 +
                                 dVar15 * (dVar113 * dStack_830 +
                                           dVar6 * (double)CONCAT44(uStack_81c,uStack_820) +
                                           dVar7 * (double)CONCAT44(uVar105,uVar104) + dStack_810);
                          }
                          dVar7 = local_6b0;
                          auVar97._8_8_ = 0;
                          auVar97._0_8_ = local_858;
                          if (local_6b0 < local_640) {
                            lVar68 = (longlong)*(int *)(puVar86 + 0x164);
                            uVar43 = *(int *)(puVar86 + 0x164) + 1;
                            *(uint *)(puVar86 + 0x164) = uVar43;
                            if (*(uint *)((longlong)puVar86 + 0xb24) < uVar43) {
                              FUN_1471d6c5e(puVar69);
                              uVar111 = local_868._0_4_;
                              uVar112 = local_868._4_4_;
                              uVar108 = local_878._0_4_;
                              uVar109 = local_878._4_4_;
                              uVar99 = SUB84(local_8a8,0);
                              uVar101 = (undefined4)((ulonglong)local_8a8 >> 0x20);
                            }
                            auVar97 = _DAT_149931e80;
                            dVar7 = dVar7 + (double)local_848._0_8_;
                            uVar91 = DAT_149931e80;
                            if ((undefined8 *)puVar86[0x162] != (undefined8 *)0x0) {
                              puVar69 = (undefined8 *)puVar86[0x162];
                            }
                            puVar69[lVar68 * 4] = (ulonglong)dVar115 ^ uVar91;
                            puVar69[lVar68 * 4 + 1] = (ulonglong)dVar15 ^ uVar91;
                            puVar69[lVar68 * 4 + 2] = (ulonglong)dVar96 ^ uVar91;
                            puVar69[lVar68 * 4 + 3] =
                                 ((local_818 +
                                  local_838 * dVar113 +
                                  (double)CONCAT44(uStack_824,local_828) * dVar6 +
                                  (double)CONCAT44(uVar94,uVar45) * dVar7) *
                                  (double)((ulonglong)dVar115 ^ uVar91) -
                                 (dStack_810 +
                                 dStack_830 * dVar113 +
                                 (double)CONCAT44(uStack_81c,uStack_820) * dVar6 +
                                 (double)CONCAT44(uVar105,uVar104) * dVar7) * dVar15) -
                                 ((double)CONCAT44(uVar101,uVar99) +
                                 (double)CONCAT44(uVar109,uVar108) * dVar113 +
                                 (double)CONCAT44(uVar112,uVar111) * dVar6 + local_858 * dVar7) *
                                 dVar96;
                          }
                          fVar93 = (float)local_778;
                        }
                      }
                    }
                    lVar76 = lVar76 + 1;
                  } while (lVar76 < local_5d4);
                }
                else {
                  auVar97._0_4_ = (float)*(double *)(local_940 + 0x120);
                  local_948 = &local_540;
                  local_950 = &local_5d4;
                  local_958 = (undefined8 **)&local_6d4;
                  local_960 = (byte *)&local_5d0;
                  local_968 = local_890;
                  FUN_14730de12(local_928.QuadPart,auVar97._0_8_,*(undefined8 *)(local_940 + 8),
                                &local_538);
                  if (0 < local_5d4) goto LAB_140c92b4e;
                }
                uVar91 = local_8d8;
                puVar47 = local_808;
                LVar51 = local_928;
                uVar43 = local_7f8._0_4_;
              }
            }
            uVar65 = (uint)puVar47;
            if (local_218 != 0) {
              FUN_1400020a8();
            }
            if (local_338 != 0) {
              FUN_1400020a8();
            }
            uVar70 = (uint)local_908;
          } while ((uint)local_908 != uVar65);
        }
      }
      puVar47 = local_918;
      if (local_909 == '\0') {
        pbStack_530 = local_8f8;
        puStack_520 = local_190;
        local_508 = local_8b8;
        local_538 = LVar51;
        local_528 = local_940;
        local_518 = plVar84;
        plStack_510 = &local_6e8;
        if (DAT_14cae3d68 != 0) {
          local_960 = (byte *)CONCAT44(local_960._4_4_,DAT_14c761568);
          local_968 = (LARGE_INTEGER *)CONCAT44(local_968._4_4_,DAT_14c76156c);
          FUN_143079fca(&local_538,0,1,uVar65 + 1);
          if (DAT_14cae3d68 == 2) {
            local_960 = (byte *)CONCAT44(local_960._4_4_,DAT_14c761570);
            local_968 = (LARGE_INTEGER *)CONCAT44(local_968._4_4_,DAT_14c761574);
            FUN_143079fca(&local_538,1,0,uVar65 + 2);
          }
        }
      }
      uVar88 = local_940;
      if ((char)local_8fc != '\0') {
        lVar68 = FUN_14001cc68(0x2b80,0x10);
        plVar55 = *(longlong **)(*(longlong *)(local_940 + 8) + 0x4c40);
        uVar43 = *(uint *)(LVar51.QuadPart + 0x34);
        lVar76 = plVar55[0xc];
        if (lVar76 != 0) {
          local_8d0 = lVar68;
          if (DAT_14c87e718 == '\0') {
            iVar46 = *(int *)(lVar76 + 0x1c);
            if ((2 < iVar46) &&
               (bVar56 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar56 < 3)) {
              local_538.QuadPart = 0x20100000001;
              pbStack_530 = (byte *)0x30100000101;
              local_528 = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
              puStack_520 = (undefined1 *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
              local_518 = (longlong *)0x20000000000;
              plStack_510 = (longlong *)0x30000000100;
              if (*(byte *)((longlong)&local_538 + (ulonglong)(iVar46 - 3) * 4) == bVar56)
              goto LAB_140c9542e;
            }
            QueryPerformanceCounter(&local_538);
            pbStack_530 = (byte *)0xffffffffffffffff;
            FUN_140056092(lVar76,&local_538);
            uVar91 = local_8d8;
            lVar68 = local_8d0;
            LVar51 = local_928;
          }
          else {
LAB_140c9542e:
            FUN_140082318(lVar76);
            uVar91 = local_8d8;
            lVar68 = local_8d0;
            LVar51 = local_928;
          }
        }
        plVar49 = plVar55 + 7;
        if ((longlong *)plVar55[9] != (longlong *)0x0) {
          plVar49 = (longlong *)plVar55[9];
        }
        uVar65 = uVar43 + 0x1f;
        if (-1 < (int)uVar43) {
          uVar65 = uVar43;
        }
        uVar45 = 0;
        if ((*(uint *)((longlong)plVar49 + (longlong)((int)uVar65 >> 5) * 4) >> (uVar43 & 0x1f) & 1)
            != 0) {
          uVar45 = *(undefined4 *)(*plVar55 + 4 + (longlong)(int)uVar43 * 8);
        }
        local_968 = (LARGE_INTEGER *)
                    CONCAT44(*(int *)(local_8f8 + 0x3104) - *(int *)(local_8f8 + 0x30fc),
                             *(int *)(local_8f8 + 0x3100) - *(int *)(local_8f8 + 0x30f8));
        local_958 = (undefined8 **)CONCAT44(local_958._4_4_,uVar45);
        local_960 = local_8f8;
        FUN_144a320dc(lVar68,local_768,LVar51.QuadPart,local_8f8 + 0x500);
        local_908 = (longlong *)FUN_14001cc68(0x18);
        local_908[1] = (longlong)&DAT_100000001;
        *local_908 = (longlong)&PTR_FUN_14a309b90;
        local_908[2] = lVar68;
        lVar76 = plVar84[0xb];
        uVar43 = (int)lVar76 + 1;
        *(uint *)(plVar84 + 0xb) = uVar43;
        if (*(uint *)((longlong)plVar84 + 0x5c) < uVar43) {
          FUN_14021cc5e(local_7c8);
        }
        puVar47 = local_918;
        lVar85 = *local_7c8;
        lVar76 = (longlong)(int)lVar76 * 0x10;
        *(longlong *)(lVar85 + lVar76) = lVar68;
        *(longlong **)(lVar85 + 8 + lVar76) = local_908;
        if (local_908 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_908 + 1) = (int)local_908[1] + 1;
          UNLOCK();
        }
        iVar46 = *(int *)(local_940 + 0x590);
        uVar43 = iVar46 + 1;
        *(uint *)(local_940 + 0x590) = uVar43;
        if (*(uint *)(local_940 + 0x594) < uVar43) {
          FUN_14021cc5e(local_7c0);
        }
        lVar85 = (longlong)iVar46 * 0x10;
        lVar76 = *local_7c0;
        *(longlong *)(lVar76 + lVar85) = lVar68;
        *(longlong **)(lVar76 + 8 + lVar85) = local_908;
        if (local_908 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_908 + 1) = (int)local_908[1] + 1;
          UNLOCK();
        }
        if (DAT_14c760a9c != 0) {
          puVar50 = (uint *)*puVar52;
          if (puVar50 != (uint *)0x0) goto LAB_140c94104;
          while( true ) {
            FUN_14472e504(puVar52);
            puVar50 = (uint *)*puVar52;
LAB_140c94104:
            puVar86 = (undefined8 *)(*(longlong *)(puVar50 + 0x10) + 0xfU & 0xfffffffffffffff0);
            uVar43 = puVar50[0x12];
            if (puVar86 + 0x22a <= puVar50 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar50 + 0x10) = puVar50 + 0x4000;
              LOCK();
              uVar65 = *puVar50;
              *puVar50 = *puVar50 + uVar43 + 1;
              UNLOCK();
              if ((uVar65 ^ uVar43) != 0xffffffff) break;
              puVar50 = (uint *)*puVar52;
              *puVar50 = 0xffffffff;
              *(uint **)(puVar50 + 0x10) = puVar50 + 0x16;
              puVar50[0x12] = 0;
              *puVar52 = puVar50;
              puVar86 = (undefined8 *)((longlong)puVar50 + 0x67U & 0xfffffffffffffff0);
              uVar43 = 0;
              if (puVar86 + 0x22a <= puVar50 + 0x4000) {
                uVar43 = 1;
                goto LAB_140c94283;
              }
            }
          }
          uVar43 = uVar43 + 1;
LAB_140c94283:
          *(undefined8 **)(puVar50 + 0x10) = puVar86 + 0x22b;
          puVar50[0x12] = uVar43;
          *(int *)(puVar86 + -1) = ((int)puVar86 + -8) - (int)puVar50;
          *(undefined4 *)((longlong)puVar86 + -4) = 0x1150;
          puVar86[1] = 0;
          *puVar86 = &PTR_FUN_14a3099b0;
          lVar76 = *(longlong *)(local_940 + 0x90);
          do {
            puVar86[1] = lVar76;
            LOCK();
            lVar85 = *(longlong *)(local_940 + 0x90);
            bVar67 = lVar76 == lVar85;
            if (bVar67) {
              *(longlong *)(local_940 + 0x90) = (longlong)puVar86;
              lVar85 = lVar76;
            }
            UNLOCK();
            lVar76 = lVar85;
          } while (!bVar67);
          puVar69 = puVar86 + 2;
          FUN_144ab9098(puVar69);
          fVar98 = -1.0;
          if (*(int *)(DAT_14ca5b318 + 4) != 0) {
            fVar98 = fVar93;
          }
          if (local_908 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_908 + 1) = (int)local_908[1] + 1;
            UNLOCK();
          }
          plVar55 = (longlong *)puVar86[0x16d];
          puVar86[0x16c] = lVar68;
          puVar86[0x16d] = local_908;
          local_8d0 = lVar68;
          if (plVar55 != (longlong *)0x0) {
            LOCK();
            plVar49 = plVar55 + 1;
            *(int *)plVar49 = (int)*plVar49 + -1;
            UNLOCK();
            if ((int)*plVar49 == 0) {
              (**(code **)*plVar55)(plVar55);
              LOCK();
              piVar1 = (int *)((longlong)plVar55 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar55 + 0x10))(plVar55);
              }
            }
          }
          ((LARGE_INTEGER *)(puVar86 + 0x16e))->QuadPart = (LONGLONG)LVar51;
          FUN_144b128fe(&local_538,LVar51.QuadPart);
          puVar86[0x176] = local_508;
          puVar86[0x177] = dStack_500;
          puVar86[0x174] = local_518;
          puVar86[0x175] = plStack_510;
          puVar86[0x172] = local_528;
          puVar86[0x173] = puStack_520;
          *(LARGE_INTEGER *)(puVar86 + 0x170) = local_538;
          puVar86[0x171] = pbStack_530;
          puVar86[9] = local_8f8;
          puVar86[0x12d] = 0x400000004000;
          uVar43 = *(uint *)(puVar86 + 0x134);
          *(uint *)(puVar86 + 0x134) = uVar43 | 0x90;
          bVar56 = *(byte *)(*(longlong *)(LVar51.QuadPart + 0x28) + 0x1d1);
          *(undefined4 *)(puVar86 + 0x12e) = 0;
          *(float *)((longlong)puVar86 + 0x10e4) = fVar98;
          *(uint *)(puVar86 + 0x134) = (uVar43 & 0xfff7ffbf | 0x90) + (bVar56 & 1) * 0x80000 + 0x40;
          *(undefined1 *)((longlong)puVar86 + 0x9a4) = 2;
          lVar76 = puVar86[0x16c];
          lVar92 = (longlong)*(int *)(lVar76 + 0x2910) * 0x140;
          local_708 = *(undefined8 *)(lVar76 + 0x70);
          uStack_700 = *(undefined8 *)(lVar76 + 0x78);
          local_718 = *(undefined8 *)(lVar76 + 0x80);
          uStack_710 = *(undefined8 *)(lVar76 + 0x88);
          local_6f8 = *(undefined8 *)(lVar76 + 0x90);
          uStack_6f0 = *(undefined8 *)(lVar76 + 0x98);
          local_7a8 = *(double *)(lVar76 + 0xa0);
          dStack_7a0 = *(double *)(lVar76 + 0xa8);
          local_788 = *(undefined1 (*) [16])(lVar76 + 0xb0);
          local_778 = *(undefined8 *)(lVar76 + 0xc0);
          uStack_770 = *(undefined8 *)(lVar76 + 200);
          local_828 = (undefined4)*(undefined8 *)(lVar76 + 0xd0);
          uStack_824 = (undefined4)((ulonglong)*(undefined8 *)(lVar76 + 0xd0) >> 0x20);
          uStack_820 = (undefined4)*(undefined8 *)(lVar76 + 0xd8);
          uStack_81c = (undefined4)((ulonglong)*(undefined8 *)(lVar76 + 0xd8) >> 0x20);
          lVar68 = *(longlong *)(lVar76 + 0x2900);
          lVar85 = lVar76 + 0x100;
          if (lVar68 != 0) {
            lVar85 = lVar68;
          }
          local_7e8 = (undefined4)*(undefined8 *)(lVar76 + 0xe0);
          uStack_7e4 = (undefined4)((ulonglong)*(undefined8 *)(lVar76 + 0xe0) >> 0x20);
          uStack_7e0 = (undefined4)*(undefined8 *)(lVar76 + 0xe8);
          uStack_7dc = (undefined4)((ulonglong)*(undefined8 *)(lVar76 + 0xe8) >> 0x20);
          pdVar57 = (double *)(lVar92 + -0x140 + lVar85);
          dVar26 = *pdVar57;
          dVar27 = pdVar57[1];
          pdVar57 = (double *)(lVar92 + -0x130 + lVar85);
          local_798 = *pdVar57;
          dStack_790 = pdVar57[1];
          puVar48 = (undefined8 *)(lVar92 + -0x120 + lVar85);
          local_8f8 = (byte *)*puVar48;
          dStack_8f0 = (double)puVar48[1];
          pdVar57 = (double *)(lVar92 + -0x110 + lVar85);
          local_838 = *pdVar57;
          dStack_830 = pdVar57[1];
          pauVar3 = (undefined1 (*) [16])(lVar92 + -0x100 + lVar85);
          dVar28 = *(double *)*pauVar3;
          dVar29 = *(double *)(*pauVar3 + 8);
          local_848 = *pauVar3;
          puVar48 = (undefined8 *)(lVar92 + -0xf0 + lVar85);
          local_808 = (uint *)*puVar48;
          dStack_800 = (double)puVar48[1];
          pdVar57 = (double *)(lVar92 + -0xe0 + lVar85);
          local_8a8 = *pdVar57;
          dStack_8a0 = pdVar57[1];
          puVar4 = (undefined4 *)(lVar92 + -0xc0 + lVar85);
          uVar43 = puVar4[1];
          uVar45 = puVar4[2];
          uVar65 = puVar4[3];
          pdVar57 = (double *)(lVar92 + -0xd0 + lVar85);
          local_858 = *pdVar57;
          dStack_850 = pdVar57[1];
          uVar91 = *(ulonglong *)(lVar92 + -0xb0 + lVar85);
          dVar6 = *(double *)(lVar76 + 0x70);
          dVar96 = *(double *)(lVar76 + 0x70);
          dVar7 = *(double *)(lVar76 + 0x78);
          dVar20 = *(double *)(lVar76 + 0x78);
          dVar10 = *(double *)(lVar76 + 0x80);
          dVar11 = *(double *)(lVar76 + 0x80);
          local_878._0_8_ = *(double *)(lVar76 + 0x88);
          dVar12 = *(double *)(lVar76 + 0x88);
          local_878._8_4_ = SUB84(dVar12,0);
          uStack_86c = (int)((ulonglong)dVar12 >> 0x20);
          dVar12 = *(double *)(lVar76 + 0x90);
          dVar114 = *(double *)(lVar76 + 0x90);
          dVar115 = *(double *)(lVar76 + 0x98);
          dVar13 = *(double *)(lVar76 + 0x98);
          dVar15 = *(double *)(lVar76 + 0xa0);
          dVar14 = *(double *)(lVar76 + 0xa0);
          dVar16 = *(double *)(lVar76 + 0xa8);
          dVar17 = *(double *)(lVar76 + 0xa8);
          dVar35 = *(double *)(lVar76 + 0xb0);
          dVar18 = *(double *)(lVar76 + 0xb0);
          dVar22 = *(double *)(lVar76 + 0xb8);
          dVar19 = *(double *)(lVar76 + 0xb8);
          dVar24 = *(double *)(lVar76 + 0xc0);
          dVar23 = *(double *)(lVar76 + 0xc0);
          local_868._0_8_ = *(double *)(lVar76 + 200);
          dVar25 = *(double *)(lVar76 + 200);
          local_868._8_4_ = SUB84(dVar25,0);
          uStack_85c = (int)((ulonglong)dVar25 >> 0x20);
          pdVar57 = (double *)(lVar76 + 0xd0);
          local_748 = *(undefined4 *)pdVar57;
          uStack_744 = *(undefined4 *)(lVar76 + 0xd4);
          dVar36 = *pdVar57;
          dVar25 = *pdVar57;
          uStack_740 = SUB84(dVar25,0);
          uStack_73c = (undefined4)((ulonglong)dVar25 >> 0x20);
          pdVar57 = (double *)(lVar76 + 0xd8);
          local_738 = *(undefined4 *)pdVar57;
          uStack_734 = *(undefined4 *)(lVar76 + 0xdc);
          dVar37 = *pdVar57;
          dVar95 = *pdVar57;
          uStack_730 = SUB84(dVar95,0);
          uStack_72c = (undefined4)((ulonglong)dVar95 >> 0x20);
          pdVar57 = (double *)(lVar76 + 0xe0);
          local_728 = *(undefined4 *)pdVar57;
          uStack_724 = *(undefined4 *)(lVar76 + 0xe4);
          dVar38 = *pdVar57;
          dVar113 = *pdVar57;
          uStack_720 = SUB84(dVar113,0);
          uStack_71c = (undefined4)((ulonglong)dVar113 >> 0x20);
          local_7f8._0_8_ = *(double *)(lVar76 + 0xe8);
          dVar5 = *(double *)(lVar76 + 0xe8);
          local_7f8._8_4_ = SUB84(dVar5,0);
          uStack_7ec = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined4 *)(puVar86 + 0xb) = *puVar4;
          *(uint *)((longlong)puVar86 + 0x5c) = uVar43 ^ 0x80000000;
          *(undefined4 *)(puVar86 + 0xc) = uVar45;
          *(uint *)((longlong)puVar86 + 100) = uVar65 ^ 0x80000000;
          puVar86[0xd] = uVar91 ^ 0x8000000000000000;
          dVar5 = (double)local_878._0_8_ * local_8a8 +
                  dVar10 * dVar28 + dVar7 * (double)local_8f8 + dVar6 * dVar26;
          dVar21 = stack0xfffffffffffff790 * dStack_8a0 +
                   dVar11 * dVar29 + dVar20 * dStack_8f0 + dVar96 * dVar27;
          dVar10 = (double)local_878._0_8_ * local_858 +
                   dVar10 * (double)local_808 + dVar7 * local_838 + dVar6 * local_798;
          dVar6 = stack0xfffffffffffff790 * dStack_850 +
                  dVar11 * dStack_800 + dVar20 * dStack_830 + dVar96 * dStack_790;
          local_878._8_4_ = SUB84(dVar6,0);
          local_878._0_8_ = dVar10;
          uStack_86c = (int)((ulonglong)dVar6 >> 0x20);
          dVar102 = dVar16 * local_8a8 +
                    dVar15 * dVar28 + dVar115 * (double)local_8f8 + dVar12 * dVar26;
          dVar103 = dVar17 * dStack_8a0 + dVar14 * dVar29 + dVar13 * dStack_8f0 + dVar114 * dVar27;
          dVar6 = dVar16 * local_858 +
                  dVar15 * (double)local_808 + dVar115 * local_838 + dVar12 * local_798;
          dVar96 = dVar17 * dStack_850 +
                   dVar14 * dStack_800 + dVar13 * dStack_830 + dVar114 * dStack_790;
          local_758._8_4_ = SUB84(dVar96,0);
          local_758._0_8_ = dVar6;
          local_758._12_4_ = (int)((ulonglong)dVar96 >> 0x20);
          dVar114 = (double)local_868._0_8_ * local_8a8 +
                    dVar24 * dVar28 + dVar22 * (double)local_8f8 + dVar35 * dVar26;
          dVar115 = stack0xfffffffffffff7a0 * dStack_8a0 +
                    dVar23 * dVar29 + dVar19 * dStack_8f0 + dVar18 * dVar27;
          dVar20 = (double)local_868._0_8_ * local_858 +
                   dVar24 * (double)local_808 + dVar22 * local_838 + dVar35 * local_798;
          dVar96 = stack0xfffffffffffff7a0 * dStack_850 +
                   dVar23 * dStack_800 + dVar19 * dStack_830 + dVar18 * dStack_790;
          uVar104 = SUB84(dVar96,0);
          uVar105 = (undefined4)((ulonglong)dVar96 >> 0x20);
          uVar54 = local_758._8_8_;
          dVar11 = (double)local_7f8._0_8_ * local_8a8 +
                   dVar38 * dVar28 + dVar37 * (double)local_8f8 + dVar36 * dVar26;
          dVar12 = stack0xfffffffffffff810 * dStack_8a0 +
                   dVar113 * dVar29 + dVar95 * dStack_8f0 + dVar25 * dVar27;
          dVar96 = (double)local_7f8._0_8_ * local_858 +
                   dVar38 * (double)local_808 + dVar37 * local_838 + dVar36 * local_798;
          dVar7 = stack0xfffffffffffff810 * dStack_850 +
                  dVar113 * dStack_800 + dVar95 * dStack_830 + dVar25 * dStack_790;
          uVar45 = SUB84(dVar7,0);
          uVar94 = (undefined4)((ulonglong)dVar7 >> 0x20);
          dVar7 = stack0xfffffffffffff790;
          local_178._8_4_ = SUB84(dVar21,0);
          local_178._0_8_ = dVar5;
          local_178._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
          local_168._8_8_ = stack0xfffffffffffff790;
          local_168._0_8_ = dVar10;
          local_158._8_8_ = dVar103;
          local_158._0_8_ = dVar102;
          local_148._8_8_ = local_758._8_8_;
          local_148._0_8_ = dVar6;
          local_138._8_8_ = dVar115;
          local_138._0_8_ = dVar114;
          local_868._8_4_ = uVar104;
          local_868._0_8_ = dVar20;
          uStack_85c = uVar105;
          local_128._8_4_ = uVar104;
          local_128._0_8_ = dVar20;
          local_128._12_4_ = uVar105;
          local_118._8_4_ = SUB84(dVar12,0);
          local_118._0_8_ = dVar11;
          local_118._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_7f8._8_4_ = uVar45;
          local_7f8._0_8_ = dVar96;
          uStack_7ec = uVar94;
          local_108._8_4_ = uVar45;
          local_108._0_8_ = dVar96;
          local_108._12_4_ = uVar94;
          local_818 = dVar26;
          dStack_810 = dVar27;
          FUN_144920f26(puVar86 + 0x58,local_178,CONCAT71((int7)((ulonglong)lVar68 >> 8),1));
          puVar48 = (undefined8 *)puVar86[0x70];
          if ((undefined8 *)puVar86[0x70] == (undefined8 *)0x0) {
            puVar48 = puVar86 + 0x58;
          }
          iVar46 = *(int *)(puVar86 + 0x72);
          *(int *)(puVar86 + 0xb2) = iVar46;
          if (iVar46 == 0 && *(int *)((longlong)puVar86 + 0x594) == 0) {
            *(undefined4 *)((longlong)puVar86 + 0x594) = 6;
          }
          else {
            FUN_144715b40(puVar86 + 0x98,iVar46);
            if (iVar46 != 0) {
              puVar87 = puVar86 + 0x98;
              if ((undefined8 *)puVar86[0xb0] != (undefined8 *)0x0) {
                puVar87 = (undefined8 *)puVar86[0xb0];
              }
              memcpy(puVar87,puVar48,(longlong)iVar46 << 5);
            }
          }
          dVar20 = dStack_790;
          dVar96 = local_798;
          puVar48 = puVar86 + 0x74;
          if ((undefined8 *)puVar86[0x94] != (undefined8 *)0x0) {
            puVar48 = (undefined8 *)puVar86[0x94];
          }
          iVar46 = *(int *)(puVar86 + 0x96);
          *(int *)(puVar86 + 0xd6) = iVar46;
          if (iVar46 == 0 && *(int *)((longlong)puVar86 + 0x6b4) == 0) {
            *(undefined4 *)((longlong)puVar86 + 0x6b4) = 8;
          }
          else {
            FUN_144715cb0(puVar86 + 0xb4,iVar46);
            if (iVar46 != 0) {
              puVar87 = puVar86 + 0xb4;
              if ((undefined8 *)puVar86[0xd4] != (undefined8 *)0x0) {
                puVar87 = (undefined8 *)puVar86[0xd4];
              }
              memcpy(puVar87,puVar48,(longlong)iVar46 << 5);
            }
          }
          if (*(int *)(DAT_14ca5b330 + 4) == 0) {
            plVar55 = *(longlong **)(LVar51.QuadPart + 0x28);
            uVar45 = exp2f((float)(*(int *)(puVar86[0x16c] + 0xf0) +
                                  *(int *)(puVar86[0x16c] + 0x2910)));
            lVar76 = puVar86[9];
            local_5c8 = *(undefined8 **)(lVar76 + 0x1048);
            adStack_5c0[0] = *(double *)(lVar76 + 0x1050);
            adStack_5c0[1] = *(double *)(lVar76 + 0x1058);
            local_960 = (byte *)CONCAT44(local_960._4_4_,uVar45);
            local_968 = (LARGE_INTEGER *)CONCAT44(local_968._4_4_,0x41200000);
            local_958 = (undefined8 **)(puVar86 + 0xde);
            (**(code **)(*plVar55 + 0xd8))(plVar55,&local_538,lVar76,&local_5c8);
            puVar86[0xdb] = local_528;
            puVar86[0xdc] = puStack_520;
            *(LARGE_INTEGER *)(puVar86 + 0xd9) = local_538;
            puVar86[0xda] = pbStack_530;
          }
          else {
            lVar76 = puVar86[0x16c];
            uVar45 = *(undefined4 *)(lVar76 + 0x2924);
            uVar94 = *(undefined4 *)(lVar76 + 0x2928);
            uVar104 = *(undefined4 *)(lVar76 + 0x292c);
            uVar30 = *(undefined8 *)(lVar76 + 0x2930);
            uVar31 = *(undefined8 *)(lVar76 + 0x2938);
            *(undefined4 *)(puVar86 + 0xd9) = *(undefined4 *)(lVar76 + 0x2920);
            *(undefined4 *)((longlong)puVar86 + 0x6cc) = uVar45;
            *(undefined4 *)(puVar86 + 0xda) = uVar94;
            *(undefined4 *)((longlong)puVar86 + 0x6d4) = uVar104;
            puVar86[0xdb] = uVar30;
            puVar86[0xdc] = uVar31;
            local_478 = (LARGE_INTEGER *)0x0;
            iVar46 = *(int *)(lVar76 + 0x2a10);
            local_468 = CONCAT44(local_468._4_4_,iVar46);
            if ((longlong)iVar46 == 0) {
              local_468 = CONCAT44(6,iVar46);
            }
            else {
              pvVar58 = (void *)(lVar76 + 0x2940);
              if (*(void **)(lVar76 + 0x2a00) != (void *)0x0) {
                pvVar58 = *(void **)(lVar76 + 0x2a00);
              }
              FUN_144715b40(&local_538,iVar46,0);
              pLVar53 = local_478;
              if (local_478 == (LARGE_INTEGER *)0x0) {
                pLVar53 = &local_538;
              }
              memcpy(pLVar53,pvVar58,(longlong)iVar46 << 5);
            }
            local_358 = (double *)0x0;
            iVar46 = *(int *)(lVar76 + 0x2b30);
            local_348 = CONCAT44(local_348._4_4_,iVar46);
            if ((longlong)iVar46 == 0) {
              local_348 = CONCAT44(8,iVar46);
            }
            else {
              pvVar58 = (void *)(lVar76 + 0x2a20);
              if (*(void **)(lVar76 + 0x2b20) != (void *)0x0) {
                pvVar58 = *(void **)(lVar76 + 0x2b20);
              }
              FUN_144715cb0(local_458,iVar46,0);
              pdVar57 = local_358;
              if (local_358 == (double *)0x0) {
                pdVar57 = local_458;
              }
              memcpy(pdVar57,pvVar58,(longlong)iVar46 << 5);
            }
            pLVar53 = local_478;
            if ((LARGE_INTEGER *)(puVar86 + 0xe2) != &local_538) {
              if (local_478 == (LARGE_INTEGER *)0x0) {
                memcpy((LARGE_INTEGER *)(puVar86 + 0xe2),&local_538,0xc0);
              }
              if (puVar86[0xfa] != 0) {
                FUN_1400020a8();
                pLVar53 = local_478;
              }
              puVar86[0xfa] = pLVar53;
              local_478 = (LARGE_INTEGER *)0x0;
              *(int *)(puVar86 + 0xfc) = (int)local_468;
              *(undefined4 *)((longlong)puVar86 + 0x7e4) = local_468._4_4_;
              local_468 = 0x600000000;
            }
            pdVar57 = local_358;
            if ((double *)(puVar86 + 0xfe) == local_458) {
              if (local_358 != (double *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (local_358 == (double *)0x0) {
                memcpy(puVar86 + 0xfe,local_458,0x100);
              }
              if (puVar86[0x11e] != 0) {
                FUN_1400020a8();
                pdVar57 = local_358;
              }
              puVar86[0x11e] = pdVar57;
              local_358 = (double *)0x0;
              *(int *)(puVar86 + 0x120) = (int)local_348;
              *(undefined4 *)((longlong)puVar86 + 0x904) = local_348._4_4_;
              local_348 = 0x800000000;
            }
            puVar47 = local_918;
            LVar51 = local_928;
            if (local_478 != (LARGE_INTEGER *)0x0) {
              FUN_1400020a8();
              puVar47 = local_918;
              LVar51 = local_928;
            }
          }
          *(undefined4 *)((longlong)puVar86 + 0x954) = 1000;
          puVar86[0x1e] = dVar26;
          puVar86[0x1f] = dVar27;
          puVar86[0x20] = dVar96;
          puVar86[0x21] = dVar20;
          puVar86[0x22] = local_8f8;
          puVar86[0x23] = dStack_8f0;
          puVar86[0x24] = local_838;
          puVar86[0x25] = dStack_830;
          puVar86[0x26] = local_848._0_8_;
          puVar86[0x27] = local_848._8_8_;
          puVar86[0x28] = local_808;
          puVar86[0x29] = dStack_800;
          puVar86[0x2a] = local_8a8;
          puVar86[0x2b] = dStack_8a0;
          puVar86[0x2c] = local_858;
          puVar86[0x2d] = dStack_850;
          puVar86[0x2e] = dVar26;
          puVar86[0x2f] = dVar27;
          puVar86[0x30] = dVar96;
          puVar86[0x31] = dVar20;
          puVar86[0x32] = local_8f8;
          puVar86[0x33] = dStack_8f0;
          puVar86[0x34] = local_838;
          puVar86[0x35] = dStack_830;
          puVar86[0x36] = local_848._0_8_;
          puVar86[0x37] = local_848._8_8_;
          puVar86[0x38] = local_808;
          puVar86[0x39] = dStack_800;
          puVar86[0x3a] = local_8a8;
          puVar86[0x3b] = dStack_8a0;
          puVar86[0x3c] = local_858;
          puVar86[0x3d] = dStack_850;
          puVar86[0xe] = local_708;
          puVar86[0xf] = uStack_700;
          puVar86[0x10] = local_718;
          puVar86[0x11] = uStack_710;
          fVar93 = (float)dVar5;
          puVar86[0x12] = local_6f8;
          puVar86[0x13] = uStack_6f0;
          puVar86[0x14] = local_7a8;
          puVar86[0x15] = dStack_7a0;
          fVar98 = (float)dVar102;
          fVar100 = (float)dVar103;
          puVar86[0x16] = local_788._0_8_;
          puVar86[0x17] = local_788._8_8_;
          puVar86[0x18] = local_778;
          puVar86[0x19] = uStack_770;
          fVar106 = (float)dVar114;
          fVar107 = (float)dVar115;
          puVar86[0x1a] = CONCAT44(uStack_824,local_828);
          puVar86[0x1b] = CONCAT44(uStack_81c,uStack_820);
          puVar86[0x1c] = CONCAT44(uStack_7e4,local_7e8);
          puVar86[0x1d] = CONCAT44(uStack_7dc,uStack_7e0);
          fVar110 = (float)dVar11;
          *(float *)(puVar86 + 0x3e) = fVar93;
          *(float *)((longlong)puVar86 + 500) = (float)dVar21;
          *(float *)(puVar86 + 0x3f) = (float)dVar10;
          *(float *)((longlong)puVar86 + 0x1fc) = (float)dVar7;
          *(float *)(puVar86 + 0x40) = fVar98;
          *(float *)((longlong)puVar86 + 0x204) = fVar100;
          *(float *)(puVar86 + 0x41) = (float)dVar6;
          *(float *)((longlong)puVar86 + 0x20c) = (float)(double)uVar54;
          *(float *)(puVar86 + 0x42) = fVar106;
          *(float *)((longlong)puVar86 + 0x214) = fVar107;
          *(float *)(puVar86 + 0x43) = (float)(double)local_868._0_8_;
          *(float *)((longlong)puVar86 + 0x21c) = (float)stack0xfffffffffffff7a0;
          *(float *)(puVar86 + 0x44) = fVar110;
          *(float *)((longlong)puVar86 + 0x224) = (float)dVar12;
          *(float *)(puVar86 + 0x45) = (float)(double)local_7f8._0_8_;
          *(float *)((longlong)puVar86 + 0x22c) = (float)stack0xfffffffffffff810;
          *(float *)(puVar86 + 0x46) = fVar93;
          *(float *)((longlong)puVar86 + 0x234) = (float)dVar21;
          *(float *)(puVar86 + 0x47) = (float)dVar10;
          *(float *)((longlong)puVar86 + 0x23c) = (float)dVar7;
          *(float *)(puVar86 + 0x48) = fVar98;
          *(float *)((longlong)puVar86 + 0x244) = fVar100;
          *(float *)(puVar86 + 0x49) = (float)dVar6;
          *(float *)((longlong)puVar86 + 0x24c) = (float)(double)uVar54;
          *(float *)(puVar86 + 0x4a) = fVar106;
          *(float *)((longlong)puVar86 + 0x254) = fVar107;
          *(float *)(puVar86 + 0x4b) = (float)(double)local_868._0_8_;
          *(float *)((longlong)puVar86 + 0x25c) = (float)stack0xfffffffffffff7a0;
          *(float *)(puVar86 + 0x4c) = fVar110;
          *(float *)((longlong)puVar86 + 0x264) = (float)dVar12;
          *(float *)(puVar86 + 0x4d) = (float)(double)local_7f8._0_8_;
          *(float *)((longlong)puVar86 + 0x26c) = (float)stack0xfffffffffffff810;
          iVar46 = (int)plVar84[1];
          *(uint *)(plVar84 + 1) = iVar46 + 1U;
          if (*(uint *)((longlong)plVar84 + 0xc) < iVar46 + 1U) {
            FUN_1447417ac(plVar84,iVar46);
          }
          *(undefined8 **)(*plVar84 + (longlong)iVar46 * 8) = puVar69;
          iVar46 = *(int *)(local_8c0 + 0x58);
          *(uint *)(local_8c0 + 0x58) = iVar46 + 1U;
          if (*(uint *)(local_8c0 + 0x5c) < iVar46 + 1U) {
            FUN_1447417ac(local_8b8,iVar46);
          }
          *(undefined8 **)(*local_8b8 + (longlong)iVar46 * 8) = puVar69;
          uVar54 = *(undefined8 *)(local_8d0 + 0x2b48);
          lVar76 = *(longlong *)(local_8d0 + 0x2b50);
          if (lVar76 != 0) {
            LOCK();
            *(int *)(lVar76 + 8) = *(int *)(lVar76 + 8) + 1;
            UNLOCK();
          }
          plVar55 = (longlong *)puVar86[0x137];
          puVar86[0x136] = uVar54;
          puVar86[0x137] = lVar76;
          if (plVar55 != (longlong *)0x0) {
            LOCK();
            plVar49 = plVar55 + 1;
            *(int *)plVar49 = (int)*plVar49 + -1;
            UNLOCK();
            if ((int)*plVar49 == 0) {
              (**(code **)*plVar55)(plVar55);
              LOCK();
              piVar1 = (int *)((longlong)plVar55 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar55 + 0x10))(plVar55);
              }
            }
          }
          lVar76 = *(longlong *)(local_940 + 0x7c0);
          iVar46 = *(int *)(lVar76 + 0x38);
          uVar43 = iVar46 + 1;
          *(uint *)(lVar76 + 0x38) = uVar43;
          if (*(uint *)(lVar76 + 0x3c) < uVar43) {
            FUN_144ab9c10((longlong *)(lVar76 + 0x30));
          }
          puVar86 = (undefined8 *)(*(longlong *)(lVar76 + 0x30) + (longlong)iVar46 * 8);
          FUN_143087c94(puVar86);
          *puVar86 = puVar69;
          uVar91 = local_8d8;
          lVar68 = local_8d0;
        }
        *(undefined4 *)(plVar84 + 0xc) = *(undefined4 *)(lVar68 + 0x2b40);
        uVar88 = local_940;
        if (local_908 != (longlong *)0x0) {
          LOCK();
          plVar55 = local_908 + 1;
          *(int *)plVar55 = (int)*plVar55 + -1;
          UNLOCK();
          if ((int)*plVar55 == 0) {
            (**(code **)*local_908)(local_908);
            LOCK();
            piVar1 = (int *)((longlong)local_908 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar88 = local_940;
            if (*piVar1 == 0) {
              (**(code **)(*local_908 + 0x10))();
              uVar88 = local_940;
            }
          }
        }
      }
    }
LAB_140c94eae:
    if (local_188 != (undefined1 *)0x0) {
      FUN_1400020a8();
      uVar88 = local_940;
    }
    uVar91 = uVar91 + 1;
    uVar81 = (ulonglong)*(int *)(uVar88 + 0x3f0);
    local_7b0 = local_7b0 + 1;
    local_7b8 = local_7b8 + 0x4f04;
    uVar65 = local_934;
  } while ((longlong)uVar91 < (longlong)uVar81);
LAB_140c9543f:
  if ((((2 < local_8c4) || (*(char *)(DAT_14ca5b360 + 1) != '\0')) ||
      (cVar40 = FUN_147430715(*(undefined2 *)(uVar88 + 0x8a8)), uVar88 = local_940, cVar40 != '\0'))
     || ((((*(byte *)((longlong)*(longlong **)(LVar51.QuadPart + 0x28) + 0x1d3) & 0x40) != 0 &&
          (cVar40 = (**(code **)(**(longlong **)(LVar51.QuadPart + 0x28) + 0xb0))(), cVar40 == '\0')
          ) && (uVar88 = local_940,
               (*(byte *)(*(longlong *)(LVar51.QuadPart + 0x28) + 0x1d0) & 8) != 0)))) {
    pLVar53 = local_7d0;
    if (((byte *)(LVar51.QuadPart + 8) != (byte *)0x0 & *(byte *)LVar51) == 1) {
      iVar46 = *(int *)(LVar51.QuadPart + 0x10);
      puVar47 = local_918;
      if (0 < (longlong)iVar46) {
        lVar76 = 0;
        uVar91 = CONCAT71((int7)(uVar91 >> 8),local_92d);
        do {
          local_968 = pLVar53;
          FUN_14730c380(uVar88,*(undefined8 *)(*(longlong *)(LVar51.QuadPart + 8) + lVar76 * 8),
                        uVar91 & 0xffffffff,&local_6e8);
          lVar76 = lVar76 + 1;
          puVar47 = local_918;
          uVar88 = local_940;
          uVar65 = local_934;
        } while (iVar46 != lVar76);
      }
    }
    else {
      for (lVar76 = *(longlong *)(LVar51.QuadPart + 0x18); lVar76 != 0;
          lVar76 = *(longlong *)(lVar76 + 0x18)) {
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
        local_968 = pLVar53;
        FUN_14730c380(uVar88,lVar76,local_92d,&local_6e8);
        uVar88 = local_940;
      }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
      for (lVar76 = *(longlong *)(LVar51.QuadPart + 0x20); uVar65 = local_934, lVar76 != 0;
          lVar76 = *(longlong *)(lVar76 + 0x18)) {
        local_968 = pLVar53;
        FUN_14730c380(uVar88,lVar76,local_92d,&local_6e8);
        uVar88 = local_940;
      }
    }
  }
LAB_140c954c0:
  if ((*(char *)(local_8c0 + 0x3b) == '\0') && (0 < (longlong)(int)plVar84[1])) {
    lVar76 = 0;
    do {
      if ((*(byte *)(*(longlong *)(*plVar84 + lVar76 * 8) + 0x991) & 2) != 0) {
        *(undefined1 *)(local_8c0 + 0x3b) = 1;
        break;
      }
      lVar76 = lVar76 + 1;
    } while ((int)plVar84[1] != lVar76);
  }
LAB_140c923a2:
  uVar65 = uVar65 & ~(uint)local_888;
  puVar50 = *(uint **)(local_8e0 + 0x3570);
  if (*(uint **)(local_8e0 + 0x3570) == (uint *)0x0) {
    puVar50 = puVar47;
  }
  iVar46 = *(int *)(local_8e0 + 0x3578);
  iVar41 = (int)local_8e8;
  lVar76 = (longlong)iVar41;
  uVar43 = puVar50[lVar76] & uVar65;
  uVar91 = local_8e8;
  iVar83 = local_92c;
  if (uVar43 == 0) {
    iVar42 = iVar46 + 0x1e;
    if (-1 < iVar46 + -1) {
      iVar42 = iVar46 + -1;
    }
    iVar42 = iVar42 >> 5;
    iVar44 = iVar42;
    if (iVar42 < iVar41) {
      iVar44 = iVar41;
    }
    if (iVar42 <= iVar41) goto LAB_140c95744;
    lVar68 = 0;
    while( true ) {
      iVar83 = iVar83 + 0x20;
      uVar43 = puVar50[lVar68 + lVar76 + 1];
      if (uVar43 != 0) break;
      lVar68 = lVar68 + 1;
      if (iVar44 - lVar76 == lVar68) goto LAB_140c95744;
    }
    uVar91 = (ulonglong)(iVar41 + (int)lVar68 + 1);
    uVar65 = 0xffffffff;
  }
  local_888 = (ulonglong)(-uVar43 & uVar43);
  uVar88 = local_888 * 2 + 1;
  lVar76 = 0x3f;
  if (uVar88 != 0) {
    for (; uVar88 >> lVar76 == 0; lVar76 = lVar76 + -1) {
    }
  }
  iVar42 = (iVar83 - ((uint)lVar76 ^ 0x3f)) + 0x3e;
  if (iVar46 <= iVar42) goto LAB_140c95744;
  goto LAB_140c92271;
LAB_140c96d43:
  lVar76 = *plVar55;
  *plVar55 = *plVar62;
  *plVar62 = lVar76;
  DVar75 = DVar75 - 1;
  plVar74 = plVar74 + -2;
  if ((longlong)plVar90 - (longlong)plVar49 < (longlong)plVar63 - (longlong)plVar82) {
    if (plVar60 < plVar84) {
      pLVar53->QuadPart = (LONGLONG)plVar60;
      pLVar53[1].QuadPart = (LONGLONG)plVar84;
      pLVar53[2].s.LowPart = DVar75;
      pLVar53 = pLVar53 + 3;
    }
    plVar82 = plVar55;
    if (plVar62 <= plVar55 + 1) goto LAB_140c96e49;
  }
  else {
    if (plVar55 + 1 < plVar62) {
      pLVar53->QuadPart = (LONGLONG)plVar55;
      pLVar53[1].QuadPart = (LONGLONG)plVar74;
      pLVar53[2].s.LowPart = DVar75;
      pLVar53 = pLVar53 + 3;
    }
    plVar55 = plVar60;
    plVar74 = plVar84;
    plVar90 = plVar84;
    if (plVar84 <= plVar60) goto LAB_140c96e49;
  }
  iVar46 = (int)((ulonglong)((longlong)plVar90 - (longlong)plVar82) >> 3);
  plVar49 = plVar82;
  plVar84 = plVar74;
  plVar63 = plVar90;
  if (DVar75 == 0) goto LAB_140c96e44;
  goto LAB_140c96c80;
LAB_140c95744:
  lVar76 = *(longlong *)(local_940 + 8);
LAB_140c9574d:
  iVar46 = *(int *)(lVar76 + 0x4be0);
  if (iVar46 == 0) {
    uVar91 = 1;
    uVar88 = 0;
    iVar83 = 0;
    iVar41 = 0;
  }
  else {
    puVar47 = *(uint **)(lVar76 + 0x4bd8);
    if (*(uint **)(lVar76 + 0x4bd8) == (uint *)0x0) {
      puVar47 = (uint *)(lVar76 + 0x4bc8);
    }
    uVar43 = *puVar47;
    if (uVar43 == 0) {
      iVar41 = iVar46 + 0x1e;
      if (-1 < iVar46 + -1) {
        iVar41 = iVar46 + -1;
      }
      uVar88 = 0;
      uVar91 = (ulonglong)(uint)(iVar41 >> 5);
      if (iVar41 >> 5 < 1) {
        uVar91 = uVar88;
      }
      iVar83 = 0;
      do {
        if (uVar91 == uVar88) goto LAB_140c9591c;
        iVar83 = iVar83 + 0x20;
        uVar43 = puVar47[uVar88 + 1];
        uVar88 = uVar88 + 1;
      } while (uVar43 == 0);
    }
    else {
      uVar88 = 0;
      iVar83 = 0;
    }
    uVar91 = (ulonglong)(-uVar43 & uVar43);
    uVar81 = uVar91 * 2 + 1;
    lVar68 = 0x3f;
    if (uVar81 != 0) {
      for (; uVar81 >> lVar68 == 0; lVar68 = lVar68 + -1) {
      }
    }
    iVar41 = (iVar83 - ((uint)lVar68 ^ 0x3f)) + 0x3e;
    if (iVar46 <= iVar41) {
      iVar41 = iVar46;
    }
  }
  if (iVar41 < iVar46) {
    uVar43 = 0xffffffff;
    do {
      lVar68 = (longlong)*(int *)(*(longlong *)(lVar76 + 0x4bb8) + 0x10 + (longlong)iVar41 * 0x20);
      if (lVar68 != 0) {
        lVar68 = lVar68 * 0x430;
        lVar85 = *(longlong *)(*(longlong *)(lVar76 + 0x4bb8) + 8 + (longlong)iVar41 * 0x20) + 0x3a0
        ;
        uVar81 = local_940;
        do {
          if (((*(longlong *)(lVar85 + 0x30) != 0) || (0 < *(int *)(lVar85 + 0x28))) &&
             (2.0 < *(double *)(uVar81 + 0x120) - (double)*(float *)(lVar85 + 0x38))) {
            FUN_14002d1ac(lVar85);
            FUN_1447c6044(lVar85 + 0x40,0,*(undefined4 *)(lVar85 + 0x58),0);
            uVar81 = local_940;
          }
          lVar85 = lVar85 + 0x430;
          lVar68 = lVar68 + -0x430;
        } while (lVar68 != 0);
        iVar46 = *(int *)(lVar76 + 0x4be0);
      }
      uVar43 = uVar43 & ~(uint)uVar91;
      puVar47 = *(uint **)(lVar76 + 0x4bd8);
      if (*(uint **)(lVar76 + 0x4bd8) == (uint *)0x0) {
        puVar47 = (uint *)(lVar76 + 0x4bc8);
      }
      iVar41 = (int)uVar88;
      lVar68 = (longlong)iVar41;
      uVar65 = puVar47[lVar68] & uVar43;
      if (uVar65 == 0) {
        iVar42 = iVar46 + 0x1e;
        if (-1 < iVar46 + -1) {
          iVar42 = iVar46 + -1;
        }
        iVar42 = iVar42 >> 5;
        iVar44 = iVar42;
        if (iVar42 < iVar41) {
          iVar44 = iVar41;
        }
        if (iVar42 <= iVar41) break;
        lVar85 = 0;
        while( true ) {
          iVar83 = iVar83 + 0x20;
          uVar65 = puVar47[lVar85 + lVar68 + 1];
          if (uVar65 != 0) break;
          lVar85 = lVar85 + 1;
          if (iVar44 - lVar68 == lVar85) goto LAB_140c9591c;
        }
        uVar88 = (ulonglong)(iVar41 + (int)lVar85 + 1);
        uVar43 = 0xffffffff;
      }
      uVar91 = (ulonglong)(-uVar65 & uVar65);
      uVar81 = uVar91 * 2 + 1;
      lVar68 = 0x3f;
      if (uVar81 != 0) {
        for (; uVar81 >> lVar68 == 0; lVar68 = lVar68 + -1) {
        }
      }
      iVar41 = (iVar83 - ((uint)lVar68 ^ 0x3f)) + 0x3e;
    } while (iVar41 < iVar46);
  }
LAB_140c9591c:
  uVar88 = local_940;
  uVar45 = FUN_1403fb1aa();
  local_920 = (longlong *)CONCAT44(local_920._4_4_,uVar45);
  uVar91 = *(ulonglong *)(uVar88 + 8);
  local_934 = *(int *)(uVar91 + 0x38b8);
  iVar46 = *(int *)(uVar91 + 0x3578);
  if (iVar46 == 0) {
    uVar81 = 0;
    uVar77 = 1;
    iVar41 = 0;
    iVar83 = 0;
  }
  else {
    puVar47 = *(uint **)(uVar91 + 0x3570);
    if (*(uint **)(uVar91 + 0x3570) == (uint *)0x0) {
      puVar47 = (uint *)(uVar91 + 0x3560);
    }
    uVar43 = *puVar47;
    if (uVar43 == 0) {
      iVar41 = iVar46 + 0x1e;
      if (-1 < iVar46 + -1) {
        iVar41 = iVar46 + -1;
      }
      uVar81 = 0;
      uVar77 = (ulonglong)(uint)(iVar41 >> 5);
      if (iVar41 >> 5 < 1) {
        uVar77 = uVar81;
      }
      iVar41 = 0;
      do {
        if (uVar77 == uVar81) goto LAB_140c95fe3;
        iVar41 = iVar41 + 0x20;
        uVar43 = puVar47[uVar81 + 1];
        uVar81 = uVar81 + 1;
      } while (uVar43 == 0);
    }
    else {
      uVar81 = 0;
      iVar41 = 0;
    }
    uVar77 = (ulonglong)(-uVar43 & uVar43);
    uVar2 = uVar77 * 2 + 1;
    lVar76 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar76 == 0; lVar76 = lVar76 + -1) {
      }
    }
    iVar83 = (iVar41 - ((uint)lVar76 ^ 0x3f)) + 0x3e;
    if (iVar46 <= iVar83) {
      iVar83 = iVar46;
    }
  }
  if (iVar83 < iVar46) {
    LVar51.QuadPart = uVar88 + 1000;
    puVar73 = &DAT_ffffffff;
    local_928.QuadPart = LVar51.QuadPart;
    local_888 = uVar91;
    local_808 = (uint *)(uVar91 + 0x3560);
    do {
      local_7f8._0_4_ = (int)puVar73;
      local_8f8 = (byte *)(longlong)iVar83;
      local_908 = (longlong *)((longlong)local_8f8 * 0x68 + *(longlong *)(uVar88 + 0x4d8));
      local_92c = iVar41;
      local_8e8 = uVar81;
      local_8d8 = uVar77;
      if (0 < *(int *)(uVar88 + 0x3f0)) {
        lVar68 = 0x3780;
        lVar76 = (longlong)local_8f8 * 0x78;
        lVar85 = 0;
        do {
          lVar71 = *(longlong *)(*(longlong *)LVar51 + lVar68);
          lVar92 = lVar71 + lVar76;
          lVar89 = local_908[1];
          *(int *)(lVar71 + 0x28 + lVar76) = (int)lVar89;
          uVar43 = (int)lVar89 + 0x1f;
          if (0x1f < uVar43) {
            uVar65 = uVar43 >> 5;
            if (*(int *)(lVar92 + 0x2c) + 0x1fU >> 5 < uVar65) {
              uVar70 = uVar65;
              if ((0x9f < uVar43) || (uVar70 = 0, *(longlong *)(lVar92 + 0x20) != 0)) {
                FUN_140064110((longlong *)(lVar92 + 0x20),0,uVar70,4);
              }
              *(uint *)(lVar92 + 0x2c) = uVar43 & 0xffffffe0;
            }
            pvVar66 = (void *)(lVar71 + lVar76 + 0x10);
            pvVar58 = *(void **)(lVar92 + 0x20);
            if (*(void **)(lVar92 + 0x20) == (void *)0x0) {
              pvVar58 = pvVar66;
            }
            if (uVar43 < 0x120) {
              uVar65 = uVar43 >> 3 & 0x3c;
            }
            else {
              uVar65 = uVar65 << 2;
            }
            memset(pvVar58,0,(ulonglong)uVar65);
            iVar46 = *(int *)(lVar92 + 0x28);
            iVar41 = iVar46 + 0x1f;
            if (-1 < iVar46) {
              iVar41 = iVar46;
            }
            if (iVar46 % 0x20 != 0) {
              if (*(void **)(lVar92 + 0x20) != (void *)0x0) {
                pvVar66 = *(void **)(lVar92 + 0x20);
              }
              bVar56 = -(char)(iVar46 % 0x20);
              *(uint *)((longlong)pvVar66 + (longlong)(iVar41 >> 5) * 4) =
                   (uint)(*(int *)((longlong)pvVar66 + (longlong)(iVar41 >> 5) * 4) <<
                         (bVar56 & 0x1f)) >> (bVar56 & 0x1f);
            }
          }
          iVar46 = (int)local_908[1];
          if (iVar46 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar46);
          }
          plVar84 = (longlong *)(lVar92 + 0x30);
          *(undefined4 *)(lVar92 + 0x38) = 0;
          iVar41 = 0;
          if (*(int *)(lVar92 + 0x3c) != iVar46) {
            FUN_14477fd2a(plVar84);
            iVar41 = *(int *)(lVar92 + 0x38);
            iVar46 = *(int *)(lVar92 + 0x3c);
          }
          uVar43 = *(uint *)(local_908 + 1);
          *(uint *)(lVar92 + 0x38) = uVar43 + iVar41;
          if ((uint)(iVar46 - iVar41) < uVar43) {
            FUN_1472e8032(plVar84);
          }
          memset((void *)((longlong)iVar41 * 0x18 + *plVar84),0,(longlong)(int)uVar43 * 0x18);
          lVar85 = lVar85 + 1;
          lVar68 = lVar68 + 0x13c10;
          uVar88 = local_940;
          LVar51 = local_928;
        } while (lVar85 < *(int *)(local_940 + 0x3f0));
      }
      if (0 < (int)local_908[1]) {
        uVar91 = 0;
        do {
          lVar76 = *(longlong *)(*local_908 + uVar91 * 8);
          *(int *)(lVar76 + 0x40) = (int)uVar91;
          if (0 < *(int *)(uVar88 + 0x3f0)) {
            local_8d0 = lVar76 + 0x978;
            local_8fc = 1 << ((byte)uVar91 & 0x1f);
            local_8b8 = (longlong *)(uVar91 >> 5 & 0x7ffffff);
            lVar68 = 0;
            lVar85 = 0;
            do {
              lVar92 = *(longlong *)LVar51;
              lVar71 = *(longlong *)(lVar76 + 0x38);
              if (lVar92 + lVar68 == lVar71 || lVar71 == 0) {
LAB_140c95c66:
                lVar71 = *(longlong *)(lVar92 + 0x3780 + lVar68);
                lVar89 = (longlong)local_8f8 * 0x78;
                if ((*(byte *)(lVar71 + 0x40 + lVar89) & 1) != 0) {
                  if (*(longlong *)(lVar76 + 0xbb0) == 0) {
                    LVar51.QuadPart = 0;
                    uVar43 = 0x8f;
                    LVar78.QuadPart = 0x200000000;
                    uVar88 = 0;
                    pbVar59 = (byte *)0x0;
                    uVar45 = 0;
                  }
                  else {
                    plVar84 = *(longlong **)(*(longlong *)(lVar76 + 0xbb0) + 8);
                    (**(code **)(*plVar84 + 200))(plVar84,&local_538);
                    uVar88 = local_538.QuadPart & 0xffffff0000000000;
                    LVar51 = local_538;
                    pbVar59 = pbStack_530;
                    LVar78 = local_538;
                    uVar43 = (uint)local_528;
                    uVar45 = local_528._4_4_;
                  }
                  lVar71 = lVar71 + lVar89;
                  lVar89 = *(longlong *)(lVar71 + 0x30);
                  *(ulonglong *)(lVar89 + uVar91 * 0x18) =
                       LVar51.QuadPart & 0xffffffffU | LVar78.QuadPart & 0xff00000000U | uVar88;
                  *(byte **)(lVar89 + 8 + uVar91 * 0x18) = pbVar59;
                  *(uint *)(lVar89 + 0x10 + uVar91 * 0x18) = uVar43;
                  *(undefined4 *)(lVar89 + 0x14 + uVar91 * 0x18) = uVar45;
                  if ((*(byte *)(lVar92 + 0x125b0 + lVar68) & 0x10) == 0) {
                    lVar92 = *(longlong *)(lVar92 + 0x10 + lVar68);
                    if ((lVar92 == 0) || (*(int *)(lVar76 + 0x99c) != -1)) {
                      cVar40 = '\0';
                    }
                    else {
                      cVar40 = '\0';
                      uVar45 = 0;
                      if (*(longlong *)(lVar76 + 0xb50) == 0) {
                        if (*(longlong *)(lVar76 + 0xbb0) != 0) {
                          uVar45 = *(undefined4 *)(*(longlong *)(lVar76 + 0xbb0) + 0x10);
                        }
                        local_178._0_4_ = uVar45;
                        local_178._8_8_ =
                             *(undefined8 *)
                              (*(longlong *)(*(longlong *)(lVar76 + 0xb60) + 0x28) + 8);
                        local_168._0_5_ =
                             CONCAT14(*(undefined1 *)(lVar76 + 0x991),
                                      *(undefined4 *)(lVar76 + 0x944)) & 0x1ffffffff;
                        cVar40 = FUN_1401fa7d0(lVar92,local_178,(ulonglong)local_920 & 0xffffffff);
                      }
                    }
                  }
                  else {
                    cVar40 = '\0';
                  }
                  uVar88 = local_940;
                  LVar51 = local_928;
                  if (((uVar43 & 8) != 0) && (cVar40 == '\0')) {
                    lVar92 = lVar71 + 0x10;
                    if (*(longlong *)(lVar71 + 0x20) != 0) {
                      lVar92 = *(longlong *)(lVar71 + 0x20);
                    }
                    puVar47 = (uint *)(lVar92 + (longlong)local_8b8 * 4);
                    *puVar47 = *puVar47 | local_8fc;
                  }
                }
              }
              else if (((*(int *)(lVar92 + 0x1dd0 + lVar68) == 2) &&
                       (*(uint *)(lVar71 + 0x1dd0) < 2)) && (lVar85 < *(int *)(lVar76 + 0x988))) {
                lVar71 = *(longlong *)(lVar76 + 0x980);
                if (*(longlong *)(lVar76 + 0x980) == 0) {
                  lVar71 = local_8d0;
                }
                fVar93 = *(float *)(lVar71 + lVar85 * 4);
                if ((fVar93 == 1.0) && (!NAN(fVar93))) goto LAB_140c95c66;
              }
              lVar85 = lVar85 + 1;
              lVar68 = lVar68 + 0x13c10;
            } while (lVar85 < *(int *)(uVar88 + 0x3f0));
          }
          if (0 < (int)local_934) {
            if ((*(char *)(*(longlong *)(local_888 + 0x3550) + 0x3d + (longlong)local_8f8 * 0x40) ==
                 '\0') &&
               (lVar76 = *(longlong *)(local_888 + 0x3550) + (longlong)local_8f8 * 0x40,
               (*(byte *)(lVar76 + 0x38) & 3) == 0)) {
              FUN_14716de02(*(undefined8 *)(uVar88 + 8),LVar51.QuadPart,
                            *(undefined8 *)(lVar76 + 0x30));
              uVar88 = local_940;
            }
          }
          uVar91 = uVar91 + 1;
        } while ((longlong)uVar91 < (longlong)(int)local_908[1]);
      }
      uVar91 = local_888;
      if (0 < (int)local_934) {
        if ((*(char *)(*(longlong *)(local_888 + 0x3550) + 0x3d + (longlong)local_8f8 * 0x40) !=
             '\0') &&
           (lVar76 = *(longlong *)(local_888 + 0x3550) + (longlong)local_8f8 * 0x40,
           (*(byte *)(lVar76 + 0x38) & 3) == 0)) {
          FUN_14716de02(*(undefined8 *)(uVar88 + 8),LVar51.QuadPart,*(undefined8 *)(lVar76 + 0x30));
          uVar88 = local_940;
        }
      }
      uVar43 = local_7f8._0_4_ & ~(uint)local_8d8;
      puVar73 = (undefined1 *)(ulonglong)uVar43;
      puVar47 = *(uint **)(uVar91 + 0x3570);
      if (puVar47 == (uint *)0x0) {
        puVar47 = local_808;
      }
      iVar46 = *(int *)(uVar91 + 0x3578);
      iVar83 = (int)local_8e8;
      lVar76 = (longlong)iVar83;
      uVar43 = puVar47[lVar76] & uVar43;
      uVar81 = local_8e8;
      iVar41 = local_92c;
      if (uVar43 == 0) {
        iVar42 = iVar46 + 0x1e;
        if (-1 < iVar46 + -1) {
          iVar42 = iVar46 + -1;
        }
        iVar42 = iVar42 >> 5;
        iVar44 = iVar42;
        if (iVar42 < iVar83) {
          iVar44 = iVar83;
        }
        if (iVar42 <= iVar83) break;
        lVar68 = 0;
        while( true ) {
          iVar41 = iVar41 + 0x20;
          uVar43 = puVar47[lVar68 + lVar76 + 1];
          if (uVar43 != 0) break;
          lVar68 = lVar68 + 1;
          if (iVar44 - lVar76 == lVar68) goto LAB_140c95fe3;
        }
        uVar81 = (ulonglong)(iVar83 + (int)lVar68 + 1);
        puVar73 = &DAT_ffffffff;
      }
      uVar77 = (ulonglong)(-uVar43 & uVar43);
      uVar91 = uVar77 * 2 + 1;
      lVar76 = 0x3f;
      if (uVar91 != 0) {
        for (; uVar91 >> lVar76 == 0; lVar76 = lVar76 + -1) {
        }
      }
      iVar83 = (iVar41 - ((uint)lVar76 ^ 0x3f)) + 0x3e;
    } while (iVar83 < iVar46);
  }
LAB_140c95fe3:
  FUN_1400daade(local_8c0 + 0x130);
  if ((*(int *)(DAT_14ca5b158 + 4) != 0) &&
     (*(char *)(*(longlong *)(local_940 + 1000) + 0x23e8) == '\0')) {
    lVar76 = *(longlong *)(local_940 + 8);
    if (*(int *)(lVar76 + 0x4c50) == 0) {
      iVar46 = *(int *)(local_940 + 0x8a4);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca5b3e8) && (FUN_144b3d300(&DAT_14ca5b3e8), DAT_14ca5b3e8 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar84 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.MaxResolution",1);
        if (plVar84 == (longlong *)0x0) {
          DAT_14ca5b3e0 = 0;
        }
        else {
          DAT_14ca5b3e0 = (**(code **)(*plVar84 + 0x68))(plVar84);
        }
        _Init_thread_footer(&DAT_14ca5b3e8);
      }
      iVar41 = *(int *)(DAT_14ca5b3e0 + 4);
      iVar83 = iVar41;
      if (iVar46 < 3) {
        iVar46 = DAT_14ca84e38;
        if (DAT_14ca84e38 < DAT_14ca84e3c) {
          iVar46 = DAT_14ca84e3c;
        }
        iVar83 = iVar46 / 2;
        if (iVar41 * 2 <= iVar46) {
          iVar83 = iVar41;
        }
      }
      iVar46 = DAT_14ca84e3c;
      if (iVar83 < DAT_14ca84e3c) {
        iVar46 = iVar83;
      }
      if (iVar46 < 2) {
        iVar46 = 1;
      }
      if (DAT_14ca84e38 <= iVar83) {
        iVar83 = DAT_14ca84e38;
      }
      if (iVar83 < 2) {
        iVar83 = 1;
      }
      iVar41 = (int)((float)iVar83 * *(float *)(DAT_14ca5b1c8 + 4)) * 2;
      if (DAT_14ca84e38 <= iVar41) {
        iVar41 = DAT_14ca84e38;
      }
      if (iVar41 < 2) {
        iVar41 = 1;
      }
      iVar46 = (int)((float)iVar46 * *(float *)(DAT_14ca5b1c8 + 4)) * 2;
      if (DAT_14ca84e3c <= iVar46) {
        iVar46 = DAT_14ca84e3c;
      }
      if (iVar46 < 2) {
        iVar46 = 1;
      }
      lVar76 = *(longlong *)(local_940 + 8);
      *(undefined4 *)(lVar76 + 0x4c48) = 1;
      *(undefined4 *)(lVar76 + 0x4c4c) = 1;
      *(undefined4 *)(lVar76 + 0x4c50) = 1;
      *(undefined4 *)(lVar76 + 0x4c54) = 1;
      *(undefined4 *)(lVar76 + 0x4c58) = 0;
      *(undefined2 *)(lVar76 + 0x4c5c) = 0;
      *(undefined8 *)(lVar76 + 0x4c60) = 0xffffffffffffffff;
      *(undefined4 *)(lVar76 + 0x4c68) = 0;
      *(short *)(lVar76 + 0x4c6c) = (short)iVar41;
      *(short *)(lVar76 + 0x4c6e) = (short)iVar46;
      *(undefined1 *)(lVar76 + 0x4c70) = 0;
      if (*(longlong *)(lVar76 + 0x4cc8) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(lVar76 + 0x4cc8) = 0;
      *(undefined8 *)(lVar76 + 0x4cd0) = 0x500000001;
      lVar76 = *(longlong *)(local_940 + 8);
    }
    lVar76 = (longlong)*(int *)(lVar76 + 0x4c38);
    if (0 < lVar76) {
      do {
        puVar52 = *(undefined8 **)
                   (*(longlong *)(*(longlong *)(local_940 + 8) + 0x4c30) + -8 + lVar76 * 8);
        if (puVar52 != (undefined8 *)0x0) {
          *(int *)(puVar52 + 1) = *(int *)(puVar52 + 1) + 1;
        }
        if ((longlong)*(int *)(local_940 + 0x4e0) < 1) {
LAB_140c9622e:
          local_968 = (LARGE_INTEGER *)
                      CONCAT44(local_968._4_4_,
                               *(int *)((longlong)puVar52 + 0x95c) + *(int *)(puVar52 + 300) * 2);
          FUN_14730c162(*(longlong *)(local_940 + 8) + 0x4c48,*(undefined4 *)(puVar52 + 0x12a),
                        *(undefined4 *)((longlong)puVar52 + 0x954),
                        *(int *)(puVar52 + 300) * 2 + *(int *)(puVar52 + 299));
          lVar68 = *(longlong *)(local_940 + 8) + 0x4c30;
          FUN_1473137b4(lVar68);
          FUN_147313810(lVar68);
        }
        else {
          uVar91 = 0;
          do {
            lVar68 = (longlong)*(int *)(*(longlong *)(local_940 + 0x4d8) + 0x38 + uVar91 * 0x68);
            iVar46 = -1;
            if (lVar68 != 0) {
              lVar68 = lVar68 << 3;
              lVar85 = 0;
              do {
                if (*(undefined8 **)
                     (*(longlong *)(*(longlong *)(local_940 + 0x4d8) + 0x30 + uVar91 * 0x68) +
                     lVar85 * 8) == puVar52) {
                  iVar46 = (int)lVar85;
                  break;
                }
                lVar85 = lVar85 + 1;
                lVar68 = lVar68 + -8;
              } while (lVar68 != 0);
            }
            uVar91 = uVar91 + 1;
          } while ((uVar91 < (ulonglong)(longlong)*(int *)(local_940 + 0x4e0)) && (iVar46 == -1));
          if (iVar46 == -1) goto LAB_140c9622e;
        }
        if (puVar52 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar52 + 1);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar52)(puVar52);
          }
        }
        bVar67 = 1 < lVar76;
        lVar76 = lVar76 + -1;
      } while (bVar67);
    }
    local_178 = ZEXT816(0);
    iVar46 = *(int *)(local_940 + 0x4e0);
    if (0 < iVar46) {
      lVar76 = *(longlong *)(local_940 + 0x4d8);
      lVar68 = 0;
      uVar91 = local_940;
      do {
        lVar85 = lVar68 * 0x68;
        if (0 < *(int *)(lVar76 + 0x38 + lVar85)) {
          lVar92 = lVar76 + lVar85;
          lVar71 = 0;
          do {
            puVar52 = *(undefined8 **)(*(longlong *)(lVar92 + 0x30) + lVar71 * 8);
            if (puVar52 == (undefined8 *)0x0) {
              if ((DAT_00000990 & 4) == 0) goto LAB_140c962fd;
            }
            else {
              iVar46 = *(int *)(puVar52 + 1);
              *(int *)(puVar52 + 1) = iVar46 + 1;
              if ((*(byte *)(puVar52 + 0x132) & 4) == 0) {
LAB_140c962fd:
                uVar45 = local_178._8_4_;
                lVar76 = (longlong)(int)local_178._8_4_;
                uVar43 = local_178._8_4_ + 1;
                local_178._8_4_ = uVar43;
                if ((uint)local_178._12_4_ < uVar43) {
                  FUN_1473138ac(local_178,uVar45);
                  uVar91 = local_940;
                }
                *(undefined8 **)(local_178._0_8_ + lVar76 * 8) = puVar52;
                if (puVar52 == (undefined8 *)0x0) goto LAB_140c96346;
                iVar46 = *(int *)(puVar52 + 1);
              }
              *(int *)(puVar52 + 1) = iVar46;
              if (iVar46 == 0) {
                (**(code **)*puVar52)(puVar52,1);
                uVar91 = local_940;
              }
            }
LAB_140c96346:
            lVar71 = lVar71 + 1;
            lVar76 = *(longlong *)(uVar91 + 0x4d8);
            lVar92 = lVar76 + lVar85;
          } while (lVar71 < *(int *)(lVar92 + 0x38));
          iVar46 = *(int *)(uVar91 + 0x4e0);
        }
        lVar68 = lVar68 + 1;
      } while (lVar68 < iVar46);
      uVar45 = local_178._8_4_;
      lVar76 = (longlong)(int)local_178._8_4_;
      if (1 < lVar76) {
        uVar54 = local_178._0_8_;
        memset(&local_528,0,0x2f0);
        local_538.QuadPart = uVar54;
        pbStack_530 = (byte *)(uVar54 + lVar76 * 8 + -8);
        fVar93 = logf((float)(int)uVar45);
        local_528 = CONCAT44(local_528._4_4_,(int)(longlong)(fVar93 + fVar93));
        pLVar53 = &local_538;
        do {
          plVar55 = (longlong *)pLVar53->QuadPart;
          plVar84 = (longlong *)pLVar53[1].QuadPart;
          DVar75 = pLVar53[2].s.LowPart;
          iVar46 = (int)((ulonglong)((longlong)plVar84 - (longlong)plVar55) >> 3);
          plVar49 = plVar55;
          plVar63 = plVar84;
          if (DVar75 != 0) {
LAB_140c96c80:
            if (8 < (int)(iVar46 + 1U)) {
              uVar43 = iVar46 + 1U >> 1;
              lVar76 = plVar55[uVar43];
              plVar55[uVar43] = *plVar55;
              *plVar55 = lVar76;
              plVar62 = plVar84 + 1;
              plVar60 = plVar55;
              do {
                plVar39 = plVar60 + 1;
                plVar74 = plVar60 + 1;
                do {
                  plVar60 = plVar74;
                  plVar82 = plVar39;
                  if (plVar84 < plVar60) break;
                  plVar39 = plVar82 + 1;
                  plVar74 = plVar60 + 1;
                } while ((uint)(*(int *)(*plVar55 + 0x95c) * *(int *)(*plVar55 + 0x958)) <=
                         (uint)(*(int *)(*plVar60 + 0x95c) * *(int *)(*plVar60 + 0x958)));
                plVar39 = plVar62 + -2;
                do {
                  plVar74 = plVar62;
                  plVar90 = plVar39;
                  plVar62 = plVar74 + -1;
                  if (plVar62 <= plVar55) break;
                  plVar39 = plVar90 + -1;
                } while ((uint)(*(int *)(*plVar62 + 0x95c) * *(int *)(*plVar62 + 0x958)) <=
                         (uint)(*(int *)(*plVar55 + 0x95c) * *(int *)(*plVar55 + 0x958)));
                if (plVar62 < plVar60) goto LAB_140c96d43;
                lVar76 = *plVar60;
                *plVar60 = *plVar62;
                *plVar62 = lVar76;
              } while( true );
            }
            if (plVar55 < plVar84) {
              do {
                plVar49 = plVar55;
                if (plVar55 + 1 <= plVar84) {
                  plVar63 = plVar55 + 1;
                  lVar76 = *plVar55;
                  plVar62 = plVar55;
                  do {
                    lVar68 = *plVar63;
                    plVar49 = plVar63;
                    if ((uint)(*(int *)(lVar76 + 0x95c) * *(int *)(lVar76 + 0x958)) <=
                        (uint)(*(int *)(lVar68 + 0x95c) * *(int *)(lVar68 + 0x958))) {
                      lVar68 = lVar76;
                      plVar49 = plVar62;
                    }
                    plVar63 = plVar63 + 1;
                    lVar76 = lVar68;
                    plVar62 = plVar49;
                  } while (plVar63 <= plVar84);
                }
                lVar76 = *plVar49;
                *plVar49 = *plVar84;
                *plVar84 = lVar76;
                plVar84 = plVar84 + -1;
              } while (plVar55 < plVar84);
            }
            goto LAB_140c96e49;
          }
LAB_140c96e44:
          FUN_14731390a(plVar55);
LAB_140c96e49:
          pLVar53 = pLVar53 + -3;
        } while (&local_538 <= pLVar53);
        uVar91 = local_940;
      }
      if (0 < (int)local_178._8_4_) {
        lVar76 = 0;
        do {
          puVar52 = *(undefined8 **)(local_178._0_8_ + lVar76 * 8);
          if (puVar52 != (undefined8 *)0x0) {
            *(int *)(puVar52 + 1) = *(int *)(puVar52 + 1) + 1;
          }
          local_968 = (LARGE_INTEGER *)
                      CONCAT44(local_968._4_4_,
                               *(int *)((longlong)puVar52 + 0x95c) + *(int *)(puVar52 + 300) * 2);
          cVar40 = FUN_1403365a6(*(longlong *)(uVar91 + 8) + 0x4c48,puVar52 + 0x12a,
                                 (longlong)puVar52 + 0x954,
                                 *(int *)(puVar52 + 300) * 2 + *(int *)(puVar52 + 299));
          if (cVar40 == '\0') {
            if (puVar52 != (undefined8 *)0x0) {
              iVar46 = *(int *)(puVar52 + 1);
              goto LAB_140c96451;
            }
          }
          else {
            *(byte *)(puVar52 + 0x132) = *(byte *)(puVar52 + 0x132) | 5;
            lVar68 = *(longlong *)(uVar91 + 8);
            iVar46 = *(int *)(lVar68 + 0x4c38);
            *(uint *)(lVar68 + 0x4c38) = iVar46 + 1U;
            if (*(uint *)(lVar68 + 0x4c3c) < iVar46 + 1U) {
              FUN_147313ab8((longlong *)(lVar68 + 0x4c30),iVar46);
              uVar91 = local_940;
            }
            *(undefined8 **)(*(longlong *)(lVar68 + 0x4c30) + (longlong)iVar46 * 8) = puVar52;
            if (puVar52 != (undefined8 *)0x0) {
              iVar46 = *(int *)(puVar52 + 1) + 1;
LAB_140c96451:
              *(int *)(puVar52 + 1) = iVar46 + -1;
              if (iVar46 + -1 == 0) {
                (**(code **)*puVar52)(puVar52,1);
                uVar91 = local_940;
              }
            }
          }
          lVar76 = lVar76 + 1;
        } while (lVar76 < (int)local_178._8_4_);
      }
    }
    FUN_14470d0ca(local_178._0_8_);
    FUN_14002d484(local_178);
  }
  lVar76 = *(longlong *)(local_940 + 0x7c0);
  if ((lVar76 == 0) || (*(int *)(DAT_14ca5ba58 + 4) == 0)) goto LAB_140c964d0;
  local_178 = ZEXT816(0);
  iVar46 = *(int *)(lVar76 + 0x38);
  if ((longlong)iVar46 == 0) {
LAB_140c9684b:
    if ((longlong)*(int *)(lVar76 + 0x28) != 0) {
      lVar68 = *(longlong *)(lVar76 + 0x20);
      lVar85 = (longlong)*(int *)(lVar76 + 0x28) * 0x20 + lVar68;
      do {
        lVar92 = *(longlong *)(lVar68 + 0x10);
        if ((*(byte *)(lVar92 + 0x992) & 4) != 0) {
          local_478 = (LARGE_INTEGER *)0x0;
          iVar46 = *(int *)(lVar92 + 0x380);
          local_468 = CONCAT44(local_468._4_4_,iVar46);
          if ((longlong)iVar46 == 0) {
            local_468 = CONCAT44(6,iVar46);
          }
          else {
            pvVar58 = (void *)(lVar92 + 0x2b0);
            if (*(void **)(lVar92 + 0x370) != (void *)0x0) {
              pvVar58 = *(void **)(lVar92 + 0x370);
            }
            FUN_144715b40(&local_538,iVar46,0);
            pLVar53 = local_478;
            if (local_478 == (LARGE_INTEGER *)0x0) {
              pLVar53 = &local_538;
            }
            memcpy(pLVar53,pvVar58,(longlong)iVar46 << 5);
          }
          local_358 = (double *)0x0;
          iVar46 = *(int *)(lVar92 + 0x4a0);
          local_348 = CONCAT44(local_348._4_4_,iVar46);
          if ((longlong)iVar46 == 0) {
            local_348 = CONCAT44(8,iVar46);
          }
          else {
            pvVar58 = (void *)(lVar92 + 0x390);
            if (*(void **)(lVar92 + 0x490) != (void *)0x0) {
              pvVar58 = *(void **)(lVar92 + 0x490);
            }
            FUN_144715cb0(local_458,iVar46,0);
            pdVar57 = local_358;
            if (local_358 == (double *)0x0) {
              pdVar57 = local_458;
            }
            memcpy(pdVar57,pvVar58,(longlong)iVar46 << 5);
          }
          pLVar53 = local_478;
          if (local_478 == (LARGE_INTEGER *)0x0) {
            pLVar53 = &local_538;
          }
          lVar71 = (longlong)(int)local_468;
          if (lVar71 != 0) {
            lVar89 = 0;
            do {
              dVar6 = *(double *)((longlong)pLVar53 + lVar89 + 0x18);
              dVar96 = *(double *)((longlong)pLVar53 + lVar89 + 0x10);
              dVar7 = *(double *)((longlong)pLVar53 + lVar89 + 8);
              *(double *)((longlong)pLVar53 + lVar89 + 0x18) =
                   (dVar6 * dVar96 - *(double *)(lVar92 + 0x58)) * dVar96 +
                   (dVar6 * *(double *)((longlong)pLVar53 + lVar89) - *(double *)(lVar92 + 0x48)) *
                   *(double *)((longlong)pLVar53 + lVar89) +
                   (dVar6 * dVar7 - *(double *)(lVar92 + 0x50)) * dVar7;
              lVar89 = lVar89 + 0x20;
            } while (lVar71 * 0x20 != lVar89);
          }
          FUN_1448afd16(&local_538);
          lVar92 = (longlong)(int)local_178._8_4_;
          uVar43 = local_178._8_4_ + 1;
          local_178._8_4_ = uVar43;
          if ((uint)local_178._12_4_ < uVar43) {
            FUN_1473154a2(local_178);
          }
          lVar92 = lVar92 * 0x200;
          pvVar58 = (void *)(local_178._0_8_ + lVar92);
          *(undefined8 *)(local_178._0_8_ + 0xc0 + lVar92) = 0;
          lVar71 = (longlong)(int)local_468;
          *(int *)(local_178._0_8_ + 0xd0 + lVar92) = (int)local_468;
          if (lVar71 == 0) {
            *(undefined4 *)((longlong)pvVar58 + 0xd4) = 6;
          }
          else {
            pLVar53 = local_478;
            if (local_478 == (LARGE_INTEGER *)0x0) {
              pLVar53 = &local_538;
            }
            FUN_144715b40(pvVar58,local_468 & 0xffffffff,0);
            pvVar66 = *(void **)((longlong)pvVar58 + 0xc0);
            if (*(void **)((longlong)pvVar58 + 0xc0) == (void *)0x0) {
              pvVar66 = pvVar58;
            }
            memcpy(pvVar66,pLVar53,lVar71 << 5);
          }
          *(undefined8 *)((longlong)pvVar58 + 0x1e0) = 0;
          lVar92 = (longlong)(int)local_348;
          *(int *)((longlong)pvVar58 + 0x1f0) = (int)local_348;
          if (lVar92 == 0) {
            *(undefined4 *)((longlong)pvVar58 + 500) = 8;
          }
          else {
            pdVar57 = local_358;
            if (local_358 == (double *)0x0) {
              pdVar57 = local_458;
            }
            FUN_144715cb0((void *)((longlong)pvVar58 + 0xe0),local_348 & 0xffffffff,0);
            pvVar66 = *(void **)((longlong)pvVar58 + 0x1e0);
            if (*(void **)((longlong)pvVar58 + 0x1e0) == (void *)0x0) {
              pvVar66 = (void *)((longlong)pvVar58 + 0xe0);
            }
            memcpy(pvVar66,pdVar57,lVar92 << 5);
          }
          if (local_358 != (double *)0x0) {
            FUN_1400020a8();
          }
          if (local_478 != (LARGE_INTEGER *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar68 = lVar68 + 0x20;
      } while (lVar68 != lVar85);
    }
    if (local_178._8_4_ != 0) {
      lVar68 = *(longlong *)(lVar76 + 0x48);
      local_958 = &local_5c8;
      local_5c8 = (undefined8 *)0x0;
      local_960 = (byte *)(lVar68 + 0x2d50);
      local_968 = (LARGE_INTEGER *)(lVar68 + 0x2af0);
      local_538.QuadPart = local_178._0_8_;
      pbStack_530 = (byte *)CONCAT44(pbStack_530._4_4_,local_178._8_4_);
      uVar54 = FUN_142e573ec(lVar68 + 0x2ef0,*(longlong *)(lVar76 + 0x40) + 0x90);
      *(undefined8 *)(lVar76 + 0x60) = uVar54;
      if (local_5c8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_5c8 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_5c8)(local_5c8,1);
        }
      }
    }
  }
  else {
    local_8f8 = *(byte **)(lVar76 + 0x30);
    lVar68 = 0;
    bVar67 = false;
    do {
      bVar80 = bVar67;
      if ((((!bVar67) &&
           (lVar85 = *(longlong *)(local_8f8 + lVar68), (*(byte *)(lVar85 + 0x992) & 4) != 0)) &&
          ((bVar80 = true, *(int *)(DAT_14ca66988 + 4) == 0 || (DAT_14ca69250 != 0)))) &&
         (*(int *)(lVar85 + 2000) != 0)) {
        lVar92 = (longlong)(int)local_178._8_4_;
        uVar43 = local_178._8_4_ + 1;
        local_178._8_4_ = uVar43;
        if ((uint)local_178._12_4_ < uVar43) {
          FUN_1473154a2(local_178);
        }
        lVar92 = lVar92 * 0x200;
        pvVar58 = (void *)(local_178._0_8_ + lVar92);
        *(undefined8 *)(local_178._0_8_ + 0xc0 + lVar92) = 0;
        iVar41 = *(int *)(lVar85 + 2000);
        pvVar66 = *(void **)(lVar85 + 0x7c0);
        *(int *)(local_178._0_8_ + 0xd0 + lVar92) = iVar41;
        if ((longlong)iVar41 == 0) {
          *(undefined4 *)((longlong)pvVar58 + 0xd4) = 6;
        }
        else {
          pvVar72 = (void *)(lVar85 + 0x700);
          if (pvVar66 != (void *)0x0) {
            pvVar72 = pvVar66;
          }
          FUN_144715b40(pvVar58,iVar41,0);
          pvVar66 = *(void **)((longlong)pvVar58 + 0xc0);
          if (*(void **)((longlong)pvVar58 + 0xc0) == (void *)0x0) {
            pvVar66 = pvVar58;
          }
          memcpy(pvVar66,pvVar72,(longlong)iVar41 << 5);
        }
        *(undefined8 *)((longlong)pvVar58 + 0x1e0) = 0;
        iVar41 = *(int *)(lVar85 + 0x8f0);
        pvVar66 = *(void **)(lVar85 + 0x8e0);
        *(int *)((longlong)pvVar58 + 0x1f0) = iVar41;
        if ((longlong)iVar41 == 0) {
          *(undefined4 *)((longlong)pvVar58 + 500) = 8;
          bVar80 = bVar67;
        }
        else {
          pvVar72 = (void *)(lVar85 + 0x7e0);
          if (pvVar66 != (void *)0x0) {
            pvVar72 = pvVar66;
          }
          FUN_144715cb0((void *)((longlong)pvVar58 + 0xe0),iVar41,0);
          pvVar66 = *(void **)((longlong)pvVar58 + 0x1e0);
          if (*(void **)((longlong)pvVar58 + 0x1e0) == (void *)0x0) {
            pvVar66 = (void *)((longlong)pvVar58 + 0xe0);
          }
          memcpy(pvVar66,pvVar72,(longlong)iVar41 << 5);
          bVar80 = bVar67;
        }
      }
      lVar68 = lVar68 + 8;
      bVar67 = bVar80;
    } while ((longlong)iVar46 * 8 != lVar68);
    if (!bVar80) goto LAB_140c9684b;
  }
  FUN_144b0f6c2(local_178._0_8_,local_178._8_4_);
  FUN_142e69996(local_178);
LAB_140c964d0:
  FUN_14002d3bc(&local_6e8);
  if ((local_f0 ^ (ulonglong)auStack_988) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c96fce FUN_140c96fce body=1200 status=ok
// SIG undefined FUN_140c96fce(void)

longlong FUN_140c96fce(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                      longlong *param_5,byte param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong **_Dst;
  undefined2 *puVar6;
  undefined1 auStack_d8 [32];
  byte local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
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
  local_58 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_50 = 0;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  if ((param_5 != (longlong *)0x0) && (((uint)param_1[7] >> 0xe & 1) != 0)) {
    lVar3 = param_5[2];
    if (((*(byte *)(lVar3 + 0xd5) & 4) != 0) && ((*(uint *)(param_5 + 1) & 0x10) == 0)) {
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      plVar5 = param_5;
LAB_140c9724d:
      plVar4 = plVar5;
      local_b0 = plVar4;
      if ((longlong *)plVar4[4] != (longlong *)0x0) goto code_r0x000140c9725e;
      goto LAB_140c97276;
    }
    if (((uint)param_1[7] >> 0x12 & 1) != 0) {
      lVar3 = FUN_14496b3f0(param_1);
    }
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    FUN_1401031ac(lVar3,0);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_78;
    uStack_60 = uStack_70;
    iVar2 = (int)uStack_70;
    goto LAB_140c970e9;
  }
LAB_140c97230:
  puVar6 = &DAT_149dfb77a;
  goto LAB_140c970f1;
code_r0x000140c9725e:
  plVar5 = (longlong *)plVar4[4];
  if ((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0) goto LAB_140c9724d;
  local_b0 = (longlong *)FUN_142840154(plVar4);
LAB_140c97276:
  if (local_b0 == (longlong *)0x0) {
    plVar5 = (longlong *)plVar4[4];
    goto LAB_140c9724d;
  }
  plVar5 = (longlong *)FUN_1409ffe1d();
  if (local_b0 == plVar5) {
    local_98[0] = param_5[3];
    FUN_1400021e4(local_98,&local_88);
    local_78 = local_88;
    local_b0 = (longlong *)0x0;
  }
  else {
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0;
    FUN_1401031ac(param_5,local_b0);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_78 = local_88;
    local_b0 = (longlong *)local_68;
  }
  local_88 = *(undefined2 **)(param_5[2] + 0x18);
  uStack_70 = uStack_80;
  FUN_1400021e4(&local_88,local_98);
  FUN_1449b8608(local_a8,&local_78,&DAT_149e001d8);
  FUN_1401c7f3e(&local_88,local_a8,local_98);
  if (local_b0 != (longlong *)0x0) {
    FUN_1400020a8(local_b0);
  }
  local_68 = local_88;
  uStack_60 = uStack_80;
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_5 + 0x240))(param_5,&local_68);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar2 = (int)uStack_60;
LAB_140c970e9:
  puVar6 = local_68;
  if (iVar2 == 0) goto LAB_140c97230;
LAB_140c970f1:
  local_b8 = param_6 & 1;
  lVar3 = FUN_140c97480(param_2,&local_58,puVar6,&DAT_149dfb77a);
  if (lVar3 != 0) {
    if (param_4 == 1) {
      cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar1 == '\0') {
          _Dst = (longlong **)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
          if (_Dst != &local_58) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_58,(int)param_1[6]);
            }
            else {
              memcpy(_Dst,&local_58,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_58);
        }
        goto LAB_140c9715b;
      }
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
    }
    plVar5 = (longlong *)*param_3;
    if (plVar5 != local_58) {
      *param_3 = local_58;
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *(undefined4 *)(param_3 + 1) = local_50;
  }
LAB_140c9715b:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c97480 FUN_140c97480 body=407 status=ok
// SIG undefined FUN_140c97480(void)

short * FUN_140c97480(short *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                     char param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  short *psVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong *local_60 [2];
  int local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    if (param_5 == '\0') {
      FUN_140e82300();
      plVar2 = DAT_14c844840;
      plVar1 = (longlong *)*param_2;
      if (plVar1 != DAT_14c844840) {
        *param_2 = (longlong)DAT_14c844840;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      *(undefined4 *)(param_2 + 1) = DAT_14c844848;
      psVar4 = param_1;
    }
    else {
      psVar4 = (short *)0x0;
    }
  }
  else {
    psVar4 = (short *)FUN_140c97c38(param_1,param_2);
    if (psVar4 == (short *)0x0) {
      if (param_5 == '\0') {
        FUN_140056680(&local_48,param_1);
        iVar5 = (int)uStack_40 + -1;
        if ((int)uStack_40 == 0) {
          iVar5 = 0;
        }
        FUN_140233b1a(local_60,&local_48);
        FUN_140008f88(param_2,local_60);
        if (local_60[0] != (longlong *)0x0) {
          (**(code **)(*local_60[0] + 0x10))();
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        psVar4 = param_1 + iVar5;
      }
      else {
        local_48 = 0;
        uStack_40 = 0;
        local_4c = 0;
        cVar3 = thunk_FUN_140c9761d(param_1);
        if (cVar3 == '\0') {
          psVar4 = (short *)0x0;
        }
        else {
          FUN_140233b1a(local_60,&local_48);
          FUN_140008f88(param_2,local_60);
          if (local_60[0] != (longlong *)0x0) {
            (**(code **)(*local_60[0] + 0x10))();
          }
          psVar4 = param_1 + local_4c;
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return psVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c97618 thunk_FUN_140c9761d body=5 status=ok
// SIG undefined thunk_FUN_140c9761d(void)

bool thunk_FUN_140c9761d(short *param_1,undefined8 param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  ulong uVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  int iVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_1b8 [36];
  ulong uStack_194;
  wchar_t *pwStack_190;
  wchar_t *pwStack_188;
  wchar_t *pwStack_180;
  char cStack_178;
  wchar_t awStack_170 [4];
  wchar_t awStack_168 [12];
  wchar_t awStack_150 [96];
  longlong lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  wchar_t *pwStack_78;
  wchar_t *pwStack_70;
  wchar_t *pwStack_68;
  char cStack_60;
  wchar_t awStack_58 [8];
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (*param_1 == 0x22) {
    pwVar7 = param_1 + 1;
    while( true ) {
      uVar9 = (longlong)pwVar7 - (longlong)param_1;
      iVar5 = -1;
      pwVar4 = pwVar7 + 1;
      do {
        pwVar8 = pwVar4;
        wVar1 = pwVar8[-1];
        uVar3 = 1L << ((byte)wVar1 & 0x3f);
        uVar6 = uVar3 & 0x400002401;
        if (0x3f < (ushort)wVar1) {
          uVar6 = 0;
        }
        uVar3 = (ulonglong)((uint)uVar3 & 0x10000000);
        if ((wVar1 & 0xffc0U) != 0x40) {
          uVar3 = 0;
        }
        pwVar4 = pwVar8 + 1;
        iVar5 = iVar5 + 1;
        uVar9 = uVar9 + 2;
      } while (uVar3 == 0 && uVar6 == 0);
      FUN_1400020e8(param_2,pwVar7,iVar5);
      wVar1 = pwVar8[-1];
      if (wVar1 != L'\\') break;
      wVar1 = *pwVar8;
      if ((ushort)wVar1 < 0x5c) {
        if (wVar1 == L'\'') {
          wVar1 = L'\'';
        }
        else {
          if (wVar1 != L'\"') goto LAB_140c97757;
          wVar1 = L'\"';
        }
LAB_140c97869:
        FUN_140002184(param_2,wVar1);
        pwVar7 = pwVar4;
      }
      else {
        if (0x6d < (ushort)wVar1) {
          if (wVar1 == L'n') {
            wVar1 = L'\n';
          }
          else if (wVar1 == L'r') {
            wVar1 = L'\r';
          }
          else {
            if (wVar1 != L't') goto LAB_140c97757;
            wVar1 = L'\t';
          }
          goto LAB_140c97869;
        }
        if (wVar1 == L'\\') {
          wVar1 = L'\\';
          goto LAB_140c97869;
        }
LAB_140c97757:
        if ((wVar1 & 0xfff8U) == 0x30) {
          pwStack_190 = awStack_170;
          pwStack_180 = awStack_150;
          cStack_178 = '\0';
          wVar1 = *pwVar8;
          pwStack_188 = pwStack_190;
          if (((wVar1 & 0xfff8U) == 0x30) &&
             (pwStack_188 = pwStack_190,
             0x3f < (ushort)wVar1 || (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0)) {
            pwStack_188 = pwStack_190;
            while ((int)((ulonglong)((longlong)pwStack_188 - (longlong)pwStack_190) >> 1) < 3) {
              if (pwStack_180 <= pwStack_188 + 1) {
                FUN_140213274(&pwStack_190,1);
              }
              pwVar8 = pwVar8 + 1;
              pwVar7 = pwStack_188 + 1;
              *pwStack_188 = wVar1;
              wVar1 = *pwVar8;
              pwStack_188 = pwVar7;
              if (((wVar1 & 0xfff8U) != 0x30) ||
                 ((ushort)wVar1 < 0x40 && (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) != 0)) break;
            }
          }
          *pwStack_188 = L'\0';
          iVar5 = 8;
          pwVar4 = pwVar8;
LAB_140c979b6:
          uVar2 = wcstoul(pwStack_190,(wchar_t **)0x0,iVar5);
          FUN_140002184(param_2,uVar2);
LAB_140c978b3:
          pwVar7 = pwVar4;
          if (cStack_178 == '\x01') {
            FUN_1400020a8(pwStack_190);
          }
        }
        else {
          if (wVar1 == L'x') {
            iVar5 = iswxdigit(*pwVar4);
            if (iVar5 != 0) {
              pwStack_190 = awStack_170;
              pwStack_180 = awStack_150;
              cStack_178 = '\0';
              wVar1 = *pwVar4;
              if ((0x3f < (ushort)wVar1) ||
                 (pwStack_188 = pwStack_190, (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0)) {
                pwStack_188 = pwStack_190;
                do {
                  iVar5 = iswxdigit(wVar1);
                  if (iVar5 == 0) break;
                  wVar1 = *pwVar4;
                  if (pwStack_180 <= pwStack_188 + 1) {
                    FUN_140213274(&pwStack_190,1);
                  }
                  pwVar4 = pwVar4 + 1;
                  pwVar7 = pwStack_188 + 1;
                  *pwStack_188 = wVar1;
                  wVar1 = *pwVar4;
                  pwStack_188 = pwVar7;
                } while ((0x3f < (ushort)wVar1) ||
                        ((1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0));
              }
              *pwStack_188 = L'\0';
              iVar5 = 0x10;
              goto LAB_140c979b6;
            }
            wVar1 = *pwVar8;
          }
          if (wVar1 == L'u') {
            iVar5 = iswxdigit(*pwVar4);
            if (iVar5 != 0) {
              pwStack_190 = awStack_170;
              pwStack_180 = awStack_168;
              cStack_178 = '\0';
              wVar1 = *pwVar4;
              if ((0x3f < (ushort)wVar1) ||
                 (pwStack_188 = pwStack_190, (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0)) {
                pwStack_188 = pwStack_190;
                do {
                  iVar5 = iswxdigit(wVar1);
                  if ((iVar5 == 0) ||
                     (3 < (int)((ulonglong)((longlong)pwStack_188 - (longlong)pwStack_190) >> 1)))
                  break;
                  wVar1 = *pwVar4;
                  if (pwStack_180 <= pwStack_188 + 1) {
                    FUN_140213274(&pwStack_190,1);
                  }
                  pwVar4 = pwVar4 + 1;
                  pwVar7 = pwStack_188 + 1;
                  *pwStack_188 = wVar1;
                  wVar1 = *pwVar4;
                  pwStack_188 = pwVar7;
                } while ((0x3f < (ushort)wVar1) ||
                        ((1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0));
              }
              *pwStack_188 = L'\0';
              uVar2 = wcstoul(pwStack_190,(wchar_t **)0x0,0x10);
              pwStack_78 = (wchar_t *)CONCAT62(pwStack_78._2_6_,(short)uVar2);
              FUN_1400020e8(param_2,&pwStack_78,(short)uVar2 != 0);
              goto LAB_140c978b3;
            }
            wVar1 = *pwVar8;
          }
          if ((wVar1 != L'U') || (iVar5 = iswxdigit(*pwVar4), iVar5 == 0)) {
            FUN_140002184(param_2,0x5c);
            wVar1 = *pwVar8;
            goto LAB_140c97869;
          }
          pwStack_78 = awStack_58;
          pwStack_68 = (wchar_t *)&uStack_48;
          cStack_60 = '\0';
          wVar1 = *pwVar4;
          if ((0x3f < (ushort)wVar1) ||
             (pwStack_70 = pwStack_78, (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0)) {
            pwStack_70 = pwStack_78;
            do {
              iVar5 = iswxdigit(wVar1);
              if ((iVar5 == 0) ||
                 (7 < (int)((ulonglong)((longlong)pwStack_70 - (longlong)pwStack_78) >> 1))) break;
              wVar1 = *pwVar4;
              if (pwStack_68 <= pwStack_70 + 1) {
                FUN_140213274(&pwStack_78,1);
              }
              pwVar4 = pwVar4 + 1;
              pwVar7 = pwStack_70 + 1;
              *pwStack_70 = wVar1;
              wVar1 = *pwVar4;
              pwStack_70 = pwVar7;
            } while ((0x3f < (ushort)wVar1) || ((1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0));
          }
          *pwStack_70 = L'\0';
          uStack_194 = wcstoul(pwStack_78,(wchar_t **)0x0,0x10);
          lStack_90 = 0;
          FUN_14681c08a(&pwStack_190,&uStack_194,uStack_194 != 0,uStack_194 == 0);
          FUN_1400020e8(param_2,uStack_88,uStack_80);
          if (lStack_90 != 0) {
            FUN_1400020a8();
          }
          pwVar7 = pwVar4;
          if (cStack_60 == '\x01') {
            FUN_1400020a8(pwStack_78);
          }
        }
      }
    }
    bVar10 = wVar1 == L'\"';
    if ((param_3 != (undefined4 *)0x0) && (wVar1 == L'\"')) {
      *param_3 = (int)(uVar9 >> 1);
      bVar10 = true;
    }
  }
  else {
    bVar10 = false;
  }
  if ((uStack_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 140c9761d FUN_140c9761d body=1562 status=ok
// SIG undefined FUN_140c9761d(void)

bool FUN_140c9761d(short *param_1,undefined8 param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  ulong uVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  int iVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_1b8 [36];
  ulong local_194;
  wchar_t *local_190;
  wchar_t *local_188;
  wchar_t *local_180;
  char local_178;
  wchar_t local_170 [4];
  wchar_t local_168 [12];
  wchar_t local_150 [96];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char local_60;
  wchar_t local_58 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (*param_1 == 0x22) {
    pwVar7 = param_1 + 1;
    while( true ) {
      uVar9 = (longlong)pwVar7 - (longlong)param_1;
      iVar5 = -1;
      pwVar4 = pwVar7 + 1;
      do {
        pwVar8 = pwVar4;
        wVar1 = pwVar8[-1];
        uVar3 = 1L << ((byte)wVar1 & 0x3f);
        uVar6 = uVar3 & 0x400002401;
        if (0x3f < (ushort)wVar1) {
          uVar6 = 0;
        }
        uVar3 = (ulonglong)((uint)uVar3 & 0x10000000);
        if ((wVar1 & 0xffc0U) != 0x40) {
          uVar3 = 0;
        }
        pwVar4 = pwVar8 + 1;
        iVar5 = iVar5 + 1;
        uVar9 = uVar9 + 2;
      } while (uVar3 == 0 && uVar6 == 0);
      FUN_1400020e8(param_2,pwVar7,iVar5);
      wVar1 = pwVar8[-1];
      if (wVar1 != L'\\') break;
      wVar1 = *pwVar8;
      if ((ushort)wVar1 < 0x5c) {
        if (wVar1 == L'\'') {
          wVar1 = L'\'';
        }
        else {
          if (wVar1 != L'\"') goto LAB_140c97757;
          wVar1 = L'\"';
        }
LAB_140c97869:
        FUN_140002184(param_2,wVar1);
        pwVar7 = pwVar4;
      }
      else {
        if (0x6d < (ushort)wVar1) {
          if (wVar1 == L'n') {
            wVar1 = L'\n';
          }
          else if (wVar1 == L'r') {
            wVar1 = L'\r';
          }
          else {
            if (wVar1 != L't') goto LAB_140c97757;
            wVar1 = L'\t';
          }
          goto LAB_140c97869;
        }
        if (wVar1 == L'\\') {
          wVar1 = L'\\';
          goto LAB_140c97869;
        }
LAB_140c97757:
        if ((wVar1 & 0xfff8U) == 0x30) {
          local_190 = local_170;
          local_180 = local_150;
          local_178 = '\0';
          wVar1 = *pwVar8;
          local_188 = local_190;
          if (((wVar1 & 0xfff8U) == 0x30) &&
             (local_188 = local_190,
             0x3f < (ushort)wVar1 || (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0)) {
            local_188 = local_190;
            while ((int)((ulonglong)((longlong)local_188 - (longlong)local_190) >> 1) < 3) {
              if (local_180 <= local_188 + 1) {
                FUN_140213274(&local_190,1);
              }
              pwVar8 = pwVar8 + 1;
              pwVar7 = local_188 + 1;
              *local_188 = wVar1;
              wVar1 = *pwVar8;
              local_188 = pwVar7;
              if (((wVar1 & 0xfff8U) != 0x30) ||
                 ((ushort)wVar1 < 0x40 && (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) != 0)) break;
            }
          }
          *local_188 = L'\0';
          iVar5 = 8;
          pwVar4 = pwVar8;
LAB_140c979b6:
          uVar2 = wcstoul(local_190,(wchar_t **)0x0,iVar5);
          FUN_140002184(param_2,uVar2);
LAB_140c978b3:
          pwVar7 = pwVar4;
          if (local_178 == '\x01') {
            FUN_1400020a8(local_190);
          }
        }
        else {
          if (wVar1 == L'x') {
            iVar5 = iswxdigit(*pwVar4);
            if (iVar5 != 0) {
              local_190 = local_170;
              local_180 = local_150;
              local_178 = '\0';
              wVar1 = *pwVar4;
              if ((0x3f < (ushort)wVar1) ||
                 (local_188 = local_190, (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0)) {
                local_188 = local_190;
                do {
                  iVar5 = iswxdigit(wVar1);
                  if (iVar5 == 0) break;
                  wVar1 = *pwVar4;
                  if (local_180 <= local_188 + 1) {
                    FUN_140213274(&local_190,1);
                  }
                  pwVar4 = pwVar4 + 1;
                  pwVar7 = local_188 + 1;
                  *local_188 = wVar1;
                  wVar1 = *pwVar4;
                  local_188 = pwVar7;
                } while ((0x3f < (ushort)wVar1) ||
                        ((1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0));
              }
              *local_188 = L'\0';
              iVar5 = 0x10;
              goto LAB_140c979b6;
            }
            wVar1 = *pwVar8;
          }
          if (wVar1 == L'u') {
            iVar5 = iswxdigit(*pwVar4);
            if (iVar5 != 0) {
              local_190 = local_170;
              local_180 = local_168;
              local_178 = '\0';
              wVar1 = *pwVar4;
              if ((0x3f < (ushort)wVar1) ||
                 (local_188 = local_190, (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0)) {
                local_188 = local_190;
                do {
                  iVar5 = iswxdigit(wVar1);
                  if ((iVar5 == 0) ||
                     (3 < (int)((ulonglong)((longlong)local_188 - (longlong)local_190) >> 1)))
                  break;
                  wVar1 = *pwVar4;
                  if (local_180 <= local_188 + 1) {
                    FUN_140213274(&local_190,1);
                  }
                  pwVar4 = pwVar4 + 1;
                  pwVar7 = local_188 + 1;
                  *local_188 = wVar1;
                  wVar1 = *pwVar4;
                  local_188 = pwVar7;
                } while ((0x3f < (ushort)wVar1) ||
                        ((1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0));
              }
              *local_188 = L'\0';
              uVar2 = wcstoul(local_190,(wchar_t **)0x0,0x10);
              local_78 = (wchar_t *)CONCAT62(local_78._2_6_,(short)uVar2);
              FUN_1400020e8(param_2,&local_78,(short)uVar2 != 0);
              goto LAB_140c978b3;
            }
            wVar1 = *pwVar8;
          }
          if ((wVar1 != L'U') || (iVar5 = iswxdigit(*pwVar4), iVar5 == 0)) {
            FUN_140002184(param_2,0x5c);
            wVar1 = *pwVar8;
            goto LAB_140c97869;
          }
          local_78 = local_58;
          local_68 = (wchar_t *)&local_48;
          local_60 = '\0';
          wVar1 = *pwVar4;
          if ((0x3f < (ushort)wVar1) ||
             (local_70 = local_78, (1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0)) {
            local_70 = local_78;
            do {
              iVar5 = iswxdigit(wVar1);
              if ((iVar5 == 0) ||
                 (7 < (int)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1))) break;
              wVar1 = *pwVar4;
              if (local_68 <= local_70 + 1) {
                FUN_140213274(&local_78,1);
              }
              pwVar4 = pwVar4 + 1;
              pwVar7 = local_70 + 1;
              *local_70 = wVar1;
              wVar1 = *pwVar4;
              local_70 = pwVar7;
            } while ((0x3f < (ushort)wVar1) || ((1L << ((byte)wVar1 & 0x3f) & 0x400002401U) == 0));
          }
          *local_70 = L'\0';
          local_194 = wcstoul(local_78,(wchar_t **)0x0,0x10);
          local_90 = 0;
          FUN_14681c08a(&local_190,&local_194,local_194 != 0,local_194 == 0);
          FUN_1400020e8(param_2,local_88,local_80);
          if (local_90 != 0) {
            FUN_1400020a8();
          }
          pwVar7 = pwVar4;
          if (local_60 == '\x01') {
            FUN_1400020a8(local_78);
          }
        }
      }
    }
    bVar10 = wVar1 == L'\"';
    if ((param_3 != (undefined4 *)0x0) && (wVar1 == L'\"')) {
      *param_3 = (int)(uVar9 >> 1);
      bVar10 = true;
    }
  }
  else {
    bVar10 = false;
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 140c97c38 FUN_140c97c38 body=1588 status=ok
// SIG undefined FUN_140c97c38(void)

longlong FUN_140c97c38(wchar_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  longlong *local_78 [2];
  longlong *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = wcsncmp(param_1,L"INVTEXT",7);
  if (iVar2 == 0) {
    lVar5 = FUN_1467dfa62(param_1 + 7,0x28);
    if (lVar5 != 0) {
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      lVar5 = FUN_1467dfa4b(lVar5);
      if (lVar5 != 0) {
        lVar5 = FUN_140c9875d(lVar5,&local_68);
        if ((lVar5 == 0) || (lVar5 = FUN_1467dfa62(lVar5,0x29), lVar5 == 0)) {
          lVar5 = 0;
        }
        else {
          FUN_145aa9352(local_78,&local_68);
          FUN_140008f88(param_2,local_78);
          if (local_78[0] != (longlong *)0x0) {
            (**(code **)(*local_78[0] + 0x10))();
          }
        }
        if (local_68 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_140c97d94;
      }
    }
    lVar5 = 0;
    goto LAB_140c97d94;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  plVar4 = DAT_14c844840;
  local_68 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
  }
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  cVar1 = FUN_140c9826e(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar3[1] = 0;
    *plVar3 = (longlong)&PTR_FUN_149e19310;
    plVar3[2] = -1;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    goto LAB_140c97d12;
  }
  cVar1 = FUN_14578c7dc(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_14578c7fe(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar8 = plVar3 + 4;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      ppuVar7 = &PTR_FUN_149e19550;
      goto LAB_140c98016;
    }
    cVar1 = FUN_14578c7d8(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar8 = plVar3 + 4;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      ppuVar7 = &PTR_FUN_149e19610;
      goto LAB_140c98016;
    }
    cVar1 = FUN_14578c820(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      plVar3[10] = 0;
      plVar3[0xb] = 0;
      plVar3[0xc] = 0;
      plVar3[0xd] = 0;
      FUN_1467dea0e(plVar3);
      ppuVar7 = &PTR_FUN_149e19790;
LAB_140c980bd:
      *plVar3 = (longlong)ppuVar7;
LAB_140c97d12:
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        plVar4 = local_68;
      }
      goto LAB_140c97d22;
    }
    cVar1 = FUN_14578c842(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      plVar3[10] = 0;
      plVar3[0xb] = 0;
      plVar3[0xc] = 0;
      plVar3[0xd] = 0;
      FUN_1467dea0e(plVar3);
      ppuVar7 = &PTR_FUN_149e19850;
      goto LAB_140c980bd;
    }
    cVar1 = FUN_14578c864(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x80,0x10);
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      plVar3[10] = 0;
      plVar3[0xb] = 0;
      plVar3[0xc] = 0;
      plVar3[0xd] = 0;
      plVar3[0xe] = 0;
      plVar3[0xf] = 0;
      FUN_1467dea0e(plVar3);
      *plVar3 = (longlong)&PTR_FUN_149e19910;
      plVar3[0xe] = 0;
      plVar3[0xf] = 0;
      goto LAB_140c97d12;
    }
    cVar1 = FUN_14578c886(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      *plVar3 = (longlong)&PTR_FUN_149e19b50;
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      plVar3[10] = 0;
      plVar3[0xb] = 0;
      goto LAB_140c98025;
    }
    cVar1 = FUN_14578c8a8(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      ppuVar7 = &PTR_FUN_149e199d0;
LAB_140c981b9:
      *plVar3 = (longlong)ppuVar7;
      plVar3[6] = 0;
      plVar3[7] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      goto LAB_140c98025;
    }
    cVar1 = FUN_14578c8ca(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      ppuVar7 = &PTR_FUN_149e19a90;
      goto LAB_140c981b9;
    }
    cVar1 = FUN_14578c90e(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x38,0x10);
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[6] = 0;
      FUN_1467dee18(plVar3);
      goto LAB_140c97d12;
    }
    cVar1 = FUN_14578c8ec(param_1);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar3[1] = 0;
      *plVar3 = (longlong)&PTR_FUN_149e19cd0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      goto LAB_140c97d12;
    }
    lVar5 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar8 = plVar3 + 4;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    ppuVar7 = &PTR_FUN_149e19490;
LAB_140c98016:
    *plVar3 = (longlong)ppuVar7;
    FUN_1410a5228(plVar8);
    plVar3[6] = 0;
    plVar3[7] = 0;
LAB_140c98025:
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plVar4 = local_68;
    }
LAB_140c97d22:
    local_68 = plVar3;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    plVar4 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3);
    lVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,param_1,param_3,param_4);
    if (lVar5 == 0) {
      lVar5 = 0;
      plVar4 = plVar3;
    }
    else {
      uVar6 = (**(code **)(*plVar3 + 0x50))(plVar3);
      FUN_1447a1fc0(uVar6);
      FUN_140008f88(param_2,&local_68);
      plVar4 = local_68;
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_140c97d94:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 140c9826e FUN_140c9826e body=70 status=ok
// SIG undefined FUN_140c9826e(void)

bool FUN_140c9826e(wchar_t *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = wcsncmp(param_1,L"NSLOCTEXT",9);
  bVar2 = true;
  if (iVar1 != 0) {
    iVar1 = wcsncmp(param_1,L"LOCTEXT",7);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 140c982b4 FUN_140c982b4 body=1192 status=ok
// SIG undefined FUN_140c982b4(void)

short * FUN_140c982b4(longlong param_1,wchar_t *param_2,longlong param_3)

{
  wchar_t wVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = wcsncmp(param_2,L"NSLOCTEXT",9);
  if (iVar4 != 0) {
    iVar4 = wcsncmp(param_2,L"LOCTEXT",7);
    if (iVar4 == 0) {
      for (param_2 = param_2 + 7; (wVar1 = *param_2, wVar1 == L' ' || (wVar1 == L'\t'));
          param_2 = param_2 + 1) {
      }
      if (wVar1 == L'(' && param_2 != (wchar_t *)0x0) {
        local_48 = 0;
        uStack_40 = 0;
        do {
          do {
            param_2 = param_2 + 1;
          } while (*param_2 == L' ');
        } while (*param_2 == L'\t');
        if ((param_2 != (wchar_t *)0x0) &&
           (psVar5 = (short *)FUN_140c9875d(param_2,&local_48), psVar5 != (short *)0x0)) {
          for (; (sVar2 = *psVar5, sVar2 == 0x20 || (sVar2 == 9)); psVar5 = psVar5 + 1) {
          }
          if (psVar5 != (short *)0x0 && sVar2 == 0x2c) {
            do {
              do {
                psVar5 = psVar5 + 1;
              } while (*psVar5 == 0x20);
            } while (*psVar5 == 9);
            if ((psVar5 != (short *)0x0) &&
               (psVar5 = (short *)FUN_140c9875d(psVar5,param_1 + 0x18), psVar5 != (short *)0x0)) {
              for (; (sVar2 = *psVar5, sVar2 == 0x20 || (sVar2 == 9)); psVar5 = psVar5 + 1) {
              }
              psVar6 = (short *)0x0;
              if (sVar2 != 0x29) {
                psVar5 = psVar6;
              }
              if (psVar5 != (short *)0x0) {
                if ((int)uStack_40 < 2) {
                  FUN_1412e3d1e(&local_68);
                  local_58 = 0;
                  uStack_50 = 0;
                  FUN_1407c869a(&local_68,&local_58,0);
                  if (local_48 != 0) {
                    FUN_1400020a8();
                  }
                  local_48 = local_58;
                  uStack_40 = uStack_50;
                }
                if (param_3 == 0) {
                  local_58 = 0;
                  uStack_50 = 0;
                }
                else {
                  FUN_140056680(&local_58,param_3);
                }
                FUN_140c9891b(&local_58);
                FUN_140c98848(&local_68,&local_48);
                FUN_140c98848(local_78,&local_58);
                *(ulonglong *)(param_1 + 0x10) = CONCAT44((undefined4)local_68,local_78[0]);
                lVar3 = *(longlong *)(param_1 + 0x28);
                *(undefined8 *)(param_1 + 0x28) = 0;
                if (lVar3 != 0) {
                  local_68 = lVar3;
                  FUN_1447a2442();
                }
                *(undefined4 *)(param_1 + 0xc) = 0;
                if (local_58 != 0) {
                  FUN_1400020a8();
                }
                psVar6 = psVar5 + 1;
              }
              goto LAB_140c984ca;
            }
          }
        }
        goto LAB_140c98625;
      }
    }
    psVar6 = (short *)0x0;
    goto LAB_140c984d9;
  }
  for (param_2 = param_2 + 9; (wVar1 = *param_2, wVar1 == L' ' || (wVar1 == L'\t'));
      param_2 = param_2 + 1) {
  }
  psVar6 = (short *)0x0;
  if ((param_2 == (wchar_t *)0x0) || (wVar1 != L'(')) goto LAB_140c984d9;
  local_48 = 0;
  uStack_40 = 0;
  do {
    do {
      param_2 = param_2 + 1;
    } while (*param_2 == L' ');
  } while (*param_2 == L'\t');
  if ((param_2 == (wchar_t *)0x0) ||
     (psVar5 = (short *)FUN_140c9875d(param_2,&local_48), psVar5 == (short *)0x0)) {
LAB_140c98625:
    psVar6 = (short *)0x0;
  }
  else {
    for (; (sVar2 = *psVar5, sVar2 == 0x20 || (sVar2 == 9)); psVar5 = psVar5 + 1) {
    }
    psVar6 = (short *)0x0;
    if ((psVar5 != (short *)0x0) && (sVar2 == 0x2c)) {
      local_58 = 0;
      uStack_50 = 0;
      do {
        do {
          psVar5 = psVar5 + 1;
        } while (*psVar5 == 0x20);
      } while (*psVar5 == 9);
      if ((psVar5 == (short *)0x0) ||
         (psVar5 = (short *)FUN_140c9875d(psVar5,&local_58), psVar5 == (short *)0x0)) {
LAB_140c984ff:
        psVar6 = (short *)0x0;
      }
      else {
        for (; (sVar2 = *psVar5, sVar2 == 0x20 || (sVar2 == 9)); psVar5 = psVar5 + 1) {
        }
        psVar6 = (short *)0x0;
        if ((psVar5 != (short *)0x0) && (sVar2 == 0x2c)) {
          do {
            do {
              psVar5 = psVar5 + 1;
            } while (*psVar5 == 0x20);
          } while (*psVar5 == 9);
          if ((psVar5 == (short *)0x0) ||
             (psVar5 = (short *)FUN_140c9875d(psVar5,param_1 + 0x18), psVar5 == (short *)0x0))
          goto LAB_140c984ff;
          for (; (sVar2 = *psVar5, sVar2 == 0x20 || (sVar2 == 9)); psVar5 = psVar5 + 1) {
          }
          psVar6 = (short *)0x0;
          if (sVar2 != 0x29) {
            psVar5 = psVar6;
          }
          if (psVar5 != (short *)0x0) {
            if ((int)uStack_50 < 2) {
              FUN_1412e3d1e(local_78);
              local_68 = 0;
              uStack_60 = 0;
              FUN_1407c869a(local_78,&local_68,0);
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              local_58 = local_68;
              uStack_50 = uStack_60;
            }
            FUN_140c9891b(&local_48);
            FUN_140c98848(&local_68,&local_58);
            FUN_140c98848(local_78,&local_48);
            *(ulonglong *)(param_1 + 0x10) = CONCAT44((undefined4)local_68,local_78[0]);
            lVar3 = *(longlong *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x28) = 0;
            if (lVar3 != 0) {
              local_68 = lVar3;
              FUN_1447a2442();
            }
            psVar6 = psVar5 + 1;
            *(undefined4 *)(param_1 + 0xc) = 0;
          }
        }
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140c984ca:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_140c984d9:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return psVar6;
}



// FUNCTION 140c9875d FUN_140c9875d body=233 status=ok
// SIG undefined FUN_140c9875d(void)

wchar_t * FUN_140c9875d(wchar_t *param_1,undefined8 param_2)

{
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = wcsncmp(param_1,L"TEXT",4);
  if (iVar3 == 0) {
    for (param_1 = param_1 + 4; (wVar1 = *param_1, wVar1 == L' ' || (wVar1 == L'\t'));
        param_1 = param_1 + 1) {
    }
    pwVar4 = (wchar_t *)0x0;
    if (wVar1 != L'(') {
      param_1 = pwVar4;
    }
    if (param_1 == (wchar_t *)0x0) goto LAB_140c987cf;
    param_1 = param_1 + 1;
  }
  local_2c = 0;
  cVar2 = FUN_140c9761d(param_1,param_2,&local_2c);
  pwVar4 = (wchar_t *)(longlong)local_2c;
  if (cVar2 == '\0') {
    pwVar4 = (wchar_t *)0x0;
  }
  param_1 = param_1 + (longlong)pwVar4;
  pwVar4 = (wchar_t *)0x0;
  if (cVar2 != '\0') {
    pwVar4 = param_1;
  }
  if ((iVar3 == 0) && (cVar2 != '\0')) {
    for (; (wVar1 = *param_1, wVar1 == L' ' || (wVar1 == L'\t')); param_1 = param_1 + 1) {
    }
    pwVar5 = (wchar_t *)0x0;
    if (wVar1 == L')') {
      pwVar5 = param_1;
    }
    pwVar4 = pwVar5 + 1;
    if (pwVar5 == (wchar_t *)0x0) {
      pwVar4 = (wchar_t *)0x0;
    }
  }
LAB_140c987cf:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pwVar4;
}



// FUNCTION 140c98848 FUN_140c98848 body=210 status=ok
// SIG undefined FUN_140c98848(void)

undefined4 * FUN_140c98848(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar1 = *(uint *)(param_2 + 1);
  *param_1 = 0xffffffff;
  if (1 < uVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c845168) {
      FUN_144b3d300(&DAT_14c845168);
      if (DAT_14c845168 == -1) {
        FUN_1456aef72(&DAT_14c8450d0);
        DAT_14c845160 = &DAT_14c8450d0;
        atexit(FUN_142767c9e);
        _Init_thread_footer(&DAT_14c845168);
      }
    }
    local_38 = uVar2;
    local_30 = uVar1 - 1;
    FUN_14003e488(DAT_14c845160,&local_38,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c9891b FUN_140c9891b body=179 status=ok
// SIG undefined FUN_140c9891b(void)

void FUN_140c9891b(longlong *param_1)

{
  ulonglong uVar1;
  void *_Dst;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar4 = (int)param_1[1];
  uVar5 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  if ((0 < (int)uVar5) && (lVar3 = *param_1, *(short *)(lVar3 + -2 + (ulonglong)uVar5 * 2) == 0x5d))
  {
    lVar6 = (longlong)iVar4 << 0x20;
    uVar8 = (longlong)iVar4 * 2;
    do {
      if (uVar8 == 0) {
        return;
      }
      lVar6 = lVar6 + -0x100000000;
      uVar1 = uVar8 - 2;
      psVar2 = (short *)(lVar3 + -2 + uVar8);
      uVar8 = uVar1;
    } while (*psVar2 != 0x5b);
    iVar7 = (int)(uVar1 >> 1);
    if (iVar7 != -1) {
      uVar5 = uVar5 - iVar7;
      if (0 < (int)uVar5) {
        iVar7 = iVar4 - (iVar7 + uVar5);
        if (iVar7 != 0) {
          _Dst = (void *)(lVar3 + (lVar6 >> 0x20) * 2);
          memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar5 * 2),(longlong)iVar7 * 2);
          iVar4 = (int)param_1[1];
        }
        *(uint *)(param_1 + 1) = iVar4 - uVar5;
      }
      FUN_140ded26a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140c989ce FUN_140c989ce body=366 status=ok
// SIG undefined FUN_140c989ce(void)

void FUN_140c989ce(longlong param_1,longlong param_2)

{
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x660) = param_2;
    if (param_2 != 0) goto LAB_140c98a0d;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x660) = param_2;
LAB_140c98a0d:
    if (DAT_14cb06da8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464003b0;
      local_48 = &LAB_147d17bdf;
      local_50 = &LAB_1417edf22;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_140c98a41;
    }
  }
  param_2 = 0;
LAB_140c98a41:
  *(longlong *)(param_1 + 0x658) = param_2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140c98b3e(param_1 + 0x9d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c98b3e FUN_140c98b3e body=144 status=ok
// SIG undefined FUN_140c98b3e(void)

void FUN_140c98b3e(undefined8 *param_1)

{
  FUN_1401be7ff(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140d0f2ac(param_1,0);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_147a13164(param_1 + 2,0);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) == 0) {
    return;
  }
  FUN_1478a4ecc(param_1 + 0x11,0);
  return;
}



// FUNCTION 140c98bce FUN_140c98bce body=367 status=ok
// SIG undefined FUN_140c98bce(void)

void FUN_140c98bce(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  int iStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 8;
  iStack_44 = 0;
  if (param_2 == 0) {
    local_48 = 0;
    iVar2 = 0;
  }
  else {
    local_48 = *(uint *)(param_2 + 0xc);
    if ((int)local_48 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_48 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_28 = 7;
  iStack_44 = iVar2;
  local_50 = FUN_140c98d3e();
  if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_50);
  }
  puVar5 = &local_48;
  FUN_14095c1ce(param_1,&local_50,puVar5,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_30) {
      puVar5 = (uint *)CONCAT44(iStack_44,local_48);
    }
    (*pcVar1)(puVar5);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(iStack_44,local_48));
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c98d3e FUN_140c98d3e body=228 status=ok
// SIG undefined FUN_140c98d3e(void)

longlong FUN_140c98d3e(void)

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
  if (DAT_14cb676b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14599715a;
    local_38 = &LAB_14873bef6;
    local_40 = &LAB_145b043b4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_DmgCauser",&DAT_14cb676b0,
                  FUN_146516b6a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb676b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c98e24 FUN_140c98e24 body=203 status=ok
// SIG undefined FUN_140c98e24(void)

void FUN_140c98e24(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x1d0;
        lVar1 = lVar2 + lVar7;
        if (*(longlong *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x1c4) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x1c4) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x1d0 + lVar2 + 0x1c0);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x1c0);
          FUN_140fd29e4(*param_1 + lVar7 + 0x10);
          FUN_140c98ef0(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x1c0);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140c98ef0 FUN_140c98ef0 body=122 status=ok
// SIG undefined FUN_140c98ef0(void)

void FUN_140c98ef0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1d0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1d0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1d0 + 4) = uVar5;
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



// FUNCTION 140c98f6a FUN_140c98f6a body=48 status=ok
// SIG undefined FUN_140c98f6a(void)

void FUN_140c98f6a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_140c98f9a(param_3,param_2,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 140c98f9a FUN_140c98f9a body=497 status=ok
// SIG undefined FUN_140c98f9a(void)

ulonglong FUN_140c98f9a(undefined8 *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  short *psVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  undefined7 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_288 [40];
  undefined1 *local_260;
  undefined4 local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  ulonglong *local_240;
  char local_238;
  undefined1 local_230 [512];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_250 = local_230;
  local_238 = '\0';
  local_240 = &local_30;
  local_248 = local_250;
  psVar2 = (short *)FUN_1409a0110(*param_2,&local_250,1);
  if (psVar2 == (short *)0x0) {
LAB_140c99185:
    uVar8 = 0;
    goto LAB_140c99047;
  }
  *param_2 = (longlong)psVar2;
  uVar8 = (longlong)local_248 - (longlong)local_250;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if ((uVar8 & 0x1fffffffe) == 8) {
    lVar3 = 4;
    lVar9 = 0;
    while( true ) {
      uVar4 = *(ushort *)(local_250 + lVar9);
      uVar5 = (ulonglong)uVar4;
      uVar6 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar9);
      if (uVar4 != uVar6) break;
      if (uVar4 == 0) goto LAB_140c99148;
LAB_140c990a9:
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) goto LAB_140c99148;
      lVar9 = lVar9 + 2;
    }
    if ((uVar6 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar10 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_140c990a9;
    }
    if (uVar4 != uVar6) goto LAB_140c99018;
LAB_140c99148:
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      FUN_1446f8c06(param_1 + 2,0);
    }
    puVar1 = (undefined2 *)param_1[2];
    uVar8 = CONCAT71(uVar7,1);
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = 0;
    }
  }
  else {
LAB_140c99018:
    if (*psVar2 == 0x27) {
      *param_2 = (longlong)(psVar2 + 1);
      local_248 = local_250;
      psVar2 = (short *)FUN_1409a0110(psVar2 + 1,&local_250,CONCAT71((int7)(uVar8 >> 8),1));
      if ((psVar2 == (short *)0x0) || (*param_2 = (longlong)(psVar2 + 1), *psVar2 != 0x27))
      goto LAB_140c99185;
      uVar8 = (longlong)local_248 - (longlong)local_250;
    }
    else if (*psVar2 == 0x28) {
      *param_2 = (longlong)(psVar2 + 1);
      if (psVar2[1] != 0x29) {
        *param_2 = (longlong)psVar2;
        goto LAB_140c99185;
      }
      *param_2 = (longlong)(psVar2 + 2);
      goto LAB_140c99148;
    }
    local_260 = local_250;
    local_258 = (undefined4)(uVar8 >> 1);
    FUN_14475bf92(param_1);
    uVar8 = CONCAT71(uVar7,1);
  }
LAB_140c99047:
  if (local_238 == '\x01') {
    FUN_1400020a8(local_250);
  }
  if ((local_30 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140c9918c FUN_140c9918c body=776 status=ok
// SIG undefined FUN_140c9918c(void)

void FUN_140c9918c(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x48);
    lVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c991f3;
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar7 != (longlong *)0x0) &&
       (((int)plVar7[2] == *(int *)(param_1 + 0x4c) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))
       ) {
      lVar8 = *plVar7;
      goto LAB_140c991f3;
    }
  }
  lVar8 = 0;
LAB_140c991f3:
  lVar6 = *(longlong *)(lVar3 + 0x230);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(lVar3 + 0x230);
    }
  }
  *(longlong *)(lVar8 + 0x1a80) = lVar6;
  FUN_140c99494(lVar8 + 0x1a88,lVar3 + 0x238);
  lVar6 = *(longlong *)(lVar3 + 0x248);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(lVar3 + 0x248);
    }
  }
  *(longlong *)(lVar8 + 0x1a98) = lVar6;
  FUN_140c9966e(lVar8 + 0x1aa0,lVar3 + 0x250);
  FUN_140c99494(lVar8 + 0x1af0,lVar3 + 0x2a0);
  lVar6 = *(longlong *)(lVar3 + 0x2b0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(lVar3 + 0x2b0);
    }
  }
  *(longlong *)(lVar8 + 0x1b08) = lVar6;
  FUN_140c99494(lVar8 + 0x1b10,lVar3 + 0x2b8);
  *(undefined4 *)(lVar8 + 0x1b20) = *(undefined4 *)(lVar3 + 0x2c8);
  *(undefined4 *)(lVar8 + 0x1b24) = *(undefined4 *)(lVar3 + 0x2cc);
  *(undefined8 *)(lVar8 + 0x1b38) = *(undefined8 *)(lVar3 + 0x2e0);
  uVar4 = *(undefined8 *)(lVar3 + 0x2d8);
  *(undefined8 *)(lVar8 + 0x1b28) = *(undefined8 *)(lVar3 + 0x2d0);
  *(undefined8 *)(lVar8 + 0x1b30) = uVar4;
  *(undefined4 *)(lVar8 + 0x1b40) = *(undefined4 *)(lVar3 + 0x2e8);
  *(undefined8 *)(lVar8 + 7000) = *(undefined8 *)(lVar3 + 0x300);
  uVar4 = *(undefined8 *)(lVar3 + 0x2f8);
  *(undefined8 *)(lVar8 + 0x1b48) = *(undefined8 *)(lVar3 + 0x2f0);
  *(undefined8 *)(lVar8 + 0x1b50) = uVar4;
  *(undefined4 *)(lVar8 + 0x1b60) = *(undefined4 *)(lVar3 + 0x308);
  uVar4 = *(undefined8 *)(lVar3 + 0x318);
  *(undefined8 *)(lVar8 + 0x1b68) = *(undefined8 *)(lVar3 + 0x310);
  *(undefined8 *)(lVar8 + 0x1b70) = uVar4;
  *(undefined8 *)(lVar8 + 0x1b78) = *(undefined8 *)(lVar3 + 800);
  *(undefined4 *)(lVar8 + 0x1b80) = *(undefined4 *)(lVar3 + 0x328);
  *(undefined4 *)(lVar8 + 0x1b84) = *(undefined4 *)(lVar3 + 0x32c);
  *(undefined4 *)(lVar8 + 0x1b88) = *(undefined4 *)(lVar3 + 0x330);
  *(undefined4 *)(lVar8 + 0x1b8c) = *(undefined4 *)(lVar3 + 0x334);
  *(undefined4 *)(lVar8 + 0x1b90) = *(undefined4 *)(lVar3 + 0x338);
  *(undefined4 *)(lVar8 + 0x1b94) = *(undefined4 *)(lVar3 + 0x33c);
  *(undefined8 *)(lVar8 + 0x1ba8) = *(undefined8 *)(lVar3 + 0x350);
  uVar4 = *(undefined8 *)(lVar3 + 0x348);
  *(undefined8 *)(lVar8 + 0x1b98) = *(undefined8 *)(lVar3 + 0x340);
  *(undefined8 *)(lVar8 + 0x1ba0) = uVar4;
  *(undefined4 *)(lVar8 + 0x1bb0) = *(undefined4 *)(lVar3 + 0x358);
  bVar5 = *(byte *)(lVar3 + 0x35c) & 1;
  bVar1 = *(byte *)(lVar8 + 0x1bb4);
  *(byte *)(lVar8 + 0x1bb4) = bVar1 & 0xfe | bVar5;
  *(byte *)(lVar8 + 0x1bb4) = bVar1 & 0xfc | bVar5 | *(byte *)(lVar3 + 0x35c) & 2;
  *(byte *)(lVar8 + 0x1a7c) = *(byte *)(lVar8 + 0x1a7c) & 0xfe | *(byte *)(lVar3 + 0x228) & 1;
  *(undefined4 *)(lVar8 + 0x1bc8) = *(undefined4 *)(lVar3 + 0x360);
  *(undefined4 *)(lVar8 + 0x1bcc) = *(undefined4 *)(lVar3 + 0x364);
  *(undefined4 *)(lVar8 + 0x1bd0) = *(undefined4 *)(lVar3 + 0x368);
  FUN_140c99888(lVar8);
  return;
}



// FUNCTION 140c99494 FUN_140c99494 body=79 status=ok
// SIG undefined FUN_140c99494(void)

undefined8 * FUN_140c99494(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140c99534(param_1,iVar1);
      FUN_140c994e3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140c994e3 FUN_140c994e3 body=80 status=ok
// SIG undefined FUN_140c994e3(void)

void FUN_140c994e3(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 140c99534 FUN_140c99534 body=314 status=ok
// SIG undefined FUN_140c99534(void)

void FUN_140c99534(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c995a2;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140c995a2:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140c9966e FUN_140c9966e body=154 status=ok
// SIG undefined FUN_140c9966e(void)

longlong FUN_140c9966e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140c996d8;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140c996d8:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140c99708(param_1,param_2);
  return param_1;
}



// FUNCTION 140c99708 FUN_140c99708 body=383 status=ok
// SIG undefined FUN_140c99708(void)

longlong * FUN_140c99708(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140fbdc1a(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar8 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar8 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar7,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar10 = 0;
      uVar9 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar5 + lVar10) = *(undefined4 *)(lVar3 + lVar10);
          *(undefined4 *)(lVar5 + 4 + lVar10) = *(undefined4 *)(lVar3 + 4 + lVar10);
        }
        else {
          *(undefined1 *)(lVar5 + lVar10) = *(undefined1 *)(lVar3 + lVar10);
          lVar4 = *(longlong *)(lVar3 + 8 + lVar10);
          *(longlong *)(lVar5 + 8 + lVar10) = lVar4;
          if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar5 + 0x10 + lVar10) = *(undefined8 *)(lVar3 + 0x10 + lVar10);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x18;
      } while (uVar1 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 140c99888 FUN_140c99888 body=12748 status=ok
// SIG undefined FUN_140c99888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c99888(double param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  byte bVar17;
  uint uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  ulonglong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar81;
  double dVar82;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar83;
  double dVar84;
  double dVar86;
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  double dVar93;
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auStack_408 [32];
  ulonglong local_3e8;
  undefined1 local_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [24];
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lVar13 = FUN_1447210f0();
  if (lVar13 == 0) {
    if ((local_f0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_140c9d6ae(param_1,2);
  local_298 = param_1;
  lVar13 = FUN_140c9d898(param_1);
  plVar16 = *(longlong **)((longlong)param_1 + 0x1bf0);
  if (lVar13 == 0) {
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x420))(plVar16,0);
      *(undefined8 *)((longlong)param_1 + 0x1bf0) = 0;
    }
  }
  else {
    if ((plVar16 == (longlong *)0x0) || ((*(uint *)(plVar16 + 1) >> 0x1e & 1) != 0)) {
      FUN_1446f470e(&local_2b0,L"InstTopMesh",1);
      plVar16 = (longlong *)FUN_143cd9ac2(&local_298,local_2b0);
      if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(plVar16);
      }
      *(longlong **)((longlong)param_1 + 0x1bf0) = plVar16;
    }
    if ((*(longlong *)((longlong)param_1 + 0x1bd8) != 0) &&
       (*(longlong *)((longlong)param_1 + 0x1bd8) == plVar16[0x24])) {
      *(byte *)((longlong)plVar16 + 0x1f9) = *(byte *)((longlong)plVar16 + 0x1f9) & 0xdf;
      (**(code **)(**(longlong **)((longlong)param_1 + 0x1bf0) + 0x490))
                (*(longlong **)((longlong)param_1 + 0x1bf0),
                 *(undefined8 *)((longlong)param_1 + 0x1c8),&DAT_14cadad90,0);
      plVar16 = *(longlong **)((longlong)param_1 + 0x1bf0);
    }
    uVar14 = FUN_140c9d898(param_1);
    (**(code **)(*plVar16 + 0xa78))(plVar16,uVar14);
    FUN_140c99494(*(longlong *)((longlong)param_1 + 0x1bf0) + 0x620,(longlong)param_1 + 0x1af0);
    cVar9 = FUN_140c9cac8(*(undefined8 *)((longlong)param_1 + 0x1bf0));
    auVar36 = local_398._0_16_;
    if (cVar9 != '\0') {
      plVar16 = *(longlong **)((longlong)param_1 + 0x1bf0);
      fVar28 = 0.0;
      if ((*(byte *)((longlong)param_1 + 0x1a7c) & 1) != 0) {
        fVar28 = (float)*(int *)((longlong)param_1 + 0x1bbc) *
                 *(float *)((longlong)param_1 + 0x1b20) + 0.0;
      }
      local_3d8._8_8_ = DAT_14c8464c8;
      local_3d8._0_8_ = DAT_14c8464c0;
      dVar82 = *(double *)((longlong)param_1 + 0x1b48);
      dVar34 = *(double *)((longlong)param_1 + 0x1b50);
      dVar78 = *(double *)((longlong)param_1 + 7000);
      auVar48._8_8_ = 0;
      auVar48._0_8_ = (double)*(float *)((longlong)param_1 + 0x1b60);
      auVar48 = divpd(auVar48 << 0x40,_DAT_1499387d0);
      auVar48 = roundpd(auVar48,auVar48,3);
      auVar54 = roundpd(local_3d8,ZEXT816(0),3);
      dVar84 = (0.0 - auVar48._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar86 = ((double)*(float *)((longlong)param_1 + 0x1b60) - auVar48._8_8_ * DAT_1499387d0._8_8_
               ) * 0.008726646259971648;
      dVar77 = (0.0 - auVar54._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar81 = (0.0 - auVar54._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      local_398._4_4_ = DAT_14c8464d0._4_4_;
      local_398._0_4_ = (undefined4)DAT_14c8464d0;
      local_398._8_8_ = auVar36._8_8_;
      dVar31 = sin(dVar84);
      dVar32 = sin(dVar86);
      dVar33 = sin(dVar77);
      sin(dVar81);
      dVar84 = cos(dVar84);
      dVar86 = cos(dVar86);
      dVar77 = cos(dVar77);
      cos(dVar81);
      local_168._0_8_ = -(dVar86 * dVar31 * dVar33) + dVar32 * dVar84 * dVar77;
      local_168._8_8_ = dVar32 * dVar31 * dVar33 + dVar86 * dVar84 * dVar77;
      local_178._0_8_ = dVar31 * dVar32 * dVar77 - dVar84 * dVar86 * dVar33;
      local_178._8_8_ = -(dVar31 * dVar86 * dVar77) - dVar84 * dVar32 * dVar33;
      local_1e8._0_8_ = (double)fVar28 + dVar78;
      local_3e0 = 0;
      local_3e8 = 0;
      local_1f8 = dVar82 + 0.0;
      dStack_1f0 = dVar34 + 0.0;
      FUN_144927ad4(plVar16,&local_1f8,local_178,0);
      local_178 = local_3d8;
      local_168._0_8_ = local_398._0_8_;
      if (*(code **)(*plVar16 + 0x478) == FUN_14028a216) {
        FUN_14028a216(plVar16);
      }
      else {
        (**(code **)(*plVar16 + 0x478))(plVar16,local_178);
      }
    }
    (**(code **)(**(longlong **)((longlong)param_1 + 0x1bf0) + 0x938))
              (*(longlong **)((longlong)param_1 + 0x1bf0),2,0);
    *(byte *)(*(longlong *)((longlong)param_1 + 0x1bf0) + 0x2d2) =
         *(byte *)(*(longlong *)((longlong)param_1 + 0x1bf0) + 0x2d2) & 0xf7 |
         (*(byte *)((longlong)param_1 + 0x1b04) & 1) << 3;
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x1bf0) + 0x2c4) =
         *(undefined4 *)((longlong)param_1 + 0x1b00);
  }
  if (((*(byte *)((longlong)param_1 + 0x1bc4) & 2) == 0) &&
     (((*(longlong *)((longlong)param_1 + 0x1a68) != 0 &&
       (*(longlong *)(*(longlong *)((longlong)param_1 + 0x1a68) + 0xd0) != 0)) ||
      (*(longlong *)((longlong)param_1 + 0x1b08) != 0)))) {
    plVar16 = *(longlong **)((longlong)param_1 + 0x1bf8);
    if ((plVar16 == (longlong *)0x0) || ((*(uint *)(plVar16 + 1) >> 0x1e & 1) != 0)) {
      FUN_1446f470e(&local_2c8,L"InstBottomMesh",1);
      plVar16 = (longlong *)FUN_143cd9ac2(&local_298,local_2c8);
      if ((plVar16 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(plVar16);
      }
      *(longlong **)((longlong)param_1 + 0x1bf8) = plVar16;
    }
    if ((*(longlong *)((longlong)param_1 + 0x1bd8) != 0) &&
       (*(longlong *)((longlong)param_1 + 0x1bd8) == plVar16[0x24])) {
      *(byte *)((longlong)plVar16 + 0x1f9) = *(byte *)((longlong)plVar16 + 0x1f9) & 0xdf;
      (**(code **)(**(longlong **)((longlong)param_1 + 0x1bf8) + 0x490))
                (*(longlong **)((longlong)param_1 + 0x1bf8),
                 *(undefined8 *)((longlong)param_1 + 0x1c8),&DAT_14cadad90,0);
      plVar16 = *(longlong **)((longlong)param_1 + 0x1bf8);
    }
    if ((*(byte *)((longlong)param_1 + 0x1bc4) & 2) == 0) {
      if ((*(longlong *)((longlong)param_1 + 0x1a68) == 0) ||
         (lVar13 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x1a68) + 0xd0), lVar13 == 0)) {
        lVar13 = *(longlong *)((longlong)param_1 + 0x1b08);
      }
    }
    else {
      lVar13 = 0;
    }
    (**(code **)(*plVar16 + 0xa78))(plVar16,lVar13);
    FUN_140c99494(*(longlong *)((longlong)param_1 + 0x1bf8) + 0x620,(longlong)param_1 + 0x1b10);
    cVar9 = FUN_140c9cac8(*(undefined8 *)((longlong)param_1 + 0x1bf8));
    if (cVar9 != '\0') {
      uVar14 = *(undefined8 *)((longlong)param_1 + 0x1bf8);
      fVar28 = *(float *)((longlong)param_1 + 0x1b80);
      fVar29 = (float)FUN_140c9d7f4(param_1);
      puVar20 = &DAT_14c846480;
      puVar23 = (undefined8 *)local_178;
      for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar23 = *puVar20;
        puVar20 = puVar20 + 1;
        puVar23 = puVar23 + 1;
      }
      local_158 = *(double *)((longlong)param_1 + 0x1b68) + 0.0;
      dStack_150 = *(double *)((longlong)param_1 + 0x1b70) + 0.0;
      local_148 = *(double *)((longlong)param_1 + 0x1b78) - (double)fVar29;
      uStack_140 = 0;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = (double)fVar28;
      local_278 = auVar36 << 0x40;
      local_268 = 0.0;
      FUN_144a7484c(local_278,&local_1f8);
      local_178._8_8_ = dStack_1f0;
      local_178._0_8_ = local_1f8;
      local_168 = local_1e8;
      local_3e8 = local_3e8 & 0xffffffffffffff00;
      FUN_144927a08(uVar14,local_178,0,0);
    }
    *(byte *)(*(longlong *)((longlong)param_1 + 0x1bf8) + 0x2d2) =
         *(byte *)(*(longlong *)((longlong)param_1 + 0x1bf8) + 0x2d2) & 0xf7 |
         (*(byte *)((longlong)param_1 + 0x1b04) & 1) << 3;
    *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x1bf8) + 0x2c4) =
         *(undefined4 *)((longlong)param_1 + 0x1b00);
  }
  else {
    plVar16 = *(longlong **)((longlong)param_1 + 0x1bf8);
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x420))(plVar16,0);
      *(undefined8 *)((longlong)param_1 + 0x1bf8) = 0;
    }
  }
  plVar16 = *(longlong **)((longlong)param_1 + 0x1bd8);
  if (plVar16 != (longlong *)0x0) {
    if ((*(longlong *)((longlong)param_1 + 0x1a68) == 0) ||
       (lVar13 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x1a68) + 0x30), lVar13 == 0)) {
      lVar13 = *(longlong *)((longlong)param_1 + 0x1a80);
    }
    (**(code **)(*plVar16 + 0xa78))(plVar16,lVar13);
    FUN_140c99494(*(longlong *)((longlong)param_1 + 0x1bd8) + 0x620,(longlong)param_1 + 0x1a88);
    cVar9 = FUN_140c9cac8(*(undefined8 *)((longlong)param_1 + 0x1bd8));
    if (cVar9 != '\0') {
      plVar16 = *(longlong **)((longlong)param_1 + 0x1bd8);
      local_178._0_8_ = DAT_14c846480;
      local_178._8_8_ = DAT_14c846488;
      local_168._0_8_ = DAT_14c846490;
      local_168._8_8_ = DAT_14c846498;
      local_1f8 = DAT_14c8464a0;
      dStack_1f0 = DAT_14c8464a8;
      local_1e8._0_8_ = DAT_14c8464b0;
      local_3e0 = 0;
      local_3e8 = 0;
      FUN_144927ad4(plVar16,&local_1f8,local_178,0);
      local_178._8_8_ = DAT_14c8464c8;
      local_178._0_8_ = DAT_14c8464c0;
      local_168._4_4_ = DAT_14c8464d0._4_4_;
      local_168._0_4_ = (undefined4)DAT_14c8464d0;
      if (*(code **)(*plVar16 + 0x478) == FUN_14028a216) {
        FUN_14028a216(plVar16);
      }
      else {
        (**(code **)(*plVar16 + 0x478))(plVar16,local_178);
      }
    }
    auVar54._0_8_ = (**(code **)(**(longlong **)((longlong)param_1 + 0x1bd8) + 0xb80))();
    auVar54._8_8_ = extraout_XMM0_Qb;
    if (*(longlong **)((longlong)param_1 + 0x1bf0) != (longlong *)0x0) {
      auVar54._0_8_ = (**(code **)(**(longlong **)((longlong)param_1 + 0x1bf0) + 0xb80))();
      auVar54._8_8_ = extraout_XMM0_Qb_00;
    }
    if (*(longlong **)((longlong)param_1 + 0x1bf8) != (longlong *)0x0) {
      auVar54._0_8_ = (**(code **)(**(longlong **)((longlong)param_1 + 0x1bf8) + 0xb80))();
      auVar54._8_8_ = extraout_XMM0_Qb_01;
    }
    if (0 < *(int *)((longlong)param_1 + 0x1bc0)) {
      local_398._0_16_ = roundpd(auVar54,ZEXT816(0),3);
      dVar78 = (local_398._0_8_ * -360.0 + 0.0) * 0.008726646259971648;
      dVar82 = (local_398._8_8_ * -360.0 + 0.0) * 0.008726646259971648;
      iVar21 = 0;
      do {
        auVar35._0_8_ = (double)((float)iVar21 * *(float *)((longlong)param_1 + 0x1b24));
        auVar35._8_8_ = 0;
        local_3d8 = auVar35;
        if (0 < *(int *)((longlong)param_1 + 0x1bbc)) {
          iVar24 = 0;
          do {
            if ((*(byte *)((longlong)param_1 + 0x1a7c) & 1) == 0) {
              fVar28 = -*(float *)((longlong)param_1 + 0x1b20) * (float)(iVar24 + 1);
            }
            else {
              fVar28 = *(float *)((longlong)param_1 + 0x1b20) * (float)iVar24;
            }
            iVar24 = iVar24 + 1;
            fVar29 = *(float *)((longlong)param_1 + 0x1b40);
            puVar20 = &DAT_14c846480;
            puVar23 = (undefined8 *)local_178;
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *puVar23 = *puVar20;
              puVar20 = puVar20 + 1;
              puVar23 = puVar23 + 1;
            }
            local_148 = (double)fVar28 + *(double *)((longlong)param_1 + 0x1b38);
            local_158 = *(double *)((longlong)param_1 + 0x1b28) + 0.0;
            dStack_150 = *(double *)((longlong)param_1 + 0x1b30) + auVar35._0_8_;
            uStack_140 = 0;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (double)fVar29;
            auVar36 = divpd(auVar6 << 0x40,_DAT_1499387d0);
            auVar36 = roundpd(auVar36,auVar36,3);
            dVar33 = (0.0 - auVar36._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar84 = ((double)fVar29 - auVar36._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar34 = sin(dVar33);
            dVar31 = sin(dVar84);
            dVar32 = sin(dVar78);
            sin(dVar82);
            dVar33 = cos(dVar33);
            dVar84 = cos(dVar84);
            dVar86 = cos(dVar78);
            cos(dVar82);
            local_178._8_8_ = -(dVar34 * dVar84 * dVar86) - dVar33 * dVar31 * dVar32;
            local_178._0_8_ = dVar34 * dVar31 * dVar86 - dVar33 * dVar84 * dVar32;
            local_168._8_8_ = dVar31 * dVar34 * dVar32 + dVar84 * dVar33 * dVar86;
            local_168._0_8_ = -(dVar84 * dVar34 * dVar32) + dVar31 * dVar33 * dVar86;
            (**(code **)(**(longlong **)((longlong)param_1 + 0x1bd8) + 0xaf8))
                      (*(longlong **)((longlong)param_1 + 0x1bd8),local_178,0);
          } while (iVar24 < *(int *)((longlong)param_1 + 0x1bbc));
        }
        if (*(longlong *)((longlong)param_1 + 0x1bf0) != 0) {
          fVar28 = *(float *)((longlong)param_1 + 0x1b40);
          puVar20 = &DAT_14c846480;
          puVar23 = (undefined8 *)local_178;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar23 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar23 = puVar23 + 1;
          }
          local_158 = *(double *)((longlong)param_1 + 0x1b28) + 0.0;
          dStack_150 = *(double *)((longlong)param_1 + 0x1b30) + (double)local_3d8._0_8_;
          local_148 = *(double *)((longlong)param_1 + 0x1b38) + 0.0;
          uStack_140 = 0;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (double)fVar28;
          auVar36 = divpd(auVar7 << 0x40,_DAT_1499387d0);
          auVar36 = roundpd(auVar36,auVar36,3);
          dVar86 = (0.0 - auVar36._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar77 = ((double)fVar28 - auVar36._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar34 = (0.0 - (double)local_398._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          dVar31 = (0.0 - (double)local_398._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar32 = sin(dVar86);
          dVar33 = sin(dVar77);
          dVar84 = sin(dVar34);
          sin(dVar31);
          dVar86 = cos(dVar86);
          dVar77 = cos(dVar77);
          dVar34 = cos(dVar34);
          cos(dVar31);
          local_178._8_8_ = -(dVar32 * dVar77 * dVar34) - dVar86 * dVar33 * dVar84;
          local_178._0_8_ = dVar32 * dVar33 * dVar34 - dVar86 * dVar77 * dVar84;
          local_168._8_8_ = dVar33 * dVar32 * dVar84 + dVar77 * dVar86 * dVar34;
          local_168._0_8_ = -(dVar77 * dVar32 * dVar84) + dVar33 * dVar86 * dVar34;
          (**(code **)(**(longlong **)((longlong)param_1 + 0x1bf0) + 0xaf8))
                    (*(longlong **)((longlong)param_1 + 0x1bf0),local_178);
        }
        if (*(longlong *)((longlong)param_1 + 0x1bf8) != 0) {
          fVar28 = *(float *)((longlong)param_1 + 0x1b40);
          puVar20 = &DAT_14c846480;
          puVar23 = (undefined8 *)local_178;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar23 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar23 = puVar23 + 1;
          }
          local_158 = *(double *)((longlong)param_1 + 0x1b28) + 0.0;
          dStack_150 = *(double *)((longlong)param_1 + 0x1b30) + (double)local_3d8._0_8_;
          local_148 = *(double *)((longlong)param_1 + 0x1b38) + 0.0;
          uStack_140 = 0;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (double)fVar28;
          local_278 = auVar8 << 0x40;
          local_268 = 0.0;
          FUN_144a7484c(local_278,&local_1f8);
          local_178._8_8_ = dStack_1f0;
          local_178._0_8_ = local_1f8;
          local_168 = local_1e8;
          (**(code **)(**(longlong **)((longlong)param_1 + 0x1bf8) + 0xaf8))
                    (*(longlong **)((longlong)param_1 + 0x1bf8),local_178);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < *(int *)((longlong)param_1 + 0x1bc0));
    }
  }
  uVar18 = 1;
  if (((*(byte *)((longlong)param_1 + 0x1bb4) & 1) != 0) &&
     (1e-08 < ABS(*(float *)((longlong)param_1 + 0x1bc8)))) {
    uVar18 = 1;
    if (1 < (int)*(uint *)((longlong)param_1 + 0x1bd0)) {
      uVar18 = *(uint *)((longlong)param_1 + 0x1bd0);
    }
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x1c08);
  uVar15 = (ulonglong)(int)uVar1;
  if (uVar1 == uVar18) {
    bVar26 = *(uint *)((longlong)param_1 + 0x1c18) != uVar18;
    plVar16 = *(longlong **)((longlong)param_1 + 0x1c00);
    uVar15 = (ulonglong)uVar18;
  }
  else {
    bVar26 = true;
    if (uVar1 == 0) goto LAB_140c9a21c;
    plVar16 = *(longlong **)((longlong)param_1 + 0x1c00);
  }
  plVar19 = plVar16 + uVar15;
  bVar10 = DAT_14c950c29;
  do {
    lVar13 = *plVar16;
    if (((bVar10 & 1) == 0) || (lVar13 == 0)) {
      if (lVar13 != 0) goto LAB_140c9a207;
      bVar17 = 1;
    }
    else {
      FUN_1456cec3c(lVar13);
      bVar10 = DAT_14c950c29;
LAB_140c9a207:
      bVar17 = (byte)((uint)*(undefined4 *)(lVar13 + 8) >> 0x1e) & 1;
    }
    bVar26 = (bool)(bVar26 | bVar17);
    plVar16 = plVar16 + 1;
  } while (plVar16 != plVar19);
LAB_140c9a21c:
  iVar21 = *(int *)((longlong)param_1 + 0x1c18);
  if ((longlong)iVar21 != 0) {
    lVar13 = *(longlong *)((longlong)param_1 + 0x1c10);
    lVar25 = 0;
    bVar10 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(lVar13 + lVar25);
      if ((lVar2 != 0 & bVar10) == 1) {
        FUN_1456cec3c(lVar2);
        bVar10 = DAT_14c950c29;
LAB_140c9a25a:
        bVar17 = (byte)((uint)*(undefined4 *)(lVar2 + 8) >> 0x1e) & 1;
      }
      else {
        if (lVar2 != 0) goto LAB_140c9a25a;
        bVar17 = 1;
      }
      bVar26 = (bool)(bVar26 | bVar17);
      lVar25 = lVar25 + 8;
    } while ((longlong)iVar21 * 8 != lVar25);
  }
  if (bVar26 == false) {
    iVar21 = *(int *)((longlong)param_1 + 0x1c08);
    if ((longlong)iVar21 != 0) {
      lVar13 = *(longlong *)((longlong)param_1 + 0x1c00);
      lVar25 = 0;
      do {
        lVar2 = *(longlong *)(lVar13 + lVar25);
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        FUN_140c9cb5c(param_1,lVar2);
        lVar25 = lVar25 + 8;
      } while ((longlong)iVar21 * 8 != lVar25);
    }
    iVar21 = *(int *)((longlong)param_1 + 0x1c18);
    if ((longlong)iVar21 != 0) {
      lVar13 = *(longlong *)((longlong)param_1 + 0x1c10);
      lVar25 = 0;
      do {
        lVar2 = *(longlong *)(lVar13 + lVar25);
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        FUN_140c9cb5c(param_1,lVar2);
        lVar25 = lVar25 + 8;
      } while ((longlong)iVar21 * 8 != lVar25);
    }
  }
  else {
    FUN_148807942(param_1);
    do {
      FUN_148807a6c(param_1);
      FUN_148807baa(param_1);
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  dVar78 = 0.0;
  if ((*(byte *)((longlong)param_1 + 0x1a7c) & 1) != 0) {
    dVar78 = (double)((float)*(int *)((longlong)param_1 + 0x1bbc) *
                      *(float *)((longlong)param_1 + 0x1b20) + 0.0);
  }
  fVar28 = *(float *)((longlong)param_1 + 0x1b24);
  fVar29 = (float)FUN_140c9d7f4(param_1);
  if ((*(byte *)((longlong)param_1 + 0x1bb4) & 1) == 0) {
    fVar30 = *(float *)((longlong)param_1 + 0x1b88) * 0.5;
    fVar28 = -fVar30;
    dVar82 = (double)fVar30;
    bVar26 = true;
  }
  else {
    dVar82 = (double)(fVar28 * 0.5);
    if (1 < *(int *)((longlong)param_1 + 0x1bc0)) {
      dVar82 = dVar82 + (double)((float)(*(int *)((longlong)param_1 + 0x1bc0) + -1) *
                                *(float *)((longlong)param_1 + 0x1b24));
    }
    if (1e-08 < ABS(*(float *)((longlong)param_1 + 0x1bc8))) {
      fVar28 = (float)FUN_148804a08(param_1);
      dVar82 = (double)fVar28;
      fVar28 = -fVar28;
      bVar26 = (*(byte *)((longlong)param_1 + 0x1bb4) & 1) == 0;
    }
    else {
      fVar28 = fVar28 * -0.5;
      bVar26 = false;
    }
  }
  dVar34 = (double)fVar28 + *(double *)((longlong)param_1 + 0x1ba0);
  dVar82 = dVar82 + *(double *)((longlong)param_1 + 0x1ba0);
  local_348 = (double)*(float *)((longlong)param_1 + 0x1b8c) +
              dVar78 + *(double *)((longlong)param_1 + 0x1ba8);
  local_340 = (*(double *)((longlong)param_1 + 0x1ba8) - (double)fVar29) -
              (double)*(float *)((longlong)param_1 + 0x1b90);
  uVar15 = 1;
  if ((!bVar26) && (1e-08 < ABS(*(float *)((longlong)param_1 + 0x1bc8)))) {
    uVar15 = 1;
    if (1 < (int)*(uint *)((longlong)param_1 + 0x1bd0)) {
      uVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0x1bd0);
    }
  }
  local_398._0_8_ = *(double *)((longlong)param_1 + 0x1b98) + 0.0;
  local_380 = (double)*(float *)((longlong)param_1 + 0x1b84) +
              *(double *)((longlong)param_1 + 0x1b98);
  local_378 = (local_348 - local_340) * 0.5;
  local_370 = (dVar82 - dVar34) * 0.5;
  local_3d8._0_8_ = (dVar82 + dVar34) * 0.5;
  uVar22 = 0;
  local_3d8._8_8_ = 0;
  dVar78 = (double)local_3d8._0_8_;
  do {
    auVar71._8_8_ = DAT_14c846488;
    auVar71._0_8_ = DAT_14c846480;
    auVar80._8_8_ = (double)DAT_14c846498;
    auVar80._0_8_ = (double)DAT_14c846490;
    auVar79._8_8_ = DAT_14c8464c8;
    auVar79._0_8_ = DAT_14c8464c0;
    local_3c8 = DAT_14c8464a0;
    dStack_3c0 = DAT_14c8464a8;
    local_3b8 = DAT_14c8464b0;
    dStack_3b0 = DAT_14c8464b8;
    uVar12 = (undefined4)DAT_14c8464d0;
    uVar90 = DAT_14c8464d0._4_4_;
    uVar91 = uRam000000014c8464d8;
    uVar92 = uRam000000014c8464dc;
    if ((((*(byte *)((longlong)param_1 + 0x1bb4) & 1) != 0) &&
        (1e-08 < ABS(*(float *)((longlong)param_1 + 0x1bc8)))) &&
       (iVar21 = *(int *)((longlong)param_1 + 0x1bd0), 1 < iVar21)) {
      fVar29 = (float)FUN_148804a08(param_1);
      fVar28 = *(float *)((longlong)param_1 + 0x1bc8);
      local_3a8._4_4_ = 0x80000000;
      local_3a8._0_4_ = -fVar28;
      local_3a8._8_4_ = 0x80000000;
      local_3a8._12_4_ = 0x80000000;
      if ((*(byte *)((longlong)param_1 + 0x1bb4) & 1) == 0) {
        fVar30 = 1.0;
      }
      else {
        fVar30 = (float)(~-(uint)(1e-08 < ABS(fVar28)) & 0x3f800000 |
                        *(uint *)(&DAT_149e1eeb0 + (ulonglong)(fVar28 < -fVar28) * 4) &
                        -(uint)(1e-08 < ABS(fVar28)));
      }
      fVar83 = 1.0 / (float)iVar21;
      dVar78 = (double)-fVar29;
      local_2a8 = (double)(fVar83 * -0.5 * fVar28);
      puVar20 = &local_2b0;
      local_2b0 = 0;
      local_2a0 = 0;
      uVar12 = FUN_144a7484c(puVar20,local_178);
      auVar36 = _DAT_149934d80;
      auVar48 = minpd(_DAT_149934d80,_DAT_149934d80);
      auVar54 = minpd(ZEXT816(0x3ff0000000000000),ZEXT816(0x3ff0000000000000));
      auVar42._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
      auVar42._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
      uVar18 = movmskpd(uVar12,auVar42);
      auVar50._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
      iVar21 = movmskpd((int)puVar20,auVar50);
      uVar18 = iVar21 << 2 | uVar18;
      local_3c8 = (double)CONCAT44(local_3c8._4_4_,uVar18);
      if (uVar18 == 0) {
        dVar82 = (double)local_168._0_8_ * 0.0 * -1.0 +
                 (double)local_178._8_8_ * 0.0 +
                 (double)local_178._0_8_ * 1.0 * 1.0 + (double)local_168._8_8_ * 0.0;
        dVar34 = (double)local_168._0_8_ * 0.0 * 1.0 +
                 (double)local_178._8_8_ * 1.0 +
                 (double)local_178._0_8_ * 0.0 * -1.0 + (double)local_168._8_8_ * 0.0;
        dVar31 = (double)local_168._0_8_ * 1.0 * 1.0 +
                 (((double)local_178._0_8_ * 0.0 * 1.0 + (double)local_168._8_8_ * 0.0) -
                 (double)local_178._8_8_ * 0.0);
        dVar33 = (double)local_168._0_8_ * 0.0 * -1.0 +
                 (((double)local_178._0_8_ * 0.0 * -1.0 + (double)local_168._8_8_ * 1.0) -
                 (double)local_178._8_8_ * 0.0);
        dVar86 = dVar78 * (double)local_178._0_8_ - (double)local_178._8_8_ * 0.0;
        dVar77 = (double)local_178._8_8_ * 0.0 - dVar78 * (double)local_168._0_8_;
        dVar89 = (double)local_168._0_8_ * 0.0 - (double)local_178._0_8_ * 0.0;
        dVar76 = (double)local_168._8_8_ * 0.0 - (double)local_168._8_8_ * 0.0;
        dVar77 = dVar77 + dVar77;
        dVar89 = dVar89 + dVar89;
        dVar86 = dVar86 + dVar86;
        dVar76 = dVar76 + dVar76;
        dVar74 = dVar82 * 0.0;
        dVar75 = dVar34 * 0.0;
        dVar32 = dVar31 * 0.0;
        dVar84 = dVar33 * 0.0;
        dVar72 = dVar84 * 1.0;
        dVar73 = dVar32 * -1.0;
        dVar81 = (dVar86 * (double)local_178._8_8_ - (double)local_168._0_8_ * dVar89) +
                 (double)local_168._8_8_ * dVar77 + 0.0 + 0.0;
        dVar67 = (dVar77 * (double)local_168._0_8_ - dVar86 * (double)local_178._0_8_) +
                 (double)local_168._8_8_ * dVar89 + dVar78 + 0.0;
        dVar93 = dVar75 * -1.0 + dVar82 + dVar72 + dVar32;
        dVar94 = dVar74 * 1.0 + dVar34 + dVar73 + dVar84;
        auVar87._0_8_ = ((dVar75 * 1.0 + dVar31) - dVar74) + dVar72;
        auVar87._8_8_ = ((dVar74 * -1.0 + dVar33) - dVar75) + dVar73;
        dVar84 = ((dVar89 * (double)local_178._0_8_ - (double)local_178._8_8_ * dVar77) +
                 (double)local_168._8_8_ * dVar86 + 0.0) * 1.0;
        dVar86 = ((dVar76 * (double)local_168._8_8_ - dVar76 * (double)local_168._8_8_) +
                 (double)local_168._8_8_ * dVar76 + 0.0) * 0.0;
        dVar34 = dVar67 * 0.0 - dVar81 * 0.0;
        dVar31 = dVar84 * 0.0 - dVar67 * 0.0;
        dVar32 = dVar81 * 0.0 - dVar84 * 0.0;
        dVar33 = dVar86 * 1.0 - dVar86 * 1.0;
        dVar31 = dVar31 + dVar31;
        dVar32 = dVar32 + dVar32;
        dVar34 = dVar34 + dVar34;
        dVar33 = dVar33 + dVar33;
        dVar78 = (dVar34 * 0.0 - dVar32 * 0.0) + dVar81 + dVar31 +
                 (double)(*(float *)((longlong)param_1 + 0x1bcc) * fVar30);
        dVar82 = (dVar31 * 0.0 - dVar34 * 0.0) + dVar67 + dVar32 + 0.0;
        dVar34 = (dVar32 * 0.0 - dVar31 * 0.0) + dVar84 + dVar34 + 0.0;
        dVar31 = (dVar33 * 1.0 - dVar33 * 1.0) + dVar86 + dVar33 + 0.0;
      }
      else {
        dVar31 = (double)local_178._8_8_ + (double)local_178._8_8_;
        dVar33 = (double)local_168._0_8_ + (double)local_168._0_8_;
        dVar32 = (double)local_178._0_8_ * ((double)local_178._0_8_ + (double)local_178._0_8_);
        dVar82 = (double)DAT_149934d80;
        dVar34 = DAT_149934d80._8_8_;
        local_1f8 = dVar82 - ((double)local_168._0_8_ * dVar33 + (double)local_178._8_8_ * dVar31);
        local_1a8 = 1.0 - (dVar32 + (double)local_178._8_8_ * dVar31);
        dStack_1b0 = ((double)local_178._0_8_ + (double)local_178._0_8_) * (double)local_168._8_8_;
        dStack_1f0 = dVar31 * (double)local_178._0_8_ + dVar33 * (double)local_168._8_8_;
        local_1c8 = dVar33 * (double)local_178._8_8_ + dStack_1b0;
        local_1b8 = dVar31 * (double)local_168._8_8_ + (double)local_178._0_8_ * dVar33;
        dStack_1b0 = dVar33 * (double)local_178._8_8_ - dStack_1b0;
        local_1e8._8_8_ = 0;
        local_1e8._0_8_ = (double)local_178._0_8_ * dVar33 - dVar31 * (double)local_168._8_8_;
        local_1d8._8_8_ = dVar34 - ((double)local_168._0_8_ * dVar33 + dVar32);
        local_1d8._0_8_ = dVar31 * (double)local_178._0_8_ - dVar33 * (double)local_168._8_8_;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = 0.0;
        dStack_190 = 0.0;
        auVar54 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_278 = ZEXT816(0x3ff0000000000000);
        local_268 = 0.0;
        uStack_260 = 0;
        local_248 = 0.0;
        uStack_240 = 0;
        local_238 = ZEXT816(0);
        local_228 = 1.0;
        uStack_220 = 0;
        local_218._0_8_ = 0;
        local_258 = auVar54;
        local_208 = auVar54;
        local_188 = auVar54;
        local_218._8_8_ = dVar78;
        FUN_1447fea8d(local_178,local_278,&local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(&local_298,local_178);
        dVar78 = local_288 * local_288 + local_298 * local_298;
        dVar31 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar64._0_8_ = dVar78 + dVar31;
        auVar64._8_8_ = dVar78 + dVar31;
        auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
        auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
        auVar48 = sqrtpd(auVar64,auVar64);
        auVar48 = divpd(auVar36,auVar48);
        auVar68._0_8_ = auVar48._0_8_ * local_288;
        auVar68._8_8_ = auVar48._8_8_ * dStack_280;
        dVar31 = (double)((ulonglong)(local_298 * auVar48._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_));
        dVar32 = (double)((ulonglong)(dStack_290 * auVar48._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_));
        auVar48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar68,auVar43);
        auVar51._0_12_ = ZEXT812(0);
        auVar51._12_4_ = 0x3ff00000;
        local_198 = (double)(*(float *)((longlong)param_1 + 0x1bcc) * fVar30);
        local_1f8 = 1.0;
        dStack_1f0 = 0.0;
        local_1e8 = ZEXT816(0);
        local_1c8 = 0.0;
        uStack_1c0 = 0;
        local_1b8 = 0.0;
        dStack_1b0 = 0.0;
        local_1a8 = 1.0;
        uStack_1a0 = 0;
        dStack_190 = 0.0;
        dVar86 = dVar32 + dVar32;
        dVar33 = auVar48._0_8_;
        dVar84 = auVar48._8_8_;
        dVar77 = dVar33 + dVar33;
        dVar81 = dVar31 * (dVar31 + dVar31);
        local_228 = 1.0 - (dVar81 + dVar32 * dVar86);
        dVar78 = (dVar31 + dVar31) * dVar84;
        local_248 = dVar77 * dVar32 + dVar78;
        dVar78 = dVar77 * dVar32 - dVar78;
        local_268 = dVar31 * dVar77 - dVar86 * dVar84;
        local_278._8_8_ = dVar86 * dVar31 + dVar77 * dVar84;
        local_278._0_8_ = dVar82 - (dVar33 * dVar77 + dVar32 * dVar86);
        uStack_260 = 0;
        local_258._8_8_ = dVar34 - (dVar33 * dVar77 + dVar81);
        local_258._0_8_ = dVar86 * dVar31 - dVar77 * dVar84;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar78,0);
        local_238._0_8_ = dVar31 * dVar77 + dVar86 * dVar84;
        local_238._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
        uStack_220 = 0;
        local_218._8_8_ = dStack_110;
        local_218._0_8_ = local_118;
        local_208._8_8_ = auVar51._8_8_;
        local_208._0_8_ = local_108;
        local_1d8 = auVar54;
        local_188 = auVar54;
        FUN_1447fea8d(local_178,local_278,&local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(&local_298,local_178);
        auVar52._0_8_ = local_298 * local_298;
        auVar52._8_8_ = dStack_290 * dStack_290;
        dVar78 = local_288 * local_288 + auVar52._0_8_;
        dVar82 = dStack_280 * dStack_280 + auVar52._8_8_;
        auVar57._0_8_ = dVar78 + dVar82;
        auVar57._8_8_ = dVar78 + dVar82;
        auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
        auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
        auVar48 = sqrtpd(auVar52,auVar57);
        auVar36 = divpd(auVar36,auVar48);
        auVar58._0_8_ = auVar36._0_8_ * local_288;
        auVar58._8_8_ = auVar36._8_8_ * dStack_280;
        dVar93 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_));
        dVar94 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_));
        auVar87 = blendvpd(auVar54,auVar58,auVar44);
        dVar31 = 0.0;
        dVar78 = local_118;
        dVar82 = dStack_110;
        dVar34 = local_108;
      }
      local_2c0 = (double)(fVar83 * (float)(int)uVar22 * (float)local_3a8._0_4_);
      local_2c8 = 0;
      local_2b8 = 0;
      FUN_144a7484c(&local_2c8,local_178);
      auVar36 = _DAT_149934d80;
      dVar32 = auVar87._0_8_;
      dVar33 = auVar87._8_8_;
      if (local_3c8._0_4_ == 0) {
        dVar67 = dVar94 * (double)local_168._0_8_ * -1.0 +
                 dVar32 * (double)local_178._8_8_ +
                 dVar33 * (double)local_178._0_8_ * 1.0 + dVar93 * (double)local_168._8_8_;
        dVar72 = dVar93 * (double)local_168._0_8_ * 1.0 +
                 dVar33 * (double)local_178._8_8_ +
                 dVar32 * (double)local_178._0_8_ * -1.0 + dVar94 * (double)local_168._8_8_;
        dVar73 = dVar33 * (double)local_168._0_8_ * 1.0 +
                 (((double)local_178._0_8_ * dVar94 * 1.0 + dVar32 * (double)local_168._8_8_) -
                 (double)local_178._8_8_ * dVar93);
        dVar75 = dVar32 * (double)local_168._0_8_ * -1.0 +
                 (((double)local_178._0_8_ * dVar93 * -1.0 + dVar33 * (double)local_168._8_8_) -
                 (double)local_178._8_8_ * dVar94);
        dVar34 = dVar34 * 1.0;
        dVar31 = dVar31 * 0.0;
        dVar32 = dVar82 * (double)local_178._0_8_ - dVar78 * (double)local_178._8_8_;
        dVar84 = dVar34 * (double)local_178._8_8_ - dVar82 * (double)local_168._0_8_;
        dVar77 = dVar78 * (double)local_168._0_8_ - dVar34 * (double)local_178._0_8_;
        dVar93 = dVar31 * (double)local_168._8_8_ - dVar31 * (double)local_168._8_8_;
        dVar84 = dVar84 + dVar84;
        dVar77 = dVar77 + dVar77;
        dVar32 = dVar32 + dVar32;
        dVar93 = dVar93 + dVar93;
        dVar81 = (dVar32 * (double)local_178._8_8_ - (double)local_168._0_8_ * dVar77) +
                 (double)local_168._8_8_ * dVar84 + dVar78 + 0.0;
        dVar89 = (dVar84 * (double)local_168._0_8_ - dVar32 * (double)local_178._0_8_) +
                 (double)local_168._8_8_ * dVar77 + dVar82 + 0.0;
        dVar78 = dVar67 * 0.0;
        dVar82 = dVar72 * 0.0;
        dVar74 = dVar73 * 0.0;
        dVar76 = dVar75 * 0.0;
        dVar33 = dVar76 * 1.0;
        dVar86 = dVar74 * -1.0;
        dVar74 = dVar82 * -1.0 + dVar67 + dVar33 + dVar74;
        dVar76 = dVar78 * 1.0 + dVar72 + dVar86 + dVar76;
        dVar33 = ((dVar82 * 1.0 + dVar73) - dVar78) + dVar33;
        dVar86 = ((dVar78 * -1.0 + dVar75) - dVar82) + dVar86;
        dVar72 = ((dVar77 * (double)local_178._0_8_ - (double)local_178._8_8_ * dVar84) +
                  (double)local_168._8_8_ * dVar32 + dVar34 + 0.0) * 1.0;
        dVar73 = ((dVar93 * (double)local_168._8_8_ - dVar93 * (double)local_168._8_8_) +
                  (double)local_168._8_8_ * dVar93 + dVar31 + 0.0) * 0.0;
        dVar34 = dVar89 * 0.0 - dVar81 * 0.0;
        dVar31 = dVar72 * 0.0 - dVar89 * 0.0;
        dVar32 = dVar81 * 0.0 - dVar72 * 0.0;
        dVar77 = dVar73 * 1.0 - dVar73 * 1.0;
        dVar31 = dVar31 + dVar31;
        dVar32 = dVar32 + dVar32;
        dVar34 = dVar34 + dVar34;
        dVar77 = dVar77 + dVar77;
        dVar67 = (dVar34 * 0.0 - dVar32 * 0.0) + dVar81 + dVar31 +
                 (double)(-fVar30 * *(float *)((longlong)param_1 + 0x1bcc));
        dVar89 = (dVar31 * 0.0 - dVar34 * 0.0) + dVar89 + dVar32 + 0.0;
        dVar78 = dVar74 * 0.0;
        dVar82 = dVar76 * 0.0;
        dVar84 = dVar33 * 0.0;
        dVar81 = dVar86 * 0.0;
        dVar75 = dVar81 * 1.0;
        dVar93 = dVar84 * -1.0;
        dVar84 = dVar82 * -1.0 + dVar74 + dVar75 + dVar84;
        dVar81 = dVar78 * 1.0 + dVar76 + dVar93 + dVar81;
        auVar80._0_8_ = ((dVar82 * 1.0 + dVar33) - dVar78) + dVar75;
        auVar80._8_8_ = ((dVar78 * -1.0 + dVar86) - dVar82) + dVar93;
        dVar78 = ((dVar32 * 0.0 - dVar31 * 0.0) + dVar72 + dVar34 + 0.0) * 1.0;
        dVar82 = ((dVar77 * 1.0 - dVar77 * 1.0) + dVar73 + dVar77 + 0.0) * 0.0;
        dVar34 = dVar89 * 0.0 - dVar67 * 0.0;
        dVar31 = dVar78 * 0.0 - dVar89 * 0.0;
        dVar32 = dVar67 * 0.0 - dVar78 * 0.0;
        dVar33 = dVar82 * 1.0 - dVar82 * 1.0;
        dVar31 = dVar31 + dVar31;
        dVar32 = dVar32 + dVar32;
        dVar34 = dVar34 + dVar34;
        dVar33 = dVar33 + dVar33;
        local_3c8 = (dVar34 * 0.0 - dVar32 * 0.0) + dVar67 + dVar31 + 0.0;
        dStack_3c0 = (dVar31 * 0.0 - dVar34 * 0.0) + dVar89 + dVar32 +
                     (double)(*(float *)((longlong)param_1 + 0x1bcc) * 0.5);
        local_3b8 = (dVar32 * 0.0 - dVar31 * 0.0) + dVar78 + dVar34 + 0.0;
        dStack_3b0 = (dVar33 * 1.0 - dVar33 * 1.0) + dVar82 + dVar33 + 0.0;
      }
      else {
        dVar31 = (double)local_178._8_8_ + (double)local_178._8_8_;
        dVar86 = (double)local_168._0_8_ + (double)local_168._0_8_;
        dVar84 = (double)local_178._0_8_ * ((double)local_178._0_8_ + (double)local_178._0_8_);
        local_1f8 = 1.0 - ((double)local_168._0_8_ * dVar86 + (double)local_178._8_8_ * dVar31);
        local_1a8 = 1.0 - (dVar84 + (double)local_178._8_8_ * dVar31);
        dStack_1b0 = ((double)local_178._0_8_ + (double)local_178._0_8_) * (double)local_168._8_8_;
        dStack_1f0 = dVar31 * (double)local_178._0_8_ + dVar86 * (double)local_168._8_8_;
        local_1c8 = dVar86 * (double)local_178._8_8_ + dStack_1b0;
        local_1b8 = dVar31 * (double)local_168._8_8_ + (double)local_178._0_8_ * dVar86;
        dStack_1b0 = dVar86 * (double)local_178._8_8_ - dStack_1b0;
        local_1e8._8_8_ = 0;
        local_1e8._0_8_ = (double)local_178._0_8_ * dVar86 - dVar31 * (double)local_168._8_8_;
        local_1d8._8_8_ = 1.0 - ((double)local_168._0_8_ * dVar86 + dVar84);
        local_1d8._0_8_ = dVar31 * (double)local_178._0_8_ - dVar86 * (double)local_168._8_8_;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = 0.0;
        dStack_190 = 0.0;
        auVar35 = ZEXT816(0x3ff0000000000000) << 0x40;
        dVar86 = dVar94 + dVar94;
        dVar77 = dVar32 + dVar32;
        dVar81 = dVar93 * (dVar93 + dVar93);
        dVar31 = (double)DAT_149934d80;
        dVar84 = DAT_149934d80._8_8_;
        local_258._8_8_ = dVar84 - (dVar32 * dVar77 + dVar81);
        local_228 = 1.0 - (dVar81 + dVar94 * dVar86);
        local_238._8_8_ = (dVar93 + dVar93) * dVar33;
        local_248 = dVar77 * dVar94 + (double)local_238._8_8_;
        local_238._0_8_ = dVar86 * dVar33 + dVar93 * dVar77;
        local_258._0_8_ = dVar86 * dVar93 - dVar77 * dVar33;
        local_238._8_8_ = dVar77 * dVar94 - (double)local_238._8_8_;
        local_268 = dVar93 * dVar77 - dVar86 * dVar33;
        local_278._8_8_ = dVar86 * dVar93 + dVar77 * dVar33;
        local_278._0_8_ = dVar31 - (dVar32 * dVar77 + dVar94 * dVar86);
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218._8_4_ = SUB84(dVar82,0);
        local_218._0_8_ = dVar78;
        local_218._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
        local_208._8_4_ = 0;
        local_208._0_8_ = dVar34;
        local_208._12_4_ = 0x3ff00000;
        local_188 = auVar35;
        FUN_1447fea8d(local_178,local_278,&local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(&local_298,local_178);
        dVar78 = local_288 * local_288 + local_298 * local_298;
        dVar82 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar65._0_8_ = dVar78 + dVar82;
        auVar65._8_8_ = dVar78 + dVar82;
        auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar65._8_8_);
        auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar65._0_8_);
        auVar48 = sqrtpd(auVar65,auVar65);
        auVar54 = divpd(auVar36,auVar48);
        auVar69._0_8_ = auVar54._0_8_ * local_288;
        auVar69._8_8_ = auVar54._8_8_ * dStack_280;
        auVar48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar45);
        dVar78 = (double)((ulonglong)(local_298 * auVar54._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar65._0_8_));
        dVar82 = (double)((ulonglong)(dStack_290 * auVar54._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar65._8_8_));
        local_198 = (double)(-fVar30 * *(float *)((longlong)param_1 + 0x1bcc));
        local_1f8 = 1.0;
        dStack_1f0 = 0.0;
        local_1e8 = ZEXT816(0);
        local_1c8 = 0.0;
        uStack_1c0 = 0;
        local_1b8 = 0.0;
        dStack_1b0 = 0.0;
        local_1a8 = 1.0;
        uStack_1a0 = 0;
        dStack_190 = 0.0;
        dVar86 = dVar82 + dVar82;
        dVar34 = auVar48._0_8_;
        dVar33 = auVar48._8_8_;
        dVar77 = dVar34 + dVar34;
        dVar32 = dVar78 * (dVar78 + dVar78);
        local_258._8_8_ = dVar84 - (dVar34 * dVar77 + dVar32);
        local_228 = 1.0 - (dVar32 + dVar82 * dVar86);
        dVar81 = (dVar78 + dVar78) * dVar33;
        dVar32 = dVar86 * dVar78 + dVar77 * dVar33;
        local_248 = dVar77 * dVar82 + dVar81;
        local_258._0_8_ = dVar86 * dVar78 - dVar77 * dVar33;
        local_268 = dVar78 * dVar77 - dVar86 * dVar33;
        local_278._8_4_ = SUB84(dVar32,0);
        local_278._0_8_ = dVar31 - (dVar34 * dVar77 + dVar82 * dVar86);
        local_278._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        uStack_260 = 0;
        uStack_240 = 0;
        local_238._8_8_ = dVar77 * dVar82 - dVar81;
        local_238._0_8_ = dVar78 * dVar77 + dVar86 * dVar33;
        uStack_220 = 0;
        local_208._8_8_ = 0x3ff0000000000000;
        local_1d8 = auVar35;
        local_188 = auVar35;
        FUN_1447fea8d(local_178,local_278,&local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(&local_298,local_178);
        dVar78 = local_288 * local_288 + local_298 * local_298;
        dVar82 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar66._0_8_ = dVar78 + dVar82;
        auVar66._8_8_ = dVar78 + dVar82;
        auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_);
        auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_);
        auVar48 = sqrtpd(auVar66,auVar66);
        auVar48 = divpd(auVar36,auVar48);
        auVar70._0_8_ = auVar48._0_8_ * local_288;
        auVar70._8_8_ = auVar48._8_8_ * dStack_280;
        dVar32 = (double)((ulonglong)(local_298 * auVar48._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar66._0_8_));
        dVar33 = (double)((ulonglong)(dStack_290 * auVar48._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar66._8_8_));
        auVar48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar70,auVar46);
        dStack_190 = (double)(*(float *)((longlong)param_1 + 0x1bcc) * 0.5);
        local_1f8 = 1.0;
        dStack_1f0 = 0.0;
        local_1e8 = ZEXT816(0);
        local_1c8 = 0.0;
        uStack_1c0 = 0;
        local_1b8 = 0.0;
        dStack_1b0 = 0.0;
        local_1a8 = 1.0;
        uStack_1a0 = 0;
        local_198 = 0.0;
        dVar86 = dVar33 + dVar33;
        dVar82 = auVar48._0_8_;
        dVar34 = auVar48._8_8_;
        dVar77 = dVar82 + dVar82;
        dVar78 = dVar32 * (dVar32 + dVar32);
        local_228 = 1.0 - (dVar78 + dVar33 * dVar86);
        dVar81 = (dVar32 + dVar32) * dVar34;
        local_248 = dVar77 * dVar33 + dVar81;
        local_238._8_8_ = dVar77 * dVar33 - dVar81;
        local_268 = dVar32 * dVar77 - dVar86 * dVar34;
        local_238._0_8_ = dVar32 * dVar77 + dVar86 * dVar34;
        local_278._8_8_ = dVar86 * dVar32 + dVar77 * dVar34;
        local_278._0_8_ = dVar31 - (dVar82 * dVar77 + dVar33 * dVar86);
        uStack_260 = 0;
        local_258._8_8_ = dVar84 - (dVar82 * dVar77 + dVar78);
        local_258._0_8_ = dVar86 * dVar32 - dVar77 * dVar34;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218._8_8_ = dStack_110;
        local_218._0_8_ = local_118;
        local_208._8_8_ = 0x3ff0000000000000;
        local_208._0_8_ = local_108;
        local_1d8 = auVar35;
        local_188 = auVar35;
        FUN_1447fea8d(local_178,local_278,&local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(&local_298,local_178);
        auVar53._0_8_ = local_298 * local_298;
        auVar53._8_8_ = dStack_290 * dStack_290;
        dVar78 = local_288 * local_288 + auVar53._0_8_;
        dVar82 = dStack_280 * dStack_280 + auVar53._8_8_;
        auVar59._0_8_ = dVar78 + dVar82;
        auVar59._8_8_ = dVar78 + dVar82;
        auVar48 = sqrtpd(auVar53,auVar59);
        auVar36 = divpd(auVar36,auVar48);
        auVar60._0_8_ = auVar36._0_8_ * local_288;
        auVar60._8_8_ = auVar36._8_8_ * dStack_280;
        dVar84 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_));
        dVar81 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_));
        auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_);
        auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_);
        auVar80 = blendvpd(auVar35,auVar60,auVar47);
        local_3c8 = local_118;
        dStack_3c0 = dStack_110;
        dStack_3b0 = 0.0;
        local_3b8 = local_108;
      }
      uVar12 = 0;
      uVar90 = 0x3ff00000;
      uVar91 = 0;
      uVar92 = 0;
      auVar71._8_8_ = dVar81;
      auVar71._0_8_ = dVar84;
      auVar79 = _DAT_149934d80;
      dVar78 = (double)local_3d8._0_8_;
    }
    dVar82 = local_380;
    plVar16 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x1c00) + uVar22 * 8);
    dStack_320 = auVar80._0_8_;
    dVar34 = auVar80._8_8_;
    local_368 = auVar71._0_8_;
    auVar5._4_8_ = local_368;
    auVar5._0_4_ = auVar71._4_4_;
    auVar37._0_8_ = auVar5._0_8_ << 0x20;
    auVar37._8_4_ = auVar71._8_4_;
    auVar37._12_4_ = auVar71._12_4_;
    local_338 = auVar37._8_8_;
    dStack_330 = auVar71._8_8_;
    dVar31 = auVar79._0_8_;
    dVar32 = auVar79._8_8_;
    local_3a8 = auVar80;
    dStack_360 = local_368;
    local_358 = auVar71;
    local_328 = dStack_330;
    local_318 = local_368;
    dStack_310 = dVar34;
    local_308 = dStack_320;
    dStack_300 = dStack_320;
    if ((DAT_14c950c29 == 1) && (plVar16 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar16);
LAB_140c9a57d:
      local_2e0 = (dVar82 - (double)local_398._0_8_) * 0.5;
      local_2d8 = local_370;
      local_2d0 = local_378;
      FUN_140c9cc04(plVar16,&local_2e0,1);
      plVar19 = plVar16;
      uVar11 = FUN_140c9cac8();
      auVar36 = _DAT_149934d80;
      if ((char)uVar11 != '\0') {
        dVar33 = (local_348 + local_340) * 0.5;
        dVar84 = (dVar82 + (double)local_398._0_8_) * 0.5;
        auVar48 = minpd(_DAT_149934d80,auVar79);
        auVar3._4_4_ = uVar90;
        auVar3._0_4_ = uVar12;
        auVar3._8_4_ = uVar91;
        auVar3._12_4_ = uVar92;
        auVar54 = minpd(ZEXT816(0x3ff0000000000000),auVar3);
        auVar55._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
        auVar55._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
        iVar21 = movmskpd(uVar11,auVar55);
        auVar61._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
        auVar61._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
        uVar18 = movmskpd((int)plVar19,auVar61);
        dVar82 = (double)CONCAT44(uVar90,uVar12);
        if ((uVar18 & 0x3fffffff) == 0 && iVar21 == 0) {
          local_178._0_8_ =
               (double)local_3a8._0_8_ * 0.0 * -1.0 +
               local_338 * 0.0 + local_368 * 1.0 * 1.0 + dVar34 * 0.0;
          local_178._8_8_ =
               (double)local_3a8._0_8_ * 0.0 * 1.0 +
               dStack_330 * 1.0 + dStack_360 * 0.0 * -1.0 + dVar34 * 0.0;
          local_168._0_8_ =
               local_308 * 1.0 * 1.0 +
               (((double)local_358._0_8_ * 0.0 * 1.0 + dVar34 * 0.0) - local_338 * 0.0);
          local_168._8_8_ =
               dStack_300 * 0.0 * -1.0 +
               (((double)local_358._0_8_ * 0.0 * -1.0 + dVar34 * 1.0) - dStack_330 * 0.0);
          dVar84 = dVar84 * dVar31;
          dVar78 = dVar78 * dVar32;
          dVar33 = dVar33 * dVar82;
          dVar86 = dVar78 * (double)local_358._0_8_ - local_328 * dVar84;
          dVar77 = dVar33 * (double)local_358._8_8_ - dStack_320 * dVar78;
          dVar81 = dVar84 * (double)local_3a8._0_8_ - local_318 * dVar33;
          dVar77 = dVar77 + dVar77;
          dVar81 = dVar81 + dVar81;
          dVar86 = dVar86 + dVar86;
          dVar33 = (dVar81 * (double)local_358._0_8_ - local_328 * dVar77) +
                   dVar34 * dVar86 + dVar33 + local_3b8;
          local_1f8 = (dVar86 * (double)local_358._8_8_ - dStack_320 * dVar81) +
                      dVar34 * dVar77 + dVar84 + local_3c8;
          dStack_1f0 = (dVar77 * (double)local_3a8._0_8_ - dVar86 * local_318) +
                       dVar34 * dVar81 + dVar78 + dStack_3c0;
        }
        else {
          dVar77 = (double)local_358._8_8_ + (double)local_358._8_8_;
          dVar81 = (double)local_3a8._0_8_ + (double)local_3a8._0_8_;
          dVar86 = (double)local_358._0_8_ * ((double)local_358._0_8_ + (double)local_358._0_8_);
          local_1f8 = ((double)DAT_149934d80 -
                      ((double)local_3a8._0_8_ * dVar81 + (double)local_358._8_8_ * dVar77)) *
                      dVar31;
          dVar89 = ((double)local_358._0_8_ + (double)local_358._0_8_) * dVar34;
          dStack_1b0 = (dVar81 * (double)local_358._8_8_ - dVar89) * dVar82;
          local_1b8 = (dVar77 * dVar34 + local_368 * dVar81) * dVar82;
          dStack_1f0 = (dVar77 * (double)local_358._0_8_ + dVar81 * dVar34) * dVar31;
          local_1c8 = (dVar81 * (double)local_358._8_8_ + dVar89) * dVar32;
          local_1e8._8_8_ = 0;
          local_1e8._0_8_ = (local_368 * dVar81 - dVar77 * dVar34) * dVar31;
          local_1d8._8_8_ =
               (DAT_149934d80._8_8_ - ((double)local_3a8._0_8_ * dVar81 + dVar86)) * dVar32;
          local_1d8._0_8_ = (dVar77 * (double)local_358._0_8_ - dVar81 * dVar34) * dVar32;
          uStack_1c0 = 0;
          local_1a8 = (1.0 - (dVar86 + (double)local_358._8_8_ * dVar77)) * dVar82;
          uStack_1a0 = 0;
          local_198 = local_3c8;
          dStack_190 = dStack_3c0;
          local_188._8_8_ = 0x3ff0000000000000;
          local_188._0_8_ = local_3b8;
          local_278 = ZEXT816(0x3ff0000000000000);
          local_268 = 0.0;
          uStack_260 = 0;
          local_248 = 0.0;
          uStack_240 = 0;
          local_238 = ZEXT816(0);
          local_228 = 1.0;
          uStack_220 = 0;
          local_218._8_8_ = dVar78;
          local_218._0_8_ = dVar84;
          local_208._8_8_ = 0x3ff0000000000000;
          local_208._0_8_ = dVar33;
          local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
          FUN_1447fea8d(local_178);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar38._8_8_ = -(ulonglong)(0.0 <= dVar32);
          auVar38._0_8_ = -(ulonglong)(0.0 <= dVar31);
          auVar48 = blendvpd(_DAT_149936790,auVar36,auVar38);
          uVar27 = -(ulonglong)(0.0 <= dVar82 * 1.0);
          dVar78 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
          dVar33 = auVar48._0_8_;
          local_178._8_8_ = (double)local_178._8_8_ * dVar33;
          local_178._0_8_ = (double)local_178._0_8_ * dVar33;
          local_168._0_8_ = (double)local_168._0_8_ * dVar33;
          dVar33 = auVar48._8_8_;
          local_148 = local_148 * dVar33;
          dStack_150 = dStack_150 * dVar33;
          local_158 = dVar33 * local_158;
          local_128 = local_128 * dVar78;
          local_130 = local_130 * dVar78;
          local_138 = dVar78 * local_138;
          FUN_14481fd10(&local_298,local_178);
          dVar78 = local_288 * local_288 + local_298 * local_298;
          dVar33 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar62._0_8_ = dVar78 + dVar33;
          auVar62._8_8_ = dVar78 + dVar33;
          auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
          auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
          auVar48 = sqrtpd(auVar62,auVar62);
          auVar36 = divpd(auVar36,auVar48);
          auVar95._0_8_ = auVar36._0_8_ * local_288;
          auVar95._8_8_ = auVar36._8_8_ * dStack_280;
          local_178._0_8_ =
               (ulonglong)(local_298 * auVar36._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
          local_178._8_8_ =
               (ulonglong)(dStack_290 * auVar36._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
          local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar95,auVar39);
          dVar33 = local_108;
          local_1f8 = local_118;
          dStack_1f0 = dStack_110;
        }
        local_1e8._0_8_ = dVar33;
        local_3e0 = 0;
        local_3e8 = 0;
        FUN_144927ad4(plVar16,&local_1f8,local_178,0);
        local_168._0_8_ = dVar82 * 1.0;
        if (*(code **)(*plVar16 + 0x478) == FUN_14028a216) {
          local_178 = auVar79;
          FUN_14028a216(plVar16,local_178);
        }
        else {
          local_178 = auVar79;
          (**(code **)(*plVar16 + 0x478))(plVar16,local_178);
        }
      }
      (**(code **)(*plVar16 + 0x540))(plVar16);
    }
    else if (plVar16 != (longlong *)0x0) goto LAB_140c9a57d;
    plVar16 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x1c10) + uVar22 * 8);
    if (((DAT_14c950c29 & 1) == 0) || (plVar16 == (longlong *)0x0)) {
      if (plVar16 != (longlong *)0x0) goto LAB_140c9a8ba;
    }
    else {
      FUN_1456cec3c(plVar16);
LAB_140c9a8ba:
      bVar10 = *(byte *)((longlong)param_1 + 0x1a7c);
      dVar33 = (double)(*(float *)((longlong)param_1 + 0x1b8c) * 0.5);
      fVar28 = *(float *)((longlong)param_1 + 0x1b94);
      dVar78 = *(double *)((longlong)param_1 + 0x1b98);
      dVar82 = *(double *)((longlong)param_1 + 0x1ba8);
      local_2f0 = local_370;
      local_2f8 = (double)fVar28;
      local_2e8 = dVar33;
      FUN_140c9cc04(plVar16,&local_2f8,1);
      plVar19 = plVar16;
      uVar11 = FUN_140c9cac8();
      auVar36 = _DAT_149934d80;
      if ((char)uVar11 != '\0') {
        if ((bVar10 & 1) != 0) {
          dVar33 = (local_378 + local_378) - dVar33;
        }
        dVar82 = dVar82 + dVar33;
        auVar88._0_8_ = dVar78 - (double)fVar28;
        auVar88._8_8_ = local_3d8._0_8_;
        auVar48 = minpd(_DAT_149934d80,auVar79);
        auVar4._4_4_ = uVar90;
        auVar4._0_4_ = uVar12;
        auVar4._8_4_ = uVar91;
        auVar4._12_4_ = uVar92;
        auVar54 = minpd(ZEXT816(0x3ff0000000000000),auVar4);
        auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
        auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
        iVar21 = movmskpd(uVar11,auVar49);
        auVar56._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
        auVar56._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
        uVar18 = movmskpd((int)plVar19,auVar56);
        if ((uVar18 & 0x3fffffff) == 0 && iVar21 == 0) {
          local_178._0_8_ =
               (double)local_3a8._0_8_ * 0.0 * -1.0 +
               local_338 * 0.0 + local_368 * 1.0 * 1.0 + dVar34 * 0.0;
          local_178._8_8_ =
               (double)local_3a8._0_8_ * 0.0 * 1.0 +
               dStack_330 * 1.0 + dStack_360 * 0.0 * -1.0 + dVar34 * 0.0;
          local_168._0_8_ =
               local_308 * 1.0 * 1.0 +
               (((double)local_358._0_8_ * 0.0 * 1.0 + dVar34 * 0.0) - local_338 * 0.0);
          local_168._8_8_ =
               dStack_300 * 0.0 * -1.0 +
               (((double)local_358._0_8_ * 0.0 * -1.0 + dVar34 * 1.0) - dStack_330 * 0.0);
          dVar31 = auVar88._0_8_ * dVar31;
          dVar32 = (double)local_3d8._0_8_ * dVar32;
          dVar82 = dVar82 * (double)CONCAT44(uVar90,uVar12);
          dVar33 = dVar32 * (double)local_358._0_8_ - local_328 * dVar31;
          dVar84 = dVar82 * (double)local_358._8_8_ - dStack_320 * dVar32;
          dVar86 = dVar31 * (double)local_3a8._0_8_ - local_318 * dVar82;
          dVar84 = dVar84 + dVar84;
          dVar86 = dVar86 + dVar86;
          dVar33 = dVar33 + dVar33;
          dVar78 = (double)CONCAT44(uVar90,uVar12) * 1.0;
          dVar82 = local_3b8 +
                   (dVar86 * (double)local_358._0_8_ - local_328 * dVar84) +
                   dVar34 * dVar33 + dVar82;
          local_1f8 = local_3c8 +
                      (dVar33 * (double)local_358._8_8_ - dStack_320 * dVar86) +
                      dVar34 * dVar84 + dVar31;
          dStack_1f0 = dStack_3c0 +
                       (dVar84 * (double)local_3a8._0_8_ - dVar33 * local_318) +
                       dVar34 * dVar86 + dVar32;
        }
        else {
          dVar33 = (double)local_358._8_8_ + (double)local_358._8_8_;
          dVar84 = (double)local_3a8._0_8_ + (double)local_3a8._0_8_;
          dVar78 = (double)local_358._0_8_ * ((double)local_358._0_8_ + (double)local_358._0_8_);
          local_1f8 = ((double)DAT_149934d80 -
                      ((double)local_3a8._0_8_ * dVar84 + (double)local_358._8_8_ * dVar33)) *
                      dVar31;
          dVar86 = ((double)local_358._0_8_ + (double)local_358._0_8_) * dVar34;
          dStack_1b0 = (dVar84 * (double)local_358._8_8_ - dVar86) * (double)CONCAT44(uVar90,uVar12)
          ;
          local_1b8 = (dVar33 * dVar34 + local_368 * dVar84) * (double)CONCAT44(uVar90,uVar12);
          dStack_1f0 = (dVar33 * (double)local_358._0_8_ + dVar84 * dVar34) * dVar31;
          local_1c8 = (dVar84 * (double)local_358._8_8_ + dVar86) * dVar32;
          local_1e8._8_8_ = 0;
          local_1e8._0_8_ = (local_368 * dVar84 - dVar33 * dVar34) * dVar31;
          local_1d8._8_8_ =
               (DAT_149934d80._8_8_ - ((double)local_3a8._0_8_ * dVar84 + dVar78)) * dVar32;
          local_1d8._0_8_ = (dVar33 * (double)local_358._0_8_ - dVar84 * dVar34) * dVar32;
          uStack_1c0 = 0;
          local_1a8 = (1.0 - (dVar78 + (double)local_358._8_8_ * dVar33)) *
                      (double)CONCAT44(uVar90,uVar12);
          uStack_1a0 = 0;
          local_198 = local_3c8;
          dStack_190 = dStack_3c0;
          local_188._8_8_ = 0x3ff0000000000000;
          local_188._0_8_ = local_3b8;
          local_278 = ZEXT816(0x3ff0000000000000);
          local_268 = 0.0;
          uStack_260 = 0;
          local_258 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_248 = 0.0;
          uStack_240 = 0;
          local_238 = ZEXT816(0);
          local_228 = 1.0;
          uStack_220 = 0;
          local_208._8_8_ = 0x3ff0000000000000;
          local_208._0_8_ = dVar82;
          dVar78 = (double)CONCAT44(uVar90,uVar12) * 1.0;
          local_218 = auVar88;
          FUN_1447fea8d(local_178);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar40._8_8_ = -(ulonglong)(0.0 <= dVar32);
          auVar40._0_8_ = -(ulonglong)(0.0 <= dVar31);
          auVar48 = blendvpd(_DAT_149936790,auVar36,auVar40);
          dVar82 = (double)(~-(ulonglong)(0.0 <= dVar78) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= dVar78) & 0x3ff0000000000000);
          dVar34 = auVar48._0_8_;
          local_178._8_8_ = (double)local_178._8_8_ * dVar34;
          local_178._0_8_ = (double)local_178._0_8_ * dVar34;
          local_168._0_8_ = (double)local_168._0_8_ * dVar34;
          dVar34 = auVar48._8_8_;
          local_148 = local_148 * dVar34;
          dStack_150 = dStack_150 * dVar34;
          local_158 = dVar34 * local_158;
          local_128 = local_128 * dVar82;
          local_130 = local_130 * dVar82;
          local_138 = dVar82 * local_138;
          FUN_14481fd10(&local_298,local_178);
          dVar82 = local_288 * local_288 + local_298 * local_298;
          dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar63._0_8_ = dVar82 + dVar34;
          auVar63._8_8_ = dVar82 + dVar34;
          auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_);
          auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_);
          auVar48 = sqrtpd(auVar63,auVar63);
          auVar36 = divpd(auVar36,auVar48);
          auVar85._0_8_ = auVar36._0_8_ * local_288;
          auVar85._8_8_ = auVar36._8_8_ * dStack_280;
          local_178._0_8_ =
               (ulonglong)(local_298 * auVar36._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_);
          local_178._8_8_ =
               (ulonglong)(dStack_290 * auVar36._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_);
          local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar85,auVar41);
          dVar82 = local_108;
          local_1f8 = local_118;
          dStack_1f0 = dStack_110;
        }
        local_1e8._0_8_ = dVar82;
        local_3e0 = 0;
        local_3e8 = 0;
        FUN_144927ad4(plVar16,&local_1f8,local_178,0);
        local_168._0_8_ = dVar78;
        if (*(code **)(*plVar16 + 0x478) == FUN_14028a216) {
          local_178 = auVar79;
          FUN_14028a216(plVar16,local_178);
        }
        else {
          local_178 = auVar79;
          (**(code **)(*plVar16 + 0x478))(plVar16,local_178);
        }
      }
      (**(code **)(*plVar16 + 0x540))(plVar16);
    }
    uVar22 = uVar22 + 1;
    dVar78 = (double)local_3d8._0_8_;
    if (uVar15 == uVar22) {
      FUN_140c9d6ae(param_1,*(undefined1 *)((longlong)param_1 + 0x1a70));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_408);
    }
  } while( true );
}



// FUNCTION 140c9cac8 FUN_140c9cac8 body=147 status=ok
// SIG undefined FUN_140c9cac8(void)

ulonglong FUN_140c9cac8(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined7 uVar5;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (((((*(char *)(param_1 + 0x1fb) != '\x02') && ((*(byte *)(param_1 + 0x9c) & 1) != 0)) &&
         ((lVar3 = *(longlong *)(param_1 + 0xb0), lVar3 != 0 ||
          (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) &&
        ((bVar1 = *(byte *)(lVar3 + 0x152), bVar1 == 1 ||
         ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) &&
       (((*(byte *)(lVar3 + 0x153) & 0x40) != 0 &&
        ((cVar2 = FUN_14342d5e4(param_1), cVar2 == '\0' && (*(longlong *)(param_1 + 0xa8) != 0))))))
    {
      uVar4 = CONCAT71(uVar5,(*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 2) == 0);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140c9cb5c FUN_140c9cb5c body=167 status=ok
// SIG undefined FUN_140c9cb5c(void)

void FUN_140c9cb5c(longlong param_1,longlong *param_2)

{
  if (param_2 == (longlong *)0x0) {
    return;
  }
  FUN_14010ee68();
  (**(code **)(*param_2 + 0x588))(param_2,2);
  (**(code **)(*param_2 + 0x940))(param_2,0);
  (**(code **)(*param_2 + 0x938))(param_2,2,1);
  *(undefined4 *)(param_2 + 0xc5) = 0xff2ecc71;
  if ((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140c9cbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x490))(param_2,*(undefined8 *)(param_1 + 0x1c8),&DAT_14cadad98,0);
    return;
  }
  FUN_140486fc4(param_2,*(undefined8 *)(param_1 + 0x1c8),0);
  FUN_140b506a4(param_2);
  return;
}



// FUNCTION 140c9cc04 FUN_140c9cc04 body=280 status=ok
// SIG undefined FUN_140c9cc04(void)

void FUN_140c9cc04(longlong *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[0xca] = *(longlong *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 200) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x644) = uVar1;
  *(undefined4 *)(param_1 + 0xc9) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x64c) = uVar3;
  (**(code **)(*param_1 + 0x540))();
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) != 0) goto LAB_140c9cc8f;
  bVar4 = *(byte *)((longlong)param_1 + 0x9d);
  if ((bVar4 & 1) != 0) {
    if (param_1[0x16] != 0) goto LAB_140c9cc8f;
    lVar6 = FUN_1448abda6(param_1);
    if (lVar6 != 0) goto LAB_140c9cc8f;
    bVar4 = *(byte *)((longlong)param_1 + 0x9d);
  }
  *(byte *)((longlong)param_1 + 0x9d) = bVar4 | 1;
  FUN_1401057d4(param_1);
  FUN_14010586c(&DAT_14cad0140,param_1);
LAB_140c9cc8f:
  (**(code **)(*param_1 + 0x9f8))(param_1);
  if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
    local_38 = param_1[0x50];
    lStack_30 = param_1[0x51];
    local_28 = param_1[0x52];
    FUN_140043360(param_1 + 0x82,&local_38,1);
    if (param_3 != '\0') {
      iVar5 = (**(code **)(*param_1 + 0x570))(param_1);
      if ((iVar5 != 0) && (param_1[0x15] != 0)) {
        FUN_144907e2c(param_1,0,1,0);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c9cd1e FUN_140c9cd1e body=192 status=ok
// SIG undefined FUN_140c9cd1e(void)

void FUN_140c9cd1e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140c9cde0();
  if (cVar1 != '\0') {
    local_18 = *(undefined8 *)(param_1 + 0x650);
    local_28 = *(undefined4 *)(param_1 + 0x640);
    uStack_24 = *(undefined4 *)(param_1 + 0x644);
    uStack_20 = *(undefined4 *)(param_1 + 0x648);
    uStack_1c = *(undefined4 *)(param_1 + 0x64c);
    uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1 + 0x62c)) &
            0xffffffffffffff10;
    cVar1 = FUN_140c9ce68(param_1 + 0x620,CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 4));
    *(byte *)(param_1 + 0x62c) = *(byte *)(param_1 + 0x62c) & 0xef | cVar1 << 4;
  }
  FUN_140c9d0b8(param_1);
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x650);
    local_48 = *(undefined4 *)(param_1 + 0x640);
    uStack_44 = *(undefined4 *)(param_1 + 0x644);
    uStack_40 = *(undefined4 *)(param_1 + 0x648);
    uStack_3c = *(undefined4 *)(param_1 + 0x64c);
    FUN_140c9cf3e(param_1 + 0x620,0);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c9cde0 FUN_140c9cde0 body=106 status=ok
// SIG undefined FUN_140c9cde0(void)

ulonglong FUN_140c9cde0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  undefined7 uVar4;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (*(longlong *)(param_1 + 0x620) == 0) {
      plVar1 = (longlong *)FUN_144938c96(param_1);
      lVar2 = (**(code **)(*plVar1 + 0x7a0))(plVar1);
      uVar3 = CONCAT71(uVar4,lVar2 != 0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x620) = lVar2;
    }
    else {
      uVar3 = CONCAT71(uVar4,1);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140c9ce4a FUN_140c9ce4a body=30 status=ok
// SIG undefined FUN_140c9ce4a(void)

longlong FUN_140c9ce4a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x9f8))();
  return param_1[0xc4];
}



// FUNCTION 140c9ce68 FUN_140c9ce68 body=214 status=ok
// SIG undefined FUN_140c9ce68(void)

undefined4 FUN_140c9ce68(longlong *param_1,undefined4 param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = *(longlong *)(*param_1 + 0x48);
  dVar2 = *param_3;
  if (dVar2 < 9.999999747378752e-05) {
    *param_3 = 1.0;
    dVar2 = 1.0;
  }
  dVar3 = param_3[1];
  if (dVar3 < 9.999999747378752e-05) {
    param_3[1] = 1.0;
    dVar3 = 1.0;
  }
  dVar4 = param_3[2];
  if (dVar4 < 9.999999747378752e-05) {
    param_3[2] = 1.0;
    dVar4 = 1.0;
  }
  if ((*(float *)(lVar1 + 0x60) == (float)(dVar2 + dVar2)) &&
     (!NAN(*(float *)(lVar1 + 0x60)) && !NAN((float)(dVar2 + dVar2)))) {
    if ((*(float *)(lVar1 + 100) == (float)(dVar3 + dVar3)) &&
       (!NAN(*(float *)(lVar1 + 100)) && !NAN((float)(dVar3 + dVar3)))) {
      if ((*(float *)(lVar1 + 0x68) == (float)(dVar4 + dVar4)) &&
         (!NAN(*(float *)(lVar1 + 0x68)) && !NAN((float)(dVar4 + dVar4)))) {
        return param_2;
      }
    }
  }
  *param_1 = 0;
  return 0;
}



// FUNCTION 140c9cf3e FUN_140c9cf3e body=377 status=ok
// SIG undefined FUN_140c9cf3e(void)

undefined4 FUN_140c9cf3e(longlong *param_1,undefined4 param_2,double *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(*param_1 + 0x48);
  dVar8 = *param_3;
  uVar6 = SUB84(dVar8,0);
  uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
  if (dVar8 < 9.999999747378752e-05) {
    *param_3 = 1.0;
    uVar6 = 0;
    uVar7 = 0x3ff00000;
  }
  dVar8 = param_3[1];
  if (dVar8 < 9.999999747378752e-05) {
    param_3[1] = 1.0;
    dVar8 = 1.0;
  }
  dVar9 = param_3[2];
  if (dVar9 < 9.999999747378752e-05) {
    param_3[2] = 1.0;
    dVar9 = 1.0;
  }
  local_78 = DAT_14c846480;
  uStack_70 = DAT_14c846488;
  local_68 = (undefined4)DAT_14c846490;
  uStack_64 = DAT_14c846490._4_4_;
  uStack_60 = (undefined4)DAT_14c846498;
  uStack_5c = DAT_14c846498._4_4_;
  FUN_1448052ee(&local_78,&local_90);
  *(undefined8 *)(lVar1 + 0x58) = local_80;
  *(undefined8 *)(lVar1 + 0x48) = local_90;
  *(undefined8 *)(lVar1 + 0x50) = uStack_88;
  uVar5 = DAT_14c8464b0;
  uVar4 = DAT_14c8464a8._4_4_;
  uVar3 = (undefined4)DAT_14c8464a8;
  uVar2 = DAT_14c8464a0._4_4_;
  *(undefined4 *)(lVar1 + 0x30) = (undefined4)DAT_14c8464a0;
  *(undefined4 *)(lVar1 + 0x34) = uVar2;
  *(undefined4 *)(lVar1 + 0x38) = uVar3;
  *(undefined4 *)(lVar1 + 0x3c) = uVar4;
  *(undefined8 *)(lVar1 + 0x40) = uVar5;
  *(float *)(lVar1 + 0x60) = (float)((double)CONCAT44(uVar7,uVar6) + (double)CONCAT44(uVar7,uVar6));
  *(float *)(lVar1 + 100) = (float)(dVar8 + dVar8);
  *(float *)(lVar1 + 0x68) = (float)(dVar9 + dVar9);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c9d0b8 FUN_140c9d0b8 body=1008 status=ok
// SIG undefined FUN_140c9d0b8(void)

void FUN_140c9d0b8(undefined **param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 *local_b0;
  undefined ***local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined4 local_80;
  undefined ***local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_1[0xc4] != (undefined *)0x0) && ((*(uint *)(param_1[0xc4] + 8) >> 0x1e & 1) == 0))
  goto LAB_140c9d0f0;
  local_c0 = 0;
  local_c8 = 0;
  puVar4 = (undefined *)FUN_140c9d4a9(param_1,0,0x40,0);
  if ((puVar4 != (undefined *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(puVar4);
  }
  param_1[0xc4] = puVar4;
  if (*(int *)((longlong)param_1 + 0xc) <= DAT_14c9647bc) {
    uVar8 = *(uint *)(puVar4 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    FUN_1447f71cc(lVar9,0x40000000);
    puVar4 = param_1[0xc4];
  }
  lVar9 = 0;
  FUN_1406555d4(puVar4,param_1,0);
  puVar4 = param_1[0xc4];
  uVar8 = *(uint *)(puVar4 + 0xc);
  if ((int)uVar8 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
  }
  if ((*(uint *)(lVar9 + 8) >> 0x1a & 1) != 0) {
    lVar9 = FUN_14065579a(&DAT_14c9640e8);
    puVar4 = param_1[0xc4];
    if (lVar9 != 0) {
      uVar8 = *(uint *)(puVar4 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      FUN_14482b126(lVar9,0x4000000);
      puVar4 = param_1[0xc4];
    }
  }
  puVar4[0x31] = 2;
  puVar4 = param_1[0xc4];
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 1;
  local_88 = 0x3ff;
  local_80 = 6;
  local_a0 = &PTR_FUN_14a1e3c70;
  local_70 = DAT_14c8464e0;
  uStack_68 = DAT_14c8464e8;
  local_60 = DAT_14c8464f0;
  uStack_58 = (undefined4)DAT_14c8464f8;
  uStack_54 = DAT_14c8464f8._4_4_;
  uStack_50 = (undefined4)DAT_14c846500;
  uStack_4c = DAT_14c846500._4_4_;
  uStack_48 = DAT_14c846508;
  uStack_40 = &DAT_3f8000003f800000;
  local_38 = 0x3f800000;
  iVar2 = *(int *)(puVar4 + 0x50);
  *(uint *)(puVar4 + 0x50) = iVar2 + 1U;
  local_78 = &local_a0;
  if (*(uint *)(puVar4 + 0x54) < iVar2 + 1U) {
    FUN_140c9d5a2(puVar4 + 0x48,iVar2);
  }
  lVar9 = *(longlong *)(puVar4 + 0x48);
  lVar7 = (longlong)iVar2 * 0x70;
  *(undefined ***)(lVar9 + lVar7) = &PTR_FUN_14a1dee50;
  *(undefined4 *)(lVar9 + 8 + lVar7) = local_98;
  *(ulonglong *)(lVar9 + 0xc + lVar7) = CONCAT44(uStack_90,uStack_94);
  *(undefined4 *)(lVar9 + 0x14 + lVar7) = uStack_8c;
  *(byte *)(lVar9 + 0x18 + lVar7) = *(byte *)(lVar9 + 0x18 + lVar7) & 0xfe | (byte)local_88 & 1;
  *(undefined1 *)(lVar9 + 0x19 + lVar7) = local_88._1_1_;
  *(undefined4 *)(lVar9 + 0x20 + lVar7) = 6;
  *(longlong *)(lVar9 + 0x28 + lVar7) = lVar9 + lVar7;
  *(undefined ***)(lVar9 + lVar7) = &PTR_FUN_14a1e3c70;
  puVar1 = (undefined4 *)(lVar9 + 0x30 + lVar7);
  *puVar1 = (undefined4)local_70;
  puVar1[1] = local_70._4_4_;
  puVar1[2] = (undefined4)uStack_68;
  puVar1[3] = uStack_68._4_4_;
  puVar1 = (undefined4 *)(lVar9 + 0x40 + lVar7);
  *puVar1 = (undefined4)local_60;
  puVar1[1] = local_60._4_4_;
  puVar1[2] = uStack_58;
  puVar1[3] = uStack_54;
  puVar1 = (undefined4 *)(lVar9 + 0x50 + lVar7);
  *puVar1 = uStack_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = (undefined4)uStack_48;
  puVar1[3] = uStack_48._4_4_;
  puVar1 = (undefined4 *)(lVar9 + 0x5c + lVar7);
  *puVar1 = uStack_48._4_4_;
  puVar1[1] = (undefined4)uStack_40;
  puVar1[2] = uStack_40._4_4_;
  puVar1[3] = local_38;
  param_1[0xc4][0xb9] = param_1[0xc4][0xb9] | 8;
  *(byte *)((longlong)param_1 + 0x62c) = *(byte *)((longlong)param_1 + 0x62c) & 0xef;
  puVar4 = param_1[0xc4];
  if ((puVar4 != (undefined *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(puVar4);
LAB_140c9d312:
    uVar8 = *(uint *)(puVar4 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar11 = uVar3 == 0;
      if (bVar11) {
        *(uint *)(lVar9 + 0x10) = uVar10;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar3 = uVar10;
      }
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    if (puVar4 != (undefined *)0x0) goto LAB_140c9d312;
    uVar8 = 0;
    uVar6 = 0;
  }
  param_1[0x82] = (undefined *)((ulonglong)uVar8 | uVar6 << 0x20);
  if (param_1[0xa9] != (undefined *)0x0) {
    local_b0 = &LAB_147a14698;
    local_a8 = &local_a0;
    local_a0 = param_1;
    uVar5 = FUN_1457b57b4(param_1 + 0x82);
    FUN_140e2683c(uVar5,&local_b0);
  }
LAB_140c9d0f0:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c9d4a9 FUN_140c9d4a9 body=248 status=ok
// SIG undefined FUN_140c9d4a9(void)

undefined8
FUN_140c9d4a9(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_14099bfa2();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c9d5a2 FUN_140c9d5a2 body=268 status=ok
// SIG undefined FUN_140c9d5a2(void)

void FUN_140c9d5a2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c9d6ae FUN_140c9d6ae body=326 status=ok
// SIG undefined FUN_140c9d6ae(void)

void FUN_140c9d6ae(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x588))(plVar2,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x1bf0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x588))(plVar2,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x1bf8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x588))(plVar2,param_2);
  }
  plVar2 = *(longlong **)(param_1 + 0x1bd8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x588))(plVar2,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x1c08);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1c00);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar5);
      if ((plVar2 != (longlong *)0x0 & bVar4) == 1) {
        FUN_1456cec3c(plVar2);
LAB_140c9d74f:
        (**(code **)(*plVar2 + 0x588))(plVar2,param_2);
        bVar4 = DAT_14c950c29;
      }
      else if (plVar2 != (longlong *)0x0) goto LAB_140c9d74f;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x1c18);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1c10);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar5);
      if ((plVar2 != (longlong *)0x0 & bVar4) == 1) {
        FUN_1456cec3c(plVar2);
LAB_140c9d7a2:
        (**(code **)(*plVar2 + 0x588))(plVar2,param_2);
        bVar4 = DAT_14c950c29;
      }
      else if (plVar2 != (longlong *)0x0) goto LAB_140c9d7a2;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 140c9d7f4 FUN_140c9d7f4 body=163 status=ok
// SIG undefined FUN_140c9d7f4(void)

void FUN_140c9d7f4(undefined8 param_1)

{
  longlong in_RCX;
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(in_RCX + 0x1bc4) & 2) == 0) {
    if ((*(longlong *)(in_RCX + 0x1a68) == 0) ||
       (*(longlong *)(*(longlong *)(in_RCX + 0x1a68) + 0xd0) == 0)) {
      param_1 = 0;
      if (*(longlong *)(in_RCX + 0x1b08) == 0) goto LAB_140c9d830;
    }
    FUN_144b2ab52(param_1,local_50);
    param_1 = CONCAT44((int)((ulonglong)(local_28 + local_28) >> 0x20),(float)(local_28 + local_28))
    ;
  }
  else {
    param_1 = 0;
  }
LAB_140c9d830:
  if ((*(byte *)(in_RCX + 0x1a7c) & 1) == 0) {
    param_1 = CONCAT44((int)((ulonglong)param_1 >> 0x20),
                       (float)param_1 +
                       (float)*(int *)(in_RCX + 0x1bbc) * *(float *)(in_RCX + 0x1b20));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(param_1);
}



// FUNCTION 140c9d898 FUN_140c9d898 body=349 status=ok
// SIG undefined FUN_140c9d898(void)

longlong FUN_140c9d898(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(byte *)(param_1 + 0x1bc4) & 1) != 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x1a68);
  if (lVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 0x1bb5);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x1bb5);
    if (*(int *)(lVar3 + 0x88) != *(int *)(lVar3 + 0xb4)) {
      lVar5 = lVar3 + 0xb8;
      if (*(longlong *)(lVar3 + 0xc0) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0xc0);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 200) - 1U & (uint)bVar2) * 4);
      if (iVar4 != -1) {
        lVar5 = *(longlong *)(lVar3 + 0x80);
        iVar6 = iVar4;
        do {
          if (*(byte *)(lVar5 + (longlong)iVar6 * 0x18) == bVar2) goto LAB_140c9d95b;
          iVar6 = *(int *)(lVar5 + (longlong)iVar6 * 0x18 + 0x10);
        } while (iVar6 != -1);
      }
    }
    if (*(longlong *)(lVar3 + 0x58) != 0) {
      return *(longlong *)(lVar3 + 0x58);
    }
  }
  if (*(int *)(param_1 + 0x1aa8) != *(int *)(param_1 + 0x1ad4)) {
    lVar3 = param_1 + 0x1ad8;
    if (*(longlong *)(param_1 + 0x1ae0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1ae0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1ae8) - 1U & (uint)bVar2) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x1aa0);
      iVar6 = iVar4;
      do {
        if (*(byte *)(lVar3 + (longlong)iVar6 * 0x18) == bVar2) goto LAB_140c9d9da;
        iVar6 = *(int *)(lVar3 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  pbVar1 = (byte *)(param_1 + 0x1a98);
  goto LAB_140c9d8d0;
  while (iVar4 = *(int *)(pbVar1 + 0x10), iVar4 != -1) {
LAB_140c9d95b:
    pbVar1 = (byte *)(lVar5 + (longlong)iVar4 * 0x18);
    if (*pbVar1 == bVar2) goto LAB_140c9d96a;
  }
  goto LAB_140c9d9ee;
  while (iVar4 = *(int *)(pbVar1 + 0x10), iVar4 != -1) {
LAB_140c9d9da:
    pbVar1 = (byte *)(lVar3 + (longlong)iVar4 * 0x18);
    if (*pbVar1 == bVar2) goto LAB_140c9d96a;
  }
LAB_140c9d9ee:
  pbVar1 = (byte *)0x0;
LAB_140c9d96a:
  pbVar1 = pbVar1 + 8;
LAB_140c9d8d0:
  return *(longlong *)pbVar1;
}



// FUNCTION 140c9d9f6 FUN_140c9d9f6 body=292 status=ok
// SIG undefined FUN_140c9d9f6(void)

void FUN_140c9d9f6(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1c21);
  if (*(longlong *)(param_1 + 0x1bd8) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x1bd8),cVar1 != '\x01',1);
    (**(code **)(**(longlong **)(param_1 + 0x1bd8) + 0x720))
              (*(longlong **)(param_1 + 0x1bd8),(cVar1 != '\x01') * '\x03');
  }
  if (*(longlong *)(param_1 + 0x1be0) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x1be0),cVar1 != '\x01',1);
    (**(code **)(**(longlong **)(param_1 + 0x1be0) + 0x720))
              (*(longlong **)(param_1 + 0x1be0),(cVar1 != '\x01') * '\x03');
  }
  if (*(longlong *)(param_1 + 0x1be8) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x1be8),cVar1 != '\x01',1);
    (**(code **)(**(longlong **)(param_1 + 0x1be8) + 0x720))
              (*(longlong **)(param_1 + 0x1be8),(cVar1 != '\x01') * '\x03');
  }
  if (*(longlong *)(param_1 + 0x1bf0) != 0) {
    FUN_14045627c(*(longlong *)(param_1 + 0x1bf0),cVar1 != '\x01',1);
    (**(code **)(**(longlong **)(param_1 + 0x1bf0) + 0x720))
              (*(longlong **)(param_1 + 0x1bf0),(cVar1 != '\x01') * '\x03');
  }
  if (*(longlong *)(param_1 + 0x1bf8) == 0) {
    return;
  }
  FUN_14045627c(*(longlong *)(param_1 + 0x1bf8),cVar1 != '\x01',1);
                    /* WARNING: Could not recover jumptable at 0x000140c9db17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1bf8) + 0x720))
            (*(longlong **)(param_1 + 0x1bf8),(cVar1 != '\x01') * '\x03');
  return;
}



// FUNCTION 140c9db1a FUN_140c9db1a body=106 status=ok
// SIG undefined FUN_140c9db1a(void)

void FUN_140c9db1a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140c9db84();
  if (param_2 != 0) {
    lVar4 = FUN_140859b94();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (lVar4 = *(longlong *)(param_2 + 0x990), lVar4 != 0)) {
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar4 + 0xa20);
      uVar1 = *(undefined8 *)(lVar4 + 0xa00);
      uVar2 = *(undefined8 *)(lVar4 + 0xa08);
      uVar3 = *(undefined8 *)(lVar4 + 0xa18);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar4 + 0xa10);
      *(undefined8 *)(param_1 + 0x60) = uVar3;
      *(undefined8 *)(param_1 + 0x48) = uVar1;
      *(undefined8 *)(param_1 + 0x50) = uVar2;
    }
  }
  return;
}



// FUNCTION 140c9db84 FUN_140c9db84 body=136 status=ok
// SIG undefined FUN_140c9db84(void)

void FUN_140c9db84(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = FUN_140859b94();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (lVar4 = *(longlong *)(param_2 + 0x990), lVar4 != 0)) {
      uVar1 = *(undefined8 *)(lVar4 + 0x1f8);
      uVar2 = *(undefined8 *)(lVar4 + 0x200);
      uVar3 = *(undefined8 *)(lVar4 + 0x210);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0x208);
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      lVar4 = *(longlong *)(lVar4 + 0x1a0);
      if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x20))) {
        lVar4 = *(longlong *)(lVar4 + 0x18);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar4 + 8);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar4 + 0xc);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar4 + 0x10);
      }
    }
  }
  return;
}



// FUNCTION 140c9dc26 FUN_140c9dc26 body=57 status=ok
// SIG undefined FUN_140c9dc26(void)

void FUN_140c9dc26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25728 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25728 = FUN_140002ddd(FUN_14644797a,uVar1,L"WwiseSoundBankDef");
  }
  return;
}



// FUNCTION 140c9dc60 FUN_140c9dc60 body=478 status=ok
// SIG undefined FUN_140c9dc60(void)

void FUN_140c9dc60(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  switchD_143c3d4dc::caseD_1d();
  lVar1 = param_1 + 0x490;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar1;
  if (*(int *)(param_1 + 0x4a8) == 0) {
    uVar14 = 1;
    iVar9 = 0;
    local_58._4_4_ = 0;
    uVar6 = 0xffffffff;
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
    iVar9 = *(int *)(param_1 + 0x4a8);
    uVar6 = (uint)local_58;
    iVar8 = (int)local_68;
  }
  lVar5 = local_60;
  if (local_58._4_4_ != iVar9 || local_60 != lVar1) {
    local_70 = param_1 + 0x28;
    iVar7 = local_58._4_4_;
    iVar15 = local_50;
    do {
      FUN_140c9de40(*(undefined8 *)(*(longlong *)(param_1 + 0x480) + 8 + (longlong)iVar7 * 0x20),
                    local_70);
      uVar6 = ~(uint)uVar14 & uVar6;
      lVar13 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar13 = lVar5;
      }
      iVar3 = *(int *)(lVar5 + 0x18);
      lVar11 = (longlong)iVar8;
      uVar10 = *(uint *)(lVar13 + lVar11 * 4) & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = *(uint *)(lVar13 + lVar11 * 4 + 4 + lVar12 * 4);
            if (uVar10 != 0) {
              iVar8 = iVar8 + (int)lVar12 + 1;
              uVar6 = 0xffffffff;
              goto LAB_140c9dd85;
            }
            iVar15 = iVar15 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar4 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_140c9dd85:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar14 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar7 = (iVar15 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar9 || lVar5 != lVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c9de40 FUN_140c9de40 body=1267 status=ok
// SIG undefined FUN_140c9de40(void)

void FUN_140c9de40(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x178);
  puVar2 = (uint *)(param_1 + 0x188);
  iVar14 = *(int *)(param_1 + 0x1a0);
  if (iVar14 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar7 = 0;
    iVar13 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x198);
    if (*(uint **)(param_1 + 0x198) == (uint *)0x0) {
      puVar5 = puVar2;
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar7 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar7 = iVar14 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar17 == uVar16) {
          iVar11 = 1;
          goto LAB_140c9dfb5;
        }
        iVar13 = iVar13 + 0x20;
        uVar12 = puVar5[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar12 & uVar12);
    uVar3 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar7) {
      iVar7 = iVar14;
    }
  }
  iVar11 = iVar14;
  if (iVar7 != iVar14) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar1 + 0x10 + (longlong)iVar7 * 0x98) != 0) {
        local_98 = param_2;
        FUN_147965e28(param_2,*plVar1 + (longlong)iVar7 * 0x98 + 0x10);
        iVar11 = *(int *)(param_1 + 0x1a0);
        param_2 = local_98;
      }
      uVar12 = uVar12 & ~(uint)uVar17;
      puVar5 = *(uint **)(param_1 + 0x198);
      if (*(uint **)(param_1 + 0x198) == (uint *)0x0) {
        puVar5 = puVar2;
      }
      iVar7 = (int)uVar16;
      lVar15 = (longlong)iVar7;
      uVar8 = puVar5[lVar15] & uVar12;
      if (uVar8 == 0) {
        iVar9 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar9 = iVar11 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar7 < iVar9) {
          lVar6 = 0;
          do {
            uVar8 = puVar5[lVar15 + lVar6 + 1];
            if (uVar8 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar6 + 1);
              uVar12 = 0xffffffff;
              goto LAB_140c9df88;
            }
            iVar13 = iVar13 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar10 - lVar15 != lVar6);
          uVar12 = 0xffffffff;
          iVar7 = iVar10;
        }
        uVar16 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar11;
      }
      else {
LAB_140c9df88:
        uVar17 = (ulonglong)(-uVar8 & uVar8);
        uVar3 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar7) {
          iVar7 = iVar11;
        }
      }
    } while (iVar7 != iVar14);
  }
LAB_140c9dfb5:
  if (*(int *)(param_1 + 0x180) != *(int *)(param_1 + 0x1ac)) {
    lVar15 = param_1 + 0x1b0;
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x1b8);
    }
    iVar14 = *(int *)(param_1 + 0x1c0);
    iVar7 = iVar14 + 3;
    if (-1 < iVar14) {
      iVar7 = iVar14;
    }
    if (*(int *)(param_1 + 0x180) - *(int *)(param_1 + 0x1ac) < iVar7 >> 2) {
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = puVar2;
      if (iVar11 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar14 = *(int *)(param_1 + 0x1a0);
      }
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar4 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar7 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar14) || (local_78 = local_58, uStack_60 != puVar2)) {
        do {
          local_78 = uVar4;
          *(undefined4 *)
           (lVar15 + (longlong)*(int *)(*local_90 + 0x94 + (longlong)iVar7 * 0x98) * 4) = 0xffffffff
          ;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar7 = local_78._4_4_;
          uVar4 = local_78;
        } while (local_90 != plVar1 ||
                 ((uint *)CONCAT44(uStack_7c,uStack_80) != puVar2 || local_78._4_4_ != iVar14));
      }
    }
    else if (0 < iVar14) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar15 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x1c0));
    }
    iVar14 = *(int *)(param_1 + 0x1a0);
    if (iVar14 == 0) {
      uVar16 = 0;
      uVar17 = 1;
      iVar7 = 0;
      iVar13 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x198);
      if (*(uint **)(param_1 + 0x198) == (uint *)0x0) {
        puVar5 = puVar2;
      }
      uVar12 = *puVar5;
      if (uVar12 == 0) {
        iVar7 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar7 = iVar14 + -1;
        }
        uVar16 = 0;
        uVar17 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar17 = uVar16;
        }
        iVar13 = 0;
        do {
          if (uVar17 == uVar16) goto LAB_140c9e154;
          iVar13 = iVar13 + 0x20;
          uVar12 = puVar5[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar16 = 0;
        iVar13 = 0;
      }
      uVar17 = (ulonglong)(-uVar12 & uVar12);
      uVar3 = uVar17 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar14 <= iVar7) {
        iVar7 = iVar14;
      }
    }
    if (iVar7 < iVar14) {
      uVar12 = 0xffffffff;
      do {
        FUN_140c9e334((longlong)iVar7 * 0x98 + *(longlong *)(param_1 + 0x178) + 8);
        uVar12 = ~(uint)uVar17 & uVar12;
        puVar5 = *(uint **)(param_1 + 0x198);
        if (*(uint **)(param_1 + 0x198) == (uint *)0x0) {
          puVar5 = puVar2;
        }
        iVar14 = *(int *)(param_1 + 0x1a0);
        iVar7 = (int)uVar16;
        lVar15 = (longlong)iVar7;
        uVar8 = puVar5[lVar15] & uVar12;
        if (uVar8 == 0) {
          iVar11 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar11 = iVar14 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar9 = iVar11;
          if (iVar11 < iVar7) {
            iVar9 = iVar7;
          }
          if (iVar11 <= iVar7) break;
          lVar6 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar8 = puVar5[lVar15 + lVar6 + 1];
            if (uVar8 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar9 - lVar15 == lVar6) goto LAB_140c9e154;
          }
          uVar16 = (ulonglong)(iVar7 + (int)lVar6 + 1);
          uVar12 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar8 & uVar8);
        uVar3 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar14);
    }
LAB_140c9e154:
    *(undefined4 *)(param_1 + 0x180) = 0;
    if (*(int *)(param_1 + 0x184) < 0) {
      FUN_140f776e6(plVar1,0);
    }
    *(undefined8 *)(param_1 + 0x1a8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c9e334 FUN_140c9e334 body=160 status=ok
// SIG undefined FUN_140c9e334(void)

void FUN_140c9e334(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x70);
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
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c9e3dc FUN_140c9e3dc body=1931 status=ok
// SIG undefined FUN_140c9e3dc(void)

undefined8 FUN_140c9e3dc(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined8 *puStack_2a0;
  int local_28c;
  double *local_288;
  longlong local_280;
  double *local_278;
  longlong local_270;
  double local_268 [12];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  double local_1d0 [2];
  double local_1c0;
  double local_1b8 [3];
  undefined4 local_1a0;
  undefined2 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  float local_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  dVar4 = *param_2;
  uVar19 = CONCAT71((int7)((DAT_14c707940 ^ (ulonglong)auStack_2c8) >> 8),1);
  if ((dVar4 != 0.0) && (*(int *)((longlong)dVar4 + 0x58) == *(int *)(param_2 + 2))) {
    iVar15 = *(int *)((longlong)dVar4 + 0x88);
    local_158._8_4_ = SUB84((double)*(float *)((longlong)dVar4 + 0x44),0);
    local_158._0_8_ = (double)*(float *)((longlong)dVar4 + 0x40);
    local_158._12_4_ = (int)((ulonglong)(double)*(float *)((longlong)dVar4 + 0x44) >> 0x20);
    local_148 = (double)*(float *)((longlong)dVar4 + 0x48);
    dStack_140 = (double)*(float *)((longlong)dVar4 + 0x4c);
    local_138 = *(undefined8 *)((longlong)dVar4 + 0x20);
    uStack_130 = *(undefined8 *)((longlong)dVar4 + 0x28);
    local_128 = *(undefined8 *)((longlong)dVar4 + 0x30);
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    lVar16 = *(longlong *)(param_1 + 0x90);
    if (lVar16 == 0) {
      dVar1 = *(double *)(param_1 + 0x38);
      dVar25 = *(double *)(param_1 + 0x40);
      dVar28 = *(double *)(param_1 + 0x48);
      dVar6 = -dVar28;
      dVar7 = -dVar25;
      dVar22 = -dVar1;
    }
    else {
      dVar6 = *(double *)(param_1 + 0xa0);
      dVar2 = *(double *)(param_1 + 0xa8);
      dVar7 = *(double *)(param_1 + 0xb0);
      dVar22 = *(double *)(lVar16 + 0x20) * *(double *)(param_1 + 0xe0);
      dVar24 = *(double *)(lVar16 + 0x28) * *(double *)(param_1 + 0xe8);
      dVar20 = *(double *)(lVar16 + 0x30) * *(double *)(param_1 + 0xf0);
      dVar1 = *(double *)(param_1 + 0xb8);
      dVar25 = dVar24 * dVar6 - dVar2 * dVar22;
      dVar27 = dVar20 * dVar2 - dVar7 * dVar24;
      dVar28 = dVar22 * dVar7 - dVar6 * dVar20;
      dVar27 = dVar27 + dVar27;
      dVar28 = dVar28 + dVar28;
      dVar25 = dVar25 + dVar25;
      dVar22 = (dVar25 * dVar2 - dVar28 * dVar7) + dVar1 * dVar27 + dVar22 +
               *(double *)(param_1 + 0xc0);
      dVar7 = (dVar7 * dVar27 - dVar6 * dVar25) + *(double *)(param_1 + 0xb8) * dVar28 + dVar24 +
              *(double *)(param_1 + 200);
      dVar6 = dVar25 * dVar1 + dVar20 + (dVar28 * dVar6 - dVar27 * dVar2) +
              *(double *)(param_1 + 0xd0);
      dVar2 = *(double *)(lVar16 + 0x10);
      dVar28 = dVar2 + dVar6;
      dVar25 = dVar2 + dVar7;
      dVar1 = dVar2 + dVar22;
      dVar6 = dVar6 - dVar2;
      dVar7 = dVar7 - dVar2;
      dVar22 = dVar22 - dVar2;
    }
    uVar19 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
    if (0 < iVar15) {
      local_270 = (longlong)dVar4 + 0x78;
      dVar28 = (dVar28 - dVar6) * 0.5;
      dVar25 = (dVar25 - dVar7) * 0.5;
      dVar1 = (dVar1 - dVar22) * 0.5;
      local_280 = param_1 + 0x80;
      local_288 = (double *)(param_1 + 0xa0);
      local_278 = (double *)(param_1 + 0x58);
      lVar16 = 0;
      local_28c = iVar15;
      do {
        lVar11 = *(longlong *)((longlong)dVar4 + 0x80);
        if (*(longlong *)((longlong)dVar4 + 0x80) == 0) {
          lVar11 = local_270;
        }
        lVar5 = *(longlong *)(lVar11 + lVar16 * 8);
        uVar19 = *(undefined8 *)(lVar5 + 0x10);
        if (1 < iVar15) {
          dVar20 = dVar25;
          dVar24 = dVar28;
          dVar2 = dVar1;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar2 = *(double *)(param_1 + 0x38);
            dVar20 = *(double *)(param_1 + 0x40);
            dVar24 = *(double *)(param_1 + 0x48);
          }
          local_1d0[0] = *(double *)(lVar5 + 0x18) - dVar2;
          local_1d0[1] = *(double *)(lVar5 + 0x20) - dVar20;
          local_1c0 = *(double *)(lVar5 + 0x28) - dVar24;
          local_1b8[0] = *(double *)(lVar5 + 0x30) + dVar2;
          local_1b8[1] = *(double *)(lVar5 + 0x38) + dVar20;
          local_1b8[2] = *(double *)(lVar5 + 0x40) + dVar24;
          local_268[0] = dVar22 + dVar1;
          local_268[1] = dVar7 + dVar25;
          local_268[2] = dVar6 + dVar28;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            local_268[0] = *(double *)(param_1 + 0xc0);
            local_268[1] = *(double *)(param_1 + 200);
            local_268[2] = *(double *)(param_1 + 0xd0);
          }
          lVar10 = 0;
          do {
            dVar2 = local_268[lVar10];
            if ((dVar2 < local_1d0[lVar10]) ||
               (local_1b8[lVar10] <= dVar2 && dVar2 != local_1b8[lVar10])) goto LAB_140c9ea61;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 3);
        }
        cVar8 = '\x02';
        if (((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) ||
           (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                              (*(longlong **)(param_1 + 0x98),local_280,lVar5,dVar4), cVar8 != '\0')
           ) {
          local_1c0 = (double)CONCAT44(local_1c0._4_4_,0xffffffff);
          local_1b8[0] = 0.0;
          local_1b8[1] = 0.0;
          local_1b8[2] = 0.0;
          local_1a0 = 0xffffffff;
          local_198 = 0;
          local_1d0[1] = *(double *)(lVar11 + lVar16 * 8);
          local_1d0[0] = dVar4;
          if (*(longlong *)(param_1 + 0x90) != 0) {
            uVar3 = *(ushort *)(param_1 + 0x50);
            lVar11 = 0xc;
            pdVar14 = local_268;
            pdVar13 = local_288;
            if ((uVar3 >> 9 & 1) == 0) {
              for (; lVar11 != 0; lVar11 = lVar11 + -1) {
                *pdVar14 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar14 = pdVar14 + 1;
              }
              local_2a8 = 0;
              puStack_2a0 = (undefined8 *)0x0;
              cVar9 = FUN_140682465(uVar19,local_158);
              uVar17 = 0;
              uVar18 = 0;
              uVar19 = 0;
              uVar21 = 0;
              uVar23 = 0;
              uVar26 = 0;
              uVar29 = 0;
              uVar30 = 0;
              uVar31 = 0;
              iVar15 = local_28c;
              if (cVar9 != '\0') goto LAB_140c9e95d;
            }
            else {
              for (; lVar11 != 0; lVar11 = lVar11 + -1) {
                *pdVar14 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar14 = pdVar14 + 1;
              }
              puStack_2a0 = &local_208;
              local_2a8 = 0;
              cVar9 = FUN_140682465(uVar19,local_158);
              iVar15 = local_28c;
              if (cVar9 != '\0') {
                uVar30 = (undefined4)local_1e0;
                uVar31 = (undefined4)((ulonglong)local_1e0 >> 0x20);
                uVar18 = (uint)((ulonglong)local_1d8 >> 0x20) ^ 0x80000000;
                uVar17 = (undefined4)local_1d8;
                uVar19 = local_208;
                uVar21 = local_200;
                uVar23 = local_1f8;
                uVar26 = local_1f0;
                uVar29 = local_1e8;
LAB_140c9e95d:
                iVar15 = local_28c;
                local_160 = (float)(double)CONCAT44(uVar18,uVar17);
                local_190 = uVar26;
                local_188 = uVar29;
                local_180 = CONCAT44(uVar31,uVar30);
                local_178 = uVar19;
                local_170 = uVar21;
                local_168 = uVar23;
                local_198 = 0x404;
                if (0.0 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != 0.0
                   ) {
                  local_198 = 7;
                }
                if ((uVar3 & 0x200) != 0) {
                  local_198 = 7;
                }
                local_1c0 = (double)CONCAT44(local_1c0._4_4_,0xffffffff);
                local_1b8[2] = local_278[2];
                local_1b8[0] = *local_278;
                local_1b8[1] = local_278[1];
                if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                  cVar8 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                    (*(longlong **)(param_1 + 0x98),local_280,local_1d0);
                }
                if (cVar8 != '\0') {
                  if ((cVar8 == '\x02') || (*(char *)(param_1 + 0x52) == '\x01')) {
                    pdVar14 = *(double **)(param_1 + 0x70);
LAB_140c9ea32:
                    pdVar12 = local_1d0;
                    pdVar13 = pdVar14;
                    for (lVar11 = 0xf; pdVar13 = pdVar13 + 1, lVar11 != 0; lVar11 = lVar11 + -1) {
                      *pdVar13 = *pdVar12;
                      pdVar12 = pdVar12 + 1;
                    }
                    *(undefined1 *)((longlong)pdVar14 + 0x84) = 1;
                  }
                  else {
                    pdVar14 = *(double **)(param_1 + 0x70);
                    if (*(char *)((longlong)pdVar14 + 0x85) == '\x01') goto LAB_140c9ea32;
                    iVar15 = *(int *)(pdVar14 + 0x792);
                    *(uint *)(pdVar14 + 0x792) = iVar15 + 1U;
                    if (*(uint *)((longlong)pdVar14 + 0x3c94) < iVar15 + 1U) {
                      FUN_1412de590(pdVar14 + 0x11,iVar15);
                    }
                    pdVar13 = pdVar14 + 0x11;
                    if ((double *)pdVar14[0x791] != (double *)0x0) {
                      pdVar13 = (double *)pdVar14[0x791];
                    }
                    pdVar14 = local_1d0;
                    pdVar13 = pdVar13 + (longlong)iVar15 * 0xf;
                    for (lVar11 = 0xf; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *pdVar13 = *pdVar14;
                      pdVar14 = pdVar14 + 1;
                      pdVar13 = pdVar13 + 1;
                    }
                  }
                  iVar15 = local_28c;
                  if (*(char *)(param_1 + 0x52) != '\0') {
                    uVar19 = 0;
                    goto LAB_140c9eadb;
                  }
                }
              }
            }
          }
        }
LAB_140c9ea61:
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)((longlong)dVar4 + 0x88));
      uVar19 = CONCAT71((int7)(int3)((uint)*(int *)((longlong)dVar4 + 0x88) >> 8),1);
    }
  }
LAB_140c9eadb:
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
}



// FUNCTION 140c9eb68 FUN_140c9eb68 body=21 status=ok
// SIG undefined FUN_140c9eb68(void)

undefined * FUN_140c9eb68(void)

{
  FUN_140c9eb7e();
  return &DAT_14caef910;
}



// FUNCTION 140c9eb7e FUN_140c9eb7e body=205 status=ok
// SIG undefined FUN_140c9eb7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c9eb7e(void)

{
  if ((DAT_14caef977 & 2) != 0) {
    return;
  }
  DAT_14caef977 = DAT_14caef977 | 2;
  _DAT_14caef918 = L"FMaterialShaderMapContent";
  _DAT_14caef930 = FUN_146826540;
  _DAT_14caef938 = FUN_146825d77;
  _DAT_14caef940 = FUN_146825fd6;
  _DAT_14caef948 = FUN_1407e02ea;
  _DAT_14caef950 = FUN_146826273;
  _DAT_14caef928 = FUN_14357bcca;
  _DAT_14caef968 = 0xffffffff00000280;
  _DAT_14caef970 = 8;
  DAT_14caef974 = 0;
  _DAT_14caef958 = &LAB_147bc0068;
  FUN_14578c9f6();
  FUN_14578c97a();
  FUN_1407e00cc(&DAT_14caef910);
  return;
}



// FUNCTION 140c9ec4c FUN_140c9ec4c body=144 status=ok
// SIG undefined FUN_140c9ec4c(void)

longlong FUN_140c9ec4c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140c9ecde();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_140c9ec86;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140c9eda0(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_140c9ec86:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c9ecde FUN_140c9ecde body=193 status=ok
// SIG undefined FUN_140c9ecde(void)

int FUN_140c9ecde(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_140c9ed20:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140c9ed78;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140c9ed78;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_140c9ed7e;
    }
  }
  return -1;
LAB_140c9ed78:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_140c9ed7e:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_140c9ed20;
}



// FUNCTION 140c9eda0 FUN_140c9eda0 body=298 status=ok
// SIG undefined FUN_140c9eda0(void)

undefined4 *
FUN_140c9eda0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
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
  FUN_140c9efc4(param_1,local_58);
  FUN_140c9eecc(param_4,local_50);
  *(undefined4 *)(local_50 + 0x20) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140c9ef28(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
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
      *(uint *)(local_50 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x20) =
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
      FUN_140f2b3b6(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c9eecc FUN_140c9eecc body=92 status=ok
// SIG undefined FUN_140c9eecc(void)

undefined8 * FUN_140c9eecc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 140c9ef28 FUN_140c9ef28 body=156 status=ok
// SIG undefined FUN_140c9ef28(void)

void FUN_140c9ef28(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_140c9ecde();
    if (iVar10 != -1) {
      plVar1 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      *(undefined4 *)(plVar1 + 2) = param_3[4];
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)plVar1 = uVar2;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
      *(undefined4 *)(plVar1 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
      FUN_1467d5dec(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_140c9ef5c;
    }
  }
  uVar9 = 0;
LAB_140c9ef5c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 140c9efc4 FUN_140c9efc4 body=230 status=ok
// SIG undefined FUN_140c9efc4(void)

int * FUN_140c9efc4(longlong *param_1,int *param_2)

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
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 140c9f0b8 FUN_140c9f0b8 body=62 status=ok
// SIG undefined FUN_140c9f0b8(void)

undefined8 * FUN_140c9f0b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6d4c90;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c9f0f6 FUN_140c9f0f6 body=4980 status=ok
// SIG undefined FUN_140c9f0f6(void)

void FUN_140c9f0f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  ushort uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  undefined1 auStack_2f8 [46];
  undefined2 local_2ca;
  longlong local_2c8;
  longlong local_2c0;
  uint local_2b8;
  int local_2b4;
  longlong local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  longlong local_298;
  longlong *local_290;
  longlong local_288;
  longlong local_280;
  undefined8 uStack_278;
  ushort *local_270;
  longlong local_268;
  int local_260;
  ushort local_254 [2];
  ushort *local_250;
  longlong local_248;
  int local_240;
  int local_230;
  int local_22c;
  uint local_228 [8];
  int local_208;
  int local_204;
  longlong local_200;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  uint local_1e0;
  uint local_1d8 [8];
  undefined8 local_1b8;
  uint local_1b0 [8];
  undefined8 local_190;
  longlong local_188;
  ulonglong uStack_180;
  undefined1 local_178 [32];
  undefined8 local_158;
  undefined1 auStack_150 [32];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ushort local_110;
  undefined2 local_10e;
  longlong local_f0;
  undefined1 local_e8 [32];
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [32];
  longlong local_90;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar12 = FUN_14038fb82();
  uVar5 = *(undefined2 *)(lVar12 + 0xe6);
  lVar12 = FUN_14009d2a0();
  uVar6 = *(ushort *)(lVar12 + 0x4a);
  lVar12 = *(longlong *)(param_1 + 0x28);
  local_2a8 = param_1;
  local_2b0 = FUN_14009d2a0();
  lVar13 = FUN_14038fb82();
  lVar20 = local_2b0;
  lVar14 = *(longlong *)(lVar12 + 0x5d8);
  plVar21 = *(longlong **)(lVar12 + 0x5e0);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
  }
  local_2c0 = lVar12;
  if (*(char *)(lVar14 + 0x7c) != '\x04') goto LAB_140ca0092;
  uVar7 = *(ushort *)(local_2b0 + 0x11a);
  local_1f0 = CONCAT22(uVar5,uVar6);
  uStack_1ec = CONCAT22(uStack_1ec._2_2_,*(undefined2 *)(local_2b0 + 0xea));
  uStack_1e8._0_2_ = (ushort)(byte)uStack_1e8;
  uStack_1e4 = 0x6ff;
  local_1e0 = local_1e0 & 0xffffff00;
  local_1b8 = 0x10000000000;
  local_190 = 0x10000000000;
  local_158 = 0x10000000000;
  local_188 = 0;
  uStack_180 = 0;
  local_130 = 0x10000000000;
  iVar19 = uVar6 + 1;
  iVar16 = iVar19;
  local_290 = plVar21;
  if (0xff < uVar6) {
    FUN_14497ddce(local_1d8,0);
    iVar16 = (int)local_1b8 + iVar19;
  }
  iVar22 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar22 = iVar16;
  }
  local_1b8._0_4_ = iVar16;
  if (iVar16 % 0x20 != 0) {
    bVar15 = -(char)(iVar16 % 0x20);
    local_1d8[iVar22 >> 5] = (local_1d8[iVar22 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
  }
  local_2ca = uVar5;
  local_2b4 = iVar19;
  local_298 = lVar13;
  FUN_1447c45ca(local_1d8,0,iVar19,0);
  uVar8 = local_1f0;
  local_2b8 = 1 << ((byte)uVar6 & 0x1f);
  local_2a0 = (ulonglong)(uVar6 >> 5);
  local_1d8[local_2a0] = local_1d8[local_2a0] | local_2b8;
  iVar16 = (int)local_1b8;
  uVar9 = local_1f0._2_2_;
  iVar19 = local_1f0._2_2_ + 1;
  iVar22 = iVar19 - (int)local_1b8;
  if (iVar22 != 0 && (int)local_1b8 <= iVar19) {
    if ((int)local_1b8 == 0) {
LAB_140c9f2a2:
      if (local_1b8._4_4_ <= (int)(uint)local_1f0._2_2_) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar19 = (int)local_1b8 + iVar22;
      }
      iVar18 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar18 = iVar19;
      }
      local_1b8._0_4_ = iVar19;
      iVar19 = (int)local_1b8;
      if (iVar19 % 0x20 != 0) {
        bVar15 = -(char)(iVar19 % 0x20);
        local_1d8[iVar18 >> 5] = (local_1d8[iVar18 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
        iVar19 = (int)local_1b8;
      }
    }
    else {
      iVar18 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar18 = (int)local_1b8 + -1;
      }
      if (iVar18 >> 5 != (uint)(local_1f0._2_2_ >> 5)) goto LAB_140c9f2a2;
    }
    local_1b8._0_4_ = iVar19;
    FUN_1447c45ca(local_1d8,iVar16,iVar22,0);
  }
  uVar11 = uStack_1ec;
  local_1d8[uVar9 >> 5] = local_1d8[uVar9 >> 5] | 1 << ((byte)((uint)uVar8 >> 0x10) & 0x1f);
  iVar16 = (int)local_1b8;
  uVar9 = (ushort)uStack_1ec;
  iVar19 = (uStack_1ec & 0xffff) + 1;
  iVar22 = iVar19 - (int)local_1b8;
  if (iVar22 != 0 && (int)local_1b8 <= iVar19) {
    if ((int)local_1b8 == 0) {
LAB_140c9f339:
      if (local_1b8._4_4_ <= (int)(uStack_1ec & 0xffff)) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar19 = (int)local_1b8 + iVar22;
      }
      iVar18 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar18 = iVar19;
      }
      local_1b8._0_4_ = iVar19;
      iVar19 = (int)local_1b8;
      if (iVar19 % 0x20 != 0) {
        bVar15 = -(char)(iVar19 % 0x20);
        local_1d8[iVar18 >> 5] = (local_1d8[iVar18 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
        iVar19 = (int)local_1b8;
      }
    }
    else {
      iVar18 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar18 = (int)local_1b8 + -1;
      }
      if (iVar18 >> 5 != (uint)((ushort)uStack_1ec >> 5)) goto LAB_140c9f339;
    }
    local_1b8._0_4_ = iVar19;
    FUN_1447c45ca(local_1d8,iVar16,iVar22,0);
  }
  local_1d8[uVar9 >> 5] = local_1d8[uVar9 >> 5] | 1 << ((byte)uVar11 & 0x1f);
  iVar16 = (int)local_1b8;
  iVar19 = uVar7 + 1;
  iVar22 = iVar19 - (int)local_1b8;
  if (iVar22 != 0 && (int)local_1b8 <= iVar19) {
    if ((int)local_1b8 == 0) {
LAB_140c9f3d3:
      if (local_1b8._4_4_ <= (int)(uint)uVar7) {
        local_1b8._4_4_ = 0x100;
        FUN_14497ddce(local_1d8,(int)local_1b8);
        iVar19 = (int)local_1b8 + iVar22;
      }
      iVar18 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar18 = iVar19;
      }
      local_1b8._0_4_ = iVar19;
      iVar19 = (int)local_1b8;
      if (iVar19 % 0x20 != 0) {
        bVar15 = -(char)(iVar19 % 0x20);
        local_1d8[iVar18 >> 5] = (local_1d8[iVar18 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
        iVar19 = (int)local_1b8;
      }
    }
    else {
      iVar18 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar18 = (int)local_1b8 + -1;
      }
      if (iVar18 >> 5 != (uint)(uVar7 >> 5)) goto LAB_140c9f3d3;
    }
    local_1b8._0_4_ = iVar19;
    FUN_1447c45ca(local_1d8,iVar16,iVar22,0);
  }
  local_1d8[uVar7 >> 5] = local_1d8[uVar7 >> 5] | 1 << ((byte)uVar7 & 0x1f);
  uVar10 = local_190;
  uVar7 = *(ushort *)(lVar20 + 0x130);
  iVar16 = uVar7 + 1;
  iVar19 = iVar16 - (int)local_190;
  if (iVar19 != 0 && (int)local_190 <= iVar16) {
    if ((int)local_190 == 0) {
LAB_140c9f46c:
      if (local_190._4_4_ <= (int)(uint)uVar7) {
        local_190 = CONCAT44(0x100,(int)local_190);
        FUN_14497ddce(local_1b0,uVar10 & 0xffffffff);
        iVar16 = (int)local_190 + iVar19;
      }
      iVar22 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar22 = iVar16;
      }
      local_190 = CONCAT44(local_190._4_4_,iVar16);
      if (iVar16 % 0x20 != 0) {
        bVar15 = -(char)(iVar16 % 0x20);
        local_1b0[iVar22 >> 5] = (local_1b0[iVar22 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
      }
    }
    else {
      iVar22 = (int)local_190 + 0x1e;
      if (-1 < (int)local_190 + -1) {
        iVar22 = (int)local_190 + -1;
      }
      if (iVar22 >> 5 != (uint)(uVar7 >> 5)) goto LAB_140c9f46c;
      local_190 = CONCAT44(local_190._4_4_,iVar16);
    }
    FUN_1447c45ca(local_1b0,uVar10 & 0xffffffff,iVar19,0);
  }
  local_1b0[uVar7 >> 5] = local_1b0[uVar7 >> 5] | 1 << ((byte)uVar7 & 0x1f);
  local_2c8 = local_2c0 + 0x28;
  if ((((short)local_1f0 != -1) && (local_1f0._2_2_ != -1)) && ((ushort)uStack_1ec != -1)) {
    local_118 = CONCAT44(local_118._4_4_,local_1e0);
    local_128 = (undefined **)CONCAT44(uStack_1ec,local_1f0);
    uStack_120 = CONCAT44(uStack_1e4,uStack_1e8);
    local_f0 = 0;
    uVar11 = (int)local_1b8 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar11) {
      uVar17 = 0x100;
      if (0x100 < uVar11) {
        uVar17 = uVar11;
      }
      local_f0 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(&local_110,0);
    }
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_1b8);
    if ((int)local_1b8 != 0) {
      memcpy(&local_110,local_1d8,(ulonglong)((int)local_1b8 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_c8 = 0;
    uVar11 = (int)local_190 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar11) {
      uVar17 = 0x100;
      if (0x100 < uVar11) {
        uVar17 = uVar11;
      }
      local_c8 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(local_e8,0);
    }
    local_c8 = CONCAT44(local_c8._4_4_,(int)local_190);
    if ((int)local_190 != 0) {
      memcpy(local_e8,local_1b0,(ulonglong)((int)local_190 + 0x1fU >> 3 & 0xfffffffc));
    }
    uVar10 = uStack_180;
    lVar12 = local_188;
    local_c0 = 0;
    local_b8 = (int)uStack_180;
    if ((int)uStack_180 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1403b8c86(&local_c0,uStack_180 & 0xffffffff,0);
      FUN_1403b8bfd(local_c0,lVar12,uVar10 & 0xffffffff);
    }
    local_90 = 0;
    uVar11 = (int)local_158 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar11) {
      uVar17 = 0x100;
      if (0x100 < uVar11) {
        uVar17 = uVar11;
      }
      local_90 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(local_b0,0);
    }
    local_90 = CONCAT44(local_90._4_4_,(int)local_158);
    if ((int)local_158 != 0) {
      memcpy(local_b0,local_178,(ulonglong)((int)local_158 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_68 = 0;
    uVar11 = (int)local_130 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar11) {
      uVar17 = 0x100;
      if (0x100 < uVar11) {
        uVar17 = uVar11;
      }
      local_68 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(auStack_88,0);
    }
    local_68 = CONCAT44(local_68._4_4_,(int)local_130);
    if ((int)local_130 != 0) {
      memcpy(auStack_88,auStack_150,(ulonglong)((int)local_130 + 0x1fU >> 3 & 0xfffffffc));
    }
    lVar12 = local_2c0;
    local_60 = local_2c8;
    local_58 = *(undefined8 *)(local_2c0 + 0x270);
    cVar4 = *(char *)(local_2c0 + 0x298);
    local_248 = local_2c8;
    if (cVar4 == '\0') {
      *(int *)(local_2c0 + 0x28c) = *(int *)(local_2c0 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(local_2c0 + 0x28c) = *(int *)(local_2c0 + 0x28c) + 1;
      UNLOCK();
    }
    local_250 = &local_110;
    iVar19 = FUN_1403b8464(&local_250,0);
    lVar14 = local_248;
    iVar16 = *(int *)(lVar12 + 0x38);
    local_240 = iVar19;
    if (iVar19 != iVar16) {
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar14 + 0x60) + (longlong)iVar19 * 8);
        local_240 = iVar19;
        if (cVar4 == '\0') {
          *(undefined4 *)(lVar12 + 0x14) = 0;
          FUN_140ca068a(lVar12,&local_128);
          if (lVar12 != 0) {
            *(undefined4 *)(lVar12 + 0x14) = 1;
          }
        }
        else {
          FUN_140ca068a(lVar12,&local_128);
        }
        iVar19 = FUN_1403b8464(&local_250,iVar19 + 1);
        local_240 = iVar19;
      } while (iVar19 != iVar16);
    }
    lVar20 = local_2b0;
    if (local_250 != (ushort *)0x0) {
      if (*(char *)(local_248 + 0x270) == '\0') {
        *(int *)(local_248 + 0x264) = *(int *)(local_248 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_248 + 0x264) = *(int *)(local_248 + 0x264) + -1;
        UNLOCK();
      }
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  FUN_1403b8af8(&local_250,local_2a8 + 0xd0);
  iVar16 = local_230;
  uVar7 = *(ushort *)(lVar20 + 0x11a);
  iVar19 = uVar7 + 1;
  iVar22 = iVar19 - local_230;
  if (iVar22 != 0 && local_230 <= iVar19) {
    if (local_230 == 0) {
LAB_140c9f840:
      if (local_22c <= (int)(uint)uVar7) {
        local_22c = 0x100;
        FUN_14497ddce(&local_250,local_230);
        iVar19 = local_230 + iVar22;
      }
      iVar18 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar18 = iVar19;
      }
      local_230 = iVar19;
      iVar19 = local_230;
      if (iVar19 % 0x20 != 0) {
        bVar15 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)&local_250 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_250 + (longlong)(iVar18 >> 5) * 4) << (bVar15 & 0x1f))
             >> (bVar15 & 0x1f);
        iVar19 = local_230;
      }
    }
    else {
      iVar18 = local_230 + 0x1e;
      if (-1 < local_230 + -1) {
        iVar18 = local_230 + -1;
      }
      if (iVar18 >> 5 != (uint)(uVar7 >> 5)) goto LAB_140c9f840;
    }
    local_230 = iVar19;
    FUN_1447c45ca(&local_250,iVar16,iVar22,0);
  }
  puVar3 = (uint *)((longlong)&local_250 + (ulonglong)(uVar7 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar7 & 0x1f);
  iVar16 = local_208;
  uVar7 = *(ushort *)(lVar20 + 0x122);
  iVar19 = uVar7 + 1;
  iVar22 = iVar19 - local_208;
  if (iVar22 != 0 && local_208 <= iVar19) {
    if (local_208 == 0) {
LAB_140c9f8f2:
      if (local_204 <= (int)(uint)uVar7) {
        local_204 = 0x100;
        FUN_14497ddce(local_228,local_208);
        iVar19 = local_208 + iVar22;
      }
      iVar18 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar18 = iVar19;
      }
      local_208 = iVar19;
      iVar19 = local_208;
      if (iVar19 % 0x20 != 0) {
        bVar15 = -(char)(iVar19 % 0x20);
        local_228[iVar18 >> 5] = (local_228[iVar18 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
        iVar19 = local_208;
      }
    }
    else {
      iVar18 = local_208 + 0x1e;
      if (-1 < local_208 + -1) {
        iVar18 = local_208 + -1;
      }
      if (iVar18 >> 5 != (uint)(uVar7 >> 5)) goto LAB_140c9f8f2;
    }
    local_208 = iVar19;
    FUN_1447c45ca(local_228,iVar16,iVar22,0);
  }
  uVar5 = local_2ca;
  local_228[uVar7 >> 5] = local_228[uVar7 >> 5] | 1 << ((byte)uVar7 & 0x1f);
  local_128 = &PTR_FUN_14a4d7b60;
  local_10e = local_2ca;
  local_110 = uVar6;
  uStack_120 = FUN_14009d2a0();
  local_118 = FUN_14038fb82();
  FUN_140857d6a(local_2c8,&local_250,&local_128,1);
  iVar16 = local_2b4;
  uVar7 = *(ushort *)(lVar20 + 0x11a);
  local_1f0 = CONCAT22(uVar6,(short)local_1f0);
  uStack_1ec = CONCAT22(*(undefined2 *)(local_298 + 0xfa),uVar5);
  uStack_1e8._0_2_ = (ushort)(byte)uStack_1e8;
  uStack_1e4 = 0x6ff;
  local_1e0 = local_1e0 & 0xffffff00;
  local_1b8 = 0x10000000000;
  local_190 = 0x10000000000;
  local_158 = 0x10000000000;
  local_188 = 0;
  uStack_180 = 0;
  local_130 = 0x10000000000;
  iVar19 = local_2b4;
  if (0xff < uVar6) {
    FUN_14497ddce(local_1d8,0);
    iVar19 = (int)local_1b8 + iVar16;
  }
  iVar22 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar22 = iVar19;
  }
  local_1b8 = CONCAT44(local_1b8._4_4_,iVar19);
  if (iVar19 % 0x20 != 0) {
    bVar15 = -(char)(iVar19 % 0x20);
    local_1d8[iVar22 >> 5] = (local_1d8[iVar22 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
  }
  FUN_1447c45ca(local_1d8,0,iVar16,0);
  uVar11 = uStack_1ec;
  local_1d8[local_2a0] = local_1d8[local_2a0] | local_2b8;
  uVar10 = local_1b8;
  uVar6 = (ushort)uStack_1ec;
  iVar16 = (uStack_1ec & 0xffff) + 1;
  iVar19 = iVar16 - (int)local_1b8;
  if (iVar19 != 0 && (int)local_1b8 <= iVar16) {
    if ((int)local_1b8 == 0) {
LAB_140c9faa4:
      if (local_1b8._4_4_ <= (int)(uStack_1ec & 0xffff)) {
        local_1b8 = CONCAT44(0x100,(int)local_1b8);
        FUN_14497ddce(local_1d8,uVar10 & 0xffffffff);
        iVar16 = (int)local_1b8 + iVar19;
      }
      iVar22 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar22 = iVar16;
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar16);
      if (iVar16 % 0x20 != 0) {
        bVar15 = -(char)(iVar16 % 0x20);
        local_1d8[iVar22 >> 5] = (local_1d8[iVar22 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
      }
    }
    else {
      iVar22 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar22 = (int)local_1b8 + -1;
      }
      if (iVar22 >> 5 != (uint)((ushort)uStack_1ec >> 5)) goto LAB_140c9faa4;
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar16);
    }
    FUN_1447c45ca(local_1d8,uVar10 & 0xffffffff,iVar19,0);
  }
  uVar17 = uStack_1ec;
  local_1d8[uVar6 >> 5] = local_1d8[uVar6 >> 5] | 1 << ((byte)uVar11 & 0x1f);
  uVar10 = local_1b8;
  uVar6 = uStack_1ec._2_2_;
  iVar16 = uStack_1ec._2_2_ + 1;
  iVar19 = iVar16 - (int)local_1b8;
  if (iVar19 != 0 && (int)local_1b8 <= iVar16) {
    if ((int)local_1b8 == 0) {
LAB_140c9fb47:
      if (local_1b8._4_4_ <= (int)(uint)uStack_1ec._2_2_) {
        local_1b8 = CONCAT44(0x100,(int)local_1b8);
        FUN_14497ddce(local_1d8,uVar10 & 0xffffffff);
        iVar16 = (int)local_1b8 + iVar19;
      }
      iVar22 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar22 = iVar16;
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar16);
      if (iVar16 % 0x20 != 0) {
        bVar15 = -(char)(iVar16 % 0x20);
        local_1d8[iVar22 >> 5] = (local_1d8[iVar22 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
      }
    }
    else {
      iVar22 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar22 = (int)local_1b8 + -1;
      }
      if (iVar22 >> 5 != (uint)(uStack_1ec._2_2_ >> 5)) goto LAB_140c9fb47;
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar16);
    }
    FUN_1447c45ca(local_1d8,uVar10 & 0xffffffff,iVar19,0);
  }
  local_1d8[uVar6 >> 5] = local_1d8[uVar6 >> 5] | 1 << ((byte)(uVar17 >> 0x10) & 0x1f);
  uVar10 = local_1b8;
  iVar16 = uVar7 + 1;
  iVar19 = iVar16 - (int)local_1b8;
  if (iVar19 != 0 && (int)local_1b8 <= iVar16) {
    if ((int)local_1b8 == 0) {
LAB_140c9fbda:
      if (local_1b8._4_4_ <= (int)(uint)uVar7) {
        local_1b8 = CONCAT44(0x100,(int)local_1b8);
        FUN_14497ddce(local_1d8,uVar10 & 0xffffffff);
        iVar16 = (int)local_1b8 + iVar19;
      }
      iVar22 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar22 = iVar16;
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar16);
      if (iVar16 % 0x20 != 0) {
        bVar15 = -(char)(iVar16 % 0x20);
        local_1d8[iVar22 >> 5] = (local_1d8[iVar22 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
      }
    }
    else {
      iVar22 = (int)local_1b8 + 0x1e;
      if (-1 < (int)local_1b8 + -1) {
        iVar22 = (int)local_1b8 + -1;
      }
      if (iVar22 >> 5 != (uint)(uVar7 >> 5)) goto LAB_140c9fbda;
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar16);
    }
    FUN_1447c45ca(local_1d8,uVar10 & 0xffffffff,iVar19,0);
  }
  local_1d8[uVar7 >> 5] = local_1d8[uVar7 >> 5] | 1 << ((byte)uVar7 & 0x1f);
  local_254[0] = *(ushort *)(lVar20 + 0x130);
  local_254[1] = *(undefined2 *)(lVar20 + 0x11c);
  lVar12 = 0;
  do {
    uVar10 = local_190;
    uVar6 = *(ushort *)((longlong)local_254 + lVar12);
    iVar16 = uVar6 + 1;
    iVar19 = iVar16 - (int)local_190;
    if (iVar19 != 0 && (int)local_190 <= iVar16) {
      if ((int)local_190 == 0) {
LAB_140c9fca0:
        if (local_190._4_4_ <= (int)(uint)uVar6) {
          local_190 = CONCAT44(0x100,(int)local_190);
          FUN_14497ddce(local_1b0,uVar10 & 0xffffffff);
          iVar16 = (int)local_190 + iVar19;
        }
        iVar22 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar22 = iVar16;
        }
        local_190 = CONCAT44(local_190._4_4_,iVar16);
        if (iVar16 % 0x20 != 0) {
          bVar15 = -(char)(iVar16 % 0x20);
          local_1b0[iVar22 >> 5] = (local_1b0[iVar22 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
        }
      }
      else {
        iVar22 = (int)local_190 + 0x1e;
        if (-1 < (int)local_190 + -1) {
          iVar22 = (int)local_190 + -1;
        }
        if (iVar22 >> 5 != (uint)(uVar6 >> 5)) goto LAB_140c9fca0;
        local_190 = CONCAT44(local_190._4_4_,iVar16);
      }
      FUN_1447c45ca(local_1b0,uVar10 & 0xffffffff,iVar19,0);
    }
    lVar14 = local_2c0;
    local_1b0[uVar6 >> 5] = local_1b0[uVar6 >> 5] | 1 << ((byte)uVar6 & 0x1f);
    lVar12 = lVar12 + 2;
  } while (lVar12 != 4);
  local_288 = local_2c0;
  local_280 = 0;
  uStack_278 = 0;
  if (((local_1f0._2_2_ != -1) && ((ushort)uStack_1ec != -1)) && (uStack_1ec._2_2_ != -1)) {
    local_118 = CONCAT44(local_118._4_4_,local_1e0);
    local_128 = (undefined **)CONCAT44(uStack_1ec,local_1f0);
    uStack_120 = CONCAT44(uStack_1e4,uStack_1e8);
    local_f0 = 0;
    uVar11 = (int)local_1b8 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar11) {
      uVar17 = 0x100;
      if (0x100 < uVar11) {
        uVar17 = uVar11;
      }
      local_f0 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(&local_110,0);
    }
    local_f0 = CONCAT44(local_f0._4_4_,(int)local_1b8);
    if ((int)local_1b8 != 0) {
      memcpy(&local_110,local_1d8,(ulonglong)((int)local_1b8 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_c8 = 0;
    uVar11 = (int)local_190 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar11) {
      uVar17 = 0x100;
      if (0x100 < uVar11) {
        uVar17 = uVar11;
      }
      local_c8 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(local_e8,0);
    }
    local_c8 = CONCAT44(local_c8._4_4_,(int)local_190);
    if ((int)local_190 != 0) {
      memcpy(local_e8,local_1b0,(ulonglong)((int)local_190 + 0x1fU >> 3 & 0xfffffffc));
    }
    uVar10 = uStack_180;
    lVar12 = local_188;
    local_c0 = 0;
    local_b8 = (int)uStack_180;
    if ((int)uStack_180 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_1403b8c86(&local_c0,uStack_180 & 0xffffffff,0);
      FUN_1403b8bfd(local_c0,lVar12,uVar10 & 0xffffffff);
    }
    local_90 = 0;
    uVar11 = (int)local_158 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar11) {
      uVar17 = 0x100;
      if (0x100 < uVar11) {
        uVar17 = uVar11;
      }
      local_90 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(local_b0,0);
    }
    local_90 = CONCAT44(local_90._4_4_,(int)local_158);
    if ((int)local_158 != 0) {
      memcpy(local_b0,local_178,(ulonglong)((int)local_158 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_68 = 0;
    uVar11 = (int)local_130 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar11) {
      uVar17 = 0x100;
      if (0x100 < uVar11) {
        uVar17 = uVar11;
      }
      local_68 = (ulonglong)uVar17 << 0x20;
      FUN_14497ddce(auStack_88,0);
    }
    local_68 = CONCAT44(local_68._4_4_,(int)local_130);
    if ((int)local_130 != 0) {
      memcpy(auStack_88,auStack_150,(ulonglong)((int)local_130 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_60 = local_2c8;
    local_58 = *(undefined8 *)(lVar14 + 0x270);
    cVar4 = *(char *)(lVar14 + 0x298);
    local_268 = local_2c8;
    if (cVar4 == '\0') {
      *(int *)(lVar14 + 0x28c) = *(int *)(lVar14 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar14 + 0x28c) = *(int *)(lVar14 + 0x28c) + 1;
      UNLOCK();
    }
    local_270 = &local_110;
    iVar19 = FUN_1403b8464(&local_270,0);
    lVar12 = local_268;
    iVar16 = *(int *)(lVar14 + 0x38);
    local_260 = iVar19;
    if (iVar19 != iVar16) {
      do {
        lVar14 = *(longlong *)(*(longlong *)(lVar12 + 0x60) + (longlong)iVar19 * 8);
        local_260 = iVar19;
        if (cVar4 == '\0') {
          *(undefined4 *)(lVar14 + 0x14) = 0;
          FUN_140ca046c(&local_288,lVar14,local_58,&local_128);
          if (lVar14 != 0) {
            *(undefined4 *)(lVar14 + 0x14) = 1;
          }
        }
        else {
          FUN_140ca046c(&local_288,lVar14,local_58,&local_128);
        }
        iVar19 = FUN_1403b8464(&local_270,iVar19 + 1);
        local_260 = iVar19;
      } while (iVar19 != iVar16);
    }
    if (local_270 != (ushort *)0x0) {
      if (*(char *)(local_268 + 0x270) == '\0') {
        *(int *)(local_268 + 0x264) = *(int *)(local_268 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_268 + 0x264) = *(int *)(local_268 + 0x264) + -1;
        UNLOCK();
      }
    }
    lVar14 = FUN_14038fb82();
    lVar12 = local_280;
    lVar20 = (longlong)(int)uStack_278;
    if (lVar20 != 0) {
      lVar13 = 0;
      do {
        FUN_1405e0ab4(local_288 + 0x28,*(undefined2 *)(lVar12 + lVar13),
                      *(undefined2 *)(lVar14 + 0xf10));
        lVar13 = lVar13 + 2;
      } while (lVar20 * 2 != lVar13);
    }
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    if (local_280 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  plVar21 = local_290;
  if (local_200 != 0) {
    FUN_1400020a8();
  }
LAB_140ca0092:
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar21 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ca046c FUN_140ca046c body=542 status=ok
// SIG undefined FUN_140ca046c(void)

void FUN_140ca046c(undefined8 param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_4 + 6)) goto LAB_140ca04b0;
      plVar10 = plVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_140ca04b0:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(param_4 + 4)) goto LAB_140ca04f0;
      plVar12 = plVar12 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_140ca04f0:
  lVar7 = *plVar10;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_4 + 2)) goto LAB_140ca053a;
      plVar11 = plVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_140ca053a:
  lVar8 = *plVar12;
  iVar4 = *(int *)(param_2 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    lVar5 = *plVar11;
    lVar6 = *(longlong *)(param_2 + 0x18);
    uVar9 = 0;
    do {
      FUN_140ca0a1c(param_1,*(undefined2 *)(lVar6 + uVar9 * 2),*(undefined8 *)(lVar5 + uVar9 * 8),
                    lVar8,lVar7);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
      lVar7 = lVar7 + 0x10;
    } while (uVar1 != uVar9);
  }
  if (plVar10 != (longlong *)0x0) {
    uVar9 = plVar10[2];
    if ((ulonglong)plVar10[2] < param_3) {
      uVar9 = param_3;
    }
    plVar10[2] = uVar9;
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140ca0683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140ca068a FUN_140ca068a body=884 status=ok
// SIG undefined FUN_140ca068a(void)

void FUN_140ca068a(longlong param_1,short *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  int local_84;
  int local_80;
  int local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_2[2]) goto LAB_140ca06db;
      plVar10 = plVar10 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_140ca06db:
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_2[1]) goto LAB_140ca0717;
      plVar11 = plVar11 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_140ca0717:
  lVar4 = *plVar10;
  local_80 = *(int *)(param_1 + 0x14);
  local_7c = iVar3;
  if (local_80 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *param_2) goto LAB_140ca0755;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_140ca0755:
  local_70 = *plVar11;
  local_84 = *(int *)(param_1 + 0x14);
  if (local_84 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  uVar2 = *(ushort *)(param_1 + 0xe);
  if (uVar2 != 0) {
    local_78 = *plVar9;
    lVar5 = 0;
    do {
      lVar8 = *(longlong *)(local_78 + lVar5);
      lVar6 = FUN_1406f4b62(lVar4);
      if (lVar6 == 0) {
LAB_140ca0974:
        lVar6 = 0;
      }
      else {
        lVar7 = FUN_1402d2740();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_140ca0974;
      }
      puVar1 = (undefined4 *)(local_70 + lVar5 * 2);
      local_60 = *puVar1;
      uStack_5c = puVar1[1];
      uStack_58 = puVar1[2];
      uStack_54 = puVar1[3];
      local_68 = lVar8;
      if (lVar8 != 0) {
        lVar8 = FUN_140ca0cfc(&local_68);
        if (lVar8 != 0) {
          if (DAT_14caec470 == 0) {
            local_a0 = &local_50;
            local_50 = FUN_1417df956;
            local_90 = FUN_14081d0ea;
            local_98 = &LAB_1463eaa20;
            local_a8 = &LAB_147bbd9ea;
            local_b0 = FUN_1401cf6d7;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000000;
            local_d0 = 8;
            local_d8 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if ((((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) &&
              (*(longlong *)(lVar8 + 0x110) != 0)) && (*(longlong *)(lVar8 + 0x110) == lVar6))
          goto LAB_140ca0858;
        }
        FUN_140ca1018(&local_68,lVar6);
      }
LAB_140ca0858:
      lVar5 = lVar5 + 8;
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar2 * 8 != lVar5);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_7c == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (local_80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_84 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ca0a1c FUN_140ca0a1c body=734 status=ok
// SIG undefined FUN_140ca0a1c(void)

void FUN_140ca0a1c(longlong param_1,undefined2 param_2,longlong param_3,undefined4 *param_4,
                  longlong *param_5)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_68;
  longlong lStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_50 = *param_4;
  uStack_4c = param_4[1];
  uStack_48 = param_4[2];
  uStack_44 = param_4[3];
  local_58 = param_3;
  if (param_3 == 0) {
    *param_5 = 0;
    param_5[1] = 0;
  }
  else {
    lVar3 = FUN_140ca0cfc(&local_58);
    if (lVar3 == 0) {
      local_68 = (code *)0x0;
      lStack_60 = 0;
      cVar2 = FUN_140fc53eb(param_5);
      if (cVar2 != '\0') goto LAB_140ca0abf;
      *param_5 = 0;
      param_5[1] = 0;
    }
    else {
      if (DAT_14caec470 == 0) {
        local_80 = &local_68;
        local_68 = FUN_1417df956;
        local_70 = FUN_14081d0ea;
        local_78 = &LAB_1463eaa20;
        local_88 = &LAB_147bbd9ea;
        local_90 = FUN_1401cf6d7;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x10000000;
        local_b0 = 8;
        local_b8 = 0x330;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
        lVar4 = FUN_1406f4b62(param_5);
        if (lVar4 != 0) {
          lVar6 = FUN_144a772c4();
          if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
             (*(longlong *)(lVar4 + 0x110) == lVar3)) {
            FUN_140ca1018(&local_58,lVar4);
            goto LAB_140ca0abf;
          }
        }
        uVar5 = FUN_145790f52(&local_58,lVar3);
        FUN_140ca0f3c(&local_68,uVar5);
        pcVar7 = local_68;
        if (DAT_14c950c29 == '\x01') {
          if (local_68 == (code *)0x0) {
            pcVar7 = (code *)0x0;
          }
          else {
            FUN_1456cec3c();
            pcVar7 = local_68;
          }
        }
        *param_5 = (longlong)pcVar7;
        param_5[1] = lStack_60;
        FUN_140ca1018(&local_58,uVar5);
      }
      else {
        if (*param_5 == lVar3) goto LAB_140ca0abf;
        FUN_140ca0f3c(&local_68,lVar3);
        pcVar7 = local_68;
        if (DAT_14c950c29 == '\x01') {
          if (local_68 == (code *)0x0) {
            pcVar7 = (code *)0x0;
          }
          else {
            FUN_1456cec3c();
            pcVar7 = local_68;
          }
        }
        *param_5 = (longlong)pcVar7;
        param_5[1] = lStack_60;
      }
    }
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
      FUN_1405e07ae((longlong *)(param_1 + 8),iVar1);
    }
    *(undefined2 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 2) = param_2;
  }
LAB_140ca0abf:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca0cfc FUN_140ca0cfc body=535 status=ok
// SIG undefined FUN_140ca0cfc(void)

longlong FUN_140ca0cfc(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = *(char *)((longlong)param_1 + 0x14);
  if (cVar1 == '\x03') {
    lVar4 = *param_1;
    if (lVar4 != 0) {
      lVar3 = FUN_1405fc15c();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar4 = *(longlong *)(lVar4 + 0x2a8);
        goto LAB_140ca0d5c;
      }
    }
  }
  else if (cVar1 == '\x01') {
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_142b47bc4;
        local_48 = &LAB_1478989f1;
        local_50 = &LAB_146391124;
        local_58 = L"Engine";
        local_60 = 0x10000000000;
        local_68 = 0x10000005;
        local_70 = 0x10;
        local_78 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
          DAT_14cac6e60 + 0x30)) {
        if (param_1[1] != 0) {
          lVar4 = (**(code **)(*plVar2 + 0x630))(plVar2);
          if (lVar4 != 0) goto LAB_140ca0d5c;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  else if (cVar1 == '\x02') {
    lVar4 = *param_1;
    if (lVar4 != 0) {
      lVar3 = FUN_14081cebe();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  else if ((cVar1 == '\x04') && (lVar4 = *param_1, lVar4 != 0)) {
    lVar3 = FUN_14586b90e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar4 = *(longlong *)(lVar4 + 0x2c8);
      goto LAB_140ca0d5c;
    }
  }
  lVar4 = 0;
LAB_140ca0d5c:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca0f3c FUN_140ca0f3c body=219 status=ok
// SIG undefined FUN_140ca0f3c(void)

longlong * FUN_140ca0f3c(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    *param_1 = 0;
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar2 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar4;
      }
    }
    uVar3 = (ulonglong)uVar2 << 0x20;
    *param_1 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  param_1[1] = uVar5 | uVar3;
  return param_1;
}



// FUNCTION 140ca1018 FUN_140ca1018 body=637 status=ok
// SIG undefined FUN_140ca1018(void)

void FUN_140ca1018(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = *(char *)((longlong)param_1 + 0x14);
  if (cVar1 == '\x01') {
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_50 = &local_30;
        local_30 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_142b47bc4;
        local_58 = &LAB_1478989f1;
        local_60 = &LAB_146391124;
        local_68 = L"Engine";
        local_70 = 0x10000000000;
        local_78 = 0x10000005;
        local_80 = 0x10;
        local_88 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
          DAT_14cac6e60 + 0x30)) {
        (**(code **)(*plVar2 + 0x620))(plVar2,&local_30);
        lVar3 = param_1[1];
        if ((lVar3 != 0) && ((longlong)local_28 != 0)) {
          lVar4 = 0;
          do {
            if (*(longlong *)(local_30 + lVar4) == lVar3) {
              (**(code **)(*plVar2 + 0x640))(plVar2,lVar3,param_2);
              goto LAB_140ca10e7;
            }
            lVar4 = lVar4 + 8;
          } while ((longlong)local_28 * 8 != lVar4);
        }
        (**(code **)(*plVar2 + 0x638))(plVar2,(int)param_1[2],param_2);
LAB_140ca10e7:
        if (local_30 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else if (cVar1 == '\x03') {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar4 = FUN_1405fc15c();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      }
    }
  }
  else if (cVar1 == '\x02') {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar4 = FUN_14081cebe();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      }
    }
  }
  else if ((cVar1 == '\x04') && (lVar3 = *param_1, lVar3 != 0)) {
    lVar4 = FUN_14586b90e();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca12d6 FUN_140ca12d6 body=736 status=ok
// SIG undefined FUN_140ca12d6(void)

undefined8 FUN_140ca12d6(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  code *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  undefined8 local_168;
  code *local_160;
  wchar_t *local_158;
  wchar_t *local_150;
  wchar_t *local_148;
  char local_140;
  wchar_t local_138 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar2 = (longlong *)*param_1;
  if (*plVar2 != 0) {
    uVar1 = *(uint *)(*plVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (iVar3 == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      uVar4 = 0;
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar5;
      }
      if (iVar3 == 0) goto LAB_140ca1467;
    }
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140ca1467;
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == iVar3 && ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      local_158 = local_138;
      local_140 = '\0';
      local_148 = (wchar_t *)&local_38;
      local_160 = *(code **)(param_1[1] + 0x18);
      local_150 = local_158;
      FUN_14005eb5c(&local_160,&local_158);
      if (local_148 <= local_150 + 9) {
        FUN_140213274(&local_158,9);
      }
      builtin_wcsncpy(local_150,L"_Animated",10);
      local_150 = local_150 + 9;
      FUN_1446f470e(&local_168,local_158,1);
      if (DAT_14caec470 == 0) {
        local_160 = FUN_1417df956;
        local_170 = FUN_14081d0ea;
        local_178 = &LAB_1463eaa20;
        local_188 = &LAB_147bbd9ea;
        local_190 = FUN_1401cf6d7;
        local_198 = L"Engine";
        local_1a0 = 0;
        local_1a8 = 0x10000000;
        local_1b0 = 8;
        local_1b8 = 0x330;
        local_180 = &local_160;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      local_1b8 = 0;
      FUN_140af9fb2(&local_160,*plVar2,DAT_14caec470,local_168);
      uVar4 = FUN_14090ceee(param_1[1],*plVar2,local_160);
      if (local_140 == '\x01') {
        FUN_1400020a8(local_158);
      }
      goto LAB_140ca1467;
    }
  }
  uVar4 = 0;
LAB_140ca1467:
  if ((local_38 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140ca15b8 FUN_140ca15b8 body=593 status=ok
// SIG undefined FUN_140ca15b8(void)

undefined1 * FUN_140ca15b8(undefined1 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x200000000;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x400000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_140ca180a(param_1 + 200);
  FUN_140ca180a(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined2 *)(param_1 + 0x428) = 0;
  param_1[0x430] = 0;
  param_1[0x438] = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined2 *)(param_1 + 0x488) = 4;
  *(undefined4 *)(param_1 + 0x470) = 0x3f800000;
  param_1[0x490] = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x498] = cVar1;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined2 *)(param_1 + 0x4c0) = 4;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  param_1[0x4c8] = 3;
  param_1[0x4d0] = cVar1;
  *(undefined2 *)(param_1 + 0x4d8) = 0;
  param_1[0x4da] = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined2 *)(param_1 + 0x500) = 0;
  param_1[0x508] = 0;
  param_1[0x510] = 0;
  param_1[0x518] = 0;
  FUN_140ca180a(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined2 *)(param_1 + 0x6e0) = 0;
  param_1[0x6e8] = 0;
  param_1[0x6f0] = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined2 *)(param_1 + 0x718) = 4;
  *(undefined4 *)(param_1 + 0x700) = 0x40000000;
  param_1[0x720] = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x728] = cVar1;
  *(undefined8 *)(param_1 + 0x730) = 0;
  *(undefined2 *)(param_1 + 0x750) = 4;
  *(undefined4 *)(param_1 + 0x738) = 0x41200000;
  param_1[0x758] = 3;
  param_1[0x760] = cVar1;
  param_1[0x7a0] = 0;
  *(undefined8 *)(param_1 + 0x778) = 0;
  *(undefined8 *)(param_1 + 0x780) = 0;
  *(undefined8 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined8 *)(param_1 + 0x798) = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x788) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x790) = uVar2;
  param_1[2000] = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x7b8) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x7c0) = uVar2;
  *(undefined8 *)(param_1 + 0x7c8) = DAT_14c8464f0;
  param_1[0x908] = 0;
  *(undefined8 *)(param_1 + 0x840) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  *(undefined8 *)(param_1 + 0x830) = 0;
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined8 *)(param_1 + 0x828) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined8 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x800) = 0;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x7f0) = 0;
  *(undefined8 *)(param_1 + 0x7f8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  return param_1;
}



// FUNCTION 140ca180a FUN_140ca180a body=479 status=ok
// SIG undefined FUN_140ca180a(void)

undefined8 * FUN_140ca180a(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ushort local_38;
  byte local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0x10) = 4;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 3;
  *(char *)(param_1 + 0x12) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x17) = 4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 3;
  *(char *)(param_1 + 0x19) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_58 = 0;
  local_38 = 4;
  local_50 = 0x3f800000;
  local_30 = 3;
  local_28 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_1403719a4(param_1 + 0x23,&local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_38 < 0x19) {
      puVar2 = &local_50;
    }
    else {
      puVar2 = (undefined4 *)CONCAT44(uStack_4c,local_50);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(CONCAT44(uStack_4c,local_50));
  }
  *(undefined2 *)(param_1 + 0x33) = 0;
  param_1[0x31] = 0x4400000042340000;
  *(undefined1 *)((longlong)param_1 + 0x19a) = 1;
  param_1[0x32] = 0x4500000044800000;
  *(undefined2 *)((longlong)param_1 + 0x19b) = 1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca19ea FUN_140ca19ea body=114 status=ok
// SIG undefined FUN_140ca19ea(void)

undefined8 *** FUN_140ca19ea(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 ***local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  ppppuVar1 = &local_20;
  local_28 = param_2;
  FUN_140ca1a5e(param_1,ppppuVar1,1 << ((byte)DAT_14cab3b74 & 0x1f));
  if ((local_18 == '\x01') || (local_18 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 140ca1a5e FUN_140ca1a5e body=1250 status=ok
// SIG undefined FUN_140ca1a5e(void)

longlong * FUN_140ca1a5e(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  byte *pbVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined8 *local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar5;
  uVar5 = param_3 - 1 & uVar5;
  uVar14 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  uVar19 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar19 >> 0x38;
  uVar14 = *param_1;
  bVar8 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar8 == 0) {
    uVar18 = 8;
  }
  else {
    uVar18 = 8;
    lVar10 = 0;
    do {
      uVar11 = (ushort)*(byte *)(uVar14 + 3 + lVar10);
      if (uVar18 < uVar11) {
        uVar18 = uVar11;
      }
      lVar10 = lVar10 + 6;
    } while ((ulonglong)((uint)bVar8 + (uint)bVar8) * 3 != lVar10);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  FUN_14086fe48(local_78,bVar8 + 1);
  lVar10 = (ulonglong)((uint)bVar8 * 2 + 2) * 3;
  bVar3 = (byte)(uVar19 >> 0x38);
  if (uVar20 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)bVar3 + (uint)(bVar3 == 0);
    pbVar12 = (byte *)(uVar14 + 3);
    uVar15 = 0;
    do {
      uVar16 = -(ulonglong)*pbVar12 & (lVar10 + (ulonglong)*pbVar12) - 1;
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(short *)(puVar7 + uVar15 * 2) = (short)uVar16;
      lVar10 = pbVar12[-1] + uVar16;
      uVar15 = uVar15 + 1;
      pbVar12 = pbVar12 + 6;
    } while (uVar5 != uVar15);
  }
  uVar15 = lVar10 + 7U & 0xfffffffffffffff8;
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  uVar16 = (ulonglong)uVar5;
  *(short *)(puVar7 + uVar16 * 2) = (short)uVar15;
  uVar15 = uVar15 + 8;
  if (uVar5 < bVar8) {
    pbVar12 = (byte *)(uVar16 * 6 + 3 + uVar14);
    do {
      uVar15 = -(ulonglong)*pbVar12 & (uVar15 + *pbVar12) - 1;
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(short *)(puVar7 + uVar16 * 2 + 2) = (short)uVar15;
      uVar16 = uVar16 + 1;
      uVar15 = pbVar12[-1] + uVar15;
      pbVar12 = pbVar12 + 6;
    } while (bVar8 != uVar16);
  }
  uVar16 = *param_1;
  local_88 = param_4;
  if (((ushort)param_1[1] < uVar18) || (*(ushort *)((longlong)param_1 + 10) < uVar15)) {
    uVar6 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar15 < uVar6) {
      uVar15 = uVar6;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar15;
    uVar15 = uVar15 & 0xffff;
    uVar6 = FUN_14001cc68(uVar15,uVar18);
    *param_1 = uVar6;
    local_8c = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
  }
  else {
    local_8c = 0;
    uVar6 = uVar16;
  }
  bVar8 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar8;
  uVar15 = (ulonglong)bVar8;
  iVar9 = bVar8 - 1;
  local_80 = param_2;
  if ((int)(uint)bVar3 < iVar9) {
    pbVar12 = (byte *)((ulonglong)bVar8 * 6 + -10 + uVar14);
    uVar6 = (ulonglong)bVar8;
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      pvVar13 = (void *)(uVar16 + *(ushort *)(pbVar12 + -2));
      if ((ulonglong)*(ushort *)(pbVar12 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar7 + uVar6 * 2 + -2) + *param_1),pvVar13,
              (ulonglong)*pbVar12);
      uVar15 = uVar6 - 1;
      pbVar12 = pbVar12 + -6;
      lVar10 = uVar6 - 2;
      uVar6 = uVar15;
    } while ((longlong)uVar20 < lVar10);
    iVar9 = (int)uVar15 + -1;
    uVar6 = *param_1;
  }
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  *(undefined8 *)(uVar6 + *(ushort *)(puVar7 + (longlong)iVar9 * 2)) = *local_88;
  if (1 < (int)uVar15) {
    uVar15 = (ulonglong)((int)uVar15 - 2);
    pbVar12 = (byte *)(uVar15 * 6 + 2 + uVar14);
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      pvVar13 = (void *)(uVar16 + *(ushort *)(pbVar12 + -2));
      if ((ulonglong)*(ushort *)(pbVar12 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar7 + uVar15 * 2) + *param_1),pvVar13,
              (ulonglong)*pbVar12);
      pbVar12 = pbVar12 + -6;
      bVar21 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar21);
  }
  uVar15 = *param_1;
  bVar8 = *(byte *)((longlong)param_1 + 0xc);
  uVar5 = (uint)bVar8;
  iVar9 = bVar8 - 1;
  uVar6 = uVar15;
  if ((int)(uint)bVar3 < iVar9) {
    lVar10 = (ulonglong)((uint)bVar8 + (uint)bVar8) * 3;
    uVar6 = (ulonglong)(uint)bVar8;
    do {
      *(undefined2 *)((uVar15 - 2) + lVar10) = *(undefined2 *)((uVar14 - 8) + lVar10);
      *(undefined4 *)((uVar15 - 6) + lVar10) = *(undefined4 *)((uVar14 - 0xc) + lVar10);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(undefined2 *)((uVar15 - 6) + lVar10) = *(undefined2 *)(puVar7 + uVar6 * 2 + -2);
      uVar1 = uVar6 - 1;
      lVar10 = lVar10 + -6;
      lVar17 = uVar6 - 2;
      uVar6 = uVar1;
    } while ((longlong)uVar20 < lVar17);
    uVar5 = (uint)uVar1;
    iVar9 = uVar5 - 1;
    uVar6 = *param_1;
  }
  puVar2 = (ushort *)(uVar15 + (longlong)iVar9 * 6);
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  uVar18 = *(ushort *)(puVar7 + (longlong)iVar9 * 2);
  *puVar2 = 0xffff;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (*param_1 <= uVar18 + uVar6) {
    *puVar2 = (short)(uVar18 + uVar6) - (short)*param_1;
  }
  puVar2[1] = 0x808;
  puVar2[2] = 0x100;
  if (1 < (int)uVar5) {
    uVar20 = (ulonglong)(uVar5 - 2);
    lVar10 = uVar20 * 6;
    do {
      *(undefined2 *)(uVar15 + 4 + lVar10) = *(undefined2 *)(uVar14 + 4 + lVar10);
      *(undefined4 *)(uVar15 + lVar10) = *(undefined4 *)(uVar14 + lVar10);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(undefined2 *)(uVar15 + lVar10) = *(undefined2 *)(puVar7 + uVar20 * 2);
      lVar10 = lVar10 + -6;
      bVar21 = uVar20 != 0;
      uVar20 = uVar20 - 1;
    } while (bVar21);
  }
  if (((byte)local_8c & uVar16 != 0) == 1) {
    FUN_1400020a8(uVar16);
  }
  iVar9 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar9 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar9 + 1U) {
    FUN_14086feca(param_1 + 3,iVar9);
  }
  lVar10 = (uVar19 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar10 + 0x10),(void *)(param_1[3] + lVar10),
          (ulonglong)(iVar9 - (uint)bVar3) << 4);
  plVar4 = local_80;
  uVar14 = param_1[3];
  *(undefined1 **)(uVar14 + lVar10) = &LAB_1432df85e;
  *(undefined **)(uVar14 + 8 + lVar10) = &DAT_1432df862;
  lVar10 = 0;
  if ((ulonglong)*puVar2 != 0xffff) {
    lVar10 = *param_1 + (ulonglong)*puVar2;
  }
  *local_80 = (ulonglong)(byte)puVar2[2] + lVar10;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar2 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 140ca1f42 FUN_140ca1f42 body=96 status=ok
// SIG undefined FUN_140ca1f42(void)

ulonglong FUN_140ca1f42(longlong param_1)

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
LAB_140ca1f85:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140ca1f85;
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



// FUNCTION 140ca1fa2 FUN_140ca1fa2 body=639 status=ok
// SIG undefined FUN_140ca1fa2(void)

void FUN_140ca1fa2(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  code *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_140ca2124;
  if (DAT_14cb5b388 == 0) {
    local_60 = local_40;
    local_40[0] = FUN_141864c34;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_146431698;
    local_68 = &LAB_1486775cb;
    local_70 = &LAB_1464cee35;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000005;
    local_90 = 0x10;
    local_98 = 0x3a20;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
  }
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cb5b388 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) != DAT_14cb5b388 + 0x30)) goto LAB_140ca2124;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if (iVar1 == 0) {
LAB_140ca219d:
    lVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48);
    lVar3 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != iVar1 || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_140ca219d;
      lVar3 = *plVar4;
    }
  }
  if (lVar3 == param_2) {
    if (param_3 != 0) {
      lVar3 = FUN_1449f3324();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
        if (*(longlong *)(param_1 + 0x1c8) != 0) {
          FUN_14480f766(param_3 + 0xce0);
        }
        *(undefined8 *)(param_1 + 0x1c8) = 0;
      }
    }
    if (*(char *)(param_1 + 0x1b8) == '\0') {
      FUN_14479d2ce(param_1 + 0x1d0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
    }
    if (param_4 != 0) {
      lVar3 = FUN_1449f3324();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
        FUN_145791164(local_40,param_1);
        FUN_140ca2242(param_4 + 0xce0,&local_48,local_40);
        FUN_1449db362(local_40);
        *(undefined8 *)(param_1 + 0x1c8) = local_48;
      }
    }
  }
LAB_140ca2124:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca2242 FUN_140ca2242 body=370 status=ok
// SIG undefined FUN_140ca2242(void)

undefined8 * FUN_140ca2242(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140ca23c2 FUN_140ca23c2 body=1667 status=ok
// SIG undefined FUN_140ca23c2(void)

void FUN_140ca23c2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_1403a682c;
      local_c0 = 0;
      local_c8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_1403a682c;
      local_c0 = 0;
      local_c8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_48 = (undefined4)uVar2;
      uStack_44 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  uStack_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_b0 = FUN_1408a629c;
      local_b8 = &DAT_14c9520b8;
      local_c0 = 0;
      local_c8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_4c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_4c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_4c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_4c = (undefined4)uVar2;
      local_48 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_4c);
    }
  }
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_14067a048;
      local_c0 = 0;
      local_c8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_50 = (int)uVar2;
      uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = CONCAT44(uStack_44,local_48);
  uStack_80 = uStack_40;
  local_78 = local_38;
  local_a8 = (undefined4)local_30;
  uStack_a4 = local_30._4_4_;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = local_20;
  local_c8 = CONCAT71(local_c8._1_7_,local_50 != 0);
  FUN_140ca2a46(&local_68,&local_a8,&local_88,uStack_4c);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca2a46 FUN_140ca2a46 body=367 status=ok
// SIG undefined FUN_140ca2a46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140ca2a46(double *param_1,double *param_2,double *param_3,float param_4,char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_5 == '\0') {
    dVar4 = param_3[2];
    dVar7 = param_2[2];
    dVar1 = param_3[1];
    dVar2 = param_2[1];
    dVar3 = (double)param_4;
    *param_1 = (*param_3 - *param_2) * dVar3 + *param_2;
    param_1[1] = (dVar1 - dVar2) * dVar3 + dVar2;
    param_1[2] = (dVar4 - dVar7) * dVar3 + dVar7;
  }
  else {
    FUN_144a7484c(param_2,local_68);
    FUN_144a7484c(param_3,local_88);
    FUN_144a44da6(&local_a8,local_68,local_88,(double)param_4);
    dVar4 = (double)local_98._0_8_ * (double)local_98._0_8_ + local_a8 * local_a8;
    dVar7 = (double)local_98._8_8_ * (double)local_98._8_8_ + dStack_a0 * dStack_a0;
    auVar5._0_8_ = dVar4 + dVar7;
    auVar5._8_8_ = dVar4 + dVar7;
    auVar6 = sqrtpd(auVar5,auVar5);
    auVar6 = divpd(_DAT_149934d80,auVar6);
    auVar8._0_8_ = auVar6._0_8_ * (double)local_98._0_8_;
    auVar8._8_8_ = auVar6._8_8_ * (double)local_98._8_8_;
    local_a8 = (double)((ulonglong)(local_a8 * auVar6._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar5._0_8_));
    dStack_a0 = (double)((ulonglong)(dStack_a0 * auVar6._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar5._8_8_));
    auVar6._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar5._8_8_);
    auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar5._0_8_);
    local_98 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar8,auVar6);
    FUN_1448052ee(&local_a8,param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca2bb6 FUN_140ca2bb6 body=665 status=ok
// SIG undefined FUN_140ca2bb6(void)

void FUN_140ca2bb6(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined8 **local_108;
  undefined8 *local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140ca2e50();
  lVar3 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (lVar3 != 0) {
    local_f8 = (undefined8 *)0x0;
    local_f0 = 0;
    FUN_1446efa72(&local_f8,0,3,0x10);
    puVar2 = local_f8;
    local_f0 = 3;
    *local_f8 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    local_f8[2] = lVar6;
    *local_f8 = &PTR_FUN_14b3fad40;
    local_f8[3] = 0;
    iVar7 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_f8 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar7 = *(int *)(lVar8 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar8 + 0x10) = iVar9;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    puVar2[4] = &LAB_145846850;
    memset(local_e8,0,0xa0);
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar4 = FUN_1406f625c(uVar4);
    uVar5 = FUN_140d84280(param_1 + 0x1d);
    local_108 = &local_f8;
    FUN_140d84456(uVar5,lVar3 + 0x168,uVar4,local_e8);
    if (local_88 != 0) {
      if (local_78 == (longlong *)0x0) {
        local_78 = local_68;
      }
      (**(code **)(*local_78 + 0x10))();
    }
    if (local_c8 != 0) {
      if (local_b8 == (longlong *)0x0) {
        local_b8 = local_a8;
      }
      (**(code **)(*local_b8 + 0x10))();
    }
    if (local_f0 != 0) {
      if (local_f8 == (undefined8 *)0x0) goto LAB_140ca2bf4;
      (**(code **)*local_f8)(local_f8,0);
      FUN_1446efa72(&local_f8,0,0,0x10);
      local_f0 = 0;
    }
    if (local_f8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140ca2bf4:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ca2e50 FUN_140ca2e50 body=38 status=ok
// SIG undefined FUN_140ca2e50(void)

void FUN_140ca2e50(undefined8 param_1)

{
  FUN_1404e99ac(param_1,1);
  FUN_1404e951c(param_1,1);
  FUN_1402798cc(param_1);
  return;
}



// FUNCTION 140ca2e76 FUN_140ca2e76 body=36 status=ok
// SIG undefined FUN_140ca2e76(void)

void FUN_140ca2e76(longlong param_1)

{
  FUN_1401c3c2c();
  *(undefined4 *)(param_1 + 0x97c) = 0x7f7fffff;
  FUN_140ca2e9a(param_1);
  return;
}



// FUNCTION 140ca2e9a FUN_140ca2e9a body=736 status=ok
// SIG undefined FUN_140ca2e9a(void)

void FUN_140ca2e9a(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  int local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[0xcc] == 0) goto LAB_140ca3155;
  cVar2 = FUN_140c02098();
  if (((cVar2 == '\0') || (param_1[0x10f] == 0)) ||
     (plVar1 = (longlong *)param_1[0x110], plVar1 == (longlong *)0x0)) goto LAB_140ca3155;
  bVar5 = *(byte *)((longlong)param_1 + 0x851);
  bVar9 = false;
  if (((bVar5 & 1) == 0) && (bVar9 = false, *(char *)((longlong)param_1 + 0xa8c) == '\0')) {
    bVar9 = 0 < *(int *)(param_1[0xcc] + 200);
  }
  bVar10 = true;
  if ((param_1[0x15] != 0) && (DAT_14c760f4c == '\x01')) {
    bVar10 = -1 < *(char *)(param_1[0x15] + 0x60);
  }
  bVar8 = false;
  if ((*(byte *)((longlong)param_1 + 0x1f9) & 8) == 0) {
    cVar2 = (**(code **)(*param_1 + 0x4e8))(param_1);
    bVar8 = false;
    if (cVar2 != '\0') {
      bVar8 = bVar10;
    }
    bVar5 = *(byte *)((longlong)param_1 + 0x851);
  }
  cVar2 = bVar8 + (bVar9 ^ 1U) * '\x02' + (bVar5 & 1) * '\x04';
  if ((bVar5 & 4) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,cVar2);
    bVar5 = *(byte *)((longlong)param_1 + 0x851);
  }
  if ((bVar5 >> 3 & 1) != bVar3) {
    *(byte *)((longlong)param_1 + 0x851) = bVar5 & 0xf7 | bVar3 << 3;
    if ((param_1[0x10f] != 0) && ((longlong *)param_1[0x110] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0x110] + 0x28))();
    }
    FUN_1474a764c(param_1);
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar5 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar5 & 1) == 0) {
LAB_140ca311c:
        *(byte *)((longlong)param_1 + 0x9d) = bVar5 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
      else if (param_1[0x16] == 0) {
        lVar7 = FUN_1448abda6(param_1);
        if (lVar7 == 0) {
          bVar5 = *(byte *)((longlong)param_1 + 0x9d);
          goto LAB_140ca311c;
        }
      }
    }
  }
  cVar4 = FUN_140c02098(param_1);
  if ((cVar4 != '\0') &&
     ((*(byte *)((longlong)param_1 + 0x851) & 0x10) == 0 &&
      (~*(byte *)((longlong)param_1 + 0x851) & 0xc) != 0)) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1[0xcc],param_1 + 0x48,cVar2);
    if (bVar9 == false) {
      puVar6 = (undefined8 *)FUN_1406cf856(param_1 + 0x134);
      local_a8 = *puVar6;
      local_a0 = *(undefined4 *)(puVar6 + 1);
      (**(code **)(*plVar1 + 0x58))(plVar1,param_1[0xcc]);
    }
    else {
      puVar6 = (undefined8 *)FUN_1406cf6b2();
      local_48 = (double)(float)puVar6[4];
      dStack_40 = (double)(float)((ulonglong)puVar6[4] >> 0x20);
      local_38 = (double)(float)puVar6[5];
      dStack_30 = (double)(float)((ulonglong)puVar6[5] >> 0x20);
      local_68 = (double)(float)puVar6[2];
      dStack_60 = (double)(float)((ulonglong)puVar6[2] >> 0x20);
      local_58 = (double)(float)puVar6[3];
      dStack_50 = (double)(float)((ulonglong)puVar6[3] >> 0x20);
      local_88 = (double)(float)*puVar6;
      dStack_80 = (double)(float)((ulonglong)*puVar6 >> 0x20);
      local_78 = (double)(float)puVar6[1];
      dStack_70 = (double)(float)((ulonglong)puVar6[1] >> 0x20);
      if ((int)param_1[0x15d] == 0) {
        (**(code **)(*plVar1 + 0x40))(plVar1,param_1[0xcc],&local_88);
      }
      else {
        local_98 = param_1[0x15c];
        local_90 = (int)param_1[0x15d];
        (**(code **)(*plVar1 + 0x48))(plVar1,param_1[0xcc],&local_88);
      }
    }
  }
LAB_140ca3155:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca317c FUN_140ca317c body=722 status=ok
// SIG undefined FUN_140ca317c(void)

undefined8 *
FUN_140ca317c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140ca3580(param_1 + 1,iVar2);
    memcpy((void *)param_1[1],pvVar3,(longlong)iVar2 << 3);
  }
  param_1[3] = 0;
  iVar2 = *(int *)(param_3 + 1);
  pvVar3 = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_140ca344e(param_1 + 3,iVar2);
    memcpy((void *)param_1[3],pvVar3,(longlong)iVar2 << 3);
  }
  param_1[5] = 0;
  iVar2 = *(int *)(param_4 + 1);
  pvVar3 = (void *)*param_4;
  *(int *)(param_1 + 6) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_140ca344e(param_1 + 5,iVar2);
    memcpy((void *)param_1[5],pvVar3,(longlong)iVar2 << 3);
  }
  param_1[7] = 0;
  iVar2 = *(int *)(param_5 + 1);
  pvVar3 = (void *)*param_5;
  *(int *)(param_1 + 8) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_140ca344e(param_1 + 7,iVar2);
    memcpy((void *)param_1[7],pvVar3,(longlong)iVar2 << 3);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  iVar2 = *(int *)(param_6 + 1);
  pvVar3 = (void *)*param_6;
  *(int *)(param_1 + 0xe) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_141744a58(param_1 + 0xd,iVar2,0);
    memcpy((void *)param_1[0xd],pvVar3,(longlong)iVar2 * 0x18);
  }
  puVar7 = &DAT_14c846480;
  puVar8 = param_1 + 0x10;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x29] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x2a) = DAT_14c9abb98;
  *(undefined1 *)((longlong)param_1 + 0x151) = 0;
  iVar2 = *(int *)(param_1 + 2);
  if ((longlong)iVar2 != 0) {
    lVar5 = param_1[1];
    lVar6 = 0;
    do {
      *(undefined8 **)(*(longlong *)(lVar5 + lVar6) + 0x2b0) = param_1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
    if (0 < *(int *)(param_1 + 2)) {
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(param_1[1] + lVar5 * 8);
        *(undefined4 *)(lVar6 + 0x5b8) = *(undefined4 *)(lVar6 + 0x108);
        *(undefined4 *)(lVar6 + 0x5bc) = *(undefined4 *)(lVar6 + 0x10c);
        *(undefined4 *)(lVar6 + 0x5c0) = *(undefined4 *)(lVar6 + 0x110);
        *(undefined4 *)(lVar6 + 0x5c4) = *(undefined4 *)(lVar6 + 0x114);
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 2));
    }
  }
  lVar5 = DAT_14c9abbe8;
  if (DAT_14c9abbe8 == 0) {
    plVar4 = (longlong *)FUN_145a10a92();
    lVar5 = plVar4[0x22];
    if (plVar4[0x22] == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar5 = plVar4[0x22];
    }
  }
  DAT_14c9abbe8 = lVar5;
  uVar1 = *(undefined8 *)(DAT_14c9abbe8 + 0x70);
  param_1[0x29] = uVar1;
  iVar2 = *(int *)(param_1 + 4);
  if ((longlong)iVar2 != 0) {
    lVar5 = param_1[3];
    lVar6 = 0;
    do {
      *(undefined8 *)(*(longlong *)(lVar5 + lVar6) + 0xf70) = uVar1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  return param_1;
}



// FUNCTION 140ca344e FUN_140ca344e body=306 status=ok
// SIG undefined FUN_140ca344e(void)

void FUN_140ca344e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140ca34b0;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_140ca34b0:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 140ca3580 FUN_140ca3580 body=306 status=ok
// SIG undefined FUN_140ca3580(void)

void FUN_140ca3580(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140ca35e2;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_140ca35e2:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 140ca36b2 FUN_140ca36b2 body=126 status=ok
// SIG undefined FUN_140ca36b2(void)

undefined8 FUN_140ca36b2(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar5 + 0xc7c);
  uVar4 = *puVar1;
  pbVar2 = (byte *)(lVar5 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 1;
  }
  uVar6 = FUN_14001cc68(0x180,0x10);
  FUN_140ca3730(uVar6,param_2);
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar4;
    *pbVar2 = 1;
  }
  return uVar6;
}



// FUNCTION 140ca3730 FUN_140ca3730 body=272 status=ok
// SIG undefined FUN_140ca3730(void)

undefined8 * FUN_140ca3730(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffff0300;
  *param_1 = &PTR_FUN_14b30c7c0;
  param_1[6] = param_2;
  FUN_1400b22c2(param_1 + 7,&DAT_149e02088);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)((longlong)param_1 + 0x152) = 0x10001;
  *(undefined2 *)((longlong)param_1 + 0x156) = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0xffffffffffffffff;
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xf0 | 2;
  return param_1;
}



// FUNCTION 140ca3840 FUN_140ca3840 body=174 status=ok
// SIG undefined FUN_140ca3840(void)

longlong * FUN_140ca3840(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_14a3c6f90);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbb8);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e39474);
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
  FUN_140ca38ee(param_1,param_2 + 2);
  FUN_140077068(param_1,param_2 + 0x16);
  return param_1;
}



// FUNCTION 140ca38ee FUN_140ca38ee body=135 status=ok
// SIG undefined FUN_140ca38ee(void)

longlong FUN_140ca38ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_140ca3975();
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
      FUN_140ca3e5c(param_2);
    }
  }
  return param_1;
}



// FUNCTION 140ca3975 FUN_140ca3975 body=768 status=ok
// SIG undefined FUN_140ca3975(void)

longlong * FUN_140ca3975(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar2;
    }
    local_48 = param_2 + 2;
    local_50 = (undefined8 *)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_60 = local_38;
    local_5c = local_34;
    local_68 = local_40;
    uVar7 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar7;
      do {
        lVar5 = *local_80;
        (**(code **)(*param_1 + 0x138))(param_1,lVar5 + (longlong)iVar9 * 0x18);
        puVar8 = (undefined4 *)(lVar5 + (longlong)iVar9 * 0x18 + 8);
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar8,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          *puVar8 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar7 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (undefined8 *)((ulonglong)local_50._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar4 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar4;
    }
    FUN_140841128(param_2,(ulonglong)local_50 & 0xffffffff);
    uVar7 = local_68;
    if (0 < (int)local_50) {
      iVar9 = 0;
      do {
        FUN_140ca3c76(param_2,&local_80);
        *local_78 = 0;
        puVar1 = local_78 + 1;
        *(undefined4 *)(local_78 + 1) = 0;
        *(undefined4 *)(local_78 + 2) = 0xffffffff;
        (**(code **)(*param_1 + 0x138))(param_1);
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar1,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar1);
          }
        }
        else {
          *(undefined4 *)puVar1 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar9 = iVar9 + 1;
        uVar7 = local_68;
      } while (iVar9 < (int)local_50);
    }
  }
  local_68 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ca3c76 FUN_140ca3c76 body=485 status=ok
// SIG undefined FUN_140ca3c76(void)

int * FUN_140ca3c76(longlong *param_1,int *param_2)

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



// FUNCTION 140ca3e5c FUN_140ca3e5c body=744 status=ok
// SIG undefined FUN_140ca3e5c(void)

void FUN_140ca3e5c(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar15 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar15,4);
    if ((int)uVar15 < 1) goto LAB_140ca3ec2;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar15 != uVar3);
LAB_140ca3ec2:
  iVar10 = (int)param_1[5];
  if (iVar10 == 0) {
    uVar16 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar8 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar8 = iVar10 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar8 = 0;
      do {
        if (uVar14 == uVar16) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar15 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar11 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar9) {
      iVar9 = iVar10;
    }
  }
  if (iVar9 < iVar10) {
    uVar15 = 0xffffffff;
    bVar2 = DAT_14c950c29;
    do {
      lVar13 = *param_1;
      uVar11 = *(ulonglong *)(lVar13 + (longlong)iVar9 * 0x18);
      if (((bVar2 & 1) != 0) && (uVar11 != 0)) {
        FUN_1456cec3c(uVar11);
        bVar2 = DAT_14c950c29;
      }
      lVar13 = lVar13 + (longlong)iVar9 * 0x18;
      uVar3 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar11 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar10 = (int)uVar11;
      *(int *)(lVar13 + 0x14) = iVar10;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar13 + 0x10) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar10 = (int)param_1[5];
      iVar9 = (int)uVar16;
      lVar13 = (longlong)iVar9;
      uVar3 = puVar4[lVar13] & uVar15;
      if (uVar3 == 0) {
        iVar6 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar6 = iVar10 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar9) {
          iVar7 = iVar9;
        }
        if (iVar6 <= iVar9) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar4[lVar13 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar7 - lVar13 == lVar12) {
            return;
          }
        }
        uVar16 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar11 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar10);
  }
  return;
}



// FUNCTION 140ca4144 FUN_140ca4144 body=152 status=ok
// SIG undefined FUN_140ca4144(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ca4144(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ab9ef50;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140ca41dc(param_1 + 4);
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140ca41ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140ca41dc FUN_140ca41dc body=55 status=ok
// SIG undefined FUN_140ca41dc(void)

void FUN_140ca41dc(longlong *param_1)

{
  FUN_140ca4214(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ca4214 FUN_140ca4214 body=121 status=ok
// SIG undefined FUN_140ca4214(void)

void FUN_140ca4214(longlong param_1,int param_2)

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



// FUNCTION 140ca428e FUN_140ca428e body=1386 status=ok
// SIG undefined FUN_140ca428e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ca428e(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b420bf0;
  local_78 = plVar5 + 3;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar17 = plVar5 + 2;
  *plVar17 = (longlong)&PTR_FUN_14b420c08;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  if (plVar17 == (longlong *)0x0) goto LAB_140ca434d;
  if (plVar5 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar12 = (longlong *)&DAT_00000020;
    plVar6 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_140ca434d;
LAB_140ca4788:
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *plVar12 = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_140ca434d;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar5[3] = (longlong)plVar17;
    if ((longlong *)plVar5[4] != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar5[4] != (longlong *)0x0) {
        plVar12 = plVar5 + 4;
        plVar6 = (longlong *)plVar5[4];
        goto LAB_140ca4788;
      }
      plVar5[4] = (longlong)plVar5;
    }
  }
  LOCK();
  plVar12 = plVar5 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_140ca434d:
  local_68 = *(undefined8 *)(param_4 + 0x20);
  uVar3 = FUN_140c57d2c(param_1,param_1 + 0x18);
  *(undefined4 *)(plVar5 + 9) = uVar3;
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  local_70 = plVar5 + 10;
  local_88 = param_2;
  local_80 = plVar17;
  if (*(int *)((longlong)plVar5 + 0x5c) < iVar4) {
    FUN_140ca49e4();
    iVar4 = *(int *)(param_1 + 0x10);
  }
  if (iVar4 != 0) {
    puVar9 = *(ulonglong **)(param_1 + 8);
    puVar2 = puVar9 + iVar4;
    do {
      if ((longlong)*(int *)(param_4 + 0x150) == 0) {
LAB_140ca4681:
        *local_88 = 0;
        local_88[1] = 0;
        puVar10 = local_88;
        if (plVar5 == (longlong *)0x0) goto LAB_140ca4623;
        goto LAB_140ca4619;
      }
      lVar11 = *(longlong *)(param_4 + 0x148);
      lVar7 = 0x50;
      lVar13 = 0;
      while( true ) {
        if (*(ulonglong **)(lVar11 + lVar7) == (ulonglong *)0x0) {
          uVar16 = 0;
          uVar15 = 0;
        }
        else {
          uVar16 = **(ulonglong **)(lVar11 + lVar7);
          uVar15 = uVar16 & 0xffffffff;
          uVar16 = uVar16 & 0xffffffff00000000;
        }
        if ((*puVar9 == *(ulonglong *)(lVar11 + -8 + lVar7)) ||
           ((uVar15 | uVar16) != 0 && *puVar9 == (uVar15 | uVar16))) break;
        lVar13 = lVar13 + -0x88;
        lVar7 = lVar7 + 0x88;
        if ((longlong)*(int *)(param_4 + 0x150) * -0x88 - lVar13 == 0) goto LAB_140ca4681;
      }
      lVar11 = lVar11 - lVar13;
      if (lVar11 == 0) goto LAB_140ca4681;
      iVar4 = (int)plVar5[0xb];
      *(uint *)(plVar5 + 0xb) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar5 + 0x5c) < iVar4 + 1U) {
        FUN_145791352(local_70,iVar4);
      }
      *(longlong *)(plVar5[10] + (longlong)iVar4 * 8) = lVar11;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,4,0x10);
      local_50 = 4;
      plVar17 = (longlong *)plVar5[4];
      if (plVar17 == (longlong *)0x0) {
LAB_140ca4693:
        *local_58 = &PTR_LAB_14b420b80;
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar13 == 0) {
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_58[2] = lVar13;
        *local_58 = &PTR_FUN_14b420c20;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = FUN_140d10f2a;
        *(undefined4 *)(local_58 + 6) = 0;
      }
      else {
        iVar4 = (int)plVar17[1];
        do {
          if (iVar4 == 0) goto LAB_140ca4693;
          LOCK();
          iVar14 = (int)plVar17[1];
          bVar18 = iVar4 == iVar14;
          if (bVar18) {
            *(int *)(plVar17 + 1) = iVar4 + 1;
            iVar14 = iVar4;
          }
          iVar4 = iVar14;
          UNLOCK();
        } while (!bVar18);
        lVar7 = *local_78;
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        *local_58 = &PTR_LAB_14b420b80;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_58[2] = lVar8;
        *local_58 = &PTR_FUN_14b420c20;
        local_58[3] = lVar7;
        local_58[4] = plVar17;
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
        local_58[5] = FUN_140d10f2a;
        *(undefined4 *)(local_58 + 6) = 0;
        LOCK();
        plVar12 = plVar17 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        LOCK();
        plVar12 = plVar17 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
        LOCK();
        plVar12 = plVar17 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      FUN_140ca47fa(lVar11 + 0x30,local_60);
      if (local_50 == 0) {
LAB_140ca4541:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (undefined8 *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
        goto LAB_140ca4541;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar2);
  }
  plVar17 = local_80;
  puVar10 = local_88;
  if ((longlong)(int)plVar5[0xb] == 0) {
    iVar4 = 0;
  }
  else {
    plVar6 = (longlong *)plVar5[10];
    plVar12 = plVar6 + (int)plVar5[0xb];
    iVar4 = 0;
    do {
      lVar11 = (longlong)*(int *)(*plVar6 + 0x68);
      iVar14 = 0;
      if (lVar11 != 0) {
        lVar7 = 0;
        iVar14 = 0;
        do {
          iVar14 = iVar14 + *(int *)(*(longlong *)(*(longlong *)(*plVar6 + 0x60) + lVar7) + 0x94);
          lVar7 = lVar7 + 8;
        } while (lVar11 * 8 != lVar7);
      }
      iVar4 = iVar4 + iVar14;
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar12);
  }
  bVar18 = (int)plVar5[9] <= iVar4;
  if ((((bool)(char)plVar5[8] != bVar18) && (*(bool *)(plVar5 + 8) = bVar18, (int)plVar5[6] != 0))
     && (plVar12 = (longlong *)plVar5[5], plVar12 != (longlong *)0x0)) {
    (**(code **)(*plVar12 + 0x60))(plVar12,local_80);
  }
  *puVar10 = plVar17;
  puVar10[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
LAB_140ca4619:
    LOCK();
    plVar17 = plVar5 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
LAB_140ca4623:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar10;
}



// FUNCTION 140ca47fa FUN_140ca47fa body=370 status=ok
// SIG undefined FUN_140ca47fa(void)

undefined8 * FUN_140ca47fa(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140ca49e4 FUN_140ca49e4 body=320 status=ok
// SIG undefined FUN_140ca49e4(void)

void FUN_140ca49e4(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140ca4a4d;
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
LAB_140ca4a4d:
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



// FUNCTION 140ca4b24 FUN_140ca4b24 body=136 status=ok
// SIG undefined FUN_140ca4b24(void)

void FUN_140ca4b24(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 140ca4bac FUN_140ca4bac body=9 status=ok
// SIG undefined FUN_140ca4bac(void)

void FUN_140ca4bac(longlong param_1)

{
  FUN_14060fc84(param_1 + 0x10);
  return;
}



// FUNCTION 140ca4bb6 FUN_140ca4bb6 body=212 status=ok
// SIG undefined FUN_140ca4bb6(void)

void FUN_140ca4bb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d1ace4(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca77f7 FUN_140ca77f7 body=2056 status=ok
// SIG undefined FUN_140ca77f7(void)

void FUN_140ca77f7(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                  double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  double *pdVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
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
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  
  plVar4 = *(longlong **)(param_2 + 0x58);
  if (plVar4 == (longlong *)0x0) {
LAB_140ca7ff3:
    *param_9 = 0;
  }
  else {
    cVar2 = *(char *)(param_2 + 0x60);
    if (cVar2 == '\x01') {
      uVar14 = (uint)*(byte *)(*plVar4 + 1 + (longlong)param_5 * 2);
    }
    else if (cVar2 == '\x02') {
      uVar14 = (uint)*(short *)(*plVar4 + 2 + (longlong)param_5 * 4);
    }
    else {
      if (cVar2 != '\x03') goto LAB_140ca7ff3;
      uVar14 = *(uint *)(*plVar4 + 4 + (longlong)param_5 * 8);
    }
    uVar15 = 0x20;
    if ((int)uVar14 < 0x20) {
      uVar15 = (ulonglong)uVar14;
    }
    *param_9 = (uint)uVar15;
    if (0 < (int)uVar14) {
      lVar12 = (longlong)param_5;
      pdVar13 = (double *)(param_7 + 0x10);
      lVar9 = 0;
      do {
        plVar4 = *(longlong **)(param_2 + 0x58);
        uVar14 = 0xffffffff;
        if (plVar4 != (longlong *)0x0) {
          cVar2 = *(char *)(param_2 + 0x60);
          if (cVar2 == '\x01') {
            uVar14 = (uint)*(byte *)(plVar4[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar4 + lVar12 * 2) + lVar9) * 3);
          }
          else if (cVar2 == '\x02') {
            uVar14 = (uint)*(short *)(plVar4[2] + 2 +
                                     (longlong)((int)*(short *)(*plVar4 + lVar12 * 4) + (int)lVar9)
                                     * 6);
          }
          else if (cVar2 == '\x03') {
            uVar14 = *(uint *)(plVar4[2] + 4 + (*(int *)(*plVar4 + lVar12 * 8) + lVar9) * 0xc);
          }
        }
        lVar17 = *(longlong *)(param_2 + 0x30);
        lVar16 = (longlong)(int)uVar14;
        dVar20 = (double)*(float *)(lVar17 + 8 + lVar16 * 0xc);
        dVar23 = (double)*(float *)(lVar17 + 4 + lVar16 * 0xc);
        dVar30 = (double)*(float *)(lVar17 + lVar16 * 0xc);
        dVar26 = *param_3;
        dVar32 = param_3[1];
        dVar28 = param_3[2];
        dVar25 = param_3[3];
        dVar21 = param_3[3];
        dVar33 = dVar30 * dVar28 - dVar26 * dVar20;
        dVar24 = dVar23 * dVar26 - dVar32 * dVar30;
        dVar27 = dVar20 * dVar32 - dVar28 * dVar23;
        dVar27 = dVar27 + dVar27;
        dVar33 = dVar33 + dVar33;
        dVar24 = dVar24 + dVar24;
        dVar22 = param_3[5];
        dVar31 = param_3[6];
        pdVar13[-2] = (dVar24 * dVar32 - dVar33 * dVar28) + dVar25 * dVar27 + dVar30 + param_3[4];
        pdVar13[-1] = (dVar28 * dVar27 - dVar26 * dVar24) + dVar21 * dVar33 + dVar23 + dVar22;
        *pdVar13 = dVar24 * dVar25 + dVar20 + (dVar33 * dVar26 - dVar27 * dVar32) + dVar31;
        lVar9 = lVar9 + 1;
        uVar15 = (ulonglong)(int)*param_9;
        pdVar13 = pdVar13 + 3;
      } while (lVar9 < (longlong)uVar15);
    }
    if (1 < (uint)uVar15) {
      lVar9 = (longlong)param_4;
      sVar3 = *(short *)(DAT_14c992a40 + 2 + lVar9 * 4);
      if (0 < sVar3) {
        dVar21 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
        lVar12 = (longlong)
                 *(short *)(DAT_14c992a50 + -4 +
                           ((longlong)*(short *)(DAT_14c992a40 + lVar9 * 4) + (longlong)(int)sVar3)
                           * 6);
        dVar25 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
        dVar31 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
        iVar11 = 0;
        dVar21 = dVar21 * *(double *)(DAT_14c992a20 + lVar12 * 0x18) * 0.5 +
                 dVar21 * 0.5 + *(double *)(param_1 + 0x20);
        dVar25 = dVar25 * *(double *)(DAT_14c992a20 + 8 + lVar12 * 0x18) * 0.5 +
                 dVar25 * 0.5 + *(double *)(param_1 + 0x28);
        dVar31 = dVar31 * *(double *)(DAT_14c992a20 + 0x10 + lVar12 * 0x18) * 0.5 +
                 dVar31 * 0.5 + *(double *)(param_1 + 0x30);
        do {
          lVar12 = param_8;
          lVar17 = (longlong)
                   *(short *)(DAT_14c992a50 + 2 +
                             ((longlong)iVar11 + (longlong)*(short *)(DAT_14c992a40 + lVar9 * 4)) *
                             6);
          dVar32 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
          dVar26 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
          dVar22 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
          dVar23 = dVar32 * *(double *)(DAT_14c992a20 + 0x10 + lVar17 * 0x18) * 0.5 +
                   dVar32 * 0.5 + *(double *)(param_1 + 0x30);
          dVar32 = dVar26 * *(double *)(DAT_14c992a20 + 8 + lVar17 * 0x18) * 0.5 +
                   dVar26 * 0.5 + *(double *)(param_1 + 0x28);
          dVar26 = dVar22 * *(double *)(DAT_14c992a20 + lVar17 * 0x18) * 0.5 +
                   dVar22 * 0.5 + *(double *)(param_1 + 0x20);
          dVar22 = *param_6 * (dVar25 - dVar32) - (dVar21 - dVar26) * param_6[1];
          dVar28 = (dVar21 - dVar26) * param_6[2] - (dVar31 - dVar23) * *param_6;
          dVar31 = param_6[1] * (dVar31 - dVar23) - (dVar25 - dVar32) * param_6[2];
          dVar24 = dVar22 * dVar22 + dVar31 * dVar31 + dVar28 * dVar28;
          dVar20 = SQRT(dVar24);
          dVar25 = 0.0;
          dVar21 = 0.0;
          if (9.999999747378752e-05 <= dVar24) {
            dVar21 = dVar22 / dVar20;
            dVar25 = dVar28 / dVar20;
          }
          dVar24 = (double)(-(ulonglong)(dVar24 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar24 < 9.999999747378752e-05) &
                           (ulonglong)(dVar31 / dVar20));
          dVar27 = dVar23 * dVar21 + dVar26 * dVar24 + dVar32 * dVar25;
          dVar20 = dVar27 * 9.99999993922529e-09 + dVar27;
          uVar10 = (ulonglong)((int)uVar15 - 1);
          dVar31 = *(double *)(param_7 + 0x10 + uVar10 * 0x18);
          dVar22 = *(double *)(param_7 + uVar10 * 0x18);
          uVar34 = SUB84(dVar22,0);
          uVar35 = (undefined4)((ulonglong)dVar22 >> 0x20);
          dVar28 = *(double *)(param_7 + 8 + uVar10 * 0x18);
          uVar10 = uVar15 & 0xffffffff;
          uVar15 = 0;
          lVar17 = 0;
          dVar22 = dVar31 * dVar21 + dVar24 * dVar22 + dVar28 * dVar25;
          do {
            dVar5 = (double)CONCAT44(uVar35,uVar34);
            uVar14 = (uint)uVar15;
            dVar33 = *(double *)(param_7 + lVar17);
            dVar30 = *(double *)(param_7 + 8 + lVar17);
            dVar1 = *(double *)(param_7 + 0x10 + lVar17);
            dVar29 = dVar1 * dVar21 + dVar33 * dVar24 + dVar25 * dVar30;
            if (dVar20 < dVar29) {
              if (dVar22 < dVar20) {
                dVar6 = dVar31;
                dVar7 = dVar5;
                dVar8 = dVar28;
                if (9.99999993922529e-09 <= ABS(dVar29 - dVar22)) {
                  dVar22 = (dVar27 - dVar22) / (dVar29 - dVar22);
                  dVar6 = dVar31 + (dVar1 - dVar31) * dVar22;
                  dVar7 = (double)CONCAT44(uVar35,uVar34) +
                          (dVar33 - (double)CONCAT44(uVar35,uVar34)) * dVar22;
                  dVar8 = dVar28 + (dVar30 - dVar28) * dVar22;
                }
                goto LAB_140ca7d50;
              }
            }
            else {
              dVar6 = dVar1;
              dVar7 = dVar33;
              dVar8 = dVar30;
              if (dVar20 < dVar22) {
                if (9.99999993922529e-09 <= ABS(dVar29 - dVar22)) {
                  dVar22 = (dVar27 - dVar22) / (dVar29 - dVar22);
                  dVar31 = dVar31 + (dVar1 - dVar31) * dVar22;
                  dVar28 = dVar28 + (dVar30 - dVar28) * dVar22;
                  dVar5 = (double)CONCAT44(uVar35,uVar34) +
                          (dVar33 - (double)CONCAT44(uVar35,uVar34)) * dVar22;
                }
                *(double *)(lVar12 + uVar15 * 0x18) = dVar5;
                *(double *)(lVar12 + 8 + uVar15 * 0x18) = dVar28;
                *(double *)(lVar12 + 0x10 + uVar15 * 0x18) = dVar31;
                if (0x1e < uVar14) {
                  uVar15 = 0x20;
                  break;
                }
                uVar14 = uVar14 + 1;
              }
LAB_140ca7d50:
              uVar18 = (ulonglong)uVar14;
              uVar15 = (ulonglong)(uVar14 + 1);
              *(double *)(lVar12 + uVar18 * 0x18) = dVar7;
              *(double *)(lVar12 + 8 + uVar18 * 0x18) = dVar8;
              *(double *)(lVar12 + 0x10 + uVar18 * 0x18) = dVar6;
            }
            if (0x1f < (uint)uVar15) break;
            uVar34 = SUB84(dVar33,0);
            uVar35 = (undefined4)((ulonglong)dVar33 >> 0x20);
            bVar19 = uVar10 * 0x18 + -0x18 != lVar17;
            lVar17 = lVar17 + 0x18;
            dVar28 = dVar30;
            dVar31 = dVar1;
            dVar22 = dVar29;
          } while (bVar19);
          *param_9 = (uint)uVar15;
          iVar11 = iVar11 + 1;
        } while ((iVar11 < sVar3) &&
                (param_8 = param_7, param_7 = lVar12, dVar21 = dVar26, dVar25 = dVar32,
                dVar31 = dVar23, 1 < (uint)uVar15));
      }
    }
  }
  return;
}



// FUNCTION 140ca800e FUN_140ca800e body=125 status=ok
// SIG undefined FUN_140ca800e(void)

undefined8 * FUN_140ca800e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b08bf20;
  FUN_140ca808b(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14090341b(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ca808b FUN_140ca808b body=62 status=ok
// SIG undefined FUN_140ca808b(void)

void FUN_140ca808b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      FUN_14090341b(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ca80ca FUN_140ca80ca body=620 status=ok
// SIG undefined FUN_140ca80ca(void)

void FUN_140ca80ca(longlong param_1,longlong param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  char *pcVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  lVar8 = DAT_14c9a1ab0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar13 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar13 = param_2;
  }
  local_90 = *param_3 >> 3;
  *param_3 = *param_3 + *(longlong *)(lVar13 + 8 + local_90) * 8 + 0x80;
  uVar12 = *(uint *)(lVar13 + local_90);
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  puVar3 = (uint *)(lVar13 + local_90);
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) < (int)uVar12) {
    FUN_140ca8596(plVar1);
    uVar12 = *puVar3;
  }
  plVar2 = (longlong *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x20);
  local_98 = plVar2;
  if (iVar6 < (int)uVar12) {
    *(uint *)(param_1 + 0x20) = uVar12;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar6) < uVar12 - iVar6) {
      FUN_140ca86cc(plVar2);
    }
    memset((void *)((longlong)iVar6 * 8 + *plVar2),0,(longlong)(int)(uVar12 - iVar6) << 3);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar12);
    }
    if ((int)uVar12 < iVar6) {
      *(uint *)(param_1 + 0x20) = uVar12;
      FUN_14709b70a(plVar2);
    }
  }
  if (*puVar3 != 0) {
    pcVar14 = (char *)(lVar13 + local_90 + 0x10);
    uVar12 = 0;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,pcVar14,0);
      iVar6 = *(int *)(param_1 + 0x10);
      lVar13 = (longlong)iVar6;
      *(uint *)(param_1 + 0x10) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar6 + 1U) {
        FUN_1405b572a(plVar1,iVar6);
      }
      lVar7 = *plVar1;
      *(undefined2 *)(lVar7 + lVar13 * 2) = 0;
      if (lVar8 == 0) {
        *(undefined2 *)(lVar7 + lVar13 * 2) = 0xffff;
      }
      else {
        uVar9 = FUN_140ca8338(lVar8,&local_88);
        *(ushort *)(lVar7 + lVar13 * 2) = uVar9;
        if (-1 < (short)uVar9) {
          pcVar10 = "Asset";
          if (uVar9 != 0x7fff) {
            if ((*(uint *)(lVar8 + 0xd0) == (uint)uVar9 ||
                 (int)*(uint *)(lVar8 + 0xd0) < (int)(uint)uVar9) ||
               (lVar13 = *(longlong *)(*(longlong *)(lVar8 + 200) + (ulonglong)uVar9 * 8),
               lVar13 == 0)) {
              pcVar10 = (char *)0x0;
            }
            else {
              pcVar10 = *(char **)(lVar13 + 0xb8);
            }
          }
          *(char **)(*local_98 + (longlong)(int)uVar12 * 8) = pcVar10;
        }
      }
      do {
        cVar5 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar5 != '\0');
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *puVar3);
  }
  uVar11 = 1;
  if (2 < *(uint *)(param_1 + 0x10)) {
    uVar4 = (ulonglong)(*(uint *)(param_1 + 0x10) - 1) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (undefined1)lVar8;
  }
  *(undefined1 *)(param_1 + 0x78) = uVar11;
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ca8338 FUN_140ca8338 body=604 status=ok
// SIG undefined FUN_140ca8338(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_140ca8338(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulonglong *puVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  uint local_58 [6];
  longlong local_40;
  ulonglong local_30;
  longlong lVar9;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9a1af8) && (FUN_144b3d300(&DAT_14c9a1af8), DAT_14c9a1af8 == -1)) {
    DAT_14c9a1ae0._4_4_ = 0;
    DAT_14c9a1ae8 = 0;
    FUN_14052b5e0(&DAT_14c9a1ae0,"Asset",0);
    _DAT_14c9a1af0 = "Asset";
    _Init_thread_footer(&DAT_14c9a1af8);
  }
  local_68 = CONCAT44(DAT_14c9a1ae0._4_4_,(undefined4)DAT_14c9a1ae0);
  local_60 = DAT_14c9a1ae8;
  FUN_1448075d0(local_58);
  uVar12 = *param_2;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (uVar12 == local_58[0]) {
    uVar3 = 0x7fff;
    goto LAB_140ca8477;
  }
  iVar7 = *(int *)(param_1 + 0x138);
  uVar12 = *param_2;
  if ((longlong)iVar7 == -1) {
    if (((uVar12 != 0) && (param_2[1] != 0)) && (uVar12 != DAT_14c948000)) {
      puVar5 = &DAT_14c948028;
      goto LAB_140ca83f4;
    }
LAB_140ca8501:
    puVar5 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uVar12 = (uint)DAT_14c948618;
  }
  else {
    if (((uVar12 == 0) || (uVar4 = param_2[1], uVar4 == 0)) || (uVar12 == DAT_14c948000))
    goto LAB_140ca8501;
    puVar10 = param_2 + 2;
    if (0 < (int)param_2[9]) {
      puVar10 = *(uint **)(param_2 + 6);
    }
    if (1 < (int)uVar4) {
      puVar10 = *(uint **)(param_2 + 6);
    }
    if (uVar4 == 1 && 0 < iVar7) {
      puVar6 = (uint *)&DAT_14c948618;
      if (*(int *)(param_1 + 0x13c) == 1) {
        puVar6 = puVar10;
      }
      uVar12 = *puVar6;
      puVar5 = (ulonglong *)(puVar6 + 1);
    }
    else {
      if ((int)uVar4 <= iVar7) goto LAB_140ca8501;
      puVar5 = (ulonglong *)(puVar10 + (longlong)iVar7 * 3 + 1);
      uVar12 = puVar10[(longlong)iVar7 * 3];
    }
  }
LAB_140ca83f4:
  uVar2 = *puVar5;
  uVar11 = uVar2 >> 0x20;
  uVar4 = uVar12;
  if (uVar11 != 0) {
    uVar4 = FUN_144a78877(uVar12,uVar11);
  }
  uVar3 = 0xffff;
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    lVar8 = param_1 + 0x120;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x128);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x130) - 1U & uVar4) * 4);
    if (iVar7 != -1) {
      lVar8 = *(longlong *)(param_1 + 0xe8);
      do {
        lVar9 = (longlong)iVar7;
        if ((*(uint *)(lVar8 + lVar9 * 0x18) == uVar12) &&
           (lVar1 = lVar8 + lVar9 * 0x18, *(int *)(lVar1 + 8) == (int)(uVar2 >> 0x20))) {
          if ((lVar1 != 0) && ((undefined2 *)(lVar1 + 0xc) != (undefined2 *)0x0)) {
            uVar3 = *(undefined2 *)(lVar1 + 0xc);
          }
          break;
        }
        iVar7 = *(int *)(lVar8 + 0x10 + lVar9 * 0x18);
      } while (iVar7 != -1);
    }
  }
LAB_140ca8477:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140ca8596 FUN_140ca8596 body=310 status=ok
// SIG undefined FUN_140ca8596(void)

void FUN_140ca8596(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 2;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140ca85ff;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
      }
    }
LAB_140ca85ff:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,2,2);
  }
  return;
}



// FUNCTION 140ca86cc FUN_140ca86cc body=353 status=ok
// SIG undefined FUN_140ca86cc(void)

void FUN_140ca86cc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ca8751;
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
LAB_140ca8751:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140ca883c FUN_140ca883c body=31 status=ok
// SIG undefined FUN_140ca883c(void)

undefined8 FUN_140ca883c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ca886a FUN_140ca886a body=31 status=ok
// SIG undefined FUN_140ca886a(void)

undefined8 FUN_140ca886a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ca888a FUN_140ca888a body=144 status=ok
// SIG undefined FUN_140ca888a(void)

void FUN_140ca888a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_140ca891a();
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((plVar3 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar3);
LAB_140ca88d9:
        if ((plVar3[0x22] != 0) || ((**(code **)(*plVar3 + 1000))(plVar3), plVar3[0x22] != 0)) {
          (*(code *)*param_2)(param_2[1]);
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_140ca88d9;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 140ca891a FUN_140ca891a body=389 status=ok
// SIG undefined FUN_140ca891a(void)

void FUN_140ca891a(longlong param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 != *(int *)(param_1 + 0x58)) && (iVar1 != 0)) {
    local_78 = (longlong *)(param_1 + 0x50);
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    puVar3 = puVar4 + (longlong)iVar1 * 5;
    do {
      local_70 = *puVar4;
      local_68 = *(undefined4 *)(puVar4 + 1);
      uStack_64 = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_60 = *(undefined4 *)(puVar4 + 2);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0x14);
      local_58 = (void *)0x0;
      local_50 = *(int *)(puVar4 + 4);
      lVar5 = (longlong)local_50;
      _Src = (void *)puVar4[3];
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar5 * 2);
      }
      lVar5 = FUN_147f9059a(&local_70);
      if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar5 != 0) goto LAB_140ca8a3a;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_140ca8a3a:
        lVar2 = FUN_14598727a();
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          iVar1 = *(int *)(param_1 + 0x58);
          *(uint *)(param_1 + 0x58) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
            FUN_147f99e08(local_78,iVar1);
          }
          *(longlong *)(*local_78 + (longlong)iVar1 * 8) = lVar5;
          if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar5);
          }
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ca8aa0 FUN_140ca8aa0 body=618 status=ok
// SIG undefined FUN_140ca8aa0(void)

undefined8 FUN_140ca8aa0(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar7 = 0;
  }
  else {
    lVar6 = FUN_1404101e2(param_2 + 0x48);
    if (lVar6 != 0) {
      FUN_147a91426(lVar6 + 0x20f,param_2);
    }
    *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    uVar5 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar3;
    *(undefined4 *)(param_2 + 0x58) = uVar4;
    *(undefined4 *)(param_2 + 0x5c) = uVar5;
    if (param_2 == param_1) {
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x88);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x68);
      pvVar2 = *(void **)(param_1 + 0x60);
      *(int *)(param_2 + 0x68) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0x6c) == 0) {
        *(undefined4 *)(param_2 + 0x6c) = 0;
      }
      else {
        FUN_1446dd670((undefined8 *)(param_2 + 0x60),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x60),pvVar2,(longlong)iVar1 * 2);
        }
      }
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x90);
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      iVar1 = *(int *)(param_1 + 0xa0);
      pvVar2 = *(void **)(param_1 + 0x98);
      *(int *)(param_2 + 0xa0) = iVar1;
      if (iVar1 == 0 && *(int *)(param_2 + 0xa4) == 0) {
        *(undefined4 *)(param_2 + 0xa4) = 0;
      }
      else {
        FUN_1447a127e((undefined8 *)(param_2 + 0x98),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(param_2 + 0x98),pvVar2,(longlong)iVar1);
        }
      }
    }
    FUN_1406fa324(param_2 + 0x70,param_1 + 0x70);
    lVar6 = *(longlong *)(param_1 + 0x80);
    if (DAT_14c950c29 == '\x01') {
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar6 = *(longlong *)(param_1 + 0x80);
      }
    }
    *(longlong *)(param_2 + 0x80) = lVar6;
    *(undefined1 *)(param_2 + 0xa8) = *(undefined1 *)(param_1 + 0xa8);
    FUN_1406fa324(param_2 + 0xb0,param_1 + 0xb0);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
    FUN_1406fa324(param_2 + 200,param_1 + 200);
    FUN_1406fa324(param_2 + 0xd8,param_1 + 0xd8);
    *(byte *)(param_2 + 0xf0) = *(byte *)(param_2 + 0xf0) & 0xfe | *(byte *)(param_1 + 0xf0) & 1;
    *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined1 *)(param_2 + 0xf8) = *(undefined1 *)(param_1 + 0xf8);
    *(undefined1 *)(param_2 + 0xf9) = *(undefined1 *)(param_1 + 0xf9);
    *(undefined4 *)(param_2 + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (DAT_14c950c29 == '\x01') {
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar6 = *(longlong *)(param_1 + 0x40);
      }
    }
    *(longlong *)(param_2 + 0x40) = lVar6;
    FUN_140ca8d0a(param_2);
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 140ca8d0a FUN_140ca8d0a body=108 status=ok
// SIG undefined FUN_140ca8d0a(void)

void FUN_140ca8d0a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1404101e2(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_1480a62b6(&local_28);
    FUN_148190e0a(lVar1 + 0x20f,param_1,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca8d78 FUN_140ca8d78 body=533 status=ok
// SIG undefined FUN_140ca8d78(void)

undefined8 * FUN_140ca8d78(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_149ee3240;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  param_1[0x5a] = 0x3f800000;
  param_1[0x5b] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x5c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x2ec) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 2;
  param_1[0x5f] = 0x3f800000;
  param_1[0x60] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x61) = 2;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x314) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x31c) = 2;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  *(undefined4 *)(param_1 + 0x49) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = uStack_ac;
  *(undefined4 *)(param_1 + 0x4a) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x254) = uStack_a4;
  *(undefined4 *)(param_1 + 0x47) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = uStack_bc;
  *(undefined4 *)(param_1 + 0x48) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x244) = uStack_b4;
  *(undefined4 *)(param_1 + 0x45) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uStack_cc;
  *(undefined4 *)(param_1 + 0x46) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x234) = uStack_c4;
  if (DAT_14c950c29 == '\x01') {
    if (local_a0 == 0) {
      local_a0 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  param_1[0x4b] = local_a0;
  puVar5 = local_98;
  puVar6 = param_1 + 0x4c;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x2b4) = local_44;
  *(undefined4 *)(param_1 + 0x56) = local_48;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x58];
  param_1[0x57] = local_40;
  param_1[0x58] = local_38;
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
  param_1[0x59] = local_30;
  local_d8 = &PTR_FUN_149ed05f0;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca8f8e FUN_140ca8f8e body=150 status=ok
// SIG undefined FUN_140ca8f8e(void)

void FUN_140ca8f8e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149ed05f0;
  param_1[1] = &DAT_3f8000003f800000;
  param_1[2] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  param_1[4] = 0x4200000042000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  uVar1 = DAT_14c84635c;
  param_1[0x11] = DAT_14c84635c;
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xf8 | 4;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}



// FUNCTION 140ca9024 FUN_140ca9024 body=404 status=ok
// SIG undefined FUN_140ca9024(void)

undefined8 * FUN_140ca9024(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 uVar13;
  int iVar14;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar1 = param_2[2];
  if (param_1[2] != lVar1) {
    param_1[4] = 0;
  }
  param_1[2] = lVar1;
  if (param_1[3] != param_2[3]) {
    param_1[4] = 0;
  }
  uVar13 = FUN_14477b664();
  uVar13 = FUN_14477b664(uVar13);
  param_1[3] = uVar13;
  param_1[4] = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 6);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  lVar1 = param_2[7];
  if (param_1[7] != lVar1) {
    param_1[9] = 0;
  }
  param_1[7] = lVar1;
  if (param_1[8] != param_2[8]) {
    param_1[9] = 0;
  }
  uVar13 = FUN_14477b664();
  uVar13 = FUN_14477b664(uVar13);
  param_1[8] = uVar13;
  param_1[9] = param_2[9];
  uVar13 = param_2[10];
  *(undefined8 *)((longlong)param_1 + 0x55) = *(undefined8 *)((longlong)param_2 + 0x55);
  param_1[10] = uVar13;
  if ((param_1[0xc] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xc] + 0x50));
  }
  bVar12 = DAT_14cb26569;
  lVar1 = param_2[0xc];
  param_1[0xc] = lVar1;
  if ((lVar1 != 0) && ((bVar12 & 1) != 0)) {
    piVar2 = *(int **)(lVar1 + 0x50);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar14 = 5;
    }
    else {
      if ((char)piVar2[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_140ca90f6;
      }
      iVar14 = 2;
    }
    LOCK();
    piVar2[2] = iVar14;
    UNLOCK();
  }
LAB_140ca90f6:
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar13 = param_2[0x10];
  uVar6 = param_2[0x11];
  uVar7 = param_2[0x12];
  uVar8 = param_2[0x13];
  uVar9 = param_2[0x14];
  uVar10 = param_2[0x15];
  uVar11 = param_2[0x16];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar13;
  param_1[0x11] = uVar6;
  param_1[0x12] = uVar7;
  param_1[0x13] = uVar8;
  param_1[0x14] = uVar9;
  param_1[0x15] = uVar10;
  param_1[0x16] = uVar11;
  return param_1;
}



// FUNCTION 140ca91c6 FUN_140ca91c6 body=89 status=ok
// SIG undefined FUN_140ca91c6(void)

undefined8 * FUN_140ca91c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14acbef80;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ca9220 FUN_140ca9220 body=321 status=ok
// SIG undefined FUN_140ca9220(void)

undefined4 *
FUN_140ca9220(longlong param_1,undefined4 *param_2,longlong param_3,char param_4,undefined4 param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  char local_58 [16];
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    *(undefined2 *)(param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else if (param_4 == '\0') {
    local_58[0] = '\0';
    local_30[0] = 0;
    FUN_140217b36(local_58,param_1 + 0x1e8);
    uVar3 = FUN_1448174c4(local_30);
    FUN_140ca9362(uVar3,&param_5);
    FUN_1400603ec(param_2,param_3,local_58);
    FUN_1448173f8(local_30);
    if ((local_58[0] == '\x03') && (local_48 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  else {
    uVar6 = 0;
    if ((longlong)*(int *)(param_1 + 0x298) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x290);
      lVar4 = 0;
      lVar5 = 0;
      do {
        if ((*(longlong *)(lVar2 + lVar4) == param_3) &&
           ((*(uint *)(lVar2 + 0x18 + lVar4) & 1 << ((byte)param_5 & 0x1f)) != 0)) {
          if (lVar2 - lVar5 != 0) {
            uVar6 = FUN_14001cd04((lVar2 - lVar5) + 8);
          }
          break;
        }
        lVar5 = lVar5 + -0x20;
        lVar4 = lVar4 + 0x20;
      } while (-lVar5 != (longlong)*(int *)(param_1 + 0x298) * 0x20);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar6;
    *(undefined1 *)(param_2 + 8) = 3;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca9362 FUN_140ca9362 body=462 status=ok
// SIG undefined FUN_140ca9362(void)

void FUN_140ca9362(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = *param_1;
    lVar11 = 0;
    do {
      lVar8 = (**(code **)(**(longlong **)(lVar5 + lVar11) + 8))();
      lVar9 = FUN_1465761b6();
      if (lVar8 == lVar9) {
        plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_14b4abc00;
        uVar3 = *param_2;
        plVar7[2] = (longlong)&PTR_FUN_14b4a7980;
        *(undefined4 *)(plVar7 + 3) = uVar3;
        if (plVar7 == (longlong *)0x0) {
          *(undefined8 *)(lVar5 + lVar11) = 0x10;
          plVar10 = *(longlong **)(lVar5 + 8 + lVar11);
          if (plVar10 == (longlong *)0x0) {
            return;
          }
          *(undefined8 *)(lVar5 + 8 + lVar11) = 0;
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          *(longlong **)(lVar5 + lVar11) = plVar7 + 2;
          plVar10 = *(longlong **)(lVar5 + 8 + lVar11);
          if (plVar7 == plVar10) {
            LOCK();
            plVar10 = plVar7 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
            goto LAB_140ca93f2;
          }
          *(longlong **)(lVar5 + 8 + lVar11) = plVar7;
          if (plVar10 == (longlong *)0x0) goto LAB_140ca93f2;
        }
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
        if (plVar7 == (longlong *)0x0) {
          return;
        }
        goto LAB_140ca93f2;
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar11);
  }
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b4abc00;
  uVar3 = *param_2;
  plVar7[2] = (longlong)&PTR_FUN_14b4a7980;
  *(undefined4 *)(plVar7 + 3) = uVar3;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_1401037bc(param_1,iVar4);
  }
  lVar6 = *param_1;
  *(longlong **)(lVar6 + (longlong)iVar4 * 0x10) = plVar7 + 2;
  *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
LAB_140ca93f2:
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ca9530 FUN_140ca9530 body=425 status=ok
// SIG undefined FUN_140ca9530(void)

void FUN_140ca9530(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_140ca96da(local_20);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca96da FUN_140ca96da body=96 status=ok
// SIG undefined FUN_140ca96da(void)

undefined1 FUN_140ca96da(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140da3b08();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140da3b08();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return *(undefined1 *)(lVar4 + 0x57);
      }
    }
  }
  return 0;
}



// FUNCTION 140ca9740 FUN_140ca9740 body=57 status=ok
// SIG undefined FUN_140ca9740(void)

void FUN_140ca9740(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93378 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93378 = FUN_140002ddd(FUN_146570bea,uVar1,L"GbxBrainAspect_CanUseWeapon");
  }
  return;
}



// FUNCTION 140ca977a FUN_140ca977a body=724 status=ok
// SIG undefined FUN_140ca977a(void)

longlong * FUN_140ca977a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *_Dst;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char ****ppppcVar8;
  code *pcVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  char ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar1 = *(byte *)(param_3 + 4);
  if (bVar1 != 0x16) {
    uVar2 = *(ushort *)(param_3 + 3);
    *(ushort *)(param_2 + 3) = uVar2;
    _Dst = param_2;
    puVar6 = param_3;
    if (0x18 < uVar2) {
      _Dst = (longlong *)FUN_14001cc68(uVar2,0);
      *param_2 = (longlong)_Dst;
      puVar6 = (undefined8 *)*param_3;
    }
    uVar5 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + uVar5);
    if (pcVar9 == (code *)0x0) {
      memcpy(_Dst,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
    }
    else {
      (*pcVar9)();
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    goto LAB_140ca9901;
  }
  FUN_140c59106(param_3,&local_98);
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_140ca992b:
    uVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x48);
    uVar7 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x4c) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_140ca992b;
      uVar7 = *puVar6;
    }
  }
  if (*(int *)(param_1 + 0x160) == 0) {
    local_50[0] = *(char ****)(*(longlong *)(param_1 + 0x40) + 0xb8);
    FUN_1401533ba(&local_60,local_50,1);
  }
  else {
    local_58 = *(undefined4 *)(param_1 + 0x168);
    local_60 = *(undefined8 *)(param_1 + 0x160);
  }
  FUN_140ca9a50(&local_98,local_50,&local_60,uVar7);
  if ((local_30 == 0x1f) && (*(char *)local_50[0] == '\x01')) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_140ca9cce(&local_98);
    *(undefined2 *)(param_2 + 3) = 0x30;
    puVar4 = (undefined4 *)FUN_14001cc68(0x30,0);
    *param_2 = (longlong)puVar4;
    *puVar4 = (undefined4)local_98;
    puVar4[1] = local_98._4_4_;
    puVar4[2] = (undefined4)uStack_90;
    puVar4[3] = uStack_90._4_4_;
    *(undefined8 *)(puVar4 + 4) = local_88;
    *(undefined8 *)(puVar4 + 6) = uStack_80;
    *(undefined8 *)(puVar4 + 8) = local_78;
    *(undefined8 *)(puVar4 + 10) = uStack_70;
    *(undefined1 *)(param_2 + 4) = 0x13;
    uVar3 = (uint)local_30;
  }
  else {
    *(ushort *)(param_2 + 3) = local_38;
    if (local_38 < 0x19) {
      uVar5 = (ulonglong)((uint)local_30 * 0x120);
      pcVar9 = *(code **)((longlong)&DAT_14c9a85b8 + uVar5);
      if ((pcVar9 == (code *)0x0) &&
         (pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + uVar5), pcVar9 == (code *)0x0)) {
        memcpy(param_2,local_50,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (*pcVar9)(param_2,local_50);
      }
    }
    else {
      *param_2 = (longlong)local_50[0];
      local_50[0] = (char ***)0x0;
      local_38 = 0;
    }
    *(byte *)(param_2 + 4) = local_30;
    local_30 = 0;
    uVar3 = 0;
  }
  pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar9 != (code *)0x0) {
    ppppcVar8 = local_50;
    if (0x18 < local_38) {
      ppppcVar8 = (char ****)local_50[0];
    }
    (*pcVar9)(ppppcVar8);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
LAB_140ca9901:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca9a50 FUN_140ca9a50 body=407 status=ok
// SIG undefined FUN_140ca9a50(void)

undefined8 * FUN_140ca9a50(undefined8 *param_1,undefined8 *param_2,int *param_3,longlong *param_4)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *_Dst;
  ulonglong uVar7;
  undefined8 *_Src;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_4 != (longlong *)0x0) && (*param_3 != 0)) &&
      (lVar5 = (**(code **)(*param_4 + 0x2b0))(param_4), lVar5 != 0)) &&
     (plVar6 = (longlong *)FUN_14039ffc6(lVar5), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x78))(plVar6,&local_38,param_3);
    if (local_38 != 0) {
      local_40 = *(undefined4 *)(param_1 + 1);
      local_48 = *param_1;
      lVar5 = FUN_140ca9be8();
      if (lVar5 != 0) {
        _Src = (undefined8 *)(lVar5 + 0x10);
        bVar2 = *(byte *)(lVar5 + 0x30);
        uVar3 = *(ushort *)(lVar5 + 0x28);
        *(ushort *)(param_2 + 3) = uVar3;
        _Dst = param_2;
        if (0x18 < uVar3) {
          _Dst = (undefined8 *)FUN_14001cc68(uVar3,0);
          *param_2 = _Dst;
          _Src = (undefined8 *)*_Src;
        }
        uVar7 = (ulonglong)((uint)bVar2 * 0x120);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
        if (pcVar4 == (code *)0x0) {
          memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (*pcVar4)(_Dst,_Src);
        }
        *(undefined1 *)(param_2 + 4) = *(undefined1 *)(lVar5 + 0x30);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_30 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        goto LAB_140ca9b52;
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
LAB_140ca9b52:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ca9be8 FUN_140ca9be8 body=228 status=ok
// SIG undefined FUN_140ca9be8(void)

int * FUN_140ca9be8(longlong param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 8);
  if ((longlong)*(int *)(lVar1 + 0x120) != 0) {
    piVar2 = *(int **)(lVar1 + 0x118);
    lVar3 = (longlong)*(int *)(lVar1 + 0x120) * 0x48;
    do {
      if ((*piVar2 == *param_2) && (piVar2[2] == param_2[2])) goto LAB_140ca9ca7;
      piVar2 = piVar2 + 0x12;
      lVar3 = lVar3 + -0x48;
    } while (lVar3 != 0);
  }
  local_58 = *(undefined8 *)(lVar1 + 0x10);
  local_50 = *(undefined4 *)(lVar1 + 0x18);
  FUN_1448075d0(local_48);
  lVar1 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x98) != 0)) {
    piVar2 = *(int **)(lVar1 + 0x90);
    lVar1 = (longlong)*(int *)(lVar1 + 0x98) * 0x48;
    do {
      if ((*piVar2 == *param_2) && (piVar2[2] == param_2[2])) goto LAB_140ca9ca7;
      piVar2 = piVar2 + 0x12;
      lVar1 = lVar1 + -0x48;
    } while (lVar1 != 0);
  }
  piVar2 = (int *)0x0;
LAB_140ca9ca7:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return piVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ca9cce FUN_140ca9cce body=829 status=ok
// SIG undefined FUN_140ca9cce(void)

void FUN_140ca9cce(undefined8 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != '\x01') goto LAB_140ca9f61;
  iVar2 = *(int *)(param_2 + 0x10);
  piVar8 = (int *)&DAT_14c948618;
  piVar7 = &DAT_14c948620;
  if (((iVar2 != 0) && (1 < *(int *)(param_2 + 0x14))) && (iVar2 != DAT_14c948000)) {
    piVar8 = (int *)(*(longlong *)(param_2 + 0x28) + 0xc);
    piVar7 = (int *)(*(longlong *)(param_2 + 0x28) + 0x14);
  }
  piVar1 = (int *)(param_2 + 0x10);
  if ((*piVar8 == DAT_14cb7beb0) && (*piVar7 == DAT_14cb7beb8)) {
LAB_140ca9ff6:
    local_28 = DAT_14cb7bba0;
    local_30 = DAT_14cb7bb98;
  }
  else if (iVar2 == 0) {
    if ((int)DAT_14c948618 == 0) goto LAB_140ca9ff6;
LAB_140ca9fe0:
    local_28 = DAT_14c948620;
    local_30 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x14);
    if (uVar3 < 2 || iVar2 == DAT_14c948000) {
      piVar8 = (int *)&DAT_14c948618;
    }
    else {
      pcVar5 = param_2 + 0x18;
      if (0 < *(int *)(param_2 + 0x34)) {
        pcVar5 = *(char **)(param_2 + 0x28);
      }
      if (1 < (int)uVar3) {
        pcVar5 = *(char **)(param_2 + 0x28);
      }
      piVar8 = (int *)&DAT_14c948618;
      if (1 < (int)uVar3) {
        piVar8 = (int *)(pcVar5 + 0xc);
      }
    }
    if (*piVar8 == 0) goto LAB_140ca9ff6;
    if (((iVar2 == 0) || (iVar4 = *(int *)(param_2 + 0x14), iVar4 == 0)) ||
       ((iVar2 == DAT_14c948000 || ((iVar4 == 1 || (iVar4 < 2)))))) goto LAB_140ca9fe0;
    local_28 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x14);
    local_30 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
  }
  *(undefined4 *)(param_1 + 1) = local_28;
  *param_1 = local_30;
  piVar8 = (int *)&DAT_14c948618;
  piVar7 = &DAT_14c948620;
  if (((*piVar1 != 0) && (2 < *(int *)(param_2 + 0x14))) && (*piVar1 != DAT_14c948000)) {
    piVar8 = (int *)(*(longlong *)(param_2 + 0x28) + 0x18);
    piVar7 = (int *)(*(longlong *)(param_2 + 0x28) + 0x20);
  }
  if ((*piVar8 == (int)DAT_14cb7bd68) && (*piVar7 == DAT_14cb7bd70)) {
    local_28 = DAT_14c948620;
    local_30 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
  }
  else {
    FUN_144a659ac(piVar1,&local_30,2);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = local_28;
  *(undefined8 *)((longlong)param_1 + 0xc) = local_30;
  iVar2 = *piVar1;
  piVar8 = (int *)&DAT_14c948618;
  piVar7 = &DAT_14c948620;
  if (((iVar2 != 0) && (3 < *(int *)(param_2 + 0x14))) && (iVar2 != DAT_14c948000)) {
    piVar8 = (int *)(*(longlong *)(param_2 + 0x28) + 0x24);
    piVar7 = (int *)(*(longlong *)(param_2 + 0x28) + 0x2c);
  }
  if ((((*piVar8 == (int)DAT_14cb7bd80) && (*piVar7 == DAT_14cb7bd88)) || (iVar2 == 0)) ||
     ((iVar4 = *(int *)(param_2 + 0x14), iVar4 == 0 || (iVar2 == DAT_14c948000)))) {
LAB_140ca9f80:
    local_28 = DAT_14c948620;
    uVar6 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
  }
  else {
    pcVar5 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if (1 < iVar4) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if ((iVar4 == 1) || (iVar4 < 4)) goto LAB_140ca9f80;
    local_28 = *(undefined4 *)(pcVar5 + 0x2c);
    uVar6 = *(undefined8 *)(pcVar5 + 0x24);
  }
  *(undefined4 *)(param_1 + 4) = local_28;
  param_1[3] = uVar6;
  if (((*piVar1 == 0) || (iVar2 = *(int *)(param_2 + 0x14), iVar2 == 0)) ||
     (*piVar1 == DAT_14c948000)) {
LAB_140ca9fc1:
    local_28 = DAT_14c948620;
    local_30 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
  }
  else {
    pcVar5 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if (1 < iVar2) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if ((iVar2 == 1) || (iVar2 < 5)) goto LAB_140ca9fc1;
    local_28 = *(undefined4 *)(pcVar5 + 0x38);
    local_30 = *(undefined8 *)(pcVar5 + 0x30);
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_28;
  *(undefined8 *)((longlong)param_1 + 0x24) = local_30;
LAB_140ca9f61:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140caa00c FUN_140caa00c body=109 status=ok
// SIG undefined FUN_140caa00c(void)

undefined8 * FUN_140caa00c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b10ce30;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_14069633f(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_140caa07a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140caa07a FUN_140caa07a body=69 status=ok
// SIG undefined FUN_140caa07a(void)

void FUN_140caa07a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac93210;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140caa0c0 FUN_140caa0c0 body=117 status=ok
// SIG undefined FUN_140caa0c0(void)

void FUN_140caa0c0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x134) != 0) {
      uVar1 = *(uint *)(param_1 + 0x130);
      uVar3 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140caa125;
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar2 != 0) &&
         ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x134) &&
          ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)))) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
        goto LAB_140caa125;
      }
    }
  }
  uVar3 = 0;
LAB_140caa125:
  FUN_140caa136(uVar3);
  return;
}



// FUNCTION 140caa136 FUN_140caa136 body=219 status=ok
// SIG undefined FUN_140caa136(void)

longlong FUN_140caa136(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar2 = FUN_140caa2f8();
      plVar1 = *(longlong **)(param_1 + 0x178);
      if ((((plVar1 != (longlong *)0x0) && (lVar2 != 0)) && (lVar4 = plVar1[2], lVar4 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        uVar3 = FUN_140caa212();
        lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
        if (lVar2 != 0) {
          uVar3 = FUN_140caa212();
          lVar4 = FUN_144718840(lVar2,uVar3);
          if ((lVar2 != lVar4) && (lVar4 != 0)) {
            return lVar4;
          }
        }
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x1f0);
    if (plVar1 != (longlong *)0x0) {
      uVar3 = FUN_140caa212();
      lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
      if (lVar2 != 0) {
        uVar3 = FUN_140caa212();
        lVar4 = FUN_144718840(lVar2,uVar3);
        if (lVar2 == lVar4) {
          return 0;
        }
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 140caa212 FUN_140caa212 body=228 status=ok
// SIG undefined FUN_140caa212(void)

longlong FUN_140caa212(void)

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
  if (DAT_14cb5d3a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148696381;
    local_40 = FUN_1464dae3e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryReplicationInterface",&DAT_14cb5d3a0,
                  &DAT_148696380);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d3a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140caa2f8 FUN_140caa2f8 body=228 status=ok
// SIG undefined FUN_140caa2f8(void)

longlong FUN_140caa2f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cadb468 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463cc142;
    local_38 = &LAB_147ac8c00;
    local_40 = FUN_1463ce2fd;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x410;
    FUN_14081cfa3(L"/Script/Engine",L"GameState",&DAT_14cadb468,FUN_1463ce2d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadb468;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140caa3de FUN_140caa3de body=726 status=ok
// SIG undefined FUN_140caa3de(void)

void FUN_140caa3de(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  
  if (((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
       (uVar13 = *(uint *)(param_1 + 0x18), -1 < (int)uVar13)) &&
      (((int)uVar13 < DAT_14c9647dc &&
       (lVar14 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8), lVar14 != 0)))) &&
     ((*(int *)(lVar14 + 0x10) == *(int *)(param_1 + 0x1c) &&
      (((*(uint *)(lVar14 + 8) & 0x10200000) == 0 &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(), cVar4 != '\0')))))) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
    FUN_140d714a4(uVar6);
    iVar2 = (int)param_2[5];
    if (iVar2 == 0) {
      uVar16 = 1;
      uVar19 = 0;
      iVar17 = 0;
      iVar5 = 0;
    }
    else {
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_2 + 2);
      }
      uVar13 = *puVar7;
      if (uVar13 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar19 = 0;
        uVar16 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar16 = uVar19;
        }
        iVar17 = 0;
        do {
          if (uVar16 == uVar19) {
            return;
          }
          iVar17 = iVar17 + 0x20;
          uVar13 = puVar7[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar19 = 0;
        iVar17 = 0;
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar5 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar13 = 0xffffffff;
      do {
        lVar18 = (longlong)iVar5 * 0x40 + *param_2;
        lVar14 = FUN_140279ac4(lVar18);
        if (lVar14 != 0) {
          lVar14 = FUN_140279ac4(lVar18);
          uVar12 = 0xfffffffe;
          if ((longlong)*(int *)(param_1 + 0x30) != 0) {
            lVar10 = (longlong)*(int *)(param_1 + 0x30) << 3;
            iVar5 = -1;
            lVar15 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4) == lVar14) {
                uVar12 = (uint)lVar15;
                uVar11 = -(uint)(iVar5 == 0) | uVar12;
                goto LAB_140caa5a8;
              }
              lVar15 = lVar15 + 2;
              iVar5 = iVar5 + -1;
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
          uVar11 = 0xffffffff;
LAB_140caa5a8:
          FUN_140045b56(uVar6,uVar11,0 < *(int *)(lVar18 + 0x30));
          FUN_140045b56(uVar6,uVar12 | 1,1 < *(int *)(lVar18 + 0x30));
        }
        uVar13 = uVar13 & ~(uint)uVar16;
        puVar7 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar7 = (uint *)(param_2 + 2);
        }
        iVar3 = (int)param_2[5];
        iVar5 = (int)uVar19;
        lVar14 = (longlong)iVar5;
        uVar12 = puVar7[lVar14] & uVar13;
        if (uVar12 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar8) {
            lVar18 = 0;
            do {
              uVar12 = puVar7[lVar14 + lVar18 + 1];
              if (uVar12 != 0) {
                uVar19 = (ulonglong)(iVar5 + (int)lVar18 + 1);
                uVar13 = 0xffffffff;
                goto LAB_140caa65f;
              }
              iVar17 = iVar17 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar9 - lVar14 != lVar18);
            uVar13 = 0xffffffff;
            iVar5 = iVar9;
          }
          uVar19 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar3;
        }
        else {
LAB_140caa65f:
          uVar16 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar16 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar5 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
  }
  return;
}



// FUNCTION 140caa6c2 FUN_140caa6c2 body=88 status=ok
// SIG undefined FUN_140caa6c2(void)

undefined8 * FUN_140caa6c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b07eae0;
  FUN_140caa71a(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140caa71a FUN_140caa71a body=75 status=ok
// SIG undefined FUN_140caa71a(void)

void FUN_140caa71a(longlong param_1,int param_2)

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
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140caa766 FUN_140caa766 body=21 status=ok
// SIG undefined FUN_140caa766(void)

undefined * FUN_140caa766(void)

{
  FUN_140caa77c();
  return &DAT_14cb32d20;
}



// FUNCTION 140caa77c FUN_140caa77c body=315 status=ok
// SIG undefined FUN_140caa77c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140caa77c(void)

{
  if ((DAT_14cb32d87 & 2) != 0) {
    return;
  }
  DAT_14cb32d87 = DAT_14cb32d87 | 2;
  _DAT_14cb32d28 = L"FNiagaraShaderMapContent";
  _DAT_14cb32d40 = FUN_146826540;
  _DAT_14cb32d48 = FUN_146825d77;
  _DAT_14cb32d50 = FUN_146825fd6;
  _DAT_14cb32d58 = FUN_1407e02ea;
  _DAT_14cb32d60 = FUN_146826273;
  _DAT_14cb32d38 = FUN_1438fa776;
  _DAT_14cb32d78 = 0xffffffff000000f0;
  _DAT_14cb32d80 = 8;
  DAT_14cb32d84 = 0;
  _DAT_14cb32d68 = &LAB_14804e96c;
  _DAT_14cb342b0 = L"ShaderMapId";
  DAT_14cb342da = FUN_140850cc5();
  FUN_1457918d0();
  _DAT_14cb342b8 = &DAT_14cb32d90;
  _DAT_14cb342c8 = &LAB_14682652b;
  _DAT_14cb342d0 = &DAT_100000060;
  _DAT_14cb342d8 = 0;
  _DAT_14cb342c0 = DAT_14cb32d30;
  DAT_14cb32d30 = &DAT_14cb342b0;
  FUN_145791854();
  FUN_1407e00cc(&DAT_14cb32d20);
  return;
}



// FUNCTION 140caa8b8 FUN_140caa8b8 body=372 status=ok
// SIG undefined FUN_140caa8b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140caa8b8(void)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  
  FUN_145792496();
  pwVar2 = L"MaxFieldAlignment";
  _DAT_14c87e598 = L"MaxFieldAlignment";
  DAT_14c87e5c2 = '\0';
  while (wVar5 = *pwVar2, wVar5 != L'\0') {
    pwVar2 = pwVar2 + 1;
    if (wVar5 == L'_') {
      if (*pwVar2 == L'D') {
        wVar5 = L'D';
        pwVar4 = L"DEPRECATED";
        do {
          if (wVar5 == L'\0') goto LAB_140caa91a;
          pwVar3 = pwVar4 + 1;
          wVar5 = pwVar2[1];
          pwVar2 = pwVar2 + 1;
          pwVar1 = pwVar4 + 1;
          pwVar4 = pwVar3;
        } while (wVar5 == *pwVar1);
      }
      else {
        pwVar3 = L"DEPRECATED";
      }
      DAT_14c87e5c2 = DAT_14c87e5c2 + (char)((int)pwVar3 + 0xb61c7ce8U >> 1);
    }
    DAT_14c87e5c2 = DAT_14c87e5c2 + '\x01';
  }
LAB_140caa91a:
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  _DAT_14c87e5a0 = &DAT_14c87e638;
  _DAT_14c87e5b0 = &LAB_14682652b;
  _DAT_14c87e5b8 = 0x100000000;
  _DAT_14c87e5c0 = 0;
  _DAT_14c87e5a8 = DAT_14c874e58;
  DAT_14c874e58 = &DAT_14c87e598;
  return;
}



// FUNCTION 140caaa2c FUN_140caaa2c body=1454 status=ok
// SIG undefined FUN_140caaa2c(void)

ulonglong FUN_140caaa2c(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[0x57c] == DAT_14cbc6c68) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_140caaa84;
  }
  lVar5 = FUN_140caafdc();
  if ((((((param_1[0x842] != 0) && ((char)param_1[0x220] == '\n')) && (param_1[0x22] != 0)) &&
       ((param_1[0x3a2] != 0 && (param_1[0x3a3] != 0)))) && (param_1[0x3e] != 0)) &&
     (cVar3 = thunk_FUN_140553fce(), lVar5 != 0 && cVar3 == '\x01')) {
    fVar10 = (float)FUN_1440e81ea(param_1);
    local_68 = (double)fVar10;
    local_70 = 0.0;
    local_60 = 0.0;
    FUN_144a76660(&local_70,&local_58);
    uVar4 = (**(code **)(*param_1 + 0xd80))(param_1);
    if ((char)uVar4 == '\0') {
      dVar12 = (double)param_1[0x71];
      dVar13 = (double)param_1[0x72];
      dVar14 = (double)param_1[0x73];
      if (((dVar12 != 0.0) || (NAN(dVar12))) ||
         ((dVar13 != 0.0 || (((NAN(dVar13) || (dVar14 != 0.0)) || (NAN(dVar14))))))) {
        dVar15 = 1.0 / SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
        dVar13 = dVar14 * dVar15 * local_48 +
                 dVar15 * dVar12 * local_58 + dVar13 * dVar15 * local_50;
        dVar12 = dVar13;
        if (1.0 <= dVar13) {
          dVar12 = 1.0;
        }
        dVar12 = acos((double)(-(ulonglong)(dVar13 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar13 < -1.0) & (ulonglong)dVar12));
        if (dVar12 * 57.29577951308232 <= (double)*(float *)(lVar5 + 0x170)) {
          FUN_140c07c00(param_1,DAT_14cbc6c68);
          lVar5 = param_1[0x57e];
          if (lVar5 == 0) {
            uVar6 = FUN_140aed8fc();
            lVar5 = FUN_14477b664(uVar6);
            param_1[0x57e] = lVar5;
          }
          plVar8 = param_1 + 0x57d;
          lVar7 = param_1[0x57f];
          if (lVar7 == 0) {
            if ((lVar5 != 0) && (*plVar8 != 0)) {
              plVar2 = *(longlong **)(lVar5 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                param_1[0x57f] = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar6,plVar8);
                param_1[0x57f] = lVar7;
                if (lVar7 != 0) {
                  lVar5 = param_1[0x57e];
                  goto LAB_140caad8d;
                }
              }
            }
          }
          else {
LAB_140caad8d:
            if (lVar5 == 0) {
              uVar6 = FUN_140aed8fc();
              lVar5 = FUN_14477b664(uVar6);
              param_1[0x57e] = lVar5;
              lVar7 = param_1[0x57f];
              if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*plVar8 != 0)) {
                plVar2 = *(longlong **)(lVar5 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
                  lVar7 = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar7 = FUN_144aff482(uVar6,plVar8);
                }
                param_1[0x57f] = lVar7;
              }
            }
            fVar10 = (float)FUN_1418738a0(lVar7,param_1);
            if (param_1[0x3a2] == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = (longlong *)param_1[0x3a3];
            }
            (**(code **)(*plVar8 + 0x30))(plVar8,&local_70);
            dVar12 = (double)fVar10;
            param_1[0x25] = (longlong)(dVar12 * local_70);
            param_1[0x26] = (longlong)(local_68 * dVar12);
            param_1[0x27] = (longlong)(local_60 * dVar12);
          }
          goto LAB_140caac65;
        }
      }
    }
    else {
      FUN_140c07c00(param_1,DAT_14cbc6c70);
      lVar5 = param_1[0x57e];
      if (lVar5 == 0) {
        uVar6 = FUN_140aed8fc();
        lVar5 = FUN_14477b664(uVar6);
        param_1[0x57e] = lVar5;
      }
      plVar8 = param_1 + 0x57d;
      if (param_1[0x57f] != 0) {
LAB_140caab73:
        *(undefined1 *)(param_1 + 0x3a8) = 6;
        fVar10 = (float)(**(code **)(*param_1 + 0x480))(param_1);
        lVar5 = param_1[0x57e];
        if (lVar5 == 0) {
          uVar6 = FUN_140aed8fc();
          lVar5 = FUN_14477b664(uVar6);
          param_1[0x57e] = lVar5;
        }
        lVar7 = param_1[0x57f];
        if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*plVar8 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
            lVar7 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar7 = FUN_144aff482(uVar6,plVar8);
          }
          param_1[0x57f] = lVar7;
        }
        fVar11 = (float)FUN_1418738a0(lVar7,param_1);
        dVar13 = (double)fVar10;
        dVar12 = (double)fVar11;
        dVar15 = DAT_14c8462d0 * dVar12;
        dVar14 = DAT_14c8462c8 * dVar12;
        param_1[0x25] = (longlong)(dVar12 * DAT_14c8462c0 + dVar13 * local_58);
        param_1[0x26] = (longlong)(dVar14 + local_50 * dVar13);
        param_1[0x27] = (longlong)(dVar15 + local_48 * dVar13);
        bVar1 = *(byte *)(param_1[0x3e] + 0x550);
        uVar6 = FUN_14880889c(param_1);
        FUN_1409df526(param_1,uVar6);
        *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) & 0xf7 | bVar1 & 8;
LAB_140caac65:
        uVar9 = (ulonglong)uVar4 ^ 1;
        goto LAB_140caaa84;
      }
      if ((lVar5 != 0) && (*plVar8 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          param_1[0x57f] = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar6,plVar8);
          param_1[0x57f] = lVar5;
          if (lVar5 != 0) goto LAB_140caab73;
        }
      }
    }
  }
  uVar4 = FUN_140cab02e(param_1,param_2);
  uVar9 = (ulonglong)uVar4;
LAB_140caaa84:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140caafdc FUN_140caafdc body=81 status=ok
// SIG undefined FUN_140caafdc(void)

longlong * FUN_140caafdc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x1d38);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_145833ee4();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140cab02e FUN_140cab02e body=610 status=ok
// SIG undefined FUN_140cab02e(void)

ulonglong FUN_140cab02e(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((*(longlong *)(param_1 + 0x1cf0) == 0) || ((&DAT_00001100)[param_1] != '\n')) ||
       (*(longlong *)(param_1 + 0x110) == 0)) ||
      ((*(longlong *)(param_1 + 0x1d10) == 0 || (*(longlong *)(param_1 + 0x1d18) == 0)))) ||
     ((*(longlong *)(param_1 + 0x1f0) == 0 || (cVar1 = thunk_FUN_140553fce(), cVar1 == '\0')))) {
    uVar4 = 0;
    goto LAB_140cab05c;
  }
  *(undefined1 *)(param_1 + 0x1d40) = 5;
  if (*(longlong *)(param_1 + 0x1d10) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x1d18);
  }
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_38,param_1);
  dVar8 = local_38 * local_38 + local_30 * local_30;
  if ((dVar8 != 1.0) || (NAN(dVar8))) {
    dVar6 = DAT_14c8464e0;
    dVar7 = DAT_14c8464e8;
    dVar9 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar8) {
      dVar7 = local_30 * (1.0 / SQRT(dVar8));
      dVar6 = local_38 * (1.0 / SQRT(dVar8));
      dVar9 = 0.0;
    }
  }
  else {
    dVar6 = local_38;
    dVar7 = local_30;
    dVar9 = (double)(-(ulonglong)(local_28 == 0.0) & (ulonglong)local_28);
  }
  dVar8 = (double)*(float *)(*(longlong *)(param_1 + 0x1cf0) + 0x240);
  *(double *)(param_1 + 0x128) = dVar6 * dVar8;
  *(double *)(param_1 + 0x130) = dVar7 * dVar8;
  *(double *)(param_1 + 0x138) = dVar9 * dVar8;
  uVar4 = CONCAT71((int7)((ulonglong)&local_38 >> 8),
                   *(undefined1 *)(*(longlong *)(param_1 + 0x1f0) + 0x550)) & 0xffffffffffffff08;
  FUN_1409df526(param_1,&DAT_14cb75f24);
  *(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x550) =
       *(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x550) & 0xf7 | (byte)uVar4;
  lVar2 = *(longlong *)(param_1 + 0x1d10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_1 + 0x1d10);
    }
  }
  *(longlong *)(param_1 + 0x1d20) = lVar2;
  *(undefined8 *)(param_1 + 0x1d28) = *(undefined8 *)(param_1 + 0x1d18);
  uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  if (param_2 != '\0') goto LAB_140cab05c;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
      goto LAB_140cab1da;
    }
    fVar5 = 0.0;
  }
  else {
LAB_140cab1da:
    fVar5 = (float)*(double *)(lVar2 + 0x6d0);
  }
  *(float *)(param_1 + 0x1d30) = fVar5;
  FUN_14184d0b2(param_1 + 0x1e78);
LAB_140cab05c:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140cab292 FUN_140cab292 body=137 status=ok
// SIG undefined FUN_140cab292(void)

void FUN_140cab292(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = *param_2;
  local_28 = *(undefined4 *)(param_2 + 1);
  local_20 = 0;
  local_40 = param_8;
  local_48 = param_7;
  local_50 = param_6;
  local_58 = param_5;
  FUN_140cab31c(param_7,&local_30);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cab31c FUN_140cab31c body=576 status=ok
// SIG undefined FUN_140cab31c(void)

void FUN_140cab31c(longlong *param_1,longlong *param_2,undefined4 param_3,longlong *param_4,
                  byte param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    if ((param_4 == (longlong *)0x0) || (param_5 != 0)) {
      if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x180))(), lVar3 != 0))
         && (0 < *(int *)(lVar3 + 0x238))) {
        lVar7 = 0;
        local_a0 = lVar3;
        do {
          iVar1 = *(int *)(*(longlong *)(local_a0 + 0x230) + 4 + lVar7 * 8);
          if (((((iVar1 != 0) &&
                (uVar2 = *(uint *)(*(longlong *)(local_a0 + 0x230) + lVar7 * 8), -1 < (int)uVar2))
               && (((int)uVar2 < DAT_14c9647dc &&
                   ((plVar6 = (longlong *)
                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                    plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))))) &&
              ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
             (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)) {
            uVar4 = FUN_1410a2c98();
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar4);
            if (plVar6 != (longlong *)0x0) {
              uVar4 = FUN_1410a2c98();
              plVar5 = (longlong *)FUN_144718840(plVar6,uVar4);
              if (((plVar6 != plVar5) && (plVar5 != (longlong *)0x0)) &&
                 ((plVar5 == param_4 & param_5) == 0)) {
                local_88 = DAT_14c8464f0;
                local_98 = (undefined4)DAT_14c8464e0;
                uStack_94 = DAT_14c8464e0._4_4_;
                uStack_90 = (undefined4)DAT_14c8464e8;
                uStack_8c = DAT_14c8464e8._4_4_;
                local_b0 = 0;
                local_b8 = 0;
                local_c0 = &local_98;
                local_c8 = param_8;
                local_d0 = param_7;
                local_d8 = param_6;
                (**(code **)(*plVar5 + 0x40))(plVar5,param_2,param_3,0);
              }
            }
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)(local_a0 + 0x238));
      }
    }
    else {
      local_c0 = &local_78;
      local_68 = DAT_14c8464f0;
      local_78 = (undefined4)DAT_14c8464e0;
      uStack_74 = DAT_14c8464e0._4_4_;
      uStack_70 = (undefined4)DAT_14c8464e8;
      uStack_6c = DAT_14c8464e8._4_4_;
      local_b0 = 0;
      local_b8 = 0;
      local_c8 = param_8;
      local_d0 = param_7;
      local_d8 = param_6;
      (**(code **)(*param_4 + 0x40))(param_4,param_2,param_3,0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cab55e FUN_140cab55e body=108 status=ok
// SIG undefined FUN_140cab55e(void)

void FUN_140cab55e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b41a0d0;
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_14b00be10;
  FUN_14487da0a(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140cab5ca(param_1 + 0x10);
  return;
}



// FUNCTION 140cab5ca FUN_140cab5ca body=94 status=ok
// SIG undefined FUN_140cab5ca(void)

void FUN_140cab5ca(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b419c40;
  plVar3 = (longlong *)param_1[6];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cab624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140cab628 FUN_140cab628 body=114 status=ok
// SIG undefined FUN_140cab628(void)

undefined8 *** FUN_140cab628(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 ***local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  ppppuVar1 = &local_20;
  local_28 = param_2;
  FUN_140cab69c(param_1,ppppuVar1,1 << (DAT_14cab3290 & 0x1f));
  if ((local_18 == '\x01') || (local_18 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 140cab69c FUN_140cab69c body=1272 status=ok
// SIG undefined FUN_140cab69c(void)

longlong * FUN_140cab69c(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  byte *pbVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  ulonglong local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar5;
  uVar5 = param_3 - 1 & uVar5;
  uVar14 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  uVar19 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar19 >> 0x38;
  uVar14 = *param_1;
  bVar8 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar8 == 0) {
    uVar18 = 8;
  }
  else {
    uVar18 = 8;
    lVar10 = 0;
    do {
      uVar11 = (ushort)*(byte *)(uVar14 + 3 + lVar10);
      if (uVar18 < uVar11) {
        uVar18 = uVar11;
      }
      lVar10 = lVar10 + 6;
    } while ((ulonglong)((uint)bVar8 + (uint)bVar8) * 3 != lVar10);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  FUN_14086fe48(local_78,bVar8 + 1);
  lVar10 = (ulonglong)((uint)bVar8 * 2 + 2) * 3;
  bVar3 = (byte)(uVar19 >> 0x38);
  if (uVar20 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)bVar3 + (uint)(bVar3 == 0);
    pbVar12 = (byte *)(uVar14 + 3);
    uVar15 = 0;
    do {
      uVar16 = -(ulonglong)*pbVar12 & (lVar10 + (ulonglong)*pbVar12) - 1;
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(short *)(puVar7 + uVar15 * 2) = (short)uVar16;
      lVar10 = pbVar12[-1] + uVar16;
      uVar15 = uVar15 + 1;
      pbVar12 = pbVar12 + 6;
    } while (uVar5 != uVar15);
  }
  uVar15 = lVar10 + 7U & 0xfffffffffffffff8;
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  uVar16 = (ulonglong)uVar5;
  *(short *)(puVar7 + uVar16 * 2) = (short)uVar15;
  uVar15 = uVar15 + 8;
  if (uVar5 < bVar8) {
    pbVar12 = (byte *)(uVar16 * 6 + 3 + uVar14);
    do {
      uVar15 = -(ulonglong)*pbVar12 & (uVar15 + *pbVar12) - 1;
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(short *)(puVar7 + uVar16 * 2 + 2) = (short)uVar15;
      uVar16 = uVar16 + 1;
      uVar15 = pbVar12[-1] + uVar15;
      pbVar12 = pbVar12 + 6;
    } while (bVar8 != uVar16);
  }
  uVar16 = *param_1;
  local_88 = param_4;
  local_80 = param_2;
  if (((ushort)param_1[1] < uVar18) || (*(ushort *)((longlong)param_1 + 10) < uVar15)) {
    uVar6 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar15 < uVar6) {
      uVar15 = uVar6;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar15;
    uVar15 = uVar15 & 0xffff;
    uVar6 = FUN_14001cc68(uVar15,uVar18);
    *param_1 = uVar6;
    local_94 = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
  }
  else {
    local_94 = 0;
    uVar6 = uVar16;
  }
  bVar8 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar8;
  uVar15 = (ulonglong)bVar8;
  iVar9 = bVar8 - 1;
  if ((int)(uint)bVar3 < iVar9) {
    pbVar12 = (byte *)((ulonglong)bVar8 * 6 + -10 + uVar14);
    uVar6 = (ulonglong)bVar8;
    local_90 = uVar14;
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      pvVar13 = (void *)(*(ushort *)(pbVar12 + -2) + uVar16);
      if ((ulonglong)*(ushort *)(pbVar12 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar7 + uVar6 * 2 + -2) + *param_1),pvVar13,
              (ulonglong)*pbVar12);
      uVar15 = uVar6 - 1;
      pbVar12 = pbVar12 + -6;
      lVar10 = uVar6 - 2;
      uVar6 = uVar15;
    } while ((longlong)uVar20 < lVar10);
    iVar9 = (int)uVar15 + -1;
    uVar6 = *param_1;
    uVar14 = local_90;
  }
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  *(undefined8 *)(uVar6 + *(ushort *)(puVar7 + (longlong)iVar9 * 2)) = *local_88;
  if (1 < (int)uVar15) {
    uVar15 = (ulonglong)((int)uVar15 - 2);
    pbVar12 = (byte *)(uVar15 * 6 + 2 + uVar14);
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      pvVar13 = (void *)(uVar16 + *(ushort *)(pbVar12 + -2));
      if ((ulonglong)*(ushort *)(pbVar12 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar7 + uVar15 * 2) + *param_1),pvVar13,
              (ulonglong)*pbVar12);
      pbVar12 = pbVar12 + -6;
      bVar21 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar21);
  }
  uVar15 = *param_1;
  bVar8 = *(byte *)((longlong)param_1 + 0xc);
  uVar5 = (uint)bVar8;
  iVar9 = bVar8 - 1;
  uVar6 = uVar15;
  if ((int)(uint)bVar3 < iVar9) {
    lVar10 = (ulonglong)((uint)bVar8 + (uint)bVar8) * 3;
    uVar6 = (ulonglong)(uint)bVar8;
    do {
      *(undefined2 *)((uVar15 - 2) + lVar10) = *(undefined2 *)((uVar14 - 8) + lVar10);
      *(undefined4 *)((uVar15 - 6) + lVar10) = *(undefined4 *)((uVar14 - 0xc) + lVar10);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(undefined2 *)((uVar15 - 6) + lVar10) = *(undefined2 *)(puVar7 + uVar6 * 2 + -2);
      uVar1 = uVar6 - 1;
      lVar10 = lVar10 + -6;
      lVar17 = uVar6 - 2;
      uVar6 = uVar1;
    } while ((longlong)uVar20 < lVar17);
    uVar5 = (uint)uVar1;
    iVar9 = uVar5 - 1;
    uVar6 = *param_1;
  }
  puVar2 = (ushort *)(uVar15 + (longlong)iVar9 * 6);
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  uVar18 = *(ushort *)(puVar7 + (longlong)iVar9 * 2);
  *puVar2 = 0xffff;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (*param_1 <= uVar18 + uVar6) {
    *puVar2 = (short)(uVar18 + uVar6) - (short)*param_1;
  }
  puVar2[1] = 0x808;
  puVar2[2] = 0x100;
  if (1 < (int)uVar5) {
    uVar20 = (ulonglong)(uVar5 - 2);
    lVar10 = uVar20 * 6;
    do {
      *(undefined2 *)(uVar15 + 4 + lVar10) = *(undefined2 *)(uVar14 + 4 + lVar10);
      *(undefined4 *)(uVar15 + lVar10) = *(undefined4 *)(uVar14 + lVar10);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(undefined2 *)(uVar15 + lVar10) = *(undefined2 *)(puVar7 + uVar20 * 2);
      lVar10 = lVar10 + -6;
      bVar21 = uVar20 != 0;
      uVar20 = uVar20 - 1;
    } while (bVar21);
  }
  if (((byte)local_94 & uVar16 != 0) == 1) {
    FUN_1400020a8(uVar16);
  }
  iVar9 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar9 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar9 + 1U) {
    FUN_14086feca(param_1 + 3,iVar9);
  }
  lVar10 = (uVar19 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar10 + 0x10),(void *)(param_1[3] + lVar10),
          (ulonglong)(iVar9 - (uint)bVar3) << 4);
  plVar4 = local_80;
  uVar14 = param_1[3];
  *(undefined1 **)(uVar14 + lVar10) = &LAB_1432df858;
  *(undefined **)(uVar14 + 8 + lVar10) = &DAT_1432df85c;
  lVar10 = 0;
  if ((ulonglong)*puVar2 != 0xffff) {
    lVar10 = *param_1 + (ulonglong)*puVar2;
  }
  *local_80 = (ulonglong)(byte)puVar2[2] + lVar10;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar2 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 140cabb96 FUN_140cabb96 body=172 status=ok
// SIG undefined FUN_140cabb96(void)

undefined8 * FUN_140cabb96(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac44760;
  FUN_140cabc42(param_1 + 0x24);
  *param_1 = &PTR_FUN_14ac442c0;
  plVar3 = (longlong *)param_1[0x22];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cabc42 FUN_140cabc42 body=600 status=ok
// SIG undefined FUN_140cabc42(void)

void FUN_140cabc42(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  plVar4 = param_1 + 0x1f;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x23) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar8 = plVar4;
    if (0x18 < *(ushort *)(param_1 + 0x22)) {
      plVar8 = (longlong *)*plVar4;
    }
    (*pcVar3)(plVar8);
  }
  if (0x18 < *(ushort *)(param_1 + 0x22)) {
    FUN_1400020a8(*plVar4);
  }
  plVar4 = (longlong *)param_1[0x1e];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  lVar6 = DAT_14c9a3da0;
  if ((longlong)(int)param_1[0x1c] != 0) {
    lVar11 = (longlong)(int)param_1[0x1c] + -1;
    lVar12 = lVar11 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
    if (*(longlong *)(lVar6 + lVar12) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar10 = (int)lVar11;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
    }
    *(undefined4 *)(lVar6 + lVar12) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar12) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar9 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar9 = DAT_14c9a3dc0;
    }
    iVar7 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar7 = iVar10;
    }
    bVar5 = (byte)lVar11 & 0x1f;
    DAT_14c9a3dd0 = iVar10;
    *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  cVar2 = (char)param_1[0x17];
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[0x18] = 0;
    }
    else if ((cVar2 == '\x03') && (plVar4 = (longlong *)param_1[0x19], plVar4 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  plVar4 = param_1 + 0x11;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar8 = plVar4;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar8 = (longlong *)*plVar4;
    }
    (*pcVar3)(plVar8);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar4);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 5);
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140cabe9a FUN_140cabe9a body=557 status=ok
// SIG undefined FUN_140cabe9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cabe9a(void)

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
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0x100000000;
  local_60 = &DAT_14c966db0;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (DAT_14c966dc8 == 0) {
    uVar16 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar16 = local_68 >> 0x20;
  }
  puVar7 = local_60;
  iVar15 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
    do {
      lVar14 = DAT_14c966da0;
      plVar5 = *(longlong **)(DAT_14c966da0 + 0x20 + (longlong)iVar9 * 0x30);
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
      plVar5 = *(longlong **)(lVar14 + (longlong)iVar9 * 0x30 + 0x10);
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
          if (iVar6 - lVar14 == lVar11) goto LAB_140cabffa;
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
LAB_140cabffa:
  DAT_14c966da8 = 0;
  if (DAT_14c966dac != 0) {
    FUN_14494313c(&DAT_14c966da0,0);
  }
  _DAT_14c966dd0 = 0xffffffff;
  DAT_14c966dc8 = 0;
  if (0x80 < DAT_14c966dcc) {
    DAT_14c966dcc = 0x80;
    FUN_1446efbd8(&DAT_14c966db0,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cac0c8 FUN_140cac0c8 body=42 status=ok
// SIG undefined FUN_140cac0c8(void)

void FUN_140cac0c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140cac0f2(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 140cac0f2 FUN_140cac0f2 body=355 status=ok
// SIG undefined FUN_140cac0f2(void)

void FUN_140cac0f2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_144a65a1e(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x90) == 0) {
LAB_140cac12d:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 0x90) = 0;
      goto LAB_140cac12d;
    }
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
  }
  plVar3 = (longlong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x68) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140cac15e;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140cac15e:
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000140cac251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140cac256 FUN_140cac256 body=209 status=ok
// SIG undefined FUN_140cac256(void)

undefined8 FUN_140cac256(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xda8);
  if (lVar5 == 0) {
    uVar3 = FUN_140da11f2();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xda8) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0xdb0);
  if (lVar4 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0xda0) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0xdb0) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xda0));
        *(longlong *)(param_1 + 0xdb0) = lVar4;
        if (lVar4 != 0) goto LAB_140cac27d;
      }
    }
    FUN_14020fad6(param_2,L"Missing UX Name");
    uVar3 = 0;
  }
  else {
LAB_140cac27d:
    FUN_140cac328(lVar4,*(undefined1 *)(param_1 + 0xea0),param_2);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140cac328 FUN_140cac328 body=485 status=ok
// SIG undefined FUN_140cac328(void)

void FUN_140cac328(longlong param_1,byte param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  void *_Src;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 < 6) {
    lVar1 = param_1 + (ulonglong)param_2 * 0x10;
    plVar3 = *(longlong **)(lVar1 + 0x28);
    local_38 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    local_30 = *(undefined4 *)(lVar1 + 0x30);
    cVar6 = FUN_140cac50e();
    if (cVar6 == '\0') {
      plVar8 = plVar3;
      if (*(code **)(*plVar3 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar3 + 0x50))(plVar3);
      }
      FUN_1447a1fc0(plVar8);
      pcVar5 = *(code **)(*plVar3 + 0x28);
      if (pcVar5 == FUN_14482841c) {
        plVar8 = (longlong *)(plVar3[5] + 8);
        if (plVar3[5] == 0) {
          plVar8 = plVar3 + 3;
        }
      }
      else if (pcVar5 == (code *)&LAB_14010c34c) {
        plVar8 = plVar3 + 2;
      }
      else {
        plVar8 = (longlong *)(*pcVar5)(plVar3);
      }
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x18);
      if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      plVar4 = *(longlong **)(param_1 + 0x18);
      pcVar5 = *(code **)(*plVar4 + 0x28);
      if (pcVar5 == FUN_14482841c) {
        plVar8 = plVar4 + 3;
        if (plVar4[5] != 0) {
          plVar8 = (longlong *)(plVar4[5] + 8);
        }
      }
      else if (pcVar5 == (code *)&LAB_14010c34c) {
        plVar8 = plVar4 + 2;
      }
      else {
        plVar8 = (longlong *)(*pcVar5)(plVar4);
      }
    }
    if (plVar8 != param_3) {
      iVar2 = (int)plVar8[1];
      _Src = (void *)*plVar8;
      *(int *)(param_3 + 1) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_3,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*param_3,_Src,(longlong)iVar2 * 2);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  else {
    uVar7 = FUN_1447a1f4a(param_1 + 0x18);
    FUN_144a787a6(param_3,uVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140cac572(param_3);
  return;
}



// FUNCTION 140cac50e FUN_140cac50e body=99 status=ok
// SIG undefined FUN_140cac50e(void)

bool FUN_140cac50e(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar4 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar4);
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x28))();
  lVar2 = plVar5[1];
  bVar7 = true;
  if (1 < (longlong)(int)lVar2) {
    lVar1 = *plVar5;
    lVar6 = 0;
    do {
      cVar3 = FUN_140665610(*(undefined2 *)(lVar1 + lVar6));
      bVar7 = cVar3 != '\0';
      if (!bVar7) {
        return bVar7;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)(int)lVar2 * 2 + -2 != lVar6);
  }
  return bVar7;
}



// FUNCTION 140cac572 FUN_140cac572 body=1053 status=ok
// SIG undefined FUN_140cac572(void)

ulonglong FUN_140cac572(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_bc [4];
  longlong local_b8 [2];
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  longlong *plVar6;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d0 = 0xffffffff;
  local_d8 = 0;
  iVar3 = FUN_1447ee042(param_1,L"NSLOCTEXT",9,1);
  if (iVar3 == -1) {
LAB_140cac5e1:
    local_68 = 0;
    uStack_60 = 0;
    FUN_140056680(&local_78,&DAT_149e06196);
    local_d0 = 0;
    local_d8 = 1;
    cVar2 = FUN_1407cdbc6(param_1,&local_78,&local_88,&local_68);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    bVar1 = true;
    if (cVar2 != '\0') {
      FUN_140056680(&local_78,&DAT_149e06196);
      local_d0 = 0;
      local_d8 = 1;
      cVar2 = FUN_1407cdbc6(&local_68,&local_78,&local_98,&local_a8);
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (cVar2 != '\0') {
        FUN_14033cb48(&local_88);
        FUN_14033cb48(&local_98);
        FUN_14033cb48(&local_a8);
        bVar1 = false;
      }
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar5 = 0;
    if (bVar1) goto LAB_140cac658;
    FUN_144a5dc74(&local_78);
    local_68 = local_98;
    iVar3 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      iVar3 = 0;
    }
    uStack_60._0_4_ = iVar3;
    FUN_1446e940c(local_b8,&local_68);
    local_68 = local_88;
    iVar3 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar3 = 0;
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,iVar3);
    plVar6 = (longlong *)local_bc;
    FUN_1446e940c(plVar6,&local_68);
    cVar2 = FUN_140008c02(plVar6,local_b8,&local_78,&local_a8);
    if (cVar2 == '\0') {
      iVar3 = (int)uStack_a0 + -1;
      if ((int)uStack_a0 == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(param_1,local_a8,iVar3);
    }
    else {
      uVar4 = FUN_1447a1f4a(&local_78);
      FUN_144a787a6(param_1,uVar4);
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1403de9f2(param_1,&local_68,&DAT_149e06196,1);
    if ((int)uStack_60 < 3) {
      FUN_1447a1747();
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      goto LAB_140cac5e1;
    }
    iVar3 = *(int *)(local_68 + 0x28) + -1;
    if (*(int *)(local_68 + 0x28) == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(&local_a8,*(undefined8 *)(local_68 + 0x20),iVar3);
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_140056680(local_b8,&DAT_149e01f5a);
    local_d0 = 0;
    local_d8 = 1;
    FUN_1407cdbc6(&local_a8,local_b8,&local_78,&local_a8);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    plVar6 = local_b8;
    FUN_140056680(plVar6,&DAT_149e01f5a);
    local_d0 = 0;
    local_d8 = 1;
    FUN_1407cdbc6(&local_a8,plVar6,&local_a8,&local_78);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    iVar3 = (int)uStack_a0 + -1;
    if ((int)uStack_a0 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_1,local_a8,iVar3);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
LAB_140cac658:
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140cac99e FUN_140cac99e body=31 status=ok
// SIG undefined FUN_140cac99e(void)

undefined8 FUN_140cac99e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140cac9be FUN_140cac9be body=1927 status=ok
// SIG undefined FUN_140cac9be(void)

void FUN_140cac9be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_118 [40];
  char local_f0 [8];
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  int local_c8 [2];
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
  FUN_140cad146();
  lVar14 = *(longlong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar4 + 0x20) != 0) {
    iVar8 = *(int *)(*(longlong *)(lVar4 + 0x20) + 0x18);
    if ((((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar14 + 0x78))) &&
        (lVar13 = *(longlong *)(*(longlong *)(lVar14 + 0x70) + (longlong)iVar8 * 8), lVar13 != 0))
       && (*(char *)(lVar13 + 0xcd) != '\0')) goto LAB_140caca49;
  }
  if (*(char *)(lVar4 + 0x2f8) == '\x01') {
    fVar3 = *(float *)(param_2 + 8);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_e8 = 0;
LAB_140cacf1b:
      local_e0 = (longlong *)0x0;
      bVar6 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_140cace70:
        lVar13 = 0;
      }
      else {
        uVar9 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_140cace70;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_e8 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_140cacf1b;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar6 = false;
      local_e0 = plVar12;
    }
    plVar12 = local_e0;
    local_c8[0] = 0;
    local_f0[0] = '\x03';
    local_d8._0_4_ = 0;
    if (lVar13 == 0) {
      iVar8 = 0;
      uVar9 = (uint)local_d8;
    }
    else {
      uVar9 = *(uint *)(lVar13 + 0xc);
      local_d8 = (ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar8 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar8 = *(int *)(lVar14 + 0x10);
        bVar16 = iVar8 == 0;
        if (bVar16) {
          *(int *)(lVar14 + 0x10) = iVar10;
          iVar8 = 0;
        }
        UNLOCK();
        uVar9 = (uint)local_d8;
        if (bVar16) {
          iVar8 = iVar10;
        }
      }
    }
    local_d8._0_4_ = uVar9;
    local_d8 = CONCAT44(iVar8,(uint)local_d8);
    local_d0 = 2;
    if (local_c8[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_c8[0] + -1,1);
      local_c8[0] = 0;
    }
    if (!bVar6) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    pfVar15 = &local_c0;
    FUN_1447c3578(lVar4 + 0x2c0,pfVar15,local_f0);
    if (local_a0 == 3) {
      fVar17 = local_c0;
      bVar7 = 3;
    }
    else {
      pfVar11 = &local_98;
      FUN_1400b56fe(pfVar11,&local_c0,3);
      fVar17 = 0.0;
      if (local_78 != 0) {
        fVar17 = local_98;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_80) {
          pfVar11 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar5)(pfVar11);
      }
      bVar7 = local_a0;
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
        bVar7 = local_a0;
      }
    }
    *(float *)(param_1 + 0xe4) = fVar3 + fVar17;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_a8) {
        pfVar15 = (float *)CONCAT44(uStack_bc,local_c0);
      }
      (*pcVar5)(pfVar15);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
    }
    FUN_1448173f8(local_c8);
    if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
  }
  if (*(char *)(lVar4 + 0x338) != '\x01') goto LAB_140caca49;
  fVar3 = *(float *)(param_2 + 8);
  lVar14 = *(longlong *)(param_1 + 0x40);
  if (lVar14 == 0) {
    lVar13 = 0;
    lVar14 = 0;
LAB_140cacf72:
    local_e0 = (longlong *)0x0;
    bVar6 = true;
    local_e8 = lVar14;
  }
  else {
    if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_140cacf10:
      lVar13 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar14 + 0x48);
      lVar13 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_140cacf10;
        lVar13 = *plVar12;
      }
    }
    plVar12 = *(longlong **)(lVar14 + 0x118);
    lVar14 = param_1;
    if (plVar12 == (longlong *)0x0) goto LAB_140cacf72;
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
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
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
    local_e8 = param_1;
    local_e0 = plVar12;
  }
  plVar12 = local_e0;
  local_c8[0] = 0;
  local_f0[0] = '\x03';
  local_d8._0_4_ = 0;
  if (lVar13 == 0) {
    iVar8 = 0;
    uVar9 = (uint)local_d8;
  }
  else {
    uVar9 = *(uint *)(lVar13 + 0xc);
    local_d8 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar8 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar14 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar14 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)local_d8;
      if (bVar16) {
        iVar8 = iVar10;
      }
    }
  }
  local_d8._0_4_ = uVar9;
  local_d8 = CONCAT44(iVar8,(uint)local_d8);
  local_d0 = 2;
  if (local_c8[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_c8[0] + -1,1);
    local_c8[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  pfVar15 = &local_c0;
  FUN_1447c3578(lVar4 + 0x300,pfVar15,local_f0);
  if (local_a0 == 3) {
    uVar9 = 3;
    fVar17 = local_c0;
  }
  else {
    pfVar11 = &local_98;
    FUN_1400b56fe(pfVar11,&local_c0,3);
    fVar17 = 0.0;
    if (local_78 != 0) {
      fVar17 = local_98;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar11 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar5)(pfVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar9 = (uint)local_a0;
  }
  *(float *)(param_1 + 0xe8) = fVar3 + fVar17;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar15 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar5)(pfVar15);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_e0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
LAB_140caca49:
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140cad146 FUN_140cad146 body=59 status=ok
// SIG undefined FUN_140cad146(void)

void FUN_140cad146(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x50) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar8) != 0)) {
        iVar1 = *(int *)(param_1 + 100);
        *(int *)(param_1 + 100) = iVar1 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0x58);
        if ((longlong)uVar6 < 1) {
          *(int *)(param_1 + 100) = iVar1;
          return;
        }
        bVar7 = false;
        do {
          lVar8 = uVar6 * 0x10 + -8;
          uVar9 = uVar6;
          while (((lVar2 = *(longlong *)(param_1 + 0x50), *(int *)(lVar2 + lVar8) != 0 &&
                  (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,param_2), cVar5 != '\0'))) {
            lVar8 = lVar8 + -0x10;
            bVar4 = uVar9 < 2;
            uVar9 = uVar9 - 1;
            if (bVar4) {
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
              if (!bVar7) {
                return;
              }
              goto LAB_143887865;
            }
          }
          uVar6 = uVar9 - 1;
          bVar7 = true;
        } while (1 < uVar9);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
LAB_143887865:
        FUN_14474d06a((longlong *)(param_1 + 0x50),0);
        return;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x58) * 0x10 != lVar8);
  }
  return;
}



// FUNCTION 140cad182 FUN_140cad182 body=42 status=ok
// SIG undefined FUN_140cad182(void)

void FUN_140cad182(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140cad1c2(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140cad197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_140cad31a();
  FUN_140dd7130(uVar2);
  return;
}



// FUNCTION 140cad1ac FUN_140cad1ac body=21 status=ok
// SIG undefined FUN_140cad1ac(void)

void FUN_140cad1ac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140cad31a();
  FUN_140dd7130(uVar1);
  return;
}



// FUNCTION 140cad1c2 FUN_140cad1c2 body=191 status=ok
// SIG undefined FUN_140cad1c2(void)

longlong FUN_140cad1c2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140cad282();
  lVar3 = *param_1;
  if (DAT_14cb70278 != DAT_14cb702a4) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb702a8;
    if (DAT_14cb702b0 != (undefined *)0x0) {
      puVar7 = DAT_14cb702b0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb702b8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb70270 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb70268;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140cad282 FUN_140cad282 body=152 status=ok
// SIG undefined FUN_140cad282(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140cad282(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb702c0) {
    FUN_144b3d300(&DAT_14cb702c0);
    if (DAT_14cb702c0 == -1) {
      DAT_14cb70290 = 0;
      DAT_14cb70298 = 0;
      DAT_14cb70270 = 0;
      _DAT_14cb70278 = 0;
      _DAT_14cb7029c = 0xffffffff00000080;
      DAT_14cb702a4 = 0;
      DAT_14cb702b0 = 0;
      DAT_14cb702b8 = 0;
      atexit(FUN_143c8dd91);
      _Init_thread_footer(&DAT_14cb702c0);
      return;
    }
  }
  return;
}


