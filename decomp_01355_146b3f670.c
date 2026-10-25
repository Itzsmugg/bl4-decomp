// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b3f670 FUN_146b3f670 body=473 status=ok
// SIG undefined FUN_146b3f670(void)

void FUN_146b3f670(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *param_2;
  local_a0 = (longlong *)param_2[1];
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)(lVar5 + 0x108);
  puVar4 = (undefined8 *)(lVar5 + 0x118);
  local_70 = (undefined8 *)&DAT_100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = puVar4;
  if (*(int *)(lVar5 + 0x130) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar11 = *(int *)(lVar5 + 0x130);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar3;
  if ((iStack_5c != iVar11) || (uStack_68 != puVar4)) {
    do {
      puVar10 = (undefined8 *)((longlong)iStack_7c * 0x28 + *local_98);
      if (param_3 == '\0') {
        iVar8 = *(int *)(puVar10 + 1);
        puVar9 = &DAT_149dfb77a;
        if (iVar8 != 0) {
          puVar9 = (undefined2 *)*puVar10;
        }
        iVar6 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar6 = 0;
        }
        uVar7 = FUN_144a49b4a(iVar6,puVar9);
        iVar8 = FUN_1457511aa(param_1 + 0x108,uVar7,puVar10);
        if (iVar8 == -1) goto LAB_146b3f7a4;
      }
      else {
LAB_146b3f7a4:
        uStack_68 = puVar10 + 2;
        local_70 = puVar10;
        FUN_140ac5c08(param_1 + 0x108,local_4c,&local_70,0);
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar3 ||
             ((undefined8 *)CONCAT44(uStack_84,uStack_88) != puVar4 || iStack_7c != iVar11));
  }
  plVar3 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b3f84a FUN_146b3f84a body=322 status=ok
// SIG undefined FUN_146b3f84a(void)

undefined8 * FUN_146b3f84a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  plVar8 = (longlong *)(param_1 + 0x108);
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_3 + 1);
  if (iVar3 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar7);
  iVar3 = FUN_1457511aa(plVar8,uVar2,param_3);
  if (iVar3 != -1) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    iVar3 = *(int *)(param_3 + 1);
    if (iVar3 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    uVar9 = 0;
    uVar6 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar6 = uVar9;
    }
    uVar2 = FUN_144a49b4a(uVar6,puVar7);
    iVar3 = FUN_1457511aa(plVar8,uVar2,param_3);
    if (iVar3 != -1) {
      uVar9 = (longlong)iVar3 * 0x28 + *plVar8;
    }
    *puVar4 = &PTR_FUN_149f2dae0;
    puVar4[1] = 0;
    iVar3 = *(int *)(uVar9 + 0x18);
    _Src = *(void **)(uVar9 + 0x10);
    *(int *)(puVar4 + 2) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar4 + 1,iVar3,0);
      memcpy((void *)puVar4[1],_Src,(longlong)iVar3 * 2);
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar5[1] = &DAT_100000001;
    *puVar5 = &PTR_LAB_149f2eef0;
    puVar5[2] = puVar4;
    *param_2 = puVar4;
    if (puVar5 != (undefined8 *)0x0) {
      param_2[1] = puVar5;
    }
  }
  return param_2;
}



// FUNCTION 146b3f98c FUN_146b3f98c body=114 status=ok
// SIG undefined FUN_146b3f98c(void)

undefined8 FUN_146b3f98c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  local_30 = param_4;
  FUN_140ac5c08(param_1 + 0x21,local_24,&local_38,0);
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3fa00 FUN_146b3fa00 body=124 status=ok
// SIG undefined FUN_146b3fa00(void)

undefined8 FUN_146b3fa00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142746ad6(local_38,param_4,8);
  (**(code **)(*param_1 + 0x110))(param_1,param_2,param_3,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3fa7e FUN_146b3fa7e body=124 status=ok
// SIG undefined FUN_146b3fa7e(void)

undefined8 FUN_146b3fa7e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142746ad6(local_38,param_4,8);
  (**(code **)(*param_1 + 0x110))(param_1,param_2,param_3,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3fb08 FUN_146b3fb08 body=228 status=ok
// SIG undefined FUN_146b3fb08(void)

undefined4 FUN_146b3fb08(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = &local_78;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_149f2ef10;
  local_b8[0] = FUN_1429393aa;
  local_88 = param_2;
  local_80 = param_1;
  uVar1 = FUN_146b3fbee(0,local_b8);
  if (local_b8[0] != (code *)0x0) {
    pppuVar2 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar2 = &local_98;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_145ec7454(&local_78);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b3fbee FUN_146b3fbee body=877 status=ok
// SIG undefined FUN_146b3fbee(void)

int FUN_146b3fbee(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar9 = *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34);
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_146b560ec(local_98,uVar9);
    iVar4 = 1;
    if (3 < uVar9) {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar4)) {
      local_50 = iVar4;
      FUN_146b56288();
    }
  }
  local_f0 = param_1;
  local_e8 = param_4;
  if ((longlong)(int)param_1[0x20] != 0) {
    lVar13 = param_1[0x1f];
    lVar10 = (longlong)(int)param_1[0x20] * 0x60 + lVar13;
    do {
      pcVar1 = (code *)*param_2;
      plVar7 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar7 = param_2 + 4;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      cVar2 = (*pcVar1)(uVar6,lVar13);
      if ((cVar2 != '\0') && ((longlong)*(int *)(lVar13 + 0x50) != 0)) {
        lVar12 = *(longlong *)(lVar13 + 0x48);
        lVar11 = (longlong)*(int *)(lVar13 + 0x50) * 0x18;
        do {
          uVar3 = FUN_1447addd0(lVar12,0x10);
          iVar4 = FUN_140f5cb3a(param_3,uVar3,lVar12);
          if (iVar4 != -1) {
            uVar3 = FUN_1447addd0(lVar12,0x10);
            uVar6 = FUN_146b56444(local_98,uVar3,lVar12);
            FUN_146b31154(uVar6,*(undefined4 *)(lVar12 + 0x10),*(undefined4 *)(lVar12 + 0x14),1);
          }
          lVar12 = lVar12 + 0x18;
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != 0);
      }
      lVar13 = lVar13 + 0x60;
    } while (lVar13 != lVar10);
  }
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar8 = 0;
  iVar4 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar4 = local_70;
  }
  uVar6 = local_e8;
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar4) || (local_b0 != local_88)) {
    plVar7 = local_f0 + 0x4a;
    iVar8 = 0;
    local_f0 = plVar7;
    do {
      lVar13 = (longlong)iStack_c4 * 0x28 + *local_e0;
      uVar3 = FUN_1447addd0(lVar13,0x10);
      iVar5 = FUN_146b550d8(plVar7,uVar3,lVar13);
      if (iVar5 == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = (longlong)iVar5 * 0x20 + *plVar7;
      }
      lVar12 = *(longlong *)(lVar13 + 0x10);
      if (((lVar12 != 0) && (lVar12 == *(longlong *)(lVar13 + 0x18))) &&
         (*(ulonglong *)(lVar12 + 8) == (ulonglong)*(uint *)(*(longlong *)(lVar10 + 0x10) + 0x30)))
      {
        FUN_1457adc9c(uVar6,&local_b8,lVar13,0);
        iVar8 = iVar8 + 1;
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar4));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_146b49a2a(local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 146b3ff5e FUN_146b3ff5e body=267 status=ok
// SIG undefined FUN_146b3ff5e(void)

undefined4 FUN_146b3ff5e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  undefined8 *local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x1d0))(0,param_2,&local_88);
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_149f2ef30;
  local_c8[0] = FUN_1429396a0;
  local_a0 = &local_88;
  uVar1 = FUN_146b3fbee(param_1,local_c8,param_3,param_4);
  if (local_c8[0] != (code *)0x0) {
    pppuVar2 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar2 = &local_a8;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_88);
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4006a FUN_146b4006a body=626 status=ok
// SIG undefined FUN_146b4006a(void)

longlong * FUN_146b4006a(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  void *local_b8;
  longlong *local_b0;
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = 0;
  lStack_70 = 0;
  if ((longlong)*(int *)(param_1 + 0x100) == 0) {
    lVar7 = 0;
    uVar6 = 0;
LAB_146b402ae:
    lVar10 = local_78;
    FUN_146b5688a(lVar7,uVar6);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_146b5694a(param_2);
    }
    if (lVar10 == 0) goto LAB_146b4026f;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0xf8);
    local_c0 = (longlong)*(int *)(param_1 + 0x100) * 0x60 + lVar7;
    local_b0 = param_2;
    do {
      iVar3 = *(int *)(lVar7 + 0x50);
      if ((longlong)iVar3 != 0) {
        lVar10 = *(longlong *)(lVar7 + 0x48);
        lVar12 = lVar10 + 0x14;
        lVar9 = 0;
        lVar8 = 0;
        do {
          if ((((*param_3 == *(int *)(lVar10 + lVar9)) &&
               (param_3[1] == *(int *)(lVar10 + 4 + lVar9))) &&
              (param_3[2] == *(int *)(lVar10 + 8 + lVar9))) &&
             (param_3[3] == *(int *)(lVar10 + 0xc + lVar9))) {
            lVar1 = lVar12 + lVar9;
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = (void *)0x0;
            uStack_a0 = 0;
            FUN_144a787a6(&local_a8,lVar7);
            uStack_90 = *(undefined8 *)(lVar1 + -0x14);
            local_88 = *(undefined8 *)(lVar1 + -0xc);
            uStack_80 = *(undefined8 *)(lVar1 + -4);
            iVar4 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar4 + 1U;
            local_98 = lVar8;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
              FUN_146b568b6(param_2,iVar4);
            }
            lVar1 = *param_2;
            lVar5 = (longlong)iVar4 * 0x30;
            puVar2 = (undefined8 *)(lVar1 + lVar5);
            *(undefined8 *)(lVar1 + lVar5) = 0;
            lVar11 = (longlong)(int)uStack_a0;
            *(int *)(lVar1 + 8 + lVar5) = (int)uStack_a0;
            if (lVar11 == 0) {
              *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
            }
            else {
              local_b8 = local_a8;
              FUN_1446dd670(puVar2,uStack_a0 & 0xffffffff,0);
              memcpy((void *)*puVar2,local_b8,lVar11 * 2);
            }
            *(undefined4 *)(puVar2 + 4) = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar2 + 0x24) = local_88._4_4_;
            *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_80._4_4_;
            *(undefined4 *)(puVar2 + 2) = (undefined4)local_98;
            *(undefined4 *)((longlong)puVar2 + 0x14) = local_98._4_4_;
            *(undefined4 *)(puVar2 + 3) = (undefined4)uStack_90;
            *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_90._4_4_;
            FUN_146b31154(&local_78,*(undefined4 *)(lVar10 + 0x10 + lVar9),
                          *(undefined4 *)(lVar12 + lVar9),1);
            param_2 = local_b0;
            if (local_a8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          lVar8 = lVar8 + (ulonglong)*(uint *)(lVar12 + lVar9);
          lVar9 = lVar9 + 0x18;
        } while ((longlong)iVar3 * 0x18 != lVar9);
      }
      lVar7 = lVar7 + 0x60;
    } while (lVar7 != local_c0);
    if ((local_78 == 0) || (lVar10 = local_78, local_78 != lStack_70)) {
      uVar6 = (undefined4)param_2[1];
      lVar7 = *param_2;
      goto LAB_146b402ae;
    }
  }
  do {
    lVar7 = *(longlong *)(lVar10 + 0x18);
    FUN_1400020a8(lVar10);
    lVar10 = lVar7;
  } while (lVar7 != 0);
LAB_146b4026f:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b4031c FUN_146b4031c body=93 status=ok
// SIG undefined FUN_146b4031c(void)

void FUN_146b4031c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b40376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))(param_1,*param_2);
    return;
  }
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  (**(code **)(*param_1 + 0x148))();
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
                    /* WARNING: Could not recover jumptable at 0x000146b4035c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 146b4037a FUN_146b4037a body=312 status=ok
// SIG undefined FUN_146b4037a(void)

void FUN_146b4037a(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_2 + 0x100) != 0) {
    lVar2 = *(longlong *)(param_2 + 0xf8);
    lVar6 = (longlong)*(int *)(param_2 + 0x100) * 0x60;
    lVar5 = 0;
    local_60 = lVar6;
    do {
      local_58 = *(undefined8 *)(lVar2 + lVar5);
      iVar4 = *(int *)(lVar2 + 8 + lVar5);
      local_50 = iVar4 + -1;
      if (iVar4 == 0) {
        local_50 = 0;
      }
      uVar3 = FUN_144a49b4a();
      iVar4 = FUN_146b4bb82(param_1 + 0x1b0,uVar3,&local_58);
      if (iVar4 == -1) {
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_1447a1bd6(param_3,iVar4);
        }
        lVar6 = *param_3;
        lVar7 = (longlong)iVar4 * 0x10;
        puVar1 = (undefined8 *)(lVar6 + lVar7);
        *(undefined8 *)(lVar6 + lVar7) = 0;
        iVar4 = *(int *)(lVar2 + 8 + lVar5);
        _Src = *(void **)(lVar2 + lVar5);
        *(int *)(lVar6 + 8 + lVar7) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          lVar6 = local_60;
        }
        else {
          FUN_1446dd670(puVar1,iVar4,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar4 * 2);
          lVar6 = local_60;
        }
      }
      lVar5 = lVar5 + 0x60;
    } while (lVar6 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b404b4 FUN_146b404b4 body=535 status=ok
// SIG undefined FUN_146b404b4(void)

void FUN_146b404b4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(&local_58);
  FUN_140e4328c(&local_58);
  FUN_1400020e8(&local_58,&DAT_149e065c6,1);
  FUN_1448b5552(&local_58);
  local_68 = 0;
  uStack_60 = 0;
  plVar6 = (longlong *)FUN_14054d1d4();
  puVar8 = local_58;
  if (local_50 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  local_98 = 1;
  local_a8 = 1;
  local_a0 = 0;
  (**(code **)(*plVar6 + 0x80))(plVar6,&local_68,puVar8,&DAT_149e060b2);
  if (0 < (int)uStack_60) {
    lVar9 = 0;
    lVar7 = 0;
    do {
      iVar5 = local_50 + -1;
      if (local_50 == 0) {
        iVar5 = 0;
      }
      FUN_144a49bb4(local_68 + lVar9,&local_78,iVar5);
      local_88 = local_78;
      local_80 = local_70 + -1;
      if (local_70 == 0) {
        local_80 = 0;
      }
      uVar4 = FUN_144a49b4a();
      iVar5 = FUN_146b4bb82(param_1 + 0x1b0,uVar4,&local_88);
      lVar3 = local_68;
      if (iVar5 == -1) {
        iVar5 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
          FUN_1447a1bd6(param_3,iVar5);
        }
        lVar2 = *param_3;
        lVar10 = (longlong)iVar5 * 0x10;
        puVar1 = (undefined8 *)(lVar2 + lVar10);
        *(undefined8 *)(lVar2 + lVar10) = 0;
        iVar5 = *(int *)(lVar3 + 8 + lVar9);
        _Src = *(void **)(lVar3 + lVar9);
        *(int *)(lVar2 + 8 + lVar10) = iVar5;
        if ((longlong)iVar5 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar5,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar5 * 2);
        }
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar7 < (int)uStack_60);
  }
  FUN_1447a1747(local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b406d4 FUN_146b406d4 body=250 status=ok
// SIG undefined FUN_146b406d4(void)

void FUN_146b406d4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,&DAT_149dfb77a);
  local_48 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_40 = plVar4;
  }
  (**(code **)(*param_1 + 0x140))(param_1,&local_48,local_38,param_3);
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
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b407e0 FUN_146b407e0 body=203 status=ok
// SIG undefined FUN_146b407e0(void)

void FUN_146b407e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x1b8))(0,&local_88);
  local_98 = param_4;
  (**(code **)(*param_1 + 0x130))(param_1,param_2,param_3,&local_88);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_88);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b408ac FUN_146b408ac body=766 status=ok
// SIG undefined FUN_146b408ac(void)

void FUN_146b408ac(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_128 [32];
  int local_108;
  int local_fc;
  longlong local_f8;
  undefined8 *local_f0;
  undefined2 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 == 0) {
    uStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (undefined2 *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    (**(code **)(*param_1 + 0x1b8))(param_1,&local_98);
    FUN_146b3de84(&local_98,&local_e8,param_4);
    FUN_146b40bac(param_5,&local_e8);
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_98);
  }
  else {
    local_fc = *(int *)(param_3 + 1);
    plVar1 = param_4 + 2;
    local_e8 = (undefined2 *)0x100000000;
    local_d8 = 0xffffffff;
    uStack_d0 = 0;
    local_f0 = param_3;
    uStack_e0 = plVar1;
    if ((int)param_4[5] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      iVar9 = (int)param_4[5];
    }
    uStack_78 = CONCAT44(uStack_cc,uStack_d0);
    local_80 = local_d8;
    uVar2 = local_80;
    uStack_90 = local_e8;
    uStack_88 = (int)uStack_e0;
    uStack_84 = uStack_e0._4_4_;
    local_80._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    iVar8 = local_80._4_4_;
    local_f8 = param_2;
    local_98 = param_4;
    if ((local_80._4_4_ != iVar9) || (local_80 = uVar2, uStack_e0 != plVar1)) {
      do {
        local_80 = uVar2;
        puVar6 = (undefined8 *)
                 (**(code **)(*param_1 + 0x1f8))(param_1,(longlong)iVar8 * 0x18 + *local_98);
        if (puVar6 != (undefined8 *)0x0) {
          cVar3 = (**(code **)(*param_1 + 0x238))(param_1,param_2,puVar6);
          if (cVar3 == '\0') {
            if (1 < local_fc) {
              plVar4 = (longlong *)FUN_14054d1d4();
              iVar8 = *(int *)(puVar6 + 1) + -1;
              if (*(int *)(puVar6 + 1) == 0) {
                iVar8 = 0;
              }
              local_108 = iVar8 + 1 + (uint)(*(int *)(local_f0 + 1) == 0);
              local_e8 = (undefined2 *)0x0;
              FUN_14125bce8(&local_e8,*local_f0,*(int *)(local_f0 + 1),0);
              FUN_1401aebe8(&local_e8,*puVar6,iVar8);
              puVar7 = local_e8;
              if ((int)uStack_e0 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              lVar5 = (**(code **)(*plVar4 + 0x108))(plVar4,puVar7);
              param_2 = local_f8;
              if (local_e8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if ((lVar5 < 0) || (lVar5 != puVar6[0xb])) goto LAB_146b40a65;
            }
          }
          else {
LAB_146b40a65:
            FUN_14482b35e(param_5,&local_e8,puVar6);
          }
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar8 = local_80._4_4_;
        uVar2 = local_80;
      } while (local_98 != param_4 ||
               ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar1 || local_80._4_4_ != iVar9));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b40bac FUN_146b40bac body=374 status=ok
// SIG undefined FUN_146b40bac(void)

void FUN_146b40bac(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_140e83416(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14482b9e8(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_140e830ae(param_1,&local_50,(longlong)iStack_5c * 0x18 + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    FUN_141539c3e(param_2);
    FUN_14170af7a(param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b40d34 FUN_146b40d34 body=125 status=ok
// SIG undefined FUN_146b40d34(void)

ulonglong FUN_146b40d34(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  
  if (param_2 == param_1) {
    uVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x1f8))(param_2,param_3);
    lVar2 = (**(code **)(*param_1 + 0x1f8))(param_1,param_3);
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    uVar3 = CONCAT71(uVar4,1);
    if (lVar2 != 0 && lVar1 != 0) {
      uVar3 = CONCAT71(uVar4,*(int *)(lVar2 + 0x30) != *(int *)(lVar1 + 0x30) ||
                             *(undefined1 (*) [16])(lVar2 + 0x20) !=
                             *(undefined1 (*) [16])(lVar1 + 0x20));
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 146b40db2 FUN_146b40db2 body=140 status=ok
// SIG undefined FUN_146b40db2(void)

int FUN_146b40db2(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x100) == 0) {
    iVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xf8);
    lVar5 = (longlong)*(int *)(param_1 + 0x100) * 0x60 + lVar3;
    iVar2 = 0;
    do {
      if ((longlong)*(int *)(lVar3 + 0x50) != 0) {
        piVar4 = *(int **)(lVar3 + 0x48);
        piVar1 = piVar4 + (longlong)*(int *)(lVar3 + 0x50) * 6;
        do {
          iVar2 = iVar2 + (uint)(piVar4[3] == param_2[3] &&
                                (piVar4[2] == param_2[2] &&
                                (piVar4[1] == param_2[1] && *piVar4 == *param_2)));
          piVar4 = piVar4 + 6;
        } while (piVar4 != piVar1);
      }
      lVar3 = lVar3 + 0x60;
    } while (lVar3 != lVar5);
  }
  return iVar2;
}



// FUNCTION 146b40e3e FUN_146b40e3e body=2677 status=ok
// SIG undefined FUN_146b40e3e(void)

undefined8 * FUN_146b40e3e(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_238 [32];
  int local_218;
  undefined8 *local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  int local_1d0;
  longlong local_1c8 [2];
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  uint local_178;
  undefined4 local_174;
  longlong *local_170;
  undefined8 *local_168;
  undefined1 local_15c [4];
  undefined1 local_158 [80];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *param_1 = &PTR_FUN_149f2ec10;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  local_1e0 = param_1 + 0xb;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x1f] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar5 = 0;
  local_1e8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    puVar13 = (undefined8 *)param_1[0x1f];
    local_208 = puVar13 + (longlong)*(int *)(param_1 + 0x20) * 0x2b;
    do {
      uVar9 = puVar13[0x13];
      if (puVar13[0x13] == 0) {
        uVar9 = puVar13[0x15];
      }
      do {
        if (uVar9 == 0) break;
        uVar1 = uVar9 + 0x260;
        local_108 = 0x100000000;
        local_f8 = (undefined8 *)&DAT_ffffffff;
        uStack_f0 = 0;
        uStack_100 = uVar1;
        if (*(int *)(uVar9 + 0x278) == 0) {
          iVar14 = 0;
        }
        else {
          FUN_1449c0562(&local_108);
          iVar14 = *(int *)(uVar9 + 0x278);
        }
        plVar11 = (longlong *)(uVar9 + 0x250);
        uStack_98 = CONCAT44(uStack_ec,uStack_f0);
        local_a0 = local_f8;
        puVar4 = local_a0;
        uStack_b0 = local_108;
        uStack_a8 = (int)uStack_100;
        uStack_a4 = uStack_100._4_4_;
        local_a0._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
        iVar7 = local_a0._4_4_;
        local_b8 = plVar11;
        if ((local_a0._4_4_ != iVar14) || (local_a0 = puVar4, uStack_100 != uVar1)) {
          do {
            local_a0 = puVar4;
            local_1b8 = (longlong *)(*local_b8 + (longlong)iVar7 * 0x20);
            local_108 = *(undefined8 *)(*local_b8 + 0x10 + (longlong)iVar7 * 0x20);
            local_1b0 = &local_108;
            uStack_100 = uVar9;
            local_f8 = puVar13;
            FUN_146b4ae7e(param_1 + 1,&local_190,&local_1b8);
            local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            iVar7 = local_a0._4_4_;
            puVar4 = local_a0;
          } while (local_b8 != plVar11 ||
                   (CONCAT44(uStack_a4,uStack_a8) != uVar1 || local_a0._4_4_ != iVar14));
        }
        bVar16 = puVar13[0x15] != uVar9;
        uVar9 = puVar13[0x15];
      } while (bVar16);
      if (*(int *)(puVar13 + 0x12) != 0) {
        lVar3 = puVar13[0x13];
        uVar9 = lVar3 + 0x1c0;
        local_108 = 0x100000000;
        local_f8 = (undefined8 *)&DAT_ffffffff;
        uStack_f0 = 0;
        uStack_100 = uVar9;
        if (*(int *)(lVar3 + 0x1d8) == 0) {
          iVar14 = 0;
        }
        else {
          FUN_1449c0562(&local_108);
          iVar14 = *(int *)(lVar3 + 0x1d8);
        }
        local_1f0 = (longlong *)(lVar3 + 0x1b0);
        uStack_98 = CONCAT44(uStack_ec,uStack_f0);
        local_a0 = local_f8;
        puVar4 = local_a0;
        uStack_b0 = local_108;
        uStack_a8 = (int)uStack_100;
        uStack_a4 = uStack_100._4_4_;
        local_a0._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
        local_200 = CONCAT44(local_200._4_4_,iVar14);
        iVar7 = local_a0._4_4_;
        local_1f8 = uVar9;
        local_b8 = local_1f0;
        if ((local_a0._4_4_ != iVar14) || (local_a0 = puVar4, uStack_100 != uVar9)) {
          do {
            local_a0 = puVar4;
            lVar3 = *local_b8;
            lVar8 = (longlong)iVar7 * 0x20;
            uStack_100 = puVar13[0x13];
            local_108 = *(undefined8 *)(lVar3 + 0x10 + lVar8);
            local_f8 = puVar13;
            FUN_14006620a(&local_1b8,*(undefined8 *)(lVar3 + lVar8),
                          *(undefined4 *)(lVar3 + 8 + lVar8));
            plVar11 = local_1b8;
            iVar14 = (int)local_1b0 + -1;
            if ((int)local_1b0 == 0) {
              iVar14 = 0;
            }
            local_218 = iVar14 + 1 + (uint)(*(int *)(puVar13 + 0xf) == 0);
            local_190 = (undefined8 *)0x0;
            FUN_14125bce8(&local_190,puVar13[0xe],*(int *)(puVar13 + 0xf),0);
            FUN_1401aebe8(&local_190,plVar11,iVar14);
            local_1b8 = &local_190;
            local_1b0 = &local_108;
            FUN_146b4b3c6(local_1e0,&local_170,&local_1b8);
            if (local_190 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            uVar9 = local_1f8;
            if (plVar11 != (longlong *)0x0) {
              FUN_1400020a8(plVar11);
            }
            local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            iVar7 = local_a0._4_4_;
            puVar4 = local_a0;
          } while (local_b8 != local_1f0 ||
                   (CONCAT44(uStack_a4,uStack_a8) != uVar9 || local_a0._4_4_ != (int)local_200));
        }
      }
      puVar13 = puVar13 + 0x2b;
    } while (puVar13 != local_208);
    uVar5 = *(uint *)(local_1e8 + 0x20);
  }
  uStack_98 = 0;
  local_90 = 0;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  puVar13 = local_1e8;
  if (0 < (int)uVar5) {
    local_208 = local_1e8 + 0x15;
    local_200 = (ulonglong)uVar5;
    iVar14 = 0;
    do {
      uVar9 = local_200 - 1;
      lVar8 = puVar13[0x1f];
      lVar12 = uVar9 * 0x158;
      lVar3 = lVar8 + lVar12;
      lVar15 = lVar3 + 0x118;
      local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,*(undefined4 *)(lVar3 + 0x90));
      local_e8 = 0;
      local_e0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_190 = (undefined8 *)&DAT_100000000;
      local_180 = 0xffffffff;
      local_178 = 0;
      local_1f8 = local_200;
      local_188 = lVar15;
      if (*(int *)(lVar3 + 0x130) != 0) {
        local_200 = uVar9;
        FUN_1449c0562(&local_190);
        uVar9 = local_200;
      }
      local_200 = uVar9;
      lVar3 = lVar8 + lVar12;
      plVar11 = (longlong *)(lVar8 + lVar12 + 0x108);
      local_1a0 = local_180;
      local_198 = local_178;
      local_194 = local_174;
      local_1b0 = local_190;
      local_1a8 = local_188;
      uVar5 = *(uint *)(lVar3 + 0x130);
      local_190 = (undefined8 *)CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
      local_180 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
      local_178 = uVar5 & 0xffffffe0;
      local_1b8 = plVar11;
      local_188 = lVar15;
      if (*(uint *)(lVar3 + 0x130) != uVar5) {
        FUN_1449c0562(&local_190);
        uVar5 = local_180._4_4_;
      }
      lVar8 = local_188;
      if ((local_1b8 != plVar11 || local_1a8 != local_188) || local_1a0._4_4_ != uVar5) {
        do {
          plVar2 = (longlong *)(*local_1b8 + (longlong)(int)local_1a0._4_4_ * 0x18);
          iVar7 = (int)plVar2[1] + -1;
          if ((int)plVar2[1] == 0) {
            iVar7 = iVar14;
          }
          local_218 = iVar7 + 1 + (uint)(*(int *)(lVar3 + 0x78) == 0);
          local_1c8[0] = 0;
          FUN_14125bce8(local_1c8,*(undefined8 *)(lVar3 + 0x70),*(int *)(lVar3 + 0x78),0);
          FUN_1401aebe8(local_1c8,*plVar2,iVar7);
          if ((int)local_1f0 != 3) {
            local_170 = (longlong *)((ulonglong)local_170 & 0xffffffffffffff00);
            FUN_14482b35e(&local_b8,&local_190,local_1c8);
            if ((char)local_170 == '\x01') {
              FUN_14482b35e(&local_108,&local_190,plVar2);
            }
          }
          if (*(int *)(lVar3 + 0x90) != 0) {
            lVar12 = *(longlong *)(lVar3 + 0x98);
            local_190 = (undefined8 *)*plVar2;
            iVar7 = (int)plVar2[1] + -1;
            if ((int)plVar2[1] == 0) {
              iVar7 = iVar14;
            }
            local_188 = CONCAT44(local_188._4_4_,iVar7);
            uVar6 = FUN_144a49b4a();
            iVar7 = FUN_146b4bb82(lVar12 + 0x1b0,uVar6,&local_190);
            if (iVar7 != -1) {
              plVar10 = (longlong *)(*(longlong *)(lVar3 + 0x98) + 0x1b0);
              local_1d8 = *plVar2;
              local_1d0 = (int)plVar2[1] + -1;
              if ((int)plVar2[1] == 0) {
                local_1d0 = iVar14;
              }
              uVar6 = FUN_144a49b4a();
              iVar7 = FUN_146b4bb82(plVar10,uVar6,&local_1d8);
              if (iVar7 == -1) {
                lVar12 = 0;
              }
              else {
                lVar12 = (longlong)iVar7 * 0x20 + *plVar10;
              }
              local_188 = *(longlong *)(lVar3 + 0x98);
              local_190 = *(undefined8 **)(lVar12 + 0x10);
              local_170 = local_1c8;
              local_168 = &local_190;
              local_180 = lVar3;
              FUN_146b4b9c4(local_1e0,local_15c,&local_170);
            }
          }
          plVar10 = (longlong *)(*(longlong *)(lVar3 + 0xa8) + 0x1b0);
          local_1d8 = *plVar2;
          local_1d0 = (int)plVar2[1] + -1;
          if ((int)plVar2[1] == 0) {
            local_1d0 = iVar14;
          }
          uVar6 = FUN_144a49b4a();
          iVar7 = FUN_146b4bb82(plVar10,uVar6,&local_1d8);
          if (iVar7 == -1) {
            lVar12 = 0;
          }
          else {
            lVar12 = (longlong)iVar7 * 0x20 + *plVar10;
          }
          local_188 = *(longlong *)(lVar3 + 0xa8);
          local_190 = *(undefined8 **)(lVar12 + 0x10);
          local_170 = local_1c8;
          local_168 = &local_190;
          local_180 = lVar3;
          FUN_146b4b3c6(local_208,local_15c,&local_170);
          if (local_1c8[0] != 0) {
            FUN_1400020a8();
          }
          local_1a0 = CONCAT44(local_1a0._4_4_,(uint)local_1a0 & ~local_1b0._4_4_);
          FUN_1449c0562(&local_1b0);
        } while (local_1b8 != plVar11 || (local_1a8 != lVar8 || local_1a0._4_4_ != uVar5));
      }
      if (local_d4 < (int)uStack_100) {
        FUN_145d1d460(plVar11,local_158,&local_108);
        FUN_146b49be4(lVar3,local_158);
      }
      puVar13 = local_1e8;
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_108);
    } while (1 < (longlong)local_1f8);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1408910a4(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar13;
}



// FUNCTION 146b418b4 FUN_146b418b4 body=193 status=ok
// SIG undefined FUN_146b418b4(void)

undefined8 * FUN_146b418b4(undefined8 *param_1,undefined8 param_2,LPCRITICAL_SECTION param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  EnterCriticalSection(param_3);
  plVar3 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f2f9a0;
  plVar4[2] = (longlong)plVar3;
  LeaveCriticalSection(param_3);
  cVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,param_2);
  if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  else {
    *param_1 = plVar3;
    param_1[1] = plVar4;
  }
  return param_1;
}



// FUNCTION 146b41976 FUN_146b41976 body=170 status=ok
// SIG undefined FUN_146b41976(void)

undefined8 * FUN_146b41976(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_1410b2022(param_1 + 10,param_2 + 10);
  FUN_144a787a6(param_1 + 0x14,param_2 + 0x14);
  FUN_144a787a6(param_1 + 0x16,param_2 + 0x16);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x1a,param_2 + 0x1a);
  return param_1;
}



// FUNCTION 146b41a20 FUN_146b41a20 body=83 status=ok
// SIG undefined FUN_146b41a20(void)

void FUN_146b41a20(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  return;
}



// FUNCTION 146b41a74 FUN_146b41a74 body=89 status=ok
// SIG undefined FUN_146b41a74(void)

undefined8 * FUN_146b41a74(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146b494a4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 146b41ace FUN_146b41ace body=212 status=ok
// SIG undefined FUN_146b41ace(void)

void FUN_146b41ace(longlong param_1)

{
  float *pfVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x70) != 0xb)) {
    *(undefined8 *)(param_1 + 0x70) = 0xc;
    fVar5 = 0.0;
    uVar2 = 0xc;
    uVar4 = 0;
    iVar3 = 0xc;
    do {
      if (iVar3 == 0xc) {
        iVar3 = 0xc;
        pfVar1 = (float *)(param_1 + 8 + uVar4 * 4);
        if (*pfVar1 <= 1.0 && *pfVar1 != 1.0) {
          iVar3 = (int)uVar4;
          *(int *)(param_1 + 0x70) = iVar3;
          uVar2 = uVar4 & 0xffffffff;
        }
      }
      if ((&DAT_149f2dff4)[uVar4] == '\x01') {
        fVar5 = fVar5 + (*(float *)(param_1 + 0x38 + uVar4 * 4) / *(float *)(param_1 + 0x68)) *
                        *(float *)(param_1 + 8 + uVar4 * 4);
        *(float *)(param_1 + 0x74) = fVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 0xc);
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x74) = fVar5;
    if (((int)uVar2 == 3) && (*(char *)(param_1 + 0x6c) == '\0')) {
      *(undefined4 *)(param_1 + 0x70) = 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b41af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}



// FUNCTION 146b41ba2 FUN_146b41ba2 body=67 status=ok
// SIG undefined FUN_146b41ba2(void)

void FUN_146b41ba2(longlong *param_1,char param_2)

{
  char cVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 != param_2) {
    (**(code **)(*param_1 + 0x50))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146b41bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 146b41bf0 FUN_146b41bf0 body=67 status=ok
// SIG undefined FUN_146b41bf0(void)

undefined4 FUN_146b41bf0(longlong param_1,uint *param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  uVar1 = *(undefined4 *)(param_1 + 8 + (ulonglong)*param_2 * 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return uVar1;
}



// FUNCTION 146b41c34 FUN_146b41c34 body=67 status=ok
// SIG undefined FUN_146b41c34(void)

undefined4 FUN_146b41c34(longlong param_1,uint *param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  uVar1 = *(undefined4 *)(param_1 + 0x38 + (ulonglong)*param_2 * 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return uVar1;
}



// FUNCTION 146b41c78 FUN_146b41c78 body=83 status=ok
// SIG undefined FUN_146b41c78(void)

undefined4 FUN_146b41c78(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0xb) {
    *(undefined4 *)(param_1 + 0x70) = 0xc;
    FUN_146b41ace(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0xb;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0xb);
}



// FUNCTION 146b41ccc FUN_146b41ccc body=50 status=ok
// SIG undefined FUN_146b41ccc(void)

bool FUN_146b41ccc(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  iVar1 = *(int *)(param_1 + 0x70);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return iVar1 == 0xb;
}



// FUNCTION 146b41cfe FUN_146b41cfe body=234 status=ok
// SIG undefined FUN_146b41cfe(void)

void FUN_146b41cfe(longlong *param_1)

{
  double dVar1;
  LARGE_INTEGER LVar2;
  char cVar3;
  double dVar4;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  QueryPerformanceCounter(&local_68);
  dVar1 = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
  cVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  dVar4 = dVar1;
  if (cVar3 != '\0') {
    do {
      FUN_14000f986(0x3dcccccd);
      QueryPerformanceCounter(&local_68);
      LVar2 = local_68;
      dVar4 = DAT_14c83f420;
      cVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    } while (cVar3 != '\0');
    dVar4 = (double)LVar2.QuadPart * dVar4 + 16777216.0;
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar4 - dVar1);
}



// FUNCTION 146b41dea FUN_146b41dea body=63 status=ok
// SIG undefined FUN_146b41dea(void)

void FUN_146b41dea(longlong param_1,char param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if (*(char *)(param_1 + 0x6c) != param_2) {
    *(char *)(param_1 + 0x6c) = param_2;
    FUN_146b41ace(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146b41e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  return;
}



// FUNCTION 146b41e2a FUN_146b41e2a body=919 status=ok
// SIG undefined FUN_146b41e2a(void)

void FUN_146b41e2a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  char local_79;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar7 = 0;
  do {
    iVar11 = 8;
    uVar12 = uVar7;
    do {
      uVar13 = uVar12 >> 1;
      uVar3 = uVar12 & 1;
      uVar12 = uVar13 ^ 0xc96c5795d7870f42;
      if (uVar3 == 0) {
        uVar12 = uVar13;
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    (&DAT_14c9912e0)[uVar7] = uVar12;
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x100);
  iVar11 = DAT_14c991c08 + -1;
  if (DAT_14c991c08 == 0) {
    iVar11 = 0;
  }
  local_68 = DAT_14c991c00;
  local_60 = (longlong *)CONCAT44(local_60._4_4_,iVar11);
  local_58 = DAT_14c991c10;
  local_50 = DAT_14c991c18 + -1;
  if (DAT_14c991c18 == 0) {
    local_50 = 0;
  }
  local_48 = DAT_14c991c20;
  local_40 = DAT_14c991c28 + -1;
  if (DAT_14c991c28 == 0) {
    local_40 = 0;
  }
  FUN_140bee87a(&local_78,&local_68,3);
  if ((undefined8 **)(param_1 + 8) == &local_78) {
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 **)(param_1 + 8) = local_78;
    local_78 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x10) = local_70;
    *(undefined4 *)(param_1 + 0x14) = local_6c;
  }
  FUN_146b421c2(param_1);
  uVar8 = FUN_14118da1c();
  cVar6 = FUN_14054d46e(uVar8,L"skipbuildpatchprereq");
  local_79 = '\0';
  local_88 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"Portal.BuildPatch",L"skipbuildpatchprereq");
  if (cVar6 != '\0') {
    uVar8 = FUN_144a82cde();
    FUN_1468161aa(uVar8,
                  L"BuildPatchServicesModule: Setup to skip prerequisites install via commandline.")
    ;
  }
  cVar4 = local_79;
  if (local_79 == '\x01') {
    uVar8 = FUN_144a82cde();
    FUN_1468161aa(uVar8,L"BuildPatchServicesModule: Setup to skip prerequisites install via config."
                 );
  }
  cVar9 = '\x01';
  if (cVar6 == '\0') {
    cVar9 = cVar4;
  }
  *(char *)(param_1 + 0x18) = cVar9;
  uVar8 = FUN_1401cb356();
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,3,0x10);
  local_70 = 3;
  *local_78 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_78[2] = lVar10;
  *local_78 = &PTR_FUN_149f2f1a0;
  local_78[3] = param_1;
  local_78[4] = FUN_142935c1e;
  local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1405f67fc(uVar8,&local_68,&local_78,L"FBuildPatchServicesModule_Tick");
  if ((undefined8 **)(param_1 + 0xa0) != &local_68) {
    *(undefined8 **)(param_1 + 0xa0) = local_68;
    local_68 = (undefined8 *)0x0;
    plVar2 = *(longlong **)(param_1 + 0xa8);
    *(longlong **)(param_1 + 0xa8) = local_60;
    local_60 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  FUN_1449db362(&local_78);
  FUN_146b42364(&local_68,param_1);
  FUN_146b5c790();
  local_68 = (undefined8 *)0x0;
  local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
  FUN_1446efa72(&local_68,0,2,0x10);
  local_60 = (longlong *)CONCAT44(local_60._4_4_,2);
  *local_68 = &PTR_LAB_149f2f2f0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_68[2] = lVar10;
  *local_68 = &PTR_FUN_149f2f280;
  local_68[3] = param_1;
  FUN_144a450dc(param_1 + 0xb0,&local_68);
  FUN_1449db362(&local_68);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b421c2 FUN_146b421c2 body=417 status=ok
// SIG undefined FUN_146b421c2(void)

void FUN_146b421c2(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_88 = &DAT_14c872ce8;
  iVar3 = FUN_14105aa76(DAT_14c872ce0,L"Portal.BuildPatch",L"InstalledPrereqs",&local_68);
  if ((int)uStack_60 < 1 || iVar3 == 0) goto LAB_146b42322;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (undefined8 *)(param_1 + 8);
  iVar3 = FUN_14105aa76(DAT_14c872ce0,L"Portal.BuildPatch",L"InstalledPrereqs");
  if ((iVar3 == 0) || ((int)uStack_70 < 1)) {
    FUN_1410e5bda(&local_78,&local_68);
LAB_146b422bc:
    local_88 = (undefined8 *)(param_1 + 8);
    FUN_14680529c(DAT_14c872ce0,L"Portal.BuildPatch",L"InstalledPrereqs",&local_78);
  }
  else if ((longlong)(int)uStack_60 != 0) {
    lVar6 = (longlong)(int)uStack_60 << 4;
    lVar5 = local_68;
    bVar2 = 0;
    do {
      bVar1 = bVar2;
      iVar3 = (int)uStack_70;
      iVar4 = FUN_1412fabe8(&local_78,lVar5);
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
      bVar2 = bVar1 | iVar3 <= iVar4;
    } while (lVar6 != 0);
    if ((bool)(bVar1 | iVar3 <= iVar4)) goto LAB_146b422bc;
  }
  FUN_1468048e6(DAT_14c872ce0,L"Portal.BuildPatch",L"InstalledPrereqs",&DAT_14c872ce8);
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_146b42322:
  FUN_1447a1747(local_68,(int)uStack_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b42364 FUN_146b42364 body=223 status=ok
// SIG undefined FUN_146b42364(void)

undefined8 FUN_146b42364(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149f2f210;
  local_30[3] = param_2;
  local_30[4] = FUN_146b42444;
  FUN_1448b6402(&DAT_14c8673d8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b42444 FUN_146b42444 body=232 status=ok
// SIG undefined FUN_146b42444(void)

void FUN_146b42444(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar7 = 0;
    iVar6 = 0;
    do {
      FUN_146b33b50(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar7));
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x28));
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x90);
      plVar4 = *(longlong **)(lVar3 + 8 + lVar7 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_146b424d1;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar8 = iVar6 == iVar5;
          if (bVar8) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar8);
        if (*(longlong *)(lVar3 + lVar7 * 0x10) != 0) {
          FUN_146b6f0fe();
        }
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
LAB_146b424d1:
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(param_1 + 0x98));
  }
  plVar4 = DAT_14c991bc0;
  DAT_14c991bb8 = 0;
  if (DAT_14c991bc0 != (longlong *)0x0) {
    DAT_14c991bc0 = (longlong *)0x0;
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
                    /* WARNING: Could not recover jumptable at 0x000146b4251f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b4252c FUN_146b4252c body=162 status=ok
// SIG undefined FUN_146b4252c(void)

void FUN_146b4252c(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1468161aa(DAT_14c872be8,L"BuildPatchServicesModule: Shutting Down");
  uVar1 = FUN_144a82cde();
  FUN_146816104(uVar1,7,L"BuildPatchServicesModule: Removing Ticker");
  FUN_1401cb356();
  local_20 = *(undefined8 *)(param_1 + 0xa0);
  local_18 = *(longlong *)(param_1 + 0xa8);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_20);
  uVar1 = FUN_144a82cde();
  FUN_146816104(uVar1,7,L"BuildPatchServicesModule: Finished shutting down");
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b425d0 FUN_146b425d0 body=1234 status=ok
// SIG undefined FUN_146b425d0(void)

longlong * FUN_146b425d0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined **ppuVar8;
  code *pcVar9;
  longlong *plVar10;
  undefined8 **ppuVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  undefined1 auStack_188 [44];
  undefined4 local_15c;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined8 **local_118;
  undefined ***local_108;
  undefined **local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong *local_e0;
  code *local_d8;
  undefined8 **local_c8;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  longlong *local_90;
  undefined8 **local_88;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_150 = *param_3;
  local_148 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_140 = param_3[2];
  param_3[2] = 0;
  local_138 = *(undefined4 *)(param_3 + 3);
  local_134 = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  local_130 = param_3[4];
  param_3[4] = 0;
  local_128 = *(undefined4 *)(param_3 + 5);
  local_124 = *(undefined4 *)((longlong)param_3 + 0x2c);
  param_3[5] = 0;
  local_120 = *(undefined2 *)(param_3 + 6);
  lVar6 = FUN_146b6fbde();
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  ppuVar8 = &PTR_FUN_149f2f360;
  *plVar7 = (longlong)&PTR_FUN_149f2f360;
  plVar7[2] = lVar6;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 &&
       (ppuVar8 = *(undefined ***)(lVar6 + 0x10), ppuVar8 != (undefined **)0x0)) &&
      (0 < *(int *)(ppuVar8 + 1))))) {
    local_15c = (undefined4)CONCAT71((int7)((ulonglong)ppuVar8 >> 8),1);
    if (plVar7 == (longlong *)0x0) goto LAB_146b426ae;
  }
  else {
    if (plVar7 == (longlong *)0x0) {
      *(longlong *)(lVar6 + 8) = lVar6;
      plVar10 = *(longlong **)(lVar6 + 0x10);
      ppuVar8 = (undefined **)CONCAT71((int7)((ulonglong)ppuVar8 >> 8),1);
      local_15c = SUB84(ppuVar8,0);
      if (plVar10 == (longlong *)0x0) goto LAB_146b426ae;
LAB_146b4286d:
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        ppuVar8 = (undefined **)(**(code **)(*plVar10 + 0x10))();
      }
      *(longlong **)(lVar6 + 0x10) = plVar7;
      local_15c = (undefined4)CONCAT71((int7)((ulonglong)ppuVar8 >> 8),1);
      if (plVar7 == (longlong *)0x0) goto LAB_146b426ae;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong *)(lVar6 + 8) = lVar6;
      if (*(longlong **)(lVar6 + 0x10) != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar10 = *(longlong **)(lVar6 + 0x10);
        if (plVar10 != (longlong *)0x0) goto LAB_146b4286d;
        *(longlong **)(lVar6 + 0x10) = plVar7;
      }
    }
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  LOCK();
  *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
  UNLOCK();
  local_15c = 0;
LAB_146b426ae:
  local_108 = (undefined ***)0x0;
  local_f8 = &PTR_FUN_149f2f3a0;
  local_118 = (undefined8 **)FUN_14293a2a6;
  local_158 = lVar6;
  local_f0 = param_1;
  local_e8 = lVar6;
  local_e0 = plVar7;
  pcVar9 = (code *)FUN_14001cc68(0x18,0x10);
  FUN_145d28d24(pcVar9);
  pcVar9[0x10] = (code)0x0;
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_149f2f980;
  plVar10[2] = (longlong)pcVar9;
  local_98 = pcVar9;
  local_90 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_88 = local_118;
  local_78 = (undefined8 *)0x0;
  if (local_118 != (undefined8 **)0x0) {
    pppuVar13 = local_108;
    if (local_108 == (undefined ***)0x0) {
      pppuVar13 = &local_f8;
    }
    (*(code *)**pppuVar13)(pppuVar13,&local_78);
  }
  local_d8 = (code *)0x0;
  ppuVar11 = (undefined8 **)FUN_14001cc68(0x60,0x10);
  local_c8 = ppuVar11;
  *ppuVar11 = &PTR_FUN_149f2f380;
  ppuVar11[2] = (undefined8 *)local_98;
  ppuVar11[3] = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  ppuVar11[4] = local_88;
  ppuVar11[6] = (undefined8 *)0x0;
  if (local_88 != (undefined8 **)0x0) {
    puVar14 = local_78;
    if (local_78 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)&local_68;
    }
    (**(code **)*puVar14)(puVar14,ppuVar11 + 6);
  }
  if (ppuVar11 != (undefined8 **)&DAT_fffffffffffffff0) {
    local_d8 = FUN_14293a14c;
  }
  pcVar4 = local_d8;
  FUN_14293a0f4(&local_98);
  cVar5 = FUN_144a61b4f();
  if (cVar5 == '\0') {
    local_88 = local_c8;
    local_c8 = (undefined8 **)0x0;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    if (pcVar4 != (code *)0x0) {
      local_d8 = (code *)0x0;
    }
    local_98 = pcVar4;
    FUN_1407461b0(1,&local_98);
  }
  else {
    ppuVar11 = local_c8;
    if (local_c8 == (undefined8 **)0x0) {
      ppuVar11 = &local_b8;
    }
    uVar12 = (*(code *)(*ppuVar11)[1])();
    (*pcVar4)(uVar12);
  }
  pcVar9[0x10] = (code)0x1;
  plVar3 = *(longlong **)(pcVar9 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_d8 != (code *)0x0) {
    ppuVar11 = &local_b8;
    if (local_c8 != (undefined8 **)0x0) {
      ppuVar11 = local_c8;
    }
    (*(code *)(*ppuVar11)[2])(ppuVar11);
  }
  if (plVar10 != (longlong *)0x0) {
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
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (local_118 != (undefined8 **)0x0) {
    pppuVar13 = &local_f8;
    if (local_108 != (undefined ***)0x0) {
      pppuVar13 = local_108;
    }
    (*(code *)(*pppuVar13)[2])(pppuVar13);
  }
  *param_2 = local_158;
  param_2[1] = (longlong)plVar7;
  if ((char)local_15c == '\0') {
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
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_146b42aa4(param_3);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b42aa4 FUN_146b42aa4 body=111 status=ok
// SIG undefined FUN_146b42aa4(void)

void FUN_146b42aa4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000146b42b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b42b14 FUN_146b42b14 body=254 status=ok
// SIG undefined FUN_146b42b14(void)

longlong * FUN_146b42b14(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_3 + 0x84) = 0;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x8f8,0x10);
  local_68 = param_1 + 0xb0;
  local_60 = param_4;
  FUN_146b5777c(plVar4,param_3,param_1 + 0x40,param_1 + 8);
  plVar1 = plVar4 + 2;
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146b57ac8(&local_50,plVar1);
  plVar3 = local_48;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
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
  FUN_146b335de(param_3);
  FUN_1449db362(param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b42c14 FUN_146b42c14 body=28 status=ok
// SIG undefined FUN_146b42c14(void)

undefined8 FUN_146b42c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_146b8de1e(param_2,param_3);
  return param_2;
}



// FUNCTION 146b42c30 FUN_146b42c30 body=145 status=ok
// SIG undefined FUN_146b42c30(void)

undefined8 * FUN_146b42c30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar1 = FUN_146b6ffee(&local_28);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f2f3e0;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b42cc2 FUN_146b42cc2 body=112 status=ok
// SIG undefined FUN_146b42cc2(void)

undefined8 * FUN_146b42cc2(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_146b61e38(param_3);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f2f400;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  if (param_3[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_2;
}



// FUNCTION 146b42d32 FUN_146b42d32 body=177 status=ok
// SIG undefined FUN_146b42d32(void)

undefined8 * FUN_146b42d32(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f2f9a0;
  plVar4[2] = (longlong)plVar3;
  cVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,param_3);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
  }
  else {
    *param_2 = plVar3;
    param_2[1] = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_2;
}



// FUNCTION 146b42de4 FUN_146b42de4 body=177 status=ok
// SIG undefined FUN_146b42de4(void)

undefined8 * FUN_146b42de4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f2f9a0;
  plVar4[2] = (longlong)plVar3;
  cVar2 = (**(code **)(*plVar3 + 0x160))(plVar3,param_3);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
  }
  else {
    *param_2 = plVar3;
    param_2[1] = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_2;
}



// FUNCTION 146b42e96 FUN_146b42e96 body=177 status=ok
// SIG undefined FUN_146b42e96(void)

undefined8 * FUN_146b42e96(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f2f9a0;
  plVar4[2] = (longlong)plVar3;
  cVar2 = (**(code **)(*plVar3 + 0x168))(plVar3,param_3);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
  }
  else {
    *param_2 = plVar3;
    param_2[1] = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_2;
}



// FUNCTION 146b42f48 FUN_146b42f48 body=139 status=ok
// SIG undefined FUN_146b42f48(void)

undefined4 FUN_146b42f48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar2 = (longlong *)*param_3;
  plVar3 = (longlong *)param_3[1];
  if (plVar3 == (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x170))(plVar2,param_2,0x12);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = (**(code **)(*plVar2 + 0x170))(plVar2,param_2,0x12);
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
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return uVar4;
}



// FUNCTION 146b42fd4 FUN_146b42fd4 body=63 status=ok
// SIG undefined FUN_146b42fd4(void)

undefined8 FUN_146b42fd4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_146b8e66c(param_1 + 8,1);
  (**(code **)(*plVar1 + 8))(plVar1,param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)*plVar1)(plVar1,1);
  }
  return param_2;
}



// FUNCTION 146b4301a FUN_146b4301a body=68 status=ok
// SIG undefined FUN_146b4301a(void)

void FUN_146b4301a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146b57170(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146b57cee(param_1,param_2);
  return;
}



// FUNCTION 146b43068 FUN_146b43068 body=55 status=ok
// SIG undefined FUN_146b43068(void)

undefined4 FUN_146b43068(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146b64248(param_2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return uVar1;
}



// FUNCTION 146b430a0 FUN_146b430a0 body=78 status=ok
// SIG undefined FUN_146b430a0(void)

undefined4 FUN_146b430a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14001cc68(0x58,0x10);
  FUN_146b468c8(plVar2,param_2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return uVar1;
}



// FUNCTION 146b430ee FUN_146b430ee body=55 status=ok
// SIG undefined FUN_146b430ee(void)

undefined4 FUN_146b430ee(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146b61e38(param_2);
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return uVar1;
}



// FUNCTION 146b43132 FUN_146b43132 body=55 status=ok
// SIG undefined FUN_146b43132(void)

undefined4 FUN_146b43132(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146b6e242(param_2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return uVar1;
}



// FUNCTION 146b4316a FUN_146b4316a body=42 status=ok
// SIG undefined FUN_146b4316a(void)

void FUN_146b4316a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_142934fcc(param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 146b43194 FUN_146b43194 body=55 status=ok
// SIG undefined FUN_146b43194(void)

undefined4 FUN_146b43194(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146b61aba(param_2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)*plVar2)(plVar2,1);
  }
  return uVar1;
}



// FUNCTION 146b431e0 FUN_146b431e0 body=197 status=ok
// SIG undefined FUN_146b431e0(void)

void FUN_146b431e0(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (longlong *)0x0;
  uStack_50._0_4_ = 1;
  uStack_50._4_4_ = 0;
  FUN_1447a1bd6(&local_58,0);
  *local_58 = 0;
  *local_58 = *param_2;
  *param_2 = 0;
  *(int *)(local_58 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)local_58 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  local_68 = (undefined4)local_58;
  uStack_64 = local_58._4_4_;
  uStack_60 = (undefined4)uStack_50;
  uStack_5c = uStack_50._4_4_;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0xa0))(param_1);
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b432a6 FUN_146b432a6 body=61 status=ok
// SIG undefined FUN_146b432a6(void)

void FUN_146b432a6(undefined8 param_1,longlong *param_2)

{
  FUN_1410e5bda(&DAT_14c991bd8);
  FUN_146b432e4();
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b432e4 FUN_146b432e4 body=277 status=ok
// SIG undefined FUN_146b432e4(void)

void FUN_146b432e4(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)DAT_14c991be0 != 0) {
    lVar3 = (longlong)DAT_14c991be0 << 4;
    lVar2 = DAT_14c991bd8;
    do {
      FUN_1448097c4(lVar2,&DAT_149e01f64,&DAT_149e065c6,1);
      cVar1 = FUN_144a791f8(lVar2,&DAT_149e35204,2,1);
      FUN_1448097c4(lVar2,&DAT_149e3579e,L":////",1);
      FUN_1448097c4(lVar2,&DAT_149e35204,&DAT_149e065c6,1);
      if (cVar1 != '\0') {
        FUN_140056680(local_58,&DAT_149e065c6);
        FUN_140e63652(lVar2,0,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b43406 FUN_146b43406 body=133 status=ok
// SIG undefined FUN_146b43406(void)

void FUN_146b43406(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  DAT_14c991bb8 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = DAT_14c991bc0;
  if (DAT_14c991bc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c991bc0 + 1;
    DAT_14c991bc0 = (longlong *)lVar3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    lVar3 = (longlong)DAT_14c991bc0;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar3 = (longlong)DAT_14c991bc0;
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar3 = (longlong)DAT_14c991bc0;
      }
    }
  }
  DAT_14c991bc0 = (longlong *)lVar3;
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
                    /* WARNING: Could not recover jumptable at 0x000146b4347f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b4348c FUN_146b4348c body=230 status=ok
// SIG undefined FUN_146b4348c(void)

void FUN_146b4348c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e4328c(param_3);
  FUN_1448b5552(param_3);
  local_50 = *param_2;
  local_48 = (longlong *)param_2[1];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  local_38 = &local_50;
  local_40 = param_3;
  FUN_146b57e4a(param_1 + 0x40,local_2c);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b43574 FUN_146b43574 body=71 status=ok
// SIG undefined FUN_146b43574(void)

bool FUN_146b43574(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_140e4328c(param_2);
  FUN_1448b5552(param_2);
  iVar1 = FUN_146b57f8c(param_1 + 0x40,param_2);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return iVar1 == 1;
}



// FUNCTION 146b435bc FUN_146b435bc body=271 status=ok
// SIG undefined FUN_146b435bc(void)

void FUN_146b435bc(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_144a61b4f();
  plVar1 = (longlong *)(param_1 + 0x20);
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar5 = 0;
    iVar4 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x20) + lVar5) + 0xb8))();
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x28));
    if (param_2 == '\x01' && 0 < *(int *)(param_1 + 0x28)) {
      do {
        FUN_14000f986(0x3c888889);
        if (*(int *)(param_1 + 0x28) < 1) break;
        uVar3 = 0;
        do {
          iVar4 = (int)uVar3;
          cVar2 = FUN_146b33c70(*(undefined8 *)(*plVar1 + uVar3 * 0x10));
          if (cVar2 == '\0') {
            FUN_146b57bdc(plVar1,uVar3);
            FUN_146b57c52(plVar1);
            iVar4 = iVar4 + -1;
          }
          uVar3 = (ulonglong)(iVar4 + 1U);
        } while ((int)(iVar4 + 1U) < *(int *)(param_1 + 0x28));
      } while (0 < *(int *)(param_1 + 0x28));
    }
  }
  FUN_146b571b9(*(undefined8 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_146b58180(plVar1);
  }
  FUN_146b57170(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_146b57cee(param_1 + 0x30,0);
    return;
  }
  return;
}



// FUNCTION 146b436cc FUN_146b436cc body=446 status=ok
// SIG undefined FUN_146b436cc(void)

undefined8 *
FUN_146b436cc(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong *param_4,
             longlong *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 4;
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[2] = uVar2;
    goto LAB_146b43744;
  }
  LOCK();
  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  UNLOCK();
  plVar5 = (longlong *)param_1[3];
  param_1[2] = uVar2;
  if (plVar3 == plVar5) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146b43744;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146b43744;
    lVar4 = *plVar3;
    plVar5 = plVar3;
  }
  else {
    param_1[3] = plVar3;
    if (plVar5 == (longlong *)0x0) goto LAB_146b43744;
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146b43744;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146b43744;
    lVar4 = *plVar5;
  }
  (**(code **)(lVar4 + 0x10))(plVar5);
LAB_146b43744:
  FUN_146b3e088(param_1 + 4,param_3);
  if (param_1 + 0xe != param_4) {
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    param_1[0xe] = *param_4;
    *param_4 = 0;
    *(int *)(param_1 + 0xf) = (int)param_4[1];
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_4 + 0xc);
    param_4[1] = 0;
  }
  if (param_1 + 0x10 != param_5) {
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    param_1[0x10] = *param_5;
    *param_5 = 0;
    *(int *)(param_1 + 0x11) = (int)param_5[1];
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_5 + 0xc);
    param_5[1] = 0;
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_3);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146b4388a FUN_146b4388a body=164 status=ok
// SIG undefined FUN_146b4388a(void)

void FUN_146b4388a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000146b43922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b4392e FUN_146b4392e body=297 status=ok
// SIG undefined FUN_146b4392e(void)

undefined8 * FUN_146b4392e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  
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
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_1410b2022(param_1 + 4,param_2 + 4);
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar3 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  pvVar3 = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 146b43a58 FUN_146b43a58 body=247 status=ok
// SIG undefined FUN_146b43a58(void)

undefined8 FUN_146b43a58(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 < 3) {
    FUN_146b43b52(param_1,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1407c869a(param_3,&local_48,0);
  local_50 = local_48;
  if ((int)uStack_40 == 0) {
    local_50 = &DAT_149dfb77a;
  }
  uVar1 = *param_4;
  uVar2 = (*(code *)PTR_FUN_14c75b148)(param_3,0x10,0);
  uVar3 = FUN_146b5aa67(param_2);
  local_58 = uVar1;
  FUN_140002266(param_1,L"%s/%02d/%016llX_%s.chunk",uVar3,uVar2 % 100);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b43b52 FUN_146b43b52 body=176 status=ok
// SIG undefined FUN_146b43b52(void)

undefined8 FUN_146b43b52(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1407c869a(param_2,&local_38,0);
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = FUN_1448eb174(param_2,0x10,0);
  FUN_140002266(param_1,L"Chunks/%02d/%s.chunk",uVar1 % 100,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b43c04 FUN_146b43c04 body=282 status=ok
// SIG undefined FUN_146b43c04(void)

undefined8
FUN_146b43c04(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  undefined2 *local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  FUN_1407c869a(param_3,&local_68,0);
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_60 != 0) {
    puVar3 = local_68;
  }
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  FUN_1407c8a86(param_4,0x14,&local_78);
  local_88 = &DAT_149dfb77a;
  if ((int)uStack_70 != 0) {
    local_88 = local_78;
  }
  uVar1 = (*(code *)PTR_FUN_14c75b148)(param_3,0x10,0);
  uVar2 = FUN_146b5aa99(param_2);
  local_80 = puVar3;
  FUN_140002266(param_1,L"%s/%02d/%s_%s.file",uVar2,uVar1 % 100);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b43d20 FUN_146b43d20 body=214 status=ok
// SIG undefined FUN_146b43d20(void)

undefined8
FUN_146b43d20(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1407c869a(param_3,&local_48,0);
  local_50 = local_48;
  if ((int)uStack_40 == 0) {
    local_50 = &DAT_149dfb77a;
  }
  uVar1 = *param_4;
  uVar2 = (*(code *)PTR_FUN_14c75b148)(param_3,0x10,0);
  uVar3 = FUN_146b5aa99(param_2);
  local_58 = uVar1;
  FUN_140002266(param_1,L"%s/%02d/%016llX_%s.file",uVar3,uVar2 % 100);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b43df8 FUN_146b43df8 body=176 status=ok
// SIG undefined FUN_146b43df8(void)

undefined8 FUN_146b43df8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1407c869a(param_2,&local_38,0);
  puVar2 = local_38;
  if ((int)uStack_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = FUN_1448eb174(param_2,0x10,0);
  FUN_140002266(param_1,L"Files/%02d/%s.file",uVar1 % 100,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b43eaa FUN_146b43eaa body=67 status=ok
// SIG undefined FUN_146b43eaa(void)

undefined8 FUN_146b43eaa(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 1) {
    FUN_146b43df8(param_1,param_3);
  }
  else if (param_2 == 0) {
    FUN_146b43b52(param_1,param_3);
  }
  else {
    FUN_140056680(param_1,&DAT_149dfb77a);
  }
  return param_1;
}



// FUNCTION 146b43eee FUN_146b43eee body=342 status=ok
// SIG undefined FUN_146b43eee(void)

undefined8 FUN_146b43eee(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_2 + 0x200))(param_2);
  iVar3 = (**(code **)(*param_2 + 0x180))(param_2);
  if (iVar3 < 3) {
    FUN_146b43eaa(param_1,uVar1,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  cVar2 = (**(code **)(*param_2 + 0x200))(param_2);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x208))(param_2,param_3,&local_48);
    uVar4 = (**(code **)(*param_2 + 0x180))(param_2);
    FUN_146b43a58(param_1,uVar4,param_3,&local_48);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x180))(param_2);
    if (iVar3 < 10) {
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      (**(code **)(*param_2 + 0x128))(param_2,param_3,&local_48);
      uVar4 = (**(code **)(*param_2 + 0x180))(param_2);
      FUN_146b43c04(param_1,uVar4,param_3,&local_48);
    }
    else {
      (**(code **)(*param_2 + 0x220))(param_2,param_3,&local_48);
      uVar4 = (**(code **)(*param_2 + 0x180))(param_2);
      FUN_146b43d20(param_1,uVar4,param_3,&local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b44046 FUN_146b44046 body=310 status=ok
// SIG undefined FUN_146b44046(void)

undefined4 FUN_146b44046(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58 [2];
  void *local_48;
  ulonglong uStack_40;
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c50e86(&local_38,param_1,1);
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_60 = 0xffffffff;
  local_68 = 0;
  iVar1 = FUN_1447ee042(&local_38,&DAT_149e01f60,1,1);
  _Src = local_38;
  if (iVar1 == -1) {
    uStack_40 = CONCAT44(uStack_40._4_4_,local_30);
    if ((longlong)(int)local_30 != 0) {
      FUN_1446dd670(&local_48,local_30,0);
      memcpy(local_48,_Src,(longlong)(int)local_30 * 2);
      goto LAB_146b440e2;
    }
    uStack_40 = (ulonglong)local_30;
  }
  else {
    FUN_140056680(local_58,&DAT_149e01f60);
    FUN_1407cdba6(&local_38,local_58,0,&local_48);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
LAB_146b440e2:
    if ((int)uStack_40 == 0x21) {
      uVar2 = FUN_140b10a34(&local_48,param_2);
      goto LAB_146b4413c;
    }
  }
  uVar2 = 0;
LAB_146b4413c:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4417e FUN_146b4417e body=171 status=ok
// SIG undefined FUN_146b4417e(void)

undefined8 FUN_146b4417e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1468028f2(param_1,&local_28,0x10,0);
  FUN_1448097c4(param_1,&DAT_149e06124,&DAT_149e1419a,0);
  FUN_1448097c4(param_1,&DAT_149e065c6,&DAT_149e01f60,0);
  FUN_1448097c4(param_1,&DAT_149e06162,&DAT_149dfb77a,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4422a FUN_146b4422a body=164 status=ok
// SIG undefined FUN_146b4422a(void)

undefined8 FUN_146b4422a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x150))(param_2);
  iVar1 = *(int *)(puVar2 + 1);
  FUN_140056680(&local_38,L"Deltas");
  FUN_1412cfe60(param_1,&local_38,(uint)(local_30 == 0) + iVar1 + (uint)(iVar1 == 0));
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    iVar1 = 0;
  }
  FUN_1401aebe8(param_1,*puVar2,iVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b442d0 FUN_146b442d0 body=1003 status=ok
// SIG undefined FUN_146b442d0(void)

ulonglong FUN_146b442d0(longlong *param_1,undefined8 *param_2,undefined1 (*param_3) [16],
                       undefined1 (*param_4) [16],longlong *param_5,longlong *param_6,
                       longlong *param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  undefined2 *puVar9;
  double dVar10;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined1 (*local_140) [16];
  undefined1 (*local_138) [16];
  longlong *local_130;
  undefined1 local_128 [16];
  int local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined1 local_a4 [16];
  int local_94;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(param_2 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  (**(code **)(*param_1 + 0x48))(param_1,&local_130,puVar9,0);
  if (((int)param_5[1] != 0) && ((longlong *)*param_5 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_5 + 0x60))();
  }
  if (local_130 == (longlong *)0x0) {
    uVar4 = FUN_144a82cde();
    if (*(int *)(param_2 + 1) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
    }
    FUN_140047918(uVar4,L"BuildDataGenerator: ERROR VerifyFile cannot open %s",puVar9);
    uVar6 = 0;
  }
  else {
    local_108 = 0xefcdab8967452301;
    uStack_100 = 0x1032547698badcfe;
    local_f8 = 0xc3d2e1f0;
    local_f0 = 0;
    local_128 = ZEXT816(0);
    local_118 = 0;
    local_148 = param_2;
    local_140 = param_4;
    local_138 = param_3;
    lVar2 = (**(code **)(*local_130 + 0x30))();
    lVar3 = FUN_144a7d36f(0x400000);
    cVar1 = (**(code **)(*local_130 + 0x38))();
    if (cVar1 == '\0') {
      do {
        if ((((int)param_7[1] != 0) && ((longlong *)*param_7 != (longlong *)0x0)) &&
           (cVar1 = (**(code **)(*(longlong *)*param_7 + 0x30))(), cVar1 != '\0')) {
          if ((int)param_7[1] == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)*param_7;
          }
          cVar1 = (**(code **)(*plVar7 + 0x58))();
          if (cVar1 != '\0') break;
        }
        while ((((int)param_6[1] != 0 && ((longlong *)*param_6 != (longlong *)0x0)) &&
               (cVar1 = (**(code **)(*(longlong *)*param_6 + 0x30))(), cVar1 != '\0'))) {
          if ((int)param_6[1] == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)*param_6;
          }
          cVar1 = (**(code **)(*plVar7 + 0x58))();
          if (cVar1 == '\0') break;
          if ((((int)param_7[1] != 0) && ((longlong *)*param_7 != (longlong *)0x0)) &&
             (cVar1 = (**(code **)(*(longlong *)*param_7 + 0x30))(), cVar1 != '\0')) {
            if ((int)param_7[1] == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = (longlong *)*param_7;
            }
            cVar1 = (**(code **)(*plVar7 + 0x58))();
            if (cVar1 != '\0') break;
          }
          FUN_14000f986(0x3dcccccd);
        }
        lVar5 = (**(code **)(*local_130 + 0x28))();
        unaff_RBP = lVar2 - lVar5;
        uVar6 = 0x400000;
        if ((longlong)unaff_RBP < 0x400000) {
          uVar6 = unaff_RBP;
        }
        uVar6 = uVar6 & 0xffffffff;
        (**(code **)(*local_130 + 0x170))(local_130,lVar3,uVar6);
        FUN_140c54e34(&local_108,lVar3,uVar6);
        if (((int)param_5[1] != 0) && (plVar7 = (longlong *)*param_5, plVar7 != (longlong *)0x0)) {
          unaff_RBP = unaff_RBP - uVar6;
          dVar10 = 1.0 - (double)(longlong)unaff_RBP / (double)lVar2;
          (**(code **)(*plVar7 + 0x60))
                    (plVar7,CONCAT44((int)((ulonglong)dVar10 >> 0x20),(float)dVar10));
        }
        cVar1 = (**(code **)(*local_130 + 0x38))();
      } while (cVar1 == '\0');
    }
    if (lVar3 != 0) {
      thunk_FUN_1400020a8(lVar3);
    }
    FUN_140c54d7a(&local_108);
    local_128 = local_a4;
    local_118 = local_94;
    uVar8 = (undefined7)(unaff_RBP >> 8);
    if (*local_138 == local_a4 && *(int *)local_138[1] == local_94) {
      uVar6 = CONCAT71(uVar8,1);
    }
    else if (*local_140 == local_a4 && *(int *)local_140[1] == local_94) {
      uVar6 = CONCAT71(uVar8,2);
    }
    else {
      uVar4 = FUN_144a82cde();
      if (*(int *)(local_148 + 1) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)*local_148;
      }
      FUN_140047918(uVar4,L"BuildDataGenerator: Verify failed on %s",puVar9);
      uVar6 = 0;
    }
    (**(code **)(*local_130 + 0x1f8))();
  }
  if (((int)param_5[1] != 0) && (plVar7 = (longlong *)*param_5, plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x60))(plVar7,0x3f800000);
  }
  if (local_130 != (longlong *)0x0) {
    (**(code **)*local_130)(local_130,1);
  }
  FUN_1449db362(param_5);
  FUN_1449db362(param_6);
  FUN_1449db362(param_7);
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 146b446bc FUN_146b446bc body=318 status=ok
// SIG undefined FUN_146b446bc(void)

undefined8 * FUN_146b446bc(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991d60) {
    FUN_144b3d300(&DAT_14c991d60);
    if (DAT_14c991d60 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c991d38);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c991d38,4000);
      atexit((_func_5014 *)&LAB_142937425);
      _Init_thread_footer(&DAT_14c991d60);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c991d38);
  plVar3 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f2f9a0;
  plVar4[2] = (longlong)plVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c991d38);
  cVar2 = (**(code **)(*plVar3 + 0x158))(plVar3,param_2);
  if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  else {
    *param_1 = plVar3;
    param_1[1] = plVar4;
  }
  return param_1;
}



// FUNCTION 146b447fa FUN_146b447fa body=944 status=ok
// SIG undefined FUN_146b447fa(void)

longlong * FUN_146b447fa(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  uint *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
    lVar10 = (**(code **)(*param_1 + 0x30))(param_1);
    if (((*(byte *)(param_1 + 5) & 4) != 0) || (0x17 < lVar10 - lVar9)) {
      local_4c = -0x4e01c55d;
      local_50 = *(int *)(param_2 + 3);
      *(int *)((longlong)param_2 + 4) = local_50 * 0x1c + 0x18;
      puVar3 = (ulonglong *)param_1[1];
      piVar1 = (int *)*puVar3 + 1;
      if ((int *)puVar3[1] < piVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_4c);
        }
      }
      else {
        local_4c = *(int *)*puVar3;
        *puVar3 = (ulonglong)piVar1;
      }
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
        }
        else {
          thunk_FUN_14572512c(param_1,param_2);
        }
      }
      else {
        *(undefined4 *)param_2 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      puVar14 = (uint *)((longlong)param_2 + 4);
      puVar5 = *(uint **)param_1[1];
      if ((uint *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar14,4);
        }
        else {
          thunk_FUN_14572512c(param_1,puVar14);
        }
      }
      else {
        *puVar14 = *puVar5;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      puVar6 = *(undefined8 **)param_1[1];
      if ((undefined8 *)((longlong *)param_1[1])[1] < puVar6 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
        }
        else {
          thunk_FUN_146821949(param_1);
        }
      }
      else {
        param_2[1] = *puVar6;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
      }
      puVar3 = (ulonglong *)param_1[1];
      piVar1 = (int *)*puVar3 + 1;
      if ((int *)puVar3[1] < piVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_50);
        }
      }
      else {
        local_50 = *(int *)*puVar3;
        *puVar3 = (ulonglong)piVar1;
      }
      if ((local_4c == -0x4e01c55d) && ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0)) {
        FUN_146b474d6(param_2 + 2,local_50);
        if (0 < local_50) {
          lVar10 = 0x18;
          lVar15 = 0;
          local_58 = puVar14;
          do {
            lVar7 = param_2[2];
            plVar11 = (longlong *)FUN_1402ac1b3(param_1,lVar7 + lVar10 + -0x18);
            puVar12 = (undefined8 *)(lVar7 + lVar10 + -8);
            puVar6 = *(undefined8 **)plVar11[1];
            if ((undefined8 *)((longlong *)plVar11[1])[1] < puVar6 + 1) {
              if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar11 + 0x170))(plVar11,puVar12,8);
              }
              else {
                thunk_FUN_146821949(plVar11);
              }
            }
            else {
              *puVar12 = *puVar6;
              *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 8;
            }
            puVar13 = (undefined4 *)(lVar7 + lVar10);
            puVar4 = *(undefined4 **)plVar11[1];
            if ((undefined4 *)((undefined8 *)plVar11[1])[1] < puVar4 + 1) {
              if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar11 + 0x170))(plVar11,puVar13,4);
              }
              else {
                thunk_FUN_14572512c(plVar11,puVar13);
              }
            }
            else {
              *puVar13 = *puVar4;
              *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
            }
            lVar15 = lVar15 + 1;
            lVar10 = lVar10 + 0x20;
            puVar14 = local_58;
          } while (lVar15 < local_50);
        }
        iVar8 = local_50 * 0x1c;
        lVar10 = (**(code **)(*param_1 + 0x28))(param_1);
        if (lVar10 - lVar9 == (ulonglong)(iVar8 + 0x18)) {
          uVar2 = *puVar14;
          lVar10 = (**(code **)(*param_1 + 0x28))(param_1);
          if (lVar10 != lVar9 + (ulonglong)uVar2) {
            (**(code **)(*param_1 + 0x1a0))(param_1,lVar9 + (ulonglong)uVar2);
          }
          goto LAB_146b44866;
        }
      }
    }
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      *(undefined4 *)(param_2 + 3) = 0;
      *param_2 = 0;
      param_2[1] = 0;
      if (*(int *)((longlong)param_2 + 0x1c) != 0) {
        FUN_146b5a916(param_2 + 2);
      }
    }
  }
LAB_146b44866:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b44bac FUN_146b44bac body=73 status=ok
// SIG undefined FUN_146b44bac(void)

void FUN_146b44bac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000146b44bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b44bf5 FUN_146b44bf5 body=79 status=ok
// SIG undefined FUN_146b44bf5(void)

ulonglong FUN_146b44bf5(LPCWSTR param_1,uint *param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  uint uVar4;
  
  *param_2 = 0;
  DVar1 = GetFileAttributesW(param_1);
  DVar2 = GetLastError();
  if (DVar1 == 0xffffffff) {
    uVar3 = (ulonglong)CONCAT31((int3)((DVar2 & 0xfffffffe) >> 8),(DVar2 & 0xfffffffe) == 2);
  }
  else {
    uVar4 = (DVar1 & 1) * 2 | *param_2;
    *param_2 = uVar4 | 1;
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,DVar2) >> 8),1);
    if ((DVar1 >> 0xb & 1) != 0) {
      *param_2 = uVar4 | 5;
    }
  }
  return uVar3;
}



// FUNCTION 146b44c68 FUN_146b44c68 body=36 status=ok
// SIG undefined FUN_146b44c68(void)

bool FUN_146b44c68(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
  *param_3 = lVar1;
  return -1 < lVar1;
}



// FUNCTION 146b44c98 FUN_146b44c98 body=180 status=ok
// SIG undefined FUN_146b44c98(void)

bool FUN_146b44c98(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991d70) {
    FUN_144b3d300(&DAT_14c991d70);
    if (DAT_14c991d70 == -1) {
      DAT_14c991d68 = 0;
      _Init_thread_footer(&DAT_14c991d70);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))
            (*(longlong **)(param_1 + 0x10),&local_28,param_2);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 != DAT_14c991d68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b44d68 FUN_146b44d68 body=36 status=ok
// SIG undefined FUN_146b44d68(void)

undefined8 *
FUN_146b44d68(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),param_3,param_4);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146b44d8c FUN_146b44d8c body=36 status=ok
// SIG undefined FUN_146b44d8c(void)

undefined8 *
FUN_146b44d8c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                    (*(longlong **)(param_1 + 8),param_3,param_4);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146b44dbe FUN_146b44dbe body=110 status=ok
// SIG undefined FUN_146b44dbe(void)

void FUN_146b44dbe(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14054d1d4();
  local_28 = *param_3;
  local_20 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_20 = 0;
  }
  local_38 = 0;
  FUN_1415d54ec(&local_28,param_2,0,uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b44e2e FUN_146b44e2e body=31 status=ok
// SIG undefined FUN_146b44e2e(void)

void FUN_146b44e2e(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),param_2,0,1,1);
  return;
}



// FUNCTION 146b44e4e FUN_146b44e4e body=38 status=ok
// SIG undefined FUN_146b44e4e(void)

void FUN_146b44e4e(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  return;
}



// FUNCTION 146b44e74 FUN_146b44e74 body=59 status=ok
// SIG undefined FUN_146b44e74(void)

bool FUN_146b44e74(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  return iVar1 == 0;
}



// FUNCTION 146b44ee2 FUN_146b44ee2 body=134 status=ok
// SIG undefined FUN_146b44ee2(void)

void FUN_146b44ee2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146b44f6a(local_78,*(undefined8 *)(param_1 + 0x10),param_4,param_5);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x130))
            (*(longlong **)(param_1 + 0x10),param_3,local_78);
  FUN_146b45072(local_78,param_2);
  FUN_146b451c2(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b44f6a FUN_146b44f6a body=262 status=ok
// SIG undefined FUN_146b44f6a(void)

undefined8 *
FUN_146b44f6a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_149f2ed10;
  param_1[2] = param_2;
  puVar1 = param_1 + 3;
  FUN_140056680(puVar1,param_3);
  *(undefined4 *)(param_1 + 5) = param_4;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[7] = puVar3;
  param_1[6] = puVar3;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[9] = puVar3;
  param_1[8] = puVar3;
  if (*(int *)(param_1 + 4) - 2U < 0x7fffffff) {
    cVar2 = FUN_144a791f8(puVar1,&DAT_149e0635c,1,1);
    if (cVar2 == '\0') {
      FUN_140056680(local_40,&DAT_149e0635c);
      FUN_140e63652(puVar1,0,local_40);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b45072 FUN_146b45072 body=334 status=ok
// SIG undefined FUN_146b45072(void)

void FUN_146b45072(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  cVar7 = FUN_146b4ca22(param_1 + 0x40);
  if (cVar7 != '\0') {
    do {
      lVar6 = local_58;
      if (local_58 != 0) {
        do {
          do {
            lVar8 = lVar6;
            lVar6 = 0;
          } while (lVar8 == 0);
          plVar5 = *(longlong **)(lVar8 + 0x70);
          cVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
          lVar6 = local_58;
        } while (cVar7 == '\0');
      }
      cVar7 = FUN_146b4ca22(param_1 + 0x40,&local_58);
    } while (cVar7 != '\0');
  }
  do {
    iVar4 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
      FUN_1447a1bd6(param_2,iVar4);
    }
    lVar6 = *param_2;
    puVar3 = (undefined8 *)(lVar6 + (longlong)iVar4 * 0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    cVar7 = FUN_146b4cb00(param_1 + 0x30,lVar6 + (longlong)iVar4 * 0x10);
  } while (cVar7 != '\0');
  lVar8 = (longlong)(int)param_2[1] * 0x10;
  lVar6 = *(longlong *)(*param_2 + -0x10 + lVar8);
  puVar3 = (undefined8 *)(*param_2 + -0x10 + lVar8);
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_14101da94(param_2,(int)param_2[1] + -1);
  if (lVar6 != 0) {
    FUN_1400020a8(lVar6);
  }
  FUN_140e836da(*param_2,(int)param_2[1]);
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b451c2 FUN_146b451c2 body=62 status=ok
// SIG undefined FUN_146b451c2(void)

void FUN_146b451c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f2ed10;
  FUN_146b4cb96(param_1 + 8);
  FUN_146b4cbf0(param_1 + 6);
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b45212 FUN_146b45212 body=27 status=ok
// SIG undefined FUN_146b45212(void)

undefined8 FUN_146b45212(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  return param_2;
}



// FUNCTION 146b4522e FUN_146b4522e body=234 status=ok
// SIG undefined FUN_146b4522e(void)

void FUN_146b4522e(ulonglong *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  
  uVar6 = (ulonglong)(int)((longlong *)param_1[2])[1];
  if ((longlong)uVar6 < 1) {
    bVar2 = false;
    dVar11 = 0.0;
    dVar9 = 0.0;
  }
  else {
    plVar7 = (longlong *)(*(longlong *)param_1[2] + uVar6 * 0x18 + -8);
    uVar8 = 0xffffffffffffffff;
    uVar3 = 0;
    bVar2 = false;
    uVar5 = 0;
    do {
      uVar1 = plVar7[-2];
      if (uVar1 < uVar8) {
        uVar4 = plVar7[-1];
        if (uVar8 < (ulonglong)plVar7[-1]) {
          uVar4 = uVar8;
        }
        uVar3 = (uVar3 - uVar1) + uVar4;
        uVar8 = uVar1;
      }
      uVar5 = uVar5 + *plVar7;
      if ((*param_1 <= uVar3) && (param_1[1] <= uVar5)) {
        bVar2 = true;
      }
      if (uVar6 < 2) break;
      plVar7 = plVar7 + -3;
      uVar6 = uVar6 - 1;
    } while (!bVar2);
    auVar10._8_4_ = (int)(uVar5 >> 0x20);
    auVar10._0_8_ = uVar5;
    auVar10._12_4_ = 0x45300000;
    dVar9 = ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
            (auVar10._8_8_ - 1.9342813113834067e+25);
    auVar12._8_4_ = (int)(uVar3 >> 0x20);
    auVar12._0_8_ = uVar3;
    auVar12._12_4_ = 0x45300000;
    dVar11 = ((double)CONCAT44(0x43300000,(int)uVar3) - 4503599627370496.0) +
             (auVar12._8_8_ - 1.9342813113834067e+25);
    if (bVar2 != false) goto LAB_146b452f3;
  }
  if ((char)param_1[3] != '\0') {
    return;
  }
LAB_146b452f3:
  dVar9 = dVar9 / (dVar11 * DAT_14c83f418);
  if (((double)param_1[4] <= dVar9 && dVar9 != (double)param_1[4]) || ((char)param_1[3] == '\0')) {
    param_1[4] = (ulonglong)dVar9;
    *(bool *)(param_1 + 3) = bVar2;
  }
  return;
}



// FUNCTION 146b45318 FUN_146b45318 body=34 status=ok
// SIG undefined FUN_146b45318(void)

double FUN_146b45318(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = (int)((ulonglong)param_1 >> 0x20);
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = 0x45300000;
  return (((double)CONCAT44(0x43300000,(int)param_1) - 4503599627370496.0) +
         (auVar1._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
}



// FUNCTION 146b4533a FUN_146b4533a body=258 status=ok
// SIG undefined FUN_146b4533a(void)

undefined8 * FUN_146b4533a(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  double dVar6;
  
  *param_1 = &PTR_LAB_149f2ed50;
  uVar2 = FUN_1401cb356();
  FUN_145aa41ca(param_1 + 1,L"FSpeedRecorder",0,uVar2);
  *param_1 = &PTR_FUN_149f2e8e0;
  param_1[1] = &PTR_FUN_149f2e900;
  dVar6 = 5.0 / DAT_14c83f418;
  uVar5 = (longlong)(dVar6 - 9.223372036854776e+18) & (longlong)dVar6 >> 0x3f | (longlong)dVar6;
  uVar3 = 0xffffffffffffffff;
  if (dVar6 < 1.8446744073709552e+19) {
    uVar3 = uVar5;
  }
  param_1[4] = uVar3;
  iVar1 = FUN_146b4543c(10,CONCAT71((int7)(uVar5 >> 8),0x33),0x31);
  param_1[5] = (longlong)iVar1;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  param_1[7] = puVar4;
  param_1[6] = puVar4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = param_1[4];
  param_1[0xd] = (longlong)iVar1;
  param_1[0xe] = param_1 + 8;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 146b4543c FUN_146b4543c body=749 status=ok
// SIG undefined FUN_146b4543c(void)

int FUN_146b4543c(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  
  cVar1 = FUN_14593973a(param_2,param_3);
  if (cVar1 == '\0') {
    return param_1;
  }
  if ((char)param_3 == 'K' || (char)param_2 == 'K') {
    return param_1;
  }
  uVar2 = FUN_145939720(param_2);
  switch(uVar2) {
  case 0:
    dVar3 = (double)FUN_14593975d(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_14593975d(param_3);
    break;
  case 1:
    dVar3 = (double)FUN_1467f69e1(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f69e1(param_3);
    break;
  case 2:
    dVar3 = (double)FUN_1467f69f6(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f69f6(param_3);
    break;
  case 3:
    dVar3 = (double)FUN_1467f6a17(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6a17(param_3);
    break;
  case 4:
    dVar3 = (double)FUN_1467f6a2c(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6a2c(param_3);
    break;
  case 5:
    dVar3 = (double)param_1;
    if ((char)param_2 == '\x15') {
      dVar3 = ((dVar3 + 459.6700134277344) * 5.0) / 9.0;
    }
    else if ((param_2 & 0xff) == 0x14) {
      dVar3 = dVar3 + 273.1499938964844;
    }
    if ((char)param_3 == '\x15') {
      dVar3 = (dVar3 * 9.0) / 5.0 + -459.6700134277344;
    }
    else if ((param_3 & 0xff) == 0x14) {
      dVar3 = dVar3 + -273.1499938964844;
    }
    return (int)dVar3;
  case 6:
    dVar3 = (double)FUN_1467f6a41(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6a41(param_3);
    break;
  case 7:
    dVar3 = (double)FUN_1467f6a62(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6a62(param_3);
    break;
  case 8:
    dVar3 = (double)FUN_1467f6a83(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6a83(param_3);
    break;
  case 9:
    dVar3 = (double)FUN_1467f6aa4(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6aa4(param_3);
    break;
  default:
    goto switchD_146b4549d_caseD_a;
  case 0xb:
    dVar3 = (double)FUN_1467f6ab9(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6ab9(param_3);
    break;
  case 0xc:
    dVar3 = (double)FUN_1467f6ace(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6ace(param_3);
    break;
  case 0xd:
    dVar3 = (double)FUN_1467f6aef(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6aef(param_3);
    break;
  case 0x12:
    dVar3 = (double)FUN_1467f6b10(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6b10(param_3);
    break;
  case 0x14:
    dVar3 = (double)FUN_1467f6b80(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6b80(param_3);
    break;
  case 0x16:
    dVar3 = (double)FUN_1467f6b95(param_2);
    dVar3 = dVar3 * (double)param_1;
    dVar4 = (double)FUN_1467f6b95(param_3);
  }
  param_1 = (int)((1.0 / dVar4) * dVar3);
switchD_146b4549d_caseD_a:
  return param_1;
}



// FUNCTION 146b4572a FUN_146b4572a body=99 status=ok
// SIG undefined FUN_146b4572a(void)

void FUN_146b4572a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f2e8e0;
  param_1[1] = &PTR_FUN_149f2e900;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  while ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    param_1[7] = *(undefined8 *)param_1[7];
    FUN_1400020a8();
  }
  FUN_145bfbed6(param_1 + 1);
  return;
}



// FUNCTION 146b4578e FUN_146b4578e body=71 status=ok
// SIG undefined FUN_146b4578e(void)

undefined8 FUN_146b4578e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  uVar3 = param_2[1];
  puVar2[1] = *param_2;
  puVar2[2] = uVar3;
  puVar2[3] = param_2[2];
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    UNLOCK();
    LOCK();
    uVar3 = *puVar1;
    *puVar1 = puVar2;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 146b457d6 FUN_146b457d6 body=169 status=ok
// SIG undefined FUN_146b457d6(void)

double FUN_146b457d6(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  FUN_146b45880();
  dVar8 = 0.0;
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x50);
    lVar6 = 0;
    lVar3 = 0;
    lVar4 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(ulonglong *)(lVar1 + 8 + lVar6);
      if (uVar7 < uVar2) {
        uVar5 = *(ulonglong *)(lVar1 + lVar6);
        if (*(ulonglong *)(lVar1 + lVar6) < uVar7) {
          uVar5 = uVar7;
        }
        lVar3 = (lVar3 + uVar2) - uVar5;
        uVar7 = uVar2;
      }
      lVar4 = lVar4 + *(longlong *)(lVar1 + 0x10 + lVar6);
      lVar6 = lVar6 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x58) * 0x18 != lVar6);
    if (lVar3 != 0) {
      auVar9._8_4_ = (int)((ulonglong)lVar4 >> 0x20);
      auVar9._0_8_ = lVar4;
      auVar9._12_4_ = 0x45300000;
      auVar10._8_4_ = (int)((ulonglong)lVar3 >> 0x20);
      auVar10._0_8_ = lVar3;
      auVar10._12_4_ = 0x45300000;
      dVar8 = (((double)CONCAT44(0x43300000,(int)lVar4) - 4503599627370496.0) +
              (auVar9._8_8_ - 1.9342813113834067e+25)) /
              ((((double)CONCAT44(0x43300000,(int)lVar3) - 4503599627370496.0) +
               (auVar10._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418);
    }
  }
  return dVar8;
}



// FUNCTION 146b45880 FUN_146b45880 body=495 status=ok
// SIG undefined FUN_146b45880(void)

void FUN_146b45880(longlong param_1,float param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  LARGE_INTEGER LVar11;
  double dVar12;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_146b58e0a(plVar1);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    dVar12 = (double)param_2 / DAT_14c83f418;
    LVar11.QuadPart = 0xffffffffffffffff;
    if (dVar12 < 1.8446744073709552e+19) {
      LVar11.QuadPart =
           (longlong)(dVar12 - 9.223372036854776e+18) & (longlong)dVar12 >> 0x3f | (longlong)dVar12;
    }
    QueryPerformanceCounter(&local_58);
    uVar10 = 0;
    if ((ulonglong)LVar11 <= (ulonglong)local_58) {
      uVar10 = local_58.QuadPart - (longlong)LVar11;
    }
    uVar6 = (longlong)*(int *)(param_1 + 0x48) * 0x18;
    lVar7 = *(longlong *)(param_1 + 0x40) + uVar6;
    do {
      if (uVar6 == 0) {
        iVar8 = -1;
        goto LAB_146b45967;
      }
      uVar6 = uVar6 - 0x18;
      puVar2 = (ulonglong *)(lVar7 + -0x10);
      lVar7 = lVar7 + -0x18;
    } while (uVar10 < *puVar2);
    iVar8 = (int)(uVar6 >> 3) * -0x55555555;
    if (-2 < iVar8) {
LAB_146b45967:
      uVar9 = iVar8 + 1;
      if ((int)uVar9 < *(int *)(param_1 + 0x48)) {
        do {
          puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar9 * 0x18);
          iVar8 = *(int *)(param_1 + 0x58);
          lVar7 = (longlong)iVar8;
          uVar5 = iVar8 + 1;
          uVar6 = *puVar2;
          *(uint *)(param_1 + 0x58) = uVar5;
          if (uVar6 < uVar10) {
            if (*(uint *)(param_1 + 0x5c) < uVar5) {
              FUN_146b58822(plVar1,iVar8);
            }
            lVar4 = *(longlong *)(param_1 + 0x50);
            *(ulonglong *)(lVar4 + 0x10 + lVar7 * 0x18) = puVar2[2];
            uVar6 = puVar2[1];
            puVar3 = (ulonglong *)(lVar4 + lVar7 * 0x18);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3 = (ulonglong *)
                     (*(longlong *)(param_1 + 0x50) +
                     (longlong)(*(int *)(param_1 + 0x58) + -1) * 0x18);
            *puVar3 = uVar10;
            if (puVar2[1] - *puVar2 == 0) {
              puVar3[2] = 0;
            }
            else {
              puVar3[2] = ((puVar3[1] - uVar10) / (puVar2[1] - *puVar2)) * puVar3[2];
            }
          }
          else {
            if (*(uint *)(param_1 + 0x5c) < uVar5) {
              FUN_146b58822(plVar1,iVar8);
            }
            lVar4 = *plVar1;
            *(ulonglong *)(lVar4 + 0x10 + lVar7 * 0x18) = puVar2[2];
            uVar6 = puVar2[1];
            puVar3 = (ulonglong *)(lVar4 + lVar7 * 0x18);
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < *(int *)(param_1 + 0x48));
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b45a7a FUN_146b45a7a body=286 status=ok
// SIG undefined FUN_146b45a7a(void)

undefined8 * FUN_146b45a7a(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149f2e910;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  QueryPerformanceCounter(&local_28);
  *(LARGE_INTEGER *)(param_1 + 0x24) = local_28;
  *(undefined4 *)(param_1 + 0x25) = 0;
  FUN_141366fce((longlong)param_1 + 300);
  *(undefined1 **)((longlong)param_1 + 0x13c) = &DAT_200000002;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b45b9a FUN_146b45b9a body=458 status=ok
// SIG undefined FUN_146b45b9a(void)

void FUN_146b45b9a(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_149f2e910;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  EnterCriticalSection(lpCriticalSection);
  plVar1 = param_1 + 6;
  puVar2 = param_1 + 8;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = puVar2;
  if (*(int *)(param_1 + 0xb) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0xb);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (local_50 != puVar2)) {
    do {
      if (*(longlong *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != puVar2 || iStack_64 != iVar3));
  }
  FUN_146b58e3a(plVar1);
  FUN_146b5919c(param_1 + 0x10);
  FUN_146b594fe(param_1 + 0x1a);
  LeaveCriticalSection(lpCriticalSection);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4cc32(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4ccc0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4ce2e(plVar1);
  DeleteCriticalSection(lpCriticalSection);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b45d66 FUN_146b45d66 body=772 status=ok
// SIG undefined FUN_146b45d66(void)

undefined8
FUN_146b45d66(longlong param_1,undefined8 **param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 **ppuVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_d8 [40];
  LPCRITICAL_SECTION local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 local_6d;
  undefined1 local_6c [4];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  local_6d = param_3;
  EnterCriticalSection(lpCriticalSection);
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar11 = (undefined8 *)&DAT_149dfb77a;
  }
  else {
    puVar11 = *param_2;
  }
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar7,puVar11);
  iVar6 = FUN_146b5985e(plVar1,uVar5,param_2);
  if (iVar6 == -1) {
    local_b0 = lpCriticalSection;
    local_78 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_78 = param_4;
    local_a0 = &local_78;
    local_a8 = param_2;
    FUN_146b5992a(plVar1,&local_68,&local_a8);
    ppuVar2 = (undefined8 **)(param_1 + 0x80);
    FUN_1449b8608(&local_68,param_2,&DAT_149e35320);
    local_a8 = &local_80;
    local_80 = local_78;
    local_a0 = &local_68;
    FUN_146b59c94(ppuVar2,local_6c,&local_a8);
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    local_68 = local_78;
    local_a0 = (undefined8 **)&local_6d;
    local_a8 = &local_68;
    FUN_146b59fee(param_1 + 0xd0,&local_80);
    iVar6 = 0;
    iVar7 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar7 = 0;
    }
    uVar8 = iVar7 + 2U;
    if (iVar7 + 2U <= *(uint *)(param_1 + 0x128)) {
      uVar8 = *(uint *)(param_1 + 0x128);
    }
    *(uint *)(param_1 + 0x128) = uVar8;
    lVar3 = param_1 + 0x90;
    local_68 = (undefined8 *)0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar3;
    if (*(int *)(param_1 + 0xa8) != 0) {
      FUN_1449c0562(&local_68);
      iVar6 = *(int *)(param_1 + 0xa8);
    }
    local_90 = local_58;
    uVar4 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = (undefined8 **)local_68;
    local_98 = local_60;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar7 = local_90._4_4_;
    local_a8 = ppuVar2;
    if ((local_90._4_4_ != iVar6) ||
       (lpCriticalSection = local_b0, local_90 = uVar4, local_60 != lVar3)) {
      do {
        local_90 = uVar4;
        puVar11 = *local_a8;
        lVar9 = (longlong)iVar7;
        iVar7 = *(int *)(puVar11 + lVar9 * 4 + 2) + -1;
        if (*(int *)(puVar11 + lVar9 * 4 + 2) == 0) {
          iVar7 = 0;
        }
        if (iVar7 < *(int *)(param_1 + 0x128)) {
          do {
            FUN_1400020e8(puVar11 + lVar9 * 4 + 1,&DAT_149e001d8,1);
            iVar7 = *(int *)(puVar11 + lVar9 * 4 + 2) + -1;
            if (*(int *)(puVar11 + lVar9 * 4 + 2) == 0) {
              iVar7 = 0;
            }
          } while (iVar7 < *(int *)(param_1 + 0x128));
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        lpCriticalSection = local_b0;
        iVar7 = local_90._4_4_;
        uVar4 = local_90;
      } while (local_a8 != ppuVar2 || (local_98 != lVar3 || local_90._4_4_ != iVar6));
    }
  }
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar11 = (undefined8 *)&DAT_149dfb77a;
  }
  else {
    puVar11 = *param_2;
  }
  uVar12 = 0;
  uVar10 = (ulonglong)(iVar6 - 1);
  if (iVar6 == 0) {
    uVar10 = uVar12;
  }
  uVar5 = FUN_144a49b4a(uVar10,puVar11);
  iVar6 = FUN_146b5985e(plVar1,uVar5,param_2);
  if (iVar6 != -1) {
    uVar12 = (longlong)iVar6 * 0x20 + *plVar1;
  }
  uVar4 = *(undefined8 *)(uVar12 + 0x10);
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146b4606c FUN_146b4606c body=2139 status=ok
// SIG undefined FUN_146b4606c(void)

void FUN_146b4606c(longlong param_1,float param_2)

{
  LARGE_INTEGER LVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  int iVar14;
  ulonglong *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_138 [32];
  undefined2 *local_118;
  int local_10c;
  longlong local_108;
  LPCRITICAL_SECTION local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  LARGE_INTEGER local_d8;
  undefined8 local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(&local_d8);
  lVar12 = local_d8.QuadPart - *(longlong *)(param_1 + 0x120);
  auVar21._8_4_ = (int)((ulonglong)lVar12 >> 0x20);
  auVar21._0_8_ = lVar12;
  auVar21._12_4_ = 0x45300000;
  if ((double)param_2 <=
      (((double)CONCAT44(0x43300000,(int)lVar12) - 4503599627370496.0) +
      (auVar21._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418) {
    ((LARGE_INTEGER *)(param_1 + 0x120))->QuadPart = (LONGLONG)local_d8;
    local_100 = (LPCRITICAL_SECTION)(param_1 + 8);
    EnterCriticalSection(local_100);
    uVar9 = FUN_144a82cde();
    FUN_1468161aa(uVar9);
    LVar1.QuadPart = param_1 + 0x30;
    lVar12 = param_1 + 0x40;
    local_b0 = (longlong *)&DAT_100000000;
    local_a0 = 0xffffffff;
    uStack_98 = 0;
    lStack_a8 = lVar12;
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_b0);
      iVar7 = *(int *)(param_1 + 0x58);
    }
    uStack_b8 = CONCAT44(uStack_94,uStack_98);
    local_c0 = local_a0;
    uVar9 = local_c0;
    local_d0 = local_b0;
    lStack_c8 = lStack_a8;
    local_c0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
    local_d8.QuadPart = LVar1.QuadPart;
    if ((local_c0._4_4_ != iVar7) || (lStack_a8 != lVar12)) {
      local_f0 = param_1 + 0x108;
      local_f8 = param_1 + 300;
      local_108 = param_1 + 0xb8;
      local_10c = iVar7;
      iVar7 = local_c0._4_4_;
      do {
        local_c0 = uVar9;
        uVar4 = *(ulonglong *)(*(longlong *)local_d8 + 0x10 + (longlong)iVar7 * 0x20);
        if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
          uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          lVar10 = *(longlong *)(param_1 + 0x110);
          if (*(longlong *)(param_1 + 0x110) == 0) {
            lVar10 = local_f0;
          }
          iVar14 = *(int *)(lVar10 + (ulonglong)
                                     (*(int *)(param_1 + 0x118) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4)
          ;
          if (iVar14 != -1) {
            do {
              puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar14 * 0x18);
              if (*puVar15 == uVar4) goto LAB_146b4629a;
              iVar14 = (int)puVar15[2];
            } while (iVar14 != -1);
          }
        }
        puVar15 = (ulonglong *)0x0;
LAB_146b4629a:
        puVar20 = (undefined8 *)(*(longlong *)local_d8 + (longlong)iVar7 * 0x20 + 0x10);
        uVar6 = puVar15[1];
        uVar9 = FUN_144a82cde();
        iVar14 = local_10c;
        switch((char)uVar6) {
        case '\0':
          uVar5 = *(undefined8 *)*puVar20;
          auVar22._8_4_ = (int)((ulonglong)uVar5 >> 0x20);
          auVar22._0_8_ = uVar5;
          auVar22._12_4_ = 0x45300000;
          FUN_146269454(&local_b0,
                        (((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0) +
                        (auVar22._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418);
          iVar14 = local_10c;
          plVar19 = (longlong *)&DAT_149dfb77a;
          if ((int)lStack_a8 != 0) {
            plVar19 = local_b0;
          }
          if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
            uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            lVar10 = *(longlong *)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              lVar10 = local_108;
            }
            iVar7 = *(int *)(lVar10 + (ulonglong)
                                      (*(int *)(param_1 + 200) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
            if (iVar7 != -1) {
              do {
                lVar10 = *(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20) == uVar4)
                goto LAB_146b46322;
                iVar7 = *(int *)(lVar10 + 0x18);
              } while (iVar7 != -1);
            }
          }
          lVar10 = 0;
LAB_146b46322:
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(lVar10 + 0x10) != 0) {
            puVar18 = *(undefined2 **)(lVar10 + 8);
          }
          FUN_140047918(uVar9,L"| %s%s",puVar18,plVar19);
          if (local_b0 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          break;
        case '\x01':
          FUN_1467d142c(&local_b0,*(undefined8 *)*puVar20,0);
          puVar11 = (undefined8 *)FUN_1447a1f4a(&local_b0);
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(puVar11 + 1) != 0) {
            puVar18 = (undefined2 *)*puVar11;
          }
          FUN_1467d142c(&local_e8,*(undefined8 *)*puVar20,1);
          puVar20 = (undefined8 *)FUN_1447a1f4a(&local_e8);
          puVar17 = &DAT_149dfb77a;
          if (*(int *)(puVar20 + 1) != 0) {
            puVar17 = (undefined2 *)*puVar20;
          }
          if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
            uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            lVar10 = *(longlong *)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              lVar10 = local_108;
            }
            iVar7 = *(int *)(lVar10 + (ulonglong)
                                      (*(int *)(param_1 + 200) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
            if (iVar7 != -1) {
              do {
                lVar10 = *(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20) == uVar4)
                goto LAB_146b465a6;
                iVar7 = *(int *)(lVar10 + 0x18);
              } while (iVar7 != -1);
            }
          }
          lVar10 = 0;
LAB_146b465a6:
          puVar16 = &DAT_149dfb77a;
          if (*(int *)(lVar10 + 0x10) != 0) {
            puVar16 = *(undefined2 **)(lVar10 + 8);
          }
          pwVar13 = L"| %s%s, %s";
          local_118 = puVar18;
          goto LAB_146b465c2;
        case '\x02':
          FUN_1467d142c(&local_b0,*(undefined8 *)*puVar20,0);
          puVar11 = (undefined8 *)FUN_1447a1f4a(&local_b0);
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(puVar11 + 1) != 0) {
            puVar18 = (undefined2 *)*puVar11;
          }
          FUN_1467d142c(&local_e8,*(undefined8 *)*puVar20,1);
          puVar20 = (undefined8 *)FUN_1447a1f4a(&local_e8);
          puVar17 = &DAT_149dfb77a;
          if (*(int *)(puVar20 + 1) != 0) {
            puVar17 = (undefined2 *)*puVar20;
          }
          if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
            uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            lVar10 = *(longlong *)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              lVar10 = local_108;
            }
            iVar7 = *(int *)(lVar10 + (ulonglong)
                                      (*(int *)(param_1 + 200) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
            if (iVar7 != -1) {
              do {
                lVar10 = *(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20) == uVar4)
                goto LAB_146b4644f;
                iVar7 = *(int *)(lVar10 + 0x18);
              } while (iVar7 != -1);
            }
          }
          lVar10 = 0;
LAB_146b4644f:
          puVar16 = &DAT_149dfb77a;
          if (*(int *)(lVar10 + 0x10) != 0) {
            puVar16 = *(undefined2 **)(lVar10 + 8);
          }
          pwVar13 = L"| %s%s/s, %s/s";
          local_118 = puVar18;
LAB_146b465c2:
          FUN_140047918(uVar9,pwVar13,puVar16,puVar17);
          if (local_e8 != (longlong *)0x0) {
            (**(code **)(*local_e8 + 0x10))();
          }
          iVar14 = local_10c;
          if (local_b0 != (longlong *)0x0) {
            (**(code **)(*local_b0 + 0x10))();
          }
          break;
        case '\x03':
          local_e8 = (longlong *)0x0;
          plStack_e0 = (longlong *)0x0;
          FUN_1467d04e4(&local_b0,(double)*(longlong *)*puVar20 * 0.0001,local_f8,&local_e8);
          puVar20 = (undefined8 *)FUN_1447a1f4a(&local_b0);
          iVar14 = local_10c;
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(puVar20 + 1) != 0) {
            puVar18 = (undefined2 *)*puVar20;
          }
          if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
            uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            lVar10 = *(longlong *)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              lVar10 = local_108;
            }
            iVar7 = *(int *)(lVar10 + (ulonglong)
                                      (*(int *)(param_1 + 200) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
            if (iVar7 != -1) {
              do {
                lVar10 = *(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20) == uVar4)
                goto LAB_146b464cf;
                iVar7 = *(int *)(lVar10 + 0x18);
              } while (iVar7 != -1);
            }
          }
          lVar10 = 0;
LAB_146b464cf:
          puVar17 = &DAT_149dfb77a;
          if (*(int *)(lVar10 + 0x10) != 0) {
            puVar17 = *(undefined2 **)(lVar10 + 8);
          }
          FUN_140047918(uVar9,L"| %s%s",puVar17,puVar18);
          if (local_b0 != (longlong *)0x0) {
            (**(code **)(*local_b0 + 0x10))();
          }
          plVar19 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_e0 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar3 = (int *)((longlong)plVar19 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
          break;
        default:
          if (*(int *)(param_1 + 0x88) == *(int *)(param_1 + 0xb4)) {
            lVar10 = 0;
          }
          else {
            uVar8 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
            uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
            lVar10 = *(longlong *)(param_1 + 0xc0);
            if (*(longlong *)(param_1 + 0xc0) == 0) {
              lVar10 = local_108;
            }
            iVar7 = *(int *)(lVar10 + (ulonglong)
                                      (*(int *)(param_1 + 200) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
            if (iVar7 != -1) {
              do {
                lVar10 = *(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x20) == uVar4)
                goto LAB_146b4664e;
                iVar7 = *(int *)(lVar10 + 0x18);
              } while (iVar7 != -1);
            }
            lVar10 = 0;
          }
LAB_146b4664e:
          puVar18 = &DAT_149dfb77a;
          if (*(int *)(lVar10 + 0x10) != 0) {
            puVar18 = *(undefined2 **)(lVar10 + 8);
          }
          FUN_140047918(uVar9,L"| %s%lld",puVar18,*(undefined8 *)*puVar20);
        }
        local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
        FUN_1449c0562(&local_d0);
        uVar9 = local_c0;
        iVar7 = local_c0._4_4_;
      } while (local_d8.QuadPart != LVar1.QuadPart ||
               (lStack_c8 != lVar12 || local_c0._4_4_ != iVar14));
    }
    local_c0 = uVar9;
    uVar9 = FUN_144a82cde();
    FUN_1468161aa(uVar9,L"\\--------------------------------------------------");
    LeaveCriticalSection(local_100);
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b468c8 FUN_146b468c8 body=163 status=ok
// SIG undefined FUN_146b468c8(void)

undefined8 * FUN_146b468c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149f2ea50;
  FUN_146b4696c(param_1 + 1);
  FUN_141366fce(&local_30);
  local_20 = 0x300000003;
  param_1[9] = 0x300000003;
  *(undefined4 *)(param_1 + 7) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_2c;
  *(undefined4 *)(param_1 + 8) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_24;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = &PTR_FUN_149f2e800;
  uVar2 = FUN_14054d1d4();
  puVar1[1] = uVar2;
  uVar2 = FUN_140e92164();
  puVar1[2] = uVar2;
  param_1[10] = puVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4696c FUN_146b4696c body=176 status=ok
// SIG undefined FUN_146b4696c(void)

undefined8 * FUN_146b4696c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 146b46a1c FUN_146b46a1c body=77 status=ok
// SIG undefined FUN_146b46a1c(void)

void FUN_146b46a1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f2ea50;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b46a6a FUN_146b46a6a body=107 status=ok
// SIG undefined FUN_146b46a6a(void)

undefined1 FUN_146b46a6a(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_144a38768(param_1,L".chunk",6,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_144a38768(param_1,L".delta",6,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144a38768(param_1,L".file",5,1);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 146b46ad6 FUN_146b46ad6 body=243 status=ok
// SIG undefined FUN_146b46ad6(void)

void FUN_146b46ad6(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong *param_4,
                  ulonglong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1] + uVar1;
  uVar5 = param_3 + param_2;
  if (uVar2 <= uVar5 && param_2 <= uVar1) {
    uVar1 = param_1[3];
    puVar4 = (ulonglong *)(param_1[2] + 0x18);
    if (param_1[2] == 0) {
      puVar4 = param_4;
    }
    *puVar4 = uVar1;
    puVar4 = (ulonglong *)(uVar1 + 0x10);
    if (uVar1 == 0) {
      puVar4 = param_5;
    }
    *puVar4 = param_1[2];
    FUN_1400020a8(param_1);
    return;
  }
  if (uVar1 < param_2 && (uVar5 <= uVar2 && uVar2 - uVar5 != 0)) {
    puVar3 = (ulonglong *)FUN_14001cc68(0x20,0x10);
    *puVar3 = uVar5;
    puVar3[1] = uVar2 - uVar5;
    puVar3[2] = (ulonglong)param_1;
    uVar1 = param_1[3];
    puVar3[3] = uVar1;
    puVar4 = (ulonglong *)(uVar1 + 0x10);
    if (uVar1 == 0) {
      puVar4 = param_5;
    }
    *puVar4 = (ulonglong)puVar3;
    param_1[3] = (ulonglong)puVar3;
    uVar6 = param_2 - *param_1;
  }
  else {
    uVar6 = param_2 - uVar1;
    if ((param_2 < uVar1 || uVar6 == 0) && (uVar5 <= uVar2 && uVar2 - uVar5 != 0)) {
      *param_1 = uVar5;
      param_1[1] = uVar2 - uVar5;
      return;
    }
  }
  param_1[1] = uVar6;
  return;
}



// FUNCTION 146b46bca FUN_146b46bca body=72 status=ok
// SIG undefined FUN_146b46bca(void)

longlong * FUN_146b46bca(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    param_1[1] = *(longlong *)(lVar1 + 0x18);
    FUN_1400020a8();
    lVar1 = param_1[1];
    *param_1 = lVar1;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 146b46c12 FUN_146b46c12 body=262 status=ok
// SIG undefined FUN_146b46c12(void)

void FUN_146b46c12(ulonglong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  if (param_3 == 0) {
    puVar3 = (ulonglong *)param_2[3];
    if (puVar3 != (ulonglong *)0x0) {
      do {
        uVar1 = *puVar3;
        uVar4 = *param_2;
        uVar6 = param_2[1] + uVar4;
        if (uVar6 < uVar1) {
          return;
        }
        if (uVar1 <= uVar4) {
          uVar4 = uVar1;
        }
        uVar2 = uVar1 + puVar3[1];
        if (uVar1 + puVar3[1] < uVar6) {
          uVar2 = uVar6;
        }
        *param_2 = uVar4;
        param_2[1] = uVar2 - uVar4;
        puVar5 = (ulonglong *)(puVar3[2] + 0x18);
        if (puVar3[2] == 0) {
          puVar5 = param_1;
        }
        uVar1 = puVar3[3];
        *puVar5 = uVar1;
        puVar5 = (ulonglong *)(uVar1 + 0x10);
        if (uVar1 == 0) {
          puVar5 = param_1 + 1;
        }
        *puVar5 = puVar3[2];
        FUN_1400020a8();
        puVar3 = (ulonglong *)param_2[3];
      } while (puVar3 != (ulonglong *)0x0);
    }
  }
  else {
    puVar3 = (ulonglong *)param_2[2];
    if (puVar3 != (ulonglong *)0x0) {
      do {
        uVar1 = *puVar3;
        uVar6 = puVar3[1] + uVar1;
        uVar4 = *param_2;
        if (uVar6 < uVar4) {
          return;
        }
        if (uVar4 < uVar1) {
          uVar1 = uVar4;
        }
        uVar2 = uVar4 + param_2[1];
        if (uVar4 + param_2[1] <= uVar6) {
          uVar2 = uVar6;
        }
        *param_2 = uVar1;
        param_2[1] = uVar2 - uVar1;
        puVar5 = (ulonglong *)(puVar3[2] + 0x18);
        if (puVar3[2] == 0) {
          puVar5 = param_1;
        }
        uVar1 = puVar3[3];
        *puVar5 = uVar1;
        puVar5 = (ulonglong *)(uVar1 + 0x10);
        if (uVar1 == 0) {
          puVar5 = param_1 + 1;
        }
        *puVar5 = puVar3[2];
        FUN_1400020a8();
        puVar3 = (ulonglong *)param_2[2];
      } while (puVar3 != (ulonglong *)0x0);
    }
  }
  return;
}



// FUNCTION 146b46d18 FUN_146b46d18 body=129 status=ok
// SIG undefined FUN_146b46d18(void)

void FUN_146b46d18(longlong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  
  if ((param_3 != 0) && ((ulonglong *)*param_1 != (ulonglong *)0x0)) {
    puVar3 = (ulonglong *)*param_1;
    puVar2 = (ulonglong *)0x0;
    do {
      puVar1 = puVar3;
      if (*puVar1 < param_3 + param_2) {
        puVar3 = (ulonglong *)puVar1[3];
        if (*puVar1 + puVar1[1] <= param_2) goto LAB_146b46d79;
        FUN_146b46ad6(puVar1,param_2,param_3,param_1,param_1 + 1);
        puVar1 = puVar2;
      }
      else {
        puVar3 = (ulonglong *)puVar1[2];
LAB_146b46d79:
        if (puVar2 == puVar3) {
          return;
        }
      }
      puVar2 = puVar1;
    } while (puVar3 != (ulonglong *)0x0);
  }
  return;
}



// FUNCTION 146b46d99 FUN_146b46d99 body=239 status=ok
// SIG undefined FUN_146b46d99(void)

undefined8 * FUN_146b46d99(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined1 auStack_68 [40];
  ulonglong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146b30bb8(param_2,local_40);
  puVar6 = (ulonglong *)*param_2;
  if (local_40[0] != (ulonglong *)0x0 && puVar6 != (ulonglong *)0x0) {
    lVar5 = 0;
    puVar7 = local_40[0];
    do {
      uVar1 = puVar6[1];
      if ((uVar1 == 0) || (uVar2 = puVar7[1], uVar2 == 0)) {
LAB_146b46e1d:
        lVar5 = lVar5 + uVar1;
        puVar6 = (ulonglong *)puVar6[3];
      }
      else {
        uVar3 = *puVar6;
        uVar4 = *puVar7;
        if (((uVar2 + uVar4) - 1 < uVar3) || ((uVar1 + uVar3) - 1 < uVar4)) goto LAB_146b46e1d;
        FUN_146b31154(param_1,(lVar5 - uVar3) + uVar4,uVar2,0);
        puVar7 = (ulonglong *)puVar7[3];
      }
    } while ((puVar6 != (ulonglong *)0x0) && (puVar7 != (ulonglong *)0x0));
  }
  while (local_40[0] != (ulonglong *)0x0) {
    puVar6 = (ulonglong *)local_40[0][3];
    FUN_1400020a8(local_40[0]);
    local_40[0] = puVar6;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b46e89 FUN_146b46e89 body=29 status=ok
// SIG undefined FUN_146b46e89(void)

wchar_t * FUN_146b46e89(byte *param_1)

{
  if ((ulonglong)*param_1 < 0xb) {
    return (wchar_t *)(&PTR_u_Success_149f2fa50)[*param_1];
  }
  return L"Unknown";
}



// FUNCTION 146b46ea6 FUN_146b46ea6 body=29 status=ok
// SIG undefined FUN_146b46ea6(void)

wchar_t * FUN_146b46ea6(byte *param_1)

{
  if ((ulonglong)*param_1 < 4) {
    return (wchar_t *)(&PTR_u_Success_149f2faa8)[*param_1];
  }
  return L"Unknown";
}



// FUNCTION 146b46ec3 FUN_146b46ec3 body=1033 status=ok
// SIG undefined FUN_146b46ec3(void)

longlong * FUN_146b46ec3(longlong *param_1,uint *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_68 [34];
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) goto LAB_146b4726c;
  lVar7 = (**(code **)(*param_1 + 0x28))(param_1);
  lVar8 = (**(code **)(*param_1 + 0x30))(param_1);
  lVar8 = lVar8 - lVar7;
  if (((*(byte *)(param_1 + 5) & 4) != 0) || (0x28 < lVar8)) {
    param_2[1] = *(uint *)(&DAT_149f2eb10 + (ulonglong)*param_2 * 4);
    local_44 = -0x4e01c55e;
    local_45 = (undefined1)param_2[8];
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_44);
      }
    }
    else {
      local_44 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    puVar4 = *(uint **)param_1[1];
    if ((uint *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
      }
      else {
        thunk_FUN_14572512c(param_1,param_2);
      }
    }
    else {
      *param_2 = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar4 = param_2 + 1;
    puVar5 = *(uint **)param_1[1];
    if ((uint *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
      }
      else {
        thunk_FUN_14572512c(param_1,puVar4);
      }
    }
    else {
      *puVar4 = *puVar5;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar5 = *(uint **)param_1[1];
    if ((uint *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[6] = *puVar5;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    plVar9 = (longlong *)FUN_1402ac1b3(param_1,param_2 + 2);
    puVar6 = *(undefined8 **)plVar9[1];
    if ((undefined8 *)((longlong *)plVar9[1])[1] < puVar6 + 1) {
      if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar9 + 0x170))(plVar9,param_2 + 10,8);
      }
      else {
        thunk_FUN_146821949(plVar9);
      }
    }
    else {
      *(undefined8 *)(param_2 + 10) = *puVar6;
      *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 8;
    }
    puVar3 = (ulonglong *)plVar9[1];
    puVar2 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar2) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_45,1);
    }
    else {
      local_45 = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    *(undefined1 *)(param_2 + 8) = local_45;
    bVar13 = (*(byte *)((longlong)param_1 + 0x29) & 2) == 0;
    bVar14 = bVar13 && local_44 == -0x4e01c55e;
    uVar11 = *param_2;
    if (uVar11 < 2 || (!bVar13 || local_44 != -0x4e01c55e)) {
      lVar12 = 0x29;
    }
    else {
      if (((*(byte *)(param_1 + 5) & 4) == 0) && (lVar8 < 0x3e)) goto LAB_146b47296;
      local_46 = *(undefined1 *)((longlong)param_2 + 0x21);
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,0x14);
      puVar3 = (ulonglong *)param_1[1];
      puVar2 = (undefined1 *)*puVar3 + 1;
      if ((undefined1 *)puVar3[1] < puVar2) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_46,1);
        uVar10 = local_46;
      }
      else {
        uVar10 = *(undefined1 *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      *(undefined1 *)((longlong)param_2 + 0x21) = uVar10;
      bVar14 = (*(byte *)((longlong)param_1 + 0x29) & 2) == 0;
      uVar11 = *param_2;
      lVar12 = 0x3e;
    }
    if ((bVar14) && (2 < uVar11)) {
      if (((*(byte *)(param_1 + 5) & 4) != 0) || (0x41 < lVar8)) {
        puVar5 = *(uint **)param_1[1];
        if ((uint *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2 + 7,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          param_2[7] = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        lVar12 = 0x42;
        if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) goto LAB_146b47238;
      }
    }
    else if (bVar14) {
LAB_146b47238:
      lVar8 = (**(code **)(*param_1 + 0x28))(param_1);
      if (lVar8 - lVar7 == lVar12) {
        uVar11 = *puVar4;
        lVar8 = (**(code **)(*param_1 + 0x28))(param_1);
        if (lVar8 != lVar7 + (ulonglong)uVar11) {
          (**(code **)(*param_1 + 0x1a0))(param_1,lVar7 + (ulonglong)uVar11);
        }
        goto LAB_146b4726c;
      }
    }
  }
LAB_146b47296:
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
  }
  FUN_14572541c(param_1);
LAB_146b4726c:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b472cd FUN_146b472cd body=519 status=ok
// SIG undefined FUN_146b472cd(void)

longlong * FUN_146b472cd(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    lVar4 = (**(code **)(*param_1 + 0x28))(param_1);
    local_24 = 0;
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_24);
      }
    }
    else {
      local_24 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    FUN_1402ac1b3(param_1,param_2);
    puVar3 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    puVar8 = (undefined4 *)(param_2 + 0x14);
    puVar3 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar8,4);
      }
      else {
        thunk_FUN_14572512c(param_1,puVar8);
      }
    }
    else {
      *puVar8 = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    if (((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) && ((*(byte *)(param_1 + 5) & 4) != 0)) {
      uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
      local_24 = (int)uVar5 - (int)lVar4;
      (**(code **)(*param_1 + 0x1a0))(param_1,lVar4);
      puVar2 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_24);
        }
      }
      else {
        local_24 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      (**(code **)(*param_1 + 0x1a0))(param_1,uVar5);
    }
    uVar6 = (ulonglong)local_24;
    lVar7 = (**(code **)(*param_1 + 0x28))(param_1);
    if (lVar7 != lVar4 + uVar6) {
      (**(code **)(*param_1 + 0x1a0))(param_1,lVar4 + uVar6);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b474d6 FUN_146b474d6 body=118 status=ok
// SIG undefined FUN_146b474d6(void)

void FUN_146b474d6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146b5a946(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x20 + *param_1),0,(longlong)(param_2 - iVar1) << 5);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146b5a9cc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146b4754e FUN_146b4754e body=41 status=ok
// SIG undefined FUN_146b4754e(void)

undefined8 * FUN_146b4754e(undefined8 *param_1,longlong *param_2)

{
  *param_1 = param_2;
  (**(code **)(*param_2 + 8))(param_2,param_1 + 2,param_1 + 1);
  return param_1;
}



// FUNCTION 146b47578 FUN_146b47578 body=10 status=ok
// SIG undefined FUN_146b47578(void)

void FUN_146b47578(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146b4757e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x18))();
  return;
}



// FUNCTION 146b47582 FUN_146b47582 body=5 status=ok
// SIG undefined FUN_146b47582(void)

undefined8 FUN_146b47582(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 146b47588 FUN_146b47588 body=37 status=ok
// SIG undefined FUN_146b47588(void)

void FUN_146b47588(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x88,0x10);
  FUN_146b475ae(uVar1,param_1);
  return;
}



// FUNCTION 146b475ae FUN_146b475ae body=156 status=ok
// SIG undefined FUN_146b475ae(void)

undefined8 * FUN_146b475ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f2ed70;
  param_1[1] = 0x4200000003;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x10000000000000;
  *(undefined2 *)(param_1 + 5) = 0x100;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  if (-1 < param_2) {
    if (*(int *)((longlong)param_1 + 0x5c) < param_2) {
      FUN_144893a1c(param_1 + 10,param_2);
    }
    FUN_140393c76(param_1 + 10,param_2,1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146b4764c FUN_146b4764c body=38 status=ok
// SIG undefined FUN_146b4764c(void)

undefined8 FUN_146b4764c(undefined8 param_1,int param_2)

{
  FUN_146b2fbea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b4767a FUN_146b4767a body=9 status=ok
// SIG undefined FUN_146b4767a(void)

undefined4 FUN_146b4767a(longlong param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x70) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 146b47684 FUN_146b47684 body=38 status=ok
// SIG undefined FUN_146b47684(void)

undefined8 FUN_146b47684(undefined8 param_1,int param_2)

{
  FUN_146b33692();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b476b2 FUN_146b476b2 body=45 status=ok
// SIG undefined FUN_146b476b2(void)

longlong FUN_146b476b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146b33692(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b476e0 FUN_146b476e0 body=57 status=ok
// SIG undefined FUN_146b476e0(void)

undefined8 * FUN_146b476e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f2dae0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b4771a FUN_146b4771a body=38 status=ok
// SIG undefined FUN_146b4771a(void)

undefined8 FUN_146b4771a(undefined8 param_1,int param_2)

{
  FUN_146b37ad4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b47740 FUN_146b47740 body=56 status=ok
// SIG undefined FUN_146b47740(void)

undefined8 * FUN_146b47740(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f2f730;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b47778 FUN_146b47778 body=29 status=ok
// SIG undefined FUN_146b47778(void)

undefined8 FUN_146b47778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b47796 FUN_146b47796 body=29 status=ok
// SIG undefined FUN_146b47796(void)

undefined8 FUN_146b47796(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b477b4 FUN_146b477b4 body=38 status=ok
// SIG undefined FUN_146b477b4(void)

undefined8 FUN_146b477b4(undefined8 param_1,int param_2)

{
  FUN_146b4572a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b477da FUN_146b477da body=45 status=ok
// SIG undefined FUN_146b477da(void)

longlong FUN_146b477da(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146b4572a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b47808 FUN_146b47808 body=38 status=ok
// SIG undefined FUN_146b47808(void)

undefined8 FUN_146b47808(undefined8 param_1,int param_2)

{
  FUN_146b45b9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b4782e FUN_146b4782e body=38 status=ok
// SIG undefined FUN_146b4782e(void)

undefined8 FUN_146b4782e(undefined8 param_1,int param_2)

{
  FUN_146b46a1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b47854 FUN_146b47854 body=340 status=ok
// SIG undefined FUN_146b47854(void)

undefined8 * FUN_146b47854(undefined8 *param_1,longlong *param_2,wchar_t *param_3)

{
  longlong *plVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  plVar1 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar4 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_2;
  if ((iStack_54 != iVar4) || (uStack_60 != plVar1)) {
    iVar7 = 1;
    do {
      puVar6 = (undefined8 *)((longlong)iStack_74 * 0x18 + *local_90);
      if ((char)iVar7 == '\0') {
        sVar3 = wcslen(param_3);
        FUN_1400020e8(param_1,param_3,sVar3 & 0xffffffff);
      }
      iVar2 = *(int *)(puVar6 + 1);
      iVar7 = 0;
      iVar5 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar5 = iVar7;
      }
      FUN_1400020e8(param_1,*puVar6,iVar5);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar4));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b479aa FUN_146b479aa body=122 status=ok
// SIG undefined FUN_146b479aa(void)

longlong FUN_146b479aa(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146b47a24(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146b47a24 FUN_146b47a24 body=210 status=ok
// SIG undefined FUN_146b47a24(void)

undefined8 * FUN_146b47a24(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146b47af6(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140044672(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_146b47c7c(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar4 + 10);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xc;
        puVar6 = puVar6 + 0xc;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 146b47af6 FUN_146b47af6 body=388 status=ok
// SIG undefined FUN_146b47af6(void)

void FUN_146b47af6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x18 + lVar4 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
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



// FUNCTION 146b47c7c FUN_146b47c7c body=159 status=ok
// SIG undefined FUN_146b47c7c(void)

undefined8 * FUN_146b47c7c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 146b47d1c FUN_146b47d1c body=122 status=ok
// SIG undefined FUN_146b47d1c(void)

longlong FUN_146b47d1c(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146b47d96(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146b47d96 FUN_146b47d96 body=117 status=ok
// SIG undefined FUN_146b47d96(void)

undefined8 * FUN_146b47d96(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146b47e0c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 146b47e0c FUN_146b47e0c body=128 status=ok
// SIG undefined FUN_146b47e0c(void)

void FUN_146b47e0c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b47e8e FUN_146b47e8e body=122 status=ok
// SIG undefined FUN_146b47e8e(void)

longlong FUN_146b47e8e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146b47f08(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146b47f08 FUN_146b47f08 body=124 status=ok
// SIG undefined FUN_146b47f08(void)

undefined8 * FUN_146b47f08(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146b47f84(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406245f8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 146b47f84 FUN_146b47f84 body=128 status=ok
// SIG undefined FUN_146b47f84(void)

void FUN_146b47f84(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b48006 FUN_146b48006 body=54 status=ok
// SIG undefined FUN_146b48006(void)

void FUN_146b48006(longlong *param_1)

{
  FUN_146b47f84(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b4803c FUN_146b4803c body=54 status=ok
// SIG undefined FUN_146b4803c(void)

void FUN_146b4803c(longlong *param_1)

{
  FUN_146b47e0c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48072 FUN_146b48072 body=52 status=ok
// SIG undefined FUN_146b48072(void)

void FUN_146b48072(longlong *param_1)

{
  FUN_146b480a6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b480a6 FUN_146b480a6 body=89 status=ok
// SIG undefined FUN_146b480a6(void)

void FUN_146b480a6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
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



// FUNCTION 146b48100 FUN_146b48100 body=54 status=ok
// SIG undefined FUN_146b48100(void)

void FUN_146b48100(longlong *param_1)

{
  FUN_146b48136(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48136 FUN_146b48136 body=128 status=ok
// SIG undefined FUN_146b48136(void)

void FUN_146b48136(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b481b8 FUN_146b481b8 body=52 status=ok
// SIG undefined FUN_146b481b8(void)

void FUN_146b481b8(longlong *param_1)

{
  FUN_146b481ec();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b481ec FUN_146b481ec body=341 status=ok
// SIG undefined FUN_146b481ec(void)

void FUN_146b481ec(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20);
      if (lVar2 != 0) {
        lVar3 = *local_70 + (longlong)iStack_54 * 0x20;
        do {
          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x18);
          FUN_1400020a8();
          lVar2 = *(longlong *)(lVar3 + 0x10);
          *(longlong *)(lVar3 + 8) = lVar2;
        } while (lVar2 != 0);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b48342 FUN_146b48342 body=52 status=ok
// SIG undefined FUN_146b48342(void)

void FUN_146b48342(longlong *param_1)

{
  FUN_146b48376();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48376 FUN_146b48376 body=314 status=ok
// SIG undefined FUN_146b48376(void)

void FUN_146b48376(longlong *param_1)

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
      FUN_146b484b2(*local_68 + (longlong)iStack_4c * 0x30 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b484b2 FUN_146b484b2 body=58 status=ok
// SIG undefined FUN_146b484b2(void)

void FUN_146b484b2(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  lVar1 = *param_1;
  while (lVar1 != 0) {
    param_1[1] = *(longlong *)(lVar1 + 0x18);
    FUN_1400020a8();
    lVar1 = param_1[1];
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 146b484ec FUN_146b484ec body=54 status=ok
// SIG undefined FUN_146b484ec(void)

void FUN_146b484ec(longlong *param_1)

{
  FUN_146b48522(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48522 FUN_146b48522 body=128 status=ok
// SIG undefined FUN_146b48522(void)

void FUN_146b48522(longlong param_1,int param_2)

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
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b485a4 FUN_146b485a4 body=54 status=ok
// SIG undefined FUN_146b485a4(void)

void FUN_146b485a4(longlong *param_1)

{
  FUN_146b485da(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b485da FUN_146b485da body=130 status=ok
// SIG undefined FUN_146b485da(void)

void FUN_146b485da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_145acb176(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b4865e FUN_146b4865e body=54 status=ok
// SIG undefined FUN_146b4865e(void)

void FUN_146b4865e(longlong *param_1)

{
  FUN_146b48694(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48694 FUN_146b48694 body=396 status=ok
// SIG undefined FUN_146b48694(void)

void FUN_146b48694(longlong *param_1,int param_2)

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
      FUN_140149fc2(lVar2 + lVar5 + 8);
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
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar4 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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



// FUNCTION 146b48822 FUN_146b48822 body=54 status=ok
// SIG undefined FUN_146b48822(void)

void FUN_146b48822(longlong *param_1)

{
  FUN_146b48858(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48858 FUN_146b48858 body=346 status=ok
// SIG undefined FUN_146b48858(void)

void FUN_146b48858(longlong *param_1,int param_2)

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
      FUN_146b489b4((longlong)iStack_54 * 0x70 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140875b54(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146b489b4 FUN_146b489b4 body=63 status=ok
// SIG undefined FUN_146b489b4(void)

void FUN_146b489b4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b489f4 FUN_146b489f4 body=54 status=ok
// SIG undefined FUN_146b489f4(void)

void FUN_146b489f4(longlong *param_1)

{
  FUN_146b47af6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48a2a FUN_146b48a2a body=123 status=ok
// SIG undefined FUN_146b48a2a(void)

undefined8 * FUN_146b48a2a(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146b48aa6();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146b48aa6 FUN_146b48aa6 body=383 status=ok
// SIG undefined FUN_146b48aa6(void)

longlong * FUN_146b48aa6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        FUN_146b48c26((longlong)iVar6 * 0x28 + *local_78);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b48c26 FUN_146b48c26 body=74 status=ok
// SIG undefined FUN_146b48c26(void)

void FUN_146b48c26(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48c70 FUN_146b48c70 body=29 status=ok
// SIG undefined FUN_146b48c70(void)

undefined8 FUN_146b48c70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b48cac FUN_146b48cac body=52 status=ok
// SIG undefined FUN_146b48cac(void)

void FUN_146b48cac(longlong *param_1)

{
  FUN_146b48ce0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b48ce0 FUN_146b48ce0 body=89 status=ok
// SIG undefined FUN_146b48ce0(void)

void FUN_146b48ce0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 146b48d3a FUN_146b48d3a body=483 status=ok
// SIG undefined FUN_146b48d3a(void)

undefined8 * FUN_146b48d3a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1410b2022();
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  pvVar2 = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  pvVar2 = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar2 = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x88);
  pvVar2 = *(void **)(param_2 + 0x80);
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  pvVar2 = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 146b48f1e FUN_146b48f1e body=118 status=ok
// SIG undefined FUN_146b48f1e(void)

void FUN_146b48f1e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1);
  return;
}



// FUNCTION 146b48f94 FUN_146b48f94 body=41 status=ok
// SIG undefined FUN_146b48f94(void)

void FUN_146b48f94(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b48f1e(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 146b48fbe FUN_146b48fbe body=132 status=ok
// SIG undefined FUN_146b48fbe(void)

void FUN_146b48fbe(longlong param_1,int param_2)

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



// FUNCTION 146b49044 FUN_146b49044 body=201 status=ok
// SIG undefined FUN_146b49044(void)

void FUN_146b49044(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 146b4910e FUN_146b4910e body=93 status=ok
// SIG undefined FUN_146b4910e(void)

longlong FUN_146b4910e(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146b4916c(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146b4916c FUN_146b4916c body=146 status=ok
// SIG undefined FUN_146b4916c(void)

longlong * FUN_146b4916c(longlong *param_1,longlong *param_2)

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



// FUNCTION 146b491fe FUN_146b491fe body=89 status=ok
// SIG undefined FUN_146b491fe(void)

void FUN_146b491fe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,4,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146b49258 FUN_146b49258 body=88 status=ok
// SIG undefined FUN_146b49258(void)

void FUN_146b49258(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146b492b0 FUN_146b492b0 body=115 status=ok
// SIG undefined FUN_146b492b0(void)

void FUN_146b492b0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146b49323 FUN_146b49323 body=52 status=ok
// SIG undefined FUN_146b49323(void)

void FUN_146b49323(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146b49358(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 146b49358 FUN_146b49358 body=331 status=ok
// SIG undefined FUN_146b49358(void)

undefined8 * FUN_146b49358(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
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
  *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  uVar3 = param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_140b856de(param_1 + 7,iVar1,0);
    FUN_140b8566a(param_1[7],uVar3,iVar1);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_146b494a4(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[0xb] = param_2[0xb];
  return param_1;
}



// FUNCTION 146b494a4 FUN_146b494a4 body=115 status=ok
// SIG undefined FUN_146b494a4(void)

void FUN_146b494a4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146b49518 FUN_146b49518 body=54 status=ok
// SIG undefined FUN_146b49518(void)

void FUN_146b49518(longlong *param_1)

{
  FUN_146b4954e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b4954e FUN_146b4954e body=128 status=ok
// SIG undefined FUN_146b4954e(void)

void FUN_146b4954e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b495d0 FUN_146b495d0 body=52 status=ok
// SIG undefined FUN_146b495d0(void)

void FUN_146b495d0(longlong *param_1)

{
  FUN_146b49604();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b49604 FUN_146b49604 body=338 status=ok
// SIG undefined FUN_146b49604(void)

void FUN_146b49604(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 146b49758 FUN_146b49758 body=54 status=ok
// SIG undefined FUN_146b49758(void)

void FUN_146b49758(longlong *param_1)

{
  FUN_146b4978e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b4978e FUN_146b4978e body=128 status=ok
// SIG undefined FUN_146b4978e(void)

void FUN_146b4978e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b49810 FUN_146b49810 body=54 status=ok
// SIG undefined FUN_146b49810(void)

void FUN_146b49810(longlong *param_1)

{
  FUN_146b49846(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b49846 FUN_146b49846 body=128 status=ok
// SIG undefined FUN_146b49846(void)

void FUN_146b49846(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146b498c7 FUN_146b498c7 body=38 status=ok
// SIG undefined FUN_146b498c7(void)

void FUN_146b498c7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b3d0f4(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 146b498ee FUN_146b498ee body=80 status=ok
// SIG undefined FUN_146b498ee(void)

longlong * FUN_146b498ee(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146b498c7(*param_1,(int)param_1[1]);
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



// FUNCTION 146b4993e FUN_146b4993e body=93 status=ok
// SIG undefined FUN_146b4993e(void)

longlong FUN_146b4993e(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145937084(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146b4999c FUN_146b4999c body=52 status=ok
// SIG undefined FUN_146b4999c(void)

void FUN_146b4999c(longlong *param_1)

{
  FUN_146b499d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b499d0 FUN_146b499d0 body=89 status=ok
// SIG undefined FUN_146b499d0(void)

void FUN_146b499d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 146b49a2a FUN_146b49a2a body=54 status=ok
// SIG undefined FUN_146b49a2a(void)

void FUN_146b49a2a(longlong *param_1)

{
  FUN_146b49a60(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b49a60 FUN_146b49a60 body=385 status=ok
// SIG undefined FUN_146b49a60(void)

void FUN_146b49a60(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
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
      lVar4 = *(longlong *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x28);
      if (lVar4 != 0) {
        lVar2 = *local_78 + (longlong)iStack_5c * 0x28;
        do {
          *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
          FUN_1400020a8();
          lVar4 = *(longlong *)(lVar2 + 0x18);
          *(longlong *)(lVar2 + 0x10) = lVar4;
        } while (lVar4 != 0);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146b49be4 FUN_146b49be4 body=54 status=ok
// SIG undefined FUN_146b49be4(void)

void FUN_146b49be4(longlong param_1,longlong param_2)

{
  FUN_146b3e088(param_1 + 0x108);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_2);
  return;
}



// FUNCTION 146b49c1a FUN_146b49c1a body=38 status=ok
// SIG undefined FUN_146b49c1a(void)

undefined8 FUN_146b49c1a(undefined8 param_1,int param_2)

{
  FUN_146b4bc06();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b49c40 FUN_146b49c40 body=260 status=ok
// SIG undefined FUN_146b49c40(void)

void FUN_146b49c40(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x90 + lVar5) != 3) {
        if (param_3 != '\0') {
          uVar3 = (**(code **)(**(longlong **)(lVar2 + 0xa8 + lVar5) + 0x18))();
          uVar4 = (**(code **)(**(longlong **)(lVar2 + 0xa8 + lVar5) + 0x10))();
          FUN_140474144(local_58,uVar4,uVar3);
          FUN_140e830ae(param_2,local_5c,local_58,0);
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
        }
        uVar3 = (**(code **)(**(longlong **)(lVar2 + 0xa8 + lVar5) + 0x150))();
        FUN_14482b35e(param_2,local_58,uVar3);
      }
      lVar5 = lVar5 + 0x158;
    } while ((longlong)iVar1 * 0x158 - lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b49d46 FUN_146b49d46 body=297 status=ok
// SIG undefined FUN_146b49d46(void)

void FUN_146b49d46(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar6);
  iVar3 = FUN_146b4b698((longlong *)(param_1 + 0xa8),uVar2,param_2);
  if (iVar3 != -1) {
    lVar7 = *(longlong *)(param_1 + 0xa8);
    if ((lVar7 + (longlong)iVar3 * 0x30 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar7 = lVar7 + (longlong)iVar3 * 0x30;
      if (param_4 != '\0') {
        uVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x20) + 0xa8) + 0x18))();
        uVar5 = (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x20) + 0xa8) + 0x10))();
        FUN_140474144(local_38,uVar5,uVar4);
        FUN_140e830ae(param_3,local_3c,local_38,0);
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
      uVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x20) + 0xa8) + 0x150))();
      FUN_14482b35e(param_3,local_38,uVar4,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b49e70 FUN_146b49e70 body=92 status=ok
// SIG undefined FUN_146b49e70(void)

void FUN_146b49e70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x100) * 0x158;
    lVar2 = *(longlong *)(param_1 + 0xf8) + 0x108;
    do {
      if (*(int *)(lVar2 + -0x78) != 3) {
        (**(code **)(**(longlong **)(lVar2 + -0x60) + 0x188))
                  (*(longlong **)(lVar2 + -0x60),lVar2,param_2);
      }
      lVar2 = lVar2 + 0x158;
      lVar1 = lVar1 + -0x158;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 146b49ecc FUN_146b49ecc body=277 status=ok
// SIG undefined FUN_146b49ecc(void)

longlong FUN_146b49ecc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 == iVar4) && (uStack_50 == plVar1)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 0x28))(param_1,(longlong)iStack_64 * 0x18 + *local_80);
      lVar3 = lVar3 + lVar2;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b49fe2 FUN_146b49fe2 body=92 status=ok
// SIG undefined FUN_146b49fe2(void)

undefined8 FUN_146b49fe2(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_146b4b110((longlong *)(param_1 + 8),uVar1,param_2);
  if ((iVar2 == -1) ||
     (lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 8),
     plVar4 = (longlong *)(lVar3 + 0x10), plVar4 == (longlong *)0x0 || lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*plVar4 + 0x38);
  }
  return uVar5;
}



// FUNCTION 146b4a03e FUN_146b4a03e body=116 status=ok
// SIG undefined FUN_146b4a03e(void)

undefined8 FUN_146b4a03e(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_146b4b110((longlong *)(param_1 + 8),uVar2,param_2);
  if ((iVar3 == -1) ||
     (lVar4 = (longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 8),
     plVar5 = (longlong *)(lVar4 + 0x10), plVar5 == (longlong *)0x0 || lVar4 == 0)) {
    uVar7 = 0;
  }
  else {
    lVar4 = *plVar5;
    uVar6 = *(ulonglong *)(lVar4 + 0x20);
    *param_3 = *(ulonglong *)(lVar4 + 0x18);
    param_3[1] = uVar6;
    uVar1 = *(uint *)(lVar4 + 0x28);
    *(uint *)(param_3 + 2) = uVar1;
    uVar6 = (ulonglong)uVar1 | *param_3 | param_3[1];
    uVar7 = CONCAT71((int7)(uVar6 >> 8),uVar6 != 0);
  }
  return uVar7;
}



// FUNCTION 146b4a0b2 FUN_146b4a0b2 body=262 status=ok
// SIG undefined FUN_146b4a0b2(void)

undefined8 * FUN_146b4a0b2(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  int local_48;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1447addd0(param_3,0x10);
  iVar3 = FUN_146b4b110((longlong *)(param_1 + 8),uVar2,param_3);
  if (iVar3 != -1) {
    lVar4 = *(longlong *)(param_1 + 8);
    if ((lVar4 + (longlong)iVar3 * 0x30 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar4 = lVar4 + (longlong)iVar3 * 0x30;
      FUN_146b43eee(&local_38,*(undefined8 *)(lVar4 + 0x18),param_3);
      iVar3 = local_30 + -1;
      if (local_30 == 0) {
        iVar3 = 0;
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
      iVar1 = *(int *)(lVar4 + 0x88);
      local_48 = iVar3 + 1 + (uint)(iVar1 == 0);
      *param_2 = 0;
      FUN_14125bce8(param_2,*(undefined8 *)(lVar4 + 0x80),iVar1,0);
      FUN_1401aebe8(param_2,local_38,iVar3);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4a1cc FUN_146b4a1cc body=372 status=ok
// SIG undefined FUN_146b4a1cc(void)

void FUN_146b4a1cc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
  uVar5 = (*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc)) + uVar3;
  if (uVar3 < uVar5) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_140e83416(param_2,uVar5);
    iVar4 = 1;
    if (3 < uVar5) {
      uVar3 = (uVar5 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14482b9e8(param_2);
    }
  }
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar2 = param_1 + 0xb8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0xd0);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      FUN_14482b35e(param_2,&local_50,(longlong)iStack_5c * 0x30 + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4a342 FUN_146b4a342 body=793 status=ok
// SIG undefined FUN_146b4a342(void)

void FUN_146b4a342(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong local_f8;
  undefined8 *local_f0;
  undefined1 local_e4 [4];
  longlong *local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_f0 = param_2;
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xf8);
    lVar6 = (longlong)*(int *)(param_1 + 0x100) * 0x158 + lVar8;
    local_f8 = lVar6;
    do {
      if (*(int *)(lVar8 + 0x90) != 3) {
        if ((int)uStack_90 != local_64) {
          FUN_141539c3e(&local_98);
          FUN_14170af7a(&local_98);
        }
        plVar2 = *(longlong **)(lVar8 + 0xa8);
        iVar7 = *(int *)(lVar8 + 0x78) + -1;
        if (*(int *)(lVar8 + 0x78) == 0) {
          iVar7 = 0;
        }
        local_e0 = (longlong *)0x0;
        local_108 = (longlong *)
                    CONCAT44(local_108._4_4_,iVar7 + 1 + (uint)(*(int *)(local_f0 + 1) == 0));
        FUN_14125bce8(&local_e0,*local_f0,*(int *)(local_f0 + 1),0);
        FUN_1401aebe8(&local_e0,*(undefined8 *)(lVar8 + 0x70),iVar7);
        local_108 = &local_98;
        (**(code **)(*plVar2 + 0x130))(plVar2,*(undefined8 *)(lVar8 + 0x98),&local_e0);
        if (local_e0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_b8 = 0x100000000;
        uStack_b0 = local_88;
        local_a8 = 0xffffffff;
        uStack_a0 = 0;
        if (local_70 == 0) {
          iVar7 = 0;
        }
        else {
          FUN_1449c0562(&local_b8);
          iVar7 = local_70;
        }
        uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
        local_c8 = local_a8;
        uVar4 = local_c8;
        local_d8 = (undefined4)local_b8;
        uStack_d4 = local_b8._4_4_;
        uStack_d0 = (undefined4)uStack_b0;
        uStack_cc = uStack_b0._4_4_;
        local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
        iVar5 = local_c8._4_4_;
        local_e0 = &local_98;
        if ((local_c8._4_4_ != iVar7) || (lVar6 = local_f8, local_c8 = uVar4, uStack_b0 != local_88)
           ) {
          do {
            local_c8 = uVar4;
            lVar6 = *local_e0;
            iVar1 = *(int *)(lVar6 + 8 + (longlong)iVar5 * 0x18);
            iVar3 = iVar1 + -1;
            if (iVar1 == 0) {
              iVar3 = 0;
            }
            local_b8 = 0;
            local_108 = (longlong *)
                        CONCAT44(local_108._4_4_,iVar3 + 1 + (uint)(*(int *)(lVar8 + 0x78) == 0));
            FUN_14125bce8(&local_b8,*(undefined8 *)(lVar8 + 0x70),*(int *)(lVar8 + 0x78),0);
            FUN_1401aebe8(&local_b8,*(undefined8 *)(lVar6 + (longlong)iVar5 * 0x18),iVar3);
            FUN_140e830ae(param_3,local_e4,&local_b8);
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~uStack_d4);
            FUN_1449c0562(&local_d8);
            lVar6 = local_f8;
            iVar5 = local_c8._4_4_;
            uVar4 = local_c8;
          } while (local_e0 != &local_98 ||
                   ((undefined1 *)CONCAT44(uStack_cc,uStack_d0) != local_88 ||
                   local_c8._4_4_ != iVar7));
        }
      }
      lVar8 = lVar8 + 0x158;
    } while (lVar8 != lVar6);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1408910a4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b4a65c FUN_146b4a65c body=455 status=ok
// SIG undefined FUN_146b4a65c(void)

void FUN_146b4a65c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  int local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_6c [4];
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_2;
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar9 = *(longlong *)(param_1 + 0xf8);
    local_80 = (longlong)*(int *)(param_1 + 0x100) * 0x158 + lVar9;
    do {
      plVar2 = *(longlong **)(lVar9 + 0x98);
      if (*(longlong **)(lVar9 + 0x98) == (longlong *)0x0) {
        plVar2 = *(longlong **)(lVar9 + 0xa8);
      }
      do {
        if (plVar2 == (longlong *)0x0) break;
        (**(code **)(*plVar2 + 0x88))(plVar2,&local_58);
        lVar3 = local_58;
        lVar7 = (longlong)local_50;
        if (lVar7 == 0) {
          iVar5 = 0;
        }
        else {
          lVar8 = 0;
          do {
            iVar5 = *(int *)(lVar3 + 8 + lVar8);
            iVar1 = iVar5 + -1;
            if (iVar5 == 0) {
              iVar1 = 0;
            }
            local_88 = iVar1 + 1 + (uint)(*(int *)(lVar9 + 0x78) == 0);
            local_68 = (undefined2 *)0x0;
            FUN_14125bce8(&local_68,*(undefined8 *)(lVar9 + 0x70),*(int *)(lVar9 + 0x78),0);
            FUN_1401aebe8(&local_68,*(undefined8 *)(lVar3 + lVar8),iVar1);
            puVar6 = &DAT_149dfb77a;
            if (local_60 != 0) {
              puVar6 = local_68;
            }
            iVar5 = local_60 + -1;
            if (local_60 == 0) {
              iVar5 = 0;
            }
            uVar4 = FUN_144a49b4a(iVar5,puVar6);
            iVar5 = FUN_146b4b698(param_1 + 0xa8,uVar4,&local_68);
            if (iVar5 == -1) {
              FUN_14482b35e(local_78,local_6c,&local_68);
            }
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar8 = lVar8 + 0x10;
            iVar5 = local_50;
          } while (lVar7 * 0x10 != lVar8);
        }
        FUN_1447a1747(local_58,iVar5);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        bVar10 = *(longlong **)(lVar9 + 0xa8) != plVar2;
        plVar2 = *(longlong **)(lVar9 + 0xa8);
      } while (bVar10);
      lVar9 = lVar9 + 0x158;
    } while (lVar9 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b4a824 FUN_146b4a824 body=112 status=ok
// SIG undefined FUN_146b4a824(void)

ulonglong FUN_146b4a824(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_146b4b698((longlong *)(param_1 + 0x58),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x58);
    puVar4 = (ulonglong *)(lVar3 + 0x10);
    if (puVar4 == (ulonglong *)0x0 || lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar4;
    }
  }
  return uVar7;
}



// FUNCTION 146b4a894 FUN_146b4a894 body=115 status=ok
// SIG undefined FUN_146b4a894(void)

ulonglong FUN_146b4a894(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_146b4b698((longlong *)(param_1 + 0xa8),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0xa8);
    puVar4 = (ulonglong *)(lVar3 + 0x10);
    if (puVar4 == (ulonglong *)0x0 || lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar4;
    }
  }
  return uVar7;
}



// FUNCTION 146b4a90e FUN_146b4a90e body=78 status=ok
// SIG undefined FUN_146b4a90e(void)

longlong FUN_146b4a90e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_2[1] == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = *param_2;
    lVar4 = (longlong)(int)param_2[1] << 4;
    lVar3 = 0;
    do {
      lVar1 = (**(code **)(*param_1 + 0x68))(param_1,lVar2);
      if (lVar1 != 0) {
        lVar3 = lVar3 + *(longlong *)(lVar1 + 0x58);
      }
      lVar2 = lVar2 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return lVar3;
}



// FUNCTION 146b4a95c FUN_146b4a95c body=479 status=ok
// SIG undefined FUN_146b4a95c(void)

void FUN_146b4a95c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  int local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xf8);
    lVar9 = 0;
    do {
      if (*(int *)(lVar3 + 0x90 + lVar9) != 3) {
        plVar4 = *(longlong **)(lVar3 + 0xa8 + lVar9);
        lVar6 = (**(code **)(*plVar4 + 0x40))(plVar4);
        if (1 < *(int *)(lVar6 + 8)) {
          local_60 = param_2;
          lVar6 = FUN_146b4bfd0(param_2);
          uVar7 = (**(code **)(*plVar4 + 0x30))(plVar4);
          FUN_1410b2022(lVar6,uVar7);
          uVar7 = (**(code **)(*plVar4 + 0x10))(plVar4);
          FUN_144a787a6(lVar6 + 0x80,uVar7);
          uVar7 = (**(code **)(*plVar4 + 0x48))(plVar4);
          FUN_144a787a6(lVar6 + 0x70,uVar7);
          uVar7 = (**(code **)(*plVar4 + 0x38))(plVar4);
          FUN_144a787a6(lVar6 + 0x50,uVar7);
          puVar8 = (undefined8 *)(**(code **)(*plVar4 + 0x40))(plVar4);
          iVar5 = *(int *)(puVar8 + 1) + -1;
          if (*(int *)(puVar8 + 1) == 0) {
            iVar5 = 0;
          }
          iVar2 = *(int *)(lVar3 + 0x78 + lVar9);
          local_68 = iVar5 + 1 + (uint)(iVar2 == 0);
          local_58 = 0;
          FUN_14125bce8(&local_58,*(undefined8 *)(lVar3 + 0x70 + lVar9),iVar2,0);
          FUN_1401aebe8(&local_58,*puVar8,iVar5);
          param_2 = local_60;
          if ((longlong *)(lVar6 + 0x60) == &local_58) {
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar6 + 0x60) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar6 + 0x60) = local_58;
            local_58 = 0;
            *(undefined4 *)(lVar6 + 0x68) = local_50;
            *(undefined4 *)(lVar6 + 0x6c) = local_4c;
            param_2 = local_60;
          }
          uVar7 = (**(code **)(*plVar4 + 0x18))(plVar4);
          FUN_144a787a6(lVar6 + 0x90,uVar7);
          *(bool *)(lVar6 + 0xa0) = *(int *)(lVar3 + 0x90 + lVar9) == 2;
        }
      }
      lVar9 = lVar9 + 0x158;
    } while ((longlong)iVar1 * 0x158 - lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b4ab3c FUN_146b4ab3c body=296 status=ok
// SIG undefined FUN_146b4ab3c(void)

void FUN_146b4ab3c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar2 = param_1 + 0xb8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0xd0);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      if (*(int *)(*(longlong *)(*local_78 + 0x20 + (longlong)iStack_5c * 0x30) + 0x90) == 2) {
        FUN_14482b35e(param_2,&local_50,*local_78 + (longlong)iStack_5c * 0x30,0);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4ac66 FUN_146b4ac66 body=132 status=ok
// SIG undefined FUN_146b4ac66(void)

uint FUN_146b4ac66(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar4 = iVar3 - 1;
  if (iVar3 == 0) {
    uVar4 = uVar6;
  }
  uVar2 = FUN_144a49b4a(uVar4,puVar5);
  iVar3 = FUN_146b4b698((longlong *)(param_1 + 0xa8),uVar2,param_2);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if ((lVar1 + (longlong)iVar3 * 0x30 + 0x10U & 0xffffffffffffffef) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)(*(int *)(*(longlong *)(lVar1 + (longlong)iVar3 * 0x30 + 0x20) + 0x90) == 2);
    }
  }
  return uVar6;
}



// FUNCTION 146b4acea FUN_146b4acea body=221 status=ok
// SIG undefined FUN_146b4acea(void)

undefined8 FUN_146b4acea(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar7 = *(longlong *)(param_1 + 0xf8);
    lVar6 = (longlong)*(int *)(param_1 + 0x100) * 0x158 + lVar7;
    do {
      if (*(int *)(lVar7 + 0x90) == 1) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(lVar7 + 0x98) + 0x150))();
        plVar3 = (longlong *)(**(code **)(**(longlong **)(lVar7 + 0xa8) + 0x150))();
        iVar1 = (int)plVar2[1];
        if (iVar1 == (int)plVar3[1]) {
          if (1 < iVar1) {
            lVar8 = 0;
            while( true ) {
              uVar4 = *(ushort *)(*plVar2 + lVar8);
              uVar5 = (ulonglong)uVar4;
              uVar9 = *(ushort *)(*plVar3 + lVar8);
              if (uVar4 != uVar9) break;
              if (uVar4 == 0) goto LAB_146b4ada0;
LAB_146b4ad73:
              lVar8 = lVar8 + 2;
            }
            if ((uVar9 | uVar4) < 0x80) {
              uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              uVar10 = (ulonglong)uVar9;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_146b4ad73;
            }
            if (uVar4 != uVar9) {
              return 1;
            }
          }
        }
        else if ((int)plVar3[1] + iVar1 != 1) {
          return 1;
        }
      }
LAB_146b4ada0:
      lVar7 = lVar7 + 0x158;
    } while (lVar7 != lVar6);
  }
  return 0;
}



// FUNCTION 146b4ae22 FUN_146b4ae22 body=92 status=ok
// SIG undefined FUN_146b4ae22(void)

undefined8 FUN_146b4ae22(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar4 = 0;
    do {
      if ((*(int *)(lVar2 + 0x90 + lVar4) != 3) &&
         (cVar3 = (**(code **)(**(longlong **)(lVar2 + 0xa8 + lVar4) + 0x250))(), cVar3 != '\0')) {
        return 1;
      }
      lVar4 = lVar4 + 0x158;
    } while ((longlong)iVar1 * 0x158 - lVar4 != 0);
  }
  return 0;
}



// FUNCTION 146b4ae7e FUN_146b4ae7e body=313 status=ok
// SIG undefined FUN_146b4ae7e(void)

undefined4 * FUN_146b4ae7e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b4afb8(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar5 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar5;
  local_40[4] = *(undefined8 *)(puVar1 + 4);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
  *(undefined4 *)(local_40 + 3) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146b4b0a6(param_1,uVar7,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x2c) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146b4b202(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4afb8 FUN_146b4afb8 body=238 status=ok
// SIG undefined FUN_146b4afb8(void)

int * FUN_146b4afb8(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146b4b0a6 FUN_146b4b0a6 body=106 status=ok
// SIG undefined FUN_146b4b0a6(void)

undefined8 FUN_146b4b0a6(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_146b4b110(), iVar11 != -1)) {
    lVar2 = *param_1;
    lVar12 = (longlong)iVar11 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(lVar2 + 0x20 + lVar12) = *(undefined8 *)(param_3 + 8);
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar12);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar12);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146b4b188(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 146b4b110 FUN_146b4b110 body=119 status=ok
// SIG undefined FUN_146b4b110(void)

int FUN_146b4b110(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b4b188 FUN_146b4b188 body=122 status=ok
// SIG undefined FUN_146b4b188(void)

void FUN_146b4b188(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 146b4b202 FUN_146b4b202 body=450 status=ok
// SIG undefined FUN_146b4b202(void)

void FUN_146b4b202(longlong *param_1)

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
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
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



// FUNCTION 146b4b3c6 FUN_146b4b3c6 body=355 status=ok
// SIG undefined FUN_146b4b3c6(void)

undefined4 * FUN_146b4b3c6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b4b52a(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_40 = *puVar1;
  iVar10 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[4] = *(undefined8 *)(puVar2 + 4);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *(undefined4 *)(local_40 + 2) = *puVar2;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar3;
  *(undefined4 *)(local_40 + 3) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar5;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*local_40;
    iVar10 = *(int *)(local_40 + 1) + -1;
  }
  uVar7 = FUN_144a49b4a(iVar10,puVar11);
  cVar6 = FUN_146b4b618(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x2c) = uVar7;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146b4b7e2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b4b52a FUN_146b4b52a body=238 status=ok
// SIG undefined FUN_146b4b52a(void)

int * FUN_146b4b52a(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146b4b618 FUN_146b4b618 body=127 status=ok
// SIG undefined FUN_146b4b618(void)

undefined8 FUN_146b4b618(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_146b4b698(), iVar10 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x30);
    if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x30) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146b4b768(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 146b4b698 FUN_146b4b698 body=207 status=ok
// SIG undefined FUN_146b4b698(void)

int FUN_146b4b698(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_146b4b6e2:
      lVar10 = (longlong)iVar1 * 0x30;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_146b4b75c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146b4b75c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146b4b74d;
    }
  }
  return -1;
LAB_146b4b75c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146b4b74d:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146b4b6e2;
}



// FUNCTION 146b4b768 FUN_146b4b768 body=122 status=ok
// SIG undefined FUN_146b4b768(void)

void FUN_146b4b768(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 146b4b7e2 FUN_146b4b7e2 body=480 status=ok
// SIG undefined FUN_146b4b7e2(void)

void FUN_146b4b7e2(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x30;
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
        *(int *)(lVar3 + 0x2c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar11) =
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



// FUNCTION 146b4b9c4 FUN_146b4b9c4 body=444 status=ok
// SIG undefined FUN_146b4b9c4(void)

undefined4 * FUN_146b4b9c4(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  void *_Src;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b4b52a(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_48 = 0;
  iVar11 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_48 + 1) = iVar11;
  if ((longlong)iVar11 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)(local_48 + 2) = *puVar2;
    *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
    *(undefined4 *)(local_48 + 3) = uVar5;
    *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
    local_48[4] = *(undefined8 *)(puVar2 + 4);
    *(undefined4 *)(local_48 + 5) = 0xffffffff;
    puVar12 = &DAT_149dfb77a;
    iVar11 = 0;
  }
  else {
    FUN_1446dd670(local_48,iVar11,0);
    memcpy((void *)*local_48,_Src,(longlong)iVar11 * 2);
    iVar11 = *(int *)(local_48 + 1);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)(local_48 + 2) = *puVar2;
    *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
    *(undefined4 *)(local_48 + 3) = uVar5;
    *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
    local_48[4] = *(undefined8 *)(puVar2 + 4);
    *(undefined4 *)(local_48 + 5) = 0xffffffff;
    if (iVar11 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)*local_48;
    }
  }
  local_54 = local_50[0];
  iVar3 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar3 = 0;
  }
  uVar8 = FUN_144a49b4a(iVar3,puVar12);
  cVar7 = FUN_146b4b618(param_1,uVar8,local_48,&local_54);
  uVar4 = local_54;
  if (cVar7 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x2c) = uVar8;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 5) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_146b4b7e2(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4bb82 FUN_146b4bb82 body=131 status=ok
// SIG undefined FUN_146b4bb82(void)

int FUN_146b4bb82(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      uVar4 = *param_3;
      iVar2 = *(int *)(param_3 + 1);
      do {
        lVar7 = (longlong)iVar1 * 0x20;
        if (*(int *)(lVar3 + 8 + lVar7) == iVar2) {
          if (iVar2 == 0) {
            return iVar1;
          }
          iVar5 = FUN_144a54874(*(undefined8 *)(lVar3 + lVar7),uVar4,(longlong)iVar2);
          if (iVar5 == 0) {
            return iVar1;
          }
        }
        iVar1 = *(int *)(lVar3 + 0x18 + lVar7);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146b4bc06 FUN_146b4bc06 body=174 status=ok
// SIG undefined FUN_146b4bc06(void)

void FUN_146b4bc06(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f2ec10;
  FUN_146b52611(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4bcb4(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4bcb4(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4be26(param_1 + 1);
  return;
}



// FUNCTION 146b4bcb4 FUN_146b4bcb4 body=52 status=ok
// SIG undefined FUN_146b4bcb4(void)

void FUN_146b4bcb4(longlong *param_1)

{
  FUN_146b4bce8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b4bce8 FUN_146b4bce8 body=316 status=ok
// SIG undefined FUN_146b4bce8(void)

void FUN_146b4bce8(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4be26 FUN_146b4be26 body=52 status=ok
// SIG undefined FUN_146b4be26(void)

void FUN_146b4be26(longlong *param_1)

{
  FUN_146b4be5a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b4be5a FUN_146b4be5a body=89 status=ok
// SIG undefined FUN_146b4be5a(void)

void FUN_146b4be5a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 146b4beb4 FUN_146b4beb4 body=283 status=ok
// SIG undefined FUN_146b4beb4(void)

longlong FUN_146b4beb4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 == iVar4) && (uStack_50 == plVar1)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = (**(code **)(*param_1 + 0x68))(param_1,(longlong)iStack_64 * 0x18 + *local_80);
      if (lVar2 != 0) {
        lVar3 = lVar3 + *(longlong *)(lVar2 + 0x58);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar4));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4bfd0 FUN_146b4bfd0 body=62 status=ok
// SIG undefined FUN_146b4bfd0(void)

longlong FUN_146b4bfd0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b4c050(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xa8 + *param_1;
  FUN_146b4c00e(lVar2);
  return lVar2;
}



// FUNCTION 146b4c00e FUN_146b4c00e body=66 status=ok
// SIG undefined FUN_146b4c00e(void)

void FUN_146b4c00e(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
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
  return;
}



// FUNCTION 146b4c050 FUN_146b4c050 body=146 status=ok
// SIG undefined FUN_146b4c050(void)

void FUN_146b4c050(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b4c0e4 FUN_146b4c0e4 body=132 status=ok
// SIG undefined FUN_146b4c0e4(void)

undefined8 * FUN_146b4c0e4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1410b2022();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_1410b2022(param_1 + 10,param_2 + 0x50);
  return param_1;
}



// FUNCTION 146b4c168 FUN_146b4c168 body=115 status=ok
// SIG undefined FUN_146b4c168(void)

undefined8 * FUN_146b4c168(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146b4c1dc FUN_146b4c1dc body=38 status=ok
// SIG undefined FUN_146b4c1dc(void)

undefined8 FUN_146b4c1dc(undefined8 param_1,int param_2)

{
  FUN_146b4c642();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b4c202 FUN_146b4c202 body=494 status=ok
// SIG undefined FUN_146b4c202(void)

void FUN_146b4c202(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  int *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  iVar6 = (int)param_2[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  iVar5 = 0;
  if (iVar6 != 0) {
    FUN_140504644(&local_78);
    iVar5 = 0;
    if ((longlong)(int)param_2[1] != 0) {
      lVar11 = *param_2;
      lVar7 = (longlong)(int)param_2[1] << 4;
      do {
        local_88 = 0;
        uStack_80 = 0;
        cVar3 = FUN_146b44046(lVar11,&local_88);
        uVar2 = uStack_70;
        if (cVar3 == '\0') {
          local_88 = 0;
          uStack_80 = 0;
        }
        lVar9 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        if (uStack_70._4_4_ < uVar4) {
          FUN_140c60952(&local_78,uVar2 & 0xffffffff);
        }
        piVar12 = local_78 + lVar9 * 4;
        *piVar12 = (int)local_88;
        piVar12[1] = local_88._4_4_;
        piVar12[2] = (int)uStack_80;
        piVar12[3] = uStack_80._4_4_;
        lVar11 = lVar11 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
      iVar5 = (int)param_2[1];
    }
  }
  iVar5 = iVar5 + (int)param_3[1];
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
    FUN_1448f21ac(param_3,iVar5);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if ((longlong)(int)uStack_70 != 0) {
    piVar8 = local_78 + (longlong)(int)uStack_70 * 4;
    piVar12 = local_78;
    do {
      if (((piVar12[1] == 0 && *piVar12 == 0) && piVar12[2] == 0) && piVar12[3] == 0) {
        iVar6 = (int)param_3[1];
        uVar4 = iVar6 + 1;
        *(uint *)(param_3 + 1) = uVar4;
        uVar10 = 0xffffffffffffffff;
      }
      else {
        iVar6 = *(uint *)(param_1 + 0x10) + 1;
        lVar11 = (ulonglong)*(uint *)(param_1 + 0x10) << 4;
        do {
          lVar11 = lVar11 + -0x10;
          iVar6 = iVar6 + -1;
          if (iVar6 < 1) {
            uVar10 = 0xffffffffffffffff;
            goto LAB_146b4c36b;
          }
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar11);
          lVar7 = (**(code **)(*plVar1 + 0x218))(plVar1,piVar12);
        } while (lVar7 == 0);
        uVar10 = *(undefined8 *)(lVar7 + 0x38);
LAB_146b4c36b:
        iVar6 = (int)param_3[1];
        uVar4 = iVar6 + 1;
        *(uint *)(param_3 + 1) = uVar4;
      }
      if (*(uint *)((longlong)param_3 + 0xc) < uVar4) {
        FUN_14479d316(param_3,iVar6);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar6 * 8) = uVar10;
      piVar12 = piVar12 + 4;
    } while (piVar12 != piVar8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (local_78 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b4c3f2 FUN_146b4c3f2 body=188 status=ok
// SIG undefined FUN_146b4c3f2(void)

undefined8 FUN_146b4c3f2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  cVar2 = FUN_146b44046(param_2);
  uVar4 = 0xffffffffffffffff;
  if (cVar2 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    iVar5 = *(uint *)(param_1 + 0x10) + 1;
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x10) << 4;
    do {
      lVar6 = lVar6 + -0x10;
      iVar5 = iVar5 + -1;
      if (iVar5 < 1) {
        uVar4 = 0xffffffffffffffff;
        goto LAB_146b4c481;
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar6);
      lVar3 = (**(code **)(*plVar1 + 0x218))(plVar1,&local_48);
    } while (lVar3 == 0);
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
LAB_146b4c481:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


