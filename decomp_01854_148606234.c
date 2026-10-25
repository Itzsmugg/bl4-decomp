// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148606234 FUN_148606234 body=1811 status=ok
// SIG undefined FUN_148606234(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148606234(longlong *param_1,uint param_2,longlong param_3,float param_4,undefined8 param_5,
                  char param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_80;
  float local_78 [2];
  longlong *local_70;
  longlong *plStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (1 < param_2) goto LAB_148606263;
  uVar16 = (ulonglong)param_2;
  if (param_6 != '\0') {
    FUN_14093d487(param_1[uVar16 * 2 + 10],(int)param_1[uVar16 * 2 + 0xb]);
    *(undefined4 *)(param_1 + uVar16 * 2 + 0xb) = 0;
    if (*(int *)((longlong)param_1 + uVar16 * 0x10 + 0x5c) != 0) {
      FUN_14093d50a(param_1 + uVar16 * 2 + 10);
    }
  }
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  }
  lVar4 = uVar16 * 2 + 6;
  if (0 < (int)param_1[uVar16 * 2 + 0xb]) {
    lVar4 = uVar16 * 2 + 10;
  }
  plVar17 = param_1 + lVar4;
  local_78[0] = -1.0;
  local_70 = (longlong *)0x0;
  plStack_68 = (longlong *)0x0;
  uVar3 = *(uint *)(plVar17 + 1);
  if ((int)uVar3 < 1) {
    plVar11 = (longlong *)0x0;
    lVar4 = 0;
LAB_14860635a:
    lVar8 = 0;
LAB_14860635c:
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)*plVar17;
    lVar4 = *plVar9;
    plVar11 = (longlong *)plVar9[1];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      uVar3 = *(uint *)(plVar17 + 1);
      if ((int)uVar3 < 1) goto LAB_14860635a;
      plVar9 = (longlong *)*plVar17;
    }
    lVar8 = plVar9[(ulonglong)uVar3 * 2 + -2];
    plVar9 = (longlong *)plVar9[(ulonglong)uVar3 * 2 + -1];
    if (plVar9 == (longlong *)0x0) goto LAB_14860635c;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (lVar4 == 0 && lVar8 == 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14afe2c80;
    plVar7[2] = 0;
    *(undefined1 *)(plVar7 + 3) = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
    }
    *(undefined1 *)(plVar7 + 3) = 0;
    uVar6 = FUN_14571e1e4();
    FUN_1401cfad2(uVar6,local_a8,0);
    FUN_140ba7826(&local_98,&DAT_149e060ac,local_a8);
    plVar10 = local_98;
    if ((int)uStack_90 == 0) {
      plVar10 = (longlong *)&DAT_149dfb77a;
    }
    FUN_1446f470e(&local_80,plVar10,1);
    plVar7[2] = local_80;
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    plVar10 = plStack_68;
    local_70 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      if (plStack_68 != (longlong *)0x0) {
        plStack_68 = (longlong *)0x0;
LAB_1486068e2:
        LOCK();
        plVar15 = plVar10 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_14860690e;
      }
      iVar13 = 0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      if (plVar7 == plStack_68) {
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
      }
      else {
        bVar18 = plStack_68 != (longlong *)0x0;
        plStack_68 = plVar7;
        if (bVar18) goto LAB_1486068e2;
      }
LAB_14860690e:
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      iVar13 = 0;
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        iVar13 = 0;
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)&DAT_00000001;
    iVar13 = 0;
    local_b8 = plVar11;
    FUN_14093c786(&local_98,0);
    *local_98 = lVar8;
    local_98[1] = (longlong)plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    lVar4 = plVar17[1];
    local_b0 = plVar9;
    if ((longlong)(int)lVar4 != 0) {
      lVar8 = *plVar17;
      lVar12 = 0;
      iVar13 = 0;
      do {
        plVar11 = uStack_90;
        if ((*(float **)(lVar8 + lVar12) != (float *)0x0) &&
           (**(float **)(lVar8 + lVar12) <= param_4)) {
          lVar14 = (longlong)(int)uStack_90;
          uVar3 = (int)uStack_90 + 1;
          uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,uVar3);
          if (uStack_90._4_4_ < uVar3) {
            FUN_14093c786(&local_98,(ulonglong)plVar11 & 0xffffffff);
          }
          local_98[lVar14 * 2] = *(longlong *)(lVar8 + lVar12);
          lVar2 = *(longlong *)(lVar8 + 8 + lVar12);
          local_98[lVar14 * 2 + 1] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          iVar13 = iVar13 + 1;
        }
        lVar12 = lVar12 + 0x10;
      } while ((longlong)(int)lVar4 * 0x10 != lVar12);
    }
    lVar8 = (longlong)(int)uStack_90;
    lVar4 = local_98[lVar8 * 2 + -2];
    plVar7 = (longlong *)local_98[lVar8 * 2 + -1];
    local_98[lVar8 * 2 + -2] = 0;
    (local_98 + lVar8 * 2 + -2)[1] = 0;
    FUN_140fa20d4(&local_98,(int)uStack_90 + -1);
    FUN_140fa214e(&local_98);
    plVar10 = *(longlong **)(lVar4 + 8);
    plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar15 = plStack_68;
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14afe2c80;
    plVar9 = plVar5 + 2;
    plVar5[2] = 0;
    *(undefined1 *)(plVar5 + 3) = 0;
    if (plVar5 == (longlong *)0x0) {
      DAT_00000018 = (undefined1)plVar10[1];
      _DAT_00000010 = *plVar10;
      plVar11 = local_b8;
      local_70 = plVar9;
      if (plStack_68 != (longlong *)0x0) {
        plStack_68 = (longlong *)0x0;
LAB_1486064dc:
        plVar11 = local_b8;
        LOCK();
        plVar10 = plVar15 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        local_70 = plVar9;
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
        if (plVar5 != (longlong *)0x0) goto LAB_148606710;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar5 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      plVar11 = local_b8;
      *(char *)(plVar5 + 3) = (char)plVar10[1];
      plVar5[2] = *plVar10;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      if (plVar5 == plStack_68) {
        LOCK();
        plVar10 = plVar5 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        local_70 = plVar9;
        if ((int)*plVar10 == 0) {
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
        bVar18 = plStack_68 != (longlong *)0x0;
        plVar15 = plStack_68;
        local_70 = plVar9;
        plStack_68 = plVar5;
        if (bVar18) goto LAB_1486064dc;
      }
LAB_148606710:
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    FUN_14093d487(local_98,(ulonglong)uStack_90 & 0xffffffff);
    plVar9 = local_b0;
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_78[0] = param_4;
  plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14afe2c60;
  local_98 = plVar7 + 2;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  *(undefined4 *)(plVar7 + 2) = 0xbf800000;
  plVar7[3] = 0;
  plVar7[4] = 0;
  *(undefined1 *)(plVar7 + 5) = 0;
  uStack_90 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  }
  FUN_1461b3c40(local_98,local_78);
  FUN_1461b3c9c(plVar17,&local_98,iVar13);
  plVar17 = uStack_90;
  if (param_4 <= *(float *)((longlong)param_1 + 0x14)) {
    *(float *)((longlong)param_1 + 0x14) = param_4 + -0.0001;
  }
  if (uStack_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_90 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*uStack_90)(uStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar9 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar11 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  plVar17 = plStack_68;
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_68 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
LAB_148606263:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148606948 FUN_148606948 body=99 status=ok
// SIG undefined FUN_148606948(void)

void FUN_148606948(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14afddb30;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x43340000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return;
}



// FUNCTION 1486069ac FUN_1486069ac body=191 status=ok
// SIG undefined FUN_1486069ac(void)

undefined8 * FUN_1486069ac(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 100);
  if ((lVar1 != 0) && ((longlong)*(int *)(param_1 + 0x88) != 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x80);
    lVar5 = (longlong)*(int *)(param_1 + 0x88) * 0x90;
    do {
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(puVar4 + 1) != 0) {
        puVar3 = (undefined2 *)*puVar4;
      }
      cVar2 = FUN_1402ca022(lVar1,puVar3);
      if (cVar2 != '\0') {
        if (puVar4 != (undefined8 *)0x0) {
          *param_2 = *(undefined8 *)(param_1 + 100);
          return param_2;
        }
        break;
      }
      puVar4 = puVar4 + 0x12;
      lVar5 = lVar5 + -0x90;
    } while (lVar5 != 0);
  }
  if (*(int *)(param_1 + 0x88) < 1) {
    *param_2 = 0;
  }
  else {
    if (*(int *)(*(undefined8 **)(param_1 + 0x80) + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)**(undefined8 **)(param_1 + 0x80);
    }
    FUN_1446f470e(param_2,puVar3,1);
  }
  return param_2;
}



// FUNCTION 148606a6c FUN_148606a6c body=184 status=ok
// SIG undefined FUN_148606a6c(void)

void FUN_148606a6c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    lVar3 = (longlong)*(int *)(param_1 + 0x1d8) * 0x18;
    do {
      FUN_14860ba9e(&local_38,lVar2);
      lVar1 = local_38;
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
    lVar2 = (longlong)(int)uStack_30;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        FUN_140d39ec2(param_1,*(undefined8 *)(lVar1 + lVar3),1);
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
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



// FUNCTION 148606b28 FUN_148606b28 body=34 status=ok
// SIG undefined FUN_148606b28(void)

undefined1 FUN_148606b28(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x1dc);
  }
  return uVar2;
}



// FUNCTION 148606b52 FUN_148606b52 body=268 status=ok
// SIG undefined FUN_148606b52(void)

void FUN_148606b52(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    FUN_140d3b414();
    if (*(char *)(param_1 + 0x298) == '\x01') {
      (**(code **)(*param_2 + 0x10))(param_2,&local_40);
      local_38 = local_40;
      uStack_30 = param_2[1];
      local_28 = (undefined4)param_2[2];
      uVar3 = (uint)((ulonglong)local_40 >> 0x10);
      uVar5 = (uint)local_40 & 0xffff;
      puVar4 = (undefined4 *)
               FUN_14860be14(param_1 + 0x498,
                             ((uint)local_40 << 0x10 | uVar5) + (int)((ulonglong)local_40 >> 0x20) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4),&local_38);
      *puVar4 = (undefined4)local_38;
      puVar4[1] = local_38._4_4_;
      puVar4[2] = (undefined4)uStack_30;
      puVar4[3] = uStack_30._4_4_;
      puVar4[4] = local_28;
      iVar1 = *(int *)(param_1 + 0x500);
      *(uint *)(param_1 + 0x500) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x504) < iVar1 + 1U) {
        FUN_14860c1d0((longlong *)(param_1 + 0x4f8),iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x4f8);
      *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar1 * 0x14) = local_28;
      puVar4 = (undefined4 *)(lVar2 + (longlong)iVar1 * 0x14);
      *puVar4 = (undefined4)local_38;
      puVar4[1] = local_38._4_4_;
      puVar4[2] = (undefined4)uStack_30;
      puVar4[3] = uStack_30._4_4_;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148606c60 FUN_148606c60 body=1511 status=ok
// SIG undefined FUN_148606c60(void)

void FUN_148606c60(longlong **param_1,longlong **param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong **pplVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong **pplVar20;
  undefined1 auStack_d8 [32];
  longlong **local_b8;
  longlong **local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 ***local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != (longlong **)0x0) {
    (*(code *)(*param_2)[3])(param_2,&local_80);
    pplVar20 = param_1 + 0x89;
    iVar15 = *(int *)(param_1 + 0x8a);
    iVar17 = *(int *)((longlong)param_1 + 0x47c);
    if (iVar15 != iVar17) {
      uVar9 = (uint)((ulonglong)local_80 >> 0x10);
      uVar18 = (uint)local_80 & 0xffff;
      pplVar16 = param_1 + 0x90;
      if ((longlong **)param_1[0x91] != (longlong **)0x0) {
        pplVar16 = (longlong **)param_1[0x91];
      }
      iVar19 = *(int *)((longlong)pplVar16 +
                       (ulonglong)
                       (*(int *)(param_1 + 0x92) - 1U &
                       (int)((ulonglong)local_80 >> 0x20) + ((uint)local_80 << 0x10 | uVar18) +
                       (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar18 >> 4)) * 4);
      if (iVar19 != -1) {
        do {
          if ((undefined8 ****)(*pplVar20)[(longlong)iVar19 * 4] == (undefined8 ****)local_80)
          goto LAB_148606f9e;
          iVar19 = (int)(*pplVar20)[(longlong)iVar19 * 4 + 3];
        } while (iVar19 != -1);
      }
    }
    plVar12 = (longlong *)FUN_14001cc68(0x70,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14afe3140;
    local_90 = plVar12 + 2;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    plVar12[5] = 0;
    plVar12[6] = 0;
    plVar12[7] = 0;
    plVar12[8] = 0;
    plVar12[9] = 0;
    plVar12[10] = 0;
    plVar12[0xb] = 0;
    plVar12[0xc] = 0;
    plVar12[0xd] = 0;
    local_88 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar12 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar4 = (int *)((longlong)plVar12 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    local_90[3] = (longlong)param_2[1];
    lVar13 = (*(code *)(*param_2)[4])(param_2);
    if (lVar13 == 0) {
      local_78 = (undefined8 ****)0x0;
    }
    else {
      FUN_140d3bf04(lVar13,&local_78,param_2[1]);
    }
    uStack_70 = &local_90;
    local_90[4] = (longlong)local_78;
    *local_90 = (longlong)local_80;
    local_78 = &local_80;
    FUN_14579dcce(pplVar20,&local_98);
    iVar15 = *(int *)(param_1 + 0x42);
    if ((longlong)iVar15 != 0) {
      plVar12 = param_1[0x41];
      lVar13 = 0;
      do {
        local_98 = *(undefined8 *)((longlong)plVar12 + lVar13);
        cVar11 = FUN_144729dda(&local_98);
        if (cVar11 != '\0') {
          lVar14 = FUN_14479d2ce(&local_98);
          (**(code **)(*(longlong *)(lVar14 + 0x3c8) + 0x18))(lVar14 + 0x3c8,&local_78);
          plVar3 = local_90;
          if (local_78 == (undefined8 ****)local_80) {
            plVar1 = local_90 + 1;
            local_b8 = pplVar20;
            local_b0 = param_2;
            local_a8 = param_3;
            local_a0 = FUN_14479d2ce(&local_98);
            FUN_148607248(&local_78,&local_a0);
            iVar17 = (int)plVar3[2];
            *(uint *)(plVar3 + 2) = iVar17 + 1U;
            if (*(uint *)((longlong)plVar3 + 0x14) < iVar17 + 1U) {
              FUN_14579dc48(plVar1,iVar17);
            }
            puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar17 * 0x10);
            *puVar2 = (undefined4)local_78;
            puVar2[1] = local_78._4_4_;
            puVar2[2] = (undefined4)uStack_70;
            puVar2[3] = uStack_70._4_4_;
            param_2 = local_b0;
            param_3 = local_a8;
            pplVar20 = local_b8;
          }
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar15 * 8 != lVar13);
    }
    pplVar16 = param_1 + 0x47;
    cVar11 = FUN_144729dda(pplVar16);
    if (cVar11 != '\0') {
      lVar13 = FUN_14479d2ce(pplVar16);
      (**(code **)(*(longlong *)(lVar13 + 0x3a0) + 0x18))(lVar13 + 0x3a0,&local_78);
      plVar12 = local_90;
      if (local_78 == (undefined8 ****)local_80) {
        plVar3 = local_90 + 1;
        local_98 = FUN_14479d2ce(pplVar16);
        FUN_148607292(&local_78);
        iVar15 = (int)plVar12[2];
        *(uint *)(plVar12 + 2) = iVar15 + 1U;
        if (*(uint *)((longlong)plVar12 + 0x14) < iVar15 + 1U) {
          FUN_14579dc48(plVar3,iVar15);
        }
        puVar2 = (undefined4 *)(*plVar3 + (longlong)iVar15 * 0x10);
        *puVar2 = (undefined4)local_78;
        puVar2[1] = local_78._4_4_;
        puVar2[2] = (undefined4)uStack_70;
        puVar2[3] = uStack_70._4_4_;
      }
    }
    plVar12 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar4 = (int *)((longlong)plVar12 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    iVar15 = *(int *)(param_1 + 0x8a);
    iVar17 = *(int *)((longlong)param_1 + 0x47c);
LAB_148606f9e:
    if (iVar15 != iVar17) {
      uVar9 = (uint)((ulonglong)local_80 >> 0x10);
      uVar18 = (uint)local_80 & 0xffff;
      pplVar16 = param_1 + 0x90;
      if ((longlong **)param_1[0x91] != (longlong **)0x0) {
        pplVar16 = (longlong **)param_1[0x91];
      }
      iVar15 = *(int *)((longlong)pplVar16 +
                       (ulonglong)
                       (*(int *)(param_1 + 0x92) - 1U &
                       (int)((ulonglong)local_80 >> 0x20) + ((uint)local_80 << 0x10 | uVar18) +
                       (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar18 >> 4)) * 4);
      if (iVar15 != -1) {
        do {
          plVar12 = *pplVar20 + (longlong)iVar15 * 4;
          if ((undefined8 ****)(*pplVar20)[(longlong)iVar15 * 4] == (undefined8 ****)local_80)
          goto LAB_148606fa8;
          iVar15 = (int)plVar12[3];
        } while (iVar15 != -1);
      }
    }
    plVar12 = (longlong *)0x0;
LAB_148606fa8:
    puVar6 = (undefined8 *)plVar12[1];
    pplVar20 = (longlong **)plVar12[2];
    if (pplVar20 != (longlong **)0x0) {
      LOCK();
      *(int *)(pplVar20 + 1) = *(int *)(pplVar20 + 1) + 1;
      UNLOCK();
    }
    if (puVar6 != (undefined8 *)0x0) {
      if (puVar6 + 5 != param_3) {
        *(undefined4 *)(puVar6 + 9) = *(undefined4 *)(param_3 + 4);
        uVar7 = *param_3;
        uVar8 = param_3[1];
        uVar10 = param_3[3];
        puVar6[7] = param_3[2];
        puVar6[8] = uVar10;
        puVar6[5] = uVar7;
        puVar6[6] = uVar8;
        *(undefined1 *)((longlong)puVar6 + 0x4c) = 1;
      }
      *(undefined4 *)(puVar6 + 10) = *(undefined4 *)((longlong)param_3 + 0xc);
      if (*(char *)((longlong)param_3 + 0x14) == '\x01') {
        if (param_3 + 3 != (undefined8 *)((longlong)puVar6 + 0x54)) {
          *(undefined4 *)((longlong)puVar6 + 0x54) = *(undefined4 *)(param_3 + 3);
          *(undefined1 *)(puVar6 + 0xb) = 1;
        }
      }
      else if (*(char *)(puVar6 + 0xb) == '\x01') {
        *(undefined1 *)(puVar6 + 0xb) = 0;
      }
      iVar15 = *(int *)(puVar6 + 2);
      local_b8 = pplVar20;
      local_b0 = param_1;
      if ((longlong)iVar15 != 0) {
        lVar13 = puVar6[1];
        lVar14 = 0;
        do {
          local_78 = *(undefined8 *****)(lVar13 + lVar14);
          pplVar20 = (longlong **)((longlong *)(lVar13 + lVar14))[1];
          uStack_70 = pplVar20;
          if (pplVar20 != (longlong **)0x0) {
            cVar11 = FUN_144729dda(&local_78);
            if (cVar11 == '\0') {
              pplVar20 = (longlong **)0x0;
            }
            if (pplVar20 != param_2 && pplVar20 != (longlong **)0x0) {
              (*(code *)(*pplVar20)[8])(pplVar20,param_3);
            }
          }
          lVar14 = lVar14 + 0x10;
        } while ((longlong)iVar15 * 0x10 != lVar14);
      }
      uVar7 = *puVar6;
      uVar8 = *param_3;
      uVar5 = *(undefined4 *)(param_3 + 2);
      pplVar20 = local_b0 + 0x9d;
      iVar15 = *(int *)(local_b0 + 0x9e);
      lVar13 = (longlong)iVar15;
      *(uint *)(local_b0 + 0x9e) = iVar15 + 1U;
      if (*(uint *)((longlong)local_b0 + 0x4f4) < iVar15 + 1U) {
        FUN_1457d97f6(pplVar20,iVar15);
      }
      plVar12 = *pplVar20;
      *(undefined8 *)((longlong)plVar12 + lVar13 * 0x14) = uVar7;
      *(undefined8 *)((longlong)plVar12 + lVar13 * 0x14 + 8) = uVar8;
      *(undefined4 *)((longlong)plVar12 + lVar13 * 0x14 + 0x10) = uVar5;
      pplVar20 = local_b8;
    }
    if (pplVar20 != (longlong **)0x0) {
      LOCK();
      pplVar16 = pplVar20 + 1;
      *(int *)pplVar16 = *(int *)pplVar16 + -1;
      UNLOCK();
      if (*(int *)pplVar16 == 0) {
        (*(code *)**pplVar20)(pplVar20);
        LOCK();
        piVar4 = (int *)((longlong)pplVar20 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (*(code *)(*pplVar20)[2])(pplVar20);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148607248 FUN_148607248 body=74 status=ok
// SIG undefined FUN_148607248(void)

undefined8 * FUN_148607248(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_1459ef500();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 148607292 FUN_148607292 body=74 status=ok
// SIG undefined FUN_148607292(void)

undefined8 * FUN_148607292(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_1459ef500();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 1486072dc FUN_1486072dc body=487 status=ok
// SIG undefined FUN_1486072dc(void)

void FUN_1486072dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(param_1 + 0x298) == '\0') && ((longlong)(int)param_2[1] != 0)) {
    plVar11 = (longlong *)*param_2;
    plVar1 = (longlong *)((longlong)plVar11 + (longlong)(int)param_2[1] * 0x14);
    local_60 = param_1 + 0x498;
    local_68 = param_1 + 0x238;
    do {
      if (plVar11[1] != 0) {
        lVar9 = *plVar11;
        uVar3 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar12 = (uint)lVar9 & 0xffff;
        puVar7 = (undefined4 *)
                 FUN_14860be14(local_60,((uint)lVar9 << 0x10 | uVar12) +
                                        (int)((ulonglong)lVar9 >> 0x20) +
                                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4),plVar11);
        lVar9 = local_68;
        if (*(longlong *)(puVar7 + 2) == plVar11[1]) {
          if (((float)puVar7[4] != *(float *)(plVar11 + 2)) ||
             (NAN((float)puVar7[4]) || NAN(*(float *)(plVar11 + 2)))) goto LAB_1486073cb;
        }
        else {
LAB_1486073cb:
          cVar6 = FUN_144729dda(local_68);
          if (cVar6 != '\0') {
            lVar8 = FUN_14479d2ce(lVar9);
            (**(code **)(*(longlong *)(lVar8 + 0x3a0) + 0x10))(lVar8 + 0x3a0,&local_50);
            if (local_50 == *plVar11) {
              lVar9 = FUN_14479d2ce(lVar9);
              (**(code **)(*(longlong *)(lVar9 + 0x3a0) + 0x38))
                        (lVar9 + 0x3a0,plVar11[1],(int)plVar11[2]);
            }
          }
          iVar2 = *(int *)(param_1 + 0x210);
          if ((longlong)iVar2 != 0) {
            lVar9 = *(longlong *)(param_1 + 0x208);
            lVar8 = 0;
            do {
              local_50 = *(longlong *)(lVar9 + lVar8);
              cVar6 = FUN_144729dda(&local_50);
              if (cVar6 != '\0') {
                lVar10 = FUN_14479d2ce(&local_50);
                (**(code **)(*(longlong *)(lVar10 + 0x3c8) + 0x10))(lVar10 + 0x3c8,&local_58);
                if (local_58 == *plVar11) {
                  lVar10 = FUN_14479d2ce(&local_50);
                  (**(code **)(*(longlong *)(lVar10 + 0x3c8) + 0x38))
                            (lVar10 + 0x3c8,plVar11[1],(int)plVar11[2]);
                }
              }
              lVar8 = lVar8 + 8;
            } while ((longlong)iVar2 * 8 != lVar8);
          }
        }
        puVar7[4] = (int)plVar11[2];
        uVar4 = *(undefined4 *)((longlong)plVar11 + 4);
        lVar9 = plVar11[1];
        uVar5 = *(undefined4 *)((longlong)plVar11 + 0xc);
        *puVar7 = (int)*plVar11;
        puVar7[1] = uVar4;
        puVar7[2] = (int)lVar9;
        puVar7[3] = uVar5;
      }
      plVar11 = (longlong *)((longlong)plVar11 + 0x14);
    } while (plVar11 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1486074c4 FUN_1486074c4 body=225 status=ok
// SIG undefined FUN_1486074c4(void)

void FUN_1486074c4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  if ((char)param_1[0x2f] != '\x03') {
    return;
  }
  uVar5 = (ulonglong)(int)param_1[0xa1];
  if (0 < (longlong)uVar5) {
    iVar6 = -(int)param_1[0xa1];
    lVar4 = uVar5 * 0x14;
    do {
      lVar4 = lVar4 + -0x14;
      lVar1 = param_1[0xa0];
      if (*(longlong *)(lVar1 + lVar4) == param_2) {
        uVar3 = *(uint *)(param_1 + 0xa1);
        if (uVar5 != uVar3) {
          memmove((void *)(lVar1 + lVar4),(void *)(lVar1 + lVar4 + 0x14),
                  (longlong)(int)(uVar3 + iVar6) * 0x14);
          uVar3 = *(uint *)(param_1 + 0xa1);
        }
        *(uint *)(param_1 + 0xa1) = uVar3 - 1;
        FUN_14860c83e(param_1 + 0xa0);
      }
      iVar6 = iVar6 + 1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  (**(code **)(*param_1 + 0x578))(param_1);
  FUN_144a62f0c(param_1,param_1[5],0xe);
  return;
}



// FUNCTION 1486075a6 FUN_1486075a6 body=291 status=ok
// SIG undefined FUN_1486075a6(void)

void FUN_1486075a6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if (((char)param_1[0x2f] == '\x03') && ((longlong)(int)param_2[1] != 0)) {
    plVar11 = (longlong *)*param_2;
    plVar1 = (longlong *)((longlong)plVar11 + (longlong)(int)param_2[1] * 0x14);
    bVar6 = false;
    do {
      plVar7 = (longlong *)param_1[0xa2];
      iVar3 = (int)param_1[0xa3];
      lVar9 = (longlong)iVar3;
      if (lVar9 != 0) {
        lVar10 = lVar9 * 0x14;
        plVar8 = plVar7;
        do {
          if (*plVar8 == *plVar11) {
            if (plVar8 != (longlong *)0x0) {
              if (plVar8[1] == plVar11[1]) {
                if ((*(float *)(plVar8 + 2) == *(float *)(plVar11 + 2)) &&
                   (!NAN(*(float *)(plVar8 + 2)) && !NAN(*(float *)(plVar11 + 2))))
                goto LAB_14860763d;
              }
              plVar8[1] = plVar11[1];
              *(int *)(plVar8 + 2) = (int)plVar11[2];
              goto LAB_14860763b;
            }
            break;
          }
          plVar8 = (longlong *)((longlong)plVar8 + 0x14);
          lVar10 = lVar10 + -0x14;
        } while (lVar10 != 0);
      }
      *(uint *)(param_1 + 0xa3) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x51c) < iVar3 + 1U) {
        FUN_14860c1d0(param_1 + 0xa2,iVar3);
        plVar7 = (longlong *)param_1[0xa2];
      }
      *(int *)((longlong)plVar7 + lVar9 * 0x14 + 0x10) = (int)plVar11[2];
      uVar4 = *(undefined4 *)((longlong)plVar11 + 4);
      lVar10 = plVar11[1];
      uVar5 = *(undefined4 *)((longlong)plVar11 + 0xc);
      puVar2 = (undefined4 *)((longlong)plVar7 + lVar9 * 0x14);
      *puVar2 = (int)*plVar11;
      puVar2[1] = uVar4;
      puVar2[2] = (int)lVar10;
      puVar2[3] = uVar5;
LAB_14860763b:
      bVar6 = true;
LAB_14860763d:
      plVar11 = (longlong *)((longlong)plVar11 + 0x14);
    } while (plVar11 != plVar1);
    if (bVar6) {
      (**(code **)(*param_1 + 0x578))(param_1);
      FUN_144a62f0c(param_1,param_1[5],0xf);
      FUN_140fa3984(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1486076ca FUN_1486076ca body=119 status=ok
// SIG undefined FUN_1486076ca(void)

void FUN_1486076ca(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x238);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x238);
    if (lVar2 == param_2) {
      lVar2 = param_2 + 0x3a0;
      if (param_2 == 0) {
        lVar2 = 0;
      }
      FUN_140d3c3be(param_1,lVar2);
      FUN_140d3c0aa(param_1);
      *(undefined8 *)(param_1 + 0x238) = 0;
      FUN_14571d98e(param_1 + 0x330,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148607742 FUN_148607742 body=66 status=ok
// SIG undefined FUN_148607742(void)

undefined8 * FUN_148607742(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  FUN_14485c47a(param_1,uVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 1486077fe FUN_1486077fe body=161 status=ok
// SIG undefined FUN_1486077fe(void)

void FUN_1486077fe(longlong param_1,undefined8 param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(param_1 + 0x10);
  local_48 = *(undefined4 *)(param_1 + 0x18);
  uStack_44 = *(undefined4 *)(param_1 + 0x1c);
  uStack_40 = *(undefined4 *)(param_1 + 0x20);
  uStack_3c = *(undefined4 *)(param_1 + 0x24);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x30);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x28);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_1486078a0(param_2,&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486078a0 FUN_1486078a0 body=66 status=ok
// SIG undefined FUN_1486078a0(void)

void FUN_1486078a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_2;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 2);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    FUN_144a787a6(param_1 + 3,param_2 + 3);
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148607904 FUN_148607904 body=257 status=ok
// SIG undefined FUN_148607904(void)

void FUN_148607904(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x3f0) != 0) && (*(int *)(param_1 + 0x3f8) - 1U < 0xfffffffe)) {
    lVar3 = FUN_140d3be2e(param_1 + 0x3f0);
    if (lVar3 != 0) {
      lVar3 = FUN_140d3be2e(param_1 + 0x3f0);
      iVar1 = *(int *)(lVar3 + 0x88);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x80);
        lVar5 = 0;
        do {
          puVar4 = &DAT_149dfb77a;
          if (*(int *)(lVar3 + 8 + lVar5) != 0) {
            puVar4 = *(undefined2 **)(lVar3 + lVar5);
          }
          FUN_1446f470e(&local_48,puVar4,1);
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1446f84a2(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = local_48;
          lVar5 = lVar5 + 0x90;
        } while ((longlong)iVar1 * 0x90 != lVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148607a12 FUN_148607a12 body=257 status=ok
// SIG undefined FUN_148607a12(void)

void FUN_148607a12(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x410) != 0) && (*(int *)(param_1 + 0x418) - 1U < 0xfffffffe)) {
    lVar3 = FUN_140d3be2e(param_1 + 0x410);
    if (lVar3 != 0) {
      lVar3 = FUN_140d3be2e(param_1 + 0x410);
      iVar1 = *(int *)(lVar3 + 0x88);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x80);
        lVar5 = 0;
        do {
          puVar4 = &DAT_149dfb77a;
          if (*(int *)(lVar3 + 8 + lVar5) != 0) {
            puVar4 = *(undefined2 **)(lVar3 + lVar5);
          }
          FUN_1446f470e(&local_48,puVar4,1);
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1446f84a2(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = local_48;
          lVar5 = lVar5 + 0x90;
        } while ((longlong)iVar1 * 0x90 != lVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148607b14 FUN_148607b14 body=245 status=ok
// SIG undefined FUN_148607b14(void)

void FUN_148607b14(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x452) != param_2) &&
     (*(char *)(param_1 + 0x452) = param_2, param_2 != '\0')) {
    uVar5 = FUN_1447210f0(param_1);
    FUN_1404d1e78(&local_30,uVar5);
    if ((local_30 != 0) && ((local_28 != (longlong *)0x0 && (0 < (int)local_28[1])))) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_28;
      } while (!bVar8);
      lVar6 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar6 = local_30;
      }
      FUN_143c29cb8(lVar6);
      FUN_1457d922a(lVar6,*(undefined4 *)(param_1 + 0x454),0);
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
    }
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148607c0a FUN_148607c0a body=245 status=ok
// SIG undefined FUN_148607c0a(void)

void FUN_148607c0a(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(float *)(param_1 + 0x454) != param_2) ||
      (NAN(*(float *)(param_1 + 0x454)) || NAN(param_2))) &&
     (*(float *)(param_1 + 0x454) = param_2, *(char *)(param_1 + 0x452) == '\x01')) {
    uVar5 = FUN_1447210f0(param_1);
    FUN_1404d1e78(&local_28,uVar5);
    if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
      iVar4 = (int)local_20[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_20[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_20 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_20;
      } while (!bVar8);
      lVar6 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar6 = local_28;
      }
      FUN_1404d222a(lVar6,*(undefined4 *)(param_1 + 0x454),0);
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
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148607d00 FUN_148607d00 body=206 status=ok
// SIG undefined FUN_148607d00(void)

void FUN_148607d00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = FUN_1447210f0();
  FUN_1404d1e78(&local_28,uVar5);
  if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar8);
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_28;
    }
    FUN_1486072dc(lVar6,param_1 + 0x510);
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148607dd0 FUN_148607dd0 body=205 status=ok
// SIG undefined FUN_148607dd0(void)

void FUN_148607dd0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = FUN_1447210f0();
  FUN_1404d1e78(&local_30,uVar5);
  if ((((local_30 != 0) && (local_28 != (longlong *)0x0)) && (0 < (int)local_28[1])) &&
     (param_2 < *(int *)(param_1 + 0x4f4))) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_28;
    } while (!bVar8);
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_30;
    }
    FUN_14571a2b8(lVar6);
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
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148607e9e FUN_148607e9e body=38 status=ok
// SIG undefined FUN_148607e9e(void)

undefined8 FUN_148607e9e(undefined8 param_1,int param_2)

{
  FUN_14860afd2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148607ede FUN_148607ede body=75 status=ok
// SIG undefined FUN_148607ede(void)

undefined8 * FUN_148607ede(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdf7a0;
  lVar1 = 0x260;
  do {
    FUN_140b623da((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x210;
  } while (lVar1 != -0x1c0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148607f30 FUN_148607f30 body=38 status=ok
// SIG undefined FUN_148607f30(void)

undefined8 FUN_148607f30(undefined8 param_1,int param_2)

{
  FUN_148608402();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148607f56 FUN_148607f56 body=38 status=ok
// SIG undefined FUN_148607f56(void)

undefined8 FUN_148607f56(undefined8 param_1,int param_2)

{
  FUN_1458dabbc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148607f7c FUN_148607f7c body=38 status=ok
// SIG undefined FUN_148607f7c(void)

undefined8 FUN_148607f7c(undefined8 param_1,int param_2)

{
  FUN_148608576();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148607fa2 FUN_148607fa2 body=92 status=ok
// SIG undefined FUN_148607fa2(void)

undefined8 * FUN_148607fa2(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdfa90;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x220;
  do {
    FUN_140b623da((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x210;
  } while (lVar1 != -0x200);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148607ffe FUN_148607ffe body=92 status=ok
// SIG undefined FUN_148607ffe(void)

undefined8 * FUN_148607ffe(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdfb50;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x238;
  do {
    FUN_140b623da((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x210;
  } while (lVar1 != -0x1e8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860805a FUN_14860805a body=92 status=ok
// SIG undefined FUN_14860805a(void)

undefined8 * FUN_14860805a(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdfc10;
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x260;
  do {
    FUN_140b623da((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x210;
  } while (lVar1 != -0x1c0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486080b6 FUN_1486080b6 body=38 status=ok
// SIG undefined FUN_1486080b6(void)

undefined8 FUN_1486080b6(undefined8 param_1,int param_2)

{
  FUN_148608ce2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486080dc FUN_1486080dc body=38 status=ok
// SIG undefined FUN_1486080dc(void)

undefined8 FUN_1486080dc(undefined8 param_1,int param_2)

{
  FUN_1458446b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148608102 FUN_148608102 body=38 status=ok
// SIG undefined FUN_148608102(void)

undefined8 FUN_148608102(undefined8 param_1,int param_2)

{
  FUN_1458446b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148608128 FUN_148608128 body=38 status=ok
// SIG undefined FUN_148608128(void)

undefined8 FUN_148608128(undefined8 param_1,int param_2)

{
  FUN_145844646();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860814e FUN_14860814e body=38 status=ok
// SIG undefined FUN_14860814e(void)

undefined8 FUN_14860814e(undefined8 param_1,int param_2)

{
  FUN_1458446b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148608174 FUN_148608174 body=29 status=ok
// SIG undefined FUN_148608174(void)

undefined8 FUN_148608174(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148608198 FUN_148608198 body=45 status=ok
// SIG undefined FUN_148608198(void)

longlong FUN_148608198(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1415758f4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486081cc FUN_1486081cc body=115 status=ok
// SIG undefined FUN_1486081cc(void)

void FUN_1486081cc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14860823f FUN_14860823f body=52 status=ok
// SIG undefined FUN_14860823f(void)

void FUN_14860823f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14860399a(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148608273 FUN_148608273 body=47 status=ok
// SIG undefined FUN_148608273(void)

void FUN_148608273(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1486082a2 FUN_1486082a2 body=95 status=ok
// SIG undefined FUN_1486082a2(void)

undefined8 * FUN_1486082a2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148608273(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486081cc(param_1,iVar1);
      FUN_14860823f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148608302 FUN_148608302 body=80 status=ok
// SIG undefined FUN_148608302(void)

longlong * FUN_148608302(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_148608273(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 148608352 FUN_148608352 body=54 status=ok
// SIG undefined FUN_148608352(void)

longlong FUN_148608352(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 148608388 FUN_148608388 body=122 status=ok
// SIG undefined FUN_148608388(void)

void FUN_148608388(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 148608402 FUN_148608402 body=135 status=ok
// SIG undefined FUN_148608402(void)

void FUN_148608402(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdf850;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    *(undefined **)((longlong)param_1 + lVar1 + 0xb0) = &DAT_14a176f00;
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x120) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)((longlong)param_1 + lVar1 + 0xb0) = &PTR_FUN_14a177080;
    FUN_144a78a1a((longlong)param_1 + lVar1 + 0xb8);
    lVar1 = lVar1 + -0x90;
  } while (lVar1 != -0x120);
  return;
}



// FUNCTION 14860848a FUN_14860848a body=114 status=ok
// SIG undefined FUN_14860848a(void)

void FUN_14860848a(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1486084fc FUN_1486084fc body=122 status=ok
// SIG undefined FUN_1486084fc(void)

void FUN_1486084fc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 148608576 FUN_148608576 body=135 status=ok
// SIG undefined FUN_148608576(void)

void FUN_148608576(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdf9d0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    *(undefined ***)((longlong)param_1 + lVar1 + 0xb0) = &PTR_FUN_14a46be50;
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)((longlong)param_1 + lVar1 + 0xb0) = &PTR_FUN_14a177080;
    FUN_144a78a1a((longlong)param_1 + lVar1 + 0xb8);
    lVar1 = lVar1 + -0x90;
  } while (lVar1 != -0x120);
  return;
}



// FUNCTION 1486085fe FUN_1486085fe body=122 status=ok
// SIG undefined FUN_1486085fe(void)

void FUN_1486085fe(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x220) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x220) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x220 + 4) = uVar5;
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



// FUNCTION 148608678 FUN_148608678 body=340 status=ok
// SIG undefined FUN_148608678(void)

undefined4 * FUN_148608678(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1486087ce(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1486038da(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 10) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_1486088b0(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x54) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 10) =
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
      FUN_1486089c2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486087ce FUN_1486087ce body=226 status=ok
// SIG undefined FUN_1486087ce(void)

int * FUN_1486087ce(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 1486088b0 FUN_1486088b0 body=158 status=ok
// SIG undefined FUN_1486088b0(void)

undefined8 FUN_1486088b0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x58);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x58) == *param_3) {
          FUN_148603a84((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x50);
          FUN_14860894e(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x50);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14860894e FUN_14860894e body=116 status=ok
// SIG undefined FUN_14860894e(void)

void FUN_14860894e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 1486089c2 FUN_1486089c2 body=473 status=ok
// SIG undefined FUN_1486089c2(void)

void FUN_1486089c2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 148608b9c FUN_148608b9c body=137 status=ok
// SIG undefined FUN_148608b9c(void)

undefined1 * FUN_148608b9c(undefined1 *param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 8) = *param_3;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 2);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_3 + 4);
  _Src = (void *)param_3[3];
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  if (param_3[3] != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 148608c26 FUN_148608c26 body=147 status=ok
// SIG undefined FUN_148608c26(void)

void FUN_148608c26(longlong param_1,int param_2)

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



// FUNCTION 148608cba FUN_148608cba body=9 status=ok
// SIG undefined FUN_148608cba(void)

void FUN_148608cba(longlong param_1)

{
  FUN_148608ce2(param_1 + 0x10);
  return;
}



// FUNCTION 148608cc4 FUN_148608cc4 body=29 status=ok
// SIG undefined FUN_148608cc4(void)

undefined8 FUN_148608cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148608ce2 FUN_148608ce2 body=102 status=ok
// SIG undefined FUN_148608ce2(void)

void FUN_148608ce2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdfcd0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0xa8;
  do {
    FUN_148603a84((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x48;
  } while (lVar1 != 0x18);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148608d48 FUN_148608d48 body=38 status=ok
// SIG undefined FUN_148608d48(void)

undefined8 FUN_148608d48(undefined8 param_1,int param_2)

{
  FUN_142b2bd7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148608d6e FUN_148608d6e body=31 status=ok
// SIG undefined FUN_148608d6e(void)

undefined8 FUN_148608d6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148608d9c FUN_148608d9c body=93 status=ok
// SIG undefined FUN_148608d9c(void)

void FUN_148608d9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6ba10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148608dfa FUN_148608dfa body=93 status=ok
// SIG undefined FUN_148608dfa(void)

void FUN_148608dfa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ae6ba10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2980;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148608e58 FUN_148608e58 body=126 status=ok
// SIG undefined FUN_148608e58(void)

void FUN_148608e58(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ae6ba10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2980;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148608ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148608ed6 FUN_148608ed6 body=43 status=ok
// SIG undefined FUN_148608ed6(void)

void FUN_148608ed6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 148608f02 FUN_148608f02 body=44 status=ok
// SIG undefined FUN_148608f02(void)

undefined8
FUN_148608f02(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6);
  return 1;
}



// FUNCTION 148608f2e FUN_148608f2e body=31 status=ok
// SIG undefined FUN_148608f2e(void)

undefined8 FUN_148608f2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148608f6a FUN_148608f6a body=93 status=ok
// SIG undefined FUN_148608f6a(void)

void FUN_148608f6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afe29f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148608fc8 FUN_148608fc8 body=126 status=ok
// SIG undefined FUN_148608fc8(void)

void FUN_148608fc8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe29f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148609037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148609046 FUN_148609046 body=21 status=ok
// SIG undefined FUN_148609046(void)

undefined8 FUN_148609046(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14860905c FUN_14860905c body=31 status=ok
// SIG undefined FUN_14860905c(void)

undefined8 FUN_14860905c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148609090 FUN_148609090 body=85 status=ok
// SIG undefined FUN_148609090(void)

void FUN_148609090(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe33b0;
  return;
}



// FUNCTION 1486090e6 FUN_1486090e6 body=118 status=ok
// SIG undefined FUN_1486090e6(void)

void FUN_1486090e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe33b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860914d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860915c FUN_14860915c body=105 status=ok
// SIG undefined FUN_14860915c(void)

undefined8 FUN_14860915c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145c0bb76(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1486091c6 FUN_1486091c6 body=230 status=ok
// SIG undefined FUN_1486091c6(void)

undefined8 * FUN_1486091c6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 1486092ae FUN_1486092ae body=29 status=ok
// SIG undefined FUN_1486092ae(void)

undefined8 FUN_1486092ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486092e6 FUN_1486092e6 body=29 status=ok
// SIG undefined FUN_1486092e6(void)

bool FUN_1486092e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148609304 FUN_148609304 body=26 status=ok
// SIG undefined FUN_148609304(void)

bool FUN_148609304(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14860931e FUN_14860931e body=24 status=ok
// SIG undefined FUN_14860931e(void)

bool FUN_14860931e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148609342 FUN_148609342 body=101 status=ok
// SIG undefined FUN_148609342(void)

void FUN_148609342(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1486093a8 FUN_1486093a8 body=101 status=ok
// SIG undefined FUN_1486093a8(void)

void FUN_1486093a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860940e FUN_14860940e body=134 status=ok
// SIG undefined FUN_14860940e(void)

void FUN_14860940e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14afe2b10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2aa0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148609485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148609494 FUN_148609494 body=44 status=ok
// SIG undefined FUN_148609494(void)

void FUN_148609494(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001486094bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 1486094c0 FUN_1486094c0 body=156 status=ok
// SIG undefined FUN_1486094c0(void)

bool FUN_1486094c0(longlong param_1,undefined8 param_2)

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



// FUNCTION 148609560 FUN_148609560 body=29 status=ok
// SIG undefined FUN_148609560(void)

undefined8 FUN_148609560(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148609598 FUN_148609598 body=29 status=ok
// SIG undefined FUN_148609598(void)

bool FUN_148609598(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1486095b6 FUN_1486095b6 body=26 status=ok
// SIG undefined FUN_1486095b6(void)

bool FUN_1486095b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1486095d0 FUN_1486095d0 body=24 status=ok
// SIG undefined FUN_1486095d0(void)

bool FUN_1486095d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1486095e8 FUN_1486095e8 body=101 status=ok
// SIG undefined FUN_1486095e8(void)

void FUN_1486095e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860964e FUN_14860964e body=101 status=ok
// SIG undefined FUN_14860964e(void)

void FUN_14860964e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1486096b4 FUN_1486096b4 body=134 status=ok
// SIG undefined FUN_1486096b4(void)

void FUN_1486096b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14afe2b10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2b80;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860972b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860973a FUN_14860973a body=44 status=ok
// SIG undefined FUN_14860973a(void)

void FUN_14860973a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148609763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148609766 FUN_148609766 body=156 status=ok
// SIG undefined FUN_148609766(void)

bool FUN_148609766(longlong param_1,undefined8 param_2)

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



// FUNCTION 148609804 FUN_148609804 body=29 status=ok
// SIG undefined FUN_148609804(void)

undefined8 FUN_148609804(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860983c FUN_14860983c body=29 status=ok
// SIG undefined FUN_14860983c(void)

bool FUN_14860983c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14860985a FUN_14860985a body=26 status=ok
// SIG undefined FUN_14860985a(void)

bool FUN_14860985a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148609874 FUN_148609874 body=24 status=ok
// SIG undefined FUN_148609874(void)

bool FUN_148609874(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14860988c FUN_14860988c body=101 status=ok
// SIG undefined FUN_14860988c(void)

void FUN_14860988c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1486098f2 FUN_1486098f2 body=101 status=ok
// SIG undefined FUN_1486098f2(void)

void FUN_1486098f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2b10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2bf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148609958 FUN_148609958 body=134 status=ok
// SIG undefined FUN_148609958(void)

void FUN_148609958(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14afe2b10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2bf0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486099cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1486099de FUN_1486099de body=44 status=ok
// SIG undefined FUN_1486099de(void)

void FUN_1486099de(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148609a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148609a0a FUN_148609a0a body=156 status=ok
// SIG undefined FUN_148609a0a(void)

bool FUN_148609a0a(longlong param_1,undefined8 param_2)

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



// FUNCTION 148609aa8 FUN_148609aa8 body=62 status=ok
// SIG undefined FUN_148609aa8(void)

void FUN_148609aa8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148609ae6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148609ae6 FUN_148609ae6 body=112 status=ok
// SIG undefined FUN_148609ae6(void)

ulonglong FUN_148609ae6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148609b20;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148609b20:
  return param_2 & 0xffffffff;
}



// FUNCTION 148609b56 FUN_148609b56 body=62 status=ok
// SIG undefined FUN_148609b56(void)

void FUN_148609b56(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148609b94(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148609b94 FUN_148609b94 body=112 status=ok
// SIG undefined FUN_148609b94(void)

ulonglong FUN_148609b94(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148609bce;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148609bce:
  return param_2 & 0xffffffff;
}



// FUNCTION 148609c04 FUN_148609c04 body=62 status=ok
// SIG undefined FUN_148609c04(void)

void FUN_148609c04(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148609c42(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148609c42 FUN_148609c42 body=112 status=ok
// SIG undefined FUN_148609c42(void)

ulonglong FUN_148609c42(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148609c7c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148609c7c:
  return param_2 & 0xffffffff;
}



// FUNCTION 148609cb2 FUN_148609cb2 body=62 status=ok
// SIG undefined FUN_148609cb2(void)

void FUN_148609cb2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148609cf0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148609cf0 FUN_148609cf0 body=112 status=ok
// SIG undefined FUN_148609cf0(void)

ulonglong FUN_148609cf0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148609d2a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148609d2a:
  return param_2 & 0xffffffff;
}



// FUNCTION 148609d60 FUN_148609d60 body=62 status=ok
// SIG undefined FUN_148609d60(void)

void FUN_148609d60(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148609d9e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 148609d9e FUN_148609d9e body=104 status=ok
// SIG undefined FUN_148609d9e(void)

ulonglong FUN_148609d9e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148609dd4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_148609dd4:
  return param_2 & 0xffffffff;
}



// FUNCTION 148609e06 FUN_148609e06 body=62 status=ok
// SIG undefined FUN_148609e06(void)

void FUN_148609e06(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148609e44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,0x10);
  }
  return;
}



// FUNCTION 148609e44 FUN_148609e44 body=112 status=ok
// SIG undefined FUN_148609e44(void)

ulonglong FUN_148609e44(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148609e7e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,0x10);
      param_2 = param_2 / 0x50;
    }
  }
LAB_148609e7e:
  return param_2 & 0xffffffff;
}



// FUNCTION 148609eb4 FUN_148609eb4 body=147 status=ok
// SIG undefined FUN_148609eb4(void)

void FUN_148609eb4(longlong param_1,int param_2)

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



// FUNCTION 148609f48 FUN_148609f48 body=62 status=ok
// SIG undefined FUN_148609f48(void)

void FUN_148609f48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148609f86(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 148609f86 FUN_148609f86 body=112 status=ok
// SIG undefined FUN_148609f86(void)

ulonglong FUN_148609f86(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148609fc0;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_148609fc0:
  return param_2 & 0xffffffff;
}



// FUNCTION 148609ff6 FUN_148609ff6 body=48 status=ok
// SIG undefined FUN_148609ff6(void)

void FUN_148609ff6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14860a026 FUN_14860a026 body=31 status=ok
// SIG undefined FUN_14860a026(void)

undefined8 FUN_14860a026(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860a05e FUN_14860a05e body=101 status=ok
// SIG undefined FUN_14860a05e(void)

void FUN_14860a05e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860a0c4 FUN_14860a0c4 body=101 status=ok
// SIG undefined FUN_14860a0c4(void)

void FUN_14860a0c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2d50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2ce0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860a12a FUN_14860a12a body=134 status=ok
// SIG undefined FUN_14860a12a(void)

void FUN_14860a12a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14afe2d50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2ce0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860a1a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860a1c4 FUN_14860a1c4 body=31 status=ok
// SIG undefined FUN_14860a1c4(void)

undefined8 FUN_14860a1c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860a200 FUN_14860a200 body=101 status=ok
// SIG undefined FUN_14860a200(void)

void FUN_14860a200(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860a266 FUN_14860a266 body=101 status=ok
// SIG undefined FUN_14860a266(void)

void FUN_14860a266(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860a2cc FUN_14860a2cc body=134 status=ok
// SIG undefined FUN_14860a2cc(void)

void FUN_14860a2cc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2dc0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860a343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860a364 FUN_14860a364 body=31 status=ok
// SIG undefined FUN_14860a364(void)

undefined8 FUN_14860a364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860a3a0 FUN_14860a3a0 body=101 status=ok
// SIG undefined FUN_14860a3a0(void)

void FUN_14860a3a0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afe2e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860a406 FUN_14860a406 body=101 status=ok
// SIG undefined FUN_14860a406(void)

void FUN_14860a406(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afe2e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860a46c FUN_14860a46c body=134 status=ok
// SIG undefined FUN_14860a46c(void)

void FUN_14860a46c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2e30;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860a4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860a502 FUN_14860a502 body=25 status=ok
// SIG undefined FUN_14860a502(void)

undefined8 FUN_14860a502(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14860a51c FUN_14860a51c body=48 status=ok
// SIG undefined FUN_14860a51c(void)

void FUN_14860a51c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14860a54c FUN_14860a54c body=473 status=ok
// SIG undefined FUN_14860a54c(void)

void FUN_14860a54c(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x24);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x20 + lVar6 * 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1c + lVar6 * 0x24) =
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



// FUNCTION 14860a726 FUN_14860a726 body=48 status=ok
// SIG undefined FUN_14860a726(void)

void FUN_14860a726(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 14860a756 FUN_14860a756 body=105 status=ok
// SIG undefined FUN_14860a756(void)

void FUN_14860a756(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2;
  FUN_140b6229c(*(undefined8 *)(lVar1 + 8 + lVar3 * 0x18),
                *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x18));
  if (*(longlong *)(lVar1 + 8 + lVar3 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + lVar3 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar2) * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14860a7c0 FUN_14860a7c0 body=62 status=ok
// SIG undefined FUN_14860a7c0(void)

void FUN_14860a7c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14860a7fe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14860a7fe FUN_14860a7fe body=112 status=ok
// SIG undefined FUN_14860a7fe(void)

ulonglong FUN_14860a7fe(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14860a838;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14860a838:
  return param_2 & 0xffffffff;
}



// FUNCTION 14860a86e FUN_14860a86e body=114 status=ok
// SIG undefined FUN_14860a86e(void)

void FUN_14860a86e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860a8e0 FUN_14860a8e0 body=114 status=ok
// SIG undefined FUN_14860a8e0(void)

void FUN_14860a8e0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860a952 FUN_14860a952 body=114 status=ok
// SIG undefined FUN_14860a952(void)

void FUN_14860a952(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860a9c4 FUN_14860a9c4 body=335 status=ok
// SIG undefined FUN_14860a9c4(void)

undefined4 * FUN_14860a9c4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14860ab14(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_14860abfa(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14860acec(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860ab14 FUN_14860ab14 body=230 status=ok
// SIG undefined FUN_14860ab14(void)

int * FUN_14860ab14(longlong *param_1,int *param_2)

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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14860abfa FUN_14860abfa body=128 status=ok
// SIG undefined FUN_14860abfa(void)

undefined8 FUN_14860abfa(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_14860ac7a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14860ac7a FUN_14860ac7a body=114 status=ok
// SIG undefined FUN_14860ac7a(void)

void FUN_14860ac7a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860acec FUN_14860acec body=473 status=ok
// SIG undefined FUN_14860acec(void)

void FUN_14860acec(longlong *param_1)

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



// FUNCTION 14860aec6 FUN_14860aec6 body=114 status=ok
// SIG undefined FUN_14860aec6(void)

void FUN_14860aec6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860af38 FUN_14860af38 body=106 status=ok
// SIG undefined FUN_14860af38(void)

undefined8 FUN_14860af38(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x48,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x48)) {
    uVar5 = uVar2 / 0x48 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x48,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14860afa2 FUN_14860afa2 body=47 status=ok
// SIG undefined FUN_14860afa2(void)

void FUN_14860afa2(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1486038da(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14860afd2 FUN_14860afd2 body=160 status=ok
// SIG undefined FUN_14860afd2(void)

void FUN_14860afd2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14afdf6f0;
  lVar1 = 0;
  do {
    *(undefined **)((longlong)param_1 + lVar1 + 0xf0) = &DAT_14a176f00;
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x160) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)((longlong)param_1 + lVar1 + 0xf0) = &PTR_FUN_14a177080;
    FUN_144a78a1a((longlong)param_1 + lVar1 + 0xf8);
    lVar1 = lVar1 + -0x90;
  } while (lVar1 != -0x120);
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14860b076 FUN_14860b076 body=81 status=ok
// SIG undefined FUN_14860b076(void)

undefined8 FUN_14860b076(longlong param_1)

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



// FUNCTION 14860b0ce FUN_14860b0ce body=89 status=ok
// SIG undefined FUN_14860b0ce(void)

bool FUN_14860b0ce(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14860b119;
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
LAB_14860b119:
  return lVar6 == param_2;
}



// FUNCTION 14860b128 FUN_14860b128 body=118 status=ok
// SIG undefined FUN_14860b128(void)

void FUN_14860b128(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2f50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2ee0;
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



// FUNCTION 14860b19e FUN_14860b19e body=118 status=ok
// SIG undefined FUN_14860b19e(void)

void FUN_14860b19e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe2f50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe2ee0;
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



// FUNCTION 14860b214 FUN_14860b214 body=156 status=ok
// SIG undefined FUN_14860b214(void)

void FUN_14860b214(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14afe2f50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe2ee0;
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
                    /* WARNING: Could not recover jumptable at 0x00014860b2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860b2b0 FUN_14860b2b0 body=161 status=ok
// SIG undefined FUN_14860b2b0(void)

void FUN_14860b2b0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14860b31c:
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14860b31c;
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
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14860b354 FUN_14860b354 body=114 status=ok
// SIG undefined FUN_14860b354(void)

void FUN_14860b354(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860b3c6 FUN_14860b3c6 body=112 status=ok
// SIG undefined FUN_14860b3c6(void)

void FUN_14860b3c6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14860b436 FUN_14860b436 body=147 status=ok
// SIG undefined FUN_14860b436(void)

void FUN_14860b436(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14860b4ca FUN_14860b4ca body=31 status=ok
// SIG undefined FUN_14860b4ca(void)

undefined8 FUN_14860b4ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860b502 FUN_14860b502 body=101 status=ok
// SIG undefined FUN_14860b502(void)

void FUN_14860b502(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe3090;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe3020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860b568 FUN_14860b568 body=101 status=ok
// SIG undefined FUN_14860b568(void)

void FUN_14860b568(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe3090;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe3020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860b5ce FUN_14860b5ce body=134 status=ok
// SIG undefined FUN_14860b5ce(void)

void FUN_14860b5ce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14afe3090;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe3020;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860b645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860b654 FUN_14860b654 body=132 status=ok
// SIG undefined FUN_14860b654(void)

void FUN_14860b654(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x18);
  pcVar5 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(iVar3 + lVar4);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860b6dc FUN_14860b6dc body=114 status=ok
// SIG undefined FUN_14860b6dc(void)

void FUN_14860b6dc(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860b74e FUN_14860b74e body=577 status=ok
// SIG undefined FUN_14860b74e(void)

void FUN_14860b74e(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x00014860b782:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(float *)(param_1 + (longlong)iVar10 * 3) < *(float *)(param_1 + (longlong)iVar11 * 3)
            || *(float *)(param_1 + (longlong)iVar10 * 3) ==
               *(float *)(param_1 + (longlong)iVar11 * 3))) {
          iVar10 = iVar11;
        }
        if (*(float *)(param_1 + (longlong)iVar8 * 3) <= *(float *)(param_1 + (longlong)iVar10 * 3)
            && *(float *)(param_1 + (longlong)iVar10 * 3) !=
               *(float *)(param_1 + (longlong)iVar8 * 3)) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x00014860b782;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (*(float *)(param_1 + (longlong)iVar10 * 3) <
                *(float *)(param_1 + (longlong)iVar8 * 3) ||
                *(float *)(param_1 + (longlong)iVar10 * 3) ==
                *(float *)(param_1 + (longlong)iVar8 * 3))) {
              iVar11 = iVar8;
            }
            if (*(float *)(param_1 + (longlong)iVar11 * 3) <
                *(float *)(param_1 + (longlong)iVar12 * 3) ||
                *(float *)(param_1 + (longlong)iVar11 * 3) ==
                *(float *)(param_1 + (longlong)iVar12 * 3)) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14860b990 FUN_14860b990 body=62 status=ok
// SIG undefined FUN_14860b990(void)

void FUN_14860b990(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14860b9ce(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14860b9ce FUN_14860b9ce body=93 status=ok
// SIG undefined FUN_14860b9ce(void)

ulonglong FUN_14860b9ce(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14860ba2c FUN_14860ba2c body=114 status=ok
// SIG undefined FUN_14860ba2c(void)

void FUN_14860ba2c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14860ba9e FUN_14860ba9e body=107 status=ok
// SIG undefined FUN_14860ba9e(void)

void FUN_14860ba9e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14860bb0a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 14860bb0a FUN_14860bb0a body=132 status=ok
// SIG undefined FUN_14860bb0a(void)

void FUN_14860bb0a(longlong param_1,int param_2)

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



// FUNCTION 14860bb90 FUN_14860bb90 body=31 status=ok
// SIG undefined FUN_14860bb90(void)

undefined8 FUN_14860bb90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860bbc8 FUN_14860bbc8 body=101 status=ok
// SIG undefined FUN_14860bbc8(void)

void FUN_14860bbc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe31f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe3180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860bc2e FUN_14860bc2e body=101 status=ok
// SIG undefined FUN_14860bc2e(void)

void FUN_14860bc2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14afe31f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14afe3180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860bc94 FUN_14860bc94 body=134 status=ok
// SIG undefined FUN_14860bc94(void)

void FUN_14860bc94(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14afe31f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe3180;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860bd0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860bd1a FUN_14860bd1a body=132 status=ok
// SIG undefined FUN_14860bd1a(void)

void FUN_14860bd1a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x18);
  pcVar5 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(iVar3 + lVar4);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860bda2 FUN_14860bda2 body=114 status=ok
// SIG undefined FUN_14860bda2(void)

void FUN_14860bda2(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860be14 FUN_14860be14 body=180 status=ok
// SIG undefined FUN_14860be14(void)

longlong * FUN_14860be14(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x24);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14860beab;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0x1c);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14860beca(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x24);
LAB_14860beab:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14860beca FUN_14860beca body=284 status=ok
// SIG undefined FUN_14860beca(void)

undefined4 * FUN_14860beca(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_14860bfe8(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0xffffffff00000000;
  cVar1 = FUN_14860c0ce(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x1c) =
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
      FUN_14860a54c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860bfe8 FUN_14860bfe8 body=230 status=ok
// SIG undefined FUN_14860bfe8(void)

int * FUN_14860bfe8(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x24);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 14860c0ce FUN_14860c0ce body=144 status=ok
// SIG undefined FUN_14860c0ce(void)

undefined8 FUN_14860c0ce(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x24);
        if (*plVar6 == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar1 = param_3[2];
          *(int *)(plVar6 + 3) = (int)param_3[3];
          plVar6[2] = lVar1;
          *(int *)plVar6 = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar2;
          *(int *)(plVar6 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar3;
          FUN_14860c15e((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = *(int *)((longlong)plVar6 + 0x1c);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14860c15e FUN_14860c15e body=114 status=ok
// SIG undefined FUN_14860c15e(void)

void FUN_14860c15e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 14860c1d0 FUN_14860c1d0 body=147 status=ok
// SIG undefined FUN_14860c1d0(void)

void FUN_14860c1d0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14860c264 FUN_14860c264 body=114 status=ok
// SIG undefined FUN_14860c264(void)

void FUN_14860c264(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14860c2d6 FUN_14860c2d6 body=132 status=ok
// SIG undefined FUN_14860c2d6(void)

void FUN_14860c2d6(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14860c35a(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14860c35a FUN_14860c35a body=90 status=ok
// SIG undefined FUN_14860c35a(void)

void FUN_14860c35a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14860c3b4();
  return;
}



// FUNCTION 14860c3b4 FUN_14860c3b4 body=78 status=ok
// SIG undefined FUN_14860c3b4(void)

void FUN_14860c3b4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14860bda2(param_1,param_2);
  return;
}



// FUNCTION 14860c402 FUN_14860c402 body=132 status=ok
// SIG undefined FUN_14860c402(void)

void FUN_14860c402(longlong param_1,int param_2)

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



// FUNCTION 14860c488 FUN_14860c488 body=253 status=ok
// SIG undefined FUN_14860c488(void)

void FUN_14860c488(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar2 = *param_1;
    iVar13 = 0;
    bVar12 = *(longlong *)(lVar2 + 8) == *(longlong *)(*param_2 + 8);
    iVar9 = 0;
    do {
      lVar8 = (longlong)iVar9;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      lVar5 = lVar8 * 0x10;
      plVar7 = (longlong *)(lVar2 + 0x18 + lVar5);
      iVar10 = iVar9;
      do {
        lVar8 = lVar8 + 1;
        iVar11 = iVar4;
        if (lVar6 <= lVar8) break;
        lVar3 = *plVar7;
        iVar10 = iVar10 + 1;
        plVar7 = plVar7 + 2;
        iVar11 = iVar10;
      } while (bVar12 == (lVar3 == *(longlong *)(*param_2 + 8)));
      if (bVar12 == false) {
        if (iVar13 != iVar9) {
          memmove((void *)((longlong)iVar13 * 0x10 + lVar2),(void *)(lVar5 + lVar2),
                  (longlong)(iVar11 - iVar9) << 4);
        }
        iVar13 = iVar13 + (iVar11 - iVar9);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar9 = iVar11;
    } while (lVar8 < lVar6);
    *(int *)(param_1 + 1) = iVar13;
  }
  return;
}



// FUNCTION 14860c5a0 FUN_14860c5a0 body=29 status=ok
// SIG undefined FUN_14860c5a0(void)

bool FUN_14860c5a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14860c5be FUN_14860c5be body=101 status=ok
// SIG undefined FUN_14860c5be(void)

void FUN_14860c5be(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afe32b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860c624 FUN_14860c624 body=134 status=ok
// SIG undefined FUN_14860c624(void)

void FUN_14860c624(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe32b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860c69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860c6aa FUN_14860c6aa body=39 status=ok
// SIG undefined FUN_14860c6aa(void)

void FUN_14860c6aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014860c6cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14860c6d2 FUN_14860c6d2 body=31 status=ok
// SIG undefined FUN_14860c6d2(void)

undefined8 FUN_14860c6d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14860c70c FUN_14860c70c body=29 status=ok
// SIG undefined FUN_14860c70c(void)

bool FUN_14860c70c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14860c72a FUN_14860c72a body=101 status=ok
// SIG undefined FUN_14860c72a(void)

void FUN_14860c72a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14afe3320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14860c790 FUN_14860c790 body=134 status=ok
// SIG undefined FUN_14860c790(void)

void FUN_14860c790(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14afe3320;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860c807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14860c816 FUN_14860c816 body=39 status=ok
// SIG undefined FUN_14860c816(void)

void FUN_14860c816(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014860c839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14860c83e FUN_14860c83e body=62 status=ok
// SIG undefined FUN_14860c83e(void)

void FUN_14860c83e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14860c87c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 14860c87c FUN_14860c87c body=112 status=ok
// SIG undefined FUN_14860c87c(void)

ulonglong FUN_14860c87c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14860c8b6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_14860c8b6:
  return param_2 & 0xffffffff;
}



// FUNCTION 14860c8ec FUN_14860c8ec body=88 status=ok
// SIG undefined FUN_14860c8ec(void)

undefined8 FUN_14860c8ec(longlong param_1,wchar_t *param_2,undefined8 param_3)

{
  if (DAT_14cb547b8 != 0) {
    param_3 = 0;
    if (*(wchar_t **)(DAT_14cb547b8 + 0x18) != (wchar_t *)0x0) {
      wcsncpy_s(param_2,0x200,*(wchar_t **)(DAT_14cb547b8 + 0x18),0x1ff);
      return 0;
    }
  }
  if (*(uint *)(param_1 + 8) < 0x20000) {
    FUN_14860c944(param_2,param_2,param_3,L"ControlLib");
    return 0;
  }
  return 0x40000009;
}



// FUNCTION 14860c944 FUN_14860c944 body=130 status=ok
// SIG undefined FUN_14860c944(void)

void FUN_14860c944(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res20 = param_4;
  local_20 = &local_res20;
  puVar2 = (ulonglong *)FUN_144737586();
  local_38 = 0;
  local_30 = &local_res20;
  uVar1 = __stdio_common_vswprintf(*puVar2 | 1,param_1,0xff,L"%s.dll");
  if (0xfe < uVar1) {
    *(undefined2 *)(param_1 + 0x1fe) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14860c9c7 ctlInit body=229 status=ok
// SIG undefined ctlInit(void)

ulonglong ctlInit(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  FARPROC pFVar3;
  ulonglong uVar4;
  LPCWSTR local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
                    /* 0x860c9c7  527  ctlInit */
  local_28 = 0xfffffffffffffffe;
  uVar4 = 0x40000001;
  if (DAT_14cb547b0 == (HMODULE)0x0) {
    local_48 = (LPCWSTR)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_14861050a();
    uVar2 = FUN_14860c8ec(param_1);
    uVar4 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      DAT_14cb547b0 = LoadLibraryExW(local_48,(HANDLE)0x0,0x800);
      lVar1 = DAT_14cb547b8;
      uVar4 = 0x40000026;
      if (DAT_14cb547b0 != (HMODULE)0x0) {
        if ((DAT_14cb547b8 != 0) &&
           (pFVar3 = GetProcAddress(DAT_14cb547b0,"ctlSetRuntimePath"), pFVar3 != (FARPROC)0x0)) {
          (*pFVar3)(lVar1);
        }
        uVar4 = 0;
      }
    }
    FUN_148610684(&local_48);
    if (DAT_14cb547b0 == (HMODULE)0x0) {
      return uVar4;
    }
  }
  pFVar3 = GetProcAddress(DAT_14cb547b0,"ctlInit");
  if (pFVar3 != (FARPROC)0x0) {
    uVar4 = (*pFVar3)(param_1,param_2);
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 14860cabf Unwind@14860cabf body=36 status=ok
// SIG undefined Unwind@14860cabf(void)

void Unwind_14860cabf(undefined8 param_1,longlong param_2)

{
  FUN_148610684(param_2 + 0x20);
  return;
}



// FUNCTION 14860cae3 Catch@14860cae3 body=33 status=ok
// SIG undefined Catch@14860cae3(void)

undefined * Catch_14860cae3(void)

{
  return &DAT_14860caac;
}



// FUNCTION 14860cb04 ctlSetRuntimePath body=78 status=ok
// SIG undefined ctlSetRuntimePath(void)

INT_PTR ctlSetRuntimePath(longlong param_1)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cb04  566  ctlSetRuntimePath */
  if (DAT_14cb547b0 == (HMODULE)0x0) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      DAT_14cb547b8 = param_1;
      return 0;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSetRuntimePath");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cb32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cb52 ctlClose body=115 status=ok
// SIG undefined ctlClose(void)

ulonglong ctlClose(undefined8 param_1)

{
  FARPROC pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
                    /* 0x860cb52  470  ctlClose */
  uVar3 = 0x40000001;
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(DAT_14cb547b0,"ctlClose");
    if (pFVar1 != (FARPROC)0x0) {
      uVar2 = (*pFVar1)(param_1);
      uVar3 = uVar2 & 0xffffffff;
      if (DAT_14cb547b0 != (HMODULE)0x0 && (int)uVar2 == 0) {
        FreeLibrary(DAT_14cb547b0);
        DAT_14cb547b0 = (HMODULE)0x0;
        uVar3 = 0;
      }
    }
  }
  DAT_14cb547b8 = 0;
  return uVar3;
}



// FUNCTION 14860cbc5 ctlWaitForPropertyChange body=69 status=ok
// SIG undefined ctlWaitForPropertyChange(void)

INT_PTR ctlWaitForPropertyChange(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cbc5  572  ctlWaitForPropertyChange */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlWaitForPropertyChange");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cbfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cc0a ctlReservedCall body=69 status=ok
// SIG undefined ctlReservedCall(void)

INT_PTR ctlReservedCall(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cc0a  559  ctlReservedCall */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlReservedCall");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cc4f ctlGetSupported3DCapabilities body=69 status=ok
// SIG undefined ctlGetSupported3DCapabilities(void)

INT_PTR ctlGetSupported3DCapabilities(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cc4f  519  ctlGetSupported3DCapabilities */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSupported3DCapabilities");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cc85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cc94 ctlGetSet3DFeature body=69 status=ok
// SIG undefined ctlGetSet3DFeature(void)

INT_PTR ctlGetSet3DFeature(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cc94  509  ctlGetSet3DFeature */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSet3DFeature");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860ccca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860ccd9 ctlCheckDriverVersion body=67 status=ok
// SIG undefined ctlCheckDriverVersion(void)

INT_PTR ctlCheckDriverVersion(undefined8 param_1,uint param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860ccd9  469  ctlCheckDriverVersion */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlCheckDriverVersion");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cd0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,(ulonglong)param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cd1c ctlEnumerateDevices body=78 status=ok
// SIG undefined ctlEnumerateDevices(void)

INT_PTR ctlEnumerateDevices(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cd1c  480  ctlEnumerateDevices */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlEnumerateDevices");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cd5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cd6a ctlEnumerateDisplayOutputs body=78 status=ok
// SIG undefined ctlEnumerateDisplayOutputs(void)

INT_PTR ctlEnumerateDisplayOutputs(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cd6a  481  ctlEnumerateDisplayOutputs */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlEnumerateDisplayOutputs");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cdb8 ctlEnumerateI2CPinPairs body=78 status=ok
// SIG undefined ctlEnumerateI2CPinPairs(void)

INT_PTR ctlEnumerateI2CPinPairs(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cdb8  482  ctlEnumerateI2CPinPairs */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlEnumerateI2CPinPairs");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cdf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860ce06 ctlGetDeviceProperties body=69 status=ok
// SIG undefined ctlGetDeviceProperties(void)

INT_PTR ctlGetDeviceProperties(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860ce06  500  ctlGetDeviceProperties */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetDeviceProperties");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860ce3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860ce4b ctlGetDisplayProperties body=69 status=ok
// SIG undefined ctlGetDisplayProperties(void)

INT_PTR ctlGetDisplayProperties(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860ce4b  501  ctlGetDisplayProperties */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetDisplayProperties");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860ce81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860ce90 ctlGetAdaperDisplayEncoderProperties body=69 status=ok
// SIG undefined ctlGetAdaperDisplayEncoderProperties(void)

INT_PTR ctlGetAdaperDisplayEncoderProperties(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860ce90  496  ctlGetAdaperDisplayEncoderProperties */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetAdaperDisplayEncoderProperties");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860ced5 ctlGetZeDevice body=78 status=ok
// SIG undefined ctlGetZeDevice(void)

INT_PTR ctlGetZeDevice(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860ced5  524  ctlGetZeDevice */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetZeDevice");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cf13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cf23 ctlGetSharpnessCaps body=69 status=ok
// SIG undefined ctlGetSharpnessCaps(void)

INT_PTR ctlGetSharpnessCaps(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cf23  518  ctlGetSharpnessCaps */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSharpnessCaps");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cf59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cf68 ctlGetCurrentSharpness body=69 status=ok
// SIG undefined ctlGetCurrentSharpness(void)

INT_PTR ctlGetCurrentSharpness(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cf68  499  ctlGetCurrentSharpness */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetCurrentSharpness");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cf9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cfad ctlSetCurrentSharpness body=69 status=ok
// SIG undefined ctlSetCurrentSharpness(void)

INT_PTR ctlSetCurrentSharpness(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cfad  562  ctlSetCurrentSharpness */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSetCurrentSharpness");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860cfe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860cff2 ctlI2CAccess body=69 status=ok
// SIG undefined ctlI2CAccess(void)

INT_PTR ctlI2CAccess(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860cff2  525  ctlI2CAccess */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlI2CAccess");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d037 ctlI2CAccessOnPinPair body=69 status=ok
// SIG undefined ctlI2CAccessOnPinPair(void)

INT_PTR ctlI2CAccessOnPinPair(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d037  526  ctlI2CAccessOnPinPair */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlI2CAccessOnPinPair");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d07c ctlAUXAccess body=69 status=ok
// SIG undefined ctlAUXAccess(void)

INT_PTR ctlAUXAccess(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d07c  468  ctlAUXAccess */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlAUXAccess");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d0b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d0c1 ctlGetPowerOptimizationCaps body=69 status=ok
// SIG undefined ctlGetPowerOptimizationCaps(void)

INT_PTR ctlGetPowerOptimizationCaps(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d0c1  507  ctlGetPowerOptimizationCaps */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetPowerOptimizationCaps");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d106 ctlGetPowerOptimizationSetting body=69 status=ok
// SIG undefined ctlGetPowerOptimizationSetting(void)

INT_PTR ctlGetPowerOptimizationSetting(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d106  508  ctlGetPowerOptimizationSetting */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetPowerOptimizationSetting");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d14b ctlSetPowerOptimizationSetting body=69 status=ok
// SIG undefined ctlSetPowerOptimizationSetting(void)

INT_PTR ctlSetPowerOptimizationSetting(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d14b  565  ctlSetPowerOptimizationSetting */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSetPowerOptimizationSetting");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d190 ctlSetBrightnessSetting body=69 status=ok
// SIG undefined ctlSetBrightnessSetting(void)

INT_PTR ctlSetBrightnessSetting(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d190  560  ctlSetBrightnessSetting */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSetBrightnessSetting");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d1c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d1d5 ctlGetBrightnessSetting body=69 status=ok
// SIG undefined ctlGetBrightnessSetting(void)

INT_PTR ctlGetBrightnessSetting(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d1d5  497  ctlGetBrightnessSetting */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetBrightnessSetting");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d20b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d21a ctlPixelTransformationGetConfig body=69 status=ok
// SIG undefined ctlPixelTransformationGetConfig(void)

INT_PTR ctlPixelTransformationGetConfig(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d21a  552  ctlPixelTransformationGetConfig */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlPixelTransformationGetConfig");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d25f ctlPixelTransformationSetConfig body=69 status=ok
// SIG undefined ctlPixelTransformationSetConfig(void)

INT_PTR ctlPixelTransformationSetConfig(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d25f  553  ctlPixelTransformationSetConfig */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlPixelTransformationSetConfig");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d2a4 ctlPanelDescriptorAccess body=69 status=ok
// SIG undefined ctlPanelDescriptorAccess(void)

INT_PTR ctlPanelDescriptorAccess(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d2a4  549  ctlPanelDescriptorAccess */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlPanelDescriptorAccess");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d2da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d2e9 ctlGetSupportedRetroScalingCapability body=69 status=ok
// SIG undefined ctlGetSupportedRetroScalingCapability(void)

INT_PTR ctlGetSupportedRetroScalingCapability(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d2e9  520  ctlGetSupportedRetroScalingCapability */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSupportedRetroScalingCapability");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d31f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d32e ctlGetSetRetroScaling body=69 status=ok
// SIG undefined ctlGetSetRetroScaling(void)

INT_PTR ctlGetSetRetroScaling(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d32e  515  ctlGetSetRetroScaling */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSetRetroScaling");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d373 ctlGetSupportedScalingCapability body=69 status=ok
// SIG undefined ctlGetSupportedScalingCapability(void)

INT_PTR ctlGetSupportedScalingCapability(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d373  521  ctlGetSupportedScalingCapability */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSupportedScalingCapability");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d3a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d3b8 ctlGetCurrentScaling body=69 status=ok
// SIG undefined ctlGetCurrentScaling(void)

INT_PTR ctlGetCurrentScaling(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d3b8  498  ctlGetCurrentScaling */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetCurrentScaling");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d3fd ctlSetCurrentScaling body=69 status=ok
// SIG undefined ctlSetCurrentScaling(void)

INT_PTR ctlSetCurrentScaling(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d3fd  561  ctlSetCurrentScaling */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSetCurrentScaling");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d442 ctlGetLACEConfig body=69 status=ok
// SIG undefined ctlGetLACEConfig(void)

INT_PTR ctlGetLACEConfig(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d442  504  ctlGetLACEConfig */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetLACEConfig");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d487 ctlSetLACEConfig body=69 status=ok
// SIG undefined ctlSetLACEConfig(void)

INT_PTR ctlSetLACEConfig(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d487  564  ctlSetLACEConfig */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSetLACEConfig");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d4bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d4cc ctlSoftwarePSR body=69 status=ok
// SIG undefined ctlSoftwarePSR(void)

INT_PTR ctlSoftwarePSR(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d4cc  567  ctlSoftwarePSR */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSoftwarePSR");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d511 ctlGetIntelArcSyncInfoForMonitor body=69 status=ok
// SIG undefined ctlGetIntelArcSyncInfoForMonitor(void)

INT_PTR ctlGetIntelArcSyncInfoForMonitor(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d511  502  ctlGetIntelArcSyncInfoForMonitor */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetIntelArcSyncInfoForMonitor");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d556 ctlEnumerateMuxDevices body=78 status=ok
// SIG undefined ctlEnumerateMuxDevices(void)

INT_PTR ctlEnumerateMuxDevices(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d556  483  ctlEnumerateMuxDevices */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlEnumerateMuxDevices");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d5a4 ctlGetMuxProperties body=69 status=ok
// SIG undefined ctlGetMuxProperties(void)

INT_PTR ctlGetMuxProperties(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d5a4  506  ctlGetMuxProperties */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetMuxProperties");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d5da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d5e9 ctlSwitchMux body=69 status=ok
// SIG undefined ctlSwitchMux(void)

INT_PTR ctlSwitchMux(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d5e9  568  ctlSwitchMux */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSwitchMux");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d62e ctlGetIntelArcSyncProfile body=69 status=ok
// SIG undefined ctlGetIntelArcSyncProfile(void)

INT_PTR ctlGetIntelArcSyncProfile(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d62e  503  ctlGetIntelArcSyncProfile */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetIntelArcSyncProfile");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d673 ctlSetIntelArcSyncProfile body=69 status=ok
// SIG undefined ctlSetIntelArcSyncProfile(void)

INT_PTR ctlSetIntelArcSyncProfile(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d673  563  ctlSetIntelArcSyncProfile */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlSetIntelArcSyncProfile");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d6b8 ctlEdidManagement body=69 status=ok
// SIG undefined ctlEdidManagement(void)

INT_PTR ctlEdidManagement(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d6b8  471  ctlEdidManagement */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlEdidManagement");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d6ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d6fd ctlGetSetCustomMode body=69 status=ok
// SIG undefined ctlGetSetCustomMode(void)

INT_PTR ctlGetSetCustomMode(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d6fd  511  ctlGetSetCustomMode */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSetCustomMode");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d742 ctlGetSetCombinedDisplay body=69 status=ok
// SIG undefined ctlGetSetCombinedDisplay(void)

INT_PTR ctlGetSetCombinedDisplay(undefined8 param_1,undefined8 param_2)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d742  510  ctlGetSetCombinedDisplay */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSetCombinedDisplay");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return IVar1;
    }
  }
  return 0x40000001;
}



// FUNCTION 14860d787 ctlGetSetDisplayGenlock body=90 status=ok
// SIG undefined ctlGetSetDisplayGenlock(void)

INT_PTR ctlGetSetDisplayGenlock
                  (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  INT_PTR IVar1;
  
                    /* 0x860d787  512  ctlGetSetDisplayGenlock */
  if (DAT_14cb547b0 != (HMODULE)0x0) {
    UNRECOVERED_JUMPTABLE = GetProcAddress(DAT_14cb547b0,"ctlGetSetDisplayGenlock");
    if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014860d7cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      IVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,(ulonglong)param_3,param_4);
      return IVar1;
    }
  }
  return 0x40000001;
}


