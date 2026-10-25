// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14295c45c FUN_14295c45c body=66 status=ok
// SIG undefined FUN_14295c45c(void)

void FUN_14295c45c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[2];
  plVar3 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  *(undefined4 *)(*(longlong *)*param_1 + 0x80) = 0;
  FUN_140b576f0();
  return;
}



// FUNCTION 14295c49e FUN_14295c49e body=131 status=ok
// SIG undefined FUN_14295c49e(void)

undefined8 * FUN_14295c49e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_149f35e90;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  return puVar2 + 2;
}



// FUNCTION 14295c522 FUN_14295c522 body=5 status=ok
// SIG undefined FUN_14295c522(void)

longlong FUN_14295c522(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14295c528 FUN_14295c528 body=29 status=ok
// SIG undefined FUN_14295c528(void)

void FUN_14295c528(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14295c546 FUN_14295c546 body=111 status=ok
// SIG undefined FUN_14295c546(void)

undefined8 * FUN_14295c546(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f35e90;
  if (param_1[4] != 0) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar3 + 0x10))();
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



// FUNCTION 14295c5ce FUN_14295c5ce body=24 status=ok
// SIG undefined FUN_14295c5ce(void)

longlong FUN_14295c5ce(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149f35eb0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return param_2 + 0x18;
}



// FUNCTION 14295c5ec FUN_14295c5ec body=12 status=ok
// SIG undefined FUN_14295c5ec(void)

void FUN_14295c5ec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014295c5f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14295c5f8 FUN_14295c5f8 body=29 status=ok
// SIG undefined FUN_14295c5f8(void)

undefined8 FUN_14295c5f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295c616 FUN_14295c616 body=547 status=ok
// SIG undefined FUN_14295c616(void)

longlong * FUN_14295c616(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14295c83a FUN_14295c83a body=1809 status=ok
// SIG undefined FUN_14295c83a(void)

void FUN_14295c83a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  uint *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  void *pvVar22;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  longlong local_d8;
  longlong *plStack_d0;
  int local_c8;
  void *local_b8;
  ulonglong uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  cVar8 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
  if (cVar8 == '\0') {
    iVar9 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
    if ((iVar9 - 500U < 0xffffff9c) && (*(int *)(lVar4 + 0xa8) < *(int *)(lVar4 + 0x58))) {
      iVar9 = *(int *)(lVar4 + 0xa8) + 1;
      *(int *)(lVar4 + 0xa8) = iVar9;
      iVar9 = (iVar9 + *(int *)(lVar4 + 0xa4)) % *(int *)(lVar4 + 0x30);
      *(int *)(lVar4 + 0xa4) = iVar9;
      plVar12 = *(longlong **)(lVar4 + 0x40);
      lVar18 = (longlong)iVar9 * 0x10;
      iVar9 = *(int *)(lVar4 + 0x50) + -1;
      if (*(int *)(lVar4 + 0x50) == 0) {
        iVar9 = 0;
      }
      uVar11 = *(uint *)(*(longlong *)(lVar4 + 0x28) + 8 + lVar18);
      iVar10 = iVar9 + 1 + (uint)((longlong)(int)uVar11 == 0);
      local_b8 = (void *)0x0;
      pvVar22 = *(void **)(*(longlong *)(lVar4 + 0x28) + lVar18);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
      if (iVar10 == 0 && uVar11 == 0) {
        uStack_b0 = (ulonglong)uVar11;
      }
      else {
        iVar17 = iVar10 + uVar11;
        if (iVar10 < 0) goto LAB_14295cf25;
        FUN_1446dd670(&local_b8,iVar17,0);
        if (uVar11 != 0) {
          memcpy(local_b8,pvVar22,(longlong)(int)uVar11 * 2);
        }
      }
      FUN_1401aebe8(&local_b8,*(undefined8 *)(lVar4 + 0x48),iVar9);
      (**(code **)(*plVar12 + 8))(plVar12,&local_b8,lVar4 + 0xc0,lVar4 + 0xb0);
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined **)(lVar4 + 0x100) = &DAT_149f2f9b8;
      FUN_142957c04(lVar4);
    }
    goto LAB_14295c9a6;
  }
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  plVar12 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar12);
  local_118 = plVar12;
  local_110 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_110[1] = (longlong)&DAT_100000001;
  *local_110 = (longlong)&PTR_FUN_149f2f9a0;
  local_110[2] = (longlong)plVar12;
  uVar13 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))();
  cVar8 = (**(code **)(*plVar12 + 0x160))(plVar12,uVar13);
  if (cVar8 == '\0') {
    *(undefined **)(lVar4 + 0x100) = &DAT_149f2f970;
LAB_14295cd81:
    iVar9 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))();
    if ((iVar9 - 500U < 0xffffff9c) && (*(int *)(lVar4 + 0xa8) < *(int *)(lVar4 + 0x58))) {
      iVar9 = *(int *)(lVar4 + 0xa8) + 1;
      *(int *)(lVar4 + 0xa8) = iVar9;
      iVar9 = (iVar9 + *(int *)(lVar4 + 0xa4)) % *(int *)(lVar4 + 0x30);
      *(int *)(lVar4 + 0xa4) = iVar9;
      plVar12 = *(longlong **)(lVar4 + 0x40);
      lVar18 = (longlong)iVar9 * 0x10;
      iVar9 = *(int *)(lVar4 + 0x50) + -1;
      if (*(int *)(lVar4 + 0x50) == 0) {
        iVar9 = 0;
      }
      uVar11 = *(uint *)(*(longlong *)(lVar4 + 0x28) + 8 + lVar18);
      iVar10 = iVar9 + 1 + (uint)((longlong)(int)uVar11 == 0);
      local_b8 = (void *)0x0;
      pvVar22 = *(void **)(*(longlong *)(lVar4 + 0x28) + lVar18);
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
      if (iVar10 == 0 && uVar11 == 0) {
        uStack_b0 = (ulonglong)uVar11;
      }
      else {
        iVar17 = iVar10 + uVar11;
        if (iVar10 < 0) {
LAB_14295cf25:
          local_b8 = (void *)0x0;
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar17);
        }
        FUN_1446dd670(&local_b8,iVar17,0);
        if (uVar11 != 0) {
          memcpy(local_b8,pvVar22,(longlong)(int)uVar11 * 2);
        }
      }
      FUN_1401aebe8(&local_b8,*(undefined8 *)(lVar4 + 0x48),iVar9);
      (**(code **)(*plVar12 + 8))(plVar12,&local_b8,lVar4 + 0xc0,lVar4 + 0xb0);
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_142957c04(lVar4);
    }
  }
  else {
    uVar20 = 0;
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    (**(code **)(*plVar12 + 0x1b8))(plVar12);
    if (local_90 == 0) {
      uVar21 = 1;
      iVar9 = 0;
      uVar11 = 0;
    }
    else {
      puVar14 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar14 = local_a8;
      }
      uVar11 = *puVar14;
      if (uVar11 == 0) {
        iVar9 = local_90 + 0x1e;
        if (-1 < (int)(local_90 - 1)) {
          iVar9 = local_90 - 1;
        }
        uVar20 = 0;
        uVar21 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar21 = uVar20;
        }
        iVar9 = 0;
        do {
          if (uVar21 == uVar20) goto LAB_14295cb68;
          iVar9 = iVar9 + 0x20;
          uVar11 = puVar14[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar20 = 0;
        iVar9 = 0;
      }
      uVar21 = (ulonglong)(-uVar11 & uVar11);
      uVar3 = uVar21 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar11 = (iVar9 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if ((int)local_90 <= (int)uVar11) {
        uVar11 = local_90;
      }
    }
    if (uVar11 != local_90) {
      uVar19 = 0xffffffff;
      local_120 = (ulonglong)local_90;
      do {
        pvVar22 = (void *)((longlong)(int)uVar11 * 0x18 + (longlong)local_b8);
        lVar18 = (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x1f8))
                           (*(longlong **)(lVar4 + 0x18),pvVar22);
        lVar15 = (**(code **)(*local_118 + 0x1f8))(local_118,pvVar22);
        if ((lVar18 == 0) || (lVar15 == 0)) goto LAB_14295cd3f;
        local_c8 = 0;
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        local_e8 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        (**(code **)(**(longlong **)(lVar4 + 0x18) + 0xb8))
                  (*(longlong **)(lVar4 + 0x18),pvVar22,&local_d8);
        (**(code **)(*local_118 + 0xb8))(local_118,pvVar22,&local_f8);
        auVar6._8_8_ = plStack_d0;
        auVar6._0_8_ = local_d8;
        auVar5._8_8_ = uStack_f0;
        auVar5._0_8_ = local_f8;
        if (auVar6 != auVar5 || local_e8 != local_c8) goto LAB_14295cd3f;
        uVar19 = uVar19 & ~(uint)uVar21;
        puVar14 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar14 = local_a8;
        }
        iVar10 = (int)uVar20;
        lVar18 = (longlong)iVar10;
        uVar11 = puVar14[lVar18] & uVar19;
        if (uVar11 == 0) {
          iVar17 = local_90 + 0x1e;
          if (-1 < (int)(local_90 - 1)) {
            iVar17 = local_90 - 1;
          }
          iVar17 = iVar17 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar16 = iVar17;
          if (iVar17 < iVar10) {
            iVar16 = iVar10;
          }
          if (iVar10 < iVar17) {
            lVar15 = 0;
            do {
              uVar11 = puVar14[lVar18 + lVar15 + 1];
              if (uVar11 != 0) {
                uVar20 = (ulonglong)(iVar10 + (int)lVar15 + 1);
                uVar19 = 0xffffffff;
                goto LAB_14295ccf5;
              }
              iVar9 = iVar9 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar16 - lVar18 != lVar15);
            uVar19 = 0xffffffff;
            iVar10 = iVar16;
          }
          uVar20 = (ulonglong)(iVar10 + 1);
          uVar11 = local_90;
        }
        else {
LAB_14295ccf5:
          uVar21 = (ulonglong)(-uVar11 & uVar11);
          uVar3 = uVar21 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar11 = (iVar9 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)local_90 <= (int)uVar11) {
            uVar11 = local_90;
          }
        }
      } while (uVar11 != (uint)local_120);
    }
LAB_14295cb68:
    FUN_146b2f1c8(&local_d8,lVar4 + 0x18,&local_118);
    local_108 = local_d8;
    if (plStack_d0 != (longlong *)0x0) {
      plStack_100 = plStack_d0;
    }
    if (local_d8 == 0) {
LAB_14295cd3f:
      *(undefined **)(lVar4 + 0x100) = &DAT_149f2f976;
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_b8);
    if (bVar7) goto LAB_14295cd81;
    lVar18 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x20))();
    LOCK();
    *(undefined4 *)(lVar4 + 0xf8) = *(undefined4 *)(lVar18 + 8);
    UNLOCK();
    FUN_146b8fef4(lVar4,&local_108);
  }
  plVar12 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  plVar12 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_14295c9a6:
  plVar12 = *(longlong **)(param_1 + 0xc0);
  if (plVar12 != (longlong *)0x0) {
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
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14295cf4c FUN_14295cf4c body=110 status=ok
// SIG undefined FUN_14295cf4c(void)

undefined8 * FUN_14295cf4c(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295cfd8 FUN_14295cfd8 body=29 status=ok
// SIG undefined FUN_14295cfd8(void)

undefined8 FUN_14295cfd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14295cff5 FUN_14295cff5 body=115 status=ok
// SIG undefined FUN_14295cff5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14295cff5(void)

{
  uint uVar1;
  undefined1 auStack_38 [32];
  char *local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = "UnixSocketPath";
  local_10 = 0xe;
  local_c = 0;
  uVar1 = FUN_14001a6c0(&local_18,1);
  _DAT_14c991e90 = (ulonglong)uVar1;
  DAT_14c991e98 = 0;
  uRam000000014c991ea0 = 0;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    atexit((_func_5014 *)&LAB_142955159);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 14295d06c FUN_14295d06c body=1153 status=ok
// SIG undefined FUN_14295d06c(void)

void FUN_14295d06c(longlong *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  undefined1 local_130 [16];
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  ulonglong local_b0;
  double dVar3;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar7 = *(longlong *)(*param_1 + 0x220);
  lVar19 = (longlong)param_2;
  uVar4 = *(uint *)(lVar7 + lVar19 * 0xc);
  uVar5 = *(uint *)(lVar7 + 4 + lVar19 * 0xc);
  uVar6 = *(uint *)(lVar7 + 8 + lVar19 * 0xc);
  lVar7 = *(longlong *)(*param_1 + 0x10);
  lVar19 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
  uVar20 = (ulonglong)uVar6 & 0x1ff;
  pdVar1 = (double *)(lVar19 + uVar20 * 0x18);
  dVar11 = *pdVar1;
  dVar12 = pdVar1[1];
  local_f0 = *(double *)(lVar19 + 0x10 + uVar20 * 0x18);
  lVar19 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
  uVar20 = (ulonglong)uVar5 & 0x1ff;
  pdVar1 = (double *)(lVar19 + uVar20 * 0x18);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  local_108 = *(double *)(lVar19 + 0x10 + uVar20 * 0x18);
  lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar4 >> 9) * 8);
  uVar20 = (ulonglong)uVar4 & 0x1ff;
  pdVar1 = (double *)(lVar7 + uVar20 * 0x18);
  dVar13 = *pdVar1;
  dVar14 = pdVar1[1];
  local_120 = *(double *)(lVar7 + 0x10 + uVar20 * 0x18);
  if ((char)param_1[1] == '\x01') {
    pdVar1 = (double *)param_1[5];
    dVar16 = pdVar1[8];
    dVar17 = pdVar1[9];
    dVar13 = dVar13 * dVar16;
    dVar14 = dVar14 * dVar17;
    local_198 = pdVar1[10];
    dStack_190 = pdVar1[0xb];
    local_158 = local_120 * local_198;
    dStack_150 = dStack_190 * 0.0;
    local_168._8_4_ = SUB84(dVar14,0);
    local_168._0_8_ = dVar13;
    local_168._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    dVar18 = *pdVar1;
    local_1a8 = pdVar1[1];
    local_1b8 = pdVar1[2];
    dStack_1b0 = pdVar1[3];
    dVar24 = dVar14 * dVar18 - dVar13 * local_1a8;
    dVar15 = local_158 * local_1a8 - dVar14 * local_1b8;
    dVar21 = dVar13 * local_1b8 - local_158 * dVar18;
    dVar8 = dVar8 * dVar16;
    dVar9 = dVar9 * dVar17;
    local_178 = local_108 * local_198;
    dStack_170 = dStack_190 * 0.0;
    dVar23 = dVar9 * dVar18 - dVar8 * local_1a8;
    dVar10 = local_178 * local_1a8 - dVar9 * local_1b8;
    dVar22 = dVar8 * local_1b8 - local_178 * dVar18;
    dVar10 = dVar10 + dVar10;
    dVar22 = dVar22 + dVar22;
    dVar2 = pdVar1[3];
    dVar3 = pdVar1[3];
    local_188 = dVar2 * dVar10 + dVar8;
    dStack_180 = dVar3 * dVar22 + dVar9;
    dVar11 = dVar11 * dVar16;
    dVar12 = dVar12 * dVar17;
    local_198 = local_f0 * local_198;
    dStack_190 = dStack_190 * 0.0;
    dVar25 = dVar12 * dVar18 - dVar11 * local_1a8;
    dVar26 = local_198 * local_1a8 - dVar12 * local_1b8;
    dVar27 = dVar11 * local_1b8 - dVar18 * local_198;
    dVar26 = dVar26 + dVar26;
    dVar27 = dVar27 + dVar27;
    dVar15 = dVar15 + dVar15;
    dVar21 = dVar21 + dVar21;
    dVar24 = dVar24 + dVar24;
    dVar23 = dVar23 + dVar23;
    dVar25 = dVar25 + dVar25;
    dVar16 = pdVar1[4];
    dVar17 = pdVar1[5];
    dVar13 = (dVar24 * local_1a8 - dVar21 * local_1b8) + dVar2 * dVar15 + dVar13 + dVar16;
    dVar14 = (local_1b8 * dVar15 - dVar18 * dVar24) + dVar3 * dVar21 + (double)local_168._8_8_ +
             dVar17;
    dVar8 = (dVar23 * local_1a8 - dVar22 * local_1b8) + local_188 + dVar16;
    dVar9 = (local_1b8 * dVar10 - dVar18 * dVar23) + dStack_180 + dVar17;
    dVar11 = (dVar25 * local_1a8 - dVar27 * local_1b8) + dVar2 * dVar26 + dVar11 + dVar16;
    dVar12 = (local_1b8 * dVar26 - dVar18 * dVar25) + dVar3 * dVar27 + dVar12 + dVar17;
    local_f0 = pdVar1[6];
    local_120 = dVar24 * dVar2 + local_158 + (dVar21 * dVar18 - dVar15 * local_1a8) + local_f0;
    local_108 = dVar23 * dVar2 + local_178 + (dVar22 * dVar18 - dVar10 * local_1a8) + local_f0;
    local_f0 = dVar25 * dVar2 + local_198 + (dVar27 * dVar18 - dVar26 * local_1a8) + local_f0;
    dStack_1a0 = local_1b8;
  }
  local_138 = param_1[4];
  local_148 = param_1[2];
  lStack_140 = param_1[3];
  local_130._8_4_ = SUB84(dVar14,0);
  local_130._0_8_ = dVar13;
  local_130._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_118._8_4_ = SUB84(dVar9,0);
  local_118._0_8_ = dVar8;
  local_118._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_100._8_4_ = SUB84(dVar12,0);
  local_100._0_8_ = dVar11;
  local_100._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  FUN_146bd2a7a(&local_148);
  if ((local_b0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295d4ee FUN_14295d4ee body=460 status=ok
// SIG undefined FUN_14295d4ee(void)

longlong FUN_14295d4ee(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_146bd3296();
  if (cVar4 == '\0') goto LAB_14295d515;
  FUN_146bd3382(param_1);
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x170) + -1;
  *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x174) + -1;
  *(int *)(param_1 + 400) = *(int *)(param_1 + 0x178) + -1;
  FUN_146bd34a6(param_1);
  FUN_146bd355a(param_1);
  cVar4 = FUN_146bd3640((undefined4 *)(param_1 + 0x194),(undefined4 *)(param_1 + 0x17c));
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0x121) != '\0') {
      FUN_146bd367c(param_1 + 0x1f0,*(int *)(param_1 + 0x170) + 1,*(int *)(param_1 + 0x174) + 1,
                    *(int *)(param_1 + 0x178) + 1);
    }
    if (*(char *)(param_1 + 0x120) == '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 0x178);
      uVar2 = *(undefined4 *)(param_1 + 0x170);
      uVar3 = *(undefined4 *)(param_1 + 0x174);
      goto LAB_14295d669;
    }
  }
  else {
    if (*(char *)(param_1 + 0x121) != '\0') {
      *(undefined4 *)(param_1 + 0x208) = 0x7f7fffff;
      FUN_146bd367c(param_1 + 0x1f0,*(int *)(param_1 + 0x170) + 1,*(int *)(param_1 + 0x174) + 1,
                    *(int *)(param_1 + 0x178) + 1);
    }
    if (*(char *)(param_1 + 0x120) == '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 0x178);
      uVar2 = *(undefined4 *)(param_1 + 0x170);
      uVar3 = *(undefined4 *)(param_1 + 0x174);
      *(undefined4 *)(param_1 + 0x250) = 0;
LAB_14295d669:
      FUN_146bd36ea(param_1 + 0x238,uVar2,uVar3,uVar1);
    }
  }
  if (*(char *)(param_1 + 0x120) == '\x01') {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_146bd3758(param_1);
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_146bd3a16(param_1);
  }
  FUN_142964d24(param_1);
  *(undefined8 *)(param_1 + 0x1a4) = *(undefined8 *)(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x188);
LAB_14295d515:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295d6bc FUN_14295d6bc body=324 status=ok
// SIG undefined FUN_14295d6bc(void)

longlong FUN_14295d6bc(longlong param_1)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_146bd3296();
  if (cVar1 != '\0') {
    FUN_146bd3382(param_1);
    *(undefined8 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x170) + -1;
    *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x174) + -1;
    *(int *)(param_1 + 400) = *(int *)(param_1 + 0x178) + -1;
    if (*(char *)(param_1 + 0x121) == '\x01') {
      *(undefined4 *)(param_1 + 0x208) = 0x7f7fffff;
      FUN_146bd367c(param_1 + 0x1f0,*(int *)(param_1 + 0x170) + 1,*(int *)(param_1 + 0x174) + 1,
                    *(int *)(param_1 + 0x178) + 1);
    }
    FUN_146bd34a6(param_1);
    FUN_146bd355a(param_1);
    if (*(char *)(param_1 + 0x120) == '\x01') {
      *(undefined1 *)(param_1 + 0x230) = 1;
      local_28 = &local_38;
      local_48 = &local_20;
      local_20 = 0;
      local_18 = 0;
      local_30 = &LAB_146bd7b80;
      local_50 = 0;
      local_38 = param_1;
      FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x178),1);
      *(undefined1 *)(param_1 + 0x230) = 0;
    }
    else {
      FUN_146bd7a12(param_1);
    }
    FUN_142964d24(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295d802 FUN_14295d802 body=1273 status=ok
// SIG undefined FUN_14295d802(void)

void FUN_14295d802(longlong *param_1,double *param_2,char param_3,char param_4)

{
  undefined4 *puVar1;
  double dVar2;
  longlong *plVar3;
  double dVar4;
  undefined4 uVar5;
  double *pdVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_218 [47];
  char local_1e9;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double local_1b8;
  longlong *local_1a8;
  longlong local_198 [4];
  undefined1 local_178;
  double local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  longlong *local_148;
  longlong local_138 [4];
  undefined1 local_118;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar3 = (longlong *)*param_1;
  if ((param_4 != '\0') || (*(char *)(param_1[3] + 0x40) == '\0')) {
    local_158 = param_2[2];
    local_168 = *param_2;
    uStack_160 = *(undefined4 *)(param_2 + 1);
    uStack_15c = *(undefined4 *)((longlong)param_2 + 0xc);
    dVar4 = (double)FUN_146bed438((longlong *)param_1[2],
                                  *(undefined4 *)(*(longlong *)param_1[2] + 0xcc));
    if (0.5 < dVar4 * (double)param_1[5]) goto LAB_14295dc45;
  }
  local_168 = 1.79769313486232e+308;
  local_158 = 0.0;
  local_148 = (longlong *)0x0;
  local_118 = 0;
  uVar5 = (**(code **)(**(longlong **)param_1[2] + 0x20))
                    (*(longlong **)param_1[2],param_2,&local_1d0,&local_168);
  if (local_158 != 0.0) {
    plVar7 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar7 = local_138;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_1d0 < 0.0) {
    dVar4 = sqrt(local_1d0);
  }
  else {
    dVar4 = SQRT(local_1d0);
  }
  lVar8 = param_1[3];
  dVar4 = dVar4 - *(double *)(lVar8 + 0x18);
  if (param_4 != '\0') {
    dVar2 = *(double *)(lVar8 + 0x20);
    uVar11 = SUB84(dVar2,0);
    uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar4 < dVar2) {
      iVar9 = 2;
      local_1e9 = param_3;
      do {
        local_1e8 = *(undefined4 *)param_2;
        uStack_1e4 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_1e0 = *(undefined4 *)(param_2 + 1);
        uStack_1dc = *(undefined4 *)((longlong)param_2 + 0xc);
        local_1d8 = param_2[2];
        FUN_146bd7ec2(&local_168,*(undefined8 *)param_1[1],uVar5,&local_1e8);
        dVar13 = param_2[2] - local_e0;
        dVar14 = param_2[1] - local_e8;
        dVar15 = *param_2 - local_f0;
        dVar2 = dVar13 * dVar13 + dVar15 * dVar15 + dVar14 * dVar14;
        if (dVar2 <= 9.99999993922529e-09) goto LAB_14295dc45;
        dVar2 = 1.0 / SQRT(dVar2);
        dVar4 = (*(double *)(param_1[3] + 0x20) - dVar4) * 1.1;
        *param_2 = *param_2 + dVar4 * dVar15 * dVar2;
        param_2[1] = param_2[1] + dVar14 * dVar2 * dVar4;
        param_2[2] = param_2[2] + dVar13 * dVar2 * dVar4;
        local_1b8 = param_2[2];
        local_1c8 = *param_2;
        uStack_1c0 = *(undefined4 *)(param_2 + 1);
        uStack_1bc = *(undefined4 *)((longlong)param_2 + 0xc);
        dVar4 = (double)FUN_146bed438((longlong *)param_1[2],
                                      *(undefined4 *)(*(longlong *)param_1[2] + 0xcc),&local_1c8);
        if (0.5 < dVar4 * (double)param_1[5]) goto LAB_14295dc45;
        local_1c8 = 1.79769313486232e+308;
        local_1b8 = 0.0;
        local_1a8 = (longlong *)0x0;
        local_178 = 0;
        uVar5 = (**(code **)(**(longlong **)param_1[2] + 0x20))
                          (*(longlong **)param_1[2],param_2,&local_1d0,&local_1c8);
        if (local_1b8 != 0.0) {
          plVar7 = local_1a8;
          if (local_1a8 == (longlong *)0x0) {
            plVar7 = local_198;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        if (local_1d0 < 0.0) {
          dVar4 = sqrt(local_1d0);
        }
        else {
          dVar4 = SQRT(local_1d0);
        }
        lVar8 = param_1[3];
        dVar4 = dVar4 - *(double *)(lVar8 + 0x18);
        dVar2 = *(double *)(lVar8 + 0x20);
        uVar11 = SUB84(dVar2,0);
        uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
        param_3 = local_1e9;
      } while ((dVar4 < *(double *)(lVar8 + 0x20)) &&
              (bVar10 = iVar9 != 0, iVar9 = iVar9 + -1, bVar10 && dVar4 < dVar2));
    }
    if (dVar4 < (double)CONCAT44(uVar12,uVar11)) goto LAB_14295dc45;
  }
  if ((param_3 != '\0') && (0 < (longlong)(int)plVar3[1])) {
    dVar2 = *(double *)(lVar8 + 8) * *(double *)(lVar8 + 8);
    pdVar6 = (double *)(*plVar3 + 0x10);
    lVar8 = 0;
    do {
      dVar13 = *(double *)(plVar3[2] + lVar8 * 8);
      dVar13 = dVar13 * dVar13;
      dVar14 = dVar2;
      if (dVar2 <= dVar13) {
        dVar14 = dVar13;
      }
      if ((param_2[2] - *pdVar6) * (param_2[2] - *pdVar6) +
          (param_2[1] - pdVar6[-1]) * (param_2[1] - pdVar6[-1]) +
          (*param_2 - pdVar6[-2]) * (*param_2 - pdVar6[-2]) < dVar14) goto LAB_14295dc45;
      lVar8 = lVar8 + 1;
      pdVar6 = pdVar6 + 3;
    } while ((int)plVar3[1] != lVar8);
  }
  *(undefined1 *)param_1[4] = 1;
  iVar9 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar9 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
    FUN_1403e3958(plVar3,iVar9);
  }
  lVar8 = *plVar3;
  *(double *)(lVar8 + 0x10 + (longlong)iVar9 * 0x18) = param_2[2];
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  uVar11 = *(undefined4 *)(param_2 + 1);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar1 = (undefined4 *)(lVar8 + (longlong)iVar9 * 0x18);
  *puVar1 = *(undefined4 *)param_2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  iVar9 = (int)plVar3[3];
  *(uint *)(plVar3 + 3) = iVar9 + 1U;
  if (*(uint *)((longlong)plVar3 + 0x1c) < iVar9 + 1U) {
    FUN_144941252(plVar3 + 2,iVar9);
  }
  *(double *)(plVar3[2] + (longlong)iVar9 * 8) = dVar4;
LAB_14295dc45:
  if ((local_d0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14295dcfc FUN_14295dcfc body=180 status=ok
// SIG undefined FUN_14295dcfc(void)

void FUN_14295dcfc(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f36200;
  FUN_141082b5c(param_1 + 0x17,0);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x14,0);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x11,0);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 0xe,0);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x00014295dda5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14295ddb0 FUN_14295ddb0 body=508 status=ok
// SIG undefined FUN_14295ddb0(void)

double FUN_14295ddb0(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar14 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  if ((int)uVar14 < 1) {
    dVar19 = 0.0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x10);
    dVar19 = 0.0;
    uVar17 = 0;
    do {
      uVar16 = (ulonglong)(uVar17 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar17 >> 9) * 8) +
                             uVar16 * 2) - 1U) < 0xfffe) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar17 >> 9) * 8);
        uVar4 = *(uint *)(lVar7 + uVar16 * 0xc);
        uVar5 = *(uint *)(lVar7 + 4 + uVar16 * 0xc);
        lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
        uVar15 = (ulonglong)uVar4 & 0x1ff;
        lVar9 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
        uVar18 = (ulonglong)uVar5 & 0x1ff;
        uVar4 = *(uint *)(lVar7 + 8 + uVar16 * 0xc);
        lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
        uVar16 = (ulonglong)uVar4 & 0x1ff;
        dVar1 = param_2[2];
        dVar11 = *(double *)(lVar9 + 0x10 + uVar18 * 0x18) - dVar1;
        dVar2 = *param_2;
        dVar3 = param_2[1];
        dVar21 = *(double *)(lVar9 + 8 + uVar18 * 0x18) - dVar3;
        dVar10 = *(double *)(lVar9 + uVar18 * 0x18) - dVar2;
        dVar13 = *(double *)(lVar7 + 0x10 + uVar16 * 0x18) - dVar1;
        dVar20 = *(double *)(lVar7 + 8 + uVar16 * 0x18) - dVar3;
        dVar12 = *(double *)(lVar7 + uVar16 * 0x18) - dVar2;
        dVar19 = dVar19 + (*(double *)(lVar8 + uVar15 * 0x18) - dVar2) *
                          (dVar20 * dVar11 - dVar13 * dVar21) +
                          (*(double *)(lVar8 + 8 + uVar15 * 0x18) - dVar3) *
                          (dVar13 * dVar10 - dVar11 * dVar12) +
                          (*(double *)(lVar8 + 0x10 + uVar15 * 0x18) - dVar1) *
                          (dVar12 * dVar21 - dVar10 * dVar20);
      }
      uVar17 = uVar17 + 1;
    } while (uVar14 != uVar17);
    dVar19 = dVar19 * 0.16666666666666666;
  }
  return dVar19;
}



// FUNCTION 14295dfac FUN_14295dfac body=442 status=ok
// SIG undefined FUN_14295dfac(void)

double FUN_14295dfac(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  double *local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(*param_1 + 0x228) < 1) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = 0.0;
    iVar5 = 0;
    do {
      local_e8 = &local_d8;
      FUN_146bf2392(param_1,iVar5,&local_a8,&local_c0);
      dVar1 = param_2[2];
      dVar2 = *param_2;
      dVar3 = param_2[1];
      dVar4 = dVar4 + (local_a8 - dVar2) *
                      ((local_d0 - dVar3) * (local_b0 - dVar1) -
                      (local_c8 - dVar1) * (local_b8 - dVar3)) +
                      (local_a0 - dVar3) *
                      ((local_c8 - dVar1) * (local_c0 - dVar2) -
                      (local_b0 - dVar1) * (local_d8 - dVar2)) +
                      (local_98 - dVar1) *
                      ((local_d8 - dVar2) * (local_b8 - dVar3) -
                      (local_c0 - dVar2) * (local_d0 - dVar3));
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(*param_1 + 0x228));
    dVar4 = dVar4 * 0.16666666666666666;
  }
  if ((local_90 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return dVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295e168 FUN_14295e168 body=4633 status=ok
// SIG undefined FUN_14295e168(void)

/* WARNING: Type propagation algorithm not settling */

longlong *
FUN_14295e168(longlong *param_1,double param_2,double *param_3,double param_4,char param_5,
             double param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  double *pdVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  longlong lVar26;
  uint uVar27;
  longlong **pplVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong lVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_348 [44];
  undefined4 local_31c;
  double local_318;
  longlong *local_310;
  double *local_308;
  longlong *local_300;
  uint local_2f8;
  int local_2f4;
  longlong local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  double local_2d0;
  longlong *local_2c8;
  undefined4 local_2c0;
  undefined1 *local_2b8;
  longlong **local_2b0;
  undefined1 *local_2a8;
  longlong **local_2a0;
  longlong *local_298;
  double dStack_290;
  longlong *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_260;
  longlong local_258;
  undefined8 uStack_250;
  undefined1 *local_248;
  longlong **local_240;
  undefined1 *local_238;
  longlong **local_230;
  double local_228;
  double local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  int local_1f8;
  longlong *local_1f0;
  double dStack_1e8;
  longlong *local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 uStack_1c8;
  longlong *local_1c0;
  double local_1b8;
  longlong *local_1b0;
  undefined4 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178 [2];
  longlong *local_168;
  double dStack_160;
  longlong *plStack_158;
  double local_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128 [2];
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  plVar31 = param_1 + 8;
  uVar21 = 0;
  memset(param_1,0,0x81);
  FUN_146be4e92(plVar31,*(int *)((longlong)param_2 + 0x20) * 0x200 +
                        *(int *)((longlong)param_2 + 0x24),1);
  local_178[0] = 0;
  local_178[1] = 0;
  FUN_1403ed7b2(local_178,(int)param_1[9],1);
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  FUN_1403ed7b2(local_118,
                *(int *)((longlong)param_2 + 0x20) * 0x200 + *(int *)((longlong)param_2 + 0x24),1);
  FUN_1403ed7b2(local_118 + 2,
                *(int *)((longlong)param_2 + 0x20) * 0x200 + *(int *)((longlong)param_2 + 0x24),1);
  uVar9 = *(int *)((longlong)param_2 + 0x20) * 0x200 + *(int *)((longlong)param_2 + 0x24);
  if ((uVar9 != 0) &&
     (0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_2 + 0x28) - 1U))) {
    uVar21 = 1;
    uVar20 = 1;
    if (1 < (int)uVar9) {
      uVar21 = (ulonglong)uVar9;
    }
    do {
      uVar15 = uVar20;
      if ((uint)uVar21 == uVar15) goto LAB_14295e2d8;
      uVar20 = uVar15 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_2 + 0x28))[uVar15 >> 9]
                                         + (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
    uVar21 = (ulonglong)uVar15;
  }
LAB_14295e2d8:
  if ((uint)uVar21 != uVar9) {
    do {
      uVar20 = (uint)uVar21;
      if ((-1 < (int)uVar20) &&
         ((int)uVar20 <
          *(int *)((longlong)param_2 + 0x20) * 0x200 + *(int *)((longlong)param_2 + 0x24))) {
        uVar11 = (ulonglong)(uVar20 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)((longlong)param_2 + 0x28) + (uVar21 >> 9) * 8) +
                               uVar11 * 2) - 2U) < 0xfffd) {
          lVar22 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + (uVar21 >> 9) * 8);
          dVar36 = (param_3[2] * *(double *)(lVar22 + 0x10 + uVar11 * 0x18) +
                   *param_3 * *(double *)(lVar22 + uVar11 * 0x18) +
                   *(double *)(lVar22 + 8 + uVar11 * 0x18) * param_3[1]) - param_3[3];
          *(double *)(*plVar31 + uVar21 * 8) = dVar36;
          lVar22 = local_118[0];
          if ((dVar36 < -param_4) || (lVar22 = local_118[2], param_4 < dVar36)) {
            *(undefined1 *)(lVar22 + uVar21) = 1;
          }
        }
      }
      uVar15 = uVar20 + 1;
      if ((int)(uVar20 + 1) < (int)uVar9) {
        uVar15 = uVar9;
      }
      do {
        if (uVar15 - 1 == (int)uVar21) {
          uVar21 = (ulonglong)uVar15;
          break;
        }
        uVar20 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)param_2 + 0x28) +
                                             (ulonglong)(uVar20 >> 9) * 8) +
                                           (ulonglong)(uVar20 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar21 != uVar9);
  }
  uVar20 = *(int *)((longlong)param_2 + 0x1d0) * 0x200 + *(int *)((longlong)param_2 + 0x1d4);
  uVar9 = 0;
  if ((uVar20 != 0) &&
     (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)param_2 + 0x1d8) - 1U))) {
    uVar15 = 1;
    uVar14 = 1;
    if (1 < (int)uVar20) {
      uVar15 = uVar20;
    }
    do {
      uVar9 = uVar15;
      if (uVar15 == uVar14) break;
      uVar18 = uVar14 >> 9;
      uVar27 = uVar14 & 0x1ff;
      uVar9 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)param_2 + 0x1d8))[uVar18] +
                                         (ulonglong)uVar27 * 2) - 1U));
  }
  local_2e8 = param_1 + 6;
  local_318 = param_2;
  local_310 = param_1;
  local_308 = param_3;
  if (uVar9 != uVar20) {
    dVar36 = -param_4;
    do {
      uVar21 = *(ulonglong *)
                (*(longlong *)
                  (*(longlong *)((longlong)local_318 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
                (ulonglong)((uVar9 & 0x1ff) << 4));
      dVar2 = *(double *)(*plVar31 + (longlong)(int)uVar21 * 8);
      dVar3 = *(double *)(*plVar31 + ((longlong)uVar21 >> 0x20) * 8);
      dVar37 = dVar2;
      uVar34 = SUB84(dVar3,0);
      uVar35 = (int)((ulonglong)dVar3 >> 0x20);
      if (dVar2 <= dVar3) {
        dVar37 = dVar3;
        uVar34 = SUB84(dVar2,0);
        uVar35 = (int)((ulonglong)dVar2 >> 0x20);
      }
      if ((param_4 < dVar37) ||
         ((double)CONCAT44(uVar35,uVar34) <= dVar36 && dVar36 != (double)CONCAT44(uVar35,uVar34))) {
        if ((dVar36 < (double)CONCAT44(uVar35,uVar34) || dVar36 == (double)CONCAT44(uVar35,uVar34))
           || (dVar37 <= param_4)) {
          uVar11 = (ulonglong)
                   (dVar36 < (double)CONCAT44(uVar35,uVar34) ||
                   dVar36 == (double)CONCAT44(uVar35,uVar34));
          *(undefined1 *)(local_118[uVar11 * 2] + (longlong)(int)uVar21) = 1;
          *(undefined1 *)(local_118[uVar11 * 2] + ((longlong)uVar21 >> 0x20)) = 1;
        }
        else {
          iVar23 = (int)local_310[7];
          *(uint *)(local_310 + 7) = iVar23 + 1U;
          if (*(uint *)((longlong)local_310 + 0x3c) < iVar23 + 1U) {
            FUN_1446f48e2(local_2e8,iVar23);
          }
          *(uint *)(param_1[6] + (longlong)iVar23 * 4) = uVar9;
          dVar2 = dVar2 / (dVar2 - dVar3);
          lVar22 = *(longlong *)(*(longlong *)((longlong)local_318 + 0x10) + (uVar21 >> 0x29) * 8);
          uVar11 = uVar21 >> 0x20 & 0x1ff;
          lVar17 = *(longlong *)
                    (*(longlong *)((longlong)local_318 + 0x10) + (uVar21 >> 9 & 0x7fffff) * 8);
          uVar21 = uVar21 & 0x1ff;
          dVar7 = 1.0 - dVar2;
          dVar3 = *(double *)(lVar22 + 0x10 + uVar11 * 0x18);
          dVar37 = *(double *)(lVar17 + 0x10 + uVar21 * 0x18);
          dVar38 = *(double *)(lVar22 + 8 + uVar11 * 0x18);
          dVar4 = *(double *)(lVar17 + 8 + uVar21 * 0x18);
          dVar5 = *(double *)(lVar22 + uVar11 * 0x18);
          dVar6 = *(double *)(lVar17 + uVar21 * 0x18);
          iVar23 = (int)param_1[1];
          lVar22 = (longlong)iVar23;
          *(uint *)(param_1 + 1) = iVar23 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar23 + 1U) {
            FUN_1403e3958(param_1,iVar23);
          }
          lVar17 = *param_1;
          *(double *)(lVar17 + lVar22 * 0x18) = dVar7 * dVar6 + dVar2 * dVar5;
          *(double *)(lVar17 + 8 + lVar22 * 0x18) = dVar4 * dVar7 + dVar38 * dVar2;
          *(double *)(lVar17 + 0x10 + lVar22 * 0x18) = dVar37 * dVar7 + dVar3 * dVar2;
        }
      }
      uVar15 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar20) {
        uVar15 = uVar20;
      }
      do {
        uVar14 = uVar15;
        if (uVar15 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar14 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)local_318 + 0x1d8) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar14;
    } while (uVar9 != uVar20);
  }
  if (param_5 == '\0') {
    uVar20 = *(int *)((longlong)local_318 + 0x140) * 0x200 + *(int *)((longlong)local_318 + 0x144);
    uVar9 = 0;
    if ((uVar20 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)local_318 + 0x148) - 1U))
       ) {
      uVar15 = 1;
      uVar14 = 1;
      if (1 < (int)uVar20) {
        uVar15 = uVar20;
      }
      do {
        uVar9 = uVar15;
        if (uVar15 == uVar14) break;
        uVar18 = uVar14 >> 9;
        uVar27 = uVar14 & 0x1ff;
        uVar9 = uVar14;
        uVar14 = uVar14 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)local_318 + 0x148))[uVar18]
                                           + (ulonglong)uVar27 * 2) - 1U));
    }
    if (uVar9 != uVar20) {
      dVar36 = -param_4;
      do {
        lVar22 = *(longlong *)
                  (*(longlong *)((longlong)local_318 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
        uVar21 = (ulonglong)(uVar9 & 0x1ff);
        lVar33 = (longlong)*(int *)(lVar22 + uVar21 * 0xc);
        lVar17 = *plVar31;
        dVar2 = *(double *)(lVar17 + lVar33 * 8);
        if ((dVar36 <= dVar2) && (dVar2 <= param_4)) {
          lVar26 = (longlong)*(int *)(lVar22 + uVar21 * 0xc + 4);
          dVar2 = *(double *)(lVar17 + lVar26 * 8);
          if ((dVar36 <= dVar2) && (dVar2 <= param_4)) {
            lVar22 = (longlong)*(int *)(lVar22 + 8 + uVar21 * 0xc);
            dVar2 = *(double *)(lVar17 + lVar22 * 8);
            if ((dVar36 <= dVar2) && (dVar2 <= param_4)) {
              FUN_146c13dec(local_318,&local_228,uVar9);
              uVar21 = (ulonglong)
                       (0.0 < (double)CONCAT44(uStack_214,local_218) * local_308[2] +
                              (double)CONCAT71(local_228._1_7_,local_228._0_1_) * *local_308 +
                              local_220 * local_308[1]);
              *(undefined1 *)(local_118[uVar21 * 2] + lVar33) = 1;
              *(undefined1 *)(local_118[uVar21 * 2] + lVar26) = 1;
              *(undefined1 *)(local_118[uVar21 * 2] + lVar22) = 1;
            }
          }
        }
        uVar15 = uVar9 + 1;
        if ((int)(uVar9 + 1) < (int)uVar20) {
          uVar15 = uVar20;
        }
        do {
          uVar14 = uVar15;
          if (uVar15 - 1 == uVar9) break;
          uVar9 = uVar9 + 1;
          uVar14 = uVar9;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)((longlong)local_318 + 0x148) +
                                               (ulonglong)(uVar9 >> 9) * 8) +
                                             (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
        uVar9 = uVar14;
      } while (uVar9 != uVar20);
    }
  }
  if ((longlong)*(int *)((longlong)local_318 + 0x228) != 0) {
    piVar12 = *(int **)((longlong)local_318 + 0x220);
    piVar1 = piVar12 + (longlong)*(int *)((longlong)local_318 + 0x228) * 3;
    uVar34 = 0;
    uVar35 = 0;
    dVar36 = 0.0;
    do {
      *(undefined1 *)(local_178[0] + *piVar12) = 1;
      *(undefined1 *)(local_178[0] + piVar12[1]) = 1;
      *(undefined1 *)(local_178[0] + piVar12[2]) = 1;
      lVar22 = *plVar31;
      dVar2 = *(double *)(lVar22 + (longlong)piVar12[2] * 8);
      dVar3 = *(double *)(lVar22 + (longlong)piVar12[1] * 8);
      dVar37 = *(double *)(lVar22 + (longlong)*piVar12 * 8);
      dVar38 = dVar37;
      if (dVar3 <= dVar37) {
        dVar38 = dVar3;
      }
      if (dVar2 <= dVar38) {
        dVar38 = dVar2;
      }
      if (dVar38 <= 0.0) {
        if (dVar37 <= dVar3) {
          dVar37 = dVar3;
        }
        if (dVar37 <= dVar2) {
          dVar37 = dVar2;
        }
        if (0.0 <= dVar37) {
          if (dVar36 <= dVar38) {
            dVar38 = dVar36;
          }
          dVar36 = dVar38;
          if (dVar37 <= (double)CONCAT44(uVar35,uVar34)) {
            dVar37 = (double)CONCAT44(uVar35,uVar34);
          }
          uVar34 = SUB84(dVar37,0);
          uVar35 = (undefined4)((ulonglong)dVar37 >> 0x20);
        }
      }
      piVar12 = piVar12 + 3;
    } while (piVar12 != piVar1);
    uVar20 = *(int *)((longlong)local_318 + 0x20) * 0x200 + *(int *)((longlong)local_318 + 0x24);
    uVar9 = 0;
    if ((uVar20 != 0) &&
       (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)((longlong)local_318 + 0x28) - 1U)))
    {
      uVar15 = 1;
      uVar14 = 1;
      if (1 < (int)uVar20) {
        uVar15 = uVar20;
      }
      do {
        uVar18 = uVar14;
        uVar9 = uVar15;
        if (uVar15 == uVar18) break;
        uVar14 = uVar18 + 1;
        uVar9 = uVar18;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)((longlong)local_318 + 0x28))
                                            [uVar18 >> 9] + (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
    }
joined_r0x00014295e80c:
    uVar15 = uVar9;
    if (uVar15 != uVar20) {
      lVar22 = (longlong)(int)uVar15;
      if ((*(char *)(local_178[0] + lVar22) == '\0') &&
         ((dVar2 = *(double *)(*plVar31 + lVar22 * 8), dVar2 < dVar36 ||
          ((double)CONCAT44(uVar35,uVar34) < dVar2)))) {
        *(undefined1 *)(local_118[0] + lVar22) = 0;
        *(undefined1 *)(local_118[2] + lVar22) = 0;
      }
      uVar14 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar20) {
        uVar14 = uVar20;
      }
      do {
        uVar9 = uVar14;
        if (uVar14 - 1 == uVar15) break;
        uVar15 = uVar15 + 1;
        uVar9 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)((longlong)local_318 + 0x28) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      goto joined_r0x00014295e80c;
    }
  }
  local_300 = local_310 + 2;
  plVar31 = local_310 + 10;
  uVar13 = CONCAT71((int7)((ulonglong)local_300 >> 8),1);
  local_308 = (double *)local_118;
  lVar22 = 0;
  dVar36 = local_318;
  plVar32 = local_310;
  do {
    plStack_158 = local_118;
    local_2f8 = (uint)uVar13;
    local_228._0_1_ = 0;
    local_220 = 0.0;
    local_218 = 0xffffffff;
    local_210 = 0xffefffffffffffff;
    local_208 = 0xffefffffffffffff;
    local_200 = 0;
    local_1e0 = DAT_14c8464f0;
    local_1f0 = DAT_14c8464e0;
    dStack_1e8 = DAT_14c8464e8;
    uStack_1c8 = DAT_14c8463b0;
    uStack_1d8 = (undefined4)DAT_14c8463a0;
    uStack_1d4 = DAT_14c8463a0._4_4_;
    uStack_1d0 = (undefined4)DAT_14c8463a8;
    uStack_1cc = DAT_14c8463a8._4_4_;
    local_1a0 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_150 = (double)CONCAT44(local_150._4_4_,(int)lVar22);
    local_230 = &local_168;
    local_238 = &LAB_14296bdc0;
    local_240 = &local_298;
    local_248 = &LAB_14296bdee;
    pdVar16 = &local_228;
    local_298 = plVar32;
    dStack_290 = dVar36;
    local_168 = plVar32;
    dStack_160 = dVar36;
    cVar8 = FUN_146ba039e(pdVar16,*(int *)((longlong)dVar36 + 0x20) * 0x200 +
                                  *(int *)((longlong)dVar36 + 0x24) + (int)plVar32[1],&local_248,
                          &local_238);
    iVar23 = local_1f8;
    if (cVar8 == '\0') {
      if (0.0 < param_6) {
        uVar9 = *(int *)((longlong)dVar36 + 0x20) * 0x200 + *(int *)((longlong)dVar36 + 0x24);
        local_258 = 0;
        uStack_250 = 0;
        local_260 = dVar36;
        if (1 < local_1f8) {
          pdVar16 = &local_260;
          FUN_146c37e28(pdVar16,1,1);
        }
        local_2f4 = iVar23;
        local_2f0 = lVar22;
        local_2e0 = plVar31;
        if (iVar23 == 2) {
          uVar34 = SUB84(local_1c0,0);
          uVar35 = (undefined4)((ulonglong)local_1c0 >> 0x20);
          uVar41 = SUB84(local_1b8,0);
          uVar42 = (undefined4)((ulonglong)local_1b8 >> 0x20);
          uVar39 = SUB84(local_1b0,0);
          uVar40 = (undefined4)((ulonglong)local_1b0 >> 0x20);
          local_168 = local_1c0;
          dStack_160 = local_1b8;
          plStack_158 = local_1b0;
          iVar10 = 1;
          local_31c = (undefined4)CONCAT71((int7)((ulonglong)pdVar16 >> 8),1);
        }
        else {
          if (iVar23 == 1) {
            uStack_280 = CONCAT44(uStack_1d4,uStack_1d8);
            local_278 = CONCAT44(uStack_1cc,uStack_1d0);
            uStack_270 = uStack_1c8;
            local_288 = local_1e0;
            local_298 = local_1f0;
            dStack_290 = dStack_1e8;
            puVar24 = &uStack_280;
            FUN_146bb5db8(puVar24,&local_168,&local_150);
            iVar10 = 2;
          }
          else {
            local_31c = 0;
            uVar39 = 0x4590331d;
            uVar40 = 0x3fe279a7;
            iVar10 = 0;
            uVar34 = uVar39;
            uVar35 = uVar40;
            uVar41 = uVar39;
            uVar42 = uVar40;
            if (iVar23 != 0) goto LAB_14295eb89;
            local_168 = (longlong *)&DAT_3ff0000000000000;
            puVar24 = (undefined8 *)0x0;
            local_150 = 0.0;
            dStack_160 = 0.0;
            plStack_158 = (longlong *)0x0;
            local_148 = 1.0;
            local_130 = 0.0;
            local_140 = 0.0;
            dStack_138 = 0.0;
            local_128[0] = 1.0;
            iVar10 = 3;
          }
          local_31c = (undefined4)CONCAT71((int7)((ulonglong)puVar24 >> 8),1);
          uVar39 = 0x4590331d;
          uVar40 = 0x3fe279a7;
          uVar34 = 0x4590331d;
          uVar35 = 0x3fe279a7;
          uVar41 = 0x4590331d;
          uVar42 = 0x3fe279a7;
        }
LAB_14295eb89:
        if (0 < (int)uVar9) {
          plVar31 = local_300 + local_2f0 * 2;
          uVar21 = 0;
          do {
            if ((longlong)uVar21 <
                (longlong)
                (*(int *)((longlong)dVar36 + 0x20) * 0x200 + *(int *)((longlong)dVar36 + 0x24))) {
              uVar30 = uVar21 >> 9 & 0x7fffff;
              uVar11 = (ulonglong)((uint)uVar21 & 0x1ff);
              if (((ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)((longlong)dVar36 + 0x28) + uVar30 * 8) +
                                      uVar11 * 2) - 1U) < 0xfffe) &&
                 (*(char *)((longlong)*local_308 + uVar21) == '\x01')) {
                if (local_2f4 < 2) {
                  if ((char)local_31c != '\0') {
                    lVar22 = 0;
                    do {
                      lVar17 = *(longlong *)(*(longlong *)((longlong)dVar36 + 0x10) + uVar30 * 8);
                      dVar36 = *(double *)(lVar17 + uVar11 * 0x18);
                      dVar2 = *(double *)(lVar17 + 8 + uVar11 * 0x18);
                      dVar3 = *(double *)(lVar17 + 0x10 + uVar11 * 0x18);
                      dVar37 = *(double *)((longlong)&plStack_158 + lVar22);
                      dVar38 = *(double *)((longlong)&dStack_160 + lVar22);
                      dVar4 = *(double *)((longlong)&local_168 + lVar22);
                      iVar23 = (int)plVar31[1];
                      lVar17 = (longlong)iVar23;
                      *(uint *)(plVar31 + 1) = iVar23 + 1U;
                      if (*(uint *)((longlong)plVar31 + 0xc) < iVar23 + 1U) {
                        FUN_1403e3958(plVar31,iVar23);
                      }
                      lVar33 = *plVar31;
                      *(double *)(lVar33 + lVar17 * 0x18) = dVar36 - dVar4 * param_6;
                      *(double *)(lVar33 + 8 + lVar17 * 0x18) = dVar2 - dVar38 * param_6;
                      *(double *)(lVar33 + 0x10 + lVar17 * 0x18) = dVar3 - dVar37 * param_6;
                      lVar22 = lVar22 + 0x18;
                      dVar36 = local_318;
                    } while ((ulonglong)(iVar10 + (uint)(iVar10 == 0)) * 0x18 != lVar22);
                  }
                }
                else {
                  dVar2 = *(double *)(local_258 + uVar21 * 0x18);
                  dVar3 = *(double *)(local_258 + 8 + uVar21 * 0x18);
                  dVar37 = *(double *)(local_258 + 0x10 + uVar21 * 0x18);
                  uVar43 = uVar39;
                  uVar44 = uVar40;
                  uVar45 = uVar34;
                  uVar46 = uVar35;
                  uVar47 = uVar41;
                  uVar48 = uVar42;
                  if ((DAT_14c8464e8 != dVar3 || (double)DAT_14c8464e0 != dVar2) ||
                      dVar37 != (double)DAT_14c8464f0) {
                    uVar46 = (undefined4)((ulonglong)dVar2 >> 0x20);
                    uVar47 = SUB84(dVar3,0);
                    uVar48 = (undefined4)((ulonglong)dVar3 >> 0x20);
                    uVar43 = SUB84(dVar37,0);
                    uVar44 = (undefined4)((ulonglong)dVar37 >> 0x20);
                    uVar45 = SUB84(dVar2,0);
                  }
                  lVar22 = *(longlong *)(*(longlong *)((longlong)dVar36 + 0x10) + uVar30 * 8);
                  dVar36 = *(double *)(lVar22 + uVar11 * 0x18);
                  dVar2 = *(double *)(lVar22 + 8 + uVar11 * 0x18);
                  dVar3 = *(double *)(lVar22 + 0x10 + uVar11 * 0x18);
                  iVar23 = (int)plVar31[1];
                  lVar22 = (longlong)iVar23;
                  *(uint *)(plVar31 + 1) = iVar23 + 1U;
                  if (*(uint *)((longlong)plVar31 + 0xc) < iVar23 + 1U) {
                    FUN_1403e3958(plVar31,iVar23);
                  }
                  lVar17 = *plVar31;
                  *(double *)(lVar17 + lVar22 * 0x18) =
                       dVar36 - (double)CONCAT44(uVar46,uVar45) * param_6;
                  *(double *)(lVar17 + 8 + lVar22 * 0x18) =
                       dVar2 - (double)CONCAT44(uVar48,uVar47) * param_6;
                  *(double *)(lVar17 + 0x10 + lVar22 * 0x18) =
                       dVar3 - (double)CONCAT44(uVar44,uVar43) * param_6;
                  dVar36 = local_318;
                }
              }
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar9);
        }
        lVar22 = local_2f0;
        plVar32 = local_310;
        local_298 = local_310;
        local_2c8 = local_118;
        local_2c0 = (undefined4)local_2f0;
        uStack_280 = CONCAT44(uStack_280._4_4_,local_2c0);
        local_2a0 = &local_298;
        local_2a8 = &LAB_14296be4a;
        local_2d8 = local_310;
        local_2b0 = &local_2d8;
        local_2b8 = &LAB_14296be78;
        local_2d0 = dVar36;
        dStack_290 = dVar36;
        local_288 = local_2c8;
        cVar8 = FUN_146ba039e(&local_228,
                              *(int *)((longlong)dVar36 + 0x20) * 0x200 +
                              *(int *)((longlong)dVar36 + 0x24) + (int)local_310[1] +
                              (int)local_300[local_2f0 * 2 + 1],&local_2b8,&local_2a8);
        if (local_258 != 0) {
          FUN_1400020a8();
        }
        plVar31 = local_2e0;
        if (cVar8 != '\0') goto LAB_14295eeb1;
      }
      *(undefined4 *)(plVar32 + 1) = 0;
      if (*(int *)((longlong)plVar32 + 0xc) != 0) {
        FUN_1447a8aa0(plVar32,0);
      }
      *(undefined4 *)(plVar32 + 7) = 0;
      if (*(int *)((longlong)plVar32 + 0x3c) != 0) {
        FUN_14481578e(local_2e8,0);
      }
      *(undefined1 *)(plVar32 + 0x10) = 0;
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14295f17a;
    }
LAB_14295eeb1:
    plVar25 = plVar31 + lVar22 * 2;
    lVar17 = plVar31[lVar22 * 2];
    if (plVar25 == &local_198) {
      iVar23 = (int)plVar25[1];
    }
    else {
      if (lVar17 != 0) {
        FUN_1400020a8();
      }
      lVar17 = local_198;
      *plVar25 = local_198;
      local_198 = 0;
      iVar23 = (int)uStack_190;
      *(int *)(plVar25 + 1) = (int)uStack_190;
      *(undefined4 *)((longlong)plVar25 + 0xc) = uStack_190._4_4_;
      uStack_190 = 0;
    }
    plVar32[lVar22 + 0xe] = 0;
    if (iVar23 == 0) {
      dVar2 = 0.0;
    }
    else {
      iVar10 = *(int *)((longlong)dVar36 + 0x20) * 0x200 + *(int *)((longlong)dVar36 + 0x24);
      iVar19 = (int)plVar32[1] + iVar10;
      lVar33 = lVar17 + (longlong)iVar23 * 0xc;
      dVar2 = 0.0;
      do {
        lVar26 = *(longlong *)((longlong)dVar36 + 0x10);
        pplVar28 = &local_168;
        lVar29 = 0;
        do {
          uVar9 = *(uint *)(lVar17 + lVar29 * 4);
          if ((int)uVar9 < iVar10) {
            puVar24 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0x1ff) * 0x18) +
                      *(longlong *)(lVar26 + (ulonglong)(uVar9 >> 9) * 8));
          }
          else {
            plVar25 = plVar32;
            iVar23 = iVar10;
            if (iVar19 <= (int)uVar9) {
              plVar25 = local_300 + lVar22 * 2;
              iVar23 = iVar19;
            }
            puVar24 = (undefined8 *)((longlong)(int)(uVar9 - iVar23) * 0x18 + *plVar25);
          }
          pplVar28[2] = (longlong *)puVar24[2];
          plVar25 = (longlong *)puVar24[1];
          *pplVar28 = (longlong *)*puVar24;
          pplVar28[1] = plVar25;
          lVar29 = lVar29 + 1;
          pplVar28 = pplVar28 + 3;
        } while (lVar29 != 3);
        dVar3 = *(double *)((longlong)dVar36 + 0x280);
        dVar37 = *(double *)((longlong)dVar36 + 0x270);
        dVar38 = *(double *)((longlong)dVar36 + 0x278);
        dVar2 = dVar2 + ((double)local_168 - dVar37) *
                        ((local_130 - dVar38) * (local_140 - dVar3) -
                        (local_128[0] - dVar3) * (local_148 - dVar38)) +
                        (dStack_160 - dVar38) *
                        ((local_128[0] - dVar3) * (local_150 - dVar37) -
                        (local_140 - dVar3) * (dStack_138 - dVar37)) +
                        ((double)plStack_158 - dVar3) *
                        ((dStack_138 - dVar37) * (local_148 - dVar38) -
                        (local_150 - dVar37) * (local_130 - dVar38));
        plVar32[lVar22 + 0xe] = (longlong)dVar2;
        lVar17 = lVar17 + 0xc;
      } while (lVar17 != lVar33);
    }
    plVar32[lVar22 + 0xe] = (longlong)(dVar2 * 0.16666666666666666);
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    lVar22 = 1;
    local_308 = (double *)(local_118 + 2);
    uVar13 = 0;
  } while ((local_2f8 & 1) != 0);
  *(undefined1 *)(plVar32 + 0x10) = 1;
LAB_14295f17a:
  lVar22 = 0x20;
  do {
    if (*(longlong *)((longlong)local_128 + lVar22) != 0) {
      FUN_1400020a8();
    }
    lVar22 = lVar22 + -0x10;
  } while (lVar22 != 0);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return plVar32;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14295f382 FUN_14295f382 body=118 status=ok
// SIG undefined FUN_14295f382(void)

void FUN_14295f382(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = 0x60;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x40);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x20;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14295f3f8 FUN_14295f3f8 body=8765 status=ok
// SIG undefined FUN_14295f3f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14295f3f8(uint *param_1,longlong *param_2,int param_3,double *param_4,int *param_5,
                  double param_6,undefined8 param_7,undefined1 *param_8,char param_9,char param_10)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined **ppuVar19;
  longlong lVar20;
  undefined1 *puVar21;
  double *pdVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 **ppuVar26;
  longlong *plVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  undefined4 *puVar35;
  uint *puVar36;
  ulonglong *puVar37;
  bool bVar38;
  ulonglong uVar39;
  uint uVar40;
  longlong lVar41;
  undefined1 *puVar42;
  uint uVar43;
  bool bVar44;
  uint *puVar45;
  longlong *plVar46;
  undefined4 *puVar47;
  ulonglong uVar48;
  bool bVar49;
  ulonglong uVar50;
  double dVar51;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  undefined1 local_390;
  uint local_37c;
  uint *local_378;
  byte local_36d;
  int local_36c;
  uint *local_368;
  longlong *local_360;
  undefined4 local_358;
  undefined4 local_354;
  uint *local_350;
  ulonglong local_348;
  uint *local_340;
  ulonglong local_338;
  longlong local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  int local_30c;
  longlong local_308;
  ulonglong uStack_300;
  longlong local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  longlong *local_2e8;
  undefined4 local_2e0;
  longlong **local_2d8;
  undefined4 local_2d0;
  longlong local_2c8;
  undefined8 uStack_2c0;
  int local_2ac;
  longlong **local_2a8;
  undefined8 uStack_2a0;
  uint *local_298;
  undefined8 uStack_290;
  longlong *local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong *local_268;
  longlong *local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  ulonglong local_228 [3];
  int local_210 [2];
  uint *local_208;
  double *pdStack_200;
  int *local_1f8;
  undefined8 local_1f0;
  ulonglong *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [8];
  undefined1 *local_1c8;
  int local_1c0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined8 local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  int iStack_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  undefined8 local_148;
  uint **ppuStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined2 local_110;
  undefined1 local_10e;
  longlong *local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  uVar17 = *(ulonglong *)(*param_2 + (longlong)param_3 * 8);
  local_36d = *(byte *)(uVar17 + 0x2b8);
  local_2f8 = *(longlong *)(uVar17 + 0x248);
  *(undefined8 *)(uVar17 + 0x248) = 0;
  local_2f0 = *(int *)(uVar17 + 0x250);
  local_2ec = *(undefined4 *)(uVar17 + 0x254);
  *(undefined8 *)(uVar17 + 0x250) = 0;
  uVar16 = FUN_14001cc68(0x2d0,0x10);
  FUN_146be4f0e(uVar16);
  local_36c = (int)param_2[1];
  *(uint *)(param_2 + 1) = local_36c + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < local_36c + 1U) {
    FUN_1456bd870(param_2,local_36c);
  }
  *(undefined8 *)(*param_2 + (longlong)local_36c * 8) = uVar16;
  local_338 = *(ulonglong *)(*param_2 + (longlong)local_36c * 8);
  local_308 = 0;
  uStack_300 = 0;
  local_30c = *(int *)(uVar17 + 0x20) * 0x200 + *(int *)(uVar17 + 0x24);
  uVar34 = param_1[0xe];
  local_210[0] = param_3;
  local_210[1] = local_36c;
  if ((int)uVar34 < 1) {
    if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
  }
  else {
    uStack_300 = (ulonglong)uVar34;
    lVar20 = 0;
    FUN_1446f48e2(&local_308,0);
    if (0 < (int)param_1[0xe]) {
      do {
        uVar34 = *(uint *)(*(longlong *)(param_1 + 0xc) + lVar20 * 4);
        lVar41 = *(longlong *)(*(longlong *)(uVar17 + 0x1c0) + (ulonglong)(uVar34 >> 9) * 8);
        uVar48 = (ulonglong)((uVar34 & 0x1ff) << 4);
        local_1a8 = (undefined1 *)CONCAT44(0xffffffff,(undefined4)local_1a8);
        plStack_1a0 = (longlong *)0xffffffffffffffff;
        local_198._0_4_ = 0xffffffff;
        local_198._4_4_ = 0xffffffff;
        uStack_190 = 0xffffffff;
        local_188 = (undefined **)CONCAT44(0xffffffff,(uint)local_188);
        uStack_180 = 0xffffffff;
        uStack_17c = 0xffffffff;
        uStack_178 = 0xffffffff;
        iStack_174 = -1;
        dVar51 = *(double *)
                  (*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(lVar41 + uVar48) * 8);
        iVar30 = FUN_146c0bee4(uVar17,uVar34,&local_1a8,
                               dVar51 / (dVar51 - *(double *)
                                                   (*(longlong *)(param_1 + 0x10) +
                                                   (longlong)*(int *)(lVar41 + 4 + uVar48) * 8)));
        *(uint *)(local_308 + lVar20 * 4) = -(uint)(iVar30 != 0) | (uint)local_188;
        lVar20 = lVar20 + 1;
      } while (lVar20 < (int)param_1[0xe]);
    }
  }
  if ((param_9 != '\0') &&
     (uVar34 = *(int *)(uVar17 + 0x140) * 0x200 + *(int *)(uVar17 + 0x144), 0 < (int)uVar34)) {
    uVar48 = 0;
    do {
      uVar13 = (uint)uVar48;
      if ((int)uVar13 < *(int *)(uVar17 + 0x140) * 0x200 + *(int *)(uVar17 + 0x144)) {
        uVar50 = (ulonglong)(uVar13 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(uVar17 + 0x148) + (uVar48 >> 9) * 8) +
                               uVar50 * 2) - 1U) < 0xfffe) {
          lVar20 = *(longlong *)(*(longlong *)(uVar17 + 0x130) + (uVar48 >> 9) * 8);
          iVar30 = *(int *)(lVar20 + uVar50 * 0xc);
          lVar41 = (longlong)iVar30;
          iVar23 = *(int *)(lVar20 + 4 + uVar50 * 0xc);
          iVar24 = *(int *)(lVar20 + 8 + uVar50 * 0xc);
          uVar32 = param_1[0x12];
          if (((int)uVar32 <= iVar30) ||
             (dVar51 = *(double *)(*(longlong *)(param_1 + 0x10) + lVar41 * 8),
             uVar50 = -(ulonglong)(-dVar51 <= dVar51),
             (double)(~uVar50 & (ulonglong)-dVar51 | (ulonglong)dVar51 & uVar50) <= param_6)) {
            if (iVar23 < (int)uVar32) {
              lVar41 = *(longlong *)(param_1 + 0x10);
              dVar51 = *(double *)(lVar41 + (longlong)iVar23 * 8);
              uVar50 = -(ulonglong)(-dVar51 <= dVar51);
              if (param_6 < (double)(~uVar50 & (ulonglong)-dVar51 | (ulonglong)dVar51 & uVar50))
              goto LAB_14295f779;
            }
            if (((int)uVar32 <= iVar24) ||
               (dVar51 = *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar24 * 8),
               uVar50 = -(ulonglong)(-dVar51 <= dVar51),
               (double)(~uVar50 & (ulonglong)-dVar51 | (ulonglong)dVar51 & uVar50) <= param_6)) {
              FUN_146c0b65a(uVar17,uVar48,CONCAT71((int7)((ulonglong)lVar41 >> 8),1),0);
            }
          }
        }
      }
LAB_14295f779:
      uVar48 = (ulonglong)(uVar13 + 1);
    } while (uVar34 != uVar13 + 1);
  }
  uVar48 = local_338;
  local_390 = 1;
  local_398 = 1;
  FUN_146c005f0(local_338,uVar17,1,1);
  local_228[0] = uVar17;
  local_228[1] = uVar48;
  uVar34 = param_1[0x12];
  if (0 < (longlong)(int)uVar34) {
    uVar48 = 0;
    do {
      dVar51 = *(double *)(*(longlong *)(param_1 + 0x10) + uVar48 * 8);
      if ((((param_6 < dVar51) &&
           ((longlong)uVar48 <
            (longlong)(*(int *)(local_228[0] + 0x20) * 0x200 + *(int *)(local_228[0] + 0x24)))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(local_228[0] + 0x28) + (uVar48 >> 9 & 0x7fffff) * 8)
                              + (ulonglong)((uint)uVar48 & 0x1ff) * 2) - 1U) < 0xfffe)) ||
         (((dVar51 < -param_6 &&
           ((longlong)uVar48 <
            (longlong)(*(int *)(local_228[1] + 0x20) * 0x200 + *(int *)(local_228[1] + 0x24)))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(local_228[1] + 0x28) + (uVar48 >> 9 & 0x7fffff) * 8)
                              + (ulonglong)((uint)uVar48 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
        FUN_146c0b0ee(SUB84(dVar51,0),uVar48 & 0xffffffff,0);
      }
      uVar48 = uVar48 + 1;
    } while ((longlong)(int)uVar34 != uVar48);
  }
  local_360 = param_2;
  local_348 = uVar17;
  if (param_9 == '\0') {
    puVar37 = local_228;
    bVar44 = false;
    bVar49 = true;
    do {
      bVar38 = bVar49;
      uVar34 = *(int *)(*puVar37 + 0x140) * 0x200 + *(int *)(*puVar37 + 0x144);
      if (0 < (int)uVar34) {
        uVar17 = 0;
        do {
          uVar48 = *puVar37;
          uVar13 = (uint)uVar17;
          if ((int)uVar13 < *(int *)(uVar48 + 0x140) * 0x200 + *(int *)(uVar48 + 0x144)) {
            uVar50 = (ulonglong)(uVar13 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(uVar48 + 0x148) + (uVar17 >> 9) * 8)
                                   + uVar50 * 2) - 1U) < 0xfffe) {
              lVar20 = *(longlong *)(*(longlong *)(uVar48 + 0x130) + (uVar17 >> 9) * 8);
              iVar30 = *(int *)(lVar20 + uVar50 * 0xc);
              iVar23 = *(int *)(lVar20 + 4 + uVar50 * 0xc);
              iVar24 = *(int *)(lVar20 + 8 + uVar50 * 0xc);
              uVar32 = param_1[0x12];
              if ((((int)uVar32 <= iVar30) ||
                  (dVar51 = *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar30 * 8),
                  uVar50 = -(ulonglong)(-dVar51 <= dVar51),
                  (double)(~uVar50 & (ulonglong)-dVar51 | (ulonglong)dVar51 & uVar50) <= param_6))
                 && ((((int)uVar32 <= iVar23 ||
                      (dVar51 = *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar23 * 8),
                      uVar50 = -(ulonglong)(-dVar51 <= dVar51),
                      (double)(~uVar50 & (ulonglong)-dVar51 | (ulonglong)dVar51 & uVar50) <= param_6
                      )) && ((((int)uVar32 <= iVar24 ||
                              (dVar51 = *(double *)
                                         (*(longlong *)(param_1 + 0x10) + (longlong)iVar24 * 8),
                              uVar50 = -(ulonglong)(-dVar51 <= dVar51),
                              (double)(~uVar50 & (ulonglong)-dVar51 | (ulonglong)dVar51 & uVar50) <=
                              param_6)) &&
                             (FUN_146c13dec(uVar48,&local_1a8,uVar17),
                             bVar44 != 0.0 < (double)CONCAT44(local_198._4_4_,(undefined4)local_198)
                                             * param_4[2] +
                                             (double)local_1a8 * *param_4 +
                                             (double)plStack_1a0 * param_4[1])))))) {
                FUN_146c0b65a(*puVar37,uVar17,1,0);
              }
            }
          }
          uVar17 = (ulonglong)(uVar13 + 1);
        } while (uVar34 != uVar13 + 1);
      }
      bVar44 = true;
      puVar37 = local_228 + 1;
      bVar49 = false;
    } while (bVar38);
  }
  plVar46 = local_360;
  puVar37 = local_228;
  bVar49 = true;
  do {
    bVar44 = bVar49;
    uVar17 = *puVar37;
    uVar34 = *(int *)(uVar17 + 0x20) * 0x200 + *(int *)(uVar17 + 0x24);
    if (0 < (int)uVar34) {
      uVar48 = 0;
      do {
        uVar50 = *puVar37;
        uVar13 = *(int *)(uVar50 + 0x20) * 0x200 + *(int *)(uVar50 + 0x24);
        uVar17 = (ulonglong)uVar13;
        uVar32 = (uint)uVar48;
        if (((int)uVar32 < (int)uVar13) &&
           (uVar17 = *(ulonglong *)(*(longlong *)(uVar50 + 0x28) + (uVar48 >> 9) * 8),
           *(short *)(uVar17 + (ulonglong)(uVar32 & 0x1ff) * 2) == 1)) {
          uVar17 = FUN_146c0b0ee(uVar50,uVar48,0);
        }
        uVar48 = (ulonglong)(uVar32 + 1);
      } while (uVar34 != uVar32 + 1);
    }
    puVar37 = local_228 + 1;
    bVar49 = false;
  } while (bVar44);
  local_37c = (uint)CONCAT71((int7)(uVar17 >> 8),1);
  if (param_9 != '\0') {
    FUN_146bb5db8(param_4,&local_248,&local_278);
    local_298 = (uint *)0x0;
    uStack_290 = 0;
    puVar37 = local_228;
    uVar16 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    local_37c = (uint)CONCAT71((int7)((ulonglong)&local_298 >> 8),1);
    do {
      local_368 = (uint *)CONCAT44(local_368._4_4_,(int)uVar16);
      local_248 = -local_248;
      dStack_240 = -dStack_240;
      local_238 = -local_238;
      bVar49 = (longlong)uStack_290 < 0;
      uStack_290 = uStack_290 & 0xffffffff00000000;
      if (bVar49) {
        FUN_14481578e(&local_298,0);
      }
      uVar17 = *puVar37;
      local_198._0_4_ = 0;
      local_198._4_4_ = 0;
      local_188 = &PTR_LAB_149f36400;
      uStack_180 = (uint)uVar17;
      uStack_17c = (uint)(uVar17 >> 0x20);
      local_1a8 = &LAB_146be5292;
      FUN_146be50a2(uVar17 + 0x1d0,&local_148,&local_1a8);
      FUN_146be4fdc(&local_148,&local_1a8);
      iVar30 = (int)*local_108 * 0x200 + *(int *)((longlong)local_108 + 4);
      local_258 = local_108;
      uStack_250 = CONCAT44(iVar30,iVar30);
      iVar30 = (int)*local_108 * 0x200 + *(int *)((longlong)local_108 + 4);
      local_288 = local_108;
      uStack_280 = CONCAT44(iVar30,iVar30);
      FUN_146be5300(&local_208,&local_288,&local_258,&local_148);
      while( true ) {
        uVar34 = (uint)plStack_1a0;
        if ((uint)plStack_1a0 == (uint)pdStack_200) break;
        lVar20 = *(longlong *)
                  (*(longlong *)(*puVar37 + 0x1c0) + (ulonglong)((uint)plStack_1a0 >> 9) * 8);
        uVar17 = (ulonglong)(((uint)plStack_1a0 & 0x1ff) << 4);
        iVar30 = *(int *)(lVar20 + uVar17);
        iVar23 = *(int *)(lVar20 + 4 + uVar17);
        if ((((int)param_1[0x12] <= iVar30) ||
            (dVar51 = *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar30 * 8),
            uVar17 = -(ulonglong)(-dVar51 <= dVar51),
            (double)(~uVar17 & (ulonglong)-dVar51 | (ulonglong)dVar51 & uVar17) <= param_6)) &&
           (((int)param_1[0x12] <= iVar23 ||
            (dVar51 = *(double *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar23 * 8),
            uVar17 = -(ulonglong)(-dVar51 <= dVar51),
            (double)(~uVar17 & (ulonglong)-dVar51 | (ulonglong)dVar51 & uVar17) <= param_6)))) {
          lVar20 = (longlong)(int)uStack_290;
          uVar13 = (int)uStack_290 + 1;
          uStack_290 = CONCAT44(uStack_290._4_4_,uVar13);
          if (uStack_290._4_4_ < uVar13) {
            FUN_1446f48e2(&local_298);
          }
          local_298[lVar20] = uVar34;
        }
        FUN_146be53a8(&local_1a8);
      }
      if (local_1e8 != (ulonglong *)0x0) {
        ppuVar26 = (undefined1 **)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8);
        if ((undefined1 **)CONCAT44(local_1d8._4_4_,(undefined4)local_1d8) == (undefined1 **)0x0) {
          ppuVar26 = &local_1c8;
        }
        (**(code **)(*ppuVar26 + 0x10))();
      }
      if (local_188 != (undefined **)0x0) {
        ppuVar26 = (undefined1 **)CONCAT44(iStack_174,uStack_178);
        if ((undefined1 **)CONCAT44(iStack_174,uStack_178) == (undefined1 **)0x0) {
          ppuVar26 = &local_168;
        }
        (**(code **)(*ppuVar26 + 0x10))();
      }
      if (local_148 != (longlong **)0x0) {
        plVar27 = local_138;
        if (local_138 == (longlong *)0x0) {
          plVar27 = (longlong *)&local_128;
        }
        (**(code **)(*plVar27 + 0x10))();
      }
      if ((int)uStack_290 != 0) {
        uVar34 = *(uint *)(*(longlong *)
                            (*(longlong *)(*puVar37 + 0x1c0) + (ulonglong)(*local_298 >> 9) * 8) +
                          (ulonglong)((*local_298 & 0x1ff) << 4));
        lVar20 = *(longlong *)(*(longlong *)(*puVar37 + 0x10) + (ulonglong)(uVar34 >> 9) * 8);
        uVar17 = (ulonglong)(uVar34 & 0x1ff);
        dVar51 = *(double *)(lVar20 + uVar17 * 0x18);
        dVar2 = *(double *)(lVar20 + 8 + uVar17 * 0x18);
        dVar3 = *(double *)(lVar20 + 0x10 + uVar17 * 0x18);
        uVar34 = (int)uStack_290 * 2;
        local_258 = (longlong *)0x0;
        uStack_250 = 0;
        if ((int)uStack_290 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar34);
        }
        FUN_1408652ee(&local_258,uVar34);
        local_288 = (longlong *)0x0;
        uStack_280 = 0;
        FUN_14481578e(&local_288,uVar34);
        local_188 = (undefined **)0x0;
        uStack_180 = 0;
        local_1a8 = (undefined1 *)0x0;
        plStack_1a0 = (longlong *)0x0;
        uStack_17c = 0x80;
        uStack_178 = 0xffffffff;
        iStack_174 = 0;
        local_168 = (undefined1 *)0x0;
        local_160 = 0;
        FUN_140ab2830(&local_1a8,uVar34);
        iVar30 = 0x1f;
        if (uVar34 + 0xf != 0) {
          for (; uVar34 + 0xf >> iVar30 == 0; iVar30 = iVar30 + -1) {
          }
        }
        iVar30 = 1 << ((byte)iVar30 & 0x1f);
        if (uVar34 < 4) {
          iVar30 = 1;
        }
        if ((local_160 == 0) || (local_160 < iVar30)) {
          local_160 = iVar30;
          FUN_140264164(&local_1a8);
        }
        local_2a8 = (longlong **)0x0;
        uStack_2a0 = 0;
        if ((int)uStack_290 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uStack_290 & 0xffffffff);
        }
        if ((uStack_290 & 0xffffffff) != 0) {
          FUN_146be5458(&local_2a8);
          if ((longlong)(int)uStack_290 != 0) {
            local_350 = local_298 + (int)uStack_290;
            puVar45 = local_298;
            do {
              puVar31 = (uint *)&local_148;
              local_378 = puVar45;
              FUN_146c13626(*puVar37,puVar31,*puVar45);
              local_354 = 0xffffffff;
              local_358 = 0xffffffff;
              puVar47 = &local_354;
              bVar49 = true;
              do {
                bVar44 = bVar49;
                uVar17 = uStack_250;
                uVar34 = *puVar31;
                if ((uint)plStack_1a0 != iStack_174) {
                  puVar21 = local_168;
                  if (local_168 == (undefined1 *)0x0) {
                    puVar21 = local_170;
                  }
                  iVar30 = *(int *)(puVar21 + (ulonglong)(local_160 - 1U & uVar34) * 4);
                  while (iVar30 != -1) {
                    puVar21 = local_1a8 + (longlong)iVar30 * 0x10;
                    if (*(uint *)(local_1a8 + (longlong)iVar30 * 0x10) == uVar34) {
                      pdVar22 = (double *)(puVar21 + 4);
                      if (pdVar22 != (double *)0x0 && puVar21 != (undefined1 *)0x0)
                      goto LAB_142961260;
                      break;
                    }
                    iVar30 = *(int *)(puVar21 + 8);
                  }
                }
                lVar20 = *(longlong *)
                          (*(longlong *)(*puVar37 + 0x10) + (ulonglong)(uVar34 >> 9) * 8);
                uVar48 = (ulonglong)(uVar34 & 0x1ff);
                dVar7 = *(double *)(lVar20 + uVar48 * 0x18) - dVar51;
                dVar4 = *(double *)(lVar20 + 8 + uVar48 * 0x18) - dVar2;
                dVar9 = *(double *)(lVar20 + 0x10 + uVar48 * 0x18) - dVar3;
                dVar11 = (double)CONCAT44(uStack_26c,uStack_270);
                dVar10 = (double)CONCAT44(uStack_274,local_278);
                dVar5 = dVar4 * dStack_240;
                dVar8 = dVar7 * local_248;
                dVar6 = (double)local_268 * dVar9;
                dVar9 = dVar9 * local_238;
                iVar30 = (int)uStack_250;
                uVar13 = (int)uStack_250 + 1;
                uStack_250 = CONCAT44(uStack_250._4_4_,uVar13);
                if (uStack_250._4_4_ < uVar13) {
                  FUN_14489624a(&local_258,uVar17 & 0xffffffff);
                }
                uVar17 = uStack_280;
                local_258[(longlong)iVar30 * 2] = (longlong)(dVar9 + dVar8 + dVar5);
                local_258[(longlong)iVar30 * 2 + 1] =
                     (longlong)(dVar6 + dVar10 * dVar7 + dVar11 * dVar4);
                local_2ac = iVar30;
                lVar20 = (longlong)(int)uStack_280;
                uVar13 = (int)uStack_280 + 1;
                uStack_280 = CONCAT44(uStack_280._4_4_,uVar13);
                if (uStack_280._4_4_ < uVar13) {
                  FUN_1446f48e2(&local_288,uVar17 & 0xffffffff);
                }
                *(uint *)((longlong)local_288 + lVar20 * 4) = uVar34;
                local_208 = puVar31;
                pdStack_200 = (double *)&local_2ac;
                FUN_140263e2a(&local_1a8,&local_2c8,&local_208,0);
                pdVar22 = (double *)&local_2ac;
LAB_142961260:
                uVar17 = uStack_2a0;
                *puVar47 = *(undefined4 *)pdVar22;
                puVar47 = &local_358;
                puVar31 = (uint *)((longlong)&local_148 + 4);
                bVar49 = false;
              } while (bVar44);
              lVar20 = (longlong)(int)uStack_2a0;
              uVar34 = (int)uStack_2a0 + 1;
              uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar34);
              if (uStack_2a0._4_4_ < uVar34) {
                FUN_146be54b8(&local_2a8,uVar17 & 0xffffffff);
              }
              *(undefined4 *)(local_2a8 + lVar20) = local_354;
              *(undefined4 *)((longlong)local_2a8 + lVar20 * 8 + 4) = local_358;
              puVar45 = local_378 + 1;
            } while (puVar45 != local_350);
          }
        }
        local_208 = (uint *)0x0;
        local_1f8 = (int *)0x0;
        uVar34 = (uint)local_1f0;
        local_1f0 = (longlong *)CONCAT44(1,uVar34 & 0xffffff00);
        pdStack_200 = (double *)CONCAT53(pdStack_200._3_5_,0x10100);
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2d8 = local_2a8;
        local_2d0 = (int)uStack_2a0;
        local_2e8 = local_258;
        local_2e0 = (int)uStack_250;
        cVar12 = FUN_146baf7ca(&local_208,&local_2e8,&local_2d8);
        plVar46 = local_360;
        if (cVar12 != '\0') {
          if (local_1f8 == (int *)0x0) {
            local_37c = 0;
          }
          else {
            local_148 = local_2a8;
            ppuStack_140 = (uint **)CONCAT44(ppuStack_140._4_4_,(int)uStack_2a0);
            uVar16 = FUN_146bb1198(local_1f8,&local_2c8,&local_148,3);
            local_37c = (uint)CONCAT71((int7)((ulonglong)uVar16 >> 8),(byte)uVar16 & (byte)local_37c
                                      );
          }
        }
        lVar20 = local_2c8;
        lVar41 = (longlong)(int)uStack_2c0;
        if (lVar41 == 0) {
          local_37c = 0;
        }
        else {
          lVar18 = 0;
          uVar17 = (ulonglong)local_37c;
          do {
            local_148 = (longlong **)
                        CONCAT44(*(int *)((longlong)local_288 +
                                         (longlong)*(int *)(lVar20 + 4 + lVar18) * 4),
                                 *(int *)((longlong)local_288 +
                                         (longlong)*(int *)(lVar20 + lVar18) * 4));
            ppuStack_140 = (uint **)CONCAT44(ppuStack_140._4_4_,
                                             *(int *)((longlong)local_288 +
                                                     (longlong)*(int *)(lVar20 + 8 + lVar18) * 4));
            iVar30 = FUN_146c01152(*puVar37,&local_148,0);
            uVar17 = CONCAT71((int7)(uVar17 >> 8),(byte)uVar17 & -1 < iVar30);
            lVar18 = lVar18 + 0xc;
          } while (lVar41 * 0xc != lVar18);
          local_37c = (uint)uVar17;
        }
        if (local_2c8 != 0) {
          FUN_1400020a8();
        }
        if (local_1f8 != (int *)0x0) {
          (**(code **)(local_1f8 + -4))(local_1f8 + -4);
        }
        if (local_2a8 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        local_160 = 0;
        if (local_168 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar17 = (ulonglong)plStack_1a0 >> 0x20;
        plStack_1a0 = (longlong *)((ulonglong)plStack_1a0 & 0xffffffff00000000);
        if ((int)uVar17 != 0) {
          FUN_14472eb64(&local_1a8);
        }
        uStack_178 = 0xffffffff;
        iStack_174 = 0;
        uStack_180 = 0;
        if (0x80 < uStack_17c) {
          uStack_17c = 0x80;
          FUN_1446efbd8(&local_198);
        }
        if (local_188 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (local_1a8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_288 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_258 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar37 = local_228 + 1;
      uVar16 = 0;
    } while (((ulonglong)local_368 & 1) != 0);
    if (local_298 != (uint *)0x0) {
      FUN_1400020a8();
    }
    local_37c = local_37c ^ 1;
  }
  *param_5 = local_36c;
  puVar45 = param_1 + 0x14;
  local_2a8 = (longlong **)((ulonglong)local_2a8 & 0xffffffff00000000);
  iVar30 = 0;
  iVar23 = local_36c;
  local_368 = puVar45;
  do {
    uVar17 = local_338;
    if (iVar30 == 0) {
      uVar17 = local_348;
    }
    puVar31 = (uint *)(uVar17 + 0x220);
    FUN_146ba99bc(puVar31,puVar45[(longlong)iVar30 * 4 + 2]);
    *(undefined4 *)(uVar17 + 0x228) = 0;
    if (*(int *)(uVar17 + 0x22c) < 0) {
      FUN_146be7820(puVar31,0);
    }
    if (param_10 == '\0') {
LAB_14295fc87:
      local_238 = 0.0;
      uStack_230 = 0;
      local_248 = 0.0;
      dStack_240 = 0.0;
      FUN_146c09afc(local_228[(int)local_2a8],&local_248);
      local_188 = (undefined **)0x0;
      uStack_180 = 0;
      local_1a8 = (undefined1 *)0x0;
      plStack_1a0 = (longlong *)0x0;
      uStack_17c = 0x80;
      uStack_178 = 0xffffffff;
      iStack_174 = 0;
      local_168 = (undefined1 *)0x0;
      local_160 = 0;
      local_1f8 = &local_30c;
      local_1f0 = &local_308;
      local_1e8 = local_228;
      local_1e0 = &local_2a8;
      local_1d8 = &local_1a8;
      lVar20 = (longlong)(int)local_2a8;
      local_208 = param_1;
      pdStack_200 = &local_248;
      if ((longlong)(int)puVar45[lVar20 * 4 + 2] != 0) {
        puVar35 = *(undefined4 **)(puVar45 + lVar20 * 4);
        puVar47 = puVar35 + (longlong)(int)puVar45[lVar20 * 4 + 2] * 3;
        do {
          uVar14 = FUN_14296bef4(&local_208,*puVar35);
          *puVar35 = uVar14;
          uVar14 = FUN_14296bef4(&local_208,puVar35[1]);
          puVar35[1] = uVar14;
          uVar14 = FUN_14296bef4(&local_208,puVar35[2]);
          puVar35[2] = uVar14;
          puVar35 = puVar35 + 3;
        } while (puVar35 != puVar47);
        lVar20 = (longlong)(int)local_2a8;
        puVar45 = local_368;
      }
      puVar36 = puVar45 + lVar20 * 4;
      if (puVar31 != puVar36) {
        if (*(longlong *)puVar31 != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(uVar17 + 0x220) = *(undefined8 *)puVar36;
        puVar36[0] = 0;
        puVar36[1] = 0;
        *(uint *)(uVar17 + 0x228) = puVar36[2];
        *(uint *)(uVar17 + 0x22c) = puVar36[3];
        puVar36[2] = 0;
        puVar36[3] = 0;
      }
      FUN_146ba2b00(uVar17);
      FUN_146ba2d40(&local_148,uVar17);
      *(longlong **)(uVar17 + 0x280) = local_138;
      *(longlong ***)(uVar17 + 0x270) = local_148;
      *(uint ***)(uVar17 + 0x278) = ppuStack_140;
      local_328 = *(undefined4 *)(uVar17 + 0x270);
      uStack_324 = *(undefined4 *)(uVar17 + 0x274);
      uStack_320 = *(undefined4 *)(uVar17 + 0x278);
      uStack_31c = *(undefined4 *)(uVar17 + 0x27c);
      local_318 = *(undefined8 *)(uVar17 + 0x280);
      dVar51 = (double)FUN_14295ddb0(uVar17,&local_328);
      *(double *)(uVar17 + 0x260) = dVar51;
      if (dVar51 < 0.0) {
        *(undefined1 *)(uVar17 + 0x2b8) = 1;
        *(undefined8 *)(uVar17 + 0x260) = 0;
      }
      *(undefined8 *)(uVar17 + 600) = *(undefined8 *)(param_1 + (longlong)(int)local_2a8 * 2 + 0x1c)
      ;
      FUN_145c688c4(uVar17,&local_148,0);
      *(ulonglong *)(uVar17 + 0x2a8) = CONCAT44(uStack_124,local_128);
      *(ulonglong *)(uVar17 + 0x2b0) = CONCAT44(uStack_11c,uStack_120);
      *(longlong **)(uVar17 + 0x298) = local_138;
      *(undefined8 *)(uVar17 + 0x2a0) = uStack_130;
      *(longlong ***)(uVar17 + 0x288) = local_148;
      *(uint ***)(uVar17 + 0x290) = ppuStack_140;
      *(double *)(uVar17 + 0x2c0) = *(double *)(uVar17 + 600) - *(double *)(uVar17 + 0x260);
      local_160 = 0;
      if (local_168 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar17 = (ulonglong)plStack_1a0 >> 0x20;
      plStack_1a0 = (longlong *)((ulonglong)plStack_1a0 & 0xffffffff00000000);
      if ((int)uVar17 != 0) {
        FUN_14472eb64(&local_1a8,0);
      }
      uStack_178 = 0xffffffff;
      iStack_174 = 0;
      uStack_180 = 0;
      if (0x80 < uStack_17c) {
        uStack_17c = 0x80;
        FUN_1446efbd8(&local_198,0);
      }
      if (local_188 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_1a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_238 != 0.0) {
        FUN_1400020a8();
      }
      if (local_248 != 0.0) {
        FUN_1400020a8();
      }
      iVar24 = (int)local_2a8;
    }
    else {
      lVar41 = (longlong)local_210[(int)local_2a8];
      lVar20 = *(longlong *)(*plVar46 + lVar41 * 8);
      local_238 = 0.0;
      uStack_230 = 0;
      local_248 = 0.0;
      dStack_240 = 0.0;
      local_36c = iVar23;
      FUN_146bad868(&local_248,0);
      FUN_146be5f20(&local_248,*(int *)(lVar20 + 0x20) * 0x200 + *(int *)(lVar20 + 0x24),lVar20);
      FUN_146be553e(&local_248,lVar20);
      cVar12 = FUN_146be55ee(&local_248,lVar20);
      if (cVar12 == '\0') {
        puVar45 = local_368;
        uVar34 = (uint)(0 < *(int *)(lVar20 + 0x170));
      }
      else {
        FUN_146be56ac(&local_248,lVar20,param_7,3);
        FUN_146be59b0(&local_248,lVar20);
        FUN_146be5d86(&local_248,&local_1a8,lVar20);
        uVar34 = (uint)plStack_1a0 - iStack_174;
        puVar45 = local_368;
        if (1 < (int)uVar34) {
          local_258 = (longlong *)0x0;
          uStack_250 = 0;
          local_378 = (uint *)CONCAT44(local_378._4_4_,uVar34);
          local_340 = puVar31;
          do {
            lVar18 = FUN_14001cc68(0x2d0,0x10);
            FUN_146be4f0e(lVar18);
            uVar48 = uStack_250;
            lVar33 = (longlong)(int)uStack_250;
            uVar13 = (int)uStack_250 + 1;
            uStack_250 = CONCAT44(uStack_250._4_4_,uVar13);
            if (uStack_250._4_4_ < uVar13) {
              FUN_146be6dde(&local_258,uVar48 & 0xffffffff);
            }
            local_258[lVar33] = lVar18;
            uVar34 = uVar34 - 1;
          } while (uVar34 != 0);
          uVar48 = 0;
          local_1e8 = (ulonglong *)0x0;
          local_1e0._0_4_ = 0;
          local_208 = (uint *)0x0;
          pdStack_200 = (double *)0x0;
          local_1e0._4_4_ = 0x80;
          local_1d8._0_4_ = 0xffffffff;
          local_1d8._4_4_ = 0;
          local_1c8 = (undefined1 *)0x0;
          local_1c0 = 0;
          uVar34 = *(int *)(lVar20 + 0x20) * 0x200 + *(int *)(lVar20 + 0x24);
          local_330 = lVar41;
          if ((uVar34 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar20 + 0x28) - 1U)))
          {
            uVar48 = 1;
            uVar13 = 1;
            if (1 < (int)uVar34) {
              uVar48 = (ulonglong)uVar34;
            }
            do {
              uVar32 = uVar13;
              if ((uint)uVar48 == uVar32) goto LAB_1429601ef;
              uVar13 = uVar32 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar20 + 0x28))[uVar32 >> 9] +
                                                 (ulonglong)(uVar32 & 0x1ff) * 2) - 1U));
            uVar48 = (ulonglong)uVar32;
          }
LAB_1429601ef:
          uVar13 = (uint)uVar48;
          if (uVar13 != uVar34) {
            local_288 = (longlong *)CONCAT44(local_288._4_4_,uVar13);
            if (((-1 < (int)uVar13) &&
                ((int)uVar13 < *(int *)(lVar20 + 0x20) * 0x200 + *(int *)(lVar20 + 0x24))) &&
               ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar20 + 0x28) + (uVar48 >> 9) * 8)
                                   + (ulonglong)(uVar13 & 0x1ff) * 2) - 2U) < 0xfffd)) {
              uVar32 = *(uint *)((longlong)local_248 + uVar48 * 4);
              uVar15 = uVar13;
              if (uVar32 != uVar13) {
                puVar45 = (uint *)((longlong)local_248 + uVar48 * 4);
                uVar50 = uVar48;
                do {
                  *puVar45 = *(uint *)((longlong)local_248 + (longlong)(int)uVar32 * 4);
                  uVar15 = *(uint *)((longlong)local_248 + uVar50 * 4);
                  uVar50 = (ulonglong)(int)uVar15;
                  puVar45 = (uint *)((longlong)local_248 + uVar50 * 4);
                  uVar32 = *puVar45;
                } while (uVar32 != uVar15);
              }
              if ((uint)plStack_1a0 != iStack_174) {
                puVar21 = local_168;
                if (local_168 == (undefined1 *)0x0) {
                  puVar21 = local_170;
                }
                iVar30 = *(int *)(puVar21 + (ulonglong)(local_160 - 1U & uVar15) * 4);
                while (iVar30 != -1) {
                  puVar21 = local_1a8 + (longlong)iVar30 * 0x10;
                  if (*(uint *)(local_1a8 + (longlong)iVar30 * 0x10) == uVar15) goto LAB_142960307;
                  iVar30 = *(int *)(puVar21 + 8);
                }
              }
              puVar21 = (undefined1 *)0x0;
LAB_142960307:
              lVar41 = *(longlong *)(*(longlong *)(lVar20 + 0x10) + (ulonglong)(uVar13 >> 9) * 8);
              puVar1 = (undefined8 *)(lVar41 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
              local_278 = *(undefined4 *)puVar1;
              uStack_274 = *(undefined4 *)((longlong)puVar1 + 4);
              local_148 = (longlong **)*puVar1;
              uStack_270 = *(undefined4 *)(puVar1 + 1);
              uStack_26c = *(undefined4 *)((longlong)puVar1 + 0xc);
              ppuStack_140 = (uint **)puVar1[1];
              local_268 = *(longlong **)(lVar41 + 0x10 + (ulonglong)(uVar13 & 0x1ff) * 0x18);
              local_128 = DAT_14c846338;
              uStack_130 = DAT_14c846330;
              uStack_11c = DAT_14c846338;
              uStack_124 = (undefined4)DAT_14c846330;
              uStack_120 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
              local_118 = DAT_14c84635c;
              local_110 = 0;
              local_10e = 0;
              local_138 = local_268;
              uVar14 = FUN_146c02208(local_258[*(int *)(puVar21 + 4)],&local_148);
              local_298 = (uint *)CONCAT44(local_298._4_4_,uVar14);
              local_148 = &local_288;
              ppuStack_140 = &local_298;
              FUN_140263e2a(&local_208,&local_278,&local_148,0);
            }
            uVar32 = uVar13 + 1;
            if ((int)(uVar13 + 1) < (int)uVar34) {
              uVar32 = uVar34;
            }
            do {
              if (uVar32 - 1 == (int)uVar48) {
                uVar48 = (ulonglong)uVar32;
                break;
              }
              uVar13 = (int)uVar48 + 1;
              uVar48 = (ulonglong)uVar13;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar20 + 0x28) +
                                                   (ulonglong)(uVar13 >> 9) * 8) +
                                                 (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
            goto LAB_1429601ef;
          }
          uVar13 = *(int *)(lVar20 + 0x140) * 0x200 + *(int *)(lVar20 + 0x144);
          uVar34 = 0;
          if ((uVar13 != 0) &&
             (uVar34 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar20 + 0x148) - 1U))) {
            uVar32 = 1;
            uVar15 = 1;
            if (1 < (int)uVar13) {
              uVar32 = uVar13;
            }
            do {
              uVar34 = uVar32;
              if (uVar32 == uVar15) break;
              uVar28 = uVar15 >> 9;
              uVar40 = uVar15 & 0x1ff;
              uVar34 = uVar15;
              uVar15 = uVar15 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar20 + 0x148))[uVar28] +
                                                 (ulonglong)uVar40 * 2) - 1U));
          }
LAB_142960466:
          if (uVar34 != uVar13) {
            lVar41 = *(longlong *)(*(longlong *)(lVar20 + 0x130) + (ulonglong)(uVar34 >> 9) * 8);
            uVar48 = (ulonglong)(uVar34 & 0x1ff);
            uVar32 = *(uint *)(lVar41 + uVar48 * 0xc);
            uVar15 = *(uint *)(lVar41 + 4 + uVar48 * 0xc);
            uVar28 = *(uint *)(lVar41 + 8 + uVar48 * 0xc);
            lVar41 = (longlong)(int)uVar32;
            uVar40 = *(uint *)((longlong)local_248 + lVar41 * 4);
            uVar29 = uVar32;
            if (uVar40 != uVar32) {
              puVar45 = (uint *)((longlong)local_248 + lVar41 * 4);
              do {
                *puVar45 = *(uint *)((longlong)local_248 + (longlong)(int)uVar40 * 4);
                uVar29 = *(uint *)((longlong)local_248 + lVar41 * 4);
                lVar41 = (longlong)(int)uVar29;
                puVar45 = (uint *)((longlong)local_248 + lVar41 * 4);
                uVar40 = *puVar45;
              } while (uVar40 != uVar29);
            }
            if ((uint)plStack_1a0 != iStack_174) {
              puVar21 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar21 = local_170;
              }
              iVar30 = *(int *)(puVar21 + (ulonglong)(local_160 - 1U & uVar29) * 4);
              while (iVar30 != -1) {
                puVar21 = local_1a8 + (longlong)iVar30 * 0x10;
                if (*(uint *)(local_1a8 + (longlong)iVar30 * 0x10) == uVar29) goto LAB_14296053f;
                iVar30 = *(int *)(puVar21 + 8);
              }
            }
            puVar21 = (undefined1 *)0x0;
LAB_14296053f:
            uVar40 = _DAT_00000004;
            uVar29 = _DAT_00000004;
            if ((uint)pdStack_200 != local_1d8._4_4_) {
              puVar42 = local_1c8;
              if (local_1c8 == (undefined1 *)0x0) {
                puVar42 = local_1d0;
              }
              uVar43 = local_1c0 - 1;
              uVar40 = *(uint *)(puVar42 + (ulonglong)(uVar43 & uVar28) * 4);
              if (uVar40 == 0xffffffff) {
                puVar45 = (uint *)&DAT_00000004;
              }
              else {
                do {
                  puVar45 = local_208 + (longlong)(int)uVar40 * 4;
                  if (local_208[(longlong)(int)uVar40 * 4] == uVar28) goto LAB_142960638;
                  uVar40 = puVar45[2];
                } while (uVar40 != 0xffffffff);
                puVar45 = (uint *)0x0;
LAB_142960638:
                puVar45 = puVar45 + 1;
              }
              uVar28 = *(uint *)(puVar42 + (ulonglong)(uVar43 & uVar15) * 4);
              while (uVar28 != 0xffffffff) {
                puVar31 = local_208 + (longlong)(int)uVar28 * 4;
                if (local_208[(longlong)(int)uVar28 * 4] == uVar15) goto LAB_14296066e;
                uVar28 = puVar31[2];
              }
              puVar31 = (uint *)0x0;
LAB_14296066e:
              uVar40 = *puVar45;
              uVar29 = puVar31[1];
              uVar15 = *(uint *)(puVar42 + (ulonglong)(uVar43 & uVar32) * 4);
              while (uVar15 != 0xffffffff) {
                puVar45 = local_208 + (longlong)(int)uVar15 * 4;
                if (local_208[(longlong)(int)uVar15 * 4] == uVar32) goto LAB_142960566;
                uVar15 = puVar45[2];
              }
            }
            puVar45 = (uint *)0x0;
LAB_142960566:
            local_148 = (longlong **)CONCAT44(uVar29,puVar45[1]);
            ppuStack_140 = (uint **)CONCAT44(ppuStack_140._4_4_,uVar40);
            FUN_146c01152(local_258[*(int *)(puVar21 + 4)],&local_148,0);
            uVar32 = uVar34 + 1;
            if ((int)(uVar34 + 1) < (int)uVar13) {
              uVar32 = uVar13;
            }
            uVar15 = uVar34;
            do {
              uVar34 = uVar32;
              if (uVar32 - 1 == uVar15) break;
              uVar34 = uVar15 + 1;
              uVar15 = uVar34;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar20 + 0x148) +
                                                   (ulonglong)(uVar34 >> 9) * 8) +
                                                 (ulonglong)(uVar34 & 0x1ff) * 2) - 1U));
            goto LAB_142960466;
          }
          if (uStack_180 == 0) {
            uVar39 = 1;
            uVar48 = 0;
            iVar30 = 0;
            uVar34 = 0;
          }
          else {
            ppuVar19 = local_188;
            if (local_188 == (undefined **)0x0) {
              ppuVar19 = (undefined **)&local_198;
            }
            uVar34 = *(uint *)ppuVar19;
            if (uVar34 == 0) {
              iVar30 = uStack_180 + 0x1e;
              if (-1 < (int)(uStack_180 - 1)) {
                iVar30 = uStack_180 - 1;
              }
              uVar48 = 0;
              uVar50 = (ulonglong)(uint)(iVar30 >> 5);
              if (iVar30 >> 5 < 1) {
                uVar50 = uVar48;
              }
              iVar30 = 0;
              do {
                if (uVar50 == uVar48) goto LAB_142960757;
                iVar30 = iVar30 + 0x20;
                uVar34 = *(uint *)((longlong)ppuVar19 + (uVar48 + 1) * 4);
                uVar48 = uVar48 + 1;
              } while (uVar34 == 0);
            }
            else {
              uVar48 = 0;
              iVar30 = 0;
            }
            uVar39 = (ulonglong)(-uVar34 & uVar34);
            uVar50 = uVar39 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar50 != 0) {
              for (; uVar50 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar34 = (iVar30 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if ((int)uStack_180 <= (int)uVar34) {
              uVar34 = uStack_180;
            }
          }
          if (uVar34 != uStack_180) {
            uVar13 = 0xffffffff;
            local_350 = (uint *)(ulonglong)uStack_180;
            do {
              iVar23 = *(int *)(local_1a8 + (longlong)(int)uVar34 * 0x10 + 4);
              cVar12 = FUN_146ba19b8(local_258[iVar23]);
              if (cVar12 == '\0') {
                puVar31 = local_340;
                plVar46 = local_360;
                uVar14 = 1;
                goto LAB_142960948;
              }
              FUN_146ba1b50(local_258[iVar23]);
              uVar13 = uVar13 & ~(uint)uVar39;
              ppuVar19 = local_188;
              if (local_188 == (undefined **)0x0) {
                ppuVar19 = (undefined **)&local_198;
              }
              iVar23 = (int)uVar48;
              lVar20 = (longlong)iVar23;
              uVar34 = *(uint *)((longlong)ppuVar19 + lVar20 * 4) & uVar13;
              if (uVar34 == 0) {
                iVar24 = uStack_180 + 0x1e;
                if (-1 < (int)(uStack_180 - 1)) {
                  iVar24 = uStack_180 - 1;
                }
                iVar24 = iVar24 >> 5;
                iVar30 = iVar30 + 0x20;
                iVar25 = iVar24;
                if (iVar24 < iVar23) {
                  iVar25 = iVar23;
                }
                if (iVar23 < iVar24) {
                  lVar41 = 0;
                  do {
                    uVar34 = *(uint *)((longlong)ppuVar19 + (lVar20 + lVar41 + 1) * 4);
                    if (uVar34 != 0) {
                      uVar48 = (ulonglong)(iVar23 + (int)lVar41 + 1);
                      uVar13 = 0xffffffff;
                      goto LAB_1429608e3;
                    }
                    iVar30 = iVar30 + 0x20;
                    lVar41 = lVar41 + 1;
                  } while (iVar25 - lVar20 != lVar41);
                  uVar13 = 0xffffffff;
                  iVar23 = iVar25;
                }
                uVar48 = (ulonglong)(iVar23 + 1);
                uVar34 = uStack_180;
              }
              else {
LAB_1429608e3:
                uVar39 = (ulonglong)(-uVar34 & uVar34);
                uVar50 = uVar39 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar50 != 0) {
                  for (; uVar50 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                uVar34 = (iVar30 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                if ((int)uStack_180 <= (int)uVar34) {
                  uVar34 = uStack_180;
                }
              }
            } while (uVar34 != (uint)local_350);
          }
LAB_142960757:
          plVar46 = local_360;
          FUN_146ba7556(*(undefined8 *)(*local_360 + local_330 * 8),*local_258);
          lVar20 = *local_258;
          if (lVar20 != 0) {
            *local_258 = 0;
            FUN_146ba12c2(lVar20);
            FUN_1400020a8(lVar20);
          }
          puVar31 = local_340;
          uVar14 = (uint)local_378;
          if (1 < (int)uStack_250) {
            lVar20 = 1;
            do {
              lVar41 = local_258[lVar20];
              local_258[lVar20] = 0;
              iVar30 = (int)plVar46[1];
              *(uint *)(plVar46 + 1) = iVar30 + 1U;
              if (*(uint *)((longlong)plVar46 + 0xc) < iVar30 + 1U) {
                FUN_1456bd870(plVar46,iVar30);
                uVar14 = (uint)local_378;
              }
              *(longlong *)(*plVar46 + (longlong)iVar30 * 8) = lVar41;
              lVar20 = lVar20 + 1;
            } while (lVar20 < (int)uStack_250);
          }
LAB_142960948:
          puVar45 = local_368;
          local_378 = (uint *)CONCAT44(local_378._4_4_,uVar14);
          local_1c0 = 0;
          if (local_1c8 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          uVar48 = (ulonglong)pdStack_200 >> 0x20;
          pdStack_200 = (double *)((ulonglong)pdStack_200 & 0xffffffff00000000);
          if ((int)uVar48 != 0) {
            FUN_14472eb64(&local_208,0);
          }
          local_1d8._0_4_ = 0xffffffff;
          local_1d8._4_4_ = 0;
          local_1e0._0_4_ = 0;
          if (0x80 < local_1e0._4_4_) {
            local_1e0._4_4_ = 0x80;
            FUN_1446efbd8(&local_1f8,0);
          }
          if (local_1e8 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          if (local_208 != (uint *)0x0) {
            FUN_1400020a8();
          }
          FUN_146be6e63(local_258,uStack_250 & 0xffffffff);
          if (local_258 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uVar34 = (uint)local_378;
        }
        local_160 = 0;
        if (local_168 != (undefined1 *)0x0) {
          local_378 = (uint *)CONCAT44(local_378._4_4_,uVar34);
          FUN_1400020a8();
          uVar34 = (uint)local_378;
        }
        uVar48 = (ulonglong)plStack_1a0 >> 0x20;
        plStack_1a0 = (longlong *)((ulonglong)plStack_1a0 & 0xffffffff00000000);
        if ((int)uVar48 != 0) {
          local_378 = (uint *)CONCAT44(local_378._4_4_,uVar34);
          FUN_14472eb64(&local_1a8,0);
          uVar34 = (uint)local_378;
        }
        uStack_178 = 0xffffffff;
        iStack_174 = 0;
        uStack_180 = 0;
        if (0x80 < uStack_17c) {
          uStack_17c = 0x80;
          local_378 = (uint *)CONCAT44(local_378._4_4_,uVar34);
          FUN_1446efbd8(&local_198,0);
          uVar34 = (uint)local_378;
        }
        if (local_188 != (undefined **)0x0) {
          local_378 = (uint *)CONCAT44(local_378._4_4_,uVar34);
          FUN_1400020a8();
          uVar34 = (uint)local_378;
        }
        if (local_1a8 != (undefined1 *)0x0) {
          local_378 = (uint *)CONCAT44(local_378._4_4_,uVar34);
          FUN_1400020a8();
          uVar34 = (uint)local_378;
        }
      }
      if (local_238 != 0.0) {
        FUN_1400020a8();
      }
      if (local_248 != 0.0) {
        FUN_1400020a8();
      }
      if ((int)local_2a8 == 0 && 1 < (int)uVar34) {
        iVar30 = (int)plVar46[1];
        iVar23 = iVar30 + -1;
        if (local_36c != iVar23) {
          lVar20 = *plVar46;
          uVar16 = *(undefined8 *)(lVar20 + (longlong)local_36c * 8);
          *(undefined8 *)(lVar20 + (longlong)local_36c * 8) =
               *(undefined8 *)(lVar20 + -8 + (longlong)iVar30 * 8);
          *(undefined8 *)(lVar20 + -8 + (longlong)iVar30 * 8) = uVar16;
        }
        *param_5 = iVar23;
        iVar24 = 0;
      }
      else {
        iVar23 = local_36c;
        iVar24 = (int)local_2a8;
        if ((int)uVar34 < 2) goto LAB_14295fc87;
      }
    }
    iVar30 = iVar24 + 1;
    local_2a8 = (longlong **)CONCAT44(local_2a8._4_4_,iVar30);
    if (0 < iVar24) {
      if (((((byte)local_37c | local_36d) & 1) != 0) &&
         (*(undefined1 *)(local_348 + 0x2b8) = 1, iVar23 < (int)plVar46[1])) {
        lVar20 = (longlong)iVar23;
        do {
          *(undefined1 *)(*(longlong *)(*plVar46 + lVar20 * 8) + 0x2b8) = 1;
          lVar20 = lVar20 + 1;
        } while (lVar20 < (int)plVar46[1]);
      }
      if ((0 < *(int *)(param_8 + 8)) && (local_2f0 != 0)) {
        local_1a8 = param_8;
        plStack_1a0 = &local_2f8;
        FUN_14296c0f0(&local_1a8,local_348);
        if (iVar23 < (int)plVar46[1]) {
          lVar20 = (longlong)iVar23;
          do {
            FUN_14296c0f0(&local_1a8,*(undefined8 *)(*plVar46 + lVar20 * 8));
            lVar20 = lVar20 + 1;
          } while (lVar20 < (int)plVar46[1]);
        }
      }
      if (local_308 != 0) {
        FUN_1400020a8();
      }
      if (local_2f8 != 0) {
        FUN_1400020a8();
      }
      if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 142961638 FUN_142961638 body=269 status=ok
// SIG undefined FUN_142961638(void)

undefined8 FUN_142961638(undefined8 *param_1,int param_2,double *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar3 = *(longlong *)((longlong)((double *)*param_1)[10] + (longlong)param_2 * 8);
  if ((longlong)*(int *)(lVar3 + 0x228) != 0) {
    lVar6 = *(longlong *)(lVar3 + 0x220);
    lVar1 = lVar6 + (longlong)*(int *)(lVar3 + 0x228) * 0xc;
    do {
      lVar7 = 0;
      do {
        uVar2 = *(uint *)(lVar6 + lVar7 * 4);
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
        uVar8 = (ulonglong)(uVar2 & 0x1ff);
        dVar5 = (*(double *)(lVar4 + 0x10 + uVar8 * 0x18) * param_3[2] +
                *(double *)(lVar4 + uVar8 * 0x18) * *param_3 +
                *(double *)(lVar4 + 8 + uVar8 * 0x18) * param_3[1]) - param_3[3];
        uVar8 = -(ulonglong)(-dVar5 <= dVar5);
        if ((double)(~uVar8 & (ulonglong)-dVar5 | (ulonglong)dVar5 & uVar8) < *(double *)*param_1) {
          return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      lVar6 = lVar6 + 0xc;
    } while (lVar6 != lVar1);
  }
  return 0;
}



// FUNCTION 142961746 FUN_142961746 body=471 status=ok
// SIG undefined FUN_142961746(void)

void FUN_142961746(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  double *pdVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pdVar4 = (double *)*param_1;
  lVar10 = *(longlong *)((longlong)pdVar4[10] + (longlong)param_2 * 8);
  dVar2 = *pdVar4;
  lVar5 = *(longlong *)((longlong)pdVar4[10] + (longlong)param_3 * 8);
  local_58 = param_2;
  local_54 = param_3;
  if ((((*(double *)(lVar10 + 0x288) - dVar2 < *(double *)(lVar5 + 0x2a0)) &&
       (*(double *)(lVar5 + 0x288) < *(double *)(lVar10 + 0x2a0) + dVar2)) &&
      (*(double *)(lVar10 + 0x290) - dVar2 < *(double *)(lVar5 + 0x2a8))) &&
     ((*(double *)(lVar5 + 0x290) < *(double *)(lVar10 + 0x2a8) + dVar2 &&
      (*(double *)(lVar10 + 0x298) - dVar2 < *(double *)(lVar5 + 0x2b0))))) {
    if (*(double *)(lVar5 + 0x298) < dVar2 + *(double *)(lVar10 + 0x2b0)) {
      puVar6 = (undefined8 *)param_1[1];
      iVar3 = *(int *)(pdVar4 + 0x17);
      *(uint *)(pdVar4 + 0x17) = iVar3 + 1U;
      if (*(uint *)((longlong)pdVar4 + 0xbc) < iVar3 + 1U) {
        FUN_146bf2438(pdVar4 + 0x16,iVar3);
      }
      dVar2 = pdVar4[0x16];
      lVar10 = (longlong)iVar3 * 0x38;
      *(ulonglong *)((longlong)dVar2 + lVar10) = CONCAT44(param_3,param_2);
      uVar7 = puVar6[1];
      uVar8 = puVar6[2];
      uVar9 = puVar6[3];
      puVar1 = (undefined8 *)((longlong)dVar2 + 8 + lVar10);
      *puVar1 = *puVar6;
      puVar1[1] = uVar7;
      puVar6 = (undefined8 *)((longlong)dVar2 + 0x18 + lVar10);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      *(undefined2 *)((longlong)dVar2 + 0x28 + lVar10) = 0x101;
      *(undefined8 *)((longlong)dVar2 + 0x30 + lVar10) = 0x7fefffffffffffff;
      local_50 = &local_58;
      local_5c = iVar3;
      local_48 = &local_5c;
      FUN_1406b2a14(pdVar4 + 0x18,local_3c,&local_50,0);
      local_50 = &local_54;
      local_48 = &local_5c;
      FUN_1406b2a14(pdVar4 + 0x18,local_3c,&local_50,0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296191e FUN_14296191e body=1404 status=ok
// SIG undefined FUN_14296191e(void)

bool FUN_14296191e(double *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined **ppuVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  int *local_228;
  double local_220;
  double local_218;
  undefined4 local_20c;
  int *local_208;
  uint local_200;
  uint local_1fc;
  longlong local_1f8 [2];
  longlong *local_1e8;
  longlong local_1d8 [4];
  undefined1 *local_1b8;
  undefined8 local_1b0;
  code *local_1a8;
  undefined **local_198;
  int *local_190;
  undefined *local_188 [4];
  undefined1 *local_168;
  int **local_160;
  longlong *local_158;
  longlong local_148 [4];
  int *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  uint local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (0.0 < *param_1) {
    dVar15 = (double)(-(ulonglong)(0.0 <= *(double *)(param_2 + 0xac) - *(double *)(param_2 + 0xa6))
                     & (ulonglong)(*(double *)(param_2 + 0xac) - *(double *)(param_2 + 0xa6)));
    dVar16 = (double)(-(ulonglong)(0.0 <= *(double *)(param_2 + 0xaa) - *(double *)(param_2 + 0xa4))
                     & (ulonglong)(*(double *)(param_2 + 0xaa) - *(double *)(param_2 + 0xa4)));
    uVar13 = -(ulonglong)(dVar16 <= dVar15);
    dVar15 = (double)(~uVar13 & (ulonglong)dVar15 | uVar13 & (ulonglong)dVar16);
    dVar16 = (double)(-(ulonglong)(0.0 <= *(double *)(param_2 + 0xa8) - *(double *)(param_2 + 0xa2))
                     & (ulonglong)(*(double *)(param_2 + 0xa8) - *(double *)(param_2 + 0xa2)));
    uVar13 = -(ulonglong)(dVar16 <= dVar15);
    bVar8 = true;
    if ((double)(uVar13 & (ulonglong)dVar16 | ~uVar13 & (ulonglong)dVar15) < *param_1)
    goto LAB_142961c0f;
    local_160 = &local_208;
    local_1b0 = &local_228;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    dStack_b8 = 0.0;
    local_b0 = 0.0;
    dStack_a8 = 0.0;
    local_168 = &LAB_14296c4b2;
    local_1b8 = &LAB_14296c4ec;
    local_238 = 0x3cb0000000000000;
    local_228 = param_2;
    local_208 = param_2;
    FUN_146ba91a4(&local_118,param_2[8] * 0x200 + param_2[9]);
    dVar7 = dStack_a8;
    dVar16 = local_b0;
    dVar15 = dStack_b8;
    bVar8 = true;
    if ((int)local_118 < 3) goto LAB_142961c0f;
    lVar3 = *(longlong *)(param_2 + 4);
    lVar4 = *(longlong *)(lVar3 + (ulonglong)(local_118._4_4_ >> 9) * 8);
    uVar13 = (ulonglong)local_118._4_4_ & 0x1ff;
    dVar14 = *(double *)(lVar4 + uVar13 * 0x18);
    dVar1 = *(double *)(lVar4 + 8 + uVar13 * 0x18);
    dVar2 = *(double *)(lVar4 + 0x10 + uVar13 * 0x18);
    lVar4 = *(longlong *)(lVar3 + (ulonglong)(uStack_110._4_4_ >> 9) * 8);
    uVar13 = (ulonglong)uStack_110._4_4_ & 0x1ff;
    dVar17 = (dVar2 - *(double *)(lVar4 + 0x10 + uVar13 * 0x18)) * dStack_a8 +
             (dVar14 - *(double *)(lVar4 + uVar13 * 0x18)) * dStack_b8 +
             (dVar1 - *(double *)(lVar4 + 8 + uVar13 * 0x18)) * local_b0;
    uVar13 = -(ulonglong)(-dVar17 <= dVar17);
    dVar17 = (double)(~uVar13 & (ulonglong)-dVar17 | (ulonglong)dVar17 & uVar13);
    lVar3 = *(longlong *)(lVar3 + (ulonglong)(local_108 >> 9) * 8);
    uVar13 = (ulonglong)local_108 & 0x1ff;
    dVar14 = (dVar2 - *(double *)(lVar3 + 0x10 + uVar13 * 0x18)) * dStack_a8 +
             (dVar14 - *(double *)(lVar3 + uVar13 * 0x18)) * dStack_b8 +
             (dVar1 - *(double *)(lVar3 + 8 + uVar13 * 0x18)) * local_b0;
    uVar13 = -(ulonglong)(-dVar14 <= dVar14);
    dVar14 = (double)(~uVar13 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar13);
    uVar13 = -(ulonglong)(dVar17 <= dVar14);
    dVar14 = (double)(~uVar13 & (ulonglong)dVar17 | uVar13 & (ulonglong)dVar14);
    if (dVar14 <= *param_1) {
      if (*param_1 <= dVar14 + dVar14) {
        local_1a8 = (code *)0x0;
        local_198 = &PTR_DAT_149f363e0;
        local_1b8 = &DAT_146be727e;
        local_190 = param_2;
        FUN_146be708e(param_2 + 8,&local_168);
        FUN_146be6fec(&local_168,&local_1b8);
        local_200 = *local_128 * 0x200 + local_128[1];
        local_1e8 = (longlong *)0x0;
        local_1f8[0] = 0;
        local_208 = local_128;
        local_1fc = local_200;
        FUN_146be715a(local_1f8,&local_168);
        uVar13 = (ulonglong)local_1b0 & 0xffffffff;
        if ((uint)local_1b0 == local_200) {
          dVar1 = -1.79769313486232e+308;
          uVar18 = 0xffffffff;
          uVar20 = 0x7fefffff;
        }
        else {
          uVar19 = 0xffffffff;
          uVar21 = 0x7fefffff;
          dVar14 = -1.79769313486232e+308;
          do {
            pcVar6 = local_1a8;
            local_20c = (undefined4)uVar13;
            ppuVar11 = local_198;
            if (local_198 == (undefined **)0x0) {
              ppuVar11 = local_188;
            }
            uVar9 = (**(code **)(*ppuVar11 + 8))();
            (*pcVar6)(&local_228,uVar9,&local_20c);
            dVar1 = local_218 * dVar7 + (double)local_228 * dVar15 + local_220 * dVar16;
            uVar18 = SUB84(dVar1,0);
            uVar20 = (int)((ulonglong)dVar1 >> 0x20);
            if ((double)CONCAT44(uVar21,uVar19) <= dVar1) {
              uVar18 = uVar19;
              uVar20 = uVar21;
            }
            if (dVar1 <= dVar14) {
              dVar1 = dVar14;
            }
            iVar5 = local_1b0._4_4_;
            uVar12 = (uint)local_1b0;
            do {
              uVar12 = uVar12 + 1;
              uVar13 = (ulonglong)uVar12;
              local_1b0 = (int **)CONCAT44(local_1b0._4_4_,uVar12);
              if (iVar5 <= (int)uVar12) break;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(local_1b8 + 8) +
                                                   (ulonglong)(uVar12 >> 9) * 8) +
                                                 (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
            uVar19 = uVar18;
            uVar21 = uVar20;
            dVar14 = dVar1;
          } while (local_200 != uVar12);
        }
        if (local_1f8[0] != 0) {
          plVar10 = local_1e8;
          if (local_1e8 == (longlong *)0x0) {
            plVar10 = local_1d8;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
        if (local_1a8 != (code *)0x0) {
          ppuVar11 = local_198;
          if (local_198 == (undefined **)0x0) {
            ppuVar11 = local_188;
          }
          (**(code **)(*ppuVar11 + 0x10))();
        }
        if (local_168 != (undefined1 *)0x0) {
          if (local_158 == (longlong *)0x0) {
            local_158 = local_148;
          }
          (**(code **)(*local_158 + 0x10))();
        }
        bVar8 = (dVar1 - (double)CONCAT44(uVar20,uVar18)) * 0.5 < *param_1;
      }
      goto LAB_142961c0f;
    }
  }
  bVar8 = false;
LAB_142961c0f:
  if ((local_a0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142961e9c FUN_142961e9c body=1228 status=ok
// SIG undefined FUN_142961e9c(void)

longlong * FUN_142961e9c(longlong *param_1,longlong *param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  undefined1 auStack_208 [44];
  uint local_1dc;
  longlong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined4 *local_1c0;
  int *local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  uint local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined2 local_140;
  undefined1 local_13e;
  int *local_138;
  uint local_130;
  uint local_12c;
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  undefined *local_e8;
  uint local_e0;
  int local_dc;
  code *local_d8;
  undefined **local_c8;
  longlong local_c0;
  undefined *local_b8 [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = *param_1;
  local_1d0 = param_1;
  puVar9 = (undefined *)FUN_14001cc68(0x2d0,0x10);
  puVar12 = puVar9;
  FUN_146be4f0e(puVar9);
  *param_2 = (longlong)puVar9;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  local_1c0 = (undefined4 *)(puVar9 + 0x270);
  *(undefined4 *)(puVar9 + 0x270) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(puVar9 + 0x274) = uVar4;
  *(undefined4 *)(puVar9 + 0x278) = uVar5;
  *(undefined4 *)(puVar9 + 0x27c) = uVar6;
  *(undefined8 *)(puVar9 + 0x280) = DAT_14c8464f0;
  *(undefined8 *)(puVar9 + 0x268) = 0;
  uVar10 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
  lVar11 = 0;
  local_1c8 = param_2;
  local_1b8 = param_3;
  do {
    local_1dc = (uint)uVar10;
    local_1b0 = *(longlong *)(*(longlong *)(local_1d8 + 0x50) + (longlong)param_3[lVar11] * 8);
    local_d8 = (code *)0x0;
    local_c8 = &PTR_DAT_149f363e0;
    local_e8 = &DAT_146be727e;
    local_c0 = local_1b0;
    FUN_146be708e(local_1b0 + 0x20,&local_98,&local_e8);
    FUN_146be6fec(&local_98,&local_e8);
    local_130 = *local_58 * 0x200 + local_58[1];
    local_118 = (longlong *)0x0;
    local_128[0] = 0;
    local_138 = local_58;
    local_12c = local_130;
    FUN_146be715a(local_128,&local_98);
    if (local_e0 != local_130) {
      do {
        pcVar7 = local_d8;
        ppuVar13 = local_c8;
        if (local_c8 == (undefined **)0x0) {
          ppuVar13 = local_b8;
        }
        local_178 = local_e0;
        uVar10 = (**(code **)(*ppuVar13 + 8))();
        (*pcVar7)(&local_190,uVar10,&local_178);
        local_168 = local_180;
        local_178 = local_190;
        uStack_174 = uStack_18c;
        uStack_170 = uStack_188;
        uStack_16c = uStack_184;
        local_158 = DAT_14c846338;
        local_160 = DAT_14c846330;
        local_14c = DAT_14c846338;
        local_154 = DAT_14c846330;
        local_148 = DAT_14c84635c;
        local_140 = 0;
        local_13e = 0;
        FUN_146c02208(puVar9,&local_178);
        do {
          local_e0 = local_e0 + 1;
          if (local_dc <= (int)local_e0) break;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_e8 + 8) +
                                               (ulonglong)(local_e0 >> 9) * 8) +
                                             (ulonglong)(local_e0 & 0x1ff) * 2) - 1U));
      } while (local_130 != local_e0);
    }
    if (local_128[0] != 0) {
      plVar14 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar14 = local_108;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_d8 != (code *)0x0) {
      ppuVar13 = local_c8;
      if (local_c8 == (undefined **)0x0) {
        ppuVar13 = local_b8;
      }
      (**(code **)(*ppuVar13 + 0x10))();
    }
    param_3 = local_1b8;
    if (local_98 != 0) {
      plVar14 = (longlong *)CONCAT44(uStack_84,local_88);
      if ((longlong *)CONCAT44(uStack_84,local_88) == (longlong *)0x0) {
        plVar14 = (longlong *)&local_78;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    dVar1 = *(double *)(local_1b0 + 0x270) + *(double *)(puVar9 + 0x270);
    *(double *)(puVar9 + 0x270) = dVar1;
    dVar2 = *(double *)(local_1b0 + 0x278) + *(double *)(puVar9 + 0x278);
    *(double *)(puVar9 + 0x278) = dVar2;
    dVar3 = *(double *)(local_1b0 + 0x280) + *(double *)(puVar9 + 0x280);
    *(double *)(puVar9 + 0x280) = dVar3;
    *(double *)(puVar9 + 0x260) = *(double *)(local_1b0 + 0x260) + *(double *)(puVar9 + 0x260);
    *(double *)(puVar9 + 0x268) = *(double *)(local_1b0 + 0x268) + *(double *)(puVar9 + 0x268);
    lVar11 = 1;
    uVar10 = 0;
    if ((local_1dc & 1) == 0) {
      *(double *)(puVar9 + 0x270) = dVar1 * 0.5;
      *(double *)(puVar9 + 0x278) = dVar2 * 0.5;
      *(double *)(puVar9 + 0x280) = dVar3 * 0.5;
      FUN_146ba19b8(puVar9);
      local_1a8 = *local_1c0;
      uStack_1a4 = local_1c0[1];
      uStack_1a0 = local_1c0[2];
      uStack_19c = local_1c0[3];
      local_198 = *(undefined8 *)(local_1c0 + 4);
      local_e8 = puVar9;
      uVar10 = FUN_14295dfac();
      *(undefined8 *)(puVar9 + 600) = uVar10;
      uVar8 = 0;
      FUN_145c688c4(puVar9,&local_98,0);
      *(undefined4 *)(puVar9 + 0x2a8) = local_78;
      *(undefined4 *)(puVar9 + 0x2ac) = uStack_74;
      *(undefined4 *)(puVar9 + 0x2b0) = uStack_70;
      *(undefined4 *)(puVar9 + 0x2b4) = uStack_6c;
      *(undefined4 *)(puVar9 + 0x298) = local_88;
      *(undefined4 *)(puVar9 + 0x29c) = uStack_84;
      *(undefined4 *)(puVar9 + 0x2a0) = uStack_80;
      *(undefined4 *)(puVar9 + 0x2a4) = uStack_7c;
      *(longlong *)(puVar9 + 0x288) = local_98;
      *(undefined8 *)(puVar9 + 0x290) = uStack_90;
      *(double *)(puVar9 + 0x2c0) = *(double *)(puVar9 + 600) - *(double *)(puVar9 + 0x260);
      if (*(char *)(*(longlong *)(*(longlong *)(local_1d8 + 0x50) + (longlong)*param_3 * 8) + 0x2ba)
          != '\0') {
        if (*(char *)(*(longlong *)(*(longlong *)(local_1d8 + 0x50) + (longlong)param_3[1] * 8) +
                     0x2ba) == '\x01') {
          uVar8 = FUN_14296191e(local_1d0[1],puVar9);
        }
        else {
          uVar8 = 0;
        }
      }
      puVar9[0x2ba] = uVar8;
      FUN_146ba0dbe(puVar9);
      if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
        return local_1c8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14296236a FUN_14296236a body=295 status=ok
// SIG undefined FUN_14296236a(void)

void FUN_14296236a(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  if (0 < *(int *)(lVar2 + 0x58)) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + lVar6 * 8);
      if ((*(int *)(lVar3 + 0x250) != 0) &&
         (*(undefined4 *)(lVar3 + 0x250) = 0, *(int *)(lVar3 + 0x254) < 0)) {
        FUN_14481578e(lVar3 + 0x248,0);
      }
      if (0 < *(int *)(lVar2 + 0x118)) {
        lVar4 = 0;
        lVar5 = 0;
        do {
          local_58 = *(undefined8 *)(*(longlong *)(lVar2 + 0x110) + 0x10 + lVar4);
          puVar1 = (undefined4 *)(*(longlong *)(lVar2 + 0x110) + lVar4);
          local_68 = *puVar1;
          uStack_64 = puVar1[1];
          uStack_60 = puVar1[2];
          uStack_5c = puVar1[3];
          local_78 = 0;
          local_49 = FUN_146b9d348(lVar3,&local_68,
                                   *(undefined8 *)(*(longlong *)(lVar2 + 0x120) + lVar5 * 8),0);
          local_50 = (undefined4)lVar5;
          (*(code *)*param_2)(param_2[1],lVar3,&local_50);
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0x18;
        } while (lVar5 < *(int *)(lVar2 + 0x118));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar2 + 0x58));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142962492 FUN_142962492 body=550 status=ok
// SIG undefined FUN_142962492(void)

bool FUN_142962492(undefined8 param_1,longlong ****param_2,undefined8 param_3,undefined4 *param_4,
                  int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong ***local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  longlong *local_88;
  undefined4 *local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  longlong ***local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  iVar1 = param_5;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_5 == 0) {
    local_68 = *param_4;
    uStack_64 = param_4[1];
    uStack_60 = param_4[2];
    uStack_5c = param_4[3];
    FUN_146bb1198(local_68,param_2,&local_68,0);
  }
  else {
    FUN_146bb0b7e(param_1,&local_a0);
    if (&local_a0 == param_2) {
      if ((longlong ****)local_a0 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != (longlong ***)0x0) {
        FUN_1400020a8();
      }
      *param_2 = local_a0;
      local_a0 = (longlong ***)0x0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_98;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_98._4_4_;
    }
    local_78 = 0;
    uStack_70 = 0;
    uVar4 = *(uint *)(param_2 + 1);
    if ((int)uVar4 < 1) {
      uVar3 = 0;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar4,0);
      }
    }
    else {
      uStack_70 = (ulonglong)uVar4;
      FUN_1401c3474(&local_78,0);
      uVar3 = *(undefined4 *)(param_2 + 1);
    }
    local_88 = &local_78;
    local_80 = &param_5;
    local_a8 = &local_48;
    local_48 = 0;
    uVar4 = 0;
    local_40 = 0;
    local_58 = &LAB_146bf9764;
    local_b0 = 0;
    local_a0 = (longlong ***)param_2;
    local_98 = param_3;
    local_90 = param_4;
    local_50 = (longlong ***)&local_a0;
    FUN_1401f8d10(L"ParallelFor Task",uVar3,1);
    iVar2 = *(int *)(param_2 + 1);
    if (0 < iVar2) {
      do {
        lVar6 = (longlong)(int)uVar4;
        if (*(char *)(local_78 + lVar6) == '\0') {
          iVar5 = (int)uStack_70 + ~uVar4;
          if (iVar5 != 0) {
            if (0 < iVar5) {
              iVar5 = 1;
            }
            memmove((void *)(local_78 + lVar6),(void *)(((int)uStack_70 - iVar5) + local_78),
                    (longlong)iVar5);
            iVar2 = *(int *)(param_2 + 1);
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + -1);
          iVar5 = ~uVar4 + iVar2;
          if (iVar5 != 0) {
            if (0 < iVar5) {
              iVar5 = 1;
            }
            memmove((void *)((longlong)*param_2 + lVar6 * 0xc),
                    (void *)((longlong)*param_2 + (longlong)(iVar2 - iVar5) * 0xc),
                    (longlong)iVar5 * 0xc);
            iVar2 = *(int *)(param_2 + 1);
          }
          iVar2 = iVar2 + -1;
          *(int *)(param_2 + 1) = iVar2;
          uVar4 = uVar4 - 1;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar2);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429626ba FUN_1429626ba body=5600 status=ok
// SIG undefined FUN_1429626ba(void)

double * FUN_1429626ba(double *param_1,longlong *param_2,int param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double *pdVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  double *pdVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
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
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_308 [40];
  double local_2e0;
  int *local_2d8;
  undefined8 uStack_2d0;
  int local_2c4;
  double *local_2c0;
  double local_2b8;
  int *local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_280;
  int *local_278;
  double local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230 [3];
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0 [10];
  double local_190 [3];
  double local_178 [3];
  ulonglong local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128 [4];
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar4 = *(uint *)(param_2 + 1);
  if (param_3 < 1) {
    uVar22 = 0xffffffff;
    uVar23 = 0x7fefffff;
    uVar37 = 0xffffffff;
    uVar38 = 0xffefffff;
    dVar31 = 1.79769313486232e+308;
    dVar28 = 1.79769313486232e+308;
    uVar35 = uVar37;
    uVar36 = uVar38;
    uVar39 = uVar37;
    uVar40 = uVar38;
  }
  else {
    uVar35 = 0xffffffff;
    uVar36 = 0xffefffff;
    uVar42 = 0xffffffff;
    uVar43 = 0x7fefffff;
    iVar12 = 0;
    uVar39 = uVar35;
    uVar40 = uVar36;
    uVar44 = uVar42;
    uVar45 = uVar43;
    uVar41 = uVar35;
    uVar46 = uVar36;
    uVar47 = uVar42;
    uVar48 = uVar43;
    do {
      local_268 = (double)CONCAT44(local_268._4_4_,iVar12);
      (*(code *)*param_4)(&local_218,param_4[1],&local_268);
      dVar28 = (double)local_218;
      if ((double)CONCAT44(uVar43,uVar42) <= (double)local_218) {
        dVar28 = (double)CONCAT44(uVar43,uVar42);
      }
      uVar37 = (int)local_218;
      uVar38 = (int)((ulonglong)local_218 >> 0x20);
      if ((double)local_218 <= (double)CONCAT44(uVar46,uVar41)) {
        uVar37 = uVar41;
        uVar38 = uVar46;
      }
      dVar31 = uStack_210;
      if ((double)CONCAT44(uVar48,uVar47) <= uStack_210) {
        dVar31 = (double)CONCAT44(uVar48,uVar47);
      }
      uVar22 = SUB84(uStack_210,0);
      uVar23 = (int)((ulonglong)uStack_210 >> 0x20);
      if (uStack_210 <= (double)CONCAT44(uVar36,uVar35)) {
        uVar22 = uVar35;
        uVar23 = uVar36;
      }
      uVar36 = uVar23;
      uVar35 = uVar22;
      uVar41 = (undefined4)((ulonglong)local_208 >> 0x20);
      uVar22 = SUB84(local_208,0);
      uVar23 = uVar41;
      if ((double)CONCAT44(uVar45,uVar44) <= local_208) {
        uVar22 = uVar44;
        uVar23 = uVar45;
      }
      uVar44 = SUB84(local_208,0);
      if (local_208 <= (double)CONCAT44(uVar40,uVar39)) {
        uVar44 = uVar39;
        uVar41 = uVar40;
      }
      uVar40 = uVar41;
      uVar39 = uVar44;
      iVar12 = iVar12 + 1;
      uVar42 = SUB84(dVar28,0);
      uVar43 = (undefined4)((ulonglong)dVar28 >> 0x20);
      uVar47 = SUB84(dVar31,0);
      uVar48 = (undefined4)((ulonglong)dVar31 >> 0x20);
      uVar44 = uVar22;
      uVar45 = uVar23;
      uVar41 = uVar37;
      uVar46 = uVar38;
    } while (param_3 != iVar12);
  }
  local_2e0 = (double)CONCAT44(local_2e0._4_4_,uVar4 * 2);
  if (uVar4 == 0) {
    *param_1 = ((double)CONCAT44(uVar38,uVar37) + dVar28) * 0.5;
    param_1[1] = ((double)CONCAT44(uVar36,uVar35) + dVar31) * 0.5;
    param_1[2] = ((double)CONCAT44(uVar40,uVar39) + (double)CONCAT44(uVar23,uVar22)) * 0.5;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 1.0;
    param_1[7] = ((double)CONCAT44(uVar38,uVar37) - dVar28) * 0.5;
    param_1[8] = ((double)CONCAT44(uVar36,uVar35) - dVar31) * 0.5;
    param_1[9] = ((double)CONCAT44(uVar40,uVar39) - (double)CONCAT44(uVar23,uVar22)) * 0.5;
  }
  else {
    local_268 = 0.0;
    uStack_260 = 0.0;
    local_2c4 = param_3;
    local_2a8 = dVar31;
    local_2a0 = dVar28;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    FUN_14297140e(&local_268,uVar4);
    uVar14 = uVar4;
    do {
      uVar21 = (ulonglong)uStack_260;
      lVar20 = (longlong)(int)uStack_260;
      uVar3 = (int)uStack_260 + 1;
      uStack_260 = (double)CONCAT44(uStack_260._4_4_,uVar3);
      if (uStack_260._4_4_ < uVar3) {
        FUN_142971574(&local_268,uVar21 & 0xffffffff);
      }
      FUN_14297154f(lVar20 * 0x18 + (longlong)local_268);
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    local_2c0 = param_1;
    if (local_2c4 < 1) {
      uVar21 = 1;
      if (1 < (int)uVar4) {
        uVar21 = (ulonglong)uVar4;
      }
    }
    else {
      uVar21 = 1;
      if (1 < (int)uVar4) {
        uVar21 = (ulonglong)uVar4;
      }
      iVar12 = 0;
      do {
        local_178[0] = (double)CONCAT44(local_178[0]._4_4_,iVar12);
        (*(code *)*param_4)(&local_218,param_4[1],local_178);
        lVar20 = 0;
        do {
          lVar16 = *param_2;
          dVar31 = *(double *)(lVar16 + 0x10 + lVar20) * local_208 +
                   *(double *)(lVar16 + lVar20) * (double)local_218 +
                   *(double *)(lVar16 + 8 + lVar20) * uStack_210;
          if (dVar31 < *(double *)((longlong)local_268 + 8 + lVar20)) {
            *(double *)((longlong)local_268 + 8 + lVar20) = dVar31;
            *(int *)((longlong)local_268 + 0x14 + lVar20) = iVar12;
          }
          if (*(double *)((longlong)local_268 + lVar20) <= dVar31 &&
              dVar31 != *(double *)((longlong)local_268 + lVar20)) {
            *(double *)((longlong)local_268 + lVar20) = dVar31;
            *(int *)((longlong)local_268 + 0x10 + lVar20) = iVar12;
          }
          lVar20 = lVar20 + 0x18;
        } while (uVar21 * 0x18 != lVar20);
        iVar12 = iVar12 + 1;
      } while (iVar12 != local_2c4);
    }
    lVar20 = (longlong)local_268;
    local_268 = 0.0;
    uStack_260 = 0.0;
    FUN_140b463b8(&local_268,(ulonglong)local_2e0 & 0xffffffff,1);
    lVar16 = 0;
    do {
      local_178[0]._0_4_ = *(undefined4 *)(lVar20 + 0x14 + lVar16);
      (*(code *)*param_4)(&local_218,param_4[1],local_178);
      *(double *)((longlong)local_268 + 0x10 + lVar16 * 2) = local_208;
      puVar1 = (undefined4 *)((longlong)local_268 + lVar16 * 2);
      *puVar1 = (undefined4)local_218;
      puVar1[1] = local_218._4_4_;
      puVar1[2] = (uint)uStack_210;
      puVar1[3] = uStack_210._4_4_;
      local_178[0] = (double)CONCAT44(local_178[0]._4_4_,*(undefined4 *)(lVar20 + 0x10 + lVar16));
      (*(code *)*param_4)(&local_218,param_4[1],local_178);
      dVar31 = local_268;
      *(double *)((longlong)local_268 + 0x28 + lVar16 * 2) = local_208;
      puVar1 = (undefined4 *)((longlong)local_268 + 0x18 + lVar16 * 2);
      *puVar1 = (undefined4)local_218;
      puVar1[1] = local_218._4_4_;
      puVar1[2] = (uint)uStack_210;
      puVar1[3] = uStack_210._4_4_;
      lVar16 = lVar16 + 0x18;
    } while (uVar21 * 0x18 != lVar16);
    pdVar5 = (double *)(lVar20 + 8);
    uVar11 = 0xffffffff;
    dVar28 = -1.79769313486232e+308;
    uVar6 = 0;
    do {
      if (dVar28 < pdVar5[-1] - *pdVar5) {
        uVar11 = uVar6 & 0xffffffff;
        dVar28 = pdVar5[-1] - *pdVar5;
      }
      uVar6 = uVar6 + 1;
      pdVar5 = pdVar5 + 3;
    } while (uVar21 != uVar6);
    if (1e-08 <= dVar28) {
      iVar12 = (int)uVar11 * 2;
      iVar9 = (int)uVar11 * 2 + 1;
      lVar16 = (longlong)iVar9;
      lVar7 = (longlong)iVar12;
      local_298 = *(double *)((longlong)local_268 + 0x10 + lVar16 * 0x18);
      dVar28 = *(double *)((longlong)local_268 + 0x10 + lVar7 * 0x18);
      dVar29 = local_298 - dVar28;
      local_2d8 = *(int **)((longlong)local_268 + lVar16 * 0x18);
      local_2b8 = *(double *)((longlong)local_268 + 8 + lVar16 * 0x18);
      dVar30 = *(double *)((longlong)local_268 + lVar7 * 0x18);
      dVar34 = *(double *)((longlong)local_268 + 8 + lVar7 * 0x18);
      dVar2 = local_2b8 - dVar34;
      dVar24 = (double)local_2d8 - dVar30;
      dVar25 = dVar29 * dVar29 + dVar24 * dVar24 + dVar2 * dVar2;
      local_280 = (double)CONCAT44(uVar23,uVar22);
      if (9.99999993922529e-09 < dVar25) {
        dVar25 = 1.0 / SQRT(dVar25);
        dVar24 = dVar24 * dVar25;
        dVar2 = dVar2 * dVar25;
        dVar29 = dVar29 * dVar25;
      }
      uVar21 = 1;
      if (1 < local_2e0._0_4_) {
        uVar21 = (ulonglong)local_2e0 & 0xffffffff;
      }
      pdVar5 = (double *)((longlong)local_268 + 0x10);
      uVar11 = 0xffffffff;
      dVar25 = -1.79769313486232e+308;
      uVar6 = 0;
      do {
        dVar32 = dVar29 * (*pdVar5 - dVar28) +
                 dVar24 * (pdVar5[-2] - dVar30) + dVar2 * (pdVar5[-1] - dVar34);
        dVar27 = (*pdVar5 - dVar28) - dVar29 * dVar32;
        dVar26 = (pdVar5[-1] - dVar34) - dVar2 * dVar32;
        dVar32 = (pdVar5[-2] - dVar30) - dVar32 * dVar24;
        dVar32 = dVar27 * dVar27 + dVar32 * dVar32 + dVar26 * dVar26;
        if (dVar25 < dVar32) {
          uVar11 = uVar6 & 0xffffffff;
          dVar25 = dVar32;
        }
        uVar6 = uVar6 + 1;
        pdVar5 = pdVar5 + 3;
      } while (uVar21 != uVar6);
      iVar15 = (int)uVar11;
      lVar16 = (longlong)iVar15;
      dVar33 = *(double *)((longlong)local_268 + 0x10 + lVar16 * 0x18) - local_298;
      dVar27 = *(double *)((longlong)local_268 + 8 + lVar16 * 0x18) - local_2b8;
      dVar26 = *(double *)((longlong)local_268 + lVar16 * 0x18) - (double)local_2d8;
      dVar32 = dVar24 * dVar27 - dVar26 * dVar2;
      dVar26 = dVar29 * dVar26 - dVar33 * dVar24;
      dVar27 = dVar2 * dVar33 - dVar27 * dVar29;
      dVar33 = dVar32 * dVar32 + dVar27 * dVar27 + dVar26 * dVar26;
      if ((dVar33 <= 1e-08) || (dVar25 < 1e-08)) {
        dStack_1f0 = 0.0;
        dStack_200 = 0.0;
        dStack_1f8 = 0.0;
        local_1e8 = 1.0;
        local_218 = (int *)0x0;
        uStack_210 = 0.0;
        local_208 = 0.0;
        local_258 = DAT_14c8463c8;
        local_268 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
        uStack_260 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
        local_178[0] = dVar24;
        local_178[1] = dVar2;
        local_178[2] = dVar29;
        FUN_146bfb7f2(&dStack_200);
        param_1 = local_2c0;
        local_2c0[6] = local_1e8;
        local_2c0[4] = dStack_1f8;
        local_2c0[5] = dStack_1f0;
        local_2c0[2] = local_208;
        local_2c0[3] = dStack_200;
        *(undefined4 *)local_2c0 = (undefined4)local_218;
        *(undefined4 *)((longlong)local_2c0 + 4) = local_218._4_4_;
        *(uint *)(local_2c0 + 1) = (uint)uStack_210;
        *(uint *)((longlong)local_2c0 + 0xc) = uStack_210._4_4_;
        local_2c0[7] = -1.79769313486232e+308;
        local_2c0[8] = -1.79769313486232e+308;
        local_2c0[9] = -1.79769313486232e+308;
        FUN_142971125(local_2c0,param_4,local_2c4);
      }
      else {
        local_2e0 = (double)CONCAT44(local_2e0._4_4_,iVar9);
        dVar25 = 1.0 / SQRT(dVar33);
        pdVar5 = (double *)((longlong)local_268 + 0x10);
        dVar24 = -1.79769313486232e+308;
        dVar2 = 1.79769313486232e+308;
        uVar6 = 0xffffffff;
        uVar8 = 0;
        uVar11 = 0xffffffff;
        do {
          dVar29 = (pdVar5[-2] - dVar30) * dVar27 * dVar25 + (pdVar5[-1] - dVar34) * dVar26 * dVar25
                   + (*pdVar5 - dVar28) * dVar32 * dVar25;
          if (dVar24 < dVar29) {
            uVar11 = uVar8 & 0xffffffff;
            dVar24 = dVar29;
          }
          if (dVar29 < dVar2) {
            uVar6 = uVar8 & 0xffffffff;
            dVar2 = dVar29;
          }
          uVar8 = uVar8 + 1;
          pdVar5 = pdVar5 + 3;
        } while (uVar21 != uVar8);
        local_218 = (int *)0x0;
        uStack_210 = 0.0;
        FUN_146be7820(&local_218,7);
        piVar10 = (int *)(longlong)(int)(uint)uStack_210;
        uVar4 = (uint)uStack_210 + 1;
        uStack_210._0_4_ = uVar4;
        if (uStack_210._4_4_ < uVar4) {
          local_2d8 = piVar10;
          FUN_146bd78c8(&local_218,piVar10);
          piVar10 = local_2d8;
        }
        local_218[(longlong)piVar10 * 3] = iVar12;
        local_218[(longlong)piVar10 * 3 + 1] = local_2e0._0_4_;
        local_218[(longlong)piVar10 * 3 + 2] = iVar15;
        iVar9 = local_2e0._0_4_;
        if (1e-08 < dVar24) {
          piVar10 = (int *)(longlong)(int)(uint)uStack_210;
          uStack_210._0_4_ = (uint)uStack_210 + 1;
          if (uStack_210._4_4_ < (uint)uStack_210) {
            local_2d8 = piVar10;
            FUN_146bd78c8(&local_218);
            piVar10 = local_2d8;
          }
          local_218[(longlong)piVar10 * 3] = iVar12;
          local_218[(longlong)piVar10 * 3 + 1] = SUB84(local_2e0,0);
          iVar13 = (int)uVar11;
          local_218[(longlong)piVar10 * 3 + 2] = iVar13;
          piVar10 = (int *)(longlong)(int)(uint)uStack_210;
          uStack_210._0_4_ = (uint)uStack_210 + 1;
          if (uStack_210._4_4_ < (uint)uStack_210) {
            local_2d8 = piVar10;
            FUN_146bd78c8(&local_218,piVar10);
            piVar10 = local_2d8;
          }
          local_218[(longlong)piVar10 * 3] = SUB84(local_2e0,0);
          local_218[(longlong)piVar10 * 3 + 1] = iVar15;
          local_218[(longlong)piVar10 * 3 + 2] = iVar13;
          piVar10 = (int *)(longlong)(int)(uint)uStack_210;
          uStack_210._0_4_ = (uint)uStack_210 + 1;
          if (uStack_210._4_4_ < (uint)uStack_210) {
            local_2d8 = piVar10;
            FUN_146bd78c8(&local_218,piVar10);
            piVar10 = local_2d8;
          }
          iVar9 = SUB84(local_2e0,0);
          local_218[(longlong)piVar10 * 3] = iVar15;
          local_218[(longlong)piVar10 * 3 + 1] = iVar12;
          local_218[(longlong)piVar10 * 3 + 2] = iVar13;
        }
        uVar4 = (uint)uStack_210;
        if (dVar2 < -1e-08) {
          lVar16 = (longlong)(int)(uint)uStack_210;
          uStack_210._0_4_ = (uint)uStack_210 + 1;
          if (uStack_210._4_4_ < (uint)uStack_210) {
            FUN_146bd78c8(&local_218,uVar4);
            iVar9 = SUB84(local_2e0,0);
          }
          uVar4 = (uint)uStack_210;
          local_218[lVar16 * 3] = iVar9;
          local_218[lVar16 * 3 + 1] = iVar12;
          iVar13 = (int)uVar6;
          local_218[lVar16 * 3 + 2] = iVar13;
          lVar16 = (longlong)(int)(uint)uStack_210;
          uStack_210._0_4_ = (uint)uStack_210 + 1;
          if (uStack_210._4_4_ < (uint)uStack_210) {
            FUN_146bd78c8(&local_218,uVar4);
            iVar9 = SUB84(local_2e0,0);
          }
          uVar4 = (uint)uStack_210;
          local_218[lVar16 * 3] = iVar15;
          local_218[lVar16 * 3 + 1] = iVar9;
          local_218[lVar16 * 3 + 2] = iVar13;
          lVar16 = (longlong)(int)(uint)uStack_210;
          uStack_210._0_4_ = (uint)uStack_210 + 1;
          if (uStack_210._4_4_ < (uint)uStack_210) {
            FUN_146bd78c8(&local_218,uVar4);
          }
          local_218[lVar16 * 3] = iVar12;
          local_218[lVar16 * 3 + 1] = iVar15;
          local_218[lVar16 * 3 + 2] = iVar13;
        }
        piVar10 = local_218;
        local_2b0 = local_218;
        lVar16 = (longlong)(int)(uint)uStack_210;
        local_208 = DAT_14c8464f0;
        local_218 = (int *)DAT_14c8464e0;
        uStack_210 = DAT_14c8464e8;
        dStack_200 = 0.0;
        dStack_1f8 = 0.0;
        dStack_1f0 = 0.0;
        local_1e8 = 1.0;
        local_1e0[0] = 1.0;
        local_1e0[1] = 1.0;
        local_1e0[2] = 1.0;
        if (lVar16 != 0) {
          local_278 = piVar10 + lVar16 * 3;
          dVar28 = 1.79769313486232e+308;
          pdVar5 = local_1e0 + 3;
          do {
            lVar16 = (longlong)piVar10[1];
            lVar7 = (longlong)*piVar10;
            local_150 = *(double *)((longlong)dVar31 + 0x10 + lVar16 * 0x18);
            local_138 = *(double *)((longlong)dVar31 + 0x10 + lVar7 * 0x18);
            local_178[2] = local_150 - local_138;
            dVar30 = *(double *)((longlong)dVar31 + lVar16 * 0x18);
            local_158 = *(double *)((longlong)dVar31 + 8 + lVar16 * 0x18);
            local_298 = *(double *)((longlong)dVar31 + lVar7 * 0x18);
            local_140 = *(double *)((longlong)dVar31 + 8 + lVar7 * 0x18);
            local_178[1] = local_158 - local_140;
            uStack_290 = 0;
            dVar24 = dVar30 - local_298;
            dVar34 = SQRT(local_178[2] * local_178[2] +
                          dVar24 * dVar24 + local_178[1] * local_178[1]);
            dVar2 = 1.0 / dVar34;
            if (0.0 < dVar34) {
              local_178[2] = local_178[2] * dVar2;
              local_178[1] = local_178[1] * dVar2;
            }
            else {
              local_178[1] = 0.0;
              local_178[2] = 0.0;
            }
            lVar16 = (longlong)piVar10[2];
            local_2b8 = *(double *)((longlong)dVar31 + 0x10 + lVar16 * 0x18);
            local_150 = local_2b8 - local_150;
            dVar25 = *(double *)((longlong)dVar31 + lVar16 * 0x18);
            local_270 = *(double *)((longlong)dVar31 + 8 + lVar16 * 0x18);
            local_158 = local_270 - local_158;
            dVar30 = dVar25 - dVar30;
            local_178[0] = (double)(-(ulonglong)(0.0 < dVar34) & (ulonglong)(dVar24 * dVar2));
            uStack_2d0 = 0;
            dVar34 = SQRT(local_150 * local_150 + dVar30 * dVar30 + local_158 * local_158);
            dVar2 = 1.0 / dVar34;
            if (0.0 < dVar34) {
              local_150 = local_150 * dVar2;
              local_158 = local_158 * dVar2;
            }
            else {
              local_158 = 0.0;
              local_150 = 0.0;
            }
            local_138 = local_138 - local_2b8;
            local_140 = local_140 - local_270;
            dVar25 = local_298 - dVar25;
            local_160 = -(ulonglong)(0.0 < dVar34) & (ulonglong)(dVar30 * dVar2);
            dVar30 = SQRT(local_138 * local_138 + dVar25 * dVar25 + local_140 * local_140);
            dVar34 = 1.0 / dVar30;
            if (0.0 < dVar30) {
              local_138 = local_138 * dVar34;
              local_140 = local_140 * dVar34;
            }
            else {
              local_140 = 0.0;
              local_138 = 0.0;
            }
            local_148 = (double)(-(ulonglong)(0.0 < dVar30) & (ulonglong)(dVar25 * dVar34));
            dVar34 = local_178[1] * local_148 - local_178[0] * local_140;
            dVar2 = local_178[0] * local_138 - local_148 * local_178[2];
            dVar24 = local_178[2] * local_140 - local_178[1] * local_138;
            dVar30 = dVar34 * dVar34 + dVar24 * dVar24 + dVar2 * dVar2;
            local_2e0 = dVar28;
            local_2d8 = piVar10;
            if (9.99999993922529e-09 < dVar30) {
              dVar30 = 1.0 / SQRT(dVar30);
              dVar24 = dVar24 * dVar30;
              dVar2 = dVar2 * dVar30;
              dVar34 = dVar34 * dVar30;
              lVar16 = 0;
              do {
                local_268 = local_178[lVar16 * 3];
                local_250 = local_178[lVar16 * 3 + 1];
                local_230[1] = local_268 * dVar2 - dVar24 * local_250;
                local_238 = local_178[lVar16 * 3 + 2];
                local_240 = local_238 * dVar24 - dVar34 * local_268;
                local_258 = local_250 * dVar34 - dVar2 * local_238;
                local_1e0[3] = 0.0;
                local_1e0[4] = 0.0;
                local_1e0[5] = 0.0;
                local_1e0[6] = 1.0;
                local_2e0 = dVar28;
                uStack_260 = dVar24;
                local_248 = dVar2;
                local_230[0] = dVar34;
                FUN_146bfbbda(pdVar5,&local_268);
                local_258 = 0.0;
                local_268 = 0.0;
                uStack_260 = 0.0;
                local_250 = local_1e0[3];
                local_248 = local_1e0[4];
                local_240 = local_1e0[5];
                local_238 = local_1e0[6];
                local_230[0] = -1.79769313486232e+308;
                local_230[1] = -1.79769313486232e+308;
                local_230[2] = -1.79769313486232e+308;
                local_108[0] = 1.79769313486232e+308;
                local_108[1] = 1.79769313486232e+308;
                local_108[2] = 1.79769313486232e+308;
                local_128[0] = -1.79769313486232e+308;
                local_128[1] = -1.79769313486232e+308;
                local_128[2] = -1.79769313486232e+308;
                uVar11 = 0;
                do {
                  local_1e0[5] = *(double *)((longlong)dVar31 + 0x10 + uVar11 * 0x18) - local_258;
                  local_1e0[4] = *(double *)((longlong)dVar31 + 8 + uVar11 * 0x18) - uStack_260;
                  local_1e0[3] = *(double *)((longlong)dVar31 + uVar11 * 0x18) - local_268;
                  FUN_146bf2028(&local_250,local_190,pdVar5);
                  lVar7 = 0;
                  do {
                    dVar28 = local_190[lVar7];
                    uVar6 = -(ulonglong)(local_108[lVar7] <= dVar28);
                    local_108[lVar7] =
                         (double)(~uVar6 & (ulonglong)dVar28 | (ulonglong)local_108[lVar7] & uVar6);
                    uVar6 = -(ulonglong)(dVar28 <= local_128[lVar7]);
                    local_128[lVar7] =
                         (double)(~uVar6 & (ulonglong)dVar28 | (ulonglong)local_128[lVar7] & uVar6);
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 3);
                  uVar11 = uVar11 + 1;
                } while (uVar11 != uVar21);
                lVar7 = 0;
                do {
                  local_190[lVar7] = (local_128[lVar7] + local_108[lVar7]) * 0.5;
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 3);
                FUN_146bed047(pdVar5,&local_250,local_190);
                dVar28 = local_2e0;
                local_258 = local_1e0[5] + local_258;
                uStack_260 = local_1e0[4] + uStack_260;
                local_268 = local_1e0[3] + local_268;
                uVar11 = 0;
                do {
                  local_1e0[5] = *(double *)((longlong)dVar31 + 0x10 + uVar11 * 0x18) - local_258;
                  local_1e0[4] = *(double *)((longlong)dVar31 + 8 + uVar11 * 0x18) - uStack_260;
                  local_1e0[3] = *(double *)((longlong)dVar31 + uVar11 * 0x18) - local_268;
                  FUN_146bf2028(&local_250,local_1e0 + 7,pdVar5);
                  lVar7 = 7;
                  do {
                    dVar30 = local_1e0[lVar7];
                    uVar6 = -(ulonglong)(-dVar30 <= dVar30);
                    dVar30 = (double)(~uVar6 & (ulonglong)-dVar30 | (ulonglong)dVar30 & uVar6);
                    uVar6 = -(ulonglong)(dVar30 <= (double)(&local_268)[lVar7]);
                    (&local_268)[lVar7] = uVar6 & (&local_268)[lVar7] | ~uVar6 & (ulonglong)dVar30;
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 10);
                  uVar11 = uVar11 + 1;
                } while (uVar11 != uVar21);
                dVar30 = 0.0;
                if (0.0 <= local_230[2]) {
                  dVar30 = local_230[2];
                }
                uVar22 = 0;
                uVar23 = 0;
                if (0.0 <= local_230[1]) {
                  uVar22 = SUB84(local_230[1],0);
                  uVar23 = (undefined4)((ulonglong)local_230[1] >> 0x20);
                }
                dVar25 = 0.0;
                if (0.0 <= local_230[0]) {
                  dVar25 = local_230[0];
                }
                dVar30 = ((double)CONCAT44(uVar23,uVar22) * dVar30 +
                         dVar25 * (double)CONCAT44(uVar23,uVar22) + dVar30 * dVar25) * 8.0;
                if (dVar30 < dVar28) {
                  puVar17 = &local_268;
                  puVar18 = &local_218;
                  for (lVar7 = 10; dVar28 = dVar30, lVar7 != 0; lVar7 = lVar7 + -1) {
                    *puVar18 = *puVar17;
                    puVar17 = puVar17 + 1;
                    puVar18 = puVar18 + 1;
                  }
                }
                lVar16 = lVar16 + 1;
              } while (lVar16 != 3);
            }
            piVar10 = local_2d8 + 3;
          } while (piVar10 != local_278);
        }
        FUN_142971125(&local_218,param_4,local_2c4);
        param_1 = local_2c0;
        uVar22 = 0;
        uVar23 = 0;
        if (0.0 <= local_1e0[2]) {
          uVar22 = SUB84(local_1e0[2],0);
          uVar23 = (undefined4)((ulonglong)local_1e0[2] >> 0x20);
        }
        dVar28 = 0.0;
        if (0.0 <= local_1e0[1]) {
          dVar28 = local_1e0[1];
        }
        dVar30 = 0.0;
        if (0.0 <= local_1e0[0]) {
          dVar30 = local_1e0[0];
        }
        dVar34 = (double)CONCAT44(uVar38,uVar37) - local_2a0;
        dVar24 = (double)CONCAT44(uVar36,uVar35) - local_2a8;
        dVar2 = (double)(-(ulonglong)(0.0 <= dVar24) & (ulonglong)dVar24);
        dVar25 = (double)CONCAT44(uVar40,uVar39) - local_280;
        dVar29 = (double)(-(ulonglong)(0.0 <= dVar25) & (ulonglong)dVar25);
        dVar2 = (dVar29 + dVar2) * (double)(-(ulonglong)(0.0 <= dVar34) & (ulonglong)dVar34) +
                dVar29 * dVar2;
        if ((dVar28 * (double)CONCAT44(uVar23,uVar22) +
            dVar30 * dVar28 + (double)CONCAT44(uVar23,uVar22) * dVar30) * 8.0 <= dVar2 + dVar2) {
          pdVar5 = (double *)&local_218;
          pdVar19 = local_2c0;
          for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
            *pdVar19 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            pdVar19 = pdVar19 + 1;
          }
        }
        else {
          *local_2c0 = ((double)CONCAT44(uVar38,uVar37) + local_2a0) * 0.5;
          local_2c0[1] = ((double)CONCAT44(uVar36,uVar35) + local_2a8) * 0.5;
          local_2c0[2] = ((double)CONCAT44(uVar40,uVar39) + local_280) * 0.5;
          local_2c0[3] = 0.0;
          local_2c0[4] = 0.0;
          local_2c0[5] = 0.0;
          local_2c0[6] = 1.0;
          local_2c0[7] = dVar34 * 0.5;
          local_2c0[8] = dVar24 * 0.5;
          local_2c0[9] = dVar25 * 0.5;
        }
        if (local_2b0 != (int *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      *local_2c0 = ((double)CONCAT44(uVar38,uVar37) + local_2a0) * 0.5;
      local_2c0[1] = ((double)CONCAT44(uVar36,uVar35) + local_2a8) * 0.5;
      local_2c0[2] = ((double)CONCAT44(uVar40,uVar39) + (double)CONCAT44(uVar23,uVar22)) * 0.5;
      local_2c0[3] = 0.0;
      local_2c0[4] = 0.0;
      local_2c0[5] = 0.0;
      local_2c0[6] = 1.0;
      local_2c0[7] = ((double)CONCAT44(uVar38,uVar37) - local_2a0) * 0.5;
      local_2c0[8] = ((double)CONCAT44(uVar36,uVar35) - local_2a8) * 0.5;
      local_2c0[9] = ((double)CONCAT44(uVar40,uVar39) - (double)CONCAT44(uVar23,uVar22)) * 0.5;
      param_1 = local_2c0;
    }
    if (dVar31 != 0.0) {
      FUN_1400020a8(dVar31);
    }
    if (lVar20 != 0) {
      FUN_1400020a8(lVar20);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142963c9c FUN_142963c9c body=243 status=ok
// SIG undefined FUN_142963c9c(void)

undefined8 FUN_142963c9c(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar9 = 0;
  if (param_3 != param_4) {
    uVar6 = (ulonglong)param_3;
    uVar4 = *(uint *)(*param_2 + (longlong)(int)param_3 * 4);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
    uVar8 = (ulonglong)(uVar4 & 0x1ff);
    dVar10 = 0.0;
    dVar11 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
    dVar13 = *(double *)(lVar5 + 8 + uVar8 * 0x18);
    dVar12 = *(double *)(lVar5 + uVar8 * 0x18);
    do {
      uVar8 = (longlong)((int)uVar6 + 1) % (longlong)(int)param_2[1];
      uVar6 = uVar8 & 0xffffffff;
      uVar7 = (uint)uVar8;
      uVar4 = *(uint *)(*param_2 + (longlong)(int)uVar7 * 4);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
      uVar8 = (ulonglong)(uVar4 & 0x1ff);
      dVar1 = *(double *)(lVar5 + uVar8 * 0x18);
      dVar2 = *(double *)(lVar5 + 8 + uVar8 * 0x18);
      dVar3 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
      dVar12 = dVar1 - dVar12;
      dVar13 = dVar2 - dVar13;
      dVar11 = dVar3 - dVar11;
      dVar10 = dVar10 + SQRT(dVar11 * dVar11 + dVar12 * dVar12 + dVar13 * dVar13);
      dVar11 = dVar3;
      dVar13 = dVar2;
      dVar12 = dVar1;
    } while (uVar7 != param_4);
    uVar9 = CONCAT44((int)((ulonglong)dVar10 >> 0x20),(float)dVar10);
  }
  return uVar9;
}



// FUNCTION 142963d90 FUN_142963d90 body=141 status=ok
// SIG undefined FUN_142963d90(void)

void FUN_142963d90(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  iVar2 = (**(code **)(**(longlong **)*param_1 + 0x48))
                    (*(longlong **)*param_1,param_2,&local_30,local_20);
  if ((iVar2 == 0) && (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    iVar2 = (int)plVar1[1];
    *(uint *)(plVar1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar1 + 0xc) < iVar2 + 1U) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142963e1e FUN_142963e1e body=2289 status=ok
// SIG undefined FUN_142963e1e(void)

void FUN_142963e1e(longlong param_1,ulonglong param_2,longlong param_3,uint param_4,longlong param_5
                  )

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_128 [32];
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  uint local_90 [6];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(longlong *)(param_1 + 0x208) != 0) && (*(longlong **)(param_3 + 0x208) != (longlong *)0x0))
  {
    uVar12 = (ulonglong)param_4;
    local_100 = param_2;
    iVar3 = (**(code **)(**(longlong **)(param_3 + 0x208) + 0xa0))();
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xa0))();
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    local_108 = param_3;
    local_98 = uVar12;
    if (0 < iVar3) {
      iVar3 = (int)local_100;
      local_a0 = (ulonglong)((uint)(iVar3 * 3) >> 9);
      uVar16 = (ulonglong)(iVar3 * 3 & 0x1ff);
      uVar11 = iVar3 * 3 + 2;
      local_b8 = (ulonglong)(uVar11 >> 9);
      local_b0 = (ulonglong)(uVar11 & 0x1ff);
      uVar11 = iVar3 * 3 + 1;
      local_c8 = (ulonglong)(uVar11 >> 9);
      local_c0 = (ulonglong)(uVar11 & 0x1ff);
      uVar2 = uVar12 * 3 + 2;
      local_e0 = uVar2 >> 9 & 0x7fffff;
      local_d8 = (ulonglong)((uint)uVar2 & 0x1ff);
      uVar2 = uVar12 * 3 + 1;
      local_f0 = uVar2 >> 9 & 0x7fffff;
      local_e8 = (ulonglong)((uint)uVar2 & 0x1ff);
      local_f8 = (ulonglong)(param_4 * 3 >> 9);
      local_d0 = (ulonglong)(param_4 * 3 & 0x1ff);
      lVar17 = 0;
      local_a8 = uVar16;
      do {
        if (lVar17 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x28)) {
          lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20) + lVar17 * 8);
        }
        else {
          lVar14 = 0;
        }
        plVar10 = *(longlong **)(param_3 + 0x208);
        if (lVar17 < (int)plVar10[5]) {
          lVar13 = *(longlong *)(plVar10[4] + lVar17 * 8);
        }
        else {
          lVar13 = 0;
        }
        lVar14 = *(longlong *)(lVar14 + 0x78);
        iVar3 = *(int *)(*(longlong *)(lVar14 + local_a0 * 8) + uVar16 * 4);
        if (-1 < iVar3) {
          local_78 = CONCAT44(*(undefined4 *)(*(longlong *)(lVar14 + local_c8 * 8) + local_c0 * 4),
                              iVar3);
          uStack_70 = CONCAT44(uStack_70._4_4_,
                               *(undefined4 *)(*(longlong *)(lVar14 + local_b8 * 8) + local_b0 * 4))
          ;
          lVar14 = *(longlong *)(lVar13 + 0x78);
          local_90[3] = *(int *)(*(longlong *)(lVar14 + local_f8 * 8) + local_d0 * 4);
          local_90[4] = *(undefined4 *)(*(longlong *)(lVar14 + local_f0 * 8) + local_e8 * 4);
          local_90[5] = *(undefined4 *)(*(longlong *)(lVar14 + local_e0 * 8) + local_d8 * 4);
          lVar14 = 0;
          do {
            uVar11 = *(uint *)((longlong)&local_78 + lVar14 * 4);
            uVar5 = FUN_146bcd1d8(*(longlong *)(param_5 + 0x2a0) + lVar17 * 0xa8,uVar11);
            if (uVar5 == 0xffffffff) {
              if (lVar17 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x28)) {
                lVar8 = *(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x20) + lVar17 * 8);
              }
              else {
                lVar8 = 0;
              }
              if (lVar17 < *(int *)(*(longlong *)(local_108 + 0x208) + 0x28)) {
                uVar9 = *(undefined8 *)
                         (*(longlong *)(*(longlong *)(local_108 + 0x208) + 0x20) + lVar17 * 8);
              }
              else {
                uVar9 = 0;
              }
              lVar8 = *(longlong *)
                       (*(longlong *)(lVar8 + 0x48) + (ulonglong)(uVar11 >> 5 & 0x3fffff8));
              uVar12 = (ulonglong)((uVar11 & 0xff) << 3);
              local_90[0] = *(uint *)(lVar8 + uVar12);
              local_90[1] = *(undefined4 *)(lVar8 + 4 + uVar12);
              uVar5 = FUN_146c2d0a4(uVar9,local_90);
              FUN_146bcd0f6(lVar17 * 0xa8 + *(longlong *)(param_5 + 0x2a0),uVar11,uVar5);
            }
            uVar12 = local_98;
            local_90[lVar14 + 3] = uVar5;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 3);
          FUN_146c01486(lVar13,local_98 & 0xffffffff,local_90 + 3,1);
          plVar10 = *(longlong **)(local_108 + 0x208);
          uVar16 = local_a8;
          param_3 = local_108;
        }
        lVar17 = lVar17 + 1;
        iVar3 = (**(code **)(*plVar10 + 0xa0))();
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xa0))();
        if (iVar4 < iVar3) {
          iVar3 = iVar4;
        }
      } while (lVar17 < iVar3);
    }
    iVar3 = (**(code **)(**(longlong **)(param_3 + 0x208) + 0xb0))();
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    if (0 < iVar3) {
      iVar3 = (int)local_100;
      local_a0 = (ulonglong)((uint)(iVar3 * 3) >> 9);
      uVar16 = (ulonglong)(iVar3 * 3 & 0x1ff);
      uVar11 = iVar3 * 3 + 2;
      local_b8 = (ulonglong)(uVar11 >> 9);
      local_b0 = (ulonglong)(uVar11 & 0x1ff);
      uVar11 = iVar3 * 3 + 1;
      local_c8 = (ulonglong)(uVar11 >> 9);
      local_c0 = (ulonglong)(uVar11 & 0x1ff);
      uVar11 = (int)uVar12 * 3;
      uVar2 = uVar12 * 3 + 2;
      local_e0 = uVar2 >> 9 & 0x7fffff;
      local_d8 = (ulonglong)((uint)uVar2 & 0x1ff);
      uVar2 = uVar12 * 3 + 1;
      local_f0 = uVar2 >> 9 & 0x7fffff;
      local_e8 = (ulonglong)((uint)uVar2 & 0x1ff);
      local_f8 = (ulonglong)(uVar11 >> 9);
      local_d0 = (ulonglong)(uVar11 & 0x1ff);
      lVar17 = 0;
      local_a8 = uVar16;
      do {
        if (lVar17 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
          lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar17 * 8);
        }
        else {
          lVar14 = 0;
        }
        plVar10 = *(longlong **)(param_3 + 0x208);
        if (lVar17 < (int)plVar10[7]) {
          lVar13 = *(longlong *)(plVar10[6] + lVar17 * 8);
        }
        else {
          lVar13 = 0;
        }
        lVar14 = *(longlong *)(lVar14 + 0x78);
        iVar3 = *(int *)(*(longlong *)(lVar14 + local_a0 * 8) + uVar16 * 4);
        if (-1 < iVar3) {
          local_90[3] = iVar3;
          local_90[4] = *(undefined4 *)(*(longlong *)(lVar14 + local_c8 * 8) + local_c0 * 4);
          local_90[5] = *(undefined4 *)(*(longlong *)(lVar14 + local_b8 * 8) + local_b0 * 4);
          lVar14 = *(longlong *)(lVar13 + 0x78);
          local_90[2] = *(undefined4 *)(*(longlong *)(lVar14 + local_e0 * 8) + local_d8 * 4);
          local_90[1] = *(undefined4 *)(*(longlong *)(lVar14 + local_f0 * 8) + local_e8 * 4);
          local_90[0] = *(uint *)(*(longlong *)(lVar14 + local_f8 * 8) + local_d0 * 4);
          lVar14 = 0;
          do {
            uVar11 = local_90[lVar14 + 3];
            uVar5 = FUN_146bcd1d8(*(longlong *)(param_5 + 0x2b0) + lVar17 * 0xa8);
            if (uVar5 == 0xffffffff) {
              if (lVar17 < *(int *)(*(longlong *)(param_1 + 0x208) + 0x38)) {
                lVar8 = *(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x30) + lVar17 * 8);
              }
              else {
                lVar8 = 0;
              }
              if (lVar17 < *(int *)(*(longlong *)(local_108 + 0x208) + 0x38)) {
                uVar9 = *(undefined8 *)
                         (*(longlong *)(*(longlong *)(local_108 + 0x208) + 0x30) + lVar17 * 8);
              }
              else {
                uVar9 = 0;
              }
              lVar8 = *(longlong *)(lVar8 + 0x48);
              lVar15 = 0;
              do {
                uVar5 = uVar11 * 3 + (int)lVar15;
                *(undefined4 *)((longlong)&local_78 + lVar15 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8) +
                      (ulonglong)(uVar5 & 0x1ff) * 4);
                lVar15 = lVar15 + 1;
              } while (lVar15 != 3);
              uVar5 = FUN_146c2f9e2(uVar9,&local_78);
              FUN_146bcd0f6(lVar17 * 0xa8 + *(longlong *)(param_5 + 0x2b0),uVar11);
            }
            uVar12 = local_98;
            local_90[lVar14] = uVar5;
            lVar14 = lVar14 + 1;
          } while (lVar14 != 3);
          FUN_146c01580(lVar13,local_98 & 0xffffffff,local_90,1);
          plVar10 = *(longlong **)(local_108 + 0x208);
          uVar16 = local_a8;
          param_3 = local_108;
        }
        lVar17 = lVar17 + 1;
        iVar3 = (**(code **)(*plVar10 + 0xb0))();
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xb0))();
        if (iVar4 < iVar3) {
          iVar3 = iVar4;
        }
      } while (lVar17 < iVar3);
    }
    lVar17 = *(longlong *)(param_1 + 0x208);
    plVar10 = *(longlong **)(param_3 + 0x208);
    uVar11 = (uint)uVar12;
    if ((*(longlong *)(lVar17 + 0x40) != 0) && (lVar14 = plVar10[8], lVar14 != 0)) {
      uVar5 = (int)local_100 * 3;
      lVar13 = *(longlong *)(*(longlong *)(lVar17 + 0x40) + 0x78);
      iVar3 = *(int *)(*(longlong *)(lVar13 + (ulonglong)(uVar5 >> 9) * 8) +
                      (ulonglong)(uVar5 & 0x1ff) * 4);
      if (-1 < iVar3) {
        local_90[3] = iVar3;
        local_90[4] = *(undefined4 *)
                       (*(longlong *)(lVar13 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                       (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
        local_90[5] = *(undefined4 *)
                       (*(longlong *)(lVar13 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                       (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
        uVar2 = uVar12 * 3 + 2;
        lVar17 = *(longlong *)(lVar14 + 0x78);
        local_90[2] = *(undefined4 *)
                       (*(longlong *)(lVar17 + (uVar2 >> 9 & 0x7fffff) * 8) +
                       (ulonglong)((uint)uVar2 & 0x1ff) * 4);
        uVar2 = uVar12 * 3 + 1;
        local_90[1] = *(undefined4 *)
                       (*(longlong *)(lVar17 + (uVar2 >> 9 & 0x7fffff) * 8) +
                       (ulonglong)((uint)uVar2 & 0x1ff) * 4);
        local_90[0] = *(uint *)(*(longlong *)(lVar17 + (ulonglong)(uVar11 * 3 >> 9) * 8) +
                               (ulonglong)(uVar11 * 3 & 0x1ff) * 4);
        lVar17 = 0;
        do {
          uVar5 = local_90[lVar17 + 3];
          uVar6 = FUN_146bcd1d8(param_5 + 0x1f8,uVar5);
          if (uVar6 == 0xffffffff) {
            puVar1 = (undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x40) + 0x48) +
                       (ulonglong)(uVar5 >> 4 & 0x3fffff8)) + (ulonglong)((uVar5 & 0x7f) << 4));
            local_78 = *puVar1;
            uStack_70 = puVar1[1];
            uVar6 = FUN_146c32f5e(*(undefined8 *)(*(longlong *)(local_108 + 0x208) + 0x40),&local_78
                                 );
            FUN_146bcd0f6(param_5 + 0x1f8,uVar5,uVar6);
          }
          local_90[lVar17] = uVar6;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 3);
        FUN_146c2a048(lVar14,uVar12 & 0xffffffff,local_90,1);
        lVar17 = *(longlong *)(param_1 + 0x208);
        plVar10 = *(longlong **)(local_108 + 0x208);
        param_3 = local_108;
      }
    }
    uVar2 = local_100;
    uVar5 = (uint)local_100;
    if ((*(longlong *)(lVar17 + 0x48) != 0) && (plVar10[9] != 0)) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(plVar10[9] + 0x20) + (uVar12 >> 9 & 0x7fffff) * 8) +
       (ulonglong)(uVar11 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar17 + 0x48) + 0x20) + (local_100 >> 9 & 0x7fffff) * 8)
            + (ulonglong)(uVar5 & 0x1ff) * 4);
      plVar10 = *(longlong **)(param_3 + 0x208);
    }
    uVar6 = (**(code **)(*plVar10 + 0xc0))();
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xc0))();
    if ((int)uVar7 < (int)uVar6) {
      uVar6 = uVar7;
    }
    if (0 < (int)uVar6) {
      uVar16 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x208) + 0x60) + uVar16 * 8) +
             0x20) + (uVar12 >> 9 & 0x7fffff) * 8) + (ulonglong)(uVar11 & 0x1ff) * 4) =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x60) + uVar16 * 8)
                  + 0x20) + (uVar2 >> 9 & 0x7fffff) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
        uVar16 = uVar16 + 1;
      } while (uVar6 != uVar16);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142964710 FUN_142964710 body=1556 status=ok
// SIG undefined FUN_142964710(void)

void FUN_142964710(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  
  if ((*(longlong *)(param_1 + 0x208) != 0) && (*(longlong **)(param_2 + 0x208) != (longlong *)0x0))
  {
    uVar5 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xd0))();
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x208) + 0xd0))();
    if ((int)uVar6 < (int)uVar5) {
      uVar5 = uVar6;
    }
    if (0 < (int)uVar5) {
      iVar19 = (int)param_3[5];
      uVar13 = 0;
      do {
        lVar21 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x208) + 0x50) + uVar13 * 8);
        lVar18 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x208) + 0x50) + uVar13 * 8);
        iVar7 = iVar19;
        if (iVar19 == 0) {
          uVar22 = 1;
          uVar20 = 0;
          iVar17 = 0;
          iVar16 = 0;
        }
        else {
          puVar9 = (uint *)param_3[4];
          if ((uint *)param_3[4] == (uint *)0x0) {
            puVar9 = (uint *)(param_3 + 2);
          }
          uVar6 = *puVar9;
          if (uVar6 == 0) {
            iVar16 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar16 = iVar19 + -1;
            }
            uVar20 = 0;
            uVar22 = (ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              uVar22 = uVar20;
            }
            iVar17 = 0;
            do {
              if (uVar22 == uVar20) goto LAB_142964841;
              iVar17 = iVar17 + 0x20;
              uVar6 = puVar9[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar6 == 0);
          }
          else {
            uVar20 = 0;
            iVar17 = 0;
          }
          uVar22 = (ulonglong)(-uVar6 & uVar6);
          uVar2 = uVar22 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar16 = (iVar17 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar19 <= iVar16) {
            iVar16 = iVar19;
          }
        }
        if (iVar16 != iVar19) {
          uVar6 = 0xffffffff;
          do {
            uVar15 = *(uint *)(*param_3 + (longlong)iVar16 * 0x10);
            uVar3 = *(uint *)(*param_3 + 4 + (longlong)iVar16 * 0x10);
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar18 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
             (ulonglong)(uVar3 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar21 + 0x20) + (ulonglong)(uVar15 >> 9) * 8) +
                  (ulonglong)(uVar15 & 0x1ff) * 4);
            uVar6 = ~(uint)uVar22 & uVar6;
            puVar9 = (uint *)param_3[4];
            if ((uint *)param_3[4] == (uint *)0x0) {
              puVar9 = (uint *)(param_3 + 2);
            }
            iVar7 = (int)param_3[5];
            iVar16 = (int)uVar20;
            lVar8 = (longlong)iVar16;
            uVar15 = puVar9[lVar8] & uVar6;
            if (uVar15 == 0) {
              iVar12 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar12 = iVar7 + -1;
              }
              iVar12 = iVar12 >> 5;
              iVar17 = iVar17 + 0x20;
              iVar11 = iVar12;
              if (iVar12 < iVar16) {
                iVar11 = iVar16;
              }
              if (iVar16 < iVar12) {
                lVar14 = 0;
                do {
                  uVar15 = puVar9[lVar8 + lVar14 + 1];
                  if (uVar15 != 0) {
                    uVar20 = (ulonglong)(iVar16 + (int)lVar14 + 1);
                    uVar6 = 0xffffffff;
                    goto LAB_142964923;
                  }
                  iVar17 = iVar17 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar11 - lVar8 != lVar14);
                uVar6 = 0xffffffff;
                iVar16 = iVar11;
              }
              uVar20 = (ulonglong)(iVar16 + 1);
              iVar16 = iVar7;
            }
            else {
LAB_142964923:
              uVar22 = (ulonglong)(-uVar15 & uVar15);
              uVar2 = uVar22 * 2 + 1;
              lVar8 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              iVar16 = (iVar17 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
              if (iVar7 <= iVar16) {
                iVar16 = iVar7;
              }
            }
          } while (iVar16 != iVar19);
        }
LAB_142964841:
        iVar19 = iVar7;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar5);
    }
    lVar21 = *(longlong *)(param_1 + 0x208);
    iVar19 = *(int *)(lVar21 + 0x98);
    if (iVar19 == 0) {
      uVar20 = 1;
      iVar16 = 0;
      uVar13 = 0;
      iVar7 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar21 + 0x90);
      if (*(uint **)(lVar21 + 0x90) == (uint *)0x0) {
        puVar9 = (uint *)(lVar21 + 0x80);
      }
      uVar5 = *puVar9;
      if (uVar5 == 0) {
        iVar7 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar7 = iVar19 + -1;
        }
        uVar13 = 0;
        uVar20 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar20 = uVar13;
        }
        iVar16 = 0;
        do {
          if (uVar20 == uVar13) goto LAB_142964b3f;
          iVar16 = iVar16 + 0x20;
          uVar5 = puVar9[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar5 == 0);
      }
      else {
        iVar16 = 0;
        uVar13 = 0;
      }
      uVar20 = (ulonglong)(-uVar5 & uVar5);
      uVar22 = uVar20 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar7 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar7) {
        iVar7 = iVar19;
      }
    }
    if (iVar7 != iVar19) {
      uVar5 = 0xffffffff;
      do {
        lVar18 = *(longlong *)(lVar21 + 0x70);
        lVar8 = FUN_146bcdc68(*(undefined8 *)(param_2 + 0x208),
                              *(undefined8 *)(lVar18 + (longlong)iVar7 * 0x18));
        if (lVar8 != 0) {
          FUN_146bcdd1a(lVar8,*(undefined8 *)(lVar18 + (longlong)iVar7 * 0x18 + 8),param_3);
        }
        uVar5 = uVar5 & ~(uint)uVar20;
        puVar9 = *(uint **)(lVar21 + 0x90);
        if (*(uint **)(lVar21 + 0x90) == (uint *)0x0) {
          puVar9 = (uint *)(lVar21 + 0x80);
        }
        iVar17 = *(int *)(lVar21 + 0x98);
        iVar7 = (int)uVar13;
        lVar18 = (longlong)iVar7;
        uVar6 = puVar9[lVar18] & uVar5;
        if (uVar6 == 0) {
          iVar12 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar12 = iVar17 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar11 = iVar12;
          if (iVar12 < iVar7) {
            iVar11 = iVar7;
          }
          if (iVar7 < iVar12) {
            lVar8 = 0;
            do {
              uVar6 = puVar9[lVar18 + lVar8 + 1];
              if (uVar6 != 0) {
                uVar13 = (ulonglong)(iVar7 + (int)lVar8 + 1);
                uVar5 = 0xffffffff;
                goto LAB_142964ada;
              }
              iVar16 = iVar16 + 0x20;
              lVar8 = lVar8 + 1;
            } while (iVar11 - lVar18 != lVar8);
            uVar5 = 0xffffffff;
            iVar7 = iVar11;
          }
          uVar13 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar17;
        }
        else {
LAB_142964ada:
          uVar20 = (ulonglong)(-uVar6 & uVar6);
          uVar22 = uVar20 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar7 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar7) {
            iVar7 = iVar17;
          }
        }
      } while (iVar7 != iVar19);
      lVar21 = *(longlong *)(param_1 + 0x208);
    }
LAB_142964b3f:
    iVar19 = *(int *)(lVar21 + 0x108);
    if (iVar19 == 0) {
      uVar20 = 1;
      uVar13 = 0;
      iVar16 = 0;
      iVar7 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar21 + 0x100);
      if (*(uint **)(lVar21 + 0x100) == (uint *)0x0) {
        puVar9 = (uint *)(lVar21 + 0xf0);
      }
      uVar5 = *puVar9;
      if (uVar5 == 0) {
        iVar7 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar7 = iVar19 + -1;
        }
        uVar13 = 0;
        uVar20 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar20 = uVar13;
        }
        iVar16 = 0;
        do {
          if (uVar20 == uVar13) {
            return;
          }
          iVar16 = iVar16 + 0x20;
          uVar5 = puVar9[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar13 = 0;
        iVar16 = 0;
      }
      uVar20 = (ulonglong)(-uVar5 & uVar5);
      uVar22 = uVar20 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar7 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar7) {
        iVar7 = iVar19;
      }
    }
    if (iVar7 != iVar19) {
      uVar5 = 0xffffffff;
      do {
        lVar18 = *(longlong *)(lVar21 + 0xe0);
        cVar4 = FUN_146bce360(*(undefined8 *)(param_2 + 0x208),
                              *(undefined8 *)(lVar18 + (longlong)iVar7 * 0x18));
        if (cVar4 != '\0') {
          puVar1 = (undefined8 *)(lVar18 + (longlong)iVar7 * 0x18);
          plVar10 = (longlong *)FUN_146bce3f6(*(undefined8 *)(param_2 + 0x208),*puVar1);
          (**(code **)(*plVar10 + 0x30))(plVar10,puVar1[1],param_3);
        }
        uVar5 = uVar5 & ~(uint)uVar20;
        puVar9 = *(uint **)(lVar21 + 0x100);
        if (*(uint **)(lVar21 + 0x100) == (uint *)0x0) {
          puVar9 = (uint *)(lVar21 + 0xf0);
        }
        iVar17 = *(int *)(lVar21 + 0x108);
        iVar7 = (int)uVar13;
        lVar18 = (longlong)iVar7;
        uVar6 = puVar9[lVar18] & uVar5;
        if (uVar6 == 0) {
          iVar12 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar12 = iVar17 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar11 = iVar12;
          if (iVar12 < iVar7) {
            iVar11 = iVar7;
          }
          if (iVar7 < iVar12) {
            lVar8 = 0;
            do {
              uVar6 = puVar9[lVar18 + lVar8 + 1];
              if (uVar6 != 0) {
                uVar13 = (ulonglong)(iVar7 + (int)lVar8 + 1);
                uVar5 = 0xffffffff;
                goto LAB_142964c9e;
              }
              iVar16 = iVar16 + 0x20;
              lVar8 = lVar8 + 1;
            } while (iVar11 - lVar18 != lVar8);
            uVar5 = 0xffffffff;
            iVar7 = iVar11;
          }
          uVar13 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar17;
        }
        else {
LAB_142964c9e:
          uVar20 = (ulonglong)(-uVar6 & uVar6);
          uVar22 = uVar20 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar7 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar7) {
            iVar7 = iVar17;
          }
        }
      } while (iVar7 != iVar19);
    }
  }
  return;
}



// FUNCTION 142964d24 FUN_142964d24 body=377 status=ok
// SIG undefined FUN_142964d24(void)

void FUN_142964d24(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)(param_1 + 0x278);
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_14051b394(local_48,(ulonglong)uVar2,1);
  if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x298);
    puVar12 = puVar13 + (longlong)*(int *)(param_1 + 0x2a0) * 2;
    do {
      if ((longlong)*(int *)(puVar13 + 1) != 0) {
        piVar15 = (int *)*puVar13;
        piVar14 = piVar15 + (longlong)*(int *)(puVar13 + 1) * 8;
        do {
          iVar3 = *piVar15;
          iVar5 = piVar15[2];
          iVar6 = piVar15[3];
          iVar7 = piVar15[4];
          iVar8 = piVar15[5];
          *(undefined8 *)(local_48[0] + 0x10 + (longlong)iVar3 * 0x18) =
               *(undefined8 *)(piVar15 + 6);
          piVar1 = (int *)(local_48[0] + (longlong)iVar3 * 0x18);
          *piVar1 = iVar5;
          piVar1[1] = iVar6;
          piVar1[2] = iVar7;
          piVar1[3] = iVar8;
          piVar15 = piVar15 + 8;
        } while (piVar15 != piVar14);
      }
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar12);
  }
  if (0 < (int)uVar2) {
    lVar18 = 0;
    do {
      puVar16 = (undefined4 *)(local_48[0] + lVar18);
      iVar3 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
        FUN_1403e3958((longlong *)(param_1 + 8),iVar3);
      }
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = *(undefined8 *)(puVar16 + 4);
      uVar9 = puVar16[1];
      uVar10 = puVar16[2];
      uVar11 = puVar16[3];
      puVar17 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
      *puVar17 = *puVar16;
      puVar17[1] = uVar9;
      puVar17[2] = uVar10;
      puVar17[3] = uVar11;
      lVar18 = lVar18 + 0x18;
    } while ((ulonglong)uVar2 * 0x18 != lVar18);
  }
  if ((longlong)*(int *)(param_1 + 0x2c8) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x2c0);
    puVar12 = puVar13 + (longlong)*(int *)(param_1 + 0x2c8) * 2;
    do {
      if ((longlong)*(int *)(puVar13 + 1) != 0) {
        puVar17 = (undefined4 *)*puVar13;
        puVar16 = puVar17 + (longlong)*(int *)(puVar13 + 1) * 3;
        do {
          FUN_146bd77a2(param_1,*puVar17,puVar17[1],puVar17[2]);
          puVar17 = puVar17 + 3;
        } while (puVar17 != puVar16);
      }
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar12);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142964e9e FUN_142964e9e body=89 status=ok
// SIG undefined FUN_142964e9e(void)

void FUN_142964e9e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140d97c6c(param_1,0);
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



// FUNCTION 142964ef8 FUN_142964ef8 body=38 status=ok
// SIG undefined FUN_142964ef8(void)

undefined8 FUN_142964ef8(undefined8 param_1,int param_2)

{
  FUN_14295dcfc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142964f2a FUN_142964f2a body=176 status=ok
// SIG undefined FUN_142964f2a(void)

undefined4 FUN_142964f2a(longlong param_1,undefined8 param_2,ulonglong *param_3,double *param_4)

{
  double dVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  double *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 10) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) {
      uVar2 = 0xffffffff;
      goto LAB_142964fbe;
    }
  }
  else {
    uVar2 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_142964fbe;
  }
  dVar1 = *param_4;
  uVar3 = ~-(ulonglong)(dVar1 < 1.79769313486232e+308) & 0x7fefffffffffffff |
          (ulonglong)(dVar1 * dVar1) & -(ulonglong)(dVar1 < 1.79769313486232e+308);
  *param_3 = uVar3;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_4;
  FUN_142966bfa(uVar3,*(undefined4 *)(param_1 + 0xcc),param_2,param_3);
  uVar2 = local_14;
LAB_142964fbe:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 142964fe0 FUN_142964fe0 body=133 status=ok
// SIG undefined FUN_142964fe0(void)

bool FUN_142964fe0(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,double *param_6)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_4 = -1;
  uVar4 = DAT_14c8464e8;
  uVar3 = DAT_14c8464e0;
  param_5[2] = DAT_14c8464f0;
  *param_5 = uVar3;
  param_5[1] = uVar4;
  dVar1 = *param_6;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (3.4028234663852886e+38 <= dVar1) {
    uVar5 = 0xe0000000;
    uVar6 = 0x47efffff;
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  iVar2 = *(int *)(param_1 + 0xcc);
  if ((iVar2 < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (-1 < iVar2) goto LAB_142965045;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_142965045:
    FUN_14296701a(uVar5,iVar2,param_2,param_3,param_4,param_5,param_6);
    return *param_4 != -1;
  }
  return false;
}



// FUNCTION 142965066 FUN_142965066 body=76 status=ok
// SIG undefined FUN_142965066(void)

void FUN_142965066(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = in_stack_00000028;
  local_38 = local_20;
  (**(code **)(*param_1 + 0x30))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429650b4 FUN_1429650b4 body=84 status=ok
// SIG undefined FUN_1429650b4(void)

undefined4 FUN_1429650b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = local_38;
  local_40 = param_3;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,local_18,&local_1c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296510a FUN_14296510a body=1800 status=ok
// SIG undefined FUN_14296510a(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14296510a(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 unaff_RSI;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_398;
  iVar22 = *(int *)(param_1 + 0xcc);
  if ((iVar22 < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (-1 < iVar22) goto LAB_14296515a;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_14296515a:
    local_378 = param_4;
    FUN_14296752e(param_1,iVar22,param_2,param_3);
    uVar23 = *(uint *)(param_3 + 1);
    if ((ulonglong)uVar23 != 0) {
      uVar16 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (1 < (int)uVar23) {
        lVar2 = *param_3;
        memset(local_358,0,0x2f0);
        local_360 = lVar2 + (ulonglong)uVar23 * 0x28 + -0x28;
        local_368 = lVar2;
        fVar30 = logf((float)(int)uVar23);
        local_358[0] = (int)(longlong)(fVar30 + fVar30);
        plVar12 = &local_368;
        do {
          puVar14 = (undefined8 *)*plVar12;
          puVar18 = (undefined8 *)plVar12[1];
          iVar22 = (int)plVar12[2];
          iVar26 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar14) >> 3) * -0x33333333;
          uVar23 = iVar26 + 1;
          puVar15 = puVar14;
          puVar20 = puVar18;
          if (iVar22 != 0) {
LAB_1429651f8:
            if (8 < (int)uVar23) {
              uVar19 = (ulonglong)(uVar23 >> 1);
              uVar3 = puVar14[uVar19 * 5 + 4];
              uVar4 = puVar14[uVar19 * 5];
              uVar5 = (puVar14 + uVar19 * 5)[1];
              uVar6 = puVar14[uVar19 * 5 + 2];
              uVar7 = (puVar14 + uVar19 * 5 + 2)[1];
              puVar14[uVar19 * 5 + 4] = puVar14[4];
              uVar8 = *puVar14;
              uVar9 = puVar14[1];
              uVar10 = puVar14[3];
              puVar14[uVar19 * 5 + 2] = puVar14[2];
              (puVar14 + uVar19 * 5 + 2)[1] = uVar10;
              puVar14[uVar19 * 5] = uVar8;
              (puVar14 + uVar19 * 5)[1] = uVar9;
              puVar14[4] = uVar3;
              puVar14[2] = uVar6;
              puVar14[3] = uVar7;
              *puVar14 = uVar4;
              puVar14[1] = uVar5;
              puVar25 = puVar20 + 5;
              puVar13 = puVar14;
              do {
                puVar11 = puVar13 + 5;
                puVar21 = puVar13 + 5;
                do {
                  puVar28 = puVar21;
                  puVar13 = puVar11;
                  if (puVar20 < puVar13) break;
                  puVar11 = puVar13 + 5;
                  puVar21 = puVar28 + 5;
                } while ((double)puVar13[1] < (double)puVar14[1] ||
                         (double)puVar13[1] == (double)puVar14[1]);
                puVar11 = puVar25 + -10;
                do {
                  puVar21 = puVar25;
                  puVar27 = puVar11;
                  puVar25 = puVar21 + -5;
                  if (puVar25 <= puVar14) break;
                  puVar11 = puVar27 + -5;
                } while ((double)puVar14[1] < (double)puVar21[-4] ||
                         (double)puVar14[1] == (double)puVar21[-4]);
                if (puVar25 < puVar13) goto LAB_14296533c;
                uVar3 = puVar13[4];
                uVar4 = *puVar13;
                uVar5 = puVar13[1];
                uVar6 = puVar13[2];
                uVar7 = puVar13[3];
                puVar13[4] = puVar21[-1];
                uVar8 = *puVar25;
                uVar9 = puVar21[-4];
                uVar10 = puVar21[-2];
                puVar13[2] = puVar21[-3];
                puVar13[3] = uVar10;
                *puVar13 = uVar8;
                puVar13[1] = uVar9;
                puVar21[-1] = uVar3;
                puVar21[-3] = uVar6;
                puVar21[-2] = uVar7;
                *puVar25 = uVar4;
                puVar21[-4] = uVar5;
              } while( true );
            }
            for (; puVar15 = puVar14, puVar18 = puVar14, puVar14 < puVar20; puVar20 = puVar20 + -5)
            {
              while (puVar25 = puVar15, puVar18 = puVar18 + 5, puVar18 <= puVar20) {
                puVar15 = puVar18;
                if ((double)puVar18[1] < (double)puVar25[1] ||
                    (double)puVar18[1] == (double)puVar25[1]) {
                  puVar15 = puVar25;
                }
              }
              local_48 = puVar25[4];
              local_68 = *puVar25;
              uStack_60 = puVar25[1];
              local_58 = puVar25[2];
              uStack_50 = puVar25[3];
              uVar6 = local_68;
              uVar7 = uStack_60;
              puVar25[4] = puVar20[4];
              uVar3 = *puVar20;
              uVar4 = puVar20[1];
              uVar5 = puVar20[3];
              puVar25[2] = puVar20[2];
              puVar25[3] = uVar5;
              *puVar25 = uVar3;
              puVar25[1] = uVar4;
              puVar20[4] = local_48;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar20[2] = local_58;
              puVar20[3] = uStack_50;
              *(undefined4 *)puVar20 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar20 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_60._4_4_;
              local_68 = uVar6;
              uStack_60 = uVar7;
            }
            goto LAB_1429657d3;
          }
LAB_142965432:
          if (uVar23 != 0) {
            iVar22 = (iVar26 - (iVar26 + -1 >> 0x1f)) + -1 >> 1;
            iVar26 = iVar22;
joined_r0x000142965459:
            do {
              iVar24 = iVar22 * 2 + 1;
              if (iVar24 < (int)uVar23) {
                iVar17 = iVar22 * 2 + 2;
                if ((iVar17 < (int)uVar23) &&
                   ((double)puVar14[(longlong)iVar24 * 5 + 1] <
                    (double)puVar14[(longlong)iVar17 * 5 + 1] ||
                    (double)puVar14[(longlong)iVar24 * 5 + 1] ==
                    (double)puVar14[(longlong)iVar17 * 5 + 1])) {
                  iVar24 = iVar17;
                }
                if ((double)puVar14[(longlong)iVar22 * 5 + 1] <=
                    (double)puVar14[(longlong)iVar24 * 5 + 1] &&
                    (double)puVar14[(longlong)iVar24 * 5 + 1] !=
                    (double)puVar14[(longlong)iVar22 * 5 + 1]) {
                  puVar20 = puVar14 + (longlong)iVar22 * 5;
                  puVar18 = puVar14 + (longlong)iVar24 * 5;
                  local_48 = puVar20[4];
                  local_68 = *puVar20;
                  uStack_60 = puVar20[1];
                  local_58 = puVar20[2];
                  uStack_50 = puVar20[3];
                  uVar6 = local_68;
                  uVar7 = uStack_60;
                  puVar20[4] = puVar18[4];
                  uVar3 = *puVar18;
                  uVar4 = puVar18[1];
                  uVar5 = puVar18[3];
                  puVar20[2] = puVar18[2];
                  puVar20[3] = uVar5;
                  *puVar20 = uVar3;
                  puVar20[1] = uVar4;
                  puVar18[4] = local_48;
                  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                  puVar18[2] = local_58;
                  puVar18[3] = uStack_50;
                  *(undefined4 *)puVar18 = (undefined4)local_68;
                  *(undefined4 *)((longlong)puVar18 + 4) = local_68._4_4_;
                  *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_60;
                  *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_60._4_4_;
                  iVar22 = iVar24;
                  local_68 = uVar6;
                  uStack_60 = uVar7;
                  goto joined_r0x000142965459;
                }
              }
              bVar29 = iVar26 != 0;
              iVar22 = iVar26 + -1;
              iVar26 = iVar22;
            } while (bVar29);
            if (1 < (int)uVar23) {
              uVar19 = (ulonglong)uVar23 - 1;
              local_48 = puVar14[4];
              local_68 = *puVar14;
              uStack_60 = puVar14[1];
              local_58 = puVar14[2];
              uStack_50 = puVar14[3];
              uVar6 = local_68;
              uVar7 = uStack_60;
              puVar14[4] = puVar14[uVar19 * 5 + 4];
              uVar3 = puVar14[uVar19 * 5];
              uVar4 = (puVar14 + uVar19 * 5)[1];
              uVar5 = (puVar14 + uVar19 * 5 + 2)[1];
              puVar14[2] = puVar14[uVar19 * 5 + 2];
              puVar14[3] = uVar5;
              *puVar14 = uVar3;
              puVar14[1] = uVar4;
              puVar14[uVar19 * 5 + 4] = local_48;
              local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
              uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
              puVar14[uVar19 * 5 + 2] = local_58;
              (puVar14 + uVar19 * 5 + 2)[1] = uStack_50;
              puVar20 = puVar14 + uVar19 * 5;
              *(undefined4 *)puVar20 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar20 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_60._4_4_;
              local_68 = uVar6;
              uStack_60 = uVar7;
              if (uVar23 != 2) {
                do {
                  iVar22 = 0;
                  iVar24 = 1;
                  iVar26 = 0;
                  do {
                    iVar22 = iVar22 + 2;
                    iVar17 = iVar24;
                    if (((longlong)iVar22 < (longlong)uVar19) &&
                       ((double)puVar14[(longlong)iVar24 * 5 + 1] <
                        (double)puVar14[(longlong)iVar22 * 5 + 1] ||
                        (double)puVar14[(longlong)iVar24 * 5 + 1] ==
                        (double)puVar14[(longlong)iVar22 * 5 + 1])) {
                      iVar17 = iVar22;
                    }
                    if ((double)puVar14[(longlong)iVar17 * 5 + 1] <
                        (double)puVar14[(longlong)iVar26 * 5 + 1] ||
                        (double)puVar14[(longlong)iVar17 * 5 + 1] ==
                        (double)puVar14[(longlong)iVar26 * 5 + 1]) break;
                    puVar20 = puVar14 + (longlong)iVar26 * 5;
                    puVar18 = puVar14 + (longlong)iVar17 * 5;
                    uVar3 = puVar20[4];
                    uVar4 = *puVar20;
                    uVar5 = puVar20[1];
                    uVar6 = puVar20[2];
                    uVar7 = puVar20[3];
                    puVar20[4] = puVar18[4];
                    uVar8 = *puVar18;
                    uVar9 = puVar18[1];
                    uVar10 = puVar18[3];
                    puVar20[2] = puVar18[2];
                    puVar20[3] = uVar10;
                    *puVar20 = uVar8;
                    puVar20[1] = uVar9;
                    puVar18[4] = uVar3;
                    puVar18[2] = uVar6;
                    puVar18[3] = uVar7;
                    *puVar18 = uVar4;
                    puVar18[1] = uVar5;
                    iVar22 = iVar17 * 2;
                    iVar24 = iVar17 * 2 + 1;
                    iVar26 = iVar17;
                  } while ((longlong)iVar24 < (longlong)uVar19);
                  uVar1 = uVar19 - 1;
                  local_48 = puVar14[4];
                  local_68 = *puVar14;
                  uStack_60 = puVar14[1];
                  local_58 = puVar14[2];
                  uStack_50 = puVar14[3];
                  uVar6 = local_68;
                  uVar7 = uStack_60;
                  puVar14[4] = puVar14[uVar1 * 5 + 4];
                  uVar3 = puVar14[uVar1 * 5];
                  uVar4 = (puVar14 + uVar1 * 5)[1];
                  uVar5 = (puVar14 + uVar1 * 5 + 2)[1];
                  puVar14[2] = puVar14[uVar1 * 5 + 2];
                  puVar14[3] = uVar5;
                  *puVar14 = uVar3;
                  puVar14[1] = uVar4;
                  puVar14[uVar1 * 5 + 4] = local_48;
                  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
                  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
                  puVar14[uVar1 * 5 + 2] = local_58;
                  (puVar14 + uVar1 * 5 + 2)[1] = uStack_50;
                  puVar20 = puVar14 + uVar1 * 5;
                  *(undefined4 *)puVar20 = (undefined4)local_68;
                  *(undefined4 *)((longlong)puVar20 + 4) = local_68._4_4_;
                  *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_60;
                  *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_60._4_4_;
                  bVar29 = 2 < uVar19;
                  uVar19 = uVar1;
                  local_68 = uVar6;
                  uStack_60 = uVar7;
                } while (bVar29);
              }
            }
          }
LAB_1429657d3:
          plVar12 = plVar12 + -3;
        } while (&local_368 <= plVar12);
      }
      goto LAB_1429657e4;
    }
  }
  uVar16 = 0;
LAB_1429657e4:
  if ((local_40 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
LAB_14296533c:
  local_48 = puVar14[4];
  local_68 = *puVar14;
  uStack_60 = puVar14[1];
  local_58 = puVar14[2];
  uStack_50 = puVar14[3];
  uVar6 = local_68;
  uVar7 = uStack_60;
  puVar14[4] = puVar21[-1];
  uVar3 = *puVar25;
  uVar4 = puVar21[-4];
  uVar5 = puVar21[-2];
  puVar14[2] = puVar21[-3];
  puVar14[3] = uVar5;
  *puVar14 = uVar3;
  puVar14[1] = uVar4;
  puVar21[-1] = local_48;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar21[-3] = local_58;
  puVar21[-2] = uStack_50;
  *(undefined4 *)puVar25 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar21 + -0x24) = local_68._4_4_;
  *(undefined4 *)(puVar21 + -4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar21 + -0x1c) = uStack_60._4_4_;
  iVar22 = iVar22 + -1;
  puVar21 = puVar21 + -10;
  local_68 = uVar6;
  uStack_60 = uVar7;
  if ((longlong)puVar27 - (longlong)puVar15 < (longlong)puVar18 - (longlong)puVar28) {
    if (puVar13 < puVar20) {
      *plVar12 = (longlong)puVar13;
      plVar12[1] = (longlong)puVar20;
      *(int *)(plVar12 + 2) = iVar22;
      plVar12 = plVar12 + 3;
    }
    puVar28 = puVar14;
    puVar18 = puVar27;
    if (puVar25 <= puVar14 + 5) goto LAB_1429657d3;
  }
  else {
    if (puVar14 + 5 < puVar25) {
      *plVar12 = (longlong)puVar14;
      plVar12[1] = (longlong)puVar21;
      *(int *)(plVar12 + 2) = iVar22;
      plVar12 = plVar12 + 3;
    }
    puVar14 = puVar13;
    puVar21 = puVar20;
    puVar18 = puVar20;
    if (puVar20 <= puVar13) goto LAB_1429657d3;
  }
  iVar26 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar28) >> 3) * -0x33333333;
  uVar23 = iVar26 + 1;
  puVar15 = puVar28;
  puVar20 = puVar21;
  if (iVar22 == 0) goto LAB_142965432;
  goto LAB_1429651f8;
}



// FUNCTION 142965814 FUN_142965814 body=331 status=ok
// SIG undefined FUN_142965814(void)

undefined4 * FUN_142965814(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [40];
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0 [12];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_3,local_110);
  if ((int)uVar4 < 0) {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    local_90 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    uStack_84 = param_3[3];
  }
  else {
    lVar5 = *(longlong *)(((longlong *)param_1[1])[1] + 0x90);
    uVar8 = (ulonglong)uVar4;
    uVar4 = *(uint *)(lVar5 + uVar8 * 0xc);
    uVar1 = *(uint *)(lVar5 + 4 + uVar8 * 0xc);
    uVar2 = *(uint *)(lVar5 + 8 + uVar8 * 0xc);
    lVar5 = *(longlong *)(*(longlong *)param_1[1] + 0x10);
    lVar3 = *(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8);
    uVar8 = (ulonglong)uVar4 & 0x1ff;
    local_78[2] = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
    puVar6 = (undefined8 *)(lVar3 + uVar8 * 0x18);
    local_78[0] = *puVar6;
    local_78[1] = puVar6[1];
    lVar3 = *(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8);
    uVar8 = (ulonglong)uVar1 & 0x1ff;
    puVar6 = (undefined8 *)(lVar3 + uVar8 * 0x18);
    local_78[3] = *puVar6;
    uStack_58 = puVar6[1];
    local_50 = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
    lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8);
    uVar8 = (ulonglong)uVar2 & 0x1ff;
    puVar6 = (undefined8 *)(lVar5 + uVar8 * 0x18);
    local_48 = *puVar6;
    uStack_40 = puVar6[1];
    local_38 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
    local_f8 = *(undefined8 *)(param_3 + 4);
    local_108 = *param_3;
    uStack_104 = param_3[1];
    uStack_100 = param_3[2];
    uStack_fc = param_3[3];
    puVar6 = local_78;
    puVar7 = local_f0;
    for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_146bd2a7a(&local_108);
    *(undefined8 *)(param_2 + 4) = local_80;
  }
  *param_2 = local_90;
  param_2[1] = uStack_8c;
  param_2[2] = uStack_88;
  param_2[3] = uStack_84;
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142965960 FUN_142965960 body=134 status=ok
// SIG undefined FUN_142965960(void)

bool FUN_142965960(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  longlong param_5)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  int *local_28;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_3;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < *(int *)(param_1 + 0xcc)) goto LAB_1429659a4;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_1429659a4:
    *param_4 = -1;
    local_20 = param_5;
    local_28 = param_4;
    FUN_142967960(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,&local_18);
    bVar1 = *param_4 != -1;
    goto LAB_1429659ca;
  }
  bVar1 = false;
LAB_1429659ca:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429659e8 FUN_1429659e8 body=173 status=ok
// SIG undefined FUN_1429659e8(void)

undefined4
FUN_1429659e8(longlong param_1,undefined8 param_2,ulonglong *param_3,double param_4,longlong param_5
             )

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  longlong local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) {
      uVar1 = 0xffffffff;
      goto LAB_142965a79;
    }
  }
  else {
    uVar1 = 0xffffffff;
    if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_142965a79;
  }
  uVar2 = (ulonglong)(param_4 * param_4) & -(ulonglong)(param_4 < 1.79769313486232e+308);
  *param_3 = ~-(ulonglong)(param_4 < 1.79769313486232e+308) & 0x7fefffffffffffff | uVar2;
  local_28 = &local_14;
  local_14 = 0xffffffff;
  local_20 = param_5;
  FUN_142967d44(uVar2,*(undefined4 *)(param_1 + 0xcc),param_2);
  uVar1 = local_14;
LAB_142965a79:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 142965a96 FUN_142965a96 body=71 status=ok
// SIG undefined FUN_142965a96(void)

undefined8 FUN_142965a96(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_3 + 10) != '\0')) {
    if (-1 < iVar1) goto LAB_142965abd;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_142965abd:
    dVar3 = *param_3;
    if (3.4028234663852886e+38 <= dVar3) {
      dVar3 = 3.4028234663852886e+38;
    }
    uVar2 = FUN_142968050(param_1,iVar1,param_2,dVar3,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142965ade FUN_142965ade body=274 status=ok
// SIG undefined FUN_142965ade(void)

undefined8 *
FUN_142965ade(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             double *param_5,double *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  double *local_58;
  undefined8 *local_50;
  double *local_48;
  undefined8 local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_6 + 10) != '\0')) {
    if (-1 < *(int *)(param_1 + 0xcc)) goto LAB_142965b2c;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_142965b2c:
    local_38 = 1.79769313486232e+308;
    dVar1 = *param_6;
    dVar2 = 1.79769313486232e+308;
    if (dVar1 < 1.79769313486232e+308) {
      local_38 = dVar1 * dVar1;
    }
    *param_2 = 0xffffffffffffffff;
    local_68 = *(undefined4 *)(param_3 + 0xcc);
    local_40 = param_7;
    local_48 = param_6;
    local_58 = &local_38;
    local_60 = 0;
    local_50 = param_2;
    FUN_1429684a4();
    if (local_38 < 1.79769313486232e+308) {
      if (local_38 < 0.0) {
        dVar2 = sqrt(local_38);
      }
      else {
        dVar2 = SQRT(local_38);
      }
    }
    *param_5 = dVar2;
    goto LAB_142965bca;
  }
  *param_2 = 0xffffffffffffffff;
LAB_142965bca:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142965bf2 FUN_142965bf2 body=395 status=ok
// SIG undefined FUN_142965bf2(void)

void FUN_142965bf2(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *(uint *)((longlong)param_1 + 0xcc);
  if (((int)uVar3 < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if ((int)uVar3 < 0) goto LAB_142965d40;
  }
  else if (param_1[2] != 0) goto LAB_142965d40;
  lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar3 >> 9) * 8);
  lVar7 = (ulonglong)((uVar3 & 0x1ff) << 3) * 3;
  lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar3 >> 9) * 8);
  local_80 = *(double *)(lVar4 + 0x10 + lVar7);
  dVar1 = *(double *)(lVar5 + 0x10 + lVar7);
  local_98 = local_80 - dVar1;
  local_88 = *(double *)(lVar4 + 8 + lVar7);
  dVar2 = *(double *)(lVar5 + 8 + lVar7);
  local_a0 = local_88 - dVar2;
  local_a8 = *(double *)(lVar4 + lVar7) - *(double *)(lVar5 + lVar7);
  local_80 = local_80 + dVar1;
  local_88 = local_88 + dVar2;
  local_90 = *(double *)(lVar4 + lVar7) + *(double *)(lVar5 + lVar7);
  local_74 = 0;
  pcVar6 = (code *)*param_2;
  plVar10 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[2];
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  cVar8 = (*pcVar6)(uVar9,&local_a8,&local_74);
  if (cVar8 != '\0') {
    local_b8 = param_3;
    (**(code **)(*param_1 + 0x80))(param_1,*(undefined4 *)((longlong)param_1 + 0xcc),0,param_2);
  }
LAB_142965d40:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142965d7e FUN_142965d7e body=1273 status=ok
// SIG undefined FUN_142965d7e(void)

void FUN_142965d7e(longlong *param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_c8;
  uint local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  uint local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_84 = (uint)param_2;
  uVar14 = *(uint *)(*(longlong *)(param_1[0xe] + (param_2 >> 9 & 0x7fffff) * 8) +
                    (ulonglong)(local_84 & 0x1ff) * 4);
  if ((int)uVar14 < (int)param_1[0x19]) {
    local_b8 = (double)CONCAT44(local_b8._4_4_,param_3);
    pcVar13 = (code *)param_4[8];
    plVar10 = param_4 + 0xc;
    if ((longlong *)param_4[10] != (longlong *)0x0) {
      plVar10 = (longlong *)param_4[10];
    }
    local_c8 = param_4;
    local_bc = local_84;
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_84,&local_b8);
    iVar15 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar15) {
      plVar10 = local_c8 + 0x14;
      do {
        uVar14 = uVar14 + 1;
        uVar3 = *(undefined4 *)
                 (*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                 (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar13 = *(code **)(param_5 + 0x10);
        if (pcVar13 == (code *)0x0) {
LAB_142965ec0:
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          pcVar13 = (code *)local_c8[0x10];
          plVar9 = (longlong *)local_c8[0x12];
          if ((longlong *)local_c8[0x12] == (longlong *)0x0) {
            plVar9 = plVar10;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar13)(uVar8,&local_b8);
        }
        else {
          local_b8 = (double)CONCAT44(local_b8._4_4_,uVar3);
          plVar9 = *(longlong **)(param_5 + 0x20);
          if (*(longlong **)(param_5 + 0x20) == (longlong *)0x0) {
            plVar9 = (longlong *)(param_5 + 0x30);
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          cVar7 = (*pcVar13)(uVar8,&local_b8);
          if (cVar7 != '\0') goto LAB_142965ec0;
        }
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    local_b8 = (double)CONCAT44(local_b8._4_4_,local_bc);
    pcVar13 = (code *)local_c8[0x18];
    plVar10 = local_c8 + 0x1c;
    if ((longlong *)local_c8[0x1a] != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8[0x1a];
    }
    uVar8 = (**(code **)(*plVar10 + 8))();
    (*pcVar13)(uVar8,&local_b8);
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    uVar11 = param_3 + 1;
    local_84 = uVar11;
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
    }
    else {
      uVar12 = uVar12 - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar10 = param_4 + 4;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
      if (cVar7 != '\0') {
        local_d8 = param_5;
        (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
      }
      uVar12 = *(int *)(*(longlong *)(param_1[0x17] + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      lVar4 = *(longlong *)(param_1[0x11] + (ulonglong)(uVar12 >> 9) * 8);
      lVar6 = (ulonglong)((uVar12 & 0x1ff) << 3) * 3;
      lVar5 = *(longlong *)(param_1[0x14] + (ulonglong)(uVar12 >> 9) * 8);
      local_90 = *(double *)(lVar4 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar5 + 0x10 + lVar6);
      local_a8 = local_90 - dVar1;
      local_98 = *(double *)(lVar4 + 8 + lVar6);
      dVar2 = *(double *)(lVar5 + 8 + lVar6);
      local_b0 = local_98 - dVar2;
      local_b8 = *(double *)(lVar4 + lVar6) - *(double *)(lVar5 + lVar6);
      local_90 = local_90 + dVar1;
      local_98 = local_98 + dVar2;
      local_a0 = *(double *)(lVar4 + lVar6) + *(double *)(lVar5 + lVar6);
      pcVar13 = (code *)*param_4;
      plVar10 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[2];
      }
      local_84 = uVar11;
      uVar8 = (**(code **)(*plVar10 + 8))(plVar10);
    }
    cVar7 = (*pcVar13)(uVar8,&local_b8,&local_84);
    if (cVar7 != '\0') {
      local_d8 = param_5;
      (**(code **)(*param_1 + 0x80))(param_1,uVar12,uVar11,param_4);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142966278 FUN_142966278 body=191 status=ok
// SIG undefined FUN_142966278(void)

bool FUN_142966278(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  longlong local_80;
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_14296630f;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
LAB_14296630f:
    bVar2 = false;
    goto LAB_142966311;
  }
  FUN_146bda344(local_58,param_2,param_2 + 0x18,param_2 + 0x30);
  local_60 = &local_69;
  local_88 = &local_68;
  local_68 = &LAB_142969650;
  local_80 = param_3;
  iVar1 = FUN_142969246(param_1,*(undefined4 *)(param_1 + 0xcc),param_2,local_58);
  bVar2 = -1 < iVar1;
LAB_142966311:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142966338 FUN_142966338 body=164 status=ok
// SIG undefined FUN_142966338(void)

undefined8
FUN_142966338(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 **local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (-1 < *(int *)(param_1 + 0xcc)) goto LAB_142966372;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_142966372:
    local_18 = &local_28;
    local_48 = &local_20;
    local_20 = &LAB_14296a0bc;
    local_58 = *(undefined4 *)(param_2 + 0xcc);
    local_38 = param_5;
    local_50 = 0;
    local_40 = param_4;
    local_28 = param_1;
    uVar1 = FUN_142969664();
    goto LAB_1429663c0;
  }
  uVar1 = 0;
LAB_1429663c0:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429663de FUN_1429663de body=989 status=ok
// SIG undefined FUN_1429663de(void)

uint FUN_1429663de(longlong *param_1,longlong *param_2,double *param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_158 [44];
  uint local_12c;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  ulonglong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar4 = *(int *)((longlong)param_1 + 0xcc);
  local_128 = param_1;
  if ((iVar4 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (-1 < iVar4) goto LAB_142966444;
  }
  else if (param_1[2] == 0) {
LAB_142966444:
    if (((*param_3 < param_3[3] || *param_3 == param_3[3]) &&
        (param_3[1] < param_3[4] || param_3[1] == param_3[4])) &&
       (param_3[2] < param_3[5] || param_3[2] == param_3[5])) {
      if (*param_4 != 0) {
        local_78 = 0;
        local_68 = &PTR_LAB_149f362e0;
        local_88 = FUN_14296a0d0;
        local_60 = param_4;
        FUN_146bda188(&local_d8,param_3);
        *(undefined4 *)param_3 = (undefined4)local_d8;
        *(undefined4 *)((longlong)param_3 + 4) = local_d8._4_4_;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_d0._4_4_;
        *(undefined4 *)(param_3 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)param_3 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(param_3 + 3) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_c0._4_4_;
        *(undefined4 *)(param_3 + 4) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_3 + 0x24) = uStack_b8._4_4_;
        *(undefined4 *)(param_3 + 5) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_b0._4_4_;
        iVar4 = *(int *)((longlong)local_128 + 0xcc);
      }
      cVar10 = FUN_142969590(local_128,iVar4,param_3);
      if (cVar10 == '\0') goto LAB_14296670f;
    }
    uVar12 = (ulonglong)*(int *)(param_2[1] + 0x98);
    if ((longlong)uVar12 < 1) {
      local_12c = 0;
      uVar11 = local_12c;
    }
    else {
      plVar1 = param_4 + 4;
      local_118 = uVar12 * 0xc;
      local_12c = (uint)CONCAT71((int7)((ulonglong)local_118 >> 8),1);
      uVar15 = 1;
      lVar16 = 0;
      local_120 = plVar1;
      local_110 = uVar12;
      do {
        pcVar7 = (code *)*param_4;
        lVar8 = *(longlong *)(param_2[1] + 0x90);
        uVar11 = *(uint *)(lVar8 + lVar16);
        uVar5 = *(uint *)(lVar8 + 4 + lVar16);
        uVar6 = *(uint *)(lVar8 + 8 + lVar16);
        if (pcVar7 == (code *)0x0) {
          lVar8 = *param_2;
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
          puVar3 = (undefined8 *)(lVar9 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          local_d8 = *puVar3;
          uStack_d0 = puVar3[1];
          local_c8 = *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
          puVar3 = (undefined8 *)(lVar9 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
          uStack_c0 = *puVar3;
          uStack_b8 = puVar3[1];
          uStack_b0 = *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
          lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
          puVar2 = (undefined4 *)(lVar8 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
          local_a8 = *puVar2;
          uStack_a4 = puVar2[1];
          uStack_a0 = puVar2[2];
          uStack_9c = puVar2[3];
          local_98 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
        }
        else {
          lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
          local_f8 = *(undefined8 *)(lVar8 + 0x10 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
          puVar2 = (undefined4 *)(lVar8 + ((ulonglong)uVar11 & 0x1ff) * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          plVar14 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar14 = plVar1;
          }
          uVar13 = (**(code **)(*plVar14 + 8))();
          (*pcVar7)(&local_f0,uVar13,&local_108);
          local_c8 = local_e0;
          local_d8 = CONCAT44(uStack_ec,local_f0);
          uStack_d0 = CONCAT44(uStack_e4,uStack_e8);
          lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
          local_f8 = *(undefined8 *)(lVar8 + 0x10 + ((ulonglong)uVar5 & 0x1ff) * 0x18);
          puVar2 = (undefined4 *)(lVar8 + ((ulonglong)uVar5 & 0x1ff) * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          pcVar7 = (code *)*param_4;
          plVar14 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar14 = plVar1;
          }
          uVar13 = (**(code **)(*plVar14 + 8))();
          (*pcVar7)(&local_f0,uVar13,&local_108);
          uStack_b0 = local_e0;
          uStack_c0 = CONCAT44(uStack_ec,local_f0);
          uStack_b8 = CONCAT44(uStack_e4,uStack_e8);
          lVar8 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
          local_f8 = *(undefined8 *)(lVar8 + 0x10 + ((ulonglong)uVar6 & 0x1ff) * 0x18);
          puVar2 = (undefined4 *)(lVar8 + ((ulonglong)uVar6 & 0x1ff) * 0x18);
          local_108 = *puVar2;
          uStack_104 = puVar2[1];
          uStack_100 = puVar2[2];
          uStack_fc = puVar2[3];
          pcVar7 = (code *)*param_4;
          plVar14 = (longlong *)param_4[2];
          if ((longlong *)param_4[2] == (longlong *)0x0) {
            plVar14 = plVar1;
          }
          uVar13 = (**(code **)(*plVar14 + 8))();
          (*pcVar7)(&local_f0,uVar13,&local_108);
          local_98 = local_e0;
          local_a8 = local_f0;
          uStack_a4 = uStack_ec;
          uStack_a0 = uStack_e8;
          uStack_9c = uStack_e4;
        }
        uVar13 = (**(code **)(*local_128 + 0x88))(local_128,&local_d8,param_5);
        uVar11 = local_12c;
        if ((char)uVar13 != '\0') break;
        local_12c = (uint)CONCAT71((int7)((ulonglong)uVar13 >> 8),uVar15 < local_110);
        lVar16 = lVar16 + 0xc;
        uVar15 = uVar15 + 1;
        uVar11 = local_12c;
      } while (local_118 != lVar16);
    }
    goto LAB_14296671f;
  }
LAB_14296670f:
  uVar11 = 0;
LAB_14296671f:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffff01;
}



// FUNCTION 1429667bc FUN_1429667bc body=519 status=ok
// SIG undefined FUN_1429667bc(void)

undefined8 *
FUN_1429667bc(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  code **local_e0;
  longlong local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_7 == 0) {
    local_b8 = *param_7;
    uStack_70 = param_7[1];
    local_a8 = (longlong *)param_7[2];
    uStack_60 = param_7[3];
    local_58 = param_7[4];
    lStack_50 = param_7[5];
    local_48 = param_7[6];
    uStack_40 = param_7[7];
    lVar4 = local_48;
    lVar5 = uStack_40;
    local_68 = local_a8;
    lVar3 = uStack_60;
    local_78 = local_b8;
    lVar2 = uStack_70;
    param_7[6] = CONCAT44(uStack_84,local_88);
    param_7[7] = CONCAT44(uStack_7c,uStack_80);
    param_7[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_7[5] = (longlong)FUN_14296abca;
    param_7[2] = 0;
    param_7[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_7 = (longlong)&LAB_146bddb20;
    param_7[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_70 = lVar2;
    uStack_60 = lVar3;
    local_48 = lVar4;
    uStack_40 = lVar5;
    if (local_b8 != 0) {
      plVar6 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar6 = &local_98;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 < 0) || (*(char *)(param_5 + 0x50) != '\0')) {
    if (iVar1 < 0) goto LAB_14296697a;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_14296697a;
  local_e0 = &local_c8;
  local_c0 = param_7;
  local_c8 = FUN_146bddd1c;
  local_f8 = *(undefined4 *)(param_3 + 0xcc);
  local_d0 = param_6;
  local_d8 = param_5;
  local_f0 = 0;
  local_e8 = param_2;
  FUN_14296a156(param_1,iVar1,param_3,param_4);
LAB_14296697a:
  if (*param_7 != 0) {
    plVar6 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1429669c4 FUN_1429669c4 body=445 status=ok
// SIG undefined FUN_1429669c4(void)

undefined8 *
FUN_1429669c4(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_5 == 0) {
    local_b8 = *param_5;
    uStack_70 = param_5[1];
    local_a8 = (longlong *)param_5[2];
    uStack_60 = param_5[3];
    local_58 = param_5[4];
    lStack_50 = param_5[5];
    local_48 = param_5[6];
    uStack_40 = param_5[7];
    lVar3 = local_48;
    lVar4 = uStack_40;
    local_68 = local_a8;
    lVar2 = uStack_60;
    local_78 = local_b8;
    lVar1 = uStack_70;
    param_5[6] = CONCAT44(uStack_84,local_88);
    param_5[7] = CONCAT44(uStack_7c,uStack_80);
    param_5[4] = (longlong)&PTR_LAB_149f3aaa0;
    param_5[5] = (longlong)FUN_14296b21a;
    param_5[2] = 0;
    param_5[3] = CONCAT44(uStack_9c,uStack_a0);
    *param_5 = (longlong)&LAB_146bddb20;
    param_5[1] = CONCAT44(uStack_ac,uStack_b0);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    lStack_90 = lStack_50;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_70 = lVar1;
    uStack_60 = lVar2;
    local_48 = lVar3;
    uStack_40 = lVar4;
    if (local_b8 != 0) {
      plVar5 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar5 = &local_98;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_4 + 0x50) != '\0')) {
    if (*(int *)(param_1 + 0xcc) < 0) goto LAB_142966b38;
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) goto LAB_142966b38;
  local_c0 = param_5;
  local_c8 = FUN_146bddd1c;
  local_d8 = param_4;
  FUN_14296b0ae(param_1,param_2,param_3);
LAB_142966b38:
  if (*param_5 != 0) {
    plVar5 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142966b82 FUN_142966b82 body=119 status=ok
// SIG undefined FUN_142966b82(void)

undefined8 FUN_142966b82(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0xcc) < 0) || (*(char *)(param_3 + 0x50) != '\0')) {
    if (-1 < *(int *)(param_1 + 0xcc)) goto LAB_142966bb7;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_142966bb7:
    local_10 = &local_19;
    local_18 = FUN_14296bd1c;
    local_28 = param_3;
    uVar1 = FUN_14296b0ae(param_1,0,param_2);
    goto LAB_142966bde;
  }
  uVar1 = 0;
LAB_142966bde:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142966bfa FUN_142966bfa body=904 status=ok
// SIG undefined FUN_142966bfa(void)

void FUN_142966bfa(longlong param_1,uint param_2,int *param_3,double *param_4,int *param_5,
                  longlong param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  double *pdVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_188 [32];
  int *local_168;
  longlong local_160;
  double *local_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined8 local_130 [15];
  undefined8 local_b8 [4];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_150 = param_4;
  while (*(int *)(param_1 + 200) <= (int)uVar13) {
    uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 4);
    if ((int)uVar11 < 0) {
      uVar11 = ~uVar11;
      dVar17 = (double)FUN_142966f84(param_1,uVar11,param_3);
      if (*local_150 < dVar17) goto LAB_142966f45;
    }
    else {
      uVar11 = uVar11 - 1;
      uVar13 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                       (ulonglong)(uVar13 + 1 & 0x1ff) * 4) - 1;
      dVar17 = (double)FUN_142966f84(param_1,uVar11,param_3);
      dVar18 = (double)FUN_142966f84(param_1,uVar13,param_3);
      pdVar5 = local_150;
      if (dVar18 <= dVar17) {
        if (*local_150 <= dVar18) goto LAB_142966f45;
        local_160 = param_6;
        local_168 = param_5;
        FUN_142966bfa(param_1,uVar13,param_3,local_150);
        if (*pdVar5 <= dVar17) goto LAB_142966f45;
      }
      else {
        if (*local_150 <= dVar17) goto LAB_142966f45;
        local_160 = param_6;
        local_168 = param_5;
        FUN_142966bfa(param_1,uVar11,param_3,local_150);
        uVar11 = uVar13;
        if (*pdVar5 <= dVar18) goto LAB_142966f45;
      }
    }
    uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 4);
  }
  iVar16 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8) +
                   (ulonglong)(uVar13 & 0x1ff) * 4);
  if (0 < iVar16) {
    do {
      uVar13 = uVar13 + 1;
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8) +
                      (ulonglong)(uVar13 & 0x1ff) * 4);
      pcVar4 = *(code **)(param_6 + 0x10);
      if (pcVar4 == (code *)0x0) {
LAB_142966e3b:
        lVar8 = (longlong)iVar1;
        lVar10 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
        uVar11 = *(uint *)(lVar10 + lVar8 * 0xc);
        uVar2 = *(uint *)(lVar10 + 4 + lVar8 * 0xc);
        uVar3 = *(uint *)(lVar10 + 8 + lVar8 * 0xc);
        lVar10 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
        lVar8 = *(longlong *)(lVar10 + (ulonglong)(uVar11 >> 9) * 8);
        uVar15 = (ulonglong)uVar11 & 0x1ff;
        local_b8[2] = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
        puVar12 = (undefined8 *)(lVar8 + uVar15 * 0x18);
        local_b8[0] = *puVar12;
        local_b8[1] = puVar12[1];
        lVar8 = *(longlong *)(lVar10 + (ulonglong)(uVar2 >> 9) * 8);
        uVar15 = (ulonglong)uVar2 & 0x1ff;
        local_90 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
        puVar12 = (undefined8 *)(lVar8 + uVar15 * 0x18);
        local_b8[3] = *puVar12;
        uStack_98 = puVar12[1];
        lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar3 >> 9) * 8);
        uVar15 = (ulonglong)uVar3 & 0x1ff;
        local_78 = *(undefined8 *)(lVar10 + 0x10 + uVar15 * 0x18);
        puVar12 = (undefined8 *)(lVar10 + uVar15 * 0x18);
        local_88 = *puVar12;
        uStack_80 = puVar12[1];
        local_138 = *(undefined8 *)(param_3 + 4);
        local_148 = *param_3;
        iStack_144 = param_3[1];
        iStack_140 = param_3[2];
        iStack_13c = param_3[3];
        puVar12 = local_b8;
        puVar14 = local_130;
        for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        dVar17 = (double)FUN_146bd2a7a(&local_148);
        if (dVar17 < *local_150) {
          *local_150 = dVar17;
          *param_5 = iVar1;
        }
      }
      else {
        plVar9 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar9 = (longlong *)(param_6 + 0x30);
        }
        local_148 = iVar1;
        uVar7 = (**(code **)(*plVar9 + 8))();
        cVar6 = (*pcVar4)(uVar7,&local_148);
        if (cVar6 != '\0') goto LAB_142966e3b;
      }
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
LAB_142966f45:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142966f84 FUN_142966f84 body=150 status=ok
// SIG undefined FUN_142966f84(void)

double FUN_142966f84(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar5 = ABS(*param_3 - *(double *)(lVar1 + lVar3)) - *(double *)(lVar2 + lVar3);
  dVar6 = ABS(param_3[1] - *(double *)(lVar1 + 8 + lVar3)) - *(double *)(lVar2 + 8 + lVar3);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar4 = ABS(param_3[2] - *(double *)(lVar1 + 0x10 + lVar3)) - *(double *)(lVar2 + 0x10 + lVar3);
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  return dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
}



// FUNCTION 14296701a FUN_14296701a body=991 status=ok
// SIG undefined FUN_14296701a(void)

void FUN_14296701a(longlong param_1,uint param_2,int *param_3,double *param_4,int *param_5,
                  undefined4 *param_6,longlong param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1a8 [32];
  int *local_188;
  undefined4 *local_180;
  longlong local_178;
  double *local_170;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138 [9];
  double local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar12 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  if (*(int *)(param_1 + 200) <= (int)uVar12) {
    do {
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8)
                        + (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar10 < 0) {
        uVar10 = ~uVar10;
        dVar17 = (double)FUN_1429673fa(param_1,uVar10,param_3);
        bVar16 = *param_4 + 1e-08 < dVar17;
LAB_1429671b4:
        if (bVar16) goto LAB_1429673b3;
      }
      else {
        uVar10 = uVar10 - 1;
        uVar12 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                         (ulonglong)(uVar12 + 1 & 0x1ff) * 4) - 1;
        dVar17 = (double)FUN_1429673fa(param_1,uVar10,param_3);
        dVar18 = (double)FUN_1429673fa(param_1,uVar12,param_3);
        if (dVar18 <= dVar17) {
          if (dVar18 <= *param_4 + 1e-08) {
            local_178 = param_7;
            local_180 = param_6;
            local_188 = param_5;
            FUN_14296701a(param_1,uVar12,param_3,param_4);
            bVar16 = *param_4 + 1e-08 < dVar17;
            goto LAB_1429671b4;
          }
          goto LAB_1429673b3;
        }
        if (*param_4 + 1e-08 < dVar17) goto LAB_1429673b3;
        local_178 = param_7;
        local_180 = param_6;
        local_188 = param_5;
        FUN_14296701a(param_1,uVar10,param_3,param_4);
        uVar10 = uVar12;
        if (*param_4 + 1e-08 < dVar18) goto LAB_1429673b3;
      }
      uVar12 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar10 >> 9) * 8)
                        + (ulonglong)(uVar10 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar12);
  }
  iVar15 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8) +
                   (ulonglong)(uVar12 & 0x1ff) * 4);
  local_170 = param_4;
  if (0 < iVar15) {
    do {
      uVar12 = uVar12 + 1;
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar12 >> 9) * 8) +
                      (ulonglong)(uVar12 & 0x1ff) * 4);
      pcVar4 = *(code **)(param_7 + 0x10);
      if (pcVar4 == (code *)0x0) {
LAB_142967271:
        lVar7 = (longlong)iVar1;
        lVar9 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
        uVar10 = *(uint *)(lVar9 + lVar7 * 0xc);
        uVar2 = *(uint *)(lVar9 + 4 + lVar7 * 0xc);
        uVar3 = *(uint *)(lVar9 + 8 + lVar7 * 0xc);
        lVar9 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
        lVar7 = *(longlong *)(lVar9 + (ulonglong)(uVar10 >> 9) * 8);
        uVar14 = (ulonglong)uVar10 & 0x1ff;
        local_c8[2] = *(undefined8 *)(lVar7 + 0x10 + uVar14 * 0x18);
        puVar11 = (undefined8 *)(lVar7 + uVar14 * 0x18);
        local_c8[0] = *puVar11;
        local_c8[1] = puVar11[1];
        lVar7 = *(longlong *)(lVar9 + (ulonglong)(uVar2 >> 9) * 8);
        uVar14 = (ulonglong)uVar2 & 0x1ff;
        local_a0 = *(undefined8 *)(lVar7 + 0x10 + uVar14 * 0x18);
        puVar11 = (undefined8 *)(lVar7 + uVar14 * 0x18);
        local_c8[3] = *puVar11;
        uStack_a8 = puVar11[1];
        lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8);
        uVar14 = (ulonglong)uVar3 & 0x1ff;
        local_88 = *(undefined8 *)(lVar9 + 0x10 + uVar14 * 0x18);
        puVar11 = (undefined8 *)(lVar9 + uVar14 * 0x18);
        local_98 = *puVar11;
        uStack_90 = puVar11[1];
        local_168 = *param_3;
        iStack_164 = param_3[1];
        iStack_160 = param_3[2];
        iStack_15c = param_3[3];
        local_158 = *(undefined8 *)(param_3 + 4);
        uStack_150 = *(undefined8 *)(param_3 + 6);
        local_148 = param_3[8];
        iStack_144 = param_3[9];
        iStack_140 = param_3[10];
        iStack_13c = param_3[0xb];
        puVar11 = local_c8;
        puVar13 = local_138;
        for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        cVar5 = FUN_146bd80f0(&local_168);
        if ((cVar5 != '\0') && (local_f0 < *local_170)) {
          *local_170 = local_f0;
          *param_5 = iVar1;
          *(undefined8 *)(param_6 + 4) = local_d8;
          *param_6 = local_e8;
          param_6[1] = uStack_e4;
          param_6[2] = uStack_e0;
          param_6[3] = uStack_dc;
        }
      }
      else {
        plVar8 = *(longlong **)(param_7 + 0x20);
        if (*(longlong **)(param_7 + 0x20) == (longlong *)0x0) {
          plVar8 = (longlong *)(param_7 + 0x30);
        }
        local_168 = iVar1;
        uVar6 = (**(code **)(*plVar8 + 8))();
        cVar5 = (*pcVar4)(uVar6,&local_168);
        if (cVar5 != '\0') goto LAB_142967271;
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
LAB_1429673b3:
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429673fa FUN_1429673fa body=307 status=ok
// SIG undefined FUN_1429673fa(void)

void FUN_1429673fa(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_70 = *(double *)(param_1 + 0x60);
  dVar6 = *(double *)(lVar2 + 0x10 + lVar3) + local_70;
  dVar7 = *(double *)(lVar2 + 8 + lVar3) + local_70;
  local_70 = local_70 + *(double *)(lVar2 + lVar3);
  local_60 = *(double *)(lVar1 + 0x10 + lVar3);
  local_48 = dVar6 + local_60;
  local_68 = *(double *)(lVar1 + 8 + lVar3);
  local_50 = dVar7 + local_68;
  local_58 = local_70 + *(double *)(lVar1 + lVar3);
  local_60 = local_60 - dVar6;
  local_68 = local_68 - dVar7;
  local_70 = *(double *)(lVar1 + lVar3) - local_70;
  local_78 = 0x7fefffffffffffff;
  cVar4 = FUN_146bd8472(param_3);
  uVar5 = local_78;
  if (cVar4 == '\0') {
    uVar5 = 0x7fefffffffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar5);
  }
  return;
}



// FUNCTION 14296752e FUN_14296752e body=1073 status=ok
// SIG undefined FUN_14296752e(void)

void FUN_14296752e(longlong param_1,uint param_2,int *param_3,longlong *param_4,double *param_5)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  longlong *plVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158 [9];
  double local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar2 = *param_5;
  uVar22 = SUB84(dVar2,0);
  uVar23 = (undefined4)((ulonglong)dVar2 >> 0x20);
  if (3.4028234663852886e+38 <= dVar2) {
    uVar22 = 0xe0000000;
    uVar23 = 0x47efffff;
  }
  uVar17 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  if (*(int *)(param_1 + 200) <= (int)uVar17) {
    do {
      uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8)
                        + (ulonglong)(uVar17 & 0x1ff) * 4);
      if ((int)uVar15 < 0) {
        uVar17 = ~uVar15;
        dVar2 = (double)FUN_1429673fa(param_1,uVar17,param_3);
        if ((double)CONCAT44(uVar23,uVar22) + 1e-08 < dVar2) goto LAB_142967907;
      }
      else {
        uVar15 = uVar15 - 1;
        uVar17 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                         (ulonglong)(uVar17 + 1 & 0x1ff) * 4) - 1;
        dVar20 = (double)FUN_1429673fa(param_1,uVar15,param_3);
        dVar21 = (double)FUN_1429673fa(param_1,uVar17,param_3);
        dVar2 = (double)CONCAT44(uVar23,uVar22) + 1e-08;
        if (dVar21 <= dVar20) {
          if (dVar2 < dVar21) goto LAB_142967907;
          local_1b8 = param_5;
          FUN_14296752e(param_1,uVar17,param_3,param_4);
          uVar17 = uVar15;
          dVar21 = dVar20;
        }
        else {
          if (dVar2 < dVar20) goto LAB_142967907;
          local_1b8 = param_5;
          FUN_14296752e(param_1,uVar15,param_3,param_4);
        }
        if (dVar2 < dVar21) goto LAB_142967907;
      }
      dVar2 = *param_5;
      uVar22 = SUB84(dVar2,0);
      uVar23 = (int)((ulonglong)dVar2 >> 0x20);
      if (3.4028234663852886e+38 <= dVar2) {
        uVar22 = 0xe0000000;
        uVar23 = 0x47efffff;
      }
      uVar17 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar17 >> 9) * 8)
                        + (ulonglong)(uVar17 & 0x1ff) * 4);
    } while (*(int *)(param_1 + 200) <= (int)uVar17);
  }
  iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                   (ulonglong)(uVar17 & 0x1ff) * 4);
  local_1b0 = param_4;
  if (0 < iVar14) {
    do {
      uVar17 = uVar17 + 1;
      iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 4);
      pcVar7 = (code *)param_5[2];
      if (pcVar7 == (code *)0x0) {
LAB_14296779c:
        lVar11 = (longlong)iVar3;
        lVar13 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
        uVar15 = *(uint *)(lVar13 + lVar11 * 0xc);
        uVar4 = *(uint *)(lVar13 + 4 + lVar11 * 0xc);
        uVar5 = *(uint *)(lVar13 + 8 + lVar11 * 0xc);
        lVar13 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
        lVar11 = *(longlong *)(lVar13 + (ulonglong)(uVar15 >> 9) * 8);
        uVar19 = (ulonglong)uVar15 & 0x1ff;
        local_e8[2] = *(undefined8 *)(lVar11 + 0x10 + uVar19 * 0x18);
        puVar16 = (undefined8 *)(lVar11 + uVar19 * 0x18);
        local_e8[0] = *puVar16;
        local_e8[1] = puVar16[1];
        lVar11 = *(longlong *)(lVar13 + (ulonglong)(uVar4 >> 9) * 8);
        uVar19 = (ulonglong)uVar4 & 0x1ff;
        local_c0 = *(undefined8 *)(lVar11 + 0x10 + uVar19 * 0x18);
        puVar16 = (undefined8 *)(lVar11 + uVar19 * 0x18);
        local_e8[3] = *puVar16;
        uStack_c8 = puVar16[1];
        lVar13 = *(longlong *)(lVar13 + (ulonglong)(uVar5 >> 9) * 8);
        uVar19 = (ulonglong)uVar5 & 0x1ff;
        local_a8 = *(undefined8 *)(lVar13 + 0x10 + uVar19 * 0x18);
        puVar16 = (undefined8 *)(lVar13 + uVar19 * 0x18);
        local_b8 = *puVar16;
        uStack_b0 = puVar16[1];
        local_188 = *param_3;
        iStack_184 = param_3[1];
        iStack_180 = param_3[2];
        iStack_17c = param_3[3];
        local_178 = param_3[4];
        iStack_174 = param_3[5];
        iStack_170 = param_3[6];
        iStack_16c = param_3[7];
        local_168 = param_3[8];
        iStack_164 = param_3[9];
        iStack_160 = param_3[10];
        iStack_15c = param_3[0xb];
        puVar16 = local_e8;
        puVar18 = local_158;
        for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        }
        cVar9 = FUN_146bd80f0(&local_188);
        dVar2 = local_110;
        plVar8 = local_1b0;
        if ((cVar9 != '\0') && (local_110 <= (double)CONCAT44(uVar23,uVar22) + 1e-08)) {
          local_198 = local_f8;
          local_1a8 = local_108;
          uStack_1a4 = uStack_104;
          uStack_1a0 = uStack_100;
          uStack_19c = uStack_fc;
          iVar6 = (int)local_1b0[1];
          lVar13 = (longlong)iVar6;
          *(uint *)(local_1b0 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)local_1b0 + 0xc) < iVar6 + 1U) {
            FUN_146bd88d8(local_1b0,iVar6);
          }
          lVar11 = *plVar8;
          *(int *)(lVar11 + lVar13 * 0x28) = iVar3;
          *(double *)(lVar11 + 8 + lVar13 * 0x28) = dVar2;
          puVar1 = (undefined4 *)(lVar11 + 0x10 + lVar13 * 0x28);
          *puVar1 = local_1a8;
          puVar1[1] = uStack_1a4;
          puVar1[2] = uStack_1a0;
          puVar1[3] = uStack_19c;
          *(undefined8 *)(lVar11 + 0x20 + lVar13 * 0x28) = local_198;
        }
      }
      else {
        pdVar12 = (double *)param_5[4];
        if ((double *)param_5[4] == (double *)0x0) {
          pdVar12 = param_5 + 6;
        }
        local_188 = iVar3;
        uVar10 = (**(code **)((longlong)*pdVar12 + 8))();
        cVar9 = (*pcVar7)(uVar10,&local_188);
        if (cVar9 != '\0') goto LAB_14296779c;
      }
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
LAB_142967907:
  if ((local_a0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142967960 FUN_142967960 body=995 status=ok
// SIG undefined FUN_142967960(void)

ulonglong FUN_142967960(longlong param_1,uint param_2,int *param_3,double *param_4,int *param_5,
                       longlong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined7 uVar14;
  int iVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_188 [32];
  int *local_168;
  longlong local_160;
  int *local_158;
  double *local_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined8 local_130 [15];
  undefined8 local_b8 [4];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar11 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                    (ulonglong)(uVar10 & 0x1ff) * 4);
  local_158 = param_3;
  if ((int)uVar10 < *(int *)(param_1 + 200)) {
    local_150 = param_4;
    if (0 < (int)uVar11) {
      do {
        uVar10 = uVar10 + 1;
        iVar15 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4);
        pcVar4 = *(code **)(param_6 + 0x10);
        if (pcVar4 == (code *)0x0) {
LAB_142967a59:
          lVar7 = (longlong)iVar15;
          lVar9 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
          uVar1 = *(uint *)(lVar9 + lVar7 * 0xc);
          uVar2 = *(uint *)(lVar9 + 4 + lVar7 * 0xc);
          uVar3 = *(uint *)(lVar9 + 8 + lVar7 * 0xc);
          lVar9 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
          lVar7 = *(longlong *)(lVar9 + (ulonglong)(uVar1 >> 9) * 8);
          uVar17 = (ulonglong)uVar1 & 0x1ff;
          local_b8[2] = *(undefined8 *)(lVar7 + 0x10 + uVar17 * 0x18);
          puVar13 = (undefined8 *)(lVar7 + uVar17 * 0x18);
          local_b8[0] = *puVar13;
          local_b8[1] = puVar13[1];
          lVar7 = *(longlong *)(lVar9 + (ulonglong)(uVar2 >> 9) * 8);
          uVar17 = (ulonglong)uVar2 & 0x1ff;
          local_90 = *(undefined8 *)(lVar7 + 0x10 + uVar17 * 0x18);
          puVar13 = (undefined8 *)(lVar7 + uVar17 * 0x18);
          local_b8[3] = *puVar13;
          uStack_98 = puVar13[1];
          lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8);
          uVar17 = (ulonglong)uVar3 & 0x1ff;
          local_78 = *(undefined8 *)(lVar9 + 0x10 + uVar17 * 0x18);
          puVar13 = (undefined8 *)(lVar9 + uVar17 * 0x18);
          local_88 = *puVar13;
          uStack_80 = puVar13[1];
          local_138 = *(undefined8 *)(local_158 + 4);
          local_148 = *local_158;
          iStack_144 = local_158[1];
          iStack_140 = local_158[2];
          iStack_13c = local_158[3];
          puVar13 = local_b8;
          puVar16 = local_130;
          for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar16 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar16 = puVar16 + 1;
          }
          dVar18 = (double)FUN_146bd2a7a(&local_148);
          if (dVar18 < *local_150) {
            *local_150 = dVar18;
            *param_5 = iVar15;
            uVar17 = CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
            goto LAB_142967d04;
          }
        }
        else {
          plVar8 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar8 = (longlong *)(param_6 + 0x30);
          }
          local_148 = iVar15;
          uVar6 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*pcVar4)(uVar6,&local_148);
          if (cVar5 != '\0') goto LAB_142967a59;
        }
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    uVar14 = (undefined7)((ulonglong)param_4 >> 8);
    if ((int)uVar11 < 0) {
      dVar18 = (double)FUN_142966f84(param_1,~uVar11,param_3);
      if (dVar18 <= *param_4) {
        local_160 = param_6;
        local_168 = param_5;
        cVar5 = FUN_142967960(param_1,~uVar11,local_158,param_4);
LAB_142967cfe:
        uVar17 = CONCAT71(uVar14,1);
        if (cVar5 != '\0') goto LAB_142967d04;
      }
    }
    else {
      iVar12 = uVar11 - 1;
      iVar15 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4) + -1;
      dVar18 = (double)FUN_142966f84(param_1,iVar12,param_3);
      dVar19 = (double)FUN_142966f84(param_1,iVar15,param_3);
      if (dVar19 <= dVar18) {
        if (dVar19 < *param_4) {
          local_160 = param_6;
          local_168 = param_5;
          cVar5 = FUN_142967960(param_1,iVar15,local_158,param_4);
          uVar17 = CONCAT71(uVar14,1);
          if (cVar5 != '\0') goto LAB_142967d04;
          iVar15 = iVar12;
          if (dVar18 < *param_4) goto LAB_142967cf1;
        }
      }
      else if (dVar18 < *param_4) {
        local_160 = param_6;
        local_168 = param_5;
        cVar5 = FUN_142967960(param_1,iVar12,local_158,param_4);
        uVar17 = CONCAT71(uVar14,1);
        if (cVar5 != '\0') goto LAB_142967d04;
        if (dVar19 < *param_4) {
LAB_142967cf1:
          local_160 = param_6;
          local_168 = param_5;
          cVar5 = FUN_142967960(param_1,iVar15,local_158,param_4);
          goto LAB_142967cfe;
        }
      }
    }
  }
  uVar17 = 0;
LAB_142967d04:
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 142967d44 FUN_142967d44 body=778 status=ok
// SIG undefined FUN_142967d44(void)

void FUN_142967d44(longlong param_1,uint param_2,double *param_3,double *param_4,uint *param_5,
                  longlong param_6)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  longlong local_a0;
  int local_8c;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  while (*(int *)(param_1 + 200) <= (int)uVar10) {
    uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
    if ((int)uVar8 < 0) {
      uVar8 = ~uVar8;
      dVar13 = (double)FUN_142966f84(param_1,uVar8,param_3);
      if (*param_4 < dVar13) goto LAB_14296801a;
    }
    else {
      uVar8 = uVar8 - 1;
      uVar10 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                       (ulonglong)(uVar10 + 1 & 0x1ff) * 4) - 1;
      dVar13 = (double)FUN_142966f84(param_1,uVar8,param_3);
      dVar14 = (double)FUN_142966f84(param_1,uVar10,param_3);
      if (dVar14 <= dVar13) {
        if (*param_4 <= dVar14) goto LAB_14296801a;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_142967d44(param_1,uVar10,param_3,param_4);
        if (*param_4 <= dVar13) goto LAB_14296801a;
      }
      else {
        if (*param_4 <= dVar13) goto LAB_14296801a;
        local_a0 = param_6;
        local_a8 = param_5;
        FUN_142967d44(param_1,uVar8,param_3,param_4);
        uVar8 = uVar10;
        if (*param_4 <= dVar14) goto LAB_14296801a;
      }
    }
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
  }
  local_8c = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar10 >> 9) * 8) +
                     (ulonglong)(uVar10 & 0x1ff) * 4);
  if (0 < local_8c) {
    local_88 = (longlong *)(param_6 + 0x30);
    iVar11 = 1;
    do {
      iVar1 = *(int *)(*(longlong *)
                        (*(longlong *)(param_1 + 0xb8) + (ulonglong)(iVar11 + uVar10 >> 9) * 8) +
                      (ulonglong)(iVar11 + uVar10 & 0x1ff) * 4);
      pcVar2 = *(code **)(param_6 + 0x10);
      if (pcVar2 == (code *)0x0) {
LAB_142967f66:
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x90);
        local_78 = *(undefined4 *)(lVar6 + 8 + (longlong)iVar1 * 0xc);
        local_80 = *(undefined8 *)(lVar6 + (longlong)iVar1 * 0xc);
        lVar6 = 0;
        do {
          uVar8 = *(uint *)((longlong)&local_80 + lVar6 * 4);
          lVar3 = *(longlong *)
                   (*(longlong *)(**(longlong **)(param_1 + 8) + 0x10) + (ulonglong)(uVar8 >> 9) * 8
                   );
          uVar9 = (ulonglong)(uVar8 & 0x1ff);
          dVar14 = *param_3 - *(double *)(lVar3 + uVar9 * 0x18);
          dVar15 = param_3[1] - *(double *)(lVar3 + 8 + uVar9 * 0x18);
          dVar13 = param_3[2] - *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
          dVar13 = dVar13 * dVar13 + dVar14 * dVar14 + dVar15 * dVar15;
          if (dVar13 < *param_4) {
            *param_4 = dVar13;
            *param_5 = uVar8;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
      }
      else {
        local_80 = CONCAT44(local_80._4_4_,iVar1);
        plVar7 = *(longlong **)(param_6 + 0x20);
        if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
          plVar7 = local_88;
        }
        uVar5 = (**(code **)(*plVar7 + 8))();
        cVar4 = (*pcVar2)(uVar5,&local_80);
        if (cVar4 != '\0') goto LAB_142967f66;
      }
      bVar12 = iVar11 != local_8c;
      iVar11 = iVar11 + 1;
    } while (bVar12);
  }
LAB_14296801a:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142968050 FUN_142968050 body=1107 status=ok
// SIG undefined FUN_142968050(void)

ulonglong FUN_142968050(longlong param_1,uint param_2,int *param_3,double param_4,double *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  longlong *plVar6;
  double dVar7;
  char cVar8;
  undefined8 uVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 unaff_RDI;
  undefined8 *puVar16;
  undefined7 uVar17;
  ulonglong uVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_228 [32];
  double *local_208;
  int *local_1f8;
  int *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188 [4];
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_108 [9];
  double local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_1f8 = param_3;
  if ((int)uVar13 < *(int *)(param_1 + 200)) {
    iVar19 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8) +
                     (ulonglong)(uVar13 & 0x1ff) * 4);
    if (0 < iVar19) {
      local_1f0 = param_3 + 6;
      do {
        uVar13 = uVar13 + 1;
        iVar14 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8) +
                         (ulonglong)(uVar13 & 0x1ff) * 4);
        pcVar5 = (code *)param_5[2];
        if (pcVar5 == (code *)0x0) {
LAB_142968163:
          lVar11 = (longlong)iVar14;
          plVar6 = *(longlong **)(param_1 + 8);
          lVar12 = *(longlong *)(plVar6[1] + 0x90);
          uVar2 = *(uint *)(lVar12 + lVar11 * 0xc);
          uVar3 = *(uint *)(lVar12 + 4 + lVar11 * 0xc);
          uVar4 = *(uint *)(lVar12 + 8 + lVar11 * 0xc);
          lVar12 = *(longlong *)(*(longlong *)(*plVar6 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
          uVar18 = (ulonglong)uVar2 & 0x1ff;
          puVar15 = (undefined8 *)(lVar12 + uVar18 * 0x18);
          local_1a8 = *puVar15;
          uStack_1a0 = puVar15[1];
          local_198 = *(undefined8 *)(lVar12 + 0x10 + uVar18 * 0x18);
          lVar12 = *(longlong *)(*(longlong *)(*plVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
          uVar18 = (ulonglong)uVar3 & 0x1ff;
          puVar15 = (undefined8 *)(lVar12 + uVar18 * 0x18);
          local_1c8 = *puVar15;
          uStack_1c0 = puVar15[1];
          local_1b8 = *(undefined8 *)(lVar12 + 0x10 + uVar18 * 0x18);
          lVar12 = *(longlong *)(*(longlong *)(*plVar6 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
          uVar18 = (ulonglong)uVar4 & 0x1ff;
          puVar1 = (undefined4 *)(lVar12 + uVar18 * 0x18);
          local_1e8 = *puVar1;
          uStack_1e4 = puVar1[1];
          uStack_1e0 = puVar1[2];
          uStack_1dc = puVar1[3];
          local_1d8 = *(undefined8 *)(lVar12 + 0x10 + uVar18 * 0x18);
          local_208 = (double *)&local_1e8;
          cVar8 = FUN_146bd896c(local_1f8,local_1f0,&local_1a8,&local_1c8);
          if (cVar8 != '\0') {
            local_188[2] = local_198;
            local_188[0] = local_1a8;
            local_188[1] = uStack_1a0;
            local_160 = local_1b8;
            local_188[3] = local_1c8;
            uStack_168 = uStack_1c0;
            local_148 = local_1d8;
            local_158 = CONCAT44(uStack_1e4,local_1e8);
            uStack_150 = CONCAT44(uStack_1dc,uStack_1e0);
            local_138 = *local_1f8;
            iStack_134 = local_1f8[1];
            iStack_130 = local_1f8[2];
            iStack_12c = local_1f8[3];
            local_128 = *(undefined8 *)(local_1f8 + 4);
            uStack_120 = *(undefined8 *)(local_1f8 + 6);
            local_118 = local_1f8[8];
            iStack_114 = local_1f8[9];
            iStack_110 = local_1f8[10];
            iStack_10c = local_1f8[0xb];
            puVar15 = local_188;
            puVar16 = local_108;
            for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar16 = *puVar15;
              puVar15 = puVar15 + 1;
              puVar16 = puVar16 + 1;
            }
            cVar8 = FUN_146bd80f0(&local_138);
            if ((cVar8 != '\0') && (local_c0 < *param_5)) {
              uVar18 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
              goto LAB_142968452;
            }
          }
        }
        else {
          pdVar10 = (double *)param_5[4];
          if ((double *)param_5[4] == (double *)0x0) {
            pdVar10 = param_5 + 6;
          }
          local_138 = iVar14;
          uVar9 = (**(code **)((longlong)*pdVar10 + 8))();
          cVar8 = (*pcVar5)(uVar9,&local_138);
          if (cVar8 != '\0') goto LAB_142968163;
        }
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar13 >> 9) * 8) +
                     (ulonglong)(uVar13 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar7 = (double)FUN_1429673fa(param_1,~uVar2,param_3);
      if (dVar7 <= param_4 + 1e-08) {
        local_208 = param_5;
        cVar8 = FUN_142968050(param_1,~uVar2,local_1f8,param_4);
        uVar17 = (undefined7)((ulonglong)unaff_RDI >> 8);
LAB_14296844c:
        uVar18 = CONCAT71(uVar17,1);
        if (cVar8 != '\0') goto LAB_142968452;
      }
    }
    else {
      iVar14 = uVar2 - 1;
      iVar19 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                       (ulonglong)(uVar13 + 1 & 0x1ff) * 4) + -1;
      dVar20 = (double)FUN_1429673fa(param_1,iVar14,param_3);
      dVar21 = (double)FUN_1429673fa(param_1,iVar19,param_3);
      dVar7 = param_4 + 1e-08;
      uVar17 = (undefined7)((ulonglong)param_3 >> 8);
      if (dVar21 <= dVar20) {
        if (dVar21 <= dVar7) {
          local_208 = param_5;
          cVar8 = FUN_142968050(param_1,iVar19,local_1f8,param_4);
          iVar19 = iVar14;
          dVar21 = dVar20;
          goto joined_r0x00014296842b;
        }
      }
      else if (dVar20 <= dVar7) {
        local_208 = param_5;
        cVar8 = FUN_142968050(param_1,iVar14,local_1f8,param_4);
joined_r0x00014296842b:
        uVar18 = CONCAT71(uVar17,1);
        if (cVar8 != '\0') goto LAB_142968452;
        if (dVar21 <= dVar7) {
          local_208 = param_5;
          cVar8 = FUN_142968050(param_1,iVar19,local_1f8,param_4);
          goto LAB_14296844c;
        }
      }
    }
  }
  uVar18 = 0;
LAB_142968452:
  if ((local_90 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar18 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429684a4 FUN_1429684a4 body=2606 status=ok
// SIG undefined FUN_1429684a4(void)

void FUN_1429684a4(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,double *param_7,ulonglong *param_8,longlong param_9,longlong param_10
                  )

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  bool bVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  int local_2a0;
  double *local_298;
  ulonglong *local_290;
  longlong local_288;
  longlong local_280;
  int local_274;
  ulonglong local_270;
  ulonglong local_268;
  int local_25c;
  undefined8 *local_258;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
  ulonglong local_230;
  uint local_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1a8 [9];
  undefined8 local_160 [9];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8 [4];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                    (ulonglong)(param_5 & 0x1ff) * 4);
  iVar19 = *(int *)(param_1 + 200);
  if (((int)uVar8 < iVar19) && ((int)uVar14 < *(int *)(param_3 + 200))) {
    local_274 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
    local_25c = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8)
                        + (ulonglong)(uVar14 & 0x1ff) * 4);
    local_210 = -1.0;
    local_268 = (ulonglong)uVar8;
    local_258 = param_4;
    if (0 < local_25c) {
      local_240 = (longlong *)(param_10 + 0x30);
      local_248 = param_4 + 4;
      local_268 = (ulonglong)(uVar8 + 1);
      uVar9 = 1;
      local_250 = param_3;
      local_238 = (ulonglong)uVar14;
      do {
        uVar8 = (int)uVar9 + (int)local_238;
        uVar8 = *(uint *)(*(longlong *)
                           (*(longlong *)(local_250 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 4);
        local_270 = (ulonglong)uVar8;
        pcVar4 = *(code **)(param_10 + 0x10);
        local_230 = uVar9;
        if (pcVar4 == (code *)0x0) {
LAB_142968674:
          plVar6 = local_248;
          puVar17 = local_258;
          lVar11 = (longlong)(int)local_270;
          plVar13 = *(longlong **)(local_250 + 8);
          lVar12 = *(longlong *)(plVar13[1] + 0x90);
          uVar8 = *(uint *)(lVar12 + lVar11 * 0xc);
          uVar14 = *(uint *)(lVar12 + 4 + lVar11 * 0xc);
          uVar15 = *(uint *)(lVar12 + 8 + lVar11 * 0xc);
          lVar12 = *(longlong *)(*(longlong *)(*plVar13 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
          uVar9 = (ulonglong)uVar8 & 0x1ff;
          puVar16 = (undefined8 *)(lVar12 + uVar9 * 0x18);
          local_108 = *(undefined8 *)(lVar12 + 0x10 + uVar9 * 0x18);
          local_118 = *puVar16;
          uStack_110 = puVar16[1];
          lVar12 = *(longlong *)(*(longlong *)(*plVar13 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
          uVar9 = (ulonglong)uVar14 & 0x1ff;
          puVar16 = (undefined8 *)(lVar12 + uVar9 * 0x18);
          local_f0 = *(undefined8 *)(lVar12 + 0x10 + uVar9 * 0x18);
          local_100 = *puVar16;
          uStack_f8 = puVar16[1];
          lVar12 = *(longlong *)(*(longlong *)(*plVar13 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar9 = (ulonglong)uVar15 & 0x1ff;
          puVar1 = (uint *)(lVar12 + uVar9 * 0x18);
          local_d8 = *(undefined8 *)(lVar12 + 0x10 + uVar9 * 0x18);
          local_e8 = *puVar1;
          uStack_e4 = puVar1[1];
          uStack_e0 = puVar1[2];
          uStack_dc = puVar1[3];
          pcVar4 = (code *)*local_258;
          if (pcVar4 != (code *)0x0) {
            plVar13 = (longlong *)local_258[2];
            if ((longlong *)local_258[2] == (longlong *)0x0) {
              plVar13 = local_248;
            }
            uVar10 = (**(code **)(*plVar13 + 8))();
            (*pcVar4)(&local_228,uVar10,&local_118);
            local_108 = local_218;
            local_118 = CONCAT44(uStack_224,local_228);
            uStack_110 = CONCAT44(uStack_21c,uStack_220);
            pcVar4 = (code *)*puVar17;
            plVar13 = (longlong *)puVar17[2];
            if ((longlong *)puVar17[2] == (longlong *)0x0) {
              plVar13 = plVar6;
            }
            uVar10 = (**(code **)(*plVar13 + 8))();
            (*pcVar4)(&local_228,uVar10,&local_100);
            local_f0 = local_218;
            local_100 = CONCAT44(uStack_224,local_228);
            uStack_f8 = CONCAT44(uStack_21c,uStack_220);
            pcVar4 = (code *)*puVar17;
            plVar13 = (longlong *)puVar17[2];
            if ((longlong *)puVar17[2] == (longlong *)0x0) {
              plVar13 = plVar6;
            }
            uVar10 = (**(code **)(*plVar13 + 8))();
            (*pcVar4)(&local_228,uVar10,&local_e8);
            local_d8 = local_218;
            local_e8 = local_228;
            uStack_e4 = uStack_224;
            uStack_e0 = uStack_220;
            uStack_dc = uStack_21c;
          }
          puVar16 = &local_118;
          puVar17 = local_1a8;
          for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
          }
          local_210 = -1.0;
          if (0 < local_274) {
            local_270 = local_270 << 0x20;
            uVar9 = local_268 & 0xffffffff;
            iVar19 = local_274;
            do {
              uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar9 >> 9) * 8) +
                               (ulonglong)((uint)uVar9 & 0x1ff) * 4);
              pcVar4 = *(code **)(param_9 + 0x10);
              if (pcVar4 == (code *)0x0) {
LAB_1429688c4:
                lVar11 = (longlong)(int)uVar8;
                lVar12 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
                uVar14 = *(uint *)(lVar12 + lVar11 * 0xc);
                uVar15 = *(uint *)(lVar12 + 4 + lVar11 * 0xc);
                uVar3 = *(uint *)(lVar12 + 8 + lVar11 * 0xc);
                lVar12 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
                lVar11 = *(longlong *)(lVar12 + (ulonglong)(uVar14 >> 9) * 8);
                uVar18 = (ulonglong)uVar14 & 0x1ff;
                local_c8[2] = *(undefined8 *)(lVar11 + 0x10 + uVar18 * 0x18);
                puVar16 = (undefined8 *)(lVar11 + uVar18 * 0x18);
                local_c8[0] = *puVar16;
                local_c8[1] = puVar16[1];
                lVar11 = *(longlong *)(lVar12 + (ulonglong)(uVar15 >> 9) * 8);
                uVar18 = (ulonglong)uVar15 & 0x1ff;
                local_a0 = *(undefined8 *)(lVar11 + 0x10 + uVar18 * 0x18);
                puVar16 = (undefined8 *)(lVar11 + uVar18 * 0x18);
                local_c8[3] = *puVar16;
                uStack_a8 = puVar16[1];
                lVar12 = *(longlong *)(lVar12 + (ulonglong)(uVar3 >> 9) * 8);
                uVar18 = (ulonglong)uVar3 & 0x1ff;
                local_88 = *(undefined8 *)(lVar12 + 0x10 + uVar18 * 0x18);
                puVar2 = (undefined4 *)(lVar12 + uVar18 * 0x18);
                local_98 = *puVar2;
                uStack_94 = puVar2[1];
                uStack_90 = puVar2[2];
                uStack_8c = puVar2[3];
                puVar16 = local_c8;
                puVar17 = local_160;
                for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *puVar17 = *puVar16;
                  puVar16 = puVar16 + 1;
                  puVar17 = puVar17 + 1;
                }
                local_210 = -1.0;
                dVar22 = (double)FUN_146bd8e44(&local_210);
                if (dVar22 < *param_7) {
                  *param_7 = dVar22;
                  *param_8 = uVar8 | local_270;
                }
              }
              else {
                plVar13 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar13 = (longlong *)(param_9 + 0x30);
                }
                local_228 = uVar8;
                uVar10 = (**(code **)(*plVar13 + 8))();
                cVar7 = (*pcVar4)(uVar10,&local_228);
                if (cVar7 != '\0') goto LAB_1429688c4;
              }
              uVar9 = (ulonglong)((uint)uVar9 + 1);
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
          }
        }
        else {
          plVar13 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar13 = local_240;
          }
          local_228 = uVar8;
          uVar10 = (**(code **)(*plVar13 + 8))();
          cVar7 = (*pcVar4)(uVar10,&local_228);
          if (cVar7 != '\0') goto LAB_142968674;
        }
        uVar9 = (ulonglong)((int)local_230 + 1);
      } while ((int)local_230 != local_25c);
    }
    goto LAB_142968c13;
  }
  bVar20 = (param_6 & 1) == 0;
  if ((bVar20 || (int)uVar8 < iVar19) &&
      (*(int *)(param_3 + 200) <= (int)uVar14 || !bVar20 && (int)uVar8 >= iVar19)) {
    uVar9 = (ulonglong)((param_2 >> 9) << 3);
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar9);
    lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar9);
    local_1e8 = *(double *)(lVar12 + 0x10 + lVar5);
    dVar22 = *(double *)(lVar11 + 0x10 + lVar5);
    local_200 = local_1e8 - dVar22;
    local_1f0 = *(double *)(lVar12 + 8 + lVar5);
    dVar23 = *(double *)(lVar11 + 8 + lVar5);
    local_208 = local_1f0 - dVar23;
    local_210 = *(double *)(lVar12 + lVar5) - *(double *)(lVar11 + lVar5);
    local_1e8 = local_1e8 + dVar22;
    local_1f0 = local_1f0 + dVar23;
    local_1f8 = *(double *)(lVar12 + lVar5) + *(double *)(lVar11 + lVar5);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8)
                       + (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      FUN_142968ed4(param_3,local_c8,~param_5,param_4);
      dVar22 = (double)FUN_146bd8cba(local_c8,&local_210);
      uVar14 = ~param_5;
      if (*param_7 <= dVar22) goto LAB_142968c13;
    }
    else {
      param_5 = param_5 - 1;
      uVar14 = *(int *)(*(longlong *)
                         (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      FUN_142968ed4(param_3,local_c8,param_5,param_4);
      FUN_142968ed4(param_3,&local_118,uVar14,param_4);
      dVar23 = (double)FUN_146bd8cba(local_c8,&local_210);
      dVar24 = (double)FUN_146bd8cba(&local_118,&local_210);
      dVar22 = *param_7;
      uVar21 = SUB84(dVar22,0);
      uVar25 = (undefined4)((ulonglong)dVar22 >> 0x20);
      if (dVar24 < dVar23) {
        uVar15 = param_2;
        if (dVar24 < dVar22) goto LAB_142968b14;
        goto LAB_142968b25;
      }
      if (dVar23 < dVar22) {
        local_2a0 = param_6 + 1;
        local_280 = param_10;
        local_288 = param_9;
        local_290 = param_8;
        local_298 = param_7;
        local_2a8 = param_5;
        FUN_1429684a4(param_1,param_2,param_3,param_4);
        uVar21 = SUB84(*param_7,0);
        uVar25 = (undefined4)((ulonglong)*param_7 >> 0x20);
      }
      if ((double)CONCAT44(uVar25,uVar21) < dVar24 || (double)CONCAT44(uVar25,uVar21) == dVar24)
      goto LAB_142968c13;
    }
  }
  else {
    FUN_142968ed4(param_3,&local_210,param_5,param_4);
    uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
    uVar14 = param_5;
    if ((int)uVar15 < 0) {
      param_2 = ~uVar15;
      dVar22 = (double)FUN_1429690ba(param_1,param_2,&local_210);
      if (*param_7 <= dVar22) goto LAB_142968c13;
    }
    else {
      uVar15 = uVar15 - 1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                        (ulonglong)(uVar8 + 1 & 0x1ff) * 4) - 1;
      dVar23 = (double)FUN_1429690ba(param_1,uVar15,&local_210);
      dVar24 = (double)FUN_1429690ba(param_1,param_2,&local_210);
      dVar22 = *param_7;
      uVar21 = SUB84(dVar22,0);
      uVar25 = (undefined4)((ulonglong)dVar22 >> 0x20);
      if (dVar23 <= dVar24) {
        if (dVar23 < dVar22) {
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          local_2a8 = param_5;
          FUN_1429684a4(param_1,uVar15,param_3,param_4);
          uVar21 = SUB84(*param_7,0);
          uVar25 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
        if ((double)CONCAT44(uVar25,uVar21) < dVar24 || (double)CONCAT44(uVar25,uVar21) == dVar24)
        goto LAB_142968c13;
      }
      else {
        if (dVar24 < dVar22) {
          local_2a8 = param_5;
          uVar14 = local_2a8;
LAB_142968b14:
          local_2a8 = uVar14;
          local_2a0 = param_6 + 1;
          local_280 = param_10;
          local_288 = param_9;
          local_290 = param_8;
          local_298 = param_7;
          FUN_1429684a4(param_1,param_2,param_3,param_4);
          uVar21 = SUB84(*param_7,0);
          uVar25 = (undefined4)((ulonglong)*param_7 >> 0x20);
        }
LAB_142968b25:
        param_2 = uVar15;
        uVar14 = param_5;
        if ((double)CONCAT44(uVar25,uVar21) < dVar23 || (double)CONCAT44(uVar25,uVar21) == dVar23)
        goto LAB_142968c13;
      }
    }
  }
  local_280 = param_10;
  local_288 = param_9;
  local_290 = param_8;
  local_2a0 = param_6 + 1;
  local_298 = param_7;
  local_2a8 = uVar14;
  FUN_1429684a4(param_1,param_2,param_3,param_4);
LAB_142968c13:
  if ((local_80 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142968ed4 FUN_142968ed4 body=484 status=ok
// SIG undefined FUN_142968ed4(void)

double * FUN_142968ed4(longlong param_1,double *param_2,uint param_3,longlong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    dVar1 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar8 + 0x10 + lVar9);
    dVar3 = *(double *)(lVar7 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    dVar5 = *(double *)(lVar8 + lVar9);
    dVar6 = *(double *)(lVar8 + 8 + lVar9);
    *param_2 = dVar3 - dVar5;
    param_2[1] = dVar4 - dVar6;
    param_2[2] = dVar1 - dVar2;
    param_2[3] = dVar3 + dVar5;
    param_2[4] = dVar4 + dVar6;
    param_2[5] = dVar1 + dVar2;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_3 >> 9) * 8);
    lVar9 = (ulonglong)((param_3 & 0x1ff) << 3) * 3;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_3 >> 9) * 8);
    local_90 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar1 = *(double *)(lVar8 + 0x10 + lVar9);
    local_a8 = local_90 - dVar1;
    local_98 = *(double *)(lVar7 + 8 + lVar9);
    dVar2 = *(double *)(lVar8 + 8 + lVar9);
    local_b0 = local_98 - dVar2;
    local_b8 = *(double *)(lVar7 + lVar9) - *(double *)(lVar8 + lVar9);
    local_90 = local_90 + dVar1;
    local_98 = local_98 + dVar2;
    local_a0 = *(double *)(lVar7 + lVar9) + *(double *)(lVar8 + lVar9);
    local_78 = 0;
    local_68 = &PTR_LAB_149f362c0;
    local_88 = FUN_1429691c0;
    local_60 = param_4;
    FUN_146bda188(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429690ba FUN_1429690ba body=260 status=ok
// SIG undefined FUN_1429690ba(void)

void FUN_1429690ba(longlong param_1,uint param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(double *)(param_1 + 0x60);
  lVar4 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  local_58 = *(double *)(lVar3 + lVar4) + local_48;
  local_50 = *(double *)(lVar3 + 8 + lVar4) + local_48;
  local_48 = local_48 + *(double *)(lVar3 + 0x10 + lVar4);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4);
  local_60 = dVar1 - local_48;
  dVar2 = *(double *)(lVar3 + 8 + lVar4);
  local_68 = dVar2 - local_50;
  local_70 = *(double *)(lVar3 + lVar4) - local_58;
  local_48 = local_48 + dVar1;
  local_50 = local_50 + dVar2;
  local_58 = local_58 + *(double *)(lVar3 + lVar4);
  FUN_146bd8cba(&local_70,param_3);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429691c0 FUN_1429691c0 body=62 status=ok
// SIG undefined FUN_1429691c0(void)

undefined8 FUN_1429691c0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 142969228 FUN_142969228 body=29 status=ok
// SIG undefined FUN_142969228(void)

undefined8 FUN_142969228(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142969246 FUN_142969246 body=841 status=ok
// SIG undefined FUN_142969246(void)

int FUN_142969246(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,longlong param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  local_d8 = param_3;
  if ((int)uVar14 < *(int *)(param_1 + 200)) {
    iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
    if (0 < iVar13) {
      do {
        uVar14 = uVar14 + 1;
        iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8)
                        + (ulonglong)(uVar14 & 0x1ff) * 4);
        pcVar5 = *(code **)(param_6 + 0x10);
        if (pcVar5 == (code *)0x0) {
LAB_142969330:
          lVar11 = (longlong)iVar8;
          plVar10 = *(longlong **)(param_1 + 8);
          lVar6 = *(longlong *)(plVar10[1] + 0x90);
          uVar15 = *(uint *)(lVar6 + lVar11 * 0xc);
          uVar3 = *(uint *)(lVar6 + 4 + lVar11 * 0xc);
          uVar4 = *(uint *)(lVar6 + 8 + lVar11 * 0xc);
          lVar6 = *(longlong *)(*(longlong *)(*plVar10 + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
          uVar12 = (ulonglong)uVar15 & 0x1ff;
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          local_88 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          lVar6 = *(longlong *)(*(longlong *)(*plVar10 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
          uVar12 = (ulonglong)uVar3 & 0x1ff;
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x18);
          local_80 = *puVar1;
          uStack_78 = puVar1[1];
          local_70 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          lVar6 = *(longlong *)(*(longlong *)(*plVar10 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
          uVar12 = (ulonglong)uVar4 & 0x1ff;
          puVar2 = (undefined4 *)(lVar6 + uVar12 * 0x18);
          local_68 = *puVar2;
          uStack_64 = puVar2[1];
          uStack_60 = puVar2[2];
          uStack_5c = puVar2[3];
          local_58 = *(undefined8 *)(lVar6 + 0x10 + uVar12 * 0x18);
          cVar7 = (*(code *)*param_5)(param_5[1],local_d8,&local_98);
          if (cVar7 != '\0') goto LAB_142969560;
        }
        else {
          plVar10 = *(longlong **)(param_6 + 0x20);
          if (*(longlong **)(param_6 + 0x20) == (longlong *)0x0) {
            plVar10 = (longlong *)(param_6 + 0x30);
          }
          local_9c = iVar8;
          uVar9 = (**(code **)(*plVar10 + 8))();
          cVar7 = (*pcVar5)(uVar9,&local_9c);
          if (cVar7 != '\0') goto LAB_142969330;
        }
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar8 = -1;
  }
  else {
    uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar15 < 0) {
      uVar15 = ~uVar15;
      cVar7 = FUN_142969590(param_1,uVar15,param_4);
      iVar8 = -1;
      if (cVar7 == '\0') goto LAB_142969560;
      local_b0 = *param_5;
      local_e8 = &local_b0;
      local_a8 = param_5[1];
    }
    else {
      iVar13 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      cVar7 = FUN_142969590(param_1,uVar15 - 1,param_4);
      if (cVar7 != '\0') {
        local_c0 = *param_5;
        local_e8 = &local_c0;
        local_b8 = param_5[1];
        local_e0 = param_6;
        iVar8 = FUN_142969246(param_1,uVar15 - 1,local_d8,param_4);
        if (iVar8 != -1) goto LAB_142969560;
      }
      uVar15 = iVar13 - 1;
      cVar7 = FUN_142969590(param_1,uVar15,param_4);
      iVar8 = -1;
      if (cVar7 == '\0') goto LAB_142969560;
      local_d0 = *param_5;
      local_e8 = &local_d0;
      local_c8 = param_5[1];
    }
    local_e0 = param_6;
    iVar8 = FUN_142969246(param_1,uVar15,local_d8,param_4);
  }
LAB_142969560:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142969590 FUN_142969590 body=191 status=ok
// SIG undefined FUN_142969590(void)

bool FUN_142969590(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)(param_1 + 0x60);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar6 = *(double *)(lVar2 + lVar3) + dVar5;
  bVar4 = false;
  if ((*(double *)(lVar1 + lVar3) - dVar6 < param_3[3]) &&
     (*param_3 < dVar6 + *(double *)(lVar1 + lVar3))) {
    dVar7 = *(double *)(lVar2 + 8 + lVar3) + dVar5;
    dVar6 = *(double *)(lVar1 + 8 + lVar3);
    if ((dVar6 - dVar7 < param_3[4]) && (bVar4 = false, param_3[1] < dVar7 + dVar6)) {
      dVar5 = dVar5 + *(double *)(lVar2 + 0x10 + lVar3);
      dVar6 = *(double *)(lVar1 + 0x10 + lVar3);
      if (dVar6 - dVar5 < param_3[5]) {
        bVar4 = param_3[2] < dVar6 + dVar5;
      }
    }
  }
  return bVar4;
}



// FUNCTION 142969664 FUN_142969664 body=2646 status=ok
// SIG undefined FUN_142969664(void)

ulonglong FUN_142969664(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,
                       uint param_5,uint param_6,undefined8 *param_7,longlong param_8,
                       longlong param_9)

{
  double *pdVar1;
  int *piVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  undefined8 *puVar17;
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  int *piVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  int iVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_230;
  undefined8 *local_228;
  longlong local_220;
  longlong local_218;
  undefined8 *local_210;
  int local_204;
  int local_200;
  uint local_1fc;
  longlong local_1f8;
  longlong *local_1f0;
  ulonglong local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170 [2];
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  iVar26 = *(int *)(param_1 + 200);
  local_210 = param_4;
  if (((int)uVar19 < iVar26) && ((int)uVar8 < *(int *)(param_3 + 200))) {
    local_200 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8)
                        + (ulonglong)(uVar8 & 0x1ff) * 4);
    if (0 < local_200) {
      local_204 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                          (ulonglong)(uVar19 & 0x1ff) * 4);
      local_1e0 = (longlong *)(param_9 + 0x30);
      local_1f0 = param_4 + 4;
      local_1d8 = (longlong *)(param_8 + 0x30);
      local_1e8 = (ulonglong)(uVar19 + 1);
      uVar20 = 1;
      uVar27 = CONCAT71((uint7)(uint3)((uint)iVar26 >> 8),1);
      local_1f8 = param_3;
      local_1d0 = (ulonglong)uVar8;
      do {
        local_1fc = (uint)uVar27;
        uVar19 = (int)uVar20 + (int)local_1d0;
        iVar26 = *(int *)(*(longlong *)
                           (*(longlong *)(local_1f8 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8) +
                         (ulonglong)(uVar19 & 0x1ff) * 4);
        pcVar11 = *(code **)(param_9 + 0x10);
        local_1c8 = uVar20;
        if (pcVar11 == (code *)0x0) {
LAB_14296983b:
          plVar25 = local_1f0;
          puVar17 = local_210;
          lVar23 = (longlong)iVar26;
          plVar24 = *(longlong **)(local_1f8 + 8);
          lVar12 = *(longlong *)(plVar24[1] + 0x90);
          uVar19 = *(uint *)(lVar12 + lVar23 * 0xc);
          uVar8 = *(uint *)(lVar12 + 4 + lVar23 * 0xc);
          uVar9 = *(uint *)(lVar12 + 8 + lVar23 * 0xc);
          lVar12 = *(longlong *)(*(longlong *)(*plVar24 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
          uVar20 = (ulonglong)uVar19 & 0x1ff;
          pdVar1 = (double *)(lVar12 + uVar20 * 0x18);
          local_148 = *pdVar1;
          uStack_140 = pdVar1[1];
          local_138 = *(double *)(lVar12 + 0x10 + uVar20 * 0x18);
          lVar12 = *(longlong *)(*(longlong *)(*plVar24 + 0x10) + (ulonglong)(uVar8 >> 9) * 8);
          uVar20 = (ulonglong)uVar8 & 0x1ff;
          pdVar1 = (double *)(lVar12 + uVar20 * 0x18);
          local_130 = *pdVar1;
          uStack_128 = pdVar1[1];
          local_120 = *(double *)(lVar12 + 0x10 + uVar20 * 0x18);
          piVar22 = (int *)(ulonglong)(uVar9 >> 9);
          lVar12 = *(longlong *)(*(longlong *)(*plVar24 + 0x10) + (longlong)piVar22 * 8);
          uVar20 = (ulonglong)uVar9 & 0x1ff;
          piVar2 = (int *)(lVar12 + uVar20 * 0x18);
          local_118 = *piVar2;
          iStack_114 = piVar2[1];
          iStack_110 = piVar2[2];
          iStack_10c = piVar2[3];
          local_108 = *(double *)(lVar12 + 0x10 + uVar20 * 0x18);
          pcVar11 = (code *)*local_210;
          if (pcVar11 != (code *)0x0) {
            plVar24 = (longlong *)local_210[2];
            if ((longlong *)local_210[2] == (longlong *)0x0) {
              plVar24 = local_1f0;
            }
            uVar21 = (**(code **)(*plVar24 + 8))();
            (*pcVar11)(&local_160,uVar21,&local_148);
            local_138 = local_150;
            local_148 = (double)CONCAT44(iStack_15c,local_160);
            uStack_140 = (double)CONCAT44(iStack_154,iStack_158);
            pcVar11 = (code *)*puVar17;
            plVar24 = (longlong *)puVar17[2];
            if ((longlong *)puVar17[2] == (longlong *)0x0) {
              plVar24 = plVar25;
            }
            uVar21 = (**(code **)(*plVar24 + 8))();
            (*pcVar11)(&local_160,uVar21,&local_130);
            local_120 = local_150;
            local_130 = (double)CONCAT44(iStack_15c,local_160);
            uStack_128 = (double)CONCAT44(iStack_154,iStack_158);
            pcVar11 = (code *)*puVar17;
            plVar24 = (longlong *)puVar17[2];
            if ((longlong *)puVar17[2] == (longlong *)0x0) {
              plVar24 = plVar25;
            }
            piVar22 = (int *)(**(code **)(*plVar24 + 8))();
            (*pcVar11)(&local_160,piVar22,&local_118);
            local_108 = local_150;
            local_118 = local_160;
            iStack_114 = iStack_15c;
            iStack_110 = iStack_158;
            iStack_10c = iStack_154;
          }
          plVar24 = local_1d8;
          if (0 < local_204) {
            uVar20 = local_1e8 & 0xffffffff;
            iVar26 = local_204;
            do {
              iVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar20 >> 9) * 8) +
                               (ulonglong)((uint)uVar20 & 0x1ff) * 4);
              pcVar11 = *(code **)(param_8 + 0x10);
              if (pcVar11 == (code *)0x0) {
LAB_142969a5b:
                lVar23 = (longlong)iVar10;
                plVar25 = *(longlong **)(param_1 + 8);
                lVar12 = *(longlong *)(plVar25[1] + 0x90);
                uVar19 = *(uint *)(lVar12 + lVar23 * 0xc);
                uVar8 = *(uint *)(lVar12 + 4 + lVar23 * 0xc);
                uVar9 = *(uint *)(lVar12 + 8 + lVar23 * 0xc);
                lVar12 = *(longlong *)
                          (*(longlong *)(*plVar25 + 0x10) + (ulonglong)(uVar19 >> 9) * 8);
                uVar27 = (ulonglong)uVar19 & 0x1ff;
                pdVar1 = (double *)(lVar12 + uVar27 * 0x18);
                local_f8 = *pdVar1;
                dStack_f0 = pdVar1[1];
                local_e8 = *(double *)(lVar12 + 0x10 + uVar27 * 0x18);
                lVar12 = *(longlong *)(*(longlong *)(*plVar25 + 0x10) + (ulonglong)(uVar8 >> 9) * 8)
                ;
                uVar27 = (ulonglong)uVar8 & 0x1ff;
                pdVar1 = (double *)(lVar12 + uVar27 * 0x18);
                local_e0 = *pdVar1;
                dStack_d8 = pdVar1[1];
                local_d0 = *(double *)(lVar12 + 0x10 + uVar27 * 0x18);
                lVar12 = *(longlong *)(*(longlong *)(*plVar25 + 0x10) + (ulonglong)(uVar9 >> 9) * 8)
                ;
                uVar27 = (ulonglong)uVar9 & 0x1ff;
                puVar3 = (undefined4 *)(lVar12 + uVar27 * 0x18);
                local_c8 = *puVar3;
                uStack_c4 = puVar3[1];
                uStack_c0 = puVar3[2];
                uStack_bc = puVar3[3];
                local_b8 = *(undefined8 *)(lVar12 + 0x10 + uVar27 * 0x18);
                piVar22 = (int *)&local_148;
                cVar18 = (*(code *)*param_7)(param_7[1],piVar22,&local_f8);
                if (cVar18 != '\0') {
                  uVar27 = (ulonglong)local_1fc;
                  goto LAB_14296a054;
                }
              }
              else {
                plVar25 = *(longlong **)(param_8 + 0x20);
                if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
                  plVar25 = plVar24;
                }
                local_160 = iVar10;
                uVar21 = (**(code **)(*plVar25 + 8))();
                piVar22 = &local_160;
                cVar18 = (*pcVar11)(uVar21,piVar22);
                if (cVar18 != '\0') goto LAB_142969a5b;
              }
              uVar20 = (ulonglong)((uint)uVar20 + 1);
              iVar26 = iVar26 + -1;
            } while (iVar26 != 0);
          }
        }
        else {
          plVar24 = *(longlong **)(param_9 + 0x20);
          if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
            plVar24 = local_1e0;
          }
          local_160 = iVar26;
          uVar21 = (**(code **)(*plVar24 + 8))();
          piVar22 = &local_160;
          cVar18 = (*pcVar11)(uVar21,piVar22);
          if (cVar18 != '\0') goto LAB_14296983b;
        }
        iVar26 = (int)local_1c8;
        uVar20 = (ulonglong)(iVar26 + 1);
        uVar27 = CONCAT71((int7)((ulonglong)piVar22 >> 8),iVar26 < local_200);
      } while (iVar26 != local_200);
      goto LAB_14296a054;
    }
    goto LAB_14296a052;
  }
  bVar28 = (param_6 & 1) == 0;
  if ((bVar28 || (int)uVar19 < iVar26) &&
      (*(int *)(param_3 + 200) <= (int)uVar8 || !bVar28 && (int)uVar19 >= iVar26)) {
    uVar20 = (ulonglong)((param_2 >> 9) << 3);
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar20);
    lVar16 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar23 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar20);
    dVar4 = *(double *)(lVar12 + 0x10 + lVar16);
    dVar5 = *(double *)(lVar23 + 0x10 + lVar16);
    dVar13 = dVar4 - dVar5;
    dVar6 = *(double *)(lVar12 + 8 + lVar16);
    dVar7 = *(double *)(lVar23 + 8 + lVar16);
    dVar14 = dVar6 - dVar7;
    dVar15 = *(double *)(lVar12 + lVar16) - *(double *)(lVar23 + lVar16);
    dVar4 = dVar4 + dVar5;
    dVar6 = dVar6 + dVar7;
    dVar5 = *(double *)(lVar12 + lVar16) + *(double *)(lVar23 + lVar16);
    uVar19 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 4);
    if ((int)uVar19 < 0) {
      FUN_142968ed4(param_3,&local_f8,~uVar19,param_4);
      if (((((dVar5 <= local_f8) || (local_e0 <= dVar15)) || (dVar6 <= dStack_f0)) ||
          ((dStack_d8 <= dVar14 || (dVar4 <= local_e8)))) || (local_d0 <= dVar13))
      goto LAB_14296a052;
      uVar21 = *param_7;
      local_228 = local_170;
    }
    else {
      iVar26 = *(int *)(*(longlong *)
                         (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                       (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
      FUN_142968ed4(param_3,&local_f8,uVar19 - 1,param_4);
      if (((local_f8 < dVar5) && (dVar15 < local_e0)) &&
         ((dStack_f0 < dVar6 &&
          (((dVar14 < dStack_d8 && (local_e8 < dVar4)) && (dVar13 < local_d0)))))) {
        local_180 = *param_7;
        local_228 = &local_180;
        local_178 = param_7[1];
        local_230 = param_6 + 1;
        local_218 = param_9;
        local_220 = param_8;
        uVar20 = (ulonglong)param_2;
        local_238 = uVar19 - 1;
        cVar18 = FUN_142969664(param_1,uVar20,param_3,local_210);
        uVar27 = CONCAT71((int7)(uVar20 >> 8),1);
        if (cVar18 != '\0') goto LAB_14296a054;
      }
      param_5 = iVar26 - 1;
      FUN_142968ed4(param_3,&local_148,param_5,local_210);
      uVar27 = 0;
      if ((((dVar5 <= local_148) || (local_130 <= dVar15)) ||
          ((dVar6 <= uStack_140 || ((uStack_128 <= dVar14 || (dVar4 <= local_138)))))) ||
         (local_120 <= dVar13)) goto LAB_14296a054;
      uVar21 = *param_7;
      local_228 = local_190;
    }
    *local_228 = uVar21;
    local_228[1] = param_7[1];
    param_4 = local_210;
    local_238 = param_5;
LAB_14296a049:
    local_230 = param_6 + 1;
    local_218 = param_9;
    local_220 = param_8;
    uVar19 = FUN_142969664(param_1,param_2,param_3,param_4);
    uVar27 = (ulonglong)uVar19;
  }
  else {
    FUN_142968ed4(param_3,&local_f8,param_5,param_4);
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 >> 9) * 8)
                       + (ulonglong)(uVar19 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar18 = FUN_142969590(param_1,param_2,&local_f8);
      if (cVar18 != '\0') {
        local_1a0 = *param_7;
        local_228 = &local_1a0;
        local_198 = param_7[1];
        goto LAB_142969f70;
      }
    }
    else {
      iVar26 = *(int *)(*(longlong *)
                         (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                       (ulonglong)(uVar19 + 1 & 0x1ff) * 4);
      cVar18 = FUN_142969590(param_1,param_2 - 1,&local_f8);
      if (cVar18 != '\0') {
        local_1b0 = *param_7;
        local_228 = &local_1b0;
        local_1a8 = param_7[1];
        local_230 = param_6 + 1;
        local_218 = param_9;
        local_220 = param_8;
        local_238 = param_5;
        uVar20 = (ulonglong)(param_2 - 1);
        cVar18 = FUN_142969664(param_1,uVar20,param_3,param_4);
        uVar27 = CONCAT71((int7)(uVar20 >> 8),1);
        if (cVar18 != '\0') goto LAB_14296a054;
      }
      param_2 = iVar26 - 1;
      cVar18 = FUN_142969590(param_1,param_2,&local_f8);
      if (cVar18 != '\0') {
        local_1c0 = *param_7;
        local_228 = &local_1c0;
        local_1b8 = param_7[1];
LAB_142969f70:
        local_238 = param_5;
        goto LAB_14296a049;
      }
    }
LAB_14296a052:
    uVar27 = 0;
  }
LAB_14296a054:
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar27 & 0xffffff01;
}



// FUNCTION 14296a0d0 FUN_14296a0d0 body=62 status=ok
// SIG undefined FUN_14296a0d0(void)

undefined8 FUN_14296a0d0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)*param_2;
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(param_1,uVar3,param_3);
  return param_1;
}



// FUNCTION 14296a138 FUN_14296a138 body=29 status=ok
// SIG undefined FUN_14296a138(void)

undefined8 FUN_14296a138(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14296a156 FUN_14296a156 body=2674 status=ok
// SIG undefined FUN_14296a156(void)

void FUN_14296a156(longlong param_1,uint param_2,longlong param_3,undefined8 *param_4,uint param_5,
                  uint param_6,undefined8 param_7,undefined8 *param_8,longlong param_9,
                  longlong param_10)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong *plVar16;
  char cVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  undefined8 *puVar25;
  double *pdVar26;
  undefined8 *puVar27;
  double *pdVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined1 auStack_3a8 [32];
  uint local_388;
  int local_380;
  undefined8 local_378;
  undefined8 *local_370;
  longlong local_368;
  longlong local_360;
  int local_34c;
  int local_348;
  int local_344;
  undefined8 *local_340;
  longlong local_338;
  longlong *local_330;
  ulonglong local_328;
  longlong *local_320;
  ulonglong local_318;
  ulonglong local_310;
  longlong *local_308;
  undefined8 local_300 [2];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0 [2];
  undefined8 local_2d0 [2];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0 [2];
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  double local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  double local_260;
  int local_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  double local_248;
  double local_238 [4];
  double dStack_218;
  double local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1e8 [9];
  double local_1a0 [9];
  undefined8 local_158;
  undefined1 local_150;
  ulonglong local_14c;
  undefined4 local_144;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0x70) + (ulonglong)(param_5 >> 9) * 8) +
                   (ulonglong)(param_5 & 0x1ff) * 4);
  local_158 = 0x3e45798ee2308c3a;
  local_150 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar24 = *(int *)(param_1 + 200);
  if (((int)uVar18 < iVar24) && ((int)uVar6 < *(int *)(param_3 + 200))) {
    local_344 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8)
                        + (ulonglong)(uVar6 & 0x1ff) * 4);
    local_340 = param_4;
    if (0 < local_344) {
      local_348 = *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 4);
      local_320 = (longlong *)(param_10 + 0x30);
      local_330 = param_4 + 4;
      local_308 = (longlong *)(param_9 + 0x30);
      local_328 = (ulonglong)(uVar18 + 1);
      uVar19 = 1;
      local_338 = param_3;
      local_318 = (ulonglong)uVar6;
      do {
        uVar18 = (int)uVar19 + (int)local_318;
        local_34c = *(int *)(*(longlong *)
                              (*(longlong *)(local_338 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
        pcVar9 = *(code **)(param_10 + 0x10);
        local_310 = uVar19;
        if (pcVar9 == (code *)0x0) {
LAB_14296a373:
          plVar16 = local_330;
          puVar25 = local_340;
          lVar21 = (longlong)local_34c;
          plVar23 = *(longlong **)(local_338 + 8);
          lVar22 = *(longlong *)(plVar23[1] + 0x90);
          uVar18 = *(uint *)(lVar22 + lVar21 * 0xc);
          uVar6 = *(uint *)(lVar22 + 4 + lVar21 * 0xc);
          uVar7 = *(uint *)(lVar22 + 8 + lVar21 * 0xc);
          lVar22 = *(longlong *)(*(longlong *)(*plVar23 + 0x10) + (ulonglong)(uVar18 >> 9) * 8);
          uVar19 = (ulonglong)uVar18 & 0x1ff;
          pdVar26 = (double *)(lVar22 + uVar19 * 0x18);
          local_278 = *(double *)(lVar22 + 0x10 + uVar19 * 0x18);
          local_288 = *pdVar26;
          uStack_280 = pdVar26[1];
          lVar22 = *(longlong *)(*(longlong *)(*plVar23 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
          uVar19 = (ulonglong)uVar6 & 0x1ff;
          pdVar26 = (double *)(lVar22 + uVar19 * 0x18);
          local_260 = *(double *)(lVar22 + 0x10 + uVar19 * 0x18);
          local_270 = *pdVar26;
          uStack_268 = pdVar26[1];
          lVar22 = *(longlong *)(*(longlong *)(*plVar23 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
          uVar19 = (ulonglong)uVar7 & 0x1ff;
          piVar1 = (int *)(lVar22 + uVar19 * 0x18);
          local_248 = *(double *)(lVar22 + 0x10 + uVar19 * 0x18);
          local_258 = *piVar1;
          iStack_254 = piVar1[1];
          iStack_250 = piVar1[2];
          iStack_24c = piVar1[3];
          pcVar9 = (code *)*local_340;
          if (pcVar9 != (code *)0x0) {
            plVar23 = (longlong *)local_340[2];
            if ((longlong *)local_340[2] == (longlong *)0x0) {
              plVar23 = local_330;
            }
            uVar20 = (**(code **)(*plVar23 + 8))();
            (*pcVar9)(&local_2a0,uVar20,&local_288);
            local_278 = local_290;
            local_288 = (double)CONCAT44(iStack_29c,local_2a0);
            uStack_280 = (double)CONCAT44(iStack_294,iStack_298);
            pcVar9 = (code *)*puVar25;
            plVar23 = (longlong *)puVar25[2];
            if ((longlong *)puVar25[2] == (longlong *)0x0) {
              plVar23 = plVar16;
            }
            uVar20 = (**(code **)(*plVar23 + 8))();
            (*pcVar9)(&local_2a0,uVar20,&local_270);
            local_260 = local_290;
            local_270 = (double)CONCAT44(iStack_29c,local_2a0);
            uStack_268 = (double)CONCAT44(iStack_294,iStack_298);
            pcVar9 = (code *)*puVar25;
            plVar23 = (longlong *)puVar25[2];
            if ((longlong *)puVar25[2] == (longlong *)0x0) {
              plVar23 = plVar16;
            }
            uVar20 = (**(code **)(*plVar23 + 8))();
            (*pcVar9)(&local_2a0,uVar20,&local_258);
            local_248 = local_290;
            local_258 = local_2a0;
            iStack_254 = iStack_29c;
            iStack_250 = iStack_298;
            iStack_24c = iStack_294;
          }
          local_14c = local_14c & 0xffffffff00000000;
          puVar25 = &local_288;
          puVar27 = local_1e8;
          for (lVar22 = 9; lVar22 != 0; lVar22 = lVar22 + -1) {
            *puVar27 = *puVar25;
            puVar25 = puVar25 + 1;
            puVar27 = puVar27 + 1;
          }
          if (0 < local_348) {
            uVar19 = local_328 & 0xffffffff;
            iVar24 = local_348;
            do {
              iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (uVar19 >> 9) * 8) +
                              (ulonglong)((uint)uVar19 & 0x1ff) * 4);
              pcVar9 = *(code **)(param_9 + 0x10);
              if (pcVar9 == (code *)0x0) {
LAB_14296a5b4:
                lVar21 = (longlong)iVar8;
                lVar22 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
                uVar18 = *(uint *)(lVar22 + lVar21 * 0xc);
                uVar6 = *(uint *)(lVar22 + 4 + lVar21 * 0xc);
                uVar7 = *(uint *)(lVar22 + 8 + lVar21 * 0xc);
                lVar22 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
                lVar21 = *(longlong *)(lVar22 + (ulonglong)(uVar18 >> 9) * 8);
                uVar29 = (ulonglong)uVar18 & 0x1ff;
                local_238[2] = *(double *)(lVar21 + 0x10 + uVar29 * 0x18);
                pdVar26 = (double *)(lVar21 + uVar29 * 0x18);
                local_238[0] = *pdVar26;
                local_238[1] = pdVar26[1];
                lVar21 = *(longlong *)(lVar22 + (ulonglong)(uVar6 >> 9) * 8);
                uVar29 = (ulonglong)uVar6 & 0x1ff;
                local_210 = *(double *)(lVar21 + 0x10 + uVar29 * 0x18);
                pdVar26 = (double *)(lVar21 + uVar29 * 0x18);
                local_238[3] = *pdVar26;
                dStack_218 = pdVar26[1];
                lVar22 = *(longlong *)(lVar22 + (ulonglong)(uVar7 >> 9) * 8);
                uVar29 = (ulonglong)uVar7 & 0x1ff;
                local_1f8 = *(undefined8 *)(lVar22 + 0x10 + uVar29 * 0x18);
                puVar2 = (undefined4 *)(lVar22 + uVar29 * 0x18);
                local_208 = *puVar2;
                uStack_204 = puVar2[1];
                uStack_200 = puVar2[2];
                uStack_1fc = puVar2[3];
                local_14c = local_14c & 0xffffffff00000000;
                pdVar26 = local_238;
                pdVar28 = local_1a0;
                for (lVar22 = 9; lVar22 != 0; lVar22 = lVar22 + -1) {
                  *pdVar28 = *pdVar26;
                  pdVar26 = pdVar26 + 1;
                  pdVar28 = pdVar28 + 1;
                }
                cVar17 = (*(code *)*param_8)(param_8[1],local_1e8);
                if (cVar17 != '\0') {
                  FUN_14296abf8(local_1e8,iVar8,local_34c,param_7);
                }
              }
              else {
                plVar23 = *(longlong **)(param_9 + 0x20);
                if (*(longlong **)(param_9 + 0x20) == (longlong *)0x0) {
                  plVar23 = local_308;
                }
                local_2a0 = iVar8;
                uVar20 = (**(code **)(*plVar23 + 8))();
                cVar17 = (*pcVar9)(uVar20,&local_2a0);
                if (cVar17 != '\0') goto LAB_14296a5b4;
              }
              uVar19 = (ulonglong)((uint)uVar19 + 1);
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
          }
        }
        else {
          plVar23 = *(longlong **)(param_10 + 0x20);
          if (*(longlong **)(param_10 + 0x20) == (longlong *)0x0) {
            plVar23 = local_320;
          }
          local_2a0 = local_34c;
          uVar20 = (**(code **)(*plVar23 + 8))();
          cVar17 = (*pcVar9)(uVar20,&local_2a0);
          if (cVar17 != '\0') goto LAB_14296a373;
        }
        uVar19 = (ulonglong)((int)local_310 + 1);
      } while ((int)local_310 != local_344);
    }
    goto LAB_14296ab67;
  }
  bVar30 = (param_6 & 1) == 0;
  if ((bVar30 || (int)uVar18 < iVar24) &&
      (*(int *)(param_3 + 200) <= (int)uVar6 || !bVar30 && (int)uVar18 >= iVar24)) {
    dVar3 = *(double *)(param_1 + 0x60);
    uVar19 = (ulonglong)((param_2 >> 9) << 3);
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar19);
    lVar15 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
    lVar21 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar19);
    dVar13 = *(double *)(lVar21 + lVar15) + dVar3;
    dVar11 = *(double *)(lVar21 + 8 + lVar15) + dVar3;
    dVar3 = dVar3 + *(double *)(lVar21 + 0x10 + lVar15);
    dVar4 = *(double *)(lVar22 + 0x10 + lVar15);
    dVar10 = dVar4 - dVar3;
    dVar5 = *(double *)(lVar22 + 8 + lVar15);
    dVar12 = dVar5 - dVar11;
    dVar14 = *(double *)(lVar22 + lVar15) - dVar13;
    dVar3 = dVar3 + dVar4;
    dVar11 = dVar11 + dVar5;
    dVar13 = dVar13 + *(double *)(lVar22 + lVar15);
    param_5 = *(uint *)(*(longlong *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 4);
    if ((int)param_5 < 0) {
      param_5 = ~param_5;
      FUN_142968ed4(param_3,local_238,param_5,param_4);
      if (((((dVar13 <= local_238[0]) || (local_238[3] <= dVar14)) || (dVar11 <= local_238[1])) ||
          ((dStack_218 <= dVar12 || (dVar3 <= local_238[2])))) || (local_210 <= dVar10))
      goto LAB_14296ab67;
      uVar20 = *param_8;
      local_370 = local_2b0;
    }
    else {
      FUN_142968ed4(param_3,local_238,param_5 - 1,param_4);
      if (((local_238[0] < dVar13) && (dVar14 < local_238[3])) &&
         ((local_238[1] < dVar11 &&
          (((dVar12 < dStack_218 && (local_238[2] < dVar3)) && (dVar10 < local_210)))))) {
        local_2c0 = *param_8;
        local_370 = &local_2c0;
        local_2b8 = param_8[1];
        local_380 = param_6 + 1;
        local_360 = param_10;
        local_368 = param_9;
        local_378 = param_7;
        local_388 = param_5 - 1;
        FUN_14296a156(param_1,param_2,param_3,param_4);
      }
      param_5 = *(int *)(*(longlong *)
                          (*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4) - 1;
      FUN_142968ed4(param_3,&local_288,param_5,param_4);
      if ((((dVar13 <= local_288) || (local_270 <= dVar14)) ||
          ((dVar11 <= uStack_280 || ((uStack_268 <= dVar12 || (dVar3 <= local_278)))))) ||
         (local_260 <= dVar10)) goto LAB_14296ab67;
      uVar20 = *param_8;
      local_370 = local_2d0;
    }
  }
  else {
    FUN_142968ed4(param_3,local_238,param_5,param_4);
    lVar22 = *(longlong *)(param_1 + 0xb8);
    param_2 = *(uint *)(*(longlong *)(lVar22 + (ulonglong)(uVar18 >> 9) * 8) +
                       (ulonglong)(uVar18 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
      cVar17 = FUN_142969590(param_1,param_2,local_238);
      if (cVar17 == '\0') goto LAB_14296ab67;
      uVar20 = *param_8;
      local_370 = local_2e0;
    }
    else {
      cVar17 = FUN_142969590(param_1,param_2 - 1,local_238);
      if (cVar17 != '\0') {
        local_2f0 = *param_8;
        local_370 = &local_2f0;
        local_2e8 = param_8[1];
        local_380 = param_6 + 1;
        local_360 = param_10;
        local_368 = param_9;
        local_378 = param_7;
        local_388 = param_5;
        FUN_14296a156(param_1,param_2 - 1,param_3,param_4);
        lVar22 = *(longlong *)(param_1 + 0xb8);
      }
      param_2 = *(int *)(*(longlong *)(lVar22 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                        (ulonglong)(uVar18 + 1 & 0x1ff) * 4) - 1;
      cVar17 = FUN_142969590(param_1,param_2,local_238);
      if (cVar17 == '\0') goto LAB_14296ab67;
      uVar20 = *param_8;
      local_370 = local_300;
    }
  }
  *local_370 = uVar20;
  local_370[1] = param_8[1];
  local_380 = param_6 + 1;
  local_360 = param_10;
  local_368 = param_9;
  local_378 = param_7;
  local_388 = param_5;
  FUN_14296a156(param_1,param_2,param_3,param_4);
LAB_14296ab67:
  if ((local_b0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14296abca FUN_14296abca body=45 status=ok
// SIG undefined FUN_14296abca(void)

bool FUN_14296abca(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 14296abf8 FUN_14296abf8 body=1205 status=ok
// SIG undefined FUN_14296abf8(void)

void FUN_14296abf8(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar4 = *(int *)(param_1 + 0xa4);
  if (iVar4 == 2) {
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
  }
  else {
    if (iVar4 == 1) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      iVar4 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar4 + 1U) {
        FUN_146bddb72(param_4,iVar4);
      }
      lVar6 = *param_4;
      lVar7 = (longlong)iVar4 * 0x20;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      puVar2 = (undefined4 *)(lVar6 + 8 + lVar7);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = (undefined4)uStack_50;
      puVar2[3] = uStack_50._4_4_;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      goto LAB_14296b032;
    }
    if (iVar4 < 3) goto LAB_14296b032;
    if (*(int *)(param_1 + 0xa0) != 6) {
      local_48 = *(undefined8 *)(param_1 + 0xb8);
      local_58 = *(undefined8 *)(param_1 + 0xa8);
      uStack_50 = *(undefined8 *)(param_1 + 0xb0);
      local_68 = *(undefined8 *)(param_1 + 0xd0);
      local_78 = *(undefined8 *)(param_1 + 0xc0);
      uStack_70 = *(undefined8 *)(param_1 + 200);
      local_88 = *(undefined8 *)(param_1 + 0xe8);
      local_98 = *(undefined8 *)(param_1 + 0xd8);
      uStack_90 = *(undefined8 *)(param_1 + 0xe0);
      local_a8 = *(undefined8 *)(param_1 + 0x100);
      local_b8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_b0 = *(undefined8 *)(param_1 + 0xf8);
      local_c8 = *(undefined8 *)(param_1 + 0x118);
      local_d8 = *(undefined8 *)(param_1 + 0x108);
      uStack_d0 = *(undefined8 *)(param_1 + 0x110);
      local_e8 = *(undefined8 *)(param_1 + 0x130);
      local_f8 = *(undefined4 *)(param_1 + 0x120);
      uStack_f4 = *(undefined4 *)(param_1 + 0x124);
      uStack_f0 = *(undefined4 *)(param_1 + 0x128);
      uStack_ec = *(undefined4 *)(param_1 + 300);
      iVar5 = (int)param_4[5];
      *(uint *)(param_4 + 5) = iVar5 + 1U;
      if (*(uint *)((longlong)param_4 + 0x2c) < iVar5 + 1U) {
        FUN_146bddc88(param_4 + 4,iVar5);
      }
      lVar6 = param_4[4];
      lVar7 = (longlong)iVar5 * 0xa0;
      *(undefined4 *)(lVar6 + lVar7) = param_2;
      *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
      *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
      puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
      puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
      *puVar3 = local_78;
      puVar3[1] = uStack_70;
      *(undefined8 *)(lVar6 + 0x48 + lVar7) = local_88;
      puVar3 = (undefined8 *)(lVar6 + 0x38 + lVar7);
      *puVar3 = local_98;
      puVar3[1] = uStack_90;
      *(undefined8 *)(lVar6 + 0x60 + lVar7) = local_a8;
      puVar3 = (undefined8 *)(lVar6 + 0x50 + lVar7);
      *puVar3 = local_b8;
      puVar3[1] = uStack_b0;
      puVar3 = (undefined8 *)(lVar6 + 0x68 + lVar7);
      *puVar3 = local_d8;
      puVar3[1] = uStack_d0;
      *(undefined8 *)(lVar6 + 0x78 + lVar7) = local_c8;
      puVar2 = (undefined4 *)(lVar6 + 0x80 + lVar7);
      *puVar2 = local_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      *(undefined8 *)(lVar6 + 0x90 + lVar7) = local_e8;
      *(int *)(lVar6 + 0x98 + lVar7) = iVar4;
      goto LAB_14296b032;
    }
    plVar1 = param_4 + 2;
    local_48 = *(undefined8 *)(param_1 + 0xb8);
    local_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    local_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    local_68 = *(undefined8 *)(param_1 + 0xd0);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = param_4[2];
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar7);
    *puVar3 = local_78;
    puVar3[1] = uStack_70;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    local_48 = *(undefined8 *)(param_1 + 0xe8);
    local_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    local_78 = *(undefined8 *)(param_1 + 0xf0);
    uStack_70 = *(undefined8 *)(param_1 + 0xf8);
    local_68 = *(undefined8 *)(param_1 + 0x100);
    iVar4 = (int)param_4[3];
    *(uint *)(param_4 + 3) = iVar4 + 1U;
    if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
      FUN_146bddbf8(plVar1,iVar4);
    }
    lVar6 = *plVar1;
    lVar7 = (longlong)iVar4 * 0x38;
    *(undefined4 *)(lVar6 + lVar7) = param_2;
    *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
    *puVar3 = local_58;
    puVar3[1] = uStack_50;
    *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
    puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
    *puVar2 = (undefined4)local_78;
    puVar2[1] = local_78._4_4_;
    puVar2[2] = (undefined4)uStack_70;
    puVar2[3] = uStack_70._4_4_;
    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
    if (*(int *)(param_1 + 0xa4) < 5) goto LAB_14296b032;
    local_48 = *(undefined8 *)(param_1 + 0x118);
    local_58 = *(undefined8 *)(param_1 + 0x108);
    uStack_50 = *(undefined8 *)(param_1 + 0x110);
    local_78 = *(undefined8 *)(param_1 + 0x120);
    uStack_70 = *(undefined8 *)(param_1 + 0x128);
    local_68 = *(undefined8 *)(param_1 + 0x130);
  }
  iVar4 = (int)param_4[3];
  *(uint *)(param_4 + 3) = iVar4 + 1U;
  if (*(uint *)((longlong)param_4 + 0x1c) < iVar4 + 1U) {
    FUN_146bddbf8(param_4 + 2,iVar4);
  }
  lVar6 = param_4[2];
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined4 *)(lVar6 + lVar7) = param_2;
  *(undefined4 *)(lVar6 + 4 + lVar7) = param_3;
  puVar3 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar3 = local_58;
  puVar3[1] = uStack_50;
  *(undefined8 *)(lVar6 + 0x18 + lVar7) = local_48;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = (undefined4)local_78;
  puVar2[1] = local_78._4_4_;
  puVar2[2] = (undefined4)uStack_70;
  puVar2[3] = uStack_70._4_4_;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
LAB_14296b032:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296b0ae FUN_14296b0ae body=362 status=ok
// SIG undefined FUN_14296b0ae(void)

ulonglong FUN_14296b0ae(longlong param_1,longlong param_2,undefined1 param_3,undefined8 *param_4,
                       undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    uVar7 = uVar9;
    uVar9 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
      uVar8 = iVar2 + uVar7 + 1;
      iVar10 = uVar7 + 2;
      while (uVar1 = iVar10 - 1, (int)uVar1 < (int)(iVar2 + uVar7)) {
        local_58 = *param_4;
        local_50 = param_4[1];
        local_70 = param_5;
        local_78 = &local_58;
        local_80 = CONCAT31(local_80._1_3_,param_3);
        local_88 = param_2;
        uVar4 = FUN_14296b248(param_1,*(undefined4 *)
                                       (*(longlong *)
                                         (*(longlong *)(param_1 + 0xb8) +
                                         (ulonglong)(uVar1 >> 9) * 8) +
                                       (ulonglong)(uVar1 & 0x1ff) * 4),iVar10,uVar8);
        uVar6 = (undefined7)(uVar4 >> 8);
        bVar3 = (byte)uVar9;
        uVar9 = (uint)((byte)uVar4 & 1 | bVar3);
        iVar10 = iVar10 + 1;
        if ((param_2 == 0) && ((uVar4 & 1) != 0 || bVar3 != 0)) {
          bVar3 = 1;
          goto LAB_14296b1ef;
        }
      }
      uVar7 = uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 200));
  }
  local_68 = *param_4;
  local_78 = &local_68;
  local_60 = param_4[1];
  local_70 = param_5;
  local_88 = CONCAT71(local_88._1_7_,param_3);
  local_80 = 0;
  uVar5 = FUN_14296b5a0(param_1,*(undefined4 *)(param_1 + 0xcc),0xffffffff,param_2);
  uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
  bVar3 = (byte)uVar5 | (byte)uVar9;
LAB_14296b1ef:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar6,bVar3) & 0xffffffffffffff01;
}



// FUNCTION 14296b21a FUN_14296b21a body=45 status=ok
// SIG undefined FUN_14296b21a(void)

bool FUN_14296b21a(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146bdafb2();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_146bdb916(param_1);
    bVar2 = *(int *)(param_1 + 0x9c) == 1;
  }
  return bVar2;
}



// FUNCTION 14296b248 FUN_14296b248 body=854 status=ok
// SIG undefined FUN_14296b248(void)

ulonglong FUN_14296b248(longlong param_1,int param_2,uint param_3,uint param_4,longlong param_5,
                       char param_6,undefined8 *param_7,longlong param_8)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_278 [44];
  int local_24c;
  longlong *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  int local_220 [18];
  undefined8 local_1d8 [9];
  undefined8 local_190;
  undefined1 local_188;
  ulonglong local_184;
  undefined4 local_17c;
  undefined8 local_e8 [4];
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98 [4];
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  pcVar6 = *(code **)(param_8 + 0x10);
  if (pcVar6 == (code *)0x0) {
LAB_14296b2b7:
    lVar13 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
    lVar10 = (longlong)param_2;
    uVar8 = *(uint *)(lVar13 + lVar10 * 0xc);
    uVar3 = *(uint *)(lVar13 + 4 + lVar10 * 0xc);
    uVar4 = *(uint *)(lVar13 + 8 + lVar10 * 0xc);
    lVar11 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
    lVar17 = *(longlong *)(lVar11 + (ulonglong)(uVar8 >> 9) * 8);
    uVar18 = (ulonglong)uVar8 & 0x1ff;
    local_98[2] = *(undefined8 *)(lVar17 + 0x10 + uVar18 * 0x18);
    puVar14 = (undefined8 *)(lVar17 + uVar18 * 0x18);
    local_98[0] = *puVar14;
    local_98[1] = puVar14[1];
    lVar17 = *(longlong *)(lVar11 + (ulonglong)(uVar3 >> 9) * 8);
    uVar18 = (ulonglong)uVar3 & 0x1ff;
    puVar14 = (undefined8 *)(lVar17 + uVar18 * 0x18);
    local_98[3] = *puVar14;
    uStack_78 = puVar14[1];
    local_70 = *(undefined8 *)(lVar17 + 0x10 + uVar18 * 0x18);
    lVar11 = *(longlong *)(lVar11 + (ulonglong)(uVar4 >> 9) * 8);
    uVar18 = (ulonglong)uVar4 & 0x1ff;
    local_58 = *(undefined8 *)(lVar11 + 0x10 + uVar18 * 0x18);
    puVar1 = (undefined4 *)(lVar11 + uVar18 * 0x18);
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    local_190 = 0x3e45798ee2308c3a;
    local_188 = 0;
    local_184 = 0;
    local_17c = 0;
    puVar14 = local_98;
    piVar15 = local_220;
    for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(undefined8 *)piVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      piVar15 = piVar15 + 2;
    }
    local_228 = *(undefined4 *)(lVar13 + 8 + lVar10 * 0xc);
    local_230 = *(undefined8 *)(lVar13 + lVar10 * 0xc);
    if ((int)param_3 < (int)param_4) {
      local_248 = (longlong *)(param_8 + 0x30);
      uVar18 = 0;
      local_24c = param_2;
      do {
        iVar5 = *(int *)(*(longlong *)
                          (*(longlong *)(param_1 + 0xb8) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
        pcVar6 = *(code **)(param_8 + 0x10);
        if (pcVar6 == (code *)0x0) {
LAB_14296b414:
          lVar11 = (longlong)iVar5;
          lVar13 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
          local_238 = *(undefined4 *)(lVar13 + 8 + lVar11 * 0xc);
          local_240 = *(undefined8 *)(lVar13 + lVar11 * 0xc);
          if (param_6 != '\0') {
            lVar17 = 0;
            do {
              lVar10 = 0;
              do {
                if (*(int *)((longlong)&local_230 + lVar17 * 4) ==
                    *(int *)((longlong)&local_240 + lVar10 * 4)) goto LAB_14296b558;
                lVar10 = lVar10 + 1;
              } while (lVar10 != 3);
              lVar17 = lVar17 + 1;
            } while (lVar17 != 3);
          }
          puVar2 = (uint *)(lVar13 + lVar11 * 0xc);
          lVar13 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
          lVar11 = *(longlong *)(lVar13 + (ulonglong)(*puVar2 >> 9) * 8);
          uVar18 = (ulonglong)*puVar2 & 0x1ff;
          local_e8[2] = *(undefined8 *)(lVar11 + 0x10 + uVar18 * 0x18);
          puVar14 = (undefined8 *)(lVar11 + uVar18 * 0x18);
          local_e8[0] = *puVar14;
          local_e8[1] = puVar14[1];
          lVar11 = *(longlong *)(lVar13 + (ulonglong)(puVar2[1] >> 9) * 8);
          uVar18 = (ulonglong)puVar2[1] & 0x1ff;
          local_c0 = *(undefined8 *)(lVar11 + 0x10 + uVar18 * 0x18);
          puVar14 = (undefined8 *)(lVar11 + uVar18 * 0x18);
          local_e8[3] = *puVar14;
          uStack_c8 = puVar14[1];
          lVar13 = *(longlong *)(lVar13 + (ulonglong)(puVar2[2] >> 9) * 8);
          uVar18 = (ulonglong)puVar2[2] & 0x1ff;
          local_a8 = *(undefined8 *)(lVar13 + 0x10 + uVar18 * 0x18);
          puVar1 = (undefined4 *)(lVar13 + uVar18 * 0x18);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
          local_184 = local_184 & 0xffffffff00000000;
          puVar14 = local_e8;
          puVar16 = local_1d8;
          for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar16 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
          }
          uVar8 = (*(code *)*param_7)(param_7[1],local_220);
          uVar18 = (ulonglong)uVar8;
          if ((char)uVar8 != '\0') {
            if (param_5 == 0) {
              uVar18 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
              break;
            }
            FUN_14296abf8(local_220,local_24c,iVar5);
          }
        }
        else {
          local_240 = CONCAT44(local_240._4_4_,iVar5);
          plVar12 = *(longlong **)(param_8 + 0x20);
          if (*(longlong **)(param_8 + 0x20) == (longlong *)0x0) {
            plVar12 = local_248;
          }
          uVar9 = (**(code **)(*plVar12 + 8))();
          cVar7 = (*pcVar6)(uVar9,&local_240);
          if (cVar7 != '\0') goto LAB_14296b414;
        }
LAB_14296b558:
        param_3 = param_3 + 1;
      } while (param_3 != param_4);
      goto LAB_14296b566;
    }
  }
  else {
    plVar12 = (longlong *)(param_8 + 0x30);
    if (*(longlong **)(param_8 + 0x20) != (longlong *)0x0) {
      plVar12 = *(longlong **)(param_8 + 0x20);
    }
    local_220[0] = param_2;
    uVar9 = (**(code **)(*plVar12 + 8))();
    cVar7 = (*pcVar6)(uVar9,local_220);
    if (cVar7 != '\0') goto LAB_14296b2b7;
  }
  uVar18 = 0;
LAB_14296b566:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffffffffff01;
}



// FUNCTION 14296b5a0 FUN_14296b5a0 body=1915 status=ok
// SIG undefined FUN_14296b5a0(void)

ulonglong FUN_14296b5a0(longlong param_1,uint param_2,uint param_3,longlong param_4,
                       undefined1 param_5,uint param_6,undefined8 *param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined3 uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint7 uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_188 [32];
  longlong local_168;
  int local_160;
  undefined8 *local_158;
  undefined8 local_150;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
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
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong uVar14;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_140 = param_4;
  if (-1 < (int)param_2) {
    uVar14 = (ulonglong)param_2;
    uVar11 = param_2 >> 9;
    uVar12 = param_2 & 0x1ff;
    uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar11 * 8) +
                      (ulonglong)uVar12 * 4);
    if ((int)param_3 < 0) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = *(uint *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x70) + (ulonglong)(param_3 >> 9) * 8) +
                        (ulonglong)(param_3 & 0x1ff) * 4);
    }
    iVar20 = *(int *)(param_1 + 200);
    if ((iVar20 <= (int)uVar18) || (iVar20 <= (int)uVar17)) {
      if (iVar20 <= (int)uVar18) {
        bVar22 = (param_6 & 0x80000001) == 1;
        if ((-1 < (int)param_3) || (bVar22 && iVar20 <= (int)uVar17)) {
          if (!bVar22 || iVar20 > (int)uVar17) {
            uVar14 = (ulonglong)param_3;
            uVar17 = uVar18;
          }
          uVar11 = (uint)(uVar14 >> 9);
          uVar12 = (uint)uVar14 & 0x1ff;
          goto LAB_14296b9d1;
        }
        uVar11 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 4);
        uVar15 = (uint7)(uint3)(param_2 >> 8);
        if ((int)uVar11 < 0) {
          local_100 = *param_7;
          local_158 = &local_100;
          local_f8 = param_7[1];
          local_160 = param_6 + 1;
          local_150 = param_8;
          local_168 = CONCAT71(local_168._1_7_,param_5);
          uVar18 = FUN_14296b5a0(param_1,~uVar11,0xffffffff,param_4);
joined_r0x00014296bd06:
          uVar16 = (ulonglong)uVar18;
          if ((param_4 == 0) && (uVar14 = CONCAT71(uVar15,1), (char)uVar18 != '\0'))
          goto LAB_14296bc56;
        }
        else {
          iVar19 = uVar11 - 1;
          iVar20 = *(int *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                           (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
          local_110 = *param_7;
          local_158 = &local_110;
          local_108 = param_7[1];
          iVar21 = param_6 + 1;
          local_150 = param_8;
          local_168 = CONCAT71(local_168._1_7_,param_5);
          local_160 = iVar21;
          uVar9 = FUN_14296b5a0(param_1,iVar19,0xffffffff,param_4);
          lVar3 = local_140;
          uVar14 = CONCAT71(uVar15,1);
          if ((param_4 == 0) && ((byte)uVar9 != 0)) goto LAB_14296bc56;
          uVar18 = iVar20 - 1;
          local_120 = *param_7;
          local_158 = &local_120;
          local_118 = param_7[1];
          local_150 = param_8;
          local_168 = CONCAT71(local_168._1_7_,param_5);
          local_160 = iVar21;
          bVar13 = FUN_14296b5a0(param_1,uVar18,0xffffffff,local_140);
          uVar5 = (undefined3)((uint)uVar9 >> 8);
          bVar13 = (byte)uVar9 | bVar13;
          if ((lVar3 == 0) && (bVar13 != 0)) goto LAB_14296bc56;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar18 >> 9) * 8);
          lVar6 = (ulonglong)((uVar18 & 0x1ff) << 3) * 3;
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar18 >> 9) * 8);
          local_98 = *(double *)(lVar3 + 0x10 + lVar6);
          dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
          local_b0 = local_98 - dVar1;
          local_a0 = *(double *)(lVar3 + 8 + lVar6);
          dVar2 = *(double *)(lVar4 + 8 + lVar6);
          local_b8 = local_a0 - dVar2;
          local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
          local_98 = local_98 + dVar1;
          local_a0 = local_a0 + dVar2;
          local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
          cVar7 = FUN_142969590(param_1,iVar19);
          param_4 = local_140;
          uVar16 = (ulonglong)CONCAT31(uVar5,bVar13);
          if (cVar7 != '\0') {
            local_130 = *param_7;
            local_158 = &local_130;
            local_128 = param_7[1];
            local_150 = param_8;
            local_168 = CONCAT71(local_168._1_7_,param_5);
            local_160 = iVar21;
            bVar8 = FUN_14296b5a0(param_1,iVar19,uVar18,local_140);
            uVar18 = CONCAT31(uVar5,bVar13 | bVar8);
            goto joined_r0x00014296bd06;
          }
        }
        goto LAB_14296bc54;
      }
LAB_14296b9d1:
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar11 << 3));
      lVar6 = (ulonglong)(uVar12 << 3) * 3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar11 << 3));
      local_98 = *(double *)(lVar3 + 0x10 + lVar6);
      dVar1 = *(double *)(lVar4 + 0x10 + lVar6);
      local_b0 = local_98 - dVar1;
      local_a0 = *(double *)(lVar3 + 8 + lVar6);
      dVar2 = *(double *)(lVar4 + 8 + lVar6);
      local_b8 = local_a0 - dVar2;
      local_c0 = *(double *)(lVar3 + lVar6) - *(double *)(lVar4 + lVar6);
      local_98 = local_98 + dVar1;
      local_a0 = local_a0 + dVar2;
      local_a8 = *(double *)(lVar3 + lVar6) + *(double *)(lVar4 + lVar6);
      uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 >> 9) * 8)
                        + (ulonglong)(uVar17 & 0x1ff) * 4);
      if ((int)uVar18 < 0) {
        cVar7 = FUN_142969590(param_1,~uVar18,&local_c0);
        lVar3 = local_140;
        if (cVar7 == '\0') {
          uVar16 = 0;
        }
        else {
          local_d0 = *param_7;
          local_158 = &local_d0;
          local_c8 = param_7[1];
          local_160 = param_6 + 1;
          local_150 = param_8;
          local_168 = CONCAT71(local_168._1_7_,param_5);
          uVar18 = FUN_14296b5a0(param_1,~uVar18,uVar14,local_140);
          uVar16 = (ulonglong)uVar18;
          if (lVar3 == 0) {
            bVar13 = (byte)uVar18;
joined_r0x00014296bbbc:
            if (bVar13 != 0) goto LAB_14296bc4e;
          }
        }
      }
      else {
        iVar20 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                         (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
        cVar7 = FUN_142969590(param_1,uVar18 - 1,&local_c0);
        lVar3 = local_140;
        if (cVar7 != '\0') {
          local_e0 = *param_7;
          local_158 = &local_e0;
          local_d8 = param_7[1];
          local_160 = param_6 + 1;
          local_150 = param_8;
          local_168 = CONCAT71(local_168._1_7_,param_5);
          uVar18 = FUN_14296b5a0(param_1,uVar18 - 1,uVar14,local_140);
          uVar16 = (ulonglong)uVar18;
          if ((lVar3 != 0) || ((char)uVar18 == '\0')) goto LAB_14296bbc9;
LAB_14296bc4e:
          uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
          goto LAB_14296bc56;
        }
        uVar16 = 0;
LAB_14296bbc9:
        iVar20 = iVar20 + -1;
        cVar7 = FUN_142969590(param_1,iVar20,&local_c0);
        lVar3 = local_140;
        if (cVar7 != '\0') {
          local_f0 = *param_7;
          local_158 = &local_f0;
          local_e8 = param_7[1];
          local_160 = param_6 + 1;
          local_150 = param_8;
          local_168 = CONCAT71(local_168._1_7_,param_5);
          uVar10 = FUN_14296b5a0(param_1,iVar20,uVar14,local_140);
          bVar13 = (byte)uVar10 | (byte)uVar16;
          uVar16 = CONCAT71((int7)((ulonglong)uVar10 >> 8),bVar13) & 0xffffff01;
          if (lVar3 == 0) {
            bVar13 = bVar13 & 1;
            goto joined_r0x00014296bbbc;
          }
        }
      }
LAB_14296bc54:
      uVar14 = uVar16;
      goto LAB_14296bc56;
    }
    if ((param_3 != 0xffffffff) &&
       (iVar20 = *(int *)(*(longlong *)
                           (*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar18 >> 9) * 8) +
                         (ulonglong)(uVar18 & 0x1ff) * 4), 0 < iVar20)) {
      uVar11 = uVar18 + 1;
      uVar14 = 0;
      local_138 = param_1;
      do {
        local_90 = *param_7;
        local_88 = param_7[1];
        local_150 = param_8;
        local_158 = &local_90;
        local_160 = CONCAT31(local_160._1_3_,param_5);
        local_168 = param_4;
        uVar9 = FUN_14296b248(local_138,
                              *(undefined4 *)
                               (*(longlong *)
                                 (*(longlong *)(local_138 + 0xb8) + (ulonglong)(uVar11 >> 9) * 8) +
                               (ulonglong)(uVar11 & 0x1ff) * 4),uVar17 + 1,
                              *(int *)(*(longlong *)
                                        (*(longlong *)(local_138 + 0xb8) +
                                        (ulonglong)(uVar17 >> 9) * 8) +
                                      (ulonglong)(uVar17 & 0x1ff) * 4) + uVar17 + 1);
        bVar13 = (byte)uVar9 | (byte)uVar14;
        uVar14 = (ulonglong)CONCAT31((int3)((uint)uVar9 >> 8),bVar13);
        if ((param_4 == 0) && ((bVar13 & 1) != 0)) goto LAB_14296bc4e;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)(iVar20 + uVar18 + 1));
      goto LAB_14296bc56;
    }
  }
  uVar14 = 0;
LAB_14296bc56:
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffffffffff01;
}



// FUNCTION 14296bd1c FUN_14296bd1c body=162 status=ok
// SIG undefined FUN_14296bd1c(void)

void FUN_14296bd1c(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [9];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = param_2 + 9;
  puVar5 = local_68;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  puVar5 = local_b0;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  bVar1 = FUN_146bda4f4(local_b0,local_68,0x3e45798ee2308c3a);
  *(uint *)((longlong)param_2 + 0x9c) = 2 - (uint)bVar1;
  uVar3 = 7;
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296bef4 FUN_14296bef4 body=506 status=ok
// SIG undefined FUN_14296bef4(void)

undefined4 FUN_14296bef4(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  uint local_70;
  undefined1 local_6c [4];
  uint *local_68;
  undefined4 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = param_2 - *(int *)param_1[2];
  if (param_2 < *(int *)param_1[2]) {
    uVar4 = *(undefined4 *)(*(longlong *)param_1[1] + (longlong)param_2 * 4);
  }
  else {
    plVar2 = (longlong *)*param_1;
    local_70 = uVar5;
    if ((int)uVar5 < (int)plVar2[1]) {
      lVar7 = (longlong)(int)uVar5;
      lVar8 = (longlong)*(int *)(*(longlong *)param_1[3] + lVar7 * 4);
      if (lVar8 != -1) {
        uVar4 = *(undefined4 *)(*(longlong *)param_1[1] + lVar8 * 4);
        goto LAB_14296c0cd;
      }
      plVar3 = (longlong *)param_1[6];
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
        plVar10 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar3[8];
        }
        iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar3[9] - 1U & uVar5) * 4);
        if (iVar9 != -1) {
          do {
            lVar8 = *plVar3 + (longlong)iVar9 * 0x10;
            if (*(uint *)(*plVar3 + (longlong)iVar9 * 0x10) == uVar5) {
              if ((lVar8 != 0) &&
                 (puVar11 = (undefined4 *)(lVar8 + 4), puVar11 != (undefined4 *)0x0))
              goto LAB_14296c037;
              break;
            }
            iVar9 = *(int *)(lVar8 + 8);
          } while (iVar9 != -1);
        }
      }
      uVar6 = *(undefined8 *)(param_1[4] + (longlong)*(int *)param_1[5] * 8);
      lVar8 = *plVar2;
    }
    else {
      plVar3 = (longlong *)param_1[6];
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
        plVar10 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar3[8];
        }
        iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar3[9] - 1U & uVar5) * 4);
        if (iVar9 != -1) {
          do {
            lVar7 = *plVar3 + (longlong)iVar9 * 0x10;
            if (*(uint *)(*plVar3 + (longlong)iVar9 * 0x10) == uVar5) {
              if ((lVar7 != 0) &&
                 (puVar11 = (undefined4 *)(lVar7 + 4), puVar11 != (undefined4 *)0x0))
              goto LAB_14296c037;
              break;
            }
            iVar9 = *(int *)(lVar7 + 8);
          } while (iVar9 != -1);
        }
      }
      uVar6 = *(undefined8 *)(param_1[4] + (longlong)*(int *)param_1[5] * 8);
      lVar8 = plVar2[(longlong)*(int *)param_1[5] * 2 + 2];
      lVar7 = (longlong)(int)(uVar5 - (int)plVar2[1]);
    }
    local_58 = *(undefined8 *)(lVar8 + 0x10 + lVar7 * 0x18);
    puVar1 = (undefined8 *)(lVar8 + lVar7 * 0x18);
    local_68 = (uint *)*puVar1;
    puStack_60 = (undefined4 *)puVar1[1];
    local_50 = DAT_14c846330;
    local_48 = DAT_14c846338;
    local_44 = DAT_14c846330;
    local_3c = DAT_14c846338;
    local_38 = DAT_14c84635c;
    local_30 = 0;
    local_2e = 0;
    local_74 = FUN_146c02208(uVar6,&local_68);
    puStack_60 = &local_74;
    local_68 = &local_70;
    FUN_140263e2a(param_1[6],local_6c,&local_68,0);
    uVar4 = local_74;
  }
  goto LAB_14296c0cd;
LAB_14296c037:
  uVar4 = *puVar11;
LAB_14296c0cd:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14296c0f0 FUN_14296c0f0 body=694 status=ok
// SIG undefined FUN_14296c0f0(void)

void FUN_14296c0f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  int *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  int local_7c;
  longlong local_78;
  ulonglong uStack_70;
  code *local_68;
  undefined4 **local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = *(uint *)((longlong *)param_1[1] + 1);
  if ((longlong)(int)uVar3 < 0xc9) {
    if (uVar3 != 0) {
      lVar9 = *(longlong *)param_1[1];
      local_d0 = (longlong *)(param_2 + 0x248);
      lVar8 = 0;
      do {
        iVar10 = *(int *)(lVar9 + lVar8);
        lVar11 = (longlong)iVar10;
        lVar6 = *(longlong *)*param_1;
        local_b8 = *(undefined8 *)(lVar6 + 0x10 + lVar11 * 0x18);
        puVar2 = (undefined4 *)(lVar6 + lVar11 * 0x18);
        local_c8 = *puVar2;
        uStack_c4 = puVar2[1];
        uStack_c0 = puVar2[2];
        uStack_bc = puVar2[3];
        local_e8 = 0;
        cVar7 = FUN_146b9d348(param_2,&local_c8,
                              *(undefined8 *)(((longlong *)*param_1)[2] + lVar11 * 8),0);
        if (cVar7 != '\0') {
          iVar5 = *(int *)(param_2 + 0x250);
          *(uint *)(param_2 + 0x250) = iVar5 + 1U;
          if (*(uint *)(param_2 + 0x254) < iVar5 + 1U) {
            FUN_1446f48e2(local_d0,iVar5);
          }
          *(int *)(*local_d0 + (longlong)iVar5 * 4) = iVar10;
        }
        lVar8 = lVar8 + 4;
      } while ((longlong)(int)uVar3 * 4 != lVar8);
    }
  }
  else {
    iVar10 = uVar3 / 200 + 7;
    local_78 = 0;
    uStack_70 = 0;
    FUN_140bfc200(&local_78,iVar10,1);
    local_a0 = param_1[1];
    local_7c = *(int *)(local_a0 + 8) / iVar10 + 1;
    local_a8 = &local_7c;
    local_60 = &local_a8;
    local_90 = *param_1;
    local_d8 = &local_58;
    local_58 = 0;
    lVar9 = 0;
    local_50 = 0;
    local_68 = FUN_14296c3a8;
    local_e0 = 0;
    local_98 = param_2;
    local_88 = &local_78;
    FUN_1401f8d10(L"ParallelFor Task",iVar10,1);
    iVar10 = 0;
    do {
      iVar10 = iVar10 + *(int *)(local_78 + 8 + lVar9);
      lVar9 = lVar9 + 0x10;
    } while ((ulonglong)(uVar3 / 200 << 4) + 0x70 != lVar9);
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    plVar1 = (longlong *)(param_2 + 0x248);
    if (*(int *)(param_2 + 0x254) < iVar10) {
      FUN_14481578e(plVar1);
    }
    lVar9 = 0;
    do {
      lVar8 = local_78;
      uVar4 = *(uint *)(local_78 + 8 + lVar9);
      if ((longlong)(int)uVar4 != 0) {
        iVar10 = *(int *)(param_2 + 0x250);
        *(uint *)(param_2 + 0x250) = iVar10 + uVar4;
        if ((uint)(*(int *)(param_2 + 0x254) - iVar10) < uVar4) {
          FUN_1446f48e2(plVar1,iVar10);
        }
        memcpy((void *)((longlong)iVar10 * 4 + *plVar1),*(void **)(lVar8 + lVar9),
               (longlong)(int)uVar4 << 2);
      }
      lVar9 = lVar9 + 0x10;
    } while ((ulonglong)(uVar3 / 200 << 4) + 0x70 != lVar9);
    FUN_144716727(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296c3a8 FUN_14296c3a8 body=265 status=ok
// SIG undefined FUN_14296c3a8(void)

void FUN_14296c3a8(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *param_2;
  iVar6 = (iVar2 + 1) * *(int *)*param_1;
  iVar5 = *(int *)*param_1 * iVar2;
  if (*(int *)(param_1[1] + 8) < iVar6) {
    iVar6 = *(int *)(param_1[1] + 8);
  }
  iVar7 = iVar6 - iVar5;
  if (iVar7 != 0 && iVar5 <= iVar6) {
    lVar8 = (longlong)iVar5;
    lVar10 = (longlong)iVar2 * 0x10;
    do {
      iVar2 = *(int *)(*(longlong *)param_1[1] + lVar8 * 4);
      lVar9 = (longlong)iVar2;
      lVar3 = *(longlong *)param_1[3];
      local_58 = *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18);
      puVar1 = (undefined4 *)(lVar3 + lVar9 * 0x18);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_78 = 0;
      cVar4 = FUN_146b9d348(param_1[2],&local_68,
                            *(undefined8 *)(((longlong *)param_1[3])[2] + lVar9 * 8),0);
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)param_1[4];
        iVar6 = *(int *)(lVar3 + 8 + lVar10);
        *(uint *)(lVar3 + 8 + lVar10) = iVar6 + 1U;
        if (*(uint *)(lVar3 + 0xc + lVar10) < iVar6 + 1U) {
          FUN_1446f48e2((longlong *)(lVar3 + lVar10),iVar6);
        }
        *(int *)(*(longlong *)(lVar3 + lVar10) + (longlong)iVar6 * 4) = iVar2;
      }
      lVar8 = lVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296c520 FUN_14296c520 body=142 status=ok
// SIG undefined FUN_14296c520(void)

void FUN_14296c520(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = (longlong)*param_2;
  if ((*(byte *)*param_1 & 1) == 0) {
    lVar2 = *(longlong *)param_1[1];
    local_18 = *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18);
    puVar1 = (undefined4 *)(lVar2 + lVar4 * 0x18);
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    local_38 = 0;
    cVar3 = FUN_146b9d348(param_1[2],&local_28,
                          *(undefined8 *)(((longlong *)param_1[1])[2] + lVar4 * 8),
                          *(undefined8 *)param_1[3]);
    if (cVar3 != '\0') {
      LOCK();
      *(undefined1 *)*param_1 = 1;
      UNLOCK();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296c5b0 FUN_14296c5b0 body=243 status=ok
// SIG undefined FUN_14296c5b0(void)

void FUN_14296c5b0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x400) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 * 2]];
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
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 5)) {
      uVar3 = uVar2 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 14296c6a4 FUN_14296c6a4 body=118 status=ok
// SIG undefined FUN_14296c6a4(void)

void FUN_14296c6a4(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  puVar6 = (uint *)*param_1;
  uVar7 = *puVar6;
  if ((int)uVar7 < 3) {
    plVar1 = (longlong *)param_1[1];
    iVar2 = *param_2;
    lVar9 = *plVar1;
    lVar3 = (longlong)iVar2;
    iVar4 = *(int *)(lVar9 + lVar3 * 4);
    if (iVar4 != iVar2) {
      piVar5 = (int *)(lVar9 + lVar3 * 4);
      do {
        *piVar5 = *(int *)(lVar9 + (longlong)iVar4 * 4);
        lVar9 = *plVar1;
        iVar2 = *(int *)(lVar9 + lVar3 * 4);
        lVar3 = (longlong)iVar2;
        piVar5 = (int *)(lVar9 + lVar3 * 4);
        iVar4 = *piVar5;
      } while (iVar4 != iVar2);
      puVar6 = (uint *)*param_1;
      uVar7 = *puVar6;
    }
    lVar9 = param_1[2];
    if (0 < (int)uVar7) {
      uVar8 = 0;
      do {
        if (*(int *)(lVar9 + uVar8 * 4) == iVar2) {
          return;
        }
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
    *puVar6 = uVar7 + 1;
    *(int *)(lVar9 + (longlong)(int)uVar7 * 4) = iVar2;
  }
  return;
}



// FUNCTION 14296c7aa FUN_14296c7aa body=1601 status=ok
// SIG undefined FUN_14296c7aa(void)

void FUN_14296c7aa(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  short sVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  double dVar27;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  double *local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  int local_214;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  int local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [8];
  longlong local_158;
  longlong local_140;
  longlong local_128;
  longlong local_110;
  int local_100;
  int local_fc;
  double local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a8 [16];
  int local_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1e8 = 0;
  uStack_1e0 = 0;
  iVar20 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x98);
  if (-1 < iVar20) {
    if (iVar20 == 0) {
      local_1f8 = 0;
      uStack_1f0 = 0;
    }
    else {
      FUN_14481578e(&local_1e8);
      iVar20 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x98);
      local_1f8 = 0;
      uStack_1f0 = 0;
      if (iVar20 < 0) goto LAB_14296cde4;
      if (iVar20 != 0) {
        FUN_1447a8aa0(&local_1f8);
        plVar18 = *(longlong **)(param_1 + 8);
        lVar26 = plVar18[1];
        if (0 < *(int *)(lVar26 + 0x98)) {
          lVar23 = 8;
          lVar24 = 0;
          do {
            lVar26 = *(longlong *)(lVar26 + 0x90);
            uVar25 = *(uint *)(lVar26 + -8 + lVar23);
            uVar9 = *(uint *)(lVar26 + -4 + lVar23);
            lVar10 = *(longlong *)(*plVar18 + 0x10);
            lVar11 = *(longlong *)(lVar10 + (ulonglong)(uVar25 >> 9) * 8);
            uVar21 = (ulonglong)uVar25 & 0x1ff;
            lVar12 = *(longlong *)(lVar10 + (ulonglong)(uVar9 >> 9) * 8);
            uVar22 = (ulonglong)uVar9 & 0x1ff;
            lVar10 = *(longlong *)(lVar10 + (ulonglong)(*(uint *)(lVar26 + lVar23) >> 9) * 8);
            uVar19 = (ulonglong)*(uint *)(lVar26 + lVar23) & 0x1ff;
            dVar14 = (*(double *)(lVar11 + 0x10 + uVar21 * 0x18) +
                      *(double *)(lVar12 + 0x10 + uVar22 * 0x18) +
                     *(double *)(lVar10 + 0x10 + uVar19 * 0x18)) * 0.3333333333333333;
            dVar27 = (*(double *)(lVar11 + 8 + uVar21 * 0x18) +
                      *(double *)(lVar12 + 8 + uVar22 * 0x18) +
                     *(double *)(lVar10 + 8 + uVar19 * 0x18)) * 0.3333333333333333;
            dVar13 = (*(double *)(lVar11 + uVar21 * 0x18) + *(double *)(lVar12 + uVar22 * 0x18) +
                     *(double *)(lVar10 + uVar19 * 0x18)) * 0.3333333333333333;
            dVar13 = dVar14 * dVar14 + dVar13 * dVar13 + dVar27 * dVar27;
            local_f8 = dVar13;
            sVar16 = _dtest(&local_f8);
            if (sVar16 != 2) {
              local_f8 = dVar13;
              sVar16 = _dtest(&local_f8);
              uVar19 = uStack_1e0;
              if (sVar16 < 1) {
                lVar26 = (longlong)(int)uStack_1e0;
                uVar25 = (int)uStack_1e0 + 1;
                uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar25);
                if (uStack_1e0._4_4_ < uVar25) {
                  FUN_1446f48e2(&local_1e8,uVar19 & 0xffffffff);
                }
                uVar19 = uStack_1f0;
                *(int *)(local_1e8 + lVar26 * 4) = (int)lVar24;
                lVar26 = *(longlong *)((*(longlong **)(param_1 + 8))[1] + 0x90);
                uVar25 = *(uint *)(lVar26 + -8 + lVar23);
                uVar9 = *(uint *)(lVar26 + -4 + lVar23);
                lVar10 = *(longlong *)(**(longlong **)(param_1 + 8) + 0x10);
                lVar11 = *(longlong *)(lVar10 + (ulonglong)(uVar25 >> 9) * 8);
                uVar21 = (ulonglong)uVar25 & 0x1ff;
                dVar13 = *(double *)(lVar11 + uVar21 * 0x18);
                dVar14 = *(double *)(lVar11 + 8 + uVar21 * 0x18);
                dVar27 = *(double *)(lVar11 + 0x10 + uVar21 * 0x18);
                lVar11 = *(longlong *)(lVar10 + (ulonglong)(uVar9 >> 9) * 8);
                uVar22 = (ulonglong)uVar9 & 0x1ff;
                lVar10 = *(longlong *)(lVar10 + (ulonglong)(*(uint *)(lVar26 + lVar23) >> 9) * 8);
                uVar21 = (ulonglong)*(uint *)(lVar26 + lVar23) & 0x1ff;
                dVar3 = *(double *)(lVar11 + 0x10 + uVar22 * 0x18);
                dVar4 = *(double *)(lVar10 + 0x10 + uVar21 * 0x18);
                dVar5 = *(double *)(lVar11 + 8 + uVar22 * 0x18);
                dVar6 = *(double *)(lVar10 + 8 + uVar21 * 0x18);
                dVar7 = *(double *)(lVar11 + uVar22 * 0x18);
                dVar8 = *(double *)(lVar10 + uVar21 * 0x18);
                lVar26 = (longlong)(int)uStack_1f0;
                uVar25 = (int)uStack_1f0 + 1;
                uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar25);
                if (uStack_1f0._4_4_ < uVar25) {
                  FUN_1403e3958(&local_1f8,uVar19 & 0xffffffff);
                }
                *(double *)(local_1f8 + lVar26 * 0x18) =
                     (dVar13 + dVar7 + dVar8) * 0.3333333333333333;
                *(double *)(local_1f8 + 8 + lVar26 * 0x18) =
                     (dVar14 + dVar5 + dVar6) * 0.3333333333333333;
                *(double *)(local_1f8 + 0x10 + lVar26 * 0x18) =
                     (dVar27 + dVar3 + dVar4) * 0.3333333333333333;
              }
            }
            lVar24 = lVar24 + 1;
            plVar18 = *(longlong **)(param_1 + 8);
            lVar26 = plVar18[1];
            lVar23 = lVar23 + 0xc;
          } while (lVar24 < *(int *)(lVar26 + 0x98));
        }
      }
    }
    uVar15 = (int)uStack_1e0;
    FUN_14296cdee(&local_f8);
    FUN_14296cdee(local_160);
    local_220 = &local_190;
    local_190 = 0x7fefffffffffffff;
    local_188 = 0x7fefffffffffffff;
    local_180 = 0x7fefffffffffffff;
    local_178 = 0xffefffffffffffff;
    local_170 = 0xffefffffffffffff;
    local_168 = 0xffefffffffffffff;
    local_238 = *(undefined4 *)(param_1 + 0x18);
    local_248 = uVar15;
    local_240 = 0;
    uVar25 = 0;
    local_230 = &local_f8;
    local_228 = local_160;
    local_214 = FUN_14296cf2a(param_1,&local_1e8,&local_1f8,0);
    *(double *)(param_1 + 0x68) = local_f8;
    FUN_146bedfa8(param_1 + 0x70,local_f0);
    *(undefined8 *)(param_1 + 0x80) = local_e0;
    FUN_146bee054(param_1 + 0x88,local_d8);
    *(undefined8 *)(param_1 + 0x98) = local_c8;
    FUN_146bee054(param_1 + 0xa0,local_c0);
    *(undefined8 *)(param_1 + 0xb0) = local_b0;
    FUN_146bedfa8(param_1 + 0xb8,local_a8);
    *(int *)(param_1 + 200) = local_94;
    if (0 < local_100) {
      local_200 = param_1 + 0x68;
      local_208 = param_1 + 0x80;
      local_210 = param_1 + 0x98;
      do {
        uVar19 = (ulonglong)(uVar25 >> 9);
        lVar26 = *(longlong *)(local_140 + uVar19 * 8);
        lVar23 = (ulonglong)((uVar25 & 0x1ff) * 8) * 3;
        piVar1 = (int *)(lVar26 + lVar23);
        local_1a8 = *piVar1;
        iStack_1a4 = piVar1[1];
        iStack_1a0 = piVar1[2];
        iStack_19c = piVar1[3];
        local_198 = *(undefined8 *)(lVar26 + 0x10 + lVar23);
        iVar20 = local_98 + uVar25;
        FUN_146bedee6(local_208,&local_1a8,iVar20);
        lVar26 = *(longlong *)(local_128 + uVar19 * 8);
        puVar2 = (undefined4 *)(lVar26 + lVar23);
        local_1c8 = *puVar2;
        uStack_1c4 = puVar2[1];
        uStack_1c0 = puVar2[2];
        uStack_1bc = puVar2[3];
        local_1b8 = *(undefined8 *)(lVar26 + 0x10 + lVar23);
        FUN_146bedee6(local_210,&local_1c8,iVar20);
        local_1cc = *(int *)(*(longlong *)(local_158 + uVar19 * 8) + (ulonglong)(uVar25 & 0x1ff) * 4
                            ) + local_94;
        FUN_146bedf4e(local_200,&local_1cc,iVar20);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < local_100);
    }
    if (0 < local_fc) {
      uVar25 = 0;
      do {
        uVar9 = *(uint *)(*(longlong *)(local_110 + (ulonglong)(uVar25 >> 9) * 8) +
                         (ulonglong)(uVar25 & 0x1ff) * 4);
        uVar17 = ~uVar9;
        if (-1 < (int)uVar9) {
          uVar17 = uVar9 + local_98;
        }
        local_1a8 = uVar17 + 1;
        FUN_146bedf4e(param_1 + 0xb0,&local_1a8,uVar25 + local_94);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < local_fc);
    }
    *(int *)(param_1 + 0xcc) = local_98 + local_214;
    FUN_14296d78e(local_160);
    FUN_14296d78e(&local_f8);
    if (local_1f8 != 0) {
      FUN_1400020a8();
    }
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if ((local_90 ^ (ulonglong)auStack_268) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_14296cde4:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar20);
}



// FUNCTION 14296cdee FUN_14296cdee body=315 status=ok
// SIG undefined FUN_14296cdee(void)

undefined8 * FUN_14296cdee(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1411b3bbe(param_1 + 1,0);
  *(void **)param_1[1] = pvVar1;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x3000);
  memset(pvVar1,0,0x3000);
  *(undefined4 *)(param_1 + 5) = 1;
  FUN_141040c48(param_1 + 4,0);
  *(void **)param_1[4] = pvVar1;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x3000);
  memset(pvVar1,0,0x3000);
  *(undefined4 *)(param_1 + 8) = 1;
  FUN_141040c48(param_1 + 7,0);
  *(void **)param_1[7] = pvVar1;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 0xb) = 1;
  FUN_1411b3bbe(param_1 + 10,0);
  *(void **)param_1[10] = pvVar1;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14296cf2a FUN_14296cf2a body=2146 status=ok
// SIG undefined FUN_14296cf2a(void)

uint FUN_14296cf2a(longlong param_1,longlong *param_2,longlong *param_3,int param_4,uint param_5,
                  int param_6,int param_7,longlong param_8,longlong param_9,double *param_10)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  double *pdVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_158 [32];
  int local_138;
  int local_130;
  int local_128;
  longlong local_120;
  longlong local_118;
  double *local_110;
  int local_fc;
  ulonglong local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  pdVar12 = param_10;
  lVar11 = param_8;
  uVar30 = param_5;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((int)param_2[1] < 1) {
    uVar33 = SUB84(DAT_14c8464e0,0);
    uVar34 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
    dVar37 = DAT_14c8464f0 + 0.0;
    dVar39 = DAT_14c8464e8 + 0.0;
    dVar31 = DAT_14c8464e0 + 0.0;
    dVar32 = DAT_14c8464e8;
    dVar36 = DAT_14c8464f0;
  }
  else {
    dVar31 = -1.79769313486232e+308;
    uVar33 = 0xffffffff;
    uVar34 = 0x7fefffff;
    dVar39 = -1.79769313486232e+308;
    dVar37 = -1.79769313486232e+308;
    dVar32 = 1.79769313486232e+308;
    dVar36 = 1.79769313486232e+308;
  }
  *param_10 = (double)CONCAT44(uVar34,uVar33);
  param_10[1] = dVar32;
  param_10[2] = dVar36;
  param_10[3] = dVar31;
  param_10[4] = dVar39;
  param_10[5] = dVar37;
  local_f0 = param_1;
  local_e8 = param_2;
  if (param_7 < (int)param_5) {
    local_b8 = (double)CONCAT44(local_b8._4_4_,param_6);
    pcVar4 = *(code **)(param_1 + 0x20);
    plVar15 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar15 = *(longlong **)(param_1 + 0x30);
    }
    uVar14 = (**(code **)(*plVar15 + 8))();
    iVar13 = (*pcVar4)(uVar14,&local_b8,pdVar12);
    plVar15 = local_e8;
    pdVar12 = param_10;
    lVar11 = param_9;
    iVar10 = param_7;
    if ((int)uVar30 < 1) {
      uVar33 = 0xffffffff;
      uVar34 = 0x7fefffff;
      dVar32 = -1.79769313486232e+308;
    }
    else {
      dVar36 = 1.79769313486232e+308;
      lVar23 = 0;
      dVar31 = -1.79769313486232e+308;
      do {
        dVar32 = *(double *)((longlong)iVar13 * 8 + *param_3 + (longlong)param_4 * 0x18 + lVar23);
        uVar33 = SUB84(dVar32,0);
        uVar34 = (undefined4)((ulonglong)dVar32 >> 0x20);
        if (dVar36 <= dVar32) {
          uVar33 = SUB84(dVar36,0);
          uVar34 = (undefined4)((ulonglong)dVar36 >> 0x20);
        }
        if (dVar32 <= dVar31) {
          dVar32 = dVar31;
        }
        lVar23 = lVar23 + 0x18;
        dVar36 = (double)CONCAT44(uVar34,uVar33);
        dVar31 = dVar32;
      } while ((ulonglong)uVar30 * 0x18 != lVar23);
    }
    if (dVar32 - (double)CONCAT44(uVar34,uVar33) <= 1e-08) {
      uVar28 = (ulonglong)(uint)((int)uVar30 / 2);
    }
    else {
      uVar28 = 0;
      if (1 < (int)uVar30) {
        dVar32 = (dVar32 + (double)CONCAT44(uVar34,uVar33)) * 0.5;
        iVar25 = uVar30 - 1;
        lVar16 = (longlong)param_4;
        local_e0 = lVar16 * 4;
        lVar23 = lVar16 * 0x18;
        uVar28 = 0;
        while( true ) {
          lVar29 = *param_3;
          iVar27 = (int)uVar28;
          uVar28 = (longlong)iVar27 - 1;
          puVar2 = (undefined8 *)(lVar29 + (lVar16 + iVar27) * 0x18 + -0x18);
          do {
            puVar19 = puVar2;
            uVar28 = uVar28 + 1;
            puVar2 = puVar19 + 3;
          } while ((double)puVar19[(longlong)iVar13 + 3] <= dVar32);
          lVar26 = (longlong)iVar25;
          lVar21 = 0;
          lVar18 = lVar26 * 0x18;
          do {
            lVar20 = lVar18;
            lVar21 = lVar21 + -1;
            lVar18 = lVar20 + -0x18;
          } while (dVar32 < *(double *)(lVar29 + lVar23 + (longlong)iVar13 * 8 + lVar20));
          if (lVar26 + lVar21 + 1 <= (longlong)uVar28) break;
          lVar29 = lVar29 + lVar23 + lVar20 + -0x18;
          iVar25 = iVar25 + 1 + (int)lVar21;
          uVar14 = puVar19[5];
          uVar7 = *puVar2;
          uVar8 = puVar19[4];
          uVar9 = *(undefined8 *)(lVar29 + 0x20);
          *puVar2 = *(undefined8 *)(lVar29 + 0x18);
          puVar19[4] = uVar9;
          puVar19[5] = *(undefined8 *)(lVar29 + 0x28);
          lVar29 = *param_3;
          *(undefined8 *)(lVar20 + 0x10 + lVar29 + lVar23) = uVar14;
          puVar2 = (undefined8 *)(lVar20 + lVar29 + lVar23);
          *puVar2 = uVar7;
          puVar2[1] = uVar8;
          lVar18 = local_e0 + *local_e8;
          uVar33 = *(undefined4 *)(lVar18 + uVar28 * 4);
          lVar29 = lVar16 * 4 + 4 + lVar26 * 4;
          *(undefined4 *)(lVar18 + uVar28 * 4) = *(undefined4 *)(*local_e8 + lVar29 + lVar21 * 4);
          *(undefined4 *)(lVar29 + *local_e8 + lVar21 * 4) = uVar33;
        }
      }
    }
    iVar25 = (int)uVar28;
    local_f8 = (ulonglong)(uVar30 - iVar25);
    local_b8 = 1.79769313486232e+308;
    dStack_b0 = 1.79769313486232e+308;
    local_a8 = 1.79769313486232e+308;
    local_a0 = -1.79769313486232e+308;
    local_98 = -1.79769313486232e+308;
    local_90 = -1.79769313486232e+308;
    iVar13 = param_6 + 1;
    local_110 = param_10;
    local_118 = param_9;
    local_120 = param_8;
    local_128 = param_7;
    local_138 = iVar25;
    local_130 = iVar13;
    local_fc = param_4;
    local_bc = FUN_14296cf2a(local_f0,local_e8,param_3,param_4);
    local_110 = &local_b8;
    local_118 = lVar11;
    local_120 = param_8;
    local_128 = iVar10;
    local_138 = (int)local_f8;
    local_130 = iVar13;
    local_c0 = FUN_14296cf2a(local_f0,plVar15,param_3,iVar25 + param_4);
    dVar32 = pdVar12[1];
    uVar33 = SUB84(dVar32,0);
    uVar34 = (undefined4)((ulonglong)dVar32 >> 0x20);
    dVar36 = *pdVar12;
    if (local_b8 <= *pdVar12) {
      dVar36 = local_b8;
    }
    *pdVar12 = dVar36;
    if (dStack_b0 <= dVar32) {
      uVar33 = SUB84(dStack_b0,0);
      uVar34 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
    }
    pdVar12[1] = (double)CONCAT44(uVar34,uVar33);
    dVar32 = pdVar12[2];
    if (local_a8 <= pdVar12[2]) {
      dVar32 = local_a8;
    }
    pdVar12[2] = dVar32;
    dVar32 = pdVar12[3];
    if (pdVar12[3] <= local_a0) {
      dVar32 = local_a0;
    }
    pdVar12[3] = dVar32;
    dVar32 = pdVar12[4];
    if (pdVar12[4] <= local_98) {
      dVar32 = local_98;
    }
    pdVar12[4] = dVar32;
    dVar32 = pdVar12[5];
    if (pdVar12[5] <= local_90) {
      dVar32 = local_90;
    }
    pdVar12[5] = dVar32;
    uVar30 = *(uint *)(lVar11 + 0x60);
    *(uint *)(lVar11 + 0x60) = uVar30 + 1;
    FUN_146bedf4e(lVar11,lVar11 + 100,uVar30);
    *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
    FUN_146bedf4e(lVar11 + 0x48,&local_bc);
    *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
    FUN_146bedf4e(lVar11 + 0x48,&local_c0);
    local_c8 = (pdVar12[2] + pdVar12[5]) * 0.5;
    local_d0 = (pdVar12[1] + pdVar12[4]) * 0.5;
    local_d8 = (*pdVar12 + pdVar12[3]) * 0.5;
    FUN_146bedee6(lVar11 + 0x18,&local_d8,uVar30);
    local_c8 = (pdVar12[5] - pdVar12[2]) * 0.5;
    local_d0 = (pdVar12[4] - pdVar12[1]) * 0.5;
    local_d8 = (pdVar12[3] - *pdVar12) * 0.5;
    FUN_146bedee6(lVar11 + 0x30,&local_d8,uVar30);
  }
  else {
    uVar30 = *(uint *)(param_8 + 0x60);
    *(uint *)(param_8 + 0x60) = uVar30 + 1;
    piVar1 = (int *)(param_8 + 100);
    FUN_146bedf4e(param_8,piVar1,uVar30);
    *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
    FUN_146bedf4e(lVar11 + 0x48,&param_5);
    plVar15 = local_e8;
    if ((int)param_5 < 1) {
      dVar32 = pdVar12[2];
      uVar33 = SUB84(pdVar12[5],0);
      uVar34 = (undefined4)((ulonglong)pdVar12[5] >> 0x20);
      uVar41 = SUB84(*pdVar12,0);
      uVar42 = (undefined4)((ulonglong)*pdVar12 >> 0x20);
      uVar43 = SUB84(pdVar12[1],0);
      uVar44 = (undefined4)((ulonglong)pdVar12[1] >> 0x20);
      dVar36 = pdVar12[4];
      dVar31 = pdVar12[3];
    }
    else {
      lVar23 = 0;
      do {
        *piVar1 = *piVar1 + 1;
        FUN_146bedf4e(lVar11 + 0x48,(lVar23 + param_4) * 4 + *plVar15);
        lVar21 = (longlong)*(int *)(*plVar15 + (lVar23 + param_4) * 4);
        lVar16 = *(longlong *)((*(longlong **)(local_f0 + 8))[1] + 0x90);
        uVar22 = *(uint *)(lVar16 + lVar21 * 0xc);
        lVar29 = *(longlong *)(**(longlong **)(local_f0 + 8) + 0x10);
        lVar18 = *(longlong *)(lVar29 + (ulonglong)(uVar22 >> 9) * 8);
        uVar28 = (ulonglong)(uVar22 & 0x1ff);
        dVar36 = *(double *)(lVar18 + uVar28 * 0x18);
        dVar32 = *(double *)(lVar18 + 8 + uVar28 * 0x18);
        dVar37 = *(double *)(lVar18 + 0x10 + uVar28 * 0x18);
        bVar17 = false;
        uVar33 = SUB84(dVar32,0);
        uVar34 = (undefined4)((ulonglong)dVar32 >> 0x20);
        dVar31 = dVar37;
        dVar39 = dVar36;
        uVar22 = *(uint *)(lVar16 + 4 + lVar21 * 0xc);
        do {
          lVar18 = *(longlong *)(lVar29 + (ulonglong)(uVar22 >> 9) * 8);
          uVar24 = (ulonglong)(uVar22 & 0x1ff);
          dVar35 = *(double *)(lVar18 + uVar24 * 0x18);
          dVar38 = *(double *)(lVar18 + 8 + uVar24 * 0x18);
          uVar41 = SUB84(dVar38,0);
          uVar28 = (ulonglong)dVar38 >> 0x20;
          dVar3 = *(double *)(lVar18 + 0x10 + uVar24 * 0x18);
          dVar40 = dVar35;
          if ((dVar39 <= dVar35) && (dVar40 = dVar39, dVar36 < dVar35)) {
            dVar36 = dVar35;
          }
          if ((dVar32 <= dVar38) &&
             (bVar5 = dVar38 != (double)CONCAT44(uVar34,uVar33),
             bVar6 = (double)CONCAT44(uVar34,uVar33) <= dVar38, dVar38 = dVar32, bVar6 && bVar5)) {
            uVar33 = uVar41;
            uVar34 = (int)uVar28;
          }
          dVar35 = dVar3;
          if ((dVar31 <= dVar3) && (dVar35 = dVar31, dVar37 < dVar3)) {
            dVar37 = dVar3;
          }
          bVar5 = !bVar17;
          bVar17 = true;
          dVar31 = dVar35;
          dVar32 = dVar38;
          dVar39 = dVar40;
          uVar22 = *(uint *)(lVar16 + 8 + lVar21 * 0xc);
        } while (bVar5);
        dVar32 = *pdVar12;
        uVar41 = SUB84(dVar32,0);
        uVar42 = (undefined4)((ulonglong)dVar32 >> 0x20);
        dVar31 = pdVar12[1];
        uVar43 = SUB84(dVar31,0);
        uVar44 = (undefined4)((ulonglong)dVar31 >> 0x20);
        if (dVar40 <= dVar32) {
          uVar41 = SUB84(dVar40,0);
          uVar42 = (undefined4)((ulonglong)dVar40 >> 0x20);
        }
        *pdVar12 = (double)CONCAT44(uVar42,uVar41);
        if (dVar38 <= dVar31) {
          uVar43 = SUB84(dVar38,0);
          uVar44 = (undefined4)((ulonglong)dVar38 >> 0x20);
        }
        pdVar12[1] = (double)CONCAT44(uVar44,uVar43);
        dVar32 = pdVar12[2];
        if (dVar35 <= pdVar12[2]) {
          dVar32 = dVar35;
        }
        pdVar12[2] = dVar32;
        dVar31 = pdVar12[3];
        if (pdVar12[3] <= dVar36) {
          dVar31 = dVar36;
        }
        pdVar12[3] = dVar31;
        dVar36 = pdVar12[4];
        if (dVar36 <= (double)CONCAT44(uVar34,uVar33)) {
          dVar36 = (double)CONCAT44(uVar34,uVar33);
        }
        pdVar12[4] = dVar36;
        dVar39 = pdVar12[5];
        uVar33 = SUB84(dVar39,0);
        uVar34 = (undefined4)((ulonglong)dVar39 >> 0x20);
        if (dVar39 <= dVar37) {
          uVar33 = SUB84(dVar37,0);
          uVar34 = (undefined4)((ulonglong)dVar37 >> 0x20);
        }
        pdVar12[5] = (double)CONCAT44(uVar34,uVar33);
        lVar23 = lVar23 + 1;
      } while (lVar23 < (int)param_5);
    }
    lVar11 = param_8;
    local_a8 = ((double)CONCAT44(uVar34,uVar33) + dVar32) * 0.5;
    dStack_b0 = (dVar36 + (double)CONCAT44(uVar44,uVar43)) * 0.5;
    local_b8 = (dVar31 + (double)CONCAT44(uVar42,uVar41)) * 0.5;
    FUN_146bedee6(param_8 + 0x18,&local_b8,uVar30);
    local_a8 = (pdVar12[5] - pdVar12[2]) * 0.5;
    dStack_b0 = (pdVar12[4] - pdVar12[1]) * 0.5;
    local_b8 = (pdVar12[3] - *pdVar12) * 0.5;
    FUN_146bedee6(lVar11 + 0x30,&local_b8,uVar30);
    uVar30 = ~uVar30;
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar30;
}



// FUNCTION 14296d78e FUN_14296d78e body=120 status=ok
// SIG undefined FUN_14296d78e(void)

void FUN_14296d78e(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x50,0);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x38,0);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_141067b84(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_141082b5c(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14296d806 FUN_14296d806 body=1076 status=ok
// SIG undefined FUN_14296d806(void)

void FUN_14296d806(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  undefined1 local_e8 [24];
  longlong local_d0;
  undefined8 *local_c8;
  code *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar13 = *param_1;
  if ((*(int *)(lVar13 + 0xcc) < 0) || (*(longlong *)(lVar13 + 0x10) != 0)) {
    FUN_14296c7aa();
    lVar13 = *param_1;
  }
  if ((param_2 != '\0') || (param_1[0xb] != *(longlong *)(lVar13 + 0x10))) {
    lVar13 = *(longlong *)(lVar13 + 8);
    local_108 = 0;
    local_118 = 0;
    puStack_110 = (undefined8 *)0x0;
    pvVar5 = (void *)FUN_14001cc68(0x3000);
    memset(pvVar5,0,0x3000);
    local_108 = CONCAT44(local_108._4_4_,1);
    FUN_141040c48(&puStack_110,0);
    *puStack_110 = pvVar5;
    local_f0 = 0;
    local_100 = 0;
    puStack_f8 = (undefined8 *)0x0;
    pvVar5 = (void *)FUN_14001cc68(0x3000);
    memset(pvVar5,0,0x3000);
    local_f0 = CONCAT44(local_f0._4_4_,1);
    FUN_141040c48(&puStack_f8,0);
    *puStack_f8 = pvVar5;
    FUN_146bee4b2(local_e8);
    uVar2 = *(undefined4 *)(*(longlong *)(lVar13 + 8) + 0x98);
    FUN_146bee1a4(&local_118,uVar2);
    FUN_146bee1a4(&local_100,uVar2);
    FUN_146b9c0e2(local_e8,uVar2);
    local_b8 = &local_d0;
    local_128 = &local_b0;
    local_b0 = 0;
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    local_c0 = FUN_14296f2c6;
    local_130 = 0;
    local_d0 = lVar13;
    local_c8 = &local_118;
    FUN_1401f8d10(L"ParallelFor Task",uVar2,1);
    plVar1 = param_1 + 1;
    iVar3 = (int)param_1[10];
    if (iVar3 < 2) {
      plVar6 = param_1 + 8;
      if ((longlong *)param_1[9] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[9];
      }
      iVar8 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar8 = iVar3;
      }
      if ((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) < iVar8 >> 2) {
        iVar3 = (int)param_1[6];
        if (iVar3 == 0) {
          uVar10 = 1;
          iVar8 = 0;
          uVar9 = 0;
          iVar18 = 0;
        }
        else {
          puVar11 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 3);
          }
          uVar7 = *puVar11;
          if (uVar7 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            uVar9 = 0;
            uVar12 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar12 = uVar9;
            }
            iVar8 = 0;
            do {
              if (uVar12 == uVar9) goto LAB_14296dac8;
              iVar8 = iVar8 + 0x20;
              uVar7 = puVar11[uVar9 + 1];
              uVar9 = uVar9 + 1;
            } while (uVar7 == 0);
          }
          else {
            iVar8 = 0;
            uVar9 = 0;
          }
          uVar10 = (ulonglong)(-uVar7 & uVar7);
          uVar12 = uVar10 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar18 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar18) {
            iVar18 = iVar3;
          }
        }
        if (iVar18 != iVar3) {
          uVar7 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar6 + (longlong)*(int *)(param_1[1] + 0x8c + (longlong)iVar18 * 0x90) * 4
             ) = 0xffffffff;
            uVar7 = ~(uint)uVar10 & uVar7;
            puVar11 = (uint *)param_1[5];
            if ((uint *)param_1[5] == (uint *)0x0) {
              puVar11 = (uint *)(param_1 + 3);
            }
            iVar4 = (int)param_1[6];
            iVar18 = (int)uVar9;
            lVar13 = (longlong)iVar18;
            uVar15 = puVar11[lVar13] & uVar7;
            if (uVar15 == 0) {
              iVar16 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar16 = iVar4 + -1;
              }
              iVar16 = iVar16 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar17 = iVar16;
              if (iVar16 < iVar18) {
                iVar17 = iVar18;
              }
              if (iVar18 < iVar16) {
                lVar14 = 0;
                do {
                  uVar15 = puVar11[lVar13 + lVar14 + 1];
                  if (uVar15 != 0) {
                    uVar9 = (ulonglong)(iVar18 + (int)lVar14 + 1);
                    uVar7 = 0xffffffff;
                    goto LAB_14296dbe4;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar17 - lVar13 != lVar14);
                uVar7 = 0xffffffff;
                lVar13 = (longlong)iVar17;
              }
              uVar9 = lVar13 + 1U & 0xffffffff;
              iVar18 = iVar4;
            }
            else {
LAB_14296dbe4:
              uVar10 = (ulonglong)(-uVar15 & uVar15);
              uVar12 = uVar10 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar12 != 0) {
                for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar18 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar18) {
                iVar18 = iVar4;
              }
            }
          } while (iVar18 != iVar3);
        }
      }
      else if (iVar3 == 1) {
        lVar13 = 0;
        do {
          *(undefined4 *)((longlong)plVar6 + lVar13 * 4) = 0xffffffff;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)param_1[10]);
      }
LAB_14296dac8:
      FUN_142964e9e(plVar1);
    }
    else {
      FUN_142964e9e(plVar1);
      *(undefined4 *)(param_1 + 10) = 1;
      FUN_14296f464(plVar1);
    }
    local_b0 = 0;
    local_a8 = 0xffffffff00000000;
    local_90 = 0;
    local_88 = 0;
    uStack_84 = 0x80;
    uStack_80 = 0xffffffff;
    uStack_7c = 0;
    local_70 = 0;
    local_68 = 0;
    local_138 = &local_118;
    FUN_14296dc3c(param_1,*(undefined4 *)(*param_1 + 0xcc),0,&local_b0);
    FUN_145a22d80(&local_b0);
    FUN_146bee452(&local_118);
    param_1[0xb] = *(longlong *)(*param_1 + 0x10);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14296dc3c FUN_14296dc3c body=5769 status=ok
// SIG undefined FUN_14296dc3c(void)

int FUN_14296dc3c(longlong *param_1,uint param_2,int param_3,longlong *param_4,longlong param_5)

{
  void *_Src;
  void *_Dst;
  uint *puVar1;
  double *pdVar2;
  undefined8 ***pppuVar3;
  longlong **pplVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  double dVar30;
  uint *puVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined8 ***pppuVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 in_XMM1 [16];
  undefined1 auVar38 [12];
  double dVar39;
  uint *puVar40;
  double dVar41;
  double dVar42;
  longlong *plVar43;
  uint *puVar44;
  int *piVar45;
  longlong *plVar46;
  uint *puVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStack_368 [32];
  longlong local_348;
  undefined4 local_340;
  code **local_338;
  longlong *local_328;
  longlong *local_320;
  uint *local_318;
  uint *local_310;
  undefined8 **local_308;
  longlong *local_300;
  double local_2f8;
  int local_2ec;
  double local_2e8;
  double local_2e0;
  uint *local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  longlong *local_298;
  undefined8 **local_290;
  double local_288;
  uint *local_280;
  undefined8 ***local_278;
  uint *puStack_270;
  longlong *local_268;
  longlong **local_260;
  int *piStack_258;
  code **local_250;
  longlong *plStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  longlong *plStack_228;
  uint *local_220;
  double dStack_218;
  double local_208;
  undefined8 local_200;
  uint *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  int local_1c0;
  undefined8 ***local_1b8;
  uint *puStack_1b0;
  int *local_1a8;
  double *local_1a0;
  undefined1 *local_198;
  longlong *local_190;
  longlong local_188;
  undefined8 uStack_180;
  int local_174;
  int local_170;
  undefined1 local_169;
  code *local_168;
  undefined8 ***pppuStack_160;
  code *local_150;
  undefined8 ***local_148;
  longlong local_140;
  undefined8 local_138;
  int iStack_134;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  FUN_145a22d80(param_4);
  lVar20 = *param_1;
  uVar22 = *(uint *)(*(longlong *)(*(longlong *)(lVar20 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  if ((int)uVar22 < *(int *)(lVar20 + 200)) {
LAB_14296dcfd:
    iVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar20 + 0xb8) + (ulonglong)(uVar22 >> 9) * 8) +
                    (ulonglong)(uVar22 & 0x1ff) * 4);
    goto LAB_14296dd15;
  }
  while( true ) {
    uVar17 = *(uint *)(*(longlong *)(*(longlong *)(lVar20 + 0xb8) + (ulonglong)(uVar22 >> 9) * 8) +
                      (ulonglong)(uVar22 & 0x1ff) * 4);
    if (-1 < (int)uVar17) break;
    param_2 = ~uVar17;
    FUN_145a22d80(param_4);
    lVar20 = *param_1;
    uVar22 = *(uint *)(*(longlong *)(*(longlong *)(lVar20 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                      (ulonglong)(param_2 & 0x1ff) * 4);
    if ((int)uVar22 < *(int *)(lVar20 + 200)) goto LAB_14296dcfd;
    param_3 = param_3 + 1;
  }
  iVar16 = uVar17 - 1;
  iVar27 = *(int *)(*(longlong *)(*(longlong *)(lVar20 + 0xb8) + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                   (ulonglong)(uVar22 + 1 & 0x1ff) * 4) + -1;
  local_140 = 0;
  local_138 = 0xffffffff00000000;
  local_120 = 0;
  local_118 = 0x8000000000;
  uStack_110 = 0xffffffff;
  local_100 = 0;
  local_f8 = 0;
  local_348 = param_5;
  iVar8 = FUN_14296dc3c(param_1,iVar16,param_3 + 1,param_4);
  local_348 = param_5;
  local_328 = param_4;
  iVar9 = FUN_14296dc3c(param_1,iVar27,param_3 + 1,&local_140);
  plVar46 = local_328;
  iVar9 = iVar9 + iVar8;
  if (param_3 != 0) {
    if (*(int *)((longlong)local_328 + 0xc) == -1) {
      if ((iStack_134 == -1) && (iVar9 < 2)) goto LAB_14296f005;
      if (iStack_134 == -1) {
        FUN_146bee514(local_328);
        FUN_14296f6d4(param_1,iVar16,plVar46);
        goto LAB_14296dedf;
      }
      FUN_14296f6d4(param_1,iVar16,&local_140);
      if (&local_140 != plVar46) {
        if (iStack_134 == -1) {
          FUN_145a22d80(plVar46);
        }
        else {
          FUN_146bee56a(plVar46);
        }
      }
    }
    else {
LAB_14296dedf:
      if (iStack_134 == -1) {
        FUN_14296f6d4(param_1,iVar27,plVar46);
      }
      else {
        FUN_1468b3f6e(plVar46);
      }
    }
    if (1 < iVar9) {
      local_300 = *(longlong **)(*param_1 + 8);
      local_320 = param_1;
      local_2ec = iVar9;
      if ((int)plVar46[1] - *(int *)((longlong)plVar46 + 0x34) < 3000) {
        local_310 = (uint *)(plVar46 + 2);
        iVar9 = (int)plVar46[5];
        local_308 = DAT_14c8464e0;
        puVar47 = DAT_14c8464e8;
        dVar33 = DAT_14c8464f0;
        pppuVar3 = DAT_14c8464e0;
        if (iVar9 == 0) {
          uVar23 = 1;
          iVar8 = 0;
          uVar12 = 0;
          iVar16 = 0;
        }
        else {
          puVar31 = (uint *)plVar46[4];
          if ((uint *)plVar46[4] == (uint *)0x0) {
            puVar31 = local_310;
          }
          uVar22 = *puVar31;
          if (uVar22 == 0) {
            iVar8 = iVar9 + 0x1e;
            if (-1 < iVar9 + -1) {
              iVar8 = iVar9 + -1;
            }
            uVar12 = 0;
            uVar25 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar25 = uVar12;
            }
            iVar8 = 0;
            do {
              if (uVar25 == uVar12) {
                dVar39 = 0.0;
                goto LAB_14296e529;
              }
              iVar8 = iVar8 + 0x20;
              uVar22 = puVar31[uVar12 + 1];
              uVar12 = uVar12 + 1;
            } while (uVar22 == 0);
          }
          else {
            iVar8 = 0;
            uVar12 = 0;
          }
          uVar23 = (ulonglong)(-uVar22 & uVar22);
          uVar25 = uVar23 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar16 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar16) {
            iVar16 = iVar9;
          }
        }
        dVar30 = 0.0;
        dVar39 = 0.0;
        if (iVar16 != iVar9) {
          puVar31 = (uint *)local_328[4];
          if ((uint *)local_328[4] == (uint *)0x0) {
            puVar31 = local_310;
          }
          iVar27 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar27 = iVar9 + -1;
          }
          iVar27 = iVar27 >> 5;
          local_318 = puVar31 + 1;
          uVar22 = 0xffffffff;
          do {
            uVar17 = *(uint *)(*local_328 + (longlong)iVar16 * 0xc);
            uVar25 = (ulonglong)(uVar17 >> 9);
            uVar24 = (ulonglong)(uVar17 & 0x1ff);
            dVar39 = *(double *)
                      (*(longlong *)(*(longlong *)(param_5 + 0x38) + uVar25 * 8) + uVar24 * 8);
            dVar30 = dVar30 + dVar39;
            lVar20 = *(longlong *)(*(longlong *)(param_5 + 8) + uVar25 * 8);
            dVar33 = *(double *)(lVar20 + 0x10 + uVar24 * 0x18) * dVar39 + dVar33;
            puVar47 = (uint *)(*(double *)(lVar20 + 8 + uVar24 * 0x18) * dVar39 + (double)puVar47);
            pppuVar3 = (undefined8 ***)
                       (dVar39 * *(double *)(lVar20 + uVar24 * 0x18) + (double)pppuVar3);
            uVar22 = ~(uint)uVar23 & uVar22;
            iVar16 = (int)uVar12;
            lVar20 = (longlong)iVar16;
            uVar17 = puVar31[lVar20] & uVar22;
            dVar39 = dVar30;
            if (uVar17 == 0) {
              iVar19 = iVar27;
              if (iVar27 < iVar16) {
                iVar19 = iVar16;
              }
              if (iVar27 <= iVar16) break;
              lVar21 = 0;
              while( true ) {
                iVar8 = iVar8 + 0x20;
                uVar17 = local_318[lVar20 + lVar21];
                if (uVar17 != 0) break;
                lVar21 = lVar21 + 1;
                if (iVar19 - lVar20 == lVar21) goto LAB_14296e529;
              }
              uVar12 = (ulonglong)(iVar16 + (int)lVar21 + 1);
              uVar22 = 0xffffffff;
            }
            uVar23 = (ulonglong)(-uVar17 & uVar17);
            uVar25 = uVar23 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar16 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          } while (iVar16 < iVar9);
        }
LAB_14296e529:
        dVar39 = 1.0 / dVar39;
        local_2e8 = (double)pppuVar3 * dVar39;
        local_2e0 = (double)puVar47 * dVar39;
        puVar40 = (uint *)(dVar39 * dVar33);
        plVar46 = (longlong *)DAT_14c8464f0;
        if (iVar9 == 0) {
          uVar12 = 0;
          uVar23 = 1;
          iVar8 = 0;
          iVar16 = 0;
        }
        else {
          puVar47 = (uint *)local_328[4];
          if ((uint *)local_328[4] == (uint *)0x0) {
            puVar47 = local_310;
          }
          uVar22 = *puVar47;
          if (uVar22 == 0) {
            iVar8 = iVar9 + 0x1e;
            if (-1 < iVar9 + -1) {
              iVar8 = iVar9 + -1;
            }
            uVar12 = 0;
            uVar25 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar25 = uVar12;
            }
            iVar8 = 0;
            do {
              if (uVar25 == uVar12) goto LAB_14296e6c8;
              iVar8 = iVar8 + 0x20;
              uVar22 = puVar47[uVar12 + 1];
              uVar12 = uVar12 + 1;
            } while (uVar22 == 0);
          }
          else {
            uVar12 = 0;
            iVar8 = 0;
          }
          uVar23 = (ulonglong)(-uVar22 & uVar22);
          uVar25 = uVar23 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar16 = (iVar8 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar16) {
            iVar16 = iVar9;
          }
        }
        puVar44 = (uint *)0x0;
        if (iVar16 == iVar9) {
LAB_14296e6c8:
          puVar44 = (uint *)0x0;
          dVar33 = 0.0;
          local_300 = (longlong *)0x0;
          dVar39 = 0.0;
          plVar5 = (longlong *)0x0;
          pppuVar3 = (undefined8 ***)0x0;
          piVar45 = (int *)0x0;
          pplVar4 = (longlong **)0x0;
          dVar30 = 0.0;
          puVar47 = DAT_14c8464e8;
          plVar7 = (longlong *)0x0;
        }
        else {
          local_2b8 = *local_328;
          lVar20 = *(longlong *)(local_300[1] + 0x90);
          lVar21 = *(longlong *)(*local_300 + 0x10);
          local_2c0 = *(longlong *)(param_5 + 8);
          local_2c8 = *(longlong *)(param_5 + 0x20);
          puVar31 = local_310;
          if ((uint *)local_328[4] != (uint *)0x0) {
            puVar31 = (uint *)local_328[4];
          }
          local_2d0 = *(longlong *)(param_5 + 0x38);
          iVar27 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar27 = iVar9 + -1;
          }
          iVar27 = iVar27 >> 5;
          local_2d8 = puVar31 + 1;
          uVar22 = 0xffffffff;
          local_328 = (longlong *)0x0;
          piVar45 = (int *)0.0;
          dVar33 = 0.0;
          plVar5 = (longlong *)0x0;
          dVar39 = 0.0;
          pppuVar3 = (undefined8 ***)0x0;
          pplVar4 = (longlong **)(uint *)0x0;
          dVar30 = 0.0;
          local_300 = (longlong *)0.0;
          local_310 = DAT_14c8464e8;
          do {
            local_2a8 = (double)local_300;
            local_2f8 = dVar30;
            local_280 = (uint *)pplVar4;
            local_290 = pppuVar3;
            local_2a0 = dVar39;
            local_298 = plVar5;
            local_2b0 = dVar33;
            local_288 = (double)piVar45;
            uVar17 = *(uint *)(local_2b8 + (longlong)iVar16 * 0xc);
            lVar29 = (longlong)(int)uVar17;
            uVar25 = (ulonglong)(uVar17 >> 9);
            uVar24 = (ulonglong)((uVar17 & 0x1ff) << 3);
            dVar30 = *(double *)(*(longlong *)(local_2d0 + uVar25 * 8) + uVar24);
            lVar28 = *(longlong *)(local_2c8 + uVar25 * 8);
            lVar6 = uVar24 * 3;
            dVar37 = *(double *)(lVar28 + 8 + lVar6);
            dVar36 = *(double *)(lVar28 + 0x10 + lVar6);
            lVar26 = *(longlong *)(local_2c0 + uVar25 * 8);
            plVar46 = (longlong *)(dVar36 * dVar30 + (double)plVar46);
            local_310 = (uint *)(dVar37 * dVar30 + (double)local_310);
            dVar33 = *(double *)(lVar26 + 0x10 + lVar6) - (double)puVar40;
            dVar41 = *(double *)(lVar26 + 8 + lVar6) - local_2e0;
            dVar35 = *(double *)(lVar26 + lVar6) - local_2e8;
            dVar42 = *(double *)(lVar28 + lVar6);
            local_308 = (undefined8 **)(dVar42 * dVar30 + (double)local_308);
            puVar44 = (uint *)(dVar36 * dVar33 * dVar30 + (double)puVar44);
            local_328 = (longlong *)(dVar37 * dVar33 * dVar30 + (double)local_328);
            dVar33 = dVar33 * dVar42 * dVar30 + local_2b0;
            local_300 = (longlong *)(dVar36 * dVar41 * dVar30 + local_2a8);
            dVar39 = dVar37 * dVar41 * dVar30 + local_2a0;
            plVar5 = (longlong *)(dVar41 * dVar42 * dVar30 + (double)local_298);
            uVar17 = *(uint *)(lVar20 + 8 + lVar29 * 0xc);
            lVar28 = *(longlong *)(lVar21 + (ulonglong)(uVar17 >> 9) * 8);
            uVar25 = (ulonglong)uVar17 & 0x1ff;
            pppuVar3 = (undefined8 ***)(dVar36 * dVar35 * dVar30 + (double)local_290);
            piVar45 = (int *)(dVar37 * dVar35 * dVar30 + local_288);
            dVar36 = local_2e8 - *(double *)(lVar28 + uVar25 * 0x18);
            dVar41 = local_2e0 - *(double *)(lVar28 + 8 + uVar25 * 0x18);
            dVar37 = (double)puVar40 - *(double *)(lVar28 + 0x10 + uVar25 * 0x18);
            uVar17 = *(uint *)(lVar20 + 4 + lVar29 * 0xc);
            lVar28 = *(longlong *)(lVar21 + (ulonglong)(uVar17 >> 9) * 8);
            uVar25 = (ulonglong)uVar17 & 0x1ff;
            pplVar4 = (longlong **)(dVar35 * dVar42 * dVar30 + (double)local_280);
            dVar42 = local_2e8 - *(double *)(lVar28 + uVar25 * 0x18);
            dVar36 = dVar37 * dVar37 + dVar36 * dVar36 + dVar41 * dVar41;
            dVar41 = local_2e0 - *(double *)(lVar28 + 8 + uVar25 * 0x18);
            dVar37 = (double)puVar40 - *(double *)(lVar28 + 0x10 + uVar25 * 0x18);
            uVar17 = *(uint *)(lVar20 + lVar29 * 0xc);
            lVar28 = *(longlong *)(lVar21 + (ulonglong)(uVar17 >> 9) * 8);
            uVar25 = (ulonglong)uVar17 & 0x1ff;
            dVar30 = local_2e8 - *(double *)(lVar28 + uVar25 * 0x18);
            dVar42 = dVar37 * dVar37 + dVar42 * dVar42 + dVar41 * dVar41;
            dVar41 = local_2e0 - *(double *)(lVar28 + 8 + uVar25 * 0x18);
            dVar37 = (double)puVar40 - *(double *)(lVar28 + 0x10 + uVar25 * 0x18);
            dVar37 = dVar37 * dVar37 + dVar30 * dVar30 + dVar41 * dVar41;
            if (dVar37 <= dVar42) {
              dVar37 = dVar42;
            }
            if (dVar37 <= dVar36) {
              dVar37 = dVar36;
            }
            dVar30 = local_2f8;
            if (local_2f8 <= dVar37) {
              dVar30 = dVar37;
            }
            uVar22 = ~(uint)uVar23 & uVar22;
            iVar16 = (int)uVar12;
            lVar28 = (longlong)iVar16;
            uVar17 = puVar31[lVar28] & uVar22;
            puVar47 = local_310;
            local_318 = puVar44;
            plVar7 = local_328;
            if (uVar17 == 0) {
              iVar19 = iVar27;
              if (iVar27 < iVar16) {
                iVar19 = iVar16;
              }
              if (iVar27 <= iVar16) break;
              lVar26 = 0;
              while( true ) {
                iVar8 = iVar8 + 0x20;
                uVar17 = local_2d8[lVar28 + lVar26];
                if (uVar17 != 0) break;
                lVar26 = lVar26 + 1;
                if (iVar19 - lVar28 == lVar26) goto LAB_14296e6f0;
              }
              uVar12 = (ulonglong)(iVar16 + (int)lVar26 + 1);
              uVar22 = 0xffffffff;
            }
            uVar23 = (ulonglong)(-uVar17 & uVar17);
            uVar25 = uVar23 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar16 = (iVar8 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          } while (iVar16 < iVar9);
        }
LAB_14296e6f0:
        if (dVar30 < 0.0) {
          local_318 = puVar44;
          puVar31 = (uint *)sqrt(dVar30);
          param_1 = local_320;
          puVar44 = local_318;
          pppuVar34 = (undefined8 ***)local_308;
          plVar43 = local_300;
        }
        else {
          puVar31 = (uint *)SQRT(dVar30);
          pppuVar34 = (undefined8 ***)local_308;
          plVar43 = local_300;
        }
      }
      else {
        FUN_140619b9c(plVar46,&local_1c8);
        local_1d0 = param_5;
        local_1a8 = (int *)DAT_14c8464f0;
        local_1b8 = DAT_14c8464e0;
        puStack_1b0 = DAT_14c8464e8;
        local_1a0 = (double *)0x0;
        local_188 = CONCAT44(local_188._4_4_,local_1c0);
        auVar32 = roundss(ZEXT416((uint)((float)local_1c0 * 0.0625)),
                          ZEXT416((uint)((float)local_1c0 * 0.0625)),10);
        local_170 = (int)auVar32._0_4_;
        local_168 = (code *)0x0;
        pppuStack_160 = (undefined8 ***)0x10;
        local_1d8 = &local_1c8;
        FUN_14296f7f2(&local_168);
        piStack_258 = &local_174;
        local_208 = 0.0;
        local_200 = (double)((ulonglong)local_200._4_4_ << 0x20);
        local_150 = FUN_14296f8e6;
        local_340 = 0;
        local_338 = (code **)&local_208;
        local_278 = &local_1b8;
        puStack_270 = (uint *)&local_170;
        local_268 = &local_188;
        local_260 = &local_1d8;
        local_250 = &local_168;
        local_148 = &local_278;
        FUN_1401f8d10(L"ParallelFor Task",0x10,1,&local_150);
        param_1 = local_320;
        auVar38 = in_XMM1._4_12_;
        piVar45 = local_1a8;
        puVar47 = puStack_1b0;
        pppuVar3 = local_1b8;
        pdVar2 = local_1a0;
        if ((longlong)(int)pppuStack_160 != 0) {
          lVar20 = 0;
          do {
            piVar45 = (int *)((double)piVar45 + *(double *)(local_168 + lVar20 + 0x10));
            puVar47 = (uint *)((double)puVar47 + *(double *)(local_168 + lVar20 + 8));
            pppuVar3 = (undefined8 ***)((double)pppuVar3 + *(double *)(local_168 + lVar20));
            pdVar2 = (double *)((double)pdVar2 + *(double *)(local_168 + lVar20 + 0x18));
            lVar20 = lVar20 + 0x20;
          } while ((longlong)(int)pppuStack_160 * 0x20 != lVar20);
        }
        if (local_168 != (code *)0x0) {
          FUN_1400020a8();
          auVar38 = in_XMM1._4_12_;
        }
        dVar33 = 1.0 / (double)pdVar2;
        local_2e8 = (double)pppuVar3 * dVar33;
        local_2e0 = (double)puVar47 * dVar33;
        puVar31 = (uint *)((double)piVar45 * dVar33);
        local_1f0 = &local_1c8;
        local_1e8 = local_300;
        local_1e0 = param_5;
        local_268 = (longlong *)DAT_14c8464f0;
        local_278 = DAT_14c8464e0;
        puStack_270 = DAT_14c8464e8;
        local_260 = (longlong **)0x0;
        piStack_258 = (int *)0x0;
        local_250 = (code **)0x0;
        plStack_248 = (longlong *)0x0;
        local_240 = 0.0;
        dStack_238 = 0.0;
        local_230 = 0.0;
        plStack_228 = (longlong *)0x0;
        auVar32._0_4_ = (float)local_1c0 * 0.0625;
        auVar32._4_12_ = auVar38;
        local_220 = (uint *)0x0;
        dStack_218 = 0.0;
        auVar32 = roundss(auVar32,auVar32,10);
        local_174 = (int)auVar32._0_4_;
        local_170 = local_1c0;
        local_188 = 0;
        uStack_180 = 0x10;
        local_208 = local_2e8;
        local_200 = local_2e0;
        local_1f8 = puVar31;
        FUN_14296f9c0(&local_188);
        puStack_1b0 = (uint *)&local_174;
        local_1a8 = &local_170;
        local_198 = &local_169;
        local_150 = (code *)0x0;
        local_148 = (undefined8 ***)((ulonglong)local_148 & 0xffffffff00000000);
        local_168 = FUN_14296fb24;
        local_340 = 0;
        local_338 = &local_150;
        local_1b8 = &local_278;
        local_1a0 = &local_208;
        local_190 = &local_188;
        pppuStack_160 = &local_1b8;
        FUN_1401f8d10(L"ParallelFor Task",0x10,1);
        local_328 = plStack_228;
        plVar43 = (longlong *)dStack_238;
        piVar45 = piStack_258;
        dVar33 = local_230;
        pppuVar34 = local_278;
        plVar46 = local_268;
        puVar47 = puStack_270;
        local_318 = local_220;
        local_2f8 = local_240;
        plVar5 = plStack_248;
        pppuVar3 = (undefined8 ***)local_250;
        pplVar4 = local_260;
        if ((longlong)(int)uStack_180 == 0) {
          uVar48 = SUB84(dStack_218,0);
          uVar49 = (undefined4)((ulonglong)dStack_218 >> 0x20);
        }
        else {
          lVar20 = 0;
          dVar39 = dStack_218;
          do {
            plVar46 = (longlong *)((double)plVar46 + *(double *)(local_188 + 0x10 + lVar20));
            puVar47 = (uint *)((double)puVar47 + *(double *)(local_188 + 8 + lVar20));
            pppuVar34 = (undefined8 ***)((double)pppuVar34 + *(double *)(local_188 + lVar20));
            local_318 = (uint *)((double)local_318 + *(double *)(local_188 + 0x58 + lVar20));
            local_328 = (longlong *)((double)local_328 + *(double *)(local_188 + 0x50 + lVar20));
            dVar33 = dVar33 + *(double *)(local_188 + 0x48 + lVar20);
            plVar43 = (longlong *)((double)plVar43 + *(double *)(local_188 + 0x40 + lVar20));
            local_2f8 = local_2f8 + *(double *)(local_188 + 0x38 + lVar20);
            plVar5 = (longlong *)((double)plVar5 + *(double *)(local_188 + 0x30 + lVar20));
            pppuVar3 = (undefined8 ***)((double)pppuVar3 + *(double *)(local_188 + 0x28 + lVar20));
            piVar45 = (int *)((double)piVar45 + *(double *)(local_188 + 0x20 + lVar20));
            pplVar4 = (longlong **)((double)pplVar4 + *(double *)(local_188 + 0x18 + lVar20));
            dVar30 = *(double *)(local_188 + 0x60 + lVar20);
            uVar48 = SUB84(dVar30,0);
            uVar49 = (undefined4)((ulonglong)dVar30 >> 0x20);
            if (dVar30 <= dVar39) {
              uVar48 = SUB84(dVar39,0);
              uVar49 = (undefined4)((ulonglong)dVar39 >> 0x20);
            }
            lVar20 = lVar20 + 0x68;
            dVar39 = (double)CONCAT44(uVar49,uVar48);
          } while ((longlong)(int)uStack_180 * 0x68 - lVar20 != 0);
        }
        local_310 = puVar31;
        if (local_188 != 0) {
          FUN_1400020a8();
        }
        if ((double)CONCAT44(uVar49,uVar48) < 0.0) {
          puVar31 = (uint *)sqrt((double)CONCAT44(uVar49,uVar48));
        }
        else {
          puVar31 = (uint *)SQRT((double)CONCAT44(uVar49,uVar48));
        }
        puVar40 = local_310;
        puVar44 = local_318;
        dVar39 = local_2f8;
        plVar7 = local_328;
        if (local_1c8 != 0) {
          FUN_1400020a8();
          puVar40 = local_310;
          puVar44 = local_318;
          dVar39 = local_2f8;
          plVar7 = local_328;
        }
      }
      local_300 = plVar43;
      plVar43 = param_1 + 1;
      if (*(int *)((longlong)param_1 + 0x3c) == 0) {
        iVar8 = (int)param_1[2];
        *(int *)(param_1 + 2) = iVar8 + 1;
        if (*(int *)((longlong)param_1 + 0x14) == iVar8) {
          local_328 = plVar5;
          local_318 = (uint *)pplVar4;
          local_308 = pppuVar3;
          FUN_140f20a84(plVar43,iVar8);
          pppuVar3 = (undefined8 ***)local_308;
          pplVar4 = (longlong **)local_318;
          plVar5 = local_328;
        }
        iVar9 = (int)local_320[6];
        if (iVar9 == 0) {
          iVar16 = -1;
        }
        else {
          iVar16 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar16 = iVar9 + -1;
          }
          iVar16 = iVar16 >> 5;
        }
        plVar14 = local_320 + 3;
        iVar27 = iVar9 + 1;
        iVar19 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar19 = iVar9;
        }
        plVar18 = local_320;
        if (iVar19 >> 5 == iVar16) {
          *(int *)(local_320 + 6) = iVar27;
        }
        else {
          if (*(int *)((longlong)local_320 + 0x34) <= iVar9) {
            local_318 = puVar31;
            local_2f8 = dVar39;
            iVar16 = iVar9;
            local_310 = puVar40;
            local_308 = pppuVar34;
            if (iVar9 + 0x20U < 0xa0) {
              iVar27 = 0x80;
            }
            else {
              uVar22 = iVar9 + 0x20U >> 5;
              if (*(int *)((longlong)local_320 + 0x34) + 0x1fU < 0xa0) {
                uVar17 = 4;
                if (4 < uVar22) {
                  uVar17 = uVar22;
                }
              }
              else {
                uVar17 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
              }
              uVar12 = (ulonglong)(uVar17 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar10 = (uint)(uVar12 + 0xf);
                  if (uVar17 < 0x1ffd) {
                    uVar12 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
                  }
                  else {
                    uVar25 = (ulonglong)(uVar10 & 0xfffffff0);
                    if (uVar25 < 0x7ff1) {
                      bVar13 = (&DAT_14c841e00)[uVar10 >> 4];
                      uVar23 = 0x32;
                      if (0x32 < bVar13) {
                        uVar23 = (ulonglong)bVar13;
                      }
                      uVar24 = 0x32 - (ulonglong)bVar13;
                      do {
                        uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_14296f16d;
                        lVar20 = uVar23 + 1 + uVar24;
                        uVar24 = uVar24 - 1;
                      } while (lVar20 != 0x33);
                    }
                    uVar12 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar12 = (ulonglong)DAT_14c841df8;
                    }
                    uVar12 = -uVar12 & (uVar25 + uVar12) - 1;
                  }
                }
                else {
                  uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
                  iVar16 = (int)local_320[6];
                }
              }
LAB_14296f16d:
              iVar11 = (int)(uVar12 >> 2);
              iVar27 = -0x20;
              if ((int)uVar22 <= iVar11) {
                iVar27 = iVar11 << 5;
              }
            }
            plVar18 = local_320;
            *(int *)((longlong)local_320 + 0x34) = iVar27;
            FUN_1446efbd8(plVar14,iVar16);
            iVar27 = (int)plVar18[6] + 1;
            puVar40 = local_310;
            pppuVar34 = (undefined8 ***)local_308;
            puVar31 = local_318;
            dVar39 = local_2f8;
          }
          iVar16 = iVar27 + 0x1f;
          if (-1 < iVar27) {
            iVar16 = iVar27;
          }
          *(int *)(plVar18 + 6) = iVar27;
          if (iVar27 % 0x20 != 0) {
            plVar15 = (longlong *)plVar18[5];
            if ((longlong *)plVar18[5] == (longlong *)0x0) {
              plVar15 = plVar14;
            }
            bVar13 = -(char)(iVar27 % 0x20);
            *(uint *)((longlong)plVar15 + (longlong)(iVar16 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar16 >> 5) * 4) << (bVar13 & 0x1f)
                       ) >> (bVar13 & 0x1f);
          }
        }
        lVar20 = (longlong)iVar8;
        if ((longlong *)plVar18[5] != (longlong *)0x0) {
          plVar14 = (longlong *)plVar18[5];
        }
        bVar13 = (byte)iVar9 & 0x1f;
        puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar19 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
      }
      else {
        iVar8 = (int)param_1[7];
        lVar20 = (longlong)iVar8;
        iVar9 = *(int *)(param_1[1] + 4 + lVar20 * 0x90);
        *(int *)(param_1 + 7) = iVar9;
        iVar16 = *(int *)((longlong)param_1 + 0x3c) + -1;
        *(int *)((longlong)param_1 + 0x3c) = iVar16;
        plVar18 = local_320;
        if (iVar16 != 0) {
          *(undefined4 *)(param_1[1] + (longlong)iVar9 * 0x90) = 0xffffffff;
        }
      }
      iVar9 = local_2ec;
      uVar22 = 1 << ((byte)iVar8 & 0x1f);
      iVar16 = 1;
      plVar14 = (longlong *)plVar18[5];
      if ((longlong *)plVar18[5] == (longlong *)0x0) {
        plVar14 = plVar18 + 3;
      }
      iVar27 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar27 = iVar8;
      }
      puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar27 >> 5) * 4);
      *puVar1 = *puVar1 | uVar22;
      lVar21 = plVar18[1];
      lVar20 = lVar20 * 0x90;
      _Src = (void *)(lVar21 + lVar20);
      *(uint *)(lVar21 + lVar20) = param_2;
      *(double *)(lVar21 + 8 + lVar20) = local_2e8;
      *(double *)(lVar21 + 0x10 + lVar20) = local_2e0;
      *(uint **)(lVar21 + 0x18 + lVar20) = puVar40;
      *(uint **)(lVar21 + 0x20 + lVar20) = puVar31;
      *(undefined8 ****)(lVar21 + 0x28 + lVar20) = pppuVar34;
      *(uint **)(lVar21 + 0x30 + lVar20) = puVar47;
      *(longlong **)(lVar21 + 0x38 + lVar20) = plVar46;
      *(longlong ***)(lVar21 + 0x40 + lVar20) = pplVar4;
      *(int **)(lVar21 + 0x48 + lVar20) = piVar45;
      *(undefined8 ****)(lVar21 + 0x50 + lVar20) = pppuVar3;
      *(longlong **)(lVar21 + 0x58 + lVar20) = plVar5;
      *(double *)(lVar21 + 0x60 + lVar20) = dVar39;
      *(longlong **)(lVar21 + 0x68 + lVar20) = local_300;
      *(double *)(lVar21 + 0x70 + lVar20) = dVar33;
      *(longlong **)(lVar21 + 0x78 + lVar20) = plVar7;
      *(uint **)(lVar21 + 0x80 + lVar20) = puVar44;
      *(undefined4 *)(lVar21 + 0x88 + lVar20) = 0xffffffff;
      uVar17 = (int)plVar18[2] - *(int *)((longlong)plVar18 + 0x3c);
      if (1 < uVar17) {
        plVar46 = local_320 + 8;
        if ((longlong *)local_320[9] != (longlong *)0x0) {
          plVar46 = (longlong *)local_320[9];
        }
        iVar19 = *(int *)((longlong)plVar46 + (ulonglong)((int)local_320[10] - 1U & param_2) * 4);
        if (iVar19 != -1) {
          do {
            _Dst = (void *)(*plVar43 + (longlong)iVar19 * 0x90);
            if (*(uint *)(*plVar43 + (longlong)iVar19 * 0x90) == param_2) {
              memmove(_Dst,_Src,0x88);
              lVar21 = local_320[1];
              if (*(int *)((longlong)local_320 + 0x3c) != 0) {
                *(int *)(lVar21 + (longlong)(int)local_320[7] * 0x90) = iVar8;
              }
              *(undefined4 *)(lVar21 + lVar20) = 0xffffffff;
              uVar48 = 0xffffffff;
              if (0 < *(int *)((longlong)local_320 + 0x3c)) {
                uVar48 = (undefined4)local_320[7];
              }
              *(undefined4 *)(lVar21 + lVar20 + 4) = uVar48;
              *(int *)(local_320 + 7) = iVar8;
              *(int *)((longlong)local_320 + 0x3c) = *(int *)((longlong)local_320 + 0x3c) + 1;
              plVar46 = plVar18 + 3;
              if ((longlong *)local_320[5] != (longlong *)0x0) {
                plVar46 = (longlong *)local_320[5];
              }
              puVar47 = (uint *)((longlong)plVar46 + (longlong)(iVar27 >> 5) * 4);
              *puVar47 = *puVar47 & ~uVar22;
              iVar9 = local_2ec;
              goto LAB_14296f005;
            }
            iVar19 = *(int *)((longlong)_Dst + 0x88);
          } while (iVar19 != -1);
        }
      }
      if (3 < uVar17) {
        uVar12 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
        lVar20 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar16 = 1 << ((byte)lVar20 & 0x1f);
      }
      if (((int)uVar17 < 1) || (iVar16 <= (int)local_320[10])) {
        param_2 = (int)local_320[10] - 1U & param_2;
        *(uint *)((longlong)_Src + 0x8c) = param_2;
        plVar46 = (longlong *)local_320[9];
        if ((longlong *)local_320[9] == (longlong *)0x0) {
          plVar46 = local_320 + 8;
        }
        *(undefined4 *)((longlong)_Src + 0x88) =
             *(undefined4 *)
              ((longlong)plVar46 + ((longlong)(int)local_320[10] - 1U & (longlong)(int)param_2) * 4)
        ;
        plVar46 = (longlong *)local_320[9];
        if ((longlong *)local_320[9] == (longlong *)0x0) {
          plVar46 = local_320 + 8;
        }
        *(int *)((longlong)plVar46 +
                ((longlong)(int)local_320[10] - 1U & (longlong)(int)param_2) * 4) = iVar8;
      }
      else {
        *(int *)(local_320 + 10) = iVar16;
        FUN_14296f464(plVar43);
      }
    }
  }
LAB_14296f005:
  FUN_145a22d80(&local_140);
LAB_14296dd15:
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 14296f2c6 FUN_14296f2c6 body=412 status=ok
// SIG undefined FUN_14296f2c6(void)

void FUN_14296f2c6(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *param_2;
  lVar10 = (longlong)(int)uVar3;
  lVar6 = param_1[1];
  uVar11 = (ulonglong)(uVar3 >> 9);
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 8) + uVar11 * 8);
  uVar12 = (ulonglong)((uVar3 & 0x1ff) << 3);
  lVar9 = uVar12 * 3;
  local_98 = uVar12 + *(longlong *)(*(longlong *)(lVar6 + 0x38) + uVar11 * 8);
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x20) + uVar11 * 8);
  lVar8 = *(longlong *)(((longlong *)*param_1)[1] + 0x90);
  uVar3 = *(uint *)(lVar8 + lVar10 * 0xc);
  uVar4 = *(uint *)(lVar8 + 4 + lVar10 * 0xc);
  uVar5 = *(uint *)(lVar8 + 8 + lVar10 * 0xc);
  lVar8 = *(longlong *)(*(longlong *)*param_1 + 0x10);
  lVar10 = *(longlong *)(lVar8 + (ulonglong)(uVar3 >> 9) * 8);
  uVar12 = (ulonglong)uVar3 & 0x1ff;
  pdVar1 = (double *)(lVar10 + uVar12 * 0x18);
  local_78 = *pdVar1;
  dStack_70 = pdVar1[1];
  local_68 = *(double *)(lVar10 + 0x10 + uVar12 * 0x18);
  lVar10 = *(longlong *)(lVar8 + (ulonglong)(uVar4 >> 9) * 8);
  uVar12 = (ulonglong)uVar4 & 0x1ff;
  pdVar1 = (double *)(lVar10 + uVar12 * 0x18);
  local_60 = *pdVar1;
  dStack_58 = pdVar1[1];
  local_50 = *(double *)(lVar10 + 0x10 + uVar12 * 0x18);
  lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8);
  uVar12 = (ulonglong)uVar5 & 0x1ff;
  pdVar1 = (double *)(lVar8 + uVar12 * 0x18);
  local_48 = *pdVar1;
  dStack_40 = pdVar1[1];
  local_38 = *(double *)(lVar8 + 0x10 + uVar12 * 0x18);
  *(double *)(lVar7 + lVar9) = (local_78 + local_60 + local_48) * 0.3333333333333333;
  *(double *)(lVar7 + 8 + lVar9) = (dStack_70 + dStack_58 + dStack_40) * 0.3333333333333333;
  *(double *)(lVar7 + 0x10 + lVar9) = (local_68 + local_50 + local_38) * 0.3333333333333333;
  FUN_146b9cae0(&local_90,&local_78,&local_60,&local_48);
  *(undefined8 *)(lVar6 + 0x10 + lVar9) = local_80;
  puVar2 = (undefined4 *)(lVar6 + lVar9);
  *puVar2 = local_90;
  puVar2[1] = uStack_8c;
  puVar2[2] = uStack_88;
  puVar2[3] = uStack_84;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296f464 FUN_14296f464 body=624 status=ok
// SIG undefined FUN_14296f464(void)

void FUN_14296f464(longlong *param_1)

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
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14296f4de;
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
LAB_14296f4de:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
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
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x90;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x8c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x88 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14296f6d4 FUN_14296f6d4 body=285 status=ok
// SIG undefined FUN_14296f6d4(void)

void FUN_14296f6d4(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  while (uVar3 = *(uint *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                          (ulonglong)(param_2 & 0x1ff) * 4), *(int *)(lVar1 + 200) <= (int)uVar3) {
    param_2 = *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
    if ((int)param_2 < 0) {
      param_2 = ~param_2;
    }
    else {
      FUN_14296f6d4(param_1,param_2 - 1,param_3);
      lVar1 = *param_1;
      param_2 = *(int *)(*(longlong *)
                          (*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                        (ulonglong)(uVar3 + 1 & 0x1ff) * 4) - 1;
    }
  }
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)(uVar3 & 0x1ff) * 4);
  if (0 < iVar2) {
    do {
      uVar3 = uVar3 + 1;
      FUN_1447cbafe(param_3,local_34,
                    (ulonglong)((uVar3 & 0x1ff) << 2) +
                    *(longlong *)(*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar3 >> 9) * 8),0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14296f7f2 FUN_14296f7f2 body=243 status=ok
// SIG undefined FUN_14296f7f2(void)

void FUN_14296f7f2(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x400) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 * 2]];
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
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 5)) {
      uVar3 = uVar2 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 14296f8e6 FUN_14296f8e6 body=217 status=ok
// SIG undefined FUN_14296f8e6(void)

void FUN_14296f8e6(undefined8 *param_1,int *param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar8;
  
  iVar2 = *param_2;
  pdVar3 = (double *)*param_1;
  dVar11 = *pdVar3;
  dVar12 = pdVar3[1];
  dVar13 = pdVar3[2];
  dVar14 = pdVar3[3];
  iVar6 = (iVar2 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar6) {
    iVar6 = *(int *)param_1[2];
  }
  iVar10 = *(int *)param_1[1] * iVar2;
  if (iVar10 < iVar6) {
    lVar4 = ((undefined8 *)param_1[3])[1];
    do {
      uVar7 = *(uint *)(**(longlong **)param_1[3] + (longlong)iVar10 * 4);
      uVar9 = (ulonglong)(uVar7 >> 9);
      uVar7 = uVar7 & 0x1ff;
      uVar8 = (ulonglong)uVar7;
      dVar1 = *(double *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x38) + uVar9 * 8) + (ulonglong)uVar7 * 8);
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 8) + uVar9 * 8);
      dVar13 = dVar13 + *(double *)(lVar5 + 0x10 + uVar8 * 0x18) * dVar1;
      dVar14 = dVar14 + dVar1;
      dVar12 = dVar12 + *(double *)(lVar5 + 8 + uVar8 * 0x18) * dVar1;
      dVar11 = dVar11 + dVar1 * *(double *)(lVar5 + uVar8 * 0x18);
      iVar10 = iVar10 + 1;
    } while (iVar6 != iVar10);
  }
  lVar4 = *(longlong *)param_1[5];
  lVar5 = (longlong)iVar2 * 0x20;
  *(double *)(lVar4 + lVar5) = dVar11;
  *(double *)(lVar4 + 8 + lVar5) = dVar12;
  *(double *)(lVar4 + 0x10 + lVar5) = dVar13;
  *(double *)(lVar4 + 0x18 + lVar5) = dVar14;
  return;
}



// FUNCTION 14296f9c0 FUN_14296f9c0 body=355 status=ok
// SIG undefined FUN_14296f9c0(void)

void FUN_14296f9c0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar4 = uVar6 * 0x68;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar4 + 0xf;
      if (uVar6 < 0x13b) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
      }
      else {
        if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14296fa4c;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar6 & ((uVar5 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
  }
LAB_14296fa4c:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar4 / 0x68)) {
    uVar6 = uVar4 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,0x68,8);
  return;
}



// FUNCTION 14296fb24 FUN_14296fb24 body=1302 status=ok
// SIG undefined FUN_14296fb24(void)

void FUN_14296fb24(undefined8 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  double *pdVar15;
  longlong lVar16;
  double dVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  
  iVar12 = *param_2;
  pdVar15 = (double *)*param_1;
  local_150 = *pdVar15;
  local_158 = pdVar15[1];
  dVar1 = pdVar15[2];
  dVar30 = pdVar15[3];
  dVar36 = pdVar15[4];
  dVar2 = pdVar15[5];
  dVar3 = pdVar15[6];
  dVar4 = pdVar15[7];
  dVar5 = pdVar15[8];
  dVar35 = pdVar15[9];
  local_140 = pdVar15[10];
  local_148 = pdVar15[0xb];
  dVar6 = pdVar15[0xc];
  iVar23 = (iVar12 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar23) {
    iVar23 = *(int *)param_1[2];
  }
  iVar24 = *(int *)param_1[1] * iVar12;
  if (iVar24 < iVar23) {
    pdVar15 = (double *)param_1[3];
    lVar16 = *(longlong *)(((longlong *)pdVar15[4])[1] + 0x90);
    lVar22 = *(longlong *)(*(longlong *)pdVar15[4] + 0x10);
    dVar17 = pdVar15[5];
    dVar7 = pdVar15[2];
    dVar8 = *pdVar15;
    dVar9 = pdVar15[1];
    lVar25 = (longlong)iVar24;
    local_160 = dVar6;
    do {
      uVar13 = *(uint *)(*(longlong *)pdVar15[3] + lVar25 * 4);
      lVar26 = (longlong)(int)uVar13;
      uVar27 = (ulonglong)(uVar13 >> 9);
      uVar28 = (ulonglong)((uVar13 & 0x1ff) << 3);
      dVar10 = *(double *)
                (*(longlong *)(*(longlong *)((longlong)dVar17 + 0x38) + uVar27 * 8) + uVar28);
      lVar18 = *(longlong *)(*(longlong *)((longlong)dVar17 + 0x20) + uVar27 * 8);
      lVar21 = uVar28 * 3;
      dVar11 = *(double *)(lVar18 + lVar21);
      dVar6 = *(double *)(lVar18 + 8 + lVar21);
      lVar19 = *(longlong *)(*(longlong *)((longlong)dVar17 + 8) + uVar27 * 8);
      dVar29 = *(double *)(lVar18 + 0x10 + lVar21);
      dVar32 = *(double *)(lVar19 + 0x10 + lVar21) - dVar7;
      dVar31 = *(double *)(lVar19 + 8 + lVar21) - dVar9;
      dVar20 = *(double *)(lVar19 + lVar21) - dVar8;
      dVar1 = dVar1 + dVar29 * dVar10;
      local_158 = local_158 + dVar6 * dVar10;
      local_150 = local_150 + dVar11 * dVar10;
      local_148 = local_148 + dVar29 * dVar32 * dVar10;
      local_140 = local_140 + dVar6 * dVar32 * dVar10;
      dVar35 = dVar35 + dVar32 * dVar11 * dVar10;
      dVar5 = dVar5 + dVar29 * dVar31 * dVar10;
      dVar4 = dVar4 + dVar6 * dVar31 * dVar10;
      uVar13 = *(uint *)(lVar16 + lVar26 * 0xc);
      uVar14 = *(uint *)(lVar16 + 8 + lVar26 * 0xc);
      uVar28 = (ulonglong)uVar14 & 0x1ff;
      lVar18 = *(longlong *)(lVar22 + (ulonglong)(uVar14 >> 9) * 8);
      dVar3 = dVar3 + dVar31 * dVar11 * dVar10;
      dVar32 = dVar8 - *(double *)(lVar18 + uVar28 * 0x18);
      dVar2 = dVar2 + dVar29 * dVar20 * dVar10;
      dVar33 = dVar9 - *(double *)(lVar18 + 8 + uVar28 * 0x18);
      dVar29 = dVar7 - *(double *)(lVar18 + 0x10 + uVar28 * 0x18);
      uVar14 = *(uint *)(lVar16 + 4 + lVar26 * 0xc);
      uVar27 = (ulonglong)uVar13 & 0x1ff;
      lVar18 = *(longlong *)(lVar22 + (ulonglong)(uVar13 >> 9) * 8);
      lVar19 = *(longlong *)(lVar22 + (ulonglong)(uVar14 >> 9) * 8);
      uVar28 = (ulonglong)uVar14 & 0x1ff;
      dVar36 = dVar36 + dVar6 * dVar20 * dVar10;
      dVar31 = dVar8 - *(double *)(lVar19 + uVar28 * 0x18);
      dVar34 = dVar9 - *(double *)(lVar19 + 8 + uVar28 * 0x18);
      dVar32 = dVar29 * dVar29 + dVar32 * dVar32 + dVar33 * dVar33;
      dVar6 = dVar8 - *(double *)(lVar18 + uVar27 * 0x18);
      dVar29 = dVar9 - *(double *)(lVar18 + 8 + uVar27 * 0x18);
      dVar33 = dVar7 - *(double *)(lVar19 + 0x10 + uVar28 * 0x18);
      dVar33 = dVar33 * dVar33 + dVar31 * dVar31 + dVar34 * dVar34;
      dVar31 = dVar7 - *(double *)(lVar18 + 0x10 + uVar27 * 0x18);
      dVar6 = dVar31 * dVar31 + dVar6 * dVar6 + dVar29 * dVar29;
      if (dVar6 <= dVar33) {
        dVar6 = dVar33;
      }
      if (dVar6 <= dVar32) {
        dVar6 = dVar32;
      }
      dVar30 = dVar30 + dVar20 * dVar11 * dVar10;
      if (dVar6 <= local_160) {
        dVar6 = local_160;
      }
      lVar25 = lVar25 + 1;
      local_160 = dVar6;
    } while (iVar23 != lVar25);
  }
  lVar16 = *(longlong *)param_1[5];
  lVar22 = (longlong)iVar12 * 0x68;
  *(double *)(lVar16 + lVar22) = local_150;
  *(double *)(lVar16 + 8 + lVar22) = local_158;
  *(double *)(lVar16 + 0x10 + lVar22) = dVar1;
  *(double *)(lVar16 + 0x18 + lVar22) = dVar30;
  *(double *)(lVar16 + 0x20 + lVar22) = dVar36;
  *(double *)(lVar16 + 0x28 + lVar22) = dVar2;
  *(double *)(lVar16 + 0x30 + lVar22) = dVar3;
  *(double *)(lVar16 + 0x38 + lVar22) = dVar4;
  *(double *)(lVar16 + 0x40 + lVar22) = dVar5;
  *(double *)(lVar16 + 0x48 + lVar22) = dVar35;
  *(double *)(lVar16 + 0x50 + lVar22) = local_140;
  *(double *)(lVar16 + 0x58 + lVar22) = local_148;
  *(double *)(lVar16 + 0x60 + lVar22) = dVar6;
  return;
}



// FUNCTION 14297003a FUN_14297003a body=413 status=ok
// SIG undefined FUN_14297003a(void)

longlong FUN_14297003a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong *local_98;
  longlong local_88 [7];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = (longlong *)*param_1;
  FUN_14296d806(plVar1,0);
  local_a8 = *(longlong *)(param_2 + 4);
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  dVar3 = (double)FUN_142970260(plVar1,*(undefined4 *)(*plVar1 + 0xcc));
  uVar4 = 0xbff00000;
  if (0.5 < dVar3) {
    local_a8 = *(longlong *)(param_2 + 4);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    dVar3 = (double)FUN_146bed438((longlong *)param_1[1],
                                  *(undefined4 *)(*(longlong *)param_1[1] + 0xcc));
    if (dVar3 * (double)param_1[2] <= 0.5) {
      local_100 = 0x7fefffffffffffff;
      plVar1 = *(longlong **)param_1[1];
      local_f8 = 0;
      local_e8 = 0;
      FUN_146bee698(&local_b8,*(undefined8 *)(param_1[3] + 0x18));
      iVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,&local_100,&local_b8);
      if (local_a8 != 0) {
        if (local_98 == (longlong *)0x0) {
          local_98 = local_88;
        }
        (**(code **)(*local_98 + 0x10))();
      }
      uVar4 = 0xbff00000;
      if ((iVar2 == -1) &&
         ((*(longlong *)(param_1[3] + 0x50) == 0 ||
          (dVar3 = (double)FUN_146ba0218(param_1[3],param_2),
          *(double *)(param_1[3] + 0x18) <= dVar3)))) {
        uVar4 = 0x3ff00000;
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)uVar4 << 0x20;
}



// FUNCTION 1429701d8 FUN_1429701d8 body=70 status=ok
// SIG undefined FUN_1429701d8(void)

undefined8 * FUN_1429701d8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_149f36310;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142970224 FUN_142970224 body=29 status=ok
// SIG undefined FUN_142970224(void)

void FUN_142970224(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142970242 FUN_142970242 body=29 status=ok
// SIG undefined FUN_142970242(void)

undefined8 FUN_142970242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142970260 FUN_142970260 body=851 status=ok
// SIG undefined FUN_142970260(void)

double FUN_142970260(longlong *param_1,uint param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar5 = *param_1;
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 4);
  uVar11 = *(uint *)(*(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                    (ulonglong)(uVar15 & 0x1ff) * 4);
  if ((int)uVar15 < *(int *)(lVar5 + 200)) {
    if ((int)uVar11 < 1) {
      dVar16 = 0.0;
    }
    else {
      dVar16 = 0.0;
      do {
        uVar15 = uVar15 + 1;
        plVar6 = *(longlong **)(*param_1 + 8);
        lVar10 = (longlong)
                 *(int *)(*(longlong *)
                           (*(longlong *)(*param_1 + 0xb8) + (ulonglong)(uVar15 >> 9) * 8) +
                         (ulonglong)(uVar15 & 0x1ff) * 4);
        lVar5 = *(longlong *)(plVar6[1] + 0x90);
        uVar2 = *(uint *)(lVar5 + lVar10 * 0xc);
        uVar3 = *(uint *)(lVar5 + 4 + lVar10 * 0xc);
        uVar4 = *(uint *)(lVar5 + 8 + lVar10 * 0xc);
        lVar5 = *(longlong *)(*plVar6 + 0x10);
        lVar10 = *(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8);
        uVar14 = (ulonglong)uVar2 & 0x1ff;
        local_f8 = *(undefined8 *)(lVar10 + 0x10 + uVar14 * 0x18);
        puVar1 = (undefined8 *)(lVar10 + uVar14 * 0x18);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        lVar10 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
        uVar14 = (ulonglong)uVar3 & 0x1ff;
        puVar1 = (undefined8 *)(lVar10 + uVar14 * 0x18);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        local_d8 = *(undefined8 *)(lVar10 + 0x10 + uVar14 * 0x18);
        lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8);
        uVar14 = (ulonglong)uVar4 & 0x1ff;
        puVar1 = (undefined8 *)(lVar5 + uVar14 * 0x18);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        local_b8 = *(undefined8 *)(lVar5 + 0x10 + uVar14 * 0x18);
        local_88._0_4_ = (undefined4)uVar7;
        local_88._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_80._0_4_ = (undefined4)uVar8;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_108 = (undefined4)local_88;
        uStack_104 = local_88._4_4_;
        uStack_100 = (undefined4)uStack_80;
        uStack_fc = uStack_80._4_4_;
        local_a8 = local_e8;
        uStack_a0 = uStack_e0;
        local_98 = local_d8;
        local_88 = uVar7;
        uStack_80 = uVar8;
        local_78 = local_f8;
        dVar17 = (double)FUN_146bed793(&local_108,&local_e8,&local_c8,param_3);
        dVar16 = dVar16 + dVar17 / 12.566370614359172;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if ((int)uVar11 < 0) {
      uVar11 = ~uVar11;
      cVar9 = FUN_1429705b4(lVar5,uVar11,param_3);
      if ((cVar9 == '\0') && (cVar9 = FUN_1429706a4(param_1,uVar11,param_3), cVar9 != '\0')) {
        dVar17 = (double)FUN_142970750(param_1,uVar11,param_3);
      }
      else {
        local_118 = *(undefined8 *)(param_3 + 4);
        local_128 = *param_3;
        uStack_124 = param_3[1];
        uStack_120 = param_3[2];
        uStack_11c = param_3[3];
        dVar17 = (double)FUN_142970260(param_1,uVar11);
      }
      dVar16 = 0.0;
    }
    else {
      iVar12 = uVar11 - 1;
      iVar13 = *(int *)(*(longlong *)
                         (*(longlong *)(lVar5 + 0xb8) + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                       (ulonglong)(uVar15 + 1 & 0x1ff) * 4) + -1;
      cVar9 = FUN_1429705b4(lVar5,iVar12,param_3);
      if ((cVar9 == '\0') && (cVar9 = FUN_1429706a4(param_1,iVar12,param_3), cVar9 != '\0')) {
        dVar16 = (double)FUN_142970750(param_1,iVar12,param_3);
      }
      else {
        local_138 = *(undefined8 *)(param_3 + 4);
        local_148 = *param_3;
        uStack_144 = param_3[1];
        uStack_140 = param_3[2];
        uStack_13c = param_3[3];
        dVar16 = (double)FUN_142970260(param_1,iVar12);
      }
      dVar16 = dVar16 + 0.0;
      cVar9 = FUN_1429705b4(*param_1,iVar13,param_3);
      if ((cVar9 == '\0') && (cVar9 = FUN_1429706a4(param_1,iVar13,param_3), cVar9 != '\0')) {
        dVar17 = (double)FUN_142970750(param_1,iVar13,param_3);
      }
      else {
        local_158 = *(undefined8 *)(param_3 + 4);
        local_168 = *param_3;
        uStack_164 = param_3[1];
        uStack_160 = param_3[2];
        uStack_15c = param_3[3];
        dVar17 = (double)FUN_142970260(param_1,iVar13);
      }
    }
    dVar16 = dVar16 + dVar17;
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return dVar16;
}



// FUNCTION 1429705b4 FUN_1429705b4 body=239 status=ok
// SIG undefined FUN_1429705b4(void)

undefined8 FUN_1429705b4(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar6 = *(double *)(param_1 + 0x60);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(param_2 >> 9) * 8);
  lVar5 = (ulonglong)((param_2 & 0x1ff) << 3) * 3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(param_2 >> 9) * 8);
  dVar7 = *(double *)(lVar4 + lVar5) + dVar6;
  if (*(double *)(lVar3 + lVar5) - dVar7 <= *param_3) {
    dVar8 = *(double *)(lVar4 + 8 + lVar5) + dVar6;
    dVar1 = *(double *)(lVar3 + 8 + lVar5);
    if (dVar1 - dVar8 <= param_3[1]) {
      dVar6 = dVar6 + *(double *)(lVar4 + 0x10 + lVar5);
      dVar2 = *(double *)(lVar3 + 0x10 + lVar5);
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                      (param_3[2] <= dVar6 + dVar2 && dVar2 - dVar6 <= param_3[2]) &
                      -(*param_3 <= dVar7 + *(double *)(lVar3 + lVar5)) &
                      -(param_3[1] <= dVar8 + dVar1));
    }
  }
  return 0;
}



// FUNCTION 1429706a4 FUN_1429706a4 body=172 status=ok
// SIG undefined FUN_1429706a4(void)

undefined8 FUN_1429706a4(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          dVar3 = *param_3 - *(double *)(lVar2 + 8);
          dVar4 = param_3[1] - *(double *)(lVar2 + 0x10);
          dVar5 = param_3[2] - *(double *)(lVar2 + 0x18);
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                          *(double *)(param_1 + 0x60) * *(double *)(lVar2 + 0x20) <
                          SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4));
        }
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 142970750 FUN_142970750 body=248 status=ok
// SIG undefined FUN_142970750(void)

double FUN_142970750(longlong param_1,uint param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x90) == param_2)
        goto LAB_1429707a5;
        iVar1 = *(int *)(lVar2 + 0x88);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_1429707a5:
  if (*(int *)(param_1 + 0x68) != 2) {
    dVar3 = *(double *)(lVar2 + 0x18) - param_3[2];
    dVar4 = *(double *)(lVar2 + 0x10) - param_3[1];
    dVar5 = *(double *)(lVar2 + 8) - *param_3;
    dVar6 = SQRT(dVar3 * dVar3 + dVar5 * dVar5 + dVar4 * dVar4);
    dVar6 = 1.0 / (dVar6 * dVar6 * dVar6);
    return (dVar3 * dVar6 * *(double *)(lVar2 + 0x38) +
           dVar6 * dVar5 * *(double *)(lVar2 + 0x28) + dVar4 * dVar6 * *(double *)(lVar2 + 0x30)) *
           0.07957747154594767;
  }
  dVar3 = (double)FUN_146bedd25(lVar2 + 8,lVar2 + 0x28,lVar2 + 0x40);
  return dVar3;
}



// FUNCTION 142970848 FUN_142970848 body=753 status=ok
// SIG undefined FUN_142970848(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_142970848(longlong *param_1,double *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  uint uVar12;
  undefined1 auStack_148 [40];
  double local_120;
  double local_118;
  double local_110;
  double local_108 [4];
  undefined8 local_e8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_108[1] = 1.79769313486232e+308;
  plVar8 = *(longlong **)param_1[2];
  local_108[2] = 0.0;
  local_e8 = 0;
  FUN_146bee698(&local_b8,*(double *)(param_1[4] + 0x18) + *(double *)(param_1[4] + 0x20));
  iVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,param_2,local_108 + 1,&local_b8);
  if (local_a8 != 0.0) {
    plVar8 = plStack_98;
    if (plStack_98 == (longlong *)0x0) {
      plVar8 = &local_88;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  uVar12 = 0xbff00000;
  if (iVar7 != -1) goto LAB_142970985;
  if (*(char *)(param_1[4] + 0x29) == '\0') {
    local_a8 = param_2[2];
    local_b8 = *param_2;
    dStack_b0 = param_2[1];
    dVar11 = (double)FUN_146bed438((longlong *)param_1[2],
                                   *(undefined4 *)(*(longlong *)param_1[2] + 0xcc));
    if (0.5 < dVar11 * (double)param_1[3]) goto LAB_142970985;
  }
  local_108[0] = 1.79769313486232e+308;
  local_b8 = 1.79769313486232e+308;
  local_a8 = 0.0;
  plStack_98 = (longlong *)0x0;
  local_68 = 0;
  iVar7 = FUN_142964f2a(param_1[1],param_2,local_108,&local_b8);
  if (local_a8 != 0.0) {
    plVar8 = plStack_98;
    if (plStack_98 == (longlong *)0x0) {
      plVar8 = &local_88;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (iVar7 == -1) {
LAB_14297096e:
    if ((*(longlong *)(param_1[4] + 0x50) == 0) ||
       (dVar11 = (double)FUN_146ba0218(param_1[4],param_2), *(double *)(param_1[4] + 0x20) <= dVar11
       )) {
      uVar12 = 0x3ff00000;
      goto LAB_142970985;
    }
  }
  else {
    lVar6 = *(longlong *)(((longlong *)*param_1)[1] + 0x90);
    lVar9 = (longlong)iVar7;
    uVar12 = *(uint *)(lVar6 + lVar9 * 0xc);
    uVar4 = *(uint *)(lVar6 + 4 + lVar9 * 0xc);
    uVar5 = *(uint *)(lVar6 + 8 + lVar9 * 0xc);
    lVar6 = *(longlong *)(*(longlong *)*param_1 + 0x10);
    lVar9 = *(longlong *)(lVar6 + (ulonglong)(uVar12 >> 9) * 8);
    uVar10 = (ulonglong)uVar12 & 0x1ff;
    pdVar1 = (double *)(lVar9 + uVar10 * 0x18);
    local_b8 = *pdVar1;
    dStack_b0 = pdVar1[1];
    local_a8 = *(double *)(lVar9 + 0x10 + uVar10 * 0x18);
    lVar9 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
    uVar10 = (ulonglong)uVar4 & 0x1ff;
    puVar2 = (undefined8 *)(lVar9 + uVar10 * 0x18);
    local_a0 = *puVar2;
    plStack_98 = (longlong *)puVar2[1];
    local_90 = *(undefined8 *)(lVar9 + 0x10 + uVar10 * 0x18);
    lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
    uVar10 = (ulonglong)uVar5 & 0x1ff;
    puVar3 = (undefined4 *)(lVar6 + uVar10 * 0x18);
    local_88._0_4_ = *puVar3;
    local_88._4_4_ = puVar3[1];
    uStack_80 = puVar3[2];
    uStack_7c = puVar3[3];
    local_78 = *(undefined8 *)(lVar6 + 0x10 + uVar10 * 0x18);
    FUN_146baf581(&local_120,&local_b8,&local_a0,&local_88);
    if (((param_2[2] - local_a8) * local_110 +
         (*param_2 - local_b8) * local_120 + (param_2[1] - dStack_b0) * local_118 <= 0.0) ||
       (local_108[0] < (double)param_1[5] || local_108[0] == (double)param_1[5]))
    goto LAB_14297096e;
  }
  uVar12 = 0xbff00000;
LAB_142970985:
  if ((local_50 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)uVar12 << 0x20;
}



// FUNCTION 142970b3a FUN_142970b3a body=78 status=ok
// SIG undefined FUN_142970b3a(void)

undefined8 * FUN_142970b3a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_149f36330;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 142970b8e FUN_142970b8e body=29 status=ok
// SIG undefined FUN_142970b8e(void)

void FUN_142970b8e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142970bac FUN_142970bac body=29 status=ok
// SIG undefined FUN_142970bac(void)

undefined8 FUN_142970bac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142970cf4 FUN_142970cf4 body=71 status=ok
// SIG undefined FUN_142970cf4(void)

void FUN_142970cf4(undefined8 param_1,longlong param_2,undefined4 *param_3,char *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_4 == '\x01') {
    uVar1 = *param_3;
    iVar2 = *(int *)(param_2 + 0x250);
    *(uint *)(param_2 + 0x250) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x254) < iVar2 + 1U) {
      FUN_1446f48e2((longlong *)(param_2 + 0x248),iVar2);
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0x248) + (longlong)iVar2 * 4) = uVar1;
  }
  return;
}



// FUNCTION 142970d3b FUN_142970d3b body=1000 status=ok
// SIG undefined FUN_142970d3b(void)

void FUN_142970d3b(longlong *param_1,double *param_2,double *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  ulonglong uVar11;
  bool bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_148 [36];
  uint local_124;
  double *local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  ulonglong uStack_100;
  ulonglong local_f0;
  
  uVar14 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = 0;
  uStack_110 = 0;
  iVar4 = (int)param_1[1];
  local_120 = param_3;
  local_f0 = uVar14;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    uVar14 = FUN_1408652ee(&local_118);
  }
  local_124 = (uint)CONCAT71((int7)(uVar14 >> 8),1);
  uVar20 = 0x3ff00000;
  do {
    dVar2 = *param_2;
    dVar3 = param_2[1];
    bVar12 = true;
    do {
      bVar10 = bVar12;
      dVar8 = dVar2;
      if (!bVar10) {
        dVar8 = dVar3;
      }
      iVar4 = (int)param_1[1];
      if (0 < (longlong)iVar4) {
        uVar15 = (ulonglong)(iVar4 - 1);
        lVar17 = 0;
        uVar14 = 0;
        dVar5 = (*(double *)((ulonglong)(byte)~bVar10 * 8 + uVar15 * 0x10 + *param_1) - dVar8) *
                (double)((ulonglong)uVar20 << 0x20);
        do {
          uVar11 = uStack_110;
          lVar19 = *param_1;
          dVar6 = (*(double *)(lVar17 + lVar19 + (ulonglong)(byte)~bVar10 * 8) - dVar8) *
                  (double)((ulonglong)uVar20 << 0x20);
          iVar18 = (int)uStack_110;
          if (0.0 <= dVar6) {
            uVar13 = uStack_110._4_4_;
            if ((dVar5 < 0.0) && (0.0 < dVar6)) {
              dVar5 = dVar6 / (dVar6 - dVar5);
              lVar16 = (longlong)(int)uVar15 * 0x10;
              if (bVar10) {
                dVar7 = (1.0 - dVar5) * *(double *)(lVar19 + 8 + lVar17) +
                        dVar5 * *(double *)(lVar19 + 8 + lVar16);
                dVar5 = dVar2;
              }
              else {
                dVar7 = dVar3;
                dVar5 = (1.0 - dVar5) * *(double *)(lVar19 + lVar17) +
                        dVar5 * *(double *)(lVar19 + lVar16);
              }
              uVar13 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar13);
              if (uStack_110._4_4_ < uVar13) {
                FUN_14489624a(&local_118,uVar11 & 0xffffffff);
              }
              *(double *)(local_118 + (longlong)iVar18 * 0x10) = dVar5;
              *(double *)(local_118 + 8 + (longlong)iVar18 * 0x10) = dVar7;
              lVar19 = *param_1;
              iVar18 = (int)uStack_110;
              uVar13 = uStack_110._4_4_;
            }
            uStack_110 = CONCAT44(uStack_110._4_4_,iVar18 + 1U);
            if (uVar13 < iVar18 + 1U) {
              FUN_14489624a(&local_118,iVar18);
            }
            uVar9 = ((undefined8 *)(lVar19 + lVar17))[1];
            puVar1 = (undefined8 *)(local_118 + (longlong)iVar18 * 0x10);
            *puVar1 = *(undefined8 *)(lVar19 + lVar17);
            puVar1[1] = uVar9;
          }
          else if (0.0 < dVar5) {
            dVar5 = dVar6 / (dVar6 - dVar5);
            lVar16 = (longlong)(int)uVar15 * 0x10;
            if (bVar10) {
              dVar7 = (1.0 - dVar5) * *(double *)(lVar19 + 8 + lVar17) +
                      dVar5 * *(double *)(lVar19 + 8 + lVar16);
              dVar5 = dVar2;
            }
            else {
              dVar7 = dVar3;
              dVar5 = (1.0 - dVar5) * *(double *)(lVar19 + lVar17) +
                      dVar5 * *(double *)(lVar19 + lVar16);
            }
            lVar19 = (longlong)(int)uStack_110;
            uVar13 = (int)uStack_110 + 1;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar13);
            if (uStack_110._4_4_ < uVar13) {
              FUN_14489624a(&local_118,uVar11 & 0xffffffff);
            }
            *(double *)(local_118 + lVar19 * 0x10) = dVar5;
            *(double *)(local_118 + 8 + lVar19 * 0x10) = dVar7;
          }
          uVar15 = uVar14 & 0xffffffff;
          uVar14 = uVar14 + 1;
          lVar17 = lVar17 + 0x10;
          dVar5 = dVar6;
        } while ((longlong)iVar4 != uVar14);
      }
      local_108 = *param_1;
      uStack_100 = param_1[1];
      *param_1 = local_118;
      param_1[1] = uStack_110;
      local_118 = local_108;
      uStack_110 = uStack_100;
      if ((int)param_1[1] == 0) goto LAB_142971090;
      uStack_110 = uStack_100 & 0xffffffff00000000;
      if ((longlong)uStack_100 < 0) {
        FUN_1408652ee(&local_118,0);
      }
      bVar12 = false;
    } while (bVar10);
    uVar13 = local_124 & 1;
    local_124 = 0;
    param_2 = local_120;
    uVar20 = 0xbff00000;
  } while (uVar13 != 0);
LAB_142971090:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142971125 FUN_142971125 body=743 status=ok
// SIG undefined FUN_142971125(void)

void FUN_142971125(double *param_1,undefined8 *param_2,int param_3)

{
  double dVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_118 [32];
  double local_f8 [6];
  double local_c8 [3];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98 [4];
  double local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78[0] = -param_1[7];
  local_78[1] = -param_1[8];
  local_78[2] = -param_1[9];
  local_98[0] = param_1[7];
  local_98[1] = param_1[8];
  local_98[2] = param_1[9];
  if (0 < param_3) {
    iVar3 = 0;
    do {
      local_b0 = (double)CONCAT44(local_b0._4_4_,iVar3);
      (*(code *)*param_2)(local_f8 + 6,param_2[1],&local_b0);
      local_a0 = local_c8[2] - param_1[2];
      local_a8 = local_c8[1] - param_1[1];
      local_b0 = local_c8[0] - *param_1;
      FUN_146bf2028(param_1 + 3,local_f8 + 3,&local_b0);
      lVar2 = 0;
      do {
        dVar1 = local_f8[lVar2 + 3];
        uVar4 = -(ulonglong)(local_78[lVar2] <= dVar1);
        local_78[lVar2] = (double)(~uVar4 & (ulonglong)dVar1 | (ulonglong)local_78[lVar2] & uVar4);
        uVar4 = -(ulonglong)(dVar1 <= local_98[lVar2]);
        local_98[lVar2] = (double)(~uVar4 & (ulonglong)dVar1 | (ulonglong)local_98[lVar2] & uVar4);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 3);
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_3);
  }
  lVar2 = 0;
  do {
    local_f8[lVar2 + 6] = (local_98[lVar2] + local_78[lVar2]) * 0.5;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  FUN_146bed047(&local_b0,param_1 + 3,local_f8 + 6);
  *param_1 = local_b0 + *param_1;
  param_1[1] = local_a8 + param_1[1];
  param_1[2] = local_a0 + param_1[2];
  if (0 < param_3) {
    iVar3 = 0;
    do {
      local_b0 = (double)CONCAT44(local_b0._4_4_,iVar3);
      (*(code *)*param_2)(local_f8 + 3,param_2[1],&local_b0);
      local_a0 = local_f8[5] - param_1[2];
      local_a8 = local_f8[4] - param_1[1];
      local_b0 = local_f8[3] - *param_1;
      FUN_146bf2028(param_1 + 3,local_f8,&local_b0);
      lVar2 = 0;
      do {
        dVar1 = local_f8[lVar2];
        uVar4 = -(ulonglong)(-dVar1 <= dVar1);
        dVar1 = (double)(~uVar4 & (ulonglong)-dVar1 | (ulonglong)dVar1 & uVar4);
        uVar4 = -(ulonglong)(dVar1 <= param_1[lVar2 + 7]);
        param_1[lVar2 + 7] =
             (double)(uVar4 & (ulonglong)param_1[lVar2 + 7] | ~uVar4 & (ulonglong)dVar1);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 3);
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_3);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14297140e FUN_14297140e body=321 status=ok
// SIG undefined FUN_14297140e(void)

undefined8 FUN_14297140e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0x555) {
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142971473;
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
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
    }
  }
LAB_142971473:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar5 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar6 / 0x18)) {
    uVar4 = uVar6 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar5;
}



// FUNCTION 14297154f FUN_14297154f body=36 status=ok
// SIG undefined FUN_14297154f(void)

void FUN_14297154f(undefined8 *param_1)

{
  *param_1 = 0xffefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  return;
}



// FUNCTION 142971574 FUN_142971574 body=363 status=ok
// SIG undefined FUN_142971574(void)

void FUN_142971574(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14297160a;
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
LAB_14297160a:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1429716df FUN_1429716df body=1129 status=ok
// SIG undefined FUN_1429716df(void)

void FUN_1429716df(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  ulonglong uVar14;
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (undefined1 *)0x0;
  uStack_70 = 0;
  local_98 = param_2;
  FUN_1403ed7b2(&local_78,(int)param_1[1],1);
  local_88 = 0;
  uStack_80 = 0;
  iVar13 = (int)param_1[1];
  if (iVar13 < -2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13 / 3);
  }
  if (2 < iVar13) {
    FUN_142971b4a(&local_88);
  }
  uVar17 = 0x100000000;
  *local_78 = 1;
  uVar2 = *(uint *)(*local_98 + 8);
  lVar16 = (longlong)(int)uVar2;
  piVar4 = (int *)*param_1;
  iVar13 = *piVar4;
  if (piVar4[lVar16 * 3] == iVar13) {
    uVar17 = 0;
  }
  else if ((piVar4[lVar16 * 3 + 1] != iVar13) &&
          (uVar17 = 0xff00000000, piVar4[lVar16 * 3 + 2] == iVar13)) {
    uVar17 = 0x200000000;
  }
  cVar1 = *(char *)*param_3;
  lVar16 = (longlong)(int)(uint)uStack_80;
  uVar10 = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < uVar10) {
    uVar14 = uStack_80 & 0xffffffff;
    uStack_80._0_4_ = uVar10;
    FUN_142971c7e(&local_88,uVar14);
    uVar10 = (uint)uStack_80;
  }
  uStack_80._0_4_ = uVar10;
  uVar10 = (uint)uStack_80;
  *(ulonglong *)(local_88 + lVar16 * 8) = uVar17 | uVar2;
  uVar2 = *(uint *)(*local_98 + 4);
  lVar16 = *param_1;
  iVar13 = *(int *)(lVar16 + 8);
  if (*(int *)(lVar16 + (longlong)(int)uVar2 * 0xc) == iVar13) {
    uVar17 = 0;
  }
  else {
    lVar16 = lVar16 + (longlong)(int)uVar2 * 0xc;
    uVar17 = 0x100000000;
    if ((*(int *)(lVar16 + 4) != iVar13) && (uVar17 = 0xff00000000, *(int *)(lVar16 + 8) == iVar13))
    {
      uVar17 = 0x200000000;
    }
  }
  lVar16 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_142971c7e(&local_88,uVar10);
  }
  uVar10 = (uint)uStack_80;
  *(ulonglong *)(local_88 + lVar16 * 8) = uVar17 | uVar2;
  uVar2 = *(uint *)*local_98;
  lVar16 = *param_1;
  iVar13 = *(int *)(lVar16 + 4);
  if (*(int *)(lVar16 + (longlong)(int)uVar2 * 0xc) == iVar13) {
    uVar17 = 0;
  }
  else {
    lVar16 = lVar16 + (longlong)(int)uVar2 * 0xc;
    uVar17 = 0x100000000;
    if ((*(int *)(lVar16 + 4) != iVar13) && (uVar17 = 0xff00000000, *(int *)(lVar16 + 8) == iVar13))
    {
      uVar17 = 0x200000000;
    }
  }
  lVar16 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_142971c7e(&local_88,uVar10);
  }
  *(ulonglong *)(local_88 + lVar16 * 8) = uVar17 | uVar2;
  plVar9 = param_3;
  uVar2 = (uint)uStack_80;
  plVar7 = local_90;
  while (local_90 = plVar9, uVar2 != 0) {
    uVar5 = *(undefined8 *)(local_88 + -8 + (longlong)(int)uVar2 * 8);
    lVar16 = (longlong)(int)uVar5;
    iVar13 = uVar2 - 1;
    uStack_80._4_4_ = (uint)(uStack_80 >> 0x20);
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar13);
    cVar15 = (char)((ulonglong)uVar5 >> 0x20);
    if (*(char *)(*param_3 + lVar16) == cVar1) {
      if (local_78[lVar16] == '\0') {
        local_78[lVar16] = 1;
        sVar11 = (short)(cVar15 + 2) % 3;
        lVar16 = lVar16 * 0xc;
        uVar10 = *(uint *)(*local_98 + lVar16 + (longlong)sVar11 * 4);
        lVar6 = *param_1;
        sVar12 = sVar11 + 1;
        if (1 < sVar11) {
          sVar12 = 0;
        }
        iVar3 = *(int *)(lVar6 + lVar16 + (longlong)sVar12 * 4);
        if (*(int *)(lVar6 + (longlong)(int)uVar10 * 0xc) == iVar3) {
          uVar17 = 0;
        }
        else {
          lVar6 = lVar6 + (longlong)(int)uVar10 * 0xc;
          uVar17 = 0x100000000;
          if ((*(int *)(lVar6 + 4) != iVar3) &&
             (uVar17 = 0xff00000000, *(int *)(lVar6 + 8) == iVar3)) {
            uVar17 = 0x200000000;
          }
        }
        uStack_80._0_4_ = uVar2;
        if (uStack_80._4_4_ < uVar2) {
          FUN_142971c7e(&local_88,iVar13);
        }
        uVar8 = (uint)uStack_80;
        *(ulonglong *)(local_88 + (longlong)iVar13 * 8) = uVar17 | uVar10;
        sVar12 = (short)((uint)(((short)cVar15 + 1) * 0x5556) >> 0x10);
        sVar12 = (short)((short)cVar15 + 1) + (sVar12 - (sVar12 >> 0xf)) * -3;
        uVar2 = *(uint *)(*local_98 + lVar16 + (longlong)sVar12 * 4);
        lVar6 = *param_1;
        sVar11 = sVar12 + 1;
        if (1 < sVar12) {
          sVar11 = 0;
        }
        iVar13 = *(int *)(lVar16 + lVar6 + (longlong)sVar11 * 4);
        if (*(int *)(lVar6 + (longlong)(int)uVar2 * 0xc) == iVar13) {
          uVar17 = 0;
        }
        else {
          lVar6 = lVar6 + (longlong)(int)uVar2 * 0xc;
          uVar17 = 0x100000000;
          if ((*(int *)(lVar6 + 4) != iVar13) &&
             (uVar17 = 0xff00000000, *(int *)(lVar6 + 8) == iVar13)) {
            uVar17 = 0x200000000;
          }
        }
        lVar16 = (longlong)(int)(uint)uStack_80;
        uStack_80._0_4_ = (uint)uStack_80 + 1;
        if (uStack_80._4_4_ < (uint)uStack_80) {
          FUN_142971c7e(&local_88,uVar8);
        }
        *(ulonglong *)(local_88 + lVar16 * 8) = uVar17 | uVar2;
        param_3 = local_90;
      }
    }
    else {
      lVar6 = *param_1;
      iVar13 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar13 + 1U) {
        FUN_1446f48e2(param_4,iVar13);
      }
      *(undefined4 *)(*param_4 + (longlong)iVar13 * 4) =
           *(undefined4 *)(lVar16 * 0xc + lVar6 + (longlong)cVar15 * 4);
    }
    plVar9 = local_90;
    plVar7 = local_90;
    uVar2 = (uint)uStack_80;
  }
  local_90 = plVar7;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142971b4a FUN_142971b4a body=308 status=ok
// SIG undefined FUN_142971b4a(void)

void FUN_142971b4a(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_142971bb0;
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
LAB_142971bb0:
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



// FUNCTION 142971c7e FUN_142971c7e body=346 status=ok
// SIG undefined FUN_142971c7e(void)

void FUN_142971c7e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_142971d10;
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
LAB_142971d10:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 142971e3a FUN_142971e3a body=12 status=ok
// SIG undefined FUN_142971e3a(void)

void FUN_142971e3a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142971e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142971e46 FUN_142971e46 body=29 status=ok
// SIG undefined FUN_142971e46(void)

undefined8 FUN_142971e46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142971e64 FUN_142971e64 body=375 status=ok
// SIG undefined FUN_142971e64(void)

void FUN_142971e64(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  uint local_34 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = **(longlong **)(param_1 + 0x18);
  uVar3 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) + 8 +
           (ulonglong)((param_2 & 0x1ff) << 4));
  uVar1 = (uint)uVar3;
  uVar7 = uVar1 * 3 + 2;
  uVar8 = uVar1 * 3 + 1;
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (uVar3 >> 9 & 0x7fffff) * 8);
  local_40 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
  local_48 = *(undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
  lVar6 = *(longlong *)((*(longlong **)(param_1 + 0x18))[1] + 0x78);
  local_34[0] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar1 * 3 >> 9) * 8) +
                         (ulonglong)(uVar1 * 3 & 0x1ff) * 4);
  local_34[1] = *(undefined4 *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
  local_34[2] = *(undefined4 *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar7 >> 9) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4);
  lVar6 = 0;
  do {
    if (*(int *)((longlong)&local_48 + lVar6 * 4) == param_3) {
      uVar1 = local_34[lVar6];
      if (uVar1 != 0xffffffff) {
        local_48 = *param_4;
        local_40 = *(undefined4 *)(param_4 + 1);
        uVar5 = FUN_146c2d67c(*(longlong *)(param_1 + 8),uVar1,
                              *(undefined4 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) +
                                 (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4),
                              &local_48);
        plVar4 = *(longlong **)(param_1 + 0x10);
        if (plVar4 != (longlong *)0x0) {
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(plVar4,iVar2);
          }
          *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = uVar5;
        }
      }
      break;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142971fdc FUN_142971fdc body=375 status=ok
// SIG undefined FUN_142971fdc(void)

void FUN_142971fdc(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  uint local_34 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = **(longlong **)(param_1 + 0x18);
  uVar3 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) + 8 +
           (ulonglong)((param_2 & 0x1ff) << 4));
  uVar1 = (uint)uVar3;
  uVar7 = uVar1 * 3 + 2;
  uVar8 = uVar1 * 3 + 1;
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x130) + (uVar3 >> 9 & 0x7fffff) * 8);
  local_40 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
  local_48 = *(undefined8 *)(lVar6 + (ulonglong)(uVar1 & 0x1ff) * 0xc);
  lVar6 = *(longlong *)((*(longlong **)(param_1 + 0x18))[1] + 0x78);
  local_34[0] = *(uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar1 * 3 >> 9) * 8) +
                         (ulonglong)(uVar1 * 3 & 0x1ff) * 4);
  local_34[1] = *(undefined4 *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 4);
  local_34[2] = *(undefined4 *)
                 (*(longlong *)(lVar6 + (ulonglong)(uVar7 >> 9) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4);
  lVar6 = 0;
  do {
    if (*(int *)((longlong)&local_48 + lVar6 * 4) == param_3) {
      uVar1 = local_34[lVar6];
      if (uVar1 != 0xffffffff) {
        local_48 = *param_4;
        local_40 = *(undefined4 *)(param_4 + 1);
        uVar5 = FUN_146c30872(*(longlong *)(param_1 + 8),uVar1,
                              *(undefined4 *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) +
                                 (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4),
                              &local_48);
        plVar4 = *(longlong **)(param_1 + 0x10);
        if (plVar4 != (longlong *)0x0) {
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(plVar4,iVar2);
          }
          *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = uVar5;
        }
      }
      break;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142972154 FUN_142972154 body=226 status=ok
// SIG undefined FUN_142972154(void)

undefined8 FUN_142972154(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = (double)*(float *)(param_1[2] + 8);
  lVar1 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  dVar5 = *(double *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0x18) -
          *(double *)(lVar1 + (ulonglong)(param_3 & 0x1ff) * 0x18);
  uVar3 = -(ulonglong)(-dVar5 <= dVar5);
  if ((double)(~uVar3 & (ulonglong)-dVar5 | (ulonglong)dVar5 & uVar3) < dVar4) {
    lVar1 = lVar1 + (ulonglong)(param_3 & 0x1ff) * 0x18;
    lVar2 = lVar2 + (ulonglong)(param_2 & 0x1ff) * 0x18;
    dVar5 = *(double *)(lVar2 + 8) - *(double *)(lVar1 + 8);
    uVar3 = -(ulonglong)(-dVar5 <= dVar5);
    if ((double)(~uVar3 & (ulonglong)-dVar5 | (ulonglong)dVar5 & uVar3) < dVar4) {
      dVar5 = *(double *)(lVar2 + 0x10) - *(double *)(lVar1 + 0x10);
      uVar3 = -(ulonglong)(-dVar5 <= dVar5);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                      (double)(~uVar3 & (ulonglong)-dVar5 | (ulonglong)dVar5 & uVar3) < dVar4);
    }
  }
  return 0;
}



// FUNCTION 142972236 FUN_142972236 body=69 status=ok
// SIG undefined FUN_142972236(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142972236(void)

{
  _DAT_14c992098 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142972278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9920a0,1);
  return;
}



// FUNCTION 14297227c FUN_14297227c body=69 status=ok
// SIG undefined FUN_14297227c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14297227c(void)

{
  _DAT_14c9920b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429722be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9920b8,1);
  return;
}



// FUNCTION 1429722c2 FUN_1429722c2 body=433 status=ok
// SIG undefined FUN_1429722c2(void)

void FUN_1429722c2(longlong *param_1,int param_2,longlong param_3,longlong param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  lVar13 = (longlong)param_5;
  uVar1 = *(uint *)(param_4 + lVar13 * 4);
  lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8);
  uVar7 = (ulonglong)((uVar1 & 0x1ff) << 4);
  uVar4 = *(undefined8 *)(lVar6 + 8 + uVar7);
  iVar8 = (int)((ulonglong)uVar4 >> 0x20);
  iVar10 = (int)uVar4;
  iVar11 = -1;
  if (iVar8 == param_2) {
    iVar11 = iVar10;
  }
  if (iVar10 == param_2) {
    iVar11 = iVar8;
  }
  if (iVar11 < 0) {
LAB_142972378:
    iVar11 = *(int *)param_1[2];
    iVar8 = ((int *)param_1[2])[1];
    uVar7 = (ulonglong)((uVar1 & 0x1ff) << 4);
    iVar10 = *(int *)(lVar6 + 4 + uVar7);
    if ((*(int *)(lVar6 + uVar7) == iVar11) ||
       (bVar14 = iVar10 == iVar11, iVar10 = *(int *)(lVar6 + uVar7), bVar14)) {
      iVar11 = iVar8;
      if (iVar10 < iVar8) {
        iVar11 = iVar10;
      }
      *(int *)(lVar6 + uVar7) = iVar11;
      if (iVar10 < iVar8) {
        iVar10 = iVar8;
      }
      ((int *)(lVar6 + uVar7))[1] = iVar10;
      FUN_146c86f00(lVar3 + 0xb8,*(undefined4 *)param_1[2],uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_142972469;
  }
  lVar12 = (longlong)(int)((longlong *)param_1[1])[1];
  if (lVar12 != 0) {
    lVar9 = 0;
    do {
      if (*(int *)(*(longlong *)param_1[1] + lVar9) == iVar11) goto LAB_142972378;
      lVar9 = lVar9 + 4;
    } while (lVar12 * 4 != lVar9);
  }
  lVar6 = lVar6 + uVar7;
  if (iVar10 == param_2) {
    *(int *)(lVar6 + 8) = iVar8;
LAB_142972404:
    *(undefined4 *)(lVar6 + 0xc) = 0xffffffff;
  }
  else if (iVar8 == param_2) goto LAB_142972404;
  uVar5 = *(undefined4 *)(param_3 + (ulonglong)((param_5 + 1U) % 3) * 4);
  uVar2 = *(undefined4 *)(param_3 + lVar13 * 4);
  local_54 = 0xffffffffffffffff;
  local_4c = 0xffffffff;
  lVar6 = FUN_146c4178c(lVar3 + 0x178,param_2);
  local_68 = 0xffffffff;
  uVar5 = FUN_146c0d3ae(lVar3,uVar2,uVar5,param_2);
  *(undefined4 *)(lVar6 + lVar13 * 4) = uVar5;
LAB_142972469:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142972492 FUN_142972492 body=734 status=ok
// SIG undefined FUN_142972492(void)

void FUN_142972492(longlong *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  dVar2 = (double)param_1[1];
  uVar10 = (ulonglong)(param_3 >> 9);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar10 * 8);
  uVar8 = (ulonglong)(param_3 & 0x1ff);
  uVar6 = (ulonglong)(param_2 >> 9);
  lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar6 * 8);
  uVar9 = (ulonglong)(param_2 & 0x1ff);
  dVar13 = 1.0 - dVar2;
  local_50 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18) * dVar13 +
             *(double *)(lVar4 + 0x10 + uVar8 * 0x18) * dVar2;
  uStack_58 = *(double *)(lVar5 + 8 + uVar9 * 0x18) * dVar13 +
              *(double *)(lVar4 + 8 + uVar8 * 0x18) * dVar2;
  local_60 = dVar13 * *(double *)(lVar5 + uVar9 * 0x18) + dVar2 * *(double *)(lVar4 + uVar8 * 0x18);
  cVar7 = FUN_146bfed03();
  if (cVar7 != '\0') {
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar6 * 8);
    *(double *)(lVar4 + 0x10 + uVar9 * 0x18) = local_50;
    puVar1 = (undefined4 *)(lVar4 + uVar9 * 0x18);
    *puVar1 = (undefined4)local_60;
    puVar1[1] = local_60._4_4_;
    puVar1[2] = (undefined4)uStack_58;
    puVar1[3] = uStack_58._4_4_;
    if (*(char *)(lVar3 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
      UNLOCK();
    }
  }
  if (*(char *)(lVar3 + 0xb0) == '\x01') {
    fVar11 = (float)(double)param_1[1];
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xa0) + uVar10 * 8);
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0xa0) + uVar6 * 8);
    fVar12 = *(float *)(lVar4 + 4 + uVar8 * 8);
    *(float *)(lVar5 + uVar9 * 8) =
         *(float *)(lVar5 + uVar9 * 8) * (1.0 - fVar11) + *(float *)(lVar4 + uVar8 * 8) * fVar11;
    *(float *)(lVar5 + 4 + uVar9 * 8) =
         (1.0 - fVar11) * *(float *)(lVar5 + 4 + uVar9 * 8) + fVar11 * fVar12;
  }
  if (*(char *)(lVar3 + 0x70) != '\x01') goto LAB_1429726c2;
  fVar11 = (float)(double)param_1[1];
  fVar12 = 1.0 - fVar11;
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar6 * 8);
  lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar10 * 8);
  fVar14 = *(float *)(lVar4 + 8 + uVar9 * 0xc) * fVar12 +
           *(float *)(lVar5 + 8 + uVar8 * 0xc) * fVar11;
  fVar15 = *(float *)(lVar4 + uVar9 * 0xc) * fVar12 + *(float *)(lVar5 + uVar8 * 0xc) * fVar11;
  fVar12 = fVar12 * *(float *)(lVar4 + 4 + uVar9 * 0xc) +
           fVar11 * *(float *)(lVar5 + 4 + uVar8 * 0xc);
  fVar16 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar12 * fVar12);
  fVar11 = 1.0 / fVar16;
  if (0.0 < fVar16) {
    fVar14 = fVar14 * fVar11;
    if (fVar16 <= 0.0) goto LAB_14297269f;
LAB_142972693:
    fVar12 = fVar12 * fVar11;
  }
  else {
    fVar14 = 0.0;
    if (0.0 < fVar16) goto LAB_142972693;
LAB_14297269f:
    fVar12 = 0.0;
  }
  *(uint *)(lVar4 + uVar9 * 0xc) = -(uint)(0.0 < fVar16) & (uint)(fVar15 * fVar11);
  *(float *)(lVar4 + 4 + uVar9 * 0xc) = fVar12;
  *(float *)(lVar4 + 8 + uVar9 * 0xc) = fVar14;
LAB_1429726c2:
  if (*(char *)(lVar3 + 0x90) == '\x01') {
    fVar14 = (float)(double)param_1[1];
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x80) + uVar10 * 8);
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x80) + uVar6 * 8);
    fVar15 = 1.0 - fVar14;
    fVar12 = *(float *)(lVar4 + 4 + uVar8 * 0xc);
    fVar11 = *(float *)(lVar4 + 8 + uVar8 * 0xc);
    *(float *)(lVar3 + uVar9 * 0xc) =
         *(float *)(lVar3 + uVar9 * 0xc) * fVar15 + *(float *)(lVar4 + uVar8 * 0xc) * fVar14;
    *(float *)(lVar3 + 4 + uVar9 * 0xc) =
         *(float *)(lVar3 + 4 + uVar9 * 0xc) * fVar15 + fVar12 * fVar14;
    *(float *)(lVar3 + 8 + uVar9 * 0xc) =
         fVar15 * *(float *)(lVar3 + 8 + uVar9 * 0xc) + fVar14 * fVar11;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142972772 FUN_142972772 body=210 status=ok
// SIG undefined FUN_142972772(void)

void FUN_142972772(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  if ((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0) {
    (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
      if (iVar1 < 0x38) {
        FUN_146c16ac6(param_1,param_2);
        goto LAB_14297279f;
      }
    }
    local_28.s.LowPart._0_2_ = 0x100;
    local_28.s.LowPart._2_1_ = *(byte *)((longlong)param_2 + 0x29) & 1;
    FUN_146c16ccd(param_2,&local_28);
    if (local_28.s.LowPart._1_1_ == '\0') {
      FUN_146c16e2e(param_1,param_2,&local_28);
    }
    else {
      FUN_146c1724c(param_1,param_2,&local_28);
    }
  }
LAB_14297279f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142972845 FUN_142972845 body=1113 status=ok
// SIG undefined FUN_142972845(void)

ulonglong FUN_142972845(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  LARGE_INTEGER LVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  LARGE_INTEGER local_a8;
  longlong *local_a0;
  LARGE_INTEGER local_98;
  ulonglong local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  QueryPerformanceCounter(&local_a8);
  LVar3 = local_a8;
  uVar14 = 0xffffffffffffffff;
  if (param_2 != 0x7fffffffffffffff) {
    if ((double)param_2 / 10000000.0 <= 0.0) {
      uVar14 = 0;
    }
    else {
      dVar16 = ((double)param_2 / 10000000.0) / DAT_14c83f418;
      uVar14 = (ulonglong)dVar16;
      uVar14 = (longlong)(dVar16 - 9.223372036854776e+18) & (longlong)uVar14 >> 0x3f | uVar14;
    }
  }
  local_98.s = local_a8.s;
  local_90 = uVar14;
  FUN_146c549a7(param_1);
  FUN_14470f0c8(&local_a8,0);
  plVar1 = local_a0;
  LVar10 = local_a8;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)FUN_146c54a72();
  *puVar6 = UE::Tasks::Private::FTaskBase::vftable;
  puVar6[1] = &DAT_100000002;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)(puVar6 + 4) = 0xffffffff;
  puVar6[6] = 0;
  puVar6[7] = 0x100000000;
  *(undefined1 *)(puVar6 + 8) = 1;
  puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0xe800000000000020;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0x100000000;
  *(undefined2 *)(puVar6 + 0x14) = 0;
  LOCK();
  bVar15 = *(char *)(puVar6 + 8) == '\x01';
  if (bVar15) {
    *(char *)(puVar6 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar15) {
    FUN_14008cdb0(puVar6 + 8);
  }
  *puVar6 = &PTR_FUN_149f3be68;
  if (*(code **)(puVar6[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar6[0xe] + 0x18))(puVar6 + 0xe,puVar6 + 9);
  }
  puVar6[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar6[9] = puVar6;
  puVar6[10] = puVar6;
  lVar8 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  iVar13 = 0;
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar8 + 0x30);
  }
  puVar6[0xf] = uVar7;
  puVar6[0x10] = 0xc80000527a251600;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 1;
  ((LARGE_INTEGER *)(puVar6 + 0x15))->QuadPart = (LONGLONG)LVar10;
  puVar6[0x16] = plVar1;
  *puVar6 = &PTR_FUN_149f3be58;
  LOCK();
  *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) + (int)param_1[1];
  UNLOCK();
  lVar8 = param_1[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar9 = *param_1;
    local_b0 = puVar6 + 5;
    lVar12 = 0;
    iVar13 = 0;
    do {
      LVar10 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar9 + lVar12))->QuadPart;
      if (((longlong *)LVar10.QuadPart == (longlong *)0x0) ||
         (cVar4 = FUN_1456bb142((longlong *)(LVar10.QuadPart + 0x88),puVar6), cVar4 == '\0')) {
        iVar13 = iVar13 + 1;
      }
      else {
        LOCK();
        *(int *)(LVar10.QuadPart + 8) = *(int *)(LVar10.QuadPart + 8) + 1;
        UNLOCK();
        FUN_1456bb1d4(local_b0,LVar10.QuadPart);
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar12);
  }
  LOCK();
  *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) - iVar13;
  UNLOCK();
  local_88.s.LowPart._0_1_ = 1;
  cVar4 = FUN_1447439e4(puVar6);
  uVar11 = CONCAT71((int7)((ulonglong)LVar10 >> 8),1);
  if (cVar4 == '\0') {
    lVar8 = 0xffffffff;
    if (uVar14 != 0xffffffffffffffff) {
      auVar19._8_4_ = (int)(uVar14 >> 0x20);
      auVar19._0_8_ = uVar14;
      auVar19._12_4_ = 0x45300000;
      dVar16 = (((double)CONCAT44(0x43300000,(int)uVar14) - 4503599627370496.0) +
               (auVar19._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
      QueryPerformanceCounter(&local_88);
      lVar8 = CONCAT71(local_88.QuadPart._1_7_,local_88.s.LowPart._0_1_) - (longlong)LVar3;
      auVar18._8_4_ = (int)((ulonglong)lVar8 >> 0x20);
      auVar18._0_8_ = lVar8;
      auVar18._12_4_ = 0x45300000;
      auVar17._8_8_ = 0;
      auVar17._0_8_ =
           (dVar16 - (((double)CONCAT44(0x43300000,(int)lVar8) - 4503599627370496.0) +
                     (auVar18._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) * 10000000.0 + 0.5;
      auVar18 = roundpd(auVar17,auVar17,1);
      lVar9 = ((longlong)auVar18._0_8_ + 9999) / 10000;
      if (0xfffffffe < lVar9) {
        lVar9 = 0xffffffff;
      }
      lVar8 = 0;
      if (0 < lVar9) {
        lVar8 = lVar9;
      }
    }
    uVar5 = (**(code **)(*(longlong *)local_a8 + 0x20))(local_a8.QuadPart,lVar8,0);
    uVar11 = (ulonglong)uVar5;
  }
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar6 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
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
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142972ca0 FUN_142972ca0 body=128 status=ok
// SIG undefined FUN_142972ca0(void)

bool FUN_142972ca0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == *(uint *)(param_2 + 0x38)) {
    if ((int)uVar1 < 1) {
      bVar7 = true;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar5 = param_1;
      }
      lVar3 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar3 = param_2;
      }
      uVar6 = 0;
      do {
        lVar4 = 0;
        lVar2 = 0;
        while (*(short *)(lVar3 + lVar4) != *(short *)(lVar5 + uVar6 * 4)) {
          lVar2 = lVar2 + 0x100000000;
          lVar4 = lVar4 + 4;
          if ((ulonglong)uVar1 * 4 - lVar4 == 0) goto LAB_142972d17;
        }
        bVar7 = *(short *)(lVar5 + 2 + uVar6 * 4) == *(short *)(lVar3 + 2 + (lVar2 >> 0x20) * 4);
      } while ((bVar7) && (uVar6 = uVar6 + 1, uVar6 != uVar1));
    }
  }
  else {
LAB_142972d17:
    bVar7 = false;
  }
  return bVar7;
}



// FUNCTION 142972d20 FUN_142972d20 body=198 status=ok
// SIG undefined FUN_142972d20(void)

void FUN_142972d20(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar1 = *param_1;
  uVar3 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar6 = 0;
  if ((uVar3 != 0) && (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar4 = uVar3;
    }
    do {
      uVar6 = uVar4;
      if (uVar4 == uVar5) break;
      uVar2 = uVar5 >> 9;
      uVar7 = uVar5 & 0x1ff;
      uVar6 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar2] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  do {
    if (uVar6 == uVar3) {
      return;
    }
    FUN_146c2d83e(param_1,uVar6,0);
    uVar4 = uVar6 + 1;
    if ((int)(uVar6 + 1) < (int)uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = uVar6;
    do {
      uVar6 = uVar4;
      if (uVar4 - 1 == uVar5) break;
      uVar6 = uVar5 + 1;
      uVar5 = uVar6;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar1 + 0x28) +
                                           (ulonglong)(uVar6 >> 9) * 8) +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 142972de6 FUN_142972de6 body=198 status=ok
// SIG undefined FUN_142972de6(void)

void FUN_142972de6(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar1 = *param_1;
  uVar3 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar6 = 0;
  if ((uVar3 != 0) && (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar4 = uVar3;
    }
    do {
      uVar6 = uVar4;
      if (uVar4 == uVar5) break;
      uVar2 = uVar5 >> 9;
      uVar7 = uVar5 & 0x1ff;
      uVar6 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar2] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  do {
    if (uVar6 == uVar3) {
      return;
    }
    FUN_146c30a3a(param_1,uVar6,0);
    uVar4 = uVar6 + 1;
    if ((int)(uVar6 + 1) < (int)uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = uVar6;
    do {
      uVar6 = uVar4;
      if (uVar4 - 1 == uVar5) break;
      uVar6 = uVar5 + 1;
      uVar5 = uVar6;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar1 + 0x28) +
                                           (ulonglong)(uVar6 >> 9) * 8) +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 142972eac FUN_142972eac body=195 status=ok
// SIG undefined FUN_142972eac(void)

void FUN_142972eac(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar1 = *param_1;
  uVar3 = *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24);
  uVar6 = 0;
  if ((uVar3 != 0) && (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x28) - 1U))
     ) {
    uVar4 = 1;
    uVar5 = 1;
    if (1 < (int)uVar3) {
      uVar4 = uVar3;
    }
    do {
      uVar6 = uVar4;
      if (uVar4 == uVar5) break;
      uVar2 = uVar5 >> 9;
      uVar7 = uVar5 & 0x1ff;
      uVar6 = uVar5;
      uVar5 = uVar5 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x28))[uVar2] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  do {
    if (uVar6 == uVar3) {
      return;
    }
    FUN_146c33ed2(param_1,uVar6);
    uVar4 = uVar6 + 1;
    if ((int)(uVar6 + 1) < (int)uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = uVar6;
    do {
      uVar6 = uVar4;
      if (uVar4 - 1 == uVar5) break;
      uVar6 = uVar5 + 1;
      uVar5 = uVar6;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(lVar1 + 0x28) +
                                           (ulonglong)(uVar6 >> 9) * 8) +
                                         (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
  } while( true );
}



// FUNCTION 142972f70 FUN_142972f70 body=308 status=ok
// SIG undefined FUN_142972f70(void)

void FUN_142972f70(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = *param_1;
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar9 = (ulonglong)((param_2 & 0x1ff) << 4);
  iVar10 = *(int *)(lVar8 + uVar9);
  uVar1 = *(uint *)(lVar8 + 8 + uVar9);
  iVar2 = *(int *)param_1[1];
  if (iVar10 == iVar2) {
    iVar10 = *(int *)(lVar8 + 4 + uVar9);
  }
  uVar3 = *(uint *)(lVar8 + 0xc + uVar9);
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
  uVar9 = (ulonglong)(uVar1 & 0x1ff);
  iVar4 = *(int *)(lVar8 + uVar9 * 0xc);
  iVar5 = *(int *)(lVar8 + 4 + uVar9 * 0xc);
  if ((((iVar4 == iVar2) && (iVar5 == iVar10)) ||
      ((iVar6 = *(int *)(lVar8 + uVar9 * 0xc + 8), iVar5 == iVar2 && (iVar6 == iVar10)))) ||
     (iVar4 == iVar10 && iVar6 == iVar2)) {
    local_2c = uVar1;
    (**(code **)param_1[2])(((undefined8 *)param_1[2])[1]);
  }
  if (uVar3 != 0xffffffff) {
    iVar2 = *(int *)param_1[1];
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
    uVar9 = (ulonglong)(uVar3 & 0x1ff);
    iVar4 = *(int *)(lVar7 + uVar9 * 0xc);
    iVar5 = *(int *)(lVar7 + 4 + uVar9 * 0xc);
    if (((iVar4 == iVar2) && (iVar5 == iVar10)) ||
       (((iVar6 = *(int *)(lVar7 + uVar9 * 0xc + 8), iVar5 == iVar2 && (iVar6 == iVar10)) ||
        (iVar4 == iVar10 && iVar6 == iVar2)))) {
      local_2c = uVar3;
      (**(code **)param_1[2])(((undefined8 *)param_1[2])[1]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429730d8 FUN_1429730d8 body=29 status=ok
// SIG undefined FUN_1429730d8(void)

undefined8 FUN_1429730d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429730f6 FUN_1429730f6 body=8 status=ok
// SIG undefined FUN_1429730f6(void)

void FUN_1429730f6(undefined8 *param_1,byte *param_2)

{
  *(byte *)*param_1 = *(byte *)*param_1 & *param_2;
  return;
}



// FUNCTION 142973128 FUN_142973128 body=29 status=ok
// SIG undefined FUN_142973128(void)

undefined8 FUN_142973128(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142973178 FUN_142973178 body=29 status=ok
// SIG undefined FUN_142973178(void)

undefined8 FUN_142973178(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142973196 FUN_142973196 body=236 status=ok
// SIG undefined FUN_142973196(void)

void FUN_142973196(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar7 = *param_1;
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar10 = (ulonglong)((param_2 & 0x1ff) << 4);
  iVar9 = *(int *)(lVar8 + uVar10);
  uVar1 = *(uint *)(lVar8 + 8 + uVar10);
  uVar2 = *(uint *)(lVar8 + 0xc + uVar10);
  iVar3 = *(int *)param_1[1];
  if (iVar9 == iVar3) {
    iVar9 = *(int *)(lVar8 + 4 + uVar10);
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
  uVar10 = (ulonglong)(uVar1 & 0x1ff);
  iVar4 = *(int *)(lVar8 + uVar10 * 0xc);
  iVar5 = *(int *)(lVar8 + 4 + uVar10 * 0xc);
  if ((((iVar4 == iVar3) && (iVar5 == iVar9)) ||
      ((iVar6 = *(int *)(lVar8 + uVar10 * 0xc + 8), iVar5 == iVar3 && (iVar6 == iVar9)))) ||
     (iVar4 == iVar9 && iVar6 == iVar3)) {
    *(int *)param_1[2] = *(int *)param_1[2] + 1;
  }
  if (uVar2 != 0xffffffff) {
    iVar3 = *(int *)param_1[1];
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
    uVar10 = (ulonglong)(uVar2 & 0x1ff);
    iVar4 = *(int *)(lVar7 + uVar10 * 0xc);
    iVar5 = *(int *)(lVar7 + 4 + uVar10 * 0xc);
    if (((iVar4 == iVar3) && (iVar5 == iVar9)) ||
       (((iVar6 = *(int *)(lVar7 + uVar10 * 0xc + 8), iVar5 == iVar3 && (iVar6 == iVar9)) ||
        (iVar4 == iVar9 && iVar6 == iVar3)))) {
      *(int *)param_1[2] = *(int *)param_1[2] + 1;
    }
  }
  return;
}



// FUNCTION 142973282 FUN_142973282 body=319 status=ok
// SIG undefined FUN_142973282(void)

void FUN_142973282(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  
  lVar7 = *param_1;
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar10 = (ulonglong)((param_2 & 0x1ff) << 4);
  iVar11 = *(int *)(lVar8 + uVar10);
  uVar1 = *(uint *)(lVar8 + 8 + uVar10);
  iVar2 = *(int *)param_1[1];
  if (iVar11 == iVar2) {
    iVar11 = *(int *)(lVar8 + 4 + uVar10);
  }
  uVar3 = *(uint *)(lVar8 + 0xc + uVar10);
  lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
  uVar10 = (ulonglong)(uVar1 & 0x1ff);
  iVar4 = *(int *)(lVar8 + uVar10 * 0xc);
  iVar5 = *(int *)(lVar8 + 4 + uVar10 * 0xc);
  if ((((iVar4 == iVar2) && (iVar5 == iVar11)) ||
      ((iVar6 = *(int *)(lVar8 + uVar10 * 0xc + 8), iVar5 == iVar2 && (iVar6 == iVar11)))) ||
     (iVar4 == iVar11 && iVar6 == iVar2)) {
    plVar9 = (longlong *)param_1[2];
    iVar2 = (int)plVar9[1];
    *(uint *)(plVar9 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar9 + 0xc) < iVar2 + 1U) {
      FUN_1446f48e2(plVar9,iVar2);
    }
    *(uint *)(*plVar9 + (longlong)iVar2 * 4) = uVar1;
  }
  if (uVar3 != 0xffffffff) {
    iVar2 = *(int *)param_1[1];
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
    uVar10 = (ulonglong)(uVar3 & 0x1ff);
    iVar4 = *(int *)(lVar7 + uVar10 * 0xc);
    iVar5 = *(int *)(lVar7 + 4 + uVar10 * 0xc);
    if (((iVar4 == iVar2) && (iVar5 == iVar11)) ||
       (((iVar6 = *(int *)(lVar7 + uVar10 * 0xc + 8), iVar5 == iVar2 && (iVar6 == iVar11)) ||
        (iVar4 == iVar11 && iVar6 == iVar2)))) {
      plVar9 = (longlong *)param_1[2];
      iVar11 = (int)plVar9[1];
      *(uint *)(plVar9 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar9 + 0xc) < iVar11 + 1U) {
        FUN_1446f48e2(plVar9,iVar11);
      }
      *(uint *)(*plVar9 + (longlong)iVar11 * 4) = uVar3;
    }
  }
  return;
}



// FUNCTION 1429733c2 FUN_1429733c2 body=126 status=ok
// SIG undefined FUN_1429733c2(void)

void FUN_1429733c2(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
           (ulonglong)((param_2 & 0x1ff) << 4));
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  iStack_1c = puVar1[3];
  FUN_1449e3bb0(param_1[1],&uStack_20);
  if (iStack_1c != -1) {
    FUN_1449e3bb0(param_1[1],&iStack_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142973442 FUN_142973442 body=431 status=ok
// SIG undefined FUN_142973442(void)

void FUN_142973442(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  lVar1 = *param_1;
  uVar13 = 0xffffffff;
  uVar14 = 0xffefffff;
  uVar19 = 0xffffffff;
  uVar20 = 0x7fefffff;
  iVar4 = 0;
  uVar15 = uVar13;
  uVar16 = uVar14;
  uVar17 = uVar13;
  uVar18 = uVar14;
  uVar21 = uVar19;
  uVar22 = uVar20;
  uVar23 = uVar19;
  uVar24 = uVar20;
  do {
    uVar5 = *param_2 * 10000 + iVar4;
    if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24)))
    {
      uVar6 = (ulonglong)(uVar5 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar1 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                             uVar6 * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        dVar7 = *(double *)(lVar2 + uVar6 * 0x18);
        dVar8 = *(double *)(lVar2 + 8 + uVar6 * 0x18);
        dVar9 = dVar7;
        if ((double)CONCAT44(uVar24,uVar23) <= dVar7) {
          dVar9 = (double)CONCAT44(uVar24,uVar23);
        }
        if (dVar7 <= (double)CONCAT44(uVar18,uVar17)) {
          dVar7 = (double)CONCAT44(uVar18,uVar17);
        }
        dVar10 = dVar8;
        if ((double)CONCAT44(uVar22,uVar21) <= dVar8) {
          dVar10 = (double)CONCAT44(uVar22,uVar21);
        }
        if (dVar8 <= (double)CONCAT44(uVar16,uVar15)) {
          dVar8 = (double)CONCAT44(uVar16,uVar15);
        }
        dVar11 = *(double *)(lVar2 + 0x10 + uVar6 * 0x18);
        dVar12 = dVar11;
        if ((double)CONCAT44(uVar20,uVar19) <= dVar11) {
          dVar12 = (double)CONCAT44(uVar20,uVar19);
        }
        if (dVar11 <= (double)CONCAT44(uVar14,uVar13)) {
          dVar11 = (double)CONCAT44(uVar14,uVar13);
        }
        uVar13 = SUB84(dVar11,0);
        uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
        uVar15 = SUB84(dVar8,0);
        uVar16 = (undefined4)((ulonglong)dVar8 >> 0x20);
        uVar17 = SUB84(dVar7,0);
        uVar18 = (undefined4)((ulonglong)dVar7 >> 0x20);
        uVar19 = SUB84(dVar12,0);
        uVar20 = (undefined4)((ulonglong)dVar12 >> 0x20);
        uVar21 = SUB84(dVar10,0);
        uVar22 = (undefined4)((ulonglong)dVar10 >> 0x20);
        uVar23 = SUB84(dVar9,0);
        uVar24 = (undefined4)((ulonglong)dVar9 >> 0x20);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 10000);
  EnterCriticalSection((LPCRITICAL_SECTION)param_1[1]);
  pdVar3 = (double *)param_1[2];
  dVar7 = *pdVar3;
  dVar8 = pdVar3[1];
  if ((double)CONCAT44(uVar24,uVar23) <= dVar7) {
    dVar7 = (double)CONCAT44(uVar24,uVar23);
  }
  *pdVar3 = dVar7;
  if ((double)CONCAT44(uVar22,uVar21) <= dVar8) {
    dVar8 = (double)CONCAT44(uVar22,uVar21);
  }
  pdVar3[1] = dVar8;
  dVar7 = pdVar3[2];
  if ((double)CONCAT44(uVar20,uVar19) <= dVar7) {
    dVar7 = (double)CONCAT44(uVar20,uVar19);
  }
  pdVar3[2] = dVar7;
  dVar7 = pdVar3[3];
  if (dVar7 <= (double)CONCAT44(uVar18,uVar17)) {
    dVar7 = (double)CONCAT44(uVar18,uVar17);
  }
  pdVar3[3] = dVar7;
  dVar7 = pdVar3[4];
  if (dVar7 <= (double)CONCAT44(uVar16,uVar15)) {
    dVar7 = (double)CONCAT44(uVar16,uVar15);
  }
  pdVar3[4] = dVar7;
  dVar7 = pdVar3[5];
  if (dVar7 <= (double)CONCAT44(uVar14,uVar13)) {
    dVar7 = (double)CONCAT44(uVar14,uVar13);
  }
  pdVar3[5] = dVar7;
                    /* WARNING: Could not recover jumptable at 0x0001429735ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1[1]);
  return;
}



// FUNCTION 1429735f2 FUN_1429735f2 body=108 status=ok
// SIG undefined FUN_1429735f2(void)

void FUN_1429735f2(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_146c061e0(*(undefined8 *)param_1[1]);
  if (uVar1 == 0xffffffff) {
    FUN_146c0d3ae(*(undefined8 *)param_1[2],param_2,param_3,param_4,0xffffffff);
  }
  else {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(*param_1 + 8) + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
     (ulonglong)((uVar1 & 0x1ff) << 4)) = param_4;
  }
  return;
}



// FUNCTION 14297365e FUN_14297365e body=108 status=ok
// SIG undefined FUN_14297365e(void)

void FUN_14297365e(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_146c061e0(*(undefined8 *)param_1[1]);
  if (uVar1 == 0xffffffff) {
    FUN_146c0d3ae(*(undefined8 *)param_1[2],param_2,param_3,param_4,0xffffffff);
  }
  else {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(*param_1 + 8) + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
     (ulonglong)((uVar1 & 0x1ff) << 4)) = param_4;
  }
  return;
}



// FUNCTION 1429736ca FUN_1429736ca body=547 status=ok
// SIG undefined FUN_1429736ca(void)

longlong * FUN_1429736ca(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 1429738fa FUN_1429738fa body=110 status=ok
// SIG undefined FUN_1429738fa(void)

undefined8 * FUN_1429738fa(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142973968 FUN_142973968 body=547 status=ok
// SIG undefined FUN_142973968(void)

longlong * FUN_142973968(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142973b98 FUN_142973b98 body=110 status=ok
// SIG undefined FUN_142973b98(void)

undefined8 * FUN_142973b98(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142973c06 FUN_142973c06 body=547 status=ok
// SIG undefined FUN_142973c06(void)

longlong * FUN_142973c06(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142973e36 FUN_142973e36 body=110 status=ok
// SIG undefined FUN_142973e36(void)

undefined8 * FUN_142973e36(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142973ea4 FUN_142973ea4 body=304 status=ok
// SIG undefined FUN_142973ea4(void)

undefined1 (*) [16] FUN_142973ea4(undefined1 (*param_1) [16],longlong *param_2,uint *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + (ulonglong)(*param_3 >> 9) * 8);
  uVar9 = (ulonglong)(*param_3 & 0x1ff);
  pdVar1 = (double *)(lVar3 + uVar9 * 0x18);
  dVar11 = *pdVar1 * (double)param_2[10];
  dVar12 = pdVar1[1] * (double)param_2[0xb];
  dVar10 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18) * (double)param_2[0xc];
  dVar6 = (double)param_2[4];
  dVar2 = (double)param_2[5];
  dVar7 = (double)param_2[2];
  dVar8 = (double)param_2[3];
  dVar13 = dVar12 * dVar7 - dVar11 * dVar8;
  dVar14 = dVar10 * dVar8 - dVar12 * dVar6;
  dVar15 = dVar11 * dVar6 - dVar7 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar5 = (dVar6 * dVar14 - dVar7 * dVar13) + (double)param_2[5] * dVar15 + dVar12 +
          (double)param_2[7];
  dVar12 = (double)param_2[8];
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (dVar13 * dVar8 - dVar15 * dVar6) + dVar2 * dVar14 + dVar11 + (double)param_2[6];
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *param_1 = auVar4;
  *(double *)param_1[1] = dVar13 * dVar2 + dVar10 + (dVar15 * dVar7 - dVar14 * dVar8) + dVar12;
  return param_1;
}



// FUNCTION 142973fd4 FUN_142973fd4 body=71 status=ok
// SIG undefined FUN_142973fd4(void)

void FUN_142973fd4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_149f3c250;
  puVar3 = (undefined8 *)(param_1 + 0x10);
  puVar1 = puVar1 + 2;
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}



// FUNCTION 142974022 FUN_142974022 body=29 status=ok
// SIG undefined FUN_142974022(void)

void FUN_142974022(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142974040 FUN_142974040 body=29 status=ok
// SIG undefined FUN_142974040(void)

undefined8 FUN_142974040(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429740ca FUN_1429740ca body=29 status=ok
// SIG undefined FUN_1429740ca(void)

undefined8 FUN_1429740ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14297414c FUN_14297414c body=29 status=ok
// SIG undefined FUN_14297414c(void)

undefined8 FUN_14297414c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429741a8 FUN_1429741a8 body=29 status=ok
// SIG undefined FUN_1429741a8(void)

undefined8 FUN_1429741a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429741fe FUN_1429741fe body=29 status=ok
// SIG undefined FUN_1429741fe(void)

undefined8 FUN_1429741fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142974250 FUN_142974250 body=29 status=ok
// SIG undefined FUN_142974250(void)

undefined8 FUN_142974250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429742a0 FUN_1429742a0 body=29 status=ok
// SIG undefined FUN_1429742a0(void)

undefined8 FUN_1429742a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429742f8 FUN_1429742f8 body=29 status=ok
// SIG undefined FUN_1429742f8(void)

undefined8 FUN_1429742f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142974376 FUN_142974376 body=29 status=ok
// SIG undefined FUN_142974376(void)

undefined8 FUN_142974376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429743f2 FUN_1429743f2 body=29 status=ok
// SIG undefined FUN_1429743f2(void)

undefined8 FUN_1429743f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142974410 FUN_142974410 body=146 status=ok
// SIG undefined FUN_142974410(void)

void FUN_142974410(undefined8 *param_1,uint *param_2)

{
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)*param_1 + 0x1c0) + (ulonglong)(*param_2 >> 9) * 8) + 8
              + (ulonglong)((*param_2 & 0x1ff) << 4));
  FUN_1447cbafe(param_1[1],local_24,&local_20,0);
  if (local_20._4_4_ != -1) {
    FUN_1447cbafe(param_1[1],local_24,(longlong)&local_20 + 4,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429744a4 FUN_1429744a4 body=161 status=ok
// SIG undefined FUN_1429744a4(void)

void FUN_1429744a4(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  if (-1 < (int)uVar2) {
    param_1 = (longlong *)*param_1;
    lVar3 = *param_1;
    if (((int)uVar2 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      FUN_146c13dec(lVar3,&local_38,uVar2);
      lVar3 = param_1[1];
      *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar2 * 0x18) = local_28;
      puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2 * 0x18);
      *puVar1 = local_38;
      puVar1[1] = uStack_34;
      puVar1[2] = uStack_30;
      puVar1[3] = uStack_2c;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142974546 FUN_142974546 body=672 status=ok
// SIG undefined FUN_142974546(void)

void FUN_142974546(longlong *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  float *pfVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  longlong local_78;
  undefined1 **local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = *param_2;
  if ((-1 < (int)uVar4) &&
     (lVar5 = *param_1, (int)uVar4 < *(int *)(lVar5 + 0x20) * 0x200 + *(int *)(lVar5 + 0x24))) {
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar4 >> 9) * 8)
                           + (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_b8 = &local_98;
      local_88 = DAT_14c8464f0;
      local_98 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_90 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_a0 = &local_b8;
      local_70 = &local_a8;
      local_a8 = &LAB_1429747e8;
      local_b0 = lVar5;
      local_78 = lVar5;
      local_68 = uVar4;
      FUN_146c58f20(lVar5 + 0xb8,uVar4);
      dVar10 = SQRT(local_88 * local_88 + local_98 * local_98 + uStack_90 * uStack_90);
      dVar9 = 1.0 / dVar10;
      if (0.0 < dVar10) {
        local_98 = local_98 * dVar9;
        uStack_90 = uStack_90 * dVar9;
      }
      else {
        local_98 = 0.0;
        uStack_90 = 0.0;
      }
      local_88 = (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(local_88 * dVar9));
      dVar9 = *(double *)param_1[2];
      if (*(char *)(*param_1 + 0x70) == '\x01') {
        pfVar8 = (float *)((ulonglong)((uVar4 & 0x1ff) * 0xc) +
                          *(longlong *)
                           (*(longlong *)(*param_1 + 0x60) + (ulonglong)(uVar4 >> 9) * 8));
      }
      else {
        pfVar8 = (float *)&DAT_14c846370;
      }
      fVar1 = pfVar8[2];
      fVar2 = pfVar8[1];
      dVar10 = 1.0 - dVar9;
      lVar5 = *(longlong *)param_1[1];
      lVar7 = (ulonglong)uVar4 * 0x18;
      *(double *)(lVar5 + lVar7) = dVar10 * (double)*pfVar8 + local_98 * dVar9;
      *(double *)(lVar5 + 8 + lVar7) = (double)fVar2 * dVar10 + uStack_90 * dVar9;
      *(double *)(lVar5 + 0x10 + lVar7) = (double)fVar1 * dVar10 + local_88 * dVar9;
      lVar5 = *(longlong *)param_1[1];
      dVar9 = *(double *)(lVar5 + lVar7);
      dVar10 = *(double *)(lVar5 + 8 + lVar7);
      dVar3 = *(double *)(lVar5 + 0x10 + lVar7);
      dVar11 = SQRT(dVar3 * dVar3 + dVar9 * dVar9 + dVar10 * dVar10);
      dVar6 = 1.0 / dVar11;
      if (0.0 < dVar11) {
        dVar9 = dVar9 * dVar6;
        dVar10 = dVar10 * dVar6;
      }
      else {
        dVar9 = 0.0;
        dVar10 = 0.0;
      }
      *(double *)(lVar5 + lVar7) = dVar9;
      *(double *)(lVar5 + 8 + lVar7) = dVar10;
      *(ulonglong *)(lVar5 + 0x10 + lVar7) = -(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar3 * dVar6)
      ;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142974848 FUN_142974848 body=167 status=ok
// SIG undefined FUN_142974848(void)

void FUN_142974848(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(*(longlong *)*param_1 + (longlong)*param_2 * 4);
  local_38 = *(undefined1 *)param_1[3];
  FUN_146c393d4(&local_30,param_1[1],uVar1,*(undefined1 *)param_1[2]);
  if (*(char *)(param_1[1] + 0x70) == '\x01') {
    lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x60) + (ulonglong)(uVar1 >> 9) * 8);
    uVar3 = (ulonglong)(uVar1 & 0x1ff);
    *(float *)(lVar2 + uVar3 * 0xc) = (float)local_30;
    *(float *)(lVar2 + 4 + uVar3 * 0xc) = (float)local_28;
    *(float *)(lVar2 + 8 + uVar3 * 0xc) = (float)local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429748f0 FUN_1429748f0 body=263 status=ok
// SIG undefined FUN_1429748f0(void)

void FUN_1429748f0(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  float local_44 [3];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(*(longlong *)*param_1 + (longlong)*param_2 * 4);
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)param_1[1],
      (int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_50 = *(undefined1 *)param_1[4];
    local_58 = *(undefined1 *)param_1[3];
    FUN_146c39670(&local_38,param_1[2],lVar2,uVar1);
    lVar2 = *(longlong *)param_1[1];
    local_44[0] = (float)local_38;
    local_44[1] = (float)local_30;
    local_44[2] = (float)local_28;
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
                (ulonglong)(uVar4 & 0x1ff) * 4) = local_44[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429749f8 FUN_1429749f8 body=386 status=ok
// SIG undefined FUN_1429749f8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1429749f8(longlong *param_1,uint *param_2)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  double adStack_a0 [5];
  double local_78;
  undefined1 local_70 [24];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *param_2;
  local_a8 = local_70;
  FUN_146c1477c(*param_1,uVar3,&local_58,&local_78);
  cVar2 = *(char *)param_1[1];
  adStack_a0[1] = DAT_14c846510;
  adStack_a0[2] = DAT_14c846518;
  adStack_a0[3] = DAT_14c846520;
  if (*(char *)param_1[2] == '\x01') {
    FUN_146c1544a(*param_1,adStack_a0 + 1,uVar3);
  }
  if (cVar2 != '\0') {
    adStack_a0[1] = adStack_a0[1] * local_78;
    adStack_a0[2] = adStack_a0[2] * local_78;
    adStack_a0[3] = local_78 * adStack_a0[3];
  }
  lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
  uVar8 = (ulonglong)(uVar3 & 0x1ff);
  iVar4 = *(int *)param_1[3];
  if (*(int *)(lVar5 + uVar8 * 0xc) == iVar4) {
    lVar7 = 0;
  }
  else {
    lVar7 = 1;
    if (*(int *)(lVar5 + uVar8 * 0xc + 4) != iVar4) {
      lVar7 = (ulonglong)(*(int *)(lVar5 + 8 + uVar8 * 0xc) == iVar4) * 3 + -1;
    }
  }
  dVar1 = adStack_a0[lVar7 + 1];
  pdVar6 = (double *)param_1[4];
  *pdVar6 = dVar1 * local_58 + *pdVar6;
  pdVar6[1] = local_50 * dVar1 + pdVar6[1];
  pdVar6[2] = local_48 * dVar1 + pdVar6[2];
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142974b7c FUN_142974b7c body=415 status=ok
// SIG undefined FUN_142974b7c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142974b7c(longlong *param_1,uint *param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  double adStack_a0 [5];
  double local_78;
  undefined1 local_70 [24];
  uint local_58;
  undefined4 uStack_54;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *param_2;
  local_58 = uVar2;
  cVar6 = (**(code **)*param_1)(((undefined8 *)*param_1)[1]);
  if (cVar6 != '\0') {
    local_a8 = local_70;
    FUN_146c1477c(param_1[1],uVar2,&local_58,&local_78);
    cVar6 = *(char *)param_1[2];
    adStack_a0[1] = DAT_14c846510;
    adStack_a0[2] = DAT_14c846518;
    adStack_a0[3] = DAT_14c846520;
    if (*(char *)param_1[3] == '\x01') {
      FUN_146c1544a(param_1[1],adStack_a0 + 1,uVar2);
    }
    if (cVar6 != '\0') {
      adStack_a0[1] = adStack_a0[1] * local_78;
      adStack_a0[2] = adStack_a0[2] * local_78;
      adStack_a0[3] = local_78 * adStack_a0[3];
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
    uVar8 = (ulonglong)(uVar2 & 0x1ff);
    iVar3 = *(int *)param_1[4];
    if (*(int *)(lVar4 + uVar8 * 0xc) == iVar3) {
      lVar7 = 0;
    }
    else {
      lVar7 = 1;
      if (*(int *)(lVar4 + uVar8 * 0xc + 4) != iVar3) {
        lVar7 = (ulonglong)(*(int *)(lVar4 + 8 + uVar8 * 0xc) == iVar3) * 3 + -1;
      }
    }
    dVar1 = adStack_a0[lVar7 + 1];
    pdVar5 = (double *)param_1[5];
    *pdVar5 = dVar1 * (double)CONCAT44(uStack_54,local_58) + *pdVar5;
    pdVar5[1] = local_50 * dVar1 + pdVar5[1];
    pdVar5[2] = local_48 * dVar1 + pdVar5[2];
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142974d1c FUN_142974d1c body=533 status=ok
// SIG undefined FUN_142974d1c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142974d1c(undefined8 *param_1,int *param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  double adStack_b0 [5];
  double local_88;
  undefined1 local_80 [24];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = *param_2;
  iVar4 = *(int *)param_1[1];
  uVar7 = iVar3 * 3;
  lVar5 = *(longlong *)(*(longlong *)*param_1 + 0x78);
  if ((*(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4)
       != iVar4) &&
     (*(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
              (ulonglong)(uVar7 + 1 & 0x1ff) * 4) != iVar4)) {
    if (*(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                (ulonglong)(uVar7 + 2 & 0x1ff) * 4) != iVar4) goto LAB_142974db1;
  }
  local_b8 = local_80;
  FUN_146c1477c(param_1[2],iVar3,&local_68,&local_88);
  cVar2 = *(char *)param_1[3];
  adStack_b0[1] = DAT_14c846510;
  adStack_b0[2] = DAT_14c846518;
  adStack_b0[3] = DAT_14c846520;
  if (*(char *)param_1[4] == '\x01') {
    FUN_146c1544a(param_1[2],adStack_b0 + 1,iVar3);
  }
  if (cVar2 != '\0') {
    adStack_b0[1] = adStack_b0[1] * local_88;
    adStack_b0[2] = adStack_b0[2] * local_88;
    adStack_b0[3] = local_88 * adStack_b0[3];
  }
  lVar5 = *(longlong *)(*(longlong *)*param_1 + 0x78);
  iVar3 = *(int *)param_1[1];
  if (*(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4)
      == iVar3) {
    lVar8 = 0;
  }
  else {
    lVar8 = 1;
    if (*(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                (ulonglong)(uVar7 + 1 & 0x1ff) * 4) != iVar3) {
      lVar8 = (ulonglong)
              (*(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                       (ulonglong)(uVar7 + 2 & 0x1ff) * 4) == iVar3) * 3 + -1;
    }
  }
  dVar1 = adStack_b0[lVar8 + 1];
  pdVar6 = (double *)param_1[5];
  *pdVar6 = dVar1 * local_68 + *pdVar6;
  pdVar6[1] = local_60 * dVar1 + pdVar6[1];
  pdVar6[2] = local_58 * dVar1 + pdVar6[2];
  *(int *)param_1[6] = *(int *)param_1[6] + 1;
LAB_142974db1:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142974f32 FUN_142974f32 body=49 status=ok
// SIG undefined FUN_142974f32(void)

bool FUN_142974f32(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_4;
  iVar2 = FUN_146bc96d4(*param_1,*param_3);
  iVar3 = FUN_146bc96d4(*param_1,uVar1);
  return iVar2 == iVar3;
}



// FUNCTION 142974fb9 FUN_142974fb9 body=840 status=ok
// SIG undefined FUN_142974fb9(void)

void FUN_142974fb9(double *param_1,float *param_2,double *param_3,double *param_4,double *param_5,
                  undefined8 *param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar2 = (double)param_2[3] - (double)param_2[1];
  dVar11 = (double)param_2[2] - (double)*param_2;
  dVar5 = (double)param_2[5] - (double)param_2[1];
  dVar1 = (double)param_2[4] - (double)*param_2;
  dVar14 = param_1[5] - param_1[2];
  dVar3 = param_1[4] - param_1[1];
  dVar13 = param_1[3] - *param_1;
  dVar6 = param_1[8] - param_1[2];
  dVar8 = param_1[7] - param_1[1];
  dVar10 = param_1[6] - *param_1;
  dVar12 = dVar5 * dVar14 - dVar2 * dVar6;
  dVar7 = dVar5 * dVar3 - dVar2 * dVar8;
  dVar9 = dVar5 * dVar13 - dVar2 * dVar10;
  dVar6 = dVar6 * dVar11 - dVar14 * dVar1;
  dVar8 = dVar8 * dVar11 - dVar3 * dVar1;
  dVar10 = dVar10 * dVar11 - dVar13 * dVar1;
  dVar5 = dVar5 * dVar11 - dVar1 * dVar2;
  uVar4 = -(ulonglong)(-dVar5 <= dVar5);
  dVar11 = (double)(~uVar4 & (ulonglong)-dVar5 | uVar4 & (ulonglong)dVar5);
  dVar1 = SQRT(dVar12 * dVar12 + dVar9 * dVar9 + dVar7 * dVar7);
  dVar2 = SQRT(dVar6 * dVar6 + dVar10 * dVar10 + dVar8 * dVar8);
  dVar13 = DAT_14c8464f0;
  dVar14 = DAT_14c8464e8;
  dVar3 = DAT_14c8464e0;
  if (0.0 < dVar1) {
    dVar3 = 1.0 / dVar1;
    dVar13 = dVar12 * dVar3;
    dVar14 = dVar7 * dVar3;
    dVar3 = dVar9 * dVar3;
  }
  *param_3 = dVar3;
  param_3[1] = dVar14;
  param_3[2] = dVar13;
  dVar7 = DAT_14c8464f0;
  dVar9 = DAT_14c8464e8;
  dVar14 = DAT_14c8464e0;
  if (0.0 < dVar2) {
    dVar14 = 1.0 / dVar2;
    dVar7 = dVar6 * dVar14;
    dVar9 = dVar8 * dVar14;
    dVar14 = dVar10 * dVar14;
  }
  *param_4 = dVar14;
  param_4[1] = dVar9;
  param_4[2] = dVar7;
  *param_5 = dVar1 / dVar11;
  param_5[1] = dVar2 / dVar11;
  if (0.0 <= dVar5) {
    *param_6 = 0x3ff0000000000000;
  }
  else {
    *param_6 = 0xbff0000000000000;
    *param_3 = -*param_3;
    param_3[1] = -param_3[1];
    param_3[2] = -param_3[2];
    *param_4 = -*param_4;
    param_4[1] = -param_4[1];
    param_4[2] = -param_4[2];
  }
  *(bool *)param_7 = dVar11 < 1e-08;
  return;
}



// FUNCTION 142975302 FUN_142975302 body=233 status=ok
// SIG undefined FUN_142975302(void)

void FUN_142975302(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) &&
     (lVar2 = *param_1, (int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) {
    uVar7 = (ulonglong)(uVar1 >> 9);
    uVar6 = (ulonglong)(uVar1 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + uVar7 * 8) + uVar6 * 2) - 1U
                ) < 0xfffe) {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
      pdVar4 = (double *)param_1[1];
      local_28 = *(double *)(lVar3 + 0x10 + uVar6 * 0x18) + pdVar4[2];
      dStack_30 = *(double *)(lVar3 + 8 + uVar6 * 0x18) + pdVar4[1];
      local_38 = *(double *)(lVar3 + uVar6 * 0x18) + *pdVar4;
      cVar5 = FUN_146bfed03();
      if (cVar5 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
        *(double *)(lVar3 + 0x10 + uVar6 * 0x18) = local_28;
        pdVar4 = (double *)(lVar3 + uVar6 * 0x18);
        *pdVar4 = local_38;
        pdVar4[1] = dStack_30;
        if (*(char *)(lVar2 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar2 + 0x214) = *(int *)(lVar2 + 0x214) + 1;
          UNLOCK();
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



// FUNCTION 1429753ec FUN_1429753ec body=474 status=ok
// SIG undefined FUN_1429753ec(void)

void FUN_1429753ec(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  double *pdVar6;
  float *pfVar7;
  char cVar8;
  ulonglong uVar9;
  float *pfVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar11 = (ulonglong)(uVar2 >> 9);
    uVar9 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar11 * 8) + uVar9 * 2) -
                1U) < 0xfffe) {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar11 * 8);
      pdVar5 = (double *)param_1[1];
      pdVar6 = (double *)param_1[2];
      local_30 = (*(double *)(lVar4 + 0x10 + uVar9 * 0x18) - pdVar5[2]) * pdVar6[2] + pdVar5[2];
      uStack_38 = (*(double *)(lVar4 + 8 + uVar9 * 0x18) - pdVar5[1]) * pdVar6[1] + pdVar5[1];
      local_40 = (*(double *)(lVar4 + uVar9 * 0x18) - *pdVar5) * *pdVar6 + *pdVar5;
      cVar8 = FUN_146bfed03();
      if (cVar8 != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar11 * 8);
        *(double *)(lVar4 + 0x10 + uVar9 * 0x18) = local_30;
        puVar1 = (undefined4 *)(lVar4 + uVar9 * 0x18);
        *puVar1 = (undefined4)local_40;
        puVar1[1] = local_40._4_4_;
        puVar1[2] = (undefined4)uStack_38;
        puVar1[3] = uStack_38._4_4_;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
      if ((*(char *)param_1[3] == '\x01') && (*(char *)param_1[4] == '\x01')) {
        lVar3 = *param_1;
        if (*(char *)(lVar3 + 0x70) == '\x01') {
          pfVar10 = (float *)((ulonglong)((uVar2 & 0x1ff) * 0xc) +
                             *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar11 * 8));
        }
        else {
          pfVar10 = (float *)&DAT_14c846370;
        }
        pfVar7 = (float *)param_1[5];
        fVar12 = pfVar10[2] * pfVar7[2];
        fVar13 = pfVar10[1] * pfVar7[1];
        fVar14 = *pfVar10 * *pfVar7;
        fVar15 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
        if (1e-08 < fVar15) {
          fVar15 = 1.0 / SQRT(fVar15);
          fVar14 = fVar14 * fVar15;
          fVar13 = fVar13 * fVar15;
          fVar12 = fVar12 * fVar15;
        }
        if (*(char *)(lVar3 + 0x70) != '\0') {
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar11 * 8);
          *(float *)(lVar3 + uVar9 * 0xc) = fVar14;
          *(float *)(lVar3 + 4 + uVar9 * 0xc) = fVar13;
          *(float *)(lVar3 + 8 + uVar9 * 0xc) = fVar12;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429755c8 FUN_1429755c8 body=371 status=ok
// SIG undefined FUN_1429755c8(void)

void FUN_1429755c8(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  undefined1 auStack_48 [40];
  float local_20 [6];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  if (-1 < (int)uVar1) {
    lVar2 = *(longlong *)*param_1;
    if ((int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc)) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar4 = *(longlong *)(lVar2 + 0x48);
        lVar5 = 0;
        do {
          uVar6 = uVar1 * 3 + (int)lVar5;
          local_20[lVar5] =
               *(float *)(*(longlong *)(lVar4 + (ulonglong)(uVar6 >> 9) * 8) +
                         (ulonglong)(uVar6 & 0x1ff) * 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
        pfVar3 = (float *)param_1[1];
        local_20[5] = local_20[2] * pfVar3[2];
        local_20[4] = local_20[1] * pfVar3[1];
        local_20[3] = local_20[0] * *pfVar3;
        fVar7 = local_20[5] * local_20[5] + local_20[3] * local_20[3] + local_20[4] * local_20[4];
        if (1e-08 < fVar7) {
          fVar7 = 1.0 / SQRT(fVar7);
          local_20[3] = local_20[3] * fVar7;
          local_20[4] = local_20[4] * fVar7;
          local_20[5] = local_20[5] * fVar7;
        }
        lVar4 = 0;
        do {
          uVar6 = uVar1 * 3 + (int)lVar4;
          *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)(uVar6 & 0x1ff) * 4) = local_20[lVar4 + 3];
          lVar4 = lVar4 + 1;
        } while (lVar4 != 3);
      }
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14297573c FUN_14297573c body=446 status=ok
// SIG undefined FUN_14297573c(void)

void FUN_14297573c(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  char cVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar9 = (ulonglong)(uVar2 >> 9);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar9 * 8) + uVar7 * 2) - 1U
                ) < 0xfffe) {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 8);
      pdVar5 = (double *)param_1[1];
      local_38 = *(double *)(lVar4 + 0x10 + uVar7 * 0x18) - pdVar5[2];
      local_40 = *(double *)(lVar4 + 8 + uVar7 * 0x18) - pdVar5[1];
      local_48 = *(double *)(lVar4 + uVar7 * 0x18) - *pdVar5;
      FUN_146bf2028(pdVar5 + 3,&local_60);
      cVar6 = FUN_146bfed03(&local_60);
      if (cVar6 != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 8);
        *(double *)(lVar4 + 0x10 + uVar7 * 0x18) = local_50;
        puVar1 = (undefined4 *)(lVar4 + uVar7 * 0x18);
        *puVar1 = (undefined4)local_60;
        puVar1[1] = local_60._4_4_;
        puVar1[2] = (undefined4)uStack_58;
        puVar1[3] = uStack_58._4_4_;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
      if (*(char *)param_1[2] == '\x01') {
        lVar3 = *param_1;
        if (*(char *)(lVar3 + 0x70) == '\x01') {
          pfVar8 = (float *)((ulonglong)((uVar2 & 0x1ff) * 0xc) +
                            *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar9 * 8));
        }
        else {
          pfVar8 = (float *)&DAT_14c846370;
        }
        local_50 = (double)pfVar8[2];
        uStack_58 = (double)pfVar8[1];
        local_60 = (double)*pfVar8;
        FUN_146bf2028(param_1[1] + 0x18,&local_48);
        if (*(char *)(lVar3 + 0x70) == '\x01') {
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar9 * 8);
          *(float *)(lVar3 + uVar7 * 0xc) = (float)local_48;
          *(float *)(lVar3 + 4 + uVar7 * 0xc) = (float)local_40;
          *(float *)(lVar3 + 8 + uVar7 * 0xc) = (float)local_38;
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



// FUNCTION 1429758fc FUN_1429758fc body=327 status=ok
// SIG undefined FUN_1429758fc(void)

void FUN_1429758fc(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  float local_38 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)*param_1,
      (int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar4 = 0;
    do {
      uVar5 = uVar1 * 3 + (int)lVar4;
      local_38[lVar4 + 3] =
           *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    local_58 = (double)local_38[5];
    local_60 = (double)local_38[4];
    local_68 = (double)local_38[3];
    FUN_146bf2028(param_1[1] + 0x18,&local_50);
    local_38[0] = (float)local_50;
    local_38[1] = (float)local_48;
    local_38[2] = (float)local_40;
    lVar3 = 0;
    do {
      uVar5 = uVar1 * 3 + (int)lVar3;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
                (ulonglong)(uVar5 & 0x1ff) * 4) = local_38[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142975a44 FUN_142975a44 body=468 status=ok
// SIG undefined FUN_142975a44(void)

void FUN_142975a44(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  char cVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar9 = (ulonglong)(uVar2 >> 9);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar9 * 8) + uVar7 * 2) - 1U
                ) < 0xfffe) {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 8);
      local_58 = *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18);
      puVar1 = (undefined4 *)(lVar4 + uVar7 * 0x18);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      pdVar5 = (double *)param_1[1];
      FUN_146bed047(&local_50,pdVar5 + 3);
      local_70 = local_40 + pdVar5[2];
      uStack_78 = local_48 + pdVar5[1];
      local_80 = local_50 + *pdVar5;
      cVar6 = FUN_146bfed03();
      if (cVar6 != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 8);
        *(double *)(lVar4 + 0x10 + uVar7 * 0x18) = local_70;
        puVar1 = (undefined4 *)(lVar4 + uVar7 * 0x18);
        *puVar1 = (undefined4)local_80;
        puVar1[1] = local_80._4_4_;
        puVar1[2] = (undefined4)uStack_78;
        puVar1[3] = uStack_78._4_4_;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
      if (*(char *)param_1[2] == '\x01') {
        lVar3 = *param_1;
        if (*(char *)(lVar3 + 0x70) == '\x01') {
          pfVar8 = (float *)((ulonglong)((uVar2 & 0x1ff) * 0xc) +
                            *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar9 * 8));
        }
        else {
          pfVar8 = (float *)&DAT_14c846370;
        }
        local_70 = (double)pfVar8[2];
        uStack_78 = (double)pfVar8[1];
        local_80 = (double)*pfVar8;
        FUN_146bed047(&local_50,param_1[1] + 0x18);
        if (*(char *)(lVar3 + 0x70) == '\x01') {
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar9 * 8);
          *(float *)(lVar3 + uVar7 * 0xc) = (float)local_50;
          *(float *)(lVar3 + 4 + uVar7 * 0xc) = (float)local_48;
          *(float *)(lVar3 + 8 + uVar7 * 0xc) = (float)local_40;
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142975c1a FUN_142975c1a body=327 status=ok
// SIG undefined FUN_142975c1a(void)

void FUN_142975c1a(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  float local_38 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)*param_1,
      (int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    lVar4 = 0;
    do {
      uVar5 = uVar1 * 3 + (int)lVar4;
      local_38[lVar4 + 3] =
           *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    local_58 = (double)local_38[5];
    local_60 = (double)local_38[4];
    local_68 = (double)local_38[3];
    FUN_146bed047(&local_50,param_1[1] + 0x18);
    local_38[0] = (float)local_50;
    local_38[1] = (float)local_48;
    local_38[2] = (float)local_40;
    lVar3 = 0;
    do {
      uVar5 = uVar1 * 3 + (int)lVar3;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
                (ulonglong)(uVar5 & 0x1ff) * 4) = local_38[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142975d62 FUN_142975d62 body=488 status=ok
// SIG undefined FUN_142975d62(void)

void FUN_142975d62(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar9 = (ulonglong)(uVar2 >> 9);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar9 * 8) + uVar7 * 2) - 1U
                ) < 0xfffe) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 8);
      pdVar4 = (double *)param_1[2];
      local_60 = *(double *)(lVar3 + 0x10 + uVar7 * 0x18) - pdVar4[2];
      local_68 = *(double *)(lVar3 + 8 + uVar7 * 0x18) - pdVar4[1];
      local_70 = *(double *)(lVar3 + uVar7 * 0x18) - *pdVar4;
      FUN_1401c9a0e(param_1[1],&local_58);
      pdVar4 = (double *)param_1[2];
      local_30 = local_48 + pdVar4[2];
      uStack_38 = local_50 + pdVar4[1];
      local_40 = local_58 + *pdVar4;
      lVar3 = *param_1;
      cVar6 = FUN_146bfed03();
      if (cVar6 != '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar9 * 8);
        *(double *)(lVar5 + 0x10 + uVar7 * 0x18) = local_30;
        puVar1 = (undefined4 *)(lVar5 + uVar7 * 0x18);
        *puVar1 = (undefined4)local_40;
        puVar1[1] = local_40._4_4_;
        puVar1[2] = (undefined4)uStack_38;
        puVar1[3] = uStack_38._4_4_;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
      if (*(char *)param_1[3] == '\x01') {
        if (*(char *)(*param_1 + 0x70) == '\x01') {
          pfVar8 = (float *)((ulonglong)((uVar2 & 0x1ff) * 0xc) +
                            *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar9 * 8));
        }
        else {
          pfVar8 = (float *)&DAT_14c846370;
        }
        local_60 = (double)pfVar8[2];
        local_68 = (double)pfVar8[1];
        local_70 = (double)*pfVar8;
        FUN_1401c9a0e(param_1[1],&local_58);
        if (*(char *)(*param_1 + 0x70) == '\x01') {
          lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar9 * 8);
          *(float *)(lVar3 + uVar7 * 0xc) = (float)local_58;
          *(float *)(lVar3 + 4 + uVar7 * 0xc) = (float)local_50;
          *(float *)(lVar3 + 8 + uVar7 * 0xc) = (float)local_48;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142975f4c FUN_142975f4c body=339 status=ok
// SIG undefined FUN_142975f4c(void)

void FUN_142975f4c(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  float local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  if (-1 < (int)uVar1) {
    lVar2 = *(longlong *)*param_1;
    if ((int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc)) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)(lVar2 + 0x48);
        lVar3 = 0;
        do {
          uVar4 = uVar1 * 3 + (int)lVar3;
          local_2c[lVar3] =
               *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                         (ulonglong)(uVar4 & 0x1ff) * 4);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 3);
        local_50 = (double)local_2c[2];
        local_58 = (double)local_2c[1];
        local_60 = (double)local_2c[0];
        FUN_1401c9a0e(param_1[1]);
        local_2c[0] = (float)local_48;
        local_2c[1] = (float)local_40;
        local_2c[2] = (float)local_38;
        lVar2 = *(longlong *)*param_1;
        lVar3 = 0;
        do {
          uVar4 = uVar1 * 3 + (int)lVar3;
          *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
                    (ulonglong)(uVar4 & 0x1ff) * 4) = local_2c[lVar3];
          lVar3 = lVar3 + 1;
        } while (lVar3 != 3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429760a0 FUN_1429760a0 body=512 status=ok
// SIG undefined FUN_1429760a0(void)

void FUN_1429760a0(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *param_2;
  if ((-1 < (int)uVar3) &&
     (lVar4 = *param_1, (int)uVar3 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24))) {
    uVar9 = (ulonglong)(uVar3 >> 9);
    uVar7 = (ulonglong)(uVar3 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar9 * 8) + uVar7 * 2) - 1U
                ) < 0xfffe) {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar9 * 8);
      local_78 = *(double *)(lVar4 + 0x10 + uVar7 * 0x18);
      pdVar1 = (double *)(lVar4 + uVar7 * 0x18);
      local_88 = *pdVar1;
      uStack_80 = pdVar1[1];
      lVar4 = param_1[1];
      local_58 = *(double *)(lVar4 + 0x48) * local_78;
      local_60 = *(double *)(lVar4 + 0x40) * uStack_80;
      local_68 = *(double *)(lVar4 + 0x38) * local_88;
      FUN_146bed047(&local_50,lVar4);
      local_78 = local_40 + *(double *)(lVar4 + 0x30);
      uStack_80 = local_48 + *(double *)(lVar4 + 0x28);
      local_88 = local_50 + *(double *)(lVar4 + 0x20);
      lVar4 = *param_1;
      cVar6 = FUN_146bfed03(&local_88);
      if (cVar6 != '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar9 * 8);
        *(double *)(lVar5 + 0x10 + uVar7 * 0x18) = local_78;
        puVar2 = (undefined4 *)(lVar5 + uVar7 * 0x18);
        *puVar2 = (undefined4)local_88;
        puVar2[1] = local_88._4_4_;
        puVar2[2] = (undefined4)uStack_80;
        puVar2[3] = uStack_80._4_4_;
        if (*(char *)(lVar4 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar4 + 0x214) = *(int *)(lVar4 + 0x214) + 1;
          UNLOCK();
        }
      }
      if (*(char *)param_1[2] == '\x01') {
        if (*(char *)(*param_1 + 0x70) == '\x01') {
          pfVar8 = (float *)((ulonglong)((uVar3 & 0x1ff) * 0xc) +
                            *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar9 * 8));
        }
        else {
          pfVar8 = (float *)&DAT_14c846370;
        }
        local_58 = (double)pfVar8[2];
        local_60 = (double)pfVar8[1];
        local_68 = (double)*pfVar8;
        FUN_146c5cfa8(param_1[1],&local_50);
        if (*(char *)(*param_1 + 0x70) == '\x01') {
          lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar9 * 8);
          *(float *)(lVar4 + uVar7 * 0xc) = (float)local_50;
          *(float *)(lVar4 + 4 + uVar7 * 0xc) = (float)local_48;
          *(float *)(lVar4 + 8 + uVar7 * 0xc) = (float)local_40;
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429762a2 FUN_1429762a2 body=332 status=ok
// SIG undefined FUN_1429762a2(void)

void FUN_1429762a2(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  float local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)*param_1,
      (int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar2 = *(longlong *)(lVar2 + 0x48);
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      local_2c[lVar3] =
           *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                     (ulonglong)(uVar4 & 0x1ff) * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    local_50 = (double)local_2c[2];
    local_58 = (double)local_2c[1];
    local_60 = (double)local_2c[0];
    FUN_146c5cfa8(param_1[1]);
    local_2c[0] = (float)local_48;
    local_2c[1] = (float)local_40;
    local_2c[2] = (float)local_38;
    lVar2 = *(longlong *)*param_1;
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
                (ulonglong)(uVar4 & 0x1ff) * 4) = local_2c[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429763f0 FUN_1429763f0 body=444 status=ok
// SIG undefined FUN_1429763f0(void)

void FUN_1429763f0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  float local_54 [3];
  undefined8 local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)*param_1,
      (int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar2 = *(longlong *)(lVar2 + 0x48);
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      local_54[lVar3] =
           *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                     (ulonglong)(uVar4 & 0x1ff) * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    lVar2 = param_1[1];
    local_38 = (double)local_54[2] * *(double *)(lVar2 + 0x48);
    local_40 = (double)local_54[1] * *(double *)(lVar2 + 0x40);
    local_48 = (double)local_54[0] * *(double *)(lVar2 + 0x38);
    FUN_146bed047(&local_70);
    fVar5 = (float)local_60;
    fVar6 = (float)local_68;
    fVar9 = (float)local_70;
    fVar10 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar6 * fVar6);
    fVar7 = 0.0;
    fVar8 = 1.0 / fVar10;
    if (0.0 < fVar10) {
      fVar5 = fVar5 * fVar8;
      fVar7 = fVar6 * fVar8;
    }
    else {
      fVar5 = 0.0;
    }
    lVar2 = *(longlong *)*param_1;
    local_48 = (double)CONCAT44(fVar7,-(uint)(0.0 < fVar10) & (uint)(fVar9 * fVar8));
    local_40 = (double)CONCAT44(local_40._4_4_,fVar5);
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
       (ulonglong)(uVar4 & 0x1ff) * 4) = *(undefined4 *)((longlong)&local_48 + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429765ae FUN_1429765ae body=417 status=ok
// SIG undefined FUN_1429765ae(void)

void FUN_1429765ae(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar8 = (ulonglong)(uVar2 >> 9);
    uVar6 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar8 * 8) + uVar6 * 2) - 1U
                ) < 0xfffe) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar8 * 8);
      local_38 = *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
      puVar1 = (undefined4 *)(lVar3 + uVar6 * 0x18);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      FUN_146ba22f0(param_1[1],&local_60,&local_48);
      local_38 = local_50;
      local_48 = local_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      lVar3 = *param_1;
      cVar5 = FUN_146bfed03(&local_48);
      if (cVar5 != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar8 * 8);
        *(double *)(lVar4 + 0x10 + uVar6 * 0x18) = local_38;
        puVar1 = (undefined4 *)(lVar4 + uVar6 * 0x18);
        *puVar1 = local_48;
        puVar1[1] = uStack_44;
        puVar1[2] = uStack_40;
        puVar1[3] = uStack_3c;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
      if (*(char *)param_1[2] == '\x01') {
        if (*(char *)(*param_1 + 0x70) == '\x01') {
          pfVar7 = (float *)((ulonglong)((uVar2 & 0x1ff) * 0xc) +
                            *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar8 * 8));
        }
        else {
          pfVar7 = (float *)&DAT_14c846370;
        }
        local_68 = (double)pfVar7[2];
        local_70 = (double)pfVar7[1];
        local_78 = (double)*pfVar7;
        FUN_146c5d0c4(param_1[1],&local_60);
        if (*(char *)(*param_1 + 0x70) == '\x01') {
          lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar8 * 8);
          *(float *)(lVar3 + uVar6 * 0xc) = (float)(double)CONCAT44(uStack_5c,local_60);
          *(float *)(lVar3 + 4 + uVar6 * 0xc) = (float)(double)CONCAT44(uStack_54,uStack_58);
          *(float *)(lVar3 + 8 + uVar6 * 0xc) = (float)local_50;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142976750 FUN_142976750 body=332 status=ok
// SIG undefined FUN_142976750(void)

void FUN_142976750(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  float local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)*param_1,
      (int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar2 = *(longlong *)(lVar2 + 0x48);
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      local_2c[lVar3] =
           *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                     (ulonglong)(uVar4 & 0x1ff) * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    local_50 = (double)local_2c[2];
    local_58 = (double)local_2c[1];
    local_60 = (double)local_2c[0];
    FUN_146c5d0c4(param_1[1]);
    local_2c[0] = (float)local_48;
    local_2c[1] = (float)local_40;
    local_2c[2] = (float)local_38;
    lVar2 = *(longlong *)*param_1;
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
                (ulonglong)(uVar4 & 0x1ff) * 4) = local_2c[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14297689e FUN_14297689e body=429 status=ok
// SIG undefined FUN_14297689e(void)

void FUN_14297689e(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  uint local_58;
  float fStack_54;
  float local_50;
  undefined4 uStack_4c;
  double local_48;
  float local_3c [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)*param_1,
      (int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                         (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar2 = *(longlong *)(lVar2 + 0x48);
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      local_3c[lVar3] =
           *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                     (ulonglong)(uVar4 & 0x1ff) * 4);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    local_60 = (double)local_3c[2];
    local_68 = (double)local_3c[1];
    local_70 = (double)local_3c[0];
    FUN_146c5d1a4(param_1[1]);
    fVar5 = (float)local_48;
    fVar6 = (float)(double)CONCAT44(uStack_4c,local_50);
    fVar8 = (float)(double)CONCAT44(fStack_54,local_58);
    fVar9 = SQRT(fVar5 * fVar5 + fVar8 * fVar8 + fVar6 * fVar6);
    fStack_54 = 0.0;
    fVar7 = 1.0 / fVar9;
    if (0.0 < fVar9) {
      local_50 = fVar5 * fVar7;
      fStack_54 = fVar6 * fVar7;
    }
    else {
      local_50 = 0.0;
    }
    lVar2 = *(longlong *)*param_1;
    local_58 = -(uint)(0.0 < fVar9) & (uint)(fVar8 * fVar7);
    lVar3 = 0;
    do {
      uVar4 = uVar1 * 3 + (int)lVar3;
      *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
               (ulonglong)(uVar4 & 0x1ff) * 4) = (&local_58)[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142976a4c FUN_142976a4c body=502 status=ok
// SIG undefined FUN_142976a4c(void)

void FUN_142976a4c(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_98 [44];
  undefined8 local_6c;
  float local_64;
  undefined8 local_60;
  float fStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *param_2;
  if ((-1 < (int)uVar2) &&
     (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) {
    uVar8 = (ulonglong)(uVar2 >> 9);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar8 * 8) + uVar7 * 2) - 1U
                ) < 0xfffe) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar8 * 8);
      local_38 = *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18);
      puVar1 = (undefined4 *)(lVar3 + uVar7 * 0x18);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      fStack_40 = (float)puVar1[2];
      uStack_3c = puVar1[3];
      (**(code **)param_1[1])(&local_60,((undefined8 *)param_1[1])[1],&local_48);
      local_38 = local_50;
      local_48 = (float)local_60;
      uStack_44 = local_60._4_4_;
      fStack_40 = fStack_58;
      uStack_3c = uStack_54;
      lVar3 = *param_1;
      cVar6 = FUN_146bfed03(&local_48);
      if (cVar6 != '\0') {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar8 * 8);
        *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18) = local_38;
        puVar1 = (undefined4 *)(lVar4 + uVar7 * 0x18);
        *puVar1 = local_48;
        puVar1[1] = uStack_44;
        puVar1[2] = fStack_40;
        puVar1[3] = uStack_3c;
        if (*(char *)(lVar3 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar3 + 0x214) = *(int *)(lVar3 + 0x214) + 1;
          UNLOCK();
        }
      }
      if (*(char *)param_1[2] == '\x01') {
        if (*(char *)(*param_1 + 0x70) == '\0') {
          fStack_58 = (float)DAT_14c846378;
          local_60 = DAT_14c846370;
        }
        else {
          lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar8 * 8);
          fStack_58 = *(float *)(lVar3 + 8 + uVar7 * 0xc);
          local_60 = *(undefined8 *)(lVar3 + uVar7 * 0xc);
        }
        (**(code **)param_1[3])(&local_6c,((undefined8 *)param_1[3])[1],&local_60);
        fStack_58 = local_64;
        local_60 = local_6c;
        uVar5 = local_60;
        local_60 = local_6c;
        if (*(char *)(*param_1 + 0x70) == '\x01') {
          local_60._0_4_ = (float)local_6c;
          local_60._4_4_ = (float)((ulonglong)local_6c >> 0x20);
          fVar9 = SQRT(local_64 * local_64 +
                       (float)local_60 * (float)local_60 + local_60._4_4_ * local_60._4_4_);
          fVar10 = 1.0 / fVar9;
          if (0.0 < fVar9) {
            local_60._0_4_ = (float)local_60 * fVar10;
            local_60._4_4_ = local_60._4_4_ * fVar10;
          }
          else {
            local_60._0_4_ = 0.0;
            local_60._4_4_ = 0.0;
          }
          lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + uVar8 * 8);
          *(float *)(lVar3 + uVar7 * 0xc) = (float)local_60;
          *(float *)(lVar3 + 4 + uVar7 * 0xc) = local_60._4_4_;
          *(uint *)(lVar3 + 8 + uVar7 * 0xc) = -(uint)(0.0 < fVar9) & (uint)(local_64 * fVar10);
          local_60 = uVar5;
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142976c44 FUN_142976c44 body=408 status=ok
// SIG undefined FUN_142976c44(void)

void FUN_142976c44(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_88 [44];
  float local_5c [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  if (-1 < (int)uVar1) {
    lVar2 = *(longlong *)*param_1;
    if ((int)uVar1 < *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc)) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)(lVar2 + 0x48);
        lVar3 = 0;
        do {
          uVar4 = uVar1 * 3 + (int)lVar3;
          local_5c[lVar3 + 3] =
               *(float *)(*(longlong *)(lVar2 + (ulonglong)(uVar4 >> 9) * 8) +
                         (ulonglong)(uVar4 & 0x1ff) * 4);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 3);
        (**(code **)param_1[1])(local_5c,((undefined8 *)param_1[1])[1],local_5c + 3);
        local_5c[5] = local_5c[2];
        fVar7 = SQRT(local_5c[2] * local_5c[2] +
                     local_5c[0] * local_5c[0] + local_5c[1] * local_5c[1]);
        fVar5 = 0.0;
        fVar6 = 1.0 / fVar7;
        if (0.0 < fVar7) {
          local_5c[2] = local_5c[2] * fVar6;
          fVar5 = local_5c[1] * fVar6;
        }
        else {
          local_5c[2] = 0.0;
        }
        lVar2 = *(longlong *)*param_1;
        local_5c[0] = (float)(-(uint)(0.0 < fVar7) & (uint)(local_5c[0] * fVar6));
        local_5c[1] = fVar5;
        lVar3 = 0;
        do {
          uVar4 = uVar1 * 3 + (int)lVar3;
          *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
                    (ulonglong)(uVar4 & 0x1ff) * 4) = local_5c[lVar3];
          lVar3 = lVar3 + 1;
        } while (lVar3 != 3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142976e2e FUN_142976e2e body=412 status=ok
// SIG undefined FUN_142976e2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142976e2e(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  _DAT_14c992080 = 0x7fefffffffffffff;
  _DAT_14c992088 = 0;
  uRam000000014c992090 = 0;
  local_28 = (undefined8 *)((ulonglong)local_28 & 0xffffffffffffff00);
  local_38 = 0;
  FUN_140bd5914(&DAT_14c992098,L"geometry.DynamicMesh.EnableDebugMeshes",&local_28,
                L"Enable/Disable FDynamicMesh3 Global Debug Mesh support. Debug Mesh support is only available in the Editor."
               );
  atexit(FUN_142972236);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e020b0;
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
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149e062c0;
  local_28[3] = &DAT_14297227b;
  local_38 = 0;
  FUN_14152bcb8(&DAT_14c9920b0,L"geometry.DynamicMesh.ClearDebugMeshes",
                L"Discard all debug meshes currently stored in the FDynamicMesh3 Global Debug Mesh set. This command only works in the Editor."
                ,&local_28);
  if (local_20 != 0) {
    if (local_28 == (undefined8 *)0x0) goto LAB_142976f6d;
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142976f6d:
  atexit(FUN_14297227c);
  FUN_1446f470e(&DAT_14c9920c0,L"NonManifoldVIDAttr",1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142976fcc FUN_142976fcc body=2083 status=ok
// SIG undefined FUN_142976fcc(void)

longlong FUN_142976fcc(longlong param_1)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  bool bVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_168 [32];
  int local_148;
  uint local_13c;
  ulonglong local_138;
  int local_12c;
  longlong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  double local_f8 [3];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_13c = *(uint *)(param_1 + 0xb4);
  uVar19 = 3;
  if (3 < (int)*(uint *)(param_1 + 0xb0)) {
    uVar19 = (ulonglong)*(uint *)(param_1 + 0xb0);
  }
  uVar31 = 1;
  if (1 < (int)local_13c) {
    uVar31 = (ulonglong)local_13c;
  }
  iVar22 = (int)uVar31;
  iVar17 = (int)uVar19;
  local_148 = iVar22 * iVar17 + 1;
  fVar35 = *(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb8);
  iVar21 = iVar17 - (uint)(fVar35 < 359.999);
  FUN_146c5e8c6(param_1,local_148,(iVar22 * 2 + -1) * iVar21,local_148);
  puVar5 = *(undefined8 **)(param_1 + 8);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  **(undefined8 **)(param_1 + 0x18) = 0x3f0000003f000000;
  fVar2 = *(float *)(param_1 + 0xb8);
  fVar3 = *(float *)(param_1 + 0xbc);
  fVar4 = *(float *)(param_1 + 0xa0);
  dVar8 = 0.5 / (double)iVar22;
  lVar29 = 0xc;
  lVar30 = 0x18;
  uVar20 = 0;
  do {
    dVar37 = (double)(int)uVar20 *
             (((double)(fVar3 - fVar2) * 0.017453292519943295) / (double)iVar21) +
             (double)fVar2 * 0.017453292519943295;
    dVar36 = cos(dVar37);
    dVar37 = sin(dVar37);
    uVar20 = uVar20 + 1;
    uVar16 = 0;
    lVar14 = lVar30;
    lVar15 = lVar29;
    do {
      uVar16 = uVar16 + 1;
      dVar38 = (double)(int)uVar16;
      dVar7 = ((double)fVar4 / (double)iVar22) * dVar38;
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      local_f8[2] = 0.0;
      local_f8[*(int *)(param_1 + 0xc4)] = dVar7 * dVar36;
      local_f8[*(int *)(param_1 + 200)] = dVar37 * dVar7;
      lVar6 = *(longlong *)(param_1 + 8);
      *(double *)(lVar6 + 0x10 + lVar14) = local_f8[2];
      pdVar1 = (double *)(lVar6 + lVar14);
      *pdVar1 = local_f8[0];
      pdVar1[1] = local_f8[1];
      lVar6 = *(longlong *)(param_1 + 0x18);
      *(float *)(lVar6 + -4 + lVar15) = (float)(dVar36 * dVar38 * dVar8 + 0.5);
      *(float *)(lVar6 + lVar15) = (float)(dVar38 * dVar37 * dVar8 + 0.5);
      lVar15 = lVar15 + uVar19 * 8;
      lVar14 = lVar14 + uVar19 * 0x18;
    } while (uVar31 != uVar16);
    lVar29 = lVar29 + 8;
    lVar30 = lVar30 + 0x18;
  } while (uVar20 != uVar19);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar29 = 0;
    lVar30 = 0;
    do {
      *(int *)(*(longlong *)(param_1 + 0x28) + lVar30 * 4) = (int)lVar30;
      *(int *)(*(longlong *)(param_1 + 0x48) + lVar30 * 4) = (int)lVar30;
      lVar14 = *(longlong *)(param_1 + 0x38);
      *(undefined4 *)(lVar14 + 8 + lVar29) = *(undefined4 *)(param_1 + 0xac);
      *(undefined8 *)(lVar14 + lVar29) = *(undefined8 *)(param_1 + 0xa4);
      lVar30 = lVar30 + 1;
      lVar29 = lVar29 + 0xc;
    } while (lVar30 < *(int *)(param_1 + 0x10));
  }
  local_120 = (ulonglong)(iVar17 - 1U);
  lVar29 = 2;
  iVar21 = 0;
  uVar31 = 0;
  do {
    uVar20 = uVar31;
    uVar31 = uVar20 + 1;
    iVar22 = (int)uVar20 + 2;
    bVar34 = *(char *)(param_1 + 0x98) != '\0';
    uVar24 = (undefined4)uVar31;
    uVar25 = uVar24;
    if (bVar34) {
      uVar25 = 0;
    }
    uVar27 = 0;
    if (bVar34) {
      uVar27 = uVar24;
    }
    lVar30 = *(longlong *)(param_1 + 0x58);
    *(undefined4 *)(lVar30 + -8 + lVar29 * 4) = uVar27;
    *(int *)(lVar30 + -4 + lVar29 * 4) = iVar22;
    *(undefined4 *)(lVar30 + lVar29 * 4) = uVar25;
    bVar34 = *(char *)(param_1 + 0x98) != '\0';
    uVar25 = uVar24;
    if (bVar34) {
      uVar25 = 0;
    }
    uVar27 = 0;
    if (bVar34) {
      uVar27 = uVar24;
    }
    lVar30 = *(longlong *)(param_1 + 0x78);
    *(undefined4 *)(lVar30 + -8 + lVar29 * 4) = uVar27;
    *(int *)(lVar30 + -4 + lVar29 * 4) = iVar22;
    *(undefined4 *)(lVar30 + lVar29 * 4) = uVar25;
    if (*(char *)(param_1 + 0x98) == '\0') {
      uVar25 = 0;
    }
    else {
      uVar25 = uVar24;
      uVar24 = 0;
    }
    lVar30 = *(longlong *)(param_1 + 0x68);
    *(undefined4 *)(lVar30 + -8 + lVar29 * 4) = uVar25;
    *(int *)(lVar30 + -4 + lVar29 * 4) = iVar22;
    *(undefined4 *)(lVar30 + lVar29 * 4) = uVar24;
    *(int *)(*(longlong *)(param_1 + 0x88) + uVar20 * 4) = iVar21;
    iVar21 = (*(byte *)(param_1 + 0xc0) ^ 1) + iVar21;
    lVar29 = lVar29 + 3;
  } while (local_120 != uVar31);
  uVar31 = local_120;
  if (359.999 <= fVar35) {
    bVar34 = *(char *)(param_1 + 0x98) != '\0';
    iVar22 = iVar17;
    if (bVar34) {
      iVar22 = 0;
    }
    iVar26 = 0;
    if (bVar34) {
      iVar26 = iVar17;
    }
    lVar29 = *(longlong *)(param_1 + 0x58);
    lVar30 = local_120 * 0xc;
    *(int *)(lVar29 + lVar30) = iVar26;
    *(undefined4 *)(lVar29 + 4 + lVar30) = 1;
    *(int *)(lVar29 + 8 + lVar30) = iVar22;
    bVar34 = *(char *)(param_1 + 0x98) != '\0';
    iVar22 = iVar17;
    if (bVar34) {
      iVar22 = 0;
    }
    iVar26 = 0;
    if (bVar34) {
      iVar26 = iVar17;
    }
    lVar29 = *(longlong *)(param_1 + 0x78);
    *(int *)(lVar29 + lVar30) = iVar26;
    *(undefined4 *)(lVar29 + 4 + lVar30) = 1;
    *(int *)(lVar29 + 8 + lVar30) = iVar22;
    bVar34 = *(char *)(param_1 + 0x98) != '\0';
    uVar31 = uVar19;
    if (bVar34) {
      uVar31 = 0;
    }
    iVar22 = 0;
    if (bVar34) {
      iVar22 = iVar17;
    }
    lVar29 = *(longlong *)(param_1 + 0x68);
    *(int *)(lVar29 + lVar30) = iVar22;
    *(undefined4 *)(lVar29 + 4 + lVar30) = 1;
    *(int *)(lVar29 + 8 + lVar30) = (int)uVar31;
    *(int *)(*(longlong *)(param_1 + 0x88) + local_120 * 4) = iVar21;
    iVar21 = iVar21 + (*(byte *)(param_1 + 0xc0) ^ 1);
    uVar31 = uVar20 + 2;
  }
  if (1 < (int)local_13c) {
    uVar20 = 1;
    lVar29 = 0;
    uVar16 = 0;
    uVar33 = uVar19;
    do {
      local_128 = lVar29;
      local_108 = uVar20;
      uVar23 = (int)uVar16 * iVar17;
      local_110 = (ulonglong)uVar23;
      local_12c = uVar23 + 1;
      uVar11 = uVar23 + iVar17 + 1;
      local_118 = (ulonglong)uVar11;
      lVar29 = (longlong)(int)uVar31;
      lVar14 = -(lVar29 << 0x20);
      local_100 = lVar29 * 4;
      lVar29 = lVar29 * 0xc;
      lVar30 = 0;
      do {
        iVar22 = (int)lVar30;
        iVar28 = (int)uVar33 + iVar22 + 1;
        iVar18 = (int)uVar33 + 2 + iVar22;
        iVar32 = (int)local_128 + iVar22 + 1;
        bVar34 = *(char *)(param_1 + 0x98) != '\0';
        iVar26 = iVar32;
        if (bVar34) {
          iVar26 = iVar28;
        }
        lVar15 = *(longlong *)(param_1 + 0x58);
        *(int *)(lVar15 + lVar29) = iVar26;
        iVar26 = iVar28;
        if (bVar34) {
          iVar26 = iVar32;
        }
        *(int *)(lVar15 + 4 + lVar29) = iVar18;
        *(int *)(lVar15 + 8 + lVar29) = iVar26;
        bVar34 = *(char *)(param_1 + 0x98) != '\0';
        iVar26 = iVar32;
        if (bVar34) {
          iVar26 = iVar28;
        }
        lVar15 = *(longlong *)(param_1 + 0x78);
        *(int *)(lVar15 + lVar29) = iVar26;
        iVar26 = iVar28;
        if (bVar34) {
          iVar26 = iVar32;
        }
        *(int *)(lVar15 + 4 + lVar29) = iVar18;
        *(int *)(lVar15 + 8 + lVar29) = iVar26;
        iVar26 = iVar28;
        iVar9 = iVar32;
        if (*(char *)(param_1 + 0x98) == '\0') {
          iVar26 = iVar32;
          iVar9 = iVar28;
        }
        lVar15 = *(longlong *)(param_1 + 0x68);
        *(int *)(lVar15 + lVar29) = iVar26;
        *(int *)(lVar15 + 4 + lVar29) = iVar18;
        *(int *)(lVar15 + 8 + lVar29) = iVar9;
        *(int *)(*(longlong *)(param_1 + 0x88) + local_100 + lVar30 * 8) = iVar21;
        iVar26 = (int)local_128 + iVar22 + 2;
        bVar34 = *(char *)(param_1 + 0x98) != '\0';
        iVar22 = iVar32;
        if (bVar34) {
          iVar22 = iVar18;
        }
        lVar15 = *(longlong *)(param_1 + 0x58);
        *(int *)(lVar15 + 0xc + lVar29) = iVar22;
        iVar22 = iVar18;
        if (bVar34) {
          iVar22 = iVar32;
        }
        *(int *)(lVar15 + 0x10 + lVar29) = iVar26;
        *(int *)(lVar15 + 0x14 + lVar29) = iVar22;
        bVar34 = *(char *)(param_1 + 0x98) != '\0';
        iVar22 = iVar32;
        if (bVar34) {
          iVar22 = iVar18;
        }
        lVar15 = *(longlong *)(param_1 + 0x78);
        *(int *)(lVar15 + 0xc + lVar29) = iVar22;
        iVar22 = iVar18;
        if (bVar34) {
          iVar22 = iVar32;
        }
        *(int *)(lVar15 + 0x10 + lVar29) = iVar26;
        *(int *)(lVar15 + 0x14 + lVar29) = iVar22;
        iVar22 = iVar32;
        if (*(char *)(param_1 + 0x98) != '\0') {
          iVar22 = iVar18;
          iVar18 = iVar32;
        }
        lVar15 = *(longlong *)(param_1 + 0x68);
        *(int *)(lVar15 + 0xc + lVar29) = iVar22;
        *(int *)(lVar15 + 0x10 + lVar29) = iVar26;
        *(int *)(lVar15 + 0x14 + lVar29) = iVar18;
        *(int *)(*(longlong *)(param_1 + 0x88) + local_100 + 4 + lVar30 * 8) = iVar21;
        iVar21 = (*(byte *)(param_1 + 0xc0) ^ 1) + iVar21;
        lVar14 = lVar14 + -0x200000000;
        iVar22 = (int)uVar31;
        uVar31 = (ulonglong)(iVar22 + 2);
        lVar30 = lVar30 + 1;
        lVar29 = lVar29 + 0x18;
      } while (iVar17 + -1 != (int)lVar30);
      if (359.999 <= fVar35) {
        uVar23 = uVar23 + iVar17;
        uVar12 = uVar11 + (iVar17 - 1U);
        uVar13 = uVar23;
        uVar10 = uVar12;
        if (*(char *)(param_1 + 0x98) != '\0') {
          uVar13 = uVar12;
          uVar10 = uVar23;
        }
        lVar29 = *(longlong *)(param_1 + 0x58);
        lVar30 = (-lVar14 >> 0x1e) * 3;
        *(uint *)(lVar29 + lVar30) = uVar13;
        *(uint *)(lVar29 + 4 + lVar30) = uVar11;
        *(uint *)(lVar29 + 8 + lVar30) = uVar10;
        bVar34 = *(char *)(param_1 + 0x98) != '\0';
        uVar13 = uVar23;
        if (bVar34) {
          uVar13 = uVar12;
        }
        lVar29 = *(longlong *)(param_1 + 0x78);
        *(uint *)(lVar29 + lVar30) = uVar13;
        uVar13 = uVar12;
        if (bVar34) {
          uVar13 = uVar23;
        }
        *(uint *)(lVar29 + 4 + lVar30) = uVar11;
        *(uint *)(lVar29 + 8 + lVar30) = uVar13;
        bVar34 = *(char *)(param_1 + 0x98) == '\0';
        uVar13 = uVar12;
        if (bVar34) {
          uVar13 = uVar23;
        }
        lVar29 = *(longlong *)(param_1 + 0x68);
        *(uint *)(lVar29 + lVar30) = uVar13;
        if (!bVar34) {
          uVar12 = uVar23;
        }
        *(uint *)(lVar29 + 4 + lVar30) = uVar11;
        *(uint *)(lVar29 + 8 + lVar30) = uVar12;
        *(int *)(*(longlong *)(param_1 + 0x88) + (-lVar14 >> 0x1e)) = iVar21;
        uVar12 = uVar23;
        uVar13 = uVar11;
        if (*(char *)(param_1 + 0x98) != '\0') {
          uVar12 = uVar11;
          uVar13 = uVar23;
        }
        lVar29 = *(longlong *)(param_1 + 0x58);
        lVar14 = 0x100000000 - lVar14 >> 0x1e;
        lVar30 = lVar14 * 3;
        *(uint *)(lVar29 + lVar30) = uVar12;
        *(int *)(lVar29 + 4 + lVar30) = local_12c;
        *(uint *)(lVar29 + 8 + lVar30) = uVar13;
        bVar34 = *(char *)(param_1 + 0x98) != '\0';
        uVar13 = uVar23;
        if (bVar34) {
          uVar13 = uVar11;
        }
        lVar29 = *(longlong *)(param_1 + 0x78);
        *(uint *)(lVar29 + lVar30) = uVar13;
        uVar13 = uVar11;
        if (bVar34) {
          uVar13 = uVar23;
        }
        *(int *)(lVar29 + 4 + lVar30) = local_12c;
        *(uint *)(lVar29 + 8 + lVar30) = uVar13;
        uVar13 = uVar23;
        if (*(char *)(param_1 + 0x98) != '\0') {
          uVar13 = uVar11;
          uVar11 = uVar23;
        }
        lVar29 = *(longlong *)(param_1 + 0x68);
        *(uint *)(lVar29 + lVar30) = uVar13;
        *(int *)(lVar29 + 4 + lVar30) = local_12c;
        *(uint *)(lVar29 + 8 + lVar30) = uVar11;
        *(int *)(*(longlong *)(param_1 + 0x88) + lVar14) = iVar21;
        iVar21 = iVar21 + (*(byte *)(param_1 + 0xc0) ^ 1);
        uVar31 = (ulonglong)(iVar22 + 4);
      }
      uVar11 = (int)local_108 + 1;
      uVar33 = uVar33 + uVar19;
      uVar20 = (ulonglong)uVar11;
      lVar29 = local_128 + uVar19;
      uVar16 = local_108;
    } while (uVar11 != local_13c);
  }
  if ((local_e0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
  local_138 = uVar19;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429777f0 FUN_1429777f0 body=713 status=ok
// SIG undefined FUN_1429777f0(void)

longlong FUN_1429777f0(longlong param_1)

{
  ulonglong *puVar1;
  double dVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_88 [32];
  uint local_68;
  ulonglong local_58 [8];
  
  local_58[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(uint *)(param_1 + 0xa8);
  if (2 < (int)uVar4) {
    uVar5 = *(uint *)(param_1 + 0xb8);
    local_68 = uVar4;
    FUN_146c5e8c6(param_1,(ulonglong)uVar4,uVar5,uVar4);
    if ((longlong)*(int *)(param_1 + 0xa8) == 0) {
      dVar19 = -1.79769313486232e+308;
      dVar13 = 1.79769313486232e+308;
      dVar14 = 1.79769313486232e+308;
      uVar16 = 0xffffffff;
      uVar17 = 0xffefffff;
    }
    else {
      pdVar9 = *(double **)(param_1 + 0xa0);
      pdVar8 = pdVar9 + (longlong)*(int *)(param_1 + 0xa8) * 2;
      dVar15 = -1.79769313486232e+308;
      uVar20 = 0xffffffff;
      uVar21 = 0xffefffff;
      uVar22 = 0xffffffff;
      uVar23 = 0x7fefffff;
      dVar18 = 1.79769313486232e+308;
      do {
        dVar19 = *pdVar9;
        dVar2 = pdVar9[1];
        uVar16 = SUB84(dVar2,0);
        uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar13 = dVar19;
        if ((double)CONCAT44(uVar23,uVar22) <= dVar19) {
          dVar13 = (double)CONCAT44(uVar23,uVar22);
        }
        if (dVar19 <= (double)CONCAT44(uVar21,uVar20)) {
          dVar19 = (double)CONCAT44(uVar21,uVar20);
        }
        dVar14 = dVar2;
        if (dVar18 <= dVar2) {
          dVar14 = dVar18;
        }
        if (dVar2 <= dVar15) {
          uVar16 = SUB84(dVar15,0);
          uVar17 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
        pdVar9 = pdVar9 + 2;
        dVar15 = (double)CONCAT44(uVar17,uVar16);
        uVar20 = SUB84(dVar19,0);
        uVar21 = (undefined4)((ulonglong)dVar19 >> 0x20);
        uVar22 = SUB84(dVar13,0);
        uVar23 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar18 = dVar14;
      } while (pdVar9 != pdVar8);
    }
    dVar15 = (double)(-(ulonglong)(0.0 <= dVar19 - dVar13) & (ulonglong)(dVar19 - dVar13));
    dVar19 = (double)CONCAT44(uVar17,uVar16) - dVar14;
    dVar19 = (double)(-(ulonglong)(0.0 <= dVar19) & (ulonglong)dVar19);
    if (dVar15 <= dVar19) {
      dVar15 = dVar19;
    }
    lVar10 = 8;
    lVar11 = 0;
    uVar12 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x18);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      dVar19 = *(double *)(lVar7 + lVar10);
      *(float *)(lVar6 + uVar12 * 8) = (float)((*(double *)(lVar7 + -8 + lVar10) - dVar13) / dVar15)
      ;
      *(float *)(lVar6 + 4 + uVar12 * 8) = (float)((dVar19 - dVar14) / dVar15);
      *(int *)(*(longlong *)(param_1 + 0x28) + uVar12 * 4) = (int)uVar12;
      lVar6 = *(longlong *)(param_1 + 0x38);
      *(undefined4 *)(lVar6 + 8 + lVar11 * 2) = *(undefined4 *)(param_1 + 0xd8);
      *(undefined8 *)(lVar6 + lVar11 * 2) = *(undefined8 *)(param_1 + 0xd0);
      *(int *)(*(longlong *)(param_1 + 0x48) + uVar12 * 4) = (int)uVar12;
      uVar3 = *(ulonglong *)(lVar7 + lVar10);
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[*(int *)(param_1 + 0xdc)] = *(ulonglong *)(lVar7 + -8 + lVar10);
      local_58[*(int *)(param_1 + 0xe0)] = uVar3;
      lVar6 = *(longlong *)(param_1 + 8);
      *(ulonglong *)(lVar6 + 0x10 + lVar11 * 4) = local_58[2];
      puVar1 = (ulonglong *)(lVar6 + lVar11 * 4);
      *puVar1 = local_58[0];
      puVar1[1] = local_58[1];
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 6;
      lVar10 = lVar10 + 0x10;
    } while (uVar4 != uVar12);
    if (0 < (int)uVar5) {
      lVar10 = 2;
      uVar12 = 0;
      do {
        lVar11 = *(longlong *)(param_1 + 0x58);
        lVar6 = *(longlong *)(param_1 + 0xb0);
        uVar16 = *(undefined4 *)(lVar6 + -8 + lVar10 * 4);
        uVar17 = *(undefined4 *)(lVar6 + -4 + lVar10 * 4);
        uVar20 = *(undefined4 *)(lVar6 + lVar10 * 4);
        uVar22 = uVar16;
        uVar21 = uVar20;
        if (*(char *)(param_1 + 0x98) != '\0') {
          uVar22 = uVar20;
          uVar21 = uVar16;
        }
        *(undefined4 *)(lVar11 + -8 + lVar10 * 4) = uVar22;
        *(undefined4 *)(lVar11 + -4 + lVar10 * 4) = uVar17;
        *(undefined4 *)(lVar11 + lVar10 * 4) = uVar21;
        uVar21 = uVar16;
        uVar22 = uVar20;
        if (*(char *)(param_1 + 0x98) != '\0') {
          uVar21 = uVar20;
          uVar22 = uVar16;
        }
        lVar11 = *(longlong *)(param_1 + 0x68);
        *(undefined4 *)(lVar11 + -8 + lVar10 * 4) = uVar21;
        *(undefined4 *)(lVar11 + -4 + lVar10 * 4) = uVar17;
        *(undefined4 *)(lVar11 + lVar10 * 4) = uVar22;
        uVar21 = uVar16;
        if (*(char *)(param_1 + 0x98) != '\0') {
          uVar21 = uVar20;
          uVar20 = uVar16;
        }
        lVar11 = *(longlong *)(param_1 + 0x78);
        *(undefined4 *)(lVar11 + -8 + lVar10 * 4) = uVar21;
        *(undefined4 *)(lVar11 + -4 + lVar10 * 4) = uVar17;
        *(undefined4 *)(lVar11 + lVar10 * 4) = uVar20;
        uVar16 = 0;
        if (*(int *)(param_1 + 200) != 0) {
          uVar16 = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + uVar12 * 4);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x88) + uVar12 * 4) = uVar16;
        uVar12 = uVar12 + 1;
        lVar10 = lVar10 + 3;
      } while (uVar5 != uVar12);
    }
  }
  if ((local_58[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142977aba FUN_142977aba body=3718 status=ok
// SIG undefined FUN_142977aba(void)

longlong FUN_142977aba(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  void *pvVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined4 *local_220;
  void **local_218;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined1 *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [4];
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
  void *local_158;
  undefined8 uStack_150;
  void *local_148;
  double dStack_140;
  void *local_138;
  void *local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  iVar28 = *(int *)(param_1 + 0xa8);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (void *)0x0;
  uStack_110 = 0;
  local_128 = (void *)0x0;
  uStack_120 = 0;
  if (0 < (longlong)iVar28) {
    dVar3 = *(double *)(param_1 + 200);
    lVar32 = 0x18;
    lVar34 = 0;
    do {
      lVar31 = *(longlong *)(param_1 + 0xa0);
      dVar4 = *(double *)(*(longlong *)(param_1 + 0xb8) + lVar34 * 8);
      dStack_140 = dVar3 * -0.5 * dVar4;
      local_148 = (void *)(dVar4 * 0.0);
      local_138 = local_148;
      FUN_146bed047(&local_198,lVar31 + lVar32,&local_148);
      dVar17 = (double)CONCAT44(uStack_184,local_188);
      dVar4 = *(double *)(lVar31 + -8 + lVar32);
      dVar13 = (double)CONCAT44(uStack_194,local_198);
      dVar15 = (double)CONCAT44(uStack_18c,uStack_190);
      dVar39 = *(double *)(lVar31 + -0x10 + lVar32);
      dVar40 = *(double *)(lVar31 + -0x18 + lVar32);
      dVar5 = *(double *)(*(longlong *)(param_1 + 0xb8) + lVar34 * 8);
      dStack_140 = dVar3 * 0.5 * dVar5;
      local_148 = (void *)(dVar5 * 0.0);
      local_138 = local_148;
      FUN_146bed047(&local_198,lVar31 + lVar32,&local_148);
      uVar23 = uStack_100;
      dVar18 = (double)CONCAT44(uStack_184,local_188);
      dVar5 = *(double *)(lVar31 + -8 + lVar32);
      dVar16 = (double)CONCAT44(uStack_18c,uStack_190);
      dVar6 = *(double *)(lVar31 + -0x10 + lVar32);
      dVar14 = (double)CONCAT44(uStack_194,local_198);
      dVar7 = *(double *)(lVar31 + -0x18 + lVar32);
      lVar30 = (longlong)(int)uStack_100;
      uVar20 = (int)uStack_100 + 1;
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar20);
      if (uStack_100._4_4_ < uVar20) {
        FUN_1403e3958(&local_108,uVar23 & 0xffffffff);
      }
      uVar23 = uStack_110;
      lVar31 = lVar31 + lVar32;
      *(undefined8 *)(local_108 + 0x10 + lVar30 * 0x18) = *(undefined8 *)(lVar31 + -8);
      uVar41 = *(undefined4 *)(lVar31 + -0x14);
      uVar11 = *(undefined4 *)(lVar31 + -0x10);
      uVar12 = *(undefined4 *)(lVar31 + -0xc);
      puVar27 = (undefined4 *)(local_108 + lVar30 * 0x18);
      *puVar27 = *(undefined4 *)(lVar31 + -0x18);
      puVar27[1] = uVar41;
      puVar27[2] = uVar11;
      puVar27[3] = uVar12;
      lVar31 = (longlong)(int)uStack_110;
      uVar20 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar20);
      if (uStack_110._4_4_ < uVar20) {
        FUN_1403e3958(&local_118,uVar23 & 0xffffffff);
      }
      uVar23 = uStack_120;
      *(double *)((longlong)local_118 + lVar31 * 0x18) = dVar13 + dVar40;
      *(double *)((longlong)local_118 + lVar31 * 0x18 + 8) = dVar15 + dVar39;
      *(double *)((longlong)local_118 + lVar31 * 0x18 + 0x10) = dVar17 + dVar4;
      lVar31 = (longlong)(int)uStack_120;
      uVar20 = (int)uStack_120 + 1;
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar20);
      if (uStack_120._4_4_ < uVar20) {
        FUN_1403e3958(&local_128,uVar23 & 0xffffffff);
      }
      *(double *)((longlong)local_128 + lVar31 * 0x18) = dVar14 + dVar7;
      *(double *)((longlong)local_128 + lVar31 * 0x18 + 8) = dVar16 + dVar6;
      *(double *)((longlong)local_128 + lVar31 * 0x18 + 0x10) = dVar18 + dVar5;
      lVar34 = lVar34 + 1;
      lVar32 = lVar32 + 0x38;
    } while (iVar28 != lVar34);
  }
  pvVar19 = local_118;
  local_148 = (void *)0x0;
  dStack_140 = 0.0;
  local_158 = (void *)0x0;
  uStack_150 = 0;
  puVar27 = *(undefined4 **)(param_1 + 0xa0);
  local_168 = *(undefined8 *)(puVar27 + 0xc);
  local_198 = *puVar27;
  uStack_194 = puVar27[1];
  uStack_190 = puVar27[2];
  uStack_18c = puVar27[3];
  local_188 = puVar27[4];
  uStack_184 = puVar27[5];
  uStack_180 = puVar27[6];
  uStack_17c = puVar27[7];
  local_178 = puVar27[8];
  uStack_174 = puVar27[9];
  uStack_170 = puVar27[10];
  uStack_16c = puVar27[0xb];
  if ((iVar28 < 3) || (*(char *)(param_1 + 0xfa) == '\0')) {
    lVar32 = (longlong)(int)uStack_110;
    dStack_140 = (double)(uStack_110 & 0xffffffff);
    if (lVar32 == 0) {
      dStack_140 = (double)(uStack_110 & 0xffffffff);
      iVar28 = 0;
    }
    else {
      FUN_1405b70fe(&local_148,uStack_110 & 0xffffffff,0);
      memcpy(local_148,pvVar19,lVar32 * 0x18);
      iVar28 = uStack_150._4_4_;
    }
    pvVar19 = local_128;
    iVar29 = (int)uStack_120;
    lVar32 = (longlong)(int)uStack_120;
    uStack_150 = CONCAT44(uStack_150._4_4_,(int)uStack_120);
    if ((int)uStack_120 == 0 && iVar28 == 0) {
      uStack_150 = uStack_120 & 0xffffffff;
    }
    else {
      FUN_1405b70fe(&local_158,uStack_120 & 0xffffffff);
      if (iVar29 != 0) {
        memcpy(local_158,pvVar19,lVar32 * 0x18);
      }
    }
  }
  else {
    local_1b8[2] = 0;
    local_1b8[3] = 0;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    FUN_146c5f762(&local_118,&local_198);
    FUN_146c5f762(&local_128,&local_198,local_1b8);
    local_1c8 = (undefined1 *)0x0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      uVar23 = uStack_100 & 0xffffffff;
      if (0 < (int)uStack_100) {
        lVar32 = 0;
        uVar33 = 0;
        do {
          iVar28 = (int)uVar33;
          if (uVar33 == 0) {
            iVar28 = (int)uVar23;
          }
          uVar33 = uVar33 + 1;
          FUN_146bca7ae(&local_198,&local_1e8,local_108 + -0x18 + (longlong)iVar28 * 0x18,2);
          FUN_146bca7ae(&local_198,&local_1f8,local_108 + lVar32,2);
          FUN_146bca7ae(&local_198,&local_208,
                        ((longlong)
                         ((ulonglong)(uint)((int)uVar33 >> 0x1f) << 0x20 | uVar33 & 0xffffffff) %
                         (longlong)(int)uVar23 & 0xffffffffU) * 0x18 + local_108,2);
          uVar23 = uStack_1c0;
          dVar4 = local_200 - local_1e0;
          dVar3 = local_208 - local_1e8;
          dVar40 = local_1f0 - local_1e0;
          dVar39 = local_1f8 - local_1e8;
          lVar34 = (longlong)(int)uStack_1c0;
          uVar20 = (int)uStack_1c0 + 1;
          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar20);
          if (uStack_1c0._4_4_ < uVar20) {
            FUN_1401c3474(&local_1c8,uVar23 & 0xffffffff);
          }
          uVar23 = uStack_1d0;
          local_1c8[lVar34] = dVar39 * dVar4 - dVar40 * dVar3 < 0.0;
          bVar8 = local_1c8[(int)uStack_1c0 + -1];
          lVar34 = (longlong)(int)uStack_1d0;
          uVar20 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar20);
          if (uStack_1d0._4_4_ < uVar20) {
            FUN_1401c3474(&local_1d8,uVar23 & 0xffffffff);
          }
          *(byte *)(local_1d8 + lVar34) = bVar8 ^ 1;
          uVar23 = (ulonglong)(int)uStack_100;
          lVar32 = lVar32 + 0x18;
        } while ((longlong)uVar33 < (longlong)uVar23);
      }
    }
    else {
      uStack_1c0 = 1;
      FUN_1401c3474(&local_1c8,0);
      uVar23 = uStack_1d0;
      *local_1c8 = 0;
      lVar32 = (longlong)(int)uStack_1d0;
      uVar20 = (int)uStack_1d0 + 1;
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar20);
      if (uStack_1d0._4_4_ < uVar20) {
        FUN_1401c3474(&local_1d8,uVar23 & 0xffffffff);
      }
      *(undefined1 *)(local_1d8 + lVar32) = 0;
      if (2 < (int)uStack_100) {
        lVar32 = 1;
        lVar34 = 0x18;
        do {
          FUN_146bca7ae(&local_198,&local_1e8,local_108 + lVar34 + -0x18,2);
          FUN_146bca7ae(&local_198,&local_1f8,local_108 + lVar34,2);
          FUN_146bca7ae(&local_198,&local_208,local_108 + lVar34 + 0x18,2);
          uVar23 = uStack_1c0;
          dVar4 = local_200 - local_1e0;
          dVar3 = local_208 - local_1e8;
          dVar40 = local_1f0 - local_1e0;
          dVar39 = local_1f8 - local_1e8;
          lVar31 = (longlong)(int)uStack_1c0;
          uVar20 = (int)uStack_1c0 + 1;
          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar20);
          if (uStack_1c0._4_4_ < uVar20) {
            FUN_1401c3474(&local_1c8,uVar23 & 0xffffffff);
          }
          uVar23 = uStack_1d0;
          local_1c8[lVar31] = dVar39 * dVar4 - dVar40 * dVar3 < 0.0;
          bVar8 = local_1c8[(int)uStack_1c0 + -1];
          lVar31 = (longlong)(int)uStack_1d0;
          uVar20 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar20);
          if (uStack_1d0._4_4_ < uVar20) {
            FUN_1401c3474(&local_1d8,uVar23 & 0xffffffff);
          }
          lVar32 = lVar32 + 1;
          *(byte *)(local_1d8 + lVar31) = bVar8 ^ 1;
          lVar34 = lVar34 + 0x18;
        } while (lVar32 < (longlong)(int)uStack_100 + -1);
      }
      uVar23 = uStack_1c0;
      lVar32 = (longlong)(int)uStack_1c0;
      uVar20 = (int)uStack_1c0 + 1;
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar20);
      if (uStack_1c0._4_4_ < uVar20) {
        FUN_1401c3474(&local_1c8,uVar23 & 0xffffffff);
      }
      uVar23 = uStack_1d0;
      local_1c8[lVar32] = 0;
      lVar32 = (longlong)(int)uStack_1d0;
      uVar20 = (int)uStack_1d0 + 1;
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar20);
      if (uStack_1d0._4_4_ < uVar20) {
        FUN_1401c3474(&local_1d8,uVar23 & 0xffffffff);
      }
      *(undefined1 *)(local_1d8 + lVar32) = 0;
    }
    local_218 = &local_148;
    local_228 = local_1b8;
    local_220 = &local_198;
    FUN_146c5fdae(param_1,&local_118,&local_1c8,local_1b8 + 2);
    local_218 = &local_158;
    local_228 = local_1b8 + 2;
    local_220 = &local_198;
    FUN_146c5fdae(param_1,&local_128,&local_1d8,local_1b8);
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1b8[2] != 0) {
      FUN_1400020a8();
    }
  }
  iVar28 = dStack_140._0_4_;
  uVar10 = dStack_140._0_4_ * 2;
  uVar20 = dStack_140._0_4_ * 2 - 2;
  if (*(char *)(param_1 + 0xb0) != '\0') {
    uVar20 = uVar10;
  }
  local_228 = (longlong *)CONCAT44(local_228._4_4_,uVar10);
  FUN_146c5e8c6(param_1,uVar10,uVar20,dStack_140._0_4_ * 2 + 2);
  plVar1 = (longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1447a8aa0(plVar1);
  }
  if (0 < dStack_140._0_4_) {
    lVar32 = 0;
    lVar34 = 0;
    do {
      puVar27 = (undefined4 *)((longlong)local_148 + lVar32);
      iVar29 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar29 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar29 + 1U) {
        FUN_1403e3958(plVar1,iVar29);
      }
      lVar31 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar31 + 0x10 + (longlong)iVar29 * 0x18) = *(undefined8 *)(puVar27 + 4);
      uVar41 = puVar27[1];
      uVar11 = puVar27[2];
      uVar12 = puVar27[3];
      puVar2 = (undefined4 *)(lVar31 + (longlong)iVar29 * 0x18);
      *puVar2 = *puVar27;
      puVar2[1] = uVar41;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar27 = (undefined4 *)((longlong)local_158 + lVar32);
      iVar29 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar29 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar29 + 1U) {
        FUN_1403e3958(plVar1,iVar29);
      }
      lVar31 = *plVar1;
      *(undefined8 *)(lVar31 + 0x10 + (longlong)iVar29 * 0x18) = *(undefined8 *)(puVar27 + 4);
      uVar41 = puVar27[1];
      uVar11 = puVar27[2];
      uVar12 = puVar27[3];
      puVar2 = (undefined4 *)(lVar31 + (longlong)iVar29 * 0x18);
      *puVar2 = *puVar27;
      puVar2[1] = uVar41;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      lVar34 = lVar34 + 1;
      lVar32 = lVar32 + 0x18;
    } while (lVar34 < dStack_140._0_4_);
  }
  uVar20 = dStack_140._0_4_ - (*(byte *)(param_1 + 0xb0) ^ 1);
  if (0 < (int)uVar20) {
    lVar32 = 0;
    iVar29 = 0;
    uVar23 = 0;
    do {
      uVar33 = uVar23 + 2;
      iVar24 = (int)((longlong)
                     ((ulonglong)(uint)((int)uVar33 >> 0x1f) << 0x20 | uVar33 & 0xffffffff) %
                    (longlong)(int)uVar10);
      iVar9 = (int)uVar23;
      iVar25 = (iVar9 + 3) % (int)uVar10;
      iVar21 = iVar9;
      iVar26 = iVar24;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar21 = iVar24;
        iVar26 = iVar9;
      }
      lVar34 = *(longlong *)(param_1 + 0x58);
      *(int *)(lVar34 + lVar32) = iVar21;
      iVar22 = iVar9 + 1;
      *(int *)(lVar34 + 4 + lVar32) = iVar22;
      *(int *)(lVar34 + 8 + lVar32) = iVar26;
      iVar21 = iVar9;
      iVar26 = iVar24;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar21 = iVar24;
        iVar26 = iVar9;
      }
      lVar34 = *(longlong *)(param_1 + 0x68);
      *(int *)(lVar34 + lVar32) = iVar21;
      *(int *)(lVar34 + 4 + lVar32) = iVar22;
      *(int *)(lVar34 + 8 + lVar32) = iVar26;
      iVar21 = iVar9;
      iVar26 = iVar24;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar21 = iVar24;
        iVar26 = iVar9;
      }
      lVar34 = *(longlong *)(param_1 + 0x78);
      *(int *)(lVar34 + lVar32) = iVar21;
      *(int *)(lVar34 + 4 + lVar32) = iVar22;
      *(int *)(lVar34 + 8 + lVar32) = iVar26;
      *(int *)(*(longlong *)(param_1 + 0x88) + uVar23 * 4) = iVar29;
      iVar26 = iVar24;
      iVar9 = iVar25;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar26 = iVar25;
        iVar9 = iVar24;
      }
      lVar34 = *(longlong *)(param_1 + 0x58);
      *(int *)(lVar34 + 0xc + lVar32) = iVar26;
      *(int *)(lVar34 + 0x10 + lVar32) = iVar22;
      *(int *)(lVar34 + 0x14 + lVar32) = iVar9;
      iVar26 = iVar24;
      iVar9 = iVar25;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar26 = iVar25;
        iVar9 = iVar24;
      }
      lVar34 = *(longlong *)(param_1 + 0x68);
      *(int *)(lVar34 + 0xc + lVar32) = iVar26;
      *(int *)(lVar34 + 0x10 + lVar32) = iVar22;
      *(int *)(lVar34 + 0x14 + lVar32) = iVar9;
      iVar9 = iVar24;
      if (*(char *)(param_1 + 0x98) != '\0') {
        iVar9 = iVar25;
        iVar25 = iVar24;
      }
      lVar34 = *(longlong *)(param_1 + 0x78);
      *(int *)(lVar34 + 0xc + lVar32) = iVar9;
      *(int *)(lVar34 + 0x10 + lVar32) = iVar22;
      *(int *)(lVar34 + 0x14 + lVar32) = iVar25;
      *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar23 * 4) = iVar29;
      iVar29 = iVar29 + (*(byte *)(param_1 + 0xf9) ^ 1);
      lVar32 = lVar32 + 0x18;
      uVar23 = uVar33;
    } while ((ulonglong)uVar20 * 0x18 != lVar32);
  }
  if (0 < iVar28) {
    lVar32 = 8;
    uVar23 = 0;
    do {
      dVar3 = *(double *)(param_1 + 0xe0);
      dVar4 = *(double *)(param_1 + 0xd8);
      lVar34 = *(longlong *)(param_1 + 0x38);
      *(float *)(lVar34 + -8 + lVar32) = (float)*(double *)(param_1 + 0xd0);
      *(float *)(lVar34 + -4 + lVar32) = (float)dVar4;
      *(float *)(lVar34 + lVar32) = (float)dVar3;
      *(int *)(*(longlong *)(param_1 + 0x48) + uVar23 * 4) = (int)uVar23;
      uVar23 = uVar23 + 1;
      lVar32 = lVar32 + 0xc;
    } while (uVar10 != uVar23);
  }
  fVar42 = 1.0;
  fVar43 = fVar42;
  if (*(char *)(param_1 + 0xf8) != '\0') {
    dVar3 = *(double *)(param_1 + 0xe8);
    dVar4 = *(double *)(param_1 + 0xf0);
    if ((dVar3 != dVar4) || (NAN(dVar3) || NAN(dVar4))) {
      if (dVar3 <= dVar4) {
        fVar43 = (float)(dVar3 / dVar4);
      }
      else {
        fVar42 = (float)(dVar4 / dVar3);
      }
      goto LAB_142978661;
    }
  }
  fVar42 = 1.0;
LAB_142978661:
  iVar28 = dStack_140._0_4_;
  lVar32 = (longlong)dStack_140._0_4_;
  dVar3 = (double)FUN_146c5fa86(&local_148,0x9999999a);
  uVar41 = SUB84((dVar3 * 0.1) / (double)iVar28,0);
  dVar3 = (double)FUN_146c5fa86(&local_148,uVar41);
  if (0 < lVar32) {
    fVar44 = fVar42 * 0.0 + 0.0;
    iVar29 = 0;
    lVar34 = 0;
    do {
      dVar4 = (double)FUN_146c5fb4a(&local_148,iVar29,uVar41);
      fVar36 = (float)(dVar4 / dVar3);
      fVar37 = 1.0 - fVar36;
      fVar38 = fVar37 * 0.0 + (fVar43 * 0.0 + fVar43) * fVar36;
      lVar31 = *(longlong *)(param_1 + 0x18);
      *(float *)(lVar31 + lVar34 * 8) = fVar38;
      *(float *)(lVar31 + 4 + lVar34 * 8) = fVar37 * fVar44 + fVar44 * fVar36;
      lVar31 = *(longlong *)(param_1 + 0x18);
      *(float *)(lVar31 + 8 + lVar34 * 8) = fVar38;
      *(float *)(lVar31 + 0xc + lVar34 * 8) = fVar37 * (fVar42 + 0.0) + fVar36 * (fVar42 + 0.0);
      *(int *)(*(longlong *)(param_1 + 0x28) + lVar34 * 4) = (int)lVar34;
      *(int *)(*(longlong *)(param_1 + 0x28) + 4 + lVar34 * 4) = (int)lVar34 + 1;
      lVar34 = lVar34 + 2;
      iVar29 = iVar29 + 1;
    } while (lVar32 * 2 != lVar34);
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    iVar9 = iVar28 * 2;
    iVar29 = iVar28 * 2 + -2;
    iVar26 = iVar28 * 2 + -1;
    iVar25 = iVar28 * 2 + 1;
    bVar35 = *(char *)(param_1 + 0x98) != '\0';
    iVar28 = iVar9;
    if (bVar35) {
      iVar28 = iVar29;
    }
    lVar32 = *(longlong *)(param_1 + 0x68);
    lVar34 = (longlong)iVar29;
    if (bVar35) {
      iVar29 = iVar9;
    }
    *(int *)(lVar32 + lVar34 * 0xc) = iVar29;
    *(int *)(lVar32 + 4 + lVar34 * 0xc) = iVar26;
    *(int *)(lVar32 + 8 + lVar34 * 0xc) = iVar28;
    bVar35 = *(char *)(param_1 + 0x98) != '\0';
    iVar28 = iVar25;
    if (bVar35) {
      iVar28 = iVar9;
    }
    lVar32 = (longlong)iVar9;
    if (bVar35) {
      iVar9 = iVar25;
    }
    lVar34 = *(longlong *)(param_1 + 0x68);
    lVar31 = (longlong)iVar26;
    *(int *)(lVar34 + lVar31 * 0xc) = iVar9;
    *(int *)(lVar34 + 4 + lVar31 * 0xc) = iVar26;
    *(int *)(lVar34 + 8 + lVar31 * 0xc) = iVar28;
    lVar34 = *(longlong *)(param_1 + 0x18);
    *(float *)(lVar34 + lVar32 * 8) = fVar43;
    *(undefined4 *)(lVar34 + 4 + lVar32 * 8) = 0;
    lVar34 = *(longlong *)(param_1 + 0x18);
    lVar31 = (longlong)iVar25;
    *(float *)(lVar34 + lVar31 * 8) = fVar43;
    *(float *)(lVar34 + 4 + lVar31 * 8) = fVar42;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar32 * 4) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar31 * 4) = 1;
  }
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142978942 FUN_142978942 body=1675 status=ok
// SIG undefined FUN_142978942(void)

longlong * FUN_142978942(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_198 [32];
  double local_178;
  float local_170;
  float local_16c;
  int local_168;
  int local_164;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar6 = (int)param_1[0x1b];
  if ((int)param_1[0x1b] < 3) {
    iVar6 = 2;
  }
  iVar10 = *(int *)((longlong)param_1 + 0xdc);
  if (*(int *)((longlong)param_1 + 0xdc) < 3) {
    iVar10 = 2;
  }
  local_164 = iVar10 + -1;
  local_178 = (double)CONCAT44(local_178._4_4_,iVar10 * iVar6);
  FUN_146c5e8c6(param_1,iVar10 * iVar6,(iVar6 + -1) * local_164 * 2);
  local_178 = (double)param_1[0x1a] * -0.5;
  iVar19 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&local_108,0,(double)param_1[0x19] * -0.5);
  local_178 = (double)param_1[0x1a] * -0.5;
  (**(code **)(*param_1 + 0x10))(param_1,&local_120,1,(double)param_1[0x19] * 0.5);
  local_178 = (double)param_1[0x1a] * 0.5;
  (**(code **)(*param_1 + 0x10))(param_1,&local_138,2,(double)param_1[0x19] * 0.5);
  local_178 = (double)param_1[0x1a] * 0.5;
  (**(code **)(*param_1 + 0x10))(param_1,&local_150,3,(double)param_1[0x19] * -0.5);
  local_16c = 1.0;
  local_170 = 1.0;
  if ((char)param_1[0x1c] == '\x01') {
    dVar1 = (double)param_1[0x19];
    dVar2 = (double)param_1[0x1a];
    local_16c = 1.0;
    local_170 = 1.0;
    if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) {
      if (dVar1 <= dVar2) {
        local_170 = (float)(dVar1 / dVar2);
        local_16c = 1.0;
      }
      else {
        local_16c = (float)(dVar2 / dVar1);
        local_170 = 1.0;
      }
    }
  }
  local_160 = (double)local_164;
  lVar12 = 0;
  dVar1 = 0.0;
  do {
    local_158 = dVar1;
    dVar1 = local_158 / local_160;
    fVar24 = (float)dVar1;
    fVar22 = (1.0 - fVar24) * 0.0;
    fVar25 = local_16c * fVar24 + fVar22;
    dVar2 = 1.0 - dVar1;
    lVar11 = (longlong)(int)lVar12;
    lVar14 = lVar11 * 0xc;
    lVar13 = 0;
    dVar4 = 0.0;
    do {
      dVar5 = dVar4 / (double)(iVar6 + -1);
      lVar16 = param_1[7];
      *(int *)(lVar16 + 8 + lVar14) = (int)param_1[0x18];
      *(longlong *)(lVar16 + lVar14) = param_1[0x17];
      iVar9 = (int)lVar12 + (int)lVar13;
      *(int *)(param_1[9] + lVar11 * 4 + lVar13 * 4) = iVar9;
      fVar23 = (float)dVar5;
      lVar16 = param_1[3] + lVar11 * 8 + 4;
      *(float *)(lVar16 + -4 + lVar13 * 8) =
           (1.0 - fVar23) * (fVar24 * 0.0 + fVar22) +
           fVar23 * ((1.0 - fVar24) * local_170 + local_170 * fVar24);
      *(float *)(lVar16 + lVar13 * 8) = (1.0 - fVar23) * fVar25 + fVar25 * fVar23;
      *(int *)(param_1[5] + lVar11 * 4 + lVar13 * 4) = iVar9;
      dVar3 = 1.0 - dVar5;
      lVar16 = param_1[1];
      *(double *)(lVar16 + lVar14 * 2) =
           dVar3 * (local_108 * dVar2 + local_150 * dVar1) +
           (local_120 * dVar2 + local_138 * dVar1) * dVar5;
      *(double *)(lVar16 + 8 + lVar14 * 2) =
           (local_100 * dVar2 + local_148 * dVar1) * dVar3 +
           (local_118 * dVar2 + local_130 * dVar1) * dVar5;
      *(double *)(lVar16 + 0x10 + lVar14 * 2) =
           (local_f8 * dVar2 + local_140 * dVar1) * dVar3 +
           (local_110 * dVar2 + local_128 * dVar1) * dVar5;
      dVar4 = dVar4 + 1.0;
      lVar14 = lVar14 + 0xc;
      lVar13 = lVar13 + 1;
    } while (iVar6 != (int)lVar13);
    iVar19 = iVar19 + 1;
    lVar12 = lVar11 + lVar13;
    dVar1 = local_158 + 1.0;
  } while (iVar19 != iVar10);
  iVar19 = 0;
  lVar12 = 0;
  local_168 = 0;
  iVar9 = 0;
  iVar10 = iVar6;
  do {
    local_168 = local_168 + 1;
    lVar12 = (longlong)(int)lVar12;
    lVar14 = lVar12 * 4;
    lVar11 = lVar12 * 0xc;
    lVar13 = 0;
    do {
      iVar18 = (int)lVar13;
      iVar20 = iVar19 + iVar18;
      iVar17 = iVar19 + iVar18 + 1;
      iVar7 = iVar20;
      iVar8 = iVar17;
      if ((char)param_1[0x13] != '\0') {
        iVar7 = iVar17;
        iVar8 = iVar20;
      }
      lVar16 = param_1[0xb];
      *(int *)(lVar16 + lVar11) = iVar7;
      iVar15 = iVar10 + 1 + iVar18;
      *(int *)(lVar16 + 4 + lVar11) = iVar15;
      *(int *)(lVar16 + 8 + lVar11) = iVar8;
      *(int *)(param_1[0x11] + lVar14 + lVar13 * 8) = iVar9;
      bVar21 = (char)param_1[0x13] != '\0';
      iVar7 = iVar20;
      if (bVar21) {
        iVar7 = iVar17;
      }
      lVar16 = param_1[0xd];
      *(int *)(lVar16 + lVar11) = iVar7;
      iVar7 = iVar17;
      if (bVar21) {
        iVar7 = iVar20;
      }
      *(int *)(lVar16 + 4 + lVar11) = iVar15;
      *(int *)(lVar16 + 8 + lVar11) = iVar7;
      bVar21 = (char)param_1[0x13] == '\0';
      iVar7 = iVar17;
      if (bVar21) {
        iVar7 = iVar20;
      }
      lVar16 = param_1[0xf];
      *(int *)(lVar16 + lVar11) = iVar7;
      iVar18 = iVar10 + iVar18;
      if (!bVar21) {
        iVar17 = iVar20;
      }
      *(int *)(lVar16 + 4 + lVar11) = iVar15;
      *(int *)(lVar16 + 8 + lVar11) = iVar17;
      bVar21 = (char)param_1[0x13] != '\0';
      iVar7 = iVar20;
      if (bVar21) {
        iVar7 = iVar15;
      }
      lVar16 = param_1[0xb];
      *(int *)(lVar16 + 0xc + lVar11) = iVar7;
      iVar7 = iVar15;
      if (bVar21) {
        iVar7 = iVar20;
      }
      *(int *)(lVar16 + 0x10 + lVar11) = iVar18;
      *(int *)(lVar16 + 0x14 + lVar11) = iVar7;
      *(int *)(param_1[0x11] + lVar14 + 4 + lVar13 * 8) = iVar9;
      bVar21 = (char)param_1[0x13] != '\0';
      iVar7 = iVar20;
      if (bVar21) {
        iVar7 = iVar15;
      }
      lVar16 = param_1[0xd];
      *(int *)(lVar16 + 0xc + lVar11) = iVar7;
      iVar7 = iVar15;
      if (bVar21) {
        iVar7 = iVar20;
      }
      *(int *)(lVar16 + 0x10 + lVar11) = iVar18;
      *(int *)(lVar16 + 0x14 + lVar11) = iVar7;
      iVar7 = iVar20;
      if ((char)param_1[0x13] != '\0') {
        iVar7 = iVar15;
        iVar15 = iVar20;
      }
      lVar16 = param_1[0xf];
      *(int *)(lVar16 + 0xc + lVar11) = iVar7;
      *(int *)(lVar16 + 0x10 + lVar11) = iVar18;
      *(int *)(lVar16 + 0x14 + lVar11) = iVar15;
      iVar9 = (*(byte *)((longlong)param_1 + 0xe1) ^ 1) + iVar9;
      lVar12 = lVar12 + 2;
      lVar11 = lVar11 + 0x18;
      lVar13 = lVar13 + 1;
    } while (iVar6 + -1 != (int)lVar13);
    iVar10 = iVar10 + iVar6;
    iVar19 = iVar19 + iVar6;
  } while (local_168 != local_164);
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142978fce FUN_142978fce body=3507 status=ok
// SIG undefined FUN_142978fce(void)

longlong FUN_142978fce(int *param_1,longlong param_2)

{
  undefined8 *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  void *_Src;
  double dVar6;
  double dVar7;
  int iVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  double *pdVar24;
  double *pdVar25;
  int *piVar26;
  bool bVar27;
  ulonglong uVar28;
  float fVar29;
  undefined1 auStack_428 [32];
  float *local_408;
  int local_400;
  undefined1 *local_3f8;
  char local_3e1;
  int *local_3e0;
  uint local_3d4;
  float local_3d0;
  float local_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong local_388;
  undefined8 uStack_380;
  int *local_378;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  ulonglong local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 uStack_330;
  undefined4 *local_328;
  ulonglong uStack_320;
  undefined4 *local_318;
  uint local_310;
  undefined4 local_30c;
  undefined1 local_308 [16];
  double *local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  float local_2a8;
  float fStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined **local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  void *local_1e8;
  ulonglong uStack_1e0;
  void *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  uint7 local_144;
  undefined1 uStack_13d;
  undefined1 local_13c;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_118 [8];
  longlong local_f8;
  ulonglong uStack_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  local_2b8 = 1.0;
  uVar28 = 0;
  local_2d8 = 0.0;
  local_2e8 = 0.0;
  dStack_2e0 = 0.0;
  local_2f8 = (double *)0x0;
  uStack_2f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0x80;
  uStack_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_3e0 = param_1;
  if ((longlong)param_1[0x16] != 0) {
    pdVar25 = *(double **)(param_1 + 0x14);
    pdVar24 = pdVar25 + (longlong)param_1[0x16] * 2;
    do {
      uVar28 = uStack_2f0;
      dVar3 = *pdVar25;
      dVar4 = pdVar25[1];
      lVar19 = (longlong)(int)(uint)uStack_2f0;
      uVar13 = (uint)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar13);
      if (uStack_2f0._4_4_ < uVar13) {
        FUN_1403e3958(&local_2f8,uVar28 & 0xffffffff);
      }
      local_2f8[lVar19 * 3] = dVar3;
      local_2f8[lVar19 * 3 + 1] = 0.0;
      local_2f8[lVar19 * 3 + 2] = dVar4;
      pdVar25 = pdVar25 + 2;
    } while (pdVar25 != pdVar24);
    uVar28 = uStack_2f0 & 0xffffffff;
    if (1 < (int)(uint)uStack_2f0) {
      lVar22 = 0;
      lVar19 = uVar28 * 0x18;
      do {
        lVar18 = lVar19 + -0x18;
        local_278 = *(undefined8 *)((longlong)local_2f8 + lVar22 + 0x10);
        local_288 = *(undefined ***)((longlong)local_2f8 + lVar22);
        uStack_280 = ((undefined8 *)((longlong)local_2f8 + lVar22))[1];
        *(undefined8 *)((longlong)local_2f8 + lVar22 + 0x10) =
             *(undefined8 *)((longlong)local_2f8 + lVar19 + -8);
        uVar9 = ((undefined8 *)((longlong)local_2f8 + lVar18))[1];
        *(undefined8 *)((longlong)local_2f8 + lVar22) =
             *(undefined8 *)((longlong)local_2f8 + lVar18);
        ((undefined8 *)((longlong)local_2f8 + lVar22))[1] = uVar9;
        *(undefined8 *)((longlong)local_2f8 + lVar19 + -8) = local_278;
        *(undefined8 *)((longlong)local_2f8 + lVar18) = local_288;
        ((undefined8 *)((longlong)local_2f8 + lVar18))[1] = uStack_280;
        lVar22 = lVar22 + 0x18;
        lVar19 = lVar18;
      } while ((ulonglong)((uint)uStack_2f0 >> 1) * 0x18 != lVar22);
    }
  }
  iVar14 = local_3e0[0x18];
  if ((char)iVar14 != '\0') {
    dVar3 = *local_2f8;
    dVar4 = local_2f8[1];
    dVar5 = local_2f8[2];
    iVar8 = (int)uVar28;
    lVar19 = (longlong)(iVar8 + -1);
    dVar6 = local_2f8[lVar19 * 3] * 0.0 + local_2f8[lVar19 * 3 + 1] * 0.0 +
            local_2f8[lVar19 * 3 + 2];
    dVar7 = dVar6 * 0.0 + 0.0;
    uVar13 = iVar8 + 1;
    uStack_2f0._0_4_ = uVar13;
    if (uStack_2f0._4_4_ < uVar13) {
      FUN_1403e3958(&local_2f8,uVar28);
    }
    uVar13 = (uint)uStack_2f0;
    lVar19 = (longlong)iVar8;
    local_2f8[lVar19 * 3] = dVar7;
    local_2f8[lVar19 * 3 + 1] = dVar7;
    local_2f8[lVar19 * 3 + 2] = dVar6 + 0.0;
    dVar3 = (dVar5 - local_2d8) * local_2b8 +
            (dVar3 - local_2e8) * local_2c8 + (dVar4 - dStack_2e0) * dStack_2c0;
    dVar4 = local_2b8 * dVar3 + local_2d8;
    dVar5 = dStack_2c0 * dVar3 + dStack_2e0;
    dVar3 = dVar3 * local_2c8 + local_2e8;
    lVar19 = (longlong)(int)(uint)uStack_2f0;
    uStack_2f0._0_4_ = (uint)uStack_2f0 + 1;
    if (uStack_2f0._4_4_ < (uint)uStack_2f0) {
      FUN_1403e3958(&local_2f8,uVar13);
    }
    local_2f8[lVar19 * 3] = dVar3;
    local_2f8[lVar19 * 3 + 1] = dVar5;
    local_2f8[lVar19 * 3 + 2] = dVar4;
  }
  fVar29 = (float)local_3e0[1];
  if (360.0 <= fVar29) {
    fVar29 = 360.0;
  }
  if (fVar29 <= 0.1) {
    fVar29 = 0.1;
  }
  local_400 = *local_3e0;
  fVar2 = (float)local_3e0[2];
  dVar3 = (double)fVar29 / (double)local_400;
  dVar4 = dVar3;
  if ((char)local_3e0[3] != '\0') {
    dVar4 = -dVar3;
  }
  if ((*(char *)((longlong)local_3e0 + 0xd) == '\x01') &&
     (((dVar3 != 0.0 || (NAN(dVar3))) &&
      (uVar28 = -(ulonglong)(-dVar4 <= dVar4),
      (double)(~uVar28 & (ulonglong)-dVar4 | uVar28 & (ulonglong)dVar4) < 180.0)))) {
    FUN_146c8abe2(&local_2f8,dVar4,&local_2e8,&local_2c8);
    local_400 = *local_3e0;
  }
  uVar13 = -(uint)(fVar29 != 360.0) & 1;
  local_308 = ZEXT816(0);
  local_400 = local_400 + uVar13;
  if (local_400 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_400);
  }
  local_3d4 = CONCAT31(local_3d4._1_3_,(char)iVar14);
  if (local_400 != 0) {
    FUN_146c7ec56(local_308,local_400);
  }
  local_3f8 = local_308;
  local_408 = (float *)0x0;
  FUN_146c8a403(&local_2e8,&local_2c8,SUB84((double)fVar2,0),dVar4);
  local_408 = (float *)&local_f8;
  FUN_146c8a6d8(&local_2f8,&local_2e8,&local_2c8,0x3fb999999999999a);
  local_3e1 = *(char *)((longlong)local_3e0 + 0xe);
  memset(&uStack_280,0,0x91);
  pdVar25 = local_2f8;
  local_288 = &PTR_FUN_149f3c638;
  local_198 = 0;
  local_190 = 0;
  local_1e8 = (void *)0x0;
  local_1d8 = (void *)0x0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_18c = 0xffffffff00000080;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0x3ff0000000000000;
  uStack_160 = 0x3ff0000000000000;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  _local_144 = 0x101000042c80000;
  local_13c = 1;
  local_138 = 0x3f847ae147ae147b;
  local_130 = 1;
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  local_128 = 0;
  uStack_120 = 0;
  lVar19 = (longlong)(int)(uint)uStack_2f0;
  uStack_1e0 = uStack_2f0 & 0xffffffff;
  if (lVar19 == 0) {
    uStack_1e0 = uStack_2f0 & 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1405b70fe(&local_1e8,uStack_2f0 & 0xffffffff,0);
    memcpy(local_1e8,pdVar25,lVar19 * 0x18);
    iVar14 = uStack_1d0._4_4_;
  }
  uVar15 = local_308._8_4_;
  lVar19 = (longlong)(int)local_308._8_4_;
  uVar9 = local_308._0_8_;
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,local_308._8_4_);
  if (local_308._8_4_ == 0 && iVar14 == 0) {
    uStack_1d0 = (ulonglong)(uint)local_308._8_4_;
  }
  else {
    FUN_146c7ebe6(&local_1d8,local_308._8_4_);
    if (uVar15 != 0) {
      memcpy(local_1d8,(void *)uVar9,lVar19 * 0x38);
    }
  }
  FUN_145c3f772(&local_1b8,&local_f8);
  bVar10 = (byte)local_3d4;
  local_168 = *(undefined8 *)(local_3e0 + 4);
  uStack_160 = *(undefined8 *)(local_3e0 + 6);
  local_148 = (undefined1)local_3e0[0xc];
  local_158 = *(undefined8 *)(local_3e0 + 8);
  uStack_150 = *(undefined8 *)(local_3e0 + 10);
  _local_144 = CONCAT17(1,(uint7)CONCAT24(CONCAT11((byte)local_3d4,-(fVar29 == 360.0)),
                                          local_3e0[0xd]) & 0xffff01ffffffff);
  local_130 = (undefined1)local_3e0[0x12];
  local_13c = (undefined1)local_3e0[0xe];
  local_138 = *(undefined8 *)(local_3e0 + 0x10);
  FUN_142979d82(&local_288);
  FUN_146c00d92(param_2,&local_288);
  if ((((byte)uVar13 & bVar10) == 1) && (local_3e1 != '\0')) {
    uVar13 = 1;
    lVar19 = 0;
    do {
      local_318 = (undefined4 *)0x0;
      local_310 = local_118[lVar19 * 4];
      lVar22 = (longlong)(int)local_310;
      _Src = (void *)(&uStack_120)[lVar19 * 2];
      if (lVar22 == 0) {
        local_30c = 0;
        local_328 = (undefined4 *)0x0;
        uStack_320 = 0;
      }
      else {
        FUN_144a06ca8(&local_318,local_310,0);
        memcpy(local_318,_Src,lVar22 << 2);
        uVar28 = (ulonglong)local_310;
        local_328 = (undefined4 *)0x0;
        uStack_320 = 0;
        if ((int)local_310 < 1) {
          if ((int)local_310 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar28);
          }
        }
        else {
          uStack_320 = (ulonglong)local_310;
          FUN_1446f48e2(&local_328);
          memset(local_328,0,uVar28 * 4);
          uVar17 = 1;
          do {
            uVar15 = FUN_146c061e0(param_2,local_318[uVar17 - 1]);
            local_328[uVar17 - 1] = uVar15;
            bVar27 = uVar17 != uVar28;
            uVar17 = uVar17 + 1;
          } while (bVar27);
        }
      }
      puVar12 = local_318;
      if ((char)uVar13 != '\0') {
        lVar19 = (longlong)(int)local_310;
        if (1 < lVar19) {
          lVar22 = 0;
          puVar16 = local_318;
          do {
            uVar15 = *puVar16;
            *puVar16 = local_318[lVar19 + lVar22 + -1];
            local_318[lVar19 + lVar22 + -1] = uVar15;
            lVar22 = lVar22 + -1;
            puVar16 = puVar16 + 1;
          } while (-lVar22 != (ulonglong)(local_310 >> 1));
        }
        lVar19 = (longlong)(int)(uint)uStack_320;
        if (1 < lVar19) {
          lVar22 = 0;
          puVar16 = local_328;
          do {
            uVar15 = *puVar16;
            *puVar16 = local_328[lVar19 + lVar22 + -1];
            local_328[lVar19 + lVar22 + -1] = uVar15;
            lVar22 = lVar22 + -1;
            puVar16 = puVar16 + 1;
          } while (-lVar22 != (ulonglong)((uint)uStack_320 >> 1));
        }
      }
      local_338 = 0;
      uStack_330 = 0;
      lVar19 = (longlong)(int)local_310;
      local_3d4 = uVar13;
      if (lVar19 != 0) {
        lVar18 = 0;
        lVar22 = 0;
        do {
          uVar28 = uStack_330;
          lVar21 = *(longlong *)
                    (*(longlong *)(param_2 + 0x10) +
                    (ulonglong)(*(uint *)((longlong)puVar12 + lVar18) >> 9) * 8);
          uVar17 = (ulonglong)(*(uint *)((longlong)puVar12 + lVar18) & 0x1ff);
          local_3b8 = *(undefined8 *)(lVar21 + 0x10 + uVar17 * 0x18);
          puVar1 = (undefined8 *)(lVar21 + uVar17 * 0x18);
          local_3c8 = *puVar1;
          uStack_3c0 = puVar1[1];
          lVar21 = (longlong)(int)uStack_330;
          uVar13 = (int)uStack_330 + 1;
          uStack_330 = CONCAT44(uStack_330._4_4_,uVar13);
          if (uStack_330._4_4_ < uVar13) {
            FUN_1403e3958(&local_338,uVar28 & 0xffffffff);
            lVar22 = local_338;
          }
          *(undefined8 *)(lVar22 + 0x10 + lVar21 * 0x18) = local_3b8;
          puVar1 = (undefined8 *)(lVar22 + lVar21 * 0x18);
          *puVar1 = local_3c8;
          puVar1[1] = uStack_3c0;
          lVar18 = lVar18 + 4;
        } while (lVar19 * 4 != lVar18);
      }
      FUN_146bd1842(&local_338,local_368,&local_350);
      uVar13 = local_368._12_4_;
      local_368._8_4_ = local_368._8_4_;
      local_368._0_8_ = local_368._0_8_ ^ 0x8000000000000000;
      local_368._12_4_ = uVar13 ^ 0x80000000;
      local_358 = local_358 ^ 0x8000000000000000;
      *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
      local_378 = (int *)0x0;
      uStack_370 = 0;
      local_388 = 0;
      uStack_380 = 0;
      FUN_146bd1a1a(&local_338,&local_378);
      if ((longlong)(int)uStack_370 != 0) {
        piVar26 = local_378 + (longlong)(int)uStack_370 * 3;
        piVar20 = local_378;
        do {
          local_3c8 = CONCAT44(local_318[piVar20[1]],local_318[*piVar20]);
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,local_318[piVar20[2]]);
          iVar14 = FUN_146c01152(param_2,&local_3c8);
          uVar28 = uStack_380;
          if (-1 < iVar14) {
            lVar19 = (longlong)(int)uStack_380;
            uVar13 = (int)uStack_380 + 1;
            uStack_380 = CONCAT44(uStack_380._4_4_,uVar13);
            if (uStack_380._4_4_ < uVar13) {
              FUN_1446f48e2(&local_388,uVar28 & 0xffffffff);
            }
            *(int *)(local_388 + lVar19 * 4) = iVar14;
          }
          piVar20 = piVar20 + 3;
        } while (piVar20 != piVar26);
      }
      if (*(longlong *)(param_2 + 0x208) != 0) {
        FUN_14297a74d(param_2,&local_388);
        local_3b0 = 0;
        uStack_3a8 = 0;
        local_3a0 = 0;
        local_398 = 0x3ff0000000000000;
        local_3c8 = local_350;
        uStack_3c0 = uStack_348;
        local_3b8 = local_340;
        local_298 = DAT_14c8463c8;
        local_2a8 = (float)DAT_14c8463b8;
        fStack_2a4 = (float)DAT_14c8463b8._4_4_;
        uStack_2a0 = (undefined4)DAT_14c8463c0;
        uStack_29c = DAT_14c8463c0._4_4_;
        FUN_146bfb7f2(&local_3b0,&local_2a8,local_368);
        if ((char)local_3e0[0xc] == '\x01') {
          local_2a8 = (float)*(double *)(local_3e0 + 4) * (1.0 / (float)local_144);
          fStack_2a4 = (1.0 / (float)local_144) * (float)*(double *)(local_3e0 + 6);
          dVar4 = *(double *)(local_3e0 + 10);
          dVar3 = *(double *)(local_3e0 + 8);
          local_400 = (uint)local_400._1_3_ << 8;
          pfVar23 = &local_2a8;
          local_408 = &local_3d0;
        }
        else {
          fStack_2a4 = (float)*(double *)(local_3e0 + 10);
          local_2a8 = (float)*(double *)(local_3e0 + 8);
          dVar4 = *(double *)(local_3e0 + 6);
          dVar3 = *(double *)(local_3e0 + 4);
          local_400 = CONCAT31(local_400._1_3_,1);
          pfVar23 = &local_3d0;
          local_408 = &local_2a8;
        }
        local_3cc = (float)dVar4;
        local_3d0 = (float)dVar3;
        FUN_14297ac1f(param_2,&local_388,&local_3c8,pfVar23);
      }
      if (local_388 != 0) {
        FUN_1400020a8();
      }
      uVar11 = local_3d4;
      if (local_378 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (local_338 != 0) {
        FUN_1400020a8();
      }
      if (local_328 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_318 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      lVar19 = 1;
      uVar13 = 0;
    } while ((uVar11 & 1) != 0);
  }
  FUN_146c611c0(&local_288);
  if (local_308._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  uVar28 = uStack_f0 >> 0x20;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  if ((int)uVar28 != 0) {
    FUN_1447a08a2(&local_f8,0);
  }
  uStack_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    FUN_1446efbd8(local_e8,0);
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142979d82 FUN_142979d82 body=2506 status=ok
// SIG undefined FUN_142979d82(void)

code * FUN_142979d82(code *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  code **local_128;
  int local_118;
  uint local_114;
  code *local_110;
  uint local_104;
  uint local_100;
  uint local_fc;
  ulonglong local_f8;
  code *local_f0;
  code **local_e8;
  code *local_e0;
  int local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  void **local_c8;
  uint local_c0;
  int local_bc;
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [3];
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  code *local_68;
  code **ppcStack_60;
  code *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pcVar3 = *(char **)(param_1 + 0x160);
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 != '\0') goto LAB_142979de5;
    pcVar4 = *(code **)(pcVar3 + 0x70);
    plVar9 = (longlong *)(pcVar3 + 0x90);
    if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(pcVar3 + 0x80);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar6 = (*pcVar4)(uVar7);
    *pcVar3 = cVar6;
    if (cVar6 != '\0') goto LAB_142979de5;
  }
  uVar2 = *(uint *)(param_1 + 0xa8);
  uVar12 = (ulonglong)(int)uVar2;
  if (1 < (longlong)uVar12) {
    uVar20 = *(uint *)(param_1 + 0xb8);
    if ((1 < (int)uVar20) && (*(uint *)(param_1 + 200) == uVar20 || *(uint *)(param_1 + 200) == 0))
    {
      iVar11 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104);
      uVar22 = uVar2 - iVar11;
      if (uVar22 != 0) {
        uVar21 = uVar20 - 1;
        local_104 = uVar21;
        if (param_1[0x148] != (code)0x0) {
          local_104 = uVar20;
        }
        uVar17 = uVar2 - 1;
        local_fc = uVar17;
        if (param_1[0x149] != (code)0x0) {
          local_fc = uVar2;
        }
        local_110 = (code *)CONCAT44(local_110._4_4_,uVar22 * uVar20);
        local_78 = (void *)0x0;
        local_98[2] = 0;
        uStack_80 = 0;
        uStack_70 = (ulonglong)uVar2;
        local_f8 = (ulonglong)uVar20;
        FUN_1446f48e2(&local_78);
        memset(local_78,0,uVar12 * 4);
        uVar20 = (uint)uStack_80;
        lVar25 = (longlong)(int)(uint)uStack_80;
        local_114 = uVar22;
        local_100 = uVar21;
        if ((int)(uint)uStack_80 < (int)uVar2) {
          uVar22 = uVar2 - (uint)uStack_80;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
          if (uStack_80._4_4_ - uVar20 < uVar22) {
            FUN_1446f48e2(local_98 + 2);
          }
          memset((void *)(lVar25 * 4 + local_98[2]),0,(longlong)(int)uVar22 << 2);
        }
        else if (uVar2 < (uint)uStack_80) {
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
          FUN_14479f406();
        }
        local_110 = (code *)CONCAT44(local_110._4_4_,(int)local_110 + iVar11);
        pcVar4 = param_1 + 0x108;
        iVar16 = 0;
        iVar18 = 0;
        iVar24 = 0;
        uVar23 = 0;
        do {
          if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
            pcVar8 = *(code **)(param_1 + 0x110);
            if (*(code **)(param_1 + 0x110) == (code *)0x0) {
              pcVar8 = pcVar4;
            }
            iVar19 = *(int *)(pcVar8 + (ulonglong)
                                       ((uint)uVar23 & *(int *)(param_1 + 0x118) + 0x7fffffffU) * 4)
            ;
            if (iVar19 != -1) {
              do {
                if (uVar23 == *(uint *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar19 * 0xc)) {
                  bVar5 = true;
                  iVar19 = iVar16;
                  iVar16 = iVar16 + 1;
                  goto LAB_142979f7e;
                }
                iVar19 = *(int *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar19 * 0xc + 4);
              } while (iVar19 != -1);
            }
          }
          bVar5 = false;
          iVar19 = iVar18;
          iVar18 = iVar18 + 1;
LAB_142979f7e:
          *(int *)((longlong)local_78 + uVar23 * 4) = iVar19;
          uVar1 = uVar23 + 1;
          if ((uVar23 < uVar17 | (byte)param_1[0x149]) == 1) {
            bVar26 = false;
            if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
              pcVar8 = *(code **)(param_1 + 0x110);
              if (*(code **)(param_1 + 0x110) == (code *)0x0) {
                pcVar8 = pcVar4;
              }
              uVar20 = (uint)((uVar1 & 0xffffffff) % (ulonglong)uVar2);
              iVar19 = *(int *)(pcVar8 + (ulonglong)
                                         (*(int *)(param_1 + 0x118) + 0x7fffffffU & uVar20) * 4);
              if (iVar19 == -1) {
                bVar26 = false;
              }
              else {
                do {
                  bVar26 = *(uint *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar19 * 0xc) ==
                           uVar20;
                  if (bVar26) break;
                  iVar19 = *(int *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar19 * 0xc + 4);
                } while (iVar19 != -1);
              }
            }
            if (bVar5) {
              iVar19 = iVar24;
              if (bVar26 != false) {
                iVar19 = -1;
              }
              *(int *)(local_98[2] + uVar23 * 4) = iVar19;
              iVar24 = (uint)(bVar26 ^ 1) + iVar24;
            }
            else {
              *(int *)(local_98[2] + uVar23 * 4) = iVar24;
              iVar24 = (iVar24 - (uint)bVar26) + 2;
            }
          }
          uVar23 = uVar1;
        } while (uVar1 != uVar12);
        uVar20 = iVar24 * local_104;
        local_98[0] = 0;
        local_98[1] = 0;
        local_118 = iVar11;
        FUN_14051b394(local_98,uVar20 * 3,CONCAT71((uint7)(uint3)(uVar17 >> 8),1));
        local_138 = (int)local_110;
        FUN_146c5e8c6(param_1,(ulonglong)local_110 & 0xffffffff,uVar20,0);
        pcVar3 = *(char **)(param_1 + 0x160);
        if (pcVar3 == (char *)0x0) {
LAB_14297a0f2:
          ppcStack_60 = &local_e0;
          local_d8 = local_118;
          local_d4 = local_114;
          local_d0 = (int)local_f8;
          local_c8 = &local_78;
          local_58 = (code *)0x0;
          local_50 = (code **)((ulonglong)local_50 & 0xffffffff00000000);
          local_68 = FUN_14297f496;
          local_130 = 0;
          local_128 = &local_58;
          local_e0 = param_1;
          FUN_1401f8d10(L"ParallelFor Task",uVar2,1);
          pcVar3 = *(char **)(param_1 + 0x160);
          if (pcVar3 == (char *)0x0) {
LAB_14297a247:
            local_9c = 0;
            local_a0 = 0;
            FUN_146c655da(param_1,&local_78);
            local_d8 = (int)local_f8;
            local_d0 = local_118;
            local_cc = local_114;
            local_c0 = local_fc;
            local_b8 = local_98 + 2;
            local_b0 = local_98;
            local_a8 = local_9c;
            local_58 = (code *)0x0;
            local_50 = (code **)((ulonglong)local_50 & 0xffffffff00000000);
            local_68 = FUN_14297f71c;
            ppcStack_60 = &local_e0;
            local_130 = 0;
            local_128 = &local_58;
            local_e0 = param_1;
            local_d4 = uVar2;
            local_c8 = &local_78;
            local_bc = iVar24;
            FUN_1401f8d10(L"ParallelFor Task",local_104,1);
            pcVar3 = *(char **)(param_1 + 0x160);
            if (pcVar3 == (char *)0x0) {
LAB_14297a37d:
              local_68 = (code *)0x0;
              ppcStack_60 = (code **)0x0;
              FUN_146ba0be8(&local_68,(ulonglong)local_110 & 0xffffffff,1);
              if (0 < (int)uVar20) {
                lVar25 = 8;
                lVar10 = 0;
                do {
                  lVar13 = *(longlong *)(param_1 + 0x58);
                  lVar14 = (longlong)*(int *)(lVar13 + -8 + lVar25);
                  lVar15 = (longlong)*(int *)(lVar13 + -4 + lVar25);
                  lVar13 = (longlong)*(int *)(lVar13 + lVar25);
                  *(double *)(local_68 + lVar14 * 0x18) =
                       *(double *)(local_98[0] + lVar10) + *(double *)(local_68 + lVar14 * 0x18);
                  *(double *)(local_68 + lVar14 * 0x18 + 8) =
                       *(double *)(local_98[0] + 8 + lVar10) +
                       *(double *)(local_68 + lVar14 * 0x18 + 8);
                  *(double *)(local_68 + lVar14 * 0x18 + 0x10) =
                       *(double *)(local_98[0] + 0x10 + lVar10) +
                       *(double *)(local_68 + lVar14 * 0x18 + 0x10);
                  *(double *)(local_68 + lVar15 * 0x18) =
                       *(double *)(local_98[0] + 0x18 + lVar10) +
                       *(double *)(local_68 + lVar15 * 0x18);
                  *(double *)(local_68 + lVar15 * 0x18 + 8) =
                       *(double *)(local_98[0] + 0x20 + lVar10) +
                       *(double *)(local_68 + lVar15 * 0x18 + 8);
                  *(double *)(local_68 + lVar15 * 0x18 + 0x10) =
                       *(double *)(local_98[0] + 0x28 + lVar10) +
                       *(double *)(local_68 + lVar15 * 0x18 + 0x10);
                  *(double *)(local_68 + lVar13 * 0x18) =
                       *(double *)(local_98[0] + 0x30 + lVar10) +
                       *(double *)(local_68 + lVar13 * 0x18);
                  *(double *)(local_68 + lVar13 * 0x18 + 8) =
                       *(double *)(local_98[0] + 0x38 + lVar10) +
                       *(double *)(local_68 + lVar13 * 0x18 + 8);
                  *(double *)(local_68 + lVar13 * 0x18 + 0x10) =
                       *(double *)(local_98[0] + 0x40 + lVar10) +
                       *(double *)(local_68 + lVar13 * 0x18 + 0x10);
                  lVar10 = lVar10 + 0x48;
                  lVar25 = lVar25 + 0xc;
                } while ((ulonglong)uVar20 * 0x48 != lVar10);
              }
              pcVar3 = *(char **)(param_1 + 0x160);
              if (pcVar3 == (char *)0x0) {
LAB_14297a511:
                local_50 = &local_f0;
                local_e0 = (code *)0x0;
                local_d8 = 0;
                local_58 = FUN_14298014e;
                local_128 = &local_e0;
                local_130 = 0;
                local_f0 = param_1;
                local_e8 = &local_68;
                FUN_1401f8d10(L"ParallelFor Task",(ulonglong)local_110 & 0xffffffff,1);
                pcVar3 = *(char **)(param_1 + 0x160);
                if (pcVar3 == (char *)0x0) {
LAB_14297a5a5:
                  if (param_1[0x148] == (code)0x0) {
                    local_110 = param_1 + 0x168;
                    iVar11 = local_114 * local_100 + local_118;
                    uVar23 = 0;
                    do {
                      if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
                        pcVar8 = *(code **)(param_1 + 0x110);
                        if (*(code **)(param_1 + 0x110) == (code *)0x0) {
                          pcVar8 = pcVar4;
                        }
                        iVar18 = *(int *)(pcVar8 + (ulonglong)
                                                   ((uint)uVar23 &
                                                   *(int *)(param_1 + 0x118) + 0x7fffffffU) * 4);
                        if (iVar18 != -1) {
                          do {
                            if (uVar23 == *(uint *)(*(longlong *)(param_1 + 0xd0) +
                                                   (longlong)iVar18 * 0xc)) {
                              iVar18 = *(int *)((longlong)local_78 + uVar23 * 4);
                              goto LAB_14297a659;
                            }
                            iVar18 = *(int *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar18 * 0xc
                                             + 4);
                          } while (iVar18 != -1);
                        }
                      }
                      iVar18 = *(int *)((longlong)local_78 + uVar23 * 4) + local_118;
LAB_14297a659:
                      iVar16 = *(int *)(param_1 + 0x170);
                      *(uint *)(param_1 + 0x170) = iVar16 + 1U;
                      if (*(uint *)(param_1 + 0x174) < iVar16 + 1U) {
                        FUN_1446f48e2(local_110,iVar16);
                      }
                      *(int *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar16 * 4) = iVar18;
                      if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
                        pcVar8 = *(code **)(param_1 + 0x110);
                        if (*(code **)(param_1 + 0x110) == (code *)0x0) {
                          pcVar8 = pcVar4;
                        }
                        iVar18 = *(int *)(pcVar8 + (ulonglong)
                                                   ((uint)uVar23 &
                                                   *(int *)(param_1 + 0x118) + 0x7fffffffU) * 4);
                        if (iVar18 != -1) {
                          do {
                            if (uVar23 == *(uint *)(*(longlong *)(param_1 + 0xd0) +
                                                   (longlong)iVar18 * 0xc)) {
                              iVar18 = *(int *)((longlong)local_78 + uVar23 * 4);
                              goto LAB_14297a6f1;
                            }
                            iVar18 = *(int *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar18 * 0xc
                                             + 4);
                          } while (iVar18 != -1);
                        }
                      }
                      iVar18 = *(int *)((longlong)local_78 + uVar23 * 4) + iVar11;
LAB_14297a6f1:
                      iVar16 = *(int *)(param_1 + 0x180);
                      *(uint *)(param_1 + 0x180) = iVar16 + 1U;
                      if (*(uint *)(param_1 + 0x184) < iVar16 + 1U) {
                        FUN_1446f48e2(param_1 + 0x178,iVar16);
                      }
                      *(int *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar16 * 4) = iVar18;
                      uVar23 = uVar23 + 1;
                    } while (uVar23 != uVar12);
                  }
                }
                else if (*pcVar3 == '\0') {
                  pcVar8 = *(code **)(pcVar3 + 0x70);
                  plVar9 = (longlong *)(pcVar3 + 0x90);
                  if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
                    plVar9 = *(longlong **)(pcVar3 + 0x80);
                  }
                  uVar7 = (**(code **)(*plVar9 + 8))();
                  cVar6 = (*pcVar8)(uVar7);
                  *pcVar3 = cVar6;
                  if (cVar6 == '\0') goto LAB_14297a5a5;
                }
              }
              else if (*pcVar3 == '\0') {
                pcVar8 = *(code **)(pcVar3 + 0x70);
                plVar9 = (longlong *)(pcVar3 + 0x90);
                if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
                  plVar9 = *(longlong **)(pcVar3 + 0x80);
                }
                (**(code **)(*plVar9 + 8))();
                cVar6 = (*pcVar8)();
                *pcVar3 = cVar6;
                if (cVar6 == '\0') goto LAB_14297a511;
              }
              if (local_68 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (*pcVar3 == '\0') {
              pcVar8 = *(code **)(pcVar3 + 0x70);
              plVar9 = (longlong *)(pcVar3 + 0x90);
              if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
                plVar9 = *(longlong **)(pcVar3 + 0x80);
              }
              uVar7 = (**(code **)(*plVar9 + 8))();
              cVar6 = (*pcVar8)(uVar7);
              *pcVar3 = cVar6;
              if (cVar6 == '\0') goto LAB_14297a37d;
            }
          }
          else if (*pcVar3 == '\0') {
            pcVar8 = *(code **)(pcVar3 + 0x70);
            plVar9 = (longlong *)(pcVar3 + 0x90);
            if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
              plVar9 = *(longlong **)(pcVar3 + 0x80);
            }
            uVar7 = (**(code **)(*plVar9 + 8))();
            cVar6 = (*pcVar8)(uVar7);
            *pcVar3 = cVar6;
            if (cVar6 == '\0') goto LAB_14297a247;
          }
        }
        else if (*pcVar3 == '\0') {
          pcVar8 = *(code **)(pcVar3 + 0x70);
          plVar9 = (longlong *)(pcVar3 + 0x90);
          if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
            plVar9 = *(longlong **)(pcVar3 + 0x80);
          }
          uVar7 = (**(code **)(*plVar9 + 8))();
          cVar6 = (*pcVar8)(uVar7);
          *pcVar3 = cVar6;
          if (cVar6 == '\0') goto LAB_14297a0f2;
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        if (local_98[2] != 0) {
          FUN_1400020a8();
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_142979de5;
      }
    }
  }
  FUN_146c6544c(param_1);
LAB_142979de5:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14297a74d FUN_14297a74d body=1233 status=ok
// SIG undefined FUN_14297a74d(void)

void FUN_14297a74d(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d0;
  uint *local_1c0;
  ulonglong local_1b8;
  uint *local_1b0;
  code *local_1a8;
  undefined1 **local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 *local_158;
  undefined1 local_14c [4];
  longlong local_148;
  ulonglong uStack_140;
  undefined1 local_138 [16];
  longlong local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 uStack_118;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  undefined1 *local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  longlong *local_d0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_1f8;
  if (*(int *)(*(longlong *)(param_1 + 0x208) + 0x38) < 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = **(longlong **)(*(longlong *)(param_1 + 0x208) + 0x30);
  }
  local_148 = *param_2;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_140 = CONCAT44(uStack_140._4_4_,(int)param_2[1]);
  FUN_146bc855c(&local_b8,&local_148);
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_149f3c650;
  local_d0 = &local_b8;
  local_f8[0] = &LAB_14297f242;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0x80;
  uStack_118 = 0xffffffff;
  local_114 = 0;
  local_108 = (undefined1 *)0x0;
  local_100 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    puVar7 = (uint *)*param_2;
    local_1c0 = puVar7 + (int)param_2[1];
    do {
      uVar2 = *puVar7;
      local_1b0 = puVar7;
      if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar9 + 0x78) + (ulonglong)(uVar2 * 3 >> 9) * 8)
                       + (ulonglong)(uVar2 * 3 & 0x1ff) * 4)) {
        FUN_146c2fdd8(lVar9,(ulonglong)uVar2,1);
      }
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
      local_168 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
      local_170 = *(undefined8 *)(lVar10 + (ulonglong)(uVar2 & 0x1ff) * 0xc);
      local_17c = 0xffffffffffffffff;
      local_174 = 0xffffffff;
      lVar10 = 0;
      local_1b8 = (ulonglong)uVar2;
      do {
        uVar2 = *(uint *)((longlong)&local_170 + lVar10 * 4);
        if ((int)uStack_140 != local_114) {
          puVar6 = local_108;
          if (local_108 == (undefined1 *)0x0) {
            puVar6 = local_110;
          }
          iVar3 = *(int *)(puVar6 + (ulonglong)(local_100 - 1U & uVar2) * 4);
          while (iVar3 != -1) {
            lVar1 = local_148 + (longlong)iVar3 * 0x10;
            if (*(uint *)(local_148 + (longlong)iVar3 * 0x10) == uVar2) {
              if ((lVar1 != 0) && ((undefined4 *)(lVar1 + 4) != (undefined4 *)0x0)) {
                *(undefined4 *)((longlong)&local_17c + lVar10 * 4) = *(undefined4 *)(lVar1 + 4);
                goto LAB_14297aa10;
              }
              break;
            }
            iVar3 = *(int *)(lVar1 + 8);
          }
        }
        local_1a0 = local_f8;
        local_1a8 = FUN_146bfd2ee;
        local_1d0 = 1;
        local_1d8 = 1;
        FUN_146c39520(&local_198,param_1,uVar2,&local_1a8);
        local_160 = CONCAT44((float)local_190,(float)local_198);
        local_158 = (undefined4 *)CONCAT44(local_158._4_4_,(float)local_188);
        uVar5 = FUN_146c2f9e2(lVar9,&local_160);
        local_158 = (undefined4 *)((longlong)&local_17c + lVar10 * 4);
        *local_158 = uVar5;
        local_160 = (longlong)&local_170 + lVar10 * 4;
        FUN_140263e2a(&local_148,local_14c,&local_160,0);
LAB_14297aa10:
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      FUN_146c01580(lVar9,local_1b8,&local_17c,1);
      puVar7 = local_1b0 + 1;
    } while (puVar7 != local_1c0);
    local_100 = 0;
    if (local_108 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar4 = uStack_140 >> 0x20;
  uStack_140 = uStack_140 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_14472eb64(&local_148,0);
  }
  uStack_118 = 0xffffffff;
  local_114 = 0;
  local_120 = 0;
  if (0x80 < local_11c) {
    local_11c = 0x80;
    FUN_1446efbd8(local_138,0);
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != (undefined1 *)0x0) {
    pppuVar8 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar8 = &local_d8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar4 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_1447a08a2(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)local_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14297ac1f FUN_14297ac1f body=1378 status=ok
// SIG undefined FUN_14297ac1f(void)

void FUN_14297ac1f(longlong param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
                  float *param_5,char param_6)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_1c8 [40];
  float *local_1a0;
  uint *local_198;
  ulonglong local_190;
  uint *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 *puStack_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  float local_14c;
  float local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 uStack_e8;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)local_1c8;
  local_180 = param_3;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x208) + 0x28) < 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = **(longlong **)(*(longlong *)(param_1 + 0x208) + 0x20);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_ec = 0x80;
    uStack_e8 = 0xffffffff;
    local_e4 = 0;
    local_d8 = (undefined1 *)0x0;
    local_d0 = 0;
    local_128 = 0;
    uStack_120 = 0;
    puVar6 = (uint *)*param_2;
    local_198 = puVar6 + *(int *)(param_2 + 1);
    fVar13 = 3.4028235e+38;
    fVar15 = -3.4028235e+38;
    fVar16 = -3.4028235e+38;
    fVar14 = 3.4028235e+38;
    local_1a0 = param_4;
    do {
      uVar5 = *puVar6;
      local_188 = puVar6;
      if (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x78) + (ulonglong)(uVar5 * 3 >> 9) * 8)
                       + (ulonglong)(uVar5 * 3 & 0x1ff) * 4)) {
        FUN_146c2d498(lVar8,(ulonglong)uVar5,1);
      }
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
      local_130 = *(undefined4 *)(lVar10 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_138 = *(undefined8 *)(lVar10 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
      local_144 = 0xffffffffffffffff;
      local_13c = 0xffffffff;
      lVar10 = 0;
      local_190 = (ulonglong)uVar5;
      do {
        uVar5 = *(uint *)((longlong)&local_138 + lVar10 * 4);
        if ((int)uStack_110 != local_e4) {
          puVar7 = local_d8;
          if (local_d8 == (undefined1 *)0x0) {
            puVar7 = local_e0;
          }
          iVar2 = *(int *)(puVar7 + (ulonglong)(local_d0 - 1U & uVar5) * 4);
          while (iVar2 != -1) {
            lVar12 = local_118 + (longlong)iVar2 * 0x10;
            if (*(uint *)(local_118 + (longlong)iVar2 * 0x10) == uVar5) {
              if ((lVar12 != 0) && ((undefined4 *)(lVar12 + 4) != (undefined4 *)0x0)) {
                *(undefined4 *)((longlong)&local_144 + lVar10 * 4) = *(undefined4 *)(lVar12 + 4);
                goto LAB_14297af29;
              }
              break;
            }
            iVar2 = *(int *)(lVar12 + 8);
          }
        }
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        local_168 = *(undefined8 *)(lVar12 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
        plVar1 = (longlong *)(lVar12 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
        local_178 = *plVar1;
        puStack_170 = (undefined4 *)plVar1[1];
        FUN_146bca7ae(local_180,&local_160,&local_178,2);
        fVar17 = (float)local_158;
        fVar18 = (float)local_160;
        local_14c = fVar18;
        local_148 = fVar17;
        uVar4 = FUN_146c2d0a4(lVar8,&local_14c);
        uVar11 = uStack_120;
        puVar9 = (undefined4 *)((longlong)&local_144 + lVar10 * 4);
        *puVar9 = uVar4;
        lVar12 = (longlong)(int)uStack_120;
        uVar5 = (int)uStack_120 + 1;
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
        if (uStack_120._4_4_ < uVar5) {
          FUN_1446f48e2(&local_128,uVar11 & 0xffffffff);
          uVar4 = *puVar9;
        }
        local_178 = (longlong)&local_138 + lVar10 * 4;
        fVar3 = fVar18;
        if (fVar14 <= fVar18) {
          fVar3 = fVar14;
        }
        fVar14 = fVar3;
        if (fVar18 <= fVar16) {
          fVar18 = fVar16;
        }
        fVar16 = fVar18;
        fVar18 = fVar17;
        if (fVar13 <= fVar17) {
          fVar18 = fVar13;
        }
        fVar13 = fVar18;
        if (fVar17 <= fVar15) {
          fVar17 = fVar15;
        }
        fVar15 = fVar17;
        *(undefined4 *)(local_128 + lVar12 * 4) = uVar4;
        puStack_170 = puVar9;
        FUN_140263e2a(&local_118,&local_160,&local_178,0);
LAB_14297af29:
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      FUN_146c01486(lVar8,local_190,&local_144,1);
      puVar6 = local_188 + 1;
    } while (puVar6 != local_198);
    if (param_6 == '\0') {
      fVar15 = *local_1a0;
      fVar17 = local_1a0[1];
    }
    else {
      fVar17 = local_1a0[1] / (float)(-(uint)(0.0 <= fVar15 - fVar13) & (uint)(fVar15 - fVar13));
      fVar15 = *local_1a0 / (float)(-(uint)(0.0 <= fVar16 - fVar14) & (uint)(fVar16 - fVar14));
    }
    if ((longlong)(int)uStack_120 != 0) {
      lVar10 = 0;
      do {
        uVar11 = (ulonglong)(*(uint *)(local_128 + lVar10) >> 5 & 0x3fffff8);
        lVar12 = *(longlong *)(*(longlong *)(lVar8 + 0x48) + uVar11);
        uVar5 = (*(uint *)(local_128 + lVar10) & 0xff) << 3;
        fVar16 = *(float *)(lVar12 + (ulonglong)(uVar5 | 4));
        fVar18 = param_5[1];
        *(float *)(lVar12 + (ulonglong)uVar5) =
             (*(float *)(lVar12 + (ulonglong)uVar5) - fVar14) * fVar15 + *param_5;
        *(float *)(*(longlong *)(*(longlong *)(lVar8 + 0x48) + uVar11) + (ulonglong)(uVar5 | 4)) =
             (fVar16 - fVar13) * fVar17 + fVar18;
        lVar10 = lVar10 + 4;
      } while ((longlong)(int)uStack_120 * 4 != lVar10);
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    local_d0 = 0;
    if (local_d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar11 = uStack_110 >> 0x20;
    uStack_110 = uStack_110 & 0xffffffff00000000;
    if ((int)uVar11 != 0) {
      FUN_14472eb64(&local_118,0);
    }
    uStack_e8 = 0xffffffff;
    local_e4 = 0;
    local_f0 = 0;
    if (0x80 < local_ec) {
      local_ec = 0x80;
      FUN_1446efbd8(local_108,0);
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)local_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14297b182 FUN_14297b182 body=3101 status=ok
// SIG undefined FUN_14297b182(void)

longlong FUN_14297b182(int *param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  byte bVar5;
  void *pvVar6;
  double dVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int *piVar23;
  bool bVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auStack_408 [32];
  float *local_3e8;
  int local_3e0;
  undefined1 *local_3d8;
  int *local_3d0;
  uint local_3c4;
  float local_3c0;
  float local_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong local_378;
  undefined8 uStack_370;
  int *local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  ulonglong local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 uStack_320;
  undefined4 *local_318;
  ulonglong uStack_310;
  undefined4 *local_308;
  uint local_300;
  undefined4 local_2fc;
  undefined1 local_2f8 [16];
  void *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  float local_298;
  float fStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined **local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  void *local_1d8;
  ulonglong uStack_1d0;
  void *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  uint7 local_134;
  undefined1 uStack_12d;
  undefined1 local_12c;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  uint local_108 [8];
  longlong local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0x3ff0000000000000;
  local_2c8 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = (void *)0x0;
  uStack_2e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0x80;
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_3d0 = param_1;
  if ((longlong)param_1[0x16] != 0) {
    puVar21 = *(undefined8 **)(param_1 + 0x14);
    puVar22 = puVar21 + (longlong)param_1[0x16] * 2;
    do {
      uVar25 = uStack_2e0;
      uVar2 = *puVar21;
      uVar3 = puVar21[1];
      lVar16 = (longlong)(int)(uint)uStack_2e0;
      uVar10 = (uint)uStack_2e0 + 1;
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar10);
      if (uStack_2e0._4_4_ < uVar10) {
        FUN_1403e3958(&local_2e8,uVar25 & 0xffffffff);
      }
      *(undefined8 *)((longlong)local_2e8 + lVar16 * 0x18) = uVar2;
      *(undefined8 *)((longlong)local_2e8 + lVar16 * 0x18 + 8) = 0;
      *(undefined8 *)((longlong)local_2e8 + lVar16 * 0x18 + 0x10) = uVar3;
      puVar21 = puVar21 + 2;
    } while (puVar21 != puVar22);
    if (1 < (longlong)(int)(uint)uStack_2e0) {
      lVar19 = 0;
      lVar16 = (longlong)(int)(uint)uStack_2e0 * 0x18;
      do {
        lVar15 = lVar16 + -0x18;
        local_268 = *(undefined8 *)((longlong)local_2e8 + lVar19 + 0x10);
        local_278 = *(undefined ***)((longlong)local_2e8 + lVar19);
        uStack_270 = ((undefined8 *)((longlong)local_2e8 + lVar19))[1];
        *(undefined8 *)((longlong)local_2e8 + lVar19 + 0x10) =
             *(undefined8 *)((longlong)local_2e8 + lVar16 + -8);
        uVar2 = ((undefined8 *)((longlong)local_2e8 + lVar15))[1];
        *(undefined8 *)((longlong)local_2e8 + lVar19) =
             *(undefined8 *)((longlong)local_2e8 + lVar15);
        ((undefined8 *)((longlong)local_2e8 + lVar19))[1] = uVar2;
        *(undefined8 *)((longlong)local_2e8 + lVar16 + -8) = local_268;
        *(undefined8 *)((longlong)local_2e8 + lVar15) = local_278;
        ((undefined8 *)((longlong)local_2e8 + lVar15))[1] = uStack_270;
        lVar19 = lVar19 + 0x18;
        lVar16 = lVar15;
      } while ((ulonglong)((uint)uStack_2e0 >> 1) * 0x18 != lVar19);
    }
  }
  fVar26 = (float)local_3d0[1];
  if (360.0 <= fVar26) {
    fVar26 = 360.0;
  }
  if (fVar26 <= 0.1) {
    fVar26 = 0.1;
  }
  local_3e0 = *local_3d0;
  fVar1 = (float)local_3d0[2];
  dVar7 = (double)fVar26 / (double)local_3e0;
  dVar4 = dVar7;
  if ((char)local_3d0[3] != '\0') {
    dVar4 = -dVar7;
  }
  if ((*(char *)((longlong)local_3d0 + 0xd) == '\x01') &&
     (((dVar7 != 0.0 || (NAN(dVar7))) &&
      (uVar25 = -(ulonglong)(-dVar4 <= dVar4),
      (double)(~uVar25 & (ulonglong)-dVar4 | uVar25 & (ulonglong)dVar4) < 180.0)))) {
    FUN_146c8abe2(&local_2e8,dVar4,&local_2d8,&local_2b8);
    local_3e0 = *local_3d0;
  }
  uVar10 = -(uint)(fVar26 != 360.0) & 1;
  local_2f8 = ZEXT816(0);
  local_3e0 = local_3e0 + uVar10;
  if (local_3e0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_3e0);
  }
  if (local_3e0 != 0) {
    FUN_146c7ec56(local_2f8,local_3e0);
  }
  local_3d8 = local_2f8;
  local_3e8 = (float *)0x0;
  FUN_146c8a403(&local_2d8,&local_2b8,SUB84((double)fVar1,0),dVar4);
  if ((char)local_3d0[0x18] == '\x01') {
    local_3e8 = (float *)&local_e8;
    FUN_146c8a6d8(&local_2e8,&local_2d8,&local_2b8,0x3fb999999999999a);
  }
  bVar5 = *(byte *)((longlong)local_3d0 + 0xe);
  memset(&uStack_270,0,0x91);
  pvVar6 = local_2e8;
  local_278 = &PTR_FUN_149f3c638;
  local_188 = 0;
  local_180 = 0;
  local_1d8 = (void *)0x0;
  local_1c8 = (void *)0x0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0x3ff0000000000000;
  uStack_150 = 0x3ff0000000000000;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  _local_134 = 0x101000042c80000;
  local_12c = 1;
  local_128 = 0x3f847ae147ae147b;
  local_120 = 1;
  local_108[4] = 0;
  local_108[5] = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_108[3] = 0;
  local_118 = 0;
  uStack_110 = 0;
  lVar16 = (longlong)(int)(uint)uStack_2e0;
  uStack_1d0 = uStack_2e0 & 0xffffffff;
  if (lVar16 == 0) {
    uStack_1d0 = uStack_2e0 & 0xffffffff;
    iVar11 = 0;
  }
  else {
    FUN_1405b70fe(&local_1d8,uStack_2e0 & 0xffffffff,0);
    memcpy(local_1d8,pvVar6,lVar16 * 0x18);
    iVar11 = uStack_1c0._4_4_;
  }
  uVar12 = local_2f8._8_4_;
  lVar16 = (longlong)(int)local_2f8._8_4_;
  uVar2 = local_2f8._0_8_;
  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,local_2f8._8_4_);
  if (local_2f8._8_4_ == 0 && iVar11 == 0) {
    uStack_1c0 = (ulonglong)(uint)local_2f8._8_4_;
  }
  else {
    FUN_146c7ebe6(&local_1c8,local_2f8._8_4_);
    if (uVar12 != 0) {
      memcpy(local_1c8,(void *)uVar2,lVar16 * 0x38);
    }
  }
  FUN_145c3f772(&local_1a8,&local_e8);
  local_158 = *(undefined8 *)(local_3d0 + 4);
  uStack_150 = *(undefined8 *)(local_3d0 + 6);
  local_138 = (undefined1)local_3d0[0xc];
  local_148 = *(undefined8 *)(local_3d0 + 8);
  uStack_140 = *(undefined8 *)(local_3d0 + 10);
  _local_134 = CONCAT17(1,CONCAT34(CONCAT21(1,-(fVar26 == 360.0)),local_3d0[0xd]) & 0xffff01ffffffff
                       );
  local_120 = (undefined1)local_3d0[0x12];
  local_12c = (undefined1)local_3d0[0xe];
  local_128 = *(undefined8 *)(local_3d0 + 0x10);
  FUN_142979d82(&local_278);
  FUN_146c00d92(param_2,&local_278);
  if (((byte)uVar10 & bVar5) == 1) {
    uVar10 = 1;
    lVar16 = 0;
    do {
      local_308 = (undefined4 *)0x0;
      local_300 = local_108[lVar16 * 4];
      lVar19 = (longlong)(int)local_300;
      pvVar6 = (void *)(&uStack_110)[lVar16 * 2];
      if (lVar19 == 0) {
        local_2fc = 0;
        local_318 = (undefined4 *)0x0;
        uStack_310 = 0;
      }
      else {
        FUN_144a06ca8(&local_308,local_300,0);
        memcpy(local_308,pvVar6,lVar19 << 2);
        uVar25 = (ulonglong)local_300;
        local_318 = (undefined4 *)0x0;
        uStack_310 = 0;
        if ((int)local_300 < 1) {
          if ((int)local_300 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar25);
          }
        }
        else {
          uStack_310 = (ulonglong)local_300;
          FUN_1446f48e2(&local_318);
          memset(local_318,0,uVar25 * 4);
          uVar14 = 1;
          do {
            uVar12 = FUN_146c061e0(param_2,local_308[uVar14 - 1]);
            local_318[uVar14 - 1] = uVar12;
            bVar24 = uVar14 != uVar25;
            uVar14 = uVar14 + 1;
          } while (bVar24);
        }
      }
      puVar9 = local_308;
      if ((char)uVar10 != '\0') {
        lVar16 = (longlong)(int)local_300;
        if (1 < lVar16) {
          lVar19 = 0;
          puVar13 = local_308;
          do {
            uVar12 = *puVar13;
            *puVar13 = local_308[lVar16 + lVar19 + -1];
            local_308[lVar16 + lVar19 + -1] = uVar12;
            lVar19 = lVar19 + -1;
            puVar13 = puVar13 + 1;
          } while (-lVar19 != (ulonglong)(local_300 >> 1));
        }
        lVar16 = (longlong)(int)(uint)uStack_310;
        if (1 < lVar16) {
          lVar19 = 0;
          puVar13 = local_318;
          do {
            uVar12 = *puVar13;
            *puVar13 = local_318[lVar16 + lVar19 + -1];
            local_318[lVar16 + lVar19 + -1] = uVar12;
            lVar19 = lVar19 + -1;
            puVar13 = puVar13 + 1;
          } while (-lVar19 != (ulonglong)((uint)uStack_310 >> 1));
        }
      }
      local_328 = 0;
      uStack_320 = 0;
      lVar16 = (longlong)(int)local_300;
      local_3c4 = uVar10;
      if (lVar16 != 0) {
        lVar15 = 0;
        lVar19 = 0;
        do {
          uVar25 = uStack_320;
          lVar18 = *(longlong *)
                    (*(longlong *)(param_2 + 0x10) +
                    (ulonglong)(*(uint *)((longlong)puVar9 + lVar15) >> 9) * 8);
          uVar14 = (ulonglong)(*(uint *)((longlong)puVar9 + lVar15) & 0x1ff);
          local_3a8 = *(undefined8 *)(lVar18 + 0x10 + uVar14 * 0x18);
          puVar21 = (undefined8 *)(lVar18 + uVar14 * 0x18);
          local_3b8 = *puVar21;
          uStack_3b0 = puVar21[1];
          lVar18 = (longlong)(int)uStack_320;
          uVar10 = (int)uStack_320 + 1;
          uStack_320 = CONCAT44(uStack_320._4_4_,uVar10);
          if (uStack_320._4_4_ < uVar10) {
            FUN_1403e3958(&local_328,uVar25 & 0xffffffff);
            lVar19 = local_328;
          }
          *(undefined8 *)(lVar19 + 0x10 + lVar18 * 0x18) = local_3a8;
          puVar21 = (undefined8 *)(lVar19 + lVar18 * 0x18);
          *puVar21 = local_3b8;
          puVar21[1] = uStack_3b0;
          lVar15 = lVar15 + 4;
        } while (lVar16 * 4 != lVar15);
      }
      FUN_146bd1842(&local_328,local_358,&local_340);
      uVar10 = local_358._12_4_;
      local_358._8_4_ = local_358._8_4_;
      local_358._0_8_ = local_358._0_8_ ^ 0x8000000000000000;
      local_358._12_4_ = uVar10 ^ 0x80000000;
      local_348 = local_348 ^ 0x8000000000000000;
      *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
      local_368 = (int *)0x0;
      uStack_360 = 0;
      local_378 = 0;
      uStack_370 = 0;
      FUN_146bd1a1a(&local_328,&local_368);
      if ((longlong)(int)uStack_360 != 0) {
        piVar23 = local_368 + (longlong)(int)uStack_360 * 3;
        piVar17 = local_368;
        do {
          local_3b8 = CONCAT44(local_308[piVar17[1]],local_308[*piVar17]);
          uStack_3b0 = CONCAT44(uStack_3b0._4_4_,local_308[piVar17[2]]);
          iVar11 = FUN_146c01152(param_2,&local_3b8);
          uVar25 = uStack_370;
          if (-1 < iVar11) {
            lVar16 = (longlong)(int)uStack_370;
            uVar10 = (int)uStack_370 + 1;
            uStack_370 = CONCAT44(uStack_370._4_4_,uVar10);
            if (uStack_370._4_4_ < uVar10) {
              FUN_1446f48e2(&local_378,uVar25 & 0xffffffff);
            }
            *(int *)(local_378 + lVar16 * 4) = iVar11;
          }
          piVar17 = piVar17 + 3;
        } while (piVar17 != piVar23);
      }
      if (*(longlong *)(param_2 + 0x208) != 0) {
        FUN_14297a74d(param_2,&local_378);
        local_3a0 = 0;
        uStack_398 = 0;
        local_390 = 0;
        local_388 = 0x3ff0000000000000;
        local_3b8 = local_340;
        uStack_3b0 = uStack_338;
        local_3a8 = local_330;
        local_288 = DAT_14c8463c8;
        local_298 = (float)DAT_14c8463b8;
        fStack_294 = (float)DAT_14c8463b8._4_4_;
        uStack_290 = (undefined4)DAT_14c8463c0;
        uStack_28c = DAT_14c8463c0._4_4_;
        FUN_146bfb7f2(&local_3a0,&local_298,local_358);
        if ((char)local_3d0[0xc] == '\x01') {
          local_298 = (float)*(double *)(local_3d0 + 4) * (1.0 / (float)local_134);
          fStack_294 = (1.0 / (float)local_134) * (float)*(double *)(local_3d0 + 6);
          dVar7 = *(double *)(local_3d0 + 10);
          dVar4 = *(double *)(local_3d0 + 8);
          local_3e0 = (uint)local_3e0._1_3_ << 8;
          pfVar20 = &local_298;
          local_3e8 = &local_3c0;
        }
        else {
          fStack_294 = (float)*(double *)(local_3d0 + 10);
          local_298 = (float)*(double *)(local_3d0 + 8);
          dVar7 = *(double *)(local_3d0 + 6);
          dVar4 = *(double *)(local_3d0 + 4);
          local_3e0 = CONCAT31(local_3e0._1_3_,1);
          pfVar20 = &local_3c0;
          local_3e8 = &local_298;
        }
        local_3bc = (float)dVar7;
        local_3c0 = (float)dVar4;
        FUN_14297ac1f(param_2,&local_378,&local_3b8,pfVar20);
      }
      if (local_378 != 0) {
        FUN_1400020a8();
      }
      uVar8 = local_3c4;
      if (local_368 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (local_328 != 0) {
        FUN_1400020a8();
      }
      if (local_318 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_308 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      lVar16 = 1;
      uVar10 = 0;
    } while ((uVar8 & 1) != 0);
  }
  FUN_146c611c0(&local_278);
  if (local_2f8._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  uVar25 = uStack_e0 >> 0x20;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  if ((int)uVar25 != 0) {
    FUN_1447a08a2(&local_e8,0);
  }
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    FUN_1446efbd8(local_d8,0);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_2e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14297bda0 FUN_14297bda0 body=3147 status=ok
// SIG undefined FUN_14297bda0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14297bda0(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 unaff_RBP;
  int *piVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  int *piVar26;
  bool bVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  undefined1 auStack_428 [32];
  float *local_408;
  int local_400;
  void **local_3f8;
  int *local_3f0;
  uint local_3e4;
  float local_3e0;
  float local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  longlong local_398;
  undefined8 uStack_390;
  int *local_388;
  undefined8 uStack_380;
  undefined1 local_378 [16];
  ulonglong local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 uStack_340;
  undefined4 *local_338;
  ulonglong uStack_330;
  undefined4 *local_328;
  uint local_320;
  undefined4 local_31c;
  void *local_318;
  ulonglong uStack_310;
  void *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  float local_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined **local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  void *local_1f8;
  ulonglong uStack_1f0;
  void *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  uint7 local_154;
  undefined1 uStack_14d;
  undefined1 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128 [8];
  longlong local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0x3ff0000000000000;
  local_2e8 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = (void *)0x0;
  uStack_300 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0x80;
  uStack_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_3f0 = param_1;
  if ((longlong)param_1[0x16] != 0) {
    puVar24 = *(undefined8 **)(param_1 + 0x14);
    puVar25 = puVar24 + (longlong)param_1[0x16] * 2;
    do {
      uVar6 = uStack_300;
      uVar20 = *puVar24;
      uVar1 = puVar24[1];
      lVar18 = (longlong)(int)(uint)uStack_300;
      uVar12 = (uint)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar12);
      if (uStack_300._4_4_ < uVar12) {
        FUN_1403e3958(&local_308,uVar6 & 0xffffffff);
      }
      *(undefined8 *)((longlong)local_308 + lVar18 * 0x18) = uVar20;
      *(undefined8 *)((longlong)local_308 + lVar18 * 0x18 + 8) = 0;
      *(undefined8 *)((longlong)local_308 + lVar18 * 0x18 + 0x10) = uVar1;
      puVar24 = puVar24 + 2;
    } while (puVar24 != puVar25);
    if (1 < (longlong)(int)(uint)uStack_300) {
      lVar22 = 0;
      lVar18 = (longlong)(int)(uint)uStack_300 * 0x18;
      do {
        lVar17 = lVar18 + -0x18;
        local_288 = *(undefined8 *)((longlong)local_308 + lVar22 + 0x10);
        local_298 = *(undefined ***)((longlong)local_308 + lVar22);
        uStack_290 = ((undefined8 *)((longlong)local_308 + lVar22))[1];
        *(undefined8 *)((longlong)local_308 + lVar22 + 0x10) =
             *(undefined8 *)((longlong)local_308 + lVar18 + -8);
        uVar20 = ((undefined8 *)((longlong)local_308 + lVar17))[1];
        *(undefined8 *)((longlong)local_308 + lVar22) =
             *(undefined8 *)((longlong)local_308 + lVar17);
        ((undefined8 *)((longlong)local_308 + lVar22))[1] = uVar20;
        *(undefined8 *)((longlong)local_308 + lVar18 + -8) = local_288;
        *(undefined8 *)((longlong)local_308 + lVar17) = local_298;
        ((undefined8 *)((longlong)local_308 + lVar17))[1] = uStack_290;
        lVar22 = lVar22 + 0x18;
        lVar18 = lVar17;
      } while ((ulonglong)((uint)uStack_300 >> 1) * 0x18 != lVar22);
    }
  }
  iVar13 = *local_3f0;
  dVar9 = (double)iVar13;
  dVar3 = 0.01;
  if (0.01 <= (double)(float)local_3f0[1]) {
    dVar3 = (double)(float)local_3f0[1];
  }
  uVar12 = SUB84((double)(float)local_3f0[2],0);
  dVar8 = dVar3 / dVar9;
  uVar6 = DAT_149931e80;
  uVar7 = DAT_149931e80._8_8_;
  if ((char)local_3f0[3] == '\0') {
    uVar14 = SUB84(dVar8,0);
    uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
  }
  else {
    uVar14 = (undefined4)((ulonglong)dVar8 ^ uVar6);
    uVar29 = (undefined4)(((ulonglong)dVar8 ^ uVar6) >> 0x20);
    uVar12 = uVar12 ^ (uint)DAT_149931e80;
  }
  dVar2 = *(double *)(local_3f0 + 0x1a);
  if ((*(char *)((longlong)local_3f0 + 0xd) == '\x01') &&
     (((dVar8 != 0.0 || (NAN(dVar8))) &&
      (uVar28 = -(ulonglong)(-(double)CONCAT44(uVar29,uVar14) <= (double)CONCAT44(uVar29,uVar14)),
      (double)(~uVar28 & (ulonglong)-(double)CONCAT44(uVar29,uVar14) |
              uVar28 & CONCAT44(uVar29,uVar14)) < 180.0)))) {
    FUN_146c8abe2(&local_308,CONCAT44(uVar29,uVar14),&local_2f8,&local_2d8);
    iVar13 = *local_3f0;
  }
  local_400 = iVar13 + 1;
  local_318 = (void *)0x0;
  uStack_310 = 0;
  if (iVar13 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_400);
  }
  pfVar23 = (float *)(((dVar2 / 360.0) * dVar3) / dVar9);
  if (-1 < iVar13) {
    FUN_146c7ec56(&local_318,local_400);
  }
  local_3f8 = &local_318;
  local_408 = pfVar23;
  FUN_146c8a403(&local_2f8,&local_2d8,uVar12,CONCAT44(uVar29,uVar14));
  if ((((char)local_3f0[0x18] == '\x01') && ((double)pfVar23 == 0.0)) && (!NAN((double)pfVar23))) {
    local_408 = (float *)&local_108;
    FUN_146c8a6d8(&local_308,&local_2f8,&local_2d8,0x3fb999999999999a);
  }
  cVar4 = *(char *)((longlong)local_3f0 + 0xe);
  memset(&uStack_290,0,0x91);
  pvVar5 = local_308;
  local_298 = &PTR_FUN_149f3c638;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1f8 = (void *)0x0;
  local_1e8 = (void *)0x0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0x3ff0000000000000;
  uStack_170 = 0x3ff0000000000000;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  _local_154 = 0x101000042c80000;
  local_14c = 1;
  local_148 = 0x3f847ae147ae147b;
  local_140 = 1;
  local_128[4] = 0;
  local_128[5] = 0;
  local_128[0] = 0;
  local_128[1] = 0;
  local_128[2] = 0;
  local_128[3] = 0;
  local_138 = 0;
  uStack_130 = 0;
  lVar18 = (longlong)(int)(uint)uStack_300;
  uStack_1f0 = uStack_300 & 0xffffffff;
  if (lVar18 == 0) {
    uStack_1f0 = uStack_300 & 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1405b70fe(&local_1f8,uStack_300 & 0xffffffff,0);
    memcpy(local_1f8,pvVar5,lVar18 * 0x18);
    iVar13 = uStack_1e0._4_4_;
  }
  pvVar5 = local_318;
  iVar11 = (int)uStack_310;
  lVar18 = (longlong)(int)uStack_310;
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,(int)uStack_310);
  if ((int)uStack_310 == 0 && iVar13 == 0) {
    uStack_1e0 = uStack_310 & 0xffffffff;
  }
  else {
    FUN_146c7ebe6(&local_1e8,uStack_310 & 0xffffffff);
    if (iVar11 != 0) {
      memcpy(local_1e8,pvVar5,lVar18 * 0x38);
    }
  }
  FUN_145c3f772(&local_1c8,&local_108);
  local_178 = *(undefined8 *)(local_3f0 + 4);
  uStack_170 = *(undefined8 *)(local_3f0 + 6);
  local_158 = (undefined1)local_3f0[0xc];
  local_168 = *(undefined8 *)(local_3f0 + 8);
  uStack_160 = *(undefined8 *)(local_3f0 + 10);
  _local_154 = CONCAT17(1,(uint7)CONCAT24(0x100,local_3f0[0xd]));
  local_140 = (undefined1)local_3f0[0x12];
  local_14c = (undefined1)local_3f0[0xe];
  local_148 = *(undefined8 *)(local_3f0 + 0x10);
  FUN_142979d82(&local_298);
  FUN_146c00d92(param_2,&local_298);
  if (cVar4 != '\0') {
    uVar20 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    lVar18 = 0;
    do {
      local_328 = (undefined4 *)0x0;
      local_320 = local_128[lVar18 * 4];
      lVar22 = (longlong)(int)local_320;
      pvVar5 = (void *)(&uStack_130)[lVar18 * 2];
      if (lVar22 == 0) {
        local_31c = 0;
        local_338 = (undefined4 *)0x0;
        uStack_330 = 0;
      }
      else {
        FUN_144a06ca8(&local_328,local_320,0);
        memcpy(local_328,pvVar5,lVar22 << 2);
        uVar28 = (ulonglong)local_320;
        local_338 = (undefined4 *)0x0;
        uStack_330 = 0;
        if ((int)local_320 < 1) {
          if ((int)local_320 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar28);
          }
        }
        else {
          uStack_330 = (ulonglong)local_320;
          FUN_1446f48e2(&local_338);
          memset(local_338,0,uVar28 * 4);
          uVar16 = 1;
          do {
            uVar14 = FUN_146c061e0(param_2,local_328[uVar16 - 1]);
            local_338[uVar16 - 1] = uVar14;
            bVar27 = uVar16 != uVar28;
            uVar16 = uVar16 + 1;
          } while (bVar27);
        }
      }
      puVar10 = local_328;
      if ((char)uVar20 != '\0') {
        lVar18 = (longlong)(int)local_320;
        if (1 < lVar18) {
          lVar22 = 0;
          puVar15 = local_328;
          do {
            uVar14 = *puVar15;
            *puVar15 = local_328[lVar18 + lVar22 + -1];
            local_328[lVar18 + lVar22 + -1] = uVar14;
            lVar22 = lVar22 + -1;
            puVar15 = puVar15 + 1;
          } while (-lVar22 != (ulonglong)(local_320 >> 1));
        }
        lVar18 = (longlong)(int)(uint)uStack_330;
        if (1 < lVar18) {
          lVar22 = 0;
          puVar15 = local_338;
          do {
            uVar14 = *puVar15;
            *puVar15 = local_338[lVar18 + lVar22 + -1];
            local_338[lVar18 + lVar22 + -1] = uVar14;
            lVar22 = lVar22 + -1;
            puVar15 = puVar15 + 1;
          } while (-lVar22 != (ulonglong)((uint)uStack_330 >> 1));
        }
      }
      local_3e4 = (uint)uVar20;
      local_348 = 0;
      uStack_340 = 0;
      lVar18 = (longlong)(int)local_320;
      if (lVar18 != 0) {
        lVar17 = 0;
        lVar22 = 0;
        do {
          uVar28 = uStack_340;
          lVar21 = *(longlong *)
                    (*(longlong *)(param_2 + 0x10) +
                    (ulonglong)(*(uint *)((longlong)puVar10 + lVar17) >> 9) * 8);
          uVar16 = (ulonglong)(*(uint *)((longlong)puVar10 + lVar17) & 0x1ff);
          local_3c8 = *(undefined8 *)(lVar21 + 0x10 + uVar16 * 0x18);
          puVar24 = (undefined8 *)(lVar21 + uVar16 * 0x18);
          local_3d8 = *puVar24;
          uStack_3d0 = puVar24[1];
          lVar21 = (longlong)(int)uStack_340;
          uVar12 = (int)uStack_340 + 1;
          uStack_340 = CONCAT44(uStack_340._4_4_,uVar12);
          if (uStack_340._4_4_ < uVar12) {
            FUN_1403e3958(&local_348,uVar28 & 0xffffffff);
            lVar22 = local_348;
          }
          *(undefined8 *)(lVar22 + 0x10 + lVar21 * 0x18) = local_3c8;
          puVar24 = (undefined8 *)(lVar22 + lVar21 * 0x18);
          *puVar24 = local_3d8;
          puVar24[1] = uStack_3d0;
          lVar17 = lVar17 + 4;
        } while (lVar18 * 4 != lVar17);
      }
      FUN_146bd1842(&local_348,local_378,&local_360);
      uVar28 = local_378._8_8_ ^ uVar7;
      local_378._8_4_ = (int)uVar28;
      local_378._0_8_ = local_378._0_8_ ^ uVar6;
      local_378._12_4_ = (int)(uVar28 >> 0x20);
      local_368 = local_368 ^ uVar6;
      *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
      local_388 = (int *)0x0;
      uStack_380 = 0;
      local_398 = 0;
      uStack_390 = 0;
      FUN_146bd1a1a(&local_348,&local_388);
      if ((longlong)(int)uStack_380 != 0) {
        piVar26 = local_388 + (longlong)(int)uStack_380 * 3;
        piVar19 = local_388;
        do {
          local_3d8 = CONCAT44(local_328[piVar19[1]],local_328[*piVar19]);
          uStack_3d0 = CONCAT44(uStack_3d0._4_4_,local_328[piVar19[2]]);
          iVar13 = FUN_146c01152(param_2,&local_3d8);
          uVar28 = uStack_390;
          if (-1 < iVar13) {
            lVar18 = (longlong)(int)uStack_390;
            uVar12 = (int)uStack_390 + 1;
            uStack_390 = CONCAT44(uStack_390._4_4_,uVar12);
            if (uStack_390._4_4_ < uVar12) {
              FUN_1446f48e2(&local_398,uVar28 & 0xffffffff);
            }
            *(int *)(local_398 + lVar18 * 4) = iVar13;
          }
          piVar19 = piVar19 + 3;
        } while (piVar19 != piVar26);
      }
      if (*(longlong *)(param_2 + 0x208) != 0) {
        FUN_14297a74d(param_2,&local_398);
        local_3c0 = 0;
        uStack_3b8 = 0;
        local_3b0 = 0;
        local_3a8 = 0x3ff0000000000000;
        local_3d8 = local_360;
        uStack_3d0 = uStack_358;
        local_3c8 = local_350;
        local_2a8 = DAT_14c8463c8;
        local_2b8 = (float)DAT_14c8463b8;
        fStack_2b4 = (float)DAT_14c8463b8._4_4_;
        uStack_2b0 = (undefined4)DAT_14c8463c0;
        uStack_2ac = DAT_14c8463c0._4_4_;
        FUN_146bfb7f2(&local_3c0,&local_2b8,local_378);
        if ((char)local_3f0[0xc] == '\x01') {
          local_2b8 = (float)*(double *)(local_3f0 + 4) * (1.0 / (float)local_154);
          fStack_2b4 = (1.0 / (float)local_154) * (float)*(double *)(local_3f0 + 6);
          dVar9 = *(double *)(local_3f0 + 10);
          dVar3 = *(double *)(local_3f0 + 8);
          local_400 = (uint)local_400._1_3_ << 8;
          pfVar23 = &local_2b8;
          local_408 = &local_3e0;
        }
        else {
          fStack_2b4 = (float)*(double *)(local_3f0 + 10);
          local_2b8 = (float)*(double *)(local_3f0 + 8);
          dVar9 = *(double *)(local_3f0 + 6);
          dVar3 = *(double *)(local_3f0 + 4);
          local_400 = CONCAT31(local_400._1_3_,1);
          pfVar23 = &local_3e0;
          local_408 = &local_2b8;
        }
        local_3dc = (float)dVar9;
        local_3e0 = (float)dVar3;
        FUN_14297ac1f(param_2,&local_398,&local_3d8,pfVar23);
      }
      if (local_398 != 0) {
        FUN_1400020a8();
      }
      uVar12 = local_3e4;
      if (local_388 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (local_348 != 0) {
        FUN_1400020a8();
      }
      if (local_338 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_328 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      lVar18 = 1;
      uVar20 = 0;
    } while ((uVar12 & 1) != 0);
  }
  FUN_146c611c0(&local_298);
  if (local_318 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  uVar6 = uStack_100 >> 0x20;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    FUN_1447a08a2(&local_108,0);
  }
  uStack_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    FUN_1446efbd8(local_f8,0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_308 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14297c9ec FUN_14297c9ec body=50 status=ok
// SIG undefined FUN_14297c9ec(void)

longlong * FUN_14297c9ec(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  if ((int)param_1[0x16] == 1) {
    FUN_146c612e4(param_1);
  }
  else {
    FUN_146c6280e(param_1);
  }
  return param_1;
}



// FUNCTION 14297ca1e FUN_14297ca1e body=337 status=ok
// SIG undefined FUN_14297ca1e(void)

void FUN_14297ca1e(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = *param_2;
  puVar1 = (undefined8 *)*param_1;
  local_50 = *(undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(&local_68,uVar3,&local_50,&local_44);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  local_44 = param_2[1];
  puVar1 = (undefined8 *)*param_1;
  local_50 = *(undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(&local_68,uVar3,&local_50,&local_44);
  *(undefined8 *)(param_3 + 10) = local_58;
  param_3[6] = local_68;
  param_3[7] = uStack_64;
  param_3[8] = uStack_60;
  param_3[9] = uStack_5c;
  local_44 = param_2[2];
  puVar1 = (undefined8 *)*param_1;
  local_50 = *(undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  plVar4 = puVar1 + 4;
  if ((longlong *)puVar1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)puVar1[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(&local_68,uVar3,&local_50,&local_44);
  *(undefined8 *)(param_3 + 0x10) = local_58;
  param_3[0xc] = local_68;
  param_3[0xd] = uStack_64;
  param_3[0xe] = uStack_60;
  param_3[0xf] = uStack_5c;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14297cb70 FUN_14297cb70 body=2120 status=ok
// SIG undefined FUN_14297cb70(void)

ulonglong FUN_14297cb70(longlong param_1,longlong *param_2,undefined8 param_3,double *param_4,
                       byte *param_5)

{
  byte bVar1;
  double dVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined ***pppuVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_398 [32];
  undefined1 *local_378;
  uint local_364;
  double *local_360;
  longlong *local_358;
  longlong local_350;
  uint local_348;
  uint uStack_344;
  uint uStack_340;
  uint uStack_33c;
  double local_338;
  double local_330;
  code *local_328;
  code **local_320;
  undefined8 local_318;
  int local_310;
  int local_30c;
  undefined8 local_308;
  uint uStack_300;
  uint uStack_2fc;
  uint local_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  longlong local_2d0;
  int local_2c8;
  undefined1 local_280 [16];
  int local_270;
  int local_26c;
  undefined1 local_218 [104];
  undefined1 *local_1b0;
  double *local_1a8;
  undefined1 local_1a0 [7];
  undefined1 local_199;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  code *local_188 [2];
  undefined ***local_178;
  undefined **local_168;
  uint *local_160;
  longlong local_148 [4];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_146c79d48();
  FUN_146c7ad02(local_218,1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
  FUN_146c7ad02(local_280,1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
  lVar14 = 0;
  FUN_146c7ad02(&local_2e8,0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
  *param_4 = 0.0;
  local_360 = param_4;
  FUN_146c7ade6(&local_2e8);
  local_128 = 0;
  local_120 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  iVar7 = (int)param_2[1];
  plVar4 = param_2;
  if (0 < iVar7) {
    while (local_358 = plVar4, (*param_5 & 1) == 0) {
      if (((int)lVar14 < iVar7) && (lVar14 = (longlong)(int)lVar14, (*param_5 & 1) == 0)) {
        uVar11 = 0;
        do {
          local_364 = uVar11;
          lVar15 = lVar14 * 0xb8 + *param_2;
          local_2f8 = 0xffffffff;
          uStack_2f4 = 0xffffffff;
          uStack_2f0 = 0xffffffff;
          uStack_2ec = 0xffffffff;
          local_178 = (undefined ***)0x0;
          local_168 = &PTR_LAB_149f3c850;
          local_160 = &local_2f8;
          local_188[0] = FUN_1429827ca;
          uVar11 = 8;
          if (*(char *)(param_1 + 0xc) != '\0') {
            uVar11 = 1;
          }
          bVar1 = *(byte *)(param_1 + 0xd);
          uVar13 = 0xffffffff;
          uVar12 = 0;
          local_350 = lVar14;
          do {
            FUN_146c7ae3a(lVar15,uVar12);
            dVar17 = *(double *)(lVar15 + 0x30) - *(double *)(lVar15 + 0x20);
            dVar18 = *(double *)(lVar15 + 0x28) - *(double *)(lVar15 + 0x18);
            dVar2 = (*(double *)(lVar15 + 0x58) * *(double *)(lVar15 + 0x78) +
                    *(double *)(lVar15 + 0x60) * *(double *)(lVar15 + 0x88)) * dVar18 +
                    (*(double *)(lVar15 + 0x58) * *(double *)(lVar15 + 0x80) +
                    *(double *)(lVar15 + 0x60) * *(double *)(lVar15 + 0x90)) * dVar17;
            uVar16 = -(ulonglong)(-dVar2 <= dVar2);
            local_308 = 0;
            fVar19 = (float)(double)(~uVar16 & (ulonglong)-dVar2 | (ulonglong)dVar2 & uVar16) + 1.0;
            uVar6 = -((int)ROUND(-0.5 - (fVar19 + fVar19)) >> 1);
            uStack_2fc = *(uint *)(param_1 + 8);
            uStack_300 = uStack_2fc;
            if (uVar6 <= uStack_2fc) {
              uStack_300 = uVar6;
            }
            dVar2 = (*(double *)(lVar15 + 0x78) * *(double *)(lVar15 + 0x68) +
                    *(double *)(lVar15 + 0x88) * *(double *)(lVar15 + 0x70)) * dVar18 +
                    dVar17 * (*(double *)(lVar15 + 0x80) * *(double *)(lVar15 + 0x68) +
                             *(double *)(lVar15 + 0x90) * *(double *)(lVar15 + 0x70));
            uVar16 = -(ulonglong)(-dVar2 <= dVar2);
            fVar19 = (float)(double)(~uVar16 & (ulonglong)-dVar2 | (ulonglong)dVar2 & uVar16) + 1.0;
            uVar6 = -((int)ROUND(-0.5 - (fVar19 + fVar19)) >> 1);
            if (uVar6 <= uStack_2fc) {
              uStack_2fc = uVar6;
            }
            if ((uVar12 & 3) == 3) {
              FUN_146c7b11c(local_280);
            }
            else if ((uVar12 & 3) == 1) {
              FUN_146c7afcc(local_280);
            }
            else {
              local_378 = local_280;
              FUN_146c7b27c(param_1,lVar15);
            }
            local_318 = local_308;
            local_310 = local_270;
            local_30c = local_26c;
            if (local_26c == 0 && local_270 == 0) {
              local_308 = 0;
LAB_14297d0b6:
              pcVar3 = local_188[0];
              pppuVar10 = local_178;
              if (local_178 == (undefined ***)0x0) {
                pppuVar10 = &local_168;
              }
              uVar8 = (*(code *)(*pppuVar10)[1])();
              cVar5 = (*pcVar3)(uVar8,&local_308);
              if (cVar5 != '\0') {
                FUN_146c7b7b0(local_218,local_280);
                local_2f8 = (uint)local_308;
                uStack_2f4 = local_308._4_4_;
                uStack_2f0 = uStack_300;
                uStack_2ec = uStack_2fc;
                uVar13 = uVar12;
                if (local_308._4_4_ == 0 && (uint)local_308 == 0) break;
              }
            }
            else {
              FUN_146c7b590(local_280,&local_199);
              iVar7 = FUN_146c806d4(local_148,local_194 ^ local_198 ^ local_190 ^ local_18c,
                                    &local_199);
              lVar14 = (longlong)iVar7 * 0x30 + local_148[0];
              if (lVar14 != 0 && iVar7 != -1) {
                local_318 = CONCAT44((int)ROUND(*(double *)(lVar14 + 0x20) +
                                                *(double *)(lVar14 + 0x20) + -0.5) >> 1,
                                     (int)ROUND(*(double *)(lVar14 + 0x18) +
                                                *(double *)(lVar14 + 0x18) + -0.5) >> 1);
              }
              local_320 = local_188;
              local_328 = FUN_146c80746;
              cVar5 = FUN_146c7b660(&local_2e8,&local_318,local_280,&local_328);
              if (cVar5 != '\0') {
                local_330 = (double)(local_318 >> 0x20);
                local_338 = (double)(local_318 & 0xffffffff);
                local_1b0 = &local_199;
                local_1a8 = &local_338;
                FUN_146c8077a(local_148,local_1a0,&local_1b0);
                local_308 = local_318;
                goto LAB_14297d0b6;
              }
            }
            uVar12 = uVar12 + (2 - (uint)bVar1);
          } while (uVar12 < uVar11);
          if ((int)uVar13 < 0) {
            if (local_188[0] != (code *)0x0) {
              pppuVar10 = &local_168;
              if (local_178 != (undefined ***)0x0) {
                pppuVar10 = local_178;
              }
              (*(code *)(*pppuVar10)[2])();
            }
            uVar16 = 0;
            goto LAB_14297d2e0;
          }
          FUN_146c7ae3a(lVar15,uVar13);
          local_348 = local_2f8;
          uStack_344 = uStack_2f4;
          uStack_340 = uStack_2f0;
          uStack_33c = uStack_2ec;
          FUN_146c7b85c(&local_2e8,&local_348,local_218);
          *(double *)(lVar15 + 0xa8) = (double)local_2f8 + *(double *)(lVar15 + 0xa8);
          *(double *)(lVar15 + 0xb0) = (double)uStack_2f4 + *(double *)(lVar15 + 0xb0);
          if (local_188[0] != (code *)0x0) {
            pppuVar10 = local_178;
            if (local_178 == (undefined ***)0x0) {
              pppuVar10 = &local_168;
            }
            (*(code *)(*pppuVar10)[2])();
          }
          lVar14 = local_350 + 1;
          iVar7 = (int)local_358[1];
          param_2 = local_358;
        } while (((local_364 < 0x3ff) && (lVar14 < iVar7)) &&
                (uVar11 = local_364 + 1, (*param_5 & 1) == 0));
      }
      plVar4 = local_358;
      if (iVar7 <= (int)lVar14) break;
    }
  }
  uVar16 = 0;
  if ((*param_5 & 1) == 0) {
    if ((longlong)local_2c8 != 0) {
      lVar14 = local_2d0 + (longlong)local_2c8 * 0x28;
      uVar16 = 0;
      do {
        if ((longlong)*(int *)(local_2d0 + 0x10) != 0) {
          lVar15 = 0;
          do {
            uVar16 = (ulonglong)
                     (uint)((int)uVar16 + *(int *)(*(longlong *)(local_2d0 + 8) + 4 + lVar15));
            lVar15 = lVar15 + 8;
          } while ((longlong)*(int *)(local_2d0 + 0x10) * 8 != lVar15);
        }
        local_2d0 = local_2d0 + 0x28;
      } while (local_2d0 != lVar14);
    }
    uVar9 = (ulonglong)(uint)(local_2e0 * local_2e4 - (int)uVar16);
    if (local_2e8 != 0) {
      uVar9 = uVar16;
    }
    *local_360 = (double)uVar9 / (double)(uint)(*(int *)(param_1 + 8) * *(int *)(param_1 + 8));
    uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
  }
LAB_14297d2e0:
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_146c7e97c(local_148);
  FUN_146c7b916(&local_2e8);
  FUN_146c7b916(local_280);
  FUN_146c7b916(local_218);
  if ((local_f0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 14297d3ba FUN_14297d3ba body=4834 status=ok
// SIG undefined FUN_14297d3ba(void)

ulonglong FUN_14297d3ba(uint *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  byte *pbVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 uVar18;
  byte bVar19;
  char cVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  code *pcVar31;
  code *pcVar32;
  longlong lVar33;
  longlong *plVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  int iVar38;
  longlong lVar39;
  longlong *plVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_278 [32];
  byte *local_258;
  longlong local_250;
  longlong *local_248;
  ulonglong local_240;
  uint *local_238;
  longlong local_230;
  ulonglong local_228;
  longlong local_220;
  ulonglong local_218;
  undefined8 uStack_210;
  longlong *local_208;
  uint local_200;
  undefined1 local_1fc;
  undefined1 local_1fb;
  double local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  ulonglong uStack_1d0;
  byte local_1b9;
  longlong local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198;
  code *local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  uint uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_1f8 = 0.0;
  uVar29 = *param_1;
  local_1fc = *(undefined1 *)((longlong)param_1 + 9);
  local_1fb = *(undefined1 *)((longlong)param_1 + 10);
  local_218 = 0;
  uStack_210 = 0;
  local_238 = param_1;
  local_208 = param_2;
  local_200 = uVar29;
  FUN_146c7ca0c(&local_218,param_3);
  puVar24 = local_238;
  if (0 < (int)param_3) {
    lVar35 = 0x38;
    uVar36 = 0;
    local_248 = param_2;
    local_240 = (ulonglong)param_3;
    do {
      uVar2 = local_218;
      uVar37 = uVar36 + 1;
      lVar39 = local_218 + lVar35;
      lVar33 = (local_218 - 0x30) + lVar35;
      *(int *)(lVar33 + -8) = (int)uVar37;
      local_188 = (code *)CONCAT44(local_188._4_4_,(int)uVar36);
      (*(code *)*param_4)(param_4[1],&local_188,lVar33);
      *(undefined8 *)(lVar33 + 0x10) = 0x47efffffe0000000;
      *(undefined8 *)(lVar33 + 0x18) = 0x47efffffe0000000;
      *(undefined8 *)(lVar33 + 0x20) = 0xc7efffffe0000000;
      *(undefined8 *)(lVar33 + 0x28) = 0xc7efffffe0000000;
      *(undefined8 *)(lVar33 + 0x30) = 0;
      local_188 = (code *)0x7fefffffffffffff;
      uStack_180 = 0x7fefffffffffffff;
      local_178 = (longlong *)0xffefffffffffffff;
      uStack_170 = 0xffefffffffffffff;
      pbVar3 = (byte *)(uVar2 + 8 + lVar35);
      local_258 = pbVar3;
      local_250 = lVar39;
      FUN_14297e69e(puVar24,local_248,lVar33,&local_188);
      *(code **)(pbVar3 + -0x28) = local_188;
      *(ulonglong *)(pbVar3 + -0x20) = uStack_180;
      *(uint *)(pbVar3 + -0x18) = (uint)local_178;
      *(undefined4 *)(pbVar3 + -0x14) = local_178._4_4_;
      *(undefined4 *)(pbVar3 + -0x10) = (undefined4)uStack_170;
      *(undefined4 *)(pbVar3 + -0xc) = uStack_170._4_4_;
      lVar35 = lVar35 + 0xb8;
      uVar36 = uVar37;
      param_2 = local_248;
      uVar29 = local_200;
    } while (local_240 != uVar37);
  }
  if (((uint)uStack_210 <= uVar29 * uVar29) && (local_1f8 = 0.0, (uint)uStack_210 != 0)) {
    local_1f8 = 0.0;
    lVar35 = 0;
    do {
      dVar4 = *(double *)(local_218 + 0x40 + lVar35);
      local_1f8 = local_1f8 + *(double *)(local_218 + 0x38 + lVar35) * dVar4 * dVar4;
      lVar35 = lVar35 + 0xb8;
    } while ((longlong)(int)(uint)uStack_210 * 0xb8 - lVar35 != 0);
    if (0.0 < local_1f8) {
      lVar35 = 0;
      do {
        uVar23 = DAT_14c8463f8;
        puVar22 = (undefined8 *)(local_218 + 0xa8 + lVar35);
        *puVar22 = DAT_14c8463f0;
        puVar22[1] = uVar23;
        uVar23 = DAT_14c8463f8;
        puVar22 = (undefined8 *)(local_218 + 0x48 + lVar35);
        *puVar22 = DAT_14c8463f0;
        puVar22[1] = uVar23;
        *(undefined8 *)(local_218 + 0x78 + lVar35) = 0x3ff0000000000000;
        puVar22 = (undefined8 *)(local_218 + 0x80 + lVar35);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(local_218 + 0x90 + lVar35) = 0x3ff0000000000000;
        *(undefined8 *)(local_218 + 0x58 + lVar35) = 0x3ff0000000000000;
        puVar22 = (undefined8 *)(local_218 + 0x60 + lVar35);
        *puVar22 = 0;
        puVar22[1] = 0;
        *(undefined8 *)(local_218 + 0x70 + lVar35) = 0x3ff0000000000000;
        uVar23 = DAT_14c8463f8;
        puVar22 = (undefined8 *)(local_218 + 0x98 + lVar35);
        *puVar22 = DAT_14c8463f0;
        puVar22[1] = uVar23;
        lVar35 = lVar35 + 0xb8;
      } while ((longlong)(int)(uint)uStack_210 * 0xb8 - lVar35 != 0);
      pcVar31 = (code *)(ulonglong)uVar29;
      dVar4 = 1.0 / local_1f8;
      if (dVar4 < 0.0) {
        dVar4 = sqrt(dVar4);
      }
      else {
        dVar4 = SQRT(dVar4);
      }
      uVar36 = (ulonglong)local_200;
      dVar13 = 0.5 / local_1f8;
      if (dVar13 < 0.0) {
        dVar13 = sqrt(dVar13);
      }
      else {
        dVar13 = SQRT(dVar13);
      }
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1b9 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      if ((99999 < (int)(uint)uStack_210) && (999 < local_200)) {
        uStack_1d0 = 3;
        FUN_1429825dc(&local_1d8);
        FUN_1429825b5(local_1d8);
      }
      dVar4 = dVar4 * (double)(longlong)pcVar31;
      dVar13 = dVar13 * (double)uVar36;
      local_1e0 = 0;
      local_248 = param_2;
      if ((local_1b9 & 1) == 0) {
        do {
          if (0 < (int)uStack_1d0) {
            lVar35 = 0x10;
            iVar30 = -1;
            lVar33 = 0;
            pcVar32 = pcVar31;
            do {
              FUN_146c79ce8(local_1d8 + lVar35 + -0x10,&local_218);
              dVar16 = ldexp(1.0,iVar30);
              local_138 = 0;
              local_128 = (longlong *)0x0;
              local_188 = (code *)0x0;
              local_178 = (longlong *)0x0;
              local_178 = (longlong *)FUN_14001cc68(0x30,8);
              *local_178 = (longlong)&PTR_LAB_149f3c830;
              local_178[1] = (longlong)&local_208;
              local_178[2] = (longlong)&local_1d8;
              local_178[3] = (longlong)&local_1b9;
              local_178[4] = (longlong)(dVar16 * dVar13);
              *(int *)(local_178 + 5) = (int)lVar33;
              if (local_178 + 1 != (longlong *)0x0) {
                local_188 = FUN_142982748;
              }
              FUN_1405d8960(&local_1a8,&local_138);
              plVar34 = plStack_1a0;
              lVar39 = local_1a8;
              local_198 = 1;
              if (plStack_1a0 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
                UNLOCK();
              }
              if (DAT_14c846b14 == '\x01') {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c83f0fc) &&
                   (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
                  uVar23 = FUN_14118da1c();
                  bVar19 = FUN_14054d46e(uVar23,L"nothreading");
                  DAT_14c83f0f8 = bVar19 ^ 1;
                  _Init_thread_footer(&DAT_14c83f0fc);
                }
                pcVar31 = local_188;
                if (DAT_14c83f0f8 == 1) goto LAB_14297d964;
                plVar40 = local_178;
                if (local_178 == (longlong *)0x0) {
                  plVar40 = &local_168;
                }
                uVar23 = (**(code **)(*plVar40 + 8))();
                uVar18 = (*pcVar31)(uVar23);
                *(undefined1 *)(local_1a8 + 0x80) = uVar18;
                FUN_140b576f0();
              }
              else {
LAB_14297d964:
                plVar40 = DAT_14c8442c0;
                puVar22 = (undefined8 *)FUN_14001cc68(0x70,0x10);
                puVar22[1] = 0;
                *puVar22 = TAsyncQueuedWork<bool>::vftable;
                puVar22[2] = local_188;
                puVar22[4] = local_178;
                local_178 = (longlong *)0x0;
                *(undefined4 *)(puVar22 + 8) = uStack_158;
                *(undefined4 *)((longlong)puVar22 + 0x44) = uStack_154;
                *(undefined4 *)(puVar22 + 9) = uStack_150;
                *(undefined4 *)((longlong)puVar22 + 0x4c) = uStack_14c;
                *(undefined4 *)(puVar22 + 6) = (undefined4)local_168;
                *(undefined4 *)((longlong)puVar22 + 0x34) = local_168._4_4_;
                *(int *)(puVar22 + 7) = iStack_160;
                *(uint *)((longlong)puVar22 + 0x3c) = uStack_15c;
                if (local_188 != (code *)0x0) {
                  local_188 = (code *)0x0;
                }
                puVar22[10] = local_1a8;
                puVar22[0xb] = plStack_1a0;
                local_1a8 = 0;
                plStack_1a0 = (longlong *)0x0;
                *(undefined1 *)(puVar22 + 0xc) = local_198;
                (**(code **)(*plVar40 + 0x18))(plVar40,puVar22);
                pcVar31 = pcVar32;
              }
              plVar40 = plStack_1a0;
              local_1f0 = lVar39;
              local_1e8 = plVar34;
              if (plStack_1a0 != (longlong *)0x0) {
                LOCK();
                plVar34 = plStack_1a0 + 1;
                *(int *)plVar34 = (int)*plVar34 + -1;
                UNLOCK();
                if ((int)*plVar34 == 0) {
                  (**(code **)*plStack_1a0)(plStack_1a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar40 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar40 + 0x10))(plVar40);
                  }
                }
              }
              if (local_188 != (code *)0x0) {
                plVar34 = local_178;
                if (local_178 == (longlong *)0x0) {
                  plVar34 = &local_168;
                }
                (**(code **)(*plVar34 + 0x10))();
              }
              if (local_138 != 0) {
                plVar34 = local_128;
                if (local_128 == (longlong *)0x0) {
                  plVar34 = local_118;
                }
                (**(code **)(*plVar34 + 0x10))();
              }
              FUN_1405d88fe(local_1d8 + lVar35,&local_1f0);
              plVar34 = local_1e8;
              if (local_1e8 != (longlong *)0x0) {
                LOCK();
                plVar40 = local_1e8 + 1;
                *(int *)plVar40 = (int)*plVar40 + -1;
                UNLOCK();
                if ((int)*plVar40 == 0) {
                  (**(code **)*local_1e8)(local_1e8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar34 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar34 + 0x10))(plVar34);
                  }
                }
              }
              lVar33 = lVar33 + 1;
              lVar35 = lVar35 + 0x28;
              iVar30 = iVar30 + -1;
              pcVar32 = pcVar31;
            } while (lVar33 < (int)uStack_1d0);
          }
          local_258 = &local_1b9;
          uVar36 = FUN_14297cb70(&local_208,&local_218,SUB84(dVar13,0),&local_1e0);
          param_2 = local_248;
          if (-1 < (int)uStack_1d0) {
            lVar35 = 0;
            do {
              if (lVar35 == 0) {
                if ((uVar36 & 1) == 0) goto LAB_14297dc6f;
                uVar36 = 1;
                if ((local_1b9 & 1) == 0) {
                  LOCK();
                  local_1b9 = 1;
                  UNLOCK();
                  goto LAB_14297dc5b;
                }
              }
              else {
                pcVar31 = (code *)(lVar35 * 5);
                lVar33 = *(longlong *)(local_1d8 + -0x18 + lVar35 * 0x28);
                while ((*(byte *)(lVar33 + 0x78) & 1) == 0) {
                  (**(code **)(**(longlong **)(lVar33 + 0x70) + 0x20))
                            (*(longlong **)(lVar33 + 0x70),0xffffffff);
                }
                if (*(char *)(lVar33 + 0x80) == '\0') {
LAB_14297dc6f:
                  uVar36 = 0;
                }
                else {
                  uVar36 = 1;
                  if ((local_1b9 & 1) == 0) {
                    LOCK();
                    local_1b9 = 1;
                    UNLOCK();
                    FUN_146c79ce8(&local_218,lVar35 * 0x28 + -0x28 + local_1d8);
                    local_1e0 = *(undefined8 *)(local_1d8 + -8 + lVar35 * 0x28);
LAB_14297dc5b:
                    FUN_146c79ce8(&local_1b8,&local_218);
                    uVar36 = 1;
                  }
                }
              }
              if ((local_1b9 & 1) == 0) {
                dVar4 = dVar13;
                dVar13 = dVar13 * 0.5;
              }
              bVar12 = lVar35 < (int)uStack_1d0;
              lVar35 = lVar35 + 1;
            } while (bVar12);
          }
        } while ((local_1b9 & 1) == 0);
      }
      LOCK();
      local_1b9 = 0;
      UNLOCK();
      iVar30 = 6;
      uVar41 = (undefined4)local_1e0;
      uVar42 = (undefined4)((ulonglong)local_1e0 >> 0x20);
      do {
        dVar16 = (dVar4 + dVar13) * 0.5;
        local_188 = (code *)0x0;
        local_258 = &local_1b9;
        cVar20 = FUN_14297cb70(&local_208,&local_218,SUB84(dVar16,0),&local_188);
        dVar5 = dVar16;
        if (cVar20 != '\0') {
          FUN_146c79ce8(&local_1b8,&local_218);
          dVar6 = (double)local_188 - (double)CONCAT44(uVar42,uVar41);
          uVar36 = -(ulonglong)(-dVar6 <= dVar6);
          uVar42 = (undefined4)((ulonglong)local_188 >> 0x20);
          uVar41 = (int)local_188;
          dVar5 = dVar4;
          dVar13 = dVar16;
          if ((double)(~uVar36 & (ulonglong)-dVar6 | (ulonglong)dVar6 & uVar36) * 100.0 <= 1.0)
          break;
        }
        dVar4 = dVar5;
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
      FUN_146c79ce8(&local_218,&local_1b8);
      FUN_142982557(local_1d8,uStack_1d0 & 0xffffffff);
      if (local_1d8 != 0) {
        FUN_1400020a8();
      }
      FUN_146c80469(local_1b8,uStack_1b0 & 0xffffffff);
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      uVar36 = CONCAT71((int7)((ulonglong)pcVar31 >> 8),1);
      if (0 < (int)(uint)uStack_210) {
        lVar35 = 0;
        do {
          local_230 = lVar35 * 0xb8;
          dVar4 = *(double *)(local_218 + 0x88 + local_230);
          dVar13 = *(double *)(local_218 + 0x98 + local_230);
          dVar16 = *(double *)(local_218 + 0x90 + local_230);
          dVar5 = *(double *)(local_218 + 0xa0 + local_230);
          dVar15 = dVar4 * dVar13 + dVar16 * dVar5;
          dVar6 = *(double *)(local_218 + 0x78 + local_230);
          dVar7 = *(double *)(local_218 + 0x80 + local_230);
          dVar17 = dVar13 * dVar6 + dVar5 * dVar7;
          dVar13 = *(double *)(local_218 + 0x70 + local_230);
          dVar5 = *(double *)(local_218 + 0x68 + local_230);
          dVar8 = *(double *)(local_218 + 0x60 + local_230);
          dVar9 = *(double *)(local_218 + 0x58 + local_230);
          dVar10 = *(double *)(local_218 + 0xb0 + local_230);
          dVar11 = *(double *)(local_218 + 0xa8 + local_230);
          local_228 = (ulonglong)local_200;
          local_168 = (uint *)0x0;
          iStack_160 = 0;
          local_188 = (code *)0x0;
          uStack_180 = 0;
          uStack_15c = 0x80;
          uStack_158 = 0xffffffff;
          uStack_154 = 0;
          local_148 = 0;
          local_140 = 0;
          local_240 = local_218;
          lVar33 = (longlong)*(int *)(local_218 + 0x10 + local_230);
          plVar34 = (longlong *)0x0;
          local_220 = lVar35;
          if (lVar33 != 0) {
            lVar35 = *(longlong *)(local_218 + 8 + local_230);
            plVar34 = (longlong *)(lVar33 * 4);
            plVar40 = (longlong *)0x0;
            do {
              (**(code **)(*param_2 + 0x10))
                        (param_2,&local_138,*(undefined4 *)(lVar35 + (longlong)plVar40));
              FUN_1447cbafe(&local_188,&local_1a8,&local_138,0);
              FUN_1447cbafe(&local_188,&local_1a8,(longlong)&local_138 + 4);
              FUN_1447cbafe(&local_188,&local_1a8,local_130);
              plVar40 = (longlong *)((longlong)plVar40 + 4);
            } while (plVar34 != plVar40);
          }
          iVar30 = iStack_160;
          lVar35 = local_240 + local_230;
          dVar14 = 1.0 / (double)(longlong)local_228;
          dVar8 = (dVar17 * dVar9 + dVar15 * dVar8 + 0.5 + dVar11) * dVar14;
          dVar13 = (dVar5 * dVar17 + dVar13 * dVar15 + 0.5 + dVar10) * dVar14;
          dVar16 = dVar16 * dVar14;
          dVar4 = dVar4 * dVar14;
          dVar7 = dVar7 * dVar14;
          dVar6 = dVar6 * dVar14;
          if ((char)local_238[2] == '\0') {
            if (iStack_160 == 0) {
              uVar37 = 1;
              uVar36 = 0;
              iVar38 = 0;
              iVar25 = 0;
            }
            else {
              puVar24 = local_168;
              if (local_168 == (uint *)0x0) {
                puVar24 = (uint *)&local_178;
              }
              uVar29 = *puVar24;
              if (uVar29 == 0) {
                iVar25 = iStack_160 + 0x1e;
                if (-1 < iStack_160 + -1) {
                  iVar25 = iStack_160 + -1;
                }
                uVar36 = 0;
                uVar37 = (ulonglong)(uint)(iVar25 >> 5);
                if (iVar25 >> 5 < 1) {
                  uVar37 = uVar36;
                }
                iVar38 = 0;
                do {
                  if (uVar37 == uVar36) goto LAB_14297e3c5;
                  iVar38 = iVar38 + 0x20;
                  uVar29 = puVar24[uVar36 + 1];
                  uVar36 = uVar36 + 1;
                } while (uVar29 == 0);
              }
              else {
                uVar36 = 0;
                iVar38 = 0;
              }
              uVar37 = (ulonglong)(-uVar29 & uVar29);
              uVar2 = uVar37 * 2 + 1;
              lVar33 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              iVar25 = (iVar38 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
              if (iStack_160 <= iVar25) {
                iVar25 = iStack_160;
              }
            }
            if (iVar25 != iStack_160) {
              uVar29 = 0xffffffff;
              iVar21 = iStack_160;
              do {
                plVar40 = local_248;
                iVar25 = *(int *)(local_188 + (longlong)iVar25 * 0xc);
                if (-1 < iVar25) {
                  (**(code **)(*local_248 + 0x20))(local_248,&local_138,iVar25);
                  (**(code **)(*plVar40 + 0x28))
                            (plVar40,iVar25,
                             CONCAT44((float)((*(double *)(lVar35 + 0x68) * dVar6 +
                                              dVar4 * *(double *)(lVar35 + 0x70)) *
                                              (double)(float)local_138 +
                                              (*(double *)(lVar35 + 0x68) * dVar7 +
                                              *(double *)(lVar35 + 0x70) * dVar16) *
                                              (double)local_138._4_4_ + dVar13),
                                      (float)((*(double *)(lVar35 + 0x58) * dVar6 +
                                              dVar4 * *(double *)(lVar35 + 0x60)) *
                                              (double)(float)local_138 +
                                              (*(double *)(lVar35 + 0x58) * dVar7 +
                                              *(double *)(lVar35 + 0x60) * dVar16) *
                                              (double)local_138._4_4_ + dVar8)));
                  plVar34 = plVar40;
                  iVar21 = iStack_160;
                }
                uVar29 = uVar29 & ~(uint)uVar37;
                puVar24 = local_168;
                if (local_168 == (uint *)0x0) {
                  puVar24 = (uint *)&local_178;
                }
                iVar25 = (int)uVar36;
                lVar33 = (longlong)iVar25;
                uVar26 = puVar24[lVar33] & uVar29;
                if (uVar26 == 0) {
                  iVar27 = iVar21 + 0x1e;
                  if (-1 < iVar21 + -1) {
                    iVar27 = iVar21 + -1;
                  }
                  iVar27 = iVar27 >> 5;
                  iVar38 = iVar38 + 0x20;
                  iVar28 = iVar27;
                  if (iVar27 < iVar25) {
                    iVar28 = iVar25;
                  }
                  if (iVar25 < iVar27) {
                    lVar39 = 0;
                    do {
                      uVar26 = puVar24[lVar33 + lVar39 + 1];
                      if (uVar26 != 0) {
                        uVar36 = (ulonglong)(iVar25 + (int)lVar39 + 1);
                        uVar29 = 0xffffffff;
                        goto LAB_14297e606;
                      }
                      iVar38 = iVar38 + 0x20;
                      lVar39 = lVar39 + 1;
                    } while (iVar28 - lVar33 != lVar39);
                    uVar29 = 0xffffffff;
                    iVar25 = iVar28;
                  }
                  uVar36 = (ulonglong)(iVar25 + 1);
                  iVar25 = iVar21;
                }
                else {
LAB_14297e606:
                  uVar37 = (ulonglong)(-uVar26 & uVar26);
                  uVar2 = uVar37 * 2 + 1;
                  lVar33 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                    }
                  }
                  iVar25 = (iVar38 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
                  if (iVar21 <= iVar25) {
                    iVar25 = iVar21;
                  }
                }
              } while (iVar25 != iVar30);
            }
          }
          else {
            if (iStack_160 == 0) {
              uVar36 = 1;
              iVar38 = 0;
              uVar37 = 0;
              iVar25 = 0;
            }
            else {
              puVar24 = local_168;
              if (local_168 == (uint *)0x0) {
                puVar24 = (uint *)&local_178;
              }
              uVar29 = *puVar24;
              if (uVar29 == 0) {
                iVar25 = iStack_160 + 0x1e;
                if (-1 < iStack_160 + -1) {
                  iVar25 = iStack_160 + -1;
                }
                uVar37 = 0;
                uVar36 = (ulonglong)(uint)(iVar25 >> 5);
                if (iVar25 >> 5 < 1) {
                  uVar36 = uVar37;
                }
                iVar38 = 0;
                do {
                  if (uVar36 == uVar37) goto LAB_14297e3c5;
                  iVar38 = iVar38 + 0x20;
                  uVar29 = puVar24[uVar37 + 1];
                  uVar37 = uVar37 + 1;
                } while (uVar29 == 0);
              }
              else {
                iVar38 = 0;
                uVar37 = 0;
              }
              uVar36 = (ulonglong)(-uVar29 & uVar29);
              uVar2 = uVar36 * 2 + 1;
              lVar33 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                }
              }
              iVar25 = (iVar38 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
              if (iStack_160 <= iVar25) {
                iVar25 = iStack_160;
              }
            }
            if (iVar25 != iStack_160) {
              dVar5 = 1.0 / (dVar6 * dVar16 - dVar4 * dVar7);
              uVar29 = 0xffffffff;
              iVar21 = iStack_160;
              do {
                plVar40 = local_248;
                iVar25 = *(int *)(local_188 + (longlong)iVar25 * 0xc);
                if (-1 < iVar25) {
                  (**(code **)(*local_248 + 0x20))(local_248,&local_138,iVar25);
                  dVar10 = (*(double *)(lVar35 + 0x68) * dVar6 + dVar4 * *(double *)(lVar35 + 0x70))
                           * (double)(float)local_138 +
                           (*(double *)(lVar35 + 0x68) * dVar7 + *(double *)(lVar35 + 0x70) * dVar16
                           ) * (double)local_138._4_4_ + dVar13;
                  dVar9 = (*(double *)(lVar35 + 0x58) * dVar6 + dVar4 * *(double *)(lVar35 + 0x60))
                          * (double)(float)local_138 +
                          (*(double *)(lVar35 + 0x58) * dVar7 + *(double *)(lVar35 + 0x60) * dVar16)
                          * (double)local_138._4_4_ + dVar8;
                  (**(code **)(*plVar40 + 0x28))
                            (plVar40,iVar25,
                             CONCAT44((float)(-dVar4 * dVar5 * dVar9 + dVar6 * dVar5 * dVar10),
                                      (float)(dVar9 * dVar5 * dVar16 + dVar10 * -dVar7 * dVar5)));
                  plVar34 = plVar40;
                  iVar21 = iStack_160;
                }
                uVar29 = uVar29 & ~(uint)uVar36;
                puVar24 = local_168;
                if (local_168 == (uint *)0x0) {
                  puVar24 = (uint *)&local_178;
                }
                iVar25 = (int)uVar37;
                lVar33 = (longlong)iVar25;
                uVar26 = puVar24[lVar33] & uVar29;
                if (uVar26 == 0) {
                  iVar27 = iVar21 + 0x1e;
                  if (-1 < iVar21 + -1) {
                    iVar27 = iVar21 + -1;
                  }
                  iVar27 = iVar27 >> 5;
                  iVar38 = iVar38 + 0x20;
                  iVar28 = iVar27;
                  if (iVar27 < iVar25) {
                    iVar28 = iVar25;
                  }
                  if (iVar25 < iVar27) {
                    lVar39 = 0;
                    do {
                      uVar26 = puVar24[lVar33 + lVar39 + 1];
                      if (uVar26 != 0) {
                        uVar37 = (ulonglong)(iVar25 + (int)lVar39 + 1);
                        uVar29 = 0xffffffff;
                        goto LAB_14297e36b;
                      }
                      iVar38 = iVar38 + 0x20;
                      lVar39 = lVar39 + 1;
                    } while (iVar28 - lVar33 != lVar39);
                    uVar29 = 0xffffffff;
                    lVar33 = (longlong)iVar28;
                  }
                  uVar37 = lVar33 + 1U & 0xffffffff;
                  iVar25 = iVar21;
                }
                else {
LAB_14297e36b:
                  uVar36 = (ulonglong)(-uVar26 & uVar26);
                  uVar2 = uVar36 * 2 + 1;
                  lVar33 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                    }
                  }
                  iVar25 = (iVar38 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
                  if (iVar21 <= iVar25) {
                    iVar25 = iVar21;
                  }
                }
              } while (iVar25 != iVar30);
            }
          }
LAB_14297e3c5:
          local_140 = 0;
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          param_2 = local_248;
          uVar36 = uStack_180 >> 0x20;
          uStack_180 = uStack_180 & 0xffffffff00000000;
          if ((int)uVar36 != 0) {
            FUN_1447a08a2(&local_188,0);
          }
          uStack_158 = 0xffffffff;
          uStack_154 = 0;
          iStack_160 = 0;
          if (0x80 < uStack_15c) {
            uStack_15c = 0x80;
            FUN_1446efbd8(&local_178,0);
          }
          if (local_168 != (uint *)0x0) {
            FUN_1400020a8();
          }
          if (local_188 != (code *)0x0) {
            FUN_1400020a8();
          }
          lVar35 = local_220 + 1;
        } while (lVar35 < (int)(uint)uStack_210);
        uVar36 = CONCAT71((int7)((ulonglong)plVar34 >> 8),1);
      }
      goto LAB_14297d6a0;
    }
  }
  uVar36 = 0;
LAB_14297d6a0:
  FUN_146c80469(local_218);
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar36 & 0xffffffff;
}



// FUNCTION 14297e69e FUN_14297e69e body=1158 status=ok
// SIG undefined FUN_14297e69e(void)

void FUN_14297e69e(longlong param_1,longlong *param_2,undefined8 *param_3,double *param_4,
                  undefined8 *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined4 *local_180;
  float local_178;
  float fStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  int local_160 [6];
  double local_148 [7];
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_4 = 1.79769313486232e+308;
  param_4[1] = 1.79769313486232e+308;
  param_4[2] = -1.79769313486232e+308;
  param_4[3] = -1.79769313486232e+308;
  *param_6 = 0.0;
  local_188 = param_1;
  if ((longlong)*(int *)(param_3 + 1) == 0) {
    dVar2 = 0.0;
    dVar14 = 0.0;
  }
  else {
    puVar4 = (undefined4 *)*param_3;
    puVar5 = puVar4 + *(int *)(param_3 + 1);
    dVar14 = 0.0;
    dVar2 = 0.0;
    local_180 = puVar5;
    do {
      uVar8 = *puVar4;
      (**(code **)(*param_2 + 8))(param_2,local_160 + 3,uVar8);
      (**(code **)(*param_2 + 0x10))(param_2,local_160,uVar8);
      if (((-1 < local_160[0]) && (-1 < local_160[1])) && (-1 < local_160[2])) {
        pdVar3 = local_148 + 6;
        lVar6 = 0;
        do {
          (**(code **)(*param_2 + 0x18))
                    (param_2,&local_178,*(undefined4 *)((longlong)local_160 + lVar6 + 0xc));
          pdVar3[2] = local_168;
          *(float *)pdVar3 = local_178;
          *(float *)((longlong)pdVar3 + 4) = fStack_174;
          *(undefined4 *)(pdVar3 + 1) = uStack_170;
          *(undefined4 *)((longlong)pdVar3 + 0xc) = uStack_16c;
          (**(code **)(*param_2 + 0x20))
                    (param_2,&local_178,*(undefined4 *)((longlong)local_160 + lVar6));
          dVar1 = (double)fStack_174;
          dVar10 = (double)local_178;
          *(double *)((longlong)local_148 + lVar6 * 4) = dVar10;
          *(double *)((longlong)local_148 + lVar6 * 4 + 8) = dVar1;
          if (dVar10 < *param_4) {
            *param_4 = dVar10;
          }
          if (param_4[2] <= dVar10 && dVar10 != param_4[2]) {
            param_4[2] = dVar10;
          }
          if (dVar1 < param_4[1]) {
            param_4[1] = dVar1;
          }
          if (param_4[3] <= dVar1 && dVar1 != param_4[3]) {
            param_4[3] = dVar1;
          }
          lVar6 = lVar6 + 4;
          pdVar3 = pdVar3 + 3;
        } while (lVar6 != 0xc);
        dVar1 = local_148[3] - local_148[1];
        dVar10 = local_148[2] - local_148[0];
        dVar12 = local_148[5] - local_148[1];
        dVar13 = local_148[4] - local_148[0];
        dVar11 = dVar10 * dVar12 - dVar13 * dVar1;
        uVar7 = -(ulonglong)(-dVar11 <= dVar11);
        dVar14 = dVar14 + SQRT((local_148[4] - local_148[2]) * (local_148[4] - local_148[2]) +
                               (local_148[5] - local_148[3]) * (local_148[5] - local_148[3])) +
                          SQRT(dVar13 * dVar13 + dVar12 * dVar12) +
                          SQRT(dVar10 * dVar10 + dVar1 * dVar1);
        dVar2 = dVar2 + SQRT((local_d8 - local_f0) * (local_d8 - local_f0) +
                             (local_e8 - local_100) * (local_e8 - local_100) +
                             (local_e0 - local_f8) * (local_e0 - local_f8)) +
                        SQRT((local_d8 - local_108) * (local_d8 - local_108) +
                             (local_e8 - local_148[6]) * (local_e8 - local_148[6]) +
                             (local_e0 - dStack_110) * (local_e0 - dStack_110)) +
                        SQRT((local_f0 - local_108) * (local_f0 - local_108) +
                             (local_100 - local_148[6]) * (local_100 - local_148[6]) +
                             (local_f8 - dStack_110) * (local_f8 - dStack_110));
        *param_6 = (double)(~uVar7 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar7) * 0.5 +
                   *param_6;
        puVar5 = local_180;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar5);
  }
  uVar8 = 0;
  uVar9 = 0x3ff00000;
  if (*(char *)(local_188 + 0xb) != '\0') {
    uVar7 = (ulonglong)(dVar2 / dVar14) & -(ulonglong)(1e-08 <= dVar14);
    uVar9 = ~(uint)(-(ulonglong)(1e-08 <= dVar14) >> 0x20) & 0x3ff00000 | (uint)(uVar7 >> 0x20);
    uVar8 = (undefined4)uVar7;
  }
  *param_5 = CONCAT44(uVar9,uVar8);
  if ((local_d0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14297eb26 FUN_14297eb26 body=1819 status=ok
// SIG undefined FUN_14297eb26(void)

undefined8 FUN_14297eb26(int *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  undefined1 auVar5 [16];
  double dVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_1b8 [32];
  float *local_198;
  undefined1 *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined8 *local_178;
  float local_170;
  float fStack_16c;
  int local_168 [2];
  undefined1 local_160 [8];
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double *local_108;
  int local_100;
  uint local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  ulonglong local_d0;
  double dVar23;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  fVar2 = (float)param_1[1];
  iVar4 = *param_1;
  local_148[2] = 0;
  local_148[3] = 0;
  local_178 = param_4;
  FUN_146c7ca86(local_148 + 2,param_3);
  local_148[0] = 0;
  local_148[1] = 0;
  FUN_1400bd09c(local_148,param_3,1);
  local_180 = (ulonglong)param_3;
  local_188 = CONCAT44(local_188._4_4_,param_3);
  if ((int)param_3 < 1) {
    dVar23 = 0.0;
    dVar22 = 0.0;
  }
  else {
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    lVar16 = 0;
    uVar13 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    do {
      local_158 = 0;
      uStack_150 = 0;
      local_128 = (double)CONCAT44(local_128._4_4_,(int)uVar13);
      (*(code *)*local_178)(local_178[1],&local_128,&local_158);
      local_128 = 1.79769313486232e+308;
      dStack_120 = 1.79769313486232e+308;
      local_118 = -1.79769313486232e+308;
      dStack_110 = -1.79769313486232e+308;
      local_190 = local_160;
      local_198 = &local_170;
      FUN_14297e69e(param_1,param_2,&local_158,&local_128);
      pdVar8 = (double *)(local_148[2] + 0x10 + lVar16);
      *pdVar8 = local_118;
      pdVar8[1] = dStack_110;
      *(double *)(local_148[2] + lVar16) = local_128;
      ((double *)(local_148[2] + lVar16))[1] = dStack_120;
      dVar26 = (double)CONCAT44(fStack_16c,local_170);
      *(double *)(local_148[0] + uVar13 * 8) = dVar26;
      dVar22 = local_118 - local_128;
      dVar23 = dStack_110 - dStack_120;
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      dVar22 = (double)(-(ulonglong)(0.0 <= dVar22) & (ulonglong)dVar22) * dVar26;
      uVar20 = -(ulonglong)((double)CONCAT44(uVar32,uVar31) <= dVar22);
      auVar24._0_8_ = (ulonglong)dVar22 & uVar20;
      auVar24._8_8_ = 0;
      auVar21._0_8_ = ~uVar20 & CONCAT44(uVar32,uVar31);
      auVar21._8_8_ = ~CONCAT44(uVar34,uVar33) & CONCAT44(uVar34,uVar33);
      auVar21 = auVar21 | auVar24;
      dVar22 = auVar21._0_8_;
      dVar26 = (double)(-(ulonglong)(0.0 <= dVar23) & (ulonglong)dVar23) * dVar26;
      uVar20 = -(ulonglong)((double)CONCAT44(uVar28,uVar27) <= dVar26);
      auVar25._0_8_ = ~uVar20 & CONCAT44(uVar28,uVar27);
      auVar25._8_8_ = ~CONCAT44(uVar30,uVar29) & CONCAT44(uVar30,uVar29);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulonglong)dVar26 & uVar20;
      auVar25 = auVar25 | auVar5;
      dVar23 = auVar25._0_8_;
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 0x20;
      uVar31 = auVar21._0_4_;
      uVar32 = auVar21._4_4_;
      uVar33 = auVar21._8_4_;
      uVar34 = auVar21._12_4_;
      uVar27 = auVar25._0_4_;
      uVar28 = auVar25._4_4_;
      uVar29 = auVar25._8_4_;
      uVar30 = auVar25._12_4_;
    } while (local_180 != uVar13);
  }
  local_108 = (double *)0x0;
  local_100 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_fc = 0x80;
  uStack_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  if (0 < (int)local_188) {
    dVar26 = 1.0 - ((double)fVar2 / (double)iVar4 + (double)fVar2 / (double)iVar4);
    dVar22 = dVar26 / dVar22;
    dVar26 = dVar26 / dVar23;
    uVar20 = -(ulonglong)(dVar22 <= dVar26);
    uVar13 = 0;
    do {
      FUN_1402226aa(&local_128);
      dVar23 = *(double *)(local_148[2] + uVar13 * 0x20);
      dVar3 = *(double *)(local_148[2] + 8 + uVar13 * 0x20);
      local_158 = 0;
      uStack_150 = 0;
      local_170 = (float)uVar13;
      local_188 = uVar13;
      (*(code *)*local_178)(local_178[1],&local_170,&local_158);
      lVar16 = local_158;
      lVar17 = (longlong)(int)uStack_150;
      if (lVar17 != 0) {
        lVar18 = 0;
        do {
          (**(code **)(*param_2 + 0x10))(param_2,&local_170,*(undefined4 *)(lVar16 + lVar18));
          if (((-1 < (int)local_170) && (-1 < (int)fStack_16c)) && (-1 < local_168[0])) {
            FUN_1447cbafe(&local_128,local_160,&local_170,0);
            FUN_1447cbafe(&local_128,local_160,&fStack_16c);
            FUN_1447cbafe(&local_128,local_160,local_168);
          }
          lVar18 = lVar18 + 4;
        } while (lVar17 * 4 != lVar18);
      }
      iVar4 = local_100;
      dVar6 = *(double *)(local_148[0] + local_188 * 8) *
              (double)(~uVar20 & (ulonglong)dVar26 | (ulonglong)dVar22 & uVar20);
      if (local_100 == 0) {
        uVar14 = 1;
        uVar13 = 0;
        iVar15 = 0;
        iVar9 = 0;
      }
      else {
        pdVar8 = local_108;
        if (local_108 == (double *)0x0) {
          pdVar8 = &local_118;
        }
        uVar19 = *(uint *)pdVar8;
        if (uVar19 == 0) {
          iVar9 = local_100 + 0x1e;
          if (-1 < local_100 + -1) {
            iVar9 = local_100 + -1;
          }
          uVar13 = 0;
          uVar14 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar14 = uVar13;
          }
          iVar15 = 0;
          do {
            if (uVar14 == uVar13) goto LAB_14297ef82;
            iVar15 = iVar15 + 0x20;
            uVar19 = *(uint *)((longlong)pdVar8 + (uVar13 + 1) * 4);
            uVar13 = uVar13 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar13 = 0;
          iVar15 = 0;
        }
        uVar14 = (ulonglong)(-uVar19 & uVar19);
        uVar1 = uVar14 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar9 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (local_100 <= iVar9) {
          iVar9 = local_100;
        }
      }
      if (iVar9 != local_100) {
        uVar19 = 0xffffffff;
        iVar7 = local_100;
        do {
          iVar9 = *(int *)((longlong)local_128 + (longlong)iVar9 * 0xc);
          if (-1 < iVar9) {
            (**(code **)(*param_2 + 0x20))(param_2,&local_170,iVar9);
            (**(code **)(*param_2 + 0x28))
                      (param_2,iVar9,
                       CONCAT44((float)(((double)fStack_16c - dVar3) * dVar6),
                                (float)(((double)local_170 - dVar23) * dVar6)));
            iVar7 = local_100;
          }
          uVar19 = uVar19 & ~(uint)uVar14;
          pdVar8 = local_108;
          if (local_108 == (double *)0x0) {
            pdVar8 = &local_118;
          }
          iVar9 = (int)uVar13;
          lVar16 = (longlong)iVar9;
          uVar10 = *(uint *)((longlong)pdVar8 + lVar16 * 4) & uVar19;
          if (uVar10 == 0) {
            iVar11 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar11 = iVar7 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar9) {
              iVar12 = iVar9;
            }
            if (iVar9 < iVar11) {
              lVar17 = 0;
              do {
                uVar10 = *(uint *)((longlong)pdVar8 + (lVar16 + lVar17 + 1) * 4);
                if (uVar10 != 0) {
                  uVar13 = (ulonglong)(iVar9 + (int)lVar17 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_14297f0ac;
                }
                iVar15 = iVar15 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar12 - lVar16 != lVar17);
              uVar19 = 0xffffffff;
              lVar16 = (longlong)iVar12;
            }
            uVar13 = lVar16 + 1U & 0xffffffff;
            iVar9 = iVar7;
          }
          else {
LAB_14297f0ac:
            uVar14 = (ulonglong)(-uVar10 & uVar10);
            uVar1 = uVar14 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar9 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar9) {
              iVar9 = iVar7;
            }
          }
        } while (iVar9 != iVar4);
      }
LAB_14297ef82:
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      uVar13 = local_188 + 1;
    } while (uVar13 != local_180);
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  uVar13 = (ulonglong)dStack_120 >> 0x20;
  dStack_120 = (double)((ulonglong)dStack_120 & 0xffffffff00000000);
  if ((int)uVar13 != 0) {
    FUN_1447a08a2(&local_128,0);
  }
  uStack_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    FUN_1446efbd8(&local_118,0);
  }
  if (local_108 != (double *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0.0) {
    FUN_1400020a8();
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_148[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14297f2a2 FUN_14297f2a2 body=12 status=ok
// SIG undefined FUN_14297f2a2(void)

void FUN_14297f2a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014297f2ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14297f2ae FUN_14297f2ae body=29 status=ok
// SIG undefined FUN_14297f2ae(void)

undefined8 FUN_14297f2ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14297f2cc FUN_14297f2cc body=213 status=ok
// SIG undefined FUN_14297f2cc(void)

void FUN_14297f2cc(longlong *param_1,undefined8 *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x68) + 0x10);
  lVar7 = *(longlong *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x68) + 0x1c0) + (ulonglong)(param_3 >> 9) * 8);
  uVar8 = (ulonglong)((param_3 & 0x1ff) << 4);
  uVar4 = *(uint *)(lVar7 + uVar8);
  uVar5 = *(uint *)(lVar7 + 4 + uVar8);
  lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
  uVar8 = (ulonglong)uVar4 & 0x1ff;
  dVar9 = *(double *)(lVar7 + uVar8 * 0x18);
  dVar11 = *(double *)(lVar7 + 8 + uVar8 * 0x18);
  dVar1 = *(double *)(lVar7 + 0x10 + uVar8 * 0x18);
  lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
  uVar8 = (ulonglong)uVar5 & 0x1ff;
  dVar10 = *(double *)(lVar6 + uVar8 * 0x18);
  dVar2 = *(double *)(lVar6 + 8 + uVar8 * 0x18);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18);
  uVar12 = SUB84(dVar10,0);
  uVar13 = (undefined4)((ulonglong)dVar10 >> 0x20);
  if (dVar9 <= dVar10) {
    uVar12 = SUB84(dVar9,0);
    uVar13 = (undefined4)((ulonglong)dVar9 >> 0x20);
    dVar9 = dVar10;
  }
  dVar10 = dVar11;
  if (dVar11 <= dVar2) {
    dVar10 = dVar2;
    dVar2 = dVar11;
  }
  dVar11 = dVar1;
  if (dVar1 <= dVar3) {
    dVar11 = dVar3;
    dVar3 = dVar1;
  }
  *param_2 = CONCAT44(uVar13,uVar12);
  param_2[1] = dVar2;
  param_2[2] = dVar3;
  param_2[3] = dVar9;
  param_2[4] = dVar10;
  param_2[5] = dVar11;
  return;
}



// FUNCTION 14297f3c2 FUN_14297f3c2 body=5 status=ok
// SIG undefined FUN_14297f3c2(void)

longlong FUN_14297f3c2(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14297f3d4 FUN_14297f3d4 body=29 status=ok
// SIG undefined FUN_14297f3d4(void)

undefined8 FUN_14297f3d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14297f3f2 FUN_14297f3f2 body=8 status=ok
// SIG undefined FUN_14297f3f2(void)

void FUN_14297f3f2(undefined8 *param_1,byte *param_2)

{
  *(byte *)*param_1 = *(byte *)*param_1 & *param_2;
  return;
}



// FUNCTION 14297f424 FUN_14297f424 body=29 status=ok
// SIG undefined FUN_14297f424(void)

undefined8 FUN_14297f424(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14297f474 FUN_14297f474 body=29 status=ok
// SIG undefined FUN_14297f474(void)

undefined8 FUN_14297f474(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14297f496 FUN_14297f496 body=644 status=ok
// SIG undefined FUN_14297f496(void)

void FUN_14297f496(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *param_2;
  lVar13 = (longlong)(int)uVar4;
  lVar5 = *param_1;
  if (*(int *)(lVar5 + 0xd8) != *(int *)(lVar5 + 0x104)) {
    lVar10 = lVar5 + 0x108;
    if (*(longlong *)(lVar5 + 0x110) != 0) {
      lVar10 = *(longlong *)(lVar5 + 0x110);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar5 + 0x118) - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar5 + 0xd0) + (longlong)iVar9 * 0xc) == uVar4) {
          local_68 = *(double *)(*(longlong *)(lVar5 + 0xa0) + 0x10 + lVar13 * 0x18);
          pdVar1 = (double *)(*(longlong *)(lVar5 + 0xa0) + lVar13 * 0x18);
          local_78 = *pdVar1;
          dStack_70 = pdVar1[1];
          if (*(int *)(lVar5 + 200) != 0) {
            pdVar1 = *(double **)(lVar5 + 0xc0);
            local_78 = *pdVar1 * local_78;
            dStack_70 = pdVar1[1] * dStack_70;
            local_68 = pdVar1[2] * local_68;
          }
          pdVar1 = *(double **)(lVar5 + 0xb0);
          FUN_146bed047(&local_60,pdVar1 + 3,&local_78);
          dVar2 = pdVar1[2];
          dVar3 = pdVar1[1];
          lVar13 = (longlong)*(int *)(*(longlong *)param_1[3] + lVar13 * 4);
          lVar5 = *(longlong *)(lVar5 + 8);
          *(double *)(lVar5 + lVar13 * 0x18) = local_60 + *pdVar1;
          *(double *)(lVar5 + 8 + lVar13 * 0x18) = local_58 + dVar3;
          *(double *)(lVar5 + 0x10 + lVar13 * 0x18) = local_50 + dVar2;
          goto LAB_14297f62e;
        }
        iVar9 = *(int *)(*(longlong *)(lVar5 + 0xd0) + (longlong)iVar9 * 0xc + 4);
      } while (iVar9 != -1);
    }
  }
  if (0 < (int)param_1[2]) {
    lVar11 = 0x18;
    lVar12 = 0x10;
    lVar10 = 0;
    do {
      local_68 = *(double *)(*(longlong *)(lVar5 + 0xa0) + 0x10 + lVar13 * 0x18);
      pdVar1 = (double *)(*(longlong *)(lVar5 + 0xa0) + lVar13 * 0x18);
      local_78 = *pdVar1;
      dStack_70 = pdVar1[1];
      if (*(int *)(lVar5 + 200) != 0) {
        lVar6 = *(longlong *)(lVar5 + 0xc0);
        local_78 = *(double *)(lVar6 + -0x10 + lVar12) * local_78;
        dStack_70 = *(double *)(lVar6 + -8 + lVar12) * dStack_70;
        local_68 = *(double *)(lVar6 + lVar12) * local_68;
      }
      lVar6 = *(longlong *)(lVar5 + 0xb0);
      FUN_146bed047(&local_60,lVar6 + lVar11,&local_78);
      dVar2 = *(double *)(lVar6 + -8 + lVar11);
      dVar3 = *(double *)(lVar6 + -0x10 + lVar11);
      lVar8 = (longlong)*(int *)(*(longlong *)param_1[3] + lVar13 * 4) +
              (longlong)(int)lVar10 * (longlong)*(int *)((longlong)param_1 + 0xc) +
              (longlong)(int)param_1[1];
      lVar7 = *(longlong *)(lVar5 + 8);
      *(double *)(lVar7 + lVar8 * 0x18) = local_60 + *(double *)(lVar6 + -0x18 + lVar11);
      *(double *)(lVar7 + 8 + lVar8 * 0x18) = local_58 + dVar3;
      *(double *)(lVar7 + 0x10 + lVar8 * 0x18) = local_50 + dVar2;
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x38;
      lVar12 = lVar12 + 0x18;
    } while (lVar10 < (int)param_1[2]);
  }
LAB_14297f62e:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14297f71c FUN_14297f71c body=2609 status=ok
// SIG undefined FUN_14297f71c(void)

ulonglong FUN_14297f71c(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_148 [32];
  uint local_128;
  longlong local_120;
  ulonglong *local_118;
  ulonglong local_110;
  int local_108;
  int local_104;
  longlong local_100;
  uint local_f4;
  longlong local_f0;
  ulonglong local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  ulonglong local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar17 = *param_2;
  local_110 = (ulonglong)uVar17;
  local_108 = uVar17 + 1;
  uVar19 = (longlong)local_108 / (longlong)(int)param_1[1] & 0xffffffff;
  local_104 = local_108 % (int)param_1[1];
  if (0 < (int)param_1[4]) {
    local_100 = (longlong)(int)uVar17;
    lVar2 = *param_1;
    lVar18 = lVar2 + 0x108;
    uVar25 = 0;
    local_f0 = lVar18;
    do {
      uVar21 = uVar25 + 1;
      iVar7 = (int)uVar21;
      uVar19 = (longlong)((ulonglong)(uint)(iVar7 >> 0x1f) << 0x20 | uVar21 & 0xffffffff) %
               (longlong)*(int *)((longlong)param_1 + 0xc);
      uVar13 = uVar19 & 0xffffffff;
      uVar24 = (uint)uVar25;
      uVar17 = (uint)uVar19;
      iVar8 = (uint)local_110;
      if (*(int *)(lVar2 + 0xd8) == *(int *)(lVar2 + 0x104)) {
LAB_14297f87f:
        iVar22 = *(int *)((longlong)param_1 + 0x14) * (uint)local_110 + (int)param_1[2];
        iVar8 = *(int *)(*(longlong *)param_1[3] + uVar25 * 4);
        local_128 = iVar8 + iVar22;
        iVar16 = *(int *)((longlong)param_1 + 0x14) * local_104 + (int)param_1[2];
        uVar20 = iVar8 + iVar16;
        local_e8 = (ulonglong)uVar20;
        iVar8 = *(int *)(*(longlong *)param_1[3] + uVar13 * 4);
        uVar17 = iVar16 + iVar8;
        uVar23 = iVar22 + iVar8;
        uVar19 = (longlong)*(int *)(*(longlong *)param_1[5] + uVar25 * 4) +
                 *(int *)((longlong)param_1 + 0x24) * local_100;
        lVar18 = *(longlong *)(lVar2 + 8);
        pdVar1 = (double *)(lVar18 + (longlong)(int)uVar17 * 0x18);
        iVar8 = (int)uVar19;
        if (*(char *)(lVar2 + 0x14c) == '\0') {
          lVar14 = (longlong)(int)local_128;
          dVar30 = pdVar1[2] - *(double *)(lVar18 + 0x10 + lVar14 * 0x18);
          dVar5 = pdVar1[1] - *(double *)(lVar18 + 8 + lVar14 * 0x18);
          dVar27 = *pdVar1 - *(double *)(lVar18 + lVar14 * 0x18);
          dVar29 = dVar30 * dVar30 + dVar27 * dVar27 + dVar5 * dVar5;
        }
        else {
          lVar14 = (longlong)(int)local_128;
          dVar27 = *pdVar1 - *(double *)(lVar18 + lVar14 * 0x18);
          dVar5 = pdVar1[1] - *(double *)(lVar18 + 8 + lVar14 * 0x18);
          dVar30 = pdVar1[2] - *(double *)(lVar18 + 0x10 + lVar14 * 0x18);
          lVar14 = (longlong)(int)uVar23;
          lVar15 = (longlong)(int)uVar20;
          dVar28 = *(double *)(lVar18 + lVar14 * 0x18) - *(double *)(lVar18 + lVar15 * 0x18);
          dVar31 = *(double *)(lVar18 + 8 + lVar14 * 0x18) - *(double *)(lVar18 + 8 + lVar15 * 0x18)
          ;
          dVar6 = *(double *)(lVar18 + 0x10 + lVar14 * 0x18) -
                  *(double *)(lVar18 + 0x10 + lVar15 * 0x18);
          dVar29 = dVar30 * dVar30 + dVar27 * dVar27 + dVar5 * dVar5;
          dVar32 = dVar6 * dVar6 + dVar28 * dVar28 + dVar31 * dVar31;
          dVar33 = *(double *)(lVar2 + 0x150) + 1.0;
          if (dVar33 * dVar33 < dVar29 / dVar32) {
            dVar32 = SQRT(dVar32);
            dVar30 = 1.0 / dVar32;
            if (0.0 < dVar32) {
              dVar6 = dVar6 * dVar30;
              dVar31 = dVar31 * dVar30;
            }
            else {
              dVar31 = 0.0;
              dVar6 = 0.0;
            }
            uVar25 = -(ulonglong)(0.0 < dVar32) & (ulonglong)(dVar28 * dVar30);
            uVar11 = uVar20;
            uVar9 = local_128;
            if (*(char *)(lVar2 + 0x98) != '\0') {
              uVar11 = local_128;
              uVar9 = uVar20;
            }
            lVar18 = *(longlong *)(lVar2 + 0x58);
            lVar15 = (longlong)iVar8;
            lVar14 = lVar15 * 0xc;
            *(uint *)(lVar18 + lVar14) = uVar11;
            *(uint *)(lVar18 + 4 + lVar14) = uVar23;
            *(uint *)(lVar18 + 8 + lVar14) = uVar9;
            local_120 = param_1[6];
            local_118 = &local_c8;
            local_c8 = uVar25;
            local_c0 = dVar31;
            local_b8 = dVar6;
            FUN_146c64fe8(lVar2,uVar19 & 0xffffffff,local_e8,uVar23);
            iVar12 = (int)param_1[7] * (uint)local_110;
            iVar22 = iVar12 + uVar24;
            iVar10 = (int)param_1[7] * local_108 + uVar24;
            iVar16 = iVar10;
            if (*(char *)(lVar2 + 0x98) != '\0') {
              iVar16 = iVar22;
              iVar22 = iVar10;
            }
            lVar18 = *(longlong *)(lVar2 + 0x68);
            *(int *)(lVar18 + lVar14) = iVar16;
            *(int *)(lVar18 + 4 + lVar14) = iVar12 + iVar7;
            *(int *)(lVar18 + 8 + lVar14) = iVar22;
            uVar20 = 0xffffffff;
            switch(*(undefined1 *)(lVar2 + 0x158)) {
            case 0:
              uVar20 = 0;
              break;
            case 1:
              uVar20 = (int)param_1[4] * (uint)local_110 + uVar24;
              break;
            case 2:
              uVar20 = (uint)local_110;
              break;
            case 3:
              uVar20 = uVar24;
            }
            *(uint *)(*(longlong *)(lVar2 + 0x88) + lVar15 * 4) = uVar20;
            uVar20 = uVar23;
            uVar9 = uVar17;
            if (*(char *)(lVar2 + 0x98) != '\0') {
              uVar20 = uVar17;
              uVar9 = uVar23;
            }
            lVar18 = *(longlong *)(lVar2 + 0x58);
            lVar14 = (lVar15 * 4 + 4) * 3;
            *(uint *)(lVar18 + lVar14) = uVar20;
            *(int *)(lVar18 + 4 + lVar14) = (int)local_e8;
            *(uint *)(lVar18 + 8 + lVar14) = uVar9;
            local_d0 = -dVar6;
            local_e0._8_4_ = SUB84(dVar31,0);
            local_e0._0_8_ = uVar25 ^ 0x8000000000000000;
            local_e0._12_4_ = (uint)((ulonglong)dVar31 >> 0x20) ^ 0x80000000;
            local_120 = param_1[6];
            local_118 = (ulonglong *)local_e0;
            local_128 = uVar17;
            FUN_146c64fe8(lVar2,iVar8 + 1,uVar23);
            iVar22 = (int)param_1[7] * local_108;
            iVar16 = iVar22 + iVar7;
            iVar7 = (int)param_1[7] * (uint)local_110 + iVar7;
            iVar8 = iVar7;
            if (*(char *)(lVar2 + 0x98) != '\0') {
              iVar8 = iVar16;
              iVar16 = iVar7;
            }
            lVar18 = *(longlong *)(lVar2 + 0x68);
            *(int *)(lVar18 + lVar14) = iVar8;
            *(uint *)(lVar18 + 4 + lVar14) = iVar22 + uVar24;
            *(int *)(lVar18 + 8 + lVar14) = iVar16;
            uVar17 = 0xffffffff;
            switch(*(undefined1 *)(lVar2 + 0x158)) {
            case 0:
              uVar17 = 0;
              break;
            case 1:
              uVar17 = (int)param_1[4] * (uint)local_110 + uVar24;
              break;
            case 2:
              uVar17 = (uint)local_110;
              break;
            case 3:
              uVar17 = uVar24;
            }
            *(uint *)(*(longlong *)(lVar2 + 0x88) + (lVar15 + 1) * 4) = uVar17;
            lVar18 = local_f0;
            goto LAB_14297f945;
          }
        }
        dVar29 = SQRT(dVar29);
        dVar31 = 1.0 / dVar29;
        if (0.0 < dVar29) {
          dVar30 = dVar30 * dVar31;
          dVar5 = dVar5 * dVar31;
        }
        else {
          dVar5 = 0.0;
          dVar30 = 0.0;
        }
        uVar25 = -(ulonglong)(0.0 < dVar29) & (ulonglong)(dVar27 * dVar31);
        uVar9 = local_128;
        uVar20 = uVar23;
        if (*(char *)(lVar2 + 0x98) != '\0') {
          uVar9 = uVar23;
          uVar20 = local_128;
        }
        lVar18 = *(longlong *)(lVar2 + 0x58);
        lVar14 = uVar19 * 0xc;
        *(uint *)(lVar18 + lVar14) = uVar9;
        *(uint *)(lVar18 + 4 + lVar14) = uVar17;
        *(uint *)(lVar18 + 8 + lVar14) = uVar20;
        local_120 = param_1[6];
        local_118 = &local_c8;
        local_f4 = local_128;
        local_128 = uVar23;
        local_c8 = uVar25;
        local_c0 = dVar5;
        local_b8 = dVar30;
        FUN_146c64fe8(lVar2,uVar19 & 0xffffffff,local_f4,uVar17);
        lVar18 = param_1[7];
        iVar10 = (int)lVar18 * (uint)local_110;
        iVar22 = iVar10 + iVar7;
        iVar10 = iVar10 + uVar24;
        iVar16 = iVar10;
        if (*(char *)(lVar2 + 0x98) != '\0') {
          iVar16 = iVar22;
          iVar22 = iVar10;
        }
        lVar15 = *(longlong *)(lVar2 + 0x68);
        *(int *)(lVar15 + lVar14) = iVar16;
        *(int *)(lVar15 + 4 + lVar14) = (int)lVar18 * local_108 + iVar7;
        *(int *)(lVar15 + 8 + lVar14) = iVar22;
        uVar20 = 0xffffffff;
        switch(*(undefined1 *)(lVar2 + 0x158)) {
        case 0:
          uVar20 = 0;
          break;
        case 1:
          uVar20 = (int)param_1[4] * (uint)local_110 + uVar24;
          break;
        case 2:
          uVar20 = (uint)local_110;
          break;
        case 3:
          uVar20 = uVar24;
        }
        *(uint *)(*(longlong *)(lVar2 + 0x88) + uVar19 * 4) = uVar20;
        local_128 = (uint)local_e8;
        uVar23 = uVar17;
        uVar20 = local_128;
        if (*(char *)(lVar2 + 0x98) != '\0') {
          uVar23 = local_128;
          uVar20 = uVar17;
        }
        lVar18 = *(longlong *)(lVar2 + 0x58);
        lVar14 = ((longlong)iVar8 * 4 + 4) * 3;
        *(uint *)(lVar18 + lVar14) = uVar23;
        *(uint *)(lVar18 + 4 + lVar14) = local_f4;
        *(uint *)(lVar18 + 8 + lVar14) = uVar20;
        local_d0 = -dVar30;
        local_e0._8_4_ = SUB84(dVar5,0);
        local_e0._0_8_ = uVar25 ^ 0x8000000000000000;
        local_e0._12_4_ = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
        local_120 = param_1[6];
        local_118 = (ulonglong *)local_e0;
        FUN_146c64fe8(lVar2,iVar8 + 1,uVar17);
        lVar18 = param_1[7];
        iVar22 = (int)lVar18 * local_108;
        iVar16 = iVar22 + uVar24;
        iVar22 = iVar22 + iVar7;
        iVar7 = iVar22;
        if (*(char *)(lVar2 + 0x98) != '\0') {
          iVar7 = iVar16;
          iVar16 = iVar22;
        }
        lVar15 = *(longlong *)(lVar2 + 0x68);
        *(int *)(lVar15 + lVar14) = iVar7;
        *(uint *)(lVar15 + 4 + lVar14) = (int)lVar18 * (uint)local_110 + uVar24;
        *(int *)(lVar15 + 8 + lVar14) = iVar16;
        uVar17 = 0xffffffff;
        switch(*(undefined1 *)(lVar2 + 0x158)) {
        case 0:
          uVar17 = 0;
          break;
        case 1:
          uVar17 = (int)param_1[4] * (uint)local_110 + uVar24;
          break;
        case 2:
          uVar17 = (uint)local_110;
          break;
        case 3:
          uVar17 = uVar24;
        }
        *(uint *)(*(longlong *)(lVar2 + 0x88) + ((longlong)iVar8 + 1) * 4) = uVar17;
        lVar18 = local_f0;
      }
      else {
        lVar14 = *(longlong *)(lVar2 + 0x110);
        if (*(longlong *)(lVar2 + 0x110) == 0) {
          lVar14 = lVar18;
        }
        uVar20 = *(int *)(lVar2 + 0x118) + 0x7fffffff;
        iVar16 = *(int *)(lVar14 + (ulonglong)(uVar20 & uVar24) * 4);
        if (iVar16 == -1) {
          bVar4 = true;
        }
        else {
          do {
            bVar26 = uVar25 == *(uint *)(*(longlong *)(lVar2 + 0xd0) + (longlong)iVar16 * 0xc);
            bVar4 = !bVar26;
            if (bVar26) break;
            iVar16 = *(int *)(*(longlong *)(lVar2 + 0xd0) + (longlong)iVar16 * 0xc + 4);
          } while (iVar16 != -1);
        }
        iVar16 = *(int *)(lVar14 + (ulonglong)(uVar20 & uVar17) * 4);
        if (iVar16 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar2 + 0xd0) + (longlong)iVar16 * 0xc) == uVar17) {
              if (!bVar4) goto LAB_14297f945;
              iVar16 = *(int *)((longlong)param_1 + 0x14);
              iVar22 = *(int *)(*(longlong *)param_1[3] + uVar25 * 4) + (int)param_1[2];
              uVar23 = iVar16 * (uint)local_110 + iVar22;
              uVar19 = (longlong)*(int *)(*(longlong *)param_1[5] + uVar25 * 4) +
                       *(int *)((longlong)param_1 + 0x24) * local_100;
              local_128 = *(uint *)(*(longlong *)param_1[3] + uVar13 * 4);
              uVar17 = uVar23;
              uVar20 = local_128;
              if (*(char *)(lVar2 + 0x98) != '\0') {
                uVar17 = local_128;
                uVar20 = uVar23;
              }
              lVar14 = *(longlong *)(lVar2 + 0x58);
              lVar15 = uVar19 * 0xc;
              *(uint *)(lVar14 + lVar15) = uVar17;
              *(int *)(lVar14 + 4 + lVar15) = iVar16 * local_104 + iVar22;
              *(uint *)(lVar14 + 8 + lVar15) = uVar20;
              local_120 = param_1[6];
              FUN_146c64ed8(lVar2,uVar19 & 0xffffffff);
              lVar14 = param_1[7];
              iVar8 = (int)lVar14 * iVar8;
              iVar7 = iVar8 + iVar7;
              iVar8 = iVar8 + uVar24;
              iVar16 = iVar8;
              if (*(char *)(lVar2 + 0x98) != '\0') {
                iVar16 = iVar7;
                iVar7 = iVar8;
              }
              lVar3 = *(longlong *)(lVar2 + 0x68);
              *(int *)(lVar3 + lVar15) = iVar16;
              *(uint *)(lVar3 + 4 + lVar15) = (int)lVar14 * local_108 + uVar24;
              *(int *)(lVar3 + 8 + lVar15) = iVar7;
              switch(*(undefined1 *)(lVar2 + 0x158)) {
              case 0:
                goto switchD_14297fb60_caseD_0;
              case 1:
                goto switchD_14297fb60_caseD_1;
              case 2:
                goto switchD_14297fb60_caseD_2;
              case 3:
                goto switchD_14297fb60_caseD_3;
              }
              goto switchD_14297fb60_default;
            }
            iVar16 = *(int *)(*(longlong *)(lVar2 + 0xd0) + (longlong)iVar16 * 0xc + 4);
          } while (iVar16 != -1);
        }
        if (bVar4) goto LAB_14297f87f;
        iVar16 = *(int *)((longlong)param_1 + 0x14);
        iVar22 = *(int *)(*(longlong *)param_1[3] + uVar13 * 4) + (int)param_1[2];
        local_128 = iVar16 * (uint)local_110 + iVar22;
        uVar19 = (longlong)*(int *)(*(longlong *)param_1[5] + uVar25 * 4) +
                 *(int *)((longlong)param_1 + 0x24) * local_100;
        uVar17 = *(uint *)(*(longlong *)param_1[3] + uVar25 * 4);
        uVar20 = uVar17;
        uVar23 = local_128;
        if (*(char *)(lVar2 + 0x98) != '\0') {
          uVar20 = local_128;
          uVar23 = uVar17;
        }
        lVar14 = *(longlong *)(lVar2 + 0x58);
        lVar15 = uVar19 * 0xc;
        *(uint *)(lVar14 + lVar15) = uVar20;
        *(int *)(lVar14 + 4 + lVar15) = iVar16 * local_104 + iVar22;
        *(uint *)(lVar14 + 8 + lVar15) = uVar23;
        local_120 = param_1[6];
        FUN_146c64ed8(lVar2,uVar19 & 0xffffffff);
        lVar14 = param_1[7];
        iVar8 = (int)lVar14 * iVar8;
        iVar22 = iVar8 + iVar7;
        iVar8 = iVar8 + uVar24;
        iVar16 = iVar8;
        if (*(char *)(lVar2 + 0x98) != '\0') {
          iVar16 = iVar22;
          iVar22 = iVar8;
        }
        lVar3 = *(longlong *)(lVar2 + 0x68);
        *(int *)(lVar3 + lVar15) = iVar16;
        *(int *)(lVar3 + 4 + lVar15) = (int)lVar14 * local_108 + iVar7;
        *(int *)(lVar3 + 8 + lVar15) = iVar22;
        switch(*(undefined1 *)(lVar2 + 0x158)) {
        case 0:
switchD_14297fb60_caseD_0:
          uVar25 = 0;
          break;
        case 1:
switchD_14297fb60_caseD_1:
          uVar25 = (ulonglong)((int)param_1[4] * (uint)local_110 + uVar24);
          break;
        case 2:
switchD_14297fb60_caseD_2:
          uVar25 = local_110;
          break;
        case 3:
          break;
        default:
switchD_14297fb60_default:
          uVar25 = 0xffffffff;
        }
switchD_14297fb60_caseD_3:
        *(int *)(*(longlong *)(lVar2 + 0x88) + uVar19 * 4) = (int)uVar25;
      }
LAB_14297f945:
      uVar19 = (ulonglong)(int)param_1[4];
      uVar25 = uVar21;
    } while ((longlong)uVar21 < (longlong)uVar19);
  }
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
}



// FUNCTION 14298014e FUN_14298014e body=189 status=ok
// SIG undefined FUN_14298014e(void)

void FUN_14298014e(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  
  iVar4 = *param_2;
  lVar5 = *param_1;
  lVar6 = *(longlong *)param_1[1];
  lVar7 = (longlong)iVar4;
  dVar1 = *(double *)(lVar6 + lVar7 * 0x18);
  dVar2 = *(double *)(lVar6 + 8 + lVar7 * 0x18);
  dVar3 = *(double *)(lVar6 + 0x10 + lVar7 * 0x18);
  dVar10 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar11 = 0.0;
  if (0.0 < dVar10) {
    dVar10 = 1.0 / dVar10;
    fVar8 = (float)(dVar3 * dVar10);
    fVar9 = (float)(dVar2 * dVar10);
    fVar11 = (float)(dVar1 * dVar10);
  }
  lVar6 = *(longlong *)(lVar5 + 0x38);
  *(float *)(lVar6 + lVar7 * 0xc) = fVar11;
  *(float *)(lVar6 + 4 + lVar7 * 0xc) = fVar9;
  *(float *)(lVar6 + 8 + lVar7 * 0xc) = fVar8;
  *(int *)(*(longlong *)(lVar5 + 0x48) + lVar7 * 4) = iVar4;
  return;
}



// FUNCTION 14298020c FUN_14298020c body=295 status=ok
// SIG undefined FUN_14298020c(void)

ulonglong FUN_14298020c(ulonglong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar1 = *param_2;
  uVar2 = param_1[1];
  uVar3 = (longlong)(iVar1 + 1) / (longlong)(int)uVar2 & 0xffffffff;
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  if (0 < iVar6) {
    uVar3 = *param_1;
    uVar9 = 0;
    do {
      if (*(int *)(uVar3 + 0xd8) != *(int *)(uVar3 + 0x104)) {
        lVar8 = *(longlong *)(uVar3 + 0x110);
        if (*(longlong *)(uVar3 + 0x110) == 0) {
          lVar8 = uVar3 + 0x108;
        }
        iVar4 = *(int *)(lVar8 + (ulonglong)((uint)uVar9 & *(int *)(uVar3 + 0x118) + 0x7fffffffU) *
                                 4);
        if (iVar4 != -1) {
          do {
            if (uVar9 == *(uint *)(*(longlong *)(uVar3 + 0xd0) + (longlong)iVar4 * 0xc))
            goto LAB_14298031e;
            iVar4 = *(int *)(*(longlong *)(uVar3 + 0xd0) + (longlong)iVar4 * 0xc + 4);
          } while (iVar4 != -1);
        }
      }
      iVar6 = *(int *)(*(longlong *)param_1[3] + uVar9 * 4) + (int)param_1[2];
      lVar8 = *(longlong *)(uVar3 + 8);
      lVar5 = (longlong)(*(int *)((longlong)param_1 + 0x14) * iVar1 + iVar6);
      lVar7 = (longlong)(*(int *)((longlong)param_1 + 0x14) * ((iVar1 + 1) % (int)uVar2) + iVar6);
      dVar10 = *(double *)(lVar8 + lVar7 * 0x18) - *(double *)(lVar8 + lVar5 * 0x18);
      dVar11 = *(double *)(lVar8 + 8 + lVar7 * 0x18) - *(double *)(lVar8 + 8 + lVar5 * 0x18);
      dVar12 = *(double *)(lVar8 + 0x10 + lVar7 * 0x18) - *(double *)(lVar8 + 0x10 + lVar5 * 0x18);
      *(double *)(*(longlong *)param_1[4] + (longlong)iVar1 * 8) =
           SQRT(dVar12 * dVar12 + dVar10 * dVar10 + dVar11 * dVar11) +
           *(double *)(*(longlong *)param_1[4] + (longlong)iVar1 * 8);
      iVar6 = *(int *)((longlong)param_1 + 0xc);
LAB_14298031e:
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar6);
  }
  return uVar3;
}



// FUNCTION 142980334 FUN_142980334 body=288 status=ok
// SIG undefined FUN_142980334(void)

ulonglong FUN_142980334(longlong *param_1,int *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  iVar2 = *param_2;
  lVar4 = param_1[1];
  uVar5 = (longlong)iVar2 / (longlong)(int)lVar4 & 0xffffffff;
  uVar11 = (ulonglong)*(uint *)(param_1 + 2);
  if (0 < (int)*(uint *)(param_1 + 2)) {
    lVar3 = *param_1;
    uVar12 = 0;
    do {
      uVar5 = (longlong)((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar12 & 0xffffffff) %
              (longlong)*(int *)((longlong)param_1 + 0xc);
      uVar9 = uVar5 & 0xffffffff;
      uVar7 = (uint)uVar5;
      if (*(int *)(lVar3 + 0xd8) != *(int *)(lVar3 + 0x104)) {
        lVar13 = *(longlong *)(lVar3 + 0x110);
        if (*(longlong *)(lVar3 + 0x110) == 0) {
          lVar13 = lVar3 + 0x108;
        }
        iVar8 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar3 + 0x118) + 0x7fffffffU & uVar7) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar3 + 0xd0) + (longlong)iVar8 * 0xc) == uVar7) {
              iVar8 = *(int *)(*(longlong *)param_1[4] + uVar9 * 4);
              plVar6 = param_1 + 5;
              goto LAB_1429803e9;
            }
            iVar8 = *(int *)(*(longlong *)(lVar3 + 0xd0) + (longlong)iVar8 * 0xc + 4);
          } while (iVar8 != -1);
        }
      }
      iVar8 = (int)param_1[3] * (iVar2 % (int)lVar4) + *(int *)((longlong)param_1 + 0x14) +
              *(int *)(*(longlong *)param_1[4] + uVar9 * 4);
      plVar6 = param_1 + 6;
LAB_1429803e9:
      dVar1 = *(double *)(*(longlong *)param_1[7] + uVar12 * 8);
      lVar13 = *(longlong *)(lVar3 + 0x18);
      lVar10 = (longlong)((int)uVar11 * iVar2 + (int)uVar12);
      *(float *)(lVar13 + lVar10 * 8) =
           (float)*(double *)(*(longlong *)*plVar6 + (longlong)iVar2 * 8);
      *(float *)(lVar13 + 4 + lVar10 * 8) = (float)dVar1;
      uVar5 = *(ulonglong *)(lVar3 + 0x28);
      *(int *)(uVar5 + lVar10 * 4) = iVar8;
      uVar12 = uVar12 + 1;
      uVar11 = (ulonglong)(int)param_1[2];
    } while ((longlong)uVar12 < (longlong)uVar11);
  }
  return uVar5;
}



// FUNCTION 142980454 FUN_142980454 body=363 status=ok
// SIG undefined FUN_142980454(void)

void FUN_142980454(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1429804ea;
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
LAB_1429804ea:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1429805ee FUN_1429805ee body=192 status=ok
// SIG undefined FUN_1429805ee(void)

void FUN_1429805ee(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)param_1[4] == '\x01') {
    FUN_146c13dec(*param_1,&local_28,*param_2);
    if (*(char *)param_1[3] == '\0') {
      pdVar1 = (double *)param_1[2];
      pdVar1[2] = local_18;
      *pdVar1 = local_28;
      pdVar1[1] = dStack_20;
      *(undefined1 *)param_1[3] = 1;
    }
    else {
      if (*(char *)param_1[4] == '\x01') {
        pdVar1 = (double *)param_1[2];
        bVar2 = (double)param_1[1] <=
                local_18 * pdVar1[2] + local_28 * *pdVar1 + dStack_20 * pdVar1[1];
      }
      else {
        bVar2 = false;
      }
      *(char *)param_1[4] = bVar2;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429806b0 FUN_1429806b0 body=209 status=ok
// SIG undefined FUN_1429806b0(void)

void FUN_1429806b0(undefined8 *param_1,int *param_2)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)*param_1 == '\x01') {
    if ((*(int *)(param_1 + 1) != *param_2) && (*(int *)((longlong)param_1 + 0xc) != *param_2)) {
      FUN_146c13dec(param_1[2],&local_30);
      *(bool *)*param_1 =
           (double)param_1[9] <=
           local_20 * (double)param_1[5] +
           local_30 * (double)param_1[3] + local_28 * (double)param_1[4];
      if ((*(char *)*param_1 == '\0') && (*(char *)(param_1 + 10) == '\0')) {
        *(char *)*param_1 =
             (double)param_1[9] <=
             local_20 * (double)param_1[8] +
             local_30 * (double)param_1[6] + local_28 * (double)param_1[7];
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142980782 FUN_142980782 body=1036 status=ok
// SIG undefined FUN_142980782(void)

void FUN_142980782(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  longlong lVar8;
  double *pdVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_168 [32];
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_108;
  undefined4 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)param_1[1] == '\0') {
    lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
    uVar10 = (ulonglong)(*param_2 & 0x1ff);
    local_100 = *(undefined4 *)(lVar8 + 8 + uVar10 * 0xc);
    local_108 = *(undefined8 *)(lVar8 + uVar10 * 0xc);
    if ((char)param_1[7] == '\x01') {
      FUN_146c13dec();
    }
    else {
      pdVar7 = (double *)param_1[4];
      local_118 = pdVar7[2];
      local_128 = *pdVar7;
      dStack_120 = pdVar7[1];
    }
    uVar1 = *(uint *)((longlong)param_1 + 0x1c);
    pdVar7 = &local_f8;
    lVar8 = 0;
    do {
      uVar2 = *(uint *)((longlong)&local_108 + lVar8 * 4);
      if (uVar2 == uVar1) goto LAB_142980b05;
      if (uVar2 == *(uint *)(param_1 + 3)) {
        pdVar9 = (double *)param_1[2];
      }
      else {
        pdVar9 = (double *)
                 ((ulonglong)((uVar2 & 0x1ff) * 0x18) +
                 *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8));
      }
      pdVar7[2] = pdVar9[2];
      dVar3 = pdVar9[1];
      *pdVar7 = *pdVar9;
      pdVar7[1] = dVar3;
      lVar8 = lVar8 + 1;
      pdVar7 = pdVar7 + 3;
    } while (lVar8 != 3);
    local_130 = local_d0;
    dVar11 = local_d0 - local_e8;
    local_138 = local_d8;
    dVar17 = local_d8 - dStack_f0;
    local_140 = local_e0;
    dVar16 = local_e0 - local_f8;
    dVar13 = local_b8 - local_e8;
    dVar6 = local_c0 - dStack_f0;
    dVar5 = local_c8 - local_f8;
    dVar4 = dVar5 * dVar17 - dVar16 * dVar6;
    dVar15 = dVar13 * dVar16 - dVar11 * dVar5;
    dVar12 = dVar6 * dVar11 - dVar17 * dVar13;
    dVar14 = SQRT(dVar4 * dVar4 + dVar12 * dVar12 + dVar15 * dVar15);
    dVar18 = 0.0;
    dVar19 = 0.0;
    local_148 = 0.0;
    dVar3 = 0.0;
    if (0.0 < dVar14) {
      dVar19 = 1.0 / dVar14;
      dVar18 = dVar12 * dVar19;
      local_148 = dVar15 * dVar19;
      dVar19 = dVar4 * dVar19;
      dVar3 = dVar14;
    }
    if (0.0 < (double)param_1[5]) {
      dVar4 = (local_b8 - local_d0) * (local_b8 - local_d0) +
              (local_c8 - local_e0) * (local_c8 - local_e0) +
              (local_c0 - local_d8) * (local_c0 - local_d8);
      dVar14 = dVar13 * dVar13 + dVar5 * dVar5 + dVar6 * dVar6;
      dVar12 = dVar11 * dVar11 + dVar16 * dVar16 + dVar17 * dVar17;
      uVar10 = -(ulonglong)(dVar14 <= dVar12);
      dVar12 = (double)(~uVar10 & (ulonglong)dVar14 | (ulonglong)dVar12 & uVar10);
      uVar10 = -(ulonglong)(dVar4 <= dVar12);
      dVar3 = dVar3 / ((double)(~uVar10 & (ulonglong)dVar4 | uVar10 & (ulonglong)dVar12) + 1e-08);
      dVar4 = *(double *)param_1[6];
      uVar10 = -(ulonglong)(dVar3 <= dVar4);
      *(double *)param_1[6] = (double)(~uVar10 & (ulonglong)dVar4 | (ulonglong)dVar3 & uVar10);
    }
    *(bool *)param_1[1] = dVar19 * local_118 + dVar18 * local_128 + local_148 * dStack_120 <= 1e-05;
  }
LAB_142980b05:
  if ((local_b0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142980b90 FUN_142980b90 body=580 status=ok
// SIG undefined FUN_142980b90(void)

void FUN_142980b90(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  if (*(char *)param_1[1] == '\x01') {
    lVar7 = *(longlong *)(*param_1 + 0x10);
    lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
    uVar10 = (ulonglong)*param_2 & 0x1ff;
    uVar5 = *(uint *)(lVar8 + uVar10 * 0xc);
    uVar6 = *(uint *)(lVar8 + 4 + uVar10 * 0xc);
    lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
    uVar11 = (ulonglong)uVar5 & 0x1ff;
    dVar1 = *(double *)(lVar9 + uVar11 * 0x18);
    dVar2 = *(double *)(lVar9 + 8 + uVar11 * 0x18);
    dVar3 = *(double *)(lVar9 + 0x10 + uVar11 * 0x18);
    lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
    uVar11 = (ulonglong)uVar6 & 0x1ff;
    dVar16 = *(double *)(lVar9 + uVar11 * 0x18);
    dVar19 = *(double *)(lVar9 + 8 + uVar11 * 0x18);
    dVar15 = *(double *)(lVar9 + 0x10 + uVar11 * 0x18);
    uVar5 = *(uint *)(lVar8 + 8 + uVar10 * 0xc);
    lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
    uVar11 = (ulonglong)uVar5 & 0x1ff;
    dVar14 = *(double *)(lVar7 + uVar11 * 0x18);
    dVar4 = *(double *)(lVar7 + 8 + uVar11 * 0x18);
    dVar13 = *(double *)(lVar7 + 0x10 + uVar11 * 0x18);
    dVar12 = dVar13 - dVar15;
    dVar15 = dVar15 - dVar3;
    dVar18 = dVar4 - dVar19;
    dVar19 = dVar19 - dVar2;
    dVar17 = dVar14 - dVar16;
    dVar16 = dVar16 - dVar1;
    dVar13 = dVar13 - dVar3;
    dVar4 = dVar4 - dVar2;
    dVar14 = dVar14 - dVar1;
    dVar1 = dVar16 * dVar4 - dVar14 * dVar19;
    dVar2 = dVar15 * dVar14 - dVar13 * dVar16;
    dVar3 = dVar19 * dVar13 - dVar4 * dVar15;
    dVar12 = dVar12 * dVar12 + dVar17 * dVar17 + dVar18 * dVar18;
    dVar14 = dVar13 * dVar13 + dVar14 * dVar14 + dVar4 * dVar4;
    dVar16 = dVar15 * dVar15 + dVar16 * dVar16 + dVar19 * dVar19;
    uVar11 = -(ulonglong)(dVar14 <= dVar16);
    dVar16 = (double)(~uVar11 & (ulonglong)dVar14 | (ulonglong)dVar16 & uVar11);
    uVar11 = -(ulonglong)(dVar12 <= dVar16);
    if (SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2) /
        ((double)(~uVar11 & (ulonglong)dVar12 | uVar11 & (ulonglong)dVar16) + 1e-08) <
        (double)param_1[2]) {
      *(char *)param_1[1] = '\0';
    }
  }
  return;
}



// FUNCTION 142980dd4 FUN_142980dd4 body=1962 status=ok
// SIG undefined FUN_142980dd4(void)

void FUN_142980dd4(undefined8 *param_1,uint *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  double dVar15;
  bool bVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong *plVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(char *)*param_1 != '\0') || (uVar5 = *param_2, *(uint *)param_1[1] == uVar5))
  goto LAB_14298146b;
  lVar9 = param_1[2];
  lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8);
  uVar29 = (ulonglong)((uVar5 & 0x1ff) << 4);
  uVar21 = *(ulonglong *)(lVar10 + uVar29);
  uVar29 = *(ulonglong *)(lVar10 + 8 + uVar29);
  if ((*(char *)param_1[3] == '\x01') && (*(char *)(lVar9 + 0x1a8) == '\x01')) {
    iVar19 = FUN_146bc96d4(lVar9,uVar29 & 0xffffffff);
    if (uVar29 >> 0x20 == 0xffffffff) {
      iVar22 = *(int *)param_1[4];
      iVar20 = iVar22;
    }
    else {
      iVar20 = FUN_146bc96d4(param_1[2]);
      iVar22 = *(int *)param_1[4];
    }
    if (((iVar19 == iVar22) || (iVar19 == *(int *)param_1[5])) &&
       ((iVar20 == iVar22 || (iVar20 == *(int *)param_1[5])))) goto LAB_142980e86;
  }
  else {
LAB_142980e86:
    plVar11 = (longlong *)param_1[6];
    if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
      plVar23 = plVar11 + 7;
      if ((longlong *)plVar11[8] != (longlong *)0x0) {
        plVar23 = (longlong *)plVar11[8];
      }
      iVar19 = *(int *)((longlong)plVar23 + (ulonglong)((int)plVar11[9] - 1U & uVar5) * 4);
      if (iVar19 != -1) {
        do {
          if (*(uint *)(*plVar11 + (longlong)iVar19 * 0xc) == uVar5) {
            if (*(uint *)param_1[7] != 0xffffffff) goto LAB_142981465;
            uVar28 = 0xffffffff;
            if (*(int *)param_1[8] == (int)(uVar21 >> 0x20)) {
              uVar28 = uVar21 & 0xffffffff;
            }
            if (*(int *)param_1[8] == (int)uVar21) {
              uVar28 = uVar21 >> 0x20;
            }
            uVar27 = (uint)uVar28;
            uVar28 = uVar28 >> 9;
            lVar9 = *(longlong *)(*(longlong *)(param_1[2] + 0x10) + uVar28 * 8);
            uVar21 = (ulonglong)(uVar27 & 0x1ff);
            dVar2 = *(double *)(lVar9 + 0x10 + uVar21 * 0x18);
            pdVar12 = (double *)param_1[9];
            dVar33 = dVar2 - pdVar12[2];
            dVar3 = *(double *)(lVar9 + 8 + uVar21 * 0x18);
            dVar37 = dVar3 - pdVar12[1];
            dVar4 = *(double *)(lVar9 + uVar21 * 0x18);
            dVar38 = dVar4 - *pdVar12;
            dVar15 = SQRT(dVar33 * dVar33 + dVar38 * dVar38 + dVar37 * dVar37);
            if (dVar15 <= 0.0) goto LAB_142981465;
            dVar15 = 1.0 / dVar15;
            dVar38 = dVar38 * dVar15;
            dVar37 = dVar37 * dVar15;
            dVar33 = dVar33 * dVar15;
            pdVar12 = (double *)param_1[10];
            if (-*(double *)param_1[0xb] <
                pdVar12[2] * dVar33 + *pdVar12 * dVar38 + pdVar12[1] * dVar37) goto LAB_142981465;
            *(uint *)param_1[7] = uVar5;
            pdVar12 = (double *)param_1[9];
            pdVar13 = (double *)param_1[0xc];
            fVar39 = (float)(((dVar2 - pdVar12[2]) * dVar33 +
                             (dVar4 - *pdVar12) * dVar38 + (dVar3 - pdVar12[1]) * dVar37) /
                            ((dVar2 - pdVar13[2]) * dVar33 +
                            (dVar4 - *pdVar13) * dVar38 + (dVar3 - pdVar13[1]) * dVar37));
            if ((*(char *)param_1[0xd] != '\0') && (*(char *)(param_1[2] + 0x70) == '\x01')) {
              lVar9 = *(longlong *)(param_1[2] + 0x60);
              lVar10 = *(longlong *)(lVar9 + uVar28 * 8);
              lVar14 = *(longlong *)(lVar9 + (ulonglong)(*(uint *)param_1[8] >> 9) * 8);
              uVar25 = (ulonglong)*(uint *)param_1[8] & 0x1ff;
              lVar9 = *(longlong *)(lVar9 + (ulonglong)(*(uint *)param_1[0xe] >> 9) * 8);
              uVar30 = (ulonglong)*(uint *)param_1[0xe] & 0x1ff;
              fVar35 = 1.0 - fVar39;
              fVar31 = *(float *)(lVar10 + 8 + uVar21 * 0xc) * fVar35 +
                       *(float *)(lVar9 + 8 + uVar30 * 0xc) * fVar39;
              fVar34 = *(float *)(lVar10 + 4 + uVar21 * 0xc) * fVar35 +
                       *(float *)(lVar9 + 4 + uVar30 * 0xc) * fVar39;
              fVar35 = fVar35 * *(float *)(lVar10 + uVar21 * 0xc) +
                       *(float *)(lVar9 + uVar30 * 0xc) * fVar39;
              fVar43 = SQRT(fVar31 * fVar31 + fVar35 * fVar35 + fVar34 * fVar34);
              fVar42 = 1.0 / fVar43;
              if (0.0 < fVar43) {
                fVar34 = fVar34 * fVar42;
              }
              else {
                fVar34 = 0.0;
              }
              fVar41 = *(float *)(lVar14 + 8 + uVar25 * 0xc);
              fVar1 = *(float *)(lVar14 + uVar25 * 0xc);
              fVar40 = *(float *)(lVar14 + 4 + uVar25 * 0xc);
              if (0.0 < fVar43) {
                fVar31 = fVar31 * fVar42;
              }
              else {
                fVar31 = 0.0;
              }
              fVar36 = SQRT(fVar41 * fVar41 + fVar1 * fVar1 + fVar40 * fVar40);
              fVar32 = 1.0 / fVar36;
              if (0.0 < fVar36) {
                fVar41 = fVar41 * fVar32;
                fVar40 = fVar40 * fVar32;
              }
              else {
                fVar41 = 0.0;
                fVar40 = 0.0;
              }
              if ((float)(-(uint)(0.0 < fVar43) & (uint)(fVar35 * fVar42)) *
                  (float)(-(uint)(0.0 < fVar36) & (uint)(fVar1 * fVar32)) + fVar40 * fVar34 +
                  fVar31 * fVar41 < *(float *)param_1[0xf]) goto LAB_142981465;
            }
            if (*(char *)param_1[0x10] != '\x01') goto LAB_14298146b;
            if (((*(char *)param_1[0x11] == '\x01') && (*(char *)(param_1[2] + 0xb0) == '\x01')) &&
               (lVar9 = *(longlong *)(param_1[2] + 0xa0), lVar10 = *(longlong *)(lVar9 + uVar28 * 8)
               , lVar14 = *(longlong *)(lVar9 + (ulonglong)(*(uint *)param_1[8] >> 9) * 8),
               uVar28 = (ulonglong)(*(uint *)param_1[8] & 0x1ff),
               lVar9 = *(longlong *)(lVar9 + (ulonglong)(*(uint *)param_1[0xe] >> 9) * 8),
               uVar25 = (ulonglong)(*(uint *)param_1[0xe] & 0x1ff),
               fVar34 = *(float *)(lVar14 + 4 + uVar28 * 8) -
                        (*(float *)(lVar10 + 4 + uVar21 * 8) * (1.0 - fVar39) +
                        *(float *)(lVar9 + 4 + uVar25 * 8) * fVar39),
               fVar31 = *(float *)(lVar14 + uVar28 * 8) -
                        ((1.0 - fVar39) * *(float *)(lVar10 + uVar21 * 8) +
                        *(float *)(lVar9 + uVar25 * 8) * fVar39),
               fVar31 = fVar31 * fVar31 + fVar34 * fVar34,
               *(float *)param_1[0x12] <= fVar31 && fVar31 != *(float *)param_1[0x12]))
            goto LAB_142981465;
            if ((*(char *)param_1[0x13] != '\x01') ||
               (*(longlong **)(param_1[2] + 0x208) == (longlong *)0x0)) goto LAB_14298146b;
            local_bc = (**(code **)(**(longlong **)(param_1[2] + 0x208) + 0xa0))();
            local_d0 = param_1[2];
            uVar21 = *(ulonglong *)
                      (*(longlong *)
                        (*(longlong *)(local_d0 + 0x1c0) + (ulonglong)(*(uint *)param_1[1] >> 9) * 8
                        ) + 8 + (ulonglong)((*(uint *)param_1[1] & 0x1ff) << 4));
            local_c8 = *(undefined4 *)param_1[0xe];
            local_c4 = *(undefined4 *)param_1[8];
            local_b4 = *(undefined4 *)param_1[0x12];
            iVar19 = (int)(uVar29 >> 0x20);
            local_c0 = uVar27;
            local_b8 = fVar39;
            if ((uVar21 >> 0x20 != 0xffffffff) || (iVar19 != -1)) {
              if (((int)(uVar21 >> 0x20) == -1) || (iVar19 == -1)) goto LAB_142981465;
              cVar17 = (**(code **)(**(longlong **)(local_d0 + 0x208) + 0x80))();
              cVar18 = (**(code **)(**(longlong **)(param_1[2] + 0x208) + 0x80))
                                 (*(longlong **)(param_1[2] + 0x208),uVar5);
              if (cVar17 != cVar18) goto LAB_142981465;
              if (cVar17 != '\0') {
                lVar9 = *(longlong *)
                         (*(longlong *)(param_1[2] + 0x130) + (uVar21 >> 9 & 0x7fffff) * 8);
                uVar28 = uVar21 & 0x1ff;
                uVar5 = *(uint *)(lVar9 + 4 + uVar28 * 0xc);
                lVar10 = *(longlong *)
                          (*(longlong *)(param_1[2] + 0x130) + (uVar29 >> 9 & 0x7fffff) * 8);
                uVar25 = uVar29 & 0x1ff;
                uVar26 = *(uint *)(lVar10 + uVar25 * 0xc);
                uVar6 = *(uint *)(lVar10 + 4 + uVar25 * 0xc);
                uVar7 = *(uint *)param_1[8];
                uVar24 = uVar26;
                if (uVar6 == uVar7) {
                  uVar24 = *(uint *)(lVar10 + 8 + uVar25 * 0xc);
                }
                uVar8 = *(uint *)(lVar9 + uVar28 * 0xc);
                if (uVar26 == uVar7) {
                  uVar24 = uVar6;
                }
                uVar26 = uVar8;
                if (uVar5 == uVar7) {
                  uVar26 = *(uint *)(lVar9 + 8 + uVar28 * 0xc);
                }
                if (uVar8 == uVar7) {
                  uVar26 = uVar5;
                }
                bVar16 = (uVar24 != uVar27) != (uVar26 == *(uint *)param_1[0xe]);
                uVar28 = uVar29 >> 0x20;
                if (bVar16) {
                  uVar28 = uVar29;
                }
                cVar17 = FUN_142981580(&local_d0,uVar21 >> 0x20,uVar28 & 0xffffffff);
                if (cVar17 == '\0') goto LAB_142981465;
                uVar28 = uVar29 >> 0x20;
                if (!bVar16) {
                  uVar28 = uVar29;
                }
                uVar29 = uVar28 & 0xffffffff;
              }
            }
            cVar17 = FUN_142981580(&local_d0,uVar21 & 0xffffffff,uVar29 & 0xffffffff);
            if (cVar17 != '\0') goto LAB_14298146b;
            goto LAB_142981465;
          }
          iVar19 = *(int *)(*plVar11 + (longlong)iVar19 * 0xc + 4);
        } while (iVar19 != -1);
      }
    }
    if ((*(int *)(*(longlong *)(*(longlong *)(param_1[2] + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) +
                  0xc + (ulonglong)((uVar5 & 0x1ff) << 4)) != -1) &&
       ((plVar11 = *(longlong **)(param_1[2] + 0x208), plVar11 == (longlong *)0x0 ||
        (cVar17 = (**(code **)(*plVar11 + 0x80))(plVar11,uVar5), cVar17 == '\0'))))
    goto LAB_14298146b;
  }
LAB_142981465:
  *(undefined1 *)*param_1 = 1;
LAB_14298146b:
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142981580 FUN_142981580 body=971 status=ok
// SIG undefined FUN_142981580(void)

undefined8 FUN_142981580(longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  uint local_78 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar16 = *(longlong *)(*param_1 + 0x130);
  uVar9 = (uint)param_2;
  lVar18 = *(longlong *)(lVar16 + (param_2 >> 9 & 0x7fffff) * 8);
  uVar11 = (ulonglong)(uVar9 & 0x1ff);
  iVar1 = *(int *)(lVar18 + uVar11 * 0xc);
  iVar2 = *(int *)(lVar18 + 4 + uVar11 * 0xc);
  iVar3 = *(int *)(lVar18 + 8 + uVar11 * 0xc);
  uVar15 = (uint)param_3;
  lVar16 = *(longlong *)(lVar16 + (param_3 >> 9 & 0x7fffff) * 8);
  uVar11 = (ulonglong)(uVar15 & 0x1ff);
  iVar4 = (int)param_1[1];
  uVar22 = 0;
  uVar12 = 0;
  if ((iVar1 != iVar4) && (uVar12 = 1, iVar2 != iVar4)) {
    uVar12 = (uint)(iVar3 == iVar4) * 3 - 1;
  }
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  if ((iVar1 != iVar4) && (uVar22 = 1, iVar2 != iVar4)) {
    uVar22 = (uint)(iVar3 == iVar4) * 3 - 1;
  }
  iVar1 = (int)param_1[2];
  uVar17 = 0;
  if ((*(int *)(lVar16 + uVar11 * 0xc) != iVar1) &&
     (uVar17 = 1, *(int *)(lVar16 + 4 + uVar11 * 0xc) != iVar1)) {
    uVar17 = (uint)(*(int *)(lVar16 + 8 + uVar11 * 0xc) == iVar1) * 3 - 1;
  }
  uVar8 = 0;
  if (((uVar12 != 0xffffffff) && (uVar22 != 0xffffffff)) && (uVar17 != 0xffffffff)) {
    lVar16 = (longlong)*(int *)((longlong)param_1 + 0x14);
    uVar8 = 1;
    if (0 < lVar16) {
      uVar21 = uVar9 * 3 + 2;
      uVar23 = uVar9 * 3 + 1;
      uVar7 = uVar9 * 3 & 0x1ff;
      uVar13 = uVar15 * 3 + 2;
      local_80 = (ulonglong)(uVar13 & 0x1ff);
      uVar14 = uVar15 * 3 + 1;
      local_90 = (ulonglong)(uVar14 & 0x1ff);
      local_d0 = (ulonglong)(uVar15 * 3 & 0x1ff);
      local_d8 = *(longlong *)(*param_1 + 0x208);
      local_88 = (ulonglong)(uVar13 >> 9);
      local_98 = (ulonglong)(uVar14 >> 9);
      local_a0 = (ulonglong)(uVar15 * 3 >> 9);
      local_a8 = (ulonglong)uVar12;
      local_b0 = (ulonglong)uVar22;
      local_b8 = (ulonglong)uVar17;
      lVar18 = 0;
      do {
        if (lVar18 < *(int *)(local_d8 + 0x28)) {
          lVar10 = *(longlong *)(*(longlong *)(local_d8 + 0x20) + lVar18 * 8);
        }
        else {
          lVar10 = 0;
        }
        local_c8 = lVar16;
        local_c0 = param_1;
        if (2 < *(int *)(lVar10 + 0x38)) {
          lVar5 = *(longlong *)(lVar10 + 0x78);
          local_78[3] = *(undefined4 *)
                         (*(longlong *)(lVar5 + (ulonglong)(uVar9 * 3 >> 9) * 8) +
                         (ulonglong)uVar7 * 4);
          local_78[4] = *(undefined4 *)
                         (*(longlong *)(lVar5 + (ulonglong)(uVar23 >> 9) * 8) +
                         (ulonglong)(uVar23 & 0x1ff) * 4);
          local_78[5] = *(undefined4 *)
                         (*(longlong *)(lVar5 + (ulonglong)(uVar21 >> 9) * 8) +
                         (ulonglong)(uVar21 & 0x1ff) * 4);
          local_78[0] = *(uint *)(*(longlong *)(lVar5 + local_a0 * 8) + local_d0 * 4);
          local_78[1] = *(undefined4 *)(*(longlong *)(lVar5 + local_98 * 8) + local_90 * 4);
          local_78[2] = *(undefined4 *)(*(longlong *)(lVar5 + local_88 * 8) + local_80 * 4);
          uVar12 = local_78[local_a8 + 3];
          if (((uVar12 != 0xffffffff) && (uVar15 = local_78[local_b0 + 3], uVar15 != 0xffffffff)) &&
             (uVar22 = local_78[local_b8], uVar22 != 0xffffffff)) {
            lVar10 = *(longlong *)(lVar10 + 0x48);
            lVar5 = *(longlong *)(lVar10 + (ulonglong)(uVar22 >> 5 & 0x3fffff8));
            uVar11 = (ulonglong)((uVar22 & 0xff) << 3);
            lVar6 = *(longlong *)(lVar10 + (ulonglong)(uVar15 >> 5 & 0x3fffff8));
            uVar20 = (ulonglong)((uVar15 & 0xff) << 3);
            lVar10 = *(longlong *)(lVar10 + (ulonglong)(uVar12 >> 5 & 0x3fffff8));
            uVar19 = (ulonglong)((uVar12 & 0xff) << 3);
            fVar24 = *(float *)(param_1 + 3);
            fVar25 = *(float *)(lVar6 + 4 + uVar20) -
                     (*(float *)(lVar5 + 4 + uVar11) * (1.0 - fVar24) +
                     *(float *)(lVar10 + 4 + uVar19) * fVar24);
            fVar24 = *(float *)(lVar6 + uVar20) -
                     ((1.0 - fVar24) * *(float *)(lVar5 + uVar11) +
                     fVar24 * *(float *)(lVar10 + uVar19));
            fVar24 = fVar24 * fVar24 + fVar25 * fVar25;
            if (*(float *)((longlong)param_1 + 0x1c) <= fVar24 &&
                fVar24 != *(float *)((longlong)param_1 + 0x1c)) {
              uVar8 = 0;
              goto LAB_142981916;
            }
          }
        }
        lVar18 = lVar18 + 1;
      } while (lVar16 != lVar18);
      uVar8 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
    }
  }
LAB_142981916:
  if ((DAT_14c707940 ^ (ulonglong)auStack_f8 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298199c FUN_14298199c body=29 status=ok
// SIG undefined FUN_14298199c(void)

undefined8 FUN_14298199c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142981a26 FUN_142981a26 body=29 status=ok
// SIG undefined FUN_142981a26(void)

undefined8 FUN_142981a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142981a44 FUN_142981a44 body=1000 status=ok
// SIG undefined FUN_142981a44(void)

void FUN_142981a44(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  undefined1 local_1c8 [32];
  longlong local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 local_168 [2];
  undefined8 local_158;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  longlong *local_108;
  longlong local_f8 [6];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)local_1c8;
  uVar4 = *param_2;
  uVar11 = (ulonglong)uVar4;
  if ((-1 < (int)uVar4) &&
     (lVar13 = *param_1, (int)uVar4 < *(int *)(lVar13 + 0x140) * 0x200 + *(int *)(lVar13 + 0x144)))
  {
    uVar9 = (ulonglong)(uVar4 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar13 + 0x148) + (ulonglong)(uVar4 >> 9) * 8) +
                           uVar9 * 2) - 1U) < 0xfffe) {
      lVar14 = param_1[0xb];
      lVar5 = *(longlong *)(lVar13 + 0x10);
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
      uVar7 = *(uint *)(lVar13 + uVar9 * 0xc);
      lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8);
      uVar12 = (ulonglong)uVar7 & 0x1ff;
      local_b8 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
      pdVar1 = (double *)(lVar6 + uVar12 * 0x18);
      local_c8 = *pdVar1;
      dStack_c0 = pdVar1[1];
      uVar7 = *(uint *)(lVar13 + 4 + uVar9 * 0xc);
      lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8);
      uVar12 = (ulonglong)uVar7 & 0x1ff;
      local_a0 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
      pdVar1 = (double *)(lVar6 + uVar12 * 0x18);
      local_b0 = *pdVar1;
      dStack_a8 = pdVar1[1];
      uVar7 = *(uint *)(lVar13 + 8 + uVar9 * 0xc);
      lVar13 = *(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8);
      uVar9 = (ulonglong)uVar7 & 0x1ff;
      local_88 = *(double *)(lVar13 + 0x10 + uVar9 * 0x18);
      pdVar1 = (double *)(lVar13 + uVar9 * 0x18);
      local_98 = *pdVar1;
      dStack_90 = pdVar1[1];
      local_170 = (local_b8 + local_a0 + local_88) * 0.3333333333333333;
      uStack_178 = (dStack_c0 + dStack_a8 + dStack_90) * 0.3333333333333333;
      local_180 = (local_c8 + local_b0 + local_98) * 0.3333333333333333;
      uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x20))
                        ((longlong *)param_1[1],&local_180,local_188,param_1[2]);
      if ((int)uVar7 < 0) {
LAB_142981dc4:
        plVar10 = (longlong *)param_1[10];
        FUN_146bef8a8(plVar10,0);
        local_118 = local_170;
        local_128 = (undefined4)local_180;
        uStack_124 = local_180._4_4_;
        uStack_120 = (undefined4)uStack_178;
        uStack_11c = uStack_178._4_4_;
        dVar16 = (double)FUN_146bed438(plVar10,*(undefined4 *)(*plVar10 + 0xcc));
        *(bool *)(*(longlong *)(param_1[6] + (longlong)*(int *)param_1[5] * 0x10) + uVar11) =
             (bool)*(char *)param_1[0xc] !=
             (*(double *)(lVar14 + 0xd8) <= dVar16 && dVar16 != *(double *)(lVar14 + 0xd8));
      }
      else {
        uVar9 = (ulonglong)uVar7;
        lVar13 = *(longlong *)(param_1[3] + 8);
        dVar16 = *(double *)(lVar13 + uVar9 * 0x18);
        dVar2 = *(double *)(lVar13 + 8 + uVar9 * 0x18);
        dVar3 = *(double *)(lVar13 + 0x10 + uVar9 * 0x18);
        local_1a8 = lVar14;
        FUN_146c13dec(*param_1,&local_1a0,uVar4);
        dVar2 = dVar2 * local_198;
        dVar16 = dVar16 * local_1a0;
        dVar3 = dVar3 * local_190;
        lVar13 = 0;
        do {
          plVar10 = (longlong *)param_1[1];
          local_168[0] = 0;
          local_158 = 0;
          FUN_146bee698(&local_128,*(double *)param_1[4] + *(double *)param_1[4],local_168);
          iVar8 = (**(code **)(*plVar10 + 0x20))
                            (plVar10,(longlong)&local_c8 + lVar13,local_188,&local_128);
          if (local_118 != 0.0) {
            plVar10 = local_108;
            if (local_108 == (longlong *)0x0) {
              plVar10 = local_f8;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
          lVar14 = local_1a8;
          if (iVar8 == -1) goto LAB_142981dc4;
          lVar13 = lVar13 + 0x18;
        } while (lVar13 != 0x48);
        if (((longlong)*(int *)param_1[5] == 0) &&
           (((((local_1a0 != 0.0 || (NAN(local_1a0))) || (local_198 != 0.0)) ||
             ((NAN(local_198) || (local_190 != 0.0)))) || (NAN(local_190))))) {
          bVar15 = (bool)*(char *)param_1[7] == 0.0 < dVar3 + dVar16 + dVar2;
          *(bool *)(*(longlong *)param_1[6] + uVar11) = bVar15;
          if ((bVar15) && (1 < *(int *)param_1[8])) {
            *(uint *)(*(longlong *)param_1[9] + uVar11 * 4) = uVar7;
          }
        }
        else {
          *(undefined1 *)(*(longlong *)(param_1[6] + (longlong)*(int *)param_1[5] * 0x10) + uVar11)
               = 0;
        }
      }
    }
  }
  if ((local_80 ^ (ulonglong)local_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142981e84 FUN_142981e84 body=159 status=ok
// SIG undefined FUN_142981e84(void)

void FUN_142981e84(undefined8 *param_1,int *param_2)

{
  undefined1 auStack_68 [32];
  char *local_48;
  int *local_40;
  undefined1 *local_38;
  char **local_30;
  int local_24;
  longlong local_20;
  undefined1 **local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = *param_2;
  if ((*(char *)*param_1 == '\x01') && (*(int *)param_1[1] != local_24)) {
    if (*(int *)param_1[2] != local_24) {
      local_20 = *(longlong *)(*(longlong *)param_1[3] + 8);
      local_30 = &local_48;
      local_40 = &local_24;
      local_18 = &local_38;
      local_38 = &LAB_142981f24;
      local_48 = (char *)*param_1;
      local_10 = *(int *)param_1[2];
      FUN_146c58f20(local_20 + 0xb8);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142981f82 FUN_142981f82 body=29 status=ok
// SIG undefined FUN_142981f82(void)

undefined8 FUN_142981f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142981fa0 FUN_142981fa0 body=1152 status=ok
// SIG undefined FUN_142981fa0(void)

void FUN_142981fa0(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 uVar18;
  double dVar19;
  undefined1 local_1f8 [36];
  int local_1d4;
  ulonglong local_1d0;
  undefined1 local_1c8 [8];
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined1 *local_158;
  undefined8 local_148;
  undefined **local_138;
  longlong local_130;
  longlong *local_128;
  int local_120;
  double local_118;
  double local_110;
  double local_108;
  longlong *local_f8;
  longlong local_e8 [7];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)local_1f8;
  uVar8 = *param_2;
  uVar15 = (ulonglong)uVar8;
  if ((int)uVar8 < 0) goto LAB_14298204b;
  lVar17 = *param_1;
  lVar9 = *(longlong *)(lVar17 + 0x68);
  if (*(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144) <= (int)uVar8) goto LAB_14298204b;
  uVar14 = (ulonglong)(uVar8 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar9 + 0x148) + (ulonglong)(uVar8 >> 9) * 8) +
                                  uVar14 * 2) - 1U)) goto LAB_14298204b;
  FUN_146c149e0(lVar9,&local_1c0,uVar8);
  plVar10 = (longlong *)param_1[6];
  lVar9 = *(longlong *)(param_1[2] + 8);
  dVar19 = *(double *)(lVar17 + 0x20);
  dVar3 = *(double *)(lVar9 + 0x10 + uVar15 * 0x18);
  dVar4 = *(double *)(lVar9 + 8 + uVar15 * 0x18);
  dVar5 = *(double *)(lVar9 + uVar15 * 0x18);
  FUN_146bef8a8(plVar10,0);
  local_118 = dVar19 * dVar5 + local_1c0;
  local_110 = dVar4 * dVar19 + local_1b8;
  local_108 = dVar3 * dVar19 + local_1b0;
  dVar19 = (double)FUN_146bed438(plVar10,*(undefined4 *)(*plVar10 + 0xcc));
  if ((*(char *)(lVar17 + 0x30) != '\x01') || (*(double *)(lVar17 + 0x28) <= dVar19)) {
    if (dVar19 < *(double *)(lVar17 + 0x28)) {
LAB_1429821f0:
      local_128 = (longlong *)param_1[3];
      iVar13 = *(int *)(*local_128 + uVar15 * 4);
      local_130 = param_1[2];
      local_148 = 0;
      local_138 = &PTR_LAB_149f3c810;
      local_158 = &LAB_142982422;
      local_120 = iVar13;
      FUN_146bee698(&local_118,*(undefined8 *)(lVar17 + 0x18));
      uVar12 = FUN_146bdde3a(param_1[1],&local_1c0,local_1c8,&local_118);
      if (-1 < (int)uVar12) {
        local_1d0 = (ulonglong)uVar12;
        lVar9 = *(longlong *)(param_1[2] + 8);
        dVar19 = *(double *)(lVar9 + local_1d0 * 0x18);
        dVar3 = *(double *)(lVar9 + 8 + local_1d0 * 0x18);
        dVar4 = *(double *)(lVar9 + 8 + uVar15 * 0x18);
        dVar5 = *(double *)(lVar9 + uVar15 * 0x18);
        dVar6 = *(double *)(lVar9 + 0x10 + local_1d0 * 0x18);
        dVar7 = *(double *)(lVar9 + 0x10 + uVar15 * 0x18);
        lVar9 = *(longlong *)(*(longlong *)(lVar17 + 0x68) + 0x10);
        lVar17 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar17 + 0x68) + 0x130) + (ulonglong)(uVar8 >> 9) * 8
                  );
        uVar8 = *(uint *)(lVar17 + uVar14 * 0xc);
        lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8);
        uVar16 = (ulonglong)uVar8 & 0x1ff;
        local_198 = *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18);
        puVar1 = (undefined8 *)(lVar11 + uVar16 * 0x18);
        local_1a8 = *puVar1;
        uStack_1a0 = puVar1[1];
        uVar8 = *(uint *)(lVar17 + 4 + uVar14 * 0xc);
        lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8);
        uVar16 = (ulonglong)uVar8 & 0x1ff;
        local_180 = *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18);
        puVar1 = (undefined8 *)(lVar11 + uVar16 * 0x18);
        local_190 = *puVar1;
        uStack_188 = puVar1[1];
        uVar8 = *(uint *)(lVar17 + 8 + uVar14 * 0xc);
        lVar17 = *(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8);
        uVar14 = (ulonglong)uVar8 & 0x1ff;
        local_168 = *(undefined8 *)(lVar17 + 0x10 + uVar14 * 0x18);
        puVar2 = (undefined4 *)(lVar17 + uVar14 * 0x18);
        local_178 = *puVar2;
        uStack_174 = puVar2[1];
        uStack_170 = puVar2[2];
        uStack_16c = puVar2[3];
        lVar17 = 0;
        local_1d4 = iVar13;
        do {
          iVar13 = FUN_146bdde3a(param_1[1],(longlong)&local_1a8 + lVar17,local_1c8,&local_118);
          if (iVar13 == -1) goto LAB_1429823bd;
          lVar17 = lVar17 + 0x18;
        } while (lVar17 != 0x48);
        if (dVar6 * dVar7 + dVar19 * dVar5 + dVar3 * dVar4 <= 0.0) {
          *(undefined1 *)(*(longlong *)param_1[4] + uVar15) = 0;
        }
        else {
          iVar13 = *(int *)(*(longlong *)param_1[3] + local_1d0 * 4);
          *(bool *)(*(longlong *)param_1[4] + uVar15) = local_1d4 < iVar13;
          if (local_1d4 < iVar13) {
            *(uint *)(*(longlong *)param_1[5] + uVar15 * 4) = uVar12;
          }
        }
        if (local_108 != 0.0) {
          if (local_f8 == (longlong *)0x0) {
            local_f8 = local_e8;
          }
          (**(code **)(*local_f8 + 0x10))();
        }
        goto LAB_14298204b;
      }
LAB_1429823bd:
      if (local_108 != 0.0) {
        if (local_f8 == (longlong *)0x0) {
          local_f8 = local_e8;
        }
        (**(code **)(*local_f8 + 0x10))();
      }
      uVar18 = 1;
    }
    else {
      uVar18 = 0;
    }
  }
  else {
    lVar9 = *(longlong *)(param_1[2] + 8);
    dVar19 = *(double *)(lVar17 + 0x20);
    dVar3 = *(double *)(lVar9 + 0x10 + uVar15 * 0x18);
    dVar4 = *(double *)(lVar9 + 8 + uVar15 * 0x18);
    dVar5 = *(double *)(lVar9 + uVar15 * 0x18);
    plVar10 = (longlong *)param_1[6];
    uVar18 = 0;
    FUN_146bef8a8(plVar10,0);
    local_118 = local_1c0 - dVar19 * dVar5;
    local_110 = local_1b8 - dVar4 * dVar19;
    local_108 = local_1b0 - dVar3 * dVar19;
    dVar19 = (double)FUN_146bed438(plVar10,*(undefined4 *)(*plVar10 + 0xcc));
    if (*(double *)(lVar17 + 0x28) <= dVar19 && dVar19 != *(double *)(lVar17 + 0x28))
    goto LAB_1429821f0;
  }
  *(undefined1 *)(*(longlong *)param_1[4] + uVar15) = uVar18;
LAB_14298204b:
  if ((local_b0 ^ (ulonglong)local_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429824aa FUN_1429824aa body=29 status=ok
// SIG undefined FUN_1429824aa(void)

undefined8 FUN_1429824aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142982557 FUN_142982557 body=94 status=ok
// SIG undefined FUN_142982557(void)

void FUN_142982557(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    FUN_146c80469(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1429825b5 FUN_1429825b5 body=39 status=ok
// SIG undefined FUN_1429825b5(void)

void FUN_1429825b5(undefined8 *param_1)

{
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
  param_1[0xe] = 0;
  return;
}



// FUNCTION 1429825dc FUN_1429825dc body=363 status=ok
// SIG undefined FUN_1429825dc(void)

void FUN_1429825dc(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0x333) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_142982670;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_142982670:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 / 0x28)) {
    uVar6 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,0x28,8);
  return;
}



// FUNCTION 142982748 FUN_142982748 body=59 status=ok
// SIG undefined FUN_142982748(void)

void FUN_142982748(undefined8 *param_1)

{
  FUN_14297cb70(*param_1,*(longlong *)param_1[1] + (longlong)*(int *)(param_1 + 4) * 0x28,param_1[3]
                ,*(longlong *)param_1[1] + 0x20 + (longlong)*(int *)(param_1 + 4) * 0x28,param_1[2])
  ;
  return;
}



// FUNCTION 142982788 FUN_142982788 body=5 status=ok
// SIG undefined FUN_142982788(void)

longlong FUN_142982788(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14298278e FUN_14298278e body=29 status=ok
// SIG undefined FUN_14298278e(void)

void FUN_14298278e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1429827ac FUN_1429827ac body=29 status=ok
// SIG undefined FUN_1429827ac(void)

undefined8 FUN_1429827ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429827ca FUN_1429827ca body=31 status=ok
// SIG undefined FUN_1429827ca(void)

undefined4 FUN_1429827ca(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = param_2[2] + *param_2 + param_2[1] + param_2[3];
  piVar1 = (int *)*param_1;
  return CONCAT31((int3)(uVar2 >> 8),uVar2 < (uint)(piVar1[2] + *piVar1 + piVar1[1] + piVar1[3]));
}



// FUNCTION 142982802 FUN_142982802 body=5 status=ok
// SIG undefined FUN_142982802(void)

longlong FUN_142982802(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142982808 FUN_142982808 body=12 status=ok
// SIG undefined FUN_142982808(void)

void FUN_142982808(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142982811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142982814 FUN_142982814 body=29 status=ok
// SIG undefined FUN_142982814(void)

undefined8 FUN_142982814(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142982831 FUN_142982831 body=102 status=ok
// SIG undefined FUN_142982831(void)

void FUN_142982831(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149f3c4b8;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14628474c(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142982898 FUN_142982898 body=3724 status=ok
// SIG undefined FUN_142982898(void)

void FUN_142982898(undefined8 param_1,undefined8 *param_2,double param_3,double param_4,int param_5,
                  undefined8 param_6,uint param_7,longlong *param_8,undefined4 param_9,
                  char *param_10)

{
  longlong **pplVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong **pplVar15;
  void *_Dst;
  byte bVar16;
  double *pdVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  bool bVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_4e8 [32];
  longlong *local_4c8;
  undefined4 local_4c0;
  longlong *local_4b8;
  ulonglong local_4a8;
  int local_49c;
  int local_498;
  int local_494;
  undefined8 *local_490;
  longlong *local_488;
  undefined1 *local_480;
  longlong **local_478;
  double local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  double local_448;
  double dStack_440;
  double local_438;
  longlong local_428 [2];
  longlong **local_418;
  double *local_410;
  longlong **local_408;
  longlong **local_400;
  longlong local_3f8;
  undefined8 uStack_3f0;
  longlong local_3e8;
  undefined8 uStack_3e0;
  longlong local_3d8;
  ulonglong uStack_3d0;
  longlong local_3c8 [3];
  undefined8 uStack_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  undefined1 *local_398;
  longlong **local_390;
  longlong local_388;
  ulonglong uStack_380;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  undefined8 uStack_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  longlong *local_328;
  longlong *plStack_320;
  double *local_318;
  double *pdStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8 [4];
  double local_2d8;
  double local_2d0;
  longlong **local_2a8;
  undefined8 local_2a0;
  longlong *local_298 [10];
  longlong **local_248;
  undefined8 local_240;
  double local_238;
  uint local_230;
  undefined4 local_22c;
  undefined1 local_1d8 [112];
  longlong local_168;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  local_49c = 0x7fffffff;
  if (param_5 != 0) {
    local_49c = param_5;
  }
  local_368 = 0;
  uStack_360 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_358 = 1.79769313486232e+308;
  local_350 = 1.79769313486232e+308;
  local_348 = 1.79769313486232e+308;
  local_340 = -1.79769313486232e+308;
  local_338 = -1.79769313486232e+308;
  local_330 = -1.79769313486232e+308;
  local_4c0 = param_9;
  local_4c8 = param_8;
  local_4b8 = &local_388;
  local_490 = param_2;
  FUN_146c8c611(0,0xffefffffffffffff,param_6,param_7);
  iVar25 = (int)uStack_380;
  uVar18 = uStack_380 & 0xffffffff;
  local_494 = (int)uStack_360;
  if (param_10 == (char *)0x0) {
    FUN_145ad3dea(&local_238);
    dVar29 = (double)(-(ulonglong)(0.0 <= local_330 - local_348) &
                     (ulonglong)(local_330 - local_348));
    dVar33 = (double)(-(ulonglong)(0.0 <= local_338 - local_350) &
                     (ulonglong)(local_338 - local_350));
    uVar27 = -(ulonglong)(dVar29 <= dVar33);
    dVar33 = (double)(~uVar27 & (ulonglong)dVar29 | uVar27 & (ulonglong)dVar33);
    dVar29 = (double)(-(ulonglong)(0.0 <= local_340 - local_358) &
                     (ulonglong)(local_340 - local_358));
    uVar27 = -(ulonglong)(dVar33 <= dVar29);
    uVar11 = 4;
    if (iVar25 < 0x4c4b41) {
      uVar11 = 500000 < iVar25 | 2;
    }
    bVar10 = 10;
    if (iVar25 < 0x4c4b41) {
      bVar10 = (500000 < iVar25) * '\x02' + 6;
    }
    local_230 = 5;
    if (iVar25 < 0x2faf081) {
      local_230 = uVar11;
    }
    bVar16 = 0xc;
    if (iVar25 < 0x2faf081) {
      bVar16 = bVar10;
    }
    local_238 = (double)(uVar27 & (ulonglong)dVar29 | ~uVar27 & (ulonglong)dVar33) / (double)bVar16;
    local_22c = 0xfa;
    local_390 = local_298;
    local_398 = &LAB_146c908fa;
    local_298[0] = &local_388;
    FUN_146c8c7a2(&local_238,uVar18);
LAB_142982c9f:
    local_3a8 = 0;
    uStack_3a0 = 0;
    if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar18);
    }
    if (uVar18 != 0) {
      FUN_14481578e(&local_3a8);
      uVar22 = 0;
      uVar13 = 0xbf400001;
      uVar27 = uVar18;
      do {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar18;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar13;
        lVar24 = (longlong)(int)uStack_3a0;
        uVar11 = (int)uStack_3a0 + 1;
        uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar11);
        if (uStack_3a0._4_4_ < uVar11) {
          FUN_1446f48e2(&local_3a8);
        }
        *(undefined4 *)(local_3a8 + lVar24 * 4) = uVar22;
        uVar13 = SUB168(auVar8 % auVar7,0) + 0xbf400001;
        uVar22 = SUB164(auVar8 % auVar7,0);
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    local_3c8[2] = 0;
    uStack_3b0 = 0;
    uVar27 = uStack_380 & 0xffffffff;
    if ((int)uStack_380 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar27);
    }
    if ((int)uStack_380 != 0) {
      FUN_14475e67c(local_3c8 + 2,uVar27);
      do {
        uVar13 = uStack_3b0;
        lVar24 = (longlong)(int)uStack_3b0;
        uVar11 = (int)uStack_3b0 + 1;
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar11);
        if (uStack_3b0._4_4_ < uVar11) {
          FUN_1401c3474(local_3c8 + 2,uVar13 & 0xffffffff);
        }
        *(undefined1 *)(local_3c8[2] + lVar24) = 1;
        uVar11 = (int)uVar27 - 1;
        uVar27 = (ulonglong)uVar11;
      } while (uVar11 != 0);
    }
    local_3c8[0] = 0;
    local_3c8[1] = 0;
    local_3d8 = 0;
    uStack_3d0 = 0;
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3f8 = 0;
    uStack_3f0 = 0;
    local_248 = (longlong **)0x0;
    local_498 = (int)param_8[4];
    if (local_498 == 0) {
      local_400 = &plStack_320;
      local_408 = &local_328;
    }
    else {
      local_410 = local_2f8;
      local_308 = 0x3fc999999999999a;
      uStack_300 = 0;
      local_318 = (double *)0x3fe3333333333333;
      pdStack_310 = (double *)0x3fd999999999999a;
      plStack_320 = (longlong *)0x3fe999999999999a;
      local_418 = &local_328;
    }
    local_328 = (longlong *)&DAT_3ff0000000000000;
    FUN_146c8cd02(local_2f8);
    if (local_2a8 == (longlong **)0x0) {
      pdVar17 = local_2f8;
      pplVar15 = local_298;
      for (lVar24 = 10; lVar24 != 0; lVar24 = lVar24 + -1) {
        *pplVar15 = (longlong *)*pdVar17;
        pdVar17 = pdVar17 + 1;
        pplVar15 = pplVar15 + 1;
      }
    }
    if (local_248 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    local_240 = local_2a0;
    local_428[0] = 0;
    local_428[1] = 0;
    local_2f8[0] = 1.79769313486232e+308;
    local_248 = local_2a8;
    FUN_146bfae00(local_428,local_2f8,uVar18);
    if (0 < (int)uStack_3a0) {
      local_488 = (longlong *)(param_10 + 0x90);
      local_4a8 = 0;
      iVar25 = 0;
      do {
        iVar19 = (int)local_4a8;
        if ((local_49c <= iVar19) || (999 < iVar25)) break;
        iVar23 = (int)uStack_3a0;
        if ((param_10 == (char *)0x0) || (iVar19 != (iVar19 / 0x19) * 0x19)) {
LAB_142982fbe:
          uVar11 = 0;
          do {
            lVar20 = (longlong)(int)uVar11;
            iVar19 = *(int *)(local_3a8 + lVar20 * 4);
            lVar24 = (longlong)iVar19;
            if (*(char *)(local_3c8[2] + lVar24) == '\0') {
              iVar19 = ~uVar11 + (int)uStack_3a0;
              if (iVar19 != 0) {
                _Dst = (void *)(local_3a8 + lVar20 * 4);
                if (0 < iVar19) {
                  iVar19 = 1;
                }
LAB_142983265:
                memmove(_Dst,(void *)(local_3a8 + (longlong)((int)uStack_3a0 - iVar19) * 4),
                        (longlong)iVar19 << 2);
              }
LAB_142983281:
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,(int)uStack_3a0 + -1);
              iVar23 = iVar23 + -1;
              uVar11 = uVar11 - 1;
            }
            else {
              if (local_494 < 1) {
                param_7 = param_7 * 0xbb38435 + 0x3619636b;
                dVar29 = (double)((float)(param_7 >> 9 | 0x3f800000) + -1.0);
              }
              else {
                dVar29 = *(double *)(local_368 + lVar24 * 8);
                if ((int)param_8[4] == 2) {
                  dVar33 = 1.0;
                  if (dVar29 <= 1.0) {
                    dVar33 = dVar29;
                  }
                  param_7 = param_7 * 0xbb38435 + 0x3619636b;
                  dVar29 = ((double)((float)(param_7 >> 9 | 0x3f800000) + -1.0) +
                           (double)(~-(ulonglong)(dVar29 < 0.0) & (ulonglong)dVar33)) * 0.5;
                }
              }
              dVar33 = *(double *)(local_388 + lVar24 * 0x18);
              dVar3 = *(double *)(local_388 + 8 + lVar24 * 0x18);
              dVar4 = *(double *)(local_388 + 0x10 + lVar24 * 0x18);
              if ((int)*param_8 == 2) {
                dVar28 = 1.0 / (double)param_8[1];
LAB_1429830e3:
                dVar29 = pow(dVar29,dVar28);
              }
              else if ((int)*param_8 == 1) {
                dVar28 = (double)param_8[1];
                goto LAB_1429830e3;
              }
              pplVar15 = local_248;
              if (local_248 == (longlong **)0x0) {
                pplVar15 = local_298;
              }
              dVar28 = *(double *)(local_428[0] + lVar24 * 8);
              dVar30 = 1.79769313486232e+308;
              if ((longlong)(int)local_240 != 0) {
                pplVar1 = pplVar15 + (int)local_240;
                dVar30 = 1.79769313486232e+308;
LAB_142983147:
                dVar31 = (double)*pplVar15 * dVar29;
                dVar32 = 1.0;
                if (dVar31 <= 1.0) {
                  dVar32 = dVar31;
                }
                dVar32 = (double)(~-(ulonglong)(dVar31 < 0.0) & (ulonglong)dVar32);
                dVar32 = (1.0 - dVar32) * param_3 + dVar32 * param_4;
                if (dVar28 < dVar32) goto LAB_14298320d;
                dVar31 = 1.79769313486232e+308;
                if (0 < (int)uStack_3e0) {
                  uVar18 = 0;
                  pdVar17 = (double *)(local_3e8 + 0x10);
                  do {
                    dVar31 = dVar33 - pdVar17[-2];
                    dVar34 = dVar3 - pdVar17[-1];
                    dVar35 = dVar4 - *pdVar17;
                    dVar31 = SQRT(dVar35 * dVar35 + dVar31 * dVar31 + dVar34 * dVar34) -
                             *(double *)(local_3f8 + uVar18 * 8);
                    if (dVar31 < dVar32) goto LAB_1429831ed;
                    uVar18 = uVar18 + 1;
                    pdVar17 = pdVar17 + 3;
                  } while ((uStack_3e0 & 0xffffffff) != uVar18);
                  dVar31 = 1.79769313486232e+308;
                }
LAB_1429831ed:
                if (dVar31 <= dVar32) {
                  dVar30 = (double)((ulonglong)dVar30 & -(ulonglong)(dVar30 <= dVar31) |
                                   ~-(ulonglong)(dVar30 <= dVar31) & (ulonglong)dVar31);
                  goto LAB_14298320d;
                }
                if (iVar19 != -1) {
                  iVar23 = ~uVar11 + (int)uStack_3a0;
                  if (iVar23 != 0) {
                    if (0 < iVar23) {
                      iVar23 = 1;
                    }
                    memmove((void *)(local_3a8 + lVar20 * 4),
                            (void *)(local_3a8 + (longlong)((int)uStack_3a0 - iVar23) * 4),
                            (longlong)iVar23 << 2);
                  }
                  uStack_3a0 = CONCAT44(uStack_3a0._4_4_,(int)uStack_3a0 + -1);
                  pdVar17 = (double *)(local_388 + lVar24 * 0x18);
                  local_448 = *pdVar17;
                  dStack_440 = pdVar17[1];
                  local_438 = *(double *)(local_388 + 0x10 + lVar24 * 0x18);
                  local_458 = *(undefined8 *)(local_388 + 0x10 + lVar24 * 0x18);
                  puVar2 = (undefined8 *)(local_388 + lVar24 * 0x18);
                  local_468 = *puVar2;
                  uStack_460 = puVar2[1];
                  local_328 = (longlong *)
                              CONCAT44(local_328._4_4_,*(undefined4 *)(local_378 + lVar24 * 4));
                  local_2f8[0] = dVar32;
                  (*(code *)*local_490)(local_490[1],&local_468,&local_328,local_2f8);
                  FUN_146c8cd6a(&local_238,iVar19);
                  uVar18 = uStack_3e0;
                  *(undefined1 *)(local_3c8[2] + lVar24) = 0;
                  lVar24 = (longlong)(int)uStack_3e0;
                  uVar11 = (int)uStack_3e0 + 1;
                  uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar11);
                  if (uStack_3e0._4_4_ < uVar11) {
                    FUN_1403e3958(&local_3e8,uVar18 & 0xffffffff);
                  }
                  uVar18 = uStack_3f0;
                  *(double *)(local_3e8 + 0x10 + lVar24 * 0x18) = local_438;
                  pdVar17 = (double *)(local_3e8 + lVar24 * 0x18);
                  *pdVar17 = local_448;
                  pdVar17[1] = dStack_440;
                  lVar24 = (longlong)(int)uStack_3f0;
                  uVar11 = (int)uStack_3f0 + 1;
                  uStack_3f0 = CONCAT44(uStack_3f0._4_4_,uVar11);
                  if (uStack_3f0._4_4_ < uVar11) {
                    FUN_144941252(&local_3f8,uVar18 & 0xffffffff);
                  }
                  *(double *)(local_3f8 + lVar24 * 8) = dVar32;
                  local_470 = (dVar32 + param_3) * (dVar32 + param_3);
                  bVar26 = (longlong)uStack_3d0 < 0;
                  uStack_3d0 = uStack_3d0 & 0xffffffff00000000;
                  if (bVar26) {
                    FUN_14481578e(&local_3d8,0);
                  }
                  dVar32 = dVar32 + dVar32;
                  local_2f8[2] = local_438 - dVar32;
                  local_2f8[1] = dStack_440 - dVar32;
                  local_2f8[0] = local_448 - dVar32;
                  local_2d0 = local_438 + dVar32;
                  local_2d8 = dStack_440 + dVar32;
                  local_2f8[3] = dVar32 + local_448;
                  local_328 = local_3c8 + 2;
                  local_318 = &local_448;
                  pdStack_310 = &local_470;
                  local_480 = &LAB_146c90e04;
                  local_4c8 = local_3c8;
                  local_478 = &local_328;
                  plStack_320 = &local_388;
                  FUN_146c8cdc0(&local_238,local_2f8,&local_480,&local_3d8);
                  lVar24 = local_3d8;
                  lVar20 = (longlong)(int)uStack_3d0;
                  if (lVar20 != 0) {
                    lVar21 = 0;
                    do {
                      uVar11 = *(uint *)(lVar24 + lVar21);
                      lVar6 = *(longlong *)(local_168 + (ulonglong)(uVar11 >> 9) * 8);
                      iVar19 = *(int *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 4);
                      if (iVar19 != -1) {
                        *(undefined4 *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 4) = 0xffffffff;
                        FUN_146c9099a(local_1d8,iVar19,uVar11);
                      }
                      *(undefined1 *)(local_3c8[2] + (int)uVar11) = 0;
                      lVar21 = lVar21 + 4;
                    } while (lVar20 * 4 != lVar21);
                  }
                  local_4a8 = (ulonglong)((int)local_4a8 + 1);
                  goto LAB_1429832a4;
                }
                break;
              }
LAB_14298321a:
              *(ulonglong *)(local_428[0] + lVar24 * 8) =
                   ~-(ulonglong)(dVar28 <= dVar30) & (ulonglong)dVar30 |
                   (ulonglong)dVar28 & -(ulonglong)(dVar28 <= dVar30);
              if (local_498 == 0) {
                iVar19 = ~uVar11 + (int)uStack_3a0;
                if (iVar19 != 0) {
                  if (0 < iVar19) {
                    iVar19 = 1;
                  }
                  _Dst = (void *)(local_3a8 + lVar20 * 4);
                  goto LAB_142983265;
                }
                goto LAB_142983281;
              }
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < iVar23);
        }
        else {
          if (*param_10 != '\0') break;
          pcVar5 = *(code **)(param_10 + 0x70);
          plVar14 = *(longlong **)(param_10 + 0x80);
          if (*(longlong **)(param_10 + 0x80) == (longlong *)0x0) {
            plVar14 = local_488;
          }
          uVar12 = (**(code **)(*plVar14 + 8))();
          cVar9 = (*pcVar5)(uVar12);
          *param_10 = cVar9;
          if (cVar9 != '\0') break;
          iVar23 = (int)uStack_3a0;
          if (0 < (int)uStack_3a0) goto LAB_142982fbe;
        }
        iVar25 = iVar25 + 1;
LAB_1429832a4:
      } while (0 < (int)uStack_3a0);
    }
    if (local_428[0] != 0) {
      FUN_1400020a8();
    }
    if (local_248 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    if (local_3f8 != 0) {
      FUN_1400020a8();
    }
    if (local_3e8 != 0) {
      FUN_1400020a8();
    }
    if (local_3d8 != 0) {
      FUN_1400020a8();
    }
    if (local_3c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_3c8[2] != 0) {
      FUN_1400020a8();
    }
    if (local_3a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_10 != '\0') goto LAB_142983682;
    pcVar5 = *(code **)(param_10 + 0x70);
    plVar14 = *(longlong **)(param_10 + 0x80);
    if (*(longlong **)(param_10 + 0x80) == (longlong *)0x0) {
      plVar14 = (longlong *)(param_10 + 0x90);
    }
    uVar12 = (**(code **)(*plVar14 + 8))();
    cVar9 = (*pcVar5)(uVar12);
    *param_10 = cVar9;
    if (cVar9 != '\0') goto LAB_142983682;
    FUN_145ad3dea(&local_238);
    dVar29 = (double)(-(ulonglong)(0.0 <= local_330 - local_348) &
                     (ulonglong)(local_330 - local_348));
    dVar33 = (double)(-(ulonglong)(0.0 <= local_338 - local_350) &
                     (ulonglong)(local_338 - local_350));
    uVar27 = -(ulonglong)(dVar29 <= dVar33);
    dVar33 = (double)(~uVar27 & (ulonglong)dVar29 | uVar27 & (ulonglong)dVar33);
    dVar29 = (double)(-(ulonglong)(0.0 <= local_340 - local_358) &
                     (ulonglong)(local_340 - local_358));
    uVar27 = -(ulonglong)(dVar33 <= dVar29);
    uVar11 = 4;
    if (iVar25 < 0x4c4b41) {
      uVar11 = 500000 < iVar25 | 2;
    }
    bVar10 = 10;
    if (iVar25 < 0x4c4b41) {
      bVar10 = (500000 < iVar25) * '\x02' + 6;
    }
    local_230 = 5;
    if (iVar25 < 0x2faf081) {
      local_230 = uVar11;
    }
    bVar16 = 0xc;
    if (iVar25 < 0x2faf081) {
      bVar16 = bVar10;
    }
    local_238 = (double)(uVar27 & (ulonglong)dVar29 | ~uVar27 & (ulonglong)dVar33) / (double)bVar16;
    local_22c = 0xfa;
    local_390 = local_298;
    local_398 = &LAB_146c908fa;
    local_298[0] = &local_388;
    FUN_146c8c7a2(&local_238,uVar18);
    if (*param_10 == '\0') {
      pcVar5 = *(code **)(param_10 + 0x70);
      plVar14 = (longlong *)(param_10 + 0x90);
      if (*(longlong **)(param_10 + 0x80) != (longlong *)0x0) {
        plVar14 = *(longlong **)(param_10 + 0x80);
      }
      uVar12 = (**(code **)(*plVar14 + 8))(plVar14);
      cVar9 = (*pcVar5)(uVar12);
      *param_10 = cVar9;
      if (cVar9 == '\0') goto LAB_142982c9f;
    }
  }
  FUN_145bc96fe(&local_238);
LAB_142983682:
  FUN_146c8d0ca(&local_388);
  if ((local_f0 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14298320d:
  pplVar15 = pplVar15 + 1;
  if (pplVar15 == pplVar1) goto LAB_14298321a;
  goto LAB_142983147;
}


