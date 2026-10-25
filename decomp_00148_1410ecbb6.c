// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1410ecbb6 FUN_1410ecbb6 body=269 status=ok
// SIG undefined FUN_1410ecbb6(void)

void FUN_1410ecbb6(longlong param_1,int param_2)

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



// FUNCTION 1410ecd2e FUN_1410ecd2e body=42 status=ok
// SIG undefined FUN_1410ecd2e(void)

void FUN_1410ecd2e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    FUN_1410ecd58(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 1410ecd58 FUN_1410ecd58 body=319 status=ok
// SIG undefined FUN_1410ecd58(void)

void FUN_1410ecd58(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_2 + 0x1ea) == '\0') && (0 < *(int *)(param_2 + 0x98))) {
    *(undefined1 *)(param_2 + 0x1ea) = 1;
    local_28 = *(undefined4 *)(param_2 + 0x98);
    local_30 = *(undefined8 *)(param_2 + 0x90);
    FUN_1410d2738(param_1 + 0x26);
    if (((*(int *)((longlong)param_1 + 0x54) != 0) &&
        (((uVar1 = *(uint *)(param_1 + 10), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar4 != (longlong *)0x0)))) &&
       ((((int)plVar4[2] == *(int *)((longlong)param_1 + 0x54) &&
         ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)))) {
      FUN_1405f658a();
    }
    lVar2 = FUN_1410ece98(param_2);
    if (lVar2 != 0) {
      local_38 = *(undefined4 *)(param_2 + 0x98);
      local_40 = *(undefined8 *)(param_2 + 0x90);
      FUN_14890df2e(lVar2);
    }
    if ((longlong)*(int *)(param_2 + 0x1f8) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x1f0);
      lVar5 = (longlong)*(int *)(param_2 + 0x1f8) * 0xc;
      do {
        lVar3 = (**(code **)(*param_1 + 8))(param_1,lVar2);
        if (lVar3 != 0) {
          FUN_1410ecd58(param_1,lVar3);
        }
        lVar2 = lVar2 + 0xc;
        lVar5 = lVar5 + -0xc;
      } while (lVar5 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ece98 FUN_1410ece98 body=110 status=ok
// SIG undefined FUN_1410ece98(void)

undefined8 FUN_1410ece98(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140f42f34();
  if (lVar1 != 0) {
    local_18 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + 0x110);
    local_20 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x108);
    if ((int)local_20 != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),&local_20)
      ;
      goto LAB_1410eced9;
    }
  }
  uVar2 = 0;
LAB_1410eced9:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ecf08 FUN_1410ecf08 body=1213 status=ok
// SIG undefined FUN_1410ecf08(void)

void FUN_1410ecf08(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  *param_1 = &PTR_LAB_14b475390;
  param_1[0x35] = 0;
  FUN_1418b7cf2();
  puVar4 = (undefined8 *)param_1[0x51];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x43];
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
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (*(int *)((longlong)param_1 + 0x1bc) != 0) {
    FUN_14472eb64(param_1 + 0x36,0);
  }
  param_1[0x3c] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1dc)) {
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x80;
    FUN_1446efbd8(param_1 + 0x38,0);
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x2d];
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
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1407cbf25(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  plVar5 = param_1 + 0x1b;
  puVar3 = (uint *)(param_1 + 0x1d);
  iVar6 = *(int *)(param_1 + 0x20);
  if (iVar6 == 0) {
    uVar17 = 0;
    uVar18 = 1;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[0x1f];
    if ((uint *)param_1[0x1f] == (uint *)0x0) {
      puVar11 = puVar3;
    }
    uVar15 = *puVar11;
    if (uVar15 == 0) {
      iVar14 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar14 = iVar6 + -1;
      }
      uVar17 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar13 == uVar17) goto LAB_1410ed0e2;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar18 = (ulonglong)(-uVar15 & uVar15);
    uVar13 = uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
  }
  if (iVar10 < iVar6) {
    uVar15 = 0xffffffff;
    do {
      lVar16 = *plVar5;
      if (*(longlong *)(lVar16 + 8 + (longlong)iVar10 * 0x18) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)((longlong)iVar10 * 0x18 + 8 + lVar16) = 0;
        iVar6 = *(int *)(param_1 + 0x20);
      }
      uVar15 = uVar15 & ~(uint)uVar18;
      puVar11 = (uint *)param_1[0x1f];
      if ((uint *)param_1[0x1f] == (uint *)0x0) {
        puVar11 = puVar3;
      }
      iVar10 = (int)uVar17;
      lVar16 = (longlong)iVar10;
      uVar7 = puVar11[lVar16] & uVar15;
      if (uVar7 == 0) {
        iVar8 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar8 = iVar6 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar10) {
          iVar9 = iVar10;
        }
        if (iVar8 <= iVar10) break;
        lVar12 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar7 = puVar11[lVar16 + lVar12 + 1];
          if (uVar7 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar16 == lVar12) goto LAB_1410ed0e2;
        }
        uVar17 = (ulonglong)(iVar10 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar7 & uVar7);
      uVar13 = uVar18 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar10 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar6);
  }
LAB_1410ed0e2:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    FUN_144727cd0(plVar5,0);
  }
  param_1[0x21] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x104)) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140d129fc(param_1 + 7);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001410ed1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1410ed3ca FUN_1410ed3ca body=228 status=ok
// SIG undefined FUN_1410ed3ca(void)

longlong FUN_1410ed3ca(void)

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
  if (DAT_14cac8380 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463720b8;
    local_38 = &LAB_1478a5ac3;
    local_40 = &LAB_146396d21;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"SoundWave",&DAT_14cac8380,FUN_146396cfa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8380;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ed4b0 FUN_1410ed4b0 body=2519 status=ok
// SIG undefined FUN_1410ed4b0(void)

void FUN_1410ed4b0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = *param_2;
  local_b8 = param_2[1];
  if (local_b8 != 0) {
    LOCK();
    *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
    UNLOCK();
  }
  FUN_1410ede88(param_1,&local_c0,param_3,param_4);
  lVar3 = *param_3;
  uVar9 = FUN_140b1b996();
  lVar4 = *(longlong *)(lVar3 + 0x200);
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1403f69f4(lVar4,uVar9,6);
  }
  puVar11 = &local_b0;
  FUN_140ccc900(lVar3,puVar11,uVar9,param_4);
  if (local_90 == 3) {
    uVar12 = local_b0;
    bVar8 = 3;
  }
  else {
    puVar10 = &local_88;
    FUN_1400b56fe(puVar10,&local_b0,3);
    uVar12 = 0;
    if (local_68 != 0) {
      uVar12 = local_88;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar5)(puVar10);
    }
    bVar8 = local_90;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar8 = local_90;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar12;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar5)(puVar11);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  lVar3 = *param_2;
  plVar6 = (longlong *)param_2[1];
  if (plVar6 == (longlong *)0x0) {
    if (lVar3 == 0) goto LAB_1410ed949;
LAB_1410ed5cf:
    plVar7 = *(longlong **)(param_1 + 0xa8);
    *(longlong *)(param_1 + 0xa0) = lVar3;
    *(longlong **)(param_1 + 0xa8) = plVar6;
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
    lVar3 = *param_3;
    uVar9 = FUN_140b1b996();
    lVar4 = *(longlong *)(lVar3 + 0x200);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(lVar4,uVar9,0);
    }
    puVar11 = &local_b0;
    FUN_140ccc900(lVar3,puVar11,uVar9,param_4);
    uVar12 = local_b0;
    if (local_90 != 3) {
      puVar10 = &local_88;
      FUN_1400b56fe(puVar10,&local_b0,3);
      uVar12 = 0;
      if (local_68 != 0) {
        uVar12 = local_88;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar5)(puVar10);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
    }
    *(undefined4 *)(param_1 + 0x60) = uVar12;
    FUN_14020a6cc(param_1 + 0x58,1);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar5)(puVar11);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    lVar3 = *param_3;
    uVar9 = FUN_140b1b996();
    lVar4 = *(longlong *)(lVar3 + 0x200);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(lVar4,uVar9,1);
    }
    puVar11 = &local_b0;
    FUN_140ccc900(lVar3,puVar11,uVar9,param_4);
    uVar12 = local_b0;
    if (local_90 != 3) {
      puVar10 = &local_88;
      FUN_1400b56fe(puVar10,&local_b0,3);
      uVar12 = 0;
      if (local_68 != 0) {
        uVar12 = local_88;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar5)(puVar10);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar12;
    FUN_14020a6cc(param_1 + 100,1);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar5)(puVar11);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    lVar3 = *param_3;
    uVar9 = FUN_140b1b996();
    lVar4 = *(longlong *)(lVar3 + 0x200);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(lVar4,uVar9,2);
    }
    puVar11 = &local_b0;
    FUN_140ccc900(lVar3,puVar11,uVar9,param_4);
    uVar12 = local_b0;
    if (local_90 != 3) {
      puVar10 = &local_88;
      FUN_1400b56fe(puVar10,&local_b0,3);
      uVar12 = 0;
      if (local_68 != 0) {
        uVar12 = local_88;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar5)(puVar10);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
    }
    *(undefined4 *)(param_1 + 0x78) = uVar12;
    FUN_14020a6cc(param_1 + 0x70,1);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar5)(puVar11);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    lVar3 = *param_3;
    uVar9 = FUN_140b1b996();
    lVar4 = *(longlong *)(lVar3 + 0x200);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(lVar4,uVar9,3);
    }
    puVar11 = &local_b0;
    FUN_140ccc900(lVar3,puVar11,uVar9,param_4);
    uVar12 = local_b0;
    if (local_90 != 3) {
      puVar10 = &local_88;
      FUN_1400b56fe(puVar10,&local_b0,3);
      uVar12 = 0;
      if (local_68 != 0) {
        uVar12 = local_88;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar5)(puVar10);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
    }
    *(undefined4 *)(param_1 + 0x84) = uVar12;
    FUN_14020a6cc(param_1 + 0x7c,1);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar5)(puVar11);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    lVar3 = *param_3;
    uVar9 = FUN_140b1b996();
    lVar4 = *(longlong *)(lVar3 + 0x200);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(lVar4,uVar9,4);
    }
    puVar11 = &local_b0;
    FUN_140ccc900(lVar3,puVar11,uVar9,param_4);
    uVar12 = local_b0;
    if (local_90 != 3) {
      puVar10 = &local_88;
      FUN_1400b56fe(puVar10,&local_b0,3);
      uVar12 = 0;
      if (local_68 != 0) {
        uVar12 = local_88;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar5)(puVar10);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
    }
    *(undefined4 *)(param_1 + 0x90) = uVar12;
    FUN_14020a6cc(param_1 + 0x88,1);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar5)(puVar11);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    lVar3 = *param_3;
    uVar9 = FUN_140b1b996();
    lVar4 = *(longlong *)(lVar3 + 0x200);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_1403f69f4(lVar4,uVar9,5);
    }
    puVar11 = &local_b0;
    FUN_140ccc900(lVar3,puVar11,uVar9,param_4);
    uVar12 = local_b0;
    if (local_90 != 3) {
      puVar10 = &local_88;
      FUN_1400b56fe(puVar10,&local_b0,3);
      uVar12 = 0;
      if (local_68 != 0) {
        uVar12 = local_88;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_70) {
          puVar10 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar5)(puVar10);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
    }
    *(undefined4 *)(param_1 + 0x9c) = uVar12;
    FUN_14020a6cc(param_1 + 0x94,1);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar11 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar5)(puVar11);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    if (plVar6 != (longlong *)0x0) goto LAB_1410ed92b;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (lVar3 != 0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      goto LAB_1410ed5cf;
    }
LAB_1410ed92b:
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_1410ed949:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ede88 FUN_1410ede88 body=306 status=ok
// SIG undefined FUN_1410ede88(void)

void FUN_1410ede88(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar5 == (longlong *)0x0) goto LAB_1410edec6;
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_1410edf0d:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1410edec6;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x40) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1410edf0d;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1410edec6:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001410edfb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410edfba FUN_1410edfba body=651 status=ok
// SIG undefined FUN_1410edfba(void)

/* WARNING: Removing unreachable block (ram,0x0001410ee20d) */

longlong * FUN_1410edfba(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  iVar9 = *(int *)(param_1 + 0x2c0) - *(int *)(param_1 + 0x2ec);
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (iVar9 != 0) {
    FUN_1408be2c4(param_2);
  }
  uVar5 = *(uint *)(param_1 + 0x2e0);
  if (uVar5 == 0) {
    uVar10 = 1;
    uVar14 = 0;
    uVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x2d8);
    if (*(uint **)(param_1 + 0x2d8) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x2c8);
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar9 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar9 = uVar5 - 1;
      }
      uVar14 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar14) goto LAB_1410ee1ba;
        iVar9 = iVar9 + 0x20;
        uVar4 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar10 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar4 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar4) {
      uVar4 = uVar5;
    }
  }
  if (uVar4 != uVar5) {
    uVar12 = 0xffffffff;
    local_60 = (ulonglong)uVar5;
    uVar2 = local_58;
    uVar3 = local_50;
    do {
      local_50 = uVar3;
      local_58 = uVar2;
      FUN_1410ee246(&local_58,*(longlong *)(param_1 + 0x2b8) + (longlong)(int)uVar4 * 0x28,
                    *(longlong *)(param_1 + 0x2b8) + (longlong)(int)uVar4 * 0x28 + 0x10);
      lVar15 = param_2[1];
      uVar5 = (int)lVar15 + 1;
      *(uint *)(param_2 + 1) = uVar5;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
        FUN_1447a1bd6(param_2);
      }
      lVar11 = *param_2;
      lVar15 = (longlong)(int)lVar15 * 0x10;
      *(undefined8 *)(lVar11 + lVar15) = 0;
      *(undefined8 *)(lVar11 + lVar15) = local_58;
      local_58 = 0;
      uVar2 = local_58;
      *(undefined4 *)(lVar11 + 8 + lVar15) = (undefined4)local_50;
      *(undefined4 *)(lVar11 + 0xc + lVar15) = local_50._4_4_;
      local_50 = 0;
      uVar3 = local_50;
      local_50 = 0;
      local_58 = 0;
      uVar12 = uVar12 & ~(uint)uVar10;
      puVar6 = *(uint **)(param_1 + 0x2d8);
      if (*(uint **)(param_1 + 0x2d8) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x2c8);
      }
      uVar5 = *(uint *)(param_1 + 0x2e0);
      iVar13 = (int)uVar14;
      lVar15 = (longlong)iVar13;
      uVar4 = puVar6[lVar15] & uVar12;
      if (uVar4 == 0) {
        iVar7 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar7 = uVar5 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar13) {
          iVar8 = iVar13;
        }
        if (iVar13 < iVar7) {
          lVar11 = 0;
          do {
            uVar4 = puVar6[lVar15 + lVar11 + 1];
            if (uVar4 != 0) {
              uVar14 = (ulonglong)(iVar13 + (int)lVar11 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1410ee189;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar15 != lVar11);
          uVar12 = 0xffffffff;
          iVar13 = iVar8;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        uVar4 = uVar5;
      }
      else {
LAB_1410ee189:
        uVar10 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar10 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar4 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar4) {
          uVar4 = uVar5;
        }
      }
    } while (uVar4 != (uint)local_60);
  }
LAB_1410ee1ba:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ee246 FUN_1410ee246 body=196 status=ok
// SIG undefined FUN_1410ee246(void)

undefined8 * FUN_1410ee246(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  local_2c = 0;
  local_30 = 0x20003a;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  if (0 < iVar2 + iVar1 + 2) {
    FUN_1446f8c06(param_1,iVar2 + iVar1 + 3);
    iVar2 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar2 = 0;
    }
  }
  FUN_1400020e8(param_1,*param_2,iVar2);
  FUN_1400020e8(param_1,&local_30,2);
  iVar2 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_1,*param_3,iVar2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ee30c FUN_1410ee30c body=861 status=ok
// SIG undefined FUN_1410ee30c(void)

void FUN_1410ee30c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_20);
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_141710108;
      local_70 = 0x1000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar4 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar4);
  local_40 = local_28;
  uVar3 = FUN_1410ee66a(local_20,&local_50);
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ee66a FUN_1410ee66a body=383 status=ok
// SIG undefined FUN_1410ee66a(void)

bool FUN_1410ee66a(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return false;
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar2 = FUN_14117f018();
    lVar3 = FUN_14477b664(uVar2);
    param_2[1] = lVar3;
  }
  if (param_2[2] == 0) {
    if (lVar3 == 0) {
      return false;
    }
    if (*param_2 == 0) {
      return false;
    }
    plVar4 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
      param_2[2] = 0;
      return false;
    }
    uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar3 = FUN_144aff482(uVar2,param_2);
    param_2[2] = lVar3;
    if (lVar3 == 0) {
      return false;
    }
  }
  uVar2 = FUN_140eb0cd4();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
  if (plVar4 != (longlong *)0x0) {
    uVar2 = FUN_140eb0cd4();
    plVar5 = (longlong *)FUN_144718840(plVar4,uVar2);
    if (plVar4 == plVar5) {
      return false;
    }
    if (plVar5 == (longlong *)0x0) {
      return false;
    }
    lVar3 = (**(code **)(*plVar5 + 0x10))();
    if (lVar3 != 0) {
      lVar6 = param_2[1];
      if (lVar6 == 0) {
        uVar2 = FUN_14117f018();
        lVar6 = FUN_14477b664(uVar2);
        param_2[1] = lVar6;
      }
      if (((param_2[2] == 0) && (lVar6 != 0)) && (*param_2 != 0)) {
        plVar4 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar6 = FUN_144aff482(uVar2,param_2);
        }
        param_2[2] = lVar6;
      }
      lVar3 = FUN_14117f064(lVar3);
      return lVar3 != 0;
    }
  }
  return false;
}



// FUNCTION 1410ee7f8 FUN_1410ee7f8 body=40 status=ok
// SIG undefined FUN_1410ee7f8(void)

undefined8 FUN_1410ee7f8(undefined8 param_1,int param_2)

{
  FUN_1410ee820();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410ee820 FUN_1410ee820 body=280 status=ok
// SIG undefined FUN_1410ee820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410ee820(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b3affb0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0x1c);
  if ((param_1[0x18] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x18] + 0x50));
  }
  if ((param_1[0x12] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x12] + 0x50));
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001410ee8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1410ee938 FUN_1410ee938 body=365 status=ok
// SIG undefined FUN_1410ee938(void)

void FUN_1410ee938(longlong param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (((iVar2 == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
    return;
  }
  puVar4 = (undefined8 *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(puVar4 + 2) != iVar2) {
    return;
  }
  if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
    return;
  }
  if (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1] < 9.99999905104687e-09
     ) {
    if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
      uVar3 = *puVar4;
    }
    else {
      uVar3 = 0;
    }
    FUN_1407afb5c(uVar3,0,0);
    return;
  }
  if ((((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar1 ||
       ((puVar4 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        puVar4 == (undefined8 *)0x0 || (*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x3c))))))) ||
     ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)) {
LAB_1410eea48:
    uVar1 = *(uint *)(param_1 + 0x30);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1410eea85;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == iVar2 && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_1410eea85;
    }
  }
  else {
    if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
      uVar3 = *puVar4;
    }
    else {
      uVar3 = 0;
    }
    FUN_140545fa2(uVar3);
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 != 0) goto LAB_1410eea48;
  }
  uVar3 = 0;
LAB_1410eea85:
  FUN_1410eeaa6(uVar3);
  return;
}



// FUNCTION 1410eeaa6 FUN_1410eeaa6 body=219 status=ok
// SIG undefined FUN_1410eeaa6(void)

bool FUN_1410eeaa6(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  cVar1 = FUN_1403adf14(param_1,0,0);
  if (cVar1 == '\0') {
    FUN_1410eeb82(param_1 + 0xc07);
    goto LAB_1410eeb3c;
  }
  if ((char)param_1[0x2f] != '\x03') {
    uVar3 = FUN_14477b072(param_1,DAT_14cba80a0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
    goto LAB_1410eeb3c;
  }
  uVar2 = FUN_1403ae46b();
  if ((((int)uVar2 < 0) || ((int)param_1[0xf1e] <= (int)uVar2)) ||
     (lVar5 = (ulonglong)uVar2 * 0x48 + param_1[0xf1d], lVar5 == 0)) {
LAB_1410eeb7d:
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)0x0;
    if ((*(longlong *)(lVar5 + 0x20) != 0) && (*(longlong **)(lVar5 + 0x28) != (longlong *)0x0)) {
      lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 8))();
      if (lVar5 == 0) goto LAB_1410eeb7d;
      uVar3 = FUN_1403ae386();
      plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
    }
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,cVar1 == '\x02');
LAB_1410eeb3c:
  return cVar1 != '\0';
}



// FUNCTION 1410eeb82 FUN_1410eeb82 body=7 status=ok
// SIG undefined FUN_1410eeb82(void)

void FUN_1410eeb82(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1410eeb8a FUN_1410eeb8a body=189 status=ok
// SIG undefined FUN_1410eeb8a(void)

void FUN_1410eeb8a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = param_1 + 0x20;
  lVar7 = *(longlong *)(param_1 + 0x110);
  lVar6 = lVar7;
  if (lVar7 == 0) {
    lVar6 = lVar1;
  }
  iVar2 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar6 + 8 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 8))();
        if (cVar4 == '\0') {
          (**(code **)(**(longlong **)(lVar6 + 8 + lVar7) + 0x28))();
          plVar3 = *(longlong **)(lVar6 + 8 + lVar7);
          (**(code **)(*plVar3 + 0x10))(plVar3,0);
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar7);
    uVar5 = *(undefined4 *)(param_1 + 0x118);
    lVar7 = *(longlong *)(param_1 + 0x110);
  }
  if (lVar7 == 0) {
    lVar7 = lVar1;
  }
  FUN_1410eec47(lVar7,uVar5);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_1410eec7c(lVar1);
    return;
  }
  return;
}



// FUNCTION 1410eec47 FUN_1410eec47 body=52 status=ok
// SIG undefined FUN_1410eec47(void)

void FUN_1410eec47(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410eec7c FUN_1410eec7c body=89 status=ok
// SIG undefined FUN_1410eec7c(void)

void FUN_1410eec7c(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xf0),
              (longlong)*(int *)((longlong)param_1 + 0xf8) << 4);
      FUN_1446efa72((longlong)param_1 + 0xf0,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 1410eecd6 FUN_1410eecd6 body=827 status=ok
// SIG undefined FUN_1410eecd6(void)

void FUN_1410eecd6(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    uVar5 = FUN_1406d3bdc();
    cVar3 = FUN_1448093f4(lVar4,uVar5);
    lVar6 = 0;
    if (cVar3 != '\0') {
      lVar6 = lVar4;
    }
  }
  lVar4 = FUN_1410ef012(param_1);
  if (lVar4 == 0) {
LAB_1410eedfe:
    if (lVar6 == 0) goto LAB_1410eeff8;
  }
  else {
    lVar4 = FUN_1410ef012(param_1);
    lVar4 = *(longlong *)(lVar4 + 0x160);
    if (lVar4 == 0) goto LAB_1410eedfe;
    uVar5 = FUN_1410ef06e();
    cVar3 = FUN_1448093f4(lVar4,uVar5);
    if (((cVar3 == '\0') || (lVar6 == 0)) || (*(char *)(lVar4 + 0x298) == '\0')) goto LAB_1410eedfe;
    lVar4 = *(longlong *)(lVar6 + 0x208);
    if (lVar4 == 0) {
      uVar5 = FUN_140bd9786();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(lVar6 + 0x208) = lVar4;
    }
    plVar1 = (longlong *)(lVar6 + 0x200);
    if (*(longlong *)(lVar6 + 0x210) != 0) {
LAB_1410eed8e:
      if (lVar4 != 0) {
        return;
      }
      uVar5 = FUN_140bd9786();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(lVar6 + 0x208) = lVar4;
      if (*(longlong *)(lVar6 + 0x210) != 0) {
        return;
      }
      if (lVar4 == 0) {
        return;
      }
      if (*plVar1 != 0) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar5 = FUN_144aff482(uVar5,plVar1);
        }
        *(undefined8 *)(lVar6 + 0x210) = uVar5;
        return;
      }
      return;
    }
    if ((lVar4 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(lVar6 + 0x210) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(lVar6 + 0x210) = lVar4;
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(lVar6 + 0x208);
          goto LAB_1410eed8e;
        }
      }
    }
  }
  lVar4 = *(longlong *)(lVar6 + 0x1f0);
  if (lVar4 == 0) {
    uVar5 = FUN_140bd9786();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar6 + 0x1f0) = lVar4;
  }
  plVar1 = (longlong *)(lVar6 + 0x1e8);
  if (*(longlong *)(lVar6 + 0x1f8) != 0) {
LAB_1410eee41:
    if (lVar4 != 0) {
      return;
    }
    uVar5 = FUN_140bd9786();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar6 + 0x1f0) = lVar4;
    if (*(longlong *)(lVar6 + 0x1f8) != 0) {
      return;
    }
    if (lVar4 == 0) {
      return;
    }
    if (*plVar1 != 0) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar5 = FUN_144aff482(uVar5,plVar1);
      }
      *(undefined8 *)(lVar6 + 0x1f8) = uVar5;
      return;
    }
    return;
  }
  if ((lVar4 != 0) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(lVar6 + 0x1f8) = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar4 = FUN_144aff482(uVar5,plVar1);
      *(longlong *)(lVar6 + 0x1f8) = lVar4;
      if (lVar4 != 0) {
        lVar4 = *(longlong *)(lVar6 + 0x1f0);
        goto LAB_1410eee41;
      }
    }
  }
LAB_1410eeff8:
  FUN_140fabbbc(param_1,param_2);
  return;
}



// FUNCTION 1410ef012 FUN_1410ef012 body=92 status=ok
// SIG undefined FUN_1410ef012(void)

undefined8 FUN_1410ef012(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    if ((int)plVar3[2] != *(int *)(param_1 + 0x2c)) {
      return 0;
    }
    if ((*(uint *)(plVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = 0;
    }
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
  }
  return uVar2;
}



// FUNCTION 1410ef06e FUN_1410ef06e body=57 status=ok
// SIG undefined FUN_1410ef06e(void)

void FUN_1410ef06e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9d00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9d00 = FUN_140002ddd(FUN_1465d5df4,uVar1,L"OakDiscoveryViewableMapDef");
  }
  return;
}



// FUNCTION 1410ef0a8 FUN_1410ef0a8 body=88 status=ok
// SIG undefined FUN_1410ef0a8(void)

void FUN_1410ef0a8(longlong param_1)

{
  longlong lVar1;
  
  FUN_1410ef100(param_1 + 0xd98,&DAT_14cbd96b8);
  FUN_1410ef19c(param_1 + 0x3c28);
  lVar1 = FUN_140d27aa0(param_1);
  if (*(char *)(lVar1 + 0x41) == '\x01') {
    FUN_145a08c52(lVar1,0,0);
  }
  FUN_1410ef130(param_1 + 0xe50);
  return;
}



// FUNCTION 1410ef100 FUN_1410ef100 body=48 status=ok
// SIG undefined FUN_1410ef100(void)

void FUN_1410ef100(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_144a8c772();
    if (lVar1 != 0) {
      FUN_143eb1cae(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1410ef130 FUN_1410ef130 body=106 status=ok
// SIG undefined FUN_1410ef130(void)

void FUN_1410ef130(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x10))();
  if (plVar1 != (longlong *)0x0) {
    local_19 = 0;
    uVar2 = FUN_14477b072(plVar1,DAT_14cbc02b8);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ef19c FUN_1410ef19c body=130 status=ok
// SIG undefined FUN_1410ef19c(void)

void FUN_1410ef19c(undefined8 param_1)

{
  PSRWLOCK pRVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_140161f86();
  lVar3 = *plVar4;
  pRVar1 = (PSRWLOCK)(lVar3 + 0xa0);
  AcquireSRWLockShared(pRVar1);
  cVar2 = *(char *)(lVar3 + 0x28);
  ReleaseSRWLockShared(pRVar1);
  if (cVar2 == '\x01') {
    FUN_1416073b4(param_1);
  }
  plVar4 = (longlong *)FUN_140161f86(param_1);
  lVar3 = *plVar4;
  pRVar1 = (PSRWLOCK)(lVar3 + 0xa0);
  AcquireSRWLockShared(pRVar1);
  cVar2 = *(char *)(lVar3 + 0x18);
  ReleaseSRWLockShared(pRVar1);
  if (cVar2 != '\x01') {
    return;
  }
  FUN_145811d76(param_1,0);
  return;
}



// FUNCTION 1410ef21e FUN_1410ef21e body=159 status=ok
// SIG undefined FUN_1410ef21e(void)

void FUN_1410ef21e(longlong param_1,uint param_2,longlong param_3)

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
    FUN_1410ef2be((longlong *)(param_3 + 8),iVar3);
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



// FUNCTION 1410ef2be FUN_1410ef2be body=269 status=ok
// SIG undefined FUN_1410ef2be(void)

void FUN_1410ef2be(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1410ef3cc FUN_1410ef3cc body=171 status=ok
// SIG undefined FUN_1410ef3cc(void)

void FUN_1410ef3cc(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x20);
  iVar6 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar6 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar6 + 1U) {
    FUN_1410ef478((longlong *)(param_3 + 8),iVar6);
  }
  lVar2 = *(longlong *)(param_3 + 8);
  uVar3 = *puVar9;
  uVar4 = puVar9[1];
  uVar5 = puVar9[3];
  puVar1 = (undefined8 *)(lVar2 + 0x10 + (longlong)iVar6 * 0x20);
  *puVar1 = puVar9[2];
  puVar1[1] = uVar5;
  puVar9 = (undefined8 *)(lVar2 + (longlong)iVar6 * 0x20);
  *puVar9 = uVar3;
  puVar9[1] = uVar4;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar8 = ~param_2 + iVar6;
  if (iVar8 != 0) {
    iVar7 = 1;
    if (iVar8 < 1) {
      iVar7 = iVar8;
    }
    memmove((void *)((longlong)(int)param_2 * 0x20 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar6 - iVar7) * 0x20 + *(longlong *)(param_1 + 8)),
            (longlong)iVar7 << 5);
    iVar6 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar6 + -1;
  return;
}



// FUNCTION 1410ef478 FUN_1410ef478 body=254 status=ok
// SIG undefined FUN_1410ef478(void)

void FUN_1410ef478(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1410ef578 FUN_1410ef578 body=2815 status=ok
// SIG undefined FUN_1410ef578(void)

void FUN_1410ef578(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  char local_1b1;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined8 *local_1a0;
  longlong local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  longlong *local_180;
  ulonglong local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_1410f06be(param_2,&local_e8);
  local_f8 = 0;
  uStack_f0 = 0;
  if ((int)uStack_e0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_e0 & 0xffffffff);
  }
  if ((uStack_e0 & 0xffffffff) != 0) {
    FUN_1410f02c6(&local_f8);
  }
  local_108 = 0;
  uStack_100 = 0;
  local_1a0 = param_2;
  if ((*(longlong *)(param_3 + 0x428) == 0) &&
     ((*(longlong *)(param_3 + 0x3b8) == 0 ||
      (*(longlong *)(*(longlong *)(param_3 + 0x3b8) + 0x18) == 0)))) {
    local_1a8 = 0;
    local_1c0 = (longlong *)0x0;
  }
  else {
    local_118 = *(undefined8 *)(param_3 + 0x1e4);
    uStack_110 = *(undefined8 *)(param_3 + 0x1ec);
    local_1d0 = &local_118;
    local_1d8 = *(undefined8 *)(param_3 + 0x1dc);
    local_128 = *(undefined4 *)(param_3 + 0x1d8);
    local_138 = *(undefined4 *)(param_3 + 0x1c8);
    uStack_134 = *(undefined4 *)(param_3 + 0x1cc);
    uStack_130 = *(undefined4 *)(param_3 + 0x1d0);
    uStack_12c = *(undefined4 *)(param_3 + 0x1d4);
    FUN_146a4e9c0(&local_c8,param_3 + 0x380,param_3 + 0x168);
    plVar11 = plStack_c0;
    local_1a8 = local_c8;
    local_1c0 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_c0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_3 + 0x378) == 0) &&
     ((*(longlong *)(param_3 + 0x308) == 0 ||
      (*(longlong *)(*(longlong *)(param_3 + 0x308) + 0x18) == 0)))) {
    local_1b0 = 0;
    local_1c8 = (longlong *)0x0;
  }
  else {
    local_148 = *(undefined8 *)(param_3 + 0x1e4);
    uStack_140 = *(undefined8 *)(param_3 + 0x1ec);
    local_1d0 = &local_148;
    local_1d8 = *(undefined8 *)(param_3 + 0x1dc);
    local_158 = *(undefined4 *)(param_3 + 0x1d8);
    local_168 = *(undefined4 *)(param_3 + 0x1c8);
    uStack_164 = *(undefined4 *)(param_3 + 0x1cc);
    uStack_160 = *(undefined4 *)(param_3 + 0x1d0);
    uStack_15c = *(undefined4 *)(param_3 + 0x1d4);
    FUN_146a4eb82(&local_c8,param_3 + 0x2d0,param_3 + 0x168);
    plVar11 = plStack_c0;
    local_1b0 = local_c8;
    local_1c8 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_c0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
  }
  puVar16 = local_1a0;
  local_c8 = local_c8 & 0xffffffffffffff00;
  pcVar8 = (char *)FUN_1410f0184(param_1 + 0x10);
  if (0 < (int)uStack_e0) {
    local_198 = param_3 + 0x160;
    local_1b1 = *pcVar8;
    lVar18 = 0;
    do {
      lVar15 = local_e8;
      puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      uVar7 = *(uint *)(lVar15 + lVar18 * 8);
      uVar13 = *(int *)(lVar15 + 4 + lVar18 * 8) - uVar7;
      if ((int)uVar13 < 0) {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      else {
        iVar4 = *(int *)(puVar16 + 1);
        uVar5 = iVar4 - 1;
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        uVar6 = uVar5;
        if ((int)uVar7 < (int)uVar5) {
          uVar6 = uVar7;
        }
        if ((int)uVar6 < 1) {
          uVar6 = 0;
        }
        uVar10 = (ulonglong)uVar6;
        uVar17 = (ulonglong)uVar13 + (longlong)(int)uVar7;
        if ((longlong)(int)uVar5 <= (longlong)uVar17) {
          uVar17 = (longlong)(int)uVar5;
        }
        if ((longlong)uVar17 < (longlong)uVar10) {
          uVar17 = uVar10;
        }
        puVar12 = &DAT_149dfb77a;
        if (iVar4 != 0) {
          puVar12 = (undefined2 *)*puVar16;
        }
        FUN_14006620a(puVar9,puVar12 + uVar10,(int)uVar17 - uVar6);
      }
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_149f0ebe0;
      plVar11[2] = (longlong)puVar9;
      local_178 = 0;
      uStack_170 = (longlong *)0x0;
      local_188 = puVar9;
      local_180 = plVar11;
      if (local_1b1 == '\0') {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_98 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        uStack_90 = 0x8000000000;
        local_88 = 0xffffffff;
        FUN_1410f039c(&local_d8,&local_c8,&local_188,local_198);
        plVar2 = local_d0;
        puVar16 = local_d8;
        uVar17 = (ulonglong)uStack_170;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        lVar14 = (longlong)(int)uStack_170;
        uVar7 = (int)uStack_170 + 1;
        uStack_170 = (longlong *)CONCAT44(uStack_170._4_4_,uVar7);
        if (uStack_170._4_4_ < uVar7) {
          FUN_1410f05b0(&local_178,uVar17 & 0xffffffff);
        }
        *(undefined8 **)(local_178 + lVar14 * 0x10) = puVar16;
        *(longlong **)(local_178 + 8 + lVar14 * 0x10) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        plVar2 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_1407a3a68(&local_b8);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_98 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        uStack_90 = 0x8000000000;
        local_88 = 0xffffffff;
        FUN_146a4c344(&local_d8,&local_c8,&local_188,local_198);
        plVar2 = local_d0;
        uVar17 = (ulonglong)uStack_170;
        local_190 = local_d8;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        lVar14 = (longlong)(int)uStack_170;
        uVar7 = (int)uStack_170 + 1;
        uStack_170 = (longlong *)CONCAT44(uStack_170._4_4_,uVar7);
        if (uStack_170._4_4_ < uVar7) {
          FUN_1410f05b0(&local_178,uVar17 & 0xffffffff);
        }
        *(undefined8 **)(local_178 + lVar14 * 0x10) = local_190;
        *(longlong **)(local_178 + 8 + lVar14 * 0x10) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        plVar2 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        FUN_141720dbc(&local_c8);
      }
      plVar2 = local_180;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_180 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      uVar17 = uStack_100;
      if (local_1a8 != 0) {
        if (local_1c0 == (longlong *)0x0) {
          uVar7 = *(int *)(lVar15 + 4 + lVar18 * 8) - *(int *)(lVar15 + lVar18 * 8);
        }
        else {
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
          uVar7 = *(int *)(lVar15 + 4 + lVar18 * 8) - *(int *)(lVar15 + lVar18 * 8);
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
        }
        lVar14 = (longlong)(int)uStack_100;
        uVar13 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar13);
        if (uStack_100._4_4_ < uVar13) {
          FUN_146a496be(&local_108,uVar17 & 0xffffffff);
        }
        plVar2 = local_1c0;
        lVar14 = lVar14 * 0x20;
        *(int *)(local_108 + lVar14) = (int)lVar18;
        *(ulonglong *)(local_108 + 4 + lVar14) = (ulonglong)uVar7 << 0x20;
        *(undefined4 *)(local_108 + 0xc + lVar14) = 1;
        *(ulonglong *)(local_108 + 0x10 + lVar14) = local_1a8;
        *(longlong **)(local_108 + 0x18 + lVar14) = local_1c0;
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = local_1c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1c0)(local_1c0);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_1c0 + 0x10))();
            }
          }
          plVar1 = local_1c0;
          LOCK();
          plVar2 = local_1c0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_1c0)(local_1c0);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_1c0 + 0x10))();
            }
          }
          plVar1 = local_1c0;
          LOCK();
          plVar2 = local_1c0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_1c0)(local_1c0);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_1c0 + 0x10))();
            }
          }
        }
      }
      uVar17 = uStack_100;
      if (local_1b0 != 0) {
        if (local_1c8 == (longlong *)0x0) {
          uVar7 = *(int *)(lVar15 + 4 + lVar18 * 8) - *(int *)(lVar15 + lVar18 * 8);
        }
        else {
          LOCK();
          *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
          UNLOCK();
          uVar7 = *(int *)(lVar15 + 4 + lVar18 * 8) - *(int *)(lVar15 + lVar18 * 8);
          LOCK();
          *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
          UNLOCK();
        }
        lVar15 = (longlong)(int)uStack_100;
        uVar13 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar13);
        if (uStack_100._4_4_ < uVar13) {
          FUN_146a496be(&local_108,uVar17 & 0xffffffff);
        }
        plVar2 = local_1c8;
        lVar15 = lVar15 * 0x20;
        *(int *)(local_108 + lVar15) = (int)lVar18;
        *(ulonglong *)(local_108 + 4 + lVar15) = (ulonglong)uVar7 << 0x20;
        *(undefined4 *)(local_108 + 0xc + lVar15) = 1;
        *(ulonglong *)(local_108 + 0x10 + lVar15) = local_1b0;
        *(longlong **)(local_108 + 0x18 + lVar15) = local_1c8;
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = local_1c8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_1c8 + 0x10))();
            }
          }
          plVar1 = local_1c8;
          LOCK();
          plVar2 = local_1c8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_1c8 + 0x10))();
            }
          }
          plVar1 = local_1c8;
          LOCK();
          plVar2 = local_1c8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_1c8 + 0x10))();
            }
          }
        }
      }
      uVar17 = uStack_f0;
      lVar15 = (longlong)(int)uStack_f0;
      uVar7 = (int)uStack_f0 + 1;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
      if (uStack_f0._4_4_ < uVar7) {
        FUN_146a49744(&local_f8,uVar17 & 0xffffffff);
      }
      local_c8 = local_178;
      plStack_c0 = uStack_170;
      local_178 = 0;
      uStack_170 = (longlong *)0x0;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_d8 = puVar9;
      local_d0 = plVar11;
      FUN_1410f0234(local_f8 + lVar15 * 0x20,&local_d8,&local_c8);
      FUN_1410f0078(local_178,(ulonglong)uStack_170 & 0xffffffff);
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      lVar18 = lVar18 + 1;
      puVar16 = local_1a0;
    } while (lVar18 < (int)uStack_e0);
  }
  FUN_1410f07dc(param_3,&local_f8);
  FUN_1410f00c6(param_3,&local_108);
  plVar11 = local_1c8;
  if (local_1c8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1c8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1c8)(local_1c8);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = local_1c0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_1410f0dc1(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1410f01cf(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f0078 FUN_1410f0078 body=77 status=ok
// SIG undefined FUN_1410f0078(void)

void FUN_1410f0078(longlong param_1,int param_2)

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



// FUNCTION 1410f00c6 FUN_1410f00c6 body=73 status=ok
// SIG undefined FUN_1410f00c6(void)

void FUN_1410f00c6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1410f0110();
  if (0 < (int)param_2[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_146a504f8(param_1,*param_2 + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1410f0110 FUN_1410f0110 body=115 status=ok
// SIG undefined FUN_1410f0110(void)

void FUN_1410f0110(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (0 < iVar2) {
    lVar3 = 0x58;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar1 + 8 + lVar3) != 0) {
        FUN_1410f0dc1(*(undefined8 *)(lVar1 + lVar3));
        *(undefined4 *)(lVar1 + 8 + lVar3) = 0;
        if (*(int *)(lVar1 + 0xc + lVar3) != 0) {
          FUN_146a7559c(lVar1 + lVar3,0);
        }
        *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | 2;
        iVar2 = *(int *)(param_1 + 0x28);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x70;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 1410f0184 FUN_1410f0184 body=75 status=ok
// SIG undefined FUN_1410f0184(void)

undefined1 * FUN_1410f0184(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((((param_1[1] == '\x01') && (param_2 = param_1, *(int *)(param_1 + 0x10) != 0)) &&
      (*(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x10) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 8);
    }
    uVar2 = (**(code **)(*plVar3 + 0x58))();
    *param_1 = uVar2;
  }
  return param_2;
}



// FUNCTION 1410f01cf FUN_1410f01cf body=101 status=ok
// SIG undefined FUN_1410f01cf(void)

void FUN_1410f01cf(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x18);
    do {
      FUN_1410f0078(*(undefined8 *)(puVar4 + -2),*puVar4);
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -4);
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
      puVar4 = puVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410f0234 FUN_1410f0234 body=145 status=ok
// SIG undefined FUN_1410f0234(void)

undefined8 * FUN_1410f0234(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(int *)(param_1 + 3) = (int)param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  plVar4 = (longlong *)param_2[1];
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
  FUN_1410f0078(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1410f02c6 FUN_1410f02c6 body=214 status=ok
// SIG undefined FUN_1410f02c6(void)

void FUN_1410f02c6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1410f039c FUN_1410f039c body=263 status=ok
// SIG undefined FUN_1410f039c(void)

longlong * FUN_1410f039c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x380,0x10);
  FUN_1410f04a4(lVar2,param_2,param_3,param_4);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f11730;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_1410f043d;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_1410f043d;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_1410f043d:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 1410f04a4 FUN_1410f04a4 body=268 status=ok
// SIG undefined FUN_1410f04a4(void)

undefined8 *
FUN_1410f04a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f0f340;
  param_1[3] = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar2,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar2 * 2);
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_14058acb2(param_1 + 5,param_2 + 2);
  param_1[0xf] = *param_3;
  lVar1 = param_3[1];
  param_1[0x10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_140e9ea3a(param_1 + 0x12,param_4);
  iVar2 = *(int *)(param_1[0xf] + 8) + -1;
  if (*(int *)(param_1[0xf] + 8) == 0) {
    iVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(int *)((longlong)param_1 + 0x374) = iVar2;
  return param_1;
}



// FUNCTION 1410f05b0 FUN_1410f05b0 body=269 status=ok
// SIG undefined FUN_1410f05b0(void)

void FUN_1410f05b0(longlong param_1,int param_2)

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



// FUNCTION 1410f06be FUN_1410f06be body=285 status=ok
// SIG undefined FUN_1410f06be(void)

void FUN_1410f06be(undefined8 *param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ushort *puVar8;
  
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (ushort *)*param_1;
  }
  iVar6 = 0;
  if (puVar8 != (ushort *)0x0) {
    uVar7 = 0;
    puVar4 = puVar8;
    do {
      iVar6 = (int)uVar7;
      uVar1 = *puVar4;
      if (uVar1 == 0) break;
      if (uVar1 == 0xd) {
        uVar5 = (ulonglong)((uint)(puVar4[1] == 10) * 2);
LAB_1410f0726:
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14086518c(param_2,iVar2);
        }
        *(ulonglong *)(*param_2 + (longlong)iVar2 * 8) =
             uVar7 | ((longlong)puVar4 - (longlong)puVar8) * 0x80000000;
        puVar4 = (ushort *)((longlong)puVar4 + uVar5);
        uVar7 = (ulonglong)((int)((ulonglong)((longlong)puVar4 - (longlong)puVar8) >> 1) + 1);
      }
      else {
        if ((uVar1 - 10 < 4) || (uVar1 - 0x2028 < 2)) {
          uVar5 = 0;
          goto LAB_1410f0726;
        }
        uVar5 = 0;
        if (uVar1 == 0x85) goto LAB_1410f0726;
      }
      iVar6 = (int)uVar7;
      puVar4 = puVar4 + 1;
    } while (puVar4 != (ushort *)0x0);
    iVar2 = *(int *)(param_1 + 1);
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (iVar6 <= iVar3) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_14086518c(param_2,iVar2);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar2 * 8) = CONCAT44(iVar3,iVar6);
  }
  return;
}



// FUNCTION 1410f07dc FUN_1410f07dc body=1299 status=ok
// SIG undefined FUN_1410f07dc(void)

void FUN_1410f07dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_e0;
  uint local_d8;
  uint local_d4;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar9 = (int)param_2[1];
  if (iVar9 < 0) {
LAB_1410f0a06:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x2c) < iVar9) {
    FUN_1410f106e(plVar1);
    iVar9 = (int)param_2[1];
  }
  local_140 = param_1;
  if (iVar9 != 0) {
    lVar16 = *param_2;
    lVar18 = (longlong)iVar9 * 0x20 + lVar16;
    local_138 = param_2;
    do {
      FUN_1410f1238(&local_108,lVar16);
      FUN_1410f0fa4(param_1,&local_108);
      iVar9 = *(int *)(lVar16 + 0x18);
      if (iVar9 < 0) goto LAB_1410f0a06;
      if ((int)local_d4 < iVar9) {
        FUN_1410f1152(&local_e0);
        iVar9 = *(int *)(lVar16 + 0x18);
      }
      if (iVar9 != 0) {
        puVar14 = *(undefined8 **)(lVar16 + 0x10);
        puVar15 = puVar14 + (longlong)iVar9 * 2;
        do {
          uVar8 = local_d8;
          uVar4 = *puVar14;
          plVar5 = (longlong *)puVar14[1];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          lVar13 = (longlong)(int)local_d8;
          local_d8 = local_d8 + 1;
          if (local_d4 < local_d8) {
            FUN_146a756d8(&local_e0,uVar8);
          }
          lVar13 = lVar13 * 0x30;
          lVar17 = local_e0 + lVar13;
          *(undefined8 *)(local_e0 + lVar13) = uVar4;
          *(longlong **)(local_e0 + 8 + lVar13) = plVar5;
          if (plVar5 == (longlong *)0x0) {
            *(undefined8 *)(lVar17 + 0x20) = 0;
            *(undefined8 *)(lVar17 + 0x28) = 0;
            *(undefined8 *)(lVar17 + 0x10) = 0;
            *(undefined8 *)(lVar17 + 0x18) = 0;
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            *(undefined8 *)(lVar17 + 0x20) = 0;
            *(undefined8 *)(lVar17 + 0x28) = 0;
            *(undefined8 *)(lVar17 + 0x10) = 0;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          puVar14 = puVar14 + 2;
        } while (puVar14 != puVar15);
      }
      param_1 = local_140;
      iVar9 = *(int *)(local_140 + 0x28);
      *(uint *)(local_140 + 0x28) = iVar9 + 1U;
      if (*(uint *)(local_140 + 0x2c) < iVar9 + 1U) {
        FUN_146a758c0(plVar1,iVar9);
      }
      FUN_1410f136e((longlong)iVar9 * 0x70 + *plVar1,&local_108);
      FUN_1410f0cf0(&local_108);
      lVar16 = lVar16 + 0x20;
      param_2 = local_138;
    } while (lVar16 != lVar18);
  }
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    iVar9 = *(int *)(param_1 + 0x28);
    iVar10 = iVar9 - (int)param_2[1];
    local_138 = (longlong *)CONCAT44(local_138._4_4_,iVar10);
    local_130 = plVar1;
    if (0 < (int)param_2[1]) {
      lVar16 = (longlong)iVar10;
      do {
        lVar18 = (longlong)*(int *)(*local_130 + 0x30 + lVar16 * 0x70);
        if (lVar18 != 0) {
          lVar13 = *(longlong *)(*local_130 + 0x28 + lVar16 * 0x70);
          lVar17 = 0;
          do {
            (**(code **)(**(longlong **)(lVar13 + lVar17) + 0x50))();
            lVar17 = lVar17 + 0x30;
          } while (lVar18 * 0x30 != lVar17);
          iVar9 = *(int *)(local_140 + 0x28);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar9);
    }
    if ((int)local_138 < iVar9) {
      uVar12 = (ulonglong)(int)local_138;
      do {
        lVar18 = *(longlong *)(local_140 + 0x20);
        lVar16 = lVar18 + uVar12 * 0x70;
        FUN_1408625f2(local_140,lVar16);
        if ((*(byte *)(lVar18 + 0x68 + uVar12 * 0x70) & 4) != 0) {
          FUN_1408625c2(*(undefined8 *)(lVar16 + 0x10));
          *(byte *)(lVar16 + 0x68) = *(byte *)(lVar16 + 0x68) & 0xfb;
        }
        lVar18 = local_140;
        FUN_140862a18(local_140,lVar16);
        iVar9 = *(int *)(lVar18 + 0x38);
        local_108 = 0;
        uStack_100 = 0;
        fVar19 = (*(float *)(lVar18 + 0x98) -
                 (*(float *)(lVar18 + 0xa0) + *(float *)(lVar18 + 0xa8))) *
                 *(float *)(lVar18 + 0x94);
        fVar20 = 0.01;
        if (0.01 <= fVar19) {
          fVar20 = fVar19;
        }
        FUN_140865462(lVar18,uVar12 & 0xffffffff,fVar20,&local_108);
        lVar16 = local_108;
        dVar6 = (double)*(float *)(lVar18 + 0xa4) * (double)*(float *)(lVar18 + 0x94);
        dVar7 = (double)*(float *)(lVar18 + 0xa0) * (double)*(float *)(lVar18 + 0x94);
        lVar13 = (longlong)iVar9 + 1;
        iVar9 = *(int *)(lVar18 + 0x38);
        if ((int)lVar13 < iVar9) {
          lVar18 = lVar13 * 0x68 + 0x30;
          do {
            lVar17 = *(longlong *)(local_140 + 0x30);
            if (*(int *)(lVar17 + 0x34 + lVar18) == (int)uVar12) {
              *(double *)(lVar17 + lVar18) = *(double *)(lVar17 + lVar18) + dVar7;
              *(double *)(lVar17 + 8 + lVar18) = *(double *)(lVar17 + 8 + lVar18) + dVar6;
              iVar9 = *(int *)(local_140 + 0x38);
            }
            lVar13 = lVar13 + 1;
            lVar18 = lVar18 + 0x68;
          } while (lVar13 < iVar9);
        }
        lVar18 = (longlong)(int)uStack_100;
        if (lVar18 == 0) {
          uVar11 = 0;
        }
        else {
          lVar13 = 0;
          do {
            plVar1 = *(longlong **)(lVar16 + lVar13);
            (**(code **)(*plVar1 + 0x38))(plVar1,&local_128);
            local_110 = local_120 + dVar6;
            local_118 = local_128 + dVar7;
            (**(code **)(*plVar1 + 0x30))(plVar1,&local_118);
            lVar13 = lVar13 + 0x10;
          } while (lVar18 * 0x10 != lVar13);
          uVar11 = uStack_100 & 0xffffffff;
        }
        FUN_1408680ad(local_108,uVar11);
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)*(int *)(local_140 + 0x28));
    }
    lVar16 = local_140;
    FUN_1428fea26(local_140);
    iVar9 = *(int *)(lVar16 + 0x28);
    if ((int)local_138 < iVar9) {
      lVar16 = (longlong)(int)local_138;
      do {
        lVar18 = (longlong)*(int *)(*local_130 + 0x30 + lVar16 * 0x70);
        if (lVar18 != 0) {
          lVar13 = *(longlong *)(*local_130 + 0x28 + lVar16 * 0x70);
          lVar17 = 0;
          do {
            (**(code **)(**(longlong **)(lVar13 + lVar17) + 0x58))();
            lVar17 = lVar17 + 0x30;
          } while (lVar18 * 0x30 != lVar17);
          iVar9 = *(int *)(local_140 + 0x28);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar9);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f0cf0 FUN_1410f0cf0 body=209 status=ok
// SIG undefined FUN_1410f0cf0(void)

void FUN_1410f0cf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1410f0dc1(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1410f0e0e(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1410f0e5b(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001410f0da9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410f0dc1 FUN_1410f0dc1 body=77 status=ok
// SIG undefined FUN_1410f0dc1(void)

void FUN_1410f0dc1(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410f0e0e FUN_1410f0e0e body=77 status=ok
// SIG undefined FUN_1410f0e0e(void)

void FUN_1410f0e0e(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410f0e5b FUN_1410f0e5b body=107 status=ok
// SIG undefined FUN_1410f0e5b(void)

void FUN_1410f0e5b(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      if (plVar4[-2] != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-3];
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



// FUNCTION 1410f0ec6 FUN_1410f0ec6 body=24 status=ok
// SIG undefined FUN_1410f0ec6(void)

void FUN_1410f0ec6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001410f0eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1410f0ede FUN_1410f0ede body=38 status=ok
// SIG undefined FUN_1410f0ede(void)

undefined8 FUN_1410f0ede(undefined8 param_1,int param_2)

{
  FUN_1410f0f04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410f0f04 FUN_1410f0f04 body=160 status=ok
// SIG undefined FUN_1410f0f04(void)

void FUN_1410f0f04(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f0f340;
  FUN_140e9e952(param_1 + 0x12);
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
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 5);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001410f0fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1410f0fa4 FUN_1410f0fa4 body=200 status=ok
// SIG undefined FUN_1410f0fa4(void)

void FUN_1410f0fa4(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x9d) == '\x02') {
    FUN_1467c9848(&local_28);
  }
  else {
    if (*(char *)(param_1 + 0x9d) != '\x01') goto LAB_1410f0fcd;
    FUN_1467c97c0(&local_28);
  }
  param_2 = (longlong *)*param_2;
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  iVar2 = local_20 + -1;
  if (local_20 == 0) {
    iVar2 = 0;
  }
  if ((param_2 == &local_28) || (iVar1 != iVar2)) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(int *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
LAB_1410f0fcd:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f106e FUN_1410f106e body=227 status=ok
// SIG undefined FUN_1410f106e(void)

void FUN_1410f106e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x70,8);
  }
  return;
}



// FUNCTION 1410f1152 FUN_1410f1152 body=230 status=ok
// SIG undefined FUN_1410f1152(void)

void FUN_1410f1152(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x2ab) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1410f1238 FUN_1410f1238 body=309 status=ok
// SIG undefined FUN_1410f1238(void)

undefined8 * FUN_1410f1238(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar4 = *(undefined8 **)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar5 = puVar4[2];
    plVar6 = (longlong *)puVar4[3];
  }
  else {
    uVar5 = *puVar4;
    plVar6 = (longlong *)puVar4[1];
  }
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x70);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_149f11230;
  puVar4[2] = uVar5;
  puVar4[3] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
  }
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x54) = 0;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0xd) = 0;
  param_1[2] = puVar4 + 2;
  param_1[3] = puVar4;
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
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 7;
  return param_1;
}



// FUNCTION 1410f136e FUN_1410f136e body=359 status=ok
// SIG undefined FUN_1410f136e(void)

undefined8 * FUN_1410f136e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar3 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1410f15ac(param_1 + 5,iVar1,0);
    FUN_1410f14d5(param_1[5],uVar3,iVar1);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  _Src = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_146a7486a(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 0x30);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  uVar3 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_146a748de(param_1 + 9,iVar1,0);
    FUN_146a74940(param_1[9],uVar3,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  uVar3 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_146a74982(param_1 + 0xb,iVar1,0);
    FUN_146a749e4(param_1[0xb],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 1410f14d5 FUN_1410f14d5 body=214 status=ok
// SIG undefined FUN_1410f14d5(void)

void FUN_1410f14d5(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar4[-4] = *param_2;
      lVar2 = param_2[1];
      puVar4[-3] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar4[-2] = 0;
      iVar1 = *(int *)(param_2 + 3);
      pvVar3 = (void *)param_2[2];
      *(int *)(puVar4 + -1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + -4) = 0;
      }
      else {
        FUN_146a74810(puVar4 + -2,iVar1);
        memcpy((void *)puVar4[-2],pvVar3,(longlong)iVar1 << 3);
      }
      *puVar4 = 0;
      iVar1 = *(int *)(param_2 + 5);
      pvVar3 = (void *)param_2[4];
      *(int *)(puVar4 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        FUN_144721d4c(puVar4,iVar1,0);
        memcpy((void *)*puVar4,pvVar3,(longlong)iVar1 << 4);
      }
      param_2 = param_2 + 6;
      puVar4 = puVar4 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1410f15ac FUN_1410f15ac body=233 status=ok
// SIG undefined FUN_1410f15ac(void)

void FUN_1410f15ac(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1410f1696 FUN_1410f1696 body=683 status=ok
// SIG undefined FUN_1410f1696(void)

void FUN_1410f1696(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  puVar2 = (uint *)(param_1 + 0x30);
  iVar6 = *(int *)(param_1 + 0x48);
  if (iVar6 == 0) {
    uVar18 = 0;
    uVar16 = 1;
    iVar8 = 0;
    iVar14 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar17 = *puVar12;
    if (uVar17 == 0) {
      iVar8 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar8 = iVar6 + -1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar16 == uVar18) goto LAB_1410f18a8;
        iVar14 = iVar14 + 0x20;
        uVar17 = puVar12[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar5 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar8 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar8) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 < iVar6) {
    uVar17 = 0xffffffff;
    do {
      lVar15 = *plVar1;
      plVar7 = *(longlong **)(lVar15 + 0x78 + (longlong)iVar8 * 0x88);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar4 = (int *)((longlong)plVar7 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = *(longlong **)(lVar15 + (longlong)iVar8 * 0x88 + 0x48);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar4 = (int *)((longlong)plVar7 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar12 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      iVar6 = *(int *)(param_1 + 0x48);
      iVar8 = (int)uVar18;
      lVar15 = (longlong)iVar8;
      uVar9 = puVar12[lVar15] & uVar17;
      if (uVar9 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        lVar13 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar9 = puVar12[lVar15 + lVar13 + 1];
          if (uVar9 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar11 - lVar15 == lVar13) goto LAB_1410f18a8;
        }
        uVar18 = (ulonglong)(iVar8 + (int)lVar13 + 1);
        uVar17 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar9 & uVar9);
      uVar5 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar8 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar6);
  }
LAB_1410f18a8:
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_144a544ac(plVar1,0);
  }
  *(undefined8 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (0x80 < *(uint *)(param_1 + 0x4c)) {
    *(undefined4 *)(param_1 + 0x4c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar4 = (int *)((longlong)plVar1 + 0xc);
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001410f193d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1410f1942 FUN_1410f1942 body=45 status=ok
// SIG undefined FUN_1410f1942(void)

void FUN_1410f1942(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_1410f1970(param_1 + 0x90);
  FUN_1410f1970(param_1 + 0x40);
  return;
}



// FUNCTION 1410f1970 FUN_1410f1970 body=70 status=ok
// SIG undefined FUN_1410f1970(void)

void FUN_1410f1970(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1458040c0();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405b3ec2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1410f19b6 FUN_1410f19b6 body=1086 status=ok
// SIG undefined FUN_1410f19b6(void)

void FUN_1410f19b6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  uint *local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [7];
  char local_99;
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar6 = (**(code **)(*param_1 + 0x300))();
  if (cVar6 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_c0 = 0x100000000;
    local_b0 = 0xffffffff;
    local_a8 = 0;
    iVar13 = 0;
    local_b8 = plVar2;
    if ((int)param_1[0x54] != 0) {
      FUN_1449c0562(&local_c0);
      iVar13 = (int)param_1[0x54];
    }
    uStack_90 = local_c0;
    local_88 = local_b8;
    local_80 = local_b0;
    uVar5 = local_80;
    local_78 = CONCAT44(local_a4,local_a8);
    local_80._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
    iVar7 = local_80._4_4_;
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar13) || (local_80 = local_b0, local_b8 != plVar2)) {
      do {
        local_80 = uVar5;
        lVar14 = *local_98;
        lVar15 = *(longlong *)(lVar14 + 0x10 + (longlong)iVar7 * 0x20);
        if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x30) != 0)) {
          (**(code **)(*param_1 + 0x430))(param_1);
          *(undefined8 *)(*(longlong *)(lVar14 + (longlong)iVar7 * 0x20 + 0x10) + 0x30) = 0;
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar7 = local_80._4_4_;
        uVar5 = local_80;
      } while (((local_80._4_4_ != iVar13) || (local_88 != plVar2)) || (local_98 != plVar1));
    }
  }
  else {
    local_d0 = param_1 + 0x39;
    uVar12 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_99 = '\0';
    local_c8 = (uint *)(param_1 + 0x3b);
    iVar13 = (int)param_1[0x3e];
    if (iVar13 == 0) {
      uVar19 = 1;
      iVar7 = 0;
      iVar17 = 0;
    }
    else {
      puVar8 = (uint *)param_1[0x3d];
      if ((uint *)param_1[0x3d] == (uint *)0x0) {
        puVar8 = local_c8;
      }
      uVar16 = *puVar8;
      if (uVar16 == 0) {
        iVar7 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar7 = iVar13 + -1;
        }
        uVar12 = 0;
        uVar19 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar19 = uVar12;
        }
        iVar17 = 0;
        do {
          if (uVar19 == uVar12) goto LAB_1410f1bcd;
          iVar17 = iVar17 + 0x20;
          uVar16 = puVar8[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar12 = 0;
        iVar17 = 0;
      }
      uVar19 = (ulonglong)(-uVar16 & uVar16);
      uVar3 = uVar19 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar7) {
        iVar7 = iVar13;
      }
    }
    if (iVar7 != iVar13) {
      uVar16 = 0xffffffff;
      do {
        lVar14 = *local_d0;
        lVar15 = *(longlong *)(lVar14 + 0x10 + (longlong)iVar7 * 0x20);
        if ((lVar15 != 0) &&
           (local_c0 = lVar15, FUN_14042e430(&local_98,local_a0,&local_c0,&local_99),
           local_99 == '\0')) {
          (**(code **)(*param_1 + 0x430))
                    (param_1,*(undefined8 *)(lVar14 + (longlong)iVar7 * 0x20 + 0x10));
        }
        uVar16 = uVar16 & ~(uint)uVar19;
        puVar8 = (uint *)param_1[0x3d];
        if ((uint *)param_1[0x3d] == (uint *)0x0) {
          puVar8 = local_c8;
        }
        iVar4 = (int)param_1[0x3e];
        iVar7 = (int)uVar12;
        lVar14 = (longlong)iVar7;
        uVar11 = puVar8[lVar14] & uVar16;
        if (uVar11 == 0) {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar7 < iVar9) {
            lVar15 = 0;
            do {
              uVar11 = puVar8[lVar14 + lVar15 + 1];
              if (uVar11 != 0) {
                uVar12 = (ulonglong)(iVar7 + (int)lVar15 + 1);
                uVar16 = 0xffffffff;
                goto LAB_1410f1b9e;
              }
              iVar17 = iVar17 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar10 - lVar14 != lVar15);
            uVar16 = 0xffffffff;
            iVar7 = iVar10;
          }
          uVar12 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar4;
        }
        else {
LAB_1410f1b9e:
          uVar19 = (ulonglong)(-uVar11 & uVar11);
          uVar3 = uVar19 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar7) {
            iVar7 = iVar4;
          }
        }
      } while (iVar7 != iVar13);
    }
LAB_1410f1bcd:
    FUN_1410f1df6(local_d0,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
  }
  lVar14 = param_1[0x6f];
  if ((longlong)(int)lVar14 != 0) {
    lVar15 = param_1[0x6e];
    lVar18 = 0;
    do {
      (**(code **)(*param_1 + 0x430))(param_1,*(undefined8 *)(lVar15 + lVar18));
      lVar18 = lVar18 + 8;
    } while ((longlong)(int)lVar14 * 8 != lVar18);
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (*(int *)((longlong)param_1 + 0x37c) != 0) {
    FUN_1470a4d4a(param_1 + 0x6e,0);
  }
  FUN_1410f1faa(param_1 + 100);
  FUN_140fa7ee4(param_1);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f1df6 FUN_1410f1df6 body=107 status=ok
// SIG undefined FUN_1410f1df6(void)

void FUN_1410f1df6(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1410f1e45:
      FUN_1406d06fc(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140403894(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1410f1e45;
  FUN_1410f1e62(param_1);
  FUN_1406d06fc(param_1,param_2);
  return;
}



// FUNCTION 1410f1e62 FUN_1410f1e62 body=327 status=ok
// SIG undefined FUN_1410f1e62(void)

void FUN_1410f1e62(longlong *param_1)

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



// FUNCTION 1410f1faa FUN_1410f1faa body=368 status=ok
// SIG undefined FUN_1410f1faa(void)

void FUN_1410f1faa(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_140efdf86(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1410f2130(param_1);
  return;
}



// FUNCTION 1410f2130 FUN_1410f2130 body=667 status=ok
// SIG undefined FUN_1410f2130(void)

void FUN_1410f2130(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1410f21a3;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1410f21a3:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x28);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x24 + lVar12 * 0x28) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x20 + lVar12 * 0x28) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1410f23cc FUN_1410f23cc body=301 status=ok
// SIG undefined FUN_1410f23cc(void)

void FUN_1410f23cc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (int)param_1[1] && *param_2 != 0) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar2 = *param_1;
      local_4c = (undefined4)lVar6;
      pcVar3 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_4c,lVar2 + lVar7);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x60;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_1410f2525(*param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_14920c052(param_1,0);
  }
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN_14481578e(param_1 + 2,0);
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f2506 FUN_1410f2506 body=31 status=ok
// SIG undefined FUN_1410f2506(void)

undefined8 FUN_1410f2506(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410f2525 FUN_1410f2525 body=61 status=ok
// SIG undefined FUN_1410f2525(void)

void FUN_1410f2525(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1491970a2(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1410f2562 FUN_1410f2562 body=195 status=ok
// SIG undefined FUN_1410f2562(void)

longlong * FUN_1410f2562(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140d6afb0();
  FUN_140056680(&local_28);
  iVar1 = (int)local_20;
  iVar3 = ((int)local_20 == 0) + 8;
  *param_1 = local_28;
  local_28 = 0;
  *(int *)(param_1 + 1) = (int)local_20;
  iVar2 = local_20._4_4_;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  local_20 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,L"Content/",8);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 1410f2626 FUN_1410f2626 body=148 status=ok
// SIG undefined FUN_1410f2626(void)

ulonglong FUN_1410f2626(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  bool bVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == 0) {
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    FUN_1410f26bc(*param_2 + 0x118,&local_28);
    if (local_28 != 0) {
      bVar4 = *(char *)(local_28 + 8) != '\x02';
      goto LAB_1410f2666;
    }
  }
  bVar4 = true;
LAB_1410f2666:
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar4) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f26bc FUN_1410f26bc body=83 status=ok
// SIG undefined FUN_1410f26bc(void)

longlong * FUN_1410f26bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140497036();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1410f2710 FUN_1410f2710 body=40 status=ok
// SIG undefined FUN_1410f2710(void)

undefined8 FUN_1410f2710(undefined8 param_1,int param_2)

{
  FUN_1410f2738();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410f2738 FUN_1410f2738 body=765 status=ok
// SIG undefined FUN_1410f2738(void)

void FUN_1410f2738(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5b7160;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140b1aa64(param_1 + 0x4b);
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_140c69132(param_1 + 0x3f);
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (*(int *)((longlong)param_1 + 0x1b4) != 0) {
    FUN_14472eb64(param_1 + 0x35,0);
  }
  param_1[0x3b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1d4)) {
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80;
    FUN_1446efbd8(param_1 + 0x37,0);
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_14041fb7c(param_1 + 0x22);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410f2a36(param_1 + 0x15);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1410f2a36 FUN_1410f2a36 body=485 status=ok
// SIG undefined FUN_1410f2a36(void)

void FUN_1410f2a36(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar16 = 0;
    uVar17 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_1410f2b31;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar10[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar11 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar15 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar16;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar15;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_1410f2b31;
        }
        uVar16 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_1410f2b31:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1410f2c1c FUN_1410f2c1c body=286 status=ok
// SIG undefined FUN_1410f2c1c(void)

undefined8 FUN_1410f2c1c(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1410f2d34;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410f2d34;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1410f2d34:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410f2cd3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1410f2cd3;
    }
  }
  uVar6 = 0;
LAB_1410f2cd3:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f2d3c FUN_1410f2d3c body=600 status=ok
// SIG undefined FUN_1410f2d3c(void)

void FUN_1410f2d3c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
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
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar4 = FUN_140495e96(param_1 + 0x30);
    if (lVar4 != 0) {
      lVar4 = FUN_1403f18c8(lVar4);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x170) = *(undefined1 *)(param_2 + 8);
      }
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined1 *)(param_1 + 0x124) = 0;
    if (*(char *)(param_1 + 0x125) == '\x01') {
      FUN_144259a3a(param_1,0);
    }
    lVar4 = FUN_1400d7050(param_1 + 0x30);
    if (lVar4 != 0) {
      if (DAT_14cb61cd0 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1463b31ae;
        local_58 = &LAB_1486dca4f;
        local_60 = &LAB_1464f50a6;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 8;
        local_88 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
        if (*(char *)(param_2 + 8) == '\x01') {
          if (((*(char *)(param_1 + 0x98) == '\x01') && (*(char *)(lVar4 + 0xa99) == '\x01')) &&
             (*(char *)(lVar4 + 0xa98) == '\x01')) {
            *(undefined1 *)(param_1 + 0x124) = 1;
          }
        }
        else {
          FUN_140e1630e(param_1);
          FUN_1410f2f96(param_1);
          FUN_1449027d0(param_1,&local_30);
          lVar4 = *(longlong *)(local_30 + 0x280);
          AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
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
          local_30 = (code *)&DAT_14cbd5b60;
          iVar3 = FUN_140c8411c(lVar4);
          if (0 < iVar3) {
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f2f96 FUN_1410f2f96 body=188 status=ok
// SIG undefined FUN_1410f2f96(void)

void FUN_1410f2f96(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = local_38[0x50];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
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
  *(undefined1 *)(param_1 + 300) = 0;
  local_38 = &DAT_14cbd5b80;
  iVar4 = FUN_140c8411c(lVar3);
  if (0 < iVar4) {
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f3054 FUN_1410f3054 body=1157 status=ok
// SIG undefined FUN_1410f3054(void)

void FUN_1410f3054(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_34;
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
            goto LAB_1410f313f;
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
LAB_1410f313f:
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_34);
            goto LAB_1410f320b;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_34) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_34,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_34,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_34,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_34,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
LAB_1410f320b:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1410f34da(param_1,local_30,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f34da FUN_1410f34da body=335 status=ok
// SIG undefined FUN_1410f34da(void)

void FUN_1410f34da(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x220);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  *(int *)(lVar3 + 0x1b0) = *(int *)(lVar3 + 0x1b0) + 1;
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
  if (*(char *)(lVar3 + 0x10) == '\0') {
    if (*(int *)(lVar3 + 0x14) == 0) {
      iVar5 = 1;
      goto LAB_1410f3547;
    }
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x14) + 1;
LAB_1410f3547:
    *(undefined1 *)(lVar3 + 0x10) = 0;
    *(int *)(lVar3 + 0x14) = iVar5;
  }
  if ((*(float *)(lVar3 + 0x120) != 0.0) || (NAN(*(float *)(lVar3 + 0x120)))) {
    iVar5 = *(int *)(lVar3 + 0x124) + 1;
LAB_1410f3570:
    *(undefined4 *)(lVar3 + 0x120) = 0;
    *(int *)(lVar3 + 0x124) = iVar5;
  }
  else if (*(int *)(lVar3 + 0x124) == 0) {
    iVar5 = 1;
    goto LAB_1410f3570;
  }
  cVar4 = FUN_1410f362a(param_1);
  if (cVar4 != '\0') {
    if (*(longlong *)(lVar3 + 0x110) == 0) {
      if (*(int *)(lVar3 + 0x118) != 0) goto LAB_1410f358e;
      iVar5 = 1;
    }
    else {
      iVar5 = *(int *)(lVar3 + 0x118) + 1;
    }
    *(undefined8 *)(lVar3 + 0x110) = 0;
    *(int *)(lVar3 + 0x118) = iVar5;
  }
LAB_1410f358e:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f362a FUN_1410f362a body=191 status=ok
// SIG undefined FUN_1410f362a(void)

undefined8 FUN_1410f362a(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar2 = *(uint *)(param_1 + 0x50);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar3;
      }
      else {
        lVar5 = 0;
      }
      bVar1 = *(byte *)(param_1 + 0x90);
      if (((int)(uint)bVar1 < *(int *)(lVar5 + 0xbf0)) &&
         (lVar5 = *(longlong *)
                   (*(longlong *)(lVar5 + 0xbe8) + 0x20 +
                   (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar5 != 0)) {
        lVar4 = FUN_14018fcd2();
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          return CONCAT71((int7)((ulonglong)(lVar4 + 0x30) >> 8),1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1410f36f8 FUN_1410f36f8 body=153 status=ok
// SIG undefined FUN_1410f36f8(void)

undefined8 * FUN_1410f36f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b015940;
  if (param_1[0x354] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x343] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x229] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410f3791 FUN_1410f3791 body=642 status=ok
// SIG undefined FUN_1410f3791(void)

ulonglong *
FUN_1410f3791(ulonglong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong *local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  byte local_4d;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *param_5;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  local_4e = *(undefined1 *)(lVar1 + 0x92);
  local_4c = *(undefined2 *)(lVar1 + 0x94);
  bVar7 = *(int *)(param_4 + 0x70) - 1U < 2;
  local_64 = *(undefined8 *)(lVar1 + 0x7c);
  local_80 = (ulonglong)bVar7 * 0x20000 + (*(ulonglong *)(lVar1 + 0x60) & 0xfffffffff7fdeff8) + 1;
  local_50 = *(undefined1 *)(lVar1 + 0x90);
  local_54 = *(undefined4 *)(lVar1 + 0x8c);
  local_4d = bVar7 * '\b' | 2;
  local_4f = 1;
  local_78 = DAT_14ca85088;
  iVar5 = (int)*(undefined8 *)(lVar1 + 0x84);
  local_5c = DAT_14ca84e40;
  if (iVar5 < DAT_14ca84e40) {
    local_5c = iVar5;
  }
  if (local_5c < 2) {
    local_5c = 1;
  }
  iVar5 = (int)((ulonglong)*(undefined8 *)(lVar1 + 0x84) >> 0x20);
  local_58 = DAT_14ca84e40;
  if (iVar5 < DAT_14ca84e40) {
    local_58 = iVar5;
  }
  local_74 = DAT_14ca8508c;
  uStack_70 = DAT_14ca85090;
  uStack_6c = DAT_14ca85094;
  uStack_68 = DAT_14ca85098;
  if (local_58 < 2) {
    local_58 = 1;
  }
  uVar6 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar4 = uVar6 + 0x120;
  local_a8 = param_3;
  if (*(ulonglong *)(param_2 + 0x78) < uVar4) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
    uVar6 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar6 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar4;
  FUN_1456bbb8c(uVar6,L"AmbientOcclusion",&local_80,0);
  iVar5 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar5);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar5 * 8) = uVar6;
  *(int *)(uVar6 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  local_b8 = *(undefined4 *)(param_4 + 0x70);
  local_c0 = &local_a0;
  local_88 = 0;
  local_c8 = param_8;
  local_d0 = param_7;
  local_d8 = param_6;
  local_b0 = 1;
  local_a0 = uVar6;
  local_98 = uVar2;
  local_90 = uVar3;
  FUN_1410f3a14(param_2,local_a8,param_4,param_5);
  *param_1 = uVar6;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f3a14 FUN_1410f3a14 body=4991 status=ok
// SIG undefined FUN_1410f3a14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410f3a14(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8,
                  int param_9,byte param_10)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined1 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_388 [32];
  wchar_t *local_368;
  undefined1 local_360 [16];
  char *local_350;
  code *local_348;
  code *local_340;
  undefined1 *local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  undefined1 *local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 *local_300;
  ulonglong *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  int local_2b8;
  int local_2b4;
  undefined4 local_2b0;
  undefined1 local_2a9;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  ulonglong *local_290;
  longlong local_288;
  longlong lStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [12];
  undefined1 auStack_25c [4];
  undefined8 local_258;
  char local_250;
  undefined8 local_248;
  char local_240;
  undefined8 local_238;
  undefined8 local_230;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  undefined8 local_218 [38];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if ((*param_4 == 0) ||
     (((int)param_4[2] == (int)param_4[1] &&
      (*(int *)((longlong)param_4 + 0x14) == *(int *)((longlong)param_4 + 0xc))))) {
    local_290 = (ulonglong *)param_3[1];
    local_288 = param_3[2];
    lStack_280 = param_3[3];
  }
  else {
    local_288 = param_4[1];
    lStack_280 = param_4[2];
    local_290 = *(ulonglong **)(*param_4 + 0x84);
  }
  local_2a0 = param_8[1];
  uStack_298 = param_8[2];
  local_2a8 = *(undefined8 *)(*param_8 + 0x84);
  if (*param_6 == 0) {
    bVar17 = false;
  }
  else {
    bVar17 = *(int *)((longlong)param_6 + 0xc) != *(int *)((longlong)param_6 + 0x14) ||
             (int)param_6[2] != (int)param_6[1];
  }
  lVar7 = 0x4c;
  do {
    *(undefined8 *)(local_268 + lVar7 + 4) = 0;
    *(undefined8 *)(auStack_25c + lVar7) = 0x3f80000000000000;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x9c);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_300 = param_3;
  local_2f8 = local_290;
  local_2f0 = param_1;
  local_2e8 = param_2;
  lVar8 = FUN_1447e4f80();
  lVar7 = local_2e8;
  puVar12 = local_300;
  local_250 = *(char *)(lVar8 + 0x41);
  if (*(char *)(lVar8 + 0x41) == '\x03') {
    local_250 = '\x02';
  }
  local_258 = *(undefined8 *)(local_2e8 + 0x18);
  uVar11 = *local_300;
  lVar8 = FUN_14482e3b2();
  local_240 = *(char *)(lVar8 + 0x41);
  if (local_240 == '\x03') {
    local_240 = '\x02';
  }
  local_238 = *param_7;
  local_21c = (float)(*(int *)(lVar7 + 0x3104) - *(int *)(lVar7 + 0x30fc)) /
              (float)(*(int *)(lVar7 + 0x137cc) * 2);
  local_224 = local_21c * -0.5;
  local_228 = ((float)(*(int *)(lVar7 + 0x3100) - *(int *)(lVar7 + 0x30f8)) /
              (float)(*(int *)(lVar7 + 0x137c8) * 2)) * 0.5;
  local_21c = local_21c * 0.5;
  local_230 = DAT_14c9c0d80;
  local_368 = (wchar_t *)(puVar12 + 1);
  local_248 = uVar11;
  local_220 = local_228;
  FUN_142b8b4a0(local_218,lVar7,&local_290,&local_2a8);
  local_c8 = *param_4;
  if (DAT_14c760a84 == -1) {
    FUN_145fdab76(local_278,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp",
                  0x66);
    DAT_14c760a84 = FUN_145d12cf0(local_278);
    if (local_278._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(local_2f0 + 0x130)) &&
     (lVar7 = *(longlong *)(*(longlong *)(local_2f0 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar7 != 0)) {
    lVar7 = lVar7 + 8;
  }
  else {
    lVar7 = 0;
  }
  lStack_c0 = *param_5;
  if ((lStack_c0 == 0) ||
     (((int)param_5[2] == (int)param_5[1] &&
      (*(int *)((longlong)param_5 + 0x14) == *(int *)((longlong)param_5 + 0xc))))) {
    lStack_c0 = *(longlong *)(lVar7 + 8);
  }
  local_b8 = *param_6;
  if (local_b8 == 0) {
LAB_1410f3dec:
    local_b8 = *(longlong *)(lVar7 + 8);
    local_e8 = &DAT_3f8000003f800000;
    uStack_e0 = 0;
    local_d8 = &DAT_3f8000003f800000;
  }
  else {
    if (*(int *)((longlong)param_6 + 0x14) == *(int *)((longlong)param_6 + 0xc) &&
        (int)param_6[2] == (int)param_6[1]) goto LAB_1410f3dec;
    fVar19 = 1.0 / (float)(int)((ulonglong)*(undefined8 *)(local_b8 + 0x84) >> 0x20);
    fVar18 = 1.0 / (float)(int)*(undefined8 *)(local_b8 + 0x84);
    local_e8 = (undefined1 *)CONCAT44(fVar19,fVar18);
    uStack_e0 = CONCAT44((float)*(int *)((longlong)param_6 + 0xc) * fVar19,
                         (float)(int)param_6[1] * fVar18);
    local_d8 = (undefined1 *)
               CONCAT44((float)*(int *)((longlong)param_6 + 0x14) * fVar19,
                        (float)(int)param_6[2] * fVar18);
  }
  local_d0 = 0x3f800000;
  uStack_b0 = DAT_14c9c0d80;
  local_a8 = *(undefined8 *)(DAT_14ca63b58 + 8);
  uStack_a0 = DAT_14c9c0eb8;
  local_2d8 = CONCAT44(local_2d8._4_4_,(uint)bVar17);
  if (param_9 - 1U < 2) {
    puVar1 = (ulonglong *)(local_2f0 + 0x70);
    puVar15 = (undefined8 *)(*(longlong *)(local_2f0 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar12 = puVar15 + 0x3e;
    if (*(undefined8 **)(local_2f0 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x200);
      puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar12 = puVar15 + 0x3e;
    }
    lVar7 = local_2f0;
    *puVar1 = (ulonglong)puVar12;
    *puVar15 = &PTR_FUN_14a1f65c8;
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 1;
    puVar15[4] = 0;
    *(undefined1 *)(puVar15 + 5) = 1;
    puVar15[6] = 0;
    puVar15[7] = 0;
    lVar8 = 0x5c;
    do {
      puVar12 = (undefined8 *)((longlong)puVar15 + lVar8 + -0xc);
      *puVar12 = 0;
      puVar12[1] = 0x3f80000000000000;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0xac);
    puVar15[0x38] = 0;
    puVar15[0x39] = 0;
    puVar15[0x36] = 0;
    puVar15[0x37] = 0;
    puVar15[0x34] = 0;
    puVar15[0x35] = 0;
    puVar15[0x3a] = 0;
    *(undefined1 *)(puVar15 + 0x3b) = 1;
    puVar15[0x3c] = 0;
    iVar14 = *(int *)(local_2f0 + 0xa0);
    *(uint *)(local_2f0 + 0xa0) = iVar14 + 1U;
    if (*(uint *)(local_2f0 + 0xa4) < iVar14 + 1U) {
      FUN_1448cfae8(local_2f0 + 0x98,iVar14);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x98) + (longlong)iVar14 * 8) = puVar15;
    memcpy(puVar15 + 2,&local_258,0x1c0);
    uVar11 = *(undefined8 *)(local_2e8 + 0x118d0);
    lVar8 = FUN_144a2c9be();
    cVar13 = '\x02';
    if (*(char *)(lVar8 + 0x41) != '\x03') {
      cVar13 = *(char *)(lVar8 + 0x41);
    }
    puVar15[0x3a] = uVar11;
    *(char *)(puVar15 + 0x3b) = cVar13;
    lVar8 = *param_8;
    uVar3 = *(undefined1 *)(lVar8 + 0x94);
    puVar16 = (undefined8 *)(*(longlong *)(lVar7 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar16 + 9;
    if (*(undefined8 **)(lVar7 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x50);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar16 + 9;
    }
    *(undefined8 **)(lVar7 + 0x70) = puVar12;
    puVar16[1] = *(undefined8 *)(lVar8 + 8);
    puVar16[2] = 0;
    *(undefined1 *)(puVar16 + 3) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar16 + 5) = 0;
    *puVar16 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar16 + 6) = uVar3;
    *(undefined1 *)(puVar16 + 7) = 0;
    *(undefined4 *)((longlong)puVar16 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar16 + 0x35) = 0;
    puVar16[8] = lVar8;
    iVar14 = *(int *)(lVar7 + 0x1a0);
    *(uint *)(lVar7 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(lVar7 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(lVar7 + 0x198,iVar14);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x198) + (longlong)iVar14 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x1c) = *(int *)(lVar7 + 0x1a0) + -1;
    puVar15[0x3c] = puVar16;
    uVar11 = *(undefined8 *)(local_2e8 + 0x13818);
    iVar14 = (uint)param_10 * 2 + *(int *)((longlong)local_300 + 0x6c) * 4 + (int)local_2d8;
    FUN_145eb55ce();
    FUN_1448e935e(uVar11,local_278,&DAT_14c9b7170,iVar14);
    FUN_145eb55ce();
    iVar14 = (uStack_298._4_4_ - local_2a0._4_4_) + 0xf;
    local_2b4 = (uStack_298._4_4_ - local_2a0._4_4_) + 0x1e;
    if (-1 < iVar14) {
      local_2b4 = iVar14;
    }
    local_2b4 = local_2b4 >> 4;
    iVar14 = ((int)uStack_298 - (int)local_2a0) + 0xf;
    local_2b8 = ((int)uStack_298 - (int)local_2a0) + 0x1e;
    if (-1 < iVar14) {
      local_2b8 = iVar14;
    }
    local_2b8 = local_2b8 >> 4;
    local_2b0 = 1;
    local_360._0_8_ = &local_2b8;
    local_368 = (wchar_t *)(puVar15 + 2);
    FUN_147135170(lVar7,&local_2a9,(param_9 == 2) * '\x02' + '\x02',local_278);
    goto LAB_1410f43e7;
  }
  if (bVar17 == false) {
    if (((((*(int *)(DAT_14c9b6cb0 + 4) == 0) || (*(int *)(puVar12 + 1) / (int)local_2f8 != 1)) ||
         (DAT_14ca84e1e != '\x01')) || (lVar7 = local_300[10], lVar7 == 0)) ||
       ((iVar14 = *(int *)(local_300 + 0xc), iVar14 == *(int *)(local_300 + 0xb) &&
        (iVar14 = *(int *)((longlong)local_300 + 0x5c),
        *(int *)((longlong)local_300 + 100) == iVar14)))) goto LAB_1410f3e78;
    bVar17 = *(char *)(lVar7 + 0x91) == '\x01';
    local_2dc = CONCAT31((int3)((uint)iVar14 >> 8),bVar17);
    if (!bVar17) goto LAB_1410f3e8a;
    fVar19 = (float)((double)*(float *)(local_2e8 + 0x2b00) * *(double *)(local_2e8 + 0x880) +
                     *(double *)(local_2e8 + 0x860) * 0.0 + *(double *)(local_2e8 + 0x840) * 0.0 +
                    *(double *)(local_2e8 + 0x8a0)) /
             (float)((double)*(float *)(local_2e8 + 0x2b00) * *(double *)(local_2e8 + 0x888) +
                     *(double *)(local_2e8 + 0x868) * 0.0 + *(double *)(local_2e8 + 0x848) * 0.0 +
                    *(double *)(local_2e8 + 0x8a8));
    puVar1 = (ulonglong *)(local_2f0 + 0x70);
    puVar15 = (undefined8 *)(*(longlong *)(local_2f0 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar12 = puVar15 + 0x22;
    if (*(undefined8 **)(local_2f0 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x120);
      puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar12 = puVar15 + 0x22;
    }
    fVar18 = 1.0;
    if (fVar19 <= 1.0) {
      fVar18 = fVar19;
    }
    *puVar1 = (ulonglong)puVar12;
    *puVar15 = &PTR_FUN_14a1fbd30;
    local_2f8 = puVar15 + 2;
    lVar8 = 0x22;
    do {
      puVar12 = (undefined8 *)((longlong)puVar15 + lVar8 + -0x12);
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined4 *)((longlong)puVar15 + lVar8 + -2) = 0xffff0000;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0xe2);
    *(undefined4 *)((longlong)puVar15 + 0xe4) = 0;
    puVar15[0x1a] = 0;
    puVar15[0x1b] = 0;
    *(undefined2 *)(puVar15 + 0x1c) = 0;
    *(undefined4 *)(puVar15 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar15 + 0xec) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar15 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar15 + 0xfc) = 0;
    puVar15[0x20] = 0;
    plVar2 = (longlong *)(local_2f0 + 0x98);
    iVar14 = *(int *)(local_2f0 + 0xa0);
    *(uint *)(local_2f0 + 0xa0) = iVar14 + 1U;
    if (*(uint *)(local_2f0 + 0xa4) < iVar14 + 1U) {
      FUN_1448cfae8(plVar2,iVar14);
    }
    lVar10 = uStack_298;
    lVar9 = local_2a0;
    uVar11 = local_2a8;
    *(undefined8 **)(*plVar2 + (longlong)iVar14 * 8) = puVar15;
    lVar8 = param_8[3];
    puVar15[2] = *param_8;
    puVar15[3] = 0;
    *(char *)(puVar15 + 4) = (char)lVar8;
    *(undefined1 *)((longlong)puVar15 + 0x21) = 0;
    *(undefined2 *)((longlong)puVar15 + 0x22) = 0xffff;
    puVar15[0x1a] = lVar7;
    puVar15[0x1b] = 0;
    *(undefined2 *)(puVar15 + 0x1c) = 0x101;
    *(undefined4 *)((longlong)puVar15 + 0xe4) = 0x21;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c1080) && (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1)) {
      FUN_145fddb1e(local_278);
      local_320 = (undefined1 *)((ulonglong)local_320 & 0xffffffffffffff00);
      local_330 = (undefined1 *)((ulonglong)local_330 & 0xffffffffffffff00);
      local_350 = "Unknown";
      local_360 = (undefined1  [16])0x0;
      local_368 = L"FRenderTargetParameters";
      local_328 = (undefined1 *)0x0;
      local_340 = (code *)CONCAT44(local_340._4_4_,0x100);
      local_348 = (code *)CONCAT44(local_348._4_4_,0x7af);
      local_338 = local_278;
      FUN_140b49562(&DAT_14c9c1000,0,1);
      if (local_278._0_8_ != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8ea23);
      _Init_thread_footer(&DAT_14c9c1080);
    }
    lVar8 = local_2f0;
    FUN_140069376(local_2f0);
    puVar15 = (undefined8 *)(*(longlong *)(lVar8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar12 = puVar15 + 0x3b;
    if (*(undefined8 **)(lVar8 + 0x78) < puVar12) {
      FUN_140023dd8(puVar1,0x1e0);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar15 + 0x3b;
    }
    *puVar1 = (ulonglong)puVar12;
    local_278._8_8_ = DAT_14c9c1048;
    local_278._0_8_ = local_2f8;
    if (DAT_14c9c1048 != 0) {
      LOCK();
      *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
      UNLOCK();
    }
    local_268._0_8_ = &DAT_14c9c1000;
    local_368 = (wchar_t *)CONCAT71(local_368._1_7_,2);
    FUN_140068f1a(puVar15,auStack_25c + 1,local_278,1);
    lVar8 = local_2f0;
    *puVar15 = &PTR_FUN_14a1f6610;
    puVar15[0x37] = uVar11;
    puVar15[0x38] = lVar9;
    puVar15[0x39] = lVar10;
    *(float *)(puVar15 + 0x3a) = fVar18;
    iVar14 = *(int *)(local_2f0 + 0x170);
    *(uint *)(local_2f0 + 0x170) = iVar14 + 1U;
    if (*(uint *)(local_2f0 + 0x174) < iVar14 + 1U) {
      FUN_14470e57a(local_2f0 + 0x168,iVar14);
    }
    *(undefined8 **)(*(longlong *)(lVar8 + 0x168) + (longlong)iVar14 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x2c) = *(int *)(lVar8 + 0x170) + -1;
    FUN_140069100(lVar8,puVar15);
    *(undefined1 *)(param_8 + 3) = 1;
    bVar17 = true;
  }
  else {
LAB_1410f3e78:
    lVar7 = local_300[10];
LAB_1410f3e8a:
    local_2dc = 0;
    fVar18 = 0.0;
    bVar17 = false;
    lVar8 = local_2f0;
  }
  puVar15 = local_300;
  puVar1 = (ulonglong *)(lVar8 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(lVar8 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar12 = puVar16 + 0x5c;
  if (*(undefined8 **)(lVar8 + 0x78) < puVar12) {
    FUN_140023dd8(puVar1,0x2f0);
    puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar12 = puVar16 + 0x5c;
  }
  *puVar1 = (ulonglong)puVar12;
  *puVar16 = &PTR_FUN_14a1f6670;
  local_300 = puVar16 + 2;
  puVar16[2] = 0;
  *(undefined1 *)(puVar16 + 3) = 1;
  puVar16[4] = 0;
  *(undefined1 *)(puVar16 + 5) = 1;
  *(undefined1 (*) [16])(puVar16 + 6) = (undefined1  [16])0x0;
  lVar9 = 0x5c;
  do {
    puVar12 = (undefined8 *)((longlong)puVar16 + lVar9 + -0xc);
    *puVar12 = 0;
    puVar12[1] = 0x3f80000000000000;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0xac);
  *(undefined1 (*) [16])(puVar16 + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar16 + 0x36) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar16 + 0x34) = (undefined1  [16])0x0;
  puVar16[0x3a] = 0;
  *(undefined1 *)(puVar16 + 0x3b) = 1;
  lVar9 = 0x1e0;
  do {
    *(undefined1 (*) [16])((longlong)puVar16 + lVar9) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar16 + lVar9 + 0x10) = 0xffff0000;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x2a0);
  *(undefined4 *)((longlong)puVar16 + 0x2b4) = 0;
  *(undefined1 (*) [16])(puVar16 + 0x54) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar16 + 0x56) = 0;
  *(undefined4 *)(puVar16 + 0x57) = 0xffffffff;
  *(undefined4 *)((longlong)puVar16 + 700) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)puVar16 + 0x2c4) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x59) = 0;
  *(undefined2 *)((longlong)puVar16 + 0x2cc) = 0;
  puVar16[0x5a] = 0;
  iVar14 = *(int *)(lVar8 + 0xa0);
  *(uint *)(lVar8 + 0xa0) = iVar14 + 1U;
  local_2f8 = puVar1;
  if (*(uint *)(lVar8 + 0xa4) < iVar14 + 1U) {
    FUN_1448cfae8(lVar8 + 0x98,iVar14);
  }
  *(undefined8 **)(*(longlong *)(lVar8 + 0x98) + (longlong)iVar14 * 8) = puVar16;
  memcpy(local_300,&local_258,0x1c0);
  lVar9 = local_2e8;
  uVar11 = *(undefined8 *)(local_2e8 + 0x118d0);
  lVar10 = FUN_144a2c9be();
  cVar13 = '\x02';
  if (*(char *)(lVar10 + 0x41) != '\x03') {
    cVar13 = *(char *)(lVar10 + 0x41);
  }
  puVar16[0x3a] = uVar11;
  *(char *)(puVar16 + 0x3b) = cVar13;
  lVar10 = param_8[3];
  puVar16[0x3c] = *param_8;
  puVar16[0x3d] = 0;
  *(char *)(puVar16 + 0x3e) = (char)lVar10;
  *(undefined1 *)((longlong)puVar16 + 0x1f1) = 0;
  *(undefined2 *)((longlong)puVar16 + 0x1f2) = 0xffff;
  local_368 = (wchar_t *)((ulonglong)local_368 & 0xffffffffffffff00);
  uVar11 = FUN_1401c8e48(&DAT_14ca63c98,lVar8,lVar9,3);
  lVar8 = local_2e8;
  puVar16[0x5a] = uVar11;
  if (bVar17) {
    puVar16[0x54] = lVar7;
    puVar16[0x55] = 0;
    *(undefined2 *)(puVar16 + 0x56) = 0x101;
    *(undefined4 *)((longlong)puVar16 + 0x2b4) = 0x21;
  }
  uVar11 = *(undefined8 *)(local_2e8 + 0x13818);
  iVar14 = (uint)param_10 * 2 + *(int *)((longlong)puVar15 + 0x6c) * 4 + (int)local_2d8;
  FUN_14154e180();
  FUN_1448e935e(uVar11,local_278,&DAT_14c9b7048,iVar14);
  FUN_14154e180();
  uVar6 = local_278._0_8_;
  local_2d8 = local_278._8_8_;
  uVar11 = *(undefined8 *)(lVar8 + 0x13818);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_320 = &LAB_14712ac08;
    local_328 = &LAB_14712ac0c;
    local_330 = &LAB_1472e3912;
    local_338 = &LAB_1472e3916;
    local_340 = FUN_1472e391a;
    local_348 = FUN_1472e3942;
    local_368 = L"/Engine/Private/ScreenPass.usf";
    local_310 = 0;
    local_318 = 0xe0;
    local_350 = (char *)CONCAT44(local_350._4_4_,1);
    local_360._0_12_ = ZEXT812(0x14a2f5d42);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  FUN_1448e935e(uVar11,local_278,&DAT_14ca4b6d8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_320 = &LAB_14712ac08;
    local_328 = &LAB_14712ac0c;
    local_330 = &LAB_1472e3912;
    local_338 = &LAB_1472e3916;
    local_340 = FUN_1472e391a;
    local_348 = FUN_1472e3942;
    local_368 = L"/Engine/Private/ScreenPass.usf";
    local_310 = 0;
    local_318 = 0xe0;
    local_350 = (char *)CONCAT44(local_350._4_4_,1);
    local_360._0_12_ = ZEXT812(0x14a2f5d42);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  local_2d0 = local_278._0_8_;
  local_2c8 = local_278._8_8_;
  FUN_14154e2a2();
  local_278 = (undefined1  [16])0x0;
  local_2c0 = uVar6;
  FUN_1448f70da(uVar6,&DAT_14c9b8580,local_300,local_278);
  lVar5 = lStack_280;
  lVar10 = local_288;
  puVar4 = local_290;
  lVar9 = uStack_298;
  lVar8 = local_2a0;
  uVar11 = local_2a8;
  FUN_14154e2a2();
  lVar7 = local_2f0;
  FUN_140069376(local_2f0);
  puVar1 = local_2f8;
  puVar15 = (undefined8 *)(*(longlong *)(lVar7 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar12 = puVar15 + 0x44;
  if (*(undefined8 **)(lVar7 + 0x78) < puVar12) {
    FUN_140023dd8(local_2f8,0x228);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 0x44;
  }
  *local_2f8 = (ulonglong)puVar12;
  local_278._8_8_ = DAT_14c9b85c8;
  local_278._0_8_ = local_300;
  if (DAT_14c9b85c8 != 0) {
    LOCK();
    *(int *)(DAT_14c9b85c8 + 8) = *(int *)(DAT_14c9b85c8 + 8) + 1;
    UNLOCK();
  }
  local_268._0_8_ = &DAT_14c9b8580;
  local_368 = (wchar_t *)CONCAT71(local_368._1_7_,2);
  FUN_140068f1a(puVar15,&local_2a9,local_278,1);
  lVar7 = local_2f0;
  *puVar15 = &PTR_FUN_14a1f6680;
  puVar15[0x37] = local_2e8;
  puVar15[0x38] = uVar11;
  puVar15[0x39] = lVar8;
  puVar15[0x3a] = lVar9;
  puVar15[0x3b] = puVar4;
  puVar15[0x3c] = lVar10;
  puVar15[0x3d] = lVar5;
  puVar15[0x3e] = local_2d0;
  puVar15[0x3f] = local_2c8;
  puVar15[0x40] = local_2c0;
  puVar15[0x41] = local_2d8;
  puVar15[0x42] = local_300;
  *(char *)(puVar15 + 0x43) = (char)local_2dc;
  *(undefined2 *)((longlong)puVar15 + 0x219) = auStack_25c._1_2_;
  *(undefined1 *)((longlong)puVar15 + 0x21b) = auStack_25c[3];
  *(float *)((longlong)puVar15 + 0x21c) = fVar18;
  iVar14 = *(int *)(local_2f0 + 0x170);
  *(uint *)(local_2f0 + 0x170) = iVar14 + 1U;
  if (*(uint *)(local_2f0 + 0x174) < iVar14 + 1U) {
    FUN_14470e57a(local_2f0 + 0x168,iVar14);
  }
  *(undefined8 **)(*(longlong *)(lVar7 + 0x168) + (longlong)iVar14 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x2c) = *(int *)(lVar7 + 0x170) + -1;
  FUN_140069100(lVar7,puVar15);
LAB_1410f43e7:
  if ((local_90 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f4d94 FUN_1410f4d94 body=2431 status=ok
// SIG undefined FUN_1410f4d94(void)

void FUN_1410f4d94(longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ushort *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_368 [32];
  undefined2 *local_348;
  undefined2 local_340;
  undefined8 local_338;
  longlong local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  int local_300;
  undefined8 local_2f8;
  int local_2f0;
  undefined2 *local_2e8;
  int local_2e0;
  undefined2 *local_2d8;
  int local_2d0;
  undefined2 *local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined1 uStack_2b7;
  undefined2 uStack_2b6;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  undefined4 *local_2a8;
  char local_2a0;
  undefined4 local_298 [2];
  longlong local_290;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_98._0_2_ = 0;
  local_94 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_338 = param_2;
  if (*(char *)(param_1 + 9) == '\x01') {
    FUN_140a893aa(param_3 + 0x2c0,&local_2b8,param_3);
    local_98._0_2_ = CONCAT11(local_98._1_1_,local_2b8);
    local_2b8 = 0;
    local_94 = CONCAT44((undefined4)uStack_2b0,uStack_2b4);
    uStack_2b4 = 0;
    uStack_2b0._0_4_ = 0;
    FUN_1404e49fa(&local_88,&local_2a8);
    local_98._0_2_ = CONCAT11(uStack_2b7,(undefined1)local_98);
    uStack_2b7 = 0;
  }
  else {
    local_348 = (undefined2 *)CONCAT71(local_348._1_7_,1);
    FUN_1408234aa(param_2,&local_2b8,param_3,&DAT_14cbcda70);
    FUN_1411b8130(&local_98,&local_2b8);
  }
  if (local_290 != 0) {
    FUN_1400020a8();
  }
  puVar9 = (undefined1 *)CONCAT44(uStack_2b0._4_4_,(undefined4)uStack_2b0);
  if (0 < *(int *)(param_1 + 0x18)) {
    if ((*(char *)(param_1 + 8) == '\x01') && ((longlong)*(int *)(param_3 + 0x2f8) != 0)) {
      lVar17 = (longlong)*(int *)(param_3 + 0x2f8) * 0x48;
      plVar18 = (longlong *)(*(longlong *)(param_3 + 0x2f0) + 0x30);
      do {
        local_2a0 = '\0';
        local_2b8 = SUB81(local_298,0);
        uStack_2b7 = (undefined1)((ulonglong)local_298 >> 8);
        uStack_2b6 = (undefined2)((ulonglong)local_298 >> 0x10);
        uStack_2b4 = (undefined4)((ulonglong)local_298 >> 0x20);
        local_2a8 = &local_98;
        uStack_2b0 = local_298;
        FUN_14014e8d0(&local_98,&local_2b8);
        if (local_2a8 <= (undefined4 *)((longlong)uStack_2b0 + 3)) {
          FUN_145753a78(&local_2b8,3);
        }
        *(undefined1 *)((longlong)uStack_2b0 + 2) = 0x20;
        *(undefined2 *)uStack_2b0 = 0x3e20;
        uStack_2b0 = (undefined4 *)((longlong)uStack_2b0 + 3);
        FUN_14089c9ba(&local_2b8,&DAT_149dfc0ac,*(int *)(param_1 + 0x18) + -1);
        if (local_2a8 <= (undefined4 *)((longlong)uStack_2b0 + 1)) {
          FUN_145753a78(&local_2b8,1);
        }
        *(undefined1 *)uStack_2b0 = 0;
        uStack_2b0 = (undefined4 *)((longlong)uStack_2b0 + 1);
        FUN_140822110(&local_2c8,&local_2b8,0);
        iVar5 = (int)plVar18[1];
        *(uint *)(plVar18 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar18 + 0xc) < iVar5 + 1U) {
          FUN_1410f5714(plVar18,iVar5);
        }
        lVar11 = *plVar18;
        lVar14 = (longlong)iVar5 * 0x10;
        *(undefined8 *)(lVar11 + lVar14) = 0;
        *(undefined2 **)(lVar11 + lVar14) = local_2c8;
        local_2c8 = (undefined2 *)0x0;
        *(int *)(lVar11 + 8 + lVar14) = (int)local_2c0;
        *(undefined4 *)(lVar11 + 0xc + lVar14) = local_2c0._4_4_;
        local_2c0 = 0;
        FUN_1447cd778(0,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        puVar9 = (undefined1 *)uStack_2b0;
        if (local_2a0 == '\x01') {
          FUN_1400020a8(CONCAT44(uStack_2b4,CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8))));
          puVar9 = (undefined1 *)uStack_2b0;
        }
        uStack_2b0._4_4_ = (undefined4)((ulonglong)puVar9 >> 0x20);
        plVar18 = plVar18 + 9;
        lVar17 = lVar17 + -0x48;
      } while (lVar17 != 0);
      if (*(int *)(param_1 + 0x18) < 1) goto LAB_1410f54f4;
    }
    lVar17 = 0;
    uVar19 = 0;
    local_330 = param_1;
    do {
      uStack_2b0._0_4_ = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8 + lVar17);
      uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar17);
      local_2b8 = (undefined1)uVar7;
      uStack_2b7 = (undefined1)((ulonglong)uVar7 >> 8);
      uStack_2b6 = (undefined2)((ulonglong)uVar7 >> 0x10);
      uStack_2b4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      lVar11 = FUN_140823ef2(local_338,param_3,&local_2b8);
      *(undefined1 *)(lVar11 + 0x30) = 1;
      plVar18 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar18[1] = (longlong)&DAT_100000001;
      *plVar18 = (longlong)&PTR_FUN_14b41bb30;
      plVar18[5] = 0;
      plVar18[6] = 0;
      plVar18[3] = 0;
      plVar18[4] = 0;
      plVar18[7] = 0;
      plVar18[2] = (longlong)&PTR_FUN_14afff040;
      *(undefined8 *)((longlong)plVar18 + 0x2c) = 0;
      *(undefined8 *)((longlong)plVar18 + 0x34) = 0;
      *(undefined1 *)((longlong)plVar18 + 0x3c) = 0;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      iVar5 = *(int *)(lVar11 + 0x50);
      *(uint *)(lVar11 + 0x50) = iVar5 + 1U;
      if (*(uint *)(lVar11 + 0x54) < iVar5 + 1U) {
        FUN_140822376((longlong *)(lVar11 + 0x48),iVar5);
      }
      lVar11 = *(longlong *)(lVar11 + 0x48);
      *(longlong **)(lVar11 + (longlong)iVar5 * 0x10) = plVar18 + 2;
      *(longlong **)(lVar11 + 8 + (longlong)iVar5 * 0x10) = plVar18;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar18 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar12 = (int *)((longlong)plVar18 + 0xc);
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (*piVar12 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      iVar5 = (int)plVar18[4];
      *(uint *)(plVar18 + 4) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar18 + 0x24) < iVar5 + 1U) {
        FUN_140823334(plVar18 + 3,iVar5);
      }
      puVar4 = (undefined8 *)(plVar18[3] + (longlong)iVar5 * 0x28);
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = DAT_14cb86278;
      uVar1 = uVar19 + 1;
      local_2b8 = 2;
      uStack_2b0._4_4_ = (undefined4)uVar1;
      uStack_2b4 = 0;
      uStack_2b0._0_4_ = 0;
      FUN_140821fec(puVar4,&local_98,&local_2b8,5);
      local_2a8 = (undefined4 *)0x0;
      local_2b8 = 0;
      uStack_2b7 = 0;
      uStack_2b6 = 0;
      uStack_2b4 = 0;
      uStack_2b0._0_4_ = 0;
      uStack_2b0._4_4_ = 0;
      local_318 = 0;
      local_310 = 0;
      if (*(longlong *)(param_3 + 0x18) == 0) {
        iStack_320 = DAT_14c948620;
        local_328 = (undefined4)DAT_14c948618;
        uStack_324 = (undefined4)((ulonglong)DAT_14c948618 >> 0x20);
      }
      else {
        piVar12 = *(int **)(param_3 + 8);
        if (piVar12 == (int *)0x0) {
          piVar12 = &DAT_14c9485f0;
        }
        iVar5 = *piVar12;
        if (((iVar5 == 0) || (iVar6 = piVar12[1], iVar6 == 0)) || (iVar5 == DAT_14c948000)) {
LAB_1410f5585:
          local_2f0 = DAT_14c948620;
          local_2f8 = DAT_14c948618;
        }
        else {
          if ((iVar6 < 2) && (piVar12[9] < 1)) {
            piVar12 = piVar12 + 2;
          }
          else {
            piVar12 = *(int **)(piVar12 + 6);
          }
          if (iVar6 < 1) goto LAB_1410f5585;
          local_2f0 = piVar12[2];
          local_2f8 = *(undefined8 *)piVar12;
        }
        piVar12 = *(int **)(*(longlong *)(param_3 + 0x18) + 8);
        if (piVar12 == (int *)0x0) {
          piVar12 = &DAT_14c9485f0;
        }
        if (((*piVar12 == 0) || (iVar6 = piVar12[1], iVar6 == 0)) || (*piVar12 == DAT_14c948000)) {
LAB_1410f559b:
          local_300 = DAT_14c948620;
          local_308 = DAT_14c948618;
        }
        else {
          if ((iVar6 < 2) && (piVar12[9] < 1)) {
            piVar12 = piVar12 + 2;
          }
          else {
            piVar12 = *(int **)(piVar12 + 6);
          }
          if (iVar6 < 1) goto LAB_1410f559b;
          local_300 = piVar12[2];
          local_308 = *(undefined8 *)piVar12;
        }
        FUN_1408226d0(&local_308,&local_2d8,CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1));
        puVar13 = &DAT_149dfb77a;
        if (local_2d0 != 0) {
          puVar13 = local_2d8;
        }
        FUN_1408226d0(&local_2f8,&local_2e8,1);
        puVar16 = &DAT_149dfb77a;
        if (local_2e0 != 0) {
          puVar16 = local_2e8;
        }
        local_348 = puVar13;
        FUN_140002266(&local_2c8,L"WP_Breadcrumb_%s_%d_%s",puVar16,(int)uVar19 + 1);
        uStack_324 = 0;
        iStack_320 = 0;
        puVar13 = &DAT_149dfb77a;
        if ((int)local_2c0 != 0) {
          puVar13 = local_2c8;
        }
        FUN_1405f0d29(&local_328,puVar13,0);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_2e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_2d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_340 = 0;
      local_348 = (undefined2 *)&local_2b8;
      lVar11 = FUN_1408236ae(local_338,param_3,&local_328,&local_318);
      plVar8 = (longlong *)CONCAT44(uStack_2b0._4_4_,(undefined4)uStack_2b0);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar12 = (int *)((longlong)plVar8 + 0xc);
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (*piVar12 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_2a0 = '\0';
      uStack_2b0 = local_298;
      local_2b8 = SUB81(uStack_2b0,0);
      uStack_2b7 = (undefined1)((ulonglong)uStack_2b0 >> 8);
      uStack_2b6 = (undefined2)((ulonglong)uStack_2b0 >> 0x10);
      uStack_2b4 = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
      local_2a8 = &local_98;
      FUN_14014e8d0(&local_98,&local_2b8);
      if (local_2a8 <= uStack_2b0 + 1) {
        FUN_145753a78(&local_2b8,4);
      }
      *uStack_2b0 = 0x203d3d20;
      uStack_2b0 = uStack_2b0 + 1;
      FUN_14089c9ba(&local_2b8,&DAT_149dfc0ac,uVar19 & 0xffffffff);
      if (local_2a8 <= (undefined4 *)((longlong)uStack_2b0 + 1)) {
        FUN_145753a78(&local_2b8,1);
      }
      *(undefined1 *)uStack_2b0 = 0;
      uStack_2b0 = (undefined4 *)((longlong)uStack_2b0 + 1);
      FUN_140822110(&local_2c8,&local_2b8,0);
      iVar5 = *(int *)(lVar11 + 0x38);
      uVar10 = iVar5 + 1;
      *(uint *)(lVar11 + 0x38) = uVar10;
      if (*(uint *)(lVar11 + 0x3c) < uVar10) {
        FUN_1410f5714((longlong *)(lVar11 + 0x30));
      }
      lVar14 = *(longlong *)(lVar11 + 0x30);
      lVar15 = (longlong)iVar5 * 0x10;
      *(undefined8 *)(lVar14 + lVar15) = 0;
      *(undefined2 **)(lVar14 + lVar15) = local_2c8;
      local_2c8 = (undefined2 *)0x0;
      *(int *)(lVar14 + 8 + lVar15) = (int)local_2c0;
      *(undefined4 *)(lVar14 + 0xc + lVar15) = local_2c0._4_4_;
      local_2c0 = 0;
      FUN_1447cd778(0,0);
      param_1 = local_330;
      if (local_2c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar2 = (ushort *)(*(longlong *)(lVar11 + 0x10) + 0xc);
      *puVar2 = *puVar2 | 0x100;
      if (local_2a0 == '\x01') {
        FUN_1400020a8(CONCAT44(uStack_2b4,CONCAT22(uStack_2b6,CONCAT11(uStack_2b7,local_2b8))));
      }
      puVar9 = (undefined1 *)uStack_2b0;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar18 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar12 = (int *)((longlong)plVar18 + 0xc);
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          puVar9 = (undefined1 *)uStack_2b0;
          if (*piVar12 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            puVar9 = (undefined1 *)uStack_2b0;
          }
        }
      }
      uStack_2b0._4_4_ = (undefined4)((ulonglong)puVar9 >> 0x20);
      lVar17 = lVar17 + 0x1c;
      uVar19 = uVar1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x18));
  }
LAB_1410f54f4:
  uStack_2b0 = (undefined4 *)puVar9;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f5714 FUN_1410f5714 body=269 status=ok
// SIG undefined FUN_1410f5714(void)

void FUN_1410f5714(longlong param_1,int param_2)

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



// FUNCTION 1410f5822 FUN_1410f5822 body=106 status=ok
// SIG undefined FUN_1410f5822(void)

void FUN_1410f5822(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x140);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  (**(code **)(*plVar2 + 0x38))();
  puVar3 = *(undefined8 **)(param_1 + 0x158);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x158) = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_1410f588c(param_1,param_2);
  return;
}



// FUNCTION 1410f588c FUN_1410f588c body=1893 status=ok
// SIG undefined FUN_1410f588c(void)

void FUN_1410f588c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar21 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar21 = *(longlong *)(param_1 + 0x1a8);
    }
    plVar3 = (longlong *)(param_1 + 0x168);
    iVar7 = *(int *)(param_1 + 0x1b0);
    iVar10 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar10 = iVar7;
    }
    local_90 = param_2;
    if (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x19c) < iVar10 >> 2) {
      lVar8 = param_1 + 0x178;
      local_88 = (undefined8 *)0x100000000;
      local_78 = (undefined8 *)0xffffffff;
      puStack_70 = (undefined8 *)((ulonglong)puStack_70 & 0xffffffff00000000);
      puStack_80 = (undefined8 *)lVar8;
      if (*(int *)(param_1 + 400) == 0) {
        uVar23 = 1;
        local_78._0_4_ = 0xffffffff;
        iVar7 = 0;
        uVar15 = 0;
        uVar25 = 0;
        local_88._0_4_ = 0;
      }
      else {
        FUN_1449c0562(&local_88);
        uVar23 = (ulonglong)local_88 >> 0x20;
        uVar25 = (ulonglong)local_78 >> 0x20;
        uVar15 = (ulonglong)puStack_70 & 0xffffffff;
        iVar7 = *(int *)(param_1 + 400);
      }
      iVar10 = (int)local_88;
      uVar19 = (uint)local_78;
      if ((int)uVar25 != iVar7 || puStack_80 != (undefined8 *)lVar8) {
        do {
          *(undefined4 *)
           (lVar21 + (longlong)*(int *)(*plVar3 + 0x1c + (longlong)(int)uVar25 * 0x20) * 4) =
               0xffffffff;
          uVar19 = ~(uint)uVar23 & uVar19;
          puVar9 = (undefined8 *)*(longlong *)((longlong)puStack_80 + 0x10);
          if (*(longlong *)((longlong)puStack_80 + 0x10) == 0) {
            puVar9 = puStack_80;
          }
          uVar11 = *(uint *)((longlong)puStack_80 + 0x18);
          lVar17 = (longlong)iVar10;
          uVar22 = *(uint *)((longlong)puVar9 + lVar17 * 4) & uVar19;
          if (uVar22 == 0) {
            iVar16 = uVar11 + 0x1e;
            if (-1 < (int)(uVar11 - 1)) {
              iVar16 = uVar11 - 1;
            }
            iVar16 = iVar16 >> 5;
            uVar15 = (ulonglong)((int)uVar15 + 0x20);
            iVar12 = iVar16;
            if (iVar16 < iVar10) {
              iVar12 = iVar10;
            }
            if (iVar10 < iVar16) {
              lVar24 = 0;
              do {
                uVar22 = *(uint *)(lVar17 * 4 + 4 + (longlong)puVar9 + lVar24 * 4);
                if (uVar22 != 0) {
                  iVar10 = iVar10 + (int)lVar24 + 1;
                  uVar19 = 0xffffffff;
                  goto LAB_1410f5a2d;
                }
                uVar15 = (ulonglong)((int)uVar15 + 0x20);
                lVar24 = lVar24 + 1;
              } while (iVar12 - lVar17 != lVar24);
              uVar19 = 0xffffffff;
              iVar10 = iVar12;
            }
            iVar10 = iVar10 + 1;
            uVar25 = (ulonglong)uVar11;
          }
          else {
LAB_1410f5a2d:
            uVar23 = (ulonglong)(-uVar22 & uVar22);
            uVar25 = uVar23 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar22 = ((int)uVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            uVar25 = (ulonglong)uVar22;
            if ((int)uVar11 <= (int)uVar22) {
              uVar25 = (ulonglong)uVar11;
            }
          }
        } while ((int)uVar25 != iVar7 || puStack_80 != (undefined8 *)lVar8);
      }
    }
    else if (0 < iVar7) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar21 + lVar8 * 4) = 0xffffffff;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x1b0));
    }
    iVar7 = *(int *)(param_1 + 400);
    if (iVar7 == 0) {
      uVar23 = 0;
      uVar25 = 1;
      iVar10 = 0;
      iVar16 = 0;
    }
    else {
      puVar14 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 0x178);
      }
      uVar19 = *puVar14;
      if (uVar19 == 0) {
        iVar10 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar10 = iVar7 + -1;
        }
        uVar23 = 0;
        uVar25 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar25 = uVar23;
        }
        iVar16 = 0;
        do {
          if (uVar25 == uVar23) goto LAB_1410f5bcd;
          iVar16 = iVar16 + 0x20;
          uVar19 = puVar14[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar23 = 0;
        iVar16 = 0;
      }
      uVar25 = (ulonglong)(-uVar19 & uVar19);
      uVar15 = uVar25 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar10 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar10) {
        iVar10 = iVar7;
      }
    }
    if (iVar10 < iVar7) {
      uVar19 = 0xffffffff;
      do {
        plVar5 = *(longlong **)(*plVar3 + 0x10 + (longlong)iVar10 * 0x20);
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
        uVar19 = uVar19 & ~(uint)uVar25;
        puVar14 = *(uint **)(param_1 + 0x188);
        if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x178);
        }
        iVar7 = *(int *)(param_1 + 400);
        iVar10 = (int)uVar23;
        lVar21 = (longlong)iVar10;
        uVar11 = puVar14[lVar21] & uVar19;
        if (uVar11 == 0) {
          iVar12 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar12 = iVar7 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar13 = iVar12;
          if (iVar12 < iVar10) {
            iVar13 = iVar10;
          }
          if (iVar12 <= iVar10) break;
          lVar8 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar11 = (puVar14 + lVar21 + 1)[lVar8];
            if (uVar11 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar13 - lVar21 == lVar8) goto LAB_1410f5bcd;
          }
          uVar23 = (ulonglong)(iVar10 + (int)lVar8 + 1);
          uVar19 = 0xffffffff;
        }
        uVar25 = (ulonglong)(-uVar11 & uVar11);
        uVar15 = uVar25 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar10 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      } while (iVar10 < iVar7);
    }
LAB_1410f5bcd:
    *(undefined4 *)(param_1 + 0x170) = 0;
    if (*(int *)(param_1 + 0x174) < 0) {
      FUN_1446f4a44(plVar3,0);
    }
    *(undefined8 *)(param_1 + 0x198) = 0xffffffff;
    *(undefined4 *)(param_1 + 400) = 0;
    param_2 = local_90;
  }
  local_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  FUN_14047aa44(param_1 + 8,&local_88);
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_58 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_58)(local_58,1);
    }
  }
  if (puStack_60 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puStack_60 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puStack_60)(puStack_60,1);
    }
  }
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_68 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_68)(local_68,1);
    }
  }
  if (puStack_70 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puStack_70 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puStack_70)(puStack_70,1);
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_78 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_78)(local_78,1);
    }
  }
  if (puStack_80 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puStack_80 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puStack_80)(puStack_80,1);
    }
  }
  if (local_88 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_88 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_88)(local_88,1);
    }
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    puVar6 = *(ulonglong **)(param_2 + 0x18);
    uVar11 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar19 = *(uint *)((longlong)puVar6 + 0x17c);
    if (uVar19 != uVar11) {
      *(uint *)((longlong)puVar6 + 0x17c) = uVar11;
      puVar20 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar20 + 3;
      if ((undefined8 *)puVar6[1] < puVar9) {
        FUN_140023dd8(puVar6,0x20);
        puVar20 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar20 + 3;
      }
      *puVar6 = (ulonglong)puVar9;
      *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
      *(undefined8 **)puVar6[6] = puVar20;
      puVar6[6] = (ulonglong)(puVar20 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar6 + 0x17c);
      puVar20[1] = 0;
      *puVar20 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar20 + 2) = uVar4;
    }
    uVar18 = 0;
    lVar21 = FUN_144735dd8(param_2,param_1 + 0x158,0);
    if ((*(byte *)(lVar21 + 0x68) & 0x80) != 0) {
      uVar18 = 0x1c;
    }
    puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar20 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x48);
      puVar20 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar20 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    puVar20[1] = *(undefined8 *)(lVar21 + 8);
    puVar20[2] = 0;
    *(undefined1 *)(puVar20 + 3) = 2;
    *(undefined8 *)((longlong)puVar20 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar20 + 5) = 0;
    *puVar20 = &PTR_FUN_14a1fb3e8;
    *(undefined1 *)(puVar20 + 6) = uVar18;
    *(undefined2 *)((longlong)puVar20 + 0x31) = 0;
    puVar20[7] = lVar21;
    iVar7 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar7 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar7);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar7 * 8) = puVar20;
    *(int *)((longlong)puVar20 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    FUN_1405bfba3(param_2,puVar20,0,2);
    if (*(uint *)((longlong)puVar6 + 0x17c) != uVar19) {
      *(uint *)((longlong)puVar6 + 0x17c) = uVar19;
      puVar20 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar20 + 3;
      if ((undefined8 *)puVar6[1] < puVar9) {
        FUN_140023dd8(puVar6,0x20);
        puVar20 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar20 + 3;
      }
      *puVar6 = (ulonglong)puVar9;
      *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
      *(undefined8 **)puVar6[6] = puVar20;
      puVar6[6] = (ulonglong)(puVar20 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar6 + 0x17c);
      puVar20[1] = 0;
      *puVar20 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar20 + 2) = uVar4;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f5ff2 FUN_1410f5ff2 body=62 status=ok
// SIG undefined FUN_1410f5ff2(void)

void FUN_1410f5ff2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1410f6030 FUN_1410f6030 body=21 status=ok
// SIG undefined FUN_1410f6030(void)

undefined8 FUN_1410f6030(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1410f6046 FUN_1410f6046 body=733 status=ok
// SIG undefined FUN_1410f6046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410f6046(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_118 [40];
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  longlong local_e0;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0 [2];
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 *local_88;
  longlong *local_80;
  code *local_78;
  longlong *local_70;
  longlong local_68 [3];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x48) + 0x30) == '\x01')) {
    lVar1 = FUN_14479d2ce(param_1 + 0x1c);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x2b8), lVar1 != 0)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb966b0) {
        FUN_144b3d300(&DAT_14cb966b0);
        if (DAT_14cb966b0 == -1) {
          DAT_14cb96680 = 0;
          DAT_14cb96688 = 0;
          DAT_14cb96660 = 0;
          _DAT_14cb96668 = 0;
          _DAT_14cb9668c = 0xffffffff00000080;
          DAT_14cb96694 = 0;
          DAT_14cb966a0 = 0;
          DAT_14cb966a8 = 0;
          atexit(FUN_143eeaf91);
          _Init_thread_footer(&DAT_14cb966b0);
        }
      }
      local_68[0] = 0;
      local_68[1] = 0;
      plVar2 = (longlong *)FUN_143eeee42(param_2);
      if ((longlong)(int)plVar2[1] != 0) {
        lVar5 = *plVar2;
        lVar4 = (longlong)(int)plVar2[1] << 4;
        do {
          local_88 = &local_49;
          local_80 = local_68;
          local_78 = FUN_143eed34c;
          local_70 = &local_90;
          local_90 = lVar5;
          FUN_143eeafba(local_c0,param_2[2],0);
          FUN_14482e566(local_c0);
          local_98 = local_a8 + local_b0;
          local_a0 = local_b0;
          local_f0 = (void *)0x0;
          local_e8 = *(int *)(param_2 + 1);
          lVar3 = (longlong)local_e8;
          _Src = (void *)*param_2;
          if (lVar3 == 0) {
            local_e4 = 0;
          }
          else {
            FUN_1446dd670(&local_f0,local_e8,0);
            memcpy(local_f0,_Src,lVar3 * 2);
          }
          local_e0 = 0;
          local_d8 = 0;
          FUN_14482e566(&local_f0);
          local_c8 = local_d8 + local_e0;
          local_d0 = local_e0;
          bifrost::telemetry::addTableRow(lVar1,&local_d0,&local_a0,&local_78);
          if (local_e0 != 0) {
            FUN_1400020a8();
            local_e0 = 0;
            local_d8 = 0;
          }
          if (local_f0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_b0 != 0) {
            FUN_1400020a8();
            local_b0 = 0;
            local_a8 = 0;
          }
          if (local_c0[0] != 0) {
            FUN_1400020a8();
          }
          lVar5 = lVar5 + 0x10;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f632a FUN_1410f632a body=221 status=ok
// SIG undefined FUN_1410f632a(void)

longlong FUN_1410f632a(void)

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
  if (DAT_14c99f7a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14705d925;
    local_40 = &LAB_1461dfea0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x8a0;
    FUN_14081cfa3(L"/Script/TypedElementRuntime",L"TypedElementSelectionSet",&DAT_14c99f7a8,
                  FUN_14629c73c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f7a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f6408 FUN_1410f6408 body=2332 status=ok
// SIG undefined FUN_1410f6408(void)

void FUN_1410f6408(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  code *pcVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  undefined4 local_134;
  longlong local_130;
  code *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  code *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  code *local_a8;
  undefined8 uStack_a0;
  undefined ***local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_1 + 0x10c) == 0) {
LAB_1410f6a4d:
    lVar4 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x108);
    lVar4 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x10c) ||
          ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_1410f6a4d;
      lVar4 = *plVar6;
    }
  }
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) goto LAB_1410f64bc;
  local_f8 = (longlong *)0x0;
  uStack_f0 = 0;
  if (param_3 == '\0') {
    if (*(longlong *)(param_2 + 0xa8) == lVar4) goto LAB_1410f64bc;
    if (DAT_14cac6e60 == 0) {
      local_150 = &local_a8;
      local_a8 = FUN_144a7958c;
      local_140 = FUN_14081d0ea;
      local_148 = FUN_142b47bc4;
      local_158 = &LAB_1478989f1;
      local_160 = &LAB_146391124;
      local_168 = L"Engine";
      local_170 = 0x10000000000;
      local_178 = 0x10000005;
      local_180 = 0x10;
      local_188 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != DAT_14cac6e60 + 0x30)) goto LAB_1410f64bc;
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14b424040;
  pcVar12 = FUN_143e1a7ec;
  local_a8 = FUN_143e1a7ec;
  local_80 = param_1;
  uStack_78 = lVar4;
  lVar4 = FUN_140b247ea(param_1 + 0x70);
  if (lVar4 == 0) {
    pcVar12 = (code *)0x0;
  }
  else {
    local_c8 = &PTR_LAB_14b424040;
    local_c0 = (undefined4)local_80;
    uStack_bc = local_80._4_4_;
    uStack_b8 = (undefined4)uStack_78;
    uStack_b4 = uStack_78._4_4_;
  }
  local_d8 = (undefined ***)0x0;
  local_e8[0] = pcVar12;
  FUN_140b24684(param_2,&local_f8,local_e8);
  if (local_e8[0] != (code *)0x0) {
    pppuVar5 = local_d8;
    if (local_d8 == (undefined ***)0x0) {
      pppuVar5 = &local_c8;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar5 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar5 = &local_88;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  if ((longlong)(int)uStack_f0 == 0) {
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8(local_f8);
    }
  }
  else {
    local_100 = local_f8 + (int)uStack_f0;
    local_110 = param_1 + 0x60;
    uVar11 = 0;
    plVar6 = local_f8;
    do {
      plVar2 = (longlong *)*plVar6;
      iVar1 = *(int *)(param_1 + 0x68);
      if ((longlong)iVar1 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x60);
        lVar9 = 0;
        do {
          iVar13 = *(int *)(lVar4 + 0x10 + lVar9);
          if ((iVar13 == 0) || (uVar8 = *(uint *)(lVar4 + 0xc + lVar9), (int)uVar8 < 0)) {
LAB_1410f6a54:
            plVar14 = (longlong *)0x0;
          }
          else {
            plVar14 = (longlong *)0x0;
            if ((int)uVar8 < DAT_14c9647dc) {
              puVar15 = (undefined8 *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if (((puVar15 == (undefined8 *)0x0) || (*(int *)(puVar15 + 2) != iVar13)) ||
                 ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)) goto LAB_1410f6a54;
              plVar14 = (longlong *)*puVar15;
            }
          }
          if (plVar14 == plVar2) {
            uVar10 = (lVar9 >> 3) * 0x6db6db6db6db6db7;
            local_a8 = (code *)0x0;
            uStack_a0 = 0;
            iVar13 = -1;
            uVar8 = (uint)uVar10;
            if ((-1 < (int)uVar8) && ((int)uVar8 < iVar1)) {
              iVar13 = *(int *)(lVar4 + (ulonglong)(uVar8 & 0x7fffffff) * 0x38);
              FUN_14054c6c4(&local_a8);
              lVar4 = local_110;
              FUN_1410f6d26(local_110,uVar10 & 0xffffffff);
              FUN_1410f6da4(lVar4);
              uVar11 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
              if (((*(int *)(param_1 + 0x114) != 0) &&
                  ((uVar8 = *(uint *)(param_1 + 0x110), -1 < (int)uVar8 &&
                   ((int)uVar8 < DAT_14c9647dc)))) &&
                 ((plVar14 = (longlong *)
                             ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                  plVar14 != (longlong *)0x0 &&
                  ((((int)plVar14[2] == *(int *)(param_1 + 0x114) &&
                    ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) && (*plVar14 != 0)))))) {
                FUN_140ddbaba(plVar2);
              }
            }
            goto LAB_1410f6757;
          }
          lVar9 = lVar9 + 0x38;
        } while ((longlong)iVar1 * 0x38 - lVar9 != 0);
      }
      local_a8 = (code *)0x0;
      uStack_a0 = 0;
      iVar13 = -1;
LAB_1410f6757:
      local_108 = uVar11;
      if ((*(byte *)((longlong)plVar2 + 0x9f) & 0x40) == 0) {
        if (plVar2 == (longlong *)0x0) {
LAB_1410f678f:
          plVar14 = (longlong *)0x0;
        }
        else {
          if (DAT_14cb63950 == 0) {
            local_e8[0] = FUN_144a7958c;
            local_140 = FUN_14081d0ea;
            local_148 = (code *)&LAB_1464ec72a;
            local_158 = &LAB_1486f5f75;
            local_160 = &LAB_140945686;
            local_168 = L"Engine";
            local_170 = 0;
            local_178 = 0x10000004;
            local_180 = 0x10;
            local_188 = 0x19d0;
            local_150 = local_e8;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                          FUN_1464fe8ee);
          }
          if ((*(int *)(plVar2[2] + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
             (plVar14 = plVar2,
             *(longlong *)
              (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) !=
             DAT_14cb63950 + 0x30)) goto LAB_1410f678f;
        }
        if (((*(int *)(param_1 + 0xe4) != 0) && (uVar8 = *(uint *)(param_1 + 0xe0), -1 < (int)uVar8)
            ) && (((int)uVar8 < DAT_14c9647dc &&
                  (((plVar7 = (longlong *)
                              ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                    plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0xe4))) &&
                   ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar7;
          }
          else {
            lVar4 = 0;
          }
          lVar9 = (**(code **)(*plVar2 + 0x658))(plVar2);
          if (lVar4 == lVar9) {
            (**(code **)(*plVar2 + 0x660))(plVar2,0);
          }
          else if (plVar14 != (longlong *)0x0) {
            local_130 = (longlong)(int)uStack_a0;
            if (local_130 != 0) {
              local_120 = param_1 + 0xe0;
              local_128 = local_a8;
              local_130 = local_130 << 2;
              lVar4 = 0;
              do {
                local_134 = *(undefined4 *)(local_128 + lVar4);
                local_118 = FUN_140ddba74(plVar14);
                lVar9 = FUN_14479d2ce(local_120);
                if (local_118 == lVar9) {
                  FUN_140ddc36e(plVar14,local_134,0);
                }
                lVar4 = lVar4 + 4;
              } while (local_130 != lVar4);
            }
          }
        }
        if (((*(int *)(param_1 + 0xf4) != 0) && (uVar8 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar8)
            ) && ((((int)uVar8 < DAT_14c9647dc &&
                   ((plVar7 = (longlong *)
                              ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                    plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0xf4))))) &&
                  ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar7;
          }
          else {
            lVar4 = 0;
          }
          lVar9 = (**(code **)(*plVar2 + 0x648))(plVar2);
          if (lVar4 == lVar9) {
            (**(code **)(*plVar2 + 0x650))(plVar2,0);
          }
          else if (plVar14 != (longlong *)0x0) {
            local_130 = (longlong)(int)uStack_a0;
            if (local_130 != 0) {
              local_120 = param_1 + 0xf0;
              local_128 = local_a8;
              local_130 = local_130 << 2;
              lVar4 = 0;
              do {
                local_134 = *(undefined4 *)(local_128 + lVar4);
                local_118 = FUN_140ddba2e(plVar14);
                lVar9 = FUN_14479d2ce(local_120);
                if (local_118 == lVar9) {
                  FUN_140ddbc00(plVar14,local_134,0);
                }
                lVar4 = lVar4 + 4;
              } while (local_130 != lVar4);
            }
          }
        }
        if (((((*(int *)(param_1 + 0x104) != 0) &&
              (uVar8 = *(uint *)(param_1 + 0x100), -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc)
             ) && ((plVar14 = (longlong *)
                              ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                   plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x104)))))
           && ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar14;
          }
          else {
            lVar4 = 0;
          }
          lVar9 = plVar2[0xc6];
          if (lVar9 == 0) {
            if (*(code **)(*plVar2 + 0xa68) == (code *)&LAB_14470a070) {
              lVar9 = 0;
            }
            else {
              lVar9 = (**(code **)(*plVar2 + 0xa68))(plVar2);
            }
          }
          if (lVar4 == lVar9) {
            FUN_14054853a(plVar2,0);
          }
        }
        if (iVar13 == -1) {
          iVar1 = *(int *)(param_1 + 0x150);
          if ((longlong)iVar1 != 0) {
            lVar4 = *(longlong *)(param_1 + 0x148);
            lVar9 = 0;
            do {
              FUN_1410f721e(*(undefined8 *)(lVar4 + lVar9),plVar2);
              lVar9 = lVar9 + 8;
            } while ((longlong)iVar1 * 8 != lVar9);
          }
        }
        else {
          uVar3 = (**(code **)(*plVar2 + 0x7b0))(plVar2);
          FUN_1410f714c(plVar2,uVar3);
        }
      }
      if (local_a8 != (code *)0x0) {
        FUN_1400020a8();
      }
      uVar11 = local_108;
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_100);
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((uVar11 & 1) != 0) {
      FUN_1410f6e3a(param_1,*(undefined8 *)(param_2 + 0xa8),0);
    }
  }
LAB_1410f64bc:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f6d26 FUN_1410f6d26 body=126 status=ok
// SIG undefined FUN_1410f6d26(void)

void FUN_1410f6d26(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x38);
  if (*(longlong *)(lVar1 + 0x28 + (ulonglong)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x38),(longlong)iVar3 * 0x38);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1410f6da4 FUN_1410f6da4 body=150 status=ok
// SIG undefined FUN_1410f6da4(void)

void FUN_1410f6da4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x38)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x38,8);
      uVar3 = uVar3 / 0x38;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x38,8);
    }
  }
  return;
}



// FUNCTION 1410f6e3a FUN_1410f6e3a body=627 status=ok
// SIG undefined FUN_1410f6e3a(void)

void FUN_1410f6e3a(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x10c) != 0) {
    uVar5 = *(uint *)(param_1 + 0x108);
    lVar7 = 0;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_1410f6ea9;
    plVar3 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x10c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0))
       )) {
      lVar7 = *plVar3;
      goto LAB_1410f6ea9;
    }
  }
  lVar7 = 0;
LAB_1410f6ea9:
  if ((param_2 != 0) && (lVar7 != param_2)) {
    iVar4 = *(int *)(param_1 + 0x140);
    if ((longlong)iVar4 != 0) {
      lVar7 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x138) + 4 + lVar7);
        if ((iVar1 == 0) ||
           (uVar5 = *(uint *)(*(longlong *)(param_1 + 0x138) + lVar7), (int)uVar5 < 0)) {
LAB_1410f7063:
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          if ((int)uVar5 < DAT_14c9647dc) {
            plVar3 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (((plVar3 == (longlong *)0x0) || ((int)plVar3[2] != iVar1)) ||
               ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) goto LAB_1410f7063;
            lVar8 = *plVar3;
          }
        }
        if (lVar8 == param_2) {
          uVar6 = (lVar7 >> 3) * -0x5555555555555555;
          uVar5 = (uint)uVar6;
          if (param_3 != '\0') {
            if ((-1 < (int)uVar5) && ((int)uVar5 < iVar4)) {
              return;
            }
            goto LAB_1410f703d;
          }
          if ((int)uVar5 < 0) {
            return;
          }
          if (iVar4 <= (int)uVar5) {
            return;
          }
          if ((longlong)*(int *)(param_1 + 0x68) == 0) goto LAB_1410f7005;
          lVar7 = *(longlong *)(param_1 + 0x60);
          lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x38;
          goto LAB_1410f6faa;
        }
        lVar7 = lVar7 + 0x18;
      } while ((longlong)iVar4 * 0x18 != lVar7);
    }
    if (param_3 != '\0') {
LAB_1410f703d:
      FUN_1407e7782(param_1);
      return;
    }
  }
  return;
LAB_1410f6faa:
  if (((*(int *)(lVar7 + 0x10) != 0) && (uVar2 = *(uint *)(lVar7 + 0xc), -1 < (int)uVar2)) &&
     (((int)uVar2 < DAT_14c9647dc &&
      ((((plVar3 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(lVar7 + 0x10))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) &&
       ((*plVar3 != 0 && (*(longlong *)(*plVar3 + 0xa8) == param_2)))))))) {
    if (lVar7 != 0) {
      return;
    }
    goto LAB_1410f7005;
  }
  lVar7 = lVar7 + 0x38;
  lVar8 = lVar8 + -0x38;
  if (lVar8 == 0) {
LAB_1410f7005:
    FUN_140dda826(param_1,uVar6 & 0xffffffff);
    iVar4 = *(int *)(param_1 + 0x140);
    if (~uVar5 + iVar4 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0x138) + (ulonglong)(uVar5 & 0x7fffffff) * 0x18),
              (void *)(*(longlong *)(param_1 + 0x138) + (ulonglong)(uVar5 & 0x7fffffff) * 0x18 +
                      0x18),(longlong)(int)(~uVar5 + iVar4) * 0x18);
      iVar4 = *(int *)(param_1 + 0x140);
    }
    *(int *)(param_1 + 0x140) = iVar4 + -1;
    FUN_1410f70ae(param_1 + 0x138);
    return;
  }
  goto LAB_1410f6faa;
}



// FUNCTION 1410f70ae FUN_1410f70ae body=158 status=ok
// SIG undefined FUN_1410f70ae(void)

void FUN_1410f70ae(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 1410f714c FUN_1410f714c body=210 status=ok
// SIG undefined FUN_1410f714c(void)

void FUN_1410f714c(longlong *param_1,int param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1[0xc5] - param_2;
  if (iVar5 != 0 && param_2 <= (int)param_1[0xc5]) {
    iVar4 = 0;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    if (0 < param_2) {
      do {
        uVar2 = (**(code **)(*param_1 + 0x610))(param_1,iVar5 + iVar4);
        (**(code **)(*param_1 + 0x638))(param_1,iVar4,uVar2);
        iVar4 = iVar4 + 1;
      } while (param_2 != iVar4);
    }
    FUN_140ddbde4(param_1 + 0xc4,param_2,1);
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar1 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar1 & 1) == 0) {
LAB_1410f71f4:
        *(byte *)((longlong)param_1 + 0x9d) = bVar1 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (param_1[0x16] == 0) {
        lVar3 = FUN_1448abda6(param_1);
        if (lVar3 == 0) {
          bVar1 = *(byte *)((longlong)param_1 + 0x9d);
          goto LAB_1410f71f4;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410f721e FUN_1410f721e body=1445 status=ok
// SIG undefined FUN_1410f721e(void)

void FUN_1410f721e(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined8 local_330;
  wchar_t *local_328;
  code *local_320;
  undefined1 *local_318;
  code **local_310;
  undefined1 *local_308;
  code *local_300;
  undefined1 local_2ec [4];
  code *local_2e8;
  undefined1 local_2e0 [512];
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [64];
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x68);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x70) * 0x24;
    do {
      iVar1 = (**(code **)(*param_2 + 0x7b0))(param_2);
      iVar2 = (**(code **)(*param_2 + 0xa08))(param_2);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      local_e0 = (undefined1 *)0x0;
      local_d8 = 0x2000000000;
      local_c8 = 0;
      local_c0 = 0x2000000000;
      uStack_b8 = 0xffffffff;
      local_70 = (undefined1 *)0x0;
      local_68 = 0;
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          pcVar4 = (code *)(**(code **)(*param_2 + 0x610))(param_2,iVar2);
          if (pcVar4 != (code *)0x0) {
            if (DAT_14caec470 == 0) {
              local_2e8 = FUN_1417df956;
              local_300 = FUN_14081d0ea;
              local_308 = &LAB_1463eaa20;
              local_310 = &local_2e8;
              local_318 = &LAB_147bbd9ea;
              local_320 = FUN_1401cf6d7;
              local_328 = L"Engine";
              local_330 = 0;
              local_338 = 0x10000000;
              local_340 = 8;
              local_348 = 0x330;
              FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                            FUN_1463eb22e);
            }
            if (((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(pcVar4 + 0x10) + 0x38))
                && (*(longlong *)
                     (*(longlong *)(*(longlong *)(pcVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) &&
               (local_2e8 = pcVar4, *(longlong **)(pcVar4 + 0x20) == param_2)) {
              if ((int)local_d8 != uStack_b8._4_4_) {
                uVar3 = ((uint)((ulonglong)pcVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar4 >> 4)
                        ) * -0x7a143595;
                uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
                puVar5 = local_70;
                if (local_70 == (undefined1 *)0x0) {
                  puVar5 = local_b0;
                }
                iVar6 = *(int *)(puVar5 + (ulonglong)(local_68 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
                if (iVar6 != -1) {
                  puVar5 = local_e0;
                  if (local_e0 == (undefined1 *)0x0) {
                    puVar5 = local_2e0;
                  }
                  do {
                    if (*(code **)(puVar5 + (longlong)iVar6 * 0x10) == pcVar4) goto LAB_1410f736b;
                    iVar6 = *(int *)(puVar5 + (longlong)iVar6 * 0x10 + 8);
                  } while (iVar6 != -1);
                }
              }
              if (*plVar7 != 0) {
                FUN_1410f77c4(pcVar4,plVar7);
              }
              FUN_1407e55b2(local_2e0,local_2ec,&local_2e8);
            }
          }
LAB_1410f736b:
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar1);
        local_68 = 0;
        if (local_70 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1407e5394(local_2e0);
      plVar7 = plVar7 + 0x24;
    } while (plVar7 != plVar8);
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x78);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x80) * 0x8a;
    do {
      iVar1 = (**(code **)(*param_2 + 0x7b0))(param_2);
      iVar2 = (**(code **)(*param_2 + 0xa08))(param_2);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      local_e0 = (undefined1 *)0x0;
      local_d8 = 0x2000000000;
      local_c8 = 0;
      local_c0 = 0x2000000000;
      uStack_b8 = 0xffffffff;
      local_70 = (undefined1 *)0x0;
      local_68 = 0;
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          pcVar4 = (code *)(**(code **)(*param_2 + 0x610))(param_2,iVar2);
          if (pcVar4 != (code *)0x0) {
            if (DAT_14caec470 == 0) {
              local_2e8 = FUN_1417df956;
              local_300 = FUN_14081d0ea;
              local_308 = &LAB_1463eaa20;
              local_310 = &local_2e8;
              local_318 = &LAB_147bbd9ea;
              local_320 = FUN_1401cf6d7;
              local_328 = L"Engine";
              local_330 = 0;
              local_338 = 0x10000000;
              local_340 = 8;
              local_348 = 0x330;
              FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                            FUN_1463eb22e);
            }
            if (((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(pcVar4 + 0x10) + 0x38))
                && (*(longlong *)
                     (*(longlong *)(*(longlong *)(pcVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) &&
               (local_2e8 = pcVar4, *(longlong **)(pcVar4 + 0x20) == param_2)) {
              if ((int)local_d8 != uStack_b8._4_4_) {
                uVar3 = ((uint)((ulonglong)pcVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar4 >> 4)
                        ) * -0x7a143595;
                uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
                puVar5 = local_70;
                if (local_70 == (undefined1 *)0x0) {
                  puVar5 = local_b0;
                }
                iVar6 = *(int *)(puVar5 + (ulonglong)(local_68 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
                if (iVar6 != -1) {
                  puVar5 = local_e0;
                  if (local_e0 == (undefined1 *)0x0) {
                    puVar5 = local_2e0;
                  }
                  do {
                    if (*(code **)(puVar5 + (longlong)iVar6 * 0x10) == pcVar4) goto LAB_1410f7568;
                    iVar6 = *(int *)(puVar5 + (longlong)iVar6 * 0x10 + 8);
                  } while (iVar6 != -1);
                }
              }
              if (*plVar7 != 0) {
                FUN_1410f786a(pcVar4,plVar7);
              }
              FUN_1407e55b2(local_2e0,local_2ec,&local_2e8);
            }
          }
LAB_1410f7568:
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar1);
        local_68 = 0;
        if (local_70 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1407e5394(local_2e0);
      plVar7 = plVar7 + 0x8a;
    } while (plVar7 != plVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f77c4 FUN_1410f77c4 body=165 status=ok
// SIG undefined FUN_1410f77c4(void)

void FUN_1410f77c4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *_Dst;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    _Dst = *(longlong **)(param_1 + 0x180);
    do {
      if (((*param_2 == *_Dst) &&
          (*(int *)((longlong)_Dst + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
         ((char)_Dst[1] == (char)param_2[1])) {
        if (uVar1 - 1 != (int)uVar3) {
          iVar4 = (uVar1 - 1) - (int)uVar3;
          iVar2 = 1;
          if (iVar4 < 1) {
            iVar2 = iVar4;
          }
          memmove(_Dst,(void *)((longlong)*(longlong **)(param_1 + 0x180) +
                               (ulonglong)(uVar1 - iVar2) * 0x24),(longlong)iVar2 * 0x24);
          uVar1 = *(uint *)(param_1 + 0x188);
        }
        *(uint *)(param_1 + 0x188) = uVar1 - 1;
        FUN_1435769fd(param_1,param_2);
        return;
      }
      uVar3 = uVar3 + 1;
      _Dst = (longlong *)((longlong)_Dst + 0x24);
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 1410f786a FUN_1410f786a body=168 status=ok
// SIG undefined FUN_1410f786a(void)

void FUN_1410f786a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *_Dst;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x198);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    _Dst = *(longlong **)(param_1 + 400);
    do {
      if (((*param_2 == *_Dst) &&
          (*(int *)((longlong)_Dst + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
         ((char)_Dst[1] == (char)param_2[1])) {
        if (uVar1 - 1 != (int)uVar3) {
          iVar4 = (uVar1 - 1) - (int)uVar3;
          iVar2 = 1;
          if (iVar4 < 1) {
            iVar2 = iVar4;
          }
          memmove(_Dst,*(longlong **)(param_1 + 400) + (ulonglong)(uVar1 - iVar2) * 6,
                  (longlong)iVar2 * 0x30);
          uVar1 = *(uint *)(param_1 + 0x198);
        }
        *(uint *)(param_1 + 0x198) = uVar1 - 1;
        FUN_143577557(param_1,param_2);
        return;
      }
      uVar3 = uVar3 + 1;
      _Dst = _Dst + 6;
    } while (uVar1 != uVar3);
  }
  return;
}



// FUNCTION 1410f7912 FUN_1410f7912 body=374 status=ok
// SIG undefined FUN_1410f7912(void)

undefined8 FUN_1410f7912(longlong *param_1,longlong param_2)

{
  longlong lVar1;
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
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
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
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          lVar1 = FUN_1410f7aa2(lVar1);
          if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f7aa2 FUN_1410f7aa2 body=105 status=ok
// SIG undefined FUN_1410f7aa2(void)

void FUN_1410f7aa2(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1410f7b58();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1410f7b0c(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f7b0c FUN_1410f7b0c body=76 status=ok
// SIG undefined FUN_1410f7b0c(void)

void FUN_1410f7b0c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1410f7b58();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1410f7b49;
    }
  }
  lVar2 = 0;
LAB_1410f7b49:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1410f7b58 FUN_1410f7b58 body=228 status=ok
// SIG undefined FUN_1410f7b58(void)

longlong FUN_1410f7b58(void)

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
  if (DAT_14cbb3428 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c5b19f;
    local_40 = &LAB_1459c3e56;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_VaultCards",&DAT_14cbb3428,&DAT_148c5b19e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3428;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f7e60 FUN_1410f7e60 body=338 status=ok
// SIG undefined FUN_1410f7e60(void)

void FUN_1410f7e60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xb9) == '\0') {
    lVar5 = *(longlong *)(param_1 + 0xa0);
    if (lVar5 != 0) {
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        FUN_14480f766(lVar5 + 0x18);
        lVar5 = *(longlong *)(param_1 + 0xa0);
      }
      *(undefined8 *)(param_1 + 0xb0) = 0;
      FUN_14103b6f6(lVar5,1);
      *(undefined8 *)(param_1 + 0xa0) = 0;
      plVar4 = *(longlong **)(param_1 + 0xa8);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xa8) = 0;
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
    *(undefined2 *)(param_1 + 0xb8) = 0x101;
  }
  else if ((*(char *)(param_1 + 0xb8) != '\x01') && (*(char *)(param_1 + 0xb8) != '\0'))
  goto LAB_1410f7eea;
  puVar6 = &local_48;
  local_30 = 4;
  local_48 = 0;
  local_28 = 1;
  FUN_1410f7fb4(param_1,param_2,&DAT_14cb8aa00,puVar6);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_30) {
      puVar6 = (undefined4 *)CONCAT44(uStack_44,local_48);
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(uStack_44,local_48));
  }
LAB_1410f7eea:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f7fb4 FUN_1410f7fb4 body=229 status=ok
// SIG undefined FUN_1410f7fb4(void)

void FUN_1410f7fb4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_2 + 8);
  lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x70);
  if (lVar4 != 0) {
    do {
      if (*(longlong *)(lVar4 + 0x20) == *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10)) {
        iVar1 = *(int *)(lVar4 + 0x44);
        FUN_140c5894c(local_58,param_4);
        local_70 = param_3;
        local_68 = local_58;
        FUN_1410f809a(lVar2 + iVar1,local_5c,&local_70,0);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
        if (pcVar3 != (code *)0x0) {
          ppppuVar5 = (undefined8 ****)local_50[0];
          if (local_38 < 0x19) {
            ppppuVar5 = local_50;
          }
          (*pcVar3)(ppppuVar5);
        }
        if (0x18 < local_38) {
          FUN_1400020a8(local_50[0]);
        }
        break;
      }
      lVar4 = *(longlong *)(lVar4 + 0x48);
    } while (lVar4 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f809a FUN_1410f809a body=358 status=ok
// SIG undefined FUN_1410f809a(void)

undefined4 *
FUN_1410f809a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ffab16(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_140382e86(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_140ffa974(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x44) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140ffaf02(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f8202 FUN_1410f8202 body=223 status=ok
// SIG undefined FUN_1410f8202(void)

undefined8 * FUN_1410f8202(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1410f82e2();
  *param_1 = &PTR_FUN_14b3f5210;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x90] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x8e] = DAT_14c8464e0;
  param_1[0x8f] = uVar1;
  param_1[0x93] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x91] = DAT_14c8464e0;
  param_1[0x92] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x94] = DAT_14c8464e0;
  param_1[0x95] = uVar1;
  param_1[0x96] = DAT_14c8464f0;
  param_1[0x97] = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  return param_1;
}



// FUNCTION 1410f82e2 FUN_1410f82e2 body=298 status=ok
// SIG undefined FUN_1410f82e2(void)

undefined8 * FUN_1410f82e2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8379d0;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  memset(param_1 + 0x11,0,0x100);
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x3ff00000;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0x3ff0000000000000;
  param_1[0x7b] = 0x3ff0000000000000;
  param_1[0x7c] = 0x3ff0000000000000;
  param_1[0x7d] = 0;
  param_1[0x7e] = &PTR_FUN_14a819a28;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(byte *)(param_1 + 0x83) = *(byte *)(param_1 + 0x83) & 0xf0;
  *(undefined1 *)((longlong)param_1 + 0x419) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0x3f8000003f666666;
  param_1[0x88] = 0x412000003f7ef9db;
  return param_1;
}



// FUNCTION 1410f840c FUN_1410f840c body=467 status=ok
// SIG undefined FUN_1410f840c(void)

void FUN_1410f840c(uint *param_1)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar9 = *param_1;
  if (uVar9 == 0) {
    uVar5 = 0x20;
  }
  else {
    uVar5 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
  }
  lVar11 = *(longlong *)(param_1 + (ulonglong)uVar5 * 2 + 2);
  puVar12 = (uint *)(lVar11 + 0x150);
  if (lVar11 == 0) {
    puVar12 = (uint *)0x0;
  }
  if (puVar12 == param_1) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x800000000;
    if (param_1 == (uint *)0x0) {
      uVar9 = 0;
    }
    bVar3 = (byte)uVar5 & 0x1f;
    uVar9 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar9;
    if (uVar9 != 0) {
      uVar5 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      uVar10 = (ulonglong)uVar5;
      if (param_1 == (uint *)0x0) {
        lVar11 = 0;
      }
      lVar11 = *(longlong *)(lVar11 + 0x158 + uVar10 * 8);
      if (lVar11 != 0) {
        do {
          uVar4 = local_38;
          lVar8 = (longlong)(int)local_38;
          uVar5 = (int)local_38 + 1;
          local_38 = CONCAT44(local_38._4_4_,uVar5);
          if (local_38._4_4_ < uVar5) {
            FUN_147389b56(local_c0,uVar4 & 0xffffffff);
          }
          puVar6 = local_40;
          if (local_40 == (undefined1 *)0x0) {
            puVar6 = local_c0;
          }
          *(ulonglong *)(puVar6 + lVar8 * 0x10) = (ulonglong)uVar9 | uVar10 << 0x20;
          *(longlong *)(puVar6 + lVar8 * 0x10 + 8) = lVar11;
          bVar3 = (byte)uVar10 & 0x1f;
          uVar9 = uVar9 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          if (uVar9 == 0) break;
          uVar5 = 0;
          if (uVar9 != 0) {
            for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
          uVar10 = (ulonglong)uVar5;
          lVar11 = *(longlong *)(lVar11 + 0x158 + uVar10 * 8);
        } while (lVar11 != 0);
        lVar11 = (longlong)(int)local_38;
        puVar6 = local_c0;
        if (local_40 != (undefined1 *)0x0) {
          puVar6 = local_40;
        }
        if (lVar11 != 0) {
          lVar8 = 0;
          do {
            lVar2 = *(longlong *)(puVar6 + lVar8 + 8);
            LOCK();
            piVar1 = (int *)(lVar2 + 0x148);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            puVar7 = (undefined8 *)(lVar2 + 0x140);
            if (puVar7 != (undefined8 *)0x0 && *piVar1 == 0) {
              (**(code **)*puVar7)(puVar7,1);
            }
            lVar8 = lVar8 + 0x10;
          } while (lVar11 * 0x10 != lVar8);
        }
      }
    }
    uVar10 = local_38 >> 0x20;
    local_38 = local_38 & 0xffffffff00000000;
    if ((int)uVar10 != 0) {
      FUN_1410f85e0(local_c0);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f85e0 FUN_1410f85e0 body=89 status=ok
// SIG undefined FUN_1410f85e0(void)

void FUN_1410f85e0(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 4);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 1410f8644 FUN_1410f8644 body=228 status=ok
// SIG undefined FUN_1410f8644(void)

longlong FUN_1410f8644(void)

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
  if (DAT_14cab3610 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633a98e;
    local_38 = &LAB_147573ebd;
    local_40 = FUN_1463406c4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneNameableTrack",&DAT_14cab3610,&DAT_147573ebc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3610;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f8732 FUN_1410f8732 body=181 status=ok
// SIG undefined FUN_1410f8732(void)

undefined8 * FUN_1410f8732(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14ac47b90;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)(param_1 + 0x15) = 2;
  *(byte *)(param_1 + 0x16) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined4 *)(param_1 + 0x17) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 1410f87e8 thunk_FUN_14006e5d0 body=5 status=ok
// SIG undefined thunk_FUN_14006e5d0(void)

void thunk_FUN_14006e5d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a85ebb0;
  param_1[5] = &PTR_FUN_14a85f5b0;
  param_1[6] = &PTR_LAB_14a85f5f0;
  param_1[0x55] = &PTR_FUN_14a85f640;
  param_1[0x56] = &PTR_FUN_14a85f6c0;
  param_1[0x57] = &PTR_FUN_14a85f6d0;
  FUN_144760e21(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf));
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0xb6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760d56(param_1 + 0x82);
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x6f) == '\x01') {
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e));
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 1410f87ee FUN_1410f87ee body=64 status=ok
// SIG undefined FUN_1410f87ee(void)

undefined8 * FUN_1410f87ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5f8130;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1410f882e FUN_1410f882e body=293 status=ok
// SIG undefined FUN_1410f882e(void)

void FUN_1410f882e(ulonglong param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  iVar6 = param_2 - param_3;
  uVar9 = 1;
  if (((param_1 & 1) != 0) && (0 < iVar6)) {
    uVar2 = (**(code **)(*DAT_14c82b500 + 0x20))();
    uVar4 = 1;
    if (1 < (int)uVar2) {
      uVar4 = uVar2;
    }
    uVar2 = (iVar6 + 99U) / 100;
    uVar9 = (ulonglong)uVar4;
    if (uVar2 < uVar4) {
      uVar9 = (ulonglong)uVar2;
    }
  }
  iVar1 = DAT_14c949e08;
  uVar2 = (uint)uVar9;
  iVar7 = iVar6 / (int)uVar2 + 1;
  lVar10 = (longlong)DAT_14c949e08;
  iVar3 = DAT_14c949e08 + uVar2;
  uVar4 = DAT_14c949e0c - DAT_14c949e08;
  DAT_14c949e08 = iVar3;
  if (uVar4 < uVar2) {
    FUN_14689d974(iVar1,(longlong)iVar6 % (longlong)(int)uVar2 & 0xffffffff);
  }
  puVar5 = DAT_14c949e00;
  if (DAT_14c949e00 == (undefined4 *)0x0) {
    puVar5 = &DAT_14c949a00;
  }
  FUN_1410f8953(puVar5 + lVar10 * 8,uVar9);
  lVar10 = 0xc;
  uVar8 = 0;
  do {
    puVar5 = DAT_14c949e00;
    if (DAT_14c949e00 == (undefined4 *)0x0) {
      puVar5 = &DAT_14c949a00;
    }
    *(int *)((longlong)puVar5 + lVar10 + -0xc) = param_3;
    *(int *)((longlong)puVar5 + lVar10 + -8) = param_3;
    iVar6 = param_2 - iVar7 * (uVar2 - 1);
    if (uVar8 < uVar2 - 1) {
      iVar6 = iVar7;
    }
    *(int *)((longlong)puVar5 + lVar10 + -4) = iVar6;
    iVar6 = iVar6 + param_3 + -1;
    if (param_2 + -1 < iVar6) {
      iVar6 = param_2 + -1;
    }
    *(int *)((longlong)puVar5 + lVar10) = iVar6;
    uVar8 = uVar8 + 1;
    param_3 = param_3 + iVar7;
    lVar10 = lVar10 + 0x20;
  } while (uVar9 != uVar8);
  return;
}



// FUNCTION 1410f8953 FUN_1410f8953 body=14 status=ok
// SIG undefined FUN_1410f8953(void)

void FUN_1410f8953(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 5);
  return;
}



// FUNCTION 1410f8962 FUN_1410f8962 body=1703 status=ok
// SIG undefined FUN_1410f8962(void)

longlong FUN_1410f8962(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined4 param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  int iVar26;
  undefined8 *puVar27;
  uint uVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar27 = &DAT_14c84635c;
  if (param_3 != 0) {
    puVar27 = (undefined8 *)(param_3 + 0x20);
  }
  uVar6 = *puVar27;
  local_5c = 0;
  if (param_2 != 0) {
    uVar21 = *(uint *)(param_2 + 0xc);
    if ((int)uVar21 < DAT_14c9647dc) {
      lVar29 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
    }
    else {
      lVar29 = 0;
    }
    iVar19 = *(int *)(lVar29 + 0x10);
    if (*(int *)(lVar29 + 0x10) == 0) {
      LOCK();
      iVar19 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar19;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
      }
      LOCK();
      iVar19 = *(int *)(lVar29 + 0x10);
      bVar30 = iVar19 == 0;
      if (bVar30) {
        *(int *)(lVar29 + 0x10) = iVar20;
        iVar19 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar19 = iVar20;
      }
    }
    local_5c = CONCAT44(iVar19,uVar21);
  }
  local_4c = param_5;
  uStack_54 = uVar6;
  FUN_1410f900a(param_1 + 0x98,&local_70);
  lVar29 = local_70;
  if (local_70 != 0) {
    FUN_1410f9340(local_70,param_2,uVar6,param_4);
    goto LAB_1410f8ca5;
  }
  if ((longlong)*(int *)(param_1 + 0x200) < 1) {
    lVar29 = FUN_14001cc68(0x38,0x10);
    FUN_1410f990a(lVar29,param_2,uVar6,param_4);
    plVar25 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7 = local_68;
    plVar25[1] = (longlong)&DAT_100000001;
    *plVar25 = (longlong)&PTR_FUN_14a452e90;
    plVar25[2] = lVar29;
    local_70 = lVar29;
    if (plVar25 == local_68) {
      plVar18 = local_68;
      if (plVar25 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar25 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar25)(plVar25);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar18 = local_68;
          if (*piVar1 == 0) {
            lVar29 = *plVar25;
            goto LAB_1410f8d78;
          }
        }
      }
    }
    else {
      plVar18 = plVar25;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_68 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          puVar27 = (undefined8 *)*local_68;
          local_68 = plVar25;
          (*(code *)*puVar27)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar18 = local_68;
          if (*piVar1 == 0) {
            lVar29 = *plVar7;
            plVar25 = plVar7;
LAB_1410f8d78:
            (**(code **)(lVar29 + 0x10))(plVar25);
            plVar18 = local_68;
          }
        }
      }
    }
  }
  else {
    lVar29 = *(longlong *)(param_1 + 0x1f8);
    lVar22 = (longlong)*(int *)(param_1 + 0x200) * 0x10;
    lVar23 = *(longlong *)(lVar29 + -0x10 + lVar22);
    plVar7 = *(longlong **)(lVar29 + -8 + lVar22);
    puVar27 = (undefined8 *)(lVar29 + -0x10 + lVar22);
    *puVar27 = 0;
    puVar27[1] = 0;
    iVar19 = *(int *)(param_1 + 0x200);
    lVar29 = *(longlong *)(param_1 + 0x1f8);
    lVar22 = (longlong)iVar19 * 0x10;
    plVar25 = *(longlong **)(lVar29 + -8 + lVar22);
    local_80 = (longlong *)param_2;
    local_78 = uVar6;
    if (plVar25 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar25 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
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
    iVar20 = *(int *)(param_1 + 0x200) - iVar19;
    if (iVar20 != 0) {
      memmove((void *)(lVar29 + lVar22 + -0x10),(void *)(lVar29 + lVar22),(longlong)iVar20 << 4);
      iVar19 = *(int *)(param_1 + 0x200);
    }
    *(int *)(param_1 + 0x200) = iVar19 + -1;
    FUN_1410f9100(param_1 + 0x1f8);
    plVar25 = local_68;
    uVar6 = local_78;
    plVar18 = local_80;
    local_70 = lVar23;
    if (plVar7 == local_68) {
      plVar17 = local_68;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar25 = plVar7 + 1;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)*plVar25 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar19 = *piVar1;
          UNLOCK();
          plVar25 = plVar7;
          goto joined_r0x0001410f8f82;
        }
      }
    }
    else {
      plVar17 = plVar7;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_68 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          puVar27 = (undefined8 *)*local_68;
          local_68 = plVar7;
          (*(code *)*puVar27)(plVar25);
          LOCK();
          piVar1 = (int *)((longlong)plVar25 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar19 = *piVar1;
          UNLOCK();
joined_r0x0001410f8f82:
          plVar17 = local_68;
          if (iVar19 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            plVar17 = local_68;
          }
        }
      }
    }
    local_68 = plVar17;
    FUN_1410f9340(local_70,plVar18,uVar6,param_4);
    plVar18 = local_68;
  }
  local_68 = plVar18;
  plVar7 = local_68;
  lVar29 = local_70;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  local_80 = (longlong *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x16c) == 0) {
    iVar19 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = iVar19 + 1;
    if (*(int *)(param_1 + 0x144) == iVar19) {
      FUN_140044672(local_80,iVar19);
    }
    lVar22 = (longlong)iVar19;
    iVar20 = FUN_144a54ea4(param_1 + 0x148,1);
    lVar23 = *(longlong *)(param_1 + 0x158);
    if (*(longlong *)(param_1 + 0x158) == 0) {
      lVar23 = param_1 + 0x148;
    }
    iVar26 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar26 = iVar20;
    }
    bVar8 = (byte)iVar20 & 0x1f;
    puVar2 = (uint *)(lVar23 + (longlong)(iVar26 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x168);
    lVar22 = (longlong)iVar19;
    iVar20 = *(int *)(*(longlong *)(param_1 + 0x138) + 4 + lVar22 * 0x30);
    *(int *)(param_1 + 0x168) = iVar20;
    iVar26 = *(int *)(param_1 + 0x16c) + -1;
    *(int *)(param_1 + 0x16c) = iVar26;
    if (iVar26 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar20 * 0x30) = 0xffffffff;
    }
  }
  lVar23 = param_1 + 0x148;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar23 = *(longlong *)(param_1 + 0x158);
  }
  iVar20 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar20 = iVar19;
  }
  puVar2 = (uint *)(lVar23 + (longlong)(iVar20 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar19 & 0x1f);
  iVar20 = 1;
  lVar23 = *(longlong *)(param_1 + 0x138);
  lVar22 = lVar22 * 0x30;
  puVar3 = (undefined4 *)(lVar23 + lVar22);
  *(undefined4 *)(lVar23 + 0x10 + lVar22) = local_4c;
  puVar4 = (undefined4 *)(lVar23 + lVar22);
  *puVar4 = (undefined4)local_5c;
  puVar4[1] = local_5c._4_4_;
  puVar4[2] = (undefined4)uStack_54;
  puVar4[3] = uStack_54._4_4_;
  *(longlong *)(lVar23 + 0x18 + lVar22) = lVar29;
  *(longlong **)(lVar23 + 0x20 + lVar22) = plVar7;
  *(undefined4 *)(lVar23 + 0x28 + lVar22) = 0xffffffff;
  uVar21 = FUN_1410f9189(puVar3);
  uVar28 = *(int *)(param_1 + 0x140) - *(int *)(param_1 + 0x16c);
  if (uVar28 == 1) {
LAB_1410f8c2d:
    if (((int)uVar28 < 1) || (iVar20 <= *(int *)(param_1 + 0x180))) {
      uVar21 = *(int *)(param_1 + 0x180) - 1U & uVar21;
      puVar3[0xb] = uVar21;
      lVar23 = *(longlong *)(param_1 + 0x178);
      if (*(longlong *)(param_1 + 0x178) == 0) {
        lVar23 = param_1 + 0x170;
      }
      puVar3[10] = *(undefined4 *)
                    (lVar23 + ((longlong)*(int *)(param_1 + 0x180) - 1U & (longlong)(int)uVar21) * 4
                    );
      lVar23 = *(longlong *)(param_1 + 0x178);
      if (*(longlong *)(param_1 + 0x178) == 0) {
        lVar23 = param_1 + 0x170;
      }
      *(int *)(lVar23 + ((longlong)*(int *)(param_1 + 0x180) - 1U & (longlong)(int)uVar21) * 4) =
           iVar19;
    }
    else {
      *(int *)(param_1 + 0x180) = iVar20;
      FUN_1410f9eae(local_80);
    }
  }
  else {
    iVar26 = FUN_1410f9076(local_80,uVar21,puVar3);
    if (iVar26 == -1) {
      if (3 < uVar28) {
        uVar24 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
        lVar23 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar20 = 1 << ((byte)lVar23 & 0x1f);
      }
      goto LAB_1410f8c2d;
    }
    puVar4 = (undefined4 *)(*local_80 + (longlong)iVar26 * 0x30);
    plVar25 = *(longlong **)(*local_80 + 0x20 + (longlong)iVar26 * 0x30);
    if (plVar25 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar25 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
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
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    uVar13 = puVar3[4];
    uVar14 = puVar3[5];
    uVar15 = puVar3[6];
    uVar16 = puVar3[7];
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar3 + 8);
    puVar4[4] = uVar13;
    puVar4[5] = uVar14;
    puVar4[6] = uVar15;
    puVar4[7] = uVar16;
    *puVar4 = uVar9;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    FUN_14068a358(local_80,iVar19);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar25 = plVar7 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
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
LAB_1410f8ca5:
  plVar7 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar25 = local_68 + 1;
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f900a FUN_1410f900a body=107 status=ok
// SIG undefined FUN_1410f900a(void)

undefined8 * FUN_1410f900a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_1410f9189(param_3);
  iVar2 = FUN_1410f9076((longlong *)(param_1 + 0xa0),uVar1,param_3);
  if ((iVar2 == -1) || (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0xa0), lVar3 == 0))
  {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar3 + 0x18);
    lVar3 = *(longlong *)(lVar3 + 0x20);
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 1410f9076 FUN_1410f9076 body=138 status=ok
// SIG undefined FUN_1410f9076(void)

int FUN_1410f9076(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x30;
        if ((*(int *)(lVar3 + lVar5) == *param_3) && (*(int *)(lVar3 + 4 + lVar5) == param_3[1])) {
          lVar1 = lVar3 + lVar5;
          if ((*(float *)(lVar1 + 8) == (float)param_3[2]) &&
             (!NAN(*(float *)(lVar1 + 8)) && !NAN((float)param_3[2]))) {
            if (((*(float *)(lVar1 + 0xc) == (float)param_3[3]) &&
                (!NAN(*(float *)(lVar1 + 0xc)) && !NAN((float)param_3[3]))) &&
               (*(int *)(lVar1 + 0x10) == param_3[4])) {
              return iVar2;
            }
          }
        }
        iVar2 = *(int *)(lVar3 + 0x28 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1410f9100 FUN_1410f9100 body=137 status=ok
// SIG undefined FUN_1410f9100(void)

void FUN_1410f9100(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1410f9189 FUN_1410f9189 body=439 status=ok
// SIG undefined FUN_1410f9189(void)

uint FUN_1410f9189(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_1[4];
  iVar1 = FUN_1448eb174(param_1 + 2,8,0);
  uVar2 = uVar4 >> 0xd ^ iVar1 - uVar4;
  uVar3 = uVar2 << 8 ^ (-0x61c88647 - uVar4) - uVar2;
  uVar4 = uVar3 >> 0xd ^ (uVar4 - uVar2) - uVar3;
  uVar5 = uVar4 >> 0xc ^ (uVar2 - uVar3) - uVar4;
  uVar6 = uVar5 << 0x10 ^ (uVar3 - uVar4) - uVar5;
  uVar2 = uVar6 >> 5 ^ (uVar4 - uVar5) - uVar6;
  uVar3 = uVar2 >> 3 ^ (uVar5 - uVar6) - uVar2;
  uVar4 = uVar3 << 10 ^ (uVar6 - uVar2) - uVar3;
  uVar2 = uVar4 >> 0xf ^ uVar2 - (uVar3 + uVar4);
  uVar4 = param_1[1];
  uVar5 = uVar4 >> 0xd ^ *param_1 - uVar4;
  uVar3 = uVar5 << 8 ^ (-0x61c88647 - uVar4) - uVar5;
  uVar4 = uVar3 >> 0xd ^ (uVar4 - uVar5) - uVar3;
  uVar5 = uVar4 >> 0xc ^ (uVar5 - uVar3) - uVar4;
  uVar3 = uVar5 << 0x10 ^ (uVar3 - uVar4) - uVar5;
  uVar4 = uVar3 >> 5 ^ (uVar4 - uVar5) - uVar3;
  uVar5 = uVar4 >> 3 ^ (uVar5 - uVar3) - uVar4;
  uVar3 = uVar5 << 10 ^ (uVar3 - uVar4) - uVar5;
  uVar3 = uVar2 >> 0xd ^ (uVar3 >> 0xf ^ uVar4 - (uVar5 + uVar3)) - uVar2;
  uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
  uVar4 = uVar5 >> 0xd ^ (uVar2 - uVar3) - uVar5;
  uVar2 = uVar4 >> 0xc ^ (uVar3 - uVar5) - uVar4;
  uVar3 = uVar2 << 0x10 ^ (uVar5 - uVar4) - uVar2;
  uVar5 = uVar3 >> 5 ^ (uVar4 - uVar2) - uVar3;
  uVar2 = uVar5 >> 3 ^ (uVar2 - uVar3) - uVar5;
  uVar4 = uVar2 << 10 ^ (uVar3 - uVar5) - uVar2;
  return uVar4 >> 0xf ^ uVar5 - (uVar2 + uVar4);
}



// FUNCTION 1410f9340 FUN_1410f9340 body=1342 status=ok
// SIG undefined FUN_1410f9340(void)

void FUN_1410f9340(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  float fVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  byte local_b9;
  ulonglong local_b8;
  longlong local_b0;
  uint *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_2 == (longlong *)0x0) || ((*(uint *)(param_2 + 1) >> 0x1e & 1) != 0)) ||
     (cVar3 = FUN_1410f9880(param_2,0), cVar3 == '\0')) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    goto LAB_1410f942a;
  }
  *(longlong **)(param_1 + 8) = param_2;
  lVar7 = (**(code **)(*param_2 + 0x2f0))(param_2);
  *(longlong *)(param_1 + 0x10) = lVar7;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar11 = *(int *)(lVar7 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar11 != 2) {
        if (iVar11 != 1) goto LAB_1410f93e3;
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_1410f94ed;
        goto LAB_1410f93ec;
      }
LAB_1410f94ed:
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      local_d0 = 1;
      local_d8 = 5;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x310))(*(longlong **)(param_1 + 8),&local_78,4,1)
      ;
      *(undefined1 *)(param_1 + 0x30) = 0;
      lVar7 = FUN_1410f9d84();
      if (lVar7 != 0) {
        if ((longlong)(int)uStack_70 != 0) {
          local_90 = local_78 + (int)uStack_70;
          local_a8 = (uint *)(lVar7 + 0x48);
          uVar4 = *(uint *)(lVar7 + 0x60);
          plVar12 = local_78;
          do {
            local_b0 = *plVar12;
            if (uVar4 == 0) {
              uVar23 = 1;
              uVar22 = 0;
              uVar17 = 0;
              iVar11 = 0;
            }
            else {
              puVar9 = *(uint **)(lVar7 + 0x58);
              if (*(uint **)(lVar7 + 0x58) == (uint *)0x0) {
                puVar9 = local_a8;
              }
              uVar14 = *puVar9;
              if (uVar14 == 0) {
                iVar11 = uVar4 + 0x1e;
                if (-1 < (int)(uVar4 - 1)) {
                  iVar11 = uVar4 - 1;
                }
                uVar22 = 0;
                uVar17 = (ulonglong)(uint)(iVar11 >> 5);
                if (iVar11 >> 5 < 1) {
                  uVar17 = uVar22;
                }
                iVar11 = 0;
                do {
                  if (uVar17 == uVar22) goto LAB_1410f9735;
                  iVar11 = iVar11 + 0x20;
                  uVar14 = puVar9[uVar22 + 1];
                  uVar22 = uVar22 + 1;
                } while (uVar14 == 0);
              }
              else {
                uVar22 = 0;
                iVar11 = 0;
              }
              uVar23 = (ulonglong)(-uVar14 & uVar14);
              uVar17 = uVar23 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar14 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              uVar17 = (ulonglong)uVar14;
              if ((int)uVar4 <= (int)uVar14) {
                uVar17 = (ulonglong)uVar4;
              }
            }
            if ((uint)uVar17 != uVar4) {
              uVar14 = 0xffffffff;
              local_b8 = (ulonglong)uVar4;
              local_a0 = plVar12;
              local_98 = param_4;
              do {
                lVar16 = *(longlong *)(lVar7 + 0x38);
                lVar15 = (longlong)(int)uVar17 * 0x40;
                if ((local_b0 != 0 & *(byte *)(lVar16 + 8 + lVar15)) == 1) {
                  local_b9 = *(byte *)(lVar16 + lVar15);
                  local_88 = 0;
                  uStack_80 = 0;
                  FUN_1401031ac(local_b0,0);
                  iVar13 = *(int *)(lVar16 + lVar15 + 0x20);
                  if ((int)uStack_80 == iVar13) {
                    if ((int)uStack_80 < 2) {
                      bVar24 = true;
                    }
                    else {
                      lVar18 = 0;
                      while( true ) {
                        uVar1 = *(ushort *)(local_88 + lVar18);
                        uVar4 = (uint)uVar1;
                        uVar2 = *(ushort *)(*(longlong *)(lVar16 + lVar15 + 0x18) + lVar18);
                        uVar21 = (uint)uVar2;
                        if (uVar1 != uVar2) {
                          if ((uVar2 | uVar1) < 0x80) {
                            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                            uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                            goto LAB_1410f97a3;
                          }
                          iVar13 = uVar4 - uVar21;
                          goto LAB_1410f97ce;
                        }
                        if (uVar1 == 0) break;
LAB_1410f97a3:
                        lVar18 = lVar18 + 2;
                      }
                      iVar13 = 0;
LAB_1410f97ce:
                      bVar24 = iVar13 == 0;
                    }
                  }
                  else {
                    bVar24 = iVar13 + (int)uStack_80 == 1;
                  }
                  if (local_88 != 0) {
                    FUN_1400020a8();
                  }
                  plVar12 = local_a0;
                  param_4 = local_98;
                  if (bVar24) {
                    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | local_b9;
                  }
                }
                uVar14 = uVar14 & ~(uint)uVar23;
                puVar9 = *(uint **)(lVar7 + 0x58);
                if (*(uint **)(lVar7 + 0x58) == (uint *)0x0) {
                  puVar9 = local_a8;
                }
                uVar4 = *(uint *)(lVar7 + 0x60);
                iVar13 = (int)uVar22;
                lVar16 = (longlong)iVar13;
                uVar21 = puVar9[lVar16] & uVar14;
                if (uVar21 == 0) {
                  iVar19 = uVar4 + 0x1e;
                  if (-1 < (int)(uVar4 - 1)) {
                    iVar19 = uVar4 - 1;
                  }
                  iVar19 = iVar19 >> 5;
                  iVar11 = iVar11 + 0x20;
                  iVar20 = iVar19;
                  if (iVar19 < iVar13) {
                    iVar20 = iVar13;
                  }
                  if (iVar13 < iVar19) {
                    lVar15 = 0;
                    do {
                      uVar21 = puVar9[lVar16 + lVar15 + 1];
                      if (uVar21 != 0) {
                        uVar22 = (ulonglong)(iVar13 + (int)lVar15 + 1);
                        uVar14 = 0xffffffff;
                        goto LAB_1410f969f;
                      }
                      iVar11 = iVar11 + 0x20;
                      lVar15 = lVar15 + 1;
                    } while (iVar20 - lVar16 != lVar15);
                    uVar14 = 0xffffffff;
                    lVar16 = (longlong)iVar20;
                  }
                  uVar17 = (ulonglong)uVar4;
                  uVar22 = lVar16 + 1U & 0xffffffff;
                }
                else {
LAB_1410f969f:
                  uVar23 = (ulonglong)(-uVar21 & uVar21);
                  uVar17 = uVar23 * 2 + 1;
                  lVar16 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                    }
                  }
                  uVar21 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                  uVar17 = (ulonglong)uVar21;
                  if ((int)uVar4 <= (int)uVar21) {
                    uVar17 = (ulonglong)uVar4;
                  }
                }
              } while ((int)uVar17 != (int)local_b8);
            }
LAB_1410f9735:
            plVar12 = plVar12 + 1;
          } while (plVar12 != local_90);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
LAB_1410f93e3:
      if (iVar11 == 0x10) goto LAB_1410f94ed;
LAB_1410f93ec:
      if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar7 + 0xc60), iVar11 == 2))
      goto LAB_1410f94ed;
      if (iVar11 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_1410f94ed;
      }
    }
    lVar7 = *(longlong *)(param_1 + 0x10);
  }
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0xac) & 3) != 0)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
LAB_1410f942a:
  puVar8 = *(undefined8 **)(param_1 + 0x18);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar8 = 0;
    puVar8[1] = &DAT_3f8000003f800000;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    *(undefined8 **)(param_1 + 0x18) = puVar8;
  }
  fVar10 = (float)((ulonglong)param_3 >> 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  iVar11 = (int)ROUND(fVar10 + fVar10 + 0.5) >> 1;
  iVar13 = (int)ROUND((float)param_3 + (float)param_3 + 0.5) >> 1;
  puVar8[3] = CONCAT44(iVar11,iVar13);
  *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = param_1;
  *(int *)(param_1 + 0x28) = iVar13;
  *(int *)(param_1 + 0x2c) = iVar11;
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410f9880 FUN_1410f9880 body=137 status=ok
// SIG undefined FUN_1410f9880(void)

bool FUN_1410f9880(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  
  if (((longlong *)0xff < param_1) && (*param_1 != 0)) {
    lVar1 = param_1[2];
    if (lVar1 == 0) {
      return false;
    }
    if (((*(uint *)(param_1 + 4) | (uint)lVar1) & 7) != 0) {
      return false;
    }
    if ((*(ulonglong *)(lVar1 + 0x110) & 7) == 0 && *(ulonglong *)(lVar1 + 0x110) != 0) {
      if ((param_2 != '\0') && (cVar2 = FUN_1410f9880(lVar1,0), cVar2 == '\0')) {
        return false;
      }
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        return false;
      }
      if (DAT_14c9647dc <= *(int *)((longlong)param_1 + 0xc)) {
        return false;
      }
      return (uint)*(ushort *)((longlong)param_1 + 0x1a) < DAT_14c87eb08 + 1U;
    }
  }
  return false;
}



// FUNCTION 1410f990a FUN_1410f990a body=1144 status=ok
// SIG undefined FUN_1410f990a(void)

undefined8 *
FUN_1410f990a(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  float fVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  byte local_b9;
  undefined8 *local_b8;
  uint *local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  fVar17 = (float)((ulonglong)param_3 >> 0x20);
  *param_1 = &PTR_LAB_14a44e840;
  param_1[1] = param_2;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar5 = 0;
  puVar5[1] = &DAT_3f8000003f800000;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  param_1[3] = puVar5;
  param_1[4] = param_4;
  iVar14 = (int)ROUND((float)param_3 + (float)param_3 + 0.5) >> 1;
  *(int *)(param_1 + 5) = iVar14;
  iVar13 = (int)ROUND(fVar17 + fVar17 + 0.5) >> 1;
  *(int *)((longlong)param_1 + 0x2c) = iVar13;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar6 = (**(code **)(*param_2 + 0x2f0))(param_2);
  param_1[2] = uVar6;
  *(ulonglong *)(param_1[3] + 0x18) = CONCAT44(iVar13,iVar14);
  *(undefined8 **)(param_1[3] + 0x10) = param_1;
  if ((param_1[1] != 0) &&
     ((cVar4 = FUN_144a5d717(), cVar4 != '\0' || (cVar4 = FUN_144a61b4f(), cVar4 != '\0')))) {
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    local_d0 = 1;
    local_d8 = 5;
    (**(code **)(*(longlong *)param_1[1] + 0x310))((longlong *)param_1[1],&local_88,4,1);
    *(undefined1 *)(param_1 + 6) = 0;
    lVar7 = FUN_1410f9d84();
    if (lVar7 != 0) {
      if ((longlong)(int)uStack_80 != 0) {
        local_a8 = local_88 + (int)uStack_80;
        puVar22 = (uint *)(lVar7 + 0x48);
        iVar13 = *(int *)(lVar7 + 0x60);
        plVar16 = local_88;
        local_b8 = param_1;
        local_b0 = puVar22;
        do {
          lVar20 = *plVar16;
          iVar14 = iVar13;
          if (iVar13 == 0) {
            uVar15 = 1;
            uVar23 = 0;
            iVar9 = 0;
            iVar24 = 0;
          }
          else {
            puVar8 = *(uint **)(lVar7 + 0x58);
            if (*(uint **)(lVar7 + 0x58) == (uint *)0x0) {
              puVar8 = puVar22;
            }
            uVar25 = *puVar8;
            if (uVar25 == 0) {
              iVar9 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar9 = iVar13 + -1;
              }
              uVar23 = 0;
              uVar15 = (ulonglong)(uint)(iVar9 >> 5);
              if (iVar9 >> 5 < 1) {
                uVar15 = uVar23;
              }
              iVar24 = 0;
              do {
                if (uVar15 == uVar23) goto LAB_1410f9c85;
                iVar24 = iVar24 + 0x20;
                uVar25 = puVar8[uVar23 + 1];
                uVar23 = uVar23 + 1;
              } while (uVar25 == 0);
            }
            else {
              uVar23 = 0;
              iVar24 = 0;
            }
            uVar15 = (ulonglong)(-uVar25 & uVar25);
            uVar1 = uVar15 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar9 = (iVar24 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar9) {
              iVar9 = iVar13;
            }
          }
          if (iVar9 != iVar13) {
            uVar25 = 0xffffffff;
            local_a0 = lVar20;
            do {
              lVar19 = *(longlong *)(lVar7 + 0x38);
              lVar18 = (longlong)iVar9 * 0x40;
              if ((lVar20 != 0 & *(byte *)(lVar19 + 8 + lVar18)) == 1) {
                local_b9 = *(byte *)(lVar19 + lVar18);
                local_98 = ZEXT416(0);
                FUN_1401031ac(lVar20,0);
                iVar14 = *(int *)(lVar19 + lVar18 + 0x20);
                if (local_98._8_4_ == iVar14) {
                  if ((int)local_98._8_4_ < 2) {
                    bVar26 = true;
                  }
                  else {
                    lVar20 = 0;
                    while( true ) {
                      uVar2 = *(ushort *)(local_98._0_8_ + lVar20);
                      uVar10 = (uint)uVar2;
                      uVar3 = *(ushort *)(*(longlong *)(lVar19 + lVar18 + 0x18) + lVar20);
                      uVar21 = (uint)uVar3;
                      if (uVar2 != uVar3) {
                        if ((uVar3 | uVar2) < 0x80) {
                          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3])
                          goto LAB_1410f9c46;
                        }
                        iVar14 = uVar10 - uVar21;
                        goto LAB_1410f9c7a;
                      }
                      if (uVar2 == 0) break;
LAB_1410f9c46:
                      lVar20 = lVar20 + 2;
                    }
                    iVar14 = 0;
LAB_1410f9c7a:
                    bVar26 = iVar14 == 0;
                  }
                }
                else {
                  bVar26 = iVar14 + local_98._8_4_ == 1;
                }
                if (local_98._0_8_ != 0) {
                  FUN_1400020a8();
                }
                puVar22 = local_b0;
                lVar20 = local_a0;
                if (bVar26) {
                  *(byte *)(local_b8 + 6) = *(byte *)(local_b8 + 6) | local_b9;
                }
              }
              uVar25 = uVar25 & ~(uint)uVar15;
              puVar8 = *(uint **)(lVar7 + 0x58);
              if (*(uint **)(lVar7 + 0x58) == (uint *)0x0) {
                puVar8 = puVar22;
              }
              iVar14 = *(int *)(lVar7 + 0x60);
              iVar9 = (int)uVar23;
              lVar19 = (longlong)iVar9;
              uVar10 = puVar8[lVar19] & uVar25;
              if (uVar10 == 0) {
                iVar11 = iVar14 + 0x1e;
                if (-1 < iVar14 + -1) {
                  iVar11 = iVar14 + -1;
                }
                iVar11 = iVar11 >> 5;
                iVar24 = iVar24 + 0x20;
                iVar12 = iVar11;
                if (iVar11 < iVar9) {
                  iVar12 = iVar9;
                }
                if (iVar9 < iVar11) {
                  lVar18 = 0;
                  do {
                    uVar10 = puVar8[lVar19 + lVar18 + 1];
                    if (uVar10 != 0) {
                      uVar23 = (ulonglong)(iVar9 + (int)lVar18 + 1);
                      uVar25 = 0xffffffff;
                      goto LAB_1410f9b92;
                    }
                    iVar24 = iVar24 + 0x20;
                    lVar18 = lVar18 + 1;
                  } while (iVar12 - lVar19 != lVar18);
                  uVar25 = 0xffffffff;
                  lVar19 = (longlong)iVar12;
                }
                uVar23 = lVar19 + 1U & 0xffffffff;
                iVar9 = iVar14;
              }
              else {
LAB_1410f9b92:
                uVar15 = (ulonglong)(-uVar10 & uVar10);
                uVar1 = uVar15 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                iVar9 = (iVar24 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if (iVar14 <= iVar9) {
                  iVar9 = iVar14;
                }
              }
            } while (iVar9 != iVar13);
          }
LAB_1410f9c85:
          iVar13 = iVar14;
          plVar16 = plVar16 + 1;
          param_1 = local_b8;
        } while (plVar16 != local_a8);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8(local_88);
    }
  }
  if ((param_1[2] != 0) && ((*(byte *)(param_1[2] + 0xac) & 3) != 0)) {
    param_1[2] = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1410f9d84 FUN_1410f9d84 body=67 status=ok
// SIG undefined FUN_1410f9d84(void)

longlong FUN_1410f9d84(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1410f9dc8();
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_1410f9dc8();
    lVar1 = *(longlong *)(lVar2 + 0x110);
    if (lVar1 == 0) {
      FUN_140aa6c08(lVar2);
      lVar1 = *(longlong *)(lVar2 + 0x110);
    }
  }
  return lVar1;
}



// FUNCTION 1410f9dc8 FUN_1410f9dc8 body=228 status=ok
// SIG undefined FUN_1410f9dc8(void)

longlong FUN_1410f9dc8(void)

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
  if (DAT_14caad260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14750e4f2;
    local_40 = &LAB_145cea1dd;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/SlateRHIRenderer",L"SlateRHIRendererSettings",&DAT_14caad260,
                  FUN_146336760);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caad260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410f9eae FUN_1410f9eae body=445 status=ok
// SIG undefined FUN_1410f9eae(void)

void FUN_1410f9eae(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x30;
        iVar6 = FUN_1410f9189(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar10) =
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



// FUNCTION 1410fa06c FUN_1410fa06c body=76 status=ok
// SIG undefined FUN_1410fa06c(void)

undefined8 FUN_1410fa06c(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1410fa0b8(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001410fa0ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1410fa0b8 FUN_1410fa0b8 body=191 status=ok
// SIG undefined FUN_1410fa0b8(void)

longlong FUN_1410fa0b8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1410fa178();
  lVar3 = *param_1;
  if (DAT_14cbc8ac0 != DAT_14cbc8aec) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc8af0;
    if (DAT_14cbc8af8 != (undefined *)0x0) {
      puVar7 = DAT_14cbc8af8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc8b00 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc8ab8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc8ab0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1410fa178 FUN_1410fa178 body=152 status=ok
// SIG undefined FUN_1410fa178(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410fa178(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc8b08) {
    FUN_144b3d300(&DAT_14cbc8b08);
    if (DAT_14cbc8b08 == -1) {
      DAT_14cbc8ad8 = 0;
      DAT_14cbc8ae0 = 0;
      DAT_14cbc8ab8 = 0;
      _DAT_14cbc8ac0 = 0;
      _DAT_14cbc8ae4 = 0xffffffff00000080;
      DAT_14cbc8aec = 0;
      DAT_14cbc8af8 = 0;
      DAT_14cbc8b00 = 0;
      atexit(FUN_144108767);
      _Init_thread_footer(&DAT_14cbc8b08);
      return;
    }
  }
  return;
}



// FUNCTION 1410fa210 FUN_1410fa210 body=250 status=ok
// SIG undefined FUN_1410fa210(void)

void FUN_1410fa210(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x240);
  FUN_1410fa30a(param_2);
  *param_2 = &PTR_FUN_14b9575a0;
  *(undefined4 *)(param_2 + 0x1d) = 0x3f800000;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *(undefined4 *)(param_2 + 0x24) = 0xf00000d0;
  param_2[0x25] = 0;
  *(undefined4 *)(param_2 + 0x26) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x27) = 0;
  *(undefined8 *)((longlong)param_2 + 0x13c) = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined4 *)(param_2 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x182) = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  *(undefined1 *)(param_2 + 0x38) = 0;
  param_2[0x47] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  return;
}



// FUNCTION 1410fa30a FUN_1410fa30a body=366 status=ok
// SIG undefined FUN_1410fa30a(void)

undefined8 * FUN_1410fa30a(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b2d60b0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x6000;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
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
  param_1[10] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 1410fa486 FUN_1410fa486 body=45 status=ok
// SIG undefined FUN_1410fa486(void)

undefined8 FUN_1410fa486(undefined8 param_1,int param_2)

{
  FUN_1410fa4b4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1410fa4b4 FUN_1410fa4b4 body=607 status=ok
// SIG undefined FUN_1410fa4b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410fa4b4(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14aff4a80;
  plVar1 = param_1 + 0x21;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x25) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x24)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x24)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x1a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1d)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x13;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x17) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x16)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x16)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xc;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x10) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xf)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xf)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 4;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 7)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 7)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0001410fa699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1410fa714 FUN_1410fa714 body=417 status=ok
// SIG undefined FUN_1410fa714(void)

void FUN_1410fa714(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar3 = local_38;
  *local_38 = &PTR_LAB_14b549b70;
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
  local_38[2] = lVar5;
  *local_38 = &PTR_FUN_14b549b00;
  local_38[3] = param_1;
  plVar1 = param_1 + 0x1a;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  if ((int)param_1[0x1b] == 0) {
LAB_1410fa7c7:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1b) = 0;
      goto LAB_1410fa7c7;
    }
  }
  param_1[0x1a] = (longlong)puVar3;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_1410fa7f5;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410fa7f5:
  FUN_1410fa8b6(param_1);
  (**(code **)(*param_1 + 0x2f0))(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fa8b6 FUN_1410fa8b6 body=167 status=ok
// SIG undefined FUN_1410fa8b6(void)

void FUN_1410fa8b6(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410e5ccc(param_1,local_40);
  *(undefined1 *)(param_1 + 0x110) = local_40[0];
  FUN_1410e5bda(param_1 + 0x118,&local_38);
  FUN_140a6ab98(param_1 + 0x128,&local_28);
  FUN_1401b9920(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fa96c FUN_1410fa96c body=208 status=ok
// SIG undefined FUN_1410fa96c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410fa96c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab99ad0;
  FUN_1410faa3c(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1410faa3c(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1410faa3c FUN_1410faa3c body=105 status=ok
// SIG undefined FUN_1410faa3c(void)

void FUN_1410faa3c(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410faaa6 FUN_1410faaa6 body=91 status=ok
// SIG undefined FUN_1410faaa6(void)

void FUN_1410faaa6(longlong *param_1)

{
  undefined8 uVar1;
  
  if (((param_1[0x71] != 0) && (*(char *)((longlong)param_1 + 0x3f4) == '\x01')) &&
     ((*(byte *)(param_1[0x4e] + 99) & 2) == 0)) {
    FUN_1410fab02(param_1[0x71],param_1 + 0x7d,param_1 + 0x3d);
    return;
  }
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  FUN_14754778a(uVar1,4);
  return;
}



// FUNCTION 1410fab02 FUN_1410fab02 body=561 status=ok
// SIG undefined FUN_1410fab02(void)

undefined8 FUN_1410fab02(longlong param_1,float *param_2,longlong *param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int local_60;
  uint local_5c;
  uint *local_58;
  uint local_50;
  int local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)((longlong)param_2 + 9) == '\x01') {
    fVar13 = *param_2 * (1000.0 / (float)DAT_14c761004);
    iVar7 = ((int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1) * DAT_14c761004;
  }
  else {
    fVar13 = *param_2 * 1000.0;
    iVar7 = (int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1;
  }
  puVar1 = (uint *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x60);
  local_5c = 1;
  if (iVar2 == 0) {
    local_48 = 0;
    local_60 = 0;
    local_4c = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar8 = *puVar6;
    if (uVar8 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar11;
      }
      local_60 = (int)uVar10 + 1;
      local_48 = (int)uVar10 * 0x20 + 0x20;
      iVar9 = 0;
      do {
        local_4c = iVar2;
        if (uVar10 == uVar11) goto LAB_1410fac08;
        iVar9 = iVar9 + 0x20;
        uVar8 = puVar6[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar8 == 0);
      local_60 = (int)uVar11;
      local_48 = iVar9;
    }
    else {
      local_48 = 0;
      local_60 = 0;
    }
    local_5c = -uVar8 & uVar8;
    uVar10 = (ulonglong)local_5c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_4c = (local_48 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_4c) {
      local_4c = iVar2;
    }
  }
LAB_1410fac08:
  local_50 = 0xffffffff;
  local_68 = (longlong *)(param_1 + 0x38);
  local_58 = puVar1;
  do {
    if (((local_4c == iVar2) && (local_58 == puVar1)) && (local_68 == (longlong *)(param_1 + 0x38)))
    {
      uVar5 = 0;
      goto LAB_1410fac7b;
    }
    puVar12 = (undefined8 *)((longlong)local_4c * 0x30 + *local_68);
    if ((param_3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*param_3 + 0x18))(param_3), cVar4 == '\0')) {
      if ((*(char *)((longlong)puVar12 + 0x2c) == '\0') && (*(int *)(puVar12 + 3) == -iVar7))
      goto LAB_1410fac77;
    }
    else if ((*(char *)((longlong)puVar12 + 0x2c) == '\x01') &&
            (cVar4 = (**(code **)(*param_3 + 0x28))(param_3,*puVar12), cVar4 != '\0')) {
LAB_1410fac77:
      uVar5 = *puVar12;
LAB_1410fac7b:
      if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar5;
    }
    local_50 = local_50 & ~local_5c;
    FUN_1449c0562(&local_60);
  } while( true );
}



// FUNCTION 1410fad42 FUN_1410fad42 body=156 status=ok
// SIG undefined FUN_1410fad42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410fad42(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b316450;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410fadde FUN_1410fadde body=43 status=ok
// SIG undefined FUN_1410fadde(void)

void FUN_1410fadde(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458047d4(param_1);
    param_1 = param_1 + 0x100;
  }
  return;
}



// FUNCTION 1410fae0a FUN_1410fae0a body=190 status=ok
// SIG undefined FUN_1410fae0a(void)

void FUN_1410fae0a(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,8);
  *puVar2 = 0;
  puVar2[1] = param_2;
  LOCK();
  puVar1 = (undefined8 *)param_1[6];
  param_1[6] = (longlong)puVar2;
  UNLOCK();
  *puVar1 = puVar2;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1);
  if (plVar3 != (longlong *)0x0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_149f2a640;
    local_58[0] = FUN_14291f6d4;
    local_30 = param_1;
    (**(code **)(*plVar3 + 0x28))(plVar3,local_58);
    if (local_58[0] != (code *)0x0) {
      pppuVar4 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar4 = &local_38;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410faee0 FUN_1410faee0 body=111 status=ok
// SIG undefined FUN_1410faee0(void)

void FUN_1410faee0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar10 = 0;
  lVar2 = *param_2;
  puVar10[2] = lVar2;
  puVar10[4] = param_2[2];
  param_2[2] = 0;
  lVar7 = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar8 = param_2[5];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar9 = param_2[7];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(puVar10 + 8) = (int)param_2[6];
  *(undefined4 *)((longlong)puVar10 + 0x44) = uVar5;
  *(int *)(puVar10 + 9) = (int)lVar9;
  *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar6;
  *(int *)(puVar10 + 6) = (int)lVar7;
  *(undefined4 *)((longlong)puVar10 + 0x34) = uVar3;
  *(int *)(puVar10 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar4;
  if (lVar2 != 0) {
    *param_2 = 0;
  }
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x580);
    *(undefined8 **)(param_1 + 0x580) = puVar10;
    UNLOCK();
    LOCK();
    *puVar1 = puVar10;
    UNLOCK();
  }
  FUN_141098246(param_1);
  return;
}



// FUNCTION 1410faf4f FUN_1410faf4f body=60 status=ok
// SIG undefined FUN_1410faf4f(void)

void FUN_1410faf4f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a3de8d0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1410faf8c FUN_1410faf8c body=140 status=ok
// SIG undefined FUN_1410faf8c(void)

void FUN_1410faf8c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_1410fb018();
  *(undefined8 *)(param_1 + 0x348) = 0;
  LOCK();
  *(undefined8 *)(param_1 + 0x340) = 0;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x308) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x360));
  if ((longlong)*(int *)(param_1 + 0x6a8) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x6a8) << 4;
    puVar2 = (undefined8 *)(param_1 + 0x388);
    do {
      *(undefined4 *)(puVar2 + 1) = 0;
      if (*(int *)((longlong)puVar2 + 0xc) < 0) {
        FUN_1446f8c06(puVar2,0);
      }
      if ((undefined2 *)*puVar2 != (undefined2 *)0x0) {
        *(undefined2 *)*puVar2 = 0;
      }
      puVar2 = puVar2 + 2;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001410fb011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x360));
  return;
}



// FUNCTION 1410fb018 FUN_1410fb018 body=252 status=ok
// SIG undefined FUN_1410fb018(void)

void FUN_1410fb018(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0x149) = 0;
  UNLOCK();
  *(undefined1 *)((longlong)param_1 + 0x134) = 0;
  LOCK();
  *(undefined1 *)((longlong)param_1 + 0x14a) = 0;
  UNLOCK();
  (**(code **)*param_1)(param_1,&local_28);
  if (param_1 + 0x37 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x37] != 0) {
      FUN_1400020a8();
    }
    param_1[0x37] = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 0x38) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x1c4) = local_1c;
  }
  param_1[0x39] = 0;
  plVar3 = (longlong *)param_1[0x3a];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x3a] = 0;
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fb116 FUN_1410fb116 body=89 status=ok
// SIG undefined FUN_1410fb116(void)

undefined8 * FUN_1410fb116(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x290);
  _Src = *(void **)(param_1 + 0x288);
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



// FUNCTION 1410fb170 FUN_1410fb170 body=32 status=ok
// SIG undefined FUN_1410fb170(void)

undefined8 * FUN_1410fb170(undefined8 *param_1)

{
  FUN_1410fb190();
  *param_1 = &PTR_FUN_14a1718d0;
  return param_1;
}



// FUNCTION 1410fb190 FUN_1410fb190 body=275 status=ok
// SIG undefined FUN_1410fb190(void)

undefined8 * FUN_1410fb190(undefined8 *param_1)

{
  FUN_140c6baca();
  *param_1 = &PTR_FUN_14a171010;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0x100000000;
  return param_1;
}



// FUNCTION 1410fb2a4 FUN_1410fb2a4 body=127 status=ok
// SIG undefined FUN_1410fb2a4(void)

longlong * FUN_1410fb2a4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_1410fb324(*param_1,param_3,**(undefined8 **)param_1[2]);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1410fb324 FUN_1410fb324 body=192 status=ok
// SIG undefined FUN_1410fb324(void)

void FUN_1410fb324(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x278) = param_3;
  FUN_140a58896(param_1 + 0x1e0,param_2 + 0x1a8);
  bVar1 = *(byte *)(param_1 + 0x38);
  *(byte *)(param_1 + 0x38) = bVar1 & 0xfb;
  if ((bVar1 != (bVar1 & 0xfb)) && (((bVar1 & 0xcc) != 0) != ((bVar1 & 200) != 0))) {
    cVar3 = FUN_1400d1184(param_1 + 0x18,param_1);
    if (cVar3 != '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
      FUN_146932214(lVar2,(ulonglong)((*(uint *)(param_1 + 0x28) >> 0x10) * 0x18) +
                          *(longlong *)
                           (*(longlong *)(lVar2 + 0x10) + 0x10 +
                           (ulonglong)((*(uint *)(param_1 + 0x28) & 0xffff) << 6)));
    }
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_1417aaa18();
    return;
  }
  return;
}



// FUNCTION 1410fb3ea FUN_1410fb3ea body=221 status=ok
// SIG undefined FUN_1410fb3ea(void)

longlong FUN_1410fb3ea(void)

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
  if (DAT_14cb4cb28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484e2744;
    local_40 = &LAB_146493d0c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PreviewGeometry",&DAT_14cb4cb28,FUN_146493cea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4cb28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fb4c8 FUN_1410fb4c8 body=1328 status=ok
// SIG undefined FUN_1410fb4c8(void)

void FUN_1410fb4c8(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  short sVar10;
  ulonglong uVar11;
  undefined **ppuVar12;
  longlong lVar13;
  byte *pbVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_178 [33];
  char local_157;
  undefined2 local_156;
  int local_154;
  longlong local_150;
  longlong local_148;
  ulonglong uStack_140;
  undefined **local_130;
  longlong local_128;
  undefined *local_120;
  undefined *local_118;
  undefined4 local_110;
  longlong local_108;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined8 local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = FUN_14009d2a0();
  local_148 = 0;
  uStack_140 = 0;
  FUN_145804a66(&local_148,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x58));
  sVar2 = *(short *)(lVar6 + 0x58);
  local_156 = *(undefined2 *)(lVar6 + 0x5e);
  lVar9 = *(longlong *)(param_1 + 0x28);
  local_a8 = 0x10000000000;
  local_80 = 0x10000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_128 = (longlong)&local_e0 + 2;
  local_e0 = (undefined **)CONCAT62(local_e0._2_6_,sVar2);
  local_130 = (undefined **)&local_e0;
  FUN_1447c44f6();
  if (sVar2 != -1) {
    local_157 = *(char *)(lVar9 + 0x298);
    local_150 = param_1;
    FUN_14150e78a(&local_e0,lVar9 + 0x28,&local_c8);
    local_154 = *(int *)(lVar9 + 0x38);
    if (local_d0 != local_154) {
      do {
        lVar1 = local_d8;
        lVar13 = (longlong)local_d0;
        lVar9 = *(longlong *)(*(longlong *)(local_d8 + 0x60) + lVar13 * 8);
        if (local_157 == '\0') {
          *(undefined4 *)(lVar9 + 0x14) = 0;
          lVar15 = lVar9;
        }
        else {
          lVar15 = 0;
        }
        FUN_1410fbae8(lVar9,&local_f8,local_156);
        if (*(ushort *)(lVar9 + 0xc) != 0) {
          ppuVar12 = *(undefined ***)(lVar9 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar9 + 0xc) << 5;
          do {
            if (*(short *)((longlong)ppuVar12 + 0x1e) == sVar2) goto LAB_1410fb616;
            ppuVar12 = ppuVar12 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        ppuVar12 = (undefined **)0x0;
LAB_1410fb616:
        iVar5 = *(int *)(lVar9 + 0x14);
        if (iVar5 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(ppuVar12 + 1));
        }
        lVar9 = local_e8;
        LOCK();
        *(int *)(ppuVar12 + 3) = *(int *)(ppuVar12 + 3) + 1;
        UNLOCK();
        local_120 = *ppuVar12;
        local_128 = CONCAT44(local_128._4_4_,iVar5);
        local_118 = (undefined *)local_f8;
        local_110 = local_f0._0_4_;
        local_108 = local_e8;
        lVar7 = lVar13 * 0x28 + *(longlong *)(lVar1 + 8);
        uVar3 = *(ushort *)(*(longlong *)(*(longlong *)(lVar1 + 0x60) + lVar13 * 8) + 0xe);
        uVar11 = (ulonglong)uVar3;
        uVar4 = *(ushort *)(lVar6 + 0x10e);
        if ((uVar4 == 0xffff) ||
           (*(uint *)(lVar7 + 0x20) == (uint)uVar4 ||
            (int)*(uint *)(lVar7 + 0x20) < (int)(uint)uVar4)) {
          bVar17 = false;
        }
        else {
          bVar17 = (*(uint *)(lVar7 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0;
        }
        uVar4 = *(ushort *)(lVar6 + 0x10c);
        local_130 = ppuVar12;
        if (((uVar4 == 0xffff) ||
            (*(uint *)(lVar7 + 0x20) == (uint)uVar4 ||
             (int)*(uint *)(lVar7 + 0x20) < (int)(uint)uVar4)) ||
           ((*(uint *)(lVar7 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0)) {
          if (uVar11 != 0) {
            pbVar14 = local_120 + 8;
            uVar16 = 0;
            do {
              if ((*pbVar14 & 1) == 0) {
                if (lVar9 == 0) {
                  sVar10 = 0;
                }
                else {
                  sVar10 = *(short *)(lVar9 + uVar16 * 2);
                }
                lVar1 = local_148 + (longlong)*(int *)(pbVar14 + -4) * 0x18;
                if (*(short *)(lVar1 + 0x10) < sVar10) {
                  *(short *)(lVar1 + 0x10) = sVar10;
                }
                *(byte *)(lVar1 + 0x12) = *(byte *)(lVar1 + 0x12) | bVar17 | 2;
                FUN_1410fb9fa();
              }
              uVar16 = uVar16 + 1;
              pbVar14 = pbVar14 + 0xc;
            } while (uVar11 != uVar16);
          }
        }
        else if (uVar11 != 0) {
          lVar9 = 0;
          do {
            if ((local_120[lVar9 + 8] & 1) == 0) {
              *(byte *)(local_148 + 0x12 + (longlong)*(int *)(local_120 + lVar9 + 4) * 0x18) =
                   *(byte *)(local_148 + 0x12 + (longlong)*(int *)(local_120 + lVar9 + 4) * 0x18) |
                   bVar17 | 2;
            }
            lVar9 = lVar9 + 0xc;
          } while ((ulonglong)uVar3 * 0xc != lVar9);
        }
        FUN_145804a10(&local_130);
        if (lVar15 != 0) {
          *(undefined4 *)(lVar15 + 0x14) = 1;
        }
        local_d0 = FUN_1403b8464(&local_e0,local_d0 + 1);
      } while (local_d0 != local_154);
    }
    param_1 = local_150;
    if (local_e0 != (undefined **)0x0) {
      if (*(char *)(local_d8 + 0x270) == '\0') {
        *(int *)(local_d8 + 0x264) = *(int *)(local_d8 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_d8 + 0x264) = *(int *)(local_d8 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_e0 = &PTR_FUN_14a4d6cd0;
  local_d8 = local_148;
  local_d0 = (undefined4)uStack_140;
  lVar9 = *(longlong *)(param_1 + 0x28);
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_a8 = 0x10000000000;
  local_80 = 0x10000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_128 = (longlong)&local_f8 + 2;
  local_f8 = (undefined2 *)CONCAT62(local_f8._2_6_,*(undefined2 *)(lVar6 + 0x58));
  local_130 = (undefined **)&local_f8;
  FUN_1447c44f6(&local_c8);
  FUN_1410fbbac(lVar9 + 0x28,&local_c8,&local_e0,1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  lVar9 = *(longlong *)(param_1 + 0x28);
  local_118 = *(undefined **)(lVar9 + 0x270);
  local_130 = &PTR_FUN_14a4d6cf0;
  local_128 = local_148;
  local_120 = (undefined *)CONCAT44(local_120._4_4_,(undefined4)uStack_140);
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_a8 = 0x10000000000;
  local_80 = 0x10000000000;
  local_78 = 0;
  uStack_70 = 0;
  local_fc = *(undefined2 *)(lVar6 + 0x58);
  local_f0 = &local_f8;
  local_fa = *(undefined2 *)(lVar6 + 0xf2);
  local_f8 = &local_fc;
  uVar8 = FUN_1403b5126(&local_c8,&local_f8,&DAT_14a4d6c02);
  FUN_1410fbbac(lVar9 + 0x28,uVar8,&local_130,1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1410fbb3e(local_148,uStack_140 & 0xffffffff);
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410fb9fa FUN_1410fb9fa body=237 status=ok
// SIG undefined FUN_1410fb9fa(void)

void FUN_1410fb9fa(undefined8 *param_1,short param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar1 = *(ushort *)((longlong)param_1 + 0xe);
  uVar2 = (uint)uVar1;
  puVar3 = param_1;
  uVar4 = 7;
  if (uVar1 == 7) {
LAB_1410fba16:
    uVar9 = 0;
    uVar7 = (ulonglong)uVar4;
    do {
      uVar8 = (int)(uVar7 >> 1) + uVar9;
      uVar6 = (uint)uVar7;
      if (param_2 < *(short *)((longlong)puVar3 + (ulonglong)uVar8 * 2)) {
        uVar9 = uVar8 + (uVar6 & 1);
      }
      uVar7 = uVar7 >> 1;
    } while (1 < uVar6);
    if (((int)uVar9 < (int)uVar4) &&
       (*(short *)((longlong)puVar3 + (longlong)(int)uVar9 * 2) == param_2)) {
      return;
    }
    if (((int)uVar9 < (int)uVar4) &&
       (SBORROW2(0,*(short *)((longlong)puVar3 + (ulonglong)uVar4 * 2 + -2)))) goto LAB_1410fba63;
  }
  else {
    uVar9 = 0;
    if (uVar1 != 0) {
      puVar3 = (undefined8 *)*param_1;
      uVar4 = (uint)uVar1;
      goto LAB_1410fba16;
    }
  }
  iVar5 = 0x10;
  if (uVar1 != 7) {
    iVar5 = uVar1 + 0x10;
  }
  FUN_1475452e6(param_1,iVar5);
  uVar2 = (uint)*(ushort *)((longlong)param_1 + 0xe);
  if (*(ushort *)((longlong)param_1 + 0xe) == 7) {
    uVar2 = 7;
    puVar3 = param_1;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
  }
LAB_1410fba63:
  lVar10 = (longlong)(int)uVar9;
  if (((int)uVar9 < (int)(uVar2 - 1)) && (!SBORROW2(0,*(short *)((longlong)puVar3 + lVar10 * 2)))) {
    memmove((void *)((longlong)puVar3 + lVar10 * 2 + 2),(void *)((longlong)puVar3 + lVar10 * 2),
            (longlong)(int)(uVar2 + ~uVar9) * 2);
  }
  *(short *)((longlong)puVar3 + lVar10 * 2) = param_2;
  return;
}



// FUNCTION 1410fbae8 FUN_1410fbae8 body=86 status=ok
// SIG undefined FUN_1410fbae8(void)

undefined8 * FUN_1410fbae8(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_140dbccb8(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1410fbb3e FUN_1410fbb3e body=61 status=ok
// SIG undefined FUN_1410fbb3e(void)

void FUN_1410fbb3e(longlong param_1,int param_2)

{
  short *psVar1;
  
  if (param_2 != 0) {
    psVar1 = (short *)(param_1 + 0xe);
    do {
      if (*psVar1 != 7) {
        if (*(longlong *)(psVar1 + -7) != 0) {
          thunk_FUN_1400020a8();
        }
        *psVar1 = 7;
      }
      psVar1 = psVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410fbb7b FUN_1410fbb7b body=49 status=ok
// SIG undefined FUN_1410fbb7b(void)

void FUN_1410fbb7b(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x12);
    do {
      pbVar1[-4] = 7;
      pbVar1[-3] = 0;
      pbVar1[-2] = 0;
      pbVar1[-1] = 0x80;
      pbVar1[-0x12] = 0;
      pbVar1[-0x11] = 0x80;
      pbVar1[-0x10] = 0;
      pbVar1[-0xf] = 0x80;
      pbVar1[-0xe] = 0;
      pbVar1[-0xd] = 0x80;
      pbVar1[-0xc] = 0;
      pbVar1[-0xb] = 0x80;
      pbVar1[-0xc] = 0;
      pbVar1[-0xb] = 0x80;
      pbVar1[-10] = 0;
      pbVar1[-9] = 0x80;
      pbVar1[-8] = 0;
      pbVar1[-7] = 0x80;
      pbVar1[-6] = 0;
      pbVar1[-5] = 0x80;
      *pbVar1 = *pbVar1 & 0xfc;
      pbVar1 = pbVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410fbbac FUN_1410fbbac body=5521 status=ok
// SIG undefined FUN_1410fbbac(void)

int FUN_1410fbbac(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  void *pvVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint *puVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  longlong local_1a8;
  ulonglong local_1a0;
  int local_198;
  uint local_194;
  ulonglong local_190;
  longlong local_188;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  uint *local_168;
  longlong *local_160;
  longlong local_158;
  ulonglong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_100;
  uint uStack_f8;
  uint uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_168 = (uint *)CONCAT71(local_168._1_7_,param_4);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar29 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_a8 = 0;
  local_a0 = 0x200000000;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar21 = 0;
    do {
      lVar24 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar24 = param_1 + 0x18;
      }
      uVar10 = (uint)uVar21;
      if ((*(uint *)(lVar24 + (uVar21 >> 5 & 0x7ffffff) * 4) >> (uVar10 & 0x1f) & 1) != 0) {
        cVar4 = FUN_1403b852a(param_2,*(longlong *)(param_1 + 8) + uVar21 * 0x28);
        if (cVar4 != '\0') {
          lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar21 * 8);
          local_c8 = 0;
          local_c0 = 0x8000000000;
          local_160 = param_3;
          (**(code **)(*param_3 + 0x18))(param_3,lVar24,&local_d8);
          if ((int)local_c0 != 0) {
            if (1 < (int)((int)local_c0 - (uint)*(ushort *)(lVar24 + 0xe))) {
              FUN_144a6134a(&local_d8);
            }
            pvVar1 = (void *)(*(longlong *)(param_1 + 8) + uVar21 * 0x28);
            local_e0 = 0;
            iVar29 = *(int *)((longlong)pvVar1 + 0x20);
            uVar20 = iVar29 + 0x1fU & 0xffffffe0;
            if (0 < (int)uVar20) {
              uVar25 = 0x100;
              if (0x100 < uVar20) {
                uVar25 = uVar20;
              }
              local_e0 = (ulonglong)uVar25 << 0x20;
              FUN_14497ddce(&local_100,0);
              iVar29 = *(int *)((longlong)pvVar1 + 0x20);
            }
            local_e0 = CONCAT44(local_e0._4_4_,iVar29);
            if (iVar29 != 0) {
              memcpy(&local_100,pvVar1,(ulonglong)(iVar29 + 0x1fU >> 3 & 0xfffffffc));
            }
            (**(code **)(*local_160 + 8))(local_160,param_1,&local_100);
            bVar31 = (longlong)local_a0 < 0;
            local_a0 = local_a0 & 0xffffffff00000000;
            if (bVar31) {
              FUN_147580872(&local_b8,0);
            }
            lVar24 = *(longlong *)(param_1 + 0x230);
            if (*(char *)(lVar24 + 0x110) == '\x01') {
              FUN_140ae8660(lVar24 + 0x60);
            }
            local_1b8 = &local_b8;
            FUN_140ae8062(lVar24 + 0x100,(ulonglong)local_168 & 0xff,&local_100,&local_100);
            cVar4 = FUN_1403b8874(&local_100,uVar21 * 0x28 + *(longlong *)(param_1 + 8),0);
            uVar19 = uStack_90;
            lVar17 = local_a8;
            lVar24 = local_c8;
            if (cVar4 == '\0') {
              local_128 = (undefined4)local_100;
              uStack_124 = local_100._4_4_;
              uStack_120 = uStack_f8;
              uStack_11c = uStack_f4;
              local_118 = local_f0;
              uStack_114 = uStack_ec;
              uStack_110 = uStack_e8;
              uStack_10c = uStack_e4;
              uVar27 = (undefined4)local_e0;
              local_1a8 = CONCAT44(local_1a8._4_4_,local_e0._4_4_);
              local_e0 = 0;
              if (local_c8 == 0) {
                local_138 = (undefined4)local_d8;
                uStack_134 = local_d8._4_4_;
                uStack_130 = uStack_d0;
                uStack_12c = uStack_cc;
              }
              local_c8 = 0;
              local_1a0 = CONCAT44(local_1a0._4_4_,(int)local_c0);
              local_188 = CONCAT44(local_188._4_4_,local_c0._4_4_);
              local_c0 = 0;
              if (local_a8 == 0) {
                local_148 = local_b8;
                uStack_144 = uStack_b4;
                uStack_140 = uStack_b0;
                uStack_13c = uStack_ac;
              }
              local_a8 = 0;
              local_194 = (uint)local_a0;
              local_198 = local_a0._4_4_;
              local_a0 = 0x200000000;
              if (local_64 == 0) {
                iVar29 = (int)uStack_90;
                local_190 = uStack_90 & 0xffffffff;
                uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
                if (uStack_90._4_4_ == iVar29) {
                  FUN_1410fd1ac(&local_98,uVar19 & 0xffffffff);
                }
                uVar20 = local_70;
                if (local_70 == 0) {
                  iVar29 = -1;
                }
                else {
                  iVar29 = local_70 + 0x1e;
                  if (-1 < (int)(local_70 - 1)) {
                    iVar29 = local_70 - 1;
                  }
                  iVar29 = iVar29 >> 5;
                }
                uVar25 = local_70 + 1;
                uVar13 = local_70 + 0x1f;
                if (-1 < (int)local_70) {
                  uVar13 = local_70;
                }
                local_170 = lVar24;
                if ((int)uVar13 >> 5 == iVar29) {
                  local_70 = uVar25;
                }
                else {
                  if ((int)local_6c <= (int)local_70) {
                    local_178 = CONCAT44(local_178._4_4_,uVar27);
                    local_158 = lVar17;
                    if (local_70 + 0x20 < 0xa0) {
                      local_6c = 0x80;
                    }
                    else {
                      uVar25 = local_70 + 0x20 >> 5;
                      if (local_6c + 0x1f < 0xa0) {
                        uVar14 = 4;
                        if (4 < uVar25) {
                          uVar14 = uVar25;
                        }
                      }
                      else {
                        uVar14 = (uVar25 * 3 >> 3) + uVar25 + 0x10;
                      }
                      uVar19 = FUN_144a3809e(uVar14 << 2,0);
                      iVar29 = (int)(uVar19 >> 2);
                      local_6c = 0xffffffe0;
                      if ((int)uVar25 <= iVar29) {
                        local_6c = iVar29 << 5;
                      }
                    }
                    FUN_1446efbd8(local_88,local_70);
                    uVar25 = local_70 + 1;
                    lVar17 = local_158;
                    uVar27 = (undefined4)local_178;
                  }
                  uVar14 = uVar25 + 0x1f;
                  if (-1 < (int)uVar25) {
                    uVar14 = uVar25;
                  }
                  local_70 = uVar25;
                  if ((int)uVar25 % 0x20 != 0) {
                    puVar22 = local_78;
                    if (local_78 == (uint *)0x0) {
                      puVar22 = local_88;
                    }
                    bVar9 = -(char)((int)uVar25 % 0x20);
                    puVar22[(int)uVar14 >> 5] =
                         (puVar22[(int)uVar14 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
                  }
                }
                lVar7 = (longlong)(int)local_190;
                puVar22 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar22 = local_88;
                }
                bVar9 = (byte)uVar20 & 0x1f;
                puVar22[(int)uVar13 >> 5] =
                     puVar22[(int)uVar13 >> 5] & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
                lVar24 = local_170;
                uVar19 = local_190;
              }
              else {
                uVar19 = (ulonglong)uStack_68;
                lVar7 = (longlong)(int)uStack_68;
                uStack_68 = *(uint *)(local_98 + 4 + lVar7 * 0x78);
                local_64 = local_64 + -1;
                if (local_64 != 0) {
                  *(undefined4 *)(local_98 + (longlong)(int)uStack_68 * 0x78) = 0xffffffff;
                }
              }
              iVar29 = (int)uVar19;
              uVar20 = 1 << ((byte)uVar19 & 0x1f);
              puVar22 = local_78;
              if (local_78 == (uint *)0x0) {
                puVar22 = local_88;
              }
              iVar18 = iVar29 + 0x1f;
              if (-1 < iVar29) {
                iVar18 = iVar29;
              }
              local_170 = (ulonglong)(iVar18 >> 5);
              puVar22[local_170] = puVar22[local_170] | uVar20;
              lVar7 = lVar7 * 0x78;
              pvVar1 = (void *)(local_98 + lVar7);
              *(uint *)(local_98 + lVar7) = uVar10;
              puVar3 = (undefined4 *)(local_98 + 8 + lVar7);
              *puVar3 = local_128;
              puVar3[1] = uStack_124;
              puVar3[2] = uStack_120;
              puVar3[3] = uStack_11c;
              puVar3 = (undefined4 *)(local_98 + 0x18 + lVar7);
              *puVar3 = local_118;
              puVar3[1] = uStack_114;
              puVar3[2] = uStack_110;
              puVar3[3] = uStack_10c;
              *(undefined4 *)(local_98 + 0x28 + lVar7) = uVar27;
              *(uint *)(local_98 + 0x2c + lVar7) = (uint)local_1a8;
              if (lVar24 == 0) {
                *(undefined4 *)((longlong)pvVar1 + 0x30) = local_138;
                *(undefined4 *)((longlong)pvVar1 + 0x34) = uStack_134;
                *(undefined4 *)((longlong)pvVar1 + 0x38) = uStack_130;
                *(undefined4 *)((longlong)pvVar1 + 0x3c) = uStack_12c;
              }
              *(longlong *)((longlong)pvVar1 + 0x40) = lVar24;
              *(undefined4 *)((longlong)pvVar1 + 0x48) = (undefined4)local_1a0;
              *(undefined4 *)((longlong)pvVar1 + 0x4c) = (undefined4)local_188;
              if (lVar17 == 0) {
                *(undefined4 *)((longlong)pvVar1 + 0x50) = local_148;
                *(undefined4 *)((longlong)pvVar1 + 0x54) = uStack_144;
                *(undefined4 *)((longlong)pvVar1 + 0x58) = uStack_140;
                *(undefined4 *)((longlong)pvVar1 + 0x5c) = uStack_13c;
              }
              *(longlong *)((longlong)pvVar1 + 0x60) = lVar17;
              *(uint *)((longlong)pvVar1 + 0x68) = local_194;
              *(int *)((longlong)pvVar1 + 0x6c) = local_198;
              *(undefined4 *)((longlong)pvVar1 + 0x70) = 0xffffffff;
              uVar25 = (int)uStack_90 - local_64;
              if (1 < uVar25) {
                puVar6 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar6 = local_60;
                }
                iVar18 = *(int *)(puVar6 + (ulonglong)(local_50 - 1 & uVar10) * 4);
                while (iVar18 != -1) {
                  _Dst = (void *)(local_98 + (longlong)iVar18 * 0x78);
                  if (*(uint *)(local_98 + (longlong)iVar18 * 0x78) == uVar10) {
                    local_1a8 = CONCAT44(local_1a8._4_4_,uVar20);
                    local_190 = uVar19;
                    if (*(longlong *)((longlong)_Dst + 0x60) != 0) {
                      FUN_1400020a8();
                    }
                    if (*(longlong *)((longlong)_Dst + 0x40) != 0) {
                      FUN_1400020a8();
                    }
                    memmove(_Dst,pvVar1,0x70);
                    if (local_64 != 0) {
                      *(uint *)(local_98 + (longlong)(int)uStack_68 * 0x78) = (uint)local_190;
                    }
                    *(undefined4 *)(local_98 + lVar7) = 0xffffffff;
                    uVar10 = 0xffffffff;
                    if (0 < local_64) {
                      uVar10 = uStack_68;
                    }
                    *(uint *)(local_98 + 4 + lVar7) = uVar10;
                    uStack_68 = (uint)local_190;
                    local_64 = local_64 + 1;
                    puVar22 = local_78;
                    if (local_78 == (uint *)0x0) {
                      puVar22 = local_88;
                    }
                    puVar22[local_170] = puVar22[local_170] & ((uint)local_1a8 ^ 0xffffffff);
                    goto LAB_1410fbdcf;
                  }
                  iVar18 = *(int *)((longlong)_Dst + 0x70);
                }
              }
              uVar20 = 1;
              if (3 < uVar25) {
                uVar19 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
                lVar24 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                uVar20 = 1 << ((byte)lVar24 & 0x1f);
              }
              if (((int)uVar25 < 1) || ((int)uVar20 <= (int)local_50)) {
                uVar10 = local_50 - 1 & uVar10;
                *(uint *)((longlong)pvVar1 + 0x74) = uVar10;
                puVar6 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar6 = local_60;
                }
                *(undefined4 *)((longlong)pvVar1 + 0x70) =
                     *(undefined4 *)
                      (puVar6 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar10) * 4);
                puVar6 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar6 = local_60;
                }
                *(int *)(puVar6 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar10) * 4) =
                     iVar29;
              }
              else {
                local_50 = uVar20;
                if (local_58 == (undefined1 *)0x0) {
                  puVar6 = (undefined1 *)0x0;
                }
                else {
                  FUN_1446efa72(&local_58,0,0,4);
                  puVar6 = local_58;
                  if (local_50 == 0) goto LAB_1410fbdcf;
                }
                uVar10 = local_50;
                if ((1 < local_50) || (puVar6 != (undefined1 *)0x0)) {
                  uVar20 = 0;
                  if (1 < local_50) {
                    uVar20 = local_50;
                  }
                  FUN_1446efa72(&local_58,0,uVar20,4);
                }
                if (0 < (int)uVar10) {
                  uVar20 = 0;
                  do {
                    puVar6 = local_58;
                    if (local_58 == (undefined1 *)0x0) {
                      puVar6 = local_60;
                    }
                    *(undefined4 *)(puVar6 + (ulonglong)(local_50 + 0x7fffffff & uVar20) * 4) =
                         0xffffffff;
                    uVar20 = uVar20 + 1;
                  } while (uVar10 != uVar20);
                }
                if (local_70 == 0) {
                  uVar30 = 1;
                  iVar29 = 0;
                  uVar10 = 0;
                  uVar19 = 0;
                }
                else {
                  puVar22 = local_78;
                  if (local_78 == (uint *)0x0) {
                    puVar22 = local_88;
                  }
                  uVar10 = *puVar22;
                  if (uVar10 == 0) {
                    iVar29 = local_70 + 0x1e;
                    if (-1 < (int)(local_70 - 1)) {
                      iVar29 = local_70 - 1;
                    }
                    uVar19 = 0;
                    uVar30 = (ulonglong)(uint)(iVar29 >> 5);
                    if (iVar29 >> 5 < 1) {
                      uVar30 = uVar19;
                    }
                    iVar29 = 0;
                    do {
                      if (uVar30 == uVar19) goto LAB_1410fbdcf;
                      iVar29 = iVar29 + 0x20;
                      uVar10 = puVar22[uVar19 + 1];
                      uVar19 = uVar19 + 1;
                    } while (uVar10 == 0);
                  }
                  else {
                    iVar29 = 0;
                    uVar19 = 0;
                  }
                  uVar30 = (ulonglong)(-uVar10 & uVar10);
                  uVar28 = uVar30 * 2 + 1;
                  lVar24 = 0x3f;
                  if (uVar28 != 0) {
                    for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                    }
                  }
                  uVar10 = (iVar29 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                  if ((int)local_70 <= (int)uVar10) {
                    uVar10 = local_70;
                  }
                }
                if ((int)uVar10 < (int)local_70) {
                  uVar20 = 0xffffffff;
                  do {
                    local_1a8 = CONCAT44(local_1a8._4_4_,iVar29);
                    lVar24 = (longlong)(int)uVar10 * 0x78;
                    uVar28 = (longlong)(int)local_50 - 1U & (longlong)*(int *)(local_98 + lVar24);
                    iVar18 = (int)uVar28;
                    *(int *)(local_98 + 0x74 + lVar24) = iVar18;
                    puVar6 = local_58;
                    if (local_58 == (undefined1 *)0x0) {
                      puVar6 = local_60;
                    }
                    *(undefined4 *)(local_98 + 0x70 + lVar24) =
                         *(undefined4 *)(puVar6 + ((longlong)(int)local_50 - 1U & uVar28) * 4);
                    puVar6 = local_58;
                    if (local_58 == (undefined1 *)0x0) {
                      puVar6 = local_60;
                    }
                    *(uint *)(puVar6 + ((longlong)iVar18 & (longlong)(int)local_50 - 1U) * 4) =
                         uVar10;
                    uVar20 = ~(uint)uVar30 & uVar20;
                    puVar22 = local_78;
                    if (local_78 == (uint *)0x0) {
                      puVar22 = local_88;
                    }
                    iVar18 = (int)uVar19;
                    lVar24 = (longlong)iVar18;
                    uVar10 = puVar22[lVar24] & uVar20;
                    if (uVar10 == 0) {
                      iVar16 = local_70 + 0x1e;
                      if (-1 < (int)(local_70 - 1)) {
                        iVar16 = local_70 - 1;
                      }
                      iVar16 = iVar16 >> 5;
                      iVar11 = iVar16;
                      if (iVar16 < iVar18) {
                        iVar11 = iVar18;
                      }
                      if (iVar16 <= iVar18) break;
                      lVar17 = 0;
                      while( true ) {
                        iVar29 = iVar29 + 0x20;
                        uVar10 = puVar22[lVar24 + lVar17 + 1];
                        if (uVar10 != 0) break;
                        lVar17 = lVar17 + 1;
                        if (iVar11 - lVar24 == lVar17) goto LAB_1410fbdcf;
                      }
                      uVar19 = (ulonglong)(iVar18 + (int)lVar17 + 1);
                      uVar20 = 0xffffffff;
                    }
                    uVar30 = (ulonglong)(-uVar10 & uVar10);
                    uVar28 = uVar30 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar28 != 0) {
                      for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    uVar10 = (iVar29 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                  } while ((int)uVar10 < (int)local_70);
                }
              }
            }
          }
LAB_1410fbdcf:
          param_3 = local_160;
          if (local_c8 != 0) {
            FUN_1400020a8();
            param_3 = local_160;
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < (longlong)*(int *)(param_1 + 0x10));
    iVar29 = 0;
    if ((int)uStack_90 != local_64) {
      uVar15 = *(undefined8 *)(param_1 + 0x248);
      iVar29 = 0;
      local_d8 = uVar15;
      if (local_70 == 0) {
        uVar19 = 1;
        uVar21 = 0;
        uVar10 = 0;
        iVar18 = 0;
      }
      else {
        puVar22 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar22 = local_88;
        }
        uVar10 = *puVar22;
        if (uVar10 == 0) {
          iVar18 = local_70 + 0x1e;
          if (-1 < (int)(local_70 - 1)) {
            iVar18 = local_70 - 1;
          }
          uVar21 = 0;
          uVar19 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar19 = uVar21;
          }
          iVar18 = 0;
          do {
            if (uVar19 == uVar21) {
              iVar29 = 0;
              goto LAB_1410fc9bd;
            }
            iVar18 = iVar18 + 0x20;
            uVar10 = puVar22[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar21 = 0;
          iVar18 = 0;
        }
        uVar19 = (ulonglong)(-uVar10 & uVar10);
        uVar30 = uVar19 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar10 = (iVar18 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if ((int)local_70 <= (int)uVar10) {
          uVar10 = local_70;
        }
      }
      if (uVar10 != local_70) {
        iVar29 = 0;
        uVar20 = 0xffffffff;
        local_160 = param_3;
        local_150 = (ulonglong)local_70;
        do {
          local_158 = CONCAT44(local_158._4_4_,uVar20);
          local_188 = (longlong)(int)uVar10 * 0x78;
          local_1a0 = local_98;
          lVar17 = local_98 + local_188;
          local_1a8 = lVar17 + 0x30;
          uVar10 = *(uint *)(lVar17 + 0x48);
          lVar24 = *(longlong *)(lVar17 + 0x40);
          if (*(longlong *)(lVar17 + 0x40) == 0) {
            lVar24 = local_1a8;
          }
          uVar20 = 0xffffffff >> (-(char)((int)uVar10 % 0x20) & 0x1fU);
          if ((int)uVar10 % 0x20 < 1) {
            uVar20 = 0xffffffff;
          }
          local_194 = 0;
          if (0 < (int)uVar10) {
            uVar30 = (ulonglong)uVar10 + 0x1f >> 5;
            uVar25 = 0xffffffff;
            if (uVar10 < 0x21) {
              uVar25 = uVar20;
            }
            uVar28 = 0;
            local_194 = 0;
            do {
              uVar25 = uVar25 & *(uint *)(lVar24 + uVar28 * 4);
              uVar26 = (ulonglong)uVar25 - (ulonglong)(uVar25 >> 1 & 0x55555555);
              uVar26 = (uVar26 >> 2 & 0x3333333333333333) + (uVar26 & 0x3333333333333333);
              local_194 = local_194 +
                          (byte)(((uVar26 >> 4) + uVar26 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
              bVar31 = uVar30 - 2 == uVar28;
              uVar28 = uVar28 + 1;
              uVar25 = 0xffffffff;
              if (bVar31) {
                uVar25 = uVar20;
              }
            } while (uVar30 != uVar28);
          }
          lVar24 = local_98 + local_188;
          puVar22 = (uint *)((int *)(local_98 + local_188) + 2);
          lVar17 = (longlong)*(int *)(local_98 + local_188);
          local_178 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar17 * 8);
          local_170 = uVar19;
          local_198 = iVar18;
          local_190 = uVar21;
          local_168 = puVar22;
          if (local_194 == *(ushort *)(local_178 + 0xe)) {
            local_1a8 = lVar17;
            local_180 = FUN_140858670(param_1,lVar17,puVar22);
            uVar10 = *(uint *)(lVar24 + 0x28);
            lVar17 = local_1a8;
            if (uVar10 == 0) {
              uVar30 = 1;
              iVar18 = 0;
              uVar21 = 0;
              uVar19 = 0;
            }
            else {
              uVar20 = *puVar22;
              iVar18 = 0;
              uVar19 = 0;
              if (uVar20 == 0) {
                uVar19 = 0;
                iVar18 = 0;
                do {
                  iVar16 = uVar10 + 0x1e;
                  if (-1 < (int)(uVar10 - 1)) {
                    iVar16 = uVar10 - 1;
                  }
                  uVar20 = iVar16 >> 5;
                  if (iVar16 >> 5 < 1) {
                    uVar20 = 0;
                  }
                  if (uVar19 == uVar20) goto LAB_1410fc7d9;
                  iVar18 = iVar18 + 0x20;
                  uVar20 = *(uint *)(local_1a0 + local_188 + 0xc + uVar19 * 4);
                  uVar19 = uVar19 + 1;
                } while (uVar20 == 0);
              }
              uVar30 = (ulonglong)(-uVar20 & uVar20);
              uVar21 = uVar30 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              uVar20 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              uVar21 = (ulonglong)uVar20;
              if ((int)uVar10 <= (int)uVar20) {
                uVar21 = (ulonglong)uVar10;
              }
            }
            if ((int)uVar21 < (int)uVar10) {
              uVar28 = local_1a0 + local_188 + 0xc;
              uVar20 = 0xffffffff;
              do {
                if ((short)uVar21 == -1) {
LAB_1410fce35:
                  if (*(ushort *)(local_180 + 0xc) != 0) {
                    puVar8 = *(undefined8 **)(local_180 + 0x28);
                    lVar17 = (ulonglong)*(ushort *)(local_180 + 0xc) << 5;
                    do {
                      if (*(short *)((longlong)puVar8 + 0x1e) == (short)uVar21) goto LAB_1410fce66;
                      puVar8 = puVar8 + 4;
                      lVar17 = lVar17 + -0x20;
                    } while (lVar17 != 0);
                  }
                  puVar8 = (undefined8 *)0x0;
LAB_1410fce66:
                  lVar17 = local_1a8;
                  local_1a0 = uVar28;
                  if (*(char *)((longlong)puVar8 + 0x1c) != '\0') {
                    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118);
                    uVar21 = (ulonglong)(((uint)uVar21 & 0xffff) << 4);
                    puVar2 = (undefined8 *)(lVar17 + uVar21);
                    if ((*(byte *)(lVar17 + 10 + uVar21) & 1) == 0) {
                      (**(code **)(*(longlong *)*puVar2 + 8))();
                      lVar17 = local_1a8;
                      uVar28 = local_1a0;
                    }
                    else {
                      memset((void *)*puVar8,0,
                             (ulonglong)
                             ((uint)*(byte *)(puVar2 + 1) * (uint)*(ushort *)(local_180 + 0xe)));
                      lVar17 = local_1a8;
                      uVar28 = local_1a0;
                    }
                  }
                }
                else {
                  lVar7 = lVar17 * 0x28 + *(longlong *)(param_1 + 8);
                  if ((*(int *)(lVar7 + 0x20) <= (int)(uVar21 & 0xffff)) ||
                     ((*(uint *)(lVar7 + ((uVar21 & 0xffff) >> 5) * 4) >> ((uint)uVar21 & 0x1f) & 1)
                      == 0)) goto LAB_1410fce35;
                }
                uVar20 = uVar20 & ~(uint)uVar30;
                uVar10 = *(uint *)(lVar24 + 0x28);
                iVar16 = (int)uVar19;
                lVar7 = (longlong)iVar16;
                uVar25 = *(uint *)(lVar24 + 8 + lVar7 * 4) & uVar20;
                if (uVar25 == 0) {
                  iVar11 = uVar10 + 0x1e;
                  if (-1 < (int)(uVar10 - 1)) {
                    iVar11 = uVar10 - 1;
                  }
                  iVar12 = iVar11 >> 5;
                  if (iVar11 >> 5 < iVar16) {
                    iVar12 = iVar16;
                  }
                  lVar23 = 0;
                  do {
                    if (iVar12 - lVar7 == lVar23) goto LAB_1410fc7d9;
                    iVar18 = iVar18 + 0x20;
                    uVar25 = *(uint *)(uVar28 + lVar7 * 4 + lVar23 * 4);
                    lVar23 = lVar23 + 1;
                  } while (uVar25 == 0);
                  uVar19 = (ulonglong)(uint)(iVar16 + (int)lVar23);
                  uVar20 = 0xffffffff;
                }
                uVar30 = (ulonglong)(-uVar25 & uVar25);
                uVar21 = uVar30 * 2 + 1;
                lVar7 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                uVar13 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                uVar25 = uVar13;
                if ((int)uVar10 <= (int)uVar13) {
                  uVar25 = uVar10;
                }
                uVar21 = (ulonglong)uVar25;
              } while ((int)uVar13 < (int)uVar10);
            }
LAB_1410fc7d9:
            uVar21 = local_190;
            puVar22 = (uint *)(lVar17 * 0x28 + *(longlong *)(param_1 + 8));
            if (puVar22 != local_168) {
              uVar10 = uVar10 + 0x1f & 0xffffffe0;
              puVar22[8] = 0;
              if (((int)puVar22[9] < (int)uVar10) || (0x100 < (int)puVar22[9])) {
                if ((int)uVar10 < 0x101) {
                  uVar10 = 0x100;
                }
                puVar22[9] = uVar10;
                FUN_14497ddce(puVar22,0);
                lVar17 = local_1a8;
              }
              uVar10 = *(uint *)(lVar24 + 0x28);
              puVar22[8] = uVar10;
              if (uVar10 != 0) {
                memcpy(puVar22,local_168,(ulonglong)(uVar10 + 0x1f >> 3 & 0xfffffffc));
                lVar17 = local_1a8;
              }
            }
            *(ulonglong *)(*(longlong *)(param_1 + 0x60) + lVar17 * 8) = local_180;
            local_100 = local_180;
            uStack_f8 = 0;
            uStack_f4 = (uint)*(ushort *)(local_180 + 0xe);
            lVar17 = lVar24 + 0x50;
            if (*(longlong *)(lVar24 + 0x60) != 0) {
              lVar17 = *(longlong *)(lVar24 + 0x60);
            }
            iVar18 = *(int *)(lVar24 + 0x68);
            if ((longlong)iVar18 != 0) {
              lVar24 = 0;
              do {
                (**(code **)(**(longlong **)(lVar17 + lVar24) + 8))
                          (*(longlong **)(lVar17 + lVar24),&local_100,&local_d8);
                lVar24 = lVar24 + 8;
              } while ((longlong)iVar18 * 8 != lVar24);
            }
            (**(code **)(*local_160 + 0x10))(local_160,&local_100,local_168);
            FUN_14085836e(param_1,local_178);
          }
          else {
            uVar10 = 0x40;
            if ((ushort)local_194 < 0x40) {
              uVar10 = local_194;
            }
            iVar18 = FUN_14055d75c(param_1,puVar22,uVar10);
            local_180 = CONCAT44(local_180._4_4_,iVar18);
            local_100 = *(ulonglong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar18 * 8);
            uStack_f8 = (uint)*(ushort *)(local_100 + 0xe);
            uStack_f4 = local_194;
            if (0 < *(int *)(lVar24 + 0x48)) {
              uVar20 = *(int *)(lVar24 + 0x48) - 1;
              uVar10 = 1 << ((byte)uVar20 & 0x1f);
              local_178 = *(longlong *)(local_178 + 0x18);
              uVar25 = uVar20 >> 5;
              lVar17 = local_1a8;
              lVar7 = (ulonglong)uVar20 + 1;
              do {
                uVar21 = local_180;
                lVar23 = *(longlong *)(lVar24 + 0x40);
                if (*(longlong *)(lVar24 + 0x40) == 0) {
                  lVar23 = lVar17;
                }
                if ((*(uint *)(lVar23 + (longlong)(int)uVar25 * 4) & uVar10) != 0) {
                  local_1a0 = (ulonglong)*(ushort *)(local_178 + -2 + lVar7 * 2);
                  local_188 = *(longlong *)(param_1 + 0x98);
                  uVar5 = FUN_14055cf42(param_1,local_180 & 0xffffffff,
                                        *(undefined2 *)(local_188 + local_1a0 * 8),
                                        *(undefined2 *)(local_188 + 2 + local_1a0 * 8));
                  *(short *)(local_188 + local_1a0 * 8) = (short)uVar21;
                  *(undefined2 *)(local_188 + 2 + local_1a0 * 8) = uVar5;
                  lVar17 = local_1a8;
                }
                bVar31 = uVar10 < 2;
                uVar10 = uVar10 >> 1;
                if (bVar31) {
                  uVar10 = 0x80000000;
                }
                uVar25 = uVar25 - bVar31;
                lVar23 = lVar7 + -1;
                bVar31 = 0 < lVar7;
                lVar7 = lVar23;
              } while (lVar23 != 0 && bVar31);
            }
            lVar17 = lVar24 + 0x50;
            if (*(longlong *)(lVar24 + 0x60) != 0) {
              lVar17 = *(longlong *)(lVar24 + 0x60);
            }
            iVar18 = *(int *)(lVar24 + 0x68);
            if ((longlong)iVar18 != 0) {
              lVar24 = 0;
              do {
                (**(code **)(**(longlong **)(lVar17 + lVar24) + 8))
                          (*(longlong **)(lVar17 + lVar24),&local_100,&local_d8);
                lVar24 = lVar24 + 8;
              } while ((longlong)iVar18 * 8 != lVar24);
            }
            (**(code **)(*local_160 + 0x10))(local_160,&local_100,local_168);
            uVar21 = local_190;
          }
          uVar20 = (uint)local_158 & ~(uint)local_170;
          puVar22 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar22 = local_88;
          }
          iVar16 = (int)uVar21;
          lVar24 = (longlong)iVar16;
          uVar10 = puVar22[lVar24] & uVar20;
          iVar18 = local_198;
          if (uVar10 == 0) {
            iVar11 = local_70 + 0x1e;
            if (-1 < (int)(local_70 - 1)) {
              iVar11 = local_70 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar18 = local_198 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar16) {
              iVar12 = iVar16;
            }
            if (iVar16 < iVar11) {
              lVar17 = 0;
              do {
                uVar10 = puVar22[lVar24 + lVar17 + 1];
                if (uVar10 != 0) {
                  uVar21 = (ulonglong)(iVar16 + (int)lVar17 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_1410fc97a;
                }
                iVar18 = iVar18 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar12 - lVar24 != lVar17);
              uVar20 = 0xffffffff;
              iVar16 = iVar12;
            }
            uVar21 = (ulonglong)(iVar16 + 1);
            uVar19 = local_170;
            uVar10 = local_70;
          }
          else {
LAB_1410fc97a:
            uVar19 = (ulonglong)(-uVar10 & uVar10);
            uVar30 = uVar19 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar30 != 0) {
              for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            uVar10 = (iVar18 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if ((int)local_70 <= (int)uVar10) {
              uVar10 = local_70;
            }
          }
          iVar29 = iVar29 + local_194;
        } while (uVar10 != (uint)local_150);
        uVar15 = *(undefined8 *)(param_1 + 0x248);
      }
LAB_1410fc9bd:
      *(undefined8 *)(param_1 + 0x250) = uVar15;
      *(undefined1 *)(param_1 + 0x261) = 1;
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 == 0) {
    uVar30 = 1;
    uVar21 = 0;
    iVar18 = 0;
    uVar10 = 0;
  }
  else {
    puVar22 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar22 = local_88;
    }
    uVar10 = *puVar22;
    if (uVar10 == 0) {
      iVar18 = local_70 + 0x1e;
      if (-1 < (int)(local_70 - 1)) {
        iVar18 = local_70 - 1;
      }
      uVar21 = 0;
      uVar19 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar19 = uVar21;
      }
      iVar18 = 0;
      do {
        if (uVar19 == uVar21) goto LAB_1410fbcee;
        iVar18 = iVar18 + 0x20;
        uVar10 = puVar22[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar21 = 0;
      iVar18 = 0;
    }
    uVar30 = (ulonglong)(-uVar10 & uVar10);
    uVar19 = uVar30 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar10 = (iVar18 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    if ((int)local_70 <= (int)uVar10) {
      uVar10 = local_70;
    }
  }
  if ((int)uVar10 < (int)local_70) {
    uVar20 = 0xffffffff;
    do {
      uVar19 = local_98;
      if (*(longlong *)(local_98 + 0x60 + (longlong)(int)uVar10 * 0x78) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(uVar19 + (longlong)(int)uVar10 * 0x78 + 0x40) != 0) {
        FUN_1400020a8();
      }
      uVar20 = uVar20 & ~(uint)uVar30;
      puVar22 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar22 = local_88;
      }
      iVar16 = (int)uVar21;
      lVar24 = (longlong)iVar16;
      uVar10 = puVar22[lVar24] & uVar20;
      if (uVar10 == 0) {
        iVar11 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar11 = local_70 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) break;
        lVar17 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar10 = puVar22[lVar24 + lVar17 + 1];
          if (uVar10 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar12 - lVar24 == lVar17) goto LAB_1410fbcee;
        }
        uVar21 = (ulonglong)(iVar16 + (int)lVar17 + 1);
        uVar20 = 0xffffffff;
      }
      uVar30 = (ulonglong)(-uVar10 & uVar10);
      uVar19 = uVar30 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      uVar10 = (iVar18 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    } while ((int)uVar10 < (int)local_70);
  }
LAB_1410fbcee:
  uVar21 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar21 != 0) {
    FUN_1410fd13e(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar29;
}



// FUNCTION 1410fd13e FUN_1410fd13e body=109 status=ok
// SIG undefined FUN_1410fd13e(void)

void FUN_1410fd13e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x78)) {
      uVar2 = uVar1 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x78,8);
  }
  return;
}



// FUNCTION 1410fd1ac FUN_1410fd1ac body=369 status=ok
// SIG undefined FUN_1410fd1ac(void)

void FUN_1410fd1ac(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x78;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410fd231;
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
LAB_1410fd231:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 1410fd324 FUN_1410fd324 body=130 status=ok
// SIG undefined FUN_1410fd324(void)

undefined8 FUN_1410fd324(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  
  lVar3 = DAT_14ca97170;
  uVar6 = (ulonglong)*param_1;
  bVar9 = true;
  if (uVar6 != 0) {
    if ((*(byte *)(&DAT_14ca814d8 + uVar6 * 0xf) & 0x80) == 0) {
      bVar9 = ((&DAT_14ca814cd)[uVar6 * 0x3c] & 3) == 0;
    }
  }
  iVar1 = *(int *)(param_1 + 2);
  if ((!bVar9) || ((iVar1 / 2 & 0x80000001U) != 1)) {
    iVar8 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar8 = iVar1;
    }
    if ((((iVar8 >> 2 & 0x80000001U) != 1) || ((*(byte *)(&DAT_14ca814c8 + uVar6 * 0xf) & 8) != 0))
       && (2 < (int)(&DAT_14ca814b8)[uVar6 * 0xf])) {
      uVar2 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      uVar6 = (ulonglong)uVar2;
      if (((uVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar2 == 2)) {
        uVar7 = 0;
      }
      else if (uVar2 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = CONCAT44(extraout_var,DVar5);
        uVar7 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar7 = 1;
      }
      return CONCAT71((int7)(uVar6 >> 8),0 < *(int *)(lVar3 + uVar7 * 4));
    }
  }
  return 0;
}



// FUNCTION 1410fd3a6 FUN_1410fd3a6 body=99 status=ok
// SIG undefined FUN_1410fd3a6(void)

void FUN_1410fd3a6(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140cb1048();
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x88);
  local_18 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x90);
  FUN_1410fd40a(param_1 + 0x130);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fd40a FUN_1410fd40a body=123 status=ok
// SIG undefined FUN_1410fd40a(void)

void FUN_1410fd40a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = *param_2;
    lVar2 = (longlong)(int)param_2[1] * 0x58;
    do {
      local_30 = 0xffffffff;
      local_38 = *(undefined8 *)(lVar1 + 0x38);
      FUN_1402b8456(param_1,&local_38,lVar1);
      lVar1 = lVar1 + 0x58;
      lVar2 = lVar2 + -0x58;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410fd48e FUN_1410fd48e body=89 status=ok
// SIG undefined FUN_1410fd48e(void)

undefined8 * FUN_1410fd48e(undefined8 *param_1)

{
  FUN_1410fd622();
  *param_1 = &PTR_FUN_14b5d0fc0;
  FUN_1410fd4e8(param_1 + 0x3d);
  FUN_1410fd4e8(param_1 + 0x76);
  FUN_1410fd4e8(param_1 + 0xaf);
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 0xb;
  *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | 0xb;
  *(byte *)(param_1 + 0xaf) = *(byte *)(param_1 + 0xaf) | 0xb;
  return param_1;
}



// FUNCTION 1410fd4e8 FUN_1410fd4e8 body=313 status=ok
// SIG undefined FUN_1410fd4e8(void)

void FUN_1410fd4e8(byte *param_1)

{
  *param_1 = *param_1 & 0xf0;
  param_1[8] = 0;
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
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x20;
  param_1[0x1b] = 0x41;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b00bdf8;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x5c] = 0x80;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0xff;
  param_1[0x61] = 0xff;
  param_1[0x62] = 0xff;
  param_1[99] = 0xff;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0xff;
  param_1[0x91] = 0xff;
  param_1[0x92] = 0x7f;
  param_1[0x93] = 0x7f;
  param_1[0x94] = 4;
  param_1[0x95] = 4;
  *(undefined **)(param_1 + 0x28) = &DAT_14a176f00;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe8] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0x20;
  param_1[0xfb] = 0x41;
  *(undefined ***)(param_1 + 0x100) = &PTR_FUN_14b00bdf8;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x13c] = 0x80;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0xff;
  param_1[0x141] = 0xff;
  param_1[0x142] = 0xff;
  param_1[0x143] = 0xff;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0xff;
  param_1[0x171] = 0xff;
  param_1[0x172] = 0x7f;
  param_1[0x173] = 0x7f;
  param_1[0x174] = 4;
  param_1[0x175] = 4;
  *(undefined **)(param_1 + 0x108) = &DAT_14a176f00;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  return;
}



// FUNCTION 1410fd622 FUN_1410fd622 body=352 status=ok
// SIG undefined FUN_1410fd622(void)

void FUN_1410fd622(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b0159c0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = 0x41200000;
  param_1[7] = &PTR_FUN_14b00bdf8;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x404;
  param_1[8] = &DAT_14a176f00;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdd) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe5) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x41200000;
  param_1[0x23] = &PTR_FUN_14b00bdf8;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x18c) = 0x404;
  param_1[0x24] = &DAT_14a176f00;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c5) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  return;
}



// FUNCTION 1410fd78a FUN_1410fd78a body=118 status=ok
// SIG undefined FUN_1410fd78a(void)

undefined8 * FUN_1410fd78a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = &PTR_FUN_14b404d40;
  *(undefined4 *)(param_1 + 0x10) = 0x10200;
  *(undefined2 *)((longlong)param_1 + 0x79) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 1410fd816 FUN_1410fd816 body=720 status=ok
// SIG undefined FUN_1410fd816(void)

void FUN_1410fd816(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  uint local_68 [6];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140aebdb2();
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_70 = DAT_14cbccd20;
    local_78 = DAT_14cbccd18;
    FUN_1448075d0(local_68);
    pbVar5 = (byte *)*param_3;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar8 = &DAT_14c9a1288;
      }
      else {
        plVar8 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar8[2] != *(int *)((longlong)plVar8 + 0x3c)) {
        plVar10 = plVar8 + 8;
        if ((longlong *)plVar8[9] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar8[9];
        }
        iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar8[10] - 1U & local_68[0]) * 4);
        if (iVar11 != -1) {
          do {
            lVar2 = *plVar8 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x40) == local_68[0]) {
              if ((((lVar2 != 0) &&
                   (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
              goto LAB_1410fd8dd;
              break;
            }
            iVar11 = *(int *)(lVar2 + 0x38);
          } while (iVar11 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_1410fd8dd:
    if ((byte *)*puVar9 == (byte *)0x0) {
      bVar12 = false;
    }
    else {
      bVar12 = (*(byte *)*puVar9 & 3) == 1;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (bVar12) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar1 = (undefined4 *)(lVar2 + 0xc7c);
      uVar4 = *puVar1;
      pbVar5 = (byte *)(lVar2 + 0xc80);
      bVar3 = *pbVar5;
      if ((bVar3 & 1) != 0) {
        *pbVar5 = 0;
        *puVar1 = 1;
      }
      iVar11 = *(int *)(param_1 + 0x518);
      if (iVar11 < -1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar11 + 1);
      }
      if (*(int *)(param_1 + 0x51c) <= iVar11) {
        FUN_1402191ca(param_1 + 0x510);
      }
      local_70 = DAT_14cbccd20;
      local_78 = DAT_14cbccd18;
      FUN_1448075d0(local_68);
      uVar7 = FUN_144a06846(param_3,local_68);
      uVar7 = FUN_144a7cdd6(uVar7,0);
      FUN_1446ddc76(&local_78,uVar7,1);
      FUN_1409d9716(param_1 + 0x510,&local_78);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if ((bVar3 & 1) != 0) {
        *puVar1 = uVar4;
        *pbVar5 = 1;
      }
    }
  }
  else {
    local_70 = DAT_14cbccd20;
    local_78 = DAT_14cbccd18;
    FUN_1448075d0(local_68);
    uVar7 = FUN_144a06846(param_3,local_68);
    cVar6 = FUN_141165bc4(uVar7);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (cVar6 != '\0') {
      uVar7 = FUN_140dddafc(param_3);
      local_70 = DAT_14cbccd20;
      local_78 = DAT_14cbccd18;
      FUN_1448075d0(local_68);
      FUN_14045886c(uVar7,local_68);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410fdae8 FUN_1410fdae8 body=464 status=ok
// SIG undefined FUN_1410fdae8(void)

void FUN_1410fdae8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar9 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x20;
      FUN_1410fdcb9(*(undefined8 *)(lVar11 + 8 + lVar10),*(undefined4 *)(lVar11 + 0x10 + lVar10));
      if (*(longlong *)(lVar11 + 8 + lVar10) != 0) {
        FUN_1400020a8();
      }
      uVar9 = uVar9 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_1410fdc24;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar9 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1410fdc24:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 1410fdcb9 FUN_1410fdcb9 body=96 status=ok
// SIG undefined FUN_1410fdcb9(void)

void FUN_1410fdcb9(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_1410fdcd5:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_1410fdcd5;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 1410fdd1a FUN_1410fdd1a body=428 status=ok
// SIG undefined FUN_1410fdd1a(void)

void FUN_1410fdd1a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)*param_2 + 0x120))((longlong *)*param_2,&local_30);
  if (local_30 != (longlong *)0x0) {
    lVar5 = *(longlong *)(param_1 + 0x290 + (longlong)*(int *)(param_1 + 0x208) * 8);
    fVar7 = (float)(**(code **)(*(longlong *)*param_2 + 0x130))();
    lVar4 = (longlong)ROUND(fVar7 * 1000.0 + fVar7 * 1000.0 + 0.5) >> 1;
    *(longlong *)(param_1 + 800) = (*(longlong *)(param_1 + 800) - lVar5) + lVar4;
    *(longlong *)(param_1 + 0x290 + (longlong)*(int *)(param_1 + 0x208) * 8) = lVar4;
    lVar5 = (**(code **)(*local_30 + 0x40))();
    LOCK();
    *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + lVar5;
    UNLOCK();
    *(longlong *)(param_1 + 0x310) =
         *(longlong *)(param_1 + 0x310) +
         (lVar5 - *(longlong *)(param_1 + 0x210 + (longlong)*(int *)(param_1 + 0x208) * 8));
    *(longlong *)(param_1 + 0x210 + (longlong)*(int *)(param_1 + 0x208) * 8) = lVar5;
    LOCK();
    *(longlong *)(param_1 + 0x1a8) =
         ((*(longlong *)(param_1 + 0x310) << 3) / (*(longlong *)(param_1 + 800) + 1)) / 1000;
    UNLOCK();
    lVar5 = *(longlong *)(param_1 + 800);
    lVar4 = lVar5 + 0xf;
    if (-1 < lVar5) {
      lVar4 = lVar5;
    }
    LOCK();
    *(longlong *)(param_1 + 0x1b0) = lVar4 >> 4;
    UNLOCK();
    iVar2 = *(int *)(param_1 + 0x208);
    uVar6 = iVar2 + 0x10;
    if (-1 < (int)(iVar2 + 1U)) {
      uVar6 = iVar2 + 1U;
    }
    *(uint *)(param_1 + 0x208) = (iVar2 - (uVar6 & 0xfffffff0)) + 1;
  }
  if ((*(int *)(param_1 + 0xe0) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0xd8), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fdefc FUN_1410fdefc body=111 status=ok
// SIG undefined FUN_1410fdefc(void)

void FUN_1410fdefc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x0001410fdf67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410fdf6c FUN_1410fdf6c body=226 status=ok
// SIG undefined FUN_1410fdf6c(void)

void FUN_1410fdf6c(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x4c))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar3;
      }
      else {
        lVar4 = 0;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x98);
      EnterCriticalSection(lpCriticalSection);
      lVar2 = FUN_1410fe04e(lVar4,*(undefined8 *)(param_1 + 0x50),1);
      if (lVar2 != 0) {
        FUN_1410fe196(lVar2,param_1 + 0x58,param_1 + 0x60);
      }
      *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + 1;
      LeaveCriticalSection(lpCriticalSection);
      EnterCriticalSection(lpCriticalSection);
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_144893a1c(param_1 + 0x60,0);
    return;
  }
  return;
}



// FUNCTION 1410fe04e FUN_1410fe04e body=327 status=ok
// SIG undefined FUN_1410fe04e(void)

longlong * FUN_1410fe04e(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar4 = (uint)param_2;
  iVar5 = (int)((ulonglong)param_2 >> 0x20);
  uVar1 = (uint)((ulonglong)param_2 >> 0x10);
  local_18 = param_2;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar7 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x88);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             iVar5 + (uVar4 << 0x10 | uVar4 & 0xffff) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar4 & 0xffff) >> 4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x48);
      iVar8 = iVar6;
      do {
        if (*(longlong *)(lVar7 + (longlong)iVar8 * 0x38) == param_2) goto LAB_1410fe0eb;
        iVar8 = *(int *)((longlong)iVar8 * 0x38 + lVar7 + 0x30);
      } while (iVar8 != -1);
    }
  }
  if (param_3 == '\0') {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)
             FUN_145804d1a((longlong *)(param_1 + 0x48),
                           (uVar4 << 0x10 | uVar4 & 0xffff) + iVar5 +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + ((uVar4 & 0xffff) >> 4),&local_18);
    *plVar2 = local_18;
  }
  goto LAB_1410fe10b;
  while (iVar6 = *(int *)(lVar3 + 0x30), iVar6 != -1) {
LAB_1410fe0eb:
    lVar3 = lVar7 + (longlong)iVar6 * 0x38;
    if (*(longlong *)(lVar7 + (longlong)iVar6 * 0x38) == param_2) goto LAB_1410fe100;
  }
  lVar3 = 0;
LAB_1410fe100:
  plVar2 = (longlong *)(lVar3 + 8);
  if (lVar3 == 0) {
    plVar2 = (longlong *)0x0;
  }
LAB_1410fe10b:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fe196 FUN_1410fe196 body=441 status=ok
// SIG undefined FUN_1410fe196(void)

void FUN_1410fe196(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_1 + 8) = *param_2;
  uVar4 = *(undefined4 *)(param_3 + 1);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar4 = FUN_1410fe39e(DAT_14c892f44,uVar4,0,0);
  FUN_140393c76(&local_58,uVar4,1);
  lVar2 = local_58;
  local_48 = (longlong)(int)uStack_50;
  local_78 = (longlong)*(int *)(param_3 + 1);
  uVar1 = *param_3;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_68 = 0;
  local_70 = 0;
  cVar3 = FUN_1410fe780(DAT_14c892f44,lVar2,&local_48,uVar1);
  if (((int)local_48 == local_48) && (cVar3 != '\0')) {
    FUN_140393c76(&local_58,local_48,0);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar5 = (ulonglong)DAT_14c892f44;
  }
  else {
    FUN_1447a122a(&local_58,param_3);
    uVar5 = 0;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar5;
  FUN_1410fe350((undefined8 *)(param_1 + 0x18),
                ((uint)((ulonglong)((int)uStack_50 + 2) * 0xaaaaaaab >> 0x20) & 0xfffffffe) * 2 + 1,
                1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + -1 + (longlong)*(int *)(param_1 + 0x20)) = 0;
  if (0 < (int)uStack_50) {
    FUN_1410fe63e(local_58,uStack_50 & 0xffffffff,*(undefined8 *)(param_1 + 0x18),0);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fe350 FUN_1410fe350 body=77 status=ok
// SIG undefined FUN_1410fe350(void)

void FUN_1410fe350(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144761492();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_145804ca2();
      return;
    }
  }
  return;
}



// FUNCTION 1410fe39e FUN_1410fe39e body=189 status=ok
// SIG undefined FUN_1410fe39e(void)

longlong FUN_1410fe39e(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = param_1;
  cVar1 = FUN_1410fe45c(param_1,&local_28,(longlong)param_2,(longlong)param_4);
  if ((cVar1 == '\0') || (lVar2 = local_28, (int)local_28 != local_28)) {
    FUN_1400021e4(&local_20,&local_38);
    local_48 = local_38;
    if (local_30 == 0) {
      local_48 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Core/Private/Misc/Compression.cpp",0x2a2,
                  L"CompressMemoryBound failed, check sizes/format (%d, %s)",param_2);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar2 = 0xffffffff;
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1410fe45c FUN_1410fe45c body=480 status=ok
// SIG undefined FUN_1410fe45c(void)

ulonglong FUN_1410fe45c(ulonglong param_1,ulonglong *param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong unaff_RBP;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined1 local_88 [48];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0xffffffffffffffff;
  if (-1 < (longlong)param_3) {
    if (param_1 == 0) {
      *param_2 = param_3;
LAB_1410fe610:
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
      goto LAB_1410fe613;
    }
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (DAT_14c892f44 == param_1) {
      if (param_3 >> 0x20 == 0) {
        if ((param_4 == 0xf) || (param_4 == 0)) {
          uVar2 = FUN_144b4b400(param_3 & 0xffffffff);
          uVar5 = (ulonglong)uVar2;
        }
        else {
          uVar5 = (param_3 + 7 >> 3) + param_3 + (param_3 + 0x3f >> 6) + 0xb;
        }
LAB_1410fe60d:
        *param_2 = uVar5;
        goto LAB_1410fe610;
      }
    }
    else if (DAT_14c892f48 == param_1) {
      if (param_3 < 0x80000000) {
        local_58 = &LAB_14277a7c7;
        local_50 = &LAB_14277a7d4;
        local_48 = 0;
        local_98 = &DAT_149e29fc6;
        local_90 = 0x58;
        local_a0 = 0;
        local_a8 = 9;
        FUN_144b4d410(local_88,0xffffffff,8,0x1f);
        iVar3 = FUN_144b4d210(local_88,param_3 & 0xffffffff);
        FUN_144b4cd70(local_88);
        *param_2 = (longlong)(iVar3 + 0xc);
        bVar6 = iVar3 + 0xc < 0;
LAB_1410fe5e9:
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),!bVar6);
        goto LAB_1410fe613;
      }
    }
    else if (DAT_14c892f4c == param_1) {
      if (param_3 < 0x7e000001) {
        uVar5 = (ulonglong)((int)param_3 + (int)((param_3 & 0xffffffff) / 0xff) + 0x10);
        goto LAB_1410fe60d;
      }
    }
    else {
      unaff_RBP = 0;
      plVar4 = (longlong *)FUN_142772eb6(param_1,0);
      if (plVar4 == (longlong *)0x0) goto LAB_1410fe613;
      cVar1 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2,param_3,param_4);
      if (cVar1 != '\0') {
        bVar6 = (longlong)*param_2 < 0;
        goto LAB_1410fe5e9;
      }
    }
  }
  unaff_RBP = 0;
LAB_1410fe613:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return unaff_RBP & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410fe63e FUN_1410fe63e body=321 status=ok
// SIG undefined FUN_1410fe63e(void)

ulonglong FUN_1410fe63e(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  longlong lVar10;
  uint uVar11;
  
  puVar9 = &DAT_149e27170;
  if (param_4 == '\x01') {
    puVar9 = &DAT_149e27130;
  }
  uVar5 = (ulonglong)((int)((ulonglong)(param_2 + 2) * 0xaaaaaaab >> 0x20) * 2 & 0xfffffffc);
  *(undefined1 *)(param_3 + uVar5) = 0;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar11 = param_2 % 3;
    param_3 = param_3 + uVar5;
    param_1 = param_1 + (ulonglong)param_2;
    if (uVar11 != 0) {
      bVar2 = *(byte *)(param_1 + -1);
      if (uVar11 == 2) {
        pbVar1 = (byte *)(param_1 + -2);
        param_1 = param_1 + -2;
        uVar7 = (uint)*pbVar1 * 0x400 + (uint)bVar2 * 4;
        *(undefined1 *)(param_3 + -1) = 0x3d;
        uVar6 = puVar9[(bVar2 & 0xf) << 2];
      }
      else {
        param_1 = param_1 + -1;
        uVar7 = (uint)bVar2 << 10;
        *(undefined1 *)(param_3 + -1) = 0x3d;
        uVar6 = 0x3d;
      }
      *(undefined1 *)(param_3 + -2) = uVar6;
      *(undefined *)(param_3 + -3) = puVar9[uVar7 >> 6 & 0x3f];
      *(undefined *)(param_3 + -4) = puVar9[uVar7 >> 0xc];
      param_3 = param_3 + -4;
    }
    if (param_2 != uVar11) {
      puVar8 = (undefined1 *)(param_3 + -1);
      lVar10 = 0;
      do {
        bVar2 = *(byte *)(param_1 + -1 + lVar10);
        bVar3 = *(byte *)(param_1 + -2 + lVar10);
        bVar4 = *(byte *)(param_1 + -3 + lVar10);
        *puVar8 = puVar9[bVar2 & 0x3f];
        puVar8[-1] = puVar9[(ushort)(CONCAT11(bVar3,bVar2) >> 6) & 0x3f];
        puVar8[-2] = puVar9[((uint)bVar4 << 0x10 | (uint)bVar3 << 8) >> 0xc & 0x3f];
        puVar8[-3] = puVar9[bVar4 >> 2];
        lVar10 = lVar10 + -3;
        puVar8 = puVar8 + -4;
      } while ((param_2 / 3) * -3 != (int)lVar10);
    }
  }
  return uVar5;
}



// FUNCTION 1410fe780 FUN_1410fe780 body=862 status=ok
// SIG undefined FUN_1410fe780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1410fe780(ulonglong param_1,undefined8 param_2,ulonglong *param_3,LARGE_INTEGER param_4,
             ulonglong param_5,undefined4 param_6,ulonglong param_7)

{
  LARGE_INTEGER LVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  LARGE_INTEGER local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  QueryPerformanceCounter(&local_a0);
  LVar1 = local_a0;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892f44 == param_1) {
    if (((int)param_7 != 0xf) && ((int)param_7 != 0)) {
      if ((*param_3 | param_5) >> 0x20 == 0) {
        local_88 = (undefined4)*param_3;
        local_70 = &LAB_14277a7c7;
        local_68 = &LAB_14277a7d4;
        local_60 = 0;
        local_b8 = &DAT_149e29fc6;
        local_b0 = 0x58;
        local_c0 = (ulonglong)local_c0._4_4_ << 0x20;
        local_c8 = CONCAT44(local_c8._4_4_,9);
        local_a0 = param_4;
        local_98 = (int)param_5;
        local_90 = param_2;
        iVar2 = FUN_144b4d410(&local_a0,0xffffffff,8,param_7 & 0xffffffff);
        if (iVar2 == 0) {
          iVar2 = FUN_144b4c2e0(&local_a0,4);
          if (iVar2 == 1) {
            *param_3 = (ulonglong)local_84;
            iVar2 = FUN_144b4cd70();
            cVar5 = iVar2 == 0;
            goto LAB_1410fea77;
          }
          FUN_144b4cd70();
        }
      }
      cVar5 = '\0';
      goto LAB_1410fea77;
    }
    if ((*param_3 | param_5) >> 0x20 == 0) {
      local_a0.s.LowPart = (int)*param_3;
      local_c8 = CONCAT44(local_c8._4_4_,0xffffffff);
      iVar2 = compress2(param_2,&local_a0,param_4.QuadPart,param_5 & 0xffffffff);
      cVar5 = iVar2 == 0;
      *param_3 = local_a0.QuadPart & 0xffffffff;
      goto LAB_1410fea77;
    }
LAB_1410fea52:
    QueryPerformanceCounter(&local_a0);
    LOCK();
    _DAT_14c866bb0 = _DAT_14c866bb0 + (local_a0.QuadPart - (longlong)LVar1);
    UNLOCK();
  }
  else {
    if (DAT_14c892f48 == param_1) {
      local_70 = &LAB_14277a7c7;
      local_68 = &LAB_14277a7d4;
      local_60 = 0;
      cVar5 = '\0';
      if ((param_5 >> 0x20 == 0) && (*param_3 >> 0x20 == 0)) {
        local_b8 = &DAT_149e29fc6;
        local_b0 = 0x58;
        local_c0 = (ulonglong)local_c0._4_4_ << 0x20;
        local_c8 = CONCAT44(local_c8._4_4_,9);
        local_a0 = param_4;
        local_98 = (int)param_5;
        FUN_144b4d410(&local_a0,0xffffffff,8,0x1f);
        local_88 = (undefined4)*param_3;
        local_90 = param_2;
        do {
          iVar2 = FUN_144b4c2e0(&local_a0,4);
        } while (iVar2 == 0);
        FUN_144b4cd70(&local_a0);
        *param_3 = (ulonglong)local_84;
        cVar5 = iVar2 == 1;
      }
    }
    else if (DAT_14c892f4c == param_1) {
      if (0x7e000000 < (longlong)param_5) goto LAB_1410feaaf;
      local_c8 = CONCAT44(local_c8._4_4_,0xc);
      iVar2 = FUN_1467a9b90(param_4.QuadPart,param_2,param_5 & 0xffffffff,(int)*param_3);
      *param_3 = (longlong)iVar2;
      cVar5 = 0 < iVar2;
    }
    else {
      plVar3 = (longlong *)FUN_142772eb6(param_1,0);
      if (plVar3 == (longlong *)0x0) goto LAB_1410fea52;
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,param_6);
      local_c0 = param_7;
      local_c8 = param_5;
      cVar5 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3,param_4.QuadPart);
    }
LAB_1410fea77:
    QueryPerformanceCounter(&local_a0);
    LOCK();
    _DAT_14c866bb0 = _DAT_14c866bb0 + (local_a0.QuadPart - (longlong)LVar1);
    UNLOCK();
    if (cVar5 != '\0') {
      LOCK();
      _DAT_14c866bb8 = _DAT_14c866bb8 + param_5;
      UNLOCK();
      LOCK();
      _DAT_14c866bc0 = _DAT_14c866bc0 + *param_3;
      UNLOCK();
      uVar4 = CONCAT71((int7)(*param_3 >> 8),1);
      goto LAB_1410feab1;
    }
  }
LAB_1410feaaf:
  uVar4 = 0;
LAB_1410feab1:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1410feae0 FUN_1410feae0 body=482 status=ok
// SIG undefined FUN_1410feae0(void)

void FUN_1410feae0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 1410fecc3 FUN_1410fecc3 body=47 status=ok
// SIG undefined FUN_1410fecc3(void)

void FUN_1410fecc3(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_1410fecf2(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a1b6200;
  *(undefined1 *)(puVar1 + 0x18) = 2;
  return;
}



// FUNCTION 1410fecf2 FUN_1410fecf2 body=275 status=ok
// SIG undefined FUN_1410fecf2(void)

undefined8 * FUN_1410fecf2(undefined8 *param_1)

{
  FUN_141071f0c();
  *param_1 = &PTR_FUN_14a7d49d0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  return param_1;
}



// FUNCTION 1410fee06 FUN_1410fee06 body=65 status=ok
// SIG undefined FUN_1410fee06(void)

void FUN_1410fee06(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a18e3d0;
  plVar3 = (longlong *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x0001410fee43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410fee48 thunk_FUN_1410fee4e body=5 status=ok
// SIG undefined thunk_FUN_1410fee4e(void)

void thunk_FUN_1410fee4e(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_1[0x15] == 0) || (*(char *)(param_1[0x15] + 0x178) != '\x01')) {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') {
        return;
      }
      plVar2 = param_1 + 0x642;
    }
    else {
      plVar2 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    cVar1 = FUN_1410feeea(plVar2);
    if (cVar1 != '\0') {
      if (((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x178) == '\x02')) &&
         ((param_2 & 8) == 0)) {
        (**(code **)(*param_1 + 3000))(param_1);
        FUN_145805126(param_1,param_2);
      }
      FUN_141105774(param_1,0,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1410fee4e FUN_1410fee4e body=155 status=ok
// SIG undefined FUN_1410fee4e(void)

void FUN_1410fee4e(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_1[0x15] == 0) || (*(char *)(param_1[0x15] + 0x178) != '\x01')) {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') {
        return;
      }
      plVar2 = param_1 + 0x642;
    }
    else {
      plVar2 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    cVar1 = FUN_1410feeea(plVar2);
    if (cVar1 != '\0') {
      if (((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x178) == '\x02')) &&
         ((param_2 & 8) == 0)) {
        (**(code **)(*param_1 + 3000))(param_1);
        FUN_145805126(param_1,param_2);
      }
      FUN_141105774(param_1,0,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1410feeea FUN_1410feeea body=155 status=ok
// SIG undefined FUN_1410feeea(void)

ulonglong FUN_1410feeea(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  lVar3 = FUN_140153468();
  if (lVar3 != 0) {
    lVar3 = FUN_140153468(param_1);
    if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
       && (((plVar5 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar5 != (longlong *)0x0 && (*(uint *)(plVar5 + 2) == param_1[1])) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
            ((*plVar5 != 0 && (lVar2 = *(longlong *)(*plVar5 + 0xa8), lVar2 != 0)))))))) {
      uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      if ((*(char *)(lVar2 + 0x178) == '\x03') ||
         (((lVar3 != 0 && (*(char *)(lVar2 + 0x178) == '\x02')) &&
          ((*(byte *)(lVar3 + 0x101) & 0x10) != 0)))) goto LAB_1410fef7d;
    }
  }
  uVar4 = 0;
LAB_1410fef7d:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1410fef86 FUN_1410fef86 body=116 status=ok
// SIG undefined FUN_1410fef86(void)

void FUN_1410fef86(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410feffa FUN_1410feffa body=118 status=ok
// SIG undefined FUN_1410feffa(void)

void FUN_1410feffa(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410ff070 FUN_1410ff070 body=387 status=ok
// SIG undefined FUN_1410ff070(void)

void FUN_1410ff070(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ff204 FUN_1410ff204 body=1117 status=ok
// SIG undefined FUN_1410ff204(void)

longlong FUN_1410ff204(longlong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar16 = (int)param_1[1];
  iVar14 = *(int *)((longlong)param_1 + 0x34);
  if (iVar16 != iVar14) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar8 = *param_1;
      do {
        lVar18 = (longlong)iVar5 * 0x68;
        lVar17 = lVar8 + lVar18;
        if ((*(longlong *)(lVar8 + lVar18) == *param_3) &&
           (*(longlong *)(lVar8 + 8 + lVar18) == param_3[1])) {
          if (lVar17 != 0) goto LAB_1410ff4c7;
          break;
        }
        iVar5 = *(int *)(lVar17 + 0x60);
      } while (iVar5 != -1);
    }
  }
  if (iVar14 == 0) {
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1406a7630(param_1,iVar16);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar5 = iVar14 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar11 = iVar14 + 1;
    iVar15 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar15 = iVar14;
    }
    if (iVar15 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar14;
        }
        else {
          uVar6 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar6) {
              uVar10 = uVar6;
            }
          }
          else {
            uVar10 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar10 << 2,0);
          iVar5 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar6 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar7,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar7;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar8 = (longlong)iVar16;
    iVar5 = *(int *)(*param_1 + 4 + lVar8 * 0x68);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar14 + -1;
    if (iVar14 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x68) = 0xffffffff;
    }
  }
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar14 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar14 = iVar16;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar14 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
  plVar7 = (longlong *)(*param_1 + lVar8 * 0x68);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar17 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  puVar2 = (undefined8 *)(*param_1 + 0x10 + lVar8 * 0x68);
  *(int *)(puVar2 + -2) = (int)*param_3;
  *(undefined4 *)((longlong)puVar2 + -0xc) = uVar3;
  *(int *)(puVar2 + -1) = (int)lVar17;
  *(undefined4 *)((longlong)puVar2 + -4) = uVar4;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  FUN_1410ff662(puVar2,&local_98);
  if (local_58 == 0) {
    *(undefined4 *)(plVar7 + 9) = local_60;
  }
  if (plVar7[10] != 0) {
    FUN_1400020a8();
  }
  plVar7[10] = local_58;
  local_58 = 0;
  *(undefined4 *)(plVar7 + 0xb) = local_50;
  local_50 = 0;
  FUN_140d6e09a();
  *(undefined4 *)(plVar7 + 0xc) = 0xffffffff;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar6 != 0) && (uVar6 != 1)) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar8 = *param_1;
      do {
        lVar17 = (longlong)iVar14 * 0x68;
        _Dst = (void *)(lVar8 + lVar17);
        if ((*(longlong *)(lVar8 + lVar17) == *plVar7) &&
           (*(longlong *)(lVar8 + 8 + lVar17) == plVar7[1])) {
          *(undefined4 *)((longlong)_Dst + 0x58) = 0;
          if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
            FUN_1400020a8();
          }
          FUN_140d6e09a((longlong)_Dst + 0x10);
          memmove(_Dst,plVar7,0x60);
          FUN_14701ef96(param_1,iVar16);
          goto LAB_1410ff4a7;
        }
        iVar14 = *(int *)((longlong)_Dst + 0x60);
      } while (iVar14 != -1);
    }
  }
  if (uVar6 < 4) {
    iVar14 = 1;
  }
  else {
    uVar13 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar6 < 1) || (iVar14 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)((longlong)plVar7 + 100) = param_2;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(plVar7 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    FUN_1410ff6f8(param_1);
  }
LAB_1410ff4a7:
  lVar17 = *param_1 + (longlong)iVar16 * 0x68;
LAB_1410ff4c7:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar17 + 0x10;
}



// FUNCTION 1410ff662 FUN_1410ff662 body=150 status=ok
// SIG undefined FUN_1410ff662(void)

longlong * FUN_1410ff662(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1410ff6f8 FUN_1410ff6f8 body=743 status=ok
// SIG undefined FUN_1410ff6f8(void)

void FUN_1410ff6f8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      uVar5 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar13 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar13 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_74 = iVar12;
        lVar11 = *param_1;
        lVar10 = (longlong)iVar17 * 0x68;
        uVar3 = *(undefined8 *)(lVar11 + lVar10);
        uVar4 = *(undefined8 *)(lVar11 + 8 + lVar10);
        uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar7 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar6 = (uint)uVar3 & 0xffff;
        uVar6 = ((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4);
        uVar7 = (uint)uVar4 & 0xffff;
        uVar9 = (longlong)
                (int)((uVar6 >> 2) +
                      ((uint)uVar4 << 0x10 | uVar7) + (int)((ulonglong)uVar4 >> 0x20) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^
                     uVar6) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar9;
        *(int *)(lVar11 + 100 + lVar10) = iVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x60 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar13 = ~(uint)uVar16 & uVar13;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar2 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar11 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar13;
        iVar12 = local_74;
        if (uVar5 == 0) {
          iVar14 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar14 = iVar2 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar15 = iVar14;
          if (iVar14 < iVar17) {
            iVar15 = iVar17;
          }
          if (iVar14 <= iVar17) break;
          lVar10 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar5 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar15 - lVar11 == lVar10) goto LAB_1410ff9b8;
          }
          local_70 = (ulonglong)(iVar17 + (int)lVar10 + 1);
          uVar13 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar9 = uVar16 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar17 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar2);
    }
  }
LAB_1410ff9b8:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ff9e0 FUN_1410ff9e0 body=584 status=ok
// SIG undefined FUN_1410ff9e0(void)

void FUN_1410ff9e0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  uint local_54;
  uint *local_50;
  uint local_48;
  int local_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x228) != 0) &&
     (*(undefined4 *)(param_1 + 0x228) = 0, *(int *)(param_1 + 0x22c) < 0)) {
    FUN_14767d77e();
  }
  lVar1 = param_1 + 0x138;
  puVar2 = (uint *)(param_1 + 0x148);
  iVar3 = *(int *)(param_1 + 0x160);
  local_54 = 1;
  if (iVar3 == 0) {
    local_40 = 0;
    local_58 = 0;
    local_44 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x158);
    if (*(uint **)(param_1 + 0x158) == (uint *)0x0) {
      puVar7 = puVar2;
    }
    uVar6 = *puVar7;
    if (uVar6 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_58 = (int)uVar8 + 1;
      local_40 = (int)uVar8 * 0x20 + 0x20;
      iVar5 = 0;
      do {
        local_44 = iVar3;
        if (uVar8 == uVar9) goto LAB_1410ffabc;
        iVar5 = iVar5 + 0x20;
        uVar6 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar6 == 0);
      local_58 = (int)uVar9;
      local_40 = iVar5;
    }
    else {
      local_40 = 0;
      local_58 = 0;
    }
    local_54 = -uVar6 & uVar6;
    uVar8 = (ulonglong)local_54 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_44 = (local_40 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_44) {
      local_44 = iVar3;
    }
  }
LAB_1410ffabc:
  local_48 = 0xffffffff;
  local_60 = lVar1;
  local_50 = puVar2;
  if (local_44 != iVar3) {
    do {
      do {
        local_48 = local_48 & ~local_54;
        FUN_1449c0562(&local_58);
      } while (local_44 != iVar3);
    } while ((local_50 != puVar2) || (local_60 != lVar1));
  }
  FUN_1410ffc2a(param_1 + 0x48);
  FUN_1410ffdb0(param_1 + 0x98);
  FUN_1410fff36(param_1 + 0xe8);
  FUN_14094e980(lVar1);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (0x80 < *(uint *)(param_1 + 0x18c)) {
    *(undefined4 *)(param_1 + 0x18c) = 0x80;
    FUN_1446efbd8(param_1 + 0x170,0);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (0x80 < *(uint *)(param_1 + 0x1ac)) {
    *(undefined4 *)(param_1 + 0x1ac) = 0x80;
    FUN_1446efbd8(param_1 + 400,0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ffc2a FUN_1410ffc2a body=368 status=ok
// SIG undefined FUN_1410ffc2a(void)

void FUN_1410ffc2a(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar4 * 0xc) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_14094ea52(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140bc001c(param_1);
  return;
}



// FUNCTION 1410ffdb0 FUN_1410ffdb0 body=368 status=ok
// SIG undefined FUN_1410ffdb0(void)

void FUN_1410ffdb0(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar4 * 0xc) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_14094e9d8(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140bc0290(param_1);
  return;
}



// FUNCTION 1410fff36 FUN_1410fff36 body=366 status=ok
// SIG undefined FUN_1410fff36(void)

void FUN_1410fff36(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_14094e928(param_1);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140bc0504(param_1);
  return;
}



// FUNCTION 1411000b8 FUN_1411000b8 body=99 status=ok
// SIG undefined FUN_1411000b8(void)

ulonglong FUN_1411000b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001411000ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))(0);
  return uVar7;
}



// FUNCTION 14110011c FUN_14110011c body=2995 status=ok
// SIG undefined FUN_14110011c(void)

undefined8 FUN_14110011c(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  char cVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined **ppuVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong *plVar33;
  int iVar34;
  longlong *plVar35;
  int iVar36;
  longlong *plVar37;
  longlong lVar38;
  longlong *plVar39;
  bool bVar40;
  float fVar41;
  undefined1 auStack_408 [44];
  int local_3dc;
  uint *local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  longlong local_3b8 [2];
  longlong local_3a8 [2];
  code *local_398;
  undefined8 *local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378 [188];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar31 = *(longlong *)(param_1 + 0x28);
    local_3c0 = (longlong)*(int *)(param_1 + 0x30) * 0x30 + lVar31;
    local_3d8 = (uint *)(param_1 + 0x38);
    local_3c8 = param_1 + 0x10;
    local_3dc = 0;
    local_3d0 = param_1;
    do {
      if ((longlong)*(int *)(lVar31 + 0x28) != 0) {
        lVar27 = *(longlong *)(lVar31 + 0x20);
        lVar38 = (longlong)*(int *)(lVar31 + 0x28) << 6;
        iVar28 = 0;
        iVar25 = 0;
        do {
          if ((*(int *)(lVar27 + 0x24) == -1) && (*(int *)(lVar27 + 0x28) == -1)) {
            plVar18 = *(longlong **)(lVar27 + 0x30);
            if (plVar18 == (longlong *)0x0) {
              local_388 = CONCAT44(*(undefined4 *)(lVar31 + 0x10),*(undefined4 *)(lVar31 + 0x18));
              local_380 = CONCAT44(*(undefined4 *)(lVar31 + 0x1c),*(undefined4 *)(lVar31 + 0x14));
              if (*(int *)(lVar27 + 0x20) == 2) {
                lVar17 = FUN_14001cc68(0x48,0x10);
                FUN_148a99d6a(lVar17,lVar27,&local_388);
                plVar18 = (longlong *)FUN_14001cc68(0x18);
                plVar18[1] = (longlong)&DAT_100000001;
                ppuVar19 = &PTR_LAB_14b4f22b0;
LAB_141100321:
                *plVar18 = (longlong)ppuVar19;
                plVar18[2] = lVar17;
                *(longlong *)(lVar27 + 0x30) = lVar17;
                plVar32 = *(longlong **)(lVar27 + 0x38);
                if (plVar18 == plVar32) {
                  if (plVar18 != (longlong *)0x0) {
                    LOCK();
                    plVar32 = plVar18 + 1;
                    *(int *)plVar32 = (int)*plVar32 + -1;
                    UNLOCK();
                    if ((int)*plVar32 == 0) {
                      (**(code **)*plVar18)(plVar18);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar18 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar34 = *piVar2;
                      UNLOCK();
                      plVar32 = plVar18;
                      goto joined_r0x00014110038c;
                    }
                  }
                }
                else {
                  *(longlong **)(lVar27 + 0x38) = plVar18;
                  if (plVar32 != (longlong *)0x0) {
                    LOCK();
                    plVar18 = plVar32 + 1;
                    *(int *)plVar18 = (int)*plVar18 + -1;
                    UNLOCK();
                    if ((int)*plVar18 == 0) {
                      (**(code **)*plVar32)(plVar32);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar32 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar34 = *piVar2;
                      UNLOCK();
joined_r0x00014110038c:
                      if (iVar34 == 0) {
                        (**(code **)(*plVar32 + 0x10))(plVar32);
                      }
                    }
                  }
                }
              }
              else if (*(int *)(lVar27 + 0x20) == 1) {
                lVar17 = FUN_14001cc68(0xb0,0x10);
                FUN_146583e76(lVar17,lVar27,lVar27 + 0x10,&local_388);
                plVar18 = (longlong *)FUN_14001cc68(0x18);
                plVar18[1] = (longlong)&DAT_100000001;
                ppuVar19 = &PTR_FUN_14b4f2290;
                goto LAB_141100321;
              }
              plVar18 = *(longlong **)(lVar27 + 0x30);
            }
            cVar16 = (**(code **)(*plVar18 + 0x10))();
            if (cVar16 == '\0') {
              (**(code **)(**(longlong **)(lVar27 + 0x30) + 8))();
              local_3dc = local_3dc + 1;
            }
            else {
              (**(code **)(**(longlong **)(lVar27 + 0x30) + 0x18))();
              *(undefined4 *)(lVar27 + 0x24) = (undefined4)local_388;
              *(undefined4 *)(lVar27 + 0x28) = local_388._4_4_;
              iVar28 = iVar28 + 1;
            }
          }
          else {
            *(undefined8 *)(lVar27 + 0x30) = 0;
            plVar18 = *(longlong **)(lVar27 + 0x38);
            if (plVar18 != (longlong *)0x0) {
              *(undefined8 *)(lVar27 + 0x38) = 0;
              LOCK();
              plVar32 = plVar18 + 1;
              *(int *)plVar32 = (int)*plVar32 + -1;
              UNLOCK();
              if ((int)*plVar32 == 0) {
                (**(code **)*plVar18)(plVar18);
                LOCK();
                piVar2 = (int *)((longlong)plVar18 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                }
              }
            }
            iVar25 = iVar25 + 1;
          }
          lVar27 = lVar27 + 0x40;
          lVar38 = lVar38 + -0x40;
        } while (lVar38 != 0);
        if (0 < iVar28) {
          uVar29 = iVar28 + iVar25;
          if (uVar29 == *(uint *)(lVar31 + 0x28)) {
            if (1 < (int)uVar29) {
              lVar27 = *(longlong *)(lVar31 + 0x20);
              memset(local_378,0,0x2f0);
              local_380 = (ulonglong)uVar29 * 0x40 + lVar27 + -0x40;
              local_388 = lVar27;
              fVar41 = logf((float)(int)uVar29);
              local_378[0] = (int)(longlong)(fVar41 + fVar41);
              plVar18 = &local_388;
              do {
                plVar21 = (longlong *)*plVar18;
                plVar32 = (longlong *)plVar18[1];
                iVar25 = (int)plVar18[2];
                iVar28 = (int)((ulonglong)((longlong)plVar32 - (longlong)plVar21) >> 6);
                uVar29 = iVar28 + 1;
                plVar30 = plVar21;
                plVar37 = plVar32;
                if (iVar25 != 0) {
LAB_141100448:
                  if (8 < (int)uVar29) {
                    uVar24 = (ulonglong)(uVar29 >> 1);
                    lVar27 = plVar21[uVar24 * 8];
                    lVar38 = (plVar21 + uVar24 * 8)[1];
                    lVar17 = plVar21[uVar24 * 8 + 2];
                    lVar3 = (plVar21 + uVar24 * 8 + 2)[1];
                    lVar4 = plVar21[uVar24 * 8 + 4];
                    lVar5 = (plVar21 + uVar24 * 8 + 4)[1];
                    lVar6 = plVar21[uVar24 * 8 + 6];
                    lVar7 = (plVar21 + uVar24 * 8 + 6)[1];
                    lVar8 = *plVar21;
                    lVar9 = plVar21[1];
                    lVar10 = plVar21[2];
                    lVar11 = plVar21[3];
                    lVar12 = plVar21[4];
                    lVar13 = plVar21[5];
                    lVar14 = plVar21[7];
                    plVar21[uVar24 * 8 + 6] = plVar21[6];
                    (plVar21 + uVar24 * 8 + 6)[1] = lVar14;
                    plVar21[uVar24 * 8 + 4] = lVar12;
                    (plVar21 + uVar24 * 8 + 4)[1] = lVar13;
                    plVar21[uVar24 * 8 + 2] = lVar10;
                    (plVar21 + uVar24 * 8 + 2)[1] = lVar11;
                    plVar21[uVar24 * 8] = lVar8;
                    (plVar21 + uVar24 * 8)[1] = lVar9;
                    plVar21[6] = lVar6;
                    plVar21[7] = lVar7;
                    plVar21[4] = lVar4;
                    plVar21[5] = lVar5;
                    plVar21[2] = lVar17;
                    plVar21[3] = lVar3;
                    *plVar21 = lVar27;
                    plVar21[1] = lVar38;
                    plVar35 = plVar32 + 8;
                    plVar20 = plVar21;
                    do {
                      plVar15 = plVar20 + 8;
                      plVar33 = plVar20 + 8;
                      do {
                        plVar26 = plVar33;
                        plVar20 = plVar15;
                        if (plVar32 < plVar20) break;
                        plVar15 = plVar20 + 8;
                        plVar33 = plVar26 + 8;
                      } while (*(int *)((longlong)plVar20 + 0x24) <=
                               *(int *)((longlong)plVar21 + 0x24));
                      plVar15 = plVar35 + -0x10;
                      do {
                        plVar33 = plVar35;
                        plVar39 = plVar15;
                        plVar35 = plVar33 + -8;
                        if (plVar35 <= plVar21) break;
                        plVar15 = plVar39 + -8;
                      } while (*(int *)((longlong)plVar21 + 0x24) <=
                               *(int *)((longlong)plVar33 + -0x1c));
                      if (plVar35 < plVar20) goto LAB_1411005ca;
                      lVar27 = *plVar20;
                      lVar38 = plVar20[1];
                      lVar17 = plVar20[2];
                      lVar3 = plVar20[3];
                      lVar4 = plVar20[4];
                      lVar5 = plVar20[5];
                      lVar6 = plVar20[6];
                      lVar7 = plVar20[7];
                      lVar8 = *plVar35;
                      lVar9 = plVar33[-7];
                      lVar10 = plVar33[-6];
                      lVar11 = plVar33[-5];
                      lVar12 = plVar33[-4];
                      lVar13 = plVar33[-3];
                      lVar14 = plVar33[-1];
                      plVar20[6] = plVar33[-2];
                      plVar20[7] = lVar14;
                      plVar20[4] = lVar12;
                      plVar20[5] = lVar13;
                      plVar20[2] = lVar10;
                      plVar20[3] = lVar11;
                      *plVar20 = lVar8;
                      plVar20[1] = lVar9;
                      plVar33[-2] = lVar6;
                      plVar33[-1] = lVar7;
                      plVar33[-4] = lVar4;
                      plVar33[-3] = lVar5;
                      plVar33[-6] = lVar17;
                      plVar33[-5] = lVar3;
                      *plVar35 = lVar27;
                      plVar33[-7] = lVar38;
                    } while( true );
                  }
                  for (; plVar30 = plVar21, plVar37 = plVar21, plVar21 < plVar32;
                      plVar32 = plVar32 + -8) {
                    while (plVar35 = plVar30, plVar30 = plVar37 + 8, plVar30 <= plVar32) {
                      piVar2 = (int *)((longlong)plVar37 + 100);
                      plVar37 = plVar30;
                      if (*piVar2 <= *(int *)((longlong)plVar35 + 0x24)) {
                        plVar30 = plVar35;
                      }
                    }
                    local_88 = *plVar35;
                    uStack_80 = (longlong *)plVar35[1];
                    local_78 = plVar35[2];
                    lStack_70 = plVar35[3];
                    local_68 = plVar35[4];
                    lStack_60 = plVar35[5];
                    local_58 = plVar35[6];
                    lStack_50 = plVar35[7];
                    lVar7 = local_88;
                    plVar30 = uStack_80;
                    lVar27 = *plVar32;
                    lVar38 = plVar32[1];
                    lVar17 = plVar32[2];
                    lVar3 = plVar32[3];
                    lVar4 = plVar32[4];
                    lVar5 = plVar32[5];
                    lVar6 = plVar32[7];
                    plVar35[6] = plVar32[6];
                    plVar35[7] = lVar6;
                    plVar35[4] = lVar4;
                    plVar35[5] = lVar5;
                    plVar35[2] = lVar17;
                    plVar35[3] = lVar3;
                    *plVar35 = lVar27;
                    plVar35[1] = lVar38;
                    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                    plVar32[6] = local_58;
                    plVar32[7] = lStack_50;
                    plVar32[4] = local_68;
                    plVar32[5] = lStack_60;
                    plVar32[2] = local_78;
                    plVar32[3] = lStack_70;
                    *(undefined4 *)plVar32 = (undefined4)local_88;
                    *(undefined4 *)((longlong)plVar32 + 4) = local_88._4_4_;
                    *(undefined4 *)(plVar32 + 1) = (undefined4)uStack_80;
                    *(undefined4 *)((longlong)plVar32 + 0xc) = uStack_80._4_4_;
                    local_88 = lVar7;
                    uStack_80 = plVar30;
                  }
                  goto LAB_141100b2b;
                }
LAB_1411006d9:
                if (uVar29 != 0) {
                  iVar25 = (iVar28 - (iVar28 + -1 >> 0x1f)) + -1 >> 1;
                  iVar28 = iVar25;
joined_r0x0001411006fc:
                  do {
                    iVar34 = iVar25 * 2 + 1;
                    if (iVar34 < (int)uVar29) {
                      iVar36 = iVar25 * 2 + 2;
                      if ((iVar36 < (int)uVar29) &&
                         (*(int *)((longlong)plVar21 + (longlong)iVar34 * 0x40 + 0x24) <=
                          *(int *)((longlong)plVar21 + (longlong)iVar36 * 0x40 + 0x24))) {
                        iVar34 = iVar36;
                      }
                      if (*(int *)((longlong)plVar21 + (longlong)iVar25 * 0x40 + 0x24) <
                          *(int *)((longlong)plVar21 + (longlong)iVar34 * 0x40 + 0x24)) {
                        plVar37 = plVar21 + (longlong)iVar25 * 8;
                        plVar30 = plVar21 + (longlong)iVar34 * 8;
                        local_88 = *plVar37;
                        uStack_80 = (longlong *)plVar37[1];
                        local_78 = plVar37[2];
                        lStack_70 = plVar37[3];
                        local_68 = plVar37[4];
                        lStack_60 = plVar37[5];
                        local_58 = plVar37[6];
                        lStack_50 = plVar37[7];
                        lVar7 = local_88;
                        plVar32 = uStack_80;
                        lVar27 = *plVar30;
                        lVar38 = plVar30[1];
                        lVar17 = plVar30[2];
                        lVar3 = plVar30[3];
                        lVar4 = plVar30[4];
                        lVar5 = plVar30[5];
                        lVar6 = plVar30[7];
                        plVar37[6] = plVar30[6];
                        plVar37[7] = lVar6;
                        plVar37[4] = lVar4;
                        plVar37[5] = lVar5;
                        plVar37[2] = lVar17;
                        plVar37[3] = lVar3;
                        *plVar37 = lVar27;
                        plVar37[1] = lVar38;
                        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                        plVar30[6] = local_58;
                        plVar30[7] = lStack_50;
                        plVar30[4] = local_68;
                        plVar30[5] = lStack_60;
                        plVar30[2] = local_78;
                        plVar30[3] = lStack_70;
                        *(undefined4 *)plVar30 = (undefined4)local_88;
                        *(undefined4 *)((longlong)plVar30 + 4) = local_88._4_4_;
                        *(undefined4 *)(plVar30 + 1) = (undefined4)uStack_80;
                        *(undefined4 *)((longlong)plVar30 + 0xc) = uStack_80._4_4_;
                        iVar25 = iVar34;
                        local_88 = lVar7;
                        uStack_80 = plVar32;
                        goto joined_r0x0001411006fc;
                      }
                    }
                    bVar40 = iVar28 != 0;
                    iVar25 = iVar28 + -1;
                    iVar28 = iVar25;
                  } while (bVar40);
                  if (1 < (int)uVar29) {
                    uVar24 = (ulonglong)uVar29 - 1;
                    local_88 = *plVar21;
                    uStack_80 = (longlong *)plVar21[1];
                    local_78 = plVar21[2];
                    lStack_70 = plVar21[3];
                    local_68 = plVar21[4];
                    lStack_60 = plVar21[5];
                    local_58 = plVar21[6];
                    lStack_50 = plVar21[7];
                    lVar7 = local_88;
                    plVar30 = uStack_80;
                    lVar27 = plVar21[uVar24 * 8];
                    lVar38 = (plVar21 + uVar24 * 8)[1];
                    lVar17 = plVar21[uVar24 * 8 + 2];
                    lVar3 = (plVar21 + uVar24 * 8 + 2)[1];
                    lVar4 = plVar21[uVar24 * 8 + 4];
                    lVar5 = (plVar21 + uVar24 * 8 + 4)[1];
                    lVar6 = (plVar21 + uVar24 * 8 + 6)[1];
                    plVar21[6] = plVar21[uVar24 * 8 + 6];
                    plVar21[7] = lVar6;
                    plVar21[4] = lVar4;
                    plVar21[5] = lVar5;
                    plVar21[2] = lVar17;
                    plVar21[3] = lVar3;
                    *plVar21 = lVar27;
                    plVar21[1] = lVar38;
                    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                    plVar21[uVar24 * 8 + 6] = local_58;
                    (plVar21 + uVar24 * 8 + 6)[1] = lStack_50;
                    plVar21[uVar24 * 8 + 4] = local_68;
                    (plVar21 + uVar24 * 8 + 4)[1] = lStack_60;
                    plVar21[uVar24 * 8 + 2] = local_78;
                    (plVar21 + uVar24 * 8 + 2)[1] = lStack_70;
                    plVar32 = plVar21 + uVar24 * 8;
                    *(undefined4 *)plVar32 = (undefined4)local_88;
                    *(undefined4 *)((longlong)plVar32 + 4) = local_88._4_4_;
                    *(undefined4 *)(plVar32 + 1) = (undefined4)uStack_80;
                    *(undefined4 *)((longlong)plVar32 + 0xc) = uStack_80._4_4_;
                    local_88 = lVar7;
                    uStack_80 = plVar30;
                    if (uVar29 != 2) {
                      do {
                        iVar25 = 0;
                        iVar34 = 1;
                        iVar28 = 0;
                        do {
                          iVar25 = iVar25 + 2;
                          iVar36 = iVar34;
                          if (((longlong)iVar25 < (longlong)uVar24) &&
                             (*(int *)((longlong)plVar21 + (longlong)iVar34 * 0x40 + 0x24) <=
                              *(int *)((longlong)plVar21 + (longlong)iVar25 * 0x40 + 0x24))) {
                            iVar36 = iVar25;
                          }
                          if (*(int *)((longlong)plVar21 + (longlong)iVar36 * 0x40 + 0x24) <=
                              *(int *)((longlong)plVar21 + (longlong)iVar28 * 0x40 + 0x24)) break;
                          plVar30 = plVar21 + (longlong)iVar28 * 8;
                          plVar32 = plVar21 + (longlong)iVar36 * 8;
                          lVar27 = *plVar30;
                          lVar38 = plVar30[1];
                          lVar17 = plVar30[2];
                          lVar3 = plVar30[3];
                          lVar4 = plVar30[4];
                          lVar5 = plVar30[5];
                          lVar6 = plVar30[6];
                          lVar7 = plVar30[7];
                          lVar8 = *plVar32;
                          lVar9 = plVar32[1];
                          lVar10 = plVar32[2];
                          lVar11 = plVar32[3];
                          lVar12 = plVar32[4];
                          lVar13 = plVar32[5];
                          lVar14 = plVar32[7];
                          plVar30[6] = plVar32[6];
                          plVar30[7] = lVar14;
                          plVar30[4] = lVar12;
                          plVar30[5] = lVar13;
                          plVar30[2] = lVar10;
                          plVar30[3] = lVar11;
                          *plVar30 = lVar8;
                          plVar30[1] = lVar9;
                          plVar32[6] = lVar6;
                          plVar32[7] = lVar7;
                          plVar32[4] = lVar4;
                          plVar32[5] = lVar5;
                          plVar32[2] = lVar17;
                          plVar32[3] = lVar3;
                          *plVar32 = lVar27;
                          plVar32[1] = lVar38;
                          iVar25 = iVar36 * 2;
                          iVar34 = iVar36 * 2 + 1;
                          iVar28 = iVar36;
                        } while ((longlong)iVar34 < (longlong)uVar24);
                        uVar1 = uVar24 - 1;
                        local_88 = *plVar21;
                        uStack_80 = (longlong *)plVar21[1];
                        local_78 = plVar21[2];
                        lStack_70 = plVar21[3];
                        local_68 = plVar21[4];
                        lStack_60 = plVar21[5];
                        local_58 = plVar21[6];
                        lStack_50 = plVar21[7];
                        lVar7 = local_88;
                        plVar30 = uStack_80;
                        lVar27 = plVar21[uVar1 * 8];
                        lVar38 = (plVar21 + uVar1 * 8)[1];
                        lVar17 = plVar21[uVar1 * 8 + 2];
                        lVar3 = (plVar21 + uVar1 * 8 + 2)[1];
                        lVar4 = plVar21[uVar1 * 8 + 4];
                        lVar5 = (plVar21 + uVar1 * 8 + 4)[1];
                        lVar6 = (plVar21 + uVar1 * 8 + 6)[1];
                        plVar21[6] = plVar21[uVar1 * 8 + 6];
                        plVar21[7] = lVar6;
                        plVar21[4] = lVar4;
                        plVar21[5] = lVar5;
                        plVar21[2] = lVar17;
                        plVar21[3] = lVar3;
                        *plVar21 = lVar27;
                        plVar21[1] = lVar38;
                        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                        plVar21[uVar1 * 8 + 6] = local_58;
                        (plVar21 + uVar1 * 8 + 6)[1] = lStack_50;
                        plVar21[uVar1 * 8 + 4] = local_68;
                        (plVar21 + uVar1 * 8 + 4)[1] = lStack_60;
                        plVar21[uVar1 * 8 + 2] = local_78;
                        (plVar21 + uVar1 * 8 + 2)[1] = lStack_70;
                        plVar32 = plVar21 + uVar1 * 8;
                        *(undefined4 *)plVar32 = (undefined4)local_88;
                        *(undefined4 *)((longlong)plVar32 + 4) = local_88._4_4_;
                        *(undefined4 *)(plVar32 + 1) = (undefined4)uStack_80;
                        *(undefined4 *)((longlong)plVar32 + 0xc) = uStack_80._4_4_;
                        bVar40 = 2 < uVar24;
                        uVar24 = uVar1;
                        local_88 = lVar7;
                        uStack_80 = plVar30;
                      } while (bVar40);
                    }
                  }
                }
LAB_141100b2b:
                plVar18 = plVar18 + -3;
              } while (&local_388 <= plVar18);
            }
            cVar16 = FUN_146076bce(local_3d8,0);
            if (cVar16 == '\0') {
              FUN_14626e212(&local_388);
              if ((longlong)*(int *)(lVar31 + 0x28) != 0) {
                lVar27 = *(longlong *)(lVar31 + 0x20);
                lVar38 = (longlong)*(int *)(lVar31 + 0x28) << 6;
                do {
                  local_390 = &local_88;
                  local_398 = FUN_143f43218;
                  local_88 = lVar27;
                  uStack_80 = &local_388;
                  FUN_140056680(local_3a8,L"DataCenterQoS");
                  FUN_140056680(local_3b8,&DAT_14b4f37c6);
                  if ((*(int *)(local_3d0 + 0x3c) == 0) || (uVar29 = *local_3d8, (int)uVar29 < 0)) {
LAB_141100c57:
                    uVar22 = 0;
                  }
                  else {
                    uVar22 = 0;
                    if ((int)uVar29 < DAT_14c9647dc) {
                      puVar23 = (undefined8 *)
                                ((ulonglong)((uVar29 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8));
                      if (((puVar23 == (undefined8 *)0x0) ||
                          (*(int *)(puVar23 + 2) != *(int *)(local_3d0 + 0x3c))) ||
                         ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)) goto LAB_141100c57;
                      uVar22 = *puVar23;
                    }
                  }
                  FUN_1414f3dba(uVar22,local_3b8,local_3a8,&local_398);
                  if (local_3b8[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_3a8[0] != 0) {
                    FUN_1400020a8();
                  }
                  lVar27 = lVar27 + 0x40;
                  lVar38 = lVar38 + -0x40;
                } while (lVar38 != 0);
              }
              if (local_388 != 0) {
                FUN_1400020a8();
              }
            }
            FUN_140898514(local_3c8);
          }
        }
      }
      lVar31 = lVar31 + 0x30;
    } while (lVar31 != local_3c0);
    uVar22 = 1;
    param_1 = local_3d0;
    if (local_3dc != 0) goto LAB_141100ca2;
  }
  plVar18 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar18 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  uVar22 = 0;
LAB_141100ca2:
  if ((local_48 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22;
LAB_1411005ca:
  local_88 = *plVar21;
  uStack_80 = (longlong *)plVar21[1];
  local_78 = plVar21[2];
  lStack_70 = plVar21[3];
  local_68 = plVar21[4];
  lStack_60 = plVar21[5];
  local_58 = plVar21[6];
  lStack_50 = plVar21[7];
  lVar7 = local_88;
  plVar15 = uStack_80;
  lVar27 = *plVar35;
  lVar38 = plVar33[-7];
  lVar17 = plVar33[-6];
  lVar3 = plVar33[-5];
  lVar4 = plVar33[-4];
  lVar5 = plVar33[-3];
  lVar6 = plVar33[-1];
  plVar21[6] = plVar33[-2];
  plVar21[7] = lVar6;
  plVar21[4] = lVar4;
  plVar21[5] = lVar5;
  plVar21[2] = lVar17;
  plVar21[3] = lVar3;
  *plVar21 = lVar27;
  plVar21[1] = lVar38;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  plVar33[-2] = local_58;
  plVar33[-1] = lStack_50;
  plVar33[-4] = local_68;
  plVar33[-3] = lStack_60;
  plVar33[-6] = local_78;
  plVar33[-5] = lStack_70;
  *(undefined4 *)plVar35 = (undefined4)local_88;
  *(undefined4 *)((longlong)plVar33 + -0x3c) = local_88._4_4_;
  *(undefined4 *)(plVar33 + -7) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)plVar33 + -0x34) = uStack_80._4_4_;
  iVar25 = iVar25 + -1;
  plVar33 = plVar33 + -0x10;
  local_88 = lVar7;
  uStack_80 = plVar15;
  if ((longlong)plVar39 - (longlong)plVar30 < (longlong)plVar37 - (longlong)plVar26) {
    if (plVar20 < plVar32) {
      *plVar18 = (longlong)plVar20;
      plVar18[1] = (longlong)plVar32;
      *(int *)(plVar18 + 2) = iVar25;
      plVar18 = plVar18 + 3;
    }
    plVar26 = plVar21;
    if (plVar35 <= plVar21 + 8) goto LAB_141100b2b;
  }
  else {
    if (plVar21 + 8 < plVar35) {
      *plVar18 = (longlong)plVar21;
      plVar18[1] = (longlong)plVar33;
      *(int *)(plVar18 + 2) = iVar25;
      plVar18 = plVar18 + 3;
    }
    plVar21 = plVar20;
    plVar33 = plVar32;
    plVar39 = plVar32;
    if (plVar32 <= plVar20) goto LAB_141100b2b;
  }
  iVar28 = (int)((ulonglong)((longlong)plVar39 - (longlong)plVar26) >> 6);
  uVar29 = iVar28 + 1;
  plVar30 = plVar26;
  plVar32 = plVar33;
  plVar37 = plVar39;
  if (iVar25 == 0) goto LAB_1411006d9;
  goto LAB_141100448;
}



// FUNCTION 141100cd0 FUN_141100cd0 body=21 status=ok
// SIG undefined FUN_141100cd0(void)

undefined8 FUN_141100cd0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 141100ce6 FUN_141100ce6 body=168 status=ok
// SIG undefined FUN_141100ce6(void)

void FUN_141100ce6(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_1 + 0xb0;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  local_28 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_38 = param_1 + 0x100;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  local_28 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_1449c0562(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141100d90 FUN_141100d90 body=1919 status=ok
// SIG undefined FUN_141100d90(void)

void FUN_141100d90(longlong param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_188 [32];
  void **local_168;
  char local_159;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  undefined4 *puStack_140;
  undefined4 *local_138;
  void **local_130;
  undefined4 local_11c;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  ulonglong uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  void *local_c8;
  ulonglong uStack_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_150 = param_1;
  if (*param_2 != 0) {
    local_c8 = (void *)0x0;
    uStack_c0 = 0;
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    local_168 = &local_e8;
    local_e8 = (void *)0x0;
    uStack_e0 = 0;
    local_159 = FUN_14001cda4(param_2,param_3);
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14b406f80;
    local_80 = &LAB_144189ec0;
    local_a8[0] = &LAB_140255cce;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    if ((longlong)(int)param_2[3] != 0) {
      plVar13 = (longlong *)param_2[2];
      local_158 = plVar13 + (int)param_2[3];
      do {
        lVar10 = *plVar13;
        if (lVar10 != 0) {
          local_148 = 0;
          puStack_140 = (undefined4 *)0x0;
          uVar7 = DAT_14cbcc694;
          if ((DAT_14cbcc694 == DAT_14c948034) &&
             (uVar7 = DAT_14c948034, DAT_14cbcc690 != DAT_14c948030)) {
            FUN_14011791e(&local_b0,DAT_14cbcc690,DAT_14cbcc694 >> 0x20);
            uVar7 = CONCAT44(uStack_ac,local_b0);
            DAT_14cbcc694 = uVar7;
          }
          uVar4 = *(ulonglong *)(lVar10 + 0x40);
          if (uVar4 == uVar7) {
            FUN_140255b38(lVar10,&local_148,local_a8);
            lVar10 = local_148;
            lVar9 = (longlong)(int)puStack_140;
            if (lVar9 != 0) {
              lVar14 = 0;
              do {
                plVar12 = *(longlong **)(lVar10 + lVar14);
                if (plVar12 == (longlong *)0x0) {
LAB_141100f23:
                  plVar12 = (longlong *)0x0;
                }
                else {
                  lVar5 = (**(code **)(*plVar12 + 8))(plVar12);
                  lVar6 = FUN_14001d604();
                  if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)))
                  goto LAB_141100f23;
                  if (*(longlong *)
                       (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                      lVar6 + 0x30) {
                    plVar12 = (longlong *)0x0;
                  }
                }
                uVar7 = uStack_f0;
                lVar5 = (longlong)(int)uStack_f0;
                uVar2 = (int)uStack_f0 + 1;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar2);
                if (uStack_f0._4_4_ < uVar2) {
                  FUN_14001d74c(&local_f8,uVar7 & 0xffffffff);
                }
                *(longlong **)(local_f8 + lVar5 * 8) = plVar12;
                lVar14 = lVar14 + 0x10;
              } while (lVar9 << 4 != lVar14);
            }
          }
          else {
            uVar7 = DAT_14cbcc6ac;
            if ((DAT_14cbcc6ac == DAT_14c948034) &&
               (uVar7 = DAT_14c948034, DAT_14cbcc6a8 != DAT_14c948030)) {
              FUN_14011791e(&local_b0,DAT_14cbcc6a8,DAT_14cbcc6ac >> 0x20);
              uVar7 = CONCAT44(uStack_ac,local_b0);
              uVar4 = *(ulonglong *)(lVar10 + 0x40);
              DAT_14cbcc6ac = uVar7;
            }
            if (uVar4 == uVar7) {
              FUN_140255b38(lVar10,&local_148,local_a8);
              lVar10 = local_148;
              lVar9 = (longlong)(int)puStack_140;
              if (lVar9 != 0) {
                lVar14 = 0;
                do {
                  plVar12 = *(longlong **)(lVar10 + lVar14);
                  if (plVar12 == (longlong *)0x0) {
LAB_141100fe2:
                    plVar12 = (longlong *)0x0;
                  }
                  else {
                    lVar5 = (**(code **)(*plVar12 + 8))(plVar12);
                    lVar6 = FUN_14001d604();
                    if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)))
                    goto LAB_141100fe2;
                    if (*(longlong *)
                         (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                        lVar6 + 0x30) {
                      plVar12 = (longlong *)0x0;
                    }
                  }
                  uVar7 = uStack_100;
                  lVar5 = (longlong)(int)uStack_100;
                  uVar2 = (int)uStack_100 + 1;
                  uStack_100 = CONCAT44(uStack_100._4_4_,uVar2);
                  if (uStack_100._4_4_ < uVar2) {
                    FUN_14001d74c(&local_108,uVar7 & 0xffffffff);
                  }
                  *(longlong **)(local_108 + lVar5 * 8) = plVar12;
                  lVar14 = lVar14 + 0x10;
                } while (lVar9 * 0x10 != lVar14);
              }
            }
          }
          FUN_140255aed(local_148,(ulonglong)puStack_140 & 0xffffffff);
          if (local_148 != 0) {
            FUN_1400020a8();
          }
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != local_158);
      if (0 < (longlong)(int)uStack_f0) {
        uVar7 = (longlong)(int)uStack_f0;
        do {
          lVar10 = *(longlong *)(local_f8 + -8 + uVar7 * 8);
          if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x30) != 0)) {
            if ((longlong)(int)uStack_100 != 0) {
              lVar9 = (longlong)(int)uStack_100 << 3;
              lVar14 = 0;
              do {
                if (*(longlong *)(*(longlong *)(local_108 + lVar14 * 8) + 0x30) ==
                    *(longlong *)(lVar10 + 0x30)) {
                  uVar2 = (uint)lVar14;
                  if (-1 < (int)uVar2) {
                    local_158 = (longlong *)(longlong)(int)uStack_110;
                    uVar3 = (int)uStack_110 + 1;
                    uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
                    if (uStack_110._4_4_ < uVar3) {
                      FUN_14001d74c(&local_118,local_158);
                    }
                    *(longlong *)(local_118 + (longlong)local_158 * 8) = lVar10;
                    if (uVar7 != (uStack_f0 & 0xffffffff)) {
                      iVar11 = (int)uStack_f0 - (int)uVar7;
                      if (0 < iVar11) {
                        iVar11 = 1;
                      }
                      memmove((void *)(local_f8 + (uVar7 - 1) * 8),
                              (void *)(local_f8 + (longlong)((int)uStack_f0 - iVar11) * 8),
                              (longlong)iVar11 << 3);
                    }
                    uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + -1);
                    FUN_148d69cce(&local_f8);
                    if ((int)uStack_100 - 1U != uVar2) {
                      iVar11 = ((int)uStack_100 - 1U) - uVar2;
                      if (0 < iVar11) {
                        iVar11 = 1;
                      }
                      memmove((void *)(local_108 + (ulonglong)(uVar2 & 0x7fffffff) * 8),
                              (void *)(local_108 + (longlong)((int)uStack_100 - iVar11) * 8),
                              (longlong)iVar11 << 3);
                    }
                    uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + -1);
                    FUN_148d69cce(&local_108);
                  }
                  break;
                }
                lVar14 = lVar14 + 1;
                lVar9 = lVar9 + -8;
              } while (lVar9 != 0);
            }
          }
          bVar1 = 1 < (longlong)uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar1);
      }
    }
    if (local_159 == '\0') {
      puStack_140 = &local_b0;
      local_b0 = (uint)uStack_c0;
      local_11c = *(undefined4 *)(*param_2 + 0x160);
      local_138 = &local_11c;
      local_148 = local_150;
      local_130 = &local_c8;
      FUN_141101510(&local_148,&local_f8,0);
      FUN_141101510(&local_148,&local_108,1);
      FUN_141101510(&local_148,&local_118,2);
      lVar10 = (longlong)(int)(uint)uStack_c0;
      if (lVar10 != 0) {
        iVar11 = (int)param_4[1];
        *(uint *)(param_4 + 1) = iVar11 + (uint)uStack_c0;
        if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar11) < (uint)uStack_c0) {
          FUN_14001d63e(param_4,iVar11);
        }
        memmove((void *)((longlong)iVar11 * 0x10 + *param_4),local_c8,lVar10 << 4);
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
      }
    }
    lVar10 = (longlong)(int)(uint)uStack_d0;
    if (lVar10 != 0) {
      iVar11 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar11 + (uint)uStack_d0;
      if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar11) < (uint)uStack_d0) {
        FUN_14001d63e(param_4,iVar11);
      }
      memmove((void *)((longlong)iVar11 * 0x10 + *param_4),local_d8,lVar10 << 4);
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
    }
    lVar10 = (longlong)(int)(uint)uStack_e0;
    if (lVar10 != 0) {
      iVar11 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar11 + (uint)uStack_e0;
      if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar11) < (uint)uStack_e0) {
        FUN_14001d63e(param_4,iVar11);
      }
      memmove((void *)((longlong)iVar11 * 0x10 + *param_4),local_e8,lVar10 << 4);
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8[0] != (undefined1 *)0x0) {
      pppuVar8 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar8 = &local_88;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    FUN_1401b9920(local_e8,uStack_e0 & 0xffffffff);
    if (local_e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401b9920(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401b9920(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141101510 FUN_141101510 body=943 status=ok
// SIG undefined FUN_141101510(void)

void FUN_141101510(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  lVar7 = *(longlong *)(lVar2 + 0x10);
  local_5c = param_3;
  if (lVar7 == 0) {
    uVar6 = FUN_140261af2();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar2 + 0x10) = lVar7;
  }
  plVar1 = (longlong *)(lVar2 + 8);
  if (*(longlong *)(lVar2 + 0x18) == 0) {
    if ((lVar7 == 0) || (*plVar1 == 0)) goto LAB_14110188e;
    plVar12 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar12 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar5 == '\0')) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      goto LAB_14110188e;
    }
    uVar6 = (**(code **)(*plVar12 + 0x110))(plVar12);
    lVar7 = FUN_144aff482(uVar6,plVar1);
    *(longlong *)(lVar2 + 0x18) = lVar7;
    if (lVar7 == 0) goto LAB_14110188e;
  }
  if ((*(int *)param_1[1] < *(int *)param_1[2]) && ((longlong)(int)param_2[1] != 0)) {
    plVar12 = (longlong *)*param_2;
    plVar13 = plVar12 + (int)param_2[1];
    do {
      lVar7 = *plVar12;
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x30) != 0)) {
        lVar8 = *(longlong *)(lVar2 + 0x10);
        if (lVar8 == 0) {
          uVar6 = FUN_140261af2();
          lVar8 = FUN_14477b664(uVar6);
          *(longlong *)(lVar2 + 0x10) = lVar8;
        }
        lVar14 = *(longlong *)(lVar2 + 0x18);
        if (lVar14 == 0) {
          if (lVar8 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = 0;
            if (*plVar1 != 0) {
              plVar3 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
                lVar14 = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar14 = FUN_144aff482(uVar6,plVar1);
              }
              *(longlong *)(lVar2 + 0x18) = lVar14;
            }
          }
        }
        lVar7 = *(longlong *)(lVar7 + 0x30);
        FUN_14016a17c(lVar14);
        lVar8 = *(longlong *)(lVar14 + 0x48);
        if (lVar8 == 0) {
          if (*(longlong *)(lVar14 + 0x20) != 0) {
            lVar9 = FUN_14000e0c8(lVar14 + 0x18);
            lVar8 = *(longlong *)(lVar14 + 0x48);
            if (lVar9 == 0) {
              if (lVar8 != 0) {
                if (DAT_14c872a72 == '\0') {
                  FUN_140113f48();
                }
                goto LAB_1411017fb;
              }
            }
            else {
              if (lVar8 != lVar9) {
                if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
                  FUN_140113f48();
                }
                FUN_1401924dc(lVar9);
LAB_1411017fb:
                *(longlong *)(lVar14 + 0x48) = lVar9;
                lVar8 = lVar9;
              }
              if (lVar8 != 0) goto LAB_14110163f;
            }
          }
        }
        else {
LAB_14110163f:
          lVar9 = FUN_1418cecba();
          if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
               lVar9 + 0x30)) &&
             ((lVar7 != 0 && (*(int *)(lVar14 + 0x58) != *(int *)(lVar14 + 0x84))))) {
            uVar4 = (uint)((ulonglong)lVar7 >> 0x10);
            uVar10 = (uint)lVar7 & 0xffff;
            lVar8 = lVar14 + 0x88;
            if (*(longlong *)(lVar14 + 0x90) != 0) {
              lVar8 = *(longlong *)(lVar14 + 0x90);
            }
            iVar11 = *(int *)(lVar8 + (ulonglong)
                                      (*(int *)(lVar14 + 0x98) - 1U &
                                      (int)((ulonglong)lVar7 >> 0x20) +
                                      ((uint)lVar7 << 0x10 | uVar10) +
                                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
            if (iVar11 != -1) {
              do {
                plVar3 = (longlong *)(*(longlong *)(lVar14 + 0x50) + (longlong)iVar11 * 0x18);
                if (*plVar3 == lVar7) {
                  if ((plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) &&
                     (lVar7 = plVar3[1], lVar7 != 0)) {
                    if (local_5c == 2) {
                      local_58 = *(longlong **)(lVar7 + 0x28);
                      lVar8 = 0x30;
                    }
                    else if (local_5c == 1) {
                      local_58 = *(longlong **)(lVar7 + 0x18);
                      lVar8 = 0x20;
                    }
                    else {
                      local_58 = *(longlong **)(lVar7 + 8);
                      lVar8 = 0x10;
                    }
                    if (local_58 != (longlong *)0x0) {
                      (**(code **)(*local_58 + 8))();
                    }
                    local_50 = *(undefined4 *)(lVar7 + lVar8);
                    plVar3 = (longlong *)param_1[3];
                    iVar11 = (int)plVar3[1];
                    *(uint *)(plVar3 + 1) = iVar11 + 1U;
                    if (*(uint *)((longlong)plVar3 + 0xc) < iVar11 + 1U) {
                      FUN_14001d63e(plVar3,iVar11);
                    }
                    FUN_14023423e((longlong)iVar11 * 0x10 + *plVar3,&local_58);
                    *(int *)param_1[1] = *(int *)param_1[1] + 1;
                    if (local_58 != (longlong *)0x0) {
                      (**(code **)(*local_58 + 0x10))();
                    }
                  }
                  break;
                }
                iVar11 = (int)plVar3[2];
              } while (iVar11 != -1);
            }
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar13);
  }
LAB_14110188e:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411018c0 FUN_1411018c0 body=228 status=ok
// SIG undefined FUN_1411018c0(void)

void FUN_1411018c0(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  int local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_2 + 600);
  local_2c = 0;
  iVar5 = *(int *)(lVar2 + 0x1d0);
  local_30 = 0;
  uVar3 = iVar5 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar3) {
    local_2c = 0x100;
    if (0x100 < uVar3) {
      local_2c = uVar3;
    }
    FUN_14497ddce(local_50,0);
    iVar5 = *(int *)(lVar2 + 0x1d0);
  }
  local_30 = iVar5;
  if (iVar5 != 0) {
    memcpy(local_50,(void *)(lVar2 + 0x1b0),(ulonglong)(iVar5 + 0x1fU >> 3 & 0xfffffffc));
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    puVar4 = *(undefined2 **)(param_1 + 0x30);
    puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0x38) * 2;
    do {
      FUN_1411019a6(param_2 + 0x28,*puVar4,puVar4[1],local_50);
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411019a6 FUN_1411019a6 body=547 status=ok
// SIG undefined FUN_1411019a6(void)

void FUN_1411019a6(longlong param_1,uint param_2,ushort param_3,longlong param_4)

{
  void *_Src;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  uint local_88;
  longlong local_80;
  uint local_78;
  undefined1 local_71;
  undefined1 local_70 [32];
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0x98);
  uVar1 = *(ushort *)(lVar4 + (ulonglong)param_3 * 8);
  if (uVar1 != 0xffff) {
    local_78 = (uint)*(ushort *)(lVar4 + 2 + (ulonglong)param_3 * 8);
    uVar12 = (ulonglong)(param_2 & 0xffff);
    uVar2 = *(ushort *)(lVar4 + 2 + uVar12 * 8);
    uVar8 = (uint)uVar2;
    uVar3 = *(ushort *)(lVar4 + uVar12 * 8);
    uVar7 = (uint)uVar3;
    _Src = (void *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)uVar1 * 0x28);
    local_4c = 0;
    iVar11 = *(int *)((longlong)_Src + 0x20);
    local_50 = 0;
    uVar6 = iVar11 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar6) {
      local_4c = 0x100;
      if (0x100 < uVar6) {
        local_4c = uVar6;
      }
      FUN_14497ddce(local_70,0);
      iVar11 = *(int *)((longlong)_Src + 0x20);
    }
    local_50 = iVar11;
    if (iVar11 != 0) {
      memcpy(local_70,_Src,(ulonglong)(iVar11 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (param_4 != 0) {
      FUN_14497de01(param_4,local_70,1,&local_71);
    }
    if (uVar3 == 0xffff) {
      uVar9 = FUN_14055ca2e(param_1,local_70,0);
      uVar10 = FUN_1449dfe96(param_1,uVar9,param_2,1);
      local_88 = local_78;
      local_80 = 0;
      FUN_141101bca(param_1,uVar9,uVar10,uVar1);
      lVar4 = *(longlong *)(param_1 + 0x98);
      *(short *)(lVar4 + uVar12 * 8) = (short)uVar9;
      *(short *)(lVar4 + 2 + uVar12 * 8) = (short)uVar10;
    }
    else {
      lVar4 = (ulonglong)((uint)uVar3 * 8) * 5;
      FUN_14010b303(*(longlong *)(param_1 + 8) + lVar4,local_70,1,&local_71);
      cVar5 = FUN_1403b8874(local_70,lVar4 + *(longlong *)(param_1 + 8),0);
      if (cVar5 == '\0') {
        uVar7 = FUN_14055ca2e(param_1,local_70,0);
        uVar8 = FUN_14055cf42(param_1,uVar7,uVar3,uVar2);
        lVar4 = *(longlong *)(param_1 + 0x98);
        *(short *)(lVar4 + uVar12 * 8) = (short)uVar7;
        *(short *)(lVar4 + 2 + uVar12 * 8) = (short)uVar8;
      }
      local_88 = local_78;
      local_80 = param_4;
      FUN_141101bca(param_1,uVar7,uVar8,uVar1);
    }
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
    *(undefined1 *)(param_1 + 0x261) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141101bca FUN_141101bca body=394 status=ok
// SIG undefined FUN_141101bca(void)

void FUN_141101bca(longlong param_1,int param_2,int param_3,ulonglong param_4,int param_5,
                  longlong param_6)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *_Src;
  ulonglong uVar8;
  void *_Dst;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  uVar3 = *(ulonglong *)(param_1 + 0x248);
  puVar4 = *(ulonglong **)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (param_4 & 0xffffffff) * 8);
  plVar6 = *(longlong **)(lVar5 + 0x28);
  uVar11 = *puVar4;
  if (*puVar4 < uVar3) {
    uVar11 = uVar3;
  }
  uVar2 = *(ushort *)(lVar5 + 0xc);
  *puVar4 = uVar11;
  if (*(short *)((longlong)puVar4 + 0xc) != 0) {
    plVar9 = plVar6 + (ulonglong)uVar2 * 4 + -4;
    uVar11 = 0;
    do {
      uVar2 = *(ushort *)(puVar4[5] + 0x1e + uVar11 * 0x20);
      if ((param_6 == 0) ||
         (((uVar2 != 0xffff &&
           (*(uint *)(param_6 + 0x20) != (uint)uVar2 &&
            (int)(uint)uVar2 <= (int)*(uint *)(param_6 + 0x20))) &&
          ((*(uint *)(param_6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)))) {
        plVar10 = (longlong *)(puVar4[5] + uVar11 * 0x20);
        uVar8 = plVar10[2];
        if ((ulonglong)plVar10[2] < uVar3) {
          uVar8 = uVar3;
        }
        plVar10[2] = uVar8;
        for (plVar7 = plVar6;
            (plVar6 = plVar9, plVar7 != plVar9 &&
            (plVar6 = plVar7, *(ushort *)((longlong)plVar7 + 0x1e) < uVar2)); plVar7 = plVar7 + 4) {
        }
        if ((uVar2 == *(ushort *)((longlong)plVar6 + 0x1e)) &&
           (*(byte *)((longlong)plVar6 + 0x1c) != 0)) {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118);
          puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar2 * 0x10);
          _Dst = (void *)((ulonglong)((uint)*(byte *)((longlong)plVar10 + 0x1c) * param_3) +
                         *plVar10);
          _Src = (void *)((ulonglong)((uint)*(byte *)((longlong)plVar6 + 0x1c) * param_5) + *plVar6)
          ;
          if ((*(byte *)(lVar5 + 10 + (ulonglong)uVar2 * 0x10) & 4) == 0) {
            plVar10 = (longlong *)*puVar1;
            (**(code **)(*plVar10 + 0x18))(plVar10,_Dst,_Src,1);
          }
          else {
            memcpy(_Dst,_Src,(ulonglong)*(byte *)(puVar1 + 1));
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ushort *)((longlong)puVar4 + 0xc));
  }
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x261) = 1;
  return;
}



// FUNCTION 141101d54 FUN_141101d54 body=157 status=ok
// SIG undefined FUN_141101d54(void)

void FUN_141101d54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f75e70;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_145805506(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] == 0) goto LAB_141101db6;
  while( true ) {
    FUN_1400020a8();
LAB_141101db6:
    if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) break;
    param_1[0xf] = *(undefined8 *)param_1[0xf];
  }
  FUN_141101df1(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_141101ddd;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_141101ddd:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 141101df1 FUN_141101df1 body=53 status=ok
// SIG undefined FUN_141101df1(void)

void FUN_141101df1(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 141101e26 FUN_141101e26 body=29 status=ok
// SIG undefined FUN_141101e26(void)

undefined8 FUN_141101e26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141101e44 FUN_141101e44 body=33 status=ok
// SIG undefined FUN_141101e44(void)

void FUN_141101e44(longlong param_1)

{
  FUN_1410d7fd2();
  FUN_141101e66(param_1 + 0x1200,param_1);
  return;
}



// FUNCTION 141101e66 FUN_141101e66 body=162 status=ok
// SIG undefined FUN_141101e66(void)

void FUN_141101e66(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_141101ef3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141101ef3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141101f08 FUN_141101f08 body=980 status=ok
// SIG undefined FUN_141101f08(void)

void FUN_141101f08(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_60 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_a8 = FUN_1446ddbd2();
    local_a0 = FUN_1468d96f0;
    local_b0 = 0;
    local_b8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_60);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_60);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_60);
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c947f70) && (FUN_144b3d300(&DAT_14c947f70), DAT_14c947f70 == -1)) {
    local_a8 = FUN_1446ddbd2();
    local_a0 = FUN_141710108;
    local_b0 = 0x1000000000000000;
    local_b8 = 0x8001;
    FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
    atexit(FUN_1427b4857);
    _Init_thread_footer(&DAT_14c947f70);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_78);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_78);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_78 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_78);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_78;
  uVar3 = FUN_14477b664(uStack_70);
  local_88 = FUN_14477b664(uVar3);
  local_80 = local_68;
  FUN_1411022de(local_58,local_60,&local_90);
  FUN_1403719a4(param_3,local_58);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_50[0];
    if (local_38 < 0x19) {
      ppppuVar4 = local_50;
    }
    (*pcVar2)(ppppuVar4);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411022de FUN_1411022de body=149 status=ok
// SIG undefined FUN_1411022de(void)

undefined8 * FUN_1411022de(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (((param_2 != 0) && (*param_3 != 0)) && (lVar1 = FUN_1457b68d8(param_2), lVar1 != 0)) {
    puVar2 = (undefined8 *)FUN_1418647c2(lVar1);
    if ((longlong)*(int *)(puVar2 + 1) != 0) {
      plVar3 = (longlong *)*puVar2;
      lVar1 = (longlong)*(int *)(puVar2 + 1) * 0x28;
      do {
        if (*plVar3 == *param_3) {
          if (((plVar3 != (longlong *)0x0) && ((int)plVar3[4] != 0)) &&
             (*(char *)plVar3[3] == '\x02')) {
            FUN_14034cca6(param_1,(char *)plVar3[3] + 0x20);
            return param_1;
          }
          break;
        }
        plVar3 = plVar3 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 141102374 FUN_141102374 body=48 status=ok
// SIG undefined FUN_141102374(void)

undefined4 FUN_141102374(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14109961a(param_1 + 0x48);
  if ((char)uVar1 != '\0') {
    FUN_1447f69b6(param_1 + 0x1f0);
  }
  return uVar1;
}



// FUNCTION 1411023a4 FUN_1411023a4 body=134 status=ok
// SIG undefined FUN_1411023a4(void)

void FUN_1411023a4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar3 = FUN_14110242a();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x28) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    return;
  }
  return;
}



// FUNCTION 14110242a FUN_14110242a body=57 status=ok
// SIG undefined FUN_14110242a(void)

void FUN_14110242a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb657e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb657e0 = FUN_140002ddd(FUN_14185873d,uVar1,L"GbxSkillStateDef");
  }
  return;
}



// FUNCTION 141102464 FUN_141102464 body=142 status=ok
// SIG undefined FUN_141102464(void)

longlong FUN_141102464(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x1c8);
    if (lVar1 == 0) {
      local_18 = DAT_14c8464f0;
      local_28 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_20 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_28 = *(undefined8 *)(lVar1 + 0x260);
      uStack_20 = *(undefined8 *)(lVar1 + 0x268);
      local_18 = *(undefined8 *)(lVar1 + 0x270);
    }
    FUN_1411024f4(param_1,param_2,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411024f4 FUN_1411024f4 body=1230 status=ok
// SIG undefined FUN_1411024f4(void)

undefined1 * FUN_1411024f4(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined4 local_c0 [4];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_2 != (longlong *)0x0) && (lVar9 = (**(code **)(*param_2 + 0x180))(param_2), lVar9 != 0)
     ) {
    lVar10 = FUN_1405831b2();
    puVar2 = (uint *)(lVar10 + 0xec8);
    if (((*(int *)(lVar10 + 0xecc) == 0) ||
        ((((uVar8 = *puVar2, (int)uVar8 < 0 || (DAT_14c9647dc <= (int)uVar8)) ||
          (plVar15 = (longlong *)
                     ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
          plVar15 == (longlong *)0x0)) ||
         (((int)plVar15[2] != *(int *)(lVar10 + 0xecc) ||
          ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))))) || (lVar16 = *plVar15, lVar16 == 0)) {
      if (*(longlong *)(lVar10 + 0xed0) != 0) {
        lVar16 = FUN_140007850();
        cVar6 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar16 == 0) || (cVar6 == '\0')) {
          FUN_14485c47a(puVar2,lVar16);
          if (lVar16 == 0) goto LAB_14110270c;
        }
        else {
          uVar8 = *(uint *)(lVar16 + 0xc);
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(puVar2,lVar16);
          }
        }
        if ((*(uint *)(lVar16 + 8) >> 0x1e & 1) == 0) goto LAB_1411025ca;
      }
    }
    else {
LAB_1411025ca:
      lVar10 = FUN_1411029c4();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        uVar11 = FUN_1402a1570(lVar9,lVar16);
        FUN_1402a10ba(&local_e8,lVar9,uVar11,param_3);
        if (local_e8._1_1_ == '\x01') {
          if ((int)(uint)(byte)local_e8 < *(int *)(lVar16 + 0x68)) {
            lVar9 = *(longlong *)(lVar16 + 0x60);
            lVar10 = (local_e8 & 0xff) * 0x78;
            lVar16 = lVar9 + lVar10;
            if ((lVar16 != 0) && (*(char *)(lVar16 + 0x24) != '\x06')) {
              local_e8 = local_e8 & 0xffffffffffffff00;
              local_c0[0] = 0;
              FUN_1456bb102(&local_e8,param_2);
              pfVar14 = &local_b0;
              FUN_1447c3578(lVar16 + 0x28,pfVar14,&local_e8);
              if (local_90 == 3) {
                uVar8 = 3;
                fVar18 = local_b0;
              }
              else {
                pfVar13 = &local_88;
                FUN_1400b56fe(pfVar13,&local_b0,3);
                fVar18 = 0.0;
                if (local_68 != 0) {
                  fVar18 = local_88;
                }
                pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
                if (pcVar3 != (code *)0x0) {
                  if (0x18 < local_70) {
                    pfVar13 = (float *)CONCAT44(uStack_84,local_88);
                  }
                  (*pcVar3)(pfVar13);
                }
                if (0x18 < local_70) {
                  FUN_1400020a8(CONCAT44(uStack_84,local_88));
                }
                uVar8 = (uint)local_90;
              }
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
              if (pcVar3 != (code *)0x0) {
                if (0x18 < local_98) {
                  pfVar14 = (float *)CONCAT44(uStack_ac,local_b0);
                }
                (*pcVar3)(pfVar14);
              }
              if (0x18 < local_98) {
                FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
              }
              FUN_1448173f8(local_c0);
              if (((byte)local_e8 == '\x03') && (local_d8 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_d8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_d8 + 0x10))();
                }
              }
              if ((1.0 <= fVar18) ||
                 ((0.0 < fVar18 && (uVar8 = rand(), (float)(uVar8 & 0x7fff) / 32767.0 <= fVar18))))
              {
                if (*(char *)(lVar16 + 8) == '\x01') {
                  local_e8 = 0;
                  uStack_e0 = 0;
                  fVar18 = 0.0;
                  lVar16 = -0x18;
                  do {
                    uVar5 = uStack_e0;
                    fVar17 = *(float *)(lVar10 + lVar9 + 0x24 + lVar16);
                    lVar12 = (longlong)(int)uStack_e0;
                    uVar8 = (int)uStack_e0 + 1;
                    uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar8);
                    if (uStack_e0._4_4_ < uVar8) {
                      FUN_14475e4ac(&local_e8,uVar5 & 0xffffffff);
                    }
                    uVar5 = local_e8;
                    *(float *)(local_e8 + lVar12 * 4) = fVar17;
                    fVar18 = fVar18 + fVar17;
                    lVar16 = lVar16 + 4;
                  } while (lVar16 != 0);
                  lVar9 = (longlong)(int)uStack_e0;
                  uVar8 = rand();
                  if (0 < lVar9) {
                    fVar18 = fVar18 * ((float)(uVar8 & 0x7fff) / 32767.0);
                    fVar17 = 0.0;
                    lVar10 = 0;
                    do {
                      bVar4 = fVar17 <= fVar18;
                      fVar17 = fVar17 + *(float *)(uVar5 + lVar10 * 4);
                      if ((bVar4) && (fVar18 <= fVar17)) {
                        if (((uint)lVar10 & 0xfe) < 6) {
                          *param_1 = (char)lVar10;
                          uVar7 = 1;
                          goto LAB_141102816;
                        }
                        break;
                      }
                      lVar10 = lVar10 + 1;
                    } while (lVar9 != lVar10);
                  }
                  uVar7 = 0;
LAB_141102816:
                  param_1[1] = uVar7;
                  if (local_e8 != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  *param_1 = *(undefined1 *)(lVar16 + 0x24);
                  param_1[1] = 1;
                }
                goto LAB_141102710;
              }
            }
          }
        }
      }
    }
  }
LAB_14110270c:
  param_1[1] = 0;
LAB_141102710:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1411029c4 FUN_1411029c4 body=228 status=ok
// SIG undefined FUN_1411029c4(void)

longlong FUN_1411029c4(void)

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
  if (DAT_14cbbf260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585df80;
    local_38 = &LAB_148ca7aef;
    local_40 = &LAB_14573a79b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldPainterLayer_Element",&DAT_14cbbf260,&DAT_148ca7aee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141102aaa FUN_141102aaa body=784 status=ok
// SIG undefined FUN_141102aaa(void)

void FUN_141102aaa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1468d96f0;
    local_80 = 0;
    local_88 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = FUN_141102dbc(puVar5,local_68);
  *param_3 = uVar6;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_58[0];
    if (local_40 < 0x19) {
      ppppuVar4 = local_58;
    }
    (*pcVar3)(ppppuVar4);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141102dbc FUN_141102dbc body=419 status=ok
// SIG undefined FUN_141102dbc(void)

undefined4 FUN_141102dbc(undefined8 param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88[0] = 0;
  FUN_1456bb102(local_b0);
  puVar4 = &local_80;
  FUN_1447c3578(param_1,puVar4,local_b0);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141102f6e FUN_141102f6e body=40 status=ok
// SIG undefined FUN_141102f6e(void)

undefined8 FUN_141102f6e(undefined8 param_1,int param_2)

{
  FUN_141102f96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141102f96 FUN_141102f96 body=237 status=ok
// SIG undefined FUN_141102f96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141102f96(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b938410;
  FUN_141103083(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140741dda(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014110306b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 141103083 FUN_141103083 body=73 status=ok
// SIG undefined FUN_141103083(void)

void FUN_141103083(longlong param_1,int param_2)

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



// FUNCTION 1411030cc FUN_1411030cc body=2603 status=ok
// SIG undefined FUN_1411030cc(void)

void FUN_1411030cc(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined *puVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_b0 [6];
  ushort local_98;
  byte local_90;
  undefined8 local_88;
  longlong lStack_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = *param_2;
  plVar10 = (longlong *)param_2[1];
  if (plVar10 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    plVar14 = *(longlong **)(param_1 + 0x48);
    if (plVar14 == (longlong *)0x0) goto LAB_141103145;
    *(undefined8 *)(param_1 + 0x48) = 0;
LAB_141103851:
    LOCK();
    plVar2 = plVar14 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    if (plVar10 == (longlong *)0x0) goto LAB_141103145;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    plVar14 = *(longlong **)(param_1 + 0x48);
    if (plVar10 == plVar14) {
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x48) = plVar10;
      if (plVar14 != (longlong *)0x0) goto LAB_141103851;
    }
  }
  LOCK();
  plVar14 = plVar10 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_141103145:
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar10 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  lVar7 = *param_3;
  uVar6 = FUN_140a008c5();
  lVar15 = *(longlong *)(lVar7 + 0x200);
  if (lVar15 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar15,uVar6,0);
  }
  FUN_140ccc900(lVar7,local_b0,uVar6,param_4);
  uVar17 = local_b0[0];
  if (local_90 != 3) {
    FUN_1400b56fe(&local_88,local_b0,3);
    uVar17 = 0;
    if (local_68 != 0) {
      uVar17 = (uint)local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar3)(puVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = uVar17;
  FUN_14020a6cc(param_1 + 0x50,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  if (uVar4 < 0xffffffff00000000) {
    plVar10 = (longlong *)0x0;
    if (DAT_14c9980d8 != 0) {
      plVar10 = DAT_14c9980d0;
    }
    (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar4,0);
  }
  else {
    uVar13 = (uint)uVar4;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar7 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar9 = *(uint **)(lVar7 + 0x18);
        if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
          puVar9 = (uint *)(lVar7 + 8);
        }
        *puVar9 = *puVar9 | 1;
        *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
      }
    }
  }
  lVar7 = *param_3;
  uVar6 = FUN_140a008c5();
  lVar15 = *(longlong *)(lVar7 + 0x200);
  if (lVar15 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar15,uVar6,1);
  }
  FUN_140ccc900(lVar7,local_b0,uVar6,param_4);
  uVar17 = local_b0[0];
  if (local_90 != 3) {
    FUN_1400b56fe(&local_88,local_b0,3);
    uVar17 = 0;
    if (local_68 != 0) {
      uVar17 = (uint)local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar3)(puVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  *(undefined4 *)(param_1 + 100) = uVar17;
  FUN_14020a6cc(param_1 + 0x5c,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  if (uVar4 < 0xffffffff00000000) {
    plVar10 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar10 = (longlong *)0x0;
    }
    (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar4,1);
  }
  else {
    uVar13 = (uint)uVar4;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar7 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar9 = *(uint **)(lVar7 + 0x18);
        if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
          puVar9 = (uint *)(lVar7 + 8);
        }
        *puVar9 = *puVar9 | 2;
        *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
      }
    }
  }
  lVar7 = *param_3;
  uVar6 = FUN_140a008c5();
  lVar15 = *(longlong *)(lVar7 + 0x200);
  if (lVar15 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar15,uVar6,2);
  }
  FUN_140ccc900(lVar7,local_b0,uVar6,param_4);
  uVar17 = local_b0[0];
  if (local_90 != 3) {
    FUN_1400b56fe(&local_88,local_b0,3);
    uVar17 = 0;
    if (local_68 != 0) {
      uVar17 = (uint)local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar3)(puVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = uVar17;
  FUN_14020a6cc(param_1 + 0x68,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  if (uVar4 < 0xffffffff00000000) {
    plVar10 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar10 = (longlong *)0x0;
    }
    (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar4,2);
  }
  else {
    uVar13 = (uint)uVar4;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar7 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar9 = *(uint **)(lVar7 + 0x18);
        if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
          puVar9 = (uint *)(lVar7 + 8);
        }
        *puVar9 = *puVar9 | 4;
        *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
      }
    }
  }
  lVar7 = *param_3;
  uVar6 = FUN_140a008c5();
  lVar15 = *(longlong *)(lVar7 + 0x200);
  if (lVar15 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1403f69f4(lVar15,uVar6,3);
  }
  FUN_140ccc900(lVar7,local_b0,uVar6,param_4);
  if (local_90 != 3) {
    FUN_1400b56fe(&local_88,local_b0,3);
    local_b0[0] = 0;
    if (local_68 != 0) {
      local_b0[0] = (uint)local_88;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar11 = &local_88;
      if (0x18 < local_70) {
        puVar11 = local_88;
      }
      (*pcVar3)(puVar11);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88);
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = local_b0[0];
  FUN_14020a6cc(param_1 + 0x74,1);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  if (0x18 < local_98) {
    FUN_1400020a8();
  }
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  if (uVar4 < 0xffffffff00000000) {
    plVar10 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar10 = (longlong *)0x0;
    }
    (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar4,3);
  }
  else {
    uVar13 = (uint)uVar4;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar13 & 0x1f) & 1) != 0) {
        lVar7 = DAT_14c998060 + (ulonglong)(uVar13 & 0x7fffffff) * 0x68;
        puVar9 = *(uint **)(lVar7 + 0x18);
        if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
          puVar9 = (uint *)(lVar7 + 8);
        }
        *puVar9 = *puVar9 | 8;
        *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x30);
  FUN_141103af8(&local_b8);
  local_88 = (undefined8 *)0x0;
  lStack_80 = 0;
  lVar15 = local_b8;
  if (param_1 != 0) {
    uVar13 = *(uint *)(param_1 + 0xc);
    local_88 = (undefined8 *)(ulonglong)uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar5 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar5 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar5 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar12;
        iVar5 = 0;
      }
      UNLOCK();
      uVar13 = (uint)local_88;
      if (bVar16) {
        iVar5 = iVar12;
      }
    }
    local_88._0_4_ = uVar13;
    local_88 = (undefined8 *)CONCAT44(iVar5,(uint)local_88);
    lStack_80 = local_b8;
    lVar15 = lStack_80;
    if (((((local_b8 != 0) && (iVar5 != 0)) && (-1 < (int)(uint)local_88)) &&
        (((int)(uint)local_88 < DAT_14c9647dc &&
         (plVar10 = (longlong *)
                    ((ulonglong)(((uint)local_88 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_88 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0)))) &&
       (((int)plVar10[2] == iVar5 &&
        (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))))) {
      FUN_1400796d0(*(undefined8 *)(*plVar10 + 0x10),local_b8,1);
      lVar15 = lStack_80;
    }
  }
  lStack_80 = lVar15;
  FUN_14053c012(lVar7 + 0x988,&local_88);
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar10 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141103af8 FUN_141103af8 body=179 status=ok
// SIG undefined FUN_141103af8(void)

undefined8 * FUN_141103af8(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb949d8) {
    FUN_144b3d300(&DAT_14cb949d8);
    if (DAT_14cb949d8 == -1) {
      builtin_wcsncpy(local_28,L"OnAttached",0xb);
      FUN_1446f470e(&DAT_14cb949d0,local_28,1);
      _Init_thread_footer(&DAT_14cb949d8);
    }
  }
  *param_1 = DAT_14cb949d0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141103bac FUN_141103bac body=251 status=ok
// SIG undefined FUN_141103bac(void)

undefined8 * FUN_141103bac(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14007ca06();
  FUN_14086a0da(param_1,uVar3);
  *param_1 = &PTR_FUN_14b93bb00;
  param_1[5] = &PTR_LAB_14b93bdb0;
  param_1[10] = &PTR_LAB_14b93bde0;
  param_1[0xb] = &PTR_LAB_14b93be10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0x4248000042d20000;
  *(undefined4 *)(param_1 + 0xe) = 4;
  FUN_141103cdc(param_1 + 0xd,0);
  FUN_141103ca7(param_1[0xd],4);
  puVar1 = (undefined8 *)param_1[0xd];
  *puVar1 = 0x4062c00000000000;
  puVar1[1] = 0x4062c00000000000;
  puVar1[2] = 0x4059000000000000;
  lVar2 = param_1[0xd];
  *(undefined8 *)(lVar2 + 0x30) = 0x4062c00000000000;
  *(undefined8 *)(lVar2 + 0x38) = 0x4049000000000000;
  *(undefined8 *)(lVar2 + 0x40) = 0x4059000000000000;
  lVar2 = param_1[0xd];
  *(undefined8 *)(lVar2 + 0x60) = 0x4062c00000000000;
  *(undefined8 *)(lVar2 + 0x68) = 0xc049000000000000;
  *(undefined8 *)(lVar2 + 0x70) = 0x4059000000000000;
  lVar2 = param_1[0xd];
  *(undefined8 *)(lVar2 + 0x90) = 0x4062c00000000000;
  *(undefined8 *)(lVar2 + 0x98) = 0xc062c00000000000;
  *(undefined8 *)(lVar2 + 0xa0) = 0x4059000000000000;
  return param_1;
}



// FUNCTION 141103ca7 FUN_141103ca7 body=52 status=ok
// SIG undefined FUN_141103ca7(void)

void FUN_141103ca7(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  do {
    param_1[2] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = uVar1;
    uVar1 = DAT_14c846500;
    param_1[3] = DAT_14c8464f8;
    param_1[4] = uVar1;
    param_1[5] = DAT_14c846508;
    param_1 = param_1 + 6;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 141103cdc FUN_141103cdc body=272 status=ok
// SIG undefined FUN_141103cdc(void)

void FUN_141103cdc(longlong param_1,int param_2)

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



// FUNCTION 141103dec FUN_141103dec body=1013 status=ok
// SIG undefined FUN_141103dec(void)

void FUN_141103dec(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14094f6bc();
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x88);
    plVar5 = plVar10 + (longlong)*(int *)(param_1 + 0x90) * 7;
    do {
      if ((longlong)(int)plVar10[1] == 0) {
LAB_141103fdf:
        lVar11 = plVar10[5];
        if (lVar11 == 0) {
          uVar6 = FUN_140c1c194();
          lVar11 = FUN_14477b664(uVar6);
          plVar10[5] = lVar11;
        }
        lVar7 = plVar10[6];
        if (lVar7 != 0) goto LAB_141103ff5;
        if ((lVar11 != 0) && (plVar10[4] != 0)) {
          plVar5 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar4 == '\0')) {
            plVar10[6] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar7 = FUN_144aff482(uVar6,plVar10 + 4);
            plVar10[6] = lVar7;
            if (lVar7 != 0) goto LAB_141103ff5;
          }
        }
        break;
      }
      plVar8 = (longlong *)*plVar10;
      plVar2 = plVar8 + (int)plVar10[1];
      while( true ) {
        if (*(int *)(param_2 + 0x48) != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_2 + 0x40) + lVar11) == *plVar8)
            goto LAB_141103e9c;
            lVar11 = lVar11 + 8;
          } while ((longlong)*(int *)(param_2 + 0x48) << 3 != lVar11);
        }
        if (*(int *)(param_2 + 0x58) == 0) break;
        lVar11 = 0;
        while (*(longlong *)(*(longlong *)(param_2 + 0x50) + lVar11) != *plVar8) {
          lVar11 = lVar11 + 8;
          if ((longlong)*(int *)(param_2 + 0x58) << 3 == lVar11) goto LAB_141103eaa;
        }
LAB_141103e9c:
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar2) goto LAB_141103fdf;
      }
LAB_141103eaa:
      plVar10 = plVar10 + 7;
    } while (plVar10 != plVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x68);
    local_60 = (longlong)*(int *)(param_1 + 0x70) * 0x38 + lVar11;
    lVar9 = 0;
    do {
      lVar12 = *(longlong *)(lVar11 + 0x10);
      if (lVar12 == 0) {
        uVar6 = FUN_140c1c194();
        lVar12 = FUN_14477b664(uVar6);
        *(longlong *)(lVar11 + 0x10) = lVar12;
      }
      lVar7 = *(longlong *)(lVar11 + 0x18);
      if (lVar7 == 0) {
        if ((*(longlong *)(lVar11 + 8) != 0) && (lVar12 != 0)) {
          plVar10 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar10 != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 != '\0')) {
            uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
            lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar11 + 8));
            *(longlong *)(lVar11 + 0x18) = lVar7;
            FUN_1411041e2(lVar11 + 0x20,&local_58);
            if (lVar7 != 0) goto LAB_141103efa;
            goto LAB_141103f78;
          }
          *(undefined8 *)(lVar11 + 0x18) = 0;
        }
        FUN_1411041e2(lVar11 + 0x20,&local_58);
LAB_141103f78:
        bVar3 = 0;
        lVar7 = lVar9;
      }
      else {
        FUN_1411041e2(lVar11 + 0x20,&local_58);
LAB_141103efa:
        if (local_58 == 0) goto LAB_141103f78;
        bVar3 = 1;
        if ((longlong)*(int *)(local_58 + 0x10) != 0) {
          plVar10 = *(longlong **)(local_58 + 8);
          do {
            if (*(int *)(param_2 + 0x48) != 0) {
              lVar12 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0x40) + lVar12) == *plVar10)
                goto LAB_141103f66;
                lVar12 = lVar12 + 8;
              } while ((longlong)*(int *)(param_2 + 0x48) << 3 != lVar12);
            }
            if ((longlong)*(int *)(param_2 + 0x58) == 0) goto LAB_141103f78;
            lVar12 = 0;
            while (*(longlong *)(*(longlong *)(param_2 + 0x50) + lVar12) != *plVar10) {
              lVar12 = lVar12 + 8;
              if ((longlong)*(int *)(param_2 + 0x58) * 8 == lVar12) goto LAB_141103f78;
            }
LAB_141103f66:
            plVar10 = plVar10 + 1;
          } while (plVar10 != *(longlong **)(local_58 + 8) + *(int *)(local_58 + 0x10));
        }
      }
      plVar10 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_50 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      lVar11 = lVar11 + 0x38;
      lVar9 = lVar7;
    } while (!(bool)(bVar3 | lVar11 == local_60));
    if (lVar7 != 0) goto LAB_141103ff5;
  }
  lVar11 = *(longlong *)(param_1 + 0xa0);
  if (lVar11 == 0) {
    uVar6 = FUN_140c1c194();
    lVar11 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0xa0) = lVar11;
  }
  lVar7 = *(longlong *)(param_1 + 0xa8);
  if (lVar7 == 0) {
    if ((*(longlong *)(param_1 + 0x98) == 0) || (lVar11 == 0)) {
      lVar7 = 0;
    }
    else {
      plVar10 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x98));
      }
      *(longlong *)(param_1 + 0xa8) = lVar7;
    }
  }
LAB_141103ff5:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14094eece(param_2,lVar7);
  return;
}



// FUNCTION 1411041e2 FUN_1411041e2 body=83 status=ok
// SIG undefined FUN_1411041e2(void)

longlong * FUN_1411041e2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_141104236();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141104236 FUN_141104236 body=57 status=ok
// SIG undefined FUN_141104236(void)

void FUN_141104236(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb586b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb586b8 = FUN_140002ddd(FUN_1464c1dce,uVar1,L"GbxActorPartInsertInfo_Filter");
  }
  return;
}



// FUNCTION 141104270 FUN_141104270 body=290 status=ok
// SIG undefined FUN_141104270(void)

undefined8 * FUN_141104270(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar6 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar6;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_141104392(param_2,param_2 + 3);
  puVar11 = (ushort *)*param_3;
  puVar5 = (ushort *)param_3[1];
  if (puVar11 != puVar5) {
    puVar1 = param_2 + 8;
    do {
      uVar3 = *puVar11;
      iVar8 = uVar3 + 1;
      iVar4 = *(int *)(param_2 + 0xc);
      iVar10 = iVar8 - iVar4;
      if (iVar10 != 0 && iVar4 <= iVar8) {
        if (iVar4 == 0) {
LAB_141104307:
          if (*(int *)((longlong)param_2 + 100) <= (int)(uint)uVar3) {
            *(undefined4 *)((longlong)param_2 + 100) = 0x100;
            FUN_14497ddce(puVar1,iVar4);
            iVar8 = *(int *)(param_2 + 0xc) + iVar10;
          }
          iVar9 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar9 = iVar8;
          }
          *(int *)(param_2 + 0xc) = iVar8;
          if (iVar8 % 0x20 != 0) {
            bVar7 = -(char)(iVar8 % 0x20);
            *(uint *)((longlong)puVar1 + (longlong)(iVar9 >> 5) * 4) =
                 (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar9 >> 5) * 4) << (bVar7 & 0x1f))
                 >> (bVar7 & 0x1f);
          }
        }
        else {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          if (iVar9 >> 5 != (uint)(uVar3 >> 5)) goto LAB_141104307;
          *(int *)(param_2 + 0xc) = iVar8;
        }
        FUN_1447c45ca(puVar1,iVar4,iVar10,0);
      }
      puVar2 = (uint *)((longlong)puVar1 + (ulonglong)(uVar3 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar5);
  }
  return param_2;
}



// FUNCTION 141104392 FUN_141104392 body=524 status=ok
// SIG undefined FUN_141104392(void)

void FUN_141104392(ushort *param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *param_1;
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_1411043d7:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411043d7;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[1];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_14110445f:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14110445f;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[2];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_141104519;
  if (iVar3 == 0) {
LAB_1411044da:
    if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_2 + 0x24) = 0x100;
      FUN_14497ddce(param_2,iVar3);
      iVar5 = *(int *)(param_2 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_2 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411044da;
    *(int *)(param_2 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_2,iVar3,iVar7,0);
LAB_141104519:
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 14110459e FUN_14110459e body=61 status=ok
// SIG undefined FUN_14110459e(void)

undefined8 * FUN_14110459e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1c0810;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14110465a FUN_14110465a body=675 status=ok
// SIG undefined FUN_14110465a(void)

void FUN_14110465a(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined4 uVar13;
  
  lVar12 = param_2[1];
  if (*(int *)(lVar12 + 0x40) == *(int *)(lVar12 + 0x6c)) {
    lVar7 = 0;
    lVar6 = 0;
LAB_1411048d5:
    lVar4 = 0;
  }
  else {
    uVar3 = (uint)((ulonglong)DAT_14cbd37a0 >> 0x10);
    uVar9 = (uint)DAT_14cbd37a0 & 0xffff;
    lVar4 = lVar12 + 0x70;
    if (*(longlong *)(lVar12 + 0x78) != 0) {
      lVar4 = *(longlong *)(lVar12 + 0x78);
    }
    uVar10 = *(int *)(lVar12 + 0x80) - 1;
    iVar11 = *(int *)(lVar4 + (ulonglong)
                              ((int)((ulonglong)DAT_14cbd37a0 >> 0x20) +
                               ((uint)DAT_14cbd37a0 << 0x10 | uVar9) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4) & uVar10) * 4);
    if (iVar11 == -1) {
      lVar6 = 0;
    }
    else {
      do {
        lVar7 = *(longlong *)(lVar12 + 0x38) + (longlong)iVar11 * 0x38;
        if (*(longlong *)(*(longlong *)(lVar12 + 0x38) + (longlong)iVar11 * 0x38) == DAT_14cbd37a0)
        goto LAB_1411046fe;
        iVar11 = *(int *)(lVar7 + 0x30);
      } while (iVar11 != -1);
      lVar7 = 0;
LAB_1411046fe:
      lVar6 = lVar7 + 8;
      if (lVar7 == 0) {
        lVar6 = 0;
      }
    }
    uVar3 = (uint)((ulonglong)DAT_14cbd37a8 >> 0x10);
    uVar9 = (uint)DAT_14cbd37a8 & 0xffff;
    iVar11 = *(int *)(lVar4 + (ulonglong)
                              ((int)((ulonglong)DAT_14cbd37a8 >> 0x20) +
                               ((uint)DAT_14cbd37a8 << 0x10 | uVar9) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4) & uVar10) * 4);
    if (iVar11 == -1) {
      lVar7 = 0;
    }
    else {
      do {
        lVar5 = *(longlong *)(lVar12 + 0x38) + (longlong)iVar11 * 0x38;
        if (*(longlong *)(*(longlong *)(lVar12 + 0x38) + (longlong)iVar11 * 0x38) == DAT_14cbd37a8)
        goto LAB_141104775;
        iVar11 = *(int *)(lVar5 + 0x30);
      } while (iVar11 != -1);
      lVar5 = 0;
LAB_141104775:
      lVar7 = lVar5 + 8;
      if (lVar5 == 0) {
        lVar7 = 0;
      }
    }
    uVar3 = (uint)((ulonglong)DAT_14cbd37b0 >> 0x10);
    uVar9 = (uint)DAT_14cbd37b0 & 0xffff;
    iVar11 = *(int *)(lVar4 + (ulonglong)
                              ((int)((ulonglong)DAT_14cbd37b0 >> 0x20) +
                               ((uint)DAT_14cbd37b0 << 0x10 | uVar9) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4) & uVar10) * 4);
    if (iVar11 == -1) goto LAB_1411048d5;
    do {
      lVar4 = *(longlong *)(lVar12 + 0x38) + (longlong)iVar11 * 0x38;
      if (*(longlong *)(*(longlong *)(lVar12 + 0x38) + (longlong)iVar11 * 0x38) == DAT_14cbd37b0)
      break;
      iVar11 = *(int *)(lVar4 + 0x30);
      lVar4 = 0;
    } while (iVar11 != -1);
  }
  lVar12 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar12 = 0;
  }
  if (lVar7 == 0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  if (*(longlong *)(*param_2 + 8) == 0) {
    return;
  }
  plVar2 = *(longlong **)(*param_2 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar4 = (**(code **)(*plVar2 + 8))();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_144a2f878();
  if (*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
      lVar5 + 0x30) {
    return;
  }
  uVar1 = *(undefined4 *)param_2[1];
  uVar13 = FUN_144a7ecd0(lVar6);
  lVar6 = FUN_14030a32e(lVar7);
  if (lVar6 != 0) {
    lVar7 = FUN_144a7cbb2();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) goto LAB_14110489e;
  }
  lVar6 = 0;
LAB_14110489e:
  uVar8 = FUN_14030a32e(lVar12);
  FUN_14580566c(lVar4 + 0x6890,uVar8,lVar6,uVar13,uVar1);
  return;
}



// FUNCTION 1411048fe FUN_1411048fe body=89 status=ok
// SIG undefined FUN_1411048fe(void)

undefined8 *
FUN_1411048fe(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 8) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(), lVar1 != 0)) {
    FUN_141104958(lVar1,param_2,param_1,param_3,param_4);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141104958 FUN_141104958 body=324 status=ok
// SIG undefined FUN_141104958(void)

undefined8 *
FUN_141104958(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    iVar1 = *(int *)(param_1 + 0x118);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
      lVar3 = lVar4 * 0x38;
      lVar5 = lVar2;
      do {
        if (*(longlong *)(lVar5 + 0x10) == param_4) {
          if (lVar5 != 0) goto LAB_141104a5e;
          break;
        }
        lVar5 = lVar5 + 0x38;
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != 0);
    }
    if (param_5 != '\0') {
      *(uint *)(param_1 + 0x118) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x11c) < iVar1 + 1U) {
        FUN_141859330((longlong *)(param_1 + 0x110),iVar1);
        lVar2 = *(longlong *)(param_1 + 0x110);
      }
      lVar4 = lVar4 * 0x38;
      lVar5 = lVar2 + lVar4;
      *(undefined8 *)(lVar2 + lVar4) = 0xffffffffffffffff;
      *(undefined4 *)(lVar2 + 8 + lVar4) = 0xffffffff;
      *(longlong *)(lVar2 + 0x10 + lVar4) = param_4;
      if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_4);
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(byte *)(lVar5 + 0x30) = *(byte *)(lVar5 + 0x30) & 0xfe;
      FUN_140328e08(lVar5,param_1,(*(byte *)(param_3 + 0xc0) & 8) >> 3);
      FUN_1407058ce(param_1);
      FUN_140705914(param_1);
      *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
LAB_141104a5e:
      *param_2 = *(undefined8 *)(lVar5 + 0x20);
      lVar2 = *(longlong *)(lVar5 + 0x28);
      param_2[1] = lVar2;
      if (lVar2 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141104a9c FUN_141104a9c body=107 status=ok
// SIG undefined FUN_141104a9c(void)

void FUN_141104a9c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0xf1) & 4) == 0) {
    iVar1 = FUN_141104c3c(param_1 + 0x48);
    if ((iVar1 != -1) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x58);
      lVar3 = (longlong)*(int *)(param_1 + 0x60) * 0x78;
      do {
        FUN_141104b08(param_1,param_2,lVar2);
        lVar2 = lVar2 + 0x78;
        lVar3 = lVar3 + -0x78;
      } while (lVar3 != 0);
    }
    FUN_140327322(param_1);
    return;
  }
  return;
}



// FUNCTION 141104b08 FUN_141104b08 body=307 status=ok
// SIG undefined FUN_141104b08(void)

void FUN_141104b08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_78,*param_3);
  plVar2 = local_70;
  if (local_78 != 0) {
    local_58 = 0;
    local_48 = &PTR_LAB_14b430780;
    local_68[0] = FUN_143e4e4aa;
    local_88 = local_78;
    local_80 = local_70;
    local_40 = param_1;
    if (local_70 == (longlong *)0x0) {
      FUN_141104dd2(param_3,&local_88,local_68);
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      FUN_141104dd2(param_3,&local_88,local_68);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
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
    FUN_140c5f474(param_1);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141104c3c FUN_141104c3c body=136 status=ok
// SIG undefined FUN_141104c3c(void)

ulonglong FUN_141104c3c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = 0;
    iVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) == *param_2) {
        if (iVar3 != 1) {
          uVar4 = (ulonglong)(uint)-iVar3;
          goto LAB_141104c8d;
        }
        break;
      }
      iVar3 = iVar3 + -1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 << 4 != lVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141104cc4(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar2 + 8 + uVar4 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_141104c8d:
  return uVar4 & 0xffffffff;
}



// FUNCTION 141104cc4 FUN_141104cc4 body=269 status=ok
// SIG undefined FUN_141104cc4(void)

void FUN_141104cc4(longlong param_1,int param_2)

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



// FUNCTION 141104dd2 FUN_141104dd2 body=1683 status=ok
// SIG undefined FUN_141104dd2(void)

void FUN_141104dd2(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_3c8 [40];
  longlong *local_3a0;
  longlong local_398;
  int local_38c;
  longlong local_388;
  longlong *local_380;
  longlong *local_378;
  longlong *local_370;
  longlong *local_368;
  undefined8 *local_360;
  undefined8 local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  plVar16 = (longlong *)(param_1 + 0x30);
  iVar9 = *(int *)(param_1 + 0x38);
  if (iVar9 < 1) {
    local_388 = 0;
  }
  else {
    local_388 = *(longlong *)*plVar16;
    plVar15 = (longlong *)((longlong *)*plVar16)[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      iVar9 = *(int *)(param_1 + 0x38);
      goto LAB_141104e33;
    }
  }
  plVar15 = (longlong *)0x0;
LAB_141104e33:
  *(uint *)(param_1 + 0x38) = iVar9 + 1U;
  local_398 = param_1;
  if (*(uint *)(param_1 + 0x3c) < iVar9 + 1U) {
    FUN_1418afd3e(plVar16,iVar9);
  }
  lVar3 = *plVar16;
  *(longlong *)(lVar3 + (longlong)iVar9 * 0x10) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(lVar3 + 8 + (longlong)iVar9 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  iVar9 = *(int *)(local_398 + 0x38);
  local_380 = plVar15;
  if (1 < (longlong)iVar9) {
    lVar3 = *plVar16;
    local_378 = param_2;
    local_370 = plVar16;
    local_368 = param_3;
    memset(local_348,0,0x2f0);
    local_350 = (longlong)iVar9 * 0x10 + lVar3 + -0x10;
    local_358 = lVar3;
    fVar29 = logf((float)iVar9);
    local_348[0] = (int)(longlong)(fVar29 + fVar29);
    plVar15 = &local_358;
    do {
      puVar22 = (undefined8 *)*plVar15;
      puVar20 = (undefined8 *)plVar15[1];
      iVar9 = (int)plVar15[2];
      iVar10 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar22) >> 4);
      uVar18 = iVar10 + 1;
      puVar24 = puVar22;
      puVar26 = puVar20;
      local_3a0 = plVar15;
      if (iVar9 != 0) {
LAB_141104f1c:
        if (8 < (int)uVar18) {
          uVar14 = puVar22[(ulonglong)(uVar18 >> 1) * 2];
          uVar6 = (puVar22 + (ulonglong)(uVar18 >> 1) * 2)[1];
          uVar7 = puVar22[1];
          puVar22[(ulonglong)(uVar18 >> 1) * 2] = *puVar22;
          (puVar22 + (ulonglong)(uVar18 >> 1) * 2)[1] = uVar7;
          local_58._0_4_ = (undefined4)uVar14;
          local_58._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar6;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          *(undefined4 *)puVar22 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar22 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_50._4_4_;
          puVar19 = puVar26 + 2;
          puVar23 = puVar22;
          local_38c = iVar9;
          local_360 = puVar24;
          local_58 = uVar14;
          uStack_50 = uVar6;
          do {
            puVar8 = puVar23 + 2;
            puVar27 = puVar23 + 2;
            do {
              puVar23 = puVar27;
              puVar24 = puVar8;
              if (puVar26 < puVar23) break;
              iVar9 = (**(code **)(*(longlong *)*puVar22 + 0x10))();
              iVar10 = (**(code **)(*(longlong *)*puVar23 + 0x10))();
              puVar8 = puVar24 + 2;
              puVar27 = puVar23 + 2;
            } while (iVar9 <= iVar10);
            puVar8 = puVar19 + -4;
            do {
              puVar27 = puVar19;
              puVar17 = puVar8;
              puVar19 = puVar27 + -2;
              if (puVar19 <= puVar22) break;
              iVar9 = (**(code **)(*(longlong *)*puVar19 + 0x10))();
              iVar10 = (**(code **)(*(longlong *)*puVar22 + 0x10))();
              puVar8 = puVar17 + -2;
            } while (iVar9 <= iVar10);
            if (puVar19 < puVar23) goto LAB_141104ff0;
            uVar14 = *puVar23;
            uVar6 = puVar23[1];
            uVar7 = puVar27[-1];
            *puVar23 = *puVar19;
            puVar23[1] = uVar7;
            local_58._0_4_ = (undefined4)uVar14;
            local_58._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar6;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)puVar19 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar27 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar27 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar27 + -4) = uStack_50._4_4_;
            local_58 = uVar14;
            uStack_50 = uVar6;
          } while( true );
        }
        for (; plVar15 = local_3a0, puVar24 = puVar22, puVar20 = puVar22, puVar22 < puVar26;
            puVar26 = puVar26 + -2) {
          while (puVar19 = puVar24, puVar20 = puVar20 + 2, puVar20 <= puVar26) {
            iVar9 = (**(code **)(*(longlong *)*puVar19 + 0x10))();
            iVar10 = (**(code **)(*(longlong *)*puVar20 + 0x10))();
            puVar24 = puVar20;
            if (iVar9 <= iVar10) {
              puVar24 = puVar19;
            }
          }
          local_58 = *puVar19;
          uStack_50 = puVar19[1];
          uVar6 = local_58;
          uVar7 = uStack_50;
          uVar14 = puVar26[1];
          *puVar19 = *puVar26;
          puVar19[1] = uVar14;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar26 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar26 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar26 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar26 + 0xc) = uStack_50._4_4_;
          local_58 = uVar6;
          uStack_50 = uVar7;
        }
        goto LAB_141105316;
      }
LAB_1411050af:
      plVar15 = local_3a0;
      if (uVar18 != 0) {
        iVar9 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
        iVar10 = iVar9;
joined_r0x0001411050ce:
        do {
          iVar13 = iVar9 * 2 + 1;
          if (iVar13 < (int)uVar18) {
            iVar25 = iVar9 * 2 + 2;
            if (iVar25 < (int)uVar18) {
              iVar11 = (**(code **)(*(longlong *)puVar22[(longlong)iVar25 * 2] + 0x10))();
              iVar12 = (**(code **)(*(longlong *)puVar22[(longlong)iVar13 * 2] + 0x10))();
              if (iVar11 <= iVar12) {
                iVar13 = iVar25;
              }
            }
            iVar25 = (**(code **)(*(longlong *)puVar22[(longlong)iVar9 * 2] + 0x10))();
            iVar11 = (**(code **)(*(longlong *)puVar22[(longlong)iVar13 * 2] + 0x10))();
            if (iVar11 < iVar25) {
              puVar26 = puVar22 + (longlong)iVar9 * 2;
              puVar20 = puVar22 + (longlong)iVar13 * 2;
              local_58 = *puVar26;
              uStack_50 = puVar26[1];
              uVar6 = local_58;
              uVar7 = uStack_50;
              uVar14 = puVar20[1];
              *puVar26 = *puVar20;
              puVar26[1] = uVar14;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)puVar20 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
              iVar9 = iVar13;
              local_58 = uVar6;
              uStack_50 = uVar7;
              goto joined_r0x0001411050ce;
            }
          }
          bVar28 = iVar10 != 0;
          iVar9 = iVar10 + -1;
          iVar10 = iVar9;
        } while (bVar28);
        plVar15 = local_3a0;
        if (1 < (int)uVar18) {
          uVar21 = (ulonglong)uVar18 - 1;
          local_58 = *puVar22;
          uStack_50 = puVar22[1];
          uVar6 = local_58;
          uVar7 = uStack_50;
          uVar14 = (puVar22 + uVar21 * 2)[1];
          *puVar22 = puVar22[uVar21 * 2];
          puVar22[1] = uVar14;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar26 = puVar22 + uVar21 * 2;
          *(undefined4 *)puVar26 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar26 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar26 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar26 + 0xc) = uStack_50._4_4_;
          local_58 = uVar6;
          uStack_50 = uVar7;
          if (uVar18 != 2) {
            do {
              iVar9 = 0;
              iVar13 = 1;
              iVar10 = 0;
              do {
                iVar9 = iVar9 + 2;
                iVar25 = iVar13;
                if ((longlong)iVar9 < (longlong)uVar21) {
                  iVar11 = (**(code **)(*(longlong *)puVar22[(longlong)iVar9 * 2] + 0x10))();
                  iVar13 = (**(code **)(*(longlong *)puVar22[(longlong)iVar13 * 2] + 0x10))();
                  if (iVar11 <= iVar13) {
                    iVar25 = iVar9;
                  }
                }
                iVar9 = (**(code **)(*(longlong *)puVar22[(longlong)iVar10 * 2] + 0x10))();
                iVar13 = (**(code **)(*(longlong *)puVar22[(longlong)iVar25 * 2] + 0x10))();
                if (iVar9 <= iVar13) break;
                puVar20 = puVar22 + (longlong)iVar10 * 2;
                puVar26 = puVar22 + (longlong)iVar25 * 2;
                uVar14 = *puVar20;
                uVar6 = puVar20[1];
                uVar7 = puVar26[1];
                *puVar20 = *puVar26;
                puVar20[1] = uVar7;
                local_58._0_4_ = (undefined4)uVar14;
                local_58._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
                uStack_50._0_4_ = (undefined4)uVar6;
                uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
                *(undefined4 *)puVar26 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar26 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar26 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar26 + 0xc) = uStack_50._4_4_;
                iVar9 = iVar25 * 2;
                iVar13 = iVar25 * 2 + 1;
                local_58 = uVar14;
                uStack_50 = uVar6;
                iVar10 = iVar25;
              } while ((longlong)iVar13 < (longlong)uVar21);
              uVar1 = uVar21 - 1;
              local_58 = *puVar22;
              uStack_50 = puVar22[1];
              uVar6 = local_58;
              uVar7 = uStack_50;
              uVar14 = (puVar22 + uVar1 * 2)[1];
              *puVar22 = puVar22[uVar1 * 2];
              puVar22[1] = uVar14;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar26 = puVar22 + uVar1 * 2;
              *(undefined4 *)puVar26 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar26 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar26 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar26 + 0xc) = uStack_50._4_4_;
              bVar28 = 2 < uVar21;
              plVar15 = local_3a0;
              uVar21 = uVar1;
              local_58 = uVar6;
              uStack_50 = uVar7;
            } while (bVar28);
          }
        }
      }
LAB_141105316:
      plVar15 = plVar15 + -3;
      param_3 = local_368;
      plVar16 = local_370;
      param_2 = local_378;
    } while (&local_358 <= plVar15);
  }
  plVar15 = (longlong *)*plVar16;
  if (*plVar15 == *param_2) {
    if (local_388 != 0) {
      if (*(longlong *)(local_398 + 0x58) != 0) {
        FUN_14480f766(local_388 + 0x10);
        plVar15 = (longlong *)*plVar16;
      }
      *(undefined8 *)(local_398 + 0x58) = 0;
    }
    lVar3 = local_398;
    pcVar5 = (code *)*param_3;
    plVar16 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar16 = (longlong *)param_3[2];
    }
    uVar14 = (**(code **)(*plVar16 + 8))();
    (*pcVar5)(&local_358,uVar14,plVar15);
    *(longlong *)(lVar3 + 0x58) = local_358;
    plVar16 = (longlong *)**(undefined8 **)(lVar3 + 0x30);
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_358);
    fVar29 = 0.0;
    if (local_358._4_1_ == '\x01') {
      fVar29 = (float)local_358;
      if (1.0 <= (float)local_358) {
        fVar29 = 1.0;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
    }
    FUN_140c5f260(local_398,fVar29);
  }
  plVar16 = local_380;
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_380 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (*param_3 != 0) {
    plVar16 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar16 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_141104ff0:
  local_58 = *puVar22;
  uStack_50 = puVar22[1];
  uVar6 = local_58;
  uVar7 = uStack_50;
  uVar14 = puVar27[-1];
  *puVar22 = *puVar19;
  puVar22[1] = uVar14;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar19 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar27 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar27 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar27 + -4) = uStack_50._4_4_;
  iVar9 = local_38c + -1;
  puVar27 = puVar27 + -4;
  local_58 = uVar6;
  uStack_50 = uVar7;
  if ((longlong)puVar17 - (longlong)local_360 < (longlong)puVar20 - (longlong)puVar24) {
    if (puVar23 < puVar26) {
      *local_3a0 = (longlong)puVar23;
      local_3a0[1] = (longlong)puVar26;
      *(int *)(local_3a0 + 2) = iVar9;
      local_3a0 = local_3a0 + 3;
    }
    plVar15 = local_3a0;
    puVar24 = puVar22;
    puVar20 = puVar17;
    if (puVar19 <= puVar22 + 2) goto LAB_141105316;
  }
  else {
    plVar15 = local_3a0;
    if (puVar22 + 2 < puVar19) {
      *local_3a0 = (longlong)puVar22;
      local_3a0[1] = (longlong)puVar27;
      *(int *)(local_3a0 + 2) = iVar9;
      plVar15 = local_3a0 + 3;
    }
    puVar22 = puVar23;
    puVar27 = puVar26;
    puVar20 = puVar26;
    if (puVar26 <= puVar23) goto LAB_141105316;
  }
  local_3a0 = plVar15;
  iVar10 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar24) >> 4);
  uVar18 = iVar10 + 1;
  puVar26 = puVar27;
  if (iVar9 == 0) goto LAB_1411050af;
  goto LAB_141104f1c;
}



// FUNCTION 141105466 FUN_141105466 body=8 status=ok
// SIG undefined FUN_141105466(void)

bool FUN_141105466(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 14110546e FUN_14110546e body=106 status=ok
// SIG undefined FUN_14110546e(void)

void FUN_14110546e(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_1411054d8((longlong *)(param_3 + 8),iVar1);
  }
  lVar3 = (longlong)param_2;
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar1 * 8) =
       *(undefined8 *)(lVar2 + lVar3 * 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  FUN_140191c56(param_1 + 8,lVar3,1);
  return;
}



// FUNCTION 1411054d8 FUN_1411054d8 body=353 status=ok
// SIG undefined FUN_1411054d8(void)

void FUN_1411054d8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14110555f;
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
LAB_14110555f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14110563a FUN_14110563a body=251 status=ok
// SIG undefined FUN_14110563a(void)

void FUN_14110563a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = param_1 + -0x178;
  *(undefined8 *)(param_1 + 0x2e08) = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x2df8) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x2dfc) = uVar3;
  *(undefined4 *)(param_1 + 0x2e00) = uVar4;
  *(undefined4 *)(param_1 + 0x2e04) = uVar5;
  if (*(char *)(param_1 + 0x2e50) == '\x01') {
    if (*(longlong **)(param_1 + 0x1b70) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x1b70) + 0x700))();
    }
    FUN_1404fad5e(lVar1);
  }
  if (*(char *)(param_1 + 12000) == '\x01') {
    FUN_1457218fa(lVar1);
  }
  FUN_141105774(lVar1,0,3);
  FUN_141105736(param_1 + 0x1d90);
  FUN_140e3ea6e(param_1);
  *(undefined8 *)(param_1 + 0x220) = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x210) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x218) = uVar2;
  *(byte *)(param_1 + 0x444) = *(byte *)(param_1 + 0x444) & 0xfe;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x468) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x470) = uVar2;
  *(undefined8 *)(param_1 + 0x478) = DAT_14c8464f0;
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0x480) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x488) = uVar2;
  *(undefined8 *)(param_1 + 0x490) = DAT_14c8464f0;
  return;
}


