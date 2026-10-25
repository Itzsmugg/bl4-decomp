// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146c017d0 FUN_146c017d0 body=41 status=ok
// SIG undefined FUN_146c017d0(void)

void FUN_146c017d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c017f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146c017fa FUN_146c017fa body=1406 status=ok
// SIG undefined FUN_146c017fa(void)

ulonglong FUN_146c017fa(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                       byte param_5,byte param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_f8 [32];
  byte local_d8;
  byte local_d0;
  byte local_c4;
  char local_c3;
  byte local_c2;
  byte local_c1;
  longlong *local_c0;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  longlong local_68 [5];
  
  bVar3 = (byte)param_4;
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((*(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) == 0) &&
       (*(int *)(param_2 + 0x1e8) * 0x200 + *(int *)(param_2 + 0x1ec) == 0)) &&
      (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) == 0)) &&
     (((param_6 == 0 || (*(longlong *)(param_1 + 0x208) == 0)) ||
      (cVar4 = FUN_146c01d9a(), cVar4 != '\0')))) {
    local_d0 = param_6;
    local_d8 = param_5;
    uVar8 = FUN_146c005f0(param_1,param_2,param_3,param_4);
    if (param_7 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_68[4] ^ (ulonglong)auStack_f8);
    }
  }
  else {
    FUN_14582f278(param_1);
    cVar4 = (char)param_3;
    if ((cVar4 != '\0') && (*(char *)(param_2 + 0x70) == '\x01')) {
      uStack_a0 = DAT_14c846378;
      local_a8 = DAT_14c846370;
      FUN_146c01e94(param_1);
    }
    if ((bVar3 != 0) && (*(char *)(param_2 + 0x90) == '\x01')) {
      uStack_a0 = DAT_14c846358;
      local_a8 = DAT_14c846350;
      FUN_146c01f68(param_1);
    }
    local_c4 = param_5;
    local_c3 = cVar4;
    local_c2 = bVar3;
    if ((param_5 != 0) && (*(char *)(param_2 + 0xb0) == '\x01')) {
      local_a8 = DAT_14c84635c;
      FUN_146c02040(param_1);
    }
    bVar17 = param_7 != (longlong *)0x0;
    local_c0 = param_7;
    plVar15 = local_68;
    if (bVar17) {
      plVar15 = param_7;
    }
    local_c1 = param_6;
    param_6 = *(longlong *)(param_2 + 0x208) != 0 & param_6;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_144a127d2(plVar15,*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24),1);
    local_98 = DAT_14c8464f0;
    local_a8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_90 = DAT_14c846330;
    local_88 = DAT_14c846338;
    local_7c = DAT_14c846338;
    local_84 = DAT_14c846330;
    local_78 = DAT_14c84635c;
    local_70 = 0;
    local_6e = 0;
    uVar5 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    if (0 < (int)uVar5) {
      uVar8 = 0;
      do {
        uVar7 = 0xffffffff;
        if (((longlong)uVar8 <
             (longlong)(*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(param_2 + 0x28) + (uVar8 >> 9 & 0x7fffff) * 8) +
                               (ulonglong)((uint)uVar8 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          local_d0 = local_c4;
          local_d8 = local_c2;
          FUN_146c02114(param_2,uVar8 & 0xffffffff,&local_a8,local_c3);
          uVar7 = FUN_146c02208(param_1,&local_a8);
        }
        *(undefined4 *)(*plVar15 + uVar8 * 4) = uVar7;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
    }
    if (*(char *)(param_2 + 0x1a8) != '\0') {
      FUN_14582eef4(param_1,0);
    }
    if (bVar17 || param_6 != 0) {
      uVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
      plVar11 = local_c0;
      if (local_c0 == (longlong *)0x0) {
        plVar11 = local_68;
      }
      FUN_144a127d2(plVar11 + 2,uVar5,1);
      if (0 < (int)uVar5) {
        uVar8 = 0;
        do {
          *(undefined4 *)(plVar11[2] + uVar8 * 4) = 0xffffffff;
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
    }
    uVar14 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar5 = 0;
    if ((uVar14 != 0) &&
       (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar16 = 1;
      uVar9 = 1;
      if (1 < (int)uVar14) {
        uVar16 = uVar14;
      }
      do {
        uVar5 = uVar16;
        if (uVar16 == uVar9) break;
        uVar10 = uVar9 >> 9;
        uVar13 = uVar9 & 0x1ff;
        uVar5 = uVar9;
        uVar9 = uVar9 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar10] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
    if (uVar5 != uVar14) {
      plVar11 = local_68;
      if (local_c0 != (longlong *)0x0) {
        plVar11 = local_c0;
      }
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
        uVar8 = (ulonglong)(uVar5 & 0x1ff);
        lVar2 = *plVar15;
        local_b4 = *(undefined4 *)(lVar2 + (longlong)*(int *)(lVar1 + uVar8 * 0xc) * 4);
        local_b0 = *(undefined4 *)(lVar2 + (longlong)*(int *)(lVar1 + 4 + uVar8 * 0xc) * 4);
        local_ac = *(undefined4 *)(lVar2 + (longlong)*(int *)(lVar1 + 8 + uVar8 * 0xc) * 4);
        iVar6 = -1;
        if (*(char *)(param_2 + 0x1a8) == '\x01') {
          iVar6 = FUN_146bc96d4(param_2,uVar5);
        }
        uVar7 = FUN_146c01152(param_1,&local_b4,iVar6);
        iVar12 = iVar6 + 1;
        if (iVar6 + 1 <= *(int *)(param_1 + 0x1b0)) {
          iVar12 = *(int *)(param_1 + 0x1b0);
        }
        *(int *)(param_1 + 0x1b0) = iVar12;
        if (bVar17 || param_6 != 0) {
          *(undefined4 *)(plVar11[2] + (longlong)(int)uVar5 * 4) = uVar7;
        }
        uVar16 = uVar5 + 1;
        if ((int)(uVar5 + 1) < (int)uVar14) {
          uVar16 = uVar14;
        }
        do {
          uVar9 = uVar16;
          if (uVar16 - 1 == uVar5) break;
          uVar5 = uVar5 + 1;
          uVar9 = uVar5;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar5 >> 9) * 8) +
                                             (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
        uVar5 = uVar9;
      } while (uVar5 != uVar14);
    }
    if ((local_c1 != 0) && (*(longlong *)(param_2 + 0x208) != 0)) {
      FUN_14582ed12(param_1);
      FUN_146c02390(*(undefined8 *)(param_1 + 0x208),*(undefined8 *)(param_2 + 0x208),1,0);
      FUN_146c03172(*(undefined8 *)(param_1 + 0x208),plVar15,*(undefined8 *)(param_2 + 0x208));
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
    UNLOCK();
    LOCK();
    uVar5 = *(uint *)(param_1 + 0x218);
    *(uint *)(param_1 + 0x218) = *(uint *)(param_2 + 0x218);
    uVar8 = (ulonglong)uVar5;
    UNLOCK();
    if (local_68[2] != 0) {
      uVar8 = FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      uVar8 = FUN_1400020a8();
    }
  }
  if ((local_68[4] ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c01d9a FUN_146c01d9a body=157 status=ok
// SIG undefined FUN_146c01d9a(void)

undefined8 FUN_146c01d9a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar2 = (**(code **)(*param_1 + 0xa0))();
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1[4] + lVar4 * 8);
      if (*(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24) != 0) goto LAB_146c01e2e;
      lVar4 = lVar4 + 1;
      iVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    } while (lVar4 < iVar2);
  }
  iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1[6] + lVar4 * 8);
      if (*(int *)(lVar1 + 0x20) * 0x200 + *(int *)(lVar1 + 0x24) != 0) goto LAB_146c01e2e;
      lVar4 = lVar4 + 1;
      iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
    } while (lVar4 < iVar2);
  }
  lVar4 = param_1[8];
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) == 0)) {
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  else {
LAB_146c01e2e:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 146c01e94 FUN_146c01e94 body=211 status=ok
// SIG undefined FUN_146c01e94(void)

void FUN_146c01e94(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x70) == '\0') {
    FUN_146bff64e(local_40);
    uVar3 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    FUN_146c03c80(local_40,uVar3);
    if (0 < (int)uVar3) {
      uVar2 = 0;
      do {
        lVar1 = *(longlong *)(local_38[0] + (ulonglong)(uVar2 >> 9) * 8);
        *(undefined4 *)(lVar1 + 8 + (ulonglong)(uVar2 & 0x1ff) * 0xc) = *(undefined4 *)(param_2 + 1)
        ;
        *(undefined8 *)(lVar1 + (ulonglong)(uVar2 & 0x1ff) * 0xc) = *param_2;
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
    if (local_40 != (undefined1 *)(param_1 + 0x58)) {
      FUN_146c4de90((undefined1 *)(param_1 + 0x58),local_40);
    }
    FUN_146c40926(local_38,0);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c01f68 FUN_146c01f68 body=214 status=ok
// SIG undefined FUN_146c01f68(void)

void FUN_146c01f68(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_146bff64e(local_40);
    puVar1 = (undefined1 *)(param_1 + 0x78);
    if (local_40 != puVar1) {
      FUN_146c4de90(puVar1,local_40);
    }
    FUN_146c40926(local_38,0);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    uVar4 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    FUN_146c03c80(puVar1,uVar4);
    if (0 < (int)uVar4) {
      uVar3 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + (ulonglong)(uVar3 >> 9) * 8);
        *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *(undefined4 *)(param_2 + 1)
        ;
        *(undefined8 *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *param_2;
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c02040 FUN_146c02040 body=210 status=ok
// SIG undefined FUN_146c02040(void)

void FUN_146c02040(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_146bff6b0(local_48);
    puVar1 = (undefined1 *)(param_1 + 0x98);
    if (local_48 != puVar1) {
      FUN_146c4e040(puVar1,local_48);
    }
    FUN_146c409ee(local_40,0);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    FUN_146c03d58(puVar1,uVar3);
    if (0 < (int)uVar3) {
      uVar2 = 0;
      do {
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(uVar2 >> 9) * 8) +
         (ulonglong)(uVar2 & 0x1ff) * 8) = *param_2;
        uVar2 = uVar2 + 1;
      } while (uVar3 != uVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c02114 FUN_146c02114 body=243 status=ok
// SIG undefined FUN_146c02114(void)

void FUN_146c02114(longlong param_1,uint param_2,undefined8 *param_3,byte param_4,byte param_5,
                  byte param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    uVar4 = (ulonglong)(param_2 >> 9);
    uVar5 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 8) + uVar5 * 2) -
                1U) < 0xfffe) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
      param_3[2] = *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18);
      puVar1 = (undefined8 *)(lVar2 + uVar5 * 0x18);
      uVar3 = puVar1[1];
      *param_3 = *puVar1;
      param_3[1] = uVar3;
      *(undefined2 *)((longlong)param_3 + 0x39) = 0;
      *(undefined1 *)(param_3 + 7) = 0;
      if ((param_4 & *(byte *)(param_1 + 0x70)) == 1) {
        *(undefined1 *)(param_3 + 7) = 1;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc);
        param_3[3] = *(undefined8 *)(lVar2 + uVar5 * 0xc);
      }
      if ((param_5 & *(byte *)(param_1 + 0x90)) == 1) {
        *(undefined1 *)((longlong)param_3 + 0x39) = 1;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + uVar4 * 8);
        *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc);
        *(undefined8 *)((longlong)param_3 + 0x24) = *(undefined8 *)(lVar2 + uVar5 * 0xc);
      }
      if ((param_6 & *(byte *)(param_1 + 0xb0)) == 1) {
        *(undefined1 *)((longlong)param_3 + 0x3a) = 1;
        param_3[6] = *(undefined8 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar4 * 8) + uVar5 * 8);
      }
    }
  }
  return;
}



// FUNCTION 146c02208 FUN_146c02208 body=390 status=ok
// SIG undefined FUN_146c02208(void)

int FUN_146c02208(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = FUN_146c08aba(param_1 + 0x20);
  FUN_146bedee6(param_1 + 8,param_2,iVar2);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if (*(char *)(param_2 + 0x38) == '\x01') {
      local_28 = *(undefined4 *)(param_2 + 0x20);
      local_30 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      local_28 = DAT_14c846378;
      local_30 = DAT_14c846370;
    }
    FUN_146c08f30(param_1 + 0x58,&local_30,iVar2);
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (*(char *)(param_2 + 0x39) == '\x01') {
      local_28 = *(undefined4 *)(param_2 + 0x2c);
      local_30 = *(undefined8 *)(param_2 + 0x24);
    }
    else {
      local_28 = DAT_14c846358;
      local_30 = DAT_14c846350;
    }
    FUN_146c08f30(param_1 + 0x78,&local_30,iVar2);
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    puVar3 = &DAT_14c84635c;
    if (*(char *)(param_2 + 0x3a) != '\0') {
      puVar3 = (undefined8 *)(param_2 + 0x30);
    }
    local_30 = *puVar3;
    FUN_146c08f96(param_1 + 0x98,&local_30,iVar2);
  }
  if (iVar2 < *(int *)(param_1 + 0xb8) * 0x200 + *(int *)(param_1 + 0xbc)) {
    FUN_146c8b31e(param_1 + 0xb8,iVar2);
  }
  FUN_146c86b80(param_1 + 0xb8,iVar2);
  plVar1 = *(longlong **)(param_1 + 0x208);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,iVar2,0);
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    LOCK();
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  UNLOCK();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c02390 FUN_146c02390 body=3553 status=ok
// SIG undefined FUN_146c02390(void)

void FUN_146c02390(longlong *param_1,longlong *param_2,byte param_3,char param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_158 [38];
  byte local_132;
  char local_131;
  longlong **local_130;
  undefined8 local_128;
  longlong **local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  longlong **local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong *local_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c0;
  longlong local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar5 = (**(code **)(*param_1 + 0xa0))();
  iVar6 = (**(code **)(*param_2 + 0xa0))(param_2);
  iVar7 = iVar5;
  if (iVar5 < iVar6) {
    iVar7 = iVar6;
  }
  if (param_3 != 0 || param_4 != '\0') {
    iVar7 = iVar6;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,iVar7);
  if (param_3 != 0) {
    iVar5 = 0;
  }
  iVar7 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (iVar5 < iVar7) {
    lVar10 = (longlong)iVar5;
    do {
      FUN_146c19cce(*(undefined8 *)(param_1[4] + lVar10 * 8));
      lVar10 = lVar10 + 1;
      iVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
    } while (lVar10 < iVar5);
  }
  iVar7 = (**(code **)(*param_1 + 0xb0))(param_1);
  iVar6 = (**(code **)(*param_2 + 0xb0))(param_2);
  iVar5 = iVar7;
  if (iVar7 < iVar6) {
    iVar5 = iVar6;
  }
  if (param_3 != 0 || param_4 != '\0') {
    iVar5 = iVar6;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,iVar5);
  iVar5 = 0;
  if (param_3 == 0) {
    iVar5 = iVar7;
  }
  iVar7 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (iVar5 < iVar7) {
    lVar10 = (longlong)iVar5;
    do {
      FUN_146c19dca(*(undefined8 *)(param_1[6] + lVar10 * 8));
      lVar10 = lVar10 + 1;
      iVar5 = (**(code **)(*param_1 + 0xb0))(param_1);
    } while (lVar10 < iVar5);
  }
  lVar10 = param_2[8];
  if (param_3 == 0 && param_4 == '\0') {
    bVar15 = true;
    if (lVar10 != 0) goto LAB_146c024b7;
    lVar10 = param_1[8];
  }
  bVar15 = lVar10 != 0;
LAB_146c024b7:
  local_132 = param_3;
  if (((byte)(bVar15 ^ 1U | param_3) == 1) && (lVar10 = param_1[8], lVar10 != 0)) {
    param_1[8] = 0;
    FUN_146c543c2(lVar10);
    FUN_1400020a8(lVar10);
  }
  if (bVar15 != false) {
    FUN_146c17f82(param_1);
  }
  bVar4 = local_132;
  if (param_3 == 0 && param_4 == '\0') {
    bVar15 = true;
    if (param_2[9] == 0) {
      bVar15 = param_1[9] != 0;
    }
  }
  else {
    bVar15 = param_2[9] != 0;
  }
  if (((byte)(bVar15 ^ 1U | local_132) == 1) &&
     (puVar1 = (undefined8 *)param_1[9], puVar1 != (undefined8 *)0x0)) {
    param_1[9] = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (bVar15) {
    FUN_14582ed9a(param_1);
  }
  iVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
  iVar6 = (**(code **)(*param_2 + 0xc0))(param_2);
  iVar7 = iVar5;
  if (iVar5 < iVar6) {
    iVar7 = iVar6;
  }
  if (param_3 != 0 || param_4 != '\0') {
    iVar7 = iVar6;
  }
  (**(code **)(*param_1 + 200))(param_1,iVar7);
  if (bVar4 != 0) {
    iVar5 = 0;
  }
  iVar7 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (iVar5 < iVar7) {
    lVar10 = (longlong)iVar5;
    do {
      FUN_1411b3144(*(undefined8 *)(param_1[0xc] + lVar10 * 8),0);
      if ((*(longlong *)(*(longlong *)(param_1[0xc] + lVar10 * 8) + 8) == 0) &&
         (iVar5 = (**(code **)(*param_2 + 0xc0))(param_2), lVar10 < iVar5)) {
        *(undefined8 *)(*(longlong *)(param_1[0xc] + lVar10 * 8) + 8) =
             *(undefined8 *)(*(longlong *)(param_2[0xc] + lVar10 * 8) + 8);
      }
      lVar10 = lVar10 + 1;
      iVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
    } while (lVar10 < iVar5);
  }
  iVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
  iVar6 = (**(code **)(*param_2 + 0xd0))(param_2);
  iVar5 = iVar7;
  if (iVar7 < iVar6) {
    iVar5 = iVar6;
  }
  if (param_3 != 0 || param_4 != '\0') {
    iVar5 = iVar6;
  }
  (**(code **)(*param_1 + 0xd8))(param_1,iVar5);
  iVar5 = 0;
  if (bVar4 == 0) {
    iVar5 = iVar7;
  }
  iVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (iVar5 < iVar7) {
    lVar10 = (longlong)iVar5;
    do {
      FUN_146c19ed2(*(undefined8 *)(param_1[10] + lVar10 * 8));
      if ((*(longlong *)(*(longlong *)(param_1[10] + lVar10 * 8) + 8) == 0) &&
         (iVar5 = (**(code **)(*param_2 + 0xd0))(param_2), lVar10 < iVar5)) {
        *(undefined8 *)(*(longlong *)(param_1[10] + lVar10 * 8) + 8) =
             *(undefined8 *)(*(longlong *)(param_2[10] + lVar10 * 8) + 8);
      }
      lVar10 = lVar10 + 1;
      iVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
    } while (lVar10 < iVar5);
  }
  local_131 = param_4;
  if (bVar4 == 0) {
    if (param_4 != '\0') {
      plVar13 = param_1 + 0xe;
      FUN_146c43808(&local_98,plVar13);
      plVar12 = param_1 + 0x1c;
      FUN_146c43a0c(&local_e8,plVar12);
      if ((int)param_1[0xf] != *(int *)((longlong)param_1 + 0xa4)) {
        FUN_146c54456(plVar13);
        FUN_146c5459a(plVar13);
      }
      if ((int)param_1[0x1d] != *(int *)((longlong)param_1 + 0x114)) {
        FUN_146c546ba(plVar12);
        FUN_146c547fe(plVar12);
      }
      if (*(int *)((longlong)param_1 + 0x14) < 0) {
        *(undefined4 *)(param_1 + 2) = 0;
        FUN_146c54426(param_1 + 1);
      }
      else {
        *(undefined4 *)(param_1 + 2) = 0;
      }
      local_108 = 0x100000000;
      local_f8._0_4_ = 0xffffffff;
      local_f8._4_4_ = 0;
      local_f0 = 0;
      iVar5 = 0;
      local_100 = &local_88;
      if (local_70 != 0) {
        FUN_1449c0562(&local_108);
        iVar5 = local_70;
      }
      local_118._0_4_ = (uint)local_f8;
      local_118._4_4_ = local_f8._4_4_;
      local_110 = local_f0;
      local_10c = local_ec;
      local_128 = local_108;
      local_120 = local_100;
      local_130 = &local_98;
      if ((local_f8._4_4_ != iVar5) || (local_100 != &local_88)) {
        do {
          if ((int)param_2[0xf] != *(int *)((longlong)param_2 + 0xa4)) {
            plVar13 = *local_130;
            lVar8 = (longlong)local_118._4_4_;
            lVar10 = plVar13[lVar8 * 3];
            uVar3 = (uint)((ulonglong)lVar10 >> 0x10);
            uVar14 = (uint)lVar10 & 0xffff;
            plVar12 = (longlong *)param_2[0x16];
            if ((longlong *)param_2[0x16] == (longlong *)0x0) {
              plVar12 = param_2 + 0x15;
            }
            iVar7 = *(int *)((longlong)plVar12 +
                            (ulonglong)
                            ((int)param_2[0x17] - 1U &
                            (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar14) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) * 4);
            if (iVar7 != -1) {
              do {
                if (*(longlong *)(param_2[0xe] + (longlong)iVar7 * 0x18) == lVar10) {
                  lVar2 = plVar13[lVar8 * 3 + 1];
                  plVar13[lVar8 * 3 + 1] = 0;
                  FUN_146c18154(param_1,lVar10,lVar2);
                  break;
                }
                iVar7 = *(int *)(param_2[0xe] + (longlong)iVar7 * 0x18 + 0x10);
              } while (iVar7 != -1);
            }
          }
          local_118._0_4_ = (uint)local_118 & ~local_128._4_4_;
          FUN_1449c0562(&local_128);
        } while (local_130 != &local_98 || (local_120 != &local_88 || local_118._4_4_ != iVar5));
      }
      local_108 = 0x100000000;
      local_f8 = 0xffffffff;
      local_f0 = 0;
      iVar5 = 0;
      local_100 = (longlong **)&local_d8;
      if (local_c0 != 0) {
        FUN_1449c0562(&local_108);
        iVar5 = local_c0;
      }
      local_118 = local_f8;
      uVar9 = local_118;
      local_110 = local_f0;
      local_10c = local_ec;
      local_128 = local_108;
      local_120 = local_100;
      local_118._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
      local_130 = (longlong **)&local_e8;
      if ((local_118._4_4_ != iVar5) || (local_100 != (longlong **)&local_d8)) {
        iVar7 = local_118._4_4_;
        local_118 = uVar9;
        do {
          if ((int)param_2[0x1d] != *(int *)((longlong)param_2 + 0x114)) {
            lVar10 = *(longlong *)((longlong)*local_130 + (longlong)iVar7 * 0x18);
            uVar3 = (uint)((ulonglong)lVar10 >> 0x10);
            uVar14 = (uint)lVar10 & 0xffff;
            plVar13 = (longlong *)param_2[0x24];
            if ((longlong *)param_2[0x24] == (longlong *)0x0) {
              plVar13 = param_2 + 0x23;
            }
            iVar6 = *(int *)((longlong)plVar13 +
                            (ulonglong)
                            ((int)param_2[0x25] - 1U &
                            (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar14) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) * 4);
            if (iVar6 != -1) {
              lVar8 = (longlong)*local_130 + (longlong)iVar7 * 0x18;
              do {
                if (*(longlong *)(param_2[0x1c] + (longlong)iVar6 * 0x18) == lVar10) {
                  uVar9 = *(undefined8 *)(lVar8 + 8);
                  *(undefined8 *)(lVar8 + 8) = 0;
                  FUN_146c18272(param_1,lVar10,uVar9);
                  break;
                }
                iVar6 = *(int *)(param_2[0x1c] + (longlong)iVar6 * 0x18 + 0x10);
              } while (iVar6 != -1);
            }
          }
          local_118 = CONCAT44(local_118._4_4_,(uint)local_118 & ~local_128._4_4_);
          FUN_1449c0562(&local_128);
          iVar7 = local_118._4_4_;
          uVar9 = local_118;
        } while (local_130 != (longlong **)&local_e8 ||
                 (local_120 != (longlong **)&local_d8 || local_118._4_4_ != iVar5));
      }
      local_118 = uVar9;
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_1457ed17a(&local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1457ed1b0(&local_98);
    }
    plVar13 = param_2 + 0xe;
    plVar12 = param_2 + 0x10;
    local_e8 = 0x100000000;
    local_d8 = 0xffffffff;
    iStack_d4 = 0;
    local_d0 = 0;
    iVar5 = 0;
    local_e0 = plVar12;
    if ((int)param_2[0x13] != 0) {
      FUN_1449c0562(&local_e8);
      iVar5 = (int)param_2[0x13];
    }
    local_80 = local_d8;
    iStack_7c = iStack_d4;
    local_78 = local_d0;
    local_74 = local_cc;
    local_90 = local_e8;
    local_88 = local_e0;
    local_98 = plVar13;
    if ((iStack_d4 != iVar5) || (local_e0 != plVar12)) {
      do {
        if ((int)param_1[0xf] != *(int *)((longlong)param_1 + 0xa4)) {
          lVar10 = *(longlong *)(*local_98 + (longlong)iStack_7c * 0x18);
          uVar3 = (uint)((ulonglong)lVar10 >> 0x10);
          uVar14 = (uint)lVar10 & 0xffff;
          plVar11 = (longlong *)param_1[0x16];
          if ((longlong *)param_1[0x16] == (longlong *)0x0) {
            plVar11 = param_1 + 0x15;
          }
          iVar7 = *(int *)((longlong)plVar11 +
                          (ulonglong)
                          ((int)param_1[0x17] - 1U &
                          (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar14) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) * 4);
          if (iVar7 != -1) {
            do {
              plVar11 = (longlong *)(param_1[0xe] + (longlong)iVar7 * 0x18);
              if (*plVar11 == lVar10) {
                if ((plVar11 != (longlong *)0x0) && (plVar11 + 1 != (longlong *)0x0))
                goto LAB_146c02d09;
                break;
              }
              iVar7 = (int)plVar11[2];
            } while (iVar7 != -1);
          }
        }
        puVar1 = (undefined8 *)(*local_98 + (longlong)iStack_7c * 0x18);
        uVar9 = FUN_146be9d18(puVar1[1],param_1[3]);
        FUN_146c18154(param_1,*puVar1,uVar9);
LAB_146c02d09:
        local_80 = local_80 & ~local_90._4_4_;
        FUN_1449c0562(&local_90);
      } while (local_98 != plVar13 || (local_88 != plVar12 || iStack_7c != iVar5));
    }
    plVar13 = param_2 + 0x1c;
    plVar12 = param_2 + 0x1e;
    local_e8 = 0x100000000;
    local_d8 = 0xffffffff;
    iStack_d4 = 0;
    local_d0 = 0;
    iVar5 = 0;
    local_e0 = plVar12;
    if ((int)param_2[0x21] != 0) {
      FUN_1449c0562(&local_e8);
      iVar5 = (int)param_2[0x21];
    }
    local_80 = local_d8;
    iStack_7c = iStack_d4;
    local_78 = local_d0;
    local_74 = local_cc;
    local_90 = local_e8;
    local_88 = local_e0;
    local_98 = plVar13;
    if ((iStack_d4 != iVar5) || (local_e0 != plVar12)) {
      do {
        if ((int)param_1[0x1d] != *(int *)((longlong)param_1 + 0x114)) {
          lVar10 = *(longlong *)(*local_98 + (longlong)iStack_7c * 0x18);
          uVar3 = (uint)((ulonglong)lVar10 >> 0x10);
          uVar14 = (uint)lVar10 & 0xffff;
          plVar11 = (longlong *)param_1[0x24];
          if ((longlong *)param_1[0x24] == (longlong *)0x0) {
            plVar11 = param_1 + 0x23;
          }
          iVar7 = *(int *)((longlong)plVar11 +
                          (ulonglong)
                          ((int)param_1[0x25] - 1U &
                          (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar14) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) * 4);
          if (iVar7 != -1) {
            do {
              plVar11 = (longlong *)(param_1[0x1c] + (longlong)iVar7 * 0x18);
              if (*plVar11 == lVar10) {
                if ((plVar11 != (longlong *)0x0) && (plVar11 + 1 != (longlong *)0x0))
                goto LAB_146c02ee5;
                break;
              }
              iVar7 = (int)plVar11[2];
            } while (iVar7 != -1);
          }
        }
        puVar1 = (undefined8 *)(*local_98 + (longlong)iStack_7c * 0x18);
        plVar11 = (longlong *)puVar1[1];
        uVar9 = (**(code **)(*plVar11 + 0x10))(plVar11,param_1[3]);
        FUN_146c18272(param_1,*puVar1,uVar9);
LAB_146c02ee5:
        local_80 = local_80 & ~local_90._4_4_;
        FUN_1449c0562(&local_90);
      } while (local_98 != plVar13 || (local_88 != plVar12 || iStack_7c != iVar5));
    }
  }
  else {
    if ((int)param_1[0xf] != *(int *)((longlong)param_1 + 0xa4)) {
      FUN_146c54456(param_1 + 0xe);
      FUN_146c5459a(param_1 + 0xe);
    }
    if ((int)param_1[0x1d] != *(int *)((longlong)param_1 + 0x114)) {
      FUN_146c546ba(param_1 + 0x1c);
      FUN_146c547fe(param_1 + 0x1c);
    }
    if (*(int *)((longlong)param_1 + 0x14) < 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      FUN_146c54426(param_1 + 1);
    }
    else {
      *(undefined4 *)(param_1 + 2) = 0;
    }
    plVar13 = param_2 + 0xe;
    plVar12 = param_2 + 0x10;
    local_e8 = 0x100000000;
    local_d8 = 0xffffffff;
    iStack_d4 = 0;
    local_d0 = 0;
    iVar5 = 0;
    local_e0 = plVar12;
    if ((int)param_2[0x13] != 0) {
      FUN_1449c0562(&local_e8);
      iVar5 = (int)param_2[0x13];
    }
    local_80 = local_d8;
    iStack_7c = iStack_d4;
    local_78 = local_d0;
    local_74 = local_cc;
    local_90 = local_e8;
    local_88 = local_e0;
    local_98 = plVar13;
    if ((iStack_d4 != iVar5) || (local_e0 != plVar12)) {
      do {
        lVar10 = *local_98;
        lVar8 = (longlong)iStack_7c;
        uVar9 = FUN_146be9d18(*(undefined8 *)(lVar10 + 8 + lVar8 * 0x18),param_1[3]);
        FUN_146c18154(param_1,*(undefined8 *)(lVar10 + lVar8 * 0x18),uVar9);
        local_80 = local_80 & ~local_90._4_4_;
        FUN_1449c0562(&local_90);
      } while (local_98 != plVar13 || (local_88 != plVar12 || iStack_7c != iVar5));
    }
    plVar13 = param_2 + 0x1c;
    plVar12 = param_2 + 0x1e;
    local_e8 = 0x100000000;
    local_d8 = 0xffffffff;
    iStack_d4 = 0;
    local_d0 = 0;
    iVar5 = 0;
    local_e0 = plVar12;
    if ((int)param_2[0x21] != 0) {
      FUN_1449c0562(&local_e8);
      iVar5 = (int)param_2[0x21];
    }
    local_80 = local_d8;
    iStack_7c = iStack_d4;
    local_78 = local_d0;
    local_74 = local_cc;
    local_90 = local_e8;
    local_88 = local_e0;
    local_98 = plVar13;
    if ((iStack_d4 != iVar5) || (local_e0 != plVar12)) {
      do {
        lVar10 = *local_98;
        lVar8 = (longlong)iStack_7c;
        plVar11 = *(longlong **)(lVar10 + 8 + lVar8 * 0x18);
        uVar9 = (**(code **)(*plVar11 + 0x10))(plVar11,param_1[3]);
        FUN_146c18272(param_1,*(undefined8 *)(lVar10 + lVar8 * 0x18),uVar9);
        local_80 = local_80 & ~local_90._4_4_;
        FUN_1449c0562(&local_90);
      } while (local_98 != plVar13 || (local_88 != plVar12 || iStack_7c != iVar5));
    }
  }
  FUN_146c19f36(param_1,param_2,local_132,local_131);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c03172 FUN_146c03172 body=1488 status=ok
// SIG undefined FUN_146c03172(void)

void FUN_146c03172(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = (**(code **)(*param_3 + 0xa0))(param_3);
  (**(code **)(*param_1 + 0xa8))(param_1,uVar8);
  iVar9 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      FUN_146c183ee(*(undefined8 *)(param_1[4] + lVar13 * 8),param_2,
                    *(undefined8 *)(param_3[4] + lVar13 * 8));
      lVar13 = lVar13 + 1;
      iVar9 = (**(code **)(*param_1 + 0xa0))(param_1);
    } while (lVar13 < iVar9);
  }
  uVar8 = (**(code **)(*param_3 + 0xb0))(param_3);
  (**(code **)(*param_1 + 0xb8))(param_1,uVar8);
  iVar9 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      FUN_146c18678(*(undefined8 *)(param_1[6] + lVar13 * 8),param_2,
                    *(undefined8 *)(param_3[6] + lVar13 * 8));
      lVar13 = lVar13 + 1;
      iVar9 = (**(code **)(*param_1 + 0xb0))(param_1);
    } while (lVar13 < iVar9);
  }
  if (param_3[8] == 0) {
    lVar13 = param_1[8];
    if (lVar13 != 0) {
      param_1[8] = 0;
      FUN_146c543c2(lVar13);
      FUN_1400020a8(lVar13);
    }
  }
  else {
    FUN_146c17f82(param_1);
    FUN_146c188fe(param_1[8],param_2,param_3[8]);
  }
  if (param_3[9] == 0) {
    puVar3 = (undefined8 *)param_1[9];
    if (puVar3 != (undefined8 *)0x0) {
      param_1[9] = 0;
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  else {
    FUN_14582ed9a(param_1);
    plVar4 = (longlong *)param_1[9];
    lVar13 = param_3[9];
    (**(code **)(*plVar4 + 0xb8))(plVar4,lVar13);
    lVar10 = param_2[3];
    if (0 < (longlong)(int)lVar10) {
      uVar12 = 0;
      do {
        uVar2 = *(uint *)(param_2[2] + uVar12 * 4);
        if (uVar2 != 0xffffffff) {
          *(undefined4 *)
           (*(longlong *)(plVar4[4] + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 4)
               = *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar13 + 0x20) + (uVar12 >> 9 & 0x7fffff) * 8) +
                  (ulonglong)((uint)uVar12 & 0x1ff) * 4);
        }
        uVar12 = uVar12 + 1;
      } while ((longlong)(int)lVar10 != uVar12);
    }
  }
  uVar8 = (**(code **)(*param_3 + 0xc0))(param_3);
  (**(code **)(*param_1 + 200))(param_1,uVar8);
  iVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      plVar4 = *(longlong **)(param_1[0xc] + lVar13 * 8);
      lVar10 = *(longlong *)(param_3[0xc] + lVar13 * 8);
      (**(code **)(*plVar4 + 0xb8))(plVar4,lVar10);
      lVar6 = param_2[3];
      if (0 < (longlong)(int)lVar6) {
        uVar12 = 0;
        do {
          uVar2 = *(uint *)(param_2[2] + uVar12 * 4);
          if (uVar2 != 0xffffffff) {
            *(undefined4 *)
             (*(longlong *)(plVar4[4] + (ulonglong)(uVar2 >> 9) * 8) +
             (ulonglong)(uVar2 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar10 + 0x20) + (uVar12 >> 9 & 0x7fffff) * 8) +
                  (ulonglong)((uint)uVar12 & 0x1ff) * 4);
          }
          uVar12 = uVar12 + 1;
        } while ((longlong)(int)lVar6 != uVar12);
      }
      lVar13 = lVar13 + 1;
      iVar9 = (**(code **)(*param_1 + 0xc0))(param_1);
    } while (lVar13 < iVar9);
  }
  uVar8 = (**(code **)(*param_3 + 0xd0))(param_3);
  (**(code **)(*param_1 + 0xd8))(param_1,uVar8);
  iVar9 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      lVar10 = *(longlong *)(param_1[10] + lVar13 * 8);
      lVar6 = *(longlong *)(param_3[10] + lVar13 * 8);
      *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar6 + 8);
      lVar7 = param_2[1];
      if (0 < (longlong)(int)lVar7) {
        uVar12 = 0;
        do {
          uVar2 = *(uint *)(*param_2 + uVar12 * 4);
          if (uVar2 != 0xffffffff) {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
             (ulonglong)(uVar2 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar6 + 0x20) + (uVar12 >> 9 & 0x7fffff) * 8) +
                  (ulonglong)((uint)uVar12 & 0x1ff) * 4);
          }
          uVar12 = uVar12 + 1;
        } while ((longlong)(int)lVar7 != uVar12);
      }
      lVar13 = lVar13 + 1;
      iVar9 = (**(code **)(*param_1 + 0xd0))(param_1);
    } while (lVar13 < iVar9);
  }
  if (*(int *)((longlong)param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_146c54426(param_1 + 1);
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if ((int)param_1[0xf] != *(int *)((longlong)param_1 + 0xa4)) {
    FUN_146c54456(param_1 + 0xe);
    FUN_146c5459a(param_1 + 0xe);
  }
  plVar4 = param_3 + 0xe;
  plVar1 = param_3 + 0x10;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_94 = 0;
  plStack_60 = plVar1;
  if ((int)param_3[0x13] != 0) {
    FUN_1449c0562(&local_68);
    local_94 = (int)param_3[0x13];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_68;
  plStack_80 = plStack_60;
  local_90 = plVar4;
  if ((iStack_54 != local_94) || (plStack_60 != plVar1)) {
    do {
      lVar13 = *local_90;
      lVar10 = (longlong)iStack_74;
      uVar11 = FUN_146be9de4(*(undefined8 *)(lVar13 + 8 + lVar10 * 0x18),param_2,param_1[3]);
      FUN_146c18154(param_1,*(undefined8 *)(lVar13 + lVar10 * 0x18),uVar11);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar4 || (plStack_80 != plVar1 || iStack_74 != local_94));
  }
  FUN_146c18200(param_1,param_3);
  if ((int)param_1[0x1d] != *(int *)((longlong)param_1 + 0x114)) {
    FUN_146c546ba(param_1 + 0x1c);
    FUN_146c547fe(param_1 + 0x1c);
  }
  plVar4 = param_3 + 0x1c;
  plVar1 = param_3 + 0x1e;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  plStack_60 = plVar1;
  if ((int)param_3[0x21] == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = (int)param_3[0x21];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88._0_4_ = (undefined4)local_68;
  local_88._4_4_ = local_68._4_4_;
  plStack_80 = plStack_60;
  local_90 = plVar4;
  if ((iStack_54 != iVar9) || (plStack_60 != plVar1)) {
    do {
      lVar13 = *local_90;
      lVar10 = (longlong)iStack_74;
      plVar5 = *(longlong **)(lVar13 + 8 + lVar10 * 0x18);
      uVar11 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2,param_1[3]);
      FUN_146c18272(param_1,*(undefined8 *)(lVar13 + lVar10 * 0x18),uVar11);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar4 || (plStack_80 != plVar1 || iStack_74 != iVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c03744 FUN_146c03744 body=730 status=ok
// SIG undefined FUN_146c03744(void)

void FUN_146c03744(longlong param_1,longlong param_2,byte param_3,byte param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_4 = param_3 | param_4;
  bVar4 = param_4 ^ 1;
  if (((param_4 | *(byte *)(param_2 + 0x70)) & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x70);
  }
  else {
    bVar3 = *(byte *)(param_2 + 0x70) | bVar4;
  }
  if ((((~bVar3 | param_3) & 1) != 0) && (*(char *)(param_1 + 0x70) == '\x01')) {
    FUN_146c40926(param_1 + 0x60,0);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  if ((bVar3 & 1) != 0) {
    local_48 = DAT_14c84636c;
    local_50 = DAT_14c846364;
    FUN_146c01e94(param_1);
  }
  if (((param_4 | *(byte *)(param_2 + 0x90)) & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x90);
  }
  else {
    bVar3 = *(byte *)(param_2 + 0x90) | bVar4;
  }
  if ((((~bVar3 | param_3) & 1) != 0) && (*(char *)(param_1 + 0x90) == '\x01')) {
    FUN_146c40926(param_1 + 0x80,0);
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if ((bVar3 & 1) != 0) {
    local_48 = DAT_14c846338;
    local_50 = DAT_14c846330;
    FUN_146c01f68(param_1);
  }
  if (((param_4 | *(byte *)(param_2 + 0xb0)) & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0xb0);
  }
  else {
    bVar3 = *(byte *)(param_2 + 0xb0) | bVar4;
  }
  if ((((~bVar3 | param_3) & 1) != 0) && (*(char *)(param_1 + 0xb0) == '\x01')) {
    FUN_146c409ee(param_1 + 0xa0,0);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if ((bVar3 & 1) != 0) {
    local_50 = DAT_14c84635c;
    FUN_146c02040(param_1);
  }
  if (((param_4 | *(byte *)(param_2 + 0x1a8)) & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 0x1a8);
  }
  else {
    bVar4 = bVar4 | *(byte *)(param_2 + 0x1a8);
  }
  if (((bVar4 & 1) == 0) || (param_3 != 0)) {
    FUN_146c03ab2(param_1);
  }
  if ((bVar4 & 1) != 0) {
    FUN_14582eef4(param_1,0);
  }
  lVar1 = *(longlong *)(param_2 + 0x208);
  if (param_4 == 0) {
    bVar5 = true;
    if (lVar1 != 0) goto LAB_146c0387c;
    lVar1 = *(longlong *)(param_1 + 0x208);
  }
  bVar5 = lVar1 != 0;
LAB_146c0387c:
  if ((byte)(bVar5 ^ 1U | param_3) == 1) {
    puVar2 = *(undefined8 **)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (bVar5 != false) {
    FUN_14582ed12(param_1);
  }
  if ((*(longlong *)(param_1 + 0x208) != 0) && (*(longlong *)(param_2 + 0x208) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c03a3e FUN_146c03a3e body=51 status=ok
// SIG undefined FUN_146c03a3e(void)

void FUN_146c03a3e(longlong param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_146c40926(param_1 + 0x60,0);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 146c03a72 FUN_146c03a72 body=63 status=ok
// SIG undefined FUN_146c03a72(void)

void FUN_146c03a72(longlong param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_146c409ee(param_1 + 0xa0,0);
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 146c03ab2 FUN_146c03ab2 body=71 status=ok
// SIG undefined FUN_146c03ab2(void)

void FUN_146c03ab2(longlong param_1)

{
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_141082b5c(param_1 + 0x198,0);
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  return;
}



// FUNCTION 146c03afa FUN_146c03afa body=48 status=ok
// SIG undefined FUN_146c03afa(void)

uint FUN_146c03afa(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(byte *)(param_1 + 0x70) + 2;
  if (*(char *)(param_1 + 0x90) == '\0') {
    uVar1 = (uint)*(byte *)(param_1 + 0x70);
  }
  uVar2 = uVar1 + 4;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 8;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    uVar1 = uVar2;
  }
  return uVar1;
}



// FUNCTION 146c03b2a FUN_146c03b2a body=340 status=ok
// SIG undefined FUN_146c03b2a(void)

void FUN_146c03b2a(longlong param_1,ulonglong param_2)

{
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 & 8) == 0) {
    FUN_146c03ab2();
  }
  else {
    FUN_14582eef4(param_1,0);
  }
  if ((param_2 & 2) == 0) {
    if (*(char *)(param_1 + 0x90) == '\x01') {
      FUN_146c40926(param_1 + 0x80,0);
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
  }
  else {
    local_28 = &DAT_3f8000003f800000;
    local_20 = 0x3f800000;
    FUN_146c01f68(param_1);
  }
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x70) == '\x01') {
      FUN_146c40926(param_1 + 0x60,0);
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
  }
  else {
    local_20 = DAT_14c846378;
    local_28 = DAT_14c846370;
    FUN_146c01e94(param_1);
  }
  if ((param_2 & 4) == 0) {
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      FUN_146c409ee(param_1 + 0xa0,0);
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
  }
  else {
    local_28 = (undefined1 *)0x0;
    FUN_146c02040(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c03c80 FUN_146c03c80 body=215 status=ok
// SIG undefined FUN_146c03c80(void)

void FUN_146c03c80(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar2 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar3 = (((int)uVar2 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar2 = 1;
    if (1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    puVar1 = (uint *)(param_1 + 4);
    iVar5 = uVar2 - *puVar1;
    if (iVar5 == 0 || (int)uVar2 < (int)*puVar1) {
      if (uVar2 < *puVar1) {
        FUN_146c4e5cc();
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x1800);
        memset(_Dst,0,0x1800);
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_146c4de0a(param_1 + 2,iVar4);
        }
        *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar4 * 8) = _Dst;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    iVar4 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar4 = 0;
    }
    *param_1 = iVar4;
    param_1[1] = iVar5;
  }
  return;
}



// FUNCTION 146c03d58 FUN_146c03d58 body=215 status=ok
// SIG undefined FUN_146c03d58(void)

void FUN_146c03d58(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar2 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar3 = (((int)uVar2 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar2 = 1;
    if (1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    puVar1 = (uint *)(param_1 + 4);
    iVar5 = uVar2 - *puVar1;
    if (iVar5 == 0 || (int)uVar2 < (int)*puVar1) {
      if (uVar2 < *puVar1) {
        FUN_146c4e618();
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x1000);
        memset(_Dst,0,0x1000);
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_146c4dfba(param_1 + 2,iVar4);
        }
        *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar4 * 8) = _Dst;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    iVar4 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar4 = 0;
    }
    *param_1 = iVar4;
    param_1[1] = iVar5;
  }
  return;
}



// FUNCTION 146c03e30 FUN_146c03e30 body=221 status=ok
// SIG undefined FUN_146c03e30(void)

void FUN_146c03e30(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_2 + 4) = DAT_14c846338;
  param_2[3] = DAT_14c846330;
  param_2[7] = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = DAT_14c846330;
  *(undefined4 *)((longlong)param_2 + 0x2c) = DAT_14c846338;
  param_2[6] = DAT_14c84635c;
  uVar4 = (ulonglong)(param_3 >> 9);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
  uVar5 = (ulonglong)(param_3 & 0x1ff);
  param_2[2] = *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x18);
  puVar1 = (undefined8 *)(lVar2 + uVar5 * 0x18);
  uVar3 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *(undefined1 *)(param_2 + 7) = 1;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc);
    param_2[3] = *(undefined8 *)(lVar2 + uVar5 * 0xc);
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *(undefined1 *)((longlong)param_2 + 0x39) = 1;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + uVar4 * 8);
    *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(lVar2 + 8 + uVar5 * 0xc);
    *(undefined8 *)((longlong)param_2 + 0x24) = *(undefined8 *)(lVar2 + uVar5 * 0xc);
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)((longlong)param_2 + 0x3a) = 1;
    param_2[6] = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar4 * 8) + uVar5 * 8);
  }
  return;
}



// FUNCTION 146c03f0e FUN_146c03f0e body=193 status=ok
// SIG undefined FUN_146c03f0e(void)

void FUN_146c03f0e(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((-1 < (int)param_3) &&
     ((int)param_3 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x148) + (ulonglong)(param_3 >> 9) * 8) +
                           (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
      lVar1 = *(longlong *)(param_1 + 0x1c0);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(param_3 >> 9) * 8);
      lVar5 = 0;
      do {
        uVar4 = *(uint *)((ulonglong)((param_3 & 0x1ff) * 0xc) + lVar2 + lVar5 * 4);
        lVar3 = *(longlong *)(lVar1 + (ulonglong)(uVar4 >> 9) * 8);
        uVar6 = (ulonglong)((uVar4 & 0x1ff) << 4);
        uVar4 = *(uint *)(lVar3 + 8 + uVar6);
        if (uVar4 == param_3) {
          uVar4 = *(uint *)(lVar3 + 0xc + uVar6);
        }
        *(uint *)((longlong)param_2 + lVar5 * 4) = uVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      return;
    }
  }
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *param_2 = 0xffffffffffffffff;
  return;
}



// FUNCTION 146c03fd0 FUN_146c03fd0 body=450 status=ok
// SIG undefined FUN_146c03fd0(void)

void FUN_146c03fd0(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint *local_50;
  undefined8 local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = param_2;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_50 = &local_3c;
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(param_2 >> 9) * 8)
                       + (ulonglong)(param_2 & 0x1ff) * 4);
      local_58 = param_1;
      local_48 = param_3;
      if (uVar2 != 0xffffffff) {
        iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar2 >> 9) * 8)
                        + (ulonglong)(uVar2 & 0x1ff) * 4);
        if (iVar3 < 8) {
          if (0 < iVar3) {
            iVar3 = iVar3 + uVar2;
            do {
              uVar2 = uVar2 + 1;
              FUN_142972f70(&local_58,
                            *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar2 >> 9) * 8) +
                             (ulonglong)(uVar2 & 0x1ff) * 4));
            } while ((int)uVar2 < iVar3);
          }
        }
        else {
          uVar4 = uVar2 + 7;
          if ((int)(uVar2 + 7) < (int)uVar2) {
            uVar4 = uVar2;
          }
          uVar5 = uVar2;
          do {
            uVar5 = uVar5 + 1;
            FUN_142972f70(&local_58,
                          *(undefined4 *)
                           (*(longlong *)
                             (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar5 >> 9) * 8) +
                           (ulonglong)(uVar5 & 0x1ff) * 4));
          } while (uVar5 - uVar4 != 1);
          uVar2 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar2 + 9 >> 9) * 8) +
                           (ulonglong)(uVar2 + 9 & 0x1ff) * 4);
          if (uVar2 != 0xffffffff) {
            lVar1 = *(longlong *)(param_1 + 0x110);
            do {
              FUN_142972f70(&local_58,
                            *(undefined4 *)
                             (*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 9) * 8) +
                             (ulonglong)(uVar2 & 0x1ff) * 4));
              lVar1 = *(longlong *)(param_1 + 0x110);
              uVar2 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                               (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
            } while (uVar2 != 0xffffffff);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c04194 FUN_146c04194 body=166 status=ok
// SIG undefined FUN_146c04194(void)

void FUN_146c04194(longlong param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
      uVar3 = (ulonglong)((param_2 & 0x1ff) << 4);
      local_1c = *(int *)(lVar2 + 8 + uVar3);
      iVar1 = *(int *)(lVar2 + 0xc + uVar3);
      (*(code *)*param_3)(param_3[1]);
      if (iVar1 != -1) {
        local_1c = iVar1;
        (*(code *)*param_3)(param_3[1]);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0423c FUN_146c0423c body=1355 status=ok
// SIG undefined FUN_146c0423c(void)

undefined8 FUN_146c0423c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 auStack_188 [32];
  undefined2 *local_168;
  undefined2 *local_160;
  uint local_158;
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_146c04788(param_1 + 0xb8,&local_68);
  local_160 = &DAT_149dfb77a;
  if (local_60 != 0) {
    local_160 = local_68;
  }
  local_168 = (undefined2 *)((longlong)*(int *)(param_1 + 0x48) * 2 & 0x3ffffffffffffe);
  FUN_140002266(&local_78,L"RefCountSize %zu  FreeSize %zu  FreeMem %zukb",
                *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                *(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c));
  local_168 = &DAT_149dfb77a;
  if (local_70 != 0) {
    local_168 = local_78;
  }
  FUN_140002266(local_58,L"Vertices count %d max %d  %s  VtxEdges %s",
                *(undefined4 *)(param_1 + 0x50),
                *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24));
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_168 = (undefined2 *)((longlong)*(int *)(param_1 + 0x168) * 2 & 0x3ffffffffffffe);
  FUN_140002266(&local_78,L"RefCountSize %zu  FreeSize %zu  FreeMem %zukb",
                *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144),
                *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c));
  local_168 = local_78;
  if (local_70 == 0) {
    local_168 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_68,L"Triangles count %d max %d  %s",*(undefined4 *)(param_1 + 0x170),
                *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144));
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_168 = (undefined2 *)((longlong)*(int *)(param_1 + 0x1f8) * 2 & 0x3ffffffffffffe);
  FUN_140002266(&local_88,L"RefCountSize %zu  FreeSize %zu  FreeMem %zukb",
                *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4),
                *(int *)(param_1 + 0x1e8) * 0x200 + *(int *)(param_1 + 0x1ec));
  local_168 = local_88;
  if (local_80 == 0) {
    local_168 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_78,L"Edges count %d max %d  %s",*(undefined4 *)(param_1 + 0x200),
                *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4));
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_158 = (uint)(*(longlong *)(param_1 + 0x208) != 0);
  local_160._0_4_ = (uint)*(byte *)(param_1 + 0x1a8);
  local_168._0_4_ = (uint)*(byte *)(param_1 + 0xb0);
  FUN_140002266(&local_88,L"VtxNormals %d  VtxColors %d  VtxUVs %d  TriGroups %d  Attributes %d",
                *(undefined1 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x90));
  uVar1 = *(undefined4 *)(param_1 + 0x1b0);
  uVar2 = *(undefined4 *)(param_1 + 0x218);
  if ((*(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c) == 0) &&
     (*(int *)(param_1 + 0x1e8) * 0x200 + *(int *)(param_1 + 0x1ec) == 0)) {
    bVar4 = *(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c) == 0;
  }
  else {
    bVar4 = false;
  }
  uVar3 = FUN_146c047ec(param_1);
  local_160 = (undefined2 *)CONCAT44(local_160._4_4_,uVar1);
  local_168 = (undefined2 *)CONCAT44(local_168._4_4_,uVar2);
  FUN_140002266(local_98,L"Closed %d  Compact %d  TopologyChangeStamp %d  MaxGroupID %d",uVar3,bVar4
               );
  FUN_1400b22c2(local_b8,&DAT_149dfc0af);
  FUN_1400b22c2(local_e8,&DAT_149dfc0af);
  FUN_1400b22c2(local_118,&DAT_149dfc0af);
  FUN_1400b22c2(local_148,&DAT_149dfc0af);
  FUN_1407ec8fc(local_138,local_58,local_148);
  FUN_144a7dea0(local_128,local_138,&local_68);
  FUN_1401c7f3e(local_108,local_128,local_118);
  FUN_144a7dea0(local_f8,local_108,&local_78);
  FUN_1401c7f3e(local_d8,local_f8,local_e8);
  FUN_144a7dea0(local_c8,local_d8,&local_88);
  FUN_1401c7f3e(local_a8,local_c8,local_b8);
  FUN_144a7dea0(param_2,local_a8,local_98);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146c04788 FUN_146c04788 body=99 status=ok
// SIG undefined FUN_146c04788(void)

undefined8 FUN_146c04788(int *param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"ListSize %zu  Blocks Count %d  Free %zu  Mem %zukb   Linked Mem %zukb",
                *param_1 * 0x200 + param_1[1],param_1[0x12],
                (uint)(param_1[0xc] * 0x200 + param_1[0xd]) >> 8,param_1[6] * 0x200 + param_1[7],
                (uint)(param_1[0x14] * 0x200 + param_1[0x15]) >> 8);
  return param_2;
}



// FUNCTION 146c047ec FUN_146c047ec body=112 status=ok
// SIG undefined FUN_146c047ec(void)

undefined8 FUN_146c047ec(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x170) == 0) {
LAB_146c04858:
    uVar1 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
    uVar1 = 1;
    if (0 < (int)uVar2) {
      uVar3 = 0;
      do {
        if (((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                                (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) &&
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
                     0xc + (ulonglong)((uVar3 & 0x1ff) << 4)) == -1)) goto LAB_146c04858;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  return uVar1;
}



// FUNCTION 146c04864 FUN_146c04864 body=6457 status=ok
// SIG undefined FUN_146c04864(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_146c04864(longlong param_1,longlong param_2,char *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint *puVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  undefined1 local_108 [32];
  longlong local_e8;
  char *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98;
  char *local_90;
  int local_88;
  int local_84;
  ulonglong local_80 [2];
  byte local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_108;
  local_a0 = param_1;
  local_98 = param_2;
  local_90 = param_3;
  if (param_4 == (undefined4 *)0x0) {
    if ((*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50)) &&
       (*(int *)(param_1 + 0x170) == *(int *)(param_2 + 0x170))) {
LAB_146c048f9:
      local_50 = '\0';
      local_70 = 0;
      local_e8 = param_2;
      local_e0 = param_3;
      if ((param_3[7] != '\x01') ||
         ((((*(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c) == 0 &&
            (*(int *)(param_2 + 0x38) * 0x200 + *(int *)(param_2 + 0x3c) == 0)) &&
           (*(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c) == 0)) &&
          (*(int *)(param_2 + 0x158) * 0x200 + *(int *)(param_2 + 0x15c) == 0)))) {
        uVar16 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
        uVar17 = (ulonglong)uVar16;
        uVar5 = 0;
        if ((uVar16 != 0) &&
           (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
          uVar22 = 1;
          uVar29 = 1;
          if (1 < (int)uVar16) {
            uVar29 = uVar16;
          }
          do {
            uVar26 = (uint)uVar22;
            uVar5 = uVar29;
            if (uVar29 == uVar26) break;
            uVar15 = uVar22 >> 9;
            uVar22 = (ulonglong)(uVar26 + 1);
            uVar5 = uVar26;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar15] +
                                               (ulonglong)(uVar26 & 0x1ff) * 2) - 1U));
        }
        if (uVar5 != uVar16) {
          iVar6 = *(int *)(param_2 + 0x20);
          iVar7 = *(int *)(param_2 + 0x24);
          lVar21 = *(longlong *)(param_2 + 0x28);
          do {
            if (((((int)uVar5 < 0) || (iVar6 * 0x200 + iVar7 <= (int)uVar5)) ||
                (0xfffd < (ushort)(*(short *)(*(longlong *)(lVar21 + (ulonglong)(uVar5 >> 9) * 8) +
                                             (ulonglong)(uVar5 & 0x1ff) * 2) - 1U))) ||
               (cVar4 = FUN_142972154(&local_a0,uVar5,uVar5), cVar4 == '\0')) {
              if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
              *param_4 = 4;
              param_4[6] = uVar5;
              goto LAB_146c04bb7;
            }
            uVar29 = uVar5 + 1;
            if ((int)(uVar5 + 1) < (int)uVar16) {
              uVar29 = uVar16;
            }
            do {
              uVar26 = uVar29;
              if (uVar29 - 1 == uVar5) break;
              uVar5 = uVar5 + 1;
              uVar26 = uVar5;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_1 + 0x28) +
                                                   (ulonglong)(uVar5 >> 9) * 8) +
                                                 (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
            uVar5 = uVar26;
          } while (uVar5 != uVar16);
        }
        uVar5 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
        uVar22 = 0;
        if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U)))
        {
          uVar11 = 1;
          uVar15 = 1;
          if (1 < (int)uVar5) {
            uVar11 = (ulonglong)uVar5;
          }
          do {
            uVar16 = (uint)uVar15;
            uVar22 = uVar11;
            if ((uint)uVar11 == uVar16) break;
            uVar25 = uVar15 >> 9;
            uVar22 = uVar15;
            uVar15 = (ulonglong)(uVar16 + 1);
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar25] +
                                               (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        }
        if ((uint)uVar22 != uVar5) {
          do {
            uVar16 = (uint)uVar22;
            if (((int)uVar16 < 0) ||
               (*(int *)(local_e8 + 0x140) * 0x200 + *(int *)(local_e8 + 0x144) <= (int)uVar16)) {
LAB_146c04f95:
              if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
              *param_4 = 5;
              param_4[6] = uVar16;
              uVar10 = 0x2ffffffff;
              goto LAB_146c04bc1;
            }
            if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                              (*(longlong *)(local_e8 + 0x148) + (uVar22 >> 9) * 8)
                                            + (ulonglong)(uVar16 & 0x1ff) * 2) - 1U))
            goto LAB_146c04f95;
            uVar17 = (ulonglong)(uint)((int)(uVar22 >> 9) << 3);
            lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar17);
            lVar3 = (ulonglong)((uVar16 & 0x1ff) << 2) * 3;
            lVar2 = *(longlong *)(*(longlong *)(local_e8 + 0x130) + uVar17);
            if (((*(int *)(lVar21 + lVar3) != *(int *)(lVar2 + lVar3)) ||
                (uVar29 = *(uint *)(lVar2 + 4 + lVar3), uVar17 = (ulonglong)uVar29,
                *(uint *)(lVar21 + 4 + lVar3) != uVar29)) ||
               (*(int *)(lVar21 + 8 + lVar3) != *(int *)(lVar2 + 8 + lVar3))) goto LAB_146c04f95;
            uVar29 = uVar16 + 1;
            if ((int)(uVar16 + 1) < (int)uVar5) {
              uVar29 = uVar5;
            }
            do {
              iVar6 = (int)uVar22;
              uVar22 = (ulonglong)uVar29;
              if (uVar29 - 1 == iVar6) break;
              uVar16 = iVar6 + 1;
              uVar22 = (ulonglong)uVar16;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_1 + 0x148) +
                                                   (ulonglong)(uVar16 >> 9) * 8) +
                                                 (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
          } while ((uint)uVar22 != uVar5);
        }
        goto LAB_146c04c7f;
      }
      uVar16 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
      uVar5 = 0;
      if (uVar16 != 0) {
        uVar5 = 0;
        if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U)) {
          uVar29 = 1;
          uVar26 = 1;
          if (1 < (int)uVar16) {
            uVar29 = uVar16;
          }
          do {
            uVar5 = uVar29;
            if (uVar29 == uVar26) break;
            uVar12 = uVar26 >> 9;
            uVar18 = uVar26 & 0x1ff;
            uVar5 = uVar26;
            uVar26 = uVar26 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar12] +
                                               (ulonglong)uVar18 * 2) - 1U));
        }
      }
      uVar26 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
      uVar29 = 0;
      if ((uVar26 != 0) &&
         (uVar29 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
        uVar12 = 1;
        uVar18 = 1;
        if (1 < (int)uVar26) {
          uVar12 = uVar26;
        }
        do {
          uVar29 = uVar12;
          if (uVar12 == uVar18) break;
          uVar20 = uVar18 >> 9;
          uVar19 = uVar18 & 0x1ff;
          uVar29 = uVar18;
          uVar18 = uVar18 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar20] +
                                             (ulonglong)uVar19 * 2) - 1U));
      }
      FUN_146c061a4(&local_68);
      uVar18 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
      uVar12 = (int)local_68 * 0x200 + local_68._4_4_;
      FUN_1411b328a(&local_68,uVar18);
      for (; uVar12 < uVar18; uVar12 = uVar12 + 1) {
        *(undefined4 *)
         (*(longlong *)(CONCAT44(uStack_5c,local_60) + (ulonglong)(uVar12 >> 9) * 8) +
         (ulonglong)(uVar12 & 0x1ff) * 4) = 0xffffffff;
      }
      bVar27 = uVar29 != uVar26;
      bVar28 = uVar5 != uVar16;
      if ((bVar28) && (uVar29 != uVar26)) {
        do {
          *(uint *)(*(longlong *)(CONCAT44(uStack_5c,local_60) + (ulonglong)(uVar5 >> 9) * 8) +
                   (ulonglong)(uVar5 & 0x1ff) * 4) = uVar29;
          cVar4 = FUN_142972154(&local_a0,uVar5,uVar29);
          if (cVar4 == '\0') {
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = 4;
              param_4[6] = uVar5;
              param_4[7] = uVar29;
              param_4[8] = 1;
            }
            goto LAB_146c04bc5;
          }
          uVar12 = uVar5 + 1;
          if ((int)(uVar5 + 1) < (int)uVar16) {
            uVar12 = uVar16;
          }
          do {
            uVar18 = uVar12;
            if (uVar12 - 1 == uVar5) break;
            uVar5 = uVar5 + 1;
            uVar18 = uVar5;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_1 + 0x28) +
                                                 (ulonglong)(uVar5 >> 9) * 8) +
                                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
          uVar5 = uVar18;
          uVar12 = uVar29 + 1;
          if ((int)(uVar29 + 1) < (int)uVar26) {
            uVar12 = uVar26;
          }
          do {
            uVar18 = uVar12;
            if (uVar12 - 1 == uVar29) break;
            uVar29 = uVar29 + 1;
            uVar18 = uVar29;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(local_e8 + 0x28) +
                                                 (ulonglong)(uVar29 >> 9) * 8) +
                                               (ulonglong)(uVar29 & 0x1ff) * 2) - 1U));
          uVar29 = uVar18;
          bVar27 = uVar29 != uVar26;
          bVar28 = uVar5 != uVar16;
        } while ((bVar28) && (uVar29 != uVar26));
      }
      if ((!bVar28) && (!bVar27)) {
        uVar16 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = 0;
          if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U)) {
            uVar29 = 1;
            uVar26 = 1;
            if (1 < (int)uVar16) {
              uVar29 = uVar16;
            }
            do {
              uVar5 = uVar29;
              if (uVar29 == uVar26) break;
              uVar12 = uVar26 >> 9;
              uVar18 = uVar26 & 0x1ff;
              uVar5 = uVar26;
              uVar26 = uVar26 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar12] +
                                                 (ulonglong)uVar18 * 2) - 1U));
          }
        }
        uVar29 = *(int *)(local_e8 + 0x140) * 0x200 + *(int *)(local_e8 + 0x144);
        local_d8 = CONCAT44(local_d8._4_4_,uVar16);
        uVar16 = 0;
        if ((uVar29 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_e8 + 0x148) - 1U))
           ) {
          uVar26 = 1;
          uVar12 = 1;
          if (1 < (int)uVar29) {
            uVar26 = uVar29;
          }
          do {
            uVar16 = uVar26;
            if (uVar26 == uVar12) break;
            uVar18 = uVar12 >> 9;
            uVar20 = uVar12 & 0x1ff;
            uVar16 = uVar12;
            uVar12 = uVar12 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_e8 + 0x148))[uVar18] +
                                               (ulonglong)uVar20 * 2) - 1U));
        }
        FUN_146c061a4(&local_88);
        uVar12 = *(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300);
        uVar17 = (ulonglong)uVar12;
        uVar26 = local_88 * 0x200 + local_84;
        FUN_1411b328a(&local_88,uVar17);
        for (; uVar26 < uVar12; uVar26 = uVar26 + 1) {
          *(undefined4 *)
           (*(longlong *)(local_80[0] + (ulonglong)(uVar26 >> 9) * 8) +
           (ulonglong)(uVar26 & 0x1ff) * 4) = 0xffffffff;
        }
        do {
          uVar26 = uVar16;
          if ((uVar5 == (uint)local_d8) || (uVar26 == uVar29)) goto LAB_146c05f4c;
          lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
          uVar22 = (ulonglong)(uVar5 & 0x1ff);
          local_b8 = *(undefined4 *)(lVar21 + 8 + uVar22 * 0xc);
          local_c0 = *(longlong *)(lVar21 + uVar22 * 0xc);
          lVar21 = *(longlong *)(*(longlong *)(local_e8 + 0x130) + (ulonglong)(uVar26 >> 9) * 8);
          local_a8 = *(undefined4 *)(lVar21 + 8 + (ulonglong)(uVar26 & 0x1ff) * 0xc);
          local_b0 = *(undefined8 *)(lVar21 + (ulonglong)(uVar26 & 0x1ff) * 0xc);
          *(uint *)(*(longlong *)(local_80[0] + (ulonglong)(uVar5 >> 9) * 8) + uVar22 * 4) = uVar26;
          lVar21 = 0;
          do {
            puVar23 = (uint *)((longlong)&local_c0 + lVar21);
            if (local_50 != '\0') {
              puVar23 = (uint *)((ulonglong)((*puVar23 & 0x1ff) << 2) +
                                *(longlong *)
                                 (CONCAT44(uStack_5c,local_60) + (ulonglong)(*puVar23 >> 9) * 8));
            }
            if (*(uint *)((longlong)&local_b0 + lVar21) != *puVar23) {
              if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
              *param_4 = 5;
              param_4[6] = uVar5;
              param_4[7] = uVar26;
              goto LAB_146c0606e;
            }
            lVar21 = lVar21 + 4;
          } while (lVar21 != 0xc);
          uVar16 = uVar5 + 1;
          if ((int)(uVar5 + 1) < (int)(uint)local_d8) {
            uVar16 = (uint)local_d8;
          }
          do {
            uVar12 = uVar16;
            if (uVar16 - 1 == uVar5) break;
            uVar5 = uVar5 + 1;
            uVar12 = uVar5;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_1 + 0x148) +
                                                 (ulonglong)(uVar5 >> 9) * 8) +
                                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
          uVar18 = uVar26 + 1;
          if ((int)(uVar26 + 1) < (int)uVar29) {
            uVar18 = uVar29;
          }
          do {
            uVar16 = uVar18;
            uVar5 = uVar12;
            if (uVar18 - 1 == uVar26) break;
            uVar26 = uVar26 + 1;
            uVar16 = uVar26;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(local_e8 + 0x148) +
                                                 (ulonglong)(uVar26 >> 9) * 8) +
                                               (ulonglong)(uVar26 & 0x1ff) * 2) - 1U));
        } while( true );
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      goto LAB_146c04bc5;
    }
  }
  else {
    *param_4 = 0;
    plVar1 = (longlong *)(param_4 + 2);
    if (*(longlong *)(param_4 + 2) != 0) {
      FUN_1400020a8();
    }
    *plVar1 = 0;
    *(undefined8 *)(param_4 + 4) = 0;
    *(undefined8 *)(param_4 + 6) = 0xffffffffffffffff;
    param_4[8] = 0;
    if (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50)) {
      if (*(int *)(param_1 + 0x170) == *(int *)(param_2 + 0x170)) goto LAB_146c048f9;
      *param_4 = 2;
      uVar8 = *(undefined4 *)(param_2 + 0x170);
      uVar9 = *(undefined4 *)(param_1 + 0x170);
      pwVar13 = L"Triangle Count: %d != %d";
    }
    else {
      *param_4 = 1;
      uVar8 = *(undefined4 *)(param_2 + 0x50);
      uVar9 = *(undefined4 *)(param_1 + 0x50);
      pwVar13 = L"Vertex Count: %d != %d";
    }
    FUN_140002266(&local_68,pwVar13,uVar9,uVar8);
    if (plVar1 == &local_68) {
      if (CONCAT44(local_68._4_4_,(int)local_68) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *(ulonglong *)(param_4 + 2) = CONCAT44(local_68._4_4_,(int)local_68);
      param_4[4] = local_60;
      param_4[5] = uStack_5c;
    }
  }
  uVar17 = 0;
  goto LAB_146c04a9d;
code_r0x000146c05531:
  uVar29 = uVar16 + 1;
  if ((int)(uVar16 + 1) < (int)uVar5) {
    uVar29 = uVar5;
  }
  do {
    iVar6 = (int)uVar22;
    uVar22 = (ulonglong)uVar29;
    if (uVar29 - 1 == iVar6) break;
    uVar16 = iVar6 + 1;
    uVar22 = (ulonglong)uVar16;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x1d8) +
                                         (ulonglong)(uVar16 >> 9) * 8) +
                                       (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
  if ((uint)uVar22 == uVar5) goto LAB_146c04d2e;
  goto LAB_146c05439;
LAB_146c05f4c:
  if ((uVar5 != (uint)local_d8) || (uVar26 != uVar29)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 2;
    }
    goto LAB_146c04bc5;
  }
LAB_146c04c7f:
  cVar4 = local_50;
  if (*local_e0 == '\x01') {
    if (*(int *)(param_1 + 0x200) == *(int *)(local_e8 + 0x200)) {
      uVar16 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
      uVar17 = (ulonglong)uVar16;
      uVar5 = 0;
      if ((uVar16 != 0) &&
         (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x1d8) - 1U))) {
        uVar22 = 1;
        uVar29 = 1;
        if (1 < (int)uVar16) {
          uVar29 = uVar16;
        }
        do {
          uVar26 = (uint)uVar22;
          uVar5 = uVar29;
          if (uVar29 == uVar26) break;
          uVar15 = uVar22 >> 9;
          uVar22 = (ulonglong)(uVar26 + 1);
          uVar5 = uVar26;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x1d8))[uVar15] +
                                             (ulonglong)(uVar26 & 0x1ff) * 2) - 1U));
      }
      if (uVar5 != uVar16) {
        lVar21 = *(longlong *)(param_1 + 0x1c0);
        lVar2 = CONCAT44(uStack_5c,local_60);
        local_d8 = *(longlong *)(local_e8 + 0x1c0);
        local_d0 = CONCAT71(local_d0._1_7_,local_70);
        local_c8 = local_80[0];
        do {
          lVar3 = *(longlong *)(lVar21 + (ulonglong)(uVar5 >> 9) * 8);
          uVar22 = (ulonglong)((uVar5 & 0x1ff) << 4);
          uVar26 = *(uint *)(lVar3 + uVar22);
          uVar29 = *(uint *)(lVar3 + 4 + uVar22);
          if (cVar4 != '\0') {
            uVar26 = *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar26 >> 9) * 8) +
                              (ulonglong)(uVar26 & 0x1ff) * 4);
            uVar29 = *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar29 >> 9) * 8) +
                              (ulonglong)(uVar29 & 0x1ff) * 4);
          }
          uVar22 = *(ulonglong *)(lVar3 + 8 + uVar22);
          uVar29 = FUN_146c061e0(local_e8,uVar26,uVar29);
          if (uVar29 == 0xffffffff) {
            if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
            *param_4 = 7;
            param_4[6] = uVar5;
            goto LAB_146c05746;
          }
          uVar26 = (uint)uVar22;
          uVar18 = (uint)(uVar22 >> 0x20);
          uVar12 = uVar18;
          if ((local_d0 & 1) != 0) {
            uVar12 = 0xffffffff;
            if (uVar26 != 0xffffffff) {
              uVar12 = *(uint *)(*(longlong *)(local_c8 + (uVar22 >> 9 & 0x7fffff) * 8) +
                                (ulonglong)(uVar26 & 0x1ff) * 4);
            }
            uVar26 = uVar12;
            uVar12 = 0xffffffff;
            if (uVar22 >> 0x20 != 0xffffffff) {
              uVar12 = *(uint *)(*(longlong *)(local_c8 + (uVar22 >> 0x29) * 8) +
                                (ulonglong)(uVar18 & 0x1ff) * 4);
            }
          }
          lVar3 = *(longlong *)(local_d8 + (ulonglong)(uVar29 >> 9) * 8);
          uVar22 = (ulonglong)((uVar29 & 0x1ff) << 4);
          uVar18 = *(uint *)(lVar3 + 8 + uVar22);
          uVar20 = *(uint *)(lVar3 + 0xc + uVar22);
          uVar19 = uVar12;
          if ((int)uVar26 < (int)uVar12) {
            uVar19 = uVar26;
          }
          uVar24 = uVar20;
          if ((int)uVar18 < (int)uVar20) {
            uVar24 = uVar18;
          }
          if (uVar19 != uVar24) {
            if (param_4 != (undefined4 *)0x0) {
LAB_146c05ff2:
              *param_4 = 7;
              param_4[6] = uVar5;
              param_4[7] = uVar29;
              param_4[8] = 3;
            }
            goto LAB_146c04bc5;
          }
          if ((int)uVar26 < (int)uVar12) {
            uVar26 = uVar12;
          }
          if ((int)uVar18 < (int)uVar20) {
            uVar18 = uVar20;
          }
          if ((param_4 != (undefined4 *)0x0) && (uVar26 != uVar18)) goto LAB_146c05ff2;
          if (uVar26 != uVar18) goto LAB_146c04bc5;
          uVar29 = uVar5 + 1;
          if ((int)(uVar5 + 1) < (int)uVar16) {
            uVar29 = uVar16;
          }
          do {
            uVar26 = uVar29;
            if (uVar29 - 1 == uVar5) break;
            uVar5 = uVar5 + 1;
            uVar26 = uVar5;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_1 + 0x1d8) +
                                                 (ulonglong)(uVar5 >> 9) * 8) +
                                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
          uVar5 = uVar26;
        } while (uVar5 != uVar16);
      }
      goto LAB_146c04cd2;
    }
    if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
    *param_4 = 3;
    uVar5 = *(uint *)(local_e8 + 0x200);
LAB_146c0518c:
    uVar16 = *(uint *)(param_1 + 0x200);
    pwVar13 = L"Edge Count: %d != %d";
LAB_146c0519a:
    FUN_140002266(&local_c0,pwVar13,uVar16,uVar5);
    if ((longlong *)(param_4 + 2) == &local_c0) {
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_4 + 2) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_4 + 2) = local_c0;
      local_c0 = 0;
      param_4[4] = local_b8;
      param_4[5] = local_b4;
    }
LAB_146c04bc5:
    uVar17 = 0;
  }
  else {
LAB_146c04cd2:
    lVar21 = local_e8;
    if (local_e0[1] == '\x01') {
      if (*(int *)(param_1 + 0x200) != *(int *)(local_e8 + 0x200)) {
        if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
        *param_4 = 3;
        uVar5 = *(uint *)(local_e8 + 0x200);
        goto LAB_146c0518c;
      }
      uVar5 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
      uVar22 = 0;
      if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x1d8) - 1U))) {
        uVar11 = 1;
        uVar15 = 1;
        if (1 < (int)uVar5) {
          uVar11 = (ulonglong)uVar5;
        }
        do {
          uVar16 = (uint)uVar15;
          uVar22 = uVar11;
          if ((uint)uVar11 == uVar16) break;
          uVar25 = uVar15 >> 9;
          uVar22 = uVar15;
          uVar15 = (ulonglong)(uVar16 + 1);
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x1d8))[uVar25] +
                                             (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
      }
      if ((uint)uVar22 != uVar5) {
        local_d8 = CONCAT71(local_d8._1_7_,local_70);
        local_d0 = local_80[0];
LAB_146c05439:
        uVar16 = (uint)uVar22;
        if (((int)uVar16 < 0) ||
           (*(int *)(local_e8 + 0x1d0) * 0x200 + *(int *)(local_e8 + 0x1d4) <= (int)uVar16)) {
LAB_146c05734:
          if (param_4 != (undefined4 *)0x0) {
LAB_146c0573d:
            *param_4 = 6;
            param_4[6] = uVar16;
LAB_146c05746:
            uVar10 = 0x3ffffffff;
            goto LAB_146c04bc1;
          }
        }
        else {
          uVar15 = uVar22 >> 9;
          uVar29 = uVar16 & 0x1ff;
          if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            (*(longlong *)(local_e8 + 0x1d8) + uVar15 * 8) +
                                          (ulonglong)uVar29 * 2) - 1U)) goto LAB_146c05734;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar15 * 8);
          uVar17 = (ulonglong)(uVar29 << 4);
          uVar26 = *(uint *)(lVar2 + 8 + uVar17);
          uVar12 = *(uint *)(lVar2 + 0xc + uVar17);
          if ((local_70 & 1) != 0) {
            uVar18 = 0xffffffff;
            if (uVar26 != 0xffffffff) {
              uVar18 = *(uint *)(*(longlong *)(local_80[0] + (ulonglong)(uVar26 >> 9) * 8) +
                                (ulonglong)(uVar26 & 0x1ff) * 4);
            }
            uVar26 = uVar18;
            if (uVar12 == 0xffffffff) {
              uVar12 = 0xffffffff;
            }
            else {
              uVar12 = *(uint *)(*(longlong *)(local_80[0] + (ulonglong)(uVar12 >> 9) * 8) +
                                (ulonglong)(uVar12 & 0x1ff) * 4);
            }
          }
          lVar3 = *(longlong *)(*(longlong *)(local_e8 + 0x1c0) + uVar15 * 8);
          uVar15 = (ulonglong)(uVar29 << 4);
          if ((*(int *)(lVar2 + uVar17) != *(int *)(lVar3 + uVar15)) ||
             (*(int *)(lVar2 + 4 + uVar17) != *(int *)(lVar3 + 4 + uVar15))) goto LAB_146c05734;
          bVar28 = uVar12 != *(uint *)(lVar3 + uVar15 + 0xc);
          bVar27 = uVar26 != *(uint *)(lVar3 + uVar15 + 8);
          if ((param_4 != (undefined4 *)0x0) && (bVar28 || bVar27)) goto LAB_146c0573d;
          if (!bVar28 && !bVar27) goto code_r0x000146c05531;
        }
        goto LAB_146c04bc5;
      }
    }
LAB_146c04d2e:
    if (local_e0[2] == '\x01') {
      if (*(char *)(param_1 + 0x70) != *(char *)(local_e8 + 0x70)) {
        if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
        *param_4 = 8;
        uVar5 = (uint)*(byte *)(local_e8 + 0x70);
        uVar16 = (uint)*(byte *)(param_1 + 0x70);
        pwVar13 = L"Has Vertex Normals: %d != %d";
        goto LAB_146c0519a;
      }
      if (*(char *)(param_1 + 0x70) != '\0') {
        uVar5 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
        uVar22 = 0;
        if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
          uVar11 = 1;
          uVar15 = 1;
          if (1 < (int)uVar5) {
            uVar11 = (ulonglong)uVar5;
          }
          do {
            uVar16 = (uint)uVar15;
            uVar22 = uVar11;
            if ((uint)uVar11 == uVar16) break;
            uVar25 = uVar15 >> 9;
            uVar22 = uVar15;
            uVar15 = (ulonglong)(uVar16 + 1);
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar25] +
                                               (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        }
        if ((uint)uVar22 != uVar5) {
          fVar31 = *(float *)(local_e0 + 8);
          do {
            uVar16 = (uint)uVar22;
            uVar15 = uVar22 >> 9;
            if (local_50 == '\0') {
              uVar14 = (ulonglong)(uVar16 & 0x1ff);
              uVar11 = uVar15;
              uVar25 = uVar14;
            }
            else {
              uVar29 = *(uint *)(*(longlong *)(CONCAT44(uStack_5c,local_60) + uVar15 * 8) +
                                (ulonglong)(uVar16 & 0x1ff) * 4);
              uVar14 = (ulonglong)(uVar29 & 0x1ff);
              uVar11 = (ulonglong)(uVar29 >> 9);
              uVar25 = (ulonglong)(uVar16 & 0x1ff);
            }
            lVar2 = *(longlong *)(*(longlong *)(local_e8 + 0x60) + uVar11 * 8);
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar15 * 8);
            fVar30 = *(float *)(lVar3 + uVar25 * 0xc) - *(float *)(lVar2 + uVar14 * 0xc);
            uVar29 = -(uint)(-fVar30 <= fVar30);
            if (((fVar31 <= (float)(~uVar29 & (uint)-fVar30 | (uint)fVar30 & uVar29)) ||
                (fVar30 = *(float *)(lVar3 + uVar25 * 0xc + 4) -
                          *(float *)(lVar2 + uVar14 * 0xc + 4), uVar29 = -(uint)(-fVar30 <= fVar30),
                fVar31 <= (float)(~uVar29 & (uint)-fVar30 | (uint)fVar30 & uVar29))) ||
               (fVar30 = *(float *)(lVar3 + 8 + uVar25 * 0xc) - *(float *)(lVar2 + 8 + uVar14 * 0xc)
               , uVar29 = -(uint)(-fVar30 <= fVar30),
               fVar31 <= (float)(~uVar29 & (uint)-fVar30 | (uint)fVar30 & uVar29))) {
              if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
              *param_4 = 8;
              goto LAB_146c05a1a;
            }
            uVar29 = uVar16 + 1;
            if ((int)(uVar16 + 1) < (int)uVar5) {
              uVar29 = uVar5;
            }
            do {
              iVar6 = (int)uVar22;
              uVar22 = (ulonglong)uVar29;
              if (uVar29 - 1 == iVar6) break;
              uVar16 = iVar6 + 1;
              uVar22 = (ulonglong)uVar16;
              uVar16 = *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar16 >> 9) * 8)
                        + (ulonglong)(uVar16 & 0x1ff) * 2) - 1;
              uVar17 = (ulonglong)uVar16;
            } while (0xfffd < (ushort)uVar16);
          } while ((uint)uVar22 != uVar5);
        }
      }
    }
    if (local_e0[3] == '\x01') {
      if (*(char *)(param_1 + 0x90) != *(char *)(local_e8 + 0x90)) {
        if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
        *param_4 = 9;
        uVar5 = (uint)*(byte *)(local_e8 + 0x90);
        uVar16 = (uint)*(byte *)(param_1 + 0x90);
        pwVar13 = L"Has Vertex Colors: %d != %d";
        goto LAB_146c0519a;
      }
      if (*(char *)(param_1 + 0x90) != '\0') {
        uVar5 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
        uVar22 = 0;
        if ((uVar5 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
          uVar11 = 1;
          uVar15 = 1;
          if (1 < (int)uVar5) {
            uVar11 = (ulonglong)uVar5;
          }
          do {
            uVar16 = (uint)uVar15;
            uVar22 = uVar11;
            if ((uint)uVar11 == uVar16) break;
            uVar25 = uVar15 >> 9;
            uVar22 = uVar15;
            uVar15 = (ulonglong)(uVar16 + 1);
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar25] +
                                               (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        }
        if ((uint)uVar22 != uVar5) {
          fVar31 = *(float *)(local_e0 + 8);
          do {
            uVar16 = (uint)uVar22;
            uVar15 = uVar22 >> 9;
            if (local_50 == '\0') {
              uVar14 = (ulonglong)(uVar16 & 0x1ff);
              uVar11 = uVar15;
              uVar25 = uVar14;
            }
            else {
              uVar29 = *(uint *)(*(longlong *)(CONCAT44(uStack_5c,local_60) + uVar15 * 8) +
                                (ulonglong)(uVar16 & 0x1ff) * 4);
              uVar14 = (ulonglong)(uVar29 & 0x1ff);
              uVar11 = (ulonglong)(uVar29 >> 9);
              uVar25 = (ulonglong)(uVar16 & 0x1ff);
            }
            lVar2 = *(longlong *)(*(longlong *)(local_e8 + 0x80) + uVar11 * 8);
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + uVar15 * 8);
            fVar30 = *(float *)(lVar3 + uVar25 * 0xc) - *(float *)(lVar2 + uVar14 * 0xc);
            uVar29 = -(uint)(-fVar30 <= fVar30);
            if (((fVar31 <= (float)(~uVar29 & (uint)-fVar30 | (uint)fVar30 & uVar29)) ||
                (fVar30 = *(float *)(lVar3 + uVar25 * 0xc + 4) -
                          *(float *)(lVar2 + uVar14 * 0xc + 4), uVar29 = -(uint)(-fVar30 <= fVar30),
                fVar31 <= (float)(~uVar29 & (uint)-fVar30 | (uint)fVar30 & uVar29))) ||
               (fVar30 = *(float *)(lVar3 + 8 + uVar25 * 0xc) - *(float *)(lVar2 + 8 + uVar14 * 0xc)
               , uVar29 = -(uint)(-fVar30 <= fVar30),
               fVar31 <= (float)(~uVar29 & (uint)-fVar30 | (uint)fVar30 & uVar29))) {
              if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
              *param_4 = 9;
              goto LAB_146c05a1a;
            }
            uVar29 = uVar16 + 1;
            if ((int)(uVar16 + 1) < (int)uVar5) {
              uVar29 = uVar5;
            }
            do {
              iVar6 = (int)uVar22;
              uVar22 = (ulonglong)uVar29;
              if (uVar29 - 1 == iVar6) break;
              uVar16 = iVar6 + 1;
              uVar22 = (ulonglong)uVar16;
              uVar16 = *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar16 >> 9) * 8)
                        + (ulonglong)(uVar16 & 0x1ff) * 2) - 1;
              uVar17 = (ulonglong)uVar16;
            } while (0xfffd < (ushort)uVar16);
          } while ((uint)uVar22 != uVar5);
        }
      }
    }
    if (local_e0[4] == '\x01') {
      if (*(char *)(param_1 + 0xb0) != *(char *)(local_e8 + 0xb0)) {
        if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
        *param_4 = 10;
        uVar5 = (uint)*(byte *)(local_e8 + 0xb0);
        uVar16 = (uint)*(byte *)(param_1 + 0xb0);
        pwVar13 = L"Has Vertex UVs: %d != %d";
        goto LAB_146c0519a;
      }
      if (*(char *)(param_1 + 0xb0) != '\0') {
        uVar5 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
        uVar16 = 0;
        if ((uVar5 != 0) &&
           (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
          uVar22 = 1;
          uVar29 = 1;
          if (1 < (int)uVar5) {
            uVar29 = uVar5;
          }
          do {
            uVar26 = (uint)uVar22;
            uVar16 = uVar29;
            if (uVar29 == uVar26) break;
            uVar15 = uVar22 >> 9;
            uVar22 = (ulonglong)(uVar26 + 1);
            uVar16 = uVar26;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar15] +
                                               (ulonglong)(uVar26 & 0x1ff) * 2) - 1U));
        }
        if (uVar16 != uVar5) {
          do {
            uVar22 = (ulonglong)(uVar16 >> 9);
            if (local_50 == '\0') {
              uVar25 = (ulonglong)(uVar16 & 0x1ff);
              uVar15 = uVar22;
              uVar11 = uVar25;
            }
            else {
              uVar29 = *(uint *)(*(longlong *)(CONCAT44(uStack_5c,local_60) + uVar22 * 8) +
                                (ulonglong)(uVar16 & 0x1ff) * 4);
              uVar25 = (ulonglong)(uVar29 & 0x1ff);
              uVar15 = (ulonglong)(uVar29 >> 9);
              uVar11 = (ulonglong)(uVar16 & 0x1ff);
            }
            lVar2 = *(longlong *)(*(longlong *)(local_e8 + 0xa0) + uVar15 * 8);
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar22 * 8);
            fVar31 = *(float *)(lVar3 + uVar11 * 8) - *(float *)(lVar2 + uVar25 * 8);
            uVar29 = -(uint)(-fVar31 <= fVar31);
            if ((*(float *)(local_e0 + 8) <=
                 (float)(~uVar29 & (uint)-fVar31 | (uint)fVar31 & uVar29)) ||
               (fVar31 = *(float *)(lVar3 + 4 + uVar11 * 8) - *(float *)(lVar2 + 4 + uVar25 * 8),
               uVar29 = -(uint)(-fVar31 <= fVar31),
               *(float *)(local_e0 + 8) <= (float)(~uVar29 & (uint)-fVar31 | (uint)fVar31 & uVar29))
               ) {
              if (param_4 != (undefined4 *)0x0) {
                *param_4 = 10;
LAB_146c05a1a:
                param_4[6] = uVar16;
LAB_146c04bb7:
                uVar10 = 0x1ffffffff;
LAB_146c04bc1:
                *(undefined8 *)(param_4 + 7) = uVar10;
              }
              goto LAB_146c04bc5;
            }
            uVar29 = uVar16 + 1;
            if ((int)(uVar16 + 1) < (int)uVar5) {
              uVar29 = uVar5;
            }
            do {
              uVar26 = uVar29;
              if (uVar29 - 1 == uVar16) break;
              uVar16 = uVar16 + 1;
              uVar12 = *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar16 >> 9) * 8)
                        + (ulonglong)(uVar16 & 0x1ff) * 2) - 1;
              uVar17 = (ulonglong)uVar12;
              uVar26 = uVar16;
            } while (0xfffd < (ushort)uVar12);
            uVar16 = uVar26;
          } while (uVar16 != uVar5);
        }
      }
    }
    if (local_e0[5] == '\x01') {
      if (*(char *)(param_1 + 0x1a8) != *(char *)(local_e8 + 0x1a8)) {
        if (param_4 == (undefined4 *)0x0) goto LAB_146c04bc5;
        *param_4 = 0xb;
        uVar5 = (uint)*(byte *)(local_e8 + 0x1a8);
        uVar16 = (uint)*(byte *)(param_1 + 0x1a8);
        pwVar13 = L"Has Triangle Groups: %d != %d";
        goto LAB_146c0519a;
      }
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        uVar16 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
        uVar5 = 0;
        if ((uVar16 != 0) &&
           (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
          uVar29 = 1;
          uVar26 = 1;
          if (1 < (int)uVar16) {
            uVar29 = uVar16;
          }
          do {
            uVar5 = uVar29;
            if (uVar29 == uVar26) break;
            uVar12 = uVar26 >> 9;
            uVar18 = uVar26 & 0x1ff;
            uVar5 = uVar26;
            uVar26 = uVar26 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar12] +
                                               (ulonglong)uVar18 * 2) - 1U));
        }
LAB_146c05968:
        if (uVar5 != uVar16) {
          uVar29 = uVar5;
          if (local_70 == 1) {
            uVar29 = *(uint *)(*(longlong *)(local_80[0] + (ulonglong)(uVar5 >> 9) * 8) +
                              (ulonglong)(uVar5 & 0x1ff) * 4);
          }
          uVar17 = (ulonglong)uVar29;
          iVar6 = FUN_146bc96d4(param_1,uVar5);
          iVar7 = FUN_146bc96d4(lVar21,uVar17);
          if (iVar6 != iVar7) {
            if (param_4 != (undefined4 *)0x0) {
              *param_4 = 0xb;
              uVar8 = FUN_146bc96d4(param_1,uVar17);
              uVar9 = FUN_146bc96d4(param_1,uVar5);
              FUN_140002266(&local_c0,L"Triangle Group: %d != %d",uVar9,uVar8);
              if ((longlong *)(param_4 + 2) == &local_c0) {
                if (local_c0 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*(longlong *)(param_4 + 2) != 0) {
                  FUN_1400020a8();
                }
                *(longlong *)(param_4 + 2) = local_c0;
                local_c0 = 0;
                param_4[4] = local_b8;
                param_4[5] = local_b4;
              }
              param_4[6] = uVar5;
              param_4[7] = uVar29;
LAB_146c0606e:
              param_4[8] = 2;
            }
            goto LAB_146c04bc5;
          }
          uVar29 = uVar5 + 1;
          if ((int)(uVar5 + 1) < (int)uVar16) {
            uVar29 = uVar16;
          }
          uVar26 = uVar5;
          do {
            uVar5 = uVar29;
            if (uVar29 - 1 == uVar26) break;
            uVar5 = uVar26 + 1;
            uVar26 = uVar5;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_1 + 0x148) +
                                                 (ulonglong)(uVar5 >> 9) * 8) +
                                               (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
          goto LAB_146c05968;
        }
      }
    }
    uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
    if (local_e0[6] == '\x01') {
      lVar2 = *(longlong *)(param_1 + 0x208);
      if ((lVar2 != 0) != (*(longlong *)(lVar21 + 0x208) != 0)) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = 0xc;
          uVar5 = (uint)(*(longlong *)(lVar21 + 0x208) != 0);
          uVar16 = (uint)(*(longlong *)(param_1 + 0x208) != 0);
          pwVar13 = L"Has Attribute Set: %d != %d";
          goto LAB_146c0519a;
        }
        goto LAB_146c04bc5;
      }
      if (lVar2 != 0) {
        uVar5 = FUN_146c0638c(lVar2,*(longlong *)(lVar21 + 0x208),local_e0[7]);
        uVar17 = (ulonglong)uVar5;
        if ((param_4 != (undefined4 *)0x0) && ((char)uVar5 == '\0')) {
          *param_4 = 0xc;
          goto LAB_146c04bc5;
        }
      }
    }
  }
  if ((local_70 == 1) && (FUN_141082b5c(local_80,0), local_80[0] != 0)) {
    FUN_1400020a8();
  }
  if ((local_50 == '\x01') && (FUN_141082b5c(&local_60,0), CONCAT44(uStack_5c,local_60) != 0)) {
    FUN_1400020a8();
  }
LAB_146c04a9d:
  if ((local_48 ^ (ulonglong)local_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 146c061a4 FUN_146c061a4 body=60 status=ok
// SIG undefined FUN_146c061a4(void)

longlong FUN_146c061a4(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_141082b5c(param_1 + 8,0);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_141040b84(param_1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 146c061e0 FUN_146c061e0 body=428 status=ok
// SIG undefined FUN_146c061e0(void)

uint FUN_146c061e0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 != param_3) {
    uVar3 = param_2;
    if ((int)param_3 <= (int)param_2) {
      uVar3 = param_3;
      param_3 = param_2;
    }
    if ((-1 < (int)uVar3) &&
       ((int)uVar3 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
      if (((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 >> 9) * 8) +
                              (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) &&
         (uVar3 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xc0) + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 4), uVar3 != 0xffffffff)) {
        lVar2 = *(longlong *)(param_1 + 0xd8);
        iVar4 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                        (ulonglong)(uVar3 & 0x1ff) * 4);
        if (iVar4 < 8) {
          uVar5 = iVar4 + uVar3;
          if ((int)uVar5 < (int)uVar3) {
            uVar5 = uVar3;
          }
          while (uVar3 = uVar3 + 1, uVar3 - uVar5 != 1) {
            uVar1 = *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 4);
            if (*(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 4 +
                         (ulonglong)((uVar1 & 0x1ff) << 4)) == param_3) {
              return uVar1;
            }
          }
        }
        else {
          iVar4 = 0;
          while (iVar4 != 8) {
            uVar5 = uVar3 + 1 + iVar4;
            uVar5 = *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar5 >> 9) * 8) +
                             (ulonglong)(uVar5 & 0x1ff) * 4);
            iVar4 = iVar4 + 1;
            if (*(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) + 4 +
                         (ulonglong)((uVar5 & 0x1ff) << 4)) == param_3) {
              return uVar5;
            }
          }
          uVar3 = *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 + 9 >> 9) * 8) +
                           (ulonglong)(uVar3 + 9 & 0x1ff) * 4);
          if (uVar3 != 0xffffffff) {
            do {
              uVar5 = *(uint *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar3 >> 9) * 8) +
                               (ulonglong)(uVar3 & 0x1ff) * 4);
              if (*(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8) + 4 +
                           (ulonglong)((uVar5 & 0x1ff) << 4)) == param_3) {
                return uVar5;
              }
              uVar3 = *(uint *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar3 + 1 >> 9) * 8)
                               + (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
            } while (uVar3 != 0xffffffff);
          }
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 146c0638c FUN_146c0638c body=1624 status=ok
// SIG undefined FUN_146c0638c(void)

undefined8 FUN_146c0638c(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char extraout_AL;
  uint uVar5;
  undefined7 uVar7;
  undefined7 extraout_var;
  undefined8 uVar6;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) &&
       (iVar1 = *(int *)(param_1 + 0x38), iVar1 == *(int *)(param_2 + 0x38))) &&
      (*(int *)(param_1 + 0x68) == *(int *)(param_2 + 0x68))) &&
     (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58))) {
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar15 = 0;
      do {
        cVar4 = FUN_146c22a48(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar15 * 8),
                              *(undefined8 *)(*(longlong *)(param_2 + 0x20) + lVar15 * 8),param_3);
        if (cVar4 == '\0') goto LAB_146c064cd;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x28));
      iVar1 = *(int *)(param_1 + 0x38);
    }
    if (0 < iVar1) {
      lVar15 = 0;
      do {
        cVar4 = FUN_146c23182(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar15 * 8),
                              *(undefined8 *)(*(longlong *)(param_2 + 0x30) + lVar15 * 8),param_3);
        if (cVar4 == '\0') goto LAB_146c064cd;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x38));
    }
    iVar1 = *(int *)(param_1 + 0x68);
    if (0 < (longlong)iVar1) {
      lVar15 = *(longlong *)(param_1 + 0x60);
      lVar2 = *(longlong *)(param_2 + 0x60);
      lVar14 = 0;
      do {
        cVar4 = FUN_146c2389e(*(undefined8 *)(lVar15 + lVar14 * 8),
                              *(undefined8 *)(lVar2 + lVar14 * 8),param_3);
        if (cVar4 == '\0') goto LAB_146c064cd;
        lVar14 = lVar14 + 1;
      } while (iVar1 != lVar14);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (0 < (longlong)iVar1) {
      lVar15 = *(longlong *)(param_1 + 0x50);
      lVar2 = *(longlong *)(param_2 + 0x50);
      lVar14 = 0;
      do {
        cVar4 = FUN_146c23b12(*(undefined8 *)(lVar15 + lVar14 * 8),
                              *(undefined8 *)(lVar2 + lVar14 * 8),param_3);
        if (cVar4 == '\0') goto LAB_146c064cd;
        lVar14 = lVar14 + 1;
      } while (iVar1 != lVar14);
    }
    lVar15 = *(longlong *)(param_1 + 0x40);
    if (((*(longlong *)(param_2 + 0x40) != 0) == (lVar15 != 0)) &&
       ((lVar15 == 0 ||
        (cVar4 = FUN_146c23d7c(lVar15,*(longlong *)(param_2 + 0x40),param_3), cVar4 != '\0')))) {
      lVar15 = *(longlong *)(param_1 + 0x48);
      if (((*(longlong *)(param_2 + 0x48) != 0) == (lVar15 != 0)) &&
         ((lVar15 == 0 ||
          (cVar4 = FUN_146c2389e(lVar15,*(longlong *)(param_2 + 0x48),param_3), cVar4 != '\0')))) {
        uVar9 = *(uint *)(param_1 + 0x78);
        uVar10 = (ulonglong)uVar9;
        if (uVar9 - *(uint *)(param_1 + 0xa4) == *(int *)(param_2 + 0x78) - *(int *)(param_2 + 0xa4)
           ) {
          if (uVar9 != *(uint *)(param_1 + 0xa4)) {
            local_b0 = param_1 + 0x80;
            local_b8 = (longlong *)0x100000000;
            local_a8 = 0xffffffff;
            local_a0 = local_a0 & 0xffffffff00000000;
            if (*(int *)(param_1 + 0x98) != 0) {
              FUN_1449c0562(&local_b8);
            }
            local_78 = local_a8;
            local_70 = (uint)local_a0;
            local_6c = local_a0._4_4_;
            local_88 = local_b8;
            local_80 = local_b0;
            local_60 = param_2 + 0x80;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            local_50 = 0;
            local_90 = (longlong *)(param_1 + 0x70);
            if (*(int *)(param_2 + 0x98) != 0) {
              FUN_1449c0562(&local_68);
            }
            local_a0 = local_58;
            local_98 = local_50;
            local_94 = local_4c;
            local_b0 = local_68;
            local_a8 = local_60;
            local_b8 = (longlong *)(param_2 + 0x70);
            while( true ) {
              uVar10 = (ulonglong)local_78._4_4_;
              if (*(int *)(local_80 + 0x18) <= (int)local_78._4_4_) break;
              if (*(int *)(local_a8 + 0x18) <= local_a0._4_4_) break;
              if (*(longlong *)(*local_90 + (longlong)(int)local_78._4_4_ * 0x18) !=
                  *(longlong *)(*local_b8 + (longlong)local_a0._4_4_ * 0x18)) goto LAB_146c064cd;
              lVar15 = *(longlong *)(*local_90 + (longlong)(int)local_78._4_4_ * 0x18 + 8);
              lVar2 = *(longlong *)(*local_b8 + (longlong)local_a0._4_4_ * 0x18 + 8);
              if ((char)param_3 == '\0') {
                uVar9 = *(int *)(lVar15 + 0x18) * 0x200 + *(int *)(lVar15 + 0x1c);
                if (uVar9 != *(int *)(lVar2 + 0x18) * 0x200 + *(int *)(lVar2 + 0x1c))
                goto LAB_146c064cd;
                if (0 < (int)uVar9) {
                  lVar2 = *(longlong *)(lVar2 + 0x20);
                  lVar15 = *(longlong *)(lVar15 + 0x20);
                  uVar10 = 0;
                  do {
                    uVar8 = (ulonglong)(((uint)uVar10 & 0x1ff) << 6);
                    cVar4 = FUN_142972ca0(uVar8 + *(longlong *)(lVar15 + (uVar10 >> 9) * 8),
                                          *(longlong *)(lVar2 + (uVar10 >> 9) * 8) + uVar8);
                    if (cVar4 == '\0') goto LAB_146c064cd;
                    uVar12 = (uint)uVar10 + 1;
                    uVar10 = (ulonglong)uVar12;
                  } while (uVar9 != uVar12);
                }
              }
              else {
                local_d0 = *(longlong *)(lVar15 + 0x10);
                lVar14 = *(longlong *)(lVar2 + 0x10);
                if (*(int *)(local_d0 + 0x50) != *(int *)(lVar14 + 0x50)) goto LAB_146c064cd;
                uVar12 = *(int *)(local_d0 + 0x20) * 0x200 + *(int *)(local_d0 + 0x24);
                uVar9 = 0;
                if (uVar12 != 0) {
                  uVar9 = 0;
                  if (0xfffd < (ushort)(*(short *)**(undefined8 **)(local_d0 + 0x28) - 1U)) {
                    uVar10 = 1;
                    uVar13 = 1;
                    if (1 < (int)uVar12) {
                      uVar13 = uVar12;
                    }
                    do {
                      uVar5 = (uint)uVar10;
                      uVar9 = uVar13;
                      if (uVar13 == uVar5) break;
                      uVar8 = uVar10 >> 9;
                      uVar10 = (ulonglong)(uVar5 + 1);
                      uVar9 = uVar5;
                    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_d0 + 0x28))[uVar8]
                                                         + (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
                  }
                }
                uVar13 = *(int *)(lVar14 + 0x20) * 0x200 + *(int *)(lVar14 + 0x24);
                uVar10 = 0;
                if ((uVar13 != 0) &&
                   (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar14 + 0x28) - 1U))) {
                  uVar17 = 1;
                  uVar8 = 1;
                  if (1 < (int)uVar13) {
                    uVar17 = (ulonglong)uVar13;
                  }
                  do {
                    uVar11 = uVar8;
                    uVar5 = (uint)uVar11;
                    uVar10 = uVar17;
                    if ((uint)uVar17 == uVar5) break;
                    uVar8 = (ulonglong)(uVar5 + 1);
                    uVar10 = uVar11;
                  } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar14 + 0x28))
                                                        [uVar11 >> 9] +
                                                       (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
                }
                if ((uVar9 != uVar12) && ((uint)uVar10 != uVar13)) {
                  local_c0 = *(longlong *)(lVar2 + 0x20);
                  local_c8 = *(longlong *)(lVar15 + 0x20);
                  do {
                    cVar4 = FUN_142972ca0((ulonglong)((uVar9 & 0x1ff) << 6) +
                                          *(longlong *)(local_c8 + (ulonglong)(uVar9 >> 9) * 8),
                                          (ulonglong)(((uint)uVar10 & 0x1ff) << 6) +
                                          *(longlong *)(local_c0 + (uVar10 >> 9) * 8));
                    if (cVar4 == '\0') goto LAB_146c064cd;
                    uVar5 = uVar9 + 1;
                    if ((int)(uVar9 + 1) < (int)uVar12) {
                      uVar5 = uVar12;
                    }
                    do {
                      uVar16 = uVar5;
                      if (uVar5 - 1 == uVar9) break;
                      uVar9 = uVar9 + 1;
                      uVar16 = uVar9;
                    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                           (*(longlong *)(local_d0 + 0x28) +
                                                           (ulonglong)(uVar9 >> 9) * 8) +
                                                         (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
                    uVar9 = uVar16;
                    uVar5 = (uint)uVar10 + 1;
                    if ((int)uVar5 < (int)uVar13) {
                      uVar5 = uVar13;
                    }
                    do {
                      if (uVar5 - 1 == (int)uVar10) {
                        uVar10 = (ulonglong)uVar5;
                        break;
                      }
                      uVar16 = (int)uVar10 + 1;
                      uVar10 = (ulonglong)uVar16;
                    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                           (*(longlong *)(lVar14 + 0x28) +
                                                           (ulonglong)(uVar16 >> 9) * 8) +
                                                         (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
                  } while ((uVar9 != uVar12) && ((uint)uVar10 != uVar13));
                }
              }
              local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
              FUN_1449c0562(&local_88);
              local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
              FUN_1449c0562(&local_b0);
            }
          }
          plVar3 = *(longlong **)(param_1 + 0xc0);
          uVar7 = (undefined7)(uVar10 >> 8);
          if (((*(longlong *)(param_2 + 0xc0) != 0) == (plVar3 != (longlong *)0x0)) &&
             ((plVar3 == (longlong *)0x0 ||
              ((cVar4 = (**(code **)(*plVar3 + 0xc0))(), cVar4 != '\0' &&
               ((**(code **)(**(longlong **)(param_1 + 200) + 0xc0))
                          (*(longlong **)(param_1 + 200),*(undefined8 *)(param_2 + 200)),
               uVar7 = extraout_var, extraout_AL != '\0')))))) {
            uVar6 = CONCAT71(uVar7,1);
            goto LAB_146c064cf;
          }
        }
      }
    }
  }
LAB_146c064cd:
  uVar6 = 0;
LAB_146c064cf:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146c069e6 FUN_146c069e6 body=7180 status=ok
// SIG undefined FUN_146c069e6(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffe38 : 0x000146c06bbe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_146c069e6(code *param_1,uint param_2,int param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  code *_Src;
  undefined1 uVar10;
  short sVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int iVar18;
  longlong *plVar19;
  undefined ***pppuVar20;
  uint uVar21;
  longlong lVar22;
  code *pcVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  code *pcVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  code cVar32;
  bool bVar33;
  bool bVar34;
  undefined1 auStack_268 [40];
  code *local_240;
  uint local_238;
  uint local_234;
  ulonglong local_230;
  ulonglong local_228;
  int local_21c;
  undefined1 local_218 [15];
  undefined1 local_209;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f0;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined **local_1c8;
  undefined1 *puStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  longlong local_198 [3];
  undefined4 uStack_17c;
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  undefined8 uStack_150;
  code *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  longlong local_128 [4];
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  code *local_b8;
  ulonglong uStack_b0;
  undefined ***local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_208 = 0;
  uStack_200 = 0;
  local_234 = param_2;
  FUN_144a1a59e(&local_208,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
  uVar17 = uStack_a0;
  uVar31 = uStack_b0;
  local_209 = 1;
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_149f3bd00;
  puStack_90 = &local_209;
  local_b8 = (code *)&LAB_1429730a6;
  if (param_3 == 2) {
    local_1c8 = &PTR_LAB_149f3bd40;
    local_b8 = (code *)&LAB_142973146;
  }
  else {
    if (param_3 != 1) goto LAB_146c06bc4;
    local_1c8 = &PTR_LAB_149f3bd20;
    local_b8 = FUN_1429730f6;
  }
  local_148 = local_88;
  uStack_140 = uStack_80;
  uStack_13c = uStack_7c;
  local_158 = &PTR_LAB_149f3bd00;
  uStack_150 = &local_209;
  local_168 = 0;
  uStack_160 = uStack_a0;
  local_178 = (code *)&LAB_1429730a6;
  uStack_170 = uStack_b0;
  uStack_b0 = uStack_1e0;
  local_a8 = (undefined ***)0x0;
  uStack_a0 = uStack_1d0;
  local_98 = local_1c8;
  local_1e8 = (code *)&LAB_1429730a6;
  uStack_1e0 = uVar31;
  local_1c8 = &PTR_LAB_149f3bd00;
  puStack_1c0 = &local_209;
  local_1b8 = (undefined4)local_88;
  uStack_1b4 = local_88._4_4_;
  uStack_1b0 = uStack_80;
  uStack_1ac = uStack_7c;
  local_1d8 = 0;
  uStack_1d0 = uVar17;
  (*(code *)&LAB_1429730cc)();
LAB_146c06bc4:
  pcVar23 = local_b8;
  bVar34 = true;
  bVar33 = true;
  if (*(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c) == 0) {
    bVar33 = (longlong)*(int *)(param_1 + 0x50) ==
             (ulonglong)(uint)(*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc));
  }
  local_178._0_1_ = bVar33;
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  local_21c = param_3;
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar23)(uVar17,&local_178);
  pcVar23 = local_b8;
  if (*(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c) == 0) {
    bVar34 = (longlong)*(int *)(param_1 + 0x170) ==
             (ulonglong)(uint)(*(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300));
  }
  local_178 = (code *)CONCAT71(local_178._1_7_,bVar34);
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar23)(uVar17,&local_178);
  uVar26 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar24 = 0;
  if ((uVar26 != 0) &&
     (uVar24 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar26) {
      uVar13 = uVar26;
    }
    do {
      uVar24 = uVar13;
      if (uVar13 == uVar14) break;
      uVar21 = uVar14 >> 9;
      uVar25 = uVar14 & 0x1ff;
      uVar24 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar21] +
                                         (ulonglong)uVar25 * 2) - 1U));
  }
  if (uVar24 != uVar26) {
    do {
      local_238 = uVar26;
      pcVar23 = local_b8;
      if (((int)uVar24 < 0) ||
         (*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144) <= (int)uVar24)) {
        bVar33 = false;
      }
      else {
        bVar33 = (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar24 >> 9) * 8
                                      ) + (ulonglong)(uVar24 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      local_178._0_1_ = bVar33;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      pcVar23 = local_b8;
      local_228 = (ulonglong)(uVar24 >> 9);
      uVar31 = (ulonglong)((uVar24 >> 9) << 3);
      uVar29 = (ulonglong)(uVar24 & 0x1ff);
      local_178 = (code *)CONCAT71(local_178._1_7_,
                                   *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar31)
                                             + uVar29 * 2) == 1);
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar31);
      local_230 = uVar29 * 3;
      uStack_170 = CONCAT44(uStack_170._4_4_,*(undefined4 *)(lVar22 + 8 + uVar29 * 0xc));
      local_178 = *(code **)(lVar22 + uVar29 * 0xc);
      lVar22 = 0;
      do {
        pcVar23 = local_b8;
        uVar26 = *(uint *)((longlong)&local_178 + lVar22 * 4);
        if (((longlong)(int)uVar26 < 0) ||
           (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)uVar26)) {
          bVar33 = false;
        }
        else {
          bVar33 = (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x28) +
                                        (ulonglong)(uVar26 >> 9) * 8) +
                                      (ulonglong)(uVar26 & 0x1ff) * 2) - 1U) < 0xfffe;
        }
        local_1e8 = (code *)CONCAT71(local_1e8._1_7_,bVar33);
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar23)(uVar17,&local_1e8);
        piVar1 = (int *)(local_208 + (longlong)(int)uVar26 * 4);
        *piVar1 = *piVar1 + 1;
        lVar22 = lVar22 + 1;
      } while (lVar22 != 3);
      local_1e8 = (code *)0xffffffffffffffff;
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0xffffffff);
      lVar22 = 1;
      do {
        local_240 = (code *)CONCAT44(local_240._4_4_,(&uStack_17c)[lVar22]);
        lVar30 = 0;
        if (lVar22 != 3) {
          lVar30 = lVar22;
        }
        uVar5 = *(undefined4 *)((longlong)&local_178 + lVar30 * 4);
        uVar26 = FUN_146c061e0(param_1,(&uStack_17c)[lVar22],uVar5);
        pcVar23 = local_b8;
        local_108._0_1_ = uVar26 != 0xffffffff;
        *(uint *)((longlong)&local_1f0 + lVar22 * 4 + 4) = uVar26;
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar23)(uVar17,&local_108);
        pcVar23 = local_b8;
        uVar17 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar26 >> 9) * 8) + 8
                  + (ulonglong)((uVar26 & 0x1ff) << 4));
        local_108._0_1_ = uVar24 == (uint)((ulonglong)uVar17 >> 0x20) || uVar24 == (uint)uVar17;
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar23)(uVar17,&local_108);
        uVar13 = FUN_146c085f4(param_1,(ulonglong)local_240 & 0xffffffff,uVar5,uVar24);
        pcVar23 = local_b8;
        local_108 = (void *)CONCAT71(local_108._1_7_,uVar26 == uVar13);
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar23)(uVar17,&local_108);
        pcVar23 = local_b8;
        lVar22 = lVar22 + 1;
      } while (lVar22 != 4);
      if ((int)local_1e8 == local_1e8._4_4_) {
        bVar33 = false;
      }
      else {
        bVar33 = local_1e8._4_4_ != (int)uStack_1e0 && (int)local_1e8 != (int)uStack_1e0;
      }
      local_108 = (void *)CONCAT71(local_108._1_7_,bVar33);
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_108);
      lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x180) + local_228 * 8);
      local_100 = *(int *)(lVar22 + 8 + local_230 * 4);
      local_108 = *(void **)(lVar22 + local_230 * 4);
      lVar22 = 0;
      do {
        pcVar23 = local_b8;
        uVar26 = *(uint *)((longlong)&local_108 + lVar22 * 4);
        if (((int)uVar26 < 0) ||
           (*(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4) <= (int)uVar26)) {
          cVar32 = (code)0x0;
        }
        else {
          cVar32 = (code)((ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x1d8) +
                                               (ulonglong)(uVar26 >> 9) * 8) +
                                             (ulonglong)(uVar26 & 0x1ff) * 2) - 1U) < 0xfffe);
        }
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        local_1f0._0_1_ = cVar32;
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar23)(uVar17,&local_1f0);
        uVar17 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar26 >> 9) * 8) + 8
                  + (ulonglong)((uVar26 & 0x1ff) << 4));
        uVar21 = (uint)((ulonglong)uVar17 >> 0x20);
        uVar14 = (uint)uVar17;
        uVar13 = 0xffffffff;
        if (uVar24 == uVar21) {
          uVar13 = uVar14;
        }
        if (uVar24 == uVar14) {
          uVar13 = uVar21;
        }
        if (uVar13 == 0xffffffff) {
          uVar10 = FUN_146c08698(param_1,uVar24);
          pcVar23 = local_b8;
          local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,uVar10);
          pppuVar20 = local_a8;
          if (local_a8 == (undefined ***)0x0) {
            pppuVar20 = &local_98;
          }
          uVar17 = (*(code *)(*pppuVar20)[1])();
          (*pcVar23)(uVar17,&local_1f0);
        }
        else {
          local_1f0._0_1_ = (code)FUN_146c0875c(param_1,uVar13,uVar24);
          pcVar23 = local_b8;
          pppuVar20 = local_a8;
          if (local_a8 == (undefined ***)0x0) {
            pppuVar20 = &local_98;
          }
          uVar17 = (*(code *)(*pppuVar20)[1])();
          (*pcVar23)(uVar17,&local_1f0);
          pcVar23 = local_b8;
          iVar6 = *(int *)((longlong)&local_178 + lVar22 * 4);
          uVar31 = 0;
          if (lVar22 != 2) {
            uVar31 = lVar22 + 1U & 0xffffffff;
          }
          iVar16 = *(int *)((longlong)&local_178 + uVar31 * 4);
          uVar17 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar26 >> 9) * 8) +
                    (ulonglong)((uVar26 & 0x1ff) << 4));
          iVar18 = (int)uVar17;
          iVar15 = (int)((ulonglong)uVar17 >> 0x20);
          if (iVar6 == iVar18) {
            bVar33 = iVar16 == iVar15;
          }
          else {
            bVar33 = iVar16 == iVar18 && iVar15 == iVar6;
          }
          local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,bVar33);
          pppuVar20 = local_a8;
          if (local_a8 == (undefined ***)0x0) {
            pppuVar20 = &local_98;
          }
          uVar17 = (*(code *)(*pppuVar20)[1])();
          (*pcVar23)(uVar17,&local_1f0);
          pcVar23 = local_b8;
          if ((local_234 >> 8 & 1) == 0) {
            lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar13 >> 9) * 8);
            uVar31 = (ulonglong)(uVar13 & 0x1ff);
            iVar15 = *(int *)(lVar30 + uVar31 * 0xc);
            iVar18 = *(int *)(lVar30 + 4 + uVar31 * 0xc);
            iVar7 = *(int *)(lVar30 + 8 + uVar31 * 0xc);
            bVar33 = true;
            if (((iVar15 != iVar16) || (iVar18 != iVar6)) &&
               ((iVar18 != iVar16 || (iVar7 != iVar6)))) {
              bVar33 = iVar15 == iVar6 && iVar7 == iVar16;
            }
            local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,bVar33);
            pppuVar20 = local_a8;
            if (local_a8 == (undefined ***)0x0) {
              pppuVar20 = &local_98;
            }
            uVar17 = (*(code *)(*pppuVar20)[1])();
            (*pcVar23)(uVar17,&local_1f0);
          }
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != 3);
      uVar26 = uVar24 + 1;
      if ((int)(uVar24 + 1) < (int)local_238) {
        uVar26 = local_238;
      }
      do {
        uVar13 = uVar26;
        if (uVar26 - 1 == uVar24) break;
        uVar24 = uVar24 + 1;
        uVar13 = uVar24;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar24 >> 9) * 8) +
                                           (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
      uVar24 = uVar13;
      pcVar23 = (code *)0x0;
      uVar26 = local_238;
    } while (uVar24 != local_238);
  }
  pcVar28 = local_b8;
  if (param_1[0x1a8] != (code)0x0) {
    local_178 = (code *)CONCAT71(local_178._1_7_,
                                 (ulonglong)
                                 (uint)(*(int *)(param_1 + 400) * 0x200 + *(int *)(param_1 + 0x194))
                                 == (longlong)
                                    (*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144)))
    ;
    pppuVar20 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar20 = &local_98;
    }
    uVar17 = (*(code *)(*pppuVar20)[1])();
    (*pcVar28)(uVar17,&local_178);
    uVar31 = 0;
    uVar24 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    pcVar23 = (code *)(ulonglong)uVar24;
    if ((uVar24 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar31 = 1;
      uVar26 = 1;
      if (1 < (int)uVar24) {
        uVar31 = (ulonglong)uVar24;
      }
      do {
        uVar13 = uVar26;
        if ((uint)uVar31 == uVar13) goto LAB_146c0734e;
        uVar26 = uVar13 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar13 >> 9] +
                                           (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      uVar31 = (ulonglong)uVar13;
    }
LAB_146c0734e:
    if ((uint)uVar31 != uVar24) {
      do {
        pcVar28 = local_b8;
        uVar29 = (ulonglong)(((uint)uVar31 & 0x1ff) << 2);
        local_178._0_1_ =
             -1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + (uVar31 >> 9) * 8) +
                          uVar29);
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar28)(uVar17,&local_178);
        pcVar28 = local_b8;
        local_178 = (code *)CONCAT71(local_178._1_7_,
                                     *(int *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x198) + (uVar31 >> 9) * 8)
                                             + uVar29) < *(int *)(param_1 + 0x1b0));
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar28)(uVar17,&local_178);
        uVar26 = (uint)uVar31 + 1;
        if ((int)uVar26 < (int)uVar24) {
          uVar26 = uVar24;
        }
        do {
          if (uVar26 - 1 == (int)uVar31) {
            uVar31 = (ulonglong)uVar26;
            break;
          }
          uVar13 = (int)uVar31 + 1;
          uVar31 = (ulonglong)uVar13;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar13 >> 9) * 8) +
                                             (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
      } while ((uint)uVar31 != uVar24);
    }
  }
  uVar31 = 0;
  uVar24 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
  if ((uVar24 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x1d8) - 1U))) {
    uVar31 = 1;
    uVar26 = 1;
    if (1 < (int)uVar24) {
      uVar31 = (ulonglong)uVar24;
    }
    do {
      uVar13 = uVar26;
      if ((uint)uVar31 == uVar13) goto LAB_146c0746f;
      uVar26 = uVar13 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x1d8))[uVar13 >> 9] +
                                         (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
    uVar31 = (ulonglong)uVar13;
  }
LAB_146c0746f:
  if ((uint)uVar31 != uVar24) {
    local_240 = (code *)CONCAT44(local_240._4_4_,uVar24);
    do {
      pcVar23 = local_b8;
      uVar24 = (uint)uVar31;
      if (((int)uVar24 < 0) ||
         (*(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4) <= (int)uVar24)) {
        bVar33 = false;
      }
      else {
        bVar33 = (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x1d8) + (uVar31 >> 9) * 8) +
                                    (ulonglong)(uVar24 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      local_178._0_1_ = bVar33;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      pcVar23 = local_b8;
      local_178._0_1_ =
           *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + (uVar31 >> 9) * 8) +
                     (ulonglong)(uVar24 & 0x1ff) * 2) == 1;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      pcVar23 = local_b8;
      lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (uVar31 >> 9) * 8);
      uVar27 = (ulonglong)((uVar24 & 0x1ff) << 4);
      uVar29 = *(ulonglong *)(lVar22 + uVar27);
      uVar26 = (uint)uVar29;
      if (((int)uVar26 < 0) ||
         (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)uVar26)) {
        local_178._0_1_ = false;
      }
      else {
        local_178._0_1_ =
             (ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x28) +
                                  (ulonglong)((uint)(uVar29 >> 6) & 0x1fffff8)) +
                                (ulonglong)(uVar26 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      uVar27 = *(ulonglong *)(lVar22 + 8 + uVar27);
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      pcVar23 = local_b8;
      uVar13 = (uint)(uVar29 >> 0x20);
      if (((longlong)uVar29 < 0) ||
         (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)uVar13)) {
        local_178._0_1_ = false;
      }
      else {
        local_178._0_1_ =
             (ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (uVar29 >> 0x29) * 8)
                                + (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      pcVar23 = local_b8;
      uVar14 = (uint)uVar27;
      local_178._0_1_ = uVar14 != 0xffffffff;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      pcVar23 = local_b8;
      local_178._0_1_ = (int)uVar26 < (int)uVar13;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      pcVar23 = local_b8;
      if (((int)uVar14 < 0) ||
         (*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144) <= (int)uVar14)) {
        bVar33 = false;
      }
      else {
        bVar33 = (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x148) +
                                      (ulonglong)((uint)(uVar27 >> 6) & 0x1fffff8)) +
                                    (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      local_178 = (code *)CONCAT71(local_178._1_7_,bVar33);
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_178);
      pcVar28 = local_b8;
      uVar26 = (uint)(uVar27 >> 0x20);
      if (uVar26 != 0xffffffff) {
        if (((longlong)uVar27 < 0) ||
           (*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144) <= (int)uVar26)) {
          bVar33 = false;
        }
        else {
          bVar33 = (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x148) + (uVar27 >> 0x29) * 8) +
                                      (ulonglong)(uVar26 & 0x1ff) * 2) - 1U) < 0xfffe;
        }
        local_178 = (code *)CONCAT71(local_178._1_7_,bVar33);
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar28)(uVar17,&local_178);
        pcVar23 = pcVar28;
      }
      uVar26 = uVar24 + 1;
      if ((int)(uVar24 + 1) < (int)(uint)local_240) {
        uVar26 = (uint)local_240;
      }
      do {
        if (uVar26 - 1 == (int)uVar31) {
          uVar31 = (ulonglong)uVar26;
          break;
        }
        uVar24 = (int)uVar31 + 1;
        uVar31 = (ulonglong)uVar24;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x1d8) +
                                             (ulonglong)(uVar24 >> 9) * 8) +
                                           (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
    } while ((uint)uVar31 != (uint)local_240);
  }
  if ((*(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c) == 0) &&
     (0 < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc))) {
    pcVar23 = (code *)0x0;
    do {
      pcVar28 = local_b8;
      uVar24 = (uint)pcVar23;
      if ((int)uVar24 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24)) {
        bVar33 = (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x28) + ((ulonglong)pcVar23 >> 9) * 8
                                      ) + (ulonglong)(uVar24 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      else {
        bVar33 = false;
      }
      local_178 = (code *)CONCAT71(local_178._1_7_,bVar33);
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar28)(uVar17,&local_178);
      pcVar23 = (code *)(ulonglong)(uVar24 + 1);
    } while ((int)(uVar24 + 1) < *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc));
  }
  uVar26 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar24 = 0;
  if ((uVar26 != 0) &&
     (uVar24 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar26) {
      uVar13 = uVar26;
    }
    do {
      uVar24 = uVar13;
      if (uVar13 == uVar14) break;
      uVar21 = uVar14 >> 9;
      uVar25 = uVar14 & 0x1ff;
      uVar24 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar21] +
                                         (ulonglong)uVar25 * 2) - 1U));
  }
  if (uVar24 == uVar26) {
LAB_146c0789f:
    plVar19 = *(longlong **)(param_1 + 0x208);
    if (plVar19 != (longlong *)0x0) {
      uVar10 = (**(code **)(*plVar19 + 0x30))(plVar19,1,local_21c);
      pcVar28 = local_b8;
      local_178 = (code *)CONCAT71(local_178._1_7_,uVar10);
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar28)(uVar17,&local_178);
    }
    uVar31 = CONCAT71((int7)((ulonglong)pcVar23 >> 8),local_209);
    if (local_b8 != (code *)0x0) {
      pppuVar20 = &local_98;
      if (local_a8 != (undefined ***)0x0) {
        pppuVar20 = local_a8;
      }
      (*(code *)(*pppuVar20)[2])(pppuVar20);
    }
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
      return uVar31 & 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  pcVar28 = param_1 + 0xb8;
  local_240 = pcVar28;
  local_238 = uVar26;
LAB_146c0797c:
  pcVar23 = local_b8;
  if (((int)uVar24 < 0) ||
     (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)uVar24)) {
    bVar33 = false;
  }
  else {
    bVar33 = (ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar24 >> 9) * 8) +
                                (ulonglong)(uVar24 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  local_178 = (code *)CONCAT71(local_178._1_7_,bVar33);
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar23)(uVar17,&local_178);
  local_228 = (ulonglong)(uVar24 >> 9);
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x10) + local_228 * 8);
  local_230 = (ulonglong)(uVar24 & 0x1ff);
  dVar2 = *(double *)(lVar22 + local_230 * 0x18);
  dVar3 = *(double *)(lVar22 + 8 + local_230 * 0x18);
  dVar4 = *(double *)(lVar22 + 0x10 + local_230 * 0x18);
  pcVar23 = (code *)(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
  local_178 = pcVar23;
  sVar11 = _dtest(&local_178);
  pcVar9 = local_b8;
  local_178 = (code *)CONCAT71(local_178._1_7_,sVar11 != 2);
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar9)(uVar17,&local_178);
  local_178 = pcVar23;
  sVar11 = _dtest(&local_178);
  pcVar23 = local_b8;
  local_178 = (code *)CONCAT71(local_178._1_7_,sVar11 < 1);
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar23)(uVar17,&local_178);
  FUN_146be983e(&local_178,pcVar28,uVar24,0);
  if (local_178 != pcVar28) goto LAB_146c07af0;
  if ((uint)uStack_170 != uVar24) goto LAB_146c07af0;
  if ((int)uStack_160 != -1) goto LAB_146c07af0;
  iVar6 = uStack_160._4_4_;
  while (iVar6 != -1) {
LAB_146c07af0:
    do {
      pcVar23 = local_b8;
      uVar26 = (uint)local_158;
      if (((int)(uint)local_158 < 0) ||
         (*(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4) <= (int)(uint)local_158)) {
        bVar33 = false;
      }
      else {
        bVar33 = (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x1d8) +
                                      (ulonglong)((uint)local_158 >> 9) * 8) +
                                    (ulonglong)((uint)local_158 & 0x1ff) * 2) - 1U) < 0xfffe;
      }
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      local_1e8._0_1_ = bVar33;
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_1e8);
      pcVar23 = local_b8;
      uVar31 = (ulonglong)((uVar26 & 0x1ff) << 4);
      uVar17 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar26 >> 9) * 8) +
                uVar31);
      local_1e8._0_1_ = uVar24 == (uint)((ulonglong)uVar17 >> 0x20) || uVar24 == (uint)uVar17;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_1e8);
      uVar31 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar26 >> 9) * 8) +
                uVar31);
      uVar29 = 0xffffffff;
      if (uVar24 == (uint)(uVar31 >> 0x20)) {
        uVar29 = uVar31 & 0xffffffff;
      }
      if (uVar24 == (uint)uVar31) {
        uVar29 = uVar31 >> 0x20;
      }
      uVar13 = FUN_146c061e0(param_1,uVar24,uVar29);
      pcVar23 = local_b8;
      local_1e8._0_1_ = uVar13 != 0xffffffff;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_1e8);
      pcVar23 = local_b8;
      local_1e8._0_1_ = uVar13 == uVar26;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_1e8);
      uVar13 = FUN_146c061e0(param_1,uVar29,uVar24);
      pcVar23 = local_b8;
      local_1e8._0_1_ = uVar13 != 0xffffffff;
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_1e8);
      pcVar23 = local_b8;
      local_1e8 = (code *)CONCAT71(local_1e8._1_7_,uVar13 == uVar26);
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar23)(uVar17,&local_1e8);
      if ((int)local_168 == 0) {
        uStack_170 = CONCAT44(0xffffffff,(uint)uStack_170);
        uStack_160 = 0xffffffffffffffff;
        uStack_160._4_4_ = -1;
        uStack_160._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_178);
      }
    } while (((local_178 != local_240) || ((uint)uStack_170 != uVar24)) ||
            (pcVar28 = local_240, iVar6 = uStack_160._4_4_, (int)uStack_160 != -1));
  }
  uStack_150._4_4_ = (undefined4)((ulonglong)uStack_150 >> 0x20);
  pcVar23 = (code *)&local_1f0;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3b7b0;
  local_178 = (code *)&LAB_146c413d0;
  uStack_150._0_4_ = uVar24;
  local_148 = param_1;
  FUN_146c41260(pcVar28,&local_108,uVar24,&local_178);
  FUN_146c41458(local_108,&local_178,local_100,local_f8);
  FUN_146c41662(local_108,&local_1e8,local_100,local_f8);
LAB_146c07e02:
  pcVar9 = local_148;
  if (local_178 == local_1e8) {
    if ((uint)uStack_170 == (int)uStack_1e0) {
      if ((int)uStack_160 == (int)uStack_1d0) {
        if (uStack_160._4_4_ == uStack_1d0._4_4_) goto LAB_146c07f8d;
      }
    }
  }
  local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,(uint)local_158);
  plVar19 = local_138;
  if (local_138 == (longlong *)0x0) {
    plVar19 = local_128;
  }
  uVar17 = (**(code **)(*plVar19 + 8))();
  uVar26 = (*pcVar9)(uVar17,pcVar23);
  pcVar9 = local_b8;
  if (((int)uVar26 < 0) ||
     (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)uVar26)) {
    cVar32 = (code)0x0;
  }
  else {
    cVar32 = (code)((ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x28) +
                                         (ulonglong)(uVar26 >> 9) * 8) +
                                       (ulonglong)(uVar26 & 0x1ff) * 2) - 1U) < 0xfffe);
  }
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  local_1f0._0_1_ = cVar32;
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar9)(uVar17,pcVar23);
  uVar26 = FUN_146c061e0(param_1,uVar24,uVar26);
  pcVar9 = local_b8;
  if (((int)uVar26 < 0) ||
     (*(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4) <= (int)uVar26)) {
    bVar33 = false;
  }
  else {
    bVar33 = (ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(uVar26 >> 9) * 8) +
                                (ulonglong)(uVar26 & 0x1ff) * 2) - 1U) < 0xfffe;
  }
  local_1f0 = (undefined8 *)CONCAT71(local_1f0._1_7_,bVar33);
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar9)(uVar17,pcVar23);
  if ((int)local_168 == 0) {
    uStack_170 = CONCAT44(0xffffffff,(uint)uStack_170);
    uStack_160 = 0xffffffffffffffff;
  }
  else {
    FUN_146be9922(&local_178);
  }
  goto LAB_146c07e02;
LAB_146c07f8d:
  if (CONCAT44(uStack_1b4,local_1b8) != 0) {
    plVar19 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar19 = local_198;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_148 != (code *)0x0) {
    plVar19 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar19 = local_128;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_f8[0] != 0) {
    plVar19 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar19 = local_d8;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  local_1e8 = (code *)0x0;
  uStack_1e0 = 0;
  FUN_146c08820(param_1,uVar24,&local_1e8);
  iVar6 = (int)uStack_1e0;
  iVar16 = FUN_146be99b0(param_1,uVar24);
  if ((local_234 & 1) == 0) {
    bVar33 = true;
    if (iVar6 != iVar16) {
      iVar6 = (int)uStack_1e0;
      iVar16 = FUN_146be99b0(param_1,uVar24);
      bVar33 = iVar6 == iVar16 + -1;
    }
    local_178._0_1_ = bVar33;
  }
  else {
    local_178._0_1_ = iVar6 <= iVar16;
  }
  pcVar9 = local_b8;
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar9)(uVar17,&local_178);
  pcVar9 = local_b8;
  uVar12 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + local_228 * 8) + local_230 * 2)
  ;
  if (uVar12 == 0xffff) {
    uVar12 = 0;
  }
  local_178._0_1_ = (int)uStack_1e0 + 1U == (uint)uVar12;
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar9)(uVar17,&local_178);
  pcVar9 = local_b8;
  local_178 = (code *)CONCAT71(local_178._1_7_,
                               *(int *)(local_208 + (longlong)(int)uVar24 * 4) == (int)uStack_1e0);
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar9)(uVar17,&local_178);
  pcVar9 = local_1e8;
  lVar22 = (longlong)(int)uStack_1e0;
  if (lVar22 == 0) {
    local_100 = 0;
  }
  else {
    lVar30 = 0;
    do {
      pcVar28 = local_b8;
      lVar8 = *(longlong *)
               (*(longlong *)(param_1 + 0x130) + (ulonglong)(*(uint *)(pcVar9 + lVar30) >> 9) * 8);
      uVar31 = (ulonglong)(*(uint *)(pcVar9 + lVar30) & 0x1ff);
      bVar33 = true;
      if ((*(uint *)(lVar8 + uVar31 * 0xc) != uVar24) &&
         (lVar8 = lVar8 + uVar31 * 0xc, *(uint *)(lVar8 + 4) != uVar24)) {
        bVar33 = *(uint *)(lVar8 + 8) == uVar24;
      }
      local_178 = (code *)CONCAT71(local_178._1_7_,bVar33);
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar28)(uVar17,&local_178);
      _Src = local_1e8;
      pcVar28 = local_240;
      lVar30 = lVar30 + 4;
    } while (lVar22 * 4 != lVar30);
    local_100 = (int)uStack_1e0;
    lVar22 = (longlong)(int)uStack_1e0;
    local_108 = (void *)0x0;
    if (lVar22 != 0) {
      FUN_144a06ca8(&local_108,uStack_1e0 & 0xffffffff,0);
      memcpy(local_108,_Src,lVar22 << 2);
      goto LAB_146c0815f;
    }
  }
  local_108 = (void *)0x0;
  local_fc = 0;
LAB_146c0815f:
  FUN_146be983e(&local_178,pcVar28,uVar24,0);
  if (local_178 != pcVar28) goto LAB_146c081c9;
  if ((uint)uStack_170 != uVar24) goto LAB_146c081c9;
  if ((int)uStack_160 != -1) goto LAB_146c081c9;
  pcVar9 = local_b8;
  iVar6 = uStack_160._4_4_;
  while (local_b8 = pcVar9, iVar6 != -1) {
LAB_146c081c9:
    do {
      pcVar9 = local_b8;
      local_218._0_8_ =
           *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)((uint)local_158 >> 9) * 8) +
             8 + (ulonglong)(((uint)local_158 & 0x1ff) << 4));
      if ((longlong)(int)uStack_1e0 != 0) {
        lVar22 = 0;
        do {
          if (*(int *)(local_1e8 + lVar22) == (int)local_218._0_8_) {
            cVar32 = (code)0x1;
            goto LAB_146c0821f;
          }
          lVar22 = lVar22 + 4;
        } while ((longlong)(int)uStack_1e0 * 4 != lVar22);
      }
      cVar32 = (code)0x0;
LAB_146c0821f:
      pppuVar20 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar20 = &local_98;
      }
      local_1f0._0_1_ = cVar32;
      uVar17 = (*(code *)(*pppuVar20)[1])();
      (*pcVar9)(uVar17,pcVar23);
      pcVar9 = local_b8;
      if (local_218._4_4_ != -1) {
        if ((longlong)(int)uStack_1e0 != 0) {
          lVar22 = 0;
          do {
            if (*(int *)(local_1e8 + lVar22) == local_218._4_4_) {
              local_1f0._0_1_ = (code)0x1;
              goto LAB_146c08282;
            }
            lVar22 = lVar22 + 4;
          } while ((longlong)(int)uStack_1e0 * 4 != lVar22);
        }
        local_1f0._0_1_ = (code)0x0;
LAB_146c08282:
        pppuVar20 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar20 = &local_98;
        }
        uVar17 = (*(code *)(*pppuVar20)[1])();
        (*pcVar9)(uVar17,pcVar23);
      }
      local_1f0 = (undefined8 *)local_218;
      FUN_144a9d2f8(&local_108,pcVar23);
      if (local_218._4_4_ != -1) {
        local_1f0 = (undefined8 *)((longlong)local_218 + 4);
        FUN_144a9d2f8(&local_108,pcVar23);
      }
      if ((int)local_168 == 0) {
        uStack_170 = CONCAT44(0xffffffff,(uint)uStack_170);
        uStack_160 = 0xffffffffffffffff;
        uStack_160._4_4_ = -1;
        uStack_160._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_178);
      }
    } while (((local_178 != pcVar28) || ((uint)uStack_170 != uVar24)) ||
            (pcVar9 = local_b8, iVar6 = uStack_160._4_4_, (int)uStack_160 != -1));
  }
  local_178._1_7_ = (undefined7)((ulonglong)local_178 >> 8);
  local_178 = (code *)CONCAT71(local_178._1_7_,local_100 == 0);
  pppuVar20 = local_a8;
  if (local_a8 == (undefined ***)0x0) {
    pppuVar20 = &local_98;
  }
  uVar17 = (*(code *)(*pppuVar20)[1])();
  (*pcVar9)(uVar17,&local_178);
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e8 != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar26 = uVar24 + 1;
  if ((int)(uVar24 + 1) < (int)local_238) {
    uVar26 = local_238;
  }
  do {
    uVar13 = uVar26;
    if (uVar26 - 1 == uVar24) break;
    uVar24 = uVar24 + 1;
    uVar13 = uVar24;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x28) +
                                         (ulonglong)(uVar24 >> 9) * 8) +
                                       (ulonglong)(uVar24 & 0x1ff) * 2) - 1U));
  uVar24 = uVar13;
  if (uVar24 == local_238) goto LAB_146c0789f;
  goto LAB_146c0797c;
}



// FUNCTION 146c085f4 FUN_146c085f4 body=163 status=ok
// SIG undefined FUN_146c085f4(void)

undefined4 FUN_146c085f4(longlong param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_4 >> 9) * 8);
  lVar5 = (ulonglong)((param_4 & 0x1ff) << 2) * 3;
  puVar6 = (undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(param_4 >> 9) * 8) + lVar5);
  iVar1 = *(int *)(lVar4 + lVar5);
  iVar2 = *(int *)(lVar4 + 4 + lVar5);
  if (iVar1 == param_2) {
    if (iVar2 == param_3) goto LAB_146c0867c;
  }
  else if (iVar1 == param_3 && iVar2 == param_2) goto LAB_146c0867c;
  iVar3 = *(int *)(lVar4 + lVar5 + 8);
  if (iVar2 == param_2) {
    if (iVar3 == param_3) {
LAB_146c08678:
      puVar6 = puVar6 + 1;
      goto LAB_146c0867c;
    }
  }
  else if (iVar2 == param_3 && iVar3 == param_2) goto LAB_146c08678;
  if (iVar3 == param_2) {
    if (iVar1 != param_3) {
      return 0xffffffff;
    }
  }
  else if (iVar3 != param_3 || iVar1 != param_2) {
    return 0xffffffff;
  }
  puVar6 = puVar6 + 2;
LAB_146c0867c:
  return *puVar6;
}



// FUNCTION 146c08698 FUN_146c08698 body=196 status=ok
// SIG undefined FUN_146c08698(void)

ulonglong FUN_146c08698(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
    uVar6 = (ulonglong)(param_2 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           uVar6 * 2) - 1U) < 0xfffe) {
      lVar2 = *(longlong *)(param_1 + 0x1c0);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(param_2 >> 9) * 8);
      uVar1 = *(uint *)(lVar3 + uVar6 * 0xc);
      uVar5 = CONCAT71((uint7)(uint3)(uVar1 >> 0x11),1);
      if (*(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                  (ulonglong)((uVar1 & 0x1ff) << 4)) == -1) {
        return uVar5;
      }
      lVar3 = lVar3 + uVar6 * 0xc;
      uVar1 = *(uint *)(lVar3 + 4);
      if (*(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                  (ulonglong)((uVar1 & 0x1ff) << 4)) == -1) {
        return uVar5;
      }
      uVar1 = *(uint *)(lVar3 + 8);
      uVar4 = (uVar1 & 0x1ff) << 4;
      return (ulonglong)
             CONCAT31((int3)(uVar4 >> 8),
                      *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                              (ulonglong)uVar4) == -1);
    }
  }
  return 0;
}



// FUNCTION 146c0875c FUN_146c0875c body=196 status=ok
// SIG undefined FUN_146c0875c(void)

undefined8 FUN_146c0875c(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(param_2 >> 9) * 8);
  uVar1 = *(uint *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  uVar4 = *(undefined8 *)
           (*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) + 8 +
           (ulonglong)((uVar1 & 0x1ff) << 4));
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  if (((int)((ulonglong)uVar4 >> 0x20) != param_3 && (int)uVar4 != param_3) &&
     (lVar3 = lVar3 + (ulonglong)(param_2 & 0x1ff) * 0xc, uVar1 = *(uint *)(lVar3 + 4),
     uVar4 = *(undefined8 *)
              (*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) + 8 +
              (ulonglong)((uVar1 & 0x1ff) << 4)),
     (int)((ulonglong)uVar4 >> 0x20) != param_3 && (int)uVar4 != param_3)) {
    uVar1 = *(uint *)(lVar3 + 8);
    uVar4 = *(undefined8 *)
             (*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) + 8 +
             (ulonglong)((uVar1 & 0x1ff) << 4));
    uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),
                     (int)((ulonglong)uVar4 >> 0x20) == param_3 || (int)uVar4 == param_3);
  }
  return uVar5;
}



// FUNCTION 146c08820 FUN_146c08820 body=664 status=ok
// SIG undefined FUN_146c08820(void)

undefined8 FUN_146c08820(longlong param_1,uint param_2,uint *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint *local_50;
  uint *local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = 1;
  local_3c = param_2;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(param_2 >> 9) * 8)
                       + (ulonglong)(param_2 & 0x1ff) * 4);
      if (uVar3 != 0xffffffff) {
        iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar3 >> 9) * 8)
                        + (ulonglong)(uVar3 & 0x1ff) * 4);
        local_58 = param_1;
        if (iVar4 < 0x15) {
          local_50 = param_3;
          if (iVar4 < 8) {
            if (0 < iVar4) {
              iVar4 = iVar4 + uVar3;
              do {
                uVar3 = uVar3 + 1;
                FUN_1429733c2(&local_58,
                              *(undefined4 *)
                               (*(longlong *)
                                 (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar3 >> 9) * 8) +
                               (ulonglong)(uVar3 & 0x1ff) * 4));
              } while ((int)uVar3 < iVar4);
            }
          }
          else {
            uVar5 = uVar3 + 7;
            if ((int)(uVar3 + 7) < (int)uVar3) {
              uVar5 = uVar3;
            }
            uVar6 = uVar3;
            do {
              uVar6 = uVar6 + 1;
              FUN_1429733c2(&local_58,
                            *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar6 >> 9) * 8) +
                             (ulonglong)(uVar6 & 0x1ff) * 4));
            } while (uVar6 - uVar5 != 1);
            uVar3 = *(uint *)(*(longlong *)
                               (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar3 + 9 >> 9) * 8) +
                             (ulonglong)(uVar3 + 9 & 0x1ff) * 4);
            if (uVar3 != 0xffffffff) {
              lVar2 = *(longlong *)(param_1 + 0x110);
              do {
                FUN_1429733c2(&local_58,
                              *(undefined4 *)
                               (*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                               (ulonglong)(uVar3 & 0x1ff) * 4));
                lVar2 = *(longlong *)(param_1 + 0x110);
                uVar3 = *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                                 (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
              } while (uVar3 != 0xffffffff);
            }
          }
        }
        else {
          local_50 = &local_3c;
          uVar5 = uVar3 + 7;
          if ((int)(uVar3 + 7) < (int)uVar3) {
            uVar5 = uVar3;
          }
          uVar6 = uVar3;
          local_48 = param_3;
          do {
            uVar6 = uVar6 + 1;
            FUN_142973282(&local_58,
                          *(undefined4 *)
                           (*(longlong *)
                             (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar6 >> 9) * 8) +
                           (ulonglong)(uVar6 & 0x1ff) * 4));
          } while (uVar6 - uVar5 != 1);
          uVar3 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar3 + 9 >> 9) * 8) +
                           (ulonglong)(uVar3 + 9 & 0x1ff) * 4);
          if (uVar3 != 0xffffffff) {
            lVar2 = *(longlong *)(param_1 + 0x110);
            do {
              FUN_142973282(&local_58,
                            *(undefined4 *)
                             (*(longlong *)(lVar2 + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 4));
              lVar2 = *(longlong *)(param_1 + 0x110);
              uVar3 = *(uint *)(*(longlong *)(lVar2 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                               (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
            } while (uVar3 != 0xffffffff);
          }
        }
      }
      uVar1 = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 146c08aba FUN_146c08aba body=227 status=ok
// SIG undefined FUN_146c08aba(void)

ulonglong FUN_146c08aba(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_38 [36];
  undefined2 local_14;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1[0xc] = param_1[0xc] + 1;
  iVar2 = param_1[6];
  iVar3 = param_1[7];
  if (iVar2 == 0 && iVar3 == 0) {
    puVar4 = &local_12;
LAB_146c08b7c:
    *puVar4 = 1;
    FUN_146c416f6(param_1);
    uVar1 = (ulonglong)((*param_1 * 0x200 + param_1[1]) - 1);
  }
  else {
    do {
      if (iVar2 == 0) {
        if (iVar3 == 0) {
          puVar4 = &local_14;
          goto LAB_146c08b7c;
        }
        uVar1 = (ulonglong)*(uint *)(**(longlong **)(param_1 + 8) + (ulonglong)(iVar3 - 1) * 4);
LAB_146c08aff:
        iVar3 = iVar3 + -1;
        param_1[7] = iVar3;
      }
      else {
        uVar1 = (ulonglong)
                *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8) +
                         (ulonglong)(iVar3 - 1) * 4);
        if (iVar3 != 0) goto LAB_146c08aff;
        iVar3 = 0;
      }
      if ((iVar2 != 0) && (iVar3 == 0)) {
        iVar2 = iVar2 + -1;
        param_1[6] = iVar2;
        param_1[7] = 0x200;
        iVar3 = 0x200;
      }
    } while ((uint)uVar1 == 0xffffffff);
    *(undefined2 *)
     (*(longlong *)(*(longlong *)(param_1 + 2) + (uVar1 >> 9) * 8) +
     (ulonglong)((uint)uVar1 & 0x1ff) * 2) = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c08b9e FUN_146c08b9e body=101 status=ok
// SIG undefined FUN_146c08b9e(void)

void FUN_146c08b9e(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 * 0x200 + param_1[1];
  uVar3 = (uint)param_3;
  if (uVar2 != uVar3) {
    if (uVar3 <= uVar2) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      *(undefined4 *)(lVar1 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *param_2;
      return;
    }
    FUN_146c0a96a(param_1,param_3 & 0xffffffff);
  }
  FUN_146c417e2(param_1,param_2);
  return;
}



// FUNCTION 146c08c04 FUN_146c08c04 body=185 status=ok
// SIG undefined FUN_146c08c04(void)

undefined4 FUN_146c08c04(longlong param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(param_2 >> 9);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar7 * 8);
  uVar5 = (ulonglong)(param_2 & 0x1ff);
  iVar1 = *(int *)(lVar4 + uVar5 * 0xc);
  iVar2 = *(int *)(lVar4 + 4 + uVar5 * 0xc);
  iVar3 = *(int *)(lVar4 + 8 + uVar5 * 0xc);
  if (iVar1 == param_3) {
    if (iVar2 == param_4) {
LAB_146c08c63:
      puVar6 = (undefined4 *)
               ((ulonglong)((param_2 & 0x1ff) * 0xc) +
               *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar7 * 8));
      goto LAB_146c08c71;
    }
  }
  else if (iVar2 == param_3 && iVar1 == param_4) goto LAB_146c08c63;
  if (iVar2 == param_3) {
    if (iVar3 != param_4) {
LAB_146c08c43:
      if (iVar3 == param_3) {
        if (iVar1 != param_4) {
          return 0xffffffff;
        }
      }
      else if (iVar3 != param_4 || iVar1 != param_3) {
        return 0xffffffff;
      }
      puVar6 = (undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x180) + uVar7 * 8) + uVar5 * 0xc + 8);
      goto LAB_146c08c71;
    }
  }
  else if (iVar3 != param_3 || iVar2 != param_4) goto LAB_146c08c43;
  puVar6 = (undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x180) + uVar7 * 8) + uVar5 * 0xc + 4);
LAB_146c08c71:
  return *puVar6;
}



// FUNCTION 146c08cbe FUN_146c08cbe body=405 status=ok
// SIG undefined FUN_146c08cbe(void)

uint FUN_146c08cbe(longlong param_1,uint param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = param_2;
  if ((int)param_2 < (int)param_3) {
    uVar6 = param_3;
  }
  if ((int)param_3 < (int)param_2) {
    param_2 = param_3;
  }
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 4);
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  lVar1 = *(longlong *)(param_1 + 0xd8);
  iVar8 = *(int *)(*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 9) * 8) +
                  (ulonglong)(uVar2 & 0x1ff) * 4);
  if (iVar8 < 8) {
    uVar7 = iVar8 + uVar2;
    if ((int)uVar7 < (int)uVar2) {
      uVar7 = uVar2;
    }
    do {
      uVar2 = uVar2 + 1;
      if (uVar2 - uVar7 == 1) {
        return 0xffffffff;
      }
      uVar4 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 9) * 8) +
                       (ulonglong)(uVar2 & 0x1ff) * 4);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8);
      uVar3 = (ulonglong)((uVar4 & 0x1ff) << 4);
    } while (*(uint *)(lVar5 + 4 + uVar3) != uVar6);
    lVar5 = lVar5 + uVar3;
  }
  else {
    iVar8 = 0;
    do {
      if (iVar8 == 8) {
        uVar2 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar2 + 9 >> 9) * 8) +
                         (ulonglong)(uVar2 + 9 & 0x1ff) * 4);
        if (uVar2 == 0xffffffff) {
          return 0xffffffff;
        }
        while( true ) {
          uVar4 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar2 >> 9) * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 4);
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8);
          uVar3 = (ulonglong)((uVar4 & 0x1ff) << 4);
          if (*(uint *)(lVar5 + 4 + uVar3) == uVar6) break;
          uVar2 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                           (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
          if (uVar2 == 0xffffffff) {
            return 0xffffffff;
          }
        }
        lVar5 = lVar5 + uVar3;
        goto LAB_146c08dcc;
      }
      uVar4 = uVar2 + 1 + iVar8;
      uVar4 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar4 >> 9) * 8) +
                       (ulonglong)(uVar4 & 0x1ff) * 4);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8);
      uVar3 = (ulonglong)((uVar4 & 0x1ff) << 4);
      iVar8 = iVar8 + 1;
    } while (*(uint *)(lVar5 + 4 + uVar3) != uVar6);
    lVar5 = lVar5 + uVar3;
  }
LAB_146c08dcc:
  *(bool *)param_4 = *(int *)(lVar5 + 0xc) == -1;
  return uVar4;
}



// FUNCTION 146c08e54 FUN_146c08e54 body=219 status=ok
// SIG undefined FUN_146c08e54(void)

uint FUN_146c08e54(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((((-1 < (int)param_2) &&
       (uVar2 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144),
       (int)param_2 < (int)uVar2)) && (param_3 < uVar2)) && (-1 < (int)param_3)) {
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x148) + (ulonglong)(param_3 >> 9) * 8) +
                           (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar5 = 0;
      do {
        uVar2 = *(uint *)((ulonglong)((param_2 & 0x1ff) * 0xc) +
                          *(longlong *)
                           (*(longlong *)(param_1 + 0x180) + (ulonglong)(param_2 >> 9) * 8) +
                         lVar5 * 4);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8);
        uVar3 = (ulonglong)((uVar2 & 0x1ff) << 4);
        uVar4 = *(uint *)(lVar1 + 8 + uVar3);
        if (uVar4 == param_2) {
          uVar4 = *(uint *)(lVar1 + 0xc + uVar3);
        }
        if (uVar4 == param_3) {
          return uVar2;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
    }
  }
  return 0xffffffff;
}



// FUNCTION 146c08f30 FUN_146c08f30 body=101 status=ok
// SIG undefined FUN_146c08f30(void)

void FUN_146c08f30(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 * 0x200 + param_1[1];
  uVar3 = (uint)param_3;
  if (uVar2 != uVar3) {
    if (uVar3 <= uVar2) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8);
      *(undefined4 *)(lVar1 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)(lVar1 + (ulonglong)(uVar3 & 0x1ff) * 0xc) = *param_2;
      return;
    }
    FUN_146c03c80(param_1,param_3 & 0xffffffff);
  }
  FUN_146c4e664(param_1,param_2);
  return;
}



// FUNCTION 146c08f96 FUN_146c08f96 body=90 status=ok
// SIG undefined FUN_146c08f96(void)

void FUN_146c08f96(int *param_1,undefined8 *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  uVar2 = (uint)param_3;
  if (uVar1 != uVar2) {
    if (uVar2 <= uVar1) {
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 8) = *param_2;
      return;
    }
    FUN_146c03d58(param_1,param_3 & 0xffffffff);
  }
  FUN_146c4e708(param_1,param_2);
  return;
}



// FUNCTION 146c08ff0 FUN_146c08ff0 body=459 status=ok
// SIG undefined FUN_146c08ff0(void)

int FUN_146c08ff0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 **ppuVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [36];
  undefined1 *local_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = FUN_146c08aba(param_1 + 0x20);
  uVar5 = param_3 >> 9 & 0x7fffff;
  uVar3 = (uint)param_3 & 0x1ff;
  FUN_146bedee6(param_1 + 8,
                (ulonglong)(uVar3 * 0x18) + *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar5 * 8)
                ,iVar2);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    if (*(char *)(param_2 + 0x70) == '\x01') {
      ppuVar4 = (undefined1 **)
                ((ulonglong)(uVar3 * 0xc) + *(longlong *)(*(longlong *)(param_2 + 0x60) + uVar5 * 8)
                );
    }
    else {
      ppuVar4 = &local_44;
      local_44 = (undefined1 *)0x3f80000000000000;
      local_3c = 0;
    }
    FUN_146c08f30(param_1 + 0x58,ppuVar4,iVar2);
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (*(char *)(param_2 + 0x90) == '\x01') {
      ppuVar4 = (undefined1 **)
                ((ulonglong)(uVar3 * 0xc) + *(longlong *)(*(longlong *)(param_2 + 0x80) + uVar5 * 8)
                );
    }
    else {
      ppuVar4 = &local_44;
      local_44 = &DAT_3f8000003f800000;
      local_3c = 0x3f800000;
    }
    FUN_146c08f30(param_1 + 0x78,ppuVar4,iVar2);
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    if (*(char *)(param_2 + 0xb0) == '\x01') {
      ppuVar4 = (undefined1 **)
                ((ulonglong)(uVar3 << 3) + *(longlong *)(*(longlong *)(param_2 + 0xa0) + uVar5 * 8))
      ;
    }
    else {
      ppuVar4 = &local_44;
      local_44 = (undefined1 *)0x0;
    }
    FUN_146c08f96(param_1 + 0x98,ppuVar4,iVar2);
  }
  if (iVar2 < *(int *)(param_1 + 0xb8) * 0x200 + *(int *)(param_1 + 0xbc)) {
    FUN_146c8b31e(param_1 + 0xb8,iVar2);
  }
  FUN_146c86b80(param_1 + 0xb8,iVar2);
  plVar1 = *(longlong **)(param_1 + 0x208);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,iVar2,0);
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    LOCK();
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  UNLOCK();
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c091bc FUN_146c091bc body=471 status=ok
// SIG undefined FUN_146c091bc(void)

undefined8 FUN_146c091bc(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((int)param_2 < 0) ||
      (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)param_2)) ||
     (uVar3 = 0x1f,
     0xfffd < (ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                                 (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    if (param_4 == '\0') {
      cVar2 = FUN_146c0943e(param_1 + 0x20,param_2);
    }
    else {
      cVar2 = FUN_146c09394();
    }
    uVar3 = 0x20;
    if (cVar2 != '\0') {
      FUN_146bedee6(param_1 + 8,param_3,param_2);
      if (*(char *)(param_1 + 0x70) == '\x01') {
        if (*(char *)(param_3 + 0x38) == '\x01') {
          local_28 = *(undefined4 *)(param_3 + 0x20);
          local_30 = *(undefined8 *)(param_3 + 0x18);
        }
        else {
          local_28 = DAT_14c846378;
          local_30 = DAT_14c846370;
        }
        FUN_146c08f30(param_1 + 0x58,&local_30,param_2);
      }
      if (*(char *)(param_1 + 0x90) == '\x01') {
        if (*(char *)(param_3 + 0x39) == '\x01') {
          local_28 = *(undefined4 *)(param_3 + 0x2c);
          local_30 = *(undefined8 *)(param_3 + 0x24);
        }
        else {
          local_28 = DAT_14c846358;
          local_30 = DAT_14c846350;
        }
        FUN_146c08f30(param_1 + 0x78,&local_30,param_2);
      }
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        puVar4 = &DAT_14c84635c;
        if (*(char *)(param_3 + 0x3a) != '\0') {
          puVar4 = (undefined8 *)(param_3 + 0x30);
        }
        local_30 = *puVar4;
        FUN_146c08f96(param_1 + 0x98,&local_30,param_2);
      }
      if ((int)param_2 < *(int *)(param_1 + 0xb8) * 0x200 + *(int *)(param_1 + 0xbc)) {
        FUN_146c8b31e(param_1 + 0xb8,param_2);
      }
      FUN_146c86b80(param_1 + 0xb8,param_2);
      plVar1 = *(longlong **)(param_1 + 0x208);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2,1);
      }
      if (*(char *)(param_1 + 0x210) == '\x01') {
        LOCK();
        *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
        UNLOCK();
      }
      LOCK();
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
      UNLOCK();
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c09394 FUN_146c09394 body=168 status=ok
// SIG undefined FUN_146c09394(void)

undefined8 FUN_146c09394(int *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_58 [44];
  undefined2 local_2c;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *param_1 * 0x200 + param_1[1];
  if ((int)param_2 < iVar3) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 9) * 8);
    if ((ushort)(*(short *)(lVar1 + (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar2 = 0;
      goto LAB_146c093ea;
    }
    *(undefined2 *)(lVar1 + (ulonglong)(param_2 & 0x1ff) * 2) = 1;
  }
  else {
    if (iVar3 < (int)param_2) {
      do {
        local_2a = 0xffff;
        FUN_146c416f6(param_1,&local_2a);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_2);
    }
    local_2c = 1;
    FUN_146c416f6(param_1);
  }
  param_1[0xc] = param_1[0xc] + 1;
  uVar2 = 1;
LAB_146c093ea:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0943e FUN_146c0943e body=334 status=ok
// SIG undefined FUN_146c0943e(void)

ulonglong FUN_146c0943e(int *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [34];
  undefined2 local_36;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *param_1 * 0x200 + param_1[1];
  if ((int)param_2 < iVar2) {
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 9) * 8) +
                                    (ulonglong)(param_2 & 0x1ff) * 2) - 1U)) {
      uVar5 = param_1[6] * 0x200 + param_1[7];
      uVar4 = 0;
      if ((int)uVar5 < 1) goto LAB_146c09490;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + (uVar4 >> 9) * 8);
        uVar6 = (ulonglong)((uint)uVar4 & 0x1ff);
        if (*(uint *)(lVar1 + uVar6 * 4) == param_2) {
          *(undefined4 *)(lVar1 + uVar6 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)param_1[6] * 8) +
                (ulonglong)(param_1[7] - 1) * 4);
          if (((param_1[7] == 0) || (iVar2 = param_1[7] + -1, param_1[7] = iVar2, iVar2 == 0)) &&
             (param_1[6] != 0)) {
            param_1[6] = param_1[6] + -1;
            param_1[7] = 0x200;
          }
          *(undefined2 *)
           (*(longlong *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 9) * 8) +
           (ulonglong)(param_2 & 0x1ff) * 2) = 1;
          goto LAB_146c09530;
        }
        uVar3 = (uint)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar5 != uVar3);
    }
    uVar4 = 0;
  }
  else {
    local_34 = iVar2;
    if (iVar2 < (int)param_2) {
      do {
        local_36 = 0xffff;
        FUN_146c416f6(param_1,&local_36);
        FUN_146bee31c(param_1 + 6,&local_34);
        local_34 = local_34 + 1;
      } while (local_34 < (int)param_2);
    }
    local_36 = 1;
    FUN_146c416f6(param_1);
LAB_146c09530:
    param_1[0xc] = param_1[0xc] + 1;
    uVar4 = 1;
  }
LAB_146c09490:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146c0958e FUN_146c0958e body=198 status=ok
// SIG undefined FUN_146c0958e(void)

void FUN_146c0958e(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5,uint param_6)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0xffffffffffffffff;
  local_44 = 0xffffffff;
  lVar1 = FUN_146c4178c(param_1 + 0x178);
  if (param_6 == 0xffffffff) {
    local_58 = 0xffffffff;
    param_6 = FUN_146c0d3ae(param_1,param_3,param_4,param_2);
  }
  else {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_6 >> 9) * 8) + 0xc +
     (ulonglong)((param_6 & 0x1ff) << 4)) = param_2;
  }
  *(uint *)(lVar1 + (ulonglong)param_5 * 4) = param_6;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c09656 FUN_146c09656 body=904 status=ok
// SIG undefined FUN_146c09656(void)

undefined8 FUN_146c09656(longlong param_1,uint param_2,uint *param_3,int param_4,char param_5)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = param_4;
  if ((((int)param_2 < 0) ||
      (*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144) <= (int)param_2)) ||
     (uVar9 = 0x33,
     0xfffd < (ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8)
                                 + (ulonglong)(param_2 & 0x1ff) * 2) - 1U))) {
    uVar7 = *param_3;
    uVar9 = 1;
    if ((((-1 < (int)uVar7) &&
         (uVar10 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
         (int)uVar7 < (int)uVar10)) &&
        ((lVar3 = *(longlong *)(param_1 + 0x28),
         (ushort)(*(short *)(*(longlong *)(lVar3 + (ulonglong)(uVar7 >> 9) * 8) +
                            (ulonglong)(uVar7 & 0x1ff) * 2) - 1U) < 0xfffe &&
         ((uVar6 = param_3[1], uVar6 < uVar10 && -1 < (int)uVar6 &&
          ((ushort)(*(short *)(*(longlong *)(lVar3 + (ulonglong)(uVar6 >> 9) * 8) +
                              (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)))))) &&
       ((uVar2 = param_3[2], uVar2 < uVar10 && -1 < (int)uVar2 &&
        ((((ushort)(*(short *)(*(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8) +
                              (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe &&
          (uVar9 = 0x17, uVar7 != uVar6)) && (uVar6 != uVar2 && uVar7 != uVar2)))))) {
      uVar10 = FUN_146c061e0(param_1,uVar7,uVar6);
      uVar6 = FUN_146c061e0(param_1,uVar6,uVar2);
      uVar7 = FUN_146c061e0(param_1,uVar2,uVar7);
      if (((uVar10 == 0xffffffff) ||
          (uVar9 = 0x32,
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar10 >> 9) * 8) +
                   0xc + (ulonglong)((uVar10 & 0x1ff) << 4)) == -1)) &&
         (((uVar6 == 0xffffffff ||
           (uVar9 = 0x32,
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar6 >> 9) * 8) +
                    0xc + (ulonglong)((uVar6 & 0x1ff) << 4)) == -1)) &&
          ((uVar7 == 0xffffffff ||
           (uVar9 = 0x32,
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar7 >> 9) * 8) +
                    0xc + (ulonglong)((uVar7 & 0x1ff) << 4)) == -1)))))) {
        if (param_5 == '\0') {
          cVar5 = FUN_146c0943e(param_1 + 0x140,param_2);
        }
        else {
          cVar5 = FUN_146c09394();
        }
        uVar9 = 0x34;
        if (cVar5 != '\0') {
          FUN_146c08b9e(param_1 + 0x128,param_3,param_2);
          if (*(char *)(param_1 + 0x1a8) == '\x01') {
            FUN_146bedf4e(param_1 + 400,&local_4c,param_2);
            iVar8 = local_4c + 1;
            if (local_4c + 1 <= *(int *)(param_1 + 0x1b0)) {
              iVar8 = *(int *)(param_1 + 0x1b0);
            }
            *(int *)(param_1 + 0x1b0) = iVar8;
          }
          psVar1 = (short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x28) + (ulonglong)(*param_3 >> 9) * 8) +
                            (ulonglong)(*param_3 & 0x1ff) * 2);
          *psVar1 = *psVar1 + 1;
          psVar1 = (short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_3[1] >> 9) * 8) +
                            (ulonglong)(param_3[1] & 0x1ff) * 2);
          *psVar1 = *psVar1 + 1;
          psVar1 = (short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_3[2] >> 9) * 8) +
                            (ulonglong)(param_3[2] & 0x1ff) * 2);
          *psVar1 = *psVar1 + 1;
          local_68 = 0;
          local_60 = uVar10;
          FUN_146c0958e(param_1,param_2,*param_3,param_3[1]);
          local_68 = 1;
          local_60 = uVar6;
          FUN_146c0958e(param_1,param_2,param_3[1],param_3[2]);
          local_68 = 2;
          local_60 = uVar7;
          FUN_146c0958e(param_1,param_2,param_3[2],*param_3);
          plVar4 = *(longlong **)(param_1 + 0x208);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4,param_2,1);
          }
          if (*(char *)(param_1 + 0x210) == '\x01') {
            LOCK();
            *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
            UNLOCK();
          }
          LOCK();
          *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
          UNLOCK();
          uVar9 = 0;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c099e0 FUN_146c099e0 body=135 status=ok
// SIG undefined FUN_146c099e0(void)

void FUN_146c099e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  if (0 < iVar1 * 0x200 + iVar2) {
    uVar3 = 0;
    do {
      if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 2) == 1) {
        FUN_146c09a68(param_1 + 0x20,uVar3,1);
        iVar1 = *(int *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x24);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1 * 0x200 + iVar2);
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    LOCK();
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  UNLOCK();
  return;
}



// FUNCTION 146c09a68 FUN_146c09a68 body=146 status=ok
// SIG undefined FUN_146c09a68(void)

void FUN_146c09a68(longlong param_1,uint param_2,short param_3)

{
  short *psVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (ulonglong)((param_2 & 0x1ff) * 2);
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) +
                    uVar2);
  *psVar1 = *psVar1 - param_3;
  local_1c = param_2;
  if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 >> 9) * 8) + uVar2)
      == 0) {
    FUN_146bee31c(param_1 + 0x18,&local_1c);
    *(undefined2 *)
     (*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)(local_1c >> 9) * 8) +
     (ulonglong)(local_1c & 0x1ff) * 2) = 0xffff;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c09afc FUN_146c09afc body=3692 status=ok
// SIG undefined FUN_146c09afc(void)

void FUN_146c09afc(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_e8 [39];
  char local_c1;
  longlong *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  uint local_98;
  undefined4 local_94;
  int local_90;
  undefined8 local_88;
  uint local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  bVar24 = *(longlong *)(param_1 + 0x208) != 0;
  local_c1 = param_2 == (longlong *)0x0 && bVar24;
  plVar17 = param_2;
  if (param_2 == (longlong *)0x0 && bVar24) {
    plVar17 = &local_78;
  }
  local_c0 = param_2;
  if (plVar17 != (longlong *)0x0) {
    iVar12 = *(int *)(param_1 + 0x140);
    iVar4 = *(int *)(param_1 + 0x144);
    FUN_144a127d2(plVar17,*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),1);
    plVar10 = local_c0 + 2;
    plVar8 = local_c0;
    if (local_c1 != '\0') {
      plVar10 = &local_68;
      plVar8 = &local_78;
    }
    FUN_144a127d2(plVar10,iVar12 * 0x200 + iVar4,1);
    uVar9 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    if (0 < (int)uVar9) {
      uVar11 = 0;
      do {
        uVar16 = 0xffffffff;
        if ((longlong)uVar11 <
            (longlong)(*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
          uVar16 = 0xffffffff;
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x28) + (uVar11 >> 9 & 0x7fffff) * 8) +
                                 (ulonglong)((uint)uVar11 & 0x1ff) * 2) - 1U) < 0xfffe) {
            uVar16 = (uint)uVar11;
          }
        }
        *(uint *)(*plVar17 + uVar11 * 4) = uVar16;
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
    }
    uVar9 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    if (0 < (int)uVar9) {
      uVar11 = 0;
      do {
        uVar16 = 0xffffffff;
        if ((longlong)uVar11 <
            (longlong)(*(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
          uVar16 = 0xffffffff;
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_1 + 0x148) + (uVar11 >> 9 & 0x7fffff) * 8) +
                                 (ulonglong)((uint)uVar11 & 0x1ff) * 2) - 1U) < 0xfffe) {
            uVar16 = (uint)uVar11;
          }
        }
        *(uint *)(plVar8[2] + uVar11 * 4) = uVar16;
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar11);
    }
  }
  lVar14 = param_1 + 0x20;
  uVar9 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
  uVar16 = (int)uVar9 >> 0x1f & uVar9;
  do {
    if ((int)uVar9 < 1) {
      uVar23 = 0;
      uVar9 = uVar16 - 1;
      goto LAB_146c09be2;
    }
    uVar9 = uVar9 - 1;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x28) +
                                         (ulonglong)(uVar9 >> 9) * 8) +
                                       (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  if (uVar9 != 0) {
    uVar23 = 0;
    do {
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x28) +
                                        (ulonglong)(uVar23 >> 9) * 8) +
                                      (ulonglong)(uVar23 & 0x1ff) * 2) - 1U)) goto LAB_146c09be2;
      uVar23 = uVar23 + 1;
    } while (uVar9 != uVar23);
  }
LAB_146c09f64:
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  FUN_1411b3fe4(param_1 + 0x38);
  FUN_146c41884(lVar14,uVar3);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  FUN_146bee1a4(param_1 + 8,uVar3);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_146c03c80(param_1 + 0x58,*(int *)(param_1 + 0x50) * 3);
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_146c03c80(param_1 + 0x78,*(int *)(param_1 + 0x50) * 3);
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_146c03d58(param_1 + 0x98,*(int *)(param_1 + 0x50) * 2);
  }
  FUN_146c8aea2(param_1 + 0xb8,*(undefined4 *)(param_1 + 0x50));
  local_b8 = param_1 + 0x140;
  uVar9 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar16 = (int)uVar9 >> 0x1f & uVar9;
  do {
    if ((int)uVar9 < 1) {
      uVar23 = 0;
      uVar9 = uVar16 - 1;
      goto LAB_146c0a06a;
    }
    uVar9 = uVar9 - 1;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x148) +
                                         (ulonglong)(uVar9 >> 9) * 8) +
                                       (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  if (uVar9 != 0) {
    uVar23 = 0;
    do {
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x148) +
                                        (ulonglong)(uVar23 >> 9) * 8) +
                                      (ulonglong)(uVar23 & 0x1ff) * 2) - 1U)) goto LAB_146c0a06a;
      uVar23 = uVar23 + 1;
    } while (uVar9 != uVar23);
  }
LAB_146c0a27a:
  uVar3 = *(undefined4 *)(param_1 + 0x170);
  FUN_1411b3fe4(param_1 + 0x158);
  FUN_146c41884(local_b8,uVar3);
  *(undefined4 *)(param_1 + 0x170) = uVar3;
  FUN_146c0a96a(param_1 + 0x128,uVar3);
  FUN_146c0a96a(param_1 + 0x178,*(int *)(param_1 + 0x170) * 3);
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    FUN_1411b328a(param_1 + 400,*(undefined4 *)(param_1 + 0x170));
  }
  local_b8 = param_1 + 0x1d0;
  uVar9 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4);
  uVar16 = (int)uVar9 >> 0x1f & uVar9;
  do {
    if ((int)uVar9 < 1) {
      uVar23 = 0;
      uVar9 = uVar16 - 1;
      goto LAB_146c0a3ca;
    }
    uVar9 = uVar9 - 1;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x1d8) +
                                         (ulonglong)(uVar9 >> 9) * 8) +
                                       (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  if (uVar9 != 0) {
    uVar23 = 0;
    do {
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x1d8) +
                                        (ulonglong)(uVar23 >> 9) * 8) +
                                      (ulonglong)(uVar23 & 0x1ff) * 2) - 1U)) goto LAB_146c0a3ca;
      uVar23 = uVar23 + 1;
    } while (uVar9 != uVar23);
  }
LAB_146c0a339:
  uVar3 = *(undefined4 *)(param_1 + 0x200);
  FUN_1411b3fe4(param_1 + 0x1e8);
  FUN_146c41884(local_b8,uVar3);
  *(undefined4 *)(param_1 + 0x200) = uVar3;
  FUN_146c0aa40(param_1 + 0x1b8,uVar3);
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_146c0ab16(*(longlong *)(param_1 + 0x208),plVar17);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146c09be2:
  if ((int)uVar23 < (int)uVar9) {
    lVar13 = param_1 + 0xb8;
    local_b0 = lVar14;
    do {
      uVar11 = (ulonglong)(uVar9 >> 9);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar11 * 8);
      uVar19 = (ulonglong)(uVar9 & 0x1ff);
      local_a8 = (ulonglong)(uVar23 >> 9);
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x10) + local_a8 * 8);
      local_b8 = (ulonglong)(uVar23 & 0x1ff);
      *(undefined8 *)(lVar18 + 0x10 + local_b8 * 0x18) =
           *(undefined8 *)(lVar14 + 0x10 + uVar19 * 0x18);
      puVar1 = (undefined4 *)(lVar14 + uVar19 * 0x18);
      uVar3 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(lVar18 + local_b8 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      if (*(char *)(param_1 + 0x70) == '\x01') {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar11 * 8);
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x60) + local_a8 * 8);
        *(undefined4 *)(lVar18 + 8 + local_b8 * 0xc) = *(undefined4 *)(lVar14 + 8 + uVar19 * 0xc);
        *(undefined8 *)(lVar18 + local_b8 * 0xc) = *(undefined8 *)(lVar14 + uVar19 * 0xc);
      }
      if (*(char *)(param_1 + 0x90) == '\x01') {
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x80) + uVar11 * 8);
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x80) + local_a8 * 8);
        *(undefined4 *)(lVar18 + 8 + local_b8 * 0xc) = *(undefined4 *)(lVar14 + 8 + uVar19 * 0xc);
        *(undefined8 *)(lVar18 + local_b8 * 0xc) = *(undefined8 *)(lVar14 + uVar19 * 0xc);
      }
      if (*(char *)(param_1 + 0xb0) == '\x01') {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + local_a8 * 8) + local_b8 * 8)
             = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar11 * 8) + uVar19 * 8);
      }
      FUN_146be983e(&local_a0,lVar13,uVar9,0);
      if (local_a0 != lVar13) goto LAB_146c09d85;
      if (local_98 != uVar9) goto LAB_146c09d85;
      if ((int)local_88 != -1) goto LAB_146c09d85;
      iVar12 = local_88._4_4_;
      while (iVar12 != -1) {
LAB_146c09d85:
        do {
          lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_80 >> 9) * 8);
          uVar11 = (ulonglong)((local_80 & 0x1ff) << 4);
          uVar16 = *(uint *)(lVar14 + 4 + uVar11);
          if ((*(uint *)(lVar14 + uVar11) == uVar9) ||
             (bVar24 = uVar16 == uVar9, uVar16 = *(uint *)(lVar14 + uVar11), bVar24)) {
            uVar21 = uVar16;
            uVar22 = uVar23;
            if ((int)uVar16 < (int)uVar23) {
              uVar21 = uVar23;
              uVar22 = uVar16;
            }
            *(uint *)(lVar14 + uVar11) = uVar22;
            ((uint *)(lVar14 + uVar11))[1] = uVar21;
            lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_80 >> 9) * 8);
          }
          uVar11 = *(ulonglong *)(lVar14 + 8 + (ulonglong)((local_80 & 0x1ff) << 4));
          lVar14 = (ulonglong)(((uint)uVar11 & 0x1ff) * 0xc) +
                   *(longlong *)(*(longlong *)(param_1 + 0x130) + (uVar11 >> 9 & 0x7fffff) * 8);
          local_54 = 0x100000000;
          local_4c = 2;
          lVar18 = 0;
          do {
            if (*(uint *)(lVar14 + (longlong)*(int *)((longlong)&local_54 + lVar18) * 4) == uVar9) {
              *(uint *)(lVar14 + (longlong)*(int *)((longlong)&local_54 + lVar18) * 4) = uVar23;
              break;
            }
            lVar18 = lVar18 + 4;
          } while (lVar18 != 0xc);
          uVar16 = (uint)(uVar11 >> 0x20);
          if (uVar16 != 0xffffffff) {
            lVar18 = (ulonglong)((uVar16 & 0x1ff) * 0xc) +
                     *(longlong *)(*(longlong *)(param_1 + 0x130) + (uVar11 >> 0x29) * 8);
            local_54 = 0x100000000;
            local_4c = 2;
            lVar14 = 0;
            do {
              if (*(uint *)(lVar18 + (longlong)*(int *)((longlong)&local_54 + lVar14) * 4) == uVar9)
              {
                *(uint *)(lVar18 + (longlong)*(int *)((longlong)&local_54 + lVar14) * 4) = uVar23;
                break;
              }
              lVar14 = lVar14 + 4;
            } while (lVar14 != 0xc);
          }
          local_4c = 2;
          local_54 = 0x100000000;
          if (local_90 == 0) {
            local_94 = 0xffffffff;
            local_88 = 0xffffffffffffffff;
            local_88._4_4_ = -1;
            local_88._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_a0);
          }
        } while (((local_a0 != lVar13) || (local_98 != uVar9)) ||
                (iVar12 = local_88._4_4_, (int)local_88 != -1));
      }
      uVar11 = (ulonglong)((uVar9 >> 9) << 3);
      uVar19 = (ulonglong)((uVar9 & 0x1ff) * 2);
      *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + local_a8 * 8) + local_b8 * 2) =
           *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar11) + uVar19);
      *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar11) + uVar19) = 0xffff;
      FUN_146c8b2dc(lVar13,uVar9,uVar23);
      if (plVar17 != (longlong *)0x0) {
        *(uint *)(*plVar17 + (longlong)(int)uVar9 * 4) = uVar23;
      }
      uVar16 = (int)uVar9 >> 0x1f & uVar9;
      do {
        uVar21 = uVar16 - 1;
        if ((int)uVar9 < 1) break;
        uVar9 = uVar9 - 1;
        uVar21 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar21;
      uVar16 = uVar23 + 1;
      if ((int)(uVar23 + 1) < (int)uVar9) {
        uVar16 = uVar9;
      }
      do {
        lVar14 = local_b0;
        if (uVar16 - 1 == uVar23) goto LAB_146c09f64;
        uVar23 = uVar23 + 1;
      } while ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar23 >> 9) * 8) +
                                  (ulonglong)(uVar23 & 0x1ff) * 2) - 1U) < 0xfffe);
    } while ((int)uVar23 < (int)uVar9);
  }
  goto LAB_146c09f64;
LAB_146c0a06a:
  if ((int)uVar23 < (int)uVar9) {
    if (local_c1 != '\0') {
      local_c0 = &local_78;
    }
    do {
      uVar16 = uVar9 >> 9;
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar16 << 3));
      uVar21 = uVar9 & 0x1ff;
      lVar18 = (ulonglong)(uVar21 << 2) * 3;
      uVar11 = (ulonglong)(uVar23 >> 9);
      uVar19 = (ulonglong)((uVar23 >> 9) << 3);
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar19);
      uVar22 = uVar23 & 0x1ff;
      lVar5 = (ulonglong)(uVar22 << 2) * 3;
      *(undefined4 *)(lVar13 + 8 + lVar5) = *(undefined4 *)(lVar14 + 8 + lVar18);
      *(undefined8 *)(lVar13 + lVar5) = *(undefined8 *)(lVar14 + lVar18);
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar16 << 3));
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar19);
      *(undefined4 *)(lVar13 + 8 + lVar5) = *(undefined4 *)(lVar14 + 8 + lVar18);
      *(undefined8 *)(lVar13 + lVar5) = *(undefined8 *)(lVar14 + lVar18);
      if (*(char *)(param_1 + 0x1a8) == '\x01') {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x198) + uVar11 * 8) + (ulonglong)uVar22 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)uVar16 * 8) +
              (ulonglong)uVar21 * 4);
      }
      lVar14 = 0;
      do {
        uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x180) + uVar11 * 8) +
                           (ulonglong)(uVar22 * 4) * 3 + lVar14 * 4);
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar15 >> 9) * 8) +
                 (ulonglong)((uVar15 & 0x1ff) << 4);
        puVar20 = (uint *)(lVar13 + 8);
        if (*puVar20 == uVar9) {
          if (uVar23 == 0xffffffff) {
            *puVar20 = *(uint *)(lVar13 + 0xc);
            *(undefined4 *)(lVar13 + 0xc) = 0xffffffff;
          }
          else {
            *puVar20 = uVar23;
          }
        }
        else if (*(uint *)(lVar13 + 0xc) == uVar9) {
          *(uint *)(lVar13 + 0xc) = uVar23;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar11 * 8) + (ulonglong)uVar22 * 2) =
           *(undefined2 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar16 * 8)) +
            (ulonglong)(uVar21 * 2));
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar16 * 8)) +
       (ulonglong)(uVar21 * 2)) = 0xffff;
      if (plVar17 != (longlong *)0x0) {
        *(uint *)(local_c0[2] + (longlong)(int)uVar9 * 4) = uVar23;
      }
      uVar16 = (int)uVar9 >> 0x1f & uVar9;
      do {
        uVar21 = uVar16 - 1;
        if ((int)uVar9 < 1) break;
        uVar9 = uVar9 - 1;
        uVar21 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar21;
      uVar16 = uVar23 + 1;
      if ((int)(uVar23 + 1) < (int)uVar9) {
        uVar16 = uVar9;
      }
      do {
        if (uVar16 - 1 == uVar23) goto LAB_146c0a27a;
        uVar23 = uVar23 + 1;
      } while ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar23 >> 9) * 8)
                                  + (ulonglong)(uVar23 & 0x1ff) * 2) - 1U) < 0xfffe);
    } while ((int)uVar23 < (int)uVar9);
  }
  goto LAB_146c0a27a;
LAB_146c0a3ca:
  if ((int)uVar23 < (int)uVar9) {
    local_c0 = (longlong *)(ulonglong)(uVar23 >> 9);
    uVar11 = (ulonglong)((uVar23 >> 9) * 8);
    uVar22 = uVar23 & 0x1ff;
    uVar19 = (ulonglong)(uVar22 << 4);
    puVar1 = (undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) +
             (ulonglong)((uVar9 & 0x1ff) << 4));
    uVar3 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar11) + uVar19);
    *puVar2 = *puVar1;
    puVar2[1] = uVar3;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    lVar13 = *(longlong *)(param_1 + 0xc0);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar11);
    uVar16 = *(uint *)(lVar14 + uVar19);
    uVar21 = *(uint *)(lVar14 + 4 + uVar19);
    uVar16 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar16 & 0x1ff) * 4);
    if (uVar16 != 0xffffffff) {
      lVar14 = *(longlong *)(param_1 + 0xd8);
      iVar12 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar16 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 4);
      if (iVar12 < 8) {
        uVar15 = iVar12 + uVar16;
        if ((int)uVar15 < (int)uVar16) {
          uVar15 = uVar16;
        }
        do {
          uVar16 = uVar16 + 1;
          if (uVar16 - uVar15 == 1) goto LAB_146c0a569;
          lVar18 = *(longlong *)(lVar14 + (ulonglong)(uVar16 >> 9) * 8);
        } while (uVar9 != *(uint *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 4));
        puVar20 = (uint *)(lVar18 + (ulonglong)(uVar16 & 0x1ff) * 4);
      }
      else {
        iVar12 = 0;
        do {
          if (iVar12 == 8) {
            uVar16 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar16 + 9 >> 9) * 8) +
                              (ulonglong)(uVar16 + 9 & 0x1ff) * 4);
            if (uVar16 == 0xffffffff) goto LAB_146c0a569;
            goto LAB_146c0a52a;
          }
          uVar15 = uVar16 + 1 + iVar12;
          lVar18 = *(longlong *)(lVar14 + (ulonglong)(uVar15 >> 9) * 8);
          uVar11 = (ulonglong)(uVar15 & 0x1ff);
          iVar12 = iVar12 + 1;
        } while (uVar9 != *(uint *)(lVar18 + uVar11 * 4));
        puVar20 = (uint *)(lVar18 + uVar11 * 4);
      }
LAB_146c0a4f4:
      *puVar20 = uVar23;
      lVar13 = *(longlong *)(param_1 + 0xc0);
    }
    goto LAB_146c0a569;
  }
  goto LAB_146c0a339;
  while (uVar16 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                           (ulonglong)(uVar16 + 1 & 0x1ff) * 4), uVar16 != 0xffffffff) {
LAB_146c0a52a:
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar16 >> 9) * 8);
    if (uVar9 == *(uint *)(lVar14 + (ulonglong)(uVar16 & 0x1ff) * 4)) {
      puVar20 = (uint *)(lVar14 + (ulonglong)(uVar16 & 0x1ff) * 4);
      goto LAB_146c0a4f4;
    }
  }
LAB_146c0a569:
  uVar16 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar21 >> 9) * 8) +
                    (ulonglong)(uVar21 & 0x1ff) * 4);
  if (uVar16 != 0xffffffff) {
    lVar14 = *(longlong *)(param_1 + 0xd8);
    iVar12 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar16 >> 9) * 8) +
                     (ulonglong)(uVar16 & 0x1ff) * 4);
    if (iVar12 < 8) {
      uVar21 = iVar12 + uVar16;
      if ((int)uVar21 < (int)uVar16) {
        uVar21 = uVar16;
      }
      do {
        uVar16 = uVar16 + 1;
        if (uVar16 - uVar21 == 1) goto LAB_146c0a5ed;
        lVar13 = *(longlong *)(lVar14 + (ulonglong)(uVar16 >> 9) * 8);
        uVar11 = (ulonglong)(uVar16 & 0x1ff);
      } while (uVar9 != *(uint *)(lVar13 + uVar11 * 4));
LAB_146c0a5e7:
      puVar20 = (uint *)(lVar13 + uVar11 * 4);
    }
    else {
      iVar12 = 0;
      do {
        if (iVar12 == 8) {
          uVar16 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar16 + 9 >> 9) * 8) +
                            (ulonglong)(uVar16 + 9 & 0x1ff) * 4);
          if (uVar16 == 0xffffffff) goto LAB_146c0a5ed;
          goto LAB_146c0a7a8;
        }
        uVar21 = uVar16 + 1 + iVar12;
        lVar13 = *(longlong *)(lVar14 + (ulonglong)(uVar21 >> 9) * 8);
        uVar11 = (ulonglong)(uVar21 & 0x1ff);
        iVar12 = iVar12 + 1;
      } while (uVar9 != *(uint *)(lVar13 + uVar11 * 4));
      puVar20 = (uint *)(lVar13 + uVar11 * 4);
    }
    *puVar20 = uVar23;
  }
LAB_146c0a5ed:
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)local_c0 * 8);
  uVar16 = *(uint *)(lVar14 + 8 + (ulonglong)(uVar22 << 4));
  lVar13 = (ulonglong)((uVar16 & 0x1ff) * 0xc) +
           *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar16 >> 9) * 8);
  lVar18 = 0;
  do {
    if (*(uint *)(lVar13 + lVar18 * 4) == uVar9) {
      *(uint *)(lVar13 + lVar18 * 4) = uVar23;
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)local_c0 * 8);
      break;
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 3);
  uVar16 = *(uint *)(lVar14 + 0xc + (ulonglong)(uVar22 << 4));
  if (uVar16 != 0xffffffff) {
    lVar14 = (ulonglong)((uVar16 & 0x1ff) * 0xc) +
             *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar16 >> 9) * 8);
    lVar13 = 0;
    do {
      if (*(uint *)(lVar14 + lVar13 * 4) == uVar9) {
        *(uint *)(lVar14 + lVar13 * 4) = uVar23;
        break;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
  }
  uVar11 = (ulonglong)((uVar9 >> 9) << 3);
  uVar19 = (ulonglong)((uVar9 & 0x1ff) * 2);
  *(undefined2 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)local_c0 * 8) + (ulonglong)uVar22 * 2)
       = *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar11) + uVar19);
  *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar11) + uVar19) = 0xffff;
  uVar16 = (int)uVar9 >> 0x1f & uVar9;
  do {
    uVar21 = uVar16 - 1;
    if ((int)uVar9 < 1) break;
    uVar9 = uVar9 - 1;
    uVar21 = uVar9;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x1d8) +
                                         (ulonglong)(uVar9 >> 9) * 8) +
                                       (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
  uVar9 = uVar21;
  uVar16 = uVar23 + 1;
  if ((int)(uVar23 + 1) < (int)uVar9) {
    uVar16 = uVar9;
  }
  do {
    if (uVar16 - 1 == uVar23) goto LAB_146c0a339;
    uVar23 = uVar23 + 1;
  } while ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(uVar23 >> 9) * 8) +
                              (ulonglong)(uVar23 & 0x1ff) * 2) - 1U) < 0xfffe);
  goto LAB_146c0a3ca;
  while (uVar16 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                           (ulonglong)(uVar16 + 1 & 0x1ff) * 4), uVar16 != 0xffffffff) {
LAB_146c0a7a8:
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x110) + (ulonglong)(uVar16 >> 9) * 8);
    uVar11 = (ulonglong)(uVar16 & 0x1ff);
    if (uVar9 == *(uint *)(lVar13 + uVar11 * 4)) goto LAB_146c0a5e7;
  }
  goto LAB_146c0a5ed;
}



// FUNCTION 146c0a96a FUN_146c0a96a body=214 status=ok
// SIG undefined FUN_146c0a96a(void)

void FUN_146c0a96a(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    puVar2 = (uint *)(param_1 + 4);
    iVar7 = uVar3 - *puVar2;
    if (iVar7 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_14582f596(plVar1,uVar3,0);
      }
    }
    else {
      do {
        uVar6 = 0;
        _Dst = (void *)FUN_14001cc68(0x1800,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x1800);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_1411b3d20(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar7 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar7;
  }
  return;
}



// FUNCTION 146c0aa40 FUN_146c0aa40 body=214 status=ok
// SIG undefined FUN_146c0aa40(void)

void FUN_146c0aa40(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    puVar2 = (uint *)(param_1 + 4);
    iVar7 = uVar3 - *puVar2;
    if (iVar7 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_14582f792(plVar1,uVar3,0);
      }
    }
    else {
      do {
        uVar6 = 0;
        _Dst = (void *)FUN_14001cc68(0x2000,0x10);
        memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),0x2000);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_1411b3e82(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar7 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar7;
  }
  return;
}



// FUNCTION 146c0ab16 FUN_146c0ab16 body=743 status=ok
// SIG undefined FUN_146c0ab16(void)

void FUN_146c0ab16(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar4 = (**(code **)(*param_1 + 0xa0))();
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      FUN_146c18b92(*(undefined8 *)(param_1[4] + lVar5 * 8),param_2);
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
    } while (lVar5 < iVar4);
  }
  iVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      FUN_146c18f54(*(undefined8 *)(param_1[6] + lVar5 * 8),param_2);
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
    } while (lVar5 < iVar4);
  }
  if (param_1[8] != 0) {
    FUN_146c1933a(param_1[8],param_2);
  }
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
  }
  iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1[0xc] + lVar5 * 8);
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    } while (lVar5 < iVar4);
  }
  iVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(param_1[10] + lVar5 * 8);
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      lVar5 = lVar5 + 1;
      iVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
    } while (lVar5 < iVar4);
  }
  plVar2 = param_1 + 0xe;
  plVar1 = param_1 + 0x10;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_1[0x13] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_1[0x13];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar2;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      FUN_146be9ecc(*(undefined8 *)(*local_88 + 8 + (longlong)iStack_6c * 0x18),param_2);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar2 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  plVar2 = param_1 + 0x1c;
  plVar1 = param_1 + 0x1e;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = plVar1;
  if ((int)param_1[0x21] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar4 = (int)param_1[0x21];
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar2;
  if ((iStack_4c != iVar4) || (uStack_58 != plVar1)) {
    do {
      plVar3 = *(longlong **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar2 ||
             ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || iStack_6c != iVar4));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0adfe FUN_146c0adfe body=118 status=ok
// SIG undefined FUN_146c0adfe(void)

undefined8 FUN_146c0adfe(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    FUN_146c0ae74(param_1);
    if (*(char *)(param_1 + 0x210) == '\x01') {
      LOCK();
      *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
      UNLOCK();
    }
    LOCK();
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    UNLOCK();
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 146c0ae74 FUN_146c0ae74 body=108 status=ok
// SIG undefined FUN_146c0ae74(void)

void FUN_146c0ae74(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  lVar3 = (ulonglong)((param_2 & 0x1ff) << 2) * 3;
  uVar1 = *(undefined4 *)(lVar2 + lVar3);
  *(undefined4 *)(lVar2 + lVar3) = *(undefined4 *)(lVar2 + 4 + lVar3);
  *(undefined4 *)(lVar2 + 4 + lVar3) = uVar1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(param_2 >> 9) * 8);
  uVar1 = *(undefined4 *)(lVar2 + 4 + lVar3);
  *(undefined4 *)(lVar2 + 4 + lVar3) = *(undefined4 *)(lVar2 + 8 + lVar3);
  *(undefined4 *)(lVar2 + 8 + lVar3) = uVar1;
  if (*(longlong **)(param_1 + 0x208) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146c0aedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x208) + 0x28))();
    return;
  }
  return;
}



// FUNCTION 146c0aee0 FUN_146c0aee0 body=525 status=ok
// SIG undefined FUN_146c0aee0(void)

void FUN_146c0aee0(longlong param_1,char param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
  uVar7 = 0;
  if ((uVar6 != 0) &&
     (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
    uVar5 = 1;
    uVar4 = 1;
    if (1 < (int)uVar6) {
      uVar4 = uVar6;
    }
    do {
      uVar3 = (uint)uVar5;
      uVar7 = uVar4;
      if (uVar4 == uVar3) break;
      uVar2 = uVar5 >> 9;
      uVar5 = (ulonglong)(uVar3 + 1);
      uVar7 = uVar3;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar2] +
                                         (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
  }
LAB_146c0afa1:
  if (uVar7 != uVar6) {
    FUN_146c0ae74(param_1,uVar7);
    uVar4 = uVar7 + 1;
    if ((int)(uVar7 + 1) < (int)uVar6) {
      uVar4 = uVar6;
    }
    uVar3 = uVar7;
    do {
      uVar7 = uVar4;
      if (uVar4 - 1 == uVar3) break;
      uVar7 = uVar3 + 1;
      uVar3 = uVar7;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x148) +
                                           (ulonglong)(uVar7 >> 9) * 8) +
                                         (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
    goto LAB_146c0afa1;
  }
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x70) == '\x01')) {
    uVar6 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar7 = 0;
    if ((uVar6 != 0) &&
       (uVar7 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar4 = 1;
      uVar3 = 1;
      if (1 < (int)uVar6) {
        uVar4 = uVar6;
      }
      do {
        uVar8 = uVar3;
        uVar7 = uVar4;
        if (uVar4 == uVar8) break;
        uVar3 = uVar8 + 1;
        uVar7 = uVar8;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar8 >> 9] +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c0afdf:
    uVar4 = uVar7;
    if (uVar4 != uVar6) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar4 >> 9) * 8);
      uVar5 = (ulonglong)(uVar4 & 0x1ff);
      *(uint *)(lVar1 + uVar5 * 0xc) = *(uint *)(lVar1 + uVar5 * 0xc) ^ 0x80000000;
      *(uint *)(lVar1 + 4 + uVar5 * 0xc) = *(uint *)(lVar1 + 4 + uVar5 * 0xc) ^ 0x80000000;
      *(uint *)(lVar1 + 8 + uVar5 * 0xc) = *(uint *)(lVar1 + 8 + uVar5 * 0xc) ^ 0x80000000;
      uVar3 = uVar4 + 1;
      if ((int)(uVar4 + 1) < (int)uVar6) {
        uVar3 = uVar6;
      }
      do {
        uVar7 = uVar3;
        if (uVar3 - 1 == uVar4) break;
        uVar4 = uVar4 + 1;
        uVar7 = uVar4;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x28) +
                                             (ulonglong)(uVar4 >> 9) * 8) +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c0afdf;
    }
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    LOCK();
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  UNLOCK();
  return;
}



// FUNCTION 146c0b0ee FUN_146c0b0ee body=1071 status=ok
// SIG undefined FUN_146c0b0ee(void)

int FUN_146c0b0ee(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  code **ppcVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_258 [36];
  undefined4 uStack_234;
  code *local_230;
  undefined8 local_228;
  uint local_220;
  undefined8 local_218;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  uint local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar6 = 1;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      if ((char)param_3 != '\0') {
        local_168 = 0;
        local_158 = &PTR_LAB_149f3aae0;
        _uStack_148 = CONCAT44(uStack_144,param_2);
        local_178 = FUN_146be9588;
        local_218 = (code *)(param_1 + 0xb8);
        uStack_210 = param_2;
        local_150 = param_1;
        FUN_146be94ac(local_d8,&local_218,&local_178);
        local_128 = 0xffffffffffffffff;
        local_118[0] = 0;
        local_108 = (longlong *)0x0;
        local_178 = local_98;
        uStack_170 = uStack_90;
        iStack_160 = iStack_80;
        iStack_15c = iStack_7c;
        local_158 = (undefined **)local_78;
        local_140 = local_60;
        uStack_13c = uStack_5c;
        iStack_138 = iStack_58;
        iStack_134 = iStack_54;
        local_130 = local_50;
        FUN_146be971a(local_118,local_d8);
        local_11c = 0;
        FUN_146bfd1f0(&local_178);
        local_1c8 = 0xffffffffffffffff;
        local_1b8[0] = 0;
        local_1a8 = (longlong *)0x0;
        local_218 = (code *)CONCAT44(uStack_6c,local_70);
        uStack_210 = iStack_68;
        uStack_20c = uStack_64;
        local_208 = local_60;
        uStack_204 = uStack_5c;
        iStack_200 = iStack_58;
        iStack_1fc = iStack_54;
        local_1f8 = local_50;
        local_1f0 = local_70;
        uStack_1ec = uStack_6c;
        iStack_1e8 = iStack_68;
        uStack_1e4 = uStack_64;
        local_1e0 = local_60;
        uStack_1dc = uStack_5c;
        iStack_1d8 = iStack_58;
        iStack_1d4 = iStack_54;
        local_1d0 = local_50;
        FUN_146be971a(local_1b8,local_d8);
        local_1bc = 0;
        ppcVar8 = (code **)&local_218;
        while( true ) {
          FUN_146bfd1f0(ppcVar8);
          if ((((local_178 == local_218) && ((int)uStack_170 == uStack_210)) &&
              (iStack_160 == iStack_200)) && (iStack_15c == iStack_1fc)) {
            bVar3 = true;
            goto LAB_146c0b3d8;
          }
          lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(local_120 >> 9) * 8);
          local_220 = *(uint *)(lVar10 + 8 + (ulonglong)(local_120 & 0x1ff) * 0xc);
          local_228 = *(undefined8 *)(lVar10 + (ulonglong)(local_120 & 0x1ff) * 0xc);
          uVar4 = local_228;
          iVar6 = 0;
          if ((uint)local_228 != param_2) {
            iVar6 = 1;
            local_228._4_4_ = (uint)((ulonglong)local_228 >> 0x20);
            if (local_228._4_4_ != param_2) {
              iVar6 = (uint)(local_220 == param_2) * 3 + -1;
            }
          }
          uVar7 = iVar6 - 2;
          if (iVar6 + 1U < 3) {
            uVar7 = iVar6 + 1U;
          }
          uVar1 = *(undefined4 *)((longlong)&local_228 + (longlong)(int)uVar7 * 4);
          uVar7 = iVar6 - 1;
          if (iVar6 + 2U < 3) {
            uVar7 = iVar6 + 2U;
          }
          uVar2 = *(undefined4 *)((longlong)&local_228 + (longlong)(int)uVar7 * 4);
          local_228 = uVar4;
          uVar7 = FUN_146c061e0(param_1,uVar1,uVar2);
          if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar7 >> 9) * 8)
                        + 0xc + (ulonglong)((uVar7 & 0x1ff) << 4)) != -1) &&
             ((cVar5 = FUN_146c0b51e(param_1,uVar1), cVar5 != '\0' ||
              (cVar5 = FUN_146c0b51e(param_1,uVar2), cVar5 != '\0')))) break;
          ppcVar8 = &local_178;
        }
        bVar3 = false;
LAB_146c0b3d8:
        if (local_1b8[0] != 0) {
          plVar9 = local_1a8;
          if (local_1a8 == (longlong *)0x0) {
            plVar9 = local_198;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        if (local_118[0] != 0) {
          plVar9 = local_108;
          if (local_108 == (longlong *)0x0) {
            plVar9 = local_f8;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        if (local_d8[0] != 0) {
          if (local_c8 == (longlong *)0x0) {
            local_c8 = local_b8;
          }
          (**(code **)(*local_c8 + 0x10))();
        }
        iVar6 = 0x1e;
        if (!bVar3) goto LAB_146c0b154;
      }
      local_178 = (code *)0x0;
      uStack_170 = 0;
      FUN_146c08820(param_1,param_2,&local_178);
      lVar10 = (longlong)(int)uStack_170;
      if (lVar10 != 0) {
        local_230 = local_178;
        lVar11 = 0;
        do {
          iVar6 = FUN_146c0b65a(param_1,*(undefined4 *)(local_230 + lVar11),0,param_3);
          if (iVar6 != 0) goto LAB_146c0b4c6;
          lVar11 = lVar11 + 4;
        } while (lVar10 * 4 != lVar11);
      }
      iVar6 = 0x21;
      if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                    (ulonglong)(param_2 & 0x1ff) * 2) == 1) {
        FUN_146c09a68(param_1 + 0x20,param_2,1);
        FUN_146c8b31e(param_1 + 0xb8,param_2);
        if (*(char *)(param_1 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
          UNLOCK();
        }
        LOCK();
        *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
        UNLOCK();
        iVar6 = 0;
      }
LAB_146c0b4c6:
      if (local_178 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146c0b154:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 146c0b51e FUN_146c0b51e body=314 status=ok
// SIG undefined FUN_146c0b51e(void)

undefined8 FUN_146c0b51e(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined8 local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar1 = param_1 + 0xb8;
    FUN_146be983e(&local_50,lVar1,param_2,0);
    lVar3 = local_50;
    uVar5 = local_48;
    if (local_50 != lVar1) goto LAB_146c0b627;
    if (local_48 != param_2) goto LAB_146c0b627;
    if ((int)local_38 != -1) goto LAB_146c0b627;
    iVar2 = local_38._4_4_;
    while (iVar2 != -1) {
LAB_146c0b627:
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_30 >> 9) * 8)
                     + 0xc + (ulonglong)((local_30 & 0x1ff) << 4)) == -1) {
          uVar4 = 1;
          goto LAB_146c0b56f;
        }
        if (local_40 == 0) {
          local_44 = 0xffffffff;
          local_38 = 0xffffffffffffffff;
          local_38._4_4_ = -1;
          local_38._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_50);
          lVar3 = local_50;
          uVar5 = local_48;
        }
      } while (((lVar3 != lVar1) || (uVar5 != param_2)) ||
              (iVar2 = local_38._4_4_, (int)local_38 != -1));
    }
  }
  uVar4 = 0;
LAB_146c0b56f:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146c0b65a FUN_146c0b65a body=700 status=ok
// SIG undefined FUN_146c0b65a(void)

undefined8 FUN_146c0b65a(longlong param_1,uint param_2,char param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = 2;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar6 = (ulonglong)((param_2 >> 9) << 3);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar6);
      lVar11 = (ulonglong)((param_2 & 0x1ff) << 2) * 3;
      local_50 = *(undefined4 *)(lVar10 + 8 + lVar11);
      local_58 = *(undefined8 *)(lVar10 + lVar11);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar6);
      local_60 = *(undefined4 *)(lVar10 + 8 + lVar11);
      local_68 = *(undefined8 *)(lVar10 + lVar11);
      if (param_4 != '\0') {
        lVar10 = 0;
        do {
          cVar4 = FUN_146c0b51e(param_1,*(undefined4 *)((longlong)&local_58 + lVar10 * 4));
          if ((cVar4 != '\0') &&
             (uVar1 = *(uint *)((longlong)&local_68 + lVar10 * 4),
             *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
                      0xc + (ulonglong)((uVar1 & 0x1ff) << 4)) != -1)) {
            uVar6 = (ulonglong)((int)lVar10 - 1);
            if (lVar10 == 0) {
              uVar6 = 2;
            }
            uVar1 = *(uint *)((longlong)&local_68 + uVar6 * 4);
            if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8)
                         + 0xc + (ulonglong)((uVar1 & 0x1ff) << 4)) != -1) {
              uVar5 = 0x1e;
              goto LAB_146c0b848;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 3);
      }
      local_70 = param_1 + 0x140;
      lVar10 = param_1 + 0xb8;
      lVar11 = 0;
      do {
        uVar1 = *(uint *)((longlong)&local_68 + lVar11 * 4);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8);
        lVar9 = (ulonglong)((uVar1 & 0x1ff) << 4) + lVar7;
        if (*(uint *)(lVar9 + 8) == param_2) {
          *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 0xc);
LAB_146c0b7e2:
          *(undefined4 *)(lVar9 + 0xc) = 0xffffffff;
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8);
        }
        else if (*(uint *)(lVar9 + 0xc) == param_2) goto LAB_146c0b7e2;
        uVar6 = (ulonglong)((uVar1 & 0x1ff) << 4);
        if (*(int *)(lVar7 + 8 + uVar6) == -1) {
          puVar8 = (undefined4 *)(lVar7 + uVar6);
          uVar2 = puVar8[1];
          FUN_146c86f00(lVar10,*puVar8,uVar1);
          FUN_146c86f00(lVar10,uVar2,uVar1);
          FUN_146c09a68(param_1 + 0x1d0,uVar1,1);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      FUN_146c09a68(local_70,param_2,1);
      lVar11 = 0;
      do {
        uVar1 = *(uint *)((longlong)&local_58 + lVar11 * 4);
        FUN_146c09a68(param_1 + 0x20,uVar1,1);
        if ((param_3 != '\0') &&
           (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                      (ulonglong)(uVar1 & 0x1ff) * 2) == 1)) {
          FUN_146c09a68(param_1 + 0x20,uVar1,1);
          FUN_146c8b31e(lVar10,uVar1);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      plVar3 = *(longlong **)(param_1 + 0x208);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      }
      if (*(char *)(param_1 + 0x210) == '\x01') {
        LOCK();
        *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
        UNLOCK();
      }
      LOCK();
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
      UNLOCK();
      uVar5 = 0;
    }
  }
LAB_146c0b848:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146c0b918 FUN_146c0b918 body=1483 status=ok
// SIG undefined FUN_146c0b918(void)

undefined8 FUN_146c0b918(longlong param_1,uint param_2,uint *param_3,char param_4)

{
  short *psVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint local_c0;
  char local_a9;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x208) == 0) {
    uVar14 = 0x3e9;
    goto LAB_146c0b9f1;
  }
  uVar10 = param_2 >> 9;
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar10 * 8));
  uVar9 = param_2 & 0x1ff;
  lVar15 = (ulonglong)(uVar9 * 4) * 3;
  local_50 = *(uint *)(lVar16 + 8 + lVar15);
  uVar3 = *(undefined8 *)(lVar16 + lVar15);
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar10 * 8));
  local_60 = *(int *)(lVar16 + 8 + lVar15);
  local_68 = *(undefined8 *)(lVar16 + lVar15);
  uVar2 = *param_3;
  uVar4 = param_3[1];
  local_58._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
  if (local_58._4_4_ == uVar4 && uVar2 == (uint)uVar3) {
    local_68._4_4_ = (int)((ulonglong)local_68 >> 0x20);
    local_68 = CONCAT44(local_68._4_4_,0xffffffff);
LAB_146c0ba2d:
    uVar4 = local_58._4_4_;
    uVar13 = param_3[2];
    if (local_50 == param_3[2]) {
      local_68 = CONCAT44(0xffffffff,(int)local_68);
      uVar13 = local_50;
    }
  }
  else {
    if (local_58._4_4_ == uVar4) goto LAB_146c0ba2d;
    uVar13 = param_3[2];
  }
  if (((uint)uVar3 == uVar2) && (local_50 == uVar13)) {
    local_60 = -1;
  }
  uVar14 = 2;
  local_58 = uVar3;
  if ((((((-1 < (int)param_2) &&
         ((int)param_2 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
        ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar10 * 8) +
                            (ulonglong)uVar9 * 2) - 1U) < 0xfffe)) &&
       ((uVar14 = 1, -1 < (int)uVar2 &&
        (uVar6 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
        (int)uVar2 < (int)uVar6)))) &&
      ((uVar4 < uVar6 &&
       ((-1 < (int)uVar4 &&
        (lVar16 = *(longlong *)(param_1 + 0x28),
        (ushort)(*(short *)(*(longlong *)(lVar16 + (ulonglong)(uVar2 >> 9) * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)))))) &&
     ((uVar13 < uVar6 &&
      ((((-1 < (int)uVar13 &&
         ((ushort)(*(short *)(*(longlong *)(lVar16 + (ulonglong)(uVar4 >> 9) * 8) +
                             (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
        ((ushort)(*(short *)(*(longlong *)(lVar16 + (ulonglong)(uVar13 >> 9) * 8) +
                            (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
       ((uVar14 = 10, uVar2 != uVar4 && (uVar4 != uVar13 && uVar2 != uVar13)))))))) {
    local_a9 = param_4;
    local_a0 = param_3;
    local_a4 = FUN_146c061e0(param_1,uVar2,uVar4);
    uVar4 = FUN_146c061e0(param_1,uVar4,uVar13);
    local_a8 = FUN_146c061e0(param_1,uVar13,uVar2);
    local_84 = (int)local_68;
    if ((local_a4 == 0xffffffff || (int)local_68 == -1) ||
       (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_a4 >> 9) * 8) +
                 0xc + (ulonglong)((local_a4 & 0x1ff) << 4)) == -1)) {
      local_88 = local_68._4_4_;
      if ((uVar4 == 0xffffffff || local_68._4_4_ == -1) ||
         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8) + 0xc
                  + (ulonglong)((uVar4 & 0x1ff) << 4)) == -1)) {
        local_8c = local_60;
        local_94 = uVar4;
        if ((local_a8 == 0xffffffff || local_60 == -1) ||
           (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_a8 >> 9) * 8)
                     + 0xc + (ulonglong)((local_a8 & 0x1ff) << 4)) == -1)) {
          local_78 = param_1 + 0x20;
          lVar16 = param_1 + 0xb8;
          local_70 = param_1 + 0x1d0;
          lVar15 = 0;
          local_80 = lVar16;
          do {
            uVar2 = *(uint *)((longlong)&local_68 + lVar15 * 4);
            if (uVar2 != 0xffffffff) {
              lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8);
              lVar11 = (ulonglong)((uVar2 & 0x1ff) << 4) + lVar7;
              if (*(uint *)(lVar11 + 8) == param_2) {
                *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 0xc);
LAB_146c0bcf8:
                *(undefined4 *)(lVar11 + 0xc) = 0xffffffff;
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8);
              }
              else if (*(uint *)(lVar11 + 0xc) == param_2) goto LAB_146c0bcf8;
              uVar5 = (ulonglong)((uVar2 & 0x1ff) << 4);
              if (*(int *)(lVar7 + 8 + uVar5) == -1) {
                puVar8 = (undefined4 *)(lVar7 + uVar5);
                local_90 = puVar8[1];
                FUN_146c86f00(lVar16,*puVar8,uVar2);
                FUN_146c86f00(lVar16,local_90,uVar2);
                FUN_146c09a68(local_70,uVar2,1);
              }
            }
            lVar7 = local_78;
            lVar15 = lVar15 + 1;
          } while (lVar15 != 3);
          lVar16 = 0;
          puVar12 = local_a0;
          do {
            uVar2 = *(uint *)((longlong)&local_58 + lVar16 * 4);
            if (uVar2 != puVar12[lVar16]) {
              FUN_146c09a68(lVar7,uVar2,1);
              puVar12 = local_a0;
              if ((local_a9 != '\0') &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                            (ulonglong)(uVar2 & 0x1ff) * 2) == 1)) {
                FUN_146c09a68(lVar7,uVar2,1);
                FUN_146c8b31e(local_80,uVar2);
                puVar12 = local_a0;
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          lVar16 = 0;
          do {
            if (puVar12[lVar16] != *(uint *)((longlong)&local_58 + lVar16 * 4)) {
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)uVar10 * 8) +
                        (ulonglong)(uVar9 << 2) * 3 + lVar16 * 4) = puVar12[lVar16];
              psVar1 = (short *)(*(longlong *)
                                  (*(longlong *)(param_1 + 0x28) +
                                  (ulonglong)(puVar12[lVar16] >> 9) * 8) +
                                (ulonglong)(puVar12[lVar16] & 0x1ff) * 2);
              *psVar1 = *psVar1 + 1;
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          if (local_84 != -1) {
            local_c0 = local_a4;
            local_c8 = 0;
            FUN_146c0958e(param_1,param_2,*local_a0,local_a0[1]);
          }
          if (local_88 != -1) {
            local_c0 = local_94;
            local_c8 = 1;
            FUN_146c0958e(param_1,param_2,local_a0[1],local_a0[2]);
          }
          if (local_8c != -1) {
            local_c0 = local_a8;
            local_c8 = 2;
            FUN_146c0958e(param_1,param_2,local_a0[2],*local_a0);
          }
          if (*(char *)(param_1 + 0x210) == '\x01') {
            LOCK();
            *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
            UNLOCK();
          }
          LOCK();
          *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
          UNLOCK();
          uVar14 = 0;
        }
      }
    }
  }
LAB_146c0b9f1:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 146c0bee4 FUN_146c0bee4 body=5213 status=ok
// SIG undefined FUN_146c0bee4(void)

undefined8 FUN_146c0bee4(longlong param_1,uint param_2,uint *param_3,double param_4)

{
  short *psVar1;
  uint uVar2;
  longlong *plVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_1b8 [32];
  uint local_198;
  uint local_184;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined8 local_b0;
  uint local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_3 = 0;
  param_3[1] = 0xffffffff;
  param_3[2] = 0xffffffff;
  param_3[3] = 0xffffffff;
  param_3[4] = 0xffffffff;
  param_3[5] = 0xffffffff;
  param_3[6] = 0xffffffff;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0xffffffff;
  param_3[10] = 0xffffffff;
  param_3[0xb] = 0xffffffff;
  param_3[0xc] = 0xffffffff;
  param_3[0xd] = 0xffffffff;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  uVar12 = 3;
  if (((int)param_2 < 0) ||
     (*(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4) <= (int)param_2))
  goto LAB_146c0c060;
  uVar16 = (ulonglong)(param_2 >> 9);
  uVar23 = param_2 & 0x1ff;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar16 * 8) +
                                  (ulonglong)uVar23 * 2) - 1U)) goto LAB_146c0c060;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar16 * 8);
  uVar21 = (ulonglong)(uVar23 << 4);
  uVar6 = *(uint *)(lVar14 + 8 + uVar21);
  uVar25 = (ulonglong)uVar6;
  if (uVar25 == 0xffffffff) {
    uVar12 = 10;
    goto LAB_146c0c060;
  }
  uVar7 = *(uint *)(lVar14 + uVar21);
  uVar11 = *(uint *)(lVar14 + 4 + uVar21);
  local_158 = (ulonglong)(uVar6 >> 9);
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_158 * 8);
  local_128 = (ulonglong)(uVar6 & 0x1ff);
  local_120 = local_128 * 3;
  local_a8 = *(uint *)(lVar14 + 8 + local_128 * 0xc);
  local_b0 = *(undefined8 *)(lVar14 + local_128 * 0xc);
  lVar14 = 0;
  do {
    lVar18 = lVar14 + 1;
    lVar20 = 0;
    if (lVar14 != 2) {
      lVar20 = lVar18;
    }
    uVar2 = *(uint *)((longlong)&local_b0 + lVar20 * 4);
    uVar8 = *(uint *)((longlong)&local_b0 + lVar14 * 4);
    uVar5 = uVar11;
    uVar24 = uVar7;
    if (((uVar7 == uVar8) ||
        (bVar27 = uVar7 == uVar2, uVar5 = uVar7, uVar24 = uVar11, uVar2 = uVar8, bVar27)) &&
       (uVar11 == uVar2)) {
      uVar21 = 2;
      if (lVar14 != 0) {
        uVar21 = (ulonglong)((int)lVar14 - 1);
      }
      uVar21 = (ulonglong)*(uint *)((longlong)&local_b0 + uVar21 * 4);
      goto LAB_146c0c0ca;
    }
    lVar14 = lVar18;
  } while (lVar18 != 3);
  uVar21 = 0xffffffff;
  uVar24 = uVar7;
  uVar5 = uVar11;
LAB_146c0c0ca:
  uVar11 = (uint)uVar21;
  uVar21 = uVar21 >> 9;
  uVar22 = (ulonglong)(uVar11 & 0x1ff);
  uVar12 = 0xb;
  if (0xfffc < *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar21 * 8) + uVar22 * 2))
  goto LAB_146c0c060;
  if (uVar24 != uVar7) {
    param_4 = 1.0 - param_4;
  }
  *param_3 = param_2;
  *(ulonglong *)(param_3 + 1) = CONCAT44(uVar5,uVar24);
  *(ulonglong *)(param_3 + 5) = uVar25 - 0x100000000;
  *(double *)(param_3 + 0xe) = param_4;
  uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar16 * 8) + 0xc +
                   (ulonglong)(uVar23 << 4));
  local_148 = (ulonglong)uVar7;
  if (local_148 == 0xffffffff) {
    local_160 = (ulonglong)(uVar5 >> 9);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x10) + local_160 * 8);
    local_168 = (ulonglong)(uVar5 & 0x1ff);
    local_148 = local_168 * 3;
    local_180 = (ulonglong)(uVar24 >> 9);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x10) + local_180 * 8);
    uVar25 = (ulonglong)(uVar24 & 0x1ff);
    local_130 = uVar25 * 3;
    dVar4 = 1.0 - param_4;
    local_90 = *(double *)(lVar20 + 0x10 + uVar25 * 0x18) * dVar4 +
               *(double *)(lVar14 + 0x10 + local_168 * 0x18) * param_4;
    local_98 = *(double *)(lVar20 + 8 + uVar25 * 0x18) * dVar4 +
               *(double *)(lVar14 + 8 + local_168 * 0x18) * param_4;
    local_a0 = dVar4 * *(double *)(lVar20 + uVar25 * 0x18) +
               *(double *)(lVar14 + local_168 * 0x18) * param_4;
    local_88 = DAT_14c846330;
    local_80 = DAT_14c846338;
    local_7c = DAT_14c846330;
    local_74 = DAT_14c846338;
    local_70 = DAT_14c84635c;
    local_68 = 0;
    local_66 = 0;
    local_184 = uVar11;
    local_110 = uVar22;
    local_108 = uVar21;
    uVar7 = FUN_146c02208(param_1);
    local_178 = CONCAT44(local_178._4_4_,uVar7);
    if (*(char *)(param_1 + 0x70) == '\x01') {
      fVar32 = (float)param_4;
      fVar28 = 1.0 - fVar32;
      lVar14 = *(longlong *)(param_1 + 0x60);
      lVar20 = *(longlong *)(lVar14 + local_180 * 8);
      lVar18 = *(longlong *)(lVar14 + local_160 * 8);
      fVar30 = *(float *)(lVar20 + 8 + local_130 * 4) * fVar28 +
               *(float *)(lVar18 + 8 + local_148 * 4) * fVar32;
      fVar31 = *(float *)(lVar20 + local_130 * 4) * fVar28 +
               *(float *)(lVar18 + local_148 * 4) * fVar32;
      fVar28 = fVar28 * *(float *)(lVar20 + 4 + local_130 * 4) +
               fVar32 * *(float *)(lVar18 + 4 + local_148 * 4);
      fVar33 = SQRT(fVar30 * fVar30 + fVar31 * fVar31 + fVar28 * fVar28);
      fVar32 = 1.0 / fVar33;
      if (0.0 < fVar33) {
        fVar30 = fVar30 * fVar32;
        fVar28 = fVar28 * fVar32;
      }
      else {
        fVar30 = 0.0;
        fVar28 = 0.0;
      }
      lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar7 >> 9) * 8);
      uVar21 = (ulonglong)(uVar7 & 0x1ff);
      *(uint *)(lVar14 + uVar21 * 0xc) = -(uint)(0.0 < fVar33) & (uint)(fVar31 * fVar32);
      *(float *)(lVar14 + 4 + uVar21 * 0xc) = fVar28;
      *(float *)(lVar14 + 8 + uVar21 * 0xc) = fVar30;
    }
    if (*(char *)(param_1 + 0x90) == '\x01') {
      fVar29 = (float)param_4;
      lVar14 = *(longlong *)(param_1 + 0x80);
      lVar20 = *(longlong *)(lVar14 + local_160 * 8);
      lVar18 = *(longlong *)(lVar14 + local_180 * 8);
      fVar33 = 1.0 - fVar29;
      fVar30 = *(float *)(lVar20 + 4 + local_148 * 4);
      fVar28 = *(float *)(lVar18 + 4 + local_130 * 4);
      fVar32 = *(float *)(lVar20 + 8 + local_148 * 4);
      fVar31 = *(float *)(lVar18 + 8 + local_130 * 4);
      lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar7 >> 9) * 8);
      uVar21 = (ulonglong)(uVar7 & 0x1ff);
      *(float *)(lVar14 + uVar21 * 0xc) =
           *(float *)(lVar18 + local_130 * 4) * fVar33 + *(float *)(lVar20 + local_148 * 4) * fVar29
      ;
      *(float *)(lVar14 + 4 + uVar21 * 0xc) = fVar28 * fVar33 + fVar30 * fVar29;
      *(float *)(lVar14 + 8 + uVar21 * 0xc) = fVar33 * fVar31 + fVar29 * fVar32;
    }
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      fVar32 = (float)param_4;
      lVar14 = *(longlong *)(param_1 + 0xa0);
      lVar20 = *(longlong *)(lVar14 + local_160 * 8);
      lVar18 = *(longlong *)(lVar14 + local_180 * 8);
      fVar30 = *(float *)(lVar20 + 4 + local_168 * 8);
      fVar28 = *(float *)(lVar18 + 4 + uVar25 * 8);
      lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar7 >> 9) * 8);
      *(float *)(lVar14 + (ulonglong)(uVar7 & 0x1ff) * 8) =
           *(float *)(lVar18 + uVar25 * 8) * (1.0 - fVar32) +
           *(float *)(lVar20 + local_168 * 8) * fVar32;
      *(float *)(lVar14 + 4 + (ulonglong)(uVar7 & 0x1ff) * 8) =
           (1.0 - fVar32) * fVar28 + fVar32 * fVar30;
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x180) + local_158 * 8);
    local_b8 = *(uint *)(lVar14 + 8 + local_120 * 4);
    local_c0 = *(undefined8 *)(lVar14 + local_120 * 4);
    if ((uint)local_b0 == uVar5) {
      if (local_b0._4_4_ != local_184) goto LAB_146c0c7c8;
LAB_146c0c7fd:
      uVar21 = 0;
    }
    else {
      if ((local_b0._4_4_ == uVar5) && ((uint)local_b0 == local_184)) goto LAB_146c0c7fd;
LAB_146c0c7c8:
      uVar11 = local_184;
      if (((local_b0._4_4_ != uVar5) && (uVar11 = uVar5, local_b0._4_4_ != local_184)) ||
         (uVar21 = 1, local_a8 != uVar11)) {
        if (local_a8 == uVar5) {
          bVar27 = (uint)local_b0 == local_184;
        }
        else {
          bVar27 = local_a8 == local_184 && (uint)local_b0 == uVar5;
        }
        uVar21 = (ulonglong)bVar27 - 1 | 2;
      }
    }
    local_160 = (ulonglong)*(uint *)((longlong)&local_c0 + uVar21 * 4);
    lVar14 = (ulonglong)(uint)((int)local_120 * 4) +
             *(longlong *)(*(longlong *)(param_1 + 0x130) + local_158 * 8);
    local_a0 = 2.12199579096527e-314;
    local_98._0_4_ = 2;
    lVar20 = 0;
    do {
      if (*(uint *)(lVar14 + (longlong)*(int *)((longlong)&local_a0 + lVar20) * 4) == uVar5) {
        *(uint *)(lVar14 + (longlong)*(int *)((longlong)&local_a0 + lVar20) * 4) = uVar7;
        break;
      }
      lVar20 = lVar20 + 4;
    } while (lVar20 != 0xc);
    uVar9 = FUN_146c08aba(param_1 + 0x140);
    local_a0 = (double)CONCAT44(uVar5,(int)local_178);
    local_98._0_4_ = local_184;
    FUN_146c08b9e(param_1 + 0x128,&local_a0,uVar9);
    local_a0 = -NAN;
    local_98 = (double)CONCAT44(local_98._4_4_,0xffffffff);
    local_180 = CONCAT44(local_180._4_4_,uVar9);
    FUN_146c08b9e(param_1 + 0x178,&local_a0,uVar9);
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      local_a0 = (double)CONCAT44(local_a0._4_4_,
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x198) + local_158 * 8) +
                                   local_128 * 4));
      FUN_146bedf4e(param_1 + 400,&local_a0,local_180 & 0xffffffff);
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (local_160 >> 9 & 0x7fffff) * 8) +
             (ulonglong)(((uint)local_160 & 0x1ff) << 4);
    puVar13 = (uint *)(lVar14 + 8);
    if (*puVar13 == uVar6) {
      if ((uint)local_180 == 0xffffffff) {
        *puVar13 = *(uint *)(lVar14 + 0xc);
        *(undefined4 *)(lVar14 + 0xc) = 0xffffffff;
      }
      else {
        *puVar13 = (uint)local_180;
      }
    }
    else if (*(uint *)(lVar14 + 0xc) == uVar6) {
      *(uint *)(lVar14 + 0xc) = (uint)local_180;
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar16 * 8);
    uVar16 = (ulonglong)(uVar23 << 4);
    uVar23 = *(uint *)(lVar14 + 4 + uVar16);
    if ((*(uint *)(lVar14 + uVar16) == uVar5) ||
       (bVar27 = uVar23 == uVar5, uVar23 = *(uint *)(lVar14 + uVar16), bVar27)) {
      uVar7 = (uint)local_178;
      if ((int)uVar23 < (int)(uint)local_178) {
        uVar7 = uVar23;
      }
      *(uint *)(lVar14 + uVar16) = uVar7;
      if ((int)uVar23 < (int)(uint)local_178) {
        uVar23 = (uint)local_178;
      }
      ((uint *)(lVar14 + uVar16))[1] = uVar23;
    }
    FUN_146c86f00(param_1 + 0xb8,uVar5,param_2);
    uVar21 = local_178;
    uVar11 = (uint)local_178;
    FUN_146c86bd4(param_1 + 0xb8,local_178 & 0xffffffff,param_2);
    uVar16 = local_180;
    local_198 = 0xffffffff;
    uVar7 = (uint)local_180;
    uVar8 = FUN_146c0d3ae(param_1,uVar21 & 0xffffffff,uVar5,local_180 & 0xffffffff);
    uVar23 = local_184;
    local_198 = uVar7;
    uVar6 = FUN_146c0d3ae(param_1,uVar21 & 0xffffffff,local_184,uVar6);
    lVar14 = *(longlong *)(param_1 + 0x180);
    lVar18 = (ulonglong)(uint)((int)local_120 << 2) + *(longlong *)(lVar14 + local_158 * 8);
    lVar20 = 0;
    do {
      if (*(int *)(lVar18 + lVar20 * 4) == (int)local_160) {
        *(uint *)(lVar18 + lVar20 * 4) = uVar6;
        lVar14 = *(longlong *)(param_1 + 0x180);
        break;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 3);
    lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar7 >> 9) * 8);
    uVar21 = (ulonglong)(uVar7 & 0x1ff);
    *(uint *)(lVar14 + uVar21 * 0xc) = uVar8;
    *(int *)(lVar14 + 4 + uVar21 * 0xc) = (int)local_160;
    *(uint *)(lVar14 + 8 + uVar21 * 0xc) = uVar6;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + local_108 * 8) + local_110 * 2)
    ;
    *psVar1 = *psVar1 + 1;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 2;
    *(undefined1 *)(param_3 + 7) = 1;
    *(ulonglong *)(param_3 + 3) = (ulonglong)uVar23 | 0xffffffff00000000;
    param_3[8] = uVar11;
    param_3[0xb] = uVar8;
    param_3[0xc] = uVar6;
    param_3[0xd] = 0xffffffff;
    uVar16 = uVar16 & 0xffffffff | 0xffffffff00000000;
  }
  else {
    param_3[6] = uVar7;
    local_178 = (ulonglong)(uVar7 >> 9);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_178 * 8);
    local_130 = (ulonglong)(uVar7 & 0x1ff);
    local_160 = local_130 * 3;
    local_b8 = *(uint *)(lVar14 + 8 + local_130 * 0xc);
    local_c0 = *(undefined8 *)(lVar14 + local_130 * 0xc);
    lVar14 = 0;
    do {
      lVar18 = lVar14 + 1;
      lVar20 = 0;
      if (lVar14 != 2) {
        lVar20 = lVar18;
      }
      uVar7 = *(uint *)((longlong)&local_c0 + lVar20 * 4);
      uVar6 = *(uint *)((longlong)&local_c0 + lVar14 * 4);
      if (((uVar6 == uVar24) || (bVar27 = uVar7 == uVar24, uVar7 = uVar6, bVar27)) &&
         (uVar7 == uVar5)) {
        uVar26 = 2;
        if (lVar14 != 0) {
          uVar26 = (ulonglong)((int)lVar14 - 1);
        }
        uVar26 = (ulonglong)*(uint *)((longlong)&local_c0 + uVar26 * 4);
        goto LAB_146c0c210;
      }
      lVar14 = lVar18;
    } while (lVar18 != 3);
    uVar26 = 0xffffffff;
LAB_146c0c210:
    uVar19 = (ulonglong)((uint)uVar26 & 0x1ff);
    uVar12 = 0xb;
    local_100 = uVar25;
    if (0xfffc < *(ushort *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x28) + (uVar26 >> 9) * 8) + uVar19 * 2))
    goto LAB_146c0c060;
    local_170 = (ulonglong)(uVar5 >> 9);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x10) + local_170 * 8);
    local_118 = (ulonglong)(uVar5 & 0x1ff);
    local_150 = local_118 * 3;
    local_180 = (ulonglong)(uVar24 >> 9);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x10) + local_180 * 8);
    uVar25 = (ulonglong)(uVar24 & 0x1ff);
    local_140 = uVar25 * 3;
    dVar4 = 1.0 - param_4;
    local_90 = *(double *)(lVar20 + 0x10 + uVar25 * 0x18) * dVar4 +
               *(double *)(lVar14 + 0x10 + local_118 * 0x18) * param_4;
    local_98 = *(double *)(lVar20 + 8 + uVar25 * 0x18) * dVar4 +
               *(double *)(lVar14 + 8 + local_118 * 0x18) * param_4;
    local_a0 = dVar4 * *(double *)(lVar20 + uVar25 * 0x18) +
               *(double *)(lVar14 + local_118 * 0x18) * param_4;
    local_88 = DAT_14c846330;
    local_80 = DAT_14c846338;
    local_7c = DAT_14c846330;
    local_74 = DAT_14c846338;
    local_70 = DAT_14c84635c;
    local_68 = 0;
    local_66 = 0;
    local_184 = uVar11;
    local_138 = uVar26;
    local_110 = uVar22;
    local_108 = uVar21;
    local_f8 = uVar19;
    local_f0 = uVar26 >> 9;
    uVar6 = FUN_146c02208(param_1);
    local_168 = CONCAT44(local_168._4_4_,uVar6);
    if (*(char *)(param_1 + 0x70) == '\x01') {
      fVar32 = (float)param_4;
      fVar28 = 1.0 - fVar32;
      lVar14 = *(longlong *)(param_1 + 0x60);
      lVar20 = *(longlong *)(lVar14 + local_180 * 8);
      lVar18 = *(longlong *)(lVar14 + local_170 * 8);
      fVar31 = *(float *)(lVar20 + 8 + local_140 * 4) * fVar28 +
               *(float *)(lVar18 + 8 + local_150 * 4) * fVar32;
      fVar30 = *(float *)(lVar20 + local_140 * 4) * fVar28 +
               *(float *)(lVar18 + local_150 * 4) * fVar32;
      fVar28 = fVar28 * *(float *)(lVar20 + 4 + local_140 * 4) +
               fVar32 * *(float *)(lVar18 + 4 + local_150 * 4);
      fVar33 = SQRT(fVar31 * fVar31 + fVar30 * fVar30 + fVar28 * fVar28);
      fVar32 = 1.0 / fVar33;
      if (0.0 < fVar33) {
        fVar30 = fVar30 * fVar32;
        fVar28 = fVar28 * fVar32;
      }
      else {
        fVar30 = 0.0;
        fVar28 = 0.0;
      }
      lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar6 >> 9) * 8);
      uVar21 = (ulonglong)(uVar6 & 0x1ff);
      *(float *)(lVar14 + uVar21 * 0xc) = fVar30;
      *(float *)(lVar14 + 4 + uVar21 * 0xc) = fVar28;
      *(uint *)(lVar14 + 8 + uVar21 * 0xc) = -(uint)(0.0 < fVar33) & (uint)(fVar31 * fVar32);
    }
    if (*(char *)(param_1 + 0x90) == '\x01') {
      fVar29 = (float)param_4;
      lVar14 = *(longlong *)(param_1 + 0x80);
      lVar20 = *(longlong *)(lVar14 + local_170 * 8);
      lVar18 = *(longlong *)(lVar14 + local_180 * 8);
      fVar33 = 1.0 - fVar29;
      fVar30 = *(float *)(lVar20 + 4 + local_150 * 4);
      fVar28 = *(float *)(lVar18 + 4 + local_140 * 4);
      fVar32 = *(float *)(lVar20 + 8 + local_150 * 4);
      fVar31 = *(float *)(lVar18 + 8 + local_140 * 4);
      lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar6 >> 9) * 8);
      uVar21 = (ulonglong)(uVar6 & 0x1ff);
      *(float *)(lVar14 + uVar21 * 0xc) =
           *(float *)(lVar18 + local_140 * 4) * fVar33 + *(float *)(lVar20 + local_150 * 4) * fVar29
      ;
      *(float *)(lVar14 + 4 + uVar21 * 0xc) = fVar28 * fVar33 + fVar30 * fVar29;
      *(float *)(lVar14 + 8 + uVar21 * 0xc) = fVar33 * fVar31 + fVar29 * fVar32;
    }
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      fVar32 = (float)param_4;
      lVar14 = *(longlong *)(param_1 + 0xa0);
      lVar20 = *(longlong *)(lVar14 + local_170 * 8);
      lVar18 = *(longlong *)(lVar14 + local_180 * 8);
      fVar30 = *(float *)(lVar20 + 4 + local_118 * 8);
      fVar28 = *(float *)(lVar18 + 4 + uVar25 * 8);
      lVar14 = *(longlong *)(lVar14 + (ulonglong)(uVar6 >> 9) * 8);
      *(float *)(lVar14 + (ulonglong)(uVar6 & 0x1ff) * 8) =
           *(float *)(lVar18 + uVar25 * 8) * (1.0 - fVar32) +
           *(float *)(lVar20 + local_118 * 8) * fVar32;
      *(float *)(lVar14 + 4 + (ulonglong)(uVar6 & 0x1ff) * 8) =
           (1.0 - fVar32) * fVar28 + fVar32 * fVar30;
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x180) + local_158 * 8);
    local_c8 = *(undefined4 *)(lVar14 + 8 + local_120 * 4);
    local_d0 = *(undefined8 *)(lVar14 + local_120 * 4);
    if ((uint)local_b0 == uVar5) {
      if (local_b0._4_4_ != local_184) goto LAB_146c0cd03;
LAB_146c0cd39:
      uVar21 = 0;
    }
    else {
      if ((local_b0._4_4_ == uVar5) && ((uint)local_b0 == local_184)) goto LAB_146c0cd39;
LAB_146c0cd03:
      uVar7 = local_184;
      if (((local_b0._4_4_ != uVar5) && (uVar7 = uVar5, local_b0._4_4_ != local_184)) ||
         (uVar21 = 1, local_a8 != uVar7)) {
        if (local_a8 == uVar5) {
          bVar27 = (uint)local_b0 == local_184;
        }
        else {
          bVar27 = local_a8 == local_184 && (uint)local_b0 == uVar5;
        }
        uVar21 = (ulonglong)bVar27 - 1 | 2;
      }
    }
    local_180 = (ulonglong)*(uint *)((longlong)&local_d0 + uVar21 * 4);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x180) + local_178 * 8);
    local_d8 = *(undefined4 *)(lVar14 + 8 + local_160 * 4);
    local_e0 = *(undefined8 *)(lVar14 + local_160 * 4);
    uVar7 = (uint)local_138;
    if ((uint)local_c0 == uVar7) {
      if (local_c0._4_4_ != uVar5) goto LAB_146c0cd8a;
LAB_146c0cdbf:
      uVar21 = 0;
    }
    else {
      if ((local_c0._4_4_ == uVar7) && ((uint)local_c0 == uVar5)) goto LAB_146c0cdbf;
LAB_146c0cd8a:
      uVar11 = uVar5;
      if (((local_c0._4_4_ != uVar7) && (uVar11 = uVar7, local_c0._4_4_ != uVar5)) ||
         (uVar21 = 1, local_b8 != uVar11)) {
        if (local_b8 == uVar7) {
          bVar27 = (uint)local_c0 == uVar5;
        }
        else {
          bVar27 = local_b8 == uVar5 && (uint)local_c0 == uVar7;
        }
        uVar21 = (ulonglong)bVar27 - 1 | 2;
      }
    }
    local_140 = (ulonglong)*(uint *)((longlong)&local_e0 + uVar21 * 4);
    lVar14 = *(longlong *)(param_1 + 0x130);
    lVar20 = (ulonglong)(uint)((int)local_120 * 4) + *(longlong *)(lVar14 + local_158 * 8);
    local_a0 = 2.12199579096527e-314;
    local_98 = (double)CONCAT44(local_98._4_4_,2);
    lVar18 = 0;
    do {
      if (*(uint *)(lVar20 + (longlong)*(int *)((longlong)&local_a0 + lVar18) * 4) == uVar5) {
        *(uint *)(lVar20 + (longlong)*(int *)((longlong)&local_a0 + lVar18) * 4) = uVar6;
        lVar14 = *(longlong *)(param_1 + 0x130);
        break;
      }
      lVar18 = lVar18 + 4;
    } while (lVar18 != 0xc);
    lVar20 = (ulonglong)(uint)((int)local_160 * 4) + *(longlong *)(lVar14 + local_178 * 8);
    local_a0 = 2.12199579096527e-314;
    local_98._0_4_ = 2;
    lVar14 = 0;
    do {
      if (*(uint *)(lVar20 + (longlong)*(int *)((longlong)&local_a0 + lVar14) * 4) == uVar5) {
        *(uint *)(lVar20 + (longlong)*(int *)((longlong)&local_a0 + lVar14) * 4) = uVar6;
        break;
      }
      lVar14 = lVar14 + 4;
    } while (lVar14 != 0xc);
    uVar9 = FUN_146c08aba(param_1 + 0x140);
    local_150 = CONCAT44(local_150._4_4_,uVar9);
    local_170 = param_1 + 0x128;
    local_a0 = (double)CONCAT44(uVar5,(int)local_168);
    local_98._0_4_ = local_184;
    FUN_146c08b9e(local_170,&local_a0,uVar9);
    local_118 = param_1 + 0x178;
    local_a0 = -NAN;
    local_98._0_4_ = 0xffffffff;
    FUN_146c08b9e(local_118,&local_a0,uVar9);
    uVar6 = FUN_146c08aba(param_1 + 0x140);
    local_a0 = (double)CONCAT44((int)local_138,(int)local_168);
    local_98._0_4_ = uVar5;
    FUN_146c08b9e(local_170,&local_a0,(ulonglong)uVar6);
    uVar21 = local_150;
    local_a0 = -NAN;
    local_98 = (double)CONCAT44(local_98._4_4_,0xffffffff);
    iVar17 = (uint)local_150;
    local_170 = (ulonglong)uVar6;
    FUN_146c08b9e(local_118,&local_a0,uVar6);
    if (*(char *)(param_1 + 0x1a8) == '\x01') {
      local_a0 = (double)CONCAT44(local_a0._4_4_,
                                  *(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x198) + local_158 * 8) +
                                   local_128 * 4));
      FUN_146bedf4e(param_1 + 400,&local_a0,uVar21 & 0xffffffff);
      local_e4 = *(undefined4 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x198) + local_178 * 8) + local_130 * 4);
      FUN_146bedf4e(param_1 + 400,&local_e4,local_170);
    }
    uVar21 = local_168;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (local_180 >> 9 & 0x7fffff) * 8) +
             (ulonglong)(((uint)local_180 & 0x1ff) << 4);
    piVar15 = (int *)(lVar14 + 8);
    if (*piVar15 == (int)local_100) {
      if (iVar17 == -1) {
        *piVar15 = *(int *)(lVar14 + 0xc);
        *(undefined4 *)(lVar14 + 0xc) = 0xffffffff;
      }
      else {
        *piVar15 = iVar17;
      }
    }
    else if (*(int *)(lVar14 + 0xc) == (int)local_100) {
      *(int *)(lVar14 + 0xc) = iVar17;
    }
    uVar6 = (uint)local_140;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (local_140 >> 9 & 0x7fffff) * 8) +
             (ulonglong)((uVar6 & 0x1ff) << 4);
    piVar15 = (int *)(lVar14 + 8);
    iVar17 = (int)local_170;
    if (*piVar15 == (int)local_148) {
      if (iVar17 == -1) {
        *piVar15 = *(int *)(lVar14 + 0xc);
        *(undefined4 *)(lVar14 + 0xc) = 0xffffffff;
      }
      else {
        *piVar15 = iVar17;
      }
    }
    else if (*(int *)(lVar14 + 0xc) == (int)local_148) {
      *(int *)(lVar14 + 0xc) = iVar17;
    }
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar16 * 8);
    uVar16 = (ulonglong)(uVar23 << 4);
    uVar23 = *(uint *)(lVar14 + 4 + uVar16);
    uVar7 = (uint)local_168;
    if ((*(uint *)(lVar14 + uVar16) == uVar5) ||
       (bVar27 = uVar23 == uVar5, uVar23 = *(uint *)(lVar14 + uVar16), bVar27)) {
      uVar11 = (uint)local_168;
      if ((int)uVar23 < (int)(uint)local_168) {
        uVar11 = uVar23;
      }
      *(uint *)(lVar14 + uVar16) = uVar11;
      if ((int)uVar23 < (int)(uint)local_168) {
        uVar23 = (uint)local_168;
      }
      ((uint *)(lVar14 + uVar16))[1] = uVar23;
    }
    FUN_146c86f00(param_1 + 0xb8,uVar5,param_2);
    FUN_146c86bd4(param_1 + 0xb8,uVar21 & 0xffffffff,param_2);
    uVar11 = (uint)local_170;
    uVar9 = (uint)local_150;
    local_198 = uVar11;
    uVar10 = FUN_146c0d3ae(param_1,uVar21 & 0xffffffff,uVar5,local_150 & 0xffffffff);
    local_128 = CONCAT44(local_128._4_4_,uVar10);
    local_198 = uVar9;
    uVar23 = FUN_146c0d3ae(param_1,uVar21 & 0xffffffff,local_184,local_100);
    local_198 = uVar11;
    uVar11 = FUN_146c0d3ae(param_1,local_138,uVar21 & 0xffffffff,local_148);
    lVar14 = *(longlong *)(param_1 + 0x180);
    lVar18 = (ulonglong)(uint)((int)local_120 << 2) + *(longlong *)(lVar14 + local_158 * 8);
    lVar20 = 0;
    do {
      if (*(int *)(lVar18 + lVar20 * 4) == (int)local_180) {
        *(uint *)(lVar18 + lVar20 * 4) = uVar23;
        lVar14 = *(longlong *)(param_1 + 0x180);
        break;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 3);
    lVar18 = (ulonglong)(uint)((int)local_160 << 2) + *(longlong *)(lVar14 + local_178 * 8);
    lVar20 = 0;
    do {
      if (*(uint *)(lVar18 + lVar20 * 4) == uVar6) {
        *(uint *)(lVar18 + lVar20 * 4) = uVar11;
        lVar14 = *(longlong *)(param_1 + 0x180);
        break;
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 3);
    lVar14 = *(longlong *)(lVar14 + (ulonglong)((uint)local_150 >> 9) * 8);
    uVar16 = (ulonglong)((uint)local_150 & 0x1ff);
    *(uint *)(lVar14 + uVar16 * 0xc) = (uint)local_128;
    *(int *)(lVar14 + 4 + uVar16 * 0xc) = (int)local_180;
    *(uint *)(lVar14 + 8 + uVar16 * 0xc) = uVar23;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (local_170 >> 9 & 0x7fffff) * 8);
    uVar16 = (ulonglong)((uint)local_170 & 0x1ff);
    *(uint *)(lVar14 + uVar16 * 0xc) = uVar11;
    *(uint *)(lVar14 + 4 + uVar16 * 0xc) = uVar6;
    *(uint *)(lVar14 + 8 + uVar16 * 0xc) = (uint)local_128;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + local_108 * 8) + local_110 * 2)
    ;
    *psVar1 = *psVar1 + 1;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + local_f0 * 8) + local_f8 * 2);
    *psVar1 = *psVar1 + 1;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 4;
    *(undefined1 *)(param_3 + 7) = 0;
    *(ulonglong *)(param_3 + 3) = (ulonglong)local_184 | local_138 << 0x20;
    param_3[8] = uVar7;
    param_3[0xb] = (uint)local_128;
    param_3[0xc] = uVar23;
    param_3[0xd] = uVar11;
    uVar16 = local_150 & 0xffffffff | local_170 << 0x20;
  }
  *(ulonglong *)(param_3 + 9) = uVar16;
  plVar3 = *(longlong **)(param_1 + 0x208);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_3);
  }
  if (*(char *)(param_1 + 0x210) == '\x01') {
    LOCK();
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
  UNLOCK();
  uVar12 = 0;
LAB_146c0c060:
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0d342 FUN_146c0d342 body=107 status=ok
// SIG undefined FUN_146c0d342(void)

uint FUN_146c0d342(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  if (iVar1 == param_1) {
    if (iVar2 == param_2) {
      return 0;
    }
  }
  else if (iVar1 == param_2 && iVar2 == param_1) {
    return 0;
  }
  iVar3 = param_3[2];
  if (iVar2 == param_1) {
    if (iVar3 == param_2) {
      return 1;
    }
  }
  else if (iVar2 == param_2 && iVar3 == param_1) {
    return 1;
  }
  if (iVar3 == param_1) {
    bVar4 = iVar1 == param_2;
  }
  else {
    bVar4 = iVar3 == param_2 && iVar1 == param_1;
  }
  return bVar4 - 1 | 2;
}



// FUNCTION 146c0d3ae FUN_146c0d3ae body=175 status=ok
// SIG undefined FUN_146c0d3ae(void)

undefined4
FUN_146c0d3ae(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = param_2;
  if (param_3 < param_2) {
    iVar2 = param_3;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  uVar1 = FUN_146c08aba(param_1 + 0x1d0);
  local_3c = param_5;
  local_48 = iVar2;
  local_44 = param_2;
  local_40 = param_4;
  FUN_146c4195a(param_1 + 0x1b8,&local_48,uVar1);
  FUN_146c86bd4(param_1 + 0xb8,iVar2,uVar1);
  FUN_146c86bd4(param_1 + 0xb8,param_2,uVar1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0d45e FUN_146c0d45e body=1589 status=ok
// SIG undefined FUN_146c0d45e(void)

undefined8 FUN_146c0d45e(longlong param_1,uint param_2,uint *param_3)

{
  short *psVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_e8 [44];
  uint local_bc;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  uint *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_3 = 0;
  param_3[1] = 0xffffffff;
  param_3[2] = 0xffffffff;
  param_3[3] = 0xffffffff;
  param_3[4] = 0xffffffff;
  param_3[5] = 0xffffffff;
  param_3[6] = 0xffffffff;
  uVar19 = 3;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4))) {
    uVar22 = param_2 >> 9;
    uVar21 = param_2 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + (ulonglong)uVar22 * 8) +
                           (ulonglong)uVar21 * 2) - 1U) < 0xfffe) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar22 * 8);
      uVar2 = *(uint *)(lVar7 + 0xc + (ulonglong)(uVar21 << 4));
      uVar15 = (ulonglong)uVar2;
      if (uVar15 == 0xffffffff) {
        uVar19 = 0x14;
      }
      else {
        uVar13 = (ulonglong)(uVar21 << 4);
        uVar11 = *(uint *)(lVar7 + uVar13);
        uVar16 = *(uint *)(lVar7 + 4 + uVar13);
        uVar18 = (ulonglong)uVar16;
        uVar9 = *(uint *)(lVar7 + 8 + uVar13);
        uVar20 = (ulonglong)(uVar9 >> 9);
        uVar13 = (ulonglong)uVar9 & 0x1ff;
        local_78 = uVar13 * 3;
        local_70 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + uVar20 * 8) +
                           uVar13 * 0xc);
        local_50 = local_70[2];
        local_58 = *(undefined8 *)local_70;
        local_a0 = (ulonglong)(uVar2 >> 9);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_a0 * 8);
        uVar13 = uVar15 & 0x1ff;
        local_88 = uVar13 * 3;
        local_60 = *(undefined4 *)(lVar7 + 8 + uVar13 * 0xc);
        local_68 = *(undefined8 *)(lVar7 + uVar13 * 0xc);
        lVar7 = 0;
        do {
          lVar10 = lVar7 + 1;
          lVar12 = 0;
          if (lVar7 != 2) {
            lVar12 = lVar10;
          }
          uVar2 = *(uint *)((longlong)&local_58 + lVar12 * 4);
          uVar17 = *(uint *)((longlong)&local_58 + lVar7 * 4);
          if (uVar11 == uVar17) {
            if (uVar16 == uVar2) {
LAB_146c0d5f0:
              uVar13 = 2;
              if (lVar7 != 0) {
                uVar13 = (ulonglong)((int)lVar7 - 1);
              }
              local_bc = *(uint *)((longlong)&local_58 + uVar13 * 4);
              goto LAB_146c0d64b;
            }
          }
          else if ((uVar11 == uVar2) && (uVar16 == uVar17)) {
            uVar18 = (ulonglong)uVar11;
            uVar11 = uVar16;
            goto LAB_146c0d5f0;
          }
          lVar7 = lVar10;
        } while (lVar10 != 3);
        local_bc = 0xffffffff;
LAB_146c0d64b:
        lVar7 = 0;
        do {
          lVar10 = lVar7 + 1;
          lVar12 = 0;
          if (lVar7 != 2) {
            lVar12 = lVar10;
          }
          uVar16 = *(uint *)((longlong)&local_68 + lVar12 * 4);
          uVar2 = *(uint *)((longlong)&local_68 + lVar7 * 4);
          uVar17 = (uint)uVar18;
          if (((uVar2 == uVar11) || (bVar23 = uVar16 == uVar11, uVar16 = uVar2, bVar23)) &&
             (uVar16 == uVar17)) {
            uVar13 = 2;
            if (lVar7 != 0) {
              uVar13 = (ulonglong)((int)lVar7 - 1);
            }
            uVar19 = 10;
            local_80 = uVar20;
            if ((local_bc == 0xffffffff) ||
               (uVar2 = *(uint *)((longlong)&local_68 + uVar13 * 4), uVar2 == 0xffffffff))
            goto LAB_146c0d612;
            local_b8 = (ulonglong)uVar9;
            local_b0 = (ulonglong)uVar2;
            local_a8 = uVar15;
            iVar5 = FUN_146c061e0(param_1,local_bc,(ulonglong)uVar2);
            uVar2 = local_bc;
            uVar19 = 0x15;
            if (iVar5 != -1) goto LAB_146c0d612;
            local_90 = FUN_146c08c04(param_1,local_b8,uVar18,local_bc);
            local_8c = FUN_146c08c04(param_1,local_b8,uVar2,uVar11);
            local_94 = FUN_146c08c04(param_1,local_a8,uVar11,local_b0);
            uVar6 = FUN_146c08c04(param_1,local_a8,local_b0,uVar18);
            *local_70 = uVar2;
            uVar16 = (uint)local_b0;
            local_70[1] = uVar16;
            local_70[2] = uVar17;
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_a0 * 8);
            *(uint *)(lVar7 + local_88 * 4) = uVar16;
            *(uint *)(lVar7 + 4 + local_88 * 4) = uVar2;
            uVar9 = uVar16;
            if ((int)uVar16 < (int)uVar2) {
              uVar9 = uVar2;
            }
            *(uint *)(lVar7 + 8 + local_88 * 4) = uVar11;
            if ((int)uVar2 < (int)uVar16) {
              uVar16 = uVar2;
            }
            uVar13 = (ulonglong)(uVar22 << 3);
            uVar15 = (ulonglong)(uVar21 << 4);
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar13) + uVar15) = uVar16;
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar13) + 4 + uVar15) = uVar9;
            iVar14 = (int)local_b8;
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar13) + 8 + uVar15) = iVar14;
            iVar5 = (int)local_a8;
            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar13) + 0xc + uVar15) = iVar5;
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_8c >> 9) * 8) +
                    (ulonglong)((local_8c & 0x1ff) << 4);
            piVar8 = (int *)(lVar7 + 8);
            if (*piVar8 != iVar14) {
              uVar19 = 1000;
              if (*(int *)(lVar7 + 0xc) != iVar14) goto LAB_146c0d612;
              piVar8 = (int *)(lVar7 + 0xc);
            }
            *piVar8 = iVar5;
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)((uVar6 & 0x1ff) << 4);
            piVar8 = (int *)(lVar7 + 8);
            if (*piVar8 == iVar5) {
              if (iVar14 == -1) {
                *piVar8 = *(int *)(lVar7 + 0xc);
                *(undefined4 *)(lVar7 + 0xc) = 0xffffffff;
              }
              else {
                *piVar8 = iVar14;
              }
            }
            else {
              uVar19 = 1000;
              if (*(int *)(lVar7 + 0xc) != iVar5) goto LAB_146c0d612;
              *(int *)(lVar7 + 0xc) = iVar14;
            }
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x180) + local_80 * 8);
            *(uint *)(lVar7 + local_78 * 4) = param_2;
            *(uint *)(lVar7 + 4 + local_78 * 4) = uVar6;
            *(undefined4 *)(lVar7 + 8 + local_78 * 4) = local_90;
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x180) + local_a0 * 8);
            *(uint *)(lVar7 + local_88 * 4) = param_2;
            *(uint *)(lVar7 + 4 + local_88 * 4) = local_8c;
            *(undefined4 *)(lVar7 + 8 + local_88 * 4) = local_94;
            uVar15 = param_1 + 0xb8;
            cVar4 = FUN_146c86f00(uVar15,uVar11,param_2);
            uVar19 = 1000;
            if (cVar4 != '\0') {
              local_a0 = uVar15;
              cVar4 = FUN_146c86f00(uVar15,uVar18,param_2);
              if (cVar4 != '\0') {
                FUN_146c09a68(param_1 + 0x20,uVar11,1);
                FUN_146c09a68(param_1 + 0x20,uVar18,1);
                uVar20 = local_a0;
                uVar13 = local_b0;
                uVar15 = local_b8;
                if (((-1 < (int)uVar11) &&
                    (uVar21 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
                    (int)uVar11 < (int)uVar21)) &&
                   (((ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(param_1 + 0x28) +
                                          (ulonglong)(uVar11 >> 9) * 8) +
                                        (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe &&
                    (((-1 < (int)uVar17 && (uVar17 < uVar21)) &&
                     ((ushort)(*(short *)(*(longlong *)
                                           (*(longlong *)(param_1 + 0x28) + (uVar18 >> 9) * 8) +
                                         (ulonglong)(uVar17 & 0x1ff) * 2) - 1U) < 0xfffe)))))) {
                  FUN_146c86bd4(local_a0,local_bc,param_2);
                  FUN_146c86bd4(uVar20,uVar13 & 0xffffffff,param_2);
                  psVar1 = (short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x28) +
                                      (ulonglong)(local_bc >> 9) * 8) +
                                    (ulonglong)(local_bc & 0x1ff) * 2);
                  *psVar1 = *psVar1 + 1;
                  psVar1 = (short *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x28) + (uVar13 >> 9 & 0x7fffff) * 8)
                                    + (ulonglong)((uint)uVar13 & 0x1ff) * 2);
                  *psVar1 = *psVar1 + 1;
                  *param_3 = param_2;
                  *(ulonglong *)(param_3 + 1) = (ulonglong)uVar11 | uVar18 << 0x20;
                  *(ulonglong *)(param_3 + 3) = (ulonglong)local_bc | uVar13 << 0x20;
                  *(ulonglong *)(param_3 + 5) = local_a8 << 0x20 | uVar15;
                  plVar3 = *(longlong **)(param_1 + 0x208);
                  if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x40))(plVar3,param_3);
                  }
                  if (*(char *)(param_1 + 0x210) == '\x01') {
                    LOCK();
                    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
                    UNLOCK();
                  }
                  LOCK();
                  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
                  UNLOCK();
                  uVar19 = 0;
                }
              }
            }
            goto LAB_146c0d612;
          }
          lVar7 = lVar10;
        } while (lVar10 != 3);
        uVar19 = 10;
      }
    }
  }
LAB_146c0d612:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0da94 FUN_146c0da94 body=81 status=ok
// SIG undefined FUN_146c0da94(void)

undefined8
FUN_146c0da94(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_146c061e0();
  if (iVar1 != -1) {
                    /* WARNING: Could not recover jumptable at 0x000146c0dabf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,iVar1,param_4,*(code **)(*param_1 + 0x40));
    return uVar2;
  }
  *param_4 = 0;
  param_4[1] = 0xffffffff;
  param_4[2] = 0xffffffff;
  param_4[3] = 0xffffffff;
  param_4[4] = 0xffffffff;
  *(undefined8 *)(param_4 + 5) = 0xffffffffffffffff;
  return 3;
}



// FUNCTION 146c0dae6 FUN_146c0dae6 body=628 status=ok
// SIG undefined FUN_146c0dae6(void)

undefined8 FUN_146c0dae6(longlong param_1,uint param_2,longlong *param_3,uint *param_4)

{
  short *psVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  uint local_68;
  longlong local_60;
  longlong *local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = 1;
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    *param_4 = param_2;
    uVar4 = FUN_146c08ff0(param_1,param_1,param_2);
    param_4[1] = uVar4;
    local_b0 = param_3;
    local_60 = param_1;
    local_58 = param_3;
    local_50 = param_4;
    if ((longlong)(int)param_3[1] != 0) {
      local_a0 = param_1 + 0x20;
      lVar8 = *param_3;
      lVar7 = (longlong)(int)param_3[1] << 2;
      lVar10 = 0;
      local_a8 = lVar8;
      local_98 = lVar7;
      do {
        uVar4 = *(uint *)(lVar8 + lVar10);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
        uVar5 = uVar4 & 0x1ff;
        local_68 = *(uint *)(lVar2 + 8 + (ulonglong)uVar5 * 0xc);
        local_70 = *(undefined8 *)(lVar2 + (ulonglong)uVar5 * 0xc);
        if ((uint)local_70 == param_2) {
          iVar9 = 2;
          local_90 = 0;
LAB_146c0dc41:
          local_b8 = (int)local_90;
          local_88 = (ulonglong)(uint)(local_b8 * 4);
          *(uint *)((longlong)&local_70 + local_88) = param_4[1];
          uVar11 = (ulonglong)((uVar4 >> 9) << 3);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar11);
          lVar7 = (ulonglong)(uVar5 << 2) * 3;
          local_78 = *(undefined4 *)(lVar8 + 8 + lVar7);
          local_80 = *(undefined8 *)(lVar8 + lVar7);
          FUN_1429722c2(&local_60,uVar4,&local_70,&local_80);
          local_b8 = iVar9 + (int)local_90;
          FUN_1429722c2(&local_60,uVar4,&local_70,&local_80);
          *(uint *)(local_88 + lVar7 + *(longlong *)(*(longlong *)(param_1 + 0x130) + uVar11)) =
               param_4[1];
          FUN_146c09a68(local_a0,*param_4,1);
          psVar1 = (short *)(*(longlong *)
                              (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_4[1] >> 9) * 8) +
                            (ulonglong)(param_4[1] & 0x1ff) * 2);
          *psVar1 = *psVar1 + 1;
          lVar7 = local_98;
          lVar8 = local_a8;
        }
        else {
          iVar9 = -1;
          local_70._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
          if (local_70._4_4_ == param_2) {
            local_90 = 1;
            goto LAB_146c0dc41;
          }
          if (local_68 == param_2) {
            local_90 = 2;
            goto LAB_146c0dc41;
          }
        }
        lVar10 = lVar10 + 4;
      } while (lVar7 != lVar10);
    }
    plVar3 = *(longlong **)(param_1 + 0x208);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x68))(plVar3,param_4,local_b0);
    }
    if (*(char *)(param_1 + 0x210) == '\x01') {
      LOCK();
      *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
      UNLOCK();
    }
    LOCK();
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    UNLOCK();
    uVar6 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 146c0dd5c FUN_146c0dd5c body=589 status=ok
// SIG undefined FUN_146c0dd5c(void)

ulonglong FUN_146c0dd5c(longlong param_1,undefined4 param_2,longlong *param_3)

{
  code **ppcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _uStack_148 = CONCAT44(uStack_144,param_2);
  local_178 = FUN_146be9588;
  local_218 = (code *)(param_1 + 0xb8);
  iStack_210 = param_2;
  local_150 = param_1;
  FUN_146be94ac(local_d8,&local_218);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  ppcVar1 = (code **)&local_218;
  while ((((FUN_146bfd1f0(ppcVar1), local_178 != local_218 || ((int)uStack_170 != iStack_210)) ||
          (iStack_160 != iStack_200)) || (iStack_15c != iStack_1fc))) {
    if ((longlong)(int)param_3[1] == 0) {
LAB_146c0df05:
      uVar3 = 0;
LAB_146c0df07:
      if (local_1b8[0] != 0) {
        plVar2 = local_1a8;
        if (local_1a8 == (longlong *)0x0) {
          plVar2 = local_198;
        }
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_118[0] != 0) {
        plVar2 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar2 = local_f8;
        }
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_d8[0] != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
      if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar3 & 0xffffffff;
    }
    lVar4 = 0;
    while (ppcVar1 = &local_178, *(int *)(*param_3 + lVar4) != local_120) {
      lVar4 = lVar4 + 4;
      if ((longlong)(int)param_3[1] * 4 == lVar4) goto LAB_146c0df05;
    }
  }
  uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  goto LAB_146c0df07;
}



// FUNCTION 146c0dfaa FUN_146c0dfaa body=87 status=ok
// SIG undefined FUN_146c0dfaa(void)

void FUN_146c0dfaa(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 local_c;
  undefined1 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_c;
  local_a = 0;
  local_c = 0;
  local_20 = in_stack_00000028;
  (**(code **)(*param_1 + 0xe0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0e002 FUN_146c0e002 body=2432 status=ok
// SIG undefined FUN_146c0e002(void)

undefined8
FUN_146c0e002(longlong param_1,uint param_2,uint param_3,undefined8 param_4,char *param_5,
             uint *param_6)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  longlong local_c0;
  uint local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined8 local_a8;
  uint local_a0;
  longlong local_98;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar18 = 3;
  if (((((int)param_2 < 0) ||
       (uVar4 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24),
       (int)uVar4 <= (int)param_2)) || (uVar4 <= param_3)) ||
     (((int)param_3 < 0 ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8)
                                   + (ulonglong)(param_2 & 0x1ff) * 2) - 1U))))) goto LAB_146c0e099;
  if ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_3 >> 9) * 8)
                                   + (ulonglong)(param_3 & 0x1ff) * 2) - 1U)) ||
     (uVar4 = FUN_146c061e0(param_1,param_3,param_2), uVar4 == 0xffffffff)) goto LAB_146c0e099;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar4 >> 9) * 8);
  uVar7 = (ulonglong)((uVar4 & 0x1ff) << 4);
  uVar5 = *(uint *)(lVar6 + 8 + uVar7);
  if ((ulonglong)uVar5 == 0xffffffff) {
    uVar18 = 10;
    goto LAB_146c0e099;
  }
  uVar9 = *(uint *)(lVar6 + 0xc + uVar7);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
  local_68 = *(undefined4 *)(lVar6 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
  local_70 = *(undefined8 *)(lVar6 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
  lVar6 = 0;
  do {
    lVar8 = lVar6 + 1;
    lVar11 = 0;
    if (lVar6 != 2) {
      lVar11 = lVar8;
    }
    uVar10 = *(uint *)((longlong)&local_70 + lVar11 * 4);
    uVar13 = *(uint *)((longlong)&local_70 + lVar6 * 4);
    if (uVar13 == param_3) {
      if (uVar10 == param_2) {
LAB_146c0e1ac:
        uVar7 = 2;
        if (lVar6 != 0) {
          uVar7 = (ulonglong)((int)lVar6 - 1);
        }
        uVar10 = *(uint *)((longlong)&local_70 + uVar7 * 4);
        goto LAB_146c0e1c7;
      }
    }
    else if (uVar13 == param_2 && uVar10 == param_3) goto LAB_146c0e1ac;
    lVar6 = lVar8;
  } while (lVar8 != 3);
  uVar10 = 0xffffffff;
LAB_146c0e1c7:
  if (uVar9 == 0xffffffff) {
    local_e8 = 0xffffffff;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar9 >> 9) * 8);
    local_90 = *(uint *)(lVar6 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    local_98 = *(longlong *)(lVar6 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    lVar6 = 0;
    do {
      lVar8 = lVar6 + 1;
      lVar11 = 0;
      if (lVar6 != 2) {
        lVar11 = lVar8;
      }
      uVar13 = *(uint *)((longlong)&local_98 + lVar11 * 4);
      uVar19 = *(uint *)((longlong)&local_98 + lVar6 * 4);
      if (uVar19 == param_3) {
        if (uVar13 == param_2) {
LAB_146c0e246:
          uVar7 = 2;
          if (lVar6 != 0) {
            uVar7 = (ulonglong)((int)lVar6 - 1);
          }
          local_e8 = (ulonglong)*(uint *)((longlong)&local_98 + uVar7 * 4);
          goto LAB_146c0e260;
        }
      }
      else if (uVar19 == param_2 && uVar13 == param_3) goto LAB_146c0e246;
      lVar6 = lVar8;
    } while (lVar8 != 3);
    local_e8 = 0xffffffff;
LAB_146c0e260:
    uVar18 = 0x18;
    if (uVar10 == (uint)local_e8) goto LAB_146c0e099;
  }
  uVar7 = (ulonglong)uVar10;
  lVar6 = param_1 + 0xb8;
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(param_3 >> 9) * 8) +
                    (ulonglong)(param_3 & 0x1ff) * 4);
  local_c4 = 0;
  if (uVar10 != 0xffffffff) {
    local_c4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar10 >> 9) * 8)
                       + (ulonglong)(uVar10 & 0x1ff) * 4);
  }
  local_f0 = (ulonglong)uVar9;
  local_e0 = (ulonglong)uVar5;
  FUN_146be983e(&local_98,lVar6,param_3,0);
  uVar17 = local_f0;
  if (((local_98 == lVar6) && (local_90 == param_3)) && ((int)local_80 == -1)) {
    uVar15 = 0xffffffff;
    uVar14 = 0xffffffff;
    if (local_80._4_4_ != -1) goto LAB_146c0e415;
  }
  else {
LAB_146c0e415:
    uVar14 = 0xffffffff;
    uVar15 = 0xffffffff;
    do {
      uVar19 = local_78 >> 9;
      uVar13 = local_78 & 0x1ff;
      uVar18 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar19 * 8) +
                (ulonglong)(uVar13 << 4));
      uVar10 = (uint)((ulonglong)uVar18 >> 0x20);
      uVar9 = (uint)uVar18;
      uVar5 = 0xffffffff;
      if (uVar10 == param_3) {
        uVar5 = uVar9;
      }
      if (uVar9 == param_3) {
        uVar5 = uVar10;
      }
      if (uVar5 == (uint)uVar7) {
        uVar14 = (ulonglong)local_78;
      }
      else if (uVar5 == (uint)local_e8) {
        uVar15 = (ulonglong)local_78;
      }
      else if (uVar5 != param_2) {
        local_d0 = (uint)uVar14;
        local_d8 = uVar15;
        local_cc = (uint)uVar7;
        FUN_146be983e(&local_c0,lVar6,param_2,0);
        local_c8 = local_b8;
        lVar8 = local_c0;
        if (local_c0 != lVar6) goto LAB_146c0e59f;
        if (local_b8 != param_2) goto LAB_146c0e59f;
        if ((int)local_a8 != -1) goto LAB_146c0e59f;
        iVar2 = local_a8._4_4_;
        while (iVar2 != -1) {
LAB_146c0e59f:
          do {
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_a0 >> 9) * 8);
            uVar18 = *(undefined8 *)(lVar11 + (ulonglong)((local_a0 & 0x1ff) << 4));
            uVar16 = (uint)((ulonglong)uVar18 >> 0x20);
            uVar10 = (uint)uVar18;
            uVar9 = 0xffffffff;
            if (uVar16 == param_2) {
              uVar9 = uVar10;
            }
            if (uVar10 == param_2) {
              uVar9 = uVar16;
            }
            if (uVar9 == uVar5) {
              if (((*param_5 == '\x01') &&
                  (*(int *)(lVar11 + 0xc + (ulonglong)((local_a0 & 0x1ff) << 4)) == -1)) &&
                 (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar19 * 8) +
                           0xc + (ulonglong)(uVar13 << 4)) == -1)) goto LAB_146c0e52d;
              uVar18 = 0x17;
              goto LAB_146c0e099;
            }
            if (local_b0 == 0) {
              local_b4 = 0xffffffff;
              local_a8 = 0xffffffffffffffff;
              local_a8._4_4_ = -1;
              local_a8._0_4_ = -1;
            }
            else {
              FUN_146be9922(&local_c0);
              local_c8 = local_b8;
              lVar8 = local_c0;
            }
          } while (((lVar8 != lVar6) || (local_c8 != param_2)) ||
                  (iVar2 = local_a8._4_4_, (int)local_a8 != -1));
        }
LAB_146c0e52d:
        uVar7 = (ulonglong)local_cc;
        uVar14 = (ulonglong)local_d0;
        uVar15 = local_d8;
        uVar17 = local_f0;
      }
      if (local_88 == 0) {
        local_8c = 0xffffffff;
        local_80 = 0xffffffffffffffff;
        local_80._4_4_ = -1;
        local_80._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_98);
        uVar17 = local_f0;
      }
    } while (((local_98 != lVar6) || (local_90 != param_3)) ||
            (((int)local_80 != -1 || (local_80._4_4_ != -1))));
  }
  local_d8 = uVar15;
  if ((((int)uVar17 == -1) || (local_c4 != 3)) || (param_5[2] != '\0')) {
    if ((int)uVar17 != -1) goto LAB_146c0e372;
    lVar6 = *(longlong *)(param_1 + 0x1c0);
    if (*(int *)(*(longlong *)(lVar6 + (uVar14 >> 9) * 8) + 0xc +
                (ulonglong)(((uint)uVar14 & 0x1ff) << 4)) == -1) {
      uVar5 = FUN_146c085f4(param_1,param_2,uVar7,local_e0 & 0xffffffff);
      if (*(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8) + 0xc +
                  (ulonglong)((uVar5 & 0x1ff) << 4)) == -1) {
        uVar18 = 0x1a;
        goto LAB_146c0e099;
      }
      uVar15 = (ulonglong)uVar5;
      goto LAB_146c0e3fc;
    }
LAB_146c0e660:
    uVar12 = 0xffffffff;
    uVar15 = 0xffffffff;
  }
  else {
    uVar5 = FUN_146c061e0(param_1,local_e8,uVar7);
    uVar17 = local_f0;
    if (uVar5 != 0xffffffff) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8);
      uVar15 = (ulonglong)((uVar5 & 0x1ff) << 4);
      uVar5 = *(uint *)(lVar6 + 0xc + uVar15);
      if (uVar5 != 0xffffffff) {
        uVar9 = *(uint *)(lVar6 + uVar15 + 8);
        lVar6 = *(longlong *)(param_1 + 0x130);
        puVar1 = (uint *)(*(longlong *)(lVar6 + (ulonglong)(uVar9 >> 9) * 8) +
                         (ulonglong)(uVar9 & 0x1ff) * 0xc);
        if (((*puVar1 == param_3) || (puVar1[1] == param_3)) || (puVar1[2] == param_3)) {
          lVar8 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
          uVar18 = 0x19;
          if (((*(uint *)(lVar8 + (ulonglong)(uVar5 & 0x1ff) * 0xc) == param_2) ||
              (lVar8 = lVar8 + (ulonglong)(uVar5 & 0x1ff) * 0xc, *(uint *)(lVar8 + 4) == param_2))
             || (*(uint *)(lVar8 + 8) == param_2)) goto LAB_146c0e099;
        }
        if (((*puVar1 == param_2) || (puVar1[1] == param_2)) || (puVar1[2] == param_2)) {
          lVar6 = *(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8);
          uVar18 = 0x19;
          if (((*(uint *)(lVar6 + (ulonglong)(uVar5 & 0x1ff) * 0xc) == param_3) ||
              (lVar6 = lVar6 + (ulonglong)(uVar5 & 0x1ff) * 0xc, *(uint *)(lVar6 + 4) == param_3))
             || (*(uint *)(lVar6 + 8) == param_3)) goto LAB_146c0e099;
        }
      }
    }
LAB_146c0e372:
    if ((((int)uVar17 != -1) && (param_5[1] == '\0')) &&
       (cVar3 = FUN_146c0b51e(param_1,param_3), uVar17 = local_f0, cVar3 != '\0')) {
      cVar3 = FUN_146c0b51e(param_1,param_2);
      uVar18 = 0x17;
      uVar17 = local_f0;
      if (cVar3 != '\0') goto LAB_146c0e099;
    }
    if ((((int)uVar17 == -1) || (param_5[1] == '\0')) ||
       (lVar6 = *(longlong *)(param_1 + 0x1c0),
       *(int *)(*(longlong *)(lVar6 + (uVar14 >> 9) * 8) + 0xc +
               (ulonglong)(((uint)uVar14 & 0x1ff) << 4)) != -1)) goto LAB_146c0e660;
    if (*(int *)(*(longlong *)(lVar6 + (local_d8 >> 9 & 0x7fffff) * 8) + 0xc +
                (ulonglong)(((uint)local_d8 & 0x1ff) << 4)) == -1) {
      uVar5 = FUN_146c085f4(param_1,param_2,uVar7,local_e0);
      uVar15 = (ulonglong)uVar5;
      if (*(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8) + 0xc +
                  (ulonglong)((uVar5 & 0x1ff) << 4)) == -1) {
        uVar5 = FUN_146c085f4(param_1,param_2,local_e8,local_f0);
        uVar12 = (ulonglong)uVar5;
        uVar17 = local_f0;
        if (*(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar5 >> 9) * 8) + 0xc +
                    (ulonglong)((uVar5 & 0x1ff) << 4)) == -1) {
          uVar18 = 0x1d;
          goto LAB_146c0e099;
        }
      }
      else {
        uVar12 = 0xffffffff;
        uVar17 = local_f0;
      }
    }
    else {
      uVar15 = 0xffffffff;
LAB_146c0e3fc:
      uVar12 = 0xffffffff;
      uVar17 = local_f0;
    }
  }
  uVar18 = 0;
  if (param_6 != (uint *)0x0) {
    *(ulonglong *)(param_6 + 2) = uVar7 | local_e8 << 0x20;
    *param_6 = param_2;
    param_6[1] = param_3;
    *(bool *)(param_6 + 4) = (int)uVar17 == -1;
    param_6[5] = uVar4;
    *(ulonglong *)(param_6 + 6) = uVar17 << 0x20 | local_e0;
    *(ulonglong *)(param_6 + 8) = uVar14 | local_d8 << 0x20;
    *(ulonglong *)(param_6 + 10) = uVar15 | uVar12 << 0x20;
    *(undefined8 *)(param_6 + 0xc) = param_4;
  }
LAB_146c0e099:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 146c0e984 FUN_146c0e984 body=87 status=ok
// SIG undefined FUN_146c0e984(void)

void FUN_146c0e984(longlong *param_1)

{
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 local_c;
  undefined1 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_c;
  local_a = 0;
  local_c = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0xe0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0e9dc FUN_146c0e9dc body=36 status=ok
// SIG undefined FUN_146c0e9dc(void)

void FUN_146c0e9dc(longlong *param_1)

{
  (**(code **)(*param_1 + 0xe0))();
  return;
}



// FUNCTION 146c0ea00 FUN_146c0ea00 body=87 status=ok
// SIG undefined FUN_146c0ea00(void)

void FUN_146c0ea00(longlong *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 local_c;
  undefined1 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &local_c;
  local_a = 0;
  local_c = 0;
  local_20 = in_stack_00000028;
  (**(code **)(*param_1 + 0x80))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0ea58 FUN_146c0ea58 body=4090 status=ok
// SIG undefined FUN_146c0ea58(void)

undefined8
FUN_146c0ea58(longlong *param_1,uint param_2,uint param_3,double param_4,char *param_5,
             undefined8 *param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short *psVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  bool bVar27;
  uint uVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  undefined1 auStack_208 [32];
  char *local_1e8;
  undefined8 *local_1e0;
  uint local_1d4;
  uint local_1d0;
  int local_1cc;
  longlong *local_1c8;
  ulonglong local_1c0;
  int local_1b4;
  longlong local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  uint local_17c;
  ulonglong local_178;
  undefined4 local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 local_110;
  uint local_108;
  int local_fc [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *param_6 = 0;
  *(undefined4 *)(param_6 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_6 + 0xc) = 0xffffffff;
  param_6[2] = 0;
  *(undefined4 *)(param_6 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_6 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_6 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)param_6 + 0x24) = 0xffffffff;
  param_6[5] = 0xffffffffffffffff;
  param_6[6] = 0;
  local_1e0 = param_6;
  local_1e8 = param_5;
  uVar15 = (**(code **)(*param_1 + 0xe0))(param_1,param_2);
  if ((int)uVar15 != 0) goto LAB_146c0eb40;
  uVar20 = (ulonglong)(param_2 >> 9);
  uVar26 = (ulonglong)(param_2 & 0x1ff);
  uVar21 = (ulonglong)(param_3 >> 9);
  uVar18 = (ulonglong)(param_3 & 0x1ff);
  if ((char)param_1[0x16] == '\x01') {
    lVar16 = *(longlong *)(param_1[0x14] + uVar21 * 8);
    unaff_XMM14_Da = *(float *)(lVar16 + uVar18 * 8);
    unaff_XMM13_Da = *(float *)(lVar16 + 4 + uVar18 * 8);
  }
  local_188 = (ulonglong)*(uint *)(param_6 + 1);
  local_178 = (ulonglong)*(uint *)((longlong)param_6 + 0xc);
  if ((char)param_1[0xe] == '\x01') {
    lVar16 = *(longlong *)(param_1[0xc] + uVar21 * 8);
    local_16c = *(float *)(lVar16 + uVar18 * 0xc);
    local_168 = *(float *)(lVar16 + 4 + uVar18 * 0xc);
    unaff_XMM12_Da = *(float *)(lVar16 + 8 + uVar18 * 0xc);
  }
  lVar16 = *(longlong *)(param_1[2] + uVar20 * 8);
  local_1b0 = uVar26 * 3;
  lVar23 = *(longlong *)(param_1[2] + uVar21 * 8);
  if ((char)param_1[0x12] == '\x01') {
    lVar10 = *(longlong *)(param_1[0x10] + uVar21 * 8);
    local_164 = *(float *)(lVar10 + uVar18 * 0xc);
    local_160 = *(float *)(lVar10 + 4 + uVar18 * 0xc);
    local_15c = *(float *)(lVar10 + 8 + uVar18 * 0xc);
  }
  local_1d4 = *(uint *)(param_6 + 3);
  local_17c = *(uint *)((longlong)param_6 + 0x1c);
  local_170 = *(undefined4 *)((longlong)param_6 + 0x14);
  local_1a8 = CONCAT71(local_1a8._1_7_,*(undefined1 *)(param_6 + 2));
  local_1cc = *(int *)(param_6 + 4);
  local_1b4 = *(int *)((longlong)param_6 + 0x24);
  local_1d0 = *(uint *)(param_6 + 5);
  dVar4 = *(double *)(lVar16 + uVar26 * 0x18);
  dVar5 = *(double *)(lVar16 + 8 + uVar26 * 0x18);
  dVar6 = *(double *)(lVar16 + 0x10 + uVar26 * 0x18);
  dVar7 = *(double *)(lVar23 + uVar18 * 0x18);
  dVar8 = *(double *)(lVar23 + 8 + uVar18 * 0x18);
  dVar9 = *(double *)(lVar23 + 0x10 + uVar18 * 0x18);
  plVar22 = param_1 + 0x17;
  FUN_146be983e(&local_128,plVar22,param_3,0);
  local_1c8 = plVar22;
  local_1c0 = uVar20;
  local_148 = uVar26;
  if ((((local_128 == plVar22) && ((uint)uStack_120 == param_3)) && ((int)local_110 == -1)) &&
     (local_110._4_4_ == -1)) {
    local_190 = 0xffffffff;
    uVar21 = 0xffffffff;
  }
  else {
    local_198 = 0xffffffff;
    local_190 = 0xffffffff;
    do {
      uVar21 = (ulonglong)local_108;
      plVar22 = (longlong *)(ulonglong)(local_108 >> 9);
      lVar16 = *(longlong *)(param_1[0x38] + (longlong)plVar22 * 8);
      uVar24 = local_108 & 0x1ff;
      uVar25 = uVar24 << 4;
      uVar15 = *(undefined8 *)(lVar16 + (ulonglong)uVar25);
      uVar17 = (uint)((ulonglong)uVar15 >> 0x20);
      uVar28 = (uint)uVar15;
      uVar14 = 0xffffffff;
      if (uVar17 == param_3) {
        uVar14 = uVar28;
      }
      if (uVar28 == param_3) {
        uVar14 = uVar17;
      }
      if (uVar14 == param_2) {
        cVar12 = FUN_146c86f00(local_1c8,param_2,uVar21);
        uVar14 = local_1d4;
        if (cVar12 != '\0') goto LAB_146c0edf2;
LAB_146c0f538:
        uVar15 = 1000;
        goto LAB_146c0eb40;
      }
      local_1a0 = plVar22;
      if (uVar14 == (uint)local_188) {
        cVar12 = FUN_146c86f00(local_1c8,local_188,uVar21);
        if (cVar12 != '\0') {
          uVar21 = *(ulonglong *)
                    (*(longlong *)(param_1[0x38] + (longlong)local_1a0 * 8) + 8 +
                    (ulonglong)(uVar24 << 4));
          uVar17 = (uint)(uVar21 >> 0x20);
          local_190 = 0xffffffff;
          if (local_1d4 == uVar17) {
            local_190 = uVar21 & 0xffffffff;
          }
          plVar22 = local_1a0;
          uVar14 = local_1d4;
          if (local_1d4 == (uint)uVar21) {
            local_190 = (ulonglong)uVar17;
          }
          goto LAB_146c0edf2;
        }
        goto LAB_146c0f538;
      }
      if (uVar14 != (uint)local_178) {
        if ((*param_5 == '\x01') && (*(int *)(lVar16 + 0xc + (ulonglong)(uVar24 << 4)) == -1)) {
          local_158 = uVar21;
          local_150 = (ulonglong)uVar24;
          local_140 = lVar16;
          uVar13 = FUN_146c061e0(param_1,uVar14,param_2);
          uVar21 = local_158;
          uVar24 = (uint)local_150;
          lVar16 = local_140;
          if (uVar13 != 0xffffffff) {
            uVar18 = *(ulonglong *)(local_140 + 8 + (ulonglong)(uVar24 << 4));
            uVar17 = (uint)uVar18;
            lVar16 = (ulonglong)((uVar17 & 0x1ff) * 0xc) +
                     *(longlong *)(param_1[0x30] + (uVar18 >> 9 & 0x7fffff) * 8);
            lVar23 = 0;
            while (*(int *)(lVar16 + lVar23 * 4) != (int)local_158) {
              lVar23 = lVar23 + 1;
              if (lVar23 == 3) goto LAB_146c0f538;
            }
            *(uint *)(lVar16 + lVar23 * 4) = uVar13;
            lVar16 = (ulonglong)((uVar13 & 0x1ff) << 4) +
                     *(longlong *)(param_1[0x38] + (ulonglong)(uVar13 >> 9) * 8);
            puVar19 = (uint *)(lVar16 + 8);
            if (*puVar19 == 0xffffffff) {
              if (uVar17 == 0xffffffff) {
                *puVar19 = *(uint *)(lVar16 + 0xc);
                *(undefined4 *)(lVar16 + 0xc) = 0xffffffff;
              }
              else {
                *puVar19 = uVar17;
              }
            }
            else {
              if (*(uint *)(lVar16 + 0xc) != 0xffffffff) goto LAB_146c0f538;
              *(uint *)(lVar16 + 0xc) = uVar17;
            }
            FUN_146c86f00(local_1c8,uVar14,local_158 & 0xffffffff);
            FUN_146c09a68(param_1 + 0x3a,uVar21 & 0xffffffff,1);
            uVar24 = (uint)local_150;
            plVar22 = local_1a0;
            uVar14 = local_1d4;
            goto LAB_146c0edf2;
          }
        }
        uVar14 = local_1d4;
        if (uVar28 == param_3 || uVar17 == param_3) {
          puVar19 = (uint *)(lVar16 + (ulonglong)uVar25);
          if (uVar28 != param_3) {
            uVar17 = uVar28;
          }
          uVar25 = param_2;
          if ((int)uVar17 < (int)param_2) {
            uVar25 = uVar17;
          }
          *puVar19 = uVar25;
          if ((int)uVar17 < (int)param_2) {
            uVar17 = param_2;
          }
          puVar19[1] = uVar17;
          FUN_146c86bd4(local_1c8,param_2,uVar21 & 0xffffffff);
          plVar22 = local_1a0;
          goto LAB_146c0edf2;
        }
        goto LAB_146c0f538;
      }
      cVar12 = FUN_146c86f00(local_1c8,local_178,uVar21);
      if (cVar12 == '\0') goto LAB_146c0f538;
      uVar21 = *(ulonglong *)
                (*(longlong *)(param_1[0x38] + (longlong)local_1a0 * 8) + 8 +
                (ulonglong)(uVar24 << 4));
      uVar17 = (uint)(uVar21 >> 0x20);
      local_198 = 0xffffffff;
      if (local_17c == uVar17) {
        local_198 = uVar21 & 0xffffffff;
      }
      plVar22 = local_1a0;
      uVar14 = local_1d4;
      if (local_17c == (uint)uVar21) {
        local_198 = (ulonglong)uVar17;
      }
LAB_146c0edf2:
      uVar17 = local_17c;
      puVar2 = (undefined8 *)
               (*(longlong *)(param_1[0x38] + (longlong)plVar22 * 8) + (ulonglong)(uVar24 << 4));
      local_138 = *puVar2;
      uStack_130 = puVar2[1];
      lVar16 = 0;
      bVar11 = true;
      do {
        bVar27 = bVar11;
        uVar24 = *(uint *)((longlong)&uStack_130 + lVar16 * 4);
        if ((uVar24 != uVar17 && (uVar24 != uVar14 && uVar24 != 0xffffffff)) &&
           (((puVar19 = (uint *)(*(longlong *)(param_1[0x26] + (ulonglong)(uVar24 >> 9) * 8) +
                                (ulonglong)(uVar24 & 0x1ff) * 0xc), *puVar19 == param_3 ||
             (puVar19[1] == param_3)) || (puVar19[2] == param_3)))) {
          local_fc[0] = 0;
          local_fc[1] = 1;
          local_fc[2] = 2;
          lVar16 = 0;
          while (puVar19[*(int *)((longlong)local_fc + lVar16)] != param_3) {
            lVar16 = lVar16 + 4;
            if (lVar16 == 0xc) goto LAB_146c0f538;
          }
          puVar19[*(int *)((longlong)local_fc + lVar16)] = param_2;
          psVar3 = (short *)(*(longlong *)(param_1[5] + local_1c0 * 8) + local_148 * 2);
          *psVar3 = *psVar3 + 1;
          FUN_146c09a68(param_1 + 4,param_3,1);
        }
        lVar16 = 1;
        bVar11 = false;
      } while (bVar27);
      if (local_118._0_4_ == 0) {
        uStack_120 = (double)CONCAT44(0xffffffff,(uint)uStack_120);
        local_110 = 0xffffffffffffffff;
        local_110._4_4_ = -1;
        local_110._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_128);
      }
    } while ((((local_128 != local_1c8) || ((uint)uStack_120 != param_3)) || ((int)local_110 != -1))
            || (uVar21 = local_198, local_110._4_4_ != -1));
  }
  FUN_146c8b31e(local_1c8,param_3);
  plVar22 = param_1 + 4;
  plVar1 = param_1 + 0x28;
  if ((char)local_1a8 == '\0') {
    local_198 = uVar21;
    FUN_146c09a68(plVar22,param_3,3);
    FUN_146c09a68(plVar1,local_1d4,1);
    uVar17 = local_17c;
    FUN_146c09a68(plVar1,local_17c,1);
    FUN_146c09a68(plVar22,local_188,1);
    uVar21 = local_178;
    FUN_146c09a68(plVar22,local_178 & 0xffffffff,1);
    local_1a0 = plVar22;
    FUN_146c09a68(plVar22,param_2,2);
    plVar22 = param_1 + 0x3a;
    FUN_146c09a68(plVar22,local_1b4,1);
    FUN_146c09a68(plVar22,local_170,1);
    FUN_146c09a68(plVar22,local_1cc,1);
    uVar24 = FUN_146c085f4(param_1,param_2,uVar21 & 0xffffffff,uVar17);
    uVar21 = (ulonglong)uVar24;
    uVar14 = local_1d0;
    if (local_1d0 == 0xffffffff) {
      uVar14 = FUN_146c085f4(param_1,param_2,local_188,local_1d4);
    }
    lVar16 = (ulonglong)((uVar24 & 0x1ff) << 4) +
             *(longlong *)(param_1[0x38] + (ulonglong)(uVar24 >> 9) * 8);
    puVar19 = (uint *)(lVar16 + 8);
    uVar25 = (uint)local_198;
    local_1a8 = uVar21;
    if (*puVar19 == uVar17) {
      if (uVar25 == 0xffffffff) {
        *puVar19 = *(uint *)(lVar16 + 0xc);
        *(undefined4 *)(lVar16 + 0xc) = 0xffffffff;
      }
      else {
        *puVar19 = uVar25;
      }
    }
    else {
      uVar15 = 1000;
      if (*(uint *)(lVar16 + 0xc) != uVar17) goto LAB_146c0eb40;
      *(uint *)(lVar16 + 0xc) = uVar25;
    }
    lVar16 = (ulonglong)((uVar14 & 0x1ff) << 4) +
             *(longlong *)(param_1[0x38] + (ulonglong)(uVar14 >> 9) * 8);
    puVar19 = (uint *)(lVar16 + 8);
    uVar17 = (uint)local_190;
    if (*puVar19 == local_1d4) {
      if (uVar17 == 0xffffffff) {
        *puVar19 = *(uint *)(lVar16 + 0xc);
        *(undefined4 *)(lVar16 + 0xc) = 0xffffffff;
      }
      else {
        *puVar19 = uVar17;
      }
    }
    else {
      uVar15 = 1000;
      if (*(uint *)(lVar16 + 0xc) != local_1d4) goto LAB_146c0eb40;
      *(uint *)(lVar16 + 0xc) = uVar17;
    }
    if (uVar25 != 0xffffffff) {
      lVar16 = (ulonglong)((uVar25 & 0x1ff) * 0xc) +
               *(longlong *)(param_1[0x30] + (local_198 >> 9 & 0x7fffff) * 8);
      lVar23 = 0;
      uVar15 = 1000;
      do {
        if (*(int *)(lVar16 + lVar23 * 4) == local_1b4) {
          *(uint *)(lVar16 + lVar23 * 4) = uVar24;
          goto LAB_146c0f44f;
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 != 3);
      goto LAB_146c0eb40;
    }
LAB_146c0f44f:
    if (uVar17 != 0xffffffff) {
      lVar16 = (ulonglong)((uVar17 & 0x1ff) * 0xc) +
               *(longlong *)(param_1[0x30] + (local_190 >> 9 & 0x7fffff) * 8);
      lVar23 = 0;
      uVar15 = 1000;
      do {
        if (*(int *)(lVar16 + lVar23 * 4) == local_1cc) {
          *(uint *)(lVar16 + lVar23 * 4) = uVar14;
          goto LAB_146c0f8c5;
        }
        lVar23 = lVar23 + 1;
      } while (lVar23 != 3);
      goto LAB_146c0eb40;
    }
LAB_146c0f8c5:
    local_1d0 = uVar14;
    if (param_5[1] == '\x01') {
      if (*(int *)(*(longlong *)(param_1[0x38] + (ulonglong)(uVar14 >> 9) * 8) + 8 +
                  (ulonglong)((uVar14 & 0x1ff) << 4)) == -1) {
        FUN_146c86f00(local_1c8,param_2,uVar14);
        FUN_146c09a68(plVar22,uVar14,1);
        uVar21 = local_188;
        if (*(short *)(*(longlong *)(param_1[5] + (local_188 >> 9 & 0x7fffff) * 8) +
                      (ulonglong)((uint)local_188 & 0x1ff) * 2) == 1) {
          FUN_146c8b31e(local_1c8,local_188 & 0xffffffff);
          FUN_146c09a68(local_1a0,uVar21 & 0xffffffff,1);
        }
        else {
          FUN_146c86f00(local_1c8,local_188,local_1d0);
        }
      }
      uVar21 = local_1a8;
      plVar1 = local_1c8;
      if (*(int *)(*(longlong *)(param_1[0x38] + (ulonglong)(uVar24 >> 9) * 8) + 8 +
                  (ulonglong)((uVar24 & 0x1ff) << 4)) == -1) {
        FUN_146c86f00(local_1c8,param_2,local_1a8 & 0xffffffff);
        uVar18 = local_178;
        uVar17 = (uint)local_178;
        FUN_146c86f00(plVar1,local_178 & 0xffffffff,uVar21 & 0xffffffff);
        FUN_146c09a68(plVar22,uVar21 & 0xffffffff,1);
        uVar20 = local_178;
        uVar21 = local_1a8;
        if (*(short *)(*(longlong *)(param_1[5] + (uVar18 >> 9 & 0x7fffff) * 8) +
                      (ulonglong)(uVar17 & 0x1ff) * 2) == 1) {
          FUN_146c8b31e(local_1c8,local_178 & 0xffffffff);
          FUN_146c09a68(local_1a0,uVar20 & 0xffffffff,1);
          uVar21 = local_1a8;
        }
        else {
          FUN_146c86f00(local_1c8,local_178,local_1a8 & 0xffffffff);
        }
      }
    }
  }
  else {
    FUN_146c09a68(plVar22,param_3,2);
    uVar17 = local_1d4;
    FUN_146c09a68(plVar1,local_1d4,1);
    uVar21 = local_188;
    FUN_146c09a68(plVar22,local_188 & 0xffffffff,1);
    FUN_146c09a68(plVar22,param_2,1);
    FUN_146c09a68(param_1 + 0x3a,local_170,1);
    FUN_146c09a68(param_1 + 0x3a,local_1cc,1);
    uVar14 = FUN_146c085f4(param_1,param_2,uVar21 & 0xffffffff,uVar17);
    lVar16 = (ulonglong)((uVar14 & 0x1ff) << 4) +
             *(longlong *)(param_1[0x38] + (ulonglong)(uVar14 >> 9) * 8);
    puVar19 = (uint *)(lVar16 + 8);
    uVar24 = (uint)local_190;
    if (*puVar19 == uVar17) {
      if (uVar24 != 0xffffffff) {
        *puVar19 = uVar24;
LAB_146c0f388:
        lVar16 = (ulonglong)((uVar24 & 0x1ff) * 0xc) +
                 *(longlong *)(param_1[0x30] + (local_190 >> 9 & 0x7fffff) * 8);
        lVar23 = 0;
        uVar15 = 1000;
        do {
          if (*(int *)(lVar16 + lVar23 * 4) == local_1cc) {
            *(uint *)(lVar16 + lVar23 * 4) = uVar14;
            goto LAB_146c0f589;
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 != 3);
        goto LAB_146c0eb40;
      }
      *puVar19 = *(uint *)(lVar16 + 0xc);
      *(undefined4 *)(lVar16 + 0xc) = 0xffffffff;
    }
    else {
      uVar15 = 1000;
      if (*(uint *)(lVar16 + 0xc) != uVar17) goto LAB_146c0eb40;
      *(uint *)(lVar16 + 0xc) = uVar24;
      if (uVar24 != 0xffffffff) goto LAB_146c0f388;
    }
LAB_146c0f589:
    uVar21 = 0xffffffff;
    local_1d0 = uVar14;
  }
  lVar16 = local_1b0;
  uVar18 = local_1c0;
  dVar30 = 1.0 - param_4;
  local_118 = dVar6 * dVar30 + dVar9 * param_4;
  uStack_120 = dVar5 * dVar30 + dVar8 * param_4;
  local_128 = (longlong *)(dVar30 * dVar4 + dVar7 * param_4);
  cVar12 = FUN_146bfed03();
  if (cVar12 != '\0') {
    lVar23 = *(longlong *)(param_1[2] + uVar18 * 8);
    *(double *)(lVar23 + 0x10 + lVar16 * 8) = local_118;
    puVar2 = (undefined8 *)(lVar23 + lVar16 * 8);
    *puVar2 = local_128;
    puVar2[1] = uStack_120;
    if ((char)param_1[0x42] == '\x01') {
      LOCK();
      *(int *)((longlong)param_1 + 0x214) = *(int *)((longlong)param_1 + 0x214) + 1;
      UNLOCK();
    }
  }
  fVar29 = (float)param_4;
  if ((char)param_1[0x16] == '\x01') {
    lVar23 = *(longlong *)(param_1[0x14] + uVar18 * 8);
    *(float *)(lVar23 + local_148 * 8) =
         *(float *)(lVar23 + local_148 * 8) * (1.0 - fVar29) + unaff_XMM14_Da * fVar29;
    *(float *)(lVar23 + 4 + local_148 * 8) =
         (1.0 - fVar29) * *(float *)(lVar23 + 4 + local_148 * 8) + unaff_XMM13_Da * fVar29;
  }
  if ((char)param_1[0xe] == '\x01') {
    fVar31 = 1.0 - fVar29;
    lVar23 = *(longlong *)(param_1[0xc] + uVar18 * 8);
    fVar33 = *(float *)(lVar23 + 8 + lVar16 * 4) * fVar31 + unaff_XMM12_Da * fVar29;
    fVar34 = *(float *)(lVar23 + lVar16 * 4) * fVar31 + local_16c * fVar29;
    fVar31 = fVar31 * *(float *)(lVar23 + 4 + lVar16 * 4) + local_168 * fVar29;
    fVar35 = SQRT(fVar33 * fVar33 + fVar34 * fVar34 + fVar31 * fVar31);
    fVar32 = 1.0 / fVar35;
    if (0.0 < fVar35) {
      fVar34 = fVar34 * fVar32;
      fVar31 = fVar31 * fVar32;
    }
    else {
      fVar34 = 0.0;
      fVar31 = 0.0;
    }
    *(float *)(lVar23 + local_1b0 * 4) = fVar34;
    *(float *)(lVar23 + 4 + local_1b0 * 4) = fVar31;
    *(uint *)(lVar23 + 8 + local_1b0 * 4) = -(uint)(0.0 < fVar35) & (uint)(fVar33 * fVar32);
    uVar18 = local_1c0;
    lVar16 = local_1b0;
  }
  if ((char)param_1[0x12] == '\x01') {
    fVar34 = 1.0 - fVar29;
    lVar23 = *(longlong *)(param_1[0x10] + uVar18 * 8);
    *(float *)(lVar23 + lVar16 * 4) = *(float *)(lVar23 + lVar16 * 4) * fVar34 + local_164 * fVar29;
    *(float *)(lVar23 + 4 + lVar16 * 4) =
         *(float *)(lVar23 + 4 + lVar16 * 4) * fVar34 + local_160 * fVar29;
    *(float *)(lVar23 + 8 + lVar16 * 4) =
         fVar34 * *(float *)(lVar23 + 8 + lVar16 * 4) + local_15c * fVar29;
  }
  param_6[5] = (ulonglong)local_1d0 | uVar21 << 0x20;
  plVar22 = (longlong *)param_1[0x41];
  if (plVar22 != (longlong *)0x0) {
    (**(code **)(*plVar22 + 0x48))(plVar22,param_6);
  }
  if ((char)param_1[0x42] == '\x01') {
    LOCK();
    *(int *)((longlong)param_1 + 0x214) = *(int *)((longlong)param_1 + 0x214) + 1;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x43) = (int)param_1[0x43] + 1;
  UNLOCK();
  uVar15 = 0;
LAB_146c0eb40:
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c0fa54 FUN_146c0fa54 body=36 status=ok
// SIG undefined FUN_146c0fa54(void)

void FUN_146c0fa54(longlong *param_1)

{
  (**(code **)(*param_1 + 0x90))();
  return;
}



// FUNCTION 146c0fa78 FUN_146c0fa78 body=5946 status=ok
// SIG undefined FUN_146c0fa78(void)

undefined8
FUN_146c0fa78(code *param_1,ulonglong param_2,ulonglong param_3,double param_4,uint *param_5,
             char param_6)

{
  short *psVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int iVar19;
  undefined8 uVar20;
  longlong lVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  int iVar28;
  uint uVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  short sVar32;
  uint uVar33;
  int iVar34;
  longlong lVar35;
  ulonglong uVar36;
  int iVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  uint uVar44;
  uint uVar45;
  code *pcVar46;
  bool bVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auStack_308 [40];
  uint local_2e0;
  uint local_2dc;
  double local_2d8;
  code *local_2d0;
  ulonglong local_2c8;
  undefined4 local_2bc;
  ulonglong local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  ulonglong local_2a0;
  ulonglong local_298;
  ulonglong local_290;
  ulonglong local_288;
  ulonglong local_280;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  uint *local_258;
  uint *local_250;
  uint *local_248;
  code *local_240;
  uint *local_238;
  undefined4 local_22c;
  code *local_228;
  double local_220;
  int local_210;
  int local_20c;
  longlong local_1f8;
  longlong *local_1e8;
  longlong local_1d8 [4];
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  undefined4 local_190;
  code *local_188;
  longlong *local_178;
  longlong local_168 [4];
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138 [2];
  longlong *local_128;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  param_5[0] = 0;
  param_5[1] = 0;
  param_5[2] = 0xffffffff;
  param_5[3] = 0xffffffff;
  param_5[4] = 0xffffffff;
  param_5[5] = 0xffffffff;
  param_5[6] = 0xffffffff;
  param_5[7] = 0xffffffff;
  param_5[8] = 0xffffffff;
  param_5[9] = 0xffffffff;
  param_5[10] = 0;
  param_5[0xb] = 0;
  param_5[0xc] = 0;
  param_5[0xd] = 0;
  if (*(longlong *)(param_5 + 0xe) != 0) {
    FUN_1400020a8();
  }
  param_5[0xe] = 0;
  param_5[0xf] = 0;
  param_5[0x10] = 0;
  param_5[0x11] = 4;
  param_5[0x12] = 0;
  param_5[0x13] = 0;
  param_5[0x14] = 0;
  param_5[0x15] = 0;
  if (*(longlong *)(param_5 + 0x16) != 0) {
    FUN_1400020a8();
  }
  param_5[0x16] = 0;
  param_5[0x17] = 0;
  param_5[0x18] = 0;
  param_5[0x19] = 4;
  *(double *)(param_5 + 0x1a) = param_4;
  uVar20 = 3;
  uVar41 = (uint)param_2;
  if ((((-1 < (int)uVar41) &&
       (uVar23 = *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4),
       (int)uVar41 < (int)uVar23)) && (uVar44 = (uint)param_3, uVar44 < uVar23)) &&
     (-1 < (int)uVar44)) {
    uVar42 = param_2 >> 9 & 0x7fffff;
    uVar36 = (ulonglong)(uVar41 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar42 * 8) + uVar36 * 2)
                - 1U) < 0xfffe) {
      uVar31 = param_3 >> 9 & 0x7fffff;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar31 * 8) +
                             (ulonglong)(uVar44 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar42 * 8);
        uVar43 = (ulonglong)((uVar41 & 0x1ff) << 4);
        uVar20 = 0x1b;
        if (*(int *)(lVar21 + 0xc + uVar43) == -1) {
          lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar31 * 8);
          uVar31 = (ulonglong)((uVar44 & 0x1ff) << 4);
          if (*(int *)(lVar26 + 0xc + uVar31) == -1) {
            local_248 = param_5 + 6;
            local_238 = param_5 + 8;
            local_250 = param_5 + 10;
            local_258 = param_5 + 0x12;
            uVar23 = *(uint *)(lVar21 + uVar43);
            uVar29 = *(uint *)(lVar21 + 4 + uVar43);
            uVar40 = *(uint *)(lVar21 + 8 + uVar43);
            local_268 = (ulonglong)uVar40;
            uVar9 = *(uint *)(lVar26 + uVar31);
            uVar10 = *(uint *)(lVar26 + 4 + uVar31);
            uVar45 = *(uint *)(lVar26 + 8 + uVar31);
            local_260 = (ulonglong)uVar45;
            lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar40 >> 9) * 8);
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,
                                  *(undefined4 *)(lVar21 + 8 + (ulonglong)(uVar40 & 0x1ff) * 0xc));
            local_240 = param_1 + 0x1d0;
            local_1b8 = *(code **)(lVar21 + (ulonglong)(uVar40 & 0x1ff) * 0xc);
            lVar21 = 0;
            do {
              lVar35 = lVar21 + 1;
              lVar26 = 0;
              if (lVar21 != 2) {
                lVar26 = lVar35;
              }
              uVar11 = *(uint *)((longlong)&local_1b8 + lVar26 * 4);
              uVar40 = *(uint *)((longlong)&local_1b8 + lVar21 * 4);
              local_2e0 = uVar29;
              uVar33 = uVar23;
              if (((uVar23 == uVar40) ||
                  (bVar47 = uVar23 == uVar11, local_2e0 = uVar23, uVar33 = uVar29, uVar11 = uVar40,
                  bVar47)) && (uVar29 == uVar11)) {
                uVar31 = 2;
                if (lVar21 != 0) {
                  uVar31 = (ulonglong)((int)lVar21 - 1);
                }
                iVar34 = *(int *)((longlong)&local_1b8 + uVar31 * 4);
                goto LAB_146c0fd5d;
              }
              lVar21 = lVar35;
            } while (lVar35 != 3);
            iVar34 = -1;
            uVar33 = uVar23;
            local_2e0 = uVar29;
LAB_146c0fd5d:
            local_2a0 = (ulonglong)(uVar45 >> 9);
            lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_2a0 * 8);
            uVar31 = (ulonglong)(uVar45 & 0x1ff);
            local_270 = uVar31 * 3;
            uStack_1b0 = CONCAT44(uStack_1b0._4_4_,*(undefined4 *)(lVar21 + 8 + uVar31 * 0xc));
            local_1b8 = *(code **)(lVar21 + uVar31 * 0xc);
            lVar21 = 0;
            do {
              lVar35 = lVar21 + 1;
              lVar26 = 0;
              if (lVar21 != 2) {
                lVar26 = lVar35;
              }
              uVar29 = *(uint *)((longlong)&local_1b8 + lVar26 * 4);
              uVar23 = *(uint *)((longlong)&local_1b8 + lVar21 * 4);
              uVar40 = uVar10;
              uVar45 = uVar9;
              if (((uVar9 == uVar23) ||
                  (bVar47 = uVar9 == uVar29, uVar40 = uVar9, uVar45 = uVar10, uVar29 = uVar23,
                  bVar47)) && (uVar10 == uVar29)) {
                uVar31 = 2;
                if (lVar21 != 0) {
                  uVar31 = (ulonglong)((int)lVar21 - 1);
                }
                iVar24 = *(int *)((longlong)&local_1b8 + uVar31 * 4);
                goto LAB_146c0fe0c;
              }
              lVar21 = lVar35;
            } while (lVar35 != 3);
            iVar24 = -1;
            uVar45 = uVar9;
            uVar40 = uVar10;
LAB_146c0fe0c:
            local_278 = uVar42;
            if (iVar34 != iVar24) {
              uVar42 = (ulonglong)(uVar33 >> 9);
              uVar31 = (ulonglong)(uVar33 & 0x1ff);
              uVar43 = (ulonglong)(local_2e0 >> 9);
              uVar38 = (ulonglong)(local_2e0 & 0x1ff);
              local_2dc = uVar33;
              if (param_6 != '\0') {
                lVar21 = *(longlong *)(param_1 + 0x10);
                lVar26 = *(longlong *)(lVar21 + (ulonglong)(uVar45 >> 9) * 8);
                uVar25 = (ulonglong)(uVar45 & 0x1ff);
                dVar2 = *(double *)(lVar26 + 0x10 + uVar25 * 0x18);
                dVar3 = *(double *)(lVar26 + uVar25 * 0x18);
                dVar4 = *(double *)(lVar26 + 8 + uVar25 * 0x18);
                lVar26 = *(longlong *)(lVar21 + (ulonglong)(uVar40 >> 9) * 8);
                uVar25 = (ulonglong)(uVar40 & 0x1ff);
                dVar5 = *(double *)(lVar26 + 0x10 + uVar25 * 0x18);
                local_2d8 = *(double *)(lVar26 + uVar25 * 0x18);
                dVar6 = *(double *)(lVar26 + 8 + uVar25 * 0x18);
                lVar26 = *(longlong *)(lVar21 + uVar43 * 8);
                dVar48 = *(double *)(lVar26 + 0x10 + uVar38 * 0x18);
                dVar51 = *(double *)(lVar26 + uVar38 * 0x18);
                dVar52 = *(double *)(lVar26 + 8 + uVar38 * 0x18);
                lVar21 = *(longlong *)(lVar21 + uVar42 * 8);
                dVar50 = *(double *)(lVar21 + 0x10 + uVar31 * 0x18);
                dVar7 = *(double *)(lVar21 + uVar31 * 0x18);
                dVar8 = *(double *)(lVar21 + 8 + uVar31 * 0x18);
                dVar16 = dVar50 - dVar5;
                dVar14 = dVar8 - dVar6;
                dVar17 = dVar7 - local_2d8;
                dVar15 = dVar48 - dVar2;
                dVar18 = dVar52 - dVar4;
                dVar49 = dVar51 - dVar3;
                dVar50 = dVar50 - dVar2;
                dVar8 = dVar8 - dVar4;
                dVar7 = dVar7 - dVar3;
                dVar48 = dVar48 - dVar5;
                dVar52 = dVar52 - dVar6;
                dVar51 = dVar51 - local_2d8;
                uVar20 = 0x1c;
                if (dVar48 * dVar48 + dVar51 * dVar51 + dVar52 * dVar52 +
                    dVar50 * dVar50 + dVar7 * dVar7 + dVar8 * dVar8 <
                    dVar15 * dVar15 + dVar49 * dVar49 + dVar18 * dVar18 +
                    dVar16 * dVar16 + dVar17 * dVar17 + dVar14 * dVar14) goto LAB_146c0fe19;
              }
              *param_5 = uVar41;
              param_5[1] = uVar44;
              local_2d8 = (double)CONCAT44(local_2d8._4_4_,uVar40);
              local_280 = uVar31;
              if (uVar33 == uVar40) {
                if (local_2e0 == uVar45) {
                  local_2a4 = 0;
                  local_2bc = 0;
                  local_228 = param_1;
                  local_220 = param_4;
                  FUN_146c86f00(param_1 + 0xb8,uVar33,param_3 & 0xffffffff);
                  param_5[4] = 0xffffffff;
                  param_5[2] = uVar33;
LAB_146c100af:
                  uVar23 = local_2e0;
                  iVar24 = (int)uVar36;
                  FUN_146c86f00(param_1 + 0xb8,local_2e0,param_3 & 0xffffffff);
                  iVar34 = (int)local_278;
                  uVar29 = 0xffffffff;
LAB_146c100d1:
                  param_5[5] = uVar29;
                  param_5[3] = uVar23;
                  lVar26 = (ulonglong)(uint)((int)local_270 << 2) +
                           *(longlong *)(*(longlong *)(param_1 + 0x180) + local_2a0 * 8);
                  lVar21 = 0;
                  do {
                    if (*(uint *)(lVar26 + lVar21 * 4) == uVar44) {
                      *(uint *)(lVar26 + lVar21 * 4) = uVar41;
                      break;
                    }
                    lVar21 = lVar21 + 1;
                  } while (lVar21 != 3);
                  FUN_146c09a68(local_240,param_3 & 0xffffffff,1);
                  uVar41 = iVar34 << 3;
                  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar41) + 8 +
                          (ulonglong)(uint)(iVar24 << 4)) = (int)local_268;
                  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar41) + 0xc +
                          (ulonglong)(uint)(iVar24 << 4)) = (int)local_260;
                  *local_248 = 0xffffffff;
                  local_248[1] = 0xffffffff;
                  local_248[2] = 0xffffffff;
                  local_248[3] = 0xffffffff;
                  puVar30 = &local_2a4;
                  uVar42 = CONCAT71((uint7)(uint3)(uVar41 >> 8),1);
                  bVar47 = false;
                  uVar36 = 0;
                  uVar41 = local_2e0;
                  uVar23 = local_2d8._0_4_;
                  uVar44 = local_2dc;
                  do {
                    uVar40 = uVar44;
                    uVar29 = uVar23;
                    if (bVar47) {
                      uVar40 = uVar41;
                      uVar29 = uVar45;
                    }
                    if (uVar40 != uVar29) {
                      local_1b8 = (code *)0x0;
                      uStack_1b0 = 0;
                      local_2c8 = uVar36;
                      FUN_146c111b4(param_1,uVar40,&local_1b8);
                      uVar36 = (ulonglong)(int)(uint)uStack_1b0;
                      if (0 < (longlong)uVar36) {
                        local_260 = CONCAT44(local_260._4_4_,*puVar30);
                        uVar43 = 0;
                        uVar31 = 1;
                        iVar34 = 0;
                        local_298 = CONCAT44(local_298._4_4_,(int)uVar42);
                        local_2d0 = (code *)CONCAT44(local_2d0._4_4_,uVar40);
                        local_270 = uVar36;
LAB_146c1063a:
                        if (iVar34 < (int)local_260) {
                          uVar41 = *(uint *)(local_1b8 + uVar43 * 4);
                          local_278 = (ulonglong)uVar41;
                          uVar38 = (ulonglong)(uVar41 >> 9);
                          uVar23 = uVar41 & 0x1ff;
                          uVar25 = (ulonglong)uVar23;
                          if ((ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(param_1 + 0x1d8) + uVar38 * 8) +
                                                 uVar25 * 2) - 1U) < 0xfffe) {
                            uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0x1c0) + uVar38 * 8);
                            if (*(int *)(uVar13 + 0xc + (ulonglong)(uVar23 << 4)) == -1) {
                              local_2a0 = CONCAT44(local_2a0._4_4_,iVar34);
                              uVar20 = *(undefined8 *)(uVar13 + (uVar23 << 4));
                              iVar19 = (int)((ulonglong)uVar20 >> 0x20);
                              iVar28 = (int)uVar20;
                              iVar24 = -1;
                              if ((int)local_2d0 == iVar19) {
                                iVar24 = iVar28;
                              }
                              if ((int)local_2d0 == iVar28) {
                                iVar24 = iVar19;
                              }
                              local_268 = CONCAT44(local_268._4_4_,iVar24);
                              uVar39 = uVar31;
                              local_288 = uVar38;
                              local_280 = uVar13;
                              if (uVar43 + 1 < uVar36) {
                                do {
                                  uVar44 = *(uint *)(local_1b8 + uVar39 * 4);
                                  uVar29 = uVar44 & 0x1ff;
                                  local_2b8 = uVar25;
                                  local_290 = uVar31;
                                  if (((ushort)(*(short *)(*(longlong *)
                                                            (*(longlong *)(param_1 + 0x1d8) +
                                                            (ulonglong)(uVar44 >> 9) * 8) +
                                                          (ulonglong)uVar29 * 2) - 1U) < 0xfffe) &&
                                     (lVar21 = *(longlong *)
                                                (*(longlong *)(param_1 + 0x1c0) +
                                                (ulonglong)(uVar44 >> 9) * 8),
                                     *(int *)(lVar21 + 0xc + (ulonglong)(uVar29 << 4)) == -1)) {
                                    uVar20 = *(undefined8 *)(lVar21 + (ulonglong)(uVar29 << 4));
                                    iVar37 = (int)((ulonglong)uVar20 >> 0x20);
                                    iVar19 = (int)uVar20;
                                    iVar28 = -1;
                                    if ((int)local_2d0 == iVar37) {
                                      iVar28 = iVar19;
                                    }
                                    if ((int)local_2d0 == iVar19) {
                                      iVar28 = iVar37;
                                    }
                                    uVar36 = local_270;
                                    if (iVar24 == iVar28) {
                                      uVar12 = *(undefined4 *)
                                                (uVar13 + 8 + (ulonglong)(uVar23 << 4));
                                      uVar29 = *(uint *)(lVar21 + 8 + (ulonglong)(uVar29 << 4));
                                      lVar21 = (ulonglong)((uVar29 & 0x1ff) * 0xc) +
                                               *(longlong *)
                                                (*(longlong *)(param_1 + 0x180) +
                                                (ulonglong)(uVar29 >> 9) * 8);
                                      lVar26 = 0;
                                      goto LAB_146c106b6;
                                    }
                                  }
                                  uVar39 = uVar39 + 1;
                                } while (uVar36 != uVar39);
                                uVar42 = local_298 & 0xffffffff;
                              }
                            }
                          }
                          goto LAB_146c106a6;
                        }
                      }
LAB_146c107c3:
                      if (local_1b8 != (code *)0x0) {
                        FUN_1400020a8();
                      }
                      uVar41 = local_2e0;
                      uVar23 = local_2d8._0_4_;
                      uVar44 = local_2dc;
                    }
                    puVar30 = &local_2bc;
                    uVar36 = 1;
                    bVar47 = true;
                    uVar31 = uVar42 & 1;
                    uVar42 = 0;
                  } while (uVar31 != 0);
                  plVar27 = *(longlong **)(param_1 + 0x208);
                  if (plVar27 != (longlong *)0x0) {
                    (**(code **)(*plVar27 + 0x58))(plVar27,param_5);
                  }
                  if (param_1[0x210] == (code)0x1) {
                    LOCK();
                    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
                    UNLOCK();
                  }
                  LOCK();
                  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
                  UNLOCK();
                  uVar20 = 0;
                  goto LAB_146c0fe19;
                }
                local_298 = uVar42;
                local_290 = uVar38;
                local_288 = uVar43;
                iVar34 = FUN_146c061e0(param_1,local_2e0,uVar45);
                uVar20 = 0x17;
                if (iVar34 != -1) goto LAB_146c0fe19;
                local_2c8 = CONCAT44(local_2c8._4_4_,uVar45);
                local_2a4 = 0;
                local_2d0 = (code *)CONCAT44(local_2d0._4_4_,local_2dc);
                local_2b8 = uVar36;
LAB_146c10367:
                local_1a8 = 0;
                local_198 = &PTR_LAB_149f3b7b0;
                local_190 = (uint)local_2c8;
                local_1b8 = (code *)&LAB_146c413d0;
                local_188 = param_1;
                FUN_146c41260(param_1 + 0xb8,&local_148);
                FUN_146c41458(local_148,&local_1b8,local_140,local_138);
                FUN_146c41662(local_148,&local_228,local_140);
                local_2b0 = (code *)((ulonglong)local_2b0 & 0xffffffff00000000);
LAB_146c103ff:
                pcVar46 = local_188;
                if (local_1b8 == local_228) {
                  if ((((uint)uStack_1b0 != local_220._0_4_) || ((int)local_1a0 != local_210)) ||
                     (local_1a0._4_4_ != local_20c)) goto LAB_146c10411;
                  local_2bc = (int)local_2b0;
                  if (local_1f8 != 0) {
                    if (local_1e8 == (longlong *)0x0) {
                      local_1e8 = local_1d8;
                    }
                    (**(code **)(*local_1e8 + 0x10))();
                  }
                  if (local_188 != (code *)0x0) {
                    plVar27 = local_168;
                    if (local_178 != (longlong *)0x0) {
                      plVar27 = local_178;
                    }
                    (**(code **)(*plVar27 + 0x10))(plVar27);
                  }
                  if (local_138[0] != 0) {
                    if (local_128 == (longlong *)0x0) {
                      local_128 = local_118;
                    }
                    (**(code **)(*local_128 + 0x10))();
                  }
                  local_2a8 = 0;
LAB_146c10afa:
                  uVar23 = local_2dc;
                  if (local_2dc == local_2d8._0_4_) {
                    local_228 = param_1;
                    local_220 = param_4;
                    FUN_146c86f00(param_1 + 0xb8,local_2dc,param_3 & 0xffffffff);
                    param_5[4] = 0xffffffff;
                    param_5[2] = uVar23;
                  }
                  else {
                    if ((param_4 != 0.0) || (local_228 = param_1, local_220 = param_4, NAN(param_4))
                       ) {
                      local_228 = param_1;
                      local_220 = param_4;
                      FUN_142972492(&local_228,local_2dc,(ulonglong)local_2d8 & 0xffffffff);
                    }
                    pcVar46 = param_1 + 0xb8;
                    uVar23 = local_2d8._0_4_;
                    FUN_146be983e(&local_1b8,pcVar46,(ulonglong)local_2d8 & 0xffffffff);
                    local_2d0 = pcVar46;
                    if ((((local_1b8 != pcVar46) || ((uint)uStack_1b0 != uVar23)) ||
                        ((int)local_1a0 != -1)) || (local_1a0._4_4_ != -1)) {
                      local_2b0 = param_1 + 0x20;
                      do {
                        if ((uint)local_198 != uVar44) {
                          lVar21 = *(longlong *)
                                    (*(longlong *)(param_1 + 0x1c0) +
                                    (ulonglong)((uint)local_198 >> 9) * 8);
                          uVar36 = (ulonglong)(((uint)local_198 & 0x1ff) << 4);
                          uVar23 = *(uint *)(lVar21 + 4 + uVar36);
                          if ((*(uint *)(lVar21 + uVar36) == local_2d8._0_4_) ||
                             (bVar47 = uVar23 == local_2d8._0_4_,
                             uVar23 = *(uint *)(lVar21 + uVar36), bVar47)) {
                            uVar29 = uVar23;
                            uVar40 = local_2dc;
                            if ((int)uVar23 < (int)local_2dc) {
                              uVar29 = local_2dc;
                              uVar40 = uVar23;
                            }
                            *(uint *)(lVar21 + uVar36) = uVar40;
                            ((uint *)(lVar21 + uVar36))[1] = uVar29;
                            lVar21 = *(longlong *)
                                      (*(longlong *)(param_1 + 0x1c0) +
                                      (ulonglong)((uint)local_198 >> 9) * 8);
                          }
                          uVar36 = (ulonglong)(((uint)local_198 & 0x1ff) << 4);
                          uVar23 = *(uint *)(lVar21 + 8 + uVar36);
                          lVar26 = (ulonglong)((uVar23 & 0x1ff) * 0xc) +
                                   *(longlong *)
                                    (*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar23 >> 9) * 8);
                          uVar23 = *(uint *)(lVar21 + 0xc + uVar36);
                          local_148 = 0x100000000;
                          local_140 = 2;
                          lVar21 = 0;
                          do {
                            uVar29 = *(uint *)(lVar26 + (longlong)
                                                        *(int *)((longlong)&local_148 + lVar21) * 4)
                            ;
                            if (uVar29 == local_2d8._0_4_) {
                              *(uint *)(lVar26 + (longlong)*(int *)((longlong)&local_148 + lVar21) *
                                                 4) = local_2dc;
                              break;
                            }
                            lVar21 = lVar21 + 4;
                          } while (lVar21 != 0xc);
                          if (uVar23 != 0xffffffff) {
                            lVar21 = (ulonglong)((uVar23 & 0x1ff) * 0xc) +
                                     *(longlong *)
                                      (*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar23 >> 9) * 8
                                      );
                            local_148 = 0x100000000;
                            local_140 = 2;
                            lVar26 = 0;
                            do {
                              if (*(uint *)(lVar21 + (longlong)
                                                     *(int *)((longlong)&local_148 + lVar26) * 4) ==
                                  local_2d8._0_4_) {
                                *(uint *)(lVar21 + (longlong)*(int *)((longlong)&local_148 + lVar26)
                                                   * 4) = local_2dc;
                                pcVar46 = (code *)(ulonglong)((uVar29 == local_2d8._0_4_) + 1);
                                FUN_146c86bd4(local_2d0);
                                goto LAB_146c10f06;
                              }
                              lVar26 = lVar26 + 4;
                            } while (lVar26 != 0xc);
                          }
                          local_140 = 2;
                          local_148 = 0x100000000;
                          FUN_146c86bd4(local_2d0,local_2dc);
                          if (uVar29 == local_2d8._0_4_) {
                            pcVar46 = (code *)CONCAT62((int6)((ulonglong)pcVar46 >> 0x10),1);
LAB_146c10f06:
                            psVar1 = (short *)(*(longlong *)
                                                (*(longlong *)(param_1 + 0x28) + local_298 * 8) +
                                              local_280 * 2);
                            *psVar1 = *psVar1 + (short)pcVar46;
                            FUN_146c09a68(local_2b0,(ulonglong)local_2d8 & 0xffffffff,
                                          (ulonglong)pcVar46 & 0xffffffff);
                          }
                        }
                        if ((int)local_1a8 == 0) {
                          uStack_1b0 = CONCAT44(0xffffffff,(uint)uStack_1b0);
                          local_1a0 = 0xffffffffffffffff;
                          local_1a0._4_4_ = -1;
                          local_1a0._0_4_ = -1;
                        }
                        else {
                          FUN_146be9922(&local_1b8);
                        }
                      } while (((local_1b8 != local_2d0) || ((uint)uStack_1b0 != local_2d8._0_4_))
                              || (((int)local_1a0 != -1 ||
                                  (uVar23 = local_2d8._0_4_, local_1a0._4_4_ != -1))));
                    }
                    FUN_146c8b31e(local_2d0,uVar23);
                    FUN_146c09a68(param_1 + 0x20,uVar23,1);
                    param_5[4] = uVar23;
                    param_5[2] = local_2dc;
                  }
                  uVar42 = local_2c8;
                  uVar45 = (uint)local_2c8;
                  uVar36 = local_2b8;
                  if ((char)local_2a8 != '\0') goto LAB_146c100af;
                  if ((param_4 != 0.0) || (NAN(param_4))) {
                    FUN_142972492(&local_228,local_2e0,local_2c8 & 0xffffffff);
                  }
                  pcVar46 = param_1 + 0xb8;
                  FUN_146be983e(&local_1b8,pcVar46,uVar42 & 0xffffffff);
                  if ((((local_1b8 != pcVar46) || ((uint)uStack_1b0 != uVar45)) ||
                      ((int)local_1a0 != -1)) || (local_1a0._4_4_ != -1)) {
                    local_2d0 = param_1 + 0x20;
                    do {
                      if ((uint)local_198 != uVar44) {
                        lVar21 = *(longlong *)
                                  (*(longlong *)(param_1 + 0x1c0) +
                                  (ulonglong)((uint)local_198 >> 9) * 8);
                        uVar36 = (ulonglong)(((uint)local_198 & 0x1ff) << 4);
                        uVar23 = *(uint *)(lVar21 + 4 + uVar36);
                        if ((*(uint *)(lVar21 + uVar36) == uVar45) ||
                           (bVar47 = uVar23 == uVar45, uVar23 = *(uint *)(lVar21 + uVar36), bVar47))
                        {
                          uVar29 = uVar23;
                          uVar40 = local_2e0;
                          if ((int)uVar23 < (int)local_2e0) {
                            uVar29 = local_2e0;
                            uVar40 = uVar23;
                          }
                          *(uint *)(lVar21 + uVar36) = uVar40;
                          ((uint *)(lVar21 + uVar36))[1] = uVar29;
                          lVar21 = *(longlong *)
                                    (*(longlong *)(param_1 + 0x1c0) +
                                    (ulonglong)((uint)local_198 >> 9) * 8);
                        }
                        uVar36 = (ulonglong)(((uint)local_198 & 0x1ff) << 4);
                        uVar23 = *(uint *)(lVar21 + 8 + uVar36);
                        lVar26 = (ulonglong)((uVar23 & 0x1ff) * 0xc) +
                                 *(longlong *)
                                  (*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar23 >> 9) * 8);
                        uVar23 = *(uint *)(lVar21 + 0xc + uVar36);
                        local_148 = 0x100000000;
                        local_140 = 2;
                        lVar21 = 0;
                        do {
                          uVar29 = *(uint *)(lVar26 + (longlong)
                                                      *(int *)((longlong)&local_148 + lVar21) * 4);
                          if (uVar29 == uVar45) {
                            *(uint *)(lVar26 + (longlong)*(int *)((longlong)&local_148 + lVar21) * 4
                                     ) = local_2e0;
                            break;
                          }
                          lVar21 = lVar21 + 4;
                        } while (lVar21 != 0xc);
                        if (uVar23 != 0xffffffff) {
                          lVar21 = (ulonglong)((uVar23 & 0x1ff) * 0xc) +
                                   *(longlong *)
                                    (*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar23 >> 9) * 8);
                          local_148 = 0x100000000;
                          local_140 = 2;
                          lVar26 = 0;
                          do {
                            if (*(uint *)(lVar21 + (longlong)*(int *)((longlong)&local_148 + lVar26)
                                                   * 4) == uVar45) {
                              *(uint *)(lVar21 + (longlong)*(int *)((longlong)&local_148 + lVar26) *
                                                 4) = local_2e0;
                              sVar32 = (uVar29 == uVar45) + 1;
                              FUN_146c86bd4(pcVar46);
                              goto LAB_146c11138;
                            }
                            lVar26 = lVar26 + 4;
                          } while (lVar26 != 0xc);
                        }
                        local_140 = 2;
                        local_148 = 0x100000000;
                        FUN_146c86bd4(pcVar46,local_2e0);
                        if (uVar29 == uVar45) {
                          sVar32 = 1;
LAB_146c11138:
                          psVar1 = (short *)(*(longlong *)
                                              (*(longlong *)(param_1 + 0x28) + local_288 * 8) +
                                            local_290 * 2);
                          *psVar1 = *psVar1 + sVar32;
                          FUN_146c09a68(local_2d0,uVar42 & 0xffffffff);
                        }
                      }
                      if ((int)local_1a8 == 0) {
                        uStack_1b0 = CONCAT44(0xffffffff,(uint)uStack_1b0);
                        local_1a0 = 0xffffffffffffffff;
                        local_1a0._4_4_ = -1;
                        local_1a0._0_4_ = -1;
                      }
                      else {
                        FUN_146be9922(&local_1b8);
                      }
                    } while (((local_1b8 != pcVar46) || ((uint)uStack_1b0 != uVar45)) ||
                            (((int)local_1a0 != -1 || (local_1a0._4_4_ != -1))));
                  }
                  FUN_146c8b31e(pcVar46,uVar42 & 0xffffffff);
                  FUN_146c09a68(param_1 + 0x20,uVar42 & 0xffffffff,1);
                  iVar34 = (int)local_278;
                  iVar24 = (int)local_2b8;
                  uVar23 = local_2e0;
                  uVar29 = uVar45;
                  goto LAB_146c100d1;
                }
LAB_146c10411:
                local_22c = (uint)local_198;
                plVar27 = local_178;
                if (local_178 == (longlong *)0x0) {
                  plVar27 = local_168;
                }
                uVar20 = (**(code **)(*plVar27 + 8))();
                iVar34 = (*pcVar46)(uVar20,&local_22c);
                if ((iVar34 == (int)local_2d0) ||
                   (uVar23 = FUN_146c061e0(param_1,local_2e0,iVar34), uVar23 == 0xffffffff)) {
LAB_146c1044b:
                  if ((int)local_1a8 == 0) {
                    uStack_1b0 = CONCAT44(0xffffffff,(uint)uStack_1b0);
                    local_1a0 = 0xffffffffffffffff;
                  }
                  else {
                    FUN_146be9922(&local_1b8);
                  }
                  goto LAB_146c103ff;
                }
                lVar21 = *(longlong *)(param_1 + 0x1c0);
                if ((*(int *)(*(longlong *)(lVar21 + (ulonglong)(uVar23 >> 9) * 8) + 0xc +
                             (ulonglong)((uVar23 & 0x1ff) << 4)) == -1) &&
                   (uVar23 = FUN_146c061e0(param_1,local_2c8 & 0xffffffff,iVar34),
                   *(int *)(*(longlong *)(lVar21 + (ulonglong)(uVar23 >> 9) * 8) + 0xc +
                           (ulonglong)((uVar23 & 0x1ff) << 4)) == -1)) {
                  local_2b0 = (code *)CONCAT44(local_2b0._4_4_,(int)local_2b0 + 1);
                  goto LAB_146c1044b;
                }
LAB_146c1081f:
                if (local_1f8 != 0) {
                  if (local_1e8 == (longlong *)0x0) {
                    local_1e8 = local_1d8;
                  }
                  (**(code **)(*local_1e8 + 0x10))();
                }
                if (local_188 != (code *)0x0) {
                  plVar27 = local_168;
                  if (local_178 != (longlong *)0x0) {
                    plVar27 = local_178;
                  }
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
                if (local_138[0] != 0) {
                  if (local_128 == (longlong *)0x0) {
                    local_128 = local_118;
                  }
                  (**(code **)(*local_128 + 0x10))();
                }
              }
              else {
                local_298 = uVar42;
                local_290 = uVar38;
                local_288 = uVar43;
                iVar34 = FUN_146c061e0(param_1,uVar33,uVar40);
                if (iVar34 == -1) {
                  local_2c8 = CONCAT44(local_2c8._4_4_,uVar45);
                  if (local_2e0 == uVar45) {
                    local_2d0 = (code *)CONCAT44(local_2d0._4_4_,local_2e0);
                    local_2b8 = uVar36;
LAB_146c1014d:
                    local_2bc = 0;
                    local_1a8 = 0;
                    local_198 = &PTR_LAB_149f3b7b0;
                    local_190 = local_2d8._0_4_;
                    local_1b8 = (code *)&LAB_146c413d0;
                    local_188 = param_1;
                    FUN_146c41260(param_1 + 0xb8,&local_148);
                    FUN_146c41458(local_148,&local_1b8,local_140,local_138);
                    FUN_146c41662(local_148,&local_228,local_140);
                    local_2b0 = (code *)((ulonglong)local_2b0._4_4_ << 0x20);
                    do {
                      pcVar46 = local_188;
                      if (local_1b8 == local_228) {
                        if ((((uint)uStack_1b0 == local_220._0_4_) && ((int)local_1a0 == local_210))
                           && (local_1a0._4_4_ == local_20c)) {
                          uVar36 = (ulonglong)local_2b0 & 0xffffffff;
                          local_2a4 = (int)local_2b0;
                          if (local_1f8 != 0) {
                            plVar27 = local_1e8;
                            if (local_1e8 == (longlong *)0x0) {
                              plVar27 = local_1d8;
                            }
                            uVar36 = (**(code **)(*plVar27 + 0x10))();
                          }
                          if (local_188 != (code *)0x0) {
                            plVar27 = local_168;
                            if (local_178 != (longlong *)0x0) {
                              plVar27 = local_178;
                            }
                            uVar36 = (**(code **)(*plVar27 + 0x10))(plVar27);
                          }
                          if (local_138[0] != 0) {
                            plVar27 = local_128;
                            if (local_128 == (longlong *)0x0) {
                              plVar27 = local_118;
                            }
                            uVar36 = (**(code **)(*plVar27 + 0x10))();
                          }
                          local_2d0 = (code *)CONCAT44(local_2d0._4_4_,0xffffffff);
                          local_2a8 = (undefined4)CONCAT71((int7)(uVar36 >> 8),1);
                          if (local_2e0 == (uint)local_2c8) goto LAB_146c10afa;
                          goto LAB_146c10367;
                        }
                      }
                      local_22c = (uint)local_198;
                      plVar27 = local_178;
                      if (local_178 == (longlong *)0x0) {
                        plVar27 = local_168;
                      }
                      uVar20 = (**(code **)(*plVar27 + 8))();
                      iVar34 = (*pcVar46)(uVar20,&local_22c);
                      if ((iVar34 != (int)local_2d0) &&
                         (uVar23 = FUN_146c061e0(param_1,local_2dc,iVar34), uVar23 != 0xffffffff)) {
                        lVar21 = *(longlong *)(param_1 + 0x1c0);
                        if ((*(int *)(*(longlong *)(lVar21 + (ulonglong)(uVar23 >> 9) * 8) + 0xc +
                                     (ulonglong)((uVar23 & 0x1ff) << 4)) != -1) ||
                           (uVar23 = FUN_146c061e0(param_1,(ulonglong)local_2d8 & 0xffffffff,iVar34)
                           , *(int *)(*(longlong *)(lVar21 + (ulonglong)(uVar23 >> 9) * 8) + 0xc +
                                     (ulonglong)((uVar23 & 0x1ff) << 4)) != -1)) goto LAB_146c1081f;
                        local_2b0 = (code *)CONCAT44(local_2b0._4_4_,(int)local_2b0 + 1);
                      }
                      if ((int)local_1a8 == 0) {
                        uStack_1b0 = CONCAT44(0xffffffff,(uint)uStack_1b0);
                        local_1a0 = 0xffffffffffffffff;
                      }
                      else {
                        FUN_146be9922(&local_1b8);
                      }
                    } while( true );
                  }
                  local_2b8 = uVar36;
                  iVar34 = FUN_146c061e0(param_1,local_2e0,uVar45);
                  if ((iVar34 == -1) &&
                     (iVar34 = FUN_146c061e0(param_1,local_2dc,local_2c8 & 0xffffffff), iVar34 == -1
                     )) {
                    iVar34 = FUN_146c061e0(param_1,local_2e0,(ulonglong)local_2d8 & 0xffffffff);
                    uVar20 = 0x17;
                    if (iVar34 != -1) goto LAB_146c0fe19;
                    local_2d0 = (code *)CONCAT44(local_2d0._4_4_,0xffffffff);
                    goto LAB_146c1014d;
                  }
                }
              }
            }
            uVar20 = 0x17;
          }
        }
      }
    }
  }
LAB_146c0fe19:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20;
  while (lVar26 = lVar26 + 1, lVar26 != 3) {
LAB_146c106b6:
    if (*(uint *)(lVar21 + lVar26 * 4) == uVar44) {
      *(uint *)(lVar21 + lVar26 * 4) = uVar41;
      local_280 = *(ulonglong *)(*(longlong *)(param_1 + 0x1c0) + uVar38 * 8);
      break;
    }
  }
  *(undefined4 *)(local_280 + 8 + (ulonglong)(uVar23 << 4)) = uVar12;
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar38 * 8) + 0xc +
           (ulonglong)(uVar23 << 4)) = uVar29;
  FUN_146c86f00(param_1 + 0xb8,(ulonglong)local_2d0 & 0xffffffff,uVar44);
  FUN_146c86f00(param_1 + 0xb8,local_268 & 0xffffffff,uVar44);
  FUN_146c09a68(local_240,uVar44,1);
  if ((int)local_2a0 == 0) {
    puVar22 = local_238 + local_2c8;
    local_248[local_2c8] = uVar44;
  }
  else {
    uVar41 = param_5[0x10];
    param_5[0x10] = uVar41 + 1;
    if (param_5[0x11] < uVar41 + 1) {
      FUN_1400c4ccc(local_250,uVar41);
    }
    puVar22 = *(uint **)(param_5 + 0xe);
    if (*(uint **)(param_5 + 0xe) == (uint *)0x0) {
      puVar22 = local_250;
    }
    puVar22[(int)uVar41] = uVar44;
    uVar41 = param_5[0x18];
    param_5[0x18] = uVar41 + 1;
    if (param_5[0x19] < uVar41 + 1) {
      FUN_1400c4ccc(local_258,uVar41);
    }
    puVar22 = *(uint **)(param_5 + 0x16);
    if (*(uint **)(param_5 + 0x16) == (uint *)0x0) {
      puVar22 = local_258;
    }
    puVar22 = puVar22 + (int)uVar41;
  }
  *puVar22 = (uint)local_278;
  iVar34 = (int)local_2a0 + 1;
  uVar42 = local_298 & 0xffffffff;
  uVar36 = local_270;
  uVar31 = local_290;
LAB_146c106a6:
  uVar43 = uVar43 + 1;
  uVar31 = uVar31 + 1;
  if (uVar43 == uVar36) goto LAB_146c107c3;
  goto LAB_146c1063a;
}



// FUNCTION 146c111b4 FUN_146c111b4 body=240 status=ok
// SIG undefined FUN_146c111b4(void)

void FUN_146c111b4(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + 0xb8;
  FUN_146be983e(&local_58,param_1,param_2,0);
  if (local_58 != param_1) goto LAB_146c11224;
  if (local_50 != param_2) goto LAB_146c11224;
  if ((int)local_40 != -1) goto LAB_146c11224;
  iVar1 = local_40._4_4_;
  while (iVar1 != -1) {
LAB_146c11224:
    do {
      uVar2 = local_38;
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_3,iVar1);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar2;
      if (local_48 == 0) {
        local_4c = 0xffffffff;
        local_40 = 0xffffffffffffffff;
        local_40._4_4_ = -1;
        local_40._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_58);
      }
    } while (((local_58 != param_1) || (local_50 != param_2)) ||
            (iVar1 = local_40._4_4_, (int)local_40 != -1));
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c112a6 FUN_146c112a6 body=2518 status=ok
// SIG undefined FUN_146c112a6(void)

undefined4
FUN_146c112a6(longlong *param_1,uint param_2,uint param_3,double param_4,char *param_5,uint *param_6
             )

{
  undefined8 *puVar1;
  short *psVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong **pplVar18;
  bool bVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1b8 [32];
  longlong **local_198;
  uint *local_190;
  longlong *local_188;
  uint local_17c;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  longlong *local_150;
  uint local_148;
  undefined4 local_144;
  int local_140;
  undefined8 local_138;
  uint local_130;
  longlong *local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 local_110;
  uint local_108;
  longlong local_a0;
  longlong local_80;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  memset(&local_128,0,200);
  FUN_146c11c7e(param_6,&local_128);
  if (local_68 == '\x01') {
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
  }
  *(double *)(param_6 + 2) = param_4;
  *param_6 = param_2;
  param_6[1] = param_3;
  uVar9 = 1;
  if ((((-1 < (int)param_2) &&
       (uVar7 = (int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24),
       (int)param_2 < (int)uVar7)) && (param_3 < uVar7)) && (-1 < (int)param_3)) {
    if ((ushort)(*(short *)(*(longlong *)(param_1[5] + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar17 = (ulonglong)(param_3 >> 9);
      uVar12 = (ulonglong)(param_3 & 0x1ff);
      if (((ushort)(*(short *)(*(longlong *)(param_1[5] + uVar17 * 8) + uVar12 * 2) - 1U) < 0xfffe)
         && (uVar9 = 0x1f, param_2 != param_3)) {
        local_178 = (ulonglong)(param_2 >> 9);
        local_170 = (ulonglong)(param_2 & 0x1ff);
        iVar8 = FUN_146c061e0(param_1,param_2,param_3);
        if (iVar8 == -1) {
          plVar4 = param_1 + 0x17;
          FUN_146be983e(&local_128,plVar4,param_2,0);
          local_188 = plVar4;
          if (local_128 != plVar4) goto LAB_146c114ca;
          if ((uint)uStack_120 != param_2) goto LAB_146c114ca;
          if ((int)local_110 != -1) goto LAB_146c114ca;
          iVar8 = local_110._4_4_;
          while (iVar8 != -1) {
LAB_146c114ca:
            do {
              plVar4 = local_188;
              local_168 = (ulonglong)local_108;
              local_160 = (ulonglong)(local_108 >> 9);
              local_158 = (ulonglong)(local_108 & 0x1ff);
              uVar3 = *(undefined8 *)
                       (*(longlong *)(param_1[0x38] + local_160 * 8) +
                       (ulonglong)((local_108 & 0x1ff) << 4));
              uVar13 = (uint)((ulonglong)uVar3 >> 0x20);
              uVar10 = (uint)uVar3;
              uVar7 = 0xffffffff;
              if (uVar13 == param_2) {
                uVar7 = uVar10;
              }
              if (uVar10 == param_2) {
                uVar7 = uVar13;
              }
              FUN_146be983e(&local_150,local_188,param_3,0);
              local_17c = local_148;
              plVar11 = local_150;
              if (local_150 != plVar4) goto LAB_146c1155b;
              if (local_148 != param_3) goto LAB_146c1155b;
              if ((int)local_138 != -1) goto LAB_146c1155b;
              iVar8 = local_138._4_4_;
              while (iVar8 != -1) {
LAB_146c1155b:
                do {
                  lVar14 = *(longlong *)(param_1[0x38] + (ulonglong)(local_130 >> 9) * 8);
                  uVar3 = *(undefined8 *)(lVar14 + (ulonglong)((local_130 & 0x1ff) << 4));
                  uVar16 = (uint)((ulonglong)uVar3 >> 0x20);
                  uVar13 = (uint)uVar3;
                  uVar10 = 0xffffffff;
                  if (uVar16 == param_3) {
                    uVar10 = uVar13;
                  }
                  if (uVar13 == param_3) {
                    uVar10 = uVar16;
                  }
                  if (uVar10 == uVar7) {
                    uVar9 = 0x17;
                    if ((*(int *)(*(longlong *)(param_1[0x38] + local_160 * 8) + 0xc +
                                 (ulonglong)(uint)((int)local_158 << 4)) == -1) &&
                       (*(int *)(lVar14 + 0xc + (ulonglong)((local_130 & 0x1ff) << 4)) == -1)) {
                      FUN_146c11cf4(param_6 + 0x14);
                      local_190 = (uint *)((ulonglong)local_190 & 0xffffffffffffff00);
                      local_198 = (longlong **)(param_6 + 0x14);
                      uVar9 = (**(code **)(*param_1 + 0x90))(param_1,local_168,local_130,param_4);
                    }
                    goto LAB_146c113b1;
                  }
                  if (local_140 == 0) {
                    local_144 = 0xffffffff;
                    local_138 = 0xffffffffffffffff;
                    local_138._4_4_ = -1;
                    local_138._0_4_ = -1;
                  }
                  else {
                    FUN_146be9922(&local_150);
                    local_17c = local_148;
                    plVar11 = local_150;
                  }
                } while (((plVar11 != local_188) || (local_17c != param_3)) ||
                        (iVar8 = local_138._4_4_, (int)local_138 != -1));
              }
              if (local_118._0_4_ == 0) {
                uStack_120 = (double)CONCAT44(0xffffffff,(uint)uStack_120);
                local_110 = 0xffffffffffffffff;
                local_110._4_4_ = -1;
                local_110._0_4_ = -1;
              }
              else {
                FUN_146be9922(&local_128);
              }
            } while (((local_128 != local_188) || ((uint)uStack_120 != param_2)) ||
                    (iVar8 = local_110._4_4_, (int)local_110 != -1));
          }
          if (*param_5 == '\0') {
            cVar6 = FUN_146c0b51e(param_1,param_2);
            uVar9 = 0x1e;
            if ((cVar6 == '\0') || (cVar6 = FUN_146c0b51e(param_1,param_3), cVar6 == '\0'))
            goto LAB_146c113b1;
          }
          uVar5 = local_170;
          if ((param_4 != 0.0) || (NAN(param_4))) {
            lVar14 = *(longlong *)(param_1[2] + uVar17 * 8);
            lVar15 = *(longlong *)(param_1[2] + local_178 * 8);
            dVar21 = 1.0 - param_4;
            local_118 = *(double *)(lVar15 + 0x10 + local_170 * 0x18) * dVar21 +
                        *(double *)(lVar14 + 0x10 + uVar12 * 0x18) * param_4;
            uStack_120 = *(double *)(lVar15 + 8 + local_170 * 0x18) * dVar21 +
                         *(double *)(lVar14 + 8 + uVar12 * 0x18) * param_4;
            local_128 = (longlong *)
                        (dVar21 * *(double *)(lVar15 + local_170 * 0x18) +
                        *(double *)(lVar14 + uVar12 * 0x18) * param_4);
            cVar6 = FUN_146bfed03();
            if (cVar6 != '\0') {
              lVar14 = *(longlong *)(param_1[2] + local_178 * 8);
              *(double *)(lVar14 + 0x10 + uVar5 * 0x18) = local_118;
              puVar1 = (undefined8 *)(lVar14 + uVar5 * 0x18);
              *puVar1 = local_128;
              puVar1[1] = uStack_120;
              if ((char)param_1[0x42] == '\x01') {
                LOCK();
                *(int *)((longlong)param_1 + 0x214) = *(int *)((longlong)param_1 + 0x214) + 1;
                UNLOCK();
              }
            }
            fVar20 = (float)param_4;
            if ((char)param_1[0x16] == '\x01') {
              lVar14 = *(longlong *)(param_1[0x14] + uVar17 * 8);
              lVar15 = *(longlong *)(param_1[0x14] + local_178 * 8);
              fVar24 = *(float *)(lVar14 + 4 + uVar12 * 8);
              *(float *)(lVar15 + local_170 * 8) =
                   *(float *)(lVar15 + local_170 * 8) * (1.0 - fVar20) +
                   *(float *)(lVar14 + uVar12 * 8) * fVar20;
              *(float *)(lVar15 + 4 + local_170 * 8) =
                   (1.0 - fVar20) * *(float *)(lVar15 + 4 + local_170 * 8) + fVar24 * fVar20;
            }
            if ((char)param_1[0xe] == '\x01') {
              fVar22 = 1.0 - fVar20;
              lVar14 = *(longlong *)(param_1[0xc] + local_178 * 8);
              lVar15 = *(longlong *)(param_1[0xc] + uVar17 * 8);
              fVar24 = *(float *)(lVar14 + 8 + uVar5 * 0xc) * fVar22 +
                       *(float *)(lVar15 + 8 + uVar12 * 0xc) * fVar20;
              fVar25 = *(float *)(lVar14 + uVar5 * 0xc) * fVar22 +
                       *(float *)(lVar15 + uVar12 * 0xc) * fVar20;
              fVar22 = fVar22 * *(float *)(lVar14 + 4 + uVar5 * 0xc) +
                       *(float *)(lVar15 + 4 + uVar12 * 0xc) * fVar20;
              fVar26 = SQRT(fVar24 * fVar24 + fVar25 * fVar25 + fVar22 * fVar22);
              fVar23 = 1.0 / fVar26;
              if (0.0 < fVar26) {
                fVar24 = fVar24 * fVar23;
                fVar22 = fVar22 * fVar23;
              }
              else {
                fVar24 = 0.0;
                fVar22 = 0.0;
              }
              *(uint *)(lVar14 + uVar5 * 0xc) = -(uint)(0.0 < fVar26) & (uint)(fVar25 * fVar23);
              *(float *)(lVar14 + 4 + uVar5 * 0xc) = fVar22;
              *(float *)(lVar14 + 8 + uVar5 * 0xc) = fVar24;
            }
            if ((char)param_1[0x12] == '\x01') {
              lVar14 = *(longlong *)(param_1[0x10] + uVar17 * 8);
              lVar15 = *(longlong *)(param_1[0x10] + local_178 * 8);
              fVar23 = 1.0 - fVar20;
              fVar24 = *(float *)(lVar14 + 4 + uVar12 * 0xc);
              fVar22 = *(float *)(lVar14 + 8 + uVar12 * 0xc);
              *(float *)(lVar15 + uVar5 * 0xc) =
                   *(float *)(lVar15 + uVar5 * 0xc) * fVar23 +
                   *(float *)(lVar14 + uVar12 * 0xc) * fVar20;
              *(float *)(lVar15 + 4 + uVar5 * 0xc) =
                   *(float *)(lVar15 + 4 + uVar5 * 0xc) * fVar23 + fVar24 * fVar20;
              *(float *)(lVar15 + 8 + uVar5 * 0xc) =
                   fVar23 * *(float *)(lVar15 + 8 + uVar5 * 0xc) + fVar20 * fVar22;
            }
          }
          plVar4 = local_188;
          pplVar18 = &local_128;
          FUN_146be983e(pplVar18,local_188,param_3,0);
          if (local_128 != plVar4) goto LAB_146c11aac;
          if ((uint)uStack_120 != param_3) goto LAB_146c11aac;
          if ((int)local_110 != -1) goto LAB_146c11aac;
          iVar8 = local_110._4_4_;
          while (iVar8 != -1) {
LAB_146c11aac:
            do {
              lVar14 = *(longlong *)(param_1[0x38] + (ulonglong)(local_108 >> 9) * 8);
              uVar12 = (ulonglong)((local_108 & 0x1ff) << 4);
              uVar7 = *(uint *)(lVar14 + 4 + uVar12);
              if ((*(uint *)(lVar14 + uVar12) == param_3) ||
                 (bVar19 = uVar7 == param_3, uVar7 = *(uint *)(lVar14 + uVar12), bVar19)) {
                uVar10 = uVar7;
                uVar13 = param_2;
                if ((int)uVar7 < (int)param_2) {
                  uVar10 = param_2;
                  uVar13 = uVar7;
                }
                *(uint *)(lVar14 + uVar12) = uVar13;
                ((uint *)(lVar14 + uVar12))[1] = uVar10;
                lVar14 = *(longlong *)(param_1[0x38] + (ulonglong)(local_108 >> 9) * 8);
              }
              uVar12 = (ulonglong)((local_108 & 0x1ff) << 4);
              uVar7 = *(uint *)(lVar14 + 8 + uVar12);
              uVar10 = *(uint *)(lVar14 + 0xc + uVar12);
              lVar14 = (ulonglong)((uVar7 & 0x1ff) * 0xc) +
                       *(longlong *)(param_1[0x26] + (ulonglong)(uVar7 >> 9) * 8);
              local_150 = (longlong *)0x100000000;
              local_148 = 2;
              lVar15 = 0;
              do {
                uVar7 = *(uint *)(lVar14 + (longlong)*(int *)((longlong)&local_150 + lVar15) * 4);
                if (uVar7 == param_3) {
                  *(uint *)(lVar14 + (longlong)*(int *)((longlong)&local_150 + lVar15) * 4) =
                       param_2;
                  break;
                }
                lVar15 = lVar15 + 4;
              } while (lVar15 != 0xc);
              if (uVar10 != 0xffffffff) {
                lVar14 = (ulonglong)((uVar10 & 0x1ff) * 0xc) +
                         *(longlong *)(param_1[0x26] + (ulonglong)(uVar10 >> 9) * 8);
                local_150 = (longlong *)&DAT_100000000;
                local_148 = 2;
                lVar15 = 0;
                do {
                  if (*(uint *)(lVar14 + (longlong)*(int *)((longlong)&local_150 + lVar15) * 4) ==
                      param_3) {
                    *(uint *)(lVar14 + (longlong)*(int *)((longlong)&local_150 + lVar15) * 4) =
                         param_2;
                    pplVar18 = (longlong **)(ulonglong)((uVar7 == param_3) + 1);
                    FUN_146c86bd4(local_188,param_2);
                    goto LAB_146c11a65;
                  }
                  lVar15 = lVar15 + 4;
                } while (lVar15 != 0xc);
              }
              local_148 = 2;
              local_150 = (longlong *)&DAT_100000000;
              FUN_146c86bd4(local_188,param_2);
              if (uVar7 == param_3) {
                pplVar18 = (longlong **)CONCAT62((int6)((ulonglong)pplVar18 >> 0x10),1);
LAB_146c11a65:
                psVar2 = (short *)(*(longlong *)(param_1[5] + local_178 * 8) + local_170 * 2);
                *psVar2 = *psVar2 + (short)pplVar18;
                FUN_146c09a68(param_1 + 4,param_3,(ulonglong)pplVar18 & 0xffffffff);
              }
              if (local_118._0_4_ == 0) {
                uStack_120 = (double)CONCAT44(0xffffffff,(uint)uStack_120);
                local_110 = 0xffffffffffffffff;
                local_110._4_4_ = -1;
                local_110._0_4_ = -1;
              }
              else {
                pplVar18 = &local_128;
                FUN_146be9922(pplVar18);
              }
            } while (((local_128 != local_188) || ((uint)uStack_120 != param_3)) ||
                    (iVar8 = local_110._4_4_, (int)local_110 != -1));
          }
          FUN_146c8b31e(local_188,param_3);
          FUN_146c09a68(param_1 + 4,param_3,1);
          plVar4 = (longlong *)param_1[0x41];
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x60))(plVar4,param_6);
          }
          if ((char)param_1[0x42] == '\x01') {
            LOCK();
            *(int *)((longlong)param_1 + 0x214) = *(int *)((longlong)param_1 + 0x214) + 1;
            UNLOCK();
          }
          LOCK();
          *(int *)(param_1 + 0x43) = (int)param_1[0x43] + 1;
          UNLOCK();
          uVar9 = 0;
        }
        else {
          local_128 = (longlong *)CONCAT53(local_128._3_5_,0x10101);
          local_190 = param_6 + 4;
          *(undefined1 (*) [16])(param_6 + 4) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(param_6 + 0xc) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(param_6 + 8) = (undefined1  [16])0x0;
          param_6[0x10] = 0;
          param_6[0x11] = 0;
          param_6[6] = 0xffffffff;
          param_6[7] = 0xffffffff;
          param_6[10] = 0xffffffff;
          param_6[0xb] = 0xffffffff;
          param_6[0xc] = 0xffffffff;
          param_6[0xd] = 0xffffffff;
          param_6[0xe] = 0xffffffff;
          param_6[0xf] = 0xffffffff;
          *(undefined1 *)(param_6 + 0x12) = 1;
          local_198 = &local_128;
          uVar9 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_4);
        }
      }
    }
  }
LAB_146c113b1:
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c11c7e FUN_146c11c7e body=118 status=ok
// SIG undefined FUN_146c11c7e(void)

undefined4 * FUN_146c11c7e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
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
  undefined1 uVar12;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    uVar1 = param_2[4];
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    uVar5 = param_2[8];
    uVar6 = param_2[9];
    uVar7 = param_2[10];
    uVar8 = param_2[0xb];
    uVar9 = param_2[0xd];
    uVar10 = param_2[0xe];
    uVar11 = param_2[0xf];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar9;
    param_1[0xe] = uVar10;
    param_1[0xf] = uVar11;
    param_1[8] = uVar5;
    param_1[9] = uVar6;
    param_1[10] = uVar7;
    param_1[0xb] = uVar8;
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    uVar12 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x12) != '\x01') goto LAB_146c11ccb;
    uVar12 = 0;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar12;
LAB_146c11ccb:
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_146c41a54(param_1 + 0x14,param_2 + 0x14);
  }
  else {
    FUN_146c41a9c(param_1 + 0x14);
  }
  return param_1;
}



// FUNCTION 146c11cf4 FUN_146c11cf4 body=131 status=ok
// SIG undefined FUN_146c11cf4(void)

undefined1 (*) [16] FUN_146c11cf4(undefined1 (*param_1) [16])

{
  if (param_1[7][0] == '\x01') {
    if (*(longlong *)(param_1[5] + 8) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1[3] + 8) != 0) {
      FUN_1400020a8();
    }
  }
  param_1[1] = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  param_1[5] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  *(undefined4 *)(*param_1 + 8) = 0xffffffff;
  *(undefined4 *)(*param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1[1] + 4) = 0xffffffff;
  *(undefined4 *)(param_1[1] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[1] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[2] = 0xffffffff;
  *(undefined4 *)(param_1[2] + 4) = 0xffffffff;
  *(undefined4 *)(param_1[4] + 4) = 4;
  *(undefined8 *)param_1[6] = 0x400000000;
  *(undefined8 *)(param_1[6] + 8) = 0;
  param_1[7][0] = 1;
  return param_1;
}



// FUNCTION 146c11d78 FUN_146c11d78 body=1620 status=ok
// SIG undefined FUN_146c11d78(void)

undefined8
FUN_146c11d78(longlong param_1,uint param_2,undefined8 *param_3,undefined1 (*param_4) [16])

{
  short *psVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 in_XMM0 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 *local_f0;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  auVar12 = pmovsxbd(in_XMM0,0xffffff00);
  *param_4 = auVar12;
  *(undefined4 *)param_4[1] = 0;
  *(undefined4 *)(param_4[1] + 4) = 0xffffffff;
  *(undefined4 *)(param_4[1] + 8) = 0xffffffff;
  *(undefined4 *)(param_4[1] + 0xc) = 0xffffffff;
  *(undefined4 *)param_4[2] = 0xffffffff;
  *(undefined4 *)(param_4[2] + 4) = 0xffffffff;
  *(undefined1 (*) [16])(param_4[2] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(param_4[3] + 8) = 0;
  uVar5 = 2;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) {
    uVar10 = param_2 >> 9;
    uVar11 = param_2 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar10 * 8) +
                           (ulonglong)uVar11 * 2) - 1U) < 0xfffe) {
      local_c0 = param_1 + 0x140;
      local_b8 = (ulonglong)(uVar10 * 8);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_b8);
      lVar3 = (ulonglong)(uVar11 * 4) * 3;
      local_c4 = *(uint *)(lVar6 + lVar3);
      local_c8 = *(uint *)(lVar6 + 4 + lVar3);
      local_d8 = *(uint *)(lVar6 + 8 + lVar3);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x180) + local_b8);
      local_d4 = *(undefined4 *)(lVar6 + lVar3);
      local_b0 = (ulonglong)*(uint *)(lVar6 + 4 + lVar3);
      local_a8 = (ulonglong)*(uint *)(lVar6 + 8 + lVar3);
      local_88 = DAT_14c8464f0;
      local_98 = DAT_14c8464e0;
      uStack_90 = DAT_14c8464e8;
      local_80 = DAT_14c846330;
      local_78 = DAT_14c846338;
      local_6c = DAT_14c846338;
      local_74 = DAT_14c846330;
      local_68 = DAT_14c84635c;
      local_60 = 0;
      local_5e = 0;
      local_f8 = param_3[2];
      local_f0 = &local_98;
      FUN_146c123ce(param_1,param_2,*param_3,param_3[1]);
      uVar4 = FUN_146c02208(param_1,&local_98);
      local_f8._0_4_ = 0xffffffff;
      local_cc = uVar4;
      local_d0 = FUN_146c0d3ae(param_1,local_c4,uVar4,0xffffffff);
      local_f8._0_4_ = 0xffffffff;
      local_dc = FUN_146c0d3ae(param_1,local_c8,uVar4,0xffffffff);
      local_f8 = CONCAT44(local_f8._4_4_,0xffffffff);
      local_e0 = FUN_146c0d3ae(param_1,local_d8,uVar4,0xffffffff);
      psVar1 = (short *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x28) + (ulonglong)(local_c4 >> 9) * 8) +
                        (ulonglong)(local_c4 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x28) + (ulonglong)(local_c8 >> 9) * 8) +
                        (ulonglong)(local_c8 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x28) + (ulonglong)(local_d8 >> 9) * 8) +
                        (ulonglong)(local_d8 & 0x1ff) * 2);
      *psVar1 = *psVar1 + 1;
      psVar1 = (short *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x28) + (ulonglong)(local_cc >> 9) * 8) +
                        (ulonglong)(local_cc & 0x1ff) * 2);
      *psVar1 = *psVar1 + 3;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + local_b8);
      *(uint *)(lVar6 + lVar3) = local_c4;
      *(uint *)(lVar6 + 4 + lVar3) = local_c8;
      *(uint *)(lVar6 + 8 + lVar3) = local_cc;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x180) + local_b8);
      *(uint *)(lVar6 + lVar3) = local_d4;
      *(uint *)(lVar6 + 4 + lVar3) = local_dc;
      *(uint *)(lVar6 + 8 + lVar3) = local_d0;
      uVar4 = FUN_146c08aba(local_c0);
      local_b8 = param_1 + 0x128;
      local_54 = local_c8;
      local_50 = local_d8;
      local_4c = local_cc;
      FUN_146c08b9e(local_b8,&local_54,uVar4);
      local_a0 = param_1 + 0x178;
      local_54 = (uint)local_b0;
      local_50 = local_e0;
      local_4c = local_dc;
      local_d4 = uVar4;
      FUN_146c08b9e(local_a0,&local_54,uVar4);
      uVar4 = FUN_146c08aba(local_c0);
      local_54 = local_d8;
      local_50 = local_c4;
      local_4c = local_cc;
      FUN_146c08b9e(local_b8,&local_54,(ulonglong)uVar4);
      local_54 = (uint)local_a8;
      local_50 = local_d0;
      local_4c = local_e0;
      local_c0 = (ulonglong)uVar4;
      FUN_146c08b9e(local_a0,&local_54,uVar4);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (local_b0 >> 9 & 0x7fffff) * 8) +
              (ulonglong)(((uint)local_b0 & 0x1ff) << 4);
      puVar7 = (uint *)(lVar6 + 8);
      if (*puVar7 == param_2) {
        if (local_d4 == 0xffffffff) {
          *puVar7 = *(uint *)(lVar6 + 0xc);
          *(undefined4 *)(lVar6 + 0xc) = 0xffffffff;
        }
        else {
          *puVar7 = local_d4;
        }
      }
      else if (*(uint *)(lVar6 + 0xc) == param_2) {
        *(uint *)(lVar6 + 0xc) = local_d4;
      }
      uVar8 = (ulonglong)local_d4;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (local_a8 >> 9 & 0x7fffff) * 8) +
              (ulonglong)(((uint)local_a8 & 0x1ff) << 4);
      puVar7 = (uint *)(lVar6 + 8);
      uVar4 = (uint)local_c0;
      if (*puVar7 == param_2) {
        if (uVar4 == 0xffffffff) {
          *puVar7 = *(uint *)(lVar6 + 0xc);
          *(undefined4 *)(lVar6 + 0xc) = 0xffffffff;
        }
        else {
          *puVar7 = uVar4;
        }
      }
      else if (*(uint *)(lVar6 + 0xc) == param_2) {
        *(uint *)(lVar6 + 0xc) = uVar4;
      }
      uVar9 = (ulonglong)((local_d0 & 0x1ff) << 4);
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_d0 >> 9) * 8) + 8 +
               uVar9) = param_2;
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_d0 >> 9) * 8) + 0xc
               + uVar9) = uVar4;
      uVar9 = (ulonglong)((local_dc & 0x1ff) << 4);
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_dc >> 9) * 8) + 8 +
               uVar9) = param_2;
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_dc >> 9) * 8) + 0xc
               + uVar9) = local_d4;
      uVar9 = (ulonglong)((local_e0 & 0x1ff) << 4);
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_e0 >> 9) * 8) + 8 +
               uVar9) = local_d4;
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_e0 >> 9) * 8) + 0xc
               + uVar9) = uVar4;
      if (*(char *)(param_1 + 0x1a8) == '\x01') {
        local_54 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)uVar10 * 8) +
                            (ulonglong)uVar11 * 4);
        FUN_146bedf4e(param_1 + 400,&local_54);
        FUN_146bedf4e(param_1 + 400,&local_54,local_c0);
      }
      *(uint *)*param_4 = param_2;
      *(uint *)(*param_4 + 4) = local_c4;
      *(uint *)(*param_4 + 8) = local_c8;
      *(uint *)(*param_4 + 0xc) = local_d8;
      *(uint *)param_4[1] = local_cc;
      *(ulonglong *)(param_4[1] + 4) = uVar8 | local_c0 << 0x20;
      *(uint *)(param_4[1] + 0xc) = local_d0;
      *(uint *)param_4[2] = local_dc;
      *(uint *)(param_4[2] + 4) = local_e0;
      *(undefined8 *)(param_4[3] + 8) = param_3[2];
      uVar5 = param_3[1];
      *(undefined8 *)(param_4[2] + 8) = *param_3;
      *(undefined8 *)param_4[3] = uVar5;
      plVar2 = *(longlong **)(param_1 + 0x208);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x50))(plVar2,param_4);
      }
      if (*(char *)(param_1 + 0x210) == '\x01') {
        LOCK();
        *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
        UNLOCK();
      }
      LOCK();
      *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
      UNLOCK();
      uVar5 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146c123ce FUN_146c123ce body=1209 status=ok
// SIG undefined FUN_146c123ce(void)

void FUN_146c123ce(longlong param_1,uint param_2,double param_3,double param_4,double param_5,
                  double *param_6)

{
  uint *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  undefined4 local_58;
  double local_54;
  undefined4 local_4c;
  ulonglong local_40;
  
  dVar6 = DAT_14c8464f0;
  dVar5 = DAT_14c8464e8;
  dVar4 = DAT_14c84635c;
  uVar13 = DAT_14c846338;
  dVar3 = DAT_14c846330;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = DAT_14c8464f0;
  local_78 = DAT_14c8464e0;
  dStack_70 = DAT_14c8464e8;
  local_58 = DAT_14c846338;
  local_60 = DAT_14c846330;
  local_4c = DAT_14c846338;
  local_54 = DAT_14c846330;
  *param_6 = DAT_14c8464e0;
  param_6[1] = dVar5;
  *(undefined4 *)(param_6 + 4) = uVar13;
  *(double *)((longlong)param_6 + 0x24) = dVar3;
  *(undefined4 *)((longlong)param_6 + 0x2c) = uVar13;
  param_6[2] = dVar6;
  param_6[3] = dVar3;
  param_6[6] = dVar4;
  param_6[7] = 0.0;
  lVar10 = *(longlong *)(param_1 + 0x10);
  puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8) +
                   (ulonglong)(param_2 & 0x1ff) * 0xc);
  lVar11 = *(longlong *)(lVar10 + (ulonglong)(*puVar1 >> 9) * 8);
  uVar14 = (ulonglong)*puVar1 & 0x1ff;
  dVar3 = *(double *)(lVar11 + 0x10 + uVar14 * 0x18);
  dVar4 = *(double *)(lVar11 + 8 + uVar14 * 0x18);
  lVar12 = *(longlong *)(lVar10 + (ulonglong)(puVar1[1] >> 9) * 8);
  uVar16 = (ulonglong)puVar1[1] & 0x1ff;
  dVar5 = *(double *)(lVar12 + 0x10 + uVar16 * 0x18);
  dVar6 = *(double *)(lVar12 + 8 + uVar16 * 0x18);
  lVar10 = *(longlong *)(lVar10 + (ulonglong)(puVar1[2] >> 9) * 8);
  uVar15 = (ulonglong)puVar1[2] & 0x1ff;
  dVar7 = *(double *)(lVar10 + 0x10 + uVar15 * 0x18);
  dVar8 = *(double *)(lVar10 + 8 + uVar15 * 0x18);
  *param_6 = *(double *)(lVar10 + uVar15 * 0x18) * param_5 +
             *(double *)(lVar12 + uVar16 * 0x18) * param_4 +
             *(double *)(lVar11 + uVar14 * 0x18) * param_3;
  param_6[1] = dVar8 * param_5 + dVar6 * param_4 + dVar4 * param_3;
  param_6[2] = dVar7 * param_5 + dVar5 * param_4 + dVar3 * param_3;
  cVar9 = *(char *)(param_1 + 0x70);
  *(char *)(param_6 + 7) = cVar9;
  if (cVar9 == '\x01') {
    lVar10 = *(longlong *)(param_1 + 0x60);
    lVar11 = *(longlong *)(lVar10 + (ulonglong)(*puVar1 >> 9) * 8);
    uVar14 = (ulonglong)*puVar1 & 0x1ff;
    fVar17 = (float)param_3;
    lVar12 = *(longlong *)(lVar10 + (ulonglong)(puVar1[1] >> 9) * 8);
    uVar16 = (ulonglong)puVar1[1] & 0x1ff;
    fVar20 = (float)param_4;
    lVar10 = *(longlong *)(lVar10 + (ulonglong)(puVar1[2] >> 9) * 8);
    uVar15 = (ulonglong)puVar1[2] & 0x1ff;
    fVar23 = (float)param_5;
    fVar18 = *(float *)(lVar10 + 8 + uVar15 * 0xc) * fVar23 +
             *(float *)(lVar12 + 8 + uVar16 * 0xc) * fVar20 +
             *(float *)(lVar11 + 8 + uVar14 * 0xc) * fVar17;
    fVar24 = *(float *)(lVar10 + 4 + uVar15 * 0xc) * fVar23 +
             *(float *)(lVar12 + 4 + uVar16 * 0xc) * fVar20 +
             *(float *)(lVar11 + 4 + uVar14 * 0xc) * fVar17;
    fVar20 = fVar23 * *(float *)(lVar10 + uVar15 * 0xc) +
             fVar20 * *(float *)(lVar12 + uVar16 * 0xc) + fVar17 * *(float *)(lVar11 + uVar14 * 0xc)
    ;
    fVar17 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar24 * fVar24);
    if (fVar17 <= 0.0) {
      *(undefined4 *)(param_6 + 4) = 0;
      param_6[3] = 0.0;
    }
    else {
      fVar17 = 1.0 / fVar17;
      *(float *)(param_6 + 3) = fVar20 * fVar17;
      *(float *)((longlong)param_6 + 0x1c) = fVar24 * fVar17;
      *(float *)(param_6 + 4) = fVar18 * fVar17;
    }
  }
  cVar9 = *(char *)(param_1 + 0x90);
  *(char *)((longlong)param_6 + 0x39) = cVar9;
  if (cVar9 == '\x01') {
    lVar10 = *(longlong *)(param_1 + 0x80);
    lVar11 = *(longlong *)(lVar10 + (ulonglong)(*puVar1 >> 9) * 8);
    uVar14 = (ulonglong)*puVar1 & 0x1ff;
    fVar21 = (float)param_3;
    fVar17 = *(float *)(lVar11 + 8 + uVar14 * 0xc);
    fVar18 = *(float *)(lVar11 + 4 + uVar14 * 0xc);
    lVar12 = *(longlong *)(lVar10 + (ulonglong)(puVar1[1] >> 9) * 8);
    uVar16 = (ulonglong)puVar1[1] & 0x1ff;
    fVar19 = (float)param_4;
    fVar20 = *(float *)(lVar12 + 8 + uVar16 * 0xc);
    fVar23 = *(float *)(lVar12 + 4 + uVar16 * 0xc);
    lVar10 = *(longlong *)(lVar10 + (ulonglong)(puVar1[2] >> 9) * 8);
    uVar15 = (ulonglong)puVar1[2] & 0x1ff;
    fVar22 = (float)param_5;
    fVar24 = *(float *)(lVar10 + 8 + uVar15 * 0xc);
    fVar2 = *(float *)(lVar10 + 4 + uVar15 * 0xc);
    *(float *)((longlong)param_6 + 0x24) =
         fVar22 * *(float *)(lVar10 + uVar15 * 0xc) +
         fVar19 * *(float *)(lVar12 + uVar16 * 0xc) + fVar21 * *(float *)(lVar11 + uVar14 * 0xc);
    *(float *)(param_6 + 5) = fVar2 * fVar22 + fVar23 * fVar19 + fVar18 * fVar21;
    *(float *)((longlong)param_6 + 0x2c) = fVar24 * fVar22 + fVar20 * fVar19 + fVar17 * fVar21;
  }
  cVar9 = *(char *)(param_1 + 0xb0);
  *(char *)((longlong)param_6 + 0x3a) = cVar9;
  if (cVar9 == '\x01') {
    lVar10 = *(longlong *)(param_1 + 0xa0);
    lVar11 = *(longlong *)(lVar10 + (ulonglong)(*puVar1 >> 9) * 8);
    uVar15 = (ulonglong)(*puVar1 & 0x1ff);
    fVar17 = *(float *)(lVar11 + 4 + uVar15 * 8);
    lVar12 = *(longlong *)(lVar10 + (ulonglong)(puVar1[1] >> 9) * 8);
    uVar16 = (ulonglong)(puVar1[1] & 0x1ff);
    fVar18 = *(float *)(lVar12 + 4 + uVar16 * 8);
    lVar10 = *(longlong *)(lVar10 + (ulonglong)(puVar1[2] >> 9) * 8);
    uVar14 = (ulonglong)(puVar1[2] & 0x1ff);
    fVar20 = *(float *)(lVar10 + 4 + uVar14 * 8);
    *(float *)(param_6 + 6) =
         (float)param_5 * *(float *)(lVar10 + uVar14 * 8) +
         (float)param_4 * *(float *)(lVar12 + uVar16 * 8) +
         (float)param_3 * *(float *)(lVar11 + uVar15 * 8);
    *(float *)((longlong)param_6 + 0x34) =
         fVar20 * (float)param_5 + fVar18 * (float)param_4 + fVar17 * (float)param_3;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c12888 FUN_146c12888 body=265 status=ok
// SIG undefined FUN_146c12888(void)

void FUN_146c12888(longlong param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_3 >> 9) * 8);
  uVar8 = (ulonglong)((param_3 & 0x1ff) << 4);
  iVar7 = *(int *)(lVar5 + uVar8);
  iVar2 = *(int *)(lVar5 + 4 + uVar8);
  uVar3 = *(uint *)(lVar5 + 8 + uVar8);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
  uVar9 = (ulonglong)(uVar3 & 0x1ff);
  piVar1 = (int *)(lVar6 + uVar9 * 0xc);
  iVar4 = *piVar1;
  piVar11 = (int *)(lVar6 + uVar9 * 0xc + 4);
  if (iVar4 == iVar7) {
    if (piVar1[1] == iVar2) {
      piVar11 = piVar1 + 2;
    }
  }
  else if (piVar1[1] == iVar7) {
    piVar11 = piVar1 + (ulonglong)(iVar4 == iVar2) * 2;
  }
  else if (iVar4 != iVar2) {
    piVar11 = piVar1;
  }
  uVar3 = *(uint *)(lVar5 + uVar8 + 0xc);
  if (uVar3 == 0xffffffff) {
    iVar7 = -1;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
    piVar1 = (int *)(lVar5 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
    iVar4 = *piVar1;
    piVar10 = (int *)(lVar5 + (ulonglong)(uVar3 & 0x1ff) * 0xc + 4);
    if (iVar4 == iVar7) {
      if (piVar1[1] == iVar2) {
        piVar10 = piVar1 + 2;
      }
    }
    else if (piVar1[1] == iVar7) {
      piVar10 = piVar1 + (ulonglong)(iVar4 == iVar2) * 2;
    }
    else if (iVar4 != iVar2) {
      piVar10 = piVar1;
    }
    iVar7 = *piVar10;
  }
  *param_2 = *piVar11;
  param_2[1] = iVar7;
  return;
}



// FUNCTION 146c12992 FUN_146c12992 body=355 status=ok
// SIG undefined FUN_146c12992(void)

int FUN_146c12992(longlong param_1,uint param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined8 local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = 0;
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar1 = param_1 + 0xb8;
    iVar4 = 0;
    FUN_146be983e(&local_68,lVar1,param_2,0);
    if (((local_68 != lVar1) || (local_60 != param_2)) ||
       (((int)local_50 != -1 || (local_50._4_4_ != -1)))) {
      iVar4 = 0;
      lVar2 = local_68;
      uVar3 = local_60;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_48 >> 9) * 8)
                     + 0xc + (ulonglong)((local_48 & 0x1ff) << 4)) == -1) {
          puVar5 = param_3;
          if ((iVar4 == 0) || (puVar5 = param_4, iVar4 == 1)) {
            *puVar5 = local_48;
          }
          iVar4 = iVar4 + 1;
        }
        if (local_58 == 0) {
          local_5c = 0xffffffff;
          local_50 = 0xffffffffffffffff;
          local_50._4_4_ = -1;
          local_50._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_68);
          lVar2 = local_68;
          uVar3 = local_60;
        }
      } while ((((lVar2 != lVar1) || (uVar3 != param_2)) || ((int)local_50 != -1)) ||
              (local_50._4_4_ != -1));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 146c12af6 FUN_146c12af6 body=352 status=ok
// SIG undefined FUN_146c12af6(void)

int FUN_146c12af6(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong local_70;
  uint local_68;
  undefined4 local_64;
  int local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = 0;
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar1 = param_1 + 0xb8;
    iVar4 = 0;
    FUN_146be983e(&local_70,lVar1,param_2,0);
    if (((local_70 != lVar1) || (local_68 != param_2)) ||
       (((int)local_58 != -1 || (local_58._4_4_ != -1)))) {
      iVar4 = 0;
      do {
        uVar3 = local_50;
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_50 >> 9) * 8)
                     + 0xc + (ulonglong)((local_50 & 0x1ff) << 4)) == -1) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(param_3,iVar2);
          }
          *(uint *)(*param_3 + (longlong)iVar2 * 4) = uVar3;
          iVar4 = iVar4 + 1;
        }
        if (local_60 == 0) {
          local_64 = 0xffffffff;
          local_58 = 0xffffffffffffffff;
          local_58._4_4_ = -1;
          local_58._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_70);
        }
      } while (((local_70 != lVar1) || (local_68 != param_2)) ||
              (((int)local_58 != -1 || (local_58._4_4_ != -1))));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 146c12c58 FUN_146c12c58 body=358 status=ok
// SIG undefined FUN_146c12c58(void)

void FUN_146c12c58(longlong param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5,
                  undefined4 *param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar4 = (ulonglong)((param_2 & 0x1ff) << 4);
  iVar9 = *(int *)(lVar5 + uVar4);
  uVar1 = *(uint *)(lVar5 + 8 + uVar4);
  uVar2 = *(uint *)(lVar5 + 0xc + uVar4);
  if (iVar9 == param_3) {
    iVar9 = *(int *)(lVar5 + 4 + uVar4);
  }
  *param_4 = iVar9;
  *param_7 = uVar1;
  lVar8 = (ulonglong)((uVar1 & 0x1ff) * 0xc) +
          *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
  lVar5 = 0;
  do {
    lVar6 = lVar5 + 1;
    lVar10 = 0;
    if (lVar5 != 2) {
      lVar10 = lVar6;
    }
    iVar3 = *(int *)(lVar8 + lVar10 * 4);
    iVar9 = *(int *)(lVar8 + lVar5 * 4);
    if (((iVar9 == param_3) || (bVar11 = iVar3 == param_3, iVar3 = iVar9, bVar11)) &&
       (iVar3 == *param_4)) {
      uVar4 = 2;
      if (lVar5 != 0) {
        uVar4 = (ulonglong)((int)lVar5 - 1);
      }
      uVar7 = *(undefined4 *)(lVar8 + uVar4 * 4);
      goto LAB_146c12d22;
    }
    lVar5 = lVar6;
  } while (lVar6 != 3);
  uVar7 = 0xffffffff;
LAB_146c12d22:
  *param_5 = uVar7;
  *param_8 = uVar2;
  if (uVar2 == 0xffffffff) {
    *param_8 = 0xffffffff;
  }
  else {
    lVar8 = (ulonglong)((uVar2 & 0x1ff) * 0xc) +
            *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
    lVar5 = 0;
    do {
      lVar6 = lVar5 + 1;
      lVar10 = 0;
      if (lVar5 != 2) {
        lVar10 = lVar6;
      }
      iVar3 = *(int *)(lVar8 + lVar10 * 4);
      iVar9 = *(int *)(lVar8 + lVar5 * 4);
      if (((iVar9 == param_3) || (bVar11 = iVar3 == param_3, iVar3 = iVar9, bVar11)) &&
         (iVar3 == *param_4)) {
        uVar4 = 2;
        if (lVar5 != 0) {
          uVar4 = (ulonglong)((int)lVar5 - 1);
        }
        uVar7 = *(undefined4 *)(lVar8 + uVar4 * 4);
        goto LAB_146c12db3;
      }
      lVar5 = lVar6;
    } while (lVar6 != 3);
    uVar7 = 0xffffffff;
LAB_146c12db3:
    *param_6 = uVar7;
  }
  return;
}



// FUNCTION 146c12dbe FUN_146c12dbe body=451 status=ok
// SIG undefined FUN_146c12dbe(void)

undefined4 FUN_146c12dbe(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint *local_50;
  undefined4 *local_48;
  undefined4 local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = 0xffffffff;
  local_3c = param_2;
  if ((-1 < (int)param_2) &&
     ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      local_48 = &local_40;
      local_40 = 0;
      local_50 = &local_3c;
      uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)(param_2 >> 9) * 8)
                       + (ulonglong)(param_2 & 0x1ff) * 4);
      local_58 = param_1;
      uVar2 = local_40;
      if (uVar4 != 0xffffffff) {
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar4 >> 9) * 8)
                        + (ulonglong)(uVar4 & 0x1ff) * 4);
        if (iVar5 < 8) {
          if (0 < iVar5) {
            iVar5 = iVar5 + uVar4;
            do {
              uVar4 = uVar4 + 1;
              FUN_142973196(&local_58,
                            *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar4 >> 9) * 8) +
                             (ulonglong)(uVar4 & 0x1ff) * 4));
              uVar2 = local_40;
            } while ((int)uVar4 < iVar5);
          }
        }
        else {
          iVar5 = 0;
          do {
            uVar1 = uVar4 + 1 + iVar5;
            FUN_142973196(&local_58,
                          *(undefined4 *)
                           (*(longlong *)
                             (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar1 >> 9) * 8) +
                           (ulonglong)(uVar1 & 0x1ff) * 4));
            iVar5 = iVar5 + 1;
          } while (iVar5 != 8);
          uVar4 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar4 + 9 >> 9) * 8) +
                           (ulonglong)(uVar4 + 9 & 0x1ff) * 4);
          uVar2 = local_40;
          if (uVar4 != 0xffffffff) {
            lVar3 = *(longlong *)(param_1 + 0x110);
            do {
              FUN_142973196(&local_58,
                            *(undefined4 *)
                             (*(longlong *)(lVar3 + (ulonglong)(uVar4 >> 9) * 8) +
                             (ulonglong)(uVar4 & 0x1ff) * 4));
              lVar3 = *(longlong *)(param_1 + 0x110);
              uVar4 = *(uint *)(*(longlong *)(lVar3 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                               (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
              uVar2 = local_40;
            } while (uVar4 != 0xffffffff);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146c12f82 FUN_146c12f82 body=209 status=ok
// SIG undefined FUN_146c12f82(void)

undefined4 FUN_146c12f82(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  uint local_48;
  int local_38;
  int local_34;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = 0xffffffff;
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    FUN_146be983e(&local_50,param_1 + 0xb8,param_2,0);
    if (((local_50 != param_1 + 0xb8) || (local_48 != param_2)) ||
       ((local_38 != -1 || (uVar1 = 0xffffffff, local_34 != -1)))) {
      uVar1 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_30 >> 9) * 8) + 8 +
               (ulonglong)((local_30 & 0x1ff) << 4));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c13054 FUN_146c13054 body=1489 status=ok
// SIG undefined FUN_146c13054(void)

undefined8
FUN_146c13054(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_c8 [40];
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong *local_90;
  int local_84;
  uint local_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 local_74;
  int local_70;
  undefined8 local_68;
  uint local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14481578e(param_4,0);
  }
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_14475e67c(param_5,0);
  }
  uVar11 = 1;
  uVar9 = (uint)param_2;
  if (((int)uVar9 < 0) ||
     (*(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24) <= (int)uVar9))
  goto LAB_146c13148;
  uVar4 = param_2 >> 9 & 0x7fffff;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 8) +
                                  (ulonglong)(uVar9 & 0x1ff) * 2) - 1U)) goto LAB_146c13148;
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar4 * 8) +
                   (ulonglong)(uVar9 & 0x1ff) * 4);
  uVar11 = 0;
  if ((uVar2 == 0xffffffff) ||
     (iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar2 >> 9) * 8) +
                      (ulonglong)(uVar2 & 0x1ff) * 4), iVar6 == 0)) goto LAB_146c13148;
  lVar8 = param_1 + 0xb8;
  local_58 = 0;
  uStack_50 = 0;
  puVar7 = &local_80;
  local_a0 = iVar6;
  FUN_146be983e(puVar7,lVar8,param_2 & 0xffffffff,0);
  if (CONCAT44(uStack_7c,local_80) != lVar8) goto LAB_146c13203;
  if (local_78 != uVar9) goto LAB_146c13203;
  if ((int)local_68 != -1) goto LAB_146c13203;
  iVar6 = local_68._4_4_;
  while (iVar6 != -1) {
LAB_146c13203:
    do {
      uVar4 = uStack_50;
      uVar2 = local_60;
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_60 >> 9) * 8) +
                   0xc + (ulonglong)((local_60 & 0x1ff) << 4)) == -1) {
        lVar13 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_1446f48e2(&local_58,uVar4 & 0xffffffff);
        }
        *(uint *)(local_58 + lVar13 * 4) = uVar2;
      }
      if (local_70 == 0) {
        local_74 = 0xffffffff;
        local_68 = 0xffffffffffffffff;
        local_68._4_4_ = -1;
        puVar7 = (uint *)&DAT_ffffffff;
      }
      else {
        FUN_146be9922(&local_80);
        puVar7 = (uint *)(local_68 & 0xffffffff);
      }
    } while (((CONCAT44(uStack_7c,local_80) != lVar8) || (local_78 != uVar9)) ||
            (iVar6 = local_68._4_4_, (int)puVar7 != -1));
  }
  local_9c = (undefined4)CONCAT71((int7)((ulonglong)puVar7 >> 8),(int)uStack_50 != 0);
  local_98 = lVar8;
  if ((int)uStack_50 == 0) {
    FUN_146be983e(&local_80,lVar8,param_2 & 0xffffffff,0);
    uVar4 = uStack_50;
    uVar2 = local_60;
    if (((CONCAT44(uStack_7c,local_80) != lVar8) || (local_78 != uVar9)) ||
       (((int)local_68 != -1 || (local_68._4_4_ != -1)))) {
      lVar8 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_1446f48e2(&local_58,uVar4 & 0xffffffff);
      }
      *(uint *)(local_58 + lVar8 * 4) = uVar2;
    }
    if (0 < local_a0 || (int)uStack_50 != 0) goto LAB_146c1327a;
  }
  else {
LAB_146c1327a:
    iVar10 = 0;
    iVar6 = (int)uStack_50;
    local_90 = param_4;
    do {
      lVar8 = local_98;
      if (iVar6 == 0) {
        FUN_146be983e(&local_80,local_98,param_2 & 0xffffffff,0);
        lVar13 = CONCAT44(uStack_7c,local_80);
        uVar2 = local_78;
        if (lVar13 != lVar8) goto LAB_146c13489;
        if (local_78 != uVar9) goto LAB_146c13489;
        if ((int)local_68 != -1) goto LAB_146c13489;
        iVar6 = local_68._4_4_;
        while (iVar6 != -1) {
LAB_146c13489:
          do {
            uVar4 = uStack_50;
            uVar3 = local_60;
            if ((longlong)(int)param_3[1] == 0) {
LAB_146c13525:
              lVar8 = (longlong)(int)uStack_50;
              uVar2 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
              if (uStack_50._4_4_ < uVar2) {
                FUN_1446f48e2(&local_58,uVar4 & 0xffffffff);
              }
              *(uint *)(local_58 + lVar8 * 4) = uVar3;
              goto LAB_146c1354e;
            }
            lVar8 = 0;
            while (*(int *)(*param_3 + lVar8) !=
                   *(int *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_60 >> 9) * 8) + 8 +
                           (ulonglong)((local_60 & 0x1ff) << 4))) {
              lVar8 = lVar8 + 4;
              if ((longlong)(int)param_3[1] * 4 == lVar8) goto LAB_146c13525;
            }
            if (local_70 == 0) {
              local_74 = 0xffffffff;
              local_68 = 0xffffffffffffffff;
              local_68._4_4_ = -1;
              local_68._0_4_ = -1;
            }
            else {
              FUN_146be9922(&local_80);
              lVar13 = CONCAT44(uStack_7c,local_80);
              uVar2 = local_78;
            }
          } while (((lVar13 != local_98) || (uVar2 != uVar9)) ||
                  (iVar6 = local_68._4_4_, (int)local_68 != -1));
        }
LAB_146c1354e:
        local_9c = 0;
        iVar6 = (int)uStack_50;
      }
      uVar2 = *(uint *)(local_58 + -4 + (longlong)iVar6 * 4);
      uStack_50 = CONCAT44(uStack_50._4_4_,iVar6 + -1);
      FUN_14479f406(&local_58);
      uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar2 >> 9) * 8)
                        + 8 + (ulonglong)((uVar2 & 0x1ff) << 4));
      local_84 = (int)param_3[1];
      iVar6 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
        FUN_1401c3474(param_5,iVar6);
      }
      iVar10 = iVar10 + 1;
      *(byte *)(*param_5 + (longlong)iVar6) = ~(byte)local_9c & 1;
      uVar12 = uVar2;
      do {
        iVar6 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
          FUN_1446f48e2(param_3,iVar6);
        }
        *(uint *)(*param_3 + (longlong)iVar6 * 4) = uVar3;
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
        lVar13 = (ulonglong)((uVar3 & 0x1ff) << 2) * 3;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar3 >> 9) * 8) + lVar13
        ;
        iVar6 = 0;
        if (*(uint *)(lVar8 + lVar13) != uVar9) {
          lVar8 = lVar8 + lVar13;
          iVar6 = 1;
          if (*(uint *)(lVar8 + 4) != uVar9) {
            iVar6 = (uint)(*(uint *)(lVar8 + 8) == uVar9) * 3 + -1;
          }
        }
        uVar1 = *(uint *)(lVar5 + (longlong)iVar6 * 4);
        bVar14 = uVar1 == uVar12;
        uVar12 = uVar1;
        if (bVar14) {
          uVar12 = iVar6 - 1;
          if (iVar6 + 2U < 3) {
            uVar12 = iVar6 + 2U;
          }
          uVar12 = *(uint *)(lVar5 + (longlong)(int)uVar12 * 4);
        }
        local_80 = uVar12;
        if (uVar12 == uVar2) goto LAB_146c133fa;
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar12 >> 9) * 8);
        uVar4 = (ulonglong)((uVar12 & 0x1ff) << 4);
        uVar1 = *(uint *)(lVar8 + 8 + uVar4);
        bVar14 = uVar1 == uVar3;
        uVar3 = uVar1;
        if (bVar14) {
          uVar3 = *(uint *)(lVar8 + uVar4 + 0xc);
        }
        iVar10 = iVar10 + 1;
      } while (uVar3 != 0xffffffff);
      if (0 < (int)uStack_50) {
        FUN_1428664a6(&local_58,&local_80,CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
      }
LAB_146c133fa:
      param_4 = local_90;
      lVar8 = param_3[1];
      iVar6 = (int)local_90[1];
      *(uint *)(local_90 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)local_90 + 0xc) < iVar6 + 1U) {
        FUN_1446f48e2(local_90,iVar6);
      }
      *(int *)(*param_4 + (longlong)iVar6 * 4) = (int)lVar8 - local_84;
      iVar6 = (int)uStack_50;
    } while (((int)uStack_50 != 0) || (iVar10 < local_a0));
  }
  uVar11 = 0x17;
  if ((int)param_4[1] == (int)param_5[1]) {
    uVar11 = 0;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_146c13148:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 146c13626 FUN_146c13626 body=219 status=ok
// SIG undefined FUN_146c13626(void)

undefined8 * FUN_146c13626(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((-1 < (int)param_3) &&
     ((int)param_3 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(param_3 >> 9) * 8) +
                           (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_3 >> 9) * 8);
      uVar5 = (ulonglong)((param_3 & 0x1ff) << 4);
      if (*(int *)(lVar4 + 0xc + uVar5) == -1) {
        puVar3 = (undefined4 *)(lVar4 + uVar5);
        lVar4 = (ulonglong)(puVar3[2] & 0x1ff) * 0xc +
                *(longlong *)
                 (*(longlong *)(param_1 + 0x130) + (ulonglong)((uint)puVar3[2] >> 9) * 8);
        iVar2 = FUN_146c0d342(*puVar3,puVar3[1],lVar4);
        uVar1 = *(undefined4 *)(lVar4 + (longlong)(((iVar2 + 1) / 3) * -3 + iVar2 + 1) * 4);
        *(undefined4 *)param_2 = *(undefined4 *)(lVar4 + (longlong)iVar2 * 4);
        *(undefined4 *)((longlong)param_2 + 4) = uVar1;
        return param_2;
      }
    }
  }
  *param_2 = 0xffffffffffffffff;
  return param_2;
}



// FUNCTION 146c13702 FUN_146c13702 body=115 status=ok
// SIG undefined FUN_146c13702(void)

undefined4 FUN_146c13702(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
    uVar5 = (ulonglong)((param_2 & 0x1ff) << 4);
    uVar1 = *(uint *)(lVar4 + 0xc + uVar5);
    if (uVar1 != 0xffffffff) {
      uVar2 = *(uint *)(lVar4 + uVar5 + 8);
      iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar1 >> 9) * 8) +
                      (ulonglong)(uVar1 & 0x1ff) * 4);
      return CONCAT31((int3)((uint)iVar3 >> 8),
                      iVar3 != *(int *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x198) +
                                         (ulonglong)(uVar2 >> 9) * 8) +
                                       (ulonglong)(uVar2 & 0x1ff) * 4));
    }
  }
  return 0;
}



// FUNCTION 146c13776 FUN_146c13776 body=395 status=ok
// SIG undefined FUN_146c13776(void)

undefined8 FUN_146c13776(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x1a8) == '\x01') {
    lVar1 = param_1 + 0xb8;
    FUN_146be983e(&local_60,lVar1,param_2,0);
    if ((((local_60 != lVar1) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
       (local_48._4_4_ != -1)) {
      iVar11 = -1;
      iVar13 = -1;
      lVar7 = local_60;
      iVar9 = local_58;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_40 >> 9) * 8);
        uVar10 = (ulonglong)((local_40 & 0x1ff) << 4);
        bVar6 = true;
        uVar2 = *(uint *)(lVar4 + 8 + uVar10);
        do {
          bVar12 = bVar6;
          iVar5 = iVar13;
          if (((uVar2 != 0xffffffff) &&
              (iVar3 = *(int *)(*(longlong *)
                                 (*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar2 >> 9) * 8) +
                               (ulonglong)(uVar2 & 0x1ff) * 4), iVar3 != iVar13)) &&
             (iVar3 != iVar11)) {
            if ((iVar13 != -1) && (iVar11 != -1)) {
              uVar8 = 1;
              goto LAB_146c1379c;
            }
            iVar5 = iVar3;
            if (iVar13 != -1) {
              iVar5 = iVar13;
              iVar11 = iVar3;
            }
          }
          iVar13 = iVar5;
          bVar6 = false;
          uVar2 = *(uint *)(lVar4 + 0xc + uVar10);
        } while (bVar12);
        if (local_50 == 0) {
          local_54 = 0xffffffff;
          local_48 = 0xffffffffffffffff;
          local_48._4_4_ = -1;
          local_48._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_60);
          lVar7 = local_60;
          iVar9 = local_58;
        }
      } while ((((lVar7 != lVar1) || (iVar9 != param_2)) || ((int)local_48 != -1)) ||
              (local_48._4_4_ != -1));
    }
  }
  uVar8 = 0;
LAB_146c1379c:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c13902 FUN_146c13902 body=701 status=ok
// SIG undefined FUN_146c13902(void)

undefined8 FUN_146c13902(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  uint local_68;
  undefined4 local_64;
  int local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = (uint)param_2;
  if ((-1 < (int)uVar7) &&
     ((int)uVar7 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) {
    uVar8 = param_2 >> 9 & 0x7fffff;
    uVar14 = (ulonglong)(uVar7 & 0x1ff);
    if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar8 * 8) + uVar14 * 2)
                 - 1U) < 0xfffe) &&
       ((uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar8 * 8) + uVar14 * 4),
        uVar6 != 0xffffffff &&
        (iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar6 >> 9) * 8)
                         + (ulonglong)(uVar6 & 0x1ff) * 4), iVar9 != 0)))) {
      lVar15 = param_1 + 0xb8;
      FUN_146be983e(&local_70,lVar15,param_2 & 0xffffffff,0);
      if ((local_70 != lVar15) ||
         (((local_68 != uVar7 || ((int)local_58 != -1)) || (local_58._4_4_ != -1)))) {
        lVar10 = local_70;
        uVar6 = local_68;
        do {
          uVar11 = (ulonglong)(local_50 >> 9);
          lVar4 = *(longlong *)(param_1 + 0x1c0);
          uVar13 = local_50 & 0x1ff;
          if (*(int *)(*(longlong *)(lVar4 + uVar11 * 8) + 0xc + (ulonglong)(uVar13 << 4)) == -1) {
            iVar12 = -1;
            iVar3 = -1;
            if (local_50 == 0xffffffff) goto LAB_146c13a14;
            goto LAB_146c13a51;
          }
          if (local_60 == 0) {
            local_64 = 0xffffffff;
            local_58 = 0xffffffffffffffff;
            local_58._4_4_ = -1;
            local_58._0_4_ = -1;
          }
          else {
            FUN_146be9922(&local_70);
            lVar10 = local_70;
            uVar6 = local_68;
          }
        } while (((lVar10 != lVar15) || (uVar6 != uVar7)) ||
                (((int)local_58 != -1 || (local_58._4_4_ != -1))));
      }
      lVar4 = *(longlong *)(param_1 + 0x1c0);
      iVar3 = 0;
LAB_146c13a14:
      iVar12 = iVar3;
      uVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar8 * 8) + uVar14 * 4) + 1;
      local_50 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar6 >> 9) * 8) +
                          (ulonglong)(uVar6 & 0x1ff) * 4);
      uVar11 = (ulonglong)(local_50 >> 9);
      uVar13 = local_50 & 0x1ff;
LAB_146c13a51:
      iVar12 = iVar12 + iVar9;
      uVar2 = local_50;
      uVar6 = *(uint *)(*(longlong *)(lVar4 + uVar11 * 8) + 8 + (ulonglong)(uVar13 << 4));
      do {
        iVar12 = iVar12 + -1;
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
        lVar10 = (ulonglong)((uVar6 & 0x1ff) << 2) * 3;
        iVar9 = 0;
        if (*(uint *)(lVar15 + lVar10) != uVar7) {
          lVar15 = lVar15 + lVar10;
          iVar9 = 1;
          if (*(uint *)(lVar15 + 4) != uVar7) {
            iVar9 = (uint)(*(uint *)(lVar15 + 8) == uVar7) * 3 + -1;
          }
        }
        lVar10 = lVar10 + *(longlong *)
                           (*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar6 >> 9) * 8);
        uVar13 = *(uint *)(lVar10 + (longlong)iVar9 * 4);
        uVar1 = iVar9 - 1;
        if (iVar9 + 2U < 3) {
          uVar1 = iVar9 + 2U;
        }
        if (uVar13 == uVar2) {
          uVar13 = *(uint *)(lVar10 + (longlong)(int)uVar1 * 4);
        }
        if (uVar13 == local_50) break;
        lVar15 = *(longlong *)(lVar4 + (ulonglong)(uVar13 >> 9) * 8);
        uVar8 = (ulonglong)((uVar13 & 0x1ff) << 4);
        uVar1 = *(uint *)(lVar15 + 8 + uVar8);
        if (uVar1 == uVar6) {
          uVar1 = *(uint *)(lVar15 + 0xc + uVar8);
        }
        uVar2 = uVar13;
        uVar6 = uVar1;
      } while (uVar1 != 0xffffffff);
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),iVar12 != 0);
      goto LAB_146c13996;
    }
  }
  uVar5 = 0;
LAB_146c13996:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146c13bc0 FUN_146c13bc0 body=184 status=ok
// SIG undefined FUN_146c13bc0(void)

uint FUN_146c13bc0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = FUN_146c061e0();
  if (uVar3 != 0xffffffff) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8);
    uVar4 = (ulonglong)((uVar3 & 0x1ff) << 4);
    uVar3 = *(uint *)(lVar1 + 8 + uVar4);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
    if (*(int *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 0xc) == param_4) {
      return uVar3;
    }
    lVar2 = lVar2 + (ulonglong)(uVar3 & 0x1ff) * 0xc;
    if (*(int *)(lVar2 + 4) == param_4) {
      return uVar3;
    }
    if (*(int *)(lVar2 + 8) == param_4) {
      return uVar3;
    }
    uVar3 = *(uint *)(lVar1 + 0xc + uVar4);
    if (uVar3 != 0xffffffff) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
      if (((*(int *)(lVar2 + (ulonglong)(uVar3 & 0x1ff) * 0xc) != param_4) &&
          (lVar2 = lVar2 + (ulonglong)(uVar3 & 0x1ff) * 0xc, *(int *)(lVar2 + 4) != param_4)) &&
         (*(int *)(lVar2 + 8) != param_4)) {
        return 0xffffffff;
      }
      return uVar3;
    }
  }
  return 0xffffffff;
}



// FUNCTION 146c13c78 FUN_146c13c78 body=371 status=ok
// SIG undefined FUN_146c13c78(void)

double * FUN_146c13c78(longlong param_1,double *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  double dVar3;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (uint)param_3;
  if ((-1 < (int)uVar2) &&
     ((int)uVar2 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4))) {
    uVar1 = param_3 >> 9 & 0x7fffff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar1 * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar1 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + uVar1 * 8) + 8 +
               (ulonglong)((uVar2 & 0x1ff) << 4)) >> 0x20;
      FUN_146c13dec(param_1,param_2);
      if (uVar1 != 0xffffffff) {
        FUN_146c13dec(param_1,&local_40,uVar1);
        local_40 = local_40 + *param_2;
        local_38 = local_38 + param_2[1];
        local_30 = local_30 + param_2[2];
        dVar3 = SQRT(local_30 * local_30 + local_40 * local_40 + local_38 * local_38);
        if (dVar3 <= 0.0) {
          *param_2 = 0.0;
          param_2[1] = 0.0;
          param_2[2] = 0.0;
        }
        else {
          dVar3 = 1.0 / dVar3;
          *param_2 = local_40 * dVar3;
          param_2[1] = local_38 * dVar3;
          param_2[2] = local_30 * dVar3;
        }
      }
      if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  param_2[2] = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 146c13dec FUN_146c13dec body=245 status=ok
// SIG undefined FUN_146c13dec(void)

undefined8 FUN_146c13dec(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar8 = (ulonglong)(param_3 & 0x1ff);
  uVar3 = *(uint *)(lVar5 + uVar8 * 0xc);
  lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)uVar3 & 0x1ff;
  local_28 = *(undefined8 *)(lVar6 + 0x10 + uVar7 * 0x18);
  puVar1 = (undefined8 *)(lVar6 + uVar7 * 0x18);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  uVar3 = *(uint *)(lVar5 + 4 + uVar8 * 0xc);
  lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)uVar3 & 0x1ff;
  local_48 = *(undefined8 *)(lVar6 + 0x10 + uVar7 * 0x18);
  puVar1 = (undefined8 *)(lVar6 + uVar7 * 0x18);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = *(uint *)(lVar5 + 8 + uVar8 * 0xc);
  lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
  uVar7 = (ulonglong)uVar3 & 0x1ff;
  local_68 = *(undefined8 *)(lVar4 + 0x10 + uVar7 * 0x18);
  puVar2 = (undefined4 *)(lVar4 + uVar7 * 0x18);
  local_78 = *puVar2;
  uStack_74 = puVar2[1];
  uStack_70 = puVar2[2];
  uStack_6c = puVar2[3];
  FUN_146baf581(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c13ee2 FUN_146c13ee2 body=289 status=ok
// SIG undefined FUN_146c13ee2(void)

void FUN_146c13ee2(longlong param_1,double *param_2,uint param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  
  if ((-1 < (int)param_3) &&
     ((int)param_3 < *(int *)(param_1 + 0x1d0) * 0x200 + *(int *)(param_1 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x1d8) + (ulonglong)(param_3 >> 9) * 8) +
                           (ulonglong)(param_3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      dVar10 = 1.0;
      if (param_4 <= 1.0) {
        dVar10 = param_4;
      }
      dVar10 = (double)(~-(ulonglong)(param_4 < 0.0) & (ulonglong)dVar10);
      uVar8 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_3 >> 9) * 8) +
               (ulonglong)((param_3 & 0x1ff) << 4));
      dVar7 = 1.0 - dVar10;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar8 >> 9 & 0x7fffff) * 8);
      uVar9 = uVar8 & 0x1ff;
      dVar1 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
      dVar2 = *(double *)(lVar5 + 8 + uVar9 * 0x18);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar8 >> 0x29) * 8);
      uVar8 = uVar8 >> 0x20 & 0x1ff;
      dVar3 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18);
      dVar4 = *(double *)(lVar6 + 8 + uVar8 * 0x18);
      *param_2 = *(double *)(lVar6 + uVar8 * 0x18) * dVar10 +
                 dVar7 * *(double *)(lVar5 + uVar9 * 0x18);
      param_2[1] = dVar4 * dVar10 + dVar2 * dVar7;
      param_2[2] = dVar3 * dVar10 + dVar1 * dVar7;
      return;
    }
  }
  param_2[2] = DAT_14c8464f0;
  dVar10 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar10;
  return;
}



// FUNCTION 146c14004 FUN_146c14004 body=510 status=ok
// SIG undefined FUN_146c14004(void)

void FUN_146c14004(longlong param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined8 local_50;
  uint local_48;
  ulonglong local_40;
  
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  uVar3 = (undefined4)DAT_14c8464e0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_3[2] = DAT_14c8464f0;
  *(undefined4 *)param_3 = uVar3;
  *(undefined4 *)((longlong)param_3 + 4) = uVar4;
  *(undefined4 *)(param_3 + 1) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
  if (((-1 < (int)param_2) &&
      ((int)param_2 < *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x28) + (ulonglong)(param_2 >> 9) * 8) +
                         (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar1 = param_1 + 0xb8;
    iVar9 = 0;
    FUN_146be983e(&local_68,lVar1,param_2,0);
    if (((local_68 != lVar1) || (local_60 != param_2)) ||
       (((int)local_50 != -1 || (local_50._4_4_ != -1)))) {
      lVar7 = local_68;
      uVar8 = local_60;
      do {
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(local_48 >> 9) * 8) +
                  (ulonglong)((local_48 & 0x1ff) << 4));
        uVar10 = 0xffffffff;
        if ((uint)(uVar11 >> 0x20) == param_2) {
          uVar10 = uVar11 & 0xffffffff;
        }
        if ((uint)uVar11 == param_2) {
          uVar10 = uVar11 >> 0x20;
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar10 >> 9) * 8);
        uVar11 = (ulonglong)((uint)uVar10 & 0x1ff);
        *param_3 = *(double *)(lVar2 + uVar11 * 0x18) + *param_3;
        param_3[1] = *(double *)(lVar2 + 8 + uVar11 * 0x18) + param_3[1];
        param_3[2] = *(double *)(lVar2 + 0x10 + uVar11 * 0x18) + param_3[2];
        if (local_58 == 0) {
          local_5c = 0xffffffff;
          local_50 = 0xffffffffffffffff;
          local_50._4_4_ = -1;
          local_50._0_4_ = -1;
        }
        else {
          FUN_146be9922(&local_68);
          lVar7 = local_68;
          uVar8 = local_60;
        }
        iVar9 = iVar9 + 1;
      } while (((lVar7 != lVar1) || (uVar8 != param_2)) ||
              (((int)local_50 != -1 || (local_50._4_4_ != -1))));
      dVar12 = 1.0 / (double)iVar9;
      *param_3 = *param_3 * dVar12;
      param_3[1] = param_3[1] * dVar12;
      param_3[2] = dVar12 * param_3[2];
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c14204 FUN_146c14204 body=1098 status=ok
// SIG undefined FUN_146c14204(void)

double * FUN_146c14204(longlong param_1,double *param_2,uint param_3,char param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_5 == (double *)0x0) && (*(char *)(param_1 + 0x70) == '\0')) {
    param_2[2] = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar1;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 1.0;
  }
  else {
    uVar9 = (ulonglong)(param_3 >> 9);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar9 * 8);
    uVar11 = (ulonglong)(param_3 & 0x1ff);
    dVar1 = *(double *)(lVar4 + uVar11 * 0x18);
    dVar2 = *(double *)(lVar4 + 8 + uVar11 * 0x18);
    dVar3 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
    if (param_5 == (double *)0x0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar9 * 8);
      local_c0 = (double)*(float *)(lVar4 + 8 + uVar11 * 0xc);
      local_d8 = (double)*(float *)(lVar4 + 4 + uVar11 * 0xc);
      local_f0 = (double)*(float *)(lVar4 + uVar11 * 0xc);
    }
    else {
      dVar5 = *param_5;
      dVar6 = param_5[1];
      dVar7 = param_5[2];
      dVar12 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
      local_f0 = 0.0;
      local_d8 = 0.0;
      local_c0 = 0.0;
      if (0.0 < dVar12) {
        dVar12 = 1.0 / dVar12;
        local_c0 = dVar7 * dVar12;
        local_d8 = dVar6 * dVar12;
        local_f0 = dVar5 * dVar12;
      }
    }
    uVar10 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + uVar9 * 8) + uVar11 * 4) + 1;
    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
    uVar9 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(uVar10 >> 9) * 8) +
             (ulonglong)((uVar10 & 0x1ff) << 4));
    uVar11 = 0xffffffff;
    if ((uint)(uVar9 >> 0x20) == param_3) {
      uVar11 = uVar9 & 0xffffffff;
    }
    if ((uint)uVar9 == param_3) {
      uVar11 = uVar9 >> 0x20;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (uVar11 >> 9) * 8);
    uVar9 = (ulonglong)((uint)uVar11 & 0x1ff);
    dVar5 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18) - dVar3;
    dVar7 = *(double *)(lVar4 + 8 + uVar9 * 0x18) - dVar2;
    dVar12 = *(double *)(lVar4 + uVar9 * 0x18) - dVar1;
    dVar6 = SQRT(dVar5 * dVar5 + dVar12 * dVar12 + dVar7 * dVar7);
    dVar8 = 1.0 / dVar6;
    if (0.0 < dVar6) {
      dVar12 = dVar12 * dVar8;
      dVar7 = dVar7 * dVar8;
    }
    else {
      dVar12 = 0.0;
      dVar7 = 0.0;
    }
    dVar5 = (double)(-(ulonglong)(0.0 < dVar6) & (ulonglong)(dVar5 * dVar8));
    local_c8 = local_f0 * dVar7 - dVar12 * local_d8;
    local_e0 = local_c0 * dVar12 - dVar5 * local_f0;
    local_f8 = local_d8 * dVar5 - dVar7 * local_c0;
    local_d0 = local_f8 * local_d8 - local_f0 * local_e0;
    local_e8 = local_c8 * local_f0 - local_c0 * local_f8;
    local_100 = local_e0 * local_c0 - local_d8 * local_c8;
    *param_2 = dVar1;
    param_2[1] = dVar2;
    param_2[2] = dVar3;
    if (param_4 != '\0') {
      dVar2 = -local_e0;
      dVar3 = -local_f8;
      dVar1 = -local_c8;
      local_f8 = local_f0;
      local_f0 = dVar3;
      local_e0 = local_d8;
      local_d8 = dVar2;
      local_c8 = local_c0;
      local_c0 = dVar1;
    }
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0x3ff0000000000000;
    FUN_146bfbbda(&local_b8);
    *(undefined4 *)(param_2 + 5) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_2 + 0x2c) = local_a8._4_4_;
    *(undefined4 *)(param_2 + 6) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_2 + 0x34) = uStack_a0._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_2 + 0x1c) = local_b8._4_4_;
    *(undefined4 *)(param_2 + 4) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0x24) = uStack_b0._4_4_;
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146c14650 FUN_146c14650 body=300 status=ok
// SIG undefined FUN_146c14650(void)

double FUN_146c14650(longlong param_1,uint param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar7 = (ulonglong)(param_2 & 0x1ff);
  uVar2 = *(uint *)(lVar5 + uVar7 * 0xc);
  uVar3 = *(uint *)(lVar5 + 4 + uVar7 * 0xc);
  lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
  uVar8 = (ulonglong)uVar2 & 0x1ff;
  dVar9 = *(double *)(lVar6 + uVar8 * 0x18);
  dVar12 = *(double *)(lVar6 + 8 + uVar8 * 0x18);
  dVar1 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18);
  lVar6 = *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8);
  uVar8 = (ulonglong)uVar3 & 0x1ff;
  uVar2 = *(uint *)(lVar5 + 8 + uVar7 * 0xc);
  lVar4 = *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8);
  uVar7 = (ulonglong)uVar2 & 0x1ff;
  dVar14 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18) - dVar1;
  dVar11 = *(double *)(lVar6 + 8 + uVar8 * 0x18) - dVar12;
  dVar13 = *(double *)(lVar6 + uVar8 * 0x18) - dVar9;
  dVar1 = *(double *)(lVar4 + 0x10 + uVar7 * 0x18) - dVar1;
  dVar12 = *(double *)(lVar4 + 8 + uVar7 * 0x18) - dVar12;
  dVar9 = *(double *)(lVar4 + uVar7 * 0x18) - dVar9;
  dVar10 = dVar9 * dVar11 - dVar13 * dVar12;
  dVar13 = dVar1 * dVar13 - dVar14 * dVar9;
  dVar9 = dVar12 * dVar14 - dVar1 * dVar11;
  return SQRT(dVar10 * dVar10 + dVar9 * dVar9 + dVar13 * dVar13) * 0.5;
}



// FUNCTION 146c1477c FUN_146c1477c body=367 status=ok
// SIG undefined FUN_146c1477c(void)

void FUN_146c1477c(longlong param_1,uint param_2,undefined4 *param_3,undefined8 param_4,
                  double *param_5)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar6 = (ulonglong)(param_2 & 0x1ff);
  uVar2 = *(uint *)(lVar4 + uVar6 * 0xc);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar7 = (ulonglong)uVar2 & 0x1ff;
  local_38 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar7 * 0x18);
  local_48 = *pdVar1;
  dStack_40 = pdVar1[1];
  uVar2 = *(uint *)(lVar4 + 4 + uVar6 * 0xc);
  lVar5 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar7 = (ulonglong)uVar2 & 0x1ff;
  local_58 = *(double *)(lVar5 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar5 + uVar7 * 0x18);
  local_68 = *pdVar1;
  dStack_60 = pdVar1[1];
  uVar2 = *(uint *)(lVar4 + 8 + uVar6 * 0xc);
  lVar3 = *(longlong *)(lVar3 + (ulonglong)(uVar2 >> 9) * 8);
  uVar6 = (ulonglong)uVar2 & 0x1ff;
  local_78 = *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  local_88 = *pdVar1;
  dStack_80 = pdVar1[1];
  *param_5 = (local_48 + local_68 + local_88) * 0.3333333333333333;
  param_5[1] = (dStack_40 + dStack_60 + dStack_80) * 0.3333333333333333;
  param_5[2] = (local_38 + local_58 + local_78) * 0.3333333333333333;
  local_a8 = param_4;
  FUN_146b9cae0(&local_a0,&local_48,&local_68,&local_88);
  *(undefined8 *)(param_3 + 4) = local_90;
  *param_3 = local_a0;
  param_3[1] = uStack_9c;
  param_3[2] = uStack_98;
  param_3[3] = uStack_94;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c148ec FUN_146c148ec body=244 status=ok
// SIG undefined FUN_146c148ec(void)

void FUN_146c148ec(longlong param_1,double *param_2,uint param_3,double param_4,double param_5,
                  double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar13 = (ulonglong)(param_3 & 0x1ff);
  uVar7 = *(uint *)(lVar10 + uVar13 * 0xc);
  uVar8 = *(uint *)(lVar10 + 4 + uVar13 * 0xc);
  lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar14 = (ulonglong)uVar7 & 0x1ff;
  dVar1 = *(double *)(lVar11 + 0x10 + uVar14 * 0x18);
  dVar2 = *(double *)(lVar11 + 8 + uVar14 * 0x18);
  lVar12 = *(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8);
  uVar15 = (ulonglong)uVar8 & 0x1ff;
  dVar3 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  dVar4 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  uVar7 = *(uint *)(lVar10 + 8 + uVar13 * 0xc);
  lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar13 = (ulonglong)uVar7 & 0x1ff;
  dVar5 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
  dVar6 = *(double *)(lVar9 + 8 + uVar13 * 0x18);
  *param_2 = param_6 * *(double *)(lVar9 + uVar13 * 0x18) +
             param_5 * *(double *)(lVar12 + uVar15 * 0x18) +
             param_4 * *(double *)(lVar11 + uVar14 * 0x18);
  param_2[1] = dVar6 * param_6 + dVar4 * param_5 + dVar2 * param_4;
  param_2[2] = dVar5 * param_6 + dVar3 * param_5 + dVar1 * param_4;
  return;
}



// FUNCTION 146c149e0 FUN_146c149e0 body=204 status=ok
// SIG undefined FUN_146c149e0(void)

void FUN_146c149e0(longlong param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar13 = (ulonglong)(param_3 & 0x1ff);
  uVar7 = *(uint *)(lVar10 + uVar13 * 0xc);
  uVar8 = *(uint *)(lVar10 + 4 + uVar13 * 0xc);
  lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar14 = (ulonglong)uVar7 & 0x1ff;
  lVar12 = *(longlong *)(lVar9 + (ulonglong)(uVar8 >> 9) * 8);
  uVar15 = (ulonglong)uVar8 & 0x1ff;
  dVar1 = *(double *)(lVar11 + 0x10 + uVar14 * 0x18);
  dVar2 = *(double *)(lVar12 + 0x10 + uVar15 * 0x18);
  dVar3 = *(double *)(lVar11 + 8 + uVar14 * 0x18);
  dVar4 = *(double *)(lVar12 + 8 + uVar15 * 0x18);
  uVar7 = *(uint *)(lVar10 + 8 + uVar13 * 0xc);
  lVar9 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 9) * 8);
  uVar13 = (ulonglong)uVar7 & 0x1ff;
  dVar5 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
  dVar6 = *(double *)(lVar9 + 8 + uVar13 * 0x18);
  *param_2 = (*(double *)(lVar11 + uVar14 * 0x18) + *(double *)(lVar12 + uVar15 * 0x18) +
             *(double *)(lVar9 + uVar13 * 0x18)) * 0.3333333333333333;
  param_2[1] = (dVar3 + dVar4 + dVar6) * 0.3333333333333333;
  param_2[2] = (dVar1 + dVar2 + dVar5) * 0.3333333333333333;
  return;
}



// FUNCTION 146c14aac FUN_146c14aac body=142 status=ok
// SIG undefined FUN_146c14aac(void)

undefined8 FUN_146c14aac(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar6 = (ulonglong)(param_3 & 0x1ff);
  uVar1 = *(uint *)(lVar5 + uVar6 * 0xc);
  uVar2 = *(uint *)(lVar5 + 4 + uVar6 * 0xc);
  uVar3 = *(uint *)(lVar5 + 8 + uVar6 * 0xc);
  FUN_146bda344(param_2,(ulonglong)((uVar1 & 0x1ff) * 0x18) +
                        *(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8),
                (ulonglong)((uVar2 & 0x1ff) * 0x18) +
                *(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8),
                (ulonglong)((uVar3 & 0x1ff) * 0x18) +
                *(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8));
  return param_2;
}



// FUNCTION 146c14b3a FUN_146c14b3a body=1233 status=ok
// SIG undefined FUN_146c14b3a(void)

double * FUN_146c14b3a(longlong param_1,double *param_2,uint param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_178 [40];
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
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar15 = (ulonglong)(param_3 & 0x1ff) * 0xc +
           *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  lVar7 = *(longlong *)(param_1 + 0x10);
  uVar6 = *(uint *)(lVar15 + (longlong)(param_4 % 3) * 4);
  lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
  uVar14 = (ulonglong)uVar6 & 0x1ff;
  dVar1 = *(double *)(lVar8 + uVar14 * 0x18);
  dVar2 = *(double *)(lVar8 + 8 + uVar14 * 0x18);
  dVar3 = *(double *)(lVar8 + 0x10 + uVar14 * 0x18);
  uVar6 = *(uint *)(lVar15 + (longlong)(((param_4 + 1) / 3) * -3 + param_4 + 1) * 4);
  lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
  uVar14 = (ulonglong)uVar6 & 0x1ff;
  local_150 = *(double *)(lVar8 + uVar14 * 0x18);
  dVar4 = *(double *)(lVar8 + 8 + uVar14 * 0x18);
  dVar5 = *(double *)(lVar8 + 0x10 + uVar14 * 0x18);
  uVar6 = *(uint *)(lVar15 + (longlong)(((param_4 + 2) / 3) * -3 + param_4 + 2) * 4);
  lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
  uVar14 = (ulonglong)uVar6 & 0x1ff;
  local_138 = *(double *)(lVar7 + uVar14 * 0x18);
  local_140 = *(double *)(lVar7 + 8 + uVar14 * 0x18);
  local_148 = *(double *)(lVar7 + 0x10 + uVar14 * 0x18);
  dVar17 = dVar5 - dVar3;
  local_118 = dVar4 - dVar2;
  local_130 = local_150 - dVar1;
  dVar9 = SQRT(dVar17 * dVar17 + local_130 * local_130 + local_118 * local_118);
  dVar10 = 1.0 / dVar9;
  if (0.0 < dVar9) {
    local_130 = local_130 * dVar10;
    local_118 = local_118 * dVar10;
  }
  else {
    local_130 = 0.0;
    local_118 = 0.0;
  }
  dVar12 = local_148 - dVar5;
  dVar13 = local_140 - dVar4;
  dVar16 = local_138 - local_150;
  dVar11 = SQRT(dVar12 * dVar12 + dVar16 * dVar16 + dVar13 * dVar13);
  local_100 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar17 * dVar10));
  dVar9 = 1.0 / dVar11;
  if (0.0 < dVar11) {
    dVar16 = dVar16 * dVar9;
    dVar13 = dVar13 * dVar9;
  }
  else {
    dVar16 = 0.0;
    dVar13 = 0.0;
  }
  dVar9 = (double)(-(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar12 * dVar9));
  dVar17 = dVar16 * local_118 - local_130 * dVar13;
  local_108 = dVar9 * local_130 - local_100 * dVar16;
  local_120 = dVar13 * local_100 - local_118 * dVar9;
  dVar9 = SQRT(dVar17 * dVar17 + local_120 * local_120 + local_108 * local_108);
  dVar10 = 1.0 / dVar9;
  if (0.0 < dVar9) {
    local_120 = local_120 * dVar10;
    local_108 = local_108 * dVar10;
  }
  else {
    local_120 = 0.0;
    local_108 = 0.0;
  }
  local_f0 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(dVar17 * dVar10));
  local_f8 = local_120 * local_118 - local_130 * local_108;
  local_110 = local_f0 * local_130 - local_100 * local_120;
  local_128 = local_108 * local_100 - local_118 * local_f0;
  *param_2 = (dVar1 + local_150 + local_138) * 0.3333333333333333;
  param_2[1] = (dVar2 + dVar4 + local_140) * 0.3333333333333333;
  param_2[2] = (dVar3 + dVar5 + local_148) * 0.3333333333333333;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0x3ff0000000000000;
  FUN_146bfbbda(&local_e8);
  *(undefined4 *)(param_2 + 5) = (undefined4)local_d8;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_d8._4_4_;
  *(undefined4 *)(param_2 + 6) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_d0._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_e8._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_e0._4_4_;
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1500c FUN_146c1500c body=1085 status=ok
// SIG undefined FUN_146c1500c(void)

void FUN_146c1500c(longlong param_1,uint param_2,int param_3)

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
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  uVar11 = (ulonglong)(param_2 & 0x1ff);
  uVar5 = *(uint *)(lVar8 + uVar11 * 0xc);
  uVar6 = *(uint *)(lVar8 + 4 + uVar11 * 0xc);
  lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
  uVar12 = (ulonglong)uVar5 & 0x1ff;
  dVar16 = *(double *)(lVar9 + uVar12 * 0x18);
  dVar15 = *(double *)(lVar9 + 8 + uVar12 * 0x18);
  dVar14 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
  uVar12 = (ulonglong)uVar6 & 0x1ff;
  dVar1 = *(double *)(lVar9 + uVar12 * 0x18);
  dVar18 = *(double *)(lVar9 + 8 + uVar12 * 0x18);
  dVar17 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  uVar5 = *(uint *)(lVar8 + 8 + uVar11 * 0xc);
  lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
  uVar11 = (ulonglong)uVar5 & 0x1ff;
  dVar2 = *(double *)(lVar7 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar7 + 8 + uVar11 * 0x18);
  dVar4 = *(double *)(lVar7 + 0x10 + uVar11 * 0x18);
  if (param_3 == 1) {
    dVar4 = dVar4 - dVar17;
    dVar3 = dVar3 - dVar18;
    dVar2 = dVar2 - dVar1;
    dVar19 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
    dVar10 = 1.0 / dVar19;
    if (0.0 < dVar19) {
      dVar4 = dVar4 * dVar10;
      dVar3 = dVar3 * dVar10;
    }
    else {
      dVar3 = 0.0;
      dVar4 = 0.0;
    }
    dVar14 = dVar14 - dVar17;
    dVar15 = dVar15 - dVar18;
    dVar16 = dVar16 - dVar1;
    dVar18 = SQRT(dVar14 * dVar14 + dVar16 * dVar16 + dVar15 * dVar15);
    dVar1 = 1.0 / dVar18;
    if (0.0 < dVar18) {
      dVar14 = dVar14 * dVar1;
      dVar15 = dVar15 * dVar1;
    }
    else {
      dVar14 = 0.0;
      dVar15 = 0.0;
    }
    dVar14 = dVar14 * dVar4;
    dVar15 = dVar15 * dVar3;
    dVar16 = (double)(-(ulonglong)(0.0 < dVar18) & (ulonglong)(dVar16 * dVar1)) *
             (double)(-(ulonglong)(0.0 < dVar19) & (ulonglong)(dVar2 * dVar10));
  }
  else {
    if (param_3 == 0) {
      dVar4 = dVar4 - dVar14;
      dVar3 = dVar3 - dVar15;
      dVar2 = dVar2 - dVar16;
      dVar10 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
      dVar19 = 0.0;
      dVar13 = 1.0 / dVar10;
      if (0.0 < dVar10) {
        dVar4 = dVar4 * dVar13;
        dVar3 = dVar3 * dVar13;
      }
      else {
        dVar3 = 0.0;
        dVar4 = 0.0;
      }
      dVar17 = dVar17 - dVar14;
      dVar18 = dVar18 - dVar15;
      dVar1 = dVar1 - dVar16;
      dVar15 = SQRT(dVar17 * dVar17 + dVar1 * dVar1 + dVar18 * dVar18);
      dVar16 = 1.0 / dVar15;
      if (0.0 < dVar15) {
        dVar17 = dVar17 * dVar16;
        dVar19 = dVar18 * dVar16;
      }
      else {
        dVar17 = 0.0;
      }
      dVar14 = (double)(-(ulonglong)(0.0 < dVar15) & (ulonglong)(dVar1 * dVar16)) *
               (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar2 * dVar13)) + dVar19 * dVar3 +
               dVar17 * dVar4;
      goto LAB_146c153e6;
    }
    dVar17 = dVar17 - dVar4;
    dVar18 = dVar18 - dVar3;
    dVar1 = dVar1 - dVar2;
    dVar19 = SQRT(dVar17 * dVar17 + dVar1 * dVar1 + dVar18 * dVar18);
    dVar10 = 1.0 / dVar19;
    if (0.0 < dVar19) {
      dVar17 = dVar17 * dVar10;
      dVar18 = dVar18 * dVar10;
    }
    else {
      dVar17 = 0.0;
      dVar18 = 0.0;
    }
    dVar14 = dVar14 - dVar4;
    dVar15 = dVar15 - dVar3;
    dVar16 = dVar16 - dVar2;
    dVar2 = SQRT(dVar14 * dVar14 + dVar16 * dVar16 + dVar15 * dVar15);
    dVar3 = 1.0 / dVar2;
    if (0.0 < dVar2) {
      dVar14 = dVar14 * dVar3;
      dVar15 = dVar15 * dVar3;
    }
    else {
      dVar14 = 0.0;
      dVar15 = 0.0;
    }
    dVar14 = dVar14 * dVar17;
    dVar15 = dVar15 * dVar18;
    dVar16 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)(dVar16 * dVar3)) *
             (double)(-(ulonglong)(0.0 < dVar19) & (ulonglong)(dVar1 * dVar10));
  }
  dVar14 = dVar16 + dVar15 + dVar14;
LAB_146c153e6:
  dVar16 = 1.0;
  if (dVar14 <= 1.0) {
    dVar16 = dVar14;
  }
  acos((double)(-(ulonglong)(dVar14 < -1.0) & 0xbff0000000000000 |
               ~-(ulonglong)(dVar14 < -1.0) & (ulonglong)dVar16));
  return;
}



// FUNCTION 146c1544a FUN_146c1544a body=976 status=ok
// SIG undefined FUN_146c1544a(void)

double * FUN_146c1544a(longlong param_1,double *param_2,uint param_3)

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
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar12 = (ulonglong)(param_3 & 0x1ff);
  uVar5 = *(uint *)(lVar8 + uVar12 * 0xc);
  uVar6 = *(uint *)(lVar8 + 4 + uVar12 * 0xc);
  lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
  uVar13 = (ulonglong)uVar5 & 0x1ff;
  dVar15 = *(double *)(lVar9 + uVar13 * 0x18);
  dVar17 = *(double *)(lVar9 + 8 + uVar13 * 0x18);
  dVar18 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
  lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
  uVar13 = (ulonglong)uVar6 & 0x1ff;
  dVar20 = *(double *)(lVar9 + uVar13 * 0x18);
  dVar1 = *(double *)(lVar9 + 8 + uVar13 * 0x18);
  dVar2 = *(double *)(lVar9 + 0x10 + uVar13 * 0x18);
  uVar5 = *(uint *)(lVar8 + 8 + uVar12 * 0xc);
  lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
  uVar12 = (ulonglong)uVar5 & 0x1ff;
  dVar14 = *(double *)(lVar7 + uVar12 * 0x18);
  dVar21 = dVar2 - dVar18;
  dVar11 = dVar1 - dVar17;
  dVar10 = dVar20 - dVar15;
  dVar16 = SQRT(dVar21 * dVar21 + dVar10 * dVar10 + dVar11 * dVar11);
  dVar3 = *(double *)(lVar7 + 8 + uVar12 * 0x18);
  dVar19 = 1.0 / dVar16;
  dVar4 = *(double *)(lVar7 + 0x10 + uVar12 * 0x18);
  if (0.0 < dVar16) {
    dVar21 = dVar21 * dVar19;
    dVar11 = dVar11 * dVar19;
  }
  else {
    dVar11 = 0.0;
    dVar21 = 0.0;
  }
  dVar10 = (double)(-(ulonglong)(0.0 < dVar16) & (ulonglong)(dVar10 * dVar19));
  dVar2 = dVar4 - dVar2;
  dVar1 = dVar3 - dVar1;
  dVar20 = dVar14 - dVar20;
  dVar16 = SQRT(dVar2 * dVar2 + dVar20 * dVar20 + dVar1 * dVar1);
  dVar19 = 1.0 / dVar16;
  if (0.0 < dVar16) {
    dVar2 = dVar2 * dVar19;
    dVar1 = dVar1 * dVar19;
  }
  else {
    dVar1 = 0.0;
    dVar2 = 0.0;
  }
  dVar4 = dVar4 - dVar18;
  dVar3 = dVar3 - dVar17;
  dVar14 = dVar14 - dVar15;
  dVar17 = SQRT(dVar4 * dVar4 + dVar14 * dVar14 + dVar3 * dVar3);
  dVar15 = (double)(-(ulonglong)(0.0 < dVar16) & (ulonglong)(dVar20 * dVar19));
  dVar18 = 1.0 / dVar17;
  if (0.0 < dVar17) {
    dVar4 = dVar4 * dVar18;
    dVar3 = dVar3 * dVar18;
  }
  else {
    dVar4 = 0.0;
    dVar3 = 0.0;
  }
  dVar17 = (double)(-(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar14 * dVar18));
  dVar20 = dVar4 * dVar2 + dVar17 * dVar15 + dVar3 * dVar1;
  dVar18 = 1.0;
  if (dVar20 <= 1.0) {
    dVar18 = dVar20;
  }
  dVar18 = acos((double)(-(ulonglong)(dVar20 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar20 < -1.0) & (ulonglong)dVar18));
  dVar20 = (-dVar10 * dVar15 - dVar1 * dVar11) - dVar2 * dVar21;
  dVar15 = 1.0;
  if (dVar20 <= 1.0) {
    dVar15 = dVar20;
  }
  dVar20 = acos((double)(-(ulonglong)(dVar20 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar20 < -1.0) & (ulonglong)dVar15));
  dVar17 = dVar21 * dVar4 + dVar10 * dVar17 + dVar11 * dVar3;
  dVar15 = 1.0;
  if (dVar17 <= 1.0) {
    dVar15 = dVar17;
  }
  dVar15 = acos((double)(-(ulonglong)(dVar17 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar17 < -1.0) & (ulonglong)dVar15));
  *param_2 = dVar15;
  param_2[1] = dVar20;
  param_2[2] = dVar18;
  return param_2;
}



// FUNCTION 146c1581a FUN_146c1581a body=113 status=ok
// SIG undefined FUN_146c1581a(void)

void FUN_146c1581a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  if (*(char *)(param_6 + 2) == '\x01') {
    FUN_146c4e7a0(param_2,param_1);
  }
  else {
    FUN_146c4e9f0(param_2,param_1);
  }
  FUN_146c1588b(param_1,param_3,param_6);
  FUN_146c1588b(param_1,param_4,param_6);
  FUN_146c1594c(param_1,param_5,param_6);
  return;
}



// FUNCTION 146c1588b FUN_146c1588b body=192 status=ok
// SIG undefined FUN_146c1588b(void)

void FUN_146c1588b(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_2c = (uint)*(byte *)(param_2 + 0x18);
    (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    uVar3 = local_2c;
    if (1 < local_2c) {
      FUN_14572541c(param_1);
      uVar3 = local_2c;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 != 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146c4f39a(param_2);
    }
    if (*(char *)(param_3 + 2) == '\x01') {
      FUN_146c4f3d6(param_2,param_1);
    }
    else {
      FUN_146c4f620(param_2,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1594c FUN_146c1594c body=192 status=ok
// SIG undefined FUN_146c1594c(void)

void FUN_146c1594c(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_2c = (uint)*(byte *)(param_2 + 0x18);
    (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    uVar3 = local_2c;
    if (1 < local_2c) {
      FUN_14572541c(param_1);
      uVar3 = local_2c;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 != 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146c4ffe6(param_2);
    }
    if (*(char *)(param_3 + 2) == '\x01') {
      FUN_146c50022(param_2,param_1);
    }
    else {
      FUN_146c50264(param_2,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c15a0d FUN_146c15a0d body=167 status=ok
// SIG undefined FUN_146c15a0d(void)

void FUN_146c15a0d(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_5 + 2) == '\x01') {
    FUN_146c50c50(param_2,param_1);
  }
  else {
    FUN_146c50e9c(param_2,param_1);
  }
  FUN_146c15ab4(param_1,param_3,param_5);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146c15a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x170))(param_1,param_4,4);
      return;
    }
    thunk_FUN_14572512c(param_1,param_4);
    return;
  }
  *param_4 = *puVar1;
  *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  return;
}



// FUNCTION 146c15ab4 FUN_146c15ab4 body=192 status=ok
// SIG undefined FUN_146c15ab4(void)

void FUN_146c15ab4(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_2c = (uint)*(byte *)(param_2 + 0x18);
    (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    uVar3 = local_2c;
    if (1 < local_2c) {
      FUN_14572541c(param_1);
      uVar3 = local_2c;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 != 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146c061a4(param_2);
    }
    if (*(char *)(param_3 + 2) == '\x01') {
      FUN_146c44e9c(param_2,param_1);
    }
    else {
      FUN_146c41ff8(param_2,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c15b76 FUN_146c15b76 body=692 status=ok
// SIG undefined FUN_146c15b76(void)

void FUN_146c15b76(int *param_1,longlong *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar4 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar4)) {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_34 = param_3 & 0xff;
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      uVar5 = local_34;
      if (1 < local_34) {
        FUN_14572541c(param_2);
        uVar5 = local_34;
      }
    }
    else {
      uVar5 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_34 = param_4 & 0xff;
      (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      uVar10 = local_34;
      if (1 < local_34) {
        FUN_14572541c(param_2);
        uVar10 = local_34;
      }
    }
    else {
      uVar10 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    piVar2 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xc,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      param_1[0xc] = *piVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    if (uVar10 == 0) {
      FUN_146c41db4();
    }
    else {
      FUN_146c41b70(param_1,param_2);
    }
    iVar4 = param_1[0xc];
    uVar9 = (ulonglong)(uint)(*param_1 * 0x200 + param_1[1]);
    if (uVar9 == (longlong)iVar4) {
      if (((*(byte *)(param_2 + 5) & 1) != 0) && ((param_1[6] != 0 || (param_1[7] != 0)))) {
        FUN_1411b3fe4(param_1 + 6);
      }
    }
    else if (uVar10 == 0 && uVar5 == 0) {
      FUN_146c41ff8(param_1 + 6,param_2);
    }
    else if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_1411b328a();
      uVar5 = *param_1 * 0x200 + param_1[1];
      if (uVar5 != 0) {
        uVar8 = 0;
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 2) + (uVar8 >> 9 & 0x7fffff) * 8) +
                        (ulonglong)((uint)uVar8 & 0x1ff) * 2) == -1) {
            uVar7 = uVar6 + 1;
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + (uVar6 >> 9 & 0x7fffff) * 8) +
                     (ulonglong)((uint)uVar6 & 0x1ff) * 4) = (uint)uVar8;
          }
          uVar8 = uVar8 + 1;
        } while ((uVar8 < uVar5) && (uVar6 = uVar7, uVar7 < uVar9 - (longlong)iVar4));
      }
    }
  }
  else {
    FUN_146c4223a(param_1,param_2);
    FUN_146c45ad4(param_1 + 6,param_2);
    piVar2 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    param_1[0xc] = *piVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c15e5c FUN_146c15e5c body=92 status=ok
// SIG undefined FUN_146c15e5c(void)

void FUN_146c15e5c(undefined4 param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_1411b3fe4(param_2 + 0x18);
  FUN_146c41884(param_2,param_1);
  *(undefined4 *)(param_2 + 0x30) = param_1;
  iVar1 = *(int *)(param_2 + 0x10);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined2 *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + (longlong)(int)uVar2 * 8) + lVar3 * 2) = 1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 146c15eb8 FUN_146c15eb8 body=648 status=ok
// SIG undefined FUN_146c15eb8(void)

void FUN_146c15eb8(longlong param_1,longlong param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  
  FUN_146c41884();
  iVar5 = *(int *)(param_4 + 0x10);
  if ((longlong)iVar5 != 0) {
    uVar4 = 0;
    do {
      lVar8 = 0;
      do {
        *(undefined2 *)
         (*(longlong *)(*(longlong *)(param_4 + 8) + (longlong)(int)uVar4 * 8) + lVar8 * 2) = 0xffff
        ;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x200);
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < (ulonglong)(longlong)iVar5);
  }
  *(undefined4 *)(param_4 + 0x30) = 0;
  iVar5 = 0;
  uVar2 = *param_3 * 0x200 + param_3[1];
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = 0;
    if (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_3 + 2) - 1U)) {
      uVar7 = 1;
      uVar6 = 1;
      if (1 < (int)uVar2) {
        uVar7 = uVar2;
      }
      do {
        uVar3 = uVar7;
        if (uVar7 == uVar6) break;
        uVar9 = uVar6 >> 9;
        uVar11 = uVar6 & 0x1ff;
        uVar3 = uVar6;
        uVar6 = uVar6 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_3 + 2))[uVar9] +
                                           (ulonglong)uVar11 * 2) - 1U));
    }
  }
  if (uVar3 != uVar2) {
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 8) + (ulonglong)(uVar3 >> 9) * 8);
      uVar7 = *(uint *)(lVar8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
      lVar1 = *(longlong *)(*(longlong *)(param_4 + 8) + (ulonglong)(uVar7 >> 9) * 8);
      uVar7 = uVar7 & 0x1ff;
      sVar10 = *(short *)(lVar1 + (ulonglong)uVar7 * 2);
      if (sVar10 == -1) {
        *(int *)(param_4 + 0x30) = *(int *)(param_4 + 0x30) + 1;
        sVar10 = 2;
      }
      else {
        sVar10 = sVar10 + 1;
      }
      lVar8 = lVar8 + (ulonglong)(uVar3 & 0x1ff) * 0xc;
      *(short *)(lVar1 + (ulonglong)uVar7 * 2) = sVar10;
      uVar7 = *(uint *)(lVar8 + 4);
      lVar1 = *(longlong *)(*(longlong *)(param_4 + 8) + (ulonglong)(uVar7 >> 9) * 8);
      uVar7 = uVar7 & 0x1ff;
      sVar10 = *(short *)(lVar1 + (ulonglong)uVar7 * 2);
      if (sVar10 == -1) {
        *(int *)(param_4 + 0x30) = *(int *)(param_4 + 0x30) + 1;
        sVar10 = 2;
      }
      else {
        sVar10 = sVar10 + 1;
      }
      *(short *)(lVar1 + (ulonglong)uVar7 * 2) = sVar10;
      uVar7 = *(uint *)(lVar8 + 8);
      lVar8 = *(longlong *)(*(longlong *)(param_4 + 8) + (ulonglong)(uVar7 >> 9) * 8);
      uVar7 = uVar7 & 0x1ff;
      sVar10 = *(short *)(lVar8 + (ulonglong)uVar7 * 2);
      if (sVar10 == -1) {
        *(int *)(param_4 + 0x30) = *(int *)(param_4 + 0x30) + 1;
        sVar10 = 2;
      }
      else {
        sVar10 = sVar10 + 1;
      }
      *(short *)(lVar8 + (ulonglong)uVar7 * 2) = sVar10;
      uVar7 = uVar3 + 1;
      if ((int)(uVar3 + 1) < (int)uVar2) {
        uVar7 = uVar2;
      }
      do {
        uVar6 = uVar7;
        if (uVar7 - 1 == uVar3) break;
        uVar3 = uVar3 + 1;
        uVar6 = uVar3;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_3 + 2) +
                                             (ulonglong)(uVar3 >> 9) * 8) +
                                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U));
      uVar3 = uVar6;
    } while (uVar3 != uVar2);
    iVar5 = *(int *)(param_4 + 0x30);
  }
  uVar3 = (uint)param_1 - iVar5;
  FUN_1411b328a(param_4 + 0x18,uVar3);
  if (param_1 != 0 && uVar3 != 0) {
    uVar2 = 0;
    uVar7 = 1;
    do {
      uVar6 = uVar7 - 1;
      if (*(short *)(*(longlong *)(*(longlong *)(param_4 + 8) + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)(uVar6 & 0x1ff) * 2) == -1) {
        *(uint *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
                 (ulonglong)(uVar2 & 0x1ff) * 4) = uVar6;
        uVar2 = uVar2 + 1;
      }
    } while ((uVar7 < (uint)param_1) && (uVar7 = uVar7 + 1, uVar2 < uVar3));
  }
  return;
}



// FUNCTION 146c16140 FUN_146c16140 body=200 status=ok
// SIG undefined FUN_146c16140(void)

void FUN_146c16140(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_34 = (uint)(*(longlong *)(param_2 + 0x208) != 0);
    (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    uVar3 = local_34;
    if (1 < local_34) {
      FUN_14572541c(param_1);
      uVar3 = local_34;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 != 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14582ed12(param_2);
    }
    FUN_146c1620a(*(undefined8 *)(param_2 + 0x208),param_1,param_3,*(undefined1 *)(param_4 + 2));
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1620a FUN_146c1620a body=2234 status=ok
// SIG undefined FUN_146c1620a(void)

void FUN_146c1620a(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_178 [47];
  undefined1 local_149;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong *local_110;
  undefined2 local_108;
  undefined *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_5c;
  int local_54;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  uVar12 = param_4 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar8)) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_f8 = (undefined **)(CONCAT44(local_f8._4_4_,(int)param_4) & 0xffffffff000000ff);
      (**(code **)(*param_2 + 0x170))(param_2,&local_f8,4);
      uVar14 = (uint)local_f8;
      if (1 < (uint)local_f8) {
        FUN_14572541c(param_2);
        uVar14 = (uint)local_f8;
      }
    }
    else {
      uVar14 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    uVar12 = CONCAT71((int7)(uVar12 >> 8),uVar14 != 0);
    FUN_146c249a5(param_1 + 0x20,param_2,param_3,uVar12);
    FUN_146c24ad5(param_1 + 0x30,param_2,param_3,uVar12);
    FUN_146c24c05(param_1 + 0x60,param_2,param_3,uVar12);
    if (((*(byte *)(param_2 + 5) & 1) == 0) ||
       (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x3d < iVar8)) {
      FUN_146c24d59(param_1 + 0x50,param_2,param_3,uVar14 != 0);
    }
    bVar7 = false;
  }
  else {
    FUN_146c244a8(param_2,param_1 + 0x20);
    FUN_146c24642(param_2,param_1 + 0x30);
    FUN_146c247dc(param_2,param_1 + 0x60);
    bVar7 = true;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar8 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar8 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      lVar13 = 0;
      do {
        **(undefined8 **)(lVar5 + lVar13) = uVar6;
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar8 * 8 != lVar13);
    }
    iVar8 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar8 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      lVar13 = 0;
      do {
        **(undefined8 **)(lVar5 + lVar13) = uVar6;
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar8 * 8 != lVar13);
    }
    iVar8 = *(int *)(param_1 + 0x68);
    if ((longlong)iVar8 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x60);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      lVar13 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar5 + lVar13) + 0x10) = uVar6;
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar8 * 8 != lVar13);
    }
    iVar8 = *(int *)(param_1 + 0x58);
    if ((longlong)iVar8 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      lVar13 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar5 + lVar13) + 0x10) = uVar6;
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar8 * 8 != lVar13);
    }
  }
  local_50 = (uint)(*(longlong *)(param_1 + 0x40) != 0);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_50);
    }
  }
  else {
    local_50 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (0 < (int)local_50) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146c17f82(param_1);
    }
    FUN_146c24eae(*(undefined8 *)(param_1 + 0x40),param_2,param_3,uVar12);
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_f8 = (undefined **)CONCAT44(local_f8._4_4_,(uint)(*(longlong *)(param_1 + 0x48) != 0));
    (**(code **)(*param_2 + 0x170))(param_2,&local_f8,4);
    uVar14 = (uint)local_f8;
    if (1 < (uint)local_f8) {
      FUN_14572541c(param_2);
      uVar14 = (uint)local_f8;
    }
  }
  else {
    uVar14 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (uVar14 != 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_14582ed9a(param_1);
    }
    FUN_146c2592a(*(undefined8 *)(param_1 + 0x48),param_2,param_3,uVar12);
  }
  if (!bVar7) {
    local_54 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4);
    puVar4 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_54,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar2;
    }
    plVar3 = (longlong *)(param_1 + 0x70);
    uVar11 = (undefined1)uVar12;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_f0 = param_1 + 0x80;
      local_f8 = (undefined **)&DAT_100000000;
      local_e8 = 0xffffffff;
      local_e0 = 0;
      if (*(int *)(param_1 + 0x98) != 0) {
        FUN_1449c0562(&local_f8);
      }
      local_138 = local_f8;
      local_130 = local_f0;
      local_128 = local_e8;
      uVar6 = local_128;
      local_120 = local_e0;
      local_11c = local_dc;
      local_108 = 0;
      local_128._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
      bVar7 = local_128._4_4_ < *(int *)(local_f0 + 0x18);
      local_140 = plVar3;
      local_128 = local_e8;
      local_118 = plVar3;
      local_110 = plVar3;
      if (bVar7) {
        local_149 = uVar11;
        local_128 = uVar6;
        do {
          FUN_140713482(&local_f8,param_2);
          local_f8 = &PTR_FUN_149f3b840;
          FUN_14170c100(&local_f8,(longlong)local_128._4_4_ * 0x18 + *local_140);
          plVar3 = (longlong *)(*local_140 + 8 + (longlong)local_128._4_4_ * 0x18);
          puVar4 = (ulonglong *)param_2[1];
          puVar1 = (uint *)*puVar4 + 1;
          if ((uint *)puVar4[1] < puVar1) {
            local_5c = CONCAT44(local_5c._4_4_,(uint)(*plVar3 != 0));
            (**(code **)(*param_2 + 0x170))(param_2,&local_5c,4);
            uVar14 = (uint)local_5c;
            if (1 < (uint)local_5c) {
              FUN_14572541c(param_2);
              uVar14 = (uint)local_5c;
            }
          }
          else {
            uVar14 = *(uint *)*puVar4;
            *puVar4 = (ulonglong)puVar1;
          }
          if (uVar14 != 0) {
            FUN_146c25afa(*plVar3,param_2,param_3,local_149);
          }
          FUN_14041e0ea(&local_f8);
          local_128 = CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
          FUN_1449c0562(&local_138);
        } while (local_128._4_4_ < *(int *)(local_130 + 0x18));
        if (((local_108 & 1) != 0) && (local_108._1_1_ == '\x01')) {
          FUN_146c5608a(local_110,(int)local_110[1] - *(int *)((longlong)local_110 + 0x34));
        }
      }
    }
    else {
      local_149 = uVar11;
      local_148 = param_3;
      if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
        FUN_146c54456(plVar3);
        FUN_146c5459a(plVar3);
      }
      if (0 < local_54) {
        iVar8 = 0;
        uVar14 = 0;
        do {
          local_5c = 0;
          FUN_140713482(&local_f8,param_2);
          local_f8 = &PTR_FUN_149f3b840;
          FUN_14170c100(&local_f8,&local_5c);
          local_100 = (undefined *)0x0;
          local_138 = &local_100;
          local_140 = &local_5c;
          FUN_146c56646(plVar3,&local_4c,&local_140);
          lVar13 = (longlong)local_4c;
          lVar5 = *plVar3;
          puVar4 = (ulonglong *)param_2[1];
          puVar1 = (uint *)*puVar4 + 1;
          if ((uint *)puVar4[1] < puVar1) {
            local_140 = (longlong *)CONCAT44(local_140._4_4_,uVar14);
            (**(code **)(*param_2 + 0x170))(param_2,&local_140,4);
            uVar14 = (uint)local_140;
            if (1 < (uint)local_140) {
              FUN_14572541c(param_2);
              uVar14 = (uint)local_140;
            }
          }
          else {
            uVar14 = *(uint *)*puVar4;
            *puVar4 = (ulonglong)puVar1;
          }
          if (uVar14 != 0) {
            plVar15 = (longlong *)(lVar5 + lVar13 * 0x18 + 8);
            puVar9 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            uVar6 = *(undefined8 *)(param_1 + 0x18);
            puVar9[1] = 0;
            *puVar9 = &PTR_FUN_149f36420;
            puVar9[2] = uVar6;
            FUN_146be9ba2(puVar9 + 3);
            puVar10 = (undefined8 *)*plVar15;
            if (puVar10 != puVar9) {
              *plVar15 = (longlong)puVar9;
              FUN_146c55ce2(plVar15);
              puVar10 = (undefined8 *)*plVar15;
            }
            FUN_146c25afa(puVar10,param_2,local_148,local_149);
          }
          uVar14 = (uint)(uVar14 != 0);
          FUN_14041e0ea(&local_f8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_54);
      }
    }
  }
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbc8), 0xe < iVar8)) {
    uVar14 = 0;
    if ((*(longlong *)(param_1 + 0xc0) != 0) &&
       ((*(longlong *)(param_1 + 200) != 0 && (*(longlong *)(param_1 + 0xd0) != 0)))) {
      uVar14 = (uint)(*(longlong *)(param_1 + 0xd8) != 0);
    }
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_f8 = (undefined **)CONCAT44(local_f8._4_4_,uVar14);
      (**(code **)(*param_2 + 0x170))(param_2,&local_f8,4);
      uVar14 = (uint)local_f8;
      if (1 < (uint)local_f8) {
        FUN_14572541c(param_2);
        uVar14 = (uint)local_f8;
      }
    }
    else {
      uVar14 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar14 != 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_146c26078(param_1,0);
      }
      FUN_140713482(&local_f8,param_2);
      local_f8 = &PTR_FUN_149f3b840;
      FUN_140219018(&local_f8,*(longlong *)(param_1 + 0xc0) + 0x18);
      FUN_1403b0476(param_2,*(longlong *)(param_1 + 200) + 0x18);
      FUN_1400f4d04(param_2,*(longlong *)(param_1 + 0xd0) + 0x18);
      FUN_146c4db8e(param_2,*(longlong *)(param_1 + 0xd8) + 0x18);
      FUN_14041e0ea(&local_f8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c16ac6 FUN_146c16ac6 body=518 status=ok
// SIG undefined FUN_146c16ac6(void)

void FUN_146c16ac6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (ulonglong *)param_2[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_28);
    }
  }
  else {
    local_28 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  FUN_146c5187c(param_1 + 8,param_2);
  FUN_146c15b76(param_1 + 0x20,param_2,0,0);
  FUN_146c51dca(param_1 + 0x58,param_2);
  FUN_146c51dca(param_1 + 0x78,param_2);
  FUN_146c5242c(param_1 + 0x98,param_2);
  FUN_142984a94(param_1 + 0xb8,param_2,0,0);
  FUN_146c52a76(param_1 + 0x128,param_2);
  FUN_146c15b76(param_1 + 0x140,param_2,0,0);
  FUN_146c52a76(param_1 + 0x178,param_2);
  FUN_146c52fd8(param_1 + 400,param_2);
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x1b0),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1b0) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146c530ee(param_1 + 0x1b8,param_2);
  FUN_146c15b76(param_1 + 0x1d0,param_2,0,0);
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_24 = 0;
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    uVar4 = local_24;
    if (1 < local_24) {
      FUN_14572541c(param_2);
      uVar4 = local_24;
    }
  }
  else {
    uVar4 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar4 != 0) {
    FUN_14582ed12(param_1);
    FUN_146c1620a(*(undefined8 *)(param_1 + 0x208),param_2,0,0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c16ccd FUN_146c16ccd body=351 status=ok
// SIG undefined FUN_146c16ccd(void)

longlong * FUN_146c16ccd(longlong *param_1,byte *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*param_2;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *param_2 = local_24 != 0;
  }
  else {
    *param_2 = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[1];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[1] = local_24 != 0;
  }
  else {
    param_2[1] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[2];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[2] = local_24 != 0;
  }
  else {
    param_2[2] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c16e2e FUN_146c16e2e body=1053 status=ok
// SIG undefined FUN_146c16e2e(void)

void FUN_146c16e2e(longlong param_1,longlong *param_2,char *param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_b8 [32];
  char *local_98;
  char *local_90;
  undefined4 local_84;
  longlong *local_80;
  char *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (char *)(param_1 + 0x98);
  local_90 = param_3;
  FUN_146c1581a(param_2,param_1 + 8,param_1 + 0x58,param_1 + 0x78);
  local_98 = param_3;
  FUN_146c15a0d(param_2,param_1 + 0x128,param_1 + 400,param_1 + 0x1b0);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_60 = CONCAT44(local_60._4_4_,
                        (uint)(*(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c) != 0));
    (**(code **)(*param_2 + 0x170))(param_2,&local_60,4);
    uVar15 = (uint)local_60;
    if (1 < (uint)local_60) {
      FUN_14572541c(param_2);
      uVar15 = (uint)local_60;
    }
  }
  else {
    uVar15 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  lVar2 = param_1 + 0x140;
  if (uVar15 == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_146c15e5c(*(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300),lVar2);
    }
  }
  else {
    FUN_146c15b76(lVar2,param_2,param_3[1],param_3[2]);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_146c15eb8(*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc),param_1 + 0x128,lVar2,
                  param_1 + 0x20);
  }
  if (*param_3 == '\x01') {
    if (param_3[2] == '\x01') {
      FUN_146c538b6(param_1 + 0x1b8,param_2);
    }
    else {
      FUN_146c53afa(param_1 + 0x1b8,param_2);
    }
    FUN_146c15b76(param_1 + 0x1d0,param_2,param_3[1],param_3[2]);
    if (param_3[2] == '\x01') {
      FUN_146c50c50(param_1 + 0x178,param_2);
    }
    else {
      FUN_146c50e9c(param_1 + 0x178,param_2);
    }
    FUN_142984a94(param_1 + 0xb8,param_2,param_3[1],param_3[2]);
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    lVar2 = param_1 + 0x1b8;
    local_70 = param_1;
    local_68 = param_1;
    FUN_14582f71e(lVar2);
    FUN_1411b3fe4(param_1 + 0x1e8);
    FUN_14582f442(param_1 + 0x1d0);
    *(undefined4 *)(param_1 + 0x200) = 0;
    FUN_146c0a96a(param_1 + 0x178,*(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300));
    iVar3 = *(int *)(param_1 + 0x188);
    if ((longlong)iVar3 != 0) {
      uVar8 = 0;
      do {
        lVar12 = 8;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)(int)uVar8 * 8);
          *(undefined8 *)(lVar5 + -8 + lVar12) = 0xffffffffffffffff;
          *(undefined4 *)(lVar5 + lVar12) = 0xffffffff;
          lVar12 = lVar12 + 0xc;
        } while (lVar12 != 0x1808);
        uVar8 = (ulonglong)((int)uVar8 + 1);
      } while (uVar8 < (ulonglong)(longlong)iVar3);
    }
    local_80 = param_2;
    FUN_14582f602(param_1 + 0xb8);
    FUN_146c8ae5a(param_1 + 0xb8,*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc));
    local_58 = &local_70;
    local_50 = &local_68;
    uVar10 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar15 = 0;
    local_78 = param_3;
    local_60 = lVar2;
    if ((uVar10 != 0) &&
       (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar13 = 1;
      uVar14 = 1;
      if (1 < (int)uVar10) {
        uVar13 = uVar10;
      }
      do {
        uVar15 = uVar13;
        if (uVar13 == uVar14) break;
        uVar9 = uVar14 >> 9;
        uVar11 = uVar14 & 0x1ff;
        uVar15 = uVar14;
        uVar14 = uVar14 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar9] +
                                           (ulonglong)uVar11 * 2) - 1U));
    }
LAB_146c171a9:
    param_2 = local_80;
    param_3 = local_78;
    if (uVar15 != uVar10) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar15 >> 9) * 8);
      lVar12 = (ulonglong)((uVar15 & 0x1ff) << 2) * 3;
      local_84 = FUN_1429735f2(&local_60,*(undefined4 *)(lVar2 + lVar12),
                               *(undefined4 *)(lVar2 + 4 + lVar12),uVar15);
      uVar6 = FUN_1429735f2(&local_60,*(undefined4 *)(lVar2 + 4 + lVar12),
                            *(undefined4 *)(lVar2 + 8 + lVar12),uVar15);
      uVar7 = FUN_1429735f2(&local_60,*(undefined4 *)(lVar2 + 8 + lVar12),
                            *(undefined4 *)(lVar2 + lVar12),uVar15);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar15 >> 9) * 8);
      *(undefined4 *)(lVar2 + lVar12) = local_84;
      *(undefined4 *)(lVar2 + 4 + lVar12) = uVar6;
      *(undefined4 *)(lVar2 + 8 + lVar12) = uVar7;
      uVar13 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar10) {
        uVar13 = uVar10;
      }
      uVar14 = uVar15;
      do {
        uVar15 = uVar13;
        if (uVar13 - 1 == uVar14) break;
        uVar15 = uVar14 + 1;
        uVar14 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar15 >> 9) * 8) +
                                           (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      goto LAB_146c171a9;
    }
  }
  FUN_146c16140(param_2,param_1,0,param_3);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1724c FUN_146c1724c body=2417 status=ok
// SIG undefined FUN_146c1724c(void)

void FUN_146c1724c(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined4 local_e4;
  undefined1 local_e0 [8];
  longlong local_d8 [2];
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong local_a0 [2];
  char local_90;
  longlong local_88;
  longlong local_80 [2];
  char local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_f8 = param_3;
  if (((*(byte *)(param_2 + 0x28) & 1) == 0) &&
     (*(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c) != 0)) {
    iVar3 = *(int *)(param_1 + 0x50);
    lVar22 = (longlong)iVar3;
    local_f0 = param_2;
    FUN_141040be6(local_e0);
    FUN_146bee1a4(local_e0,iVar3);
    FUN_146c17bbe(&local_68,param_1 + 0x58,lVar22);
    FUN_146c17bbe(&local_88,param_1 + 0x78,lVar22);
    FUN_146c17c63(&local_a8,param_1 + 0x98,lVar22);
    uVar21 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
    FUN_144a127d2(&local_c8,uVar21,1);
    if (0 < (int)uVar21) {
      uVar8 = 0;
      do {
        *(undefined4 *)(local_c8 + uVar8 * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar21 != uVar8);
    }
    uVar11 = *(int *)(param_1 + 0x20) * 0x200 + *(int *)(param_1 + 0x24);
    uVar21 = 0;
    if ((uVar11 != 0) &&
       (uVar21 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x28) - 1U))) {
      uVar20 = 1;
      uVar14 = 1;
      if (1 < (int)uVar11) {
        uVar20 = uVar11;
      }
      do {
        uVar21 = uVar20;
        if (uVar20 == uVar14) break;
        uVar9 = uVar14 >> 9;
        uVar13 = uVar14 & 0x1ff;
        uVar21 = uVar14;
        uVar14 = uVar14 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x28))[uVar9] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
    if (uVar21 != uVar11) {
      uVar20 = 0;
      do {
        uVar8 = (ulonglong)(uVar21 >> 9);
        lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8);
        uVar17 = (ulonglong)(uVar21 & 0x1ff);
        uVar18 = (ulonglong)(uVar20 >> 9);
        lVar15 = *(longlong *)(local_d8[0] + uVar18 * 8);
        uVar19 = (ulonglong)(uVar20 & 0x1ff);
        *(undefined8 *)(lVar15 + 0x10 + uVar19 * 0x18) =
             *(undefined8 *)(lVar22 + 0x10 + uVar17 * 0x18);
        puVar1 = (undefined4 *)(lVar22 + uVar17 * 0x18);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (undefined4 *)(lVar15 + uVar19 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar5;
        if (local_50 == '\x01') {
          lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar8 * 8);
          lVar15 = local_60[uVar18];
          *(undefined4 *)(lVar15 + 8 + uVar19 * 0xc) = *(undefined4 *)(lVar22 + 8 + uVar17 * 0xc);
          *(undefined8 *)(lVar15 + uVar19 * 0xc) = *(undefined8 *)(lVar22 + uVar17 * 0xc);
        }
        if (local_70 == '\x01') {
          lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x80) + uVar8 * 8);
          lVar15 = *(longlong *)(local_80[0] + uVar18 * 8);
          *(undefined4 *)(lVar15 + 8 + uVar19 * 0xc) = *(undefined4 *)(lVar22 + 8 + uVar17 * 0xc);
          *(undefined8 *)(lVar15 + uVar19 * 0xc) = *(undefined8 *)(lVar22 + uVar17 * 0xc);
        }
        if (local_90 == '\x01') {
          *(undefined8 *)(*(longlong *)(local_a0[0] + uVar18 * 8) + uVar19 * 8) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0xa0) + uVar8 * 8) + uVar17 * 8);
        }
        *(uint *)(local_c8 + (longlong)(int)uVar21 * 4) = uVar20;
        uVar20 = uVar20 + 1;
        uVar14 = uVar21 + 1;
        if ((int)(uVar21 + 1) < (int)uVar11) {
          uVar14 = uVar11;
        }
        do {
          uVar9 = uVar14;
          if (uVar14 - 1 == uVar21) break;
          uVar21 = uVar21 + 1;
          uVar9 = uVar21;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x28) +
                                               (ulonglong)(uVar21 >> 9) * 8) +
                                             (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        uVar21 = uVar9;
      } while (uVar21 != uVar11);
    }
    local_100 = local_f8;
    local_108 = &local_a8;
    FUN_146c1581a(local_f0,local_e0,&local_68,&local_88);
    if ((local_90 == '\x01') && (FUN_146c409ee(local_a0,0), local_a0[0] != 0)) {
      FUN_1400020a8();
    }
    if ((local_70 == '\x01') && (FUN_146c40926(local_80,0), local_80[0] != 0)) {
      FUN_1400020a8();
    }
    if ((local_50 == '\x01') && (FUN_146c40926(&local_60,0), local_60 != (longlong *)0x0)) {
      FUN_1400020a8();
    }
    FUN_141067b84(local_d8,0);
    param_2 = local_f0;
    if (local_d8[0] != 0) {
      FUN_1400020a8();
      param_2 = local_f0;
    }
  }
  else {
    local_108 = (longlong *)(param_1 + 0x98);
    local_100 = param_3;
    FUN_146c1581a(param_2,param_1 + 8,param_1 + 0x58,param_1 + 0x78);
  }
  if (((*(byte *)(param_2 + 0x28) & 1) == 0) &&
     ((*(int *)(param_1 + 0x158) * 0x200 + *(int *)(param_1 + 0x15c) != 0 ||
      (*(int *)(param_1 + 0x38) * 0x200 + *(int *)(param_1 + 0x3c) != 0)))) {
    iVar3 = *(int *)(param_1 + 0x170);
    FUN_146bff58a(&local_88);
    FUN_146c0a96a(&local_88,iVar3);
    FUN_146c17d08(&local_68,param_1 + 400,(longlong)iVar3);
    uVar21 = *(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300);
    FUN_144a127d2(&local_b8,uVar21);
    if (0 < (int)uVar21) {
      uVar8 = 0;
      do {
        *(undefined4 *)(local_b8 + uVar8 * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar21 != uVar8);
    }
    uVar11 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar21 = 0;
    if ((uVar11 != 0) &&
       (uVar21 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar8 = 1;
      uVar20 = 1;
      if (1 < (int)uVar11) {
        uVar20 = uVar11;
      }
      do {
        uVar14 = (uint)uVar8;
        uVar21 = uVar20;
        if (uVar20 == uVar14) break;
        uVar17 = uVar8 >> 9;
        uVar8 = (ulonglong)(uVar14 + 1);
        uVar21 = uVar14;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar17] +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
    }
    if (uVar21 != uVar11) {
      uVar20 = 0;
      do {
        piVar12 = (int *)((ulonglong)((uVar21 & 0x1ff) * 0xc) +
                         *(longlong *)
                          (*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar21 >> 9) * 8));
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar20 & 0x1ff) * 0xc) +
                  *(longlong *)(local_80[0] + (ulonglong)(uVar20 >> 9) * 8));
        if ((int)uStack_c0 == 0) {
          *(int *)(puVar10 + 1) = piVar12[2];
          *puVar10 = *(undefined8 *)piVar12;
        }
        else {
          *(undefined4 *)puVar10 = *(undefined4 *)(local_c8 + (longlong)*piVar12 * 4);
          *(undefined4 *)((longlong)puVar10 + 4) =
               *(undefined4 *)(local_c8 + (longlong)piVar12[1] * 4);
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(local_c8 + (longlong)piVar12[2] * 4);
        }
        if (local_50 == '\x01') {
          *(undefined4 *)(local_60[uVar20 >> 9] + (ulonglong)(uVar20 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(uVar21 >> 9) * 8) +
                (ulonglong)(uVar21 & 0x1ff) * 4);
        }
        *(uint *)(local_b8 + (longlong)(int)uVar21 * 4) = uVar20;
        uVar20 = uVar20 + 1;
        uVar14 = uVar21 + 1;
        if ((int)(uVar21 + 1) < (int)uVar11) {
          uVar14 = uVar11;
        }
        do {
          uVar9 = uVar14;
          if (uVar14 - 1 == uVar21) break;
          uVar21 = uVar21 + 1;
          uVar9 = uVar21;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_1 + 0x148) +
                                               (ulonglong)(uVar21 >> 9) * 8) +
                                             (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        uVar21 = uVar9;
      } while (uVar21 != uVar11);
    }
    local_108 = (longlong *)local_f8;
    FUN_146c15a0d(param_2,&local_88,&local_68,param_1 + 0x1b0);
    if ((local_50 == '\x01') && (FUN_141082b5c(&local_60,0), local_60 != (longlong *)0x0)) {
      FUN_1400020a8();
    }
    FUN_141082a16(local_80,0);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_108 = (longlong *)local_f8;
    FUN_146c15a0d(param_2,param_1 + 0x128,param_1 + 400,param_1 + 0x1b0);
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_f0 = param_2;
    FUN_146c15e5c(*(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300),param_1 + 0x140);
    FUN_146c15eb8(*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc),param_1 + 0x128,
                  param_1 + 0x140,param_1 + 0x20);
    lVar22 = param_1 + 0x1b8;
    local_a8 = param_1;
    local_88 = param_1;
    FUN_14582f71e(lVar22);
    FUN_1411b3fe4(param_1 + 0x1e8);
    FUN_14582f442(param_1 + 0x1d0);
    *(undefined4 *)(param_1 + 0x200) = 0;
    FUN_146c0a96a(param_1 + 0x178,*(int *)(param_1 + 0x128) * 0x200 + *(int *)(param_1 + 300));
    iVar3 = *(int *)(param_1 + 0x188);
    if ((longlong)iVar3 != 0) {
      uVar8 = 0;
      do {
        lVar15 = 8;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)(int)uVar8 * 8);
          *(undefined8 *)(lVar4 + -8 + lVar15) = 0xffffffffffffffff;
          *(undefined4 *)(lVar4 + lVar15) = 0xffffffff;
          lVar15 = lVar15 + 0xc;
        } while (lVar15 != 0x1808);
        uVar8 = (ulonglong)((int)uVar8 + 1);
      } while (uVar8 < (ulonglong)(longlong)iVar3);
    }
    FUN_14582f602(param_1 + 0xb8);
    FUN_146c8ae5a(param_1 + 0xb8,*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc));
    local_60 = &local_a8;
    local_58 = &local_88;
    uVar11 = *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144);
    uVar21 = 0;
    local_68 = lVar22;
    if ((uVar11 != 0) &&
       (uVar21 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_1 + 0x148) - 1U))) {
      uVar20 = 1;
      uVar14 = 1;
      if (1 < (int)uVar11) {
        uVar20 = uVar11;
      }
      do {
        uVar21 = uVar20;
        if (uVar20 == uVar14) break;
        uVar9 = uVar14 >> 9;
        uVar13 = uVar14 & 0x1ff;
        uVar21 = uVar14;
        uVar14 = uVar14 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_1 + 0x148))[uVar9] +
                                           (ulonglong)uVar13 * 2) - 1U));
    }
LAB_146c17599:
    param_2 = local_f0;
    if (uVar21 != uVar11) {
      lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar21 >> 9) * 8);
      lVar15 = (ulonglong)((uVar21 & 0x1ff) << 2) * 3;
      local_e4 = FUN_14297365e(&local_68,*(undefined4 *)(lVar22 + lVar15),
                               *(undefined4 *)(lVar22 + 4 + lVar15),uVar21);
      uVar6 = FUN_14297365e(&local_68,*(undefined4 *)(lVar22 + 4 + lVar15),
                            *(undefined4 *)(lVar22 + 8 + lVar15),uVar21);
      uVar7 = FUN_14297365e(&local_68,*(undefined4 *)(lVar22 + 8 + lVar15),
                            *(undefined4 *)(lVar22 + lVar15),uVar21);
      lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)(uVar21 >> 9) * 8);
      *(undefined4 *)(lVar22 + lVar15) = local_e4;
      *(undefined4 *)(lVar22 + 4 + lVar15) = uVar6;
      *(undefined4 *)(lVar22 + 8 + lVar15) = uVar7;
      uVar20 = uVar21 + 1;
      if ((int)(uVar21 + 1) < (int)uVar11) {
        uVar20 = uVar11;
      }
      uVar14 = uVar21;
      do {
        uVar21 = uVar20;
        if (uVar20 - 1 == uVar14) break;
        uVar21 = uVar14 + 1;
        uVar14 = uVar21;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x148) +
                                             (ulonglong)(uVar21 >> 9) * 8) +
                                           (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
      goto LAB_146c17599;
    }
  }
  plVar16 = (longlong *)0x0;
  if ((int)uStack_b0 != 0 || (int)uStack_c0 != 0) {
    plVar16 = &local_c8;
  }
  FUN_146c16140(param_2,param_1,plVar16,local_f8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c17bbe FUN_146c17bbe body=164 status=ok
// SIG undefined FUN_146c17bbe(void)

longlong FUN_146c17bbe(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [2];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(char *)(param_2 + 0x18) == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_146c4f39a(local_40);
    FUN_146c03c80(local_40,param_3);
    *(byte *)(param_1 + 0x18) = local_28;
    if ((local_28 & 1) != 0) {
      FUN_146c4ded4(param_1,local_40);
    }
    if ((local_28 & 1) != 0) {
      FUN_146c40926(local_38,0);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c17c63 FUN_146c17c63 body=164 status=ok
// SIG undefined FUN_146c17c63(void)

longlong FUN_146c17c63(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [2];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(char *)(param_2 + 0x18) == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_146c4ffe6(local_40);
    FUN_146c03d58(local_40,param_3);
    *(byte *)(param_1 + 0x18) = local_28;
    if ((local_28 & 1) != 0) {
      FUN_146c4e084(param_1,local_40);
    }
    if ((local_28 & 1) != 0) {
      FUN_146c409ee(local_38,0);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c17d08 FUN_146c17d08 body=164 status=ok
// SIG undefined FUN_146c17d08(void)

longlong FUN_146c17d08(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [2];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(char *)(param_2 + 0x18) == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_146c061a4(local_40);
    FUN_1411b328a(local_40,param_3);
    *(byte *)(param_1 + 0x18) = local_28;
    if ((local_28 & 1) != 0) {
      FUN_14582f194(param_1,local_40);
    }
    if ((local_28 & 1) != 0) {
      FUN_141082b5c(local_38,0);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c17dae FUN_146c17dae body=233 status=ok
// SIG undefined FUN_146c17dae(void)

void FUN_146c17dae(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *(undefined8 *)(param_2 + 8);
  FUN_146c40b54(local_58,param_2 + 0x10);
  local_48 = *(undefined8 *)(param_2 + 0x20);
  FUN_146c40bf2(local_40,param_2 + 0x28);
  local_30 = *(undefined4 *)(param_2 + 0x38);
  FUN_146c40eae(param_1 + 8,&local_60);
  FUN_146c40f34(param_1 + 0x20,&local_48);
  *(undefined4 *)(param_1 + 0x38) = local_30;
  FUN_14117c64e(&local_60);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_146c4426a(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_146bedfa8(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_146bedfa8(param_1 + 0x78,param_2 + 0x78);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c17e98 FUN_146c17e98 body=233 status=ok
// SIG undefined FUN_146c17e98(void)

void FUN_146c17e98(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *(undefined8 *)(param_2 + 8);
  FUN_146c40b54(local_58,param_2 + 0x10);
  local_48 = *(undefined8 *)(param_2 + 0x20);
  FUN_146c40bf2(local_40,param_2 + 0x28);
  local_30 = *(undefined4 *)(param_2 + 0x38);
  FUN_146c40eae(param_1 + 8,&local_60);
  FUN_146c40f34(param_1 + 0x20,&local_48);
  *(undefined4 *)(param_1 + 0x38) = local_30;
  FUN_14117c64e(&local_60);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_146c4426a(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_146bedfa8(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_146bedfa8(param_1 + 0x78,param_2 + 0x78);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c17f82 FUN_146c17f82 body=181 status=ok
// SIG undefined FUN_146c17f82(void)

void FUN_146c17f82(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = FUN_14001cc68(0x88,0x10);
    FUN_146c32e14(lVar2,*(undefined8 *)(param_1 + 0x18));
    lVar4 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x40) = lVar2;
    if (lVar4 != 0) {
      FUN_146c543c2(lVar4);
      FUN_1400020a8(lVar4);
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    FUN_1411b328a(lVar2 + 0x70,
                  (*(int *)(*(longlong *)(param_1 + 0x18) + 0x140) * 0x200 +
                  *(int *)(*(longlong *)(param_1 + 0x18) + 0x144)) * 3);
    iVar1 = *(int *)(lVar2 + 0x80);
    if ((longlong)iVar1 != 0) {
      uVar3 = 0;
      do {
        lVar4 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x78) + (longlong)(int)uVar3 * 8) + lVar4 * 4) =
               0xffffffff;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x200);
        uVar3 = (ulonglong)((int)uVar3 + 1);
      } while (uVar3 < (ulonglong)(longlong)iVar1);
    }
  }
  return;
}



// FUNCTION 146c18038 FUN_146c18038 body=233 status=ok
// SIG undefined FUN_146c18038(void)

void FUN_146c18038(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *(undefined8 *)(param_2 + 8);
  FUN_146c40b54(local_58,param_2 + 0x10);
  local_48 = *(undefined8 *)(param_2 + 0x20);
  FUN_146c40bf2(local_40,param_2 + 0x28);
  local_30 = *(undefined4 *)(param_2 + 0x38);
  FUN_146c40eae(param_1 + 8,&local_60);
  FUN_146c40f34(param_1 + 0x20,&local_48);
  *(undefined4 *)(param_1 + 0x38) = local_30;
  FUN_14117c64e(&local_60);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_146c4426a(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_146bedfa8(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_146bedfa8(param_1 + 0x78,param_2 + 0x78);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c18122 FUN_146c18122 body=49 status=ok
// SIG undefined FUN_146c18122(void)

void FUN_146c18122(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_146c543c2(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 146c18154 FUN_146c18154 body=171 status=ok
// SIG undefined FUN_146c18154(void)

void FUN_146c18154(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  FUN_146c1a5d2();
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  local_50 = param_3;
  local_40 = &local_48;
  local_38 = &local_50;
  FUN_146c55d1c(param_1 + 0x70,local_2c,&local_40,0);
  FUN_146c55ce2(&local_50,local_50);
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146c4dd84((longlong *)(param_1 + 8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_3;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c18200 FUN_146c18200 body=113 status=ok
// SIG undefined FUN_146c18200(void)

void FUN_146c18200(longlong param_1,longlong param_2)

{
  FUN_146c27dd5(*(undefined8 *)(param_1 + 0x18),param_1 + 0xc0,*(undefined8 *)(param_2 + 0xc0));
  FUN_146c27e93(*(undefined8 *)(param_1 + 0x18),param_1 + 200,*(undefined8 *)(param_2 + 200));
  FUN_146c27f54(*(undefined8 *)(param_1 + 0x18),param_1 + 0xd0,*(undefined8 *)(param_2 + 0xd0));
  FUN_146c28015(*(undefined8 *)(param_1 + 0x18),param_1 + 0xd8,*(undefined8 *)(param_2 + 0xd8));
  return;
}



// FUNCTION 146c18272 FUN_146c18272 body=378 status=ok
// SIG undefined FUN_146c18272(void)

void FUN_146c18272(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 **local_48;
  undefined8 **local_40;
  undefined1 local_34 [4];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    lVar2 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x120);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x128) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xe0);
      iVar6 = iVar4;
      do {
        if (*(undefined8 **)(lVar2 + (longlong)iVar6 * 0x18) == param_2) goto LAB_146c183a7;
        iVar6 = *(int *)(lVar2 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  goto LAB_146c182fe;
  while (iVar4 = (int)plVar5[2], iVar4 != -1) {
LAB_146c183a7:
    plVar5 = (longlong *)(lVar2 + (longlong)iVar4 * 0x18);
    if ((undefined8 *)*plVar5 == param_2) goto LAB_146c183bb;
  }
  plVar5 = (longlong *)0x0;
LAB_146c183bb:
  local_30 = (undefined8 *)plVar5[1];
  local_48 = &local_30;
  FUN_146c4dcb2(param_1 + 8);
LAB_146c182fe:
  local_40 = &local_30;
  local_48 = &local_50;
  local_30 = param_3;
  FUN_146c43298((longlong *)(param_1 + 0xe0),local_34,&local_48,0);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
    FUN_146c4dd84((longlong *)(param_1 + 8),iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8) = param_3;
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c183ee FUN_146c183ee body=648 status=ok
// SIG undefined FUN_146c183ee(void)

void FUN_146c183ee(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [3];
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146c19cce();
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a127d2(local_68,(int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc),1);
  if (0 < (int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc)) {
    uVar10 = 0;
    uVar12 = 0;
    do {
      uVar3 = 0xffffffff;
      if ((ushort)(*(short *)(*(longlong *)(param_3[2] + (uVar12 >> 9 & 0x7fffff) * 8) +
                             (ulonglong)((uint)uVar12 & 0x1ff) * 2) - 1U) < 0xfffe) {
        uVar5 = uVar12 >> 8 & 0xffffff;
        local_50 = *(undefined4 *)
                    (*(longlong *)(param_3[9] + uVar5 * 8) + (ulonglong)(uVar10 & 0x1fe) * 4);
        local_4c = *(undefined4 *)
                    (*(longlong *)(param_3[9] + uVar5 * 8) + 4 + (ulonglong)(uVar10 & 0x1fe) * 4);
        uVar3 = FUN_146c2d0a4(param_1,&local_50);
      }
      *(undefined4 *)(local_68[0] + uVar12 * 4) = uVar3;
      uVar12 = uVar12 + 1;
      uVar10 = uVar10 + 2;
    } while ((longlong)uVar12 <
             (longlong)((int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc)));
  }
  lVar1 = *param_3;
  uVar7 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar10 = 0;
  if ((uVar7 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar11 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar11 = uVar7;
    }
    do {
      uVar10 = uVar11;
      if (uVar11 == uVar4) break;
      uVar6 = uVar4 >> 9;
      uVar8 = uVar4 & 0x1ff;
      uVar10 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar6] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar10 != uVar7) {
    do {
      uVar11 = uVar10 * 3;
      lVar2 = param_3[0xf];
      lVar9 = (longlong)
              *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 4);
      if (-1 < lVar9) {
        local_6c = *(undefined4 *)
                    (local_68[0] +
                    (longlong)
                    *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                            (ulonglong)(uVar11 + 2 & 0x1ff) * 4) * 4);
        local_70 = *(undefined4 *)
                    (local_68[0] +
                    (longlong)
                    *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                            (ulonglong)(uVar11 + 1 & 0x1ff) * 4) * 4);
        local_74 = *(undefined4 *)(local_68[0] + lVar9 * 4);
        FUN_146c01486(param_1,*(undefined4 *)
                               (*(longlong *)(param_2 + 0x10) + (longlong)(int)uVar10 * 4),&local_74
                      ,CONCAT71((uint7)(uint3)((uint)local_6c >> 8),1));
      }
      uVar11 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar7) {
        uVar11 = uVar7;
      }
      do {
        uVar4 = uVar11;
        if (uVar11 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar4 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar4;
    } while (uVar10 != uVar7);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c18678 FUN_146c18678 body=645 status=ok
// SIG undefined FUN_146c18678(void)

void FUN_146c18678(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  undefined4 local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146c19dca();
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a127d2(local_68,(int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc),1);
  if (0 < (int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc)) {
    iVar12 = 0;
    uVar11 = 0;
    do {
      uVar2 = 0xffffffff;
      if ((ushort)(*(short *)(*(longlong *)(param_3[2] + (uVar11 >> 9 & 0x7fffff) * 8) +
                             (ulonglong)((uint)uVar11 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar1 = param_3[9];
        lVar4 = 0;
        do {
          uVar9 = iVar12 + (int)lVar4;
          local_54[lVar4] =
               *(undefined4 *)
                (*(longlong *)(lVar1 + (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 4
                );
          lVar4 = lVar4 + 1;
        } while (lVar4 != 3);
        uVar2 = FUN_146c2f9e2(param_1,local_54);
      }
      *(undefined4 *)(local_68[0] + uVar11 * 4) = uVar2;
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 3;
    } while ((longlong)uVar11 <
             (longlong)((int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc)));
  }
  lVar1 = *param_3;
  uVar6 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar9 = 0;
  if ((uVar6 != 0) &&
     (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar10 = 1;
    uVar3 = 1;
    if (1 < (int)uVar6) {
      uVar10 = uVar6;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar3) break;
      uVar5 = uVar3 >> 9;
      uVar7 = uVar3 & 0x1ff;
      uVar9 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                         (ulonglong)uVar7 * 2) - 1U));
  }
  if (uVar9 != uVar6) {
    do {
      uVar10 = uVar9 * 3;
      lVar4 = param_3[0xf];
      lVar8 = (longlong)
              *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
      if (-1 < lVar8) {
        local_6c = *(undefined4 *)
                    (local_68[0] +
                    (longlong)
                    *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                            (ulonglong)(uVar10 + 2 & 0x1ff) * 4) * 4);
        local_70 = *(undefined4 *)
                    (local_68[0] +
                    (longlong)
                    *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                            (ulonglong)(uVar10 + 1 & 0x1ff) * 4) * 4);
        local_74 = *(undefined4 *)(local_68[0] + lVar8 * 4);
        FUN_146c01580(param_1,*(undefined4 *)
                               (*(longlong *)(param_2 + 0x10) + (longlong)(int)uVar9 * 4),&local_74,
                      CONCAT71((uint7)(uint3)((uint)local_6c >> 8),1));
      }
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar6) {
        uVar10 = uVar6;
      }
      do {
        uVar3 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar3 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar3;
    } while (uVar9 != uVar6);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c188fe FUN_146c188fe body=658 status=ok
// SIG undefined FUN_146c188fe(void)

void FUN_146c188fe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  undefined4 local_58 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146c32e62();
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_144a127d2(local_68,(int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc));
  if (0 < (int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc)) {
    iVar12 = 0;
    uVar11 = 0;
    do {
      uVar2 = 0xffffffff;
      if ((ushort)(*(short *)(*(longlong *)(param_3[2] + (uVar11 >> 9 & 0x7fffff) * 8) +
                             (ulonglong)((uint)uVar11 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar1 = param_3[9];
        lVar7 = 0;
        do {
          local_58[lVar7] =
               *(undefined4 *)
                (*(longlong *)(lVar1 + (ulonglong)((uint)(uVar11 >> 7) & 0x7fffff) * 8) +
                 (ulonglong)(iVar12 * 4 & 0x7f0) + lVar7 * 4);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 4);
        uVar2 = FUN_146c32f5e(param_1,local_58);
      }
      *(undefined4 *)(local_68[0] + uVar11 * 4) = uVar2;
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
    } while ((longlong)uVar11 <
             (longlong)((int)param_3[1] * 0x200 + *(int *)((longlong)param_3 + 0xc)));
  }
  lVar1 = *param_3;
  uVar5 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
  uVar9 = 0;
  if ((uVar5 != 0) &&
     (uVar9 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U))) {
    uVar10 = 1;
    uVar3 = 1;
    if (1 < (int)uVar5) {
      uVar10 = uVar5;
    }
    do {
      uVar9 = uVar10;
      if (uVar10 == uVar3) break;
      uVar4 = uVar3 >> 9;
      uVar6 = uVar3 & 0x1ff;
      uVar9 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar4] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
  if (uVar9 != uVar5) {
    do {
      uVar10 = uVar9 * 3;
      lVar7 = param_3[0xf];
      lVar8 = (longlong)
              *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
      if (-1 < lVar8) {
        local_6c = *(undefined4 *)
                    (local_68[0] +
                    (longlong)
                    *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                            (ulonglong)(uVar10 + 2 & 0x1ff) * 4) * 4);
        local_70 = *(undefined4 *)
                    (local_68[0] +
                    (longlong)
                    *(int *)(*(longlong *)(lVar7 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                            (ulonglong)(uVar10 + 1 & 0x1ff) * 4) * 4);
        local_74 = *(undefined4 *)(local_68[0] + lVar8 * 4);
        FUN_146c2a048(param_1,*(undefined4 *)
                               (*(longlong *)(param_2 + 0x10) + (longlong)(int)uVar9 * 4),&local_74,
                      CONCAT71((uint7)(uint3)((uint)local_6c >> 8),1));
      }
      uVar10 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar5) {
        uVar10 = uVar5;
      }
      do {
        uVar3 = uVar10;
        if (uVar10 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar3 = uVar9;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar1 + 0x148) +
                                             (ulonglong)(uVar9 >> 9) * 8) +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
      uVar9 = uVar3;
    } while (uVar9 != uVar5);
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c18b92 FUN_146c18b92 body=960 status=ok
// SIG undefined FUN_146c18b92(void)

void FUN_146c18b92(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar10 = ((int)uVar6 >> 0x1f & uVar6) - 1;
  uVar4 = uVar6;
  do {
    if ((int)uVar4 < 1) goto LAB_146c18c05;
    uVar4 = uVar4 - 1;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x10) +
                                         (ulonglong)(uVar4 >> 9) * 8) +
                                       (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
  if (uVar4 == 0) {
    uVar10 = 0;
LAB_146c18c05:
    uVar4 = uVar10;
    uVar13 = 0;
  }
  else {
    uVar10 = 0;
    do {
      uVar13 = uVar10;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x10) +
                                        (ulonglong)(uVar10 >> 9) * 8) +
                                      (ulonglong)(uVar10 & 0x1ff) * 2) - 1U)) break;
      uVar10 = uVar10 + 1;
      uVar13 = uVar4;
    } while (uVar4 != uVar10);
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a127d2(&local_58,uVar6,1);
  if (0 < (int)uStack_50) {
    uVar5 = 0;
    do {
      *(uint *)(local_58 + uVar5 * 4) = (uint)uVar5;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (uVar5 >> 9 & 0x7fffff) * 8);
      uVar6 = (uint)uVar5 & 0x1ff;
      lVar11 = (longlong)*(int *)(lVar3 + (ulonglong)uVar6 * 4);
      if (-1 < lVar11) {
        *(undefined4 *)(lVar3 + (ulonglong)uVar6 * 4) = *(undefined4 *)(*param_2 + lVar11 * 4);
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)(int)uStack_50);
  }
  if ((int)uVar13 < (int)uVar4) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar4 >> 5 & 0x3fffff8));
      uVar1 = *(undefined4 *)(lVar3 + 4 + (ulonglong)(uVar4 & 0xff) * 8);
      uVar5 = (ulonglong)(uVar13 >> 5 & 0x3fffff8);
      uVar12 = (ulonglong)((uVar13 & 0xff) << 3);
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5) + uVar12) =
           *(undefined4 *)(lVar3 + (ulonglong)(uVar4 & 0xff) * 8);
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + uVar5) + 4 + uVar12) = uVar1;
      uVar5 = (ulonglong)(uVar4 >> 9);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar13 >> 9) * 8) +
       (ulonglong)(uVar13 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar5 * 8) +
            (ulonglong)(uVar4 & 0x1ff) * 4);
      uVar12 = (ulonglong)((uVar4 & 0x1ff) * 2);
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar13 >> 9) * 8) +
       (ulonglong)(uVar13 & 0x1ff) * 2) =
           *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8) + uVar12);
      *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar5 * 8) + uVar12) = 0xffff;
      *(uint *)(local_58 + (longlong)(int)uVar4 * 4) = uVar13;
      uVar6 = (int)uVar4 >> 0x1f & uVar4;
      do {
        uVar10 = uVar6 - 1;
        if ((int)uVar4 < 1) break;
        uVar4 = uVar4 - 1;
        uVar10 = uVar4;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar4 >> 9) * 8) +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      uVar4 = uVar10;
      uVar6 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar4) {
        uVar6 = uVar4;
      }
      do {
        if (uVar6 - 1 == uVar13) goto LAB_146c18dad;
        uVar13 = uVar13 + 1;
      } while ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar13 >> 9) * 8) +
                                  (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe);
    } while ((int)uVar13 < (int)uVar4);
  }
LAB_146c18dad:
  iVar8 = *(int *)(param_1 + 0x38);
  FUN_1411b3fe4(param_1 + 0x20);
  FUN_146c41884(param_1 + 8,iVar8);
  *(int *)(param_1 + 0x38) = iVar8;
  FUN_146bfd442(param_1 + 0x40,iVar8 * 2);
  FUN_1411b328a(param_1 + 0x58,*(undefined4 *)(param_1 + 0x38));
  uVar4 = *(int *)(param_1 + 0x70) * 0x200 + *(int *)(param_1 + 0x74);
  iVar8 = 3;
  if (2 < uVar4) {
    iVar7 = 0;
    uVar5 = 0;
    iVar8 = 0;
    do {
      iVar2 = *(int *)(param_2[2] + uVar5 * 4);
      if (iVar2 != -1) {
        if (iVar8 <= iVar2) {
          iVar8 = iVar2;
        }
        uVar6 = (int)uVar5 * 3;
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)(uVar6 & 0x1ff) * 4) == -1) {
          iVar9 = 0;
          do {
            uVar6 = iVar2 * 3 + iVar9;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar6 >> 9) * 8) +
             (ulonglong)(uVar6 & 0x1ff) * 4) = 0xffffffff;
            iVar9 = iVar9 + 1;
          } while (iVar9 != 3);
        }
        else {
          iVar9 = 0;
          do {
            uVar6 = iVar2 * 3 + iVar9;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar6 >> 9) * 8) +
             (ulonglong)(uVar6 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (local_58 +
                  (longlong)
                  *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x78) +
                            (ulonglong)((uint)(iVar7 + iVar9) >> 9) * 8) +
                          (ulonglong)(iVar7 + iVar9 & 0x1ff) * 4) * 4);
            iVar9 = iVar9 + 1;
          } while (iVar9 != 3);
        }
      }
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 3;
    } while (uVar5 != (ulonglong)uVar4 / 3);
    iVar8 = iVar8 * 3 + 3;
  }
  FUN_1411b328a(param_1 + 0x70,iVar8);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c18f54 FUN_146c18f54 body=996 status=ok
// SIG undefined FUN_146c18f54(void)

void FUN_146c18f54(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined4 auStack_4c [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar12 = ((int)uVar4 >> 0x1f & uVar4) - 1;
  do {
    if ((int)uVar4 < 1) goto LAB_146c18fcc;
    uVar4 = uVar4 - 1;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x10) +
                                         (ulonglong)(uVar4 >> 9) * 8) +
                                       (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
  if (uVar4 == 0) {
    uVar12 = 0;
LAB_146c18fcc:
    uVar4 = uVar12;
    uVar11 = 0;
  }
  else {
    uVar12 = 0;
    do {
      uVar11 = uVar12;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x10) +
                                        (ulonglong)(uVar12 >> 9) * 8) +
                                      (ulonglong)(uVar12 & 0x1ff) * 2) - 1U)) break;
      uVar12 = uVar12 + 1;
      uVar11 = uVar4;
    } while (uVar4 != uVar12);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_144a127d2(&local_68);
  if (0 < (int)uStack_60) {
    uVar3 = 0;
    do {
      *(uint *)(local_68 + uVar3 * 4) = (uint)uVar3;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (uVar3 >> 9 & 0x7fffff) * 8);
      uVar12 = (uint)uVar3 & 0x1ff;
      lVar9 = (longlong)*(int *)(lVar7 + (ulonglong)uVar12 * 4);
      if (-1 < lVar9) {
        *(undefined4 *)(lVar7 + (ulonglong)uVar12 * 4) = *(undefined4 *)(*param_2 + lVar9 * 4);
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)(int)uStack_60);
  }
  if ((int)uVar11 < (int)uVar4) {
    do {
      lVar7 = *(longlong *)(param_1 + 0x48);
      lVar9 = 0;
      do {
        uVar12 = uVar4 * 3 + (int)lVar9;
        auStack_4c[lVar9] =
             *(undefined4 *)
              (*(longlong *)(lVar7 + (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4
              );
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      lVar7 = 0;
      do {
        uVar12 = uVar11 * 3 + (int)lVar7;
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar12 >> 9) * 8) +
         (ulonglong)(uVar12 & 0x1ff) * 4) = auStack_4c[lVar7];
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      uVar3 = (ulonglong)(uVar4 >> 9);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar11 >> 9) * 8) +
       (ulonglong)(uVar11 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar3 * 8) +
            (ulonglong)(uVar4 & 0x1ff) * 4);
      uVar10 = (ulonglong)((uVar4 & 0x1ff) * 2);
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar11 >> 9) * 8) +
       (ulonglong)(uVar11 & 0x1ff) * 2) =
           *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8) + uVar10);
      *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8) + uVar10) = 0xffff;
      *(uint *)(local_68 + (longlong)(int)uVar4 * 4) = uVar11;
      uVar12 = (int)uVar4 >> 0x1f & uVar4;
      do {
        uVar2 = uVar12 - 1;
        if ((int)uVar4 < 1) break;
        uVar4 = uVar4 - 1;
        uVar2 = uVar4;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar4 >> 9) * 8) +
                                           (ulonglong)(uVar4 & 0x1ff) * 2) - 1U));
      uVar4 = uVar2;
      uVar12 = uVar11 + 1;
      if ((int)(uVar11 + 1) < (int)uVar4) {
        uVar12 = uVar4;
      }
      do {
        if (uVar12 - 1 == uVar11) goto LAB_146c1918e;
        uVar11 = uVar11 + 1;
      } while ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar11 >> 9) * 8) +
                                  (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe);
    } while ((int)uVar11 < (int)uVar4);
  }
LAB_146c1918e:
  iVar6 = *(int *)(param_1 + 0x38);
  FUN_1411b3fe4(param_1 + 0x20);
  FUN_146c41884(param_1 + 8,iVar6);
  *(int *)(param_1 + 0x38) = iVar6;
  FUN_146bfd442(param_1 + 0x40,iVar6 * 3);
  FUN_1411b328a(param_1 + 0x58,*(undefined4 *)(param_1 + 0x38));
  uVar4 = *(int *)(param_1 + 0x70) * 0x200 + *(int *)(param_1 + 0x74);
  iVar6 = 3;
  if (2 < uVar4) {
    iVar5 = 0;
    uVar3 = 0;
    iVar6 = 0;
    do {
      iVar1 = *(int *)(param_2[2] + uVar3 * 4);
      if (iVar1 != -1) {
        if (iVar6 <= iVar1) {
          iVar6 = iVar1;
        }
        uVar12 = (int)uVar3 * 3;
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar12 >> 9) * 8) +
                    (ulonglong)(uVar12 & 0x1ff) * 4) == -1) {
          iVar8 = 0;
          do {
            uVar12 = iVar1 * 3 + iVar8;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar12 >> 9) * 8) +
             (ulonglong)(uVar12 & 0x1ff) * 4) = 0xffffffff;
            iVar8 = iVar8 + 1;
          } while (iVar8 != 3);
        }
        else {
          iVar8 = 0;
          do {
            uVar12 = iVar1 * 3 + iVar8;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar12 >> 9) * 8) +
             (ulonglong)(uVar12 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (local_68 +
                  (longlong)
                  *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x78) +
                            (ulonglong)((uint)(iVar5 + iVar8) >> 9) * 8) +
                          (ulonglong)(iVar5 + iVar8 & 0x1ff) * 4) * 4);
            iVar8 = iVar8 + 1;
          } while (iVar8 != 3);
        }
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 3;
    } while (uVar3 != (ulonglong)uVar4 / 3);
    iVar6 = iVar6 * 3 + 3;
  }
  FUN_1411b328a(param_1 + 0x70,iVar6);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1933a FUN_146c1933a body=963 status=ok
// SIG undefined FUN_146c1933a(void)

void FUN_146c1933a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 0xc);
  uVar9 = ((int)uVar5 >> 0x1f & uVar5) - 1;
  do {
    if ((int)uVar5 < 1) goto LAB_146c193ad;
    uVar5 = uVar5 - 1;
  } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(param_1 + 0x10) +
                                         (ulonglong)(uVar5 >> 9) * 8) +
                                       (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
  if (uVar5 == 0) {
    uVar9 = 0;
LAB_146c193ad:
    uVar5 = uVar9;
    uVar13 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar13 = uVar9;
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar9 >> 9) * 8
                                        ) + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U)) break;
      uVar9 = uVar9 + 1;
      uVar13 = uVar5;
    } while (uVar5 != uVar9);
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_144a127d2(&local_68);
  if (0 < (int)uStack_60) {
    uVar4 = 0;
    do {
      *(uint *)(local_68 + uVar4 * 4) = (uint)uVar4;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (uVar4 >> 9 & 0x7fffff) * 8);
      uVar9 = (uint)uVar4 & 0x1ff;
      lVar10 = (longlong)*(int *)(lVar11 + (ulonglong)uVar9 * 4);
      if (-1 < lVar10) {
        *(undefined4 *)(lVar11 + (ulonglong)uVar9 * 4) = *(undefined4 *)(*param_2 + lVar10 * 4);
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)(int)uStack_60);
  }
  if ((int)uVar13 < (int)uVar5) {
    do {
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar5 >> 4 & 0x3fffff8)) +
               (ulonglong)((uVar5 & 0x7f) << 4));
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      lVar11 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar13 >> 7 & 0x7fffff) * 8) +
          (ulonglong)((uVar13 & 0x7f) << 4) + lVar11 * 4) =
             *(undefined4 *)((longlong)&local_58 + lVar11 * 4);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
      uVar4 = (ulonglong)(uVar5 >> 9);
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar13 >> 9) * 8) +
       (ulonglong)(uVar13 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8) +
            (ulonglong)(uVar5 & 0x1ff) * 4);
      uVar12 = (ulonglong)((uVar5 & 0x1ff) * 2);
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar13 >> 9) * 8) +
       (ulonglong)(uVar13 & 0x1ff) * 2) =
           *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) + uVar12);
      *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) + uVar12) = 0xffff;
      *(uint *)(local_68 + (longlong)(int)uVar5 * 4) = uVar13;
      uVar9 = (int)uVar5 >> 0x1f & uVar5;
      do {
        uVar3 = uVar9 - 1;
        if ((int)uVar5 < 1) break;
        uVar5 = uVar5 - 1;
        uVar3 = uVar5;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_1 + 0x10) +
                                             (ulonglong)(uVar5 >> 9) * 8) +
                                           (ulonglong)(uVar5 & 0x1ff) * 2) - 1U));
      uVar5 = uVar3;
      uVar9 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar5) {
        uVar9 = uVar5;
      }
      do {
        if (uVar9 - 1 == uVar13) goto LAB_146c19557;
        uVar13 = uVar13 + 1;
      } while ((ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar13 >> 9) * 8) +
                                  (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe);
    } while ((int)uVar13 < (int)uVar5);
  }
LAB_146c19557:
  iVar7 = *(int *)(param_1 + 0x38);
  FUN_1411b3fe4(param_1 + 0x20);
  FUN_146c41884(param_1 + 8,iVar7);
  *(int *)(param_1 + 0x38) = iVar7;
  FUN_146bfd442(param_1 + 0x40,iVar7 << 2);
  FUN_1411b328a(param_1 + 0x58,*(undefined4 *)(param_1 + 0x38));
  uVar5 = *(int *)(param_1 + 0x70) * 0x200 + *(int *)(param_1 + 0x74);
  iVar7 = 3;
  if (2 < uVar5) {
    iVar6 = 0;
    uVar4 = 0;
    iVar7 = 0;
    do {
      iVar2 = *(int *)(param_2[2] + uVar4 * 4);
      if (iVar2 != -1) {
        if (iVar7 <= iVar2) {
          iVar7 = iVar2;
        }
        uVar9 = (int)uVar4 * 3;
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar9 >> 9) * 8) +
                    (ulonglong)(uVar9 & 0x1ff) * 4) == -1) {
          iVar8 = 0;
          do {
            uVar9 = iVar2 * 3 + iVar8;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar9 >> 9) * 8) +
             (ulonglong)(uVar9 & 0x1ff) * 4) = 0xffffffff;
            iVar8 = iVar8 + 1;
          } while (iVar8 != 3);
        }
        else {
          iVar8 = 0;
          do {
            uVar9 = iVar2 * 3 + iVar8;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar9 >> 9) * 8) +
             (ulonglong)(uVar9 & 0x1ff) * 4) =
                 *(undefined4 *)
                  (local_68 +
                  (longlong)
                  *(int *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x78) +
                            (ulonglong)((uint)(iVar6 + iVar8) >> 9) * 8) +
                          (ulonglong)(iVar6 + iVar8 & 0x1ff) * 4) * 4);
            iVar8 = iVar8 + 1;
          } while (iVar8 != 3);
        }
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 3;
    } while (uVar4 != (ulonglong)uVar5 / 3);
    iVar7 = iVar7 * 3 + 3;
  }
  FUN_1411b328a(param_1 + 0x70,iVar7);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c196fe FUN_146c196fe body=1487 status=ok
// SIG undefined FUN_146c196fe(void)

void FUN_146c196fe(longlong *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = (**(code **)(*param_1 + 0xa0))();
  local_6c = (**(code **)(*param_1 + 0xb0))(param_1);
  local_68 = 0;
  uStack_60 = 0;
  if (0 < (int)uVar1) {
    uVar10 = 0;
    do {
      if ((longlong)uVar10 < (longlong)(int)param_1[5]) {
        uVar8 = *(undefined8 *)(param_1[4] + uVar10 * 8);
      }
      else {
        uVar8 = 0;
      }
      if (param_2 == '\0') {
        FUN_142972d20(uVar8);
      }
      else {
        puVar4 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
        puVar6 = (undefined8 *)puVar4[1];
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar4;
          if (puVar6 == (undefined8 *)0x0) {
            uVar2 = FUN_14470efbc(&DAT_14c896180);
            if (uVar2 == 0) {
              puVar4[1] = 0;
            }
            else {
              puVar6 = *(undefined8 **)
                        (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
                        (ulonglong)(uVar2 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar2);
              puVar4[1] = puVar6;
              if (puVar6 != (undefined8 *)0x0) goto LAB_146c19863;
            }
            puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
            puVar4[1] = puVar6;
            iVar3 = 0xff;
            do {
              puVar7 = puVar6 + 0x20;
              *puVar6 = puVar7;
              iVar3 = iVar3 + -1;
              puVar6 = puVar7;
            } while (iVar3 != 0);
            *puVar7 = 0;
            puVar6 = (undefined8 *)puVar4[1];
          }
          else {
            puVar4[1] = puVar6;
            *puVar4 = 0;
          }
LAB_146c19863:
          *(undefined4 *)(puVar4 + 2) = 0x100;
          iVar3 = 0x100;
        }
        else {
          iVar3 = *(int *)(puVar4 + 2);
        }
        puVar4[1] = *puVar6;
        *(int *)(puVar4 + 2) = iVar3 + -1;
        FUN_144a23e74(puVar6,2,1);
        *puVar6 = &PTR_FUN_149f3be08;
        local_78 = 0;
        FUN_144a24082(puVar6,
                      L".\\Runtime/GeometryCore/Private/DynamicMesh/DynamicMeshAttributeSet.cpp(247)"
                      ,1,0);
        puVar6[0x15] = uVar8;
        *puVar6 = &PTR_FUN_149f3bdf8;
        FUN_144a23f14((ulonglong)puVar6[0x10] >> 0x3b & 0xffffffffffffff07,
                      *(undefined4 *)((longlong)puVar6 + 0x1c));
        local_49 = 1;
        FUN_1447439e4(puVar6);
        lVar9 = (longlong)(int)uStack_60;
        uVar2 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
        if (uStack_60._4_4_ < uVar2) {
          FUN_146c54922(&local_68);
        }
        *(undefined8 **)(local_68 + lVar9 * 8) = puVar6;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar1);
  }
  if (0 < (int)local_6c) {
    uVar10 = (ulonglong)local_6c;
    uVar11 = 0;
    do {
      if ((longlong)uVar11 < (longlong)(int)param_1[7]) {
        uVar8 = *(undefined8 *)(param_1[6] + uVar11 * 8);
      }
      else {
        uVar8 = 0;
      }
      if (param_2 == '\0') {
        FUN_142972de6(uVar8);
      }
      else {
        puVar4 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
        puVar6 = (undefined8 *)puVar4[1];
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar4;
          if (puVar6 == (undefined8 *)0x0) {
            uVar1 = FUN_14470efbc(&DAT_14c896180);
            if (uVar1 == 0) {
              puVar4[1] = 0;
            }
            else {
              puVar6 = *(undefined8 **)
                        (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8) + 8 +
                        (ulonglong)(uVar1 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar1);
              puVar4[1] = puVar6;
              if (puVar6 != (undefined8 *)0x0) goto LAB_146c19a38;
            }
            puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
            puVar4[1] = puVar6;
            iVar3 = 0xff;
            do {
              puVar7 = puVar6 + 0x20;
              *puVar6 = puVar7;
              iVar3 = iVar3 + -1;
              puVar6 = puVar7;
            } while (iVar3 != 0);
            *puVar7 = 0;
            puVar6 = (undefined8 *)puVar4[1];
          }
          else {
            puVar4[1] = puVar6;
            *puVar4 = 0;
          }
LAB_146c19a38:
          *(undefined4 *)(puVar4 + 2) = 0x100;
          iVar3 = 0x100;
        }
        else {
          iVar3 = *(int *)(puVar4 + 2);
        }
        puVar4[1] = *puVar6;
        *(int *)(puVar4 + 2) = iVar3 + -1;
        FUN_144a23e74(puVar6,2,1);
        *puVar6 = &PTR_FUN_149f3be28;
        local_78 = 0;
        FUN_144a24082(puVar6,
                      L".\\Runtime/GeometryCore/Private/DynamicMesh/DynamicMeshAttributeSet.cpp(247)"
                      ,1,0);
        puVar6[0x15] = uVar8;
        *puVar6 = &PTR_FUN_149f3be18;
        FUN_144a23f14((ulonglong)puVar6[0x10] >> 0x3b & 0xffffffffffffff07,
                      *(undefined4 *)((longlong)puVar6 + 0x1c));
        local_49 = 1;
        FUN_1447439e4(puVar6);
        lVar9 = (longlong)(int)uStack_60;
        uVar1 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
        if (uStack_60._4_4_ < uVar1) {
          FUN_146c54922(&local_68);
        }
        *(undefined8 **)(local_68 + lVar9 * 8) = puVar6;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  lVar9 = param_1[8];
  if (lVar9 == 0) goto LAB_146c19bc6;
  if (param_2 == '\0') {
    FUN_142972eac(lVar9);
    goto LAB_146c19bc6;
  }
  puVar4 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar6 = (undefined8 *)puVar4[1];
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*puVar4;
    if (puVar6 == (undefined8 *)0x0) {
      uVar1 = FUN_14470efbc(&DAT_14c896180);
      if (uVar1 == 0) {
        puVar4[1] = 0;
LAB_146c19ca1:
        puVar6 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar4[1] = puVar6;
        iVar3 = 0xff;
        puVar7 = puVar6;
        do {
          puVar5 = puVar7 + 0x20;
          *puVar7 = puVar5;
          iVar3 = iVar3 + -1;
          puVar7 = puVar5;
        } while (iVar3 != 0);
        goto LAB_146c19c2c;
      }
      puVar6 = *(undefined8 **)
                (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8) + 8 +
                (ulonglong)(uVar1 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar1);
      puVar4[1] = puVar6;
      if (puVar6 == (undefined8 *)0x0) goto LAB_146c19ca1;
    }
    else {
      puVar4[1] = puVar6;
      puVar5 = puVar4;
LAB_146c19c2c:
      *puVar5 = 0;
    }
    *(undefined4 *)(puVar4 + 2) = 0x100;
    iVar3 = 0xff;
  }
  else {
    iVar3 = *(int *)(puVar4 + 2) + -1;
  }
  puVar4[1] = *puVar6;
  *(int *)(puVar4 + 2) = iVar3;
  FUN_144a23e74(puVar6,2,1);
  *puVar6 = &PTR_FUN_149f3be48;
  local_78 = 0;
  FUN_144a24082(puVar6,
                L".\\Runtime/GeometryCore/Private/DynamicMesh/DynamicMeshAttributeSet.cpp(247)",1,0)
  ;
  puVar6[0x15] = lVar9;
  *puVar6 = &PTR_FUN_149f3be38;
  FUN_144a23f14((ulonglong)puVar6[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar6 + 0x1c));
  local_49 = 1;
  FUN_1447439e4(puVar6);
  uVar10 = uStack_60;
  lVar9 = (longlong)(int)uStack_60;
  uVar1 = (int)uStack_60 + 1;
  uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
  if (uStack_60._4_4_ < uVar1) {
    FUN_146c54922(&local_68,uVar10 & 0xffffffff);
  }
  *(undefined8 **)(local_68 + lVar9 * 8) = puVar6;
LAB_146c19bc6:
  FUN_142972845(&local_68,0x7fffffffffffffff);
  FUN_14473400f(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c19cce FUN_146c19cce body=251 status=ok
// SIG undefined FUN_146c19cce(void)

void FUN_146c19cce(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146c2cf40(param_1 + 8);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  FUN_141224904(&local_58);
  FUN_141040b84(&uStack_40);
  local_28 = local_28 & 0xffffffff00000000;
  FUN_146c40eae(param_1 + 1,&local_58);
  FUN_146c40f34(param_1 + 4,&uStack_40);
  *(undefined4 *)(param_1 + 7) = (undefined4)local_28;
  FUN_14117c64e(&local_58);
  FUN_1411b3fe4(param_1 + 0xb);
  FUN_1411b328a(param_1 + 0xe,(*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144)) * 3)
  ;
  lVar1 = param_1[0x10];
  if ((longlong)(int)lVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1[0xf] + (longlong)(int)uVar2 * 8) + lVar3 * 4) =
             0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)(int)lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c19dca FUN_146c19dca body=251 status=ok
// SIG undefined FUN_146c19dca(void)

void FUN_146c19dca(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146c2cf40(param_1 + 8);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  FUN_141224904(&local_58);
  FUN_141040b84(&uStack_40);
  local_28 = local_28 & 0xffffffff00000000;
  FUN_146c40eae(param_1 + 1,&local_58);
  FUN_146c40f34(param_1 + 4,&uStack_40);
  *(undefined4 *)(param_1 + 7) = (undefined4)local_28;
  FUN_14117c64e(&local_58);
  FUN_1411b3fe4(param_1 + 0xb);
  FUN_1411b328a(param_1 + 0xe,(*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144)) * 3)
  ;
  lVar1 = param_1[0x10];
  if ((longlong)(int)lVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1[0xf] + (longlong)(int)uVar2 * 8) + lVar3 * 4) =
             0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)(int)lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c19ec6 FUN_146c19ec6 body=12 status=ok
// SIG undefined FUN_146c19ec6(void)

undefined8 FUN_146c19ec6(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
}



// FUNCTION 146c19ed2 FUN_146c19ed2 body=88 status=ok
// SIG undefined FUN_146c19ed2(void)

void FUN_146c19ed2(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_146bfd442(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24));
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 8) + lVar3 * 4) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 146c19f2a FUN_146c19f2a body=12 status=ok
// SIG undefined FUN_146c19f2a(void)

undefined8 FUN_146c19f2a(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8);
}



// FUNCTION 146c19f36 FUN_146c19f36 body=248 status=ok
// SIG undefined FUN_146c19f36(void)

void FUN_146c19f36(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined1 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined1 *)0x0;
  uVar1 = (undefined1)param_3;
  local_58 = uVar1;
  local_50 = param_4;
  FUN_146c28912(*(undefined8 *)(param_1 + 0x18),param_1 + 0xc0,*(undefined8 *)(param_2 + 0xc0),
                &local_48);
  local_48 = (undefined1 *)CONCAT44(local_48._4_4_,0xffffffff);
  local_58 = uVar1;
  local_50 = param_4;
  FUN_146c28a06(*(undefined8 *)(param_1 + 0x18),param_1 + 200,*(undefined8 *)(param_2 + 200),
                &local_48);
  local_58 = param_4;
  FUN_146c28afd(*(undefined8 *)(param_1 + 0x18),param_1 + 0xd0,*(undefined8 *)(param_2 + 0xd0),
                param_3);
  local_48 = &DAT_3f8000003f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_58 = uVar1;
  local_50 = param_4;
  FUN_146c28bef(*(undefined8 *)(param_1 + 0x18),param_1 + 0xd8,*(undefined8 *)(param_2 + 0xd8),
                &local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1a030 FUN_146c1a030 body=81 status=ok
// SIG undefined FUN_146c1a030(void)

void FUN_146c1a030(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_1411b328a(param_1 + 0x70,param_2 * 3);
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar2 * 8) + lVar3 * 4) =
             0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 146c1a082 FUN_146c1a082 body=175 status=ok
// SIG undefined FUN_146c1a082(void)

void FUN_146c1a082(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + (longlong)param_2 * 8 + lVar5 * 8);
      if (lVar2 != 0) {
        FUN_1457ed328(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar5 = lVar5 + 1;
    } while (param_3 != (int)lVar5);
    iVar3 = (int)param_1[1];
    iVar4 = iVar3 - (param_2 + param_3);
    if (iVar4 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *param_1);
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar4 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    FUN_140380544(param_1);
    return;
  }
  return;
}



// FUNCTION 146c1a132 FUN_146c1a132 body=18 status=ok
// SIG undefined FUN_146c1a132(void)

void FUN_146c1a132(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146c1a141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))(param_1,3);
  return;
}



// FUNCTION 146c1a144 FUN_146c1a144 body=81 status=ok
// SIG undefined FUN_146c1a144(void)

void FUN_146c1a144(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_1411b328a(param_1 + 0x70,param_2 * 3);
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar2 * 8) + lVar3 * 4) =
             0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 146c1a196 FUN_146c1a196 body=175 status=ok
// SIG undefined FUN_146c1a196(void)

void FUN_146c1a196(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + (longlong)param_2 * 8 + lVar5 * 8);
      if (lVar2 != 0) {
        FUN_1457ed45a(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar5 = lVar5 + 1;
    } while (param_3 != (int)lVar5);
    iVar3 = (int)param_1[1];
    iVar4 = iVar3 - (param_2 + param_3);
    if (iVar4 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *param_1);
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar4 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    FUN_140380544(param_1);
    return;
  }
  return;
}



// FUNCTION 146c1a246 FUN_146c1a246 body=81 status=ok
// SIG undefined FUN_146c1a246(void)

void FUN_146c1a246(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_1411b328a(param_1 + 0x70,param_2 * 3);
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar2 * 8) + lVar3 * 4) =
             0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 146c1a29c FUN_146c1a29c body=198 status=ok
// SIG undefined FUN_146c1a29c(void)

void FUN_146c1a29c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 != param_2) {
    if (param_2 <= iVar2) {
      FUN_146c1a362(plVar1,param_2);
      return;
    }
    if (iVar2 < param_2) {
      param_2 = param_2 - iVar2;
      do {
        puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_149f3bf50;
        FUN_141040b84(puVar4 + 3);
        puVar4[2] = uVar3;
        FUN_1411b3144(puVar4,0);
        *puVar4 = &PTR_FUN_149f3be80;
        iVar2 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x68) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
          FUN_1456bd870(plVar1,iVar2);
        }
        *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8) = puVar4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}



// FUNCTION 146c1a362 FUN_146c1a362 body=155 status=ok
// SIG undefined FUN_146c1a362(void)

void FUN_146c1a362(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + (longlong)param_2 * 8 + lVar5 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar5 = lVar5 + 1;
    } while (param_3 != (int)lVar5);
    iVar3 = (int)param_1[1];
    iVar4 = iVar3 - (param_2 + param_3);
    if (iVar4 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *param_1);
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar4 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    FUN_140380544(param_1);
    return;
  }
  return;
}



// FUNCTION 146c1a3fe FUN_146c1a3fe body=12 status=ok
// SIG undefined FUN_146c1a3fe(void)

undefined8 FUN_146c1a3fe(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
}



// FUNCTION 146c1a40e FUN_146c1a40e body=177 status=ok
// SIG undefined FUN_146c1a40e(void)

void FUN_146c1a40e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 != param_2) {
    if (param_2 <= iVar2) {
      FUN_146c1a4c0(plVar1,param_2);
      return;
    }
    if (iVar2 < param_2) {
      param_2 = param_2 - iVar2;
      do {
        puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_149f3c020;
        puVar4[2] = uVar3;
        FUN_14582f01a(puVar4 + 3);
        FUN_146c19ed2(puVar4);
        iVar2 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
          FUN_1456bd870(plVar1,iVar2);
        }
        *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8) = puVar4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}



// FUNCTION 146c1a4c0 FUN_146c1a4c0 body=155 status=ok
// SIG undefined FUN_146c1a4c0(void)

void FUN_146c1a4c0(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar1 + (longlong)param_2 * 8 + lVar5 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar5 = lVar5 + 1;
    } while (param_3 != (int)lVar5);
    iVar3 = (int)param_1[1];
    iVar4 = iVar3 - (param_2 + param_3);
    if (iVar4 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *param_1);
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar4 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    FUN_140380544(param_1);
    return;
  }
  return;
}



// FUNCTION 146c1a566 FUN_146c1a566 body=96 status=ok
// SIG undefined FUN_146c1a566(void)

void FUN_146c1a566(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)param_2;
  puVar1 = *(undefined8 **)(*param_1 + lVar3 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(*param_1 + lVar3 * 8),(void *)(*param_1 + lVar3 * 8 + 8),
            (longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 146c1a5c6 FUN_146c1a5c6 body=12 status=ok
// SIG undefined FUN_146c1a5c6(void)

undefined8 FUN_146c1a5c6(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8);
}



// FUNCTION 146c1a5d2 FUN_146c1a5d2 body=255 status=ok
// SIG undefined FUN_146c1a5d2(void)

void FUN_146c1a5d2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar3 = (uint)param_2 & 0xffff;
    lVar2 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb0);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x70);
      iVar6 = iVar4;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x18) == param_2) goto LAB_146c1a68e;
        iVar6 = *(int *)(lVar2 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  goto LAB_146c1a66e;
  while (iVar4 = (int)plVar5[2], iVar4 != -1) {
LAB_146c1a68e:
    plVar5 = (longlong *)(lVar2 + (longlong)iVar4 * 0x18);
    if (*plVar5 == param_2) goto LAB_146c1a6a8;
  }
  plVar5 = (longlong *)0x0;
LAB_146c1a6a8:
  local_28 = plVar5[1];
  local_20 = &local_28;
  FUN_146c4dcb2(param_1 + 8);
  FUN_146c562a8((longlong *)(param_1 + 0x70),param_2);
LAB_146c1a66e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1a6d2 FUN_146c1a6d2 body=157 status=ok
// SIG undefined FUN_146c1a6d2(void)

undefined8 FUN_146c1a6d2(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      cVar3 = FUN_146c1a770(*(undefined8 *)(lVar2 + lVar4),param_2,0);
      if (cVar3 != '\0') {
        return 1;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      cVar3 = FUN_146c1aaf4(*(undefined8 *)(lVar2 + lVar4),param_2,0);
      if (cVar3 != '\0') {
        return 1;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (cVar3 = FUN_146c1ae78(*(longlong *)(param_1 + 0x40),param_2,0), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 146c1a770 FUN_146c1a770 body=899 status=ok
// SIG undefined FUN_146c1a770(void)

ulonglong FUN_146c1a770(longlong *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 unaff_RBP;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_78 [28];
  int aiStack_5c [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if ((-1 < (int)param_2) &&
     (lVar10 = *param_1, (int)param_2 < *(int *)(lVar10 + 0x1d0) * 0x200 + *(int *)(lVar10 + 0x1d4))
     ) {
    uVar11 = param_2 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar10 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)uVar11 * 2) - 1U) < 0xfffe) {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
      uVar14 = *(ulonglong *)(lVar10 + 8 + (ulonglong)(uVar11 << 4));
      if (uVar14 >> 0x20 == 0xffffffff) {
        uVar14 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        if (param_3 != (undefined1 *)0x0) {
          uVar4 = *(ulonglong *)(lVar10 + (ulonglong)(uVar11 << 4));
          iVar7 = FUN_146c2e056(param_1,uVar4);
          iVar8 = FUN_146c2e056(param_1,uVar4 >> 0x20);
          *param_3 = iVar8 == 1 && iVar7 == 1;
        }
      }
      else {
        uVar6 = (int)uVar14 * 3;
        lVar16 = param_1[0xf];
        uVar1 = *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 >> 9) * 8) +
                         (ulonglong)(uVar6 & 0x1ff) * 4);
        uVar5 = (int)(uVar14 >> 0x20) * 3;
        uVar2 = *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        if ((int)(uVar2 | uVar1) < 0) {
          uVar14 = (ulonglong)CONCAT31((int3)((uVar2 | uVar1) >> 8),-1 < (int)(uVar2 & uVar1));
        }
        else {
          uVar14 = *(ulonglong *)(lVar10 + (ulonglong)(uVar11 << 4));
          aiStack_5c[6] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                        (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
          aiStack_5c[5] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
          aiStack_5c[4] = uVar1;
          lVar10 = param_1[0xc];
          iVar7 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[6] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[6] & 0x1ff) * 4);
          iVar8 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[5] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[5] & 0x1ff) * 4);
          iVar9 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 4);
          iVar12 = (int)uVar14;
          if (iVar9 == iVar12) {
            lVar15 = 0;
          }
          else {
            lVar15 = 1;
            if (iVar8 != iVar12) {
              lVar15 = (ulonglong)(iVar7 == iVar12) * 3 + -1;
            }
          }
          iVar13 = (int)(uVar14 >> 0x20);
          if (iVar9 == iVar13) {
            lVar17 = 0;
          }
          else {
            lVar17 = 1;
            if (iVar8 != iVar13) {
              lVar17 = (ulonglong)(iVar7 == iVar13) * 3 + -1;
            }
          }
          aiStack_5c[3] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                        (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
          aiStack_5c[2] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                        (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
          aiStack_5c[1] = uVar2;
          iVar8 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[3] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[3] & 0x1ff) * 4);
          iVar9 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[2] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[2] & 0x1ff) * 4);
          iVar3 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 >> 9) * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 4);
          if (iVar3 == iVar12) {
            lVar10 = 0;
          }
          else {
            lVar10 = 1;
            if (iVar9 != iVar12) {
              lVar10 = (ulonglong)(iVar8 == iVar12) * 3 + -1;
            }
          }
          if (iVar3 == iVar13) {
            lVar16 = 0;
          }
          else {
            lVar16 = 1;
            if (iVar9 != iVar13) {
              lVar16 = (ulonglong)(iVar8 == iVar13) * 3 + -1;
            }
          }
          iVar8 = aiStack_5c[lVar15 + 4];
          iVar9 = aiStack_5c[lVar17 + 4];
          iVar12 = aiStack_5c[lVar10 + 1];
          iVar13 = aiStack_5c[lVar16 + 1];
          if (iVar8 == iVar12) {
            bVar18 = iVar9 == iVar13;
          }
          else {
            bVar18 = iVar9 == iVar12 && iVar8 == iVar13;
          }
          if (param_3 != (undefined1 *)0x0) {
            bVar19 = false;
            if ((((iVar8 != iVar12) && (iVar8 != iVar13)) && (iVar9 != iVar12)) && (iVar9 != iVar13)
               ) {
              iVar8 = FUN_146c2e056(param_1);
              iVar9 = FUN_146c2e056(param_1,uVar14 >> 0x20);
              bVar19 = iVar9 == 2 && iVar8 == 2;
            }
            *param_3 = bVar19;
          }
          uVar14 = (ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),bVar18) ^ 1;
        }
      }
      goto LAB_146c1a845;
    }
  }
  uVar14 = 0;
LAB_146c1a845:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1aaf4 FUN_146c1aaf4 body=899 status=ok
// SIG undefined FUN_146c1aaf4(void)

ulonglong FUN_146c1aaf4(longlong *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 unaff_RBP;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_78 [28];
  int aiStack_5c [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if ((-1 < (int)param_2) &&
     (lVar10 = *param_1, (int)param_2 < *(int *)(lVar10 + 0x1d0) * 0x200 + *(int *)(lVar10 + 0x1d4))
     ) {
    uVar11 = param_2 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar10 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)uVar11 * 2) - 1U) < 0xfffe) {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
      uVar14 = *(ulonglong *)(lVar10 + 8 + (ulonglong)(uVar11 << 4));
      if (uVar14 >> 0x20 == 0xffffffff) {
        uVar14 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        if (param_3 != (undefined1 *)0x0) {
          uVar4 = *(ulonglong *)(lVar10 + (ulonglong)(uVar11 << 4));
          iVar7 = FUN_146c31252(param_1,uVar4);
          iVar8 = FUN_146c31252(param_1,uVar4 >> 0x20);
          *param_3 = iVar8 == 1 && iVar7 == 1;
        }
      }
      else {
        uVar6 = (int)uVar14 * 3;
        lVar16 = param_1[0xf];
        uVar1 = *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 >> 9) * 8) +
                         (ulonglong)(uVar6 & 0x1ff) * 4);
        uVar5 = (int)(uVar14 >> 0x20) * 3;
        uVar2 = *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        if ((int)(uVar2 | uVar1) < 0) {
          uVar14 = (ulonglong)CONCAT31((int3)((uVar2 | uVar1) >> 8),-1 < (int)(uVar2 & uVar1));
        }
        else {
          uVar14 = *(ulonglong *)(lVar10 + (ulonglong)(uVar11 << 4));
          aiStack_5c[6] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                        (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
          aiStack_5c[5] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
          aiStack_5c[4] = uVar1;
          lVar10 = param_1[0xc];
          iVar7 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[6] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[6] & 0x1ff) * 4);
          iVar8 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[5] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[5] & 0x1ff) * 4);
          iVar9 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 4);
          iVar12 = (int)uVar14;
          if (iVar9 == iVar12) {
            lVar15 = 0;
          }
          else {
            lVar15 = 1;
            if (iVar8 != iVar12) {
              lVar15 = (ulonglong)(iVar7 == iVar12) * 3 + -1;
            }
          }
          iVar13 = (int)(uVar14 >> 0x20);
          if (iVar9 == iVar13) {
            lVar17 = 0;
          }
          else {
            lVar17 = 1;
            if (iVar8 != iVar13) {
              lVar17 = (ulonglong)(iVar7 == iVar13) * 3 + -1;
            }
          }
          aiStack_5c[3] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                        (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
          aiStack_5c[2] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                        (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
          aiStack_5c[1] = uVar2;
          iVar8 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[3] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[3] & 0x1ff) * 4);
          iVar9 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[2] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[2] & 0x1ff) * 4);
          iVar3 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 >> 9) * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 4);
          if (iVar3 == iVar12) {
            lVar10 = 0;
          }
          else {
            lVar10 = 1;
            if (iVar9 != iVar12) {
              lVar10 = (ulonglong)(iVar8 == iVar12) * 3 + -1;
            }
          }
          if (iVar3 == iVar13) {
            lVar16 = 0;
          }
          else {
            lVar16 = 1;
            if (iVar9 != iVar13) {
              lVar16 = (ulonglong)(iVar8 == iVar13) * 3 + -1;
            }
          }
          iVar8 = aiStack_5c[lVar15 + 4];
          iVar9 = aiStack_5c[lVar17 + 4];
          iVar12 = aiStack_5c[lVar10 + 1];
          iVar13 = aiStack_5c[lVar16 + 1];
          if (iVar8 == iVar12) {
            bVar18 = iVar9 == iVar13;
          }
          else {
            bVar18 = iVar9 == iVar12 && iVar8 == iVar13;
          }
          if (param_3 != (undefined1 *)0x0) {
            bVar19 = false;
            if ((((iVar8 != iVar12) && (iVar8 != iVar13)) && (iVar9 != iVar12)) && (iVar9 != iVar13)
               ) {
              iVar8 = FUN_146c31252(param_1);
              iVar9 = FUN_146c31252(param_1,uVar14 >> 0x20);
              bVar19 = iVar9 == 2 && iVar8 == 2;
            }
            *param_3 = bVar19;
          }
          uVar14 = (ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),bVar18) ^ 1;
        }
      }
      goto LAB_146c1abc9;
    }
  }
  uVar14 = 0;
LAB_146c1abc9:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1ae78 FUN_146c1ae78 body=899 status=ok
// SIG undefined FUN_146c1ae78(void)

ulonglong FUN_146c1ae78(longlong *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 unaff_RBP;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_78 [28];
  int aiStack_5c [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if ((-1 < (int)param_2) &&
     (lVar10 = *param_1, (int)param_2 < *(int *)(lVar10 + 0x1d0) * 0x200 + *(int *)(lVar10 + 0x1d4))
     ) {
    uVar11 = param_2 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar10 + 0x1d8) + (ulonglong)(param_2 >> 9) * 8) +
                           (ulonglong)uVar11 * 2) - 1U) < 0xfffe) {
      lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
      uVar14 = *(ulonglong *)(lVar10 + 8 + (ulonglong)(uVar11 << 4));
      if (uVar14 >> 0x20 == 0xffffffff) {
        uVar14 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        if (param_3 != (undefined1 *)0x0) {
          uVar4 = *(ulonglong *)(lVar10 + (ulonglong)(uVar11 << 4));
          iVar7 = FUN_146c346a4(param_1,uVar4);
          iVar8 = FUN_146c346a4(param_1,uVar4 >> 0x20);
          *param_3 = iVar8 == 1 && iVar7 == 1;
        }
      }
      else {
        uVar6 = (int)uVar14 * 3;
        lVar16 = param_1[0xf];
        uVar1 = *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 >> 9) * 8) +
                         (ulonglong)(uVar6 & 0x1ff) * 4);
        uVar5 = (int)(uVar14 >> 0x20) * 3;
        uVar2 = *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 4);
        if ((int)(uVar2 | uVar1) < 0) {
          uVar14 = (ulonglong)CONCAT31((int3)((uVar2 | uVar1) >> 8),-1 < (int)(uVar2 & uVar1));
        }
        else {
          uVar14 = *(ulonglong *)(lVar10 + (ulonglong)(uVar11 << 4));
          aiStack_5c[6] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                        (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
          aiStack_5c[5] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                        (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
          aiStack_5c[4] = uVar1;
          lVar10 = param_1[0xc];
          iVar7 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[6] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[6] & 0x1ff) * 4);
          iVar8 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[5] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[5] & 0x1ff) * 4);
          iVar9 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 4);
          iVar12 = (int)uVar14;
          if (iVar9 == iVar12) {
            lVar15 = 0;
          }
          else {
            lVar15 = 1;
            if (iVar8 != iVar12) {
              lVar15 = (ulonglong)(iVar7 == iVar12) * 3 + -1;
            }
          }
          iVar13 = (int)(uVar14 >> 0x20);
          if (iVar9 == iVar13) {
            lVar17 = 0;
          }
          else {
            lVar17 = 1;
            if (iVar8 != iVar13) {
              lVar17 = (ulonglong)(iVar7 == iVar13) * 3 + -1;
            }
          }
          aiStack_5c[3] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                        (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
          aiStack_5c[2] =
               *(uint *)(*(longlong *)(lVar16 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                        (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
          aiStack_5c[1] = uVar2;
          iVar8 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[3] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[3] & 0x1ff) * 4);
          iVar9 = *(int *)(*(longlong *)(lVar10 + (ulonglong)((uint)aiStack_5c[2] >> 9) * 8) +
                          (ulonglong)(aiStack_5c[2] & 0x1ff) * 4);
          iVar3 = *(int *)(*(longlong *)(lVar10 + (ulonglong)(uVar2 >> 9) * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 4);
          if (iVar3 == iVar12) {
            lVar10 = 0;
          }
          else {
            lVar10 = 1;
            if (iVar9 != iVar12) {
              lVar10 = (ulonglong)(iVar8 == iVar12) * 3 + -1;
            }
          }
          if (iVar3 == iVar13) {
            lVar16 = 0;
          }
          else {
            lVar16 = 1;
            if (iVar9 != iVar13) {
              lVar16 = (ulonglong)(iVar8 == iVar13) * 3 + -1;
            }
          }
          iVar8 = aiStack_5c[lVar15 + 4];
          iVar9 = aiStack_5c[lVar17 + 4];
          iVar12 = aiStack_5c[lVar10 + 1];
          iVar13 = aiStack_5c[lVar16 + 1];
          if (iVar8 == iVar12) {
            bVar18 = iVar9 == iVar13;
          }
          else {
            bVar18 = iVar9 == iVar12 && iVar8 == iVar13;
          }
          if (param_3 != (undefined1 *)0x0) {
            bVar19 = false;
            if ((((iVar8 != iVar12) && (iVar8 != iVar13)) && (iVar9 != iVar12)) && (iVar9 != iVar13)
               ) {
              iVar8 = FUN_146c346a4(param_1);
              iVar9 = FUN_146c346a4(param_1,uVar14 >> 0x20);
              bVar19 = iVar9 == 2 && iVar8 == 2;
            }
            *param_3 = bVar19;
          }
          uVar14 = (ulonglong)CONCAT31((int3)((uint)iVar7 >> 8),bVar18) ^ 1;
        }
      }
      goto LAB_146c1af4d;
    }
  }
  uVar14 = 0;
LAB_146c1af4d:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1b1fc FUN_146c1b1fc body=148 status=ok
// SIG undefined FUN_146c1b1fc(void)

undefined8 FUN_146c1b1fc(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      cVar3 = FUN_146c1b290(*(undefined8 *)(lVar2 + lVar4),param_2);
      if (cVar3 != '\0') {
        return 1;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      cVar3 = FUN_146c1b570(*(undefined8 *)(lVar2 + lVar4),param_2);
      if (cVar3 != '\0') {
        return 1;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (cVar3 = FUN_146c1b850(*(longlong *)(param_1 + 0x40),param_2), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 146c1b290 FUN_146c1b290 body=735 status=ok
// SIG undefined FUN_146c1b290(void)

undefined4 FUN_146c1b290(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_68 [28];
  int aiStack_4c [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar12 = (uint)param_2;
  if ((-1 < (int)uVar12) &&
     (lVar17 = *param_1, (int)uVar12 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4)))
  {
    uVar16 = param_2 >> 9 & 0x7fffff;
    uVar12 = uVar12 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + uVar16 * 8) +
                           (ulonglong)uVar12 * 2) - 1U) < 0xfffe) {
      lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x1c0) + uVar16 * 8);
      uVar16 = *(ulonglong *)(lVar17 + 8 + (ulonglong)(uVar12 << 4));
      if (uVar16 >> 0x20 != 0xffffffff) {
        uVar8 = (int)uVar16 * 3;
        lVar14 = param_1[0xf];
        uVar1 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 4);
        uVar7 = (int)(uVar16 >> 0x20) * 3;
        uVar2 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        if (-1 < (int)(uVar2 | uVar1)) {
          uVar6 = *(undefined8 *)(lVar17 + (ulonglong)(uVar12 << 4));
          aiStack_4c[6] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                        (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
          aiStack_4c[5] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                        (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
          aiStack_4c[4] = uVar1;
          lVar17 = param_1[0xc];
          iVar3 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[6] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[6] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[5] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[5] & 0x1ff) * 4);
          iVar5 = *(int *)(*(longlong *)(lVar17 + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 4);
          iVar13 = (int)uVar6;
          if (iVar5 == iVar13) {
            lVar11 = 0;
          }
          else {
            lVar11 = 1;
            if (iVar4 != iVar13) {
              lVar11 = (ulonglong)(iVar3 == iVar13) * 3 + -1;
            }
          }
          iVar10 = (int)((ulonglong)uVar6 >> 0x20);
          if (iVar5 == iVar10) {
            lVar15 = 0;
          }
          else {
            lVar15 = 1;
            if (iVar4 != iVar10) {
              lVar15 = (ulonglong)(iVar3 == iVar10) * 3 + -1;
            }
          }
          aiStack_4c[3] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                        (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          aiStack_4c[2] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          aiStack_4c[1] = uVar2;
          iVar3 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[3] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[3] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[2] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[2] & 0x1ff) * 4);
          iVar5 = *(int *)(*(longlong *)(lVar17 + (ulonglong)(uVar2 >> 9) * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 4);
          if (iVar5 == iVar13) {
            lVar17 = 0;
          }
          else {
            lVar17 = 1;
            if (iVar4 != iVar13) {
              lVar17 = (ulonglong)(iVar3 == iVar13) * 3 + -1;
            }
          }
          if (iVar5 == iVar10) {
            lVar14 = 0;
          }
          else {
            lVar14 = 1;
            if (iVar4 != iVar10) {
              lVar14 = (ulonglong)(iVar3 == iVar10) * 3 + -1;
            }
          }
          iVar3 = aiStack_4c[lVar11 + 4];
          iVar4 = aiStack_4c[lVar15 + 4];
          iVar5 = aiStack_4c[lVar17 + 1];
          iVar13 = aiStack_4c[lVar14 + 1];
          iVar10 = iVar4;
          if (((iVar3 != iVar5) && (iVar10 = iVar3, iVar4 != iVar5)) || (iVar10 != iVar13)) {
            uVar9 = CONCAT31((int3)((uint)iVar4 >> 8),
                             (iVar4 == iVar5 || iVar4 == iVar13) ||
                             (iVar3 == iVar13 || iVar3 == iVar5));
            goto LAB_146c1b319;
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_146c1b319:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 146c1b570 FUN_146c1b570 body=735 status=ok
// SIG undefined FUN_146c1b570(void)

undefined4 FUN_146c1b570(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_68 [28];
  int aiStack_4c [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar12 = (uint)param_2;
  if ((-1 < (int)uVar12) &&
     (lVar17 = *param_1, (int)uVar12 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4)))
  {
    uVar16 = param_2 >> 9 & 0x7fffff;
    uVar12 = uVar12 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + uVar16 * 8) +
                           (ulonglong)uVar12 * 2) - 1U) < 0xfffe) {
      lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x1c0) + uVar16 * 8);
      uVar16 = *(ulonglong *)(lVar17 + 8 + (ulonglong)(uVar12 << 4));
      if (uVar16 >> 0x20 != 0xffffffff) {
        uVar8 = (int)uVar16 * 3;
        lVar14 = param_1[0xf];
        uVar1 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 4);
        uVar7 = (int)(uVar16 >> 0x20) * 3;
        uVar2 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        if (-1 < (int)(uVar2 | uVar1)) {
          uVar6 = *(undefined8 *)(lVar17 + (ulonglong)(uVar12 << 4));
          aiStack_4c[6] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                        (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
          aiStack_4c[5] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                        (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
          aiStack_4c[4] = uVar1;
          lVar17 = param_1[0xc];
          iVar3 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[6] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[6] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[5] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[5] & 0x1ff) * 4);
          iVar5 = *(int *)(*(longlong *)(lVar17 + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 4);
          iVar13 = (int)uVar6;
          if (iVar5 == iVar13) {
            lVar11 = 0;
          }
          else {
            lVar11 = 1;
            if (iVar4 != iVar13) {
              lVar11 = (ulonglong)(iVar3 == iVar13) * 3 + -1;
            }
          }
          iVar10 = (int)((ulonglong)uVar6 >> 0x20);
          if (iVar5 == iVar10) {
            lVar15 = 0;
          }
          else {
            lVar15 = 1;
            if (iVar4 != iVar10) {
              lVar15 = (ulonglong)(iVar3 == iVar10) * 3 + -1;
            }
          }
          aiStack_4c[3] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                        (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          aiStack_4c[2] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          aiStack_4c[1] = uVar2;
          iVar3 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[3] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[3] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[2] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[2] & 0x1ff) * 4);
          iVar5 = *(int *)(*(longlong *)(lVar17 + (ulonglong)(uVar2 >> 9) * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 4);
          if (iVar5 == iVar13) {
            lVar17 = 0;
          }
          else {
            lVar17 = 1;
            if (iVar4 != iVar13) {
              lVar17 = (ulonglong)(iVar3 == iVar13) * 3 + -1;
            }
          }
          if (iVar5 == iVar10) {
            lVar14 = 0;
          }
          else {
            lVar14 = 1;
            if (iVar4 != iVar10) {
              lVar14 = (ulonglong)(iVar3 == iVar10) * 3 + -1;
            }
          }
          iVar3 = aiStack_4c[lVar11 + 4];
          iVar4 = aiStack_4c[lVar15 + 4];
          iVar5 = aiStack_4c[lVar17 + 1];
          iVar13 = aiStack_4c[lVar14 + 1];
          iVar10 = iVar4;
          if (((iVar3 != iVar5) && (iVar10 = iVar3, iVar4 != iVar5)) || (iVar10 != iVar13)) {
            uVar9 = CONCAT31((int3)((uint)iVar4 >> 8),
                             (iVar4 == iVar5 || iVar4 == iVar13) ||
                             (iVar3 == iVar13 || iVar3 == iVar5));
            goto LAB_146c1b5f9;
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_146c1b5f9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 146c1b850 FUN_146c1b850 body=735 status=ok
// SIG undefined FUN_146c1b850(void)

undefined4 FUN_146c1b850(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_68 [28];
  int aiStack_4c [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar12 = (uint)param_2;
  if ((-1 < (int)uVar12) &&
     (lVar17 = *param_1, (int)uVar12 < *(int *)(lVar17 + 0x1d0) * 0x200 + *(int *)(lVar17 + 0x1d4)))
  {
    uVar16 = param_2 >> 9 & 0x7fffff;
    uVar12 = uVar12 & 0x1ff;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar17 + 0x1d8) + uVar16 * 8) +
                           (ulonglong)uVar12 * 2) - 1U) < 0xfffe) {
      lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x1c0) + uVar16 * 8);
      uVar16 = *(ulonglong *)(lVar17 + 8 + (ulonglong)(uVar12 << 4));
      if (uVar16 >> 0x20 != 0xffffffff) {
        uVar8 = (int)uVar16 * 3;
        lVar14 = param_1[0xf];
        uVar1 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 >> 9) * 8) +
                         (ulonglong)(uVar8 & 0x1ff) * 4);
        uVar7 = (int)(uVar16 >> 0x20) * 3;
        uVar2 = *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 >> 9) * 8) +
                         (ulonglong)(uVar7 & 0x1ff) * 4);
        if (-1 < (int)(uVar2 | uVar1)) {
          uVar6 = *(undefined8 *)(lVar17 + (ulonglong)(uVar12 << 4));
          aiStack_4c[6] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                        (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
          aiStack_4c[5] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                        (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
          aiStack_4c[4] = uVar1;
          lVar17 = param_1[0xc];
          iVar3 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[6] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[6] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[5] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[5] & 0x1ff) * 4);
          iVar5 = *(int *)(*(longlong *)(lVar17 + (ulonglong)(uVar1 >> 9) * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 4);
          iVar13 = (int)uVar6;
          if (iVar5 == iVar13) {
            lVar11 = 0;
          }
          else {
            lVar11 = 1;
            if (iVar4 != iVar13) {
              lVar11 = (ulonglong)(iVar3 == iVar13) * 3 + -1;
            }
          }
          iVar10 = (int)((ulonglong)uVar6 >> 0x20);
          if (iVar5 == iVar10) {
            lVar15 = 0;
          }
          else {
            lVar15 = 1;
            if (iVar4 != iVar10) {
              lVar15 = (ulonglong)(iVar3 == iVar10) * 3 + -1;
            }
          }
          aiStack_4c[3] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                        (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          aiStack_4c[2] =
               *(uint *)(*(longlong *)(lVar14 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                        (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
          aiStack_4c[1] = uVar2;
          iVar3 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[3] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[3] & 0x1ff) * 4);
          iVar4 = *(int *)(*(longlong *)(lVar17 + (ulonglong)((uint)aiStack_4c[2] >> 9) * 8) +
                          (ulonglong)(aiStack_4c[2] & 0x1ff) * 4);
          iVar5 = *(int *)(*(longlong *)(lVar17 + (ulonglong)(uVar2 >> 9) * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 4);
          if (iVar5 == iVar13) {
            lVar17 = 0;
          }
          else {
            lVar17 = 1;
            if (iVar4 != iVar13) {
              lVar17 = (ulonglong)(iVar3 == iVar13) * 3 + -1;
            }
          }
          if (iVar5 == iVar10) {
            lVar14 = 0;
          }
          else {
            lVar14 = 1;
            if (iVar4 != iVar10) {
              lVar14 = (ulonglong)(iVar3 == iVar10) * 3 + -1;
            }
          }
          iVar3 = aiStack_4c[lVar11 + 4];
          iVar4 = aiStack_4c[lVar15 + 4];
          iVar5 = aiStack_4c[lVar17 + 1];
          iVar13 = aiStack_4c[lVar14 + 1];
          iVar10 = iVar4;
          if (((iVar3 != iVar5) && (iVar10 = iVar3, iVar4 != iVar5)) || (iVar10 != iVar13)) {
            uVar9 = CONCAT31((int3)((uint)iVar4 >> 8),
                             (iVar4 == iVar5 || iVar4 == iVar13) ||
                             (iVar3 == iVar13 || iVar3 == iVar5));
            goto LAB_146c1b8d9;
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_146c1b8d9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 146c1bb30 FUN_146c1bb30 body=102 status=ok
// SIG undefined FUN_146c1bb30(void)

void FUN_146c1bb30(longlong *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  char *local_30;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_19;
  local_38 = param_5;
  (**(code **)(*param_1 + 0x70))();
  cVar1 = '\x01';
  if (*param_4 == '\0') {
    cVar1 = local_19;
  }
  *param_4 = cVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1bb98 FUN_146c1bb98 body=257 status=ok
// SIG undefined FUN_146c1bb98(void)

undefined1
FUN_146c1bb98(longlong param_1,undefined4 param_2,char *param_3,char *param_4,char *param_5,
             undefined1 *param_6)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_3 = '\0';
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      cVar2 = FUN_146c1a770(*(undefined8 *)(lVar5 + lVar4),param_2,0);
      if (cVar2 != '\0') {
        *param_3 = '\x01';
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_146c1aaf4(**(undefined8 **)(param_1 + 0x30),param_2,0);
  }
  *param_4 = cVar2;
  *param_6 = 0;
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar5 = 1;
    do {
      cVar2 = FUN_146c1aaf4(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar5 * 8),param_2,0);
      if (cVar2 != '\0') {
        *param_6 = 1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x38));
  }
  *param_5 = '\0';
  if (*(longlong *)(param_1 + 0x40) != 0) {
    cVar2 = FUN_146c1ae78(*(longlong *)(param_1 + 0x40),param_2,0);
    if (cVar2 != '\0') {
      *param_5 = '\x01';
    }
  }
  uVar3 = 1;
  if (((*param_3 == '\0') && (*param_4 == '\0')) && (*param_5 == '\0')) {
    uVar3 = *param_6;
  }
  return uVar3;
}



// FUNCTION 146c1bc9a FUN_146c1bc9a body=164 status=ok
// SIG undefined FUN_146c1bc9a(void)

undefined8 FUN_146c1bc9a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      cVar3 = FUN_146c1bd3e(*(undefined8 *)(lVar2 + lVar4),param_2,param_3);
      if (cVar3 != '\0') {
        return 1;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      cVar3 = FUN_146c1be64(*(undefined8 *)(lVar2 + lVar4),param_2,param_3);
      if (cVar3 != '\0') {
        return 1;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (cVar3 = FUN_146c1bf8a(*(longlong *)(param_1 + 0x40),param_2,param_3), cVar3 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 146c1bd3e FUN_146c1bd3e body=293 status=ok
// SIG undefined FUN_146c1bd3e(void)

undefined8 FUN_146c1bd3e(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1 + 0xb8;
  uVar2 = 0;
  FUN_146be983e(&local_60,lVar3,param_2,0);
  if ((((local_60 != lVar3) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
     (local_48._4_4_ != -1)) {
    do {
      if ((param_3 != '\0') ||
         (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(local_40 >> 9) * 8) +
                   0xc + (ulonglong)((local_40 & 0x1ff) << 4)) != -1)) {
        cVar1 = FUN_146c1a770(param_1,local_40,0);
        if (cVar1 != '\0') {
          uVar2 = 1;
          goto LAB_146c1bd9b;
        }
      }
      if (local_50 == 0) {
        local_54 = 0xffffffff;
        local_48 = 0xffffffffffffffff;
        local_48._4_4_ = -1;
        local_48._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_60);
      }
    } while (((local_60 != lVar3) || (local_58 != param_2)) ||
            (((int)local_48 != -1 || (local_48._4_4_ != -1))));
    uVar2 = 0;
  }
LAB_146c1bd9b:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1be64 FUN_146c1be64 body=293 status=ok
// SIG undefined FUN_146c1be64(void)

undefined8 FUN_146c1be64(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1 + 0xb8;
  uVar2 = 0;
  FUN_146be983e(&local_60,lVar3,param_2,0);
  if ((((local_60 != lVar3) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
     (local_48._4_4_ != -1)) {
    do {
      if ((param_3 != '\0') ||
         (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(local_40 >> 9) * 8) +
                   0xc + (ulonglong)((local_40 & 0x1ff) << 4)) != -1)) {
        cVar1 = FUN_146c1aaf4(param_1,local_40,0);
        if (cVar1 != '\0') {
          uVar2 = 1;
          goto LAB_146c1bec1;
        }
      }
      if (local_50 == 0) {
        local_54 = 0xffffffff;
        local_48 = 0xffffffffffffffff;
        local_48._4_4_ = -1;
        local_48._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_60);
      }
    } while (((local_60 != lVar3) || (local_58 != param_2)) ||
            (((int)local_48 != -1 || (local_48._4_4_ != -1))));
    uVar2 = 0;
  }
LAB_146c1bec1:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1bf8a FUN_146c1bf8a body=293 status=ok
// SIG undefined FUN_146c1bf8a(void)

undefined8 FUN_146c1bf8a(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1 + 0xb8;
  uVar2 = 0;
  FUN_146be983e(&local_60,lVar3,param_2,0);
  if ((((local_60 != lVar3) || (local_58 != param_2)) || ((int)local_48 != -1)) ||
     (local_48._4_4_ != -1)) {
    do {
      if ((param_3 != '\0') ||
         (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(local_40 >> 9) * 8) +
                   0xc + (ulonglong)((local_40 & 0x1ff) << 4)) != -1)) {
        cVar1 = FUN_146c1ae78(param_1,local_40,0);
        if (cVar1 != '\0') {
          uVar2 = 1;
          goto LAB_146c1bfe7;
        }
      }
      if (local_50 == 0) {
        local_54 = 0xffffffff;
        local_48 = 0xffffffffffffffff;
        local_48._4_4_ = -1;
        local_48._0_4_ = -1;
      }
      else {
        FUN_146be9922(&local_60);
      }
    } while (((local_60 != lVar3) || (local_58 != param_2)) ||
            (((int)local_48 != -1 || (local_48._4_4_ != -1))));
    uVar2 = 0;
  }
LAB_146c1bfe7:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1c168 FUN_146c1c168 body=177 status=ok
// SIG undefined FUN_146c1c168(void)

void FUN_146c1c168(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      local_3c = 0;
      FUN_146bfd34a(*(longlong *)(lVar2 + lVar4) + 0x18,&local_3c,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1c21a FUN_146c1c21a body=72 status=ok
// SIG undefined FUN_146c1c21a(void)

void FUN_146c1c21a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1c262 FUN_146c1c262 body=110 status=ok
// SIG undefined FUN_146c1c262(void)

void FUN_146c1c262(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1c2d0 FUN_146c1c2d0 body=62 status=ok
// SIG undefined FUN_146c1c2d0(void)

void FUN_146c1c2d0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1c30e FUN_146c1c30e body=312 status=ok
// SIG undefined FUN_146c1c30e(void)

void FUN_146c1c30e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c1c490(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c1c534(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c1c5d8(*(longlong *)(param_1 + 0x40),param_2);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_3c = 0;
    FUN_146bedf4e(*(longlong *)(param_1 + 0x48) + 0x18,&local_3c,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      local_3c = 0;
      FUN_146bedf4e(*(longlong *)(lVar2 + lVar4) + 0x18,&local_3c,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1c448 FUN_146c1c448 body=72 status=ok
// SIG undefined FUN_146c1c448(void)

void FUN_146c1c448(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1c490 FUN_146c1c490 body=163 status=ok
// SIG undefined FUN_146c1c490(void)

void FUN_146c1c490(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 * 3;
  uVar3 = param_2 * 3 + 3;
  uVar2 = *(int *)(param_1 + 0x70) * 0x200 + *(int *)(param_1 + 0x74);
  if (uVar2 < uVar3) {
    FUN_1411b328a(param_1 + 0x70,uVar3);
    do {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 + 2 >> 9) * 8) +
   (ulonglong)(uVar1 + 2 & 0x1ff) * 4) = 0xffffffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 + 1 >> 9) * 8) +
   (ulonglong)(uVar1 + 1 & 0x1ff) * 4) = 0xffffffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 >> 9) * 8) +
   (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
  return;
}



// FUNCTION 146c1c534 FUN_146c1c534 body=163 status=ok
// SIG undefined FUN_146c1c534(void)

void FUN_146c1c534(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 * 3;
  uVar3 = param_2 * 3 + 3;
  uVar2 = *(int *)(param_1 + 0x70) * 0x200 + *(int *)(param_1 + 0x74);
  if (uVar2 < uVar3) {
    FUN_1411b328a(param_1 + 0x70,uVar3);
    do {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 + 2 >> 9) * 8) +
   (ulonglong)(uVar1 + 2 & 0x1ff) * 4) = 0xffffffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 + 1 >> 9) * 8) +
   (ulonglong)(uVar1 + 1 & 0x1ff) * 4) = 0xffffffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 >> 9) * 8) +
   (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
  return;
}



// FUNCTION 146c1c5d8 FUN_146c1c5d8 body=163 status=ok
// SIG undefined FUN_146c1c5d8(void)

void FUN_146c1c5d8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 * 3;
  uVar3 = param_2 * 3 + 3;
  uVar2 = *(int *)(param_1 + 0x70) * 0x200 + *(int *)(param_1 + 0x74);
  if (uVar2 < uVar3) {
    FUN_1411b328a(param_1 + 0x70,uVar3);
    do {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 4) = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 + 2 >> 9) * 8) +
   (ulonglong)(uVar1 + 2 & 0x1ff) * 4) = 0xffffffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 + 1 >> 9) * 8) +
   (ulonglong)(uVar1 + 1 & 0x1ff) * 4) = 0xffffffff;
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar1 >> 9) * 8) +
   (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
  return;
}



// FUNCTION 146c1c67c FUN_146c1c67c body=176 status=ok
// SIG undefined FUN_146c1c67c(void)

void FUN_146c1c67c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c1c76a(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c1c886(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_146c1c9a2(*(longlong *)(param_1 + 0x40),param_2);
  return;
}



// FUNCTION 146c1c72c FUN_146c1c72c body=62 status=ok
// SIG undefined FUN_146c1c72c(void)

void FUN_146c1c72c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1c76a FUN_146c1c76a body=283 status=ok
// SIG undefined FUN_146c1c76a(void)

void FUN_146c1c76a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [36];
  uint local_44 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2 * 3 + 2;
  lVar2 = *(longlong *)(param_1 + 0x78);
  local_44[2] = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
  uVar1 = param_2 * 3 + 1;
  local_44[1] = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
  local_44[0] = *(uint *)(*(longlong *)(lVar2 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                         (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  if (((-1 < (int)local_44[0]) || (-1 < (int)local_44[1])) || (-1 < (int)local_44[2])) {
    FUN_146c1c490(param_1);
    lVar2 = 0;
    do {
      uVar1 = local_44[lVar2];
      FUN_146c09a68(param_1 + 8,uVar1,1);
      if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 2) == 1) {
        FUN_146c09a68(param_1 + 8,uVar1,1);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
         (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1c886 FUN_146c1c886 body=283 status=ok
// SIG undefined FUN_146c1c886(void)

void FUN_146c1c886(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [36];
  uint local_44 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2 * 3 + 2;
  lVar2 = *(longlong *)(param_1 + 0x78);
  local_44[2] = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
  uVar1 = param_2 * 3 + 1;
  local_44[1] = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
  local_44[0] = *(uint *)(*(longlong *)(lVar2 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                         (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  if (((-1 < (int)local_44[0]) || (-1 < (int)local_44[1])) || (-1 < (int)local_44[2])) {
    FUN_146c1c534(param_1);
    lVar2 = 0;
    do {
      uVar1 = local_44[lVar2];
      FUN_146c09a68(param_1 + 8,uVar1,1);
      if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 2) == 1) {
        FUN_146c09a68(param_1 + 8,uVar1,1);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
         (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1c9a2 FUN_146c1c9a2 body=283 status=ok
// SIG undefined FUN_146c1c9a2(void)

void FUN_146c1c9a2(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_68 [36];
  uint local_44 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_2 * 3 + 2;
  lVar2 = *(longlong *)(param_1 + 0x78);
  local_44[2] = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
  uVar1 = param_2 * 3 + 1;
  local_44[1] = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8) +
                        (ulonglong)(uVar1 & 0x1ff) * 4);
  local_44[0] = *(uint *)(*(longlong *)(lVar2 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8) +
                         (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  if (((-1 < (int)local_44[0]) || (-1 < (int)local_44[1])) || (-1 < (int)local_44[2])) {
    FUN_146c1c5d8(param_1);
    lVar2 = 0;
    do {
      uVar1 = local_44[lVar2];
      FUN_146c09a68(param_1 + 8,uVar1,1);
      if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 2) == 1) {
        FUN_146c09a68(param_1 + 8,uVar1,1);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar1 >> 9) * 8) +
         (ulonglong)(uVar1 & 0x1ff) * 4) = 0xffffffff;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1cabe FUN_146c1cabe body=548 status=ok
// SIG undefined FUN_146c1cabe(void)

void FUN_146c1cabe(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar16 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar16);
      (**(code **)(*plVar5 + 0x68))(plVar5,param_2);
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar1 * 8 != lVar16);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar13 = param_2 * 3 + 2;
    uVar15 = param_2 * 3 + 1;
    uVar9 = (ulonglong)(param_2 * 3 & 0x1ff);
    lVar16 = 0;
    uVar11 = (ulonglong)((uVar13 >> 9) << 3);
    uVar10 = (ulonglong)((uVar13 & 0x1ff) << 2);
    uVar14 = (ulonglong)((uVar15 >> 9) << 3);
    uVar12 = (ulonglong)((uVar15 & 0x1ff) << 2);
    do {
      lVar6 = *(longlong *)(lVar4 + lVar16);
      lVar7 = *(longlong *)(lVar6 + 0x78);
      uVar2 = *(undefined4 *)(*(longlong *)(lVar7 + uVar11) + uVar10);
      lVar8 = *(longlong *)(lVar7 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8);
      uVar3 = *(undefined4 *)(lVar8 + uVar9 * 4);
      *(undefined4 *)(lVar8 + uVar9 * 4) = *(undefined4 *)(*(longlong *)(lVar7 + uVar14) + uVar12);
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar6 + 0x78) + uVar14) + uVar12) = uVar3;
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar6 + 0x78) + uVar11) + uVar10) = uVar2;
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar1 * 8 != lVar16);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar13 = param_2 * 3 + 2;
    uVar15 = param_2 * 3 + 1;
    uVar9 = (ulonglong)(param_2 * 3 & 0x1ff);
    lVar16 = 0;
    uVar11 = (ulonglong)((uVar13 >> 9) << 3);
    uVar10 = (ulonglong)((uVar13 & 0x1ff) << 2);
    uVar14 = (ulonglong)((uVar15 >> 9) << 3);
    uVar12 = (ulonglong)((uVar15 & 0x1ff) << 2);
    do {
      lVar6 = *(longlong *)(lVar4 + lVar16);
      lVar7 = *(longlong *)(lVar6 + 0x78);
      uVar2 = *(undefined4 *)(*(longlong *)(lVar7 + uVar11) + uVar10);
      lVar8 = *(longlong *)(lVar7 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8);
      uVar3 = *(undefined4 *)(lVar8 + uVar9 * 4);
      *(undefined4 *)(lVar8 + uVar9 * 4) = *(undefined4 *)(*(longlong *)(lVar7 + uVar14) + uVar12);
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar6 + 0x78) + uVar14) + uVar12) = uVar3;
      *(undefined4 *)(*(longlong *)(*(longlong *)(lVar6 + 0x78) + uVar11) + uVar10) = uVar2;
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar1 * 8 != lVar16);
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    uVar13 = param_2 * 3 + 2;
    lVar16 = *(longlong *)(lVar4 + 0x78);
    uVar10 = (ulonglong)(uVar13 >> 9);
    uVar9 = (ulonglong)((uVar13 & 0x1ff) << 2);
    uVar2 = *(undefined4 *)(*(longlong *)(lVar16 + uVar10 * 8) + uVar9);
    uVar13 = param_2 * 3 + 1;
    uVar12 = (ulonglong)(uVar13 >> 9);
    uVar11 = (ulonglong)((uVar13 & 0x1ff) << 2);
    lVar6 = *(longlong *)(lVar16 + (ulonglong)((uint)(param_2 * 3) >> 9) * 8);
    uVar14 = (ulonglong)(param_2 * 3 & 0x1ff);
    uVar3 = *(undefined4 *)(lVar6 + uVar14 * 4);
    *(undefined4 *)(lVar6 + uVar14 * 4) =
         *(undefined4 *)(*(longlong *)(lVar16 + uVar12 * 8) + uVar11);
    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + uVar12 * 8) + uVar11) = uVar3;
    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0x78) + uVar10 * 8) + uVar9) = uVar2;
  }
  return;
}



// FUNCTION 146c1cce2 FUN_146c1cce2 body=62 status=ok
// SIG undefined FUN_146c1cce2(void)

void FUN_146c1cce2(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1cd20 FUN_146c1cd20 body=289 status=ok
// SIG undefined FUN_146c1cd20(void)

void FUN_146c1cd20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c1ce86(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c1d3a0(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c1d8d0(*(longlong *)(param_1 + 0x40),param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1ce42 FUN_146c1ce42 body=67 status=ok
// SIG undefined FUN_146c1ce42(void)

void FUN_146c1ce42(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1ce86 FUN_146c1ce86 body=1304 status=ok
// SIG undefined FUN_146c1ce86(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146c1ce86(longlong param_1,longlong param_2)

{
  short *psVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_94;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint local_6c;
  uint local_68;
  uint local_64 [7];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar18 = (ulonglong)uVar3;
  iVar16 = *(int *)(param_2 + 4);
  iVar15 = *(int *)(param_2 + 8);
  uVar6 = *(int *)(param_2 + 0x14) * 3;
  lVar11 = *(longlong *)(param_1 + 0x78);
  uVar4 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
  if ((int)uVar3 < 0) {
    if ((int)uVar4 < 0) {
      local_94 = iVar15;
      FUN_146c1c490(param_1,*(undefined4 *)(param_2 + 0x24));
      iVar15 = local_94;
    }
LAB_146c1cf15:
    if (-1 < *(int *)(param_2 + 0x28)) {
      local_94 = iVar15;
      FUN_146c1c490(param_1);
      iVar15 = local_94;
    }
    if ((int)uVar4 < 0) goto LAB_146c1cf21;
    lVar11 = *(longlong *)(param_1 + 0x78);
    local_8c = 0;
    local_64[4] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 >> 9) * 8) +
                           (ulonglong)(uVar6 & 0x1ff) * 4);
LAB_146c1cfa1:
    local_64[6] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                           (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
    local_64[5] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                           (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
    lVar11 = *(longlong *)(param_1 + 0x60);
    iVar5 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[6] >> 9) * 8) +
                    (ulonglong)(local_64[6] & 0x1ff) * 4);
    iVar13 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[5] >> 9) * 8) +
                     (ulonglong)(local_64[5] & 0x1ff) * 4);
    iVar17 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[4] >> 9) * 8) +
                     (ulonglong)(local_64[4] & 0x1ff) * 4);
    iVar14 = 0;
    iVar12 = 0;
    if ((iVar17 != iVar16) && (iVar12 = 1, iVar13 != iVar16)) {
      iVar12 = (uint)(iVar5 == iVar16) * 3 + -1;
    }
    if ((iVar17 != iVar15) && (iVar14 = 1, iVar13 != iVar15)) {
      iVar14 = (uint)(iVar5 == iVar15) * 3 + -1;
    }
    local_78 = (longlong)(int)(&DAT_149f3bad0)[iVar14 + iVar12];
    local_94 = iVar15;
    local_90 = iVar16;
    uVar8 = FUN_146c2d112(param_1);
    local_a8 = *(undefined8 *)(param_2 + 0x38);
    uVar7 = local_64[(longlong)iVar14 + 4];
    local_88 = (longlong)iVar12;
    FUN_146c2f7ac(param_1,uVar8,local_64[local_88 + 4]);
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar6 + iVar14 >> 9) * 8) +
             (ulonglong)(uVar6 + iVar14 & 0x1ff) * 4) = uVar8;
    uVar6 = local_64[local_78 + 4];
    local_a8 = CONCAT71(local_a8._1_7_,1);
    local_80 = (longlong)iVar14;
    local_64[1] = uVar8;
    local_64[2] = uVar7;
    local_64[3] = uVar6;
    FUN_146c2d1aa(param_1,*(undefined4 *)(param_2 + 0x24),local_64 + 1,0);
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 2;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
    cVar10 = (char)local_8c;
  }
  else {
    uVar7 = (uint)(uVar18 * 3) & 0x1ff;
    iVar5 = *(int *)(*(longlong *)(lVar11 + (uVar18 * 3 >> 9) * 8) + (ulonglong)uVar7 * 4);
    if (-1 < (int)uVar4) {
      if (iVar5 < 0) goto LAB_146c1cf15;
      local_8c = (undefined4)CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
      local_64[4] = uVar4;
      goto LAB_146c1cfa1;
    }
    local_94 = iVar15;
    local_90 = iVar16;
    FUN_146c1c490(param_1,*(undefined4 *)(param_2 + 0x24));
    iVar15 = local_94;
    iVar16 = local_90;
    if (iVar5 < 0) goto LAB_146c1cf15;
    local_64[4] = 0xffffffff;
    local_64[5] = 0xffffffff;
    local_64[6] = 0xffffffff;
    local_80 = -1;
    uVar8 = 0xffffffff;
    cVar10 = '\x01';
    local_88 = -1;
  }
  if (cVar10 != '\x01' || uVar3 == 0xffffffff) goto LAB_146c1cf21;
  uVar3 = uVar3 * 3;
  uVar2 = uVar18 * 3 + 2;
  lVar9 = *(longlong *)(param_1 + 0x78);
  local_64[3] = *(uint *)(*(longlong *)(lVar9 + (uVar2 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)((uint)uVar2 & 0x1ff) * 4);
  uVar18 = uVar18 * 3 + 1;
  local_64[2] = *(uint *)(*(longlong *)(lVar9 + (uVar18 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)((uint)uVar18 & 0x1ff) * 4);
  local_64[1] = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 4);
  lVar11 = *(longlong *)(param_1 + 0x60);
  iVar16 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[3] >> 9) * 8) +
                   (ulonglong)(local_64[3] & 0x1ff) * 4);
  iVar15 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[2] >> 9) * 8) +
                   (ulonglong)(local_64[2] & 0x1ff) * 4);
  iVar5 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[1] >> 9) * 8) +
                  (ulonglong)(local_64[1] & 0x1ff) * 4);
  iVar17 = 0;
  iVar13 = 0;
  if ((iVar5 != local_90) && (iVar13 = 1, iVar15 != local_90)) {
    iVar13 = (uint)(iVar16 == local_90) * 3 + -1;
  }
  if ((iVar5 != local_94) && (iVar17 = 1, iVar15 != local_94)) {
    iVar17 = (uint)(iVar16 == local_94) * 3 + -1;
  }
  iVar16 = (&DAT_149f3bad0)[iVar13 + iVar17];
  if ((int)uVar4 < 0) {
LAB_146c1d2e1:
    uVar8 = FUN_146c2d112(param_1);
    local_a8 = *(undefined8 *)(param_2 + 0x38);
    iVar15 = local_64[(longlong)iVar17 + 1];
    FUN_146c2f7ac(param_1,uVar8,local_64[(longlong)iVar13 + 1],iVar15);
    lVar9 = *(longlong *)(param_1 + 0x78);
  }
  else {
    iVar15 = local_64[(longlong)iVar17 + 1];
    iVar5 = local_64[local_80 + 4];
    if (((local_64[local_88 + 4] != local_64[(longlong)iVar13 + 1]) &&
        (bVar19 = iVar5 != local_64[(longlong)iVar13 + 1], iVar5 = local_64[local_88 + 4], bVar19))
       || (iVar5 != iVar15)) goto LAB_146c1d2e1;
  }
  *(uint *)(*(longlong *)(lVar9 + (ulonglong)(iVar17 + uVar3 >> 9) * 8) +
           (ulonglong)(iVar17 + uVar3 & 0x1ff) * 4) = uVar8;
  uVar3 = local_64[(longlong)iVar16 + 1];
  local_a8 = CONCAT71(local_a8._1_7_,1);
  local_6c = uVar8;
  local_68 = uVar3;
  local_64[0] = iVar15;
  FUN_146c2d1aa(param_1,*(undefined4 *)(param_2 + 0x28),&local_6c,0);
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                    (ulonglong)(uVar8 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 2;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
LAB_146c1cf21:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1d3a0 FUN_146c1d3a0 body=1327 status=ok
// SIG undefined FUN_146c1d3a0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146c1d3a0(longlong param_1,longlong param_2)

{
  short *psVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_94;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint local_6c;
  uint local_68;
  uint local_64 [7];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar18 = (ulonglong)uVar3;
  iVar16 = *(int *)(param_2 + 4);
  iVar15 = *(int *)(param_2 + 8);
  uVar6 = *(int *)(param_2 + 0x14) * 3;
  lVar11 = *(longlong *)(param_1 + 0x78);
  uVar4 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
  if ((int)uVar3 < 0) {
    if ((int)uVar4 < 0) {
      local_94 = iVar15;
      FUN_146c1c534(param_1,*(undefined4 *)(param_2 + 0x24));
      iVar15 = local_94;
    }
LAB_146c1d42f:
    if (-1 < *(int *)(param_2 + 0x28)) {
      local_94 = iVar15;
      FUN_146c1c534(param_1);
      iVar15 = local_94;
    }
    if ((int)uVar4 < 0) goto LAB_146c1d43b;
    lVar11 = *(longlong *)(param_1 + 0x78);
    local_8c = 0;
    local_64[4] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 >> 9) * 8) +
                           (ulonglong)(uVar6 & 0x1ff) * 4);
LAB_146c1d4bb:
    local_64[6] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                           (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
    local_64[5] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                           (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
    lVar11 = *(longlong *)(param_1 + 0x60);
    iVar5 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[6] >> 9) * 8) +
                    (ulonglong)(local_64[6] & 0x1ff) * 4);
    iVar12 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[5] >> 9) * 8) +
                     (ulonglong)(local_64[5] & 0x1ff) * 4);
    iVar17 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[4] >> 9) * 8) +
                     (ulonglong)(local_64[4] & 0x1ff) * 4);
    iVar14 = 0;
    iVar13 = 0;
    if ((iVar17 != iVar16) && (iVar13 = 1, iVar12 != iVar16)) {
      iVar13 = (uint)(iVar5 == iVar16) * 3 + -1;
    }
    if ((iVar17 != iVar15) && (iVar14 = 1, iVar12 != iVar15)) {
      iVar14 = (uint)(iVar5 == iVar15) * 3 + -1;
    }
    local_78 = (longlong)(int)(&DAT_149f3bad0)[iVar14 + iVar13];
    local_94 = iVar15;
    local_90 = iVar16;
    uVar8 = FUN_146c2fa56(param_1,0);
    local_a8 = *(undefined8 *)(param_2 + 0x38);
    uVar7 = local_64[(longlong)iVar14 + 4];
    local_88 = (longlong)iVar13;
    FUN_146c32c54(param_1,uVar8,local_64[local_88 + 4]);
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar6 + iVar14 >> 9) * 8) +
             (ulonglong)(uVar6 + iVar14 & 0x1ff) * 4) = uVar8;
    uVar6 = local_64[local_78 + 4];
    local_a8 = CONCAT71(local_a8._1_7_,1);
    local_80 = (longlong)iVar14;
    local_64[1] = uVar8;
    local_64[2] = uVar7;
    local_64[3] = uVar6;
    FUN_146c2faea(param_1,*(undefined4 *)(param_2 + 0x24),local_64 + 1,0);
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 2;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
    cVar10 = (char)local_8c;
  }
  else {
    uVar7 = (uint)(uVar18 * 3) & 0x1ff;
    iVar5 = *(int *)(*(longlong *)(lVar11 + (uVar18 * 3 >> 9) * 8) + (ulonglong)uVar7 * 4);
    if (-1 < (int)uVar4) {
      if (iVar5 < 0) goto LAB_146c1d42f;
      local_8c = (undefined4)CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
      local_64[4] = uVar4;
      goto LAB_146c1d4bb;
    }
    local_94 = iVar15;
    local_90 = iVar16;
    FUN_146c1c534(param_1,*(undefined4 *)(param_2 + 0x24));
    iVar15 = local_94;
    iVar16 = local_90;
    if (iVar5 < 0) goto LAB_146c1d42f;
    local_64[4] = 0xffffffff;
    local_64[5] = 0xffffffff;
    local_64[6] = 0xffffffff;
    local_80 = -1;
    uVar8 = 0xffffffff;
    cVar10 = '\x01';
    local_88 = -1;
  }
  if (cVar10 != '\x01' || uVar3 == 0xffffffff) goto LAB_146c1d43b;
  uVar3 = uVar3 * 3;
  uVar2 = uVar18 * 3 + 2;
  lVar9 = *(longlong *)(param_1 + 0x78);
  local_64[3] = *(uint *)(*(longlong *)(lVar9 + (uVar2 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)((uint)uVar2 & 0x1ff) * 4);
  uVar18 = uVar18 * 3 + 1;
  local_64[2] = *(uint *)(*(longlong *)(lVar9 + (uVar18 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)((uint)uVar18 & 0x1ff) * 4);
  local_64[1] = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 4);
  lVar11 = *(longlong *)(param_1 + 0x60);
  iVar16 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[3] >> 9) * 8) +
                   (ulonglong)(local_64[3] & 0x1ff) * 4);
  iVar15 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[2] >> 9) * 8) +
                   (ulonglong)(local_64[2] & 0x1ff) * 4);
  iVar5 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[1] >> 9) * 8) +
                  (ulonglong)(local_64[1] & 0x1ff) * 4);
  iVar17 = 0;
  iVar12 = 0;
  if ((iVar5 != local_90) && (iVar12 = 1, iVar15 != local_90)) {
    iVar12 = (uint)(iVar16 == local_90) * 3 + -1;
  }
  if ((iVar5 != local_94) && (iVar17 = 1, iVar15 != local_94)) {
    iVar17 = (uint)(iVar16 == local_94) * 3 + -1;
  }
  iVar16 = (&DAT_149f3bad0)[iVar12 + iVar17];
  if ((int)uVar4 < 0) {
LAB_146c1d809:
    uVar8 = FUN_146c2fa56(param_1,0);
    local_a8 = *(undefined8 *)(param_2 + 0x38);
    iVar15 = local_64[(longlong)iVar17 + 1];
    FUN_146c32c54(param_1,uVar8,local_64[(longlong)iVar12 + 1],iVar15);
    lVar9 = *(longlong *)(param_1 + 0x78);
  }
  else {
    iVar15 = local_64[(longlong)iVar17 + 1];
    iVar5 = local_64[local_80 + 4];
    if (((local_64[local_88 + 4] != local_64[(longlong)iVar12 + 1]) &&
        (bVar19 = iVar5 != local_64[(longlong)iVar12 + 1], iVar5 = local_64[local_88 + 4], bVar19))
       || (iVar5 != iVar15)) goto LAB_146c1d809;
  }
  *(uint *)(*(longlong *)(lVar9 + (ulonglong)(iVar17 + uVar3 >> 9) * 8) +
           (ulonglong)(iVar17 + uVar3 & 0x1ff) * 4) = uVar8;
  uVar3 = local_64[(longlong)iVar16 + 1];
  local_a8 = CONCAT71(local_a8._1_7_,1);
  local_6c = uVar8;
  local_68 = uVar3;
  local_64[0] = iVar15;
  FUN_146c2faea(param_1,*(undefined4 *)(param_2 + 0x28),&local_6c,0);
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                    (ulonglong)(uVar8 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 2;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
LAB_146c1d43b:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1d8d0 FUN_146c1d8d0 body=1327 status=ok
// SIG undefined FUN_146c1d8d0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146c1d8d0(longlong param_1,longlong param_2)

{
  short *psVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_94;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  uint local_6c;
  uint local_68;
  uint local_64 [7];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar18 = (ulonglong)uVar3;
  iVar16 = *(int *)(param_2 + 4);
  iVar15 = *(int *)(param_2 + 8);
  uVar6 = *(int *)(param_2 + 0x14) * 3;
  lVar11 = *(longlong *)(param_1 + 0x78);
  uVar4 = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 >> 9) * 8) +
                   (ulonglong)(uVar6 & 0x1ff) * 4);
  if ((int)uVar3 < 0) {
    if ((int)uVar4 < 0) {
      local_94 = iVar15;
      FUN_146c1c5d8(param_1,*(undefined4 *)(param_2 + 0x24));
      iVar15 = local_94;
    }
LAB_146c1d95f:
    if (-1 < *(int *)(param_2 + 0x28)) {
      local_94 = iVar15;
      FUN_146c1c5d8(param_1);
      iVar15 = local_94;
    }
    if ((int)uVar4 < 0) goto LAB_146c1d96b;
    lVar11 = *(longlong *)(param_1 + 0x78);
    local_8c = 0;
    local_64[4] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 >> 9) * 8) +
                           (ulonglong)(uVar6 & 0x1ff) * 4);
LAB_146c1d9eb:
    local_64[6] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                           (ulonglong)(uVar6 + 2 & 0x1ff) * 4);
    local_64[5] = *(uint *)(*(longlong *)(lVar11 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                           (ulonglong)(uVar6 + 1 & 0x1ff) * 4);
    lVar11 = *(longlong *)(param_1 + 0x60);
    iVar5 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[6] >> 9) * 8) +
                    (ulonglong)(local_64[6] & 0x1ff) * 4);
    iVar12 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[5] >> 9) * 8) +
                     (ulonglong)(local_64[5] & 0x1ff) * 4);
    iVar17 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[4] >> 9) * 8) +
                     (ulonglong)(local_64[4] & 0x1ff) * 4);
    iVar14 = 0;
    iVar13 = 0;
    if ((iVar17 != iVar16) && (iVar13 = 1, iVar12 != iVar16)) {
      iVar13 = (uint)(iVar5 == iVar16) * 3 + -1;
    }
    if ((iVar17 != iVar15) && (iVar14 = 1, iVar12 != iVar15)) {
      iVar14 = (uint)(iVar5 == iVar15) * 3 + -1;
    }
    local_78 = (longlong)(int)(&DAT_149f3bad0)[iVar14 + iVar13];
    local_94 = iVar15;
    local_90 = iVar16;
    uVar8 = FUN_146c32fcc(param_1,0);
    local_a8 = *(undefined8 *)(param_2 + 0x38);
    uVar7 = local_64[(longlong)iVar14 + 4];
    local_88 = (longlong)iVar13;
    FUN_146c3506a(param_1,uVar8,local_64[local_88 + 4]);
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + (ulonglong)(uVar6 + iVar14 >> 9) * 8) +
             (ulonglong)(uVar6 + iVar14 & 0x1ff) * 4) = uVar8;
    uVar6 = local_64[local_78 + 4];
    local_a8 = CONCAT71(local_a8._1_7_,1);
    local_80 = (longlong)iVar14;
    local_64[1] = uVar8;
    local_64[2] = uVar7;
    local_64[3] = uVar6;
    FUN_146c33062(param_1,*(undefined4 *)(param_2 + 0x24),local_64 + 1,0);
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 2;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
    cVar10 = (char)local_8c;
  }
  else {
    uVar7 = (uint)(uVar18 * 3) & 0x1ff;
    iVar5 = *(int *)(*(longlong *)(lVar11 + (uVar18 * 3 >> 9) * 8) + (ulonglong)uVar7 * 4);
    if (-1 < (int)uVar4) {
      if (iVar5 < 0) goto LAB_146c1d95f;
      local_8c = (undefined4)CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
      local_64[4] = uVar4;
      goto LAB_146c1d9eb;
    }
    local_94 = iVar15;
    local_90 = iVar16;
    FUN_146c1c5d8(param_1,*(undefined4 *)(param_2 + 0x24));
    iVar15 = local_94;
    iVar16 = local_90;
    if (iVar5 < 0) goto LAB_146c1d95f;
    local_64[4] = 0xffffffff;
    local_64[5] = 0xffffffff;
    local_64[6] = 0xffffffff;
    local_80 = -1;
    uVar8 = 0xffffffff;
    cVar10 = '\x01';
    local_88 = -1;
  }
  if (cVar10 != '\x01' || uVar3 == 0xffffffff) goto LAB_146c1d96b;
  uVar3 = uVar3 * 3;
  uVar2 = uVar18 * 3 + 2;
  lVar9 = *(longlong *)(param_1 + 0x78);
  local_64[3] = *(uint *)(*(longlong *)(lVar9 + (uVar2 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)((uint)uVar2 & 0x1ff) * 4);
  uVar18 = uVar18 * 3 + 1;
  local_64[2] = *(uint *)(*(longlong *)(lVar9 + (uVar18 >> 9 & 0x7fffff) * 8) +
                         (ulonglong)((uint)uVar18 & 0x1ff) * 4);
  local_64[1] = *(uint *)(*(longlong *)(lVar9 + (ulonglong)(uVar3 >> 9) * 8) +
                         (ulonglong)(uVar3 & 0x1ff) * 4);
  lVar11 = *(longlong *)(param_1 + 0x60);
  iVar16 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[3] >> 9) * 8) +
                   (ulonglong)(local_64[3] & 0x1ff) * 4);
  iVar15 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[2] >> 9) * 8) +
                   (ulonglong)(local_64[2] & 0x1ff) * 4);
  iVar5 = *(int *)(*(longlong *)(lVar11 + (ulonglong)(local_64[1] >> 9) * 8) +
                  (ulonglong)(local_64[1] & 0x1ff) * 4);
  iVar17 = 0;
  iVar12 = 0;
  if ((iVar5 != local_90) && (iVar12 = 1, iVar15 != local_90)) {
    iVar12 = (uint)(iVar16 == local_90) * 3 + -1;
  }
  if ((iVar5 != local_94) && (iVar17 = 1, iVar15 != local_94)) {
    iVar17 = (uint)(iVar16 == local_94) * 3 + -1;
  }
  iVar16 = (&DAT_149f3bad0)[iVar12 + iVar17];
  if ((int)uVar4 < 0) {
LAB_146c1dd39:
    uVar8 = FUN_146c32fcc(param_1,0);
    local_a8 = *(undefined8 *)(param_2 + 0x38);
    iVar15 = local_64[(longlong)iVar17 + 1];
    FUN_146c3506a(param_1,uVar8,local_64[(longlong)iVar12 + 1],iVar15);
    lVar9 = *(longlong *)(param_1 + 0x78);
  }
  else {
    iVar15 = local_64[(longlong)iVar17 + 1];
    iVar5 = local_64[local_80 + 4];
    if (((local_64[local_88 + 4] != local_64[(longlong)iVar12 + 1]) &&
        (bVar19 = iVar5 != local_64[(longlong)iVar12 + 1], iVar5 = local_64[local_88 + 4], bVar19))
       || (iVar5 != iVar15)) goto LAB_146c1dd39;
  }
  *(uint *)(*(longlong *)(lVar9 + (ulonglong)(iVar17 + uVar3 >> 9) * 8) +
           (ulonglong)(iVar17 + uVar3 & 0x1ff) * 4) = uVar8;
  uVar3 = local_64[(longlong)iVar16 + 1];
  local_a8 = CONCAT71(local_a8._1_7_,1);
  local_6c = uVar8;
  local_68 = uVar3;
  local_64[0] = iVar15;
  FUN_146c33062(param_1,*(undefined4 *)(param_2 + 0x28),&local_6c,0);
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                    (ulonglong)(uVar8 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 2;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
LAB_146c1d96b:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c1de00 FUN_146c1de00 body=289 status=ok
// SIG undefined FUN_146c1de00(void)

void FUN_146c1de00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c1df66(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c1e2c2(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c1e61e(*(longlong *)(param_1 + 0x40),param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1df22 FUN_146c1df22 body=67 status=ok
// SIG undefined FUN_146c1df22(void)

void FUN_146c1df22(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1df66 FUN_146c1df66 body=858 status=ok
// SIG undefined FUN_146c1df66(void)

void FUN_146c1df66(longlong param_1,longlong param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  ulonglong local_98;
  int local_8c;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *(int *)(param_2 + 0x14) * 3;
  lVar12 = *(longlong *)(param_1 + 0x78);
  lVar9 = *(longlong *)(lVar12 + (ulonglong)(uVar10 >> 9) * 8);
  uVar2 = *(uint *)(lVar9 + (ulonglong)(uVar10 & 0x1ff) * 4);
  if (-1 < (int)uVar2) {
    uVar6 = *(int *)(param_2 + 0x18) * 3;
    local_68 = (ulonglong)(uVar6 >> 9);
    local_88 = (ulonglong)(uVar6 & 0x1ff);
    local_8c = *(int *)(param_2 + 4);
    local_9c = *(int *)(param_2 + 8);
    local_70 = (ulonglong)(uVar10 + 2 >> 9);
    local_80 = (ulonglong)(uVar10 + 2 & 0x1ff);
    local_60[5] = *(uint *)(*(longlong *)(lVar12 + local_70 * 8) + local_80 * 4);
    uVar11 = uVar10 + 1;
    local_78 = (ulonglong)(uVar11 >> 9);
    local_60[4] = *(uint *)(*(longlong *)(lVar12 + local_78 * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
    local_60[3] = uVar2;
    lVar14 = *(longlong *)(param_1 + 0x60);
    iVar3 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[5] >> 9) * 8) +
                    (ulonglong)(local_60[5] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[4] >> 9) * 8) +
                    (ulonglong)(local_60[4] & 0x1ff) * 4);
    iVar5 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    local_98 = 0;
    if ((iVar5 != local_8c) && (local_98 = 1, iVar4 != local_8c)) {
      local_98 = (ulonglong)((uint)(iVar3 == local_8c) * 3 - 1);
    }
    iVar13 = 0;
    if ((iVar5 != local_9c) && (iVar13 = 1, iVar4 != local_9c)) {
      iVar13 = (uint)(iVar3 == local_9c) * 3 + -1;
    }
    uVar18 = (ulonglong)(uVar6 + 2 >> 9);
    uVar16 = (ulonglong)(uVar6 + 2 & 0x1ff);
    local_60[2] = *(uint *)(*(longlong *)(lVar12 + uVar18 * 8) + uVar16 * 4);
    uVar17 = (ulonglong)(uVar6 + 1 >> 9);
    uVar15 = (ulonglong)(uVar6 + 1 & 0x1ff);
    local_60[1] = *(uint *)(*(longlong *)(lVar12 + uVar17 * 8) + uVar15 * 4);
    local_60[0] = *(uint *)(*(longlong *)(lVar12 + local_68 * 8) + local_88 * 4);
    local_a0 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[2] >> 9) * 8) +
                       (ulonglong)(local_60[2] & 0x1ff) * 4);
    iVar3 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[1] >> 9) * 8) +
                    (ulonglong)(local_60[1] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[0] >> 9) * 8) +
                    (ulonglong)(local_60[0] & 0x1ff) * 4);
    if (iVar4 == local_8c) {
      lVar12 = 0;
    }
    else {
      lVar12 = 1;
      if (iVar3 != local_8c) {
        lVar12 = (ulonglong)(local_a0 == local_8c) * 3 + -1;
      }
    }
    if (iVar4 == local_9c) {
      lVar14 = 0;
    }
    else {
      lVar14 = 1;
      if (iVar3 != local_9c) {
        lVar14 = (ulonglong)(local_a0 == local_9c) * 3 + -1;
      }
    }
    uVar2 = local_60[(longlong)(int)local_98 + 3];
    uVar6 = local_60[(longlong)iVar13 + 3];
    uVar7 = local_60[(longlong)(int)(&DAT_149f3bad0)[(int)local_98 + iVar13] + 3];
    uVar8 = local_60[(int)(&DAT_149f3bad0)[lVar14 + lVar12]];
    *(uint *)(lVar9 + (ulonglong)(uVar10 & 0x1ff) * 4) = uVar7;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_78 * 8) +
             (ulonglong)(uVar11 & 0x1ff) * 4) = uVar8;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_70 * 8) + local_80 * 4) = uVar6;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_68 * 8) + local_88 * 4) = uVar8;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar17 * 8) + uVar15 * 4) = uVar7;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar18 * 8) + uVar16 * 4) = uVar2;
    FUN_146c09a68(param_1 + 8,uVar2,CONCAT62((uint6)(ushort)(uVar11 >> 0x19),1));
    FUN_146c09a68(param_1 + 8,uVar6,1);
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1e2c2 FUN_146c1e2c2 body=858 status=ok
// SIG undefined FUN_146c1e2c2(void)

void FUN_146c1e2c2(longlong param_1,longlong param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  ulonglong local_98;
  int local_8c;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *(int *)(param_2 + 0x14) * 3;
  lVar12 = *(longlong *)(param_1 + 0x78);
  lVar9 = *(longlong *)(lVar12 + (ulonglong)(uVar10 >> 9) * 8);
  uVar2 = *(uint *)(lVar9 + (ulonglong)(uVar10 & 0x1ff) * 4);
  if (-1 < (int)uVar2) {
    uVar6 = *(int *)(param_2 + 0x18) * 3;
    local_68 = (ulonglong)(uVar6 >> 9);
    local_88 = (ulonglong)(uVar6 & 0x1ff);
    local_8c = *(int *)(param_2 + 4);
    local_9c = *(int *)(param_2 + 8);
    local_70 = (ulonglong)(uVar10 + 2 >> 9);
    local_80 = (ulonglong)(uVar10 + 2 & 0x1ff);
    local_60[5] = *(uint *)(*(longlong *)(lVar12 + local_70 * 8) + local_80 * 4);
    uVar11 = uVar10 + 1;
    local_78 = (ulonglong)(uVar11 >> 9);
    local_60[4] = *(uint *)(*(longlong *)(lVar12 + local_78 * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
    local_60[3] = uVar2;
    lVar14 = *(longlong *)(param_1 + 0x60);
    iVar3 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[5] >> 9) * 8) +
                    (ulonglong)(local_60[5] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[4] >> 9) * 8) +
                    (ulonglong)(local_60[4] & 0x1ff) * 4);
    iVar5 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    local_98 = 0;
    if ((iVar5 != local_8c) && (local_98 = 1, iVar4 != local_8c)) {
      local_98 = (ulonglong)((uint)(iVar3 == local_8c) * 3 - 1);
    }
    iVar13 = 0;
    if ((iVar5 != local_9c) && (iVar13 = 1, iVar4 != local_9c)) {
      iVar13 = (uint)(iVar3 == local_9c) * 3 + -1;
    }
    uVar18 = (ulonglong)(uVar6 + 2 >> 9);
    uVar16 = (ulonglong)(uVar6 + 2 & 0x1ff);
    local_60[2] = *(uint *)(*(longlong *)(lVar12 + uVar18 * 8) + uVar16 * 4);
    uVar17 = (ulonglong)(uVar6 + 1 >> 9);
    uVar15 = (ulonglong)(uVar6 + 1 & 0x1ff);
    local_60[1] = *(uint *)(*(longlong *)(lVar12 + uVar17 * 8) + uVar15 * 4);
    local_60[0] = *(uint *)(*(longlong *)(lVar12 + local_68 * 8) + local_88 * 4);
    local_a0 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[2] >> 9) * 8) +
                       (ulonglong)(local_60[2] & 0x1ff) * 4);
    iVar3 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[1] >> 9) * 8) +
                    (ulonglong)(local_60[1] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[0] >> 9) * 8) +
                    (ulonglong)(local_60[0] & 0x1ff) * 4);
    if (iVar4 == local_8c) {
      lVar12 = 0;
    }
    else {
      lVar12 = 1;
      if (iVar3 != local_8c) {
        lVar12 = (ulonglong)(local_a0 == local_8c) * 3 + -1;
      }
    }
    if (iVar4 == local_9c) {
      lVar14 = 0;
    }
    else {
      lVar14 = 1;
      if (iVar3 != local_9c) {
        lVar14 = (ulonglong)(local_a0 == local_9c) * 3 + -1;
      }
    }
    uVar2 = local_60[(longlong)(int)local_98 + 3];
    uVar6 = local_60[(longlong)iVar13 + 3];
    uVar7 = local_60[(longlong)(int)(&DAT_149f3bad0)[(int)local_98 + iVar13] + 3];
    uVar8 = local_60[(int)(&DAT_149f3bad0)[lVar14 + lVar12]];
    *(uint *)(lVar9 + (ulonglong)(uVar10 & 0x1ff) * 4) = uVar7;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_78 * 8) +
             (ulonglong)(uVar11 & 0x1ff) * 4) = uVar8;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_70 * 8) + local_80 * 4) = uVar6;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_68 * 8) + local_88 * 4) = uVar8;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar17 * 8) + uVar15 * 4) = uVar7;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar18 * 8) + uVar16 * 4) = uVar2;
    FUN_146c09a68(param_1 + 8,uVar2,CONCAT62((uint6)(ushort)(uVar11 >> 0x19),1));
    FUN_146c09a68(param_1 + 8,uVar6,1);
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1e61e FUN_146c1e61e body=858 status=ok
// SIG undefined FUN_146c1e61e(void)

void FUN_146c1e61e(longlong param_1,longlong param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  ulonglong local_98;
  int local_8c;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *(int *)(param_2 + 0x14) * 3;
  lVar12 = *(longlong *)(param_1 + 0x78);
  lVar9 = *(longlong *)(lVar12 + (ulonglong)(uVar10 >> 9) * 8);
  uVar2 = *(uint *)(lVar9 + (ulonglong)(uVar10 & 0x1ff) * 4);
  if (-1 < (int)uVar2) {
    uVar6 = *(int *)(param_2 + 0x18) * 3;
    local_68 = (ulonglong)(uVar6 >> 9);
    local_88 = (ulonglong)(uVar6 & 0x1ff);
    local_8c = *(int *)(param_2 + 4);
    local_9c = *(int *)(param_2 + 8);
    local_70 = (ulonglong)(uVar10 + 2 >> 9);
    local_80 = (ulonglong)(uVar10 + 2 & 0x1ff);
    local_60[5] = *(uint *)(*(longlong *)(lVar12 + local_70 * 8) + local_80 * 4);
    uVar11 = uVar10 + 1;
    local_78 = (ulonglong)(uVar11 >> 9);
    local_60[4] = *(uint *)(*(longlong *)(lVar12 + local_78 * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
    local_60[3] = uVar2;
    lVar14 = *(longlong *)(param_1 + 0x60);
    iVar3 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[5] >> 9) * 8) +
                    (ulonglong)(local_60[5] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[4] >> 9) * 8) +
                    (ulonglong)(local_60[4] & 0x1ff) * 4);
    iVar5 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
    local_98 = 0;
    if ((iVar5 != local_8c) && (local_98 = 1, iVar4 != local_8c)) {
      local_98 = (ulonglong)((uint)(iVar3 == local_8c) * 3 - 1);
    }
    iVar13 = 0;
    if ((iVar5 != local_9c) && (iVar13 = 1, iVar4 != local_9c)) {
      iVar13 = (uint)(iVar3 == local_9c) * 3 + -1;
    }
    uVar18 = (ulonglong)(uVar6 + 2 >> 9);
    uVar16 = (ulonglong)(uVar6 + 2 & 0x1ff);
    local_60[2] = *(uint *)(*(longlong *)(lVar12 + uVar18 * 8) + uVar16 * 4);
    uVar17 = (ulonglong)(uVar6 + 1 >> 9);
    uVar15 = (ulonglong)(uVar6 + 1 & 0x1ff);
    local_60[1] = *(uint *)(*(longlong *)(lVar12 + uVar17 * 8) + uVar15 * 4);
    local_60[0] = *(uint *)(*(longlong *)(lVar12 + local_68 * 8) + local_88 * 4);
    local_a0 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[2] >> 9) * 8) +
                       (ulonglong)(local_60[2] & 0x1ff) * 4);
    iVar3 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[1] >> 9) * 8) +
                    (ulonglong)(local_60[1] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar14 + (ulonglong)(local_60[0] >> 9) * 8) +
                    (ulonglong)(local_60[0] & 0x1ff) * 4);
    if (iVar4 == local_8c) {
      lVar12 = 0;
    }
    else {
      lVar12 = 1;
      if (iVar3 != local_8c) {
        lVar12 = (ulonglong)(local_a0 == local_8c) * 3 + -1;
      }
    }
    if (iVar4 == local_9c) {
      lVar14 = 0;
    }
    else {
      lVar14 = 1;
      if (iVar3 != local_9c) {
        lVar14 = (ulonglong)(local_a0 == local_9c) * 3 + -1;
      }
    }
    uVar2 = local_60[(longlong)(int)local_98 + 3];
    uVar6 = local_60[(longlong)iVar13 + 3];
    uVar7 = local_60[(longlong)(int)(&DAT_149f3bad0)[(int)local_98 + iVar13] + 3];
    uVar8 = local_60[(int)(&DAT_149f3bad0)[lVar14 + lVar12]];
    *(uint *)(lVar9 + (ulonglong)(uVar10 & 0x1ff) * 4) = uVar7;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_78 * 8) +
             (ulonglong)(uVar11 & 0x1ff) * 4) = uVar8;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_70 * 8) + local_80 * 4) = uVar6;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + local_68 * 8) + local_88 * 4) = uVar8;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar17 * 8) + uVar15 * 4) = uVar7;
    *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + uVar18 * 8) + uVar16 * 4) = uVar2;
    FUN_146c09a68(param_1 + 8,uVar2,CONCAT62((uint6)(ushort)(uVar11 >> 0x19),1));
    FUN_146c09a68(param_1 + 8,uVar6,1);
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
    psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 2);
    *psVar1 = *psVar1 + 1;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c1e97a FUN_146c1e97a body=289 status=ok
// SIG undefined FUN_146c1e97a(void)

void FUN_146c1e97a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c1eae0(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c1f2a0(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c1fa60(*(longlong *)(param_1 + 0x40),param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1ea9c FUN_146c1ea9c body=67 status=ok
// SIG undefined FUN_146c1ea9c(void)

void FUN_146c1ea9c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c1eae0 FUN_146c1eae0 body=1983 status=ok
// SIG undefined FUN_146c1eae0(void)

void FUN_146c1eae0(longlong *param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 unaff_R14;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  byte local_2a1;
  int local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  int *local_290;
  ulonglong local_288;
  undefined4 local_27c;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_250;
  uint local_244 [3];
  undefined8 local_238;
  uint local_230 [6];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_278 = (ulonglong)(uint)param_2[6];
  uVar20 = param_2[7];
  local_270 = (ulonglong)uVar20;
  uVar18 = param_2[6] * 3;
  lVar19 = param_1[0xf];
  uVar11 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                    (ulonglong)(uVar18 & 0x1ff) * 4);
  local_288 = (ulonglong)uVar11;
  if ((int)uVar20 < 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),
                      -1 < *(int *)(*(longlong *)(lVar19 + (local_270 * 3 >> 9) * 8) +
                                   (ulonglong)((uint)(local_270 * 3) & 0x1ff) * 4));
  }
  local_2a0 = *param_2;
  iVar2 = param_2[1];
  local_230[3] = 0xffffffff;
  local_230[4] = 0xffffffff;
  local_230[5] = 0xffffffff;
  iVar15 = -1;
  iVar10 = -1;
  if (-1 < (int)uVar11) {
    local_230[5] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                            (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
    local_230[4] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                            (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
    local_230[3] = uVar11;
    lVar6 = param_1[0xc];
    iVar13 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(local_230[5] >> 9) * 8) +
                     (ulonglong)(local_230[5] & 0x1ff) * 4);
    iVar17 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(local_230[4] >> 9) * 8) +
                     (ulonglong)(local_230[4] & 0x1ff) * 4);
    iVar3 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar11 >> 9) * 8) +
                    (ulonglong)(uVar11 & 0x1ff) * 4);
    iVar10 = 0;
    iVar15 = 0;
    if ((iVar3 != local_2a0) && (iVar15 = 1, iVar17 != local_2a0)) {
      iVar15 = (uint)(iVar13 == local_2a0) * 3 + -1;
    }
    if ((iVar3 != iVar2) && (iVar10 = 1, iVar17 != iVar2)) {
      iVar10 = (uint)(iVar13 == iVar2) * 3 + -1;
    }
  }
  local_230[0] = 0xffffffff;
  local_230[1] = 0xffffffff;
  local_230[2] = 0xffffffff;
  local_2a1 = (byte)(uVar21 ^ 1);
  if ((char)param_2[4] == '\0' && local_2a1 == 0) {
    uVar18 = uVar20 * 3 + 2;
    local_230[2] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
    uVar18 = uVar20 * 3 + 1;
    local_230[1] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
    local_230[0] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar20 * 3 >> 9) * 8) +
                            (ulonglong)(uVar20 * 3 & 0x1ff) * 4);
    lVar19 = param_1[0xc];
    iVar3 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[2] >> 9) * 8) +
                    (ulonglong)(local_230[2] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[1] >> 9) * 8) +
                    (ulonglong)(local_230[1] & 0x1ff) * 4);
    iVar5 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[0] >> 9) * 8) +
                    (ulonglong)(local_230[0] & 0x1ff) * 4);
    iVar13 = 0;
    iVar17 = 0;
    if ((iVar5 != local_2a0) && (iVar17 = 1, iVar4 != local_2a0)) {
      iVar17 = (uint)(iVar3 == local_2a0) * 3 + -1;
    }
    if ((iVar5 != iVar2) && (iVar13 = 1, iVar4 != iVar2)) {
      iVar13 = (uint)(iVar3 == iVar2) * 3 + -1;
    }
    if ((int)uVar11 < 0) {
      local_294 = 0xffffffff;
      local_298 = 0xffffffff;
      local_29c = 0xffffffff;
      bVar22 = true;
      goto LAB_146c1ee17;
    }
    local_294 = local_230[(longlong)iVar15 + 3];
    local_298 = local_230[(longlong)iVar10 + 3];
    if (local_294 == local_230[iVar17]) {
      bVar22 = local_298 == local_230[iVar13];
    }
    else {
      bVar22 = local_230[iVar17] == local_298 && local_230[iVar13] == local_294;
    }
    local_29c = 0xffffffff;
  }
  else {
    local_294 = 0xffffffff;
    local_298 = 0xffffffff;
    local_29c = 0xffffffff;
    bVar22 = true;
    iVar13 = -1;
    iVar17 = -1;
    if ((int)uVar11 < 0) goto LAB_146c1ee17;
    local_294 = local_230[(longlong)iVar15 + 3];
    local_298 = local_230[(longlong)iVar10 + 3];
    iVar13 = -1;
  }
LAB_146c1ee17:
  uVar18 = local_298;
  local_29c = 0xffffffff;
  local_27c = (undefined4)(uVar21 ^ 1);
  local_2a1 = -1 < (int)uVar11 & bVar22 | local_2a1;
  uVar20 = 0xffffffff;
  if (local_2a1 == 0) {
    uVar20 = local_230[iVar17];
    local_29c = local_230[iVar13];
  }
  uVar8 = local_29c;
  puVar12 = &local_298;
  bVar22 = true;
  uVar11 = local_294;
  local_290 = param_2;
  do {
    bVar16 = bVar22;
    if ((uVar11 != 0xffffffff) && (*puVar12 != 0xffffffff)) {
      local_2b8 = *(undefined8 *)(local_290 + 0xc);
      FUN_146c2f7ac(param_1,uVar11,uVar11);
    }
    puVar12 = &local_29c;
    bVar22 = false;
    uVar11 = uVar20;
  } while (bVar16);
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,local_2a0);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = local_2a0;
  local_238 = param_1;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  uVar21 = local_288;
  local_260 = (ulonglong)(uVar20 >> 9);
  local_268 = (ulonglong)(uVar20 & 0x1ff);
  local_250 = (ulonglong)(local_294 >> 9);
  local_258 = (ulonglong)(local_294 & 0x1ff);
  do {
    if ((((local_178 == local_218) && ((int)uStack_170 == iStack_210)) && (iStack_160 == iStack_200)
        ) && (iStack_15c == iStack_1fc)) {
      if (local_1b8[0] != 0) {
        plVar14 = local_1a8;
        if (local_1a8 == (longlong *)0x0) {
          plVar14 = local_198;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      uVar21 = local_270;
      uVar9 = local_27c;
      if (local_118[0] != 0) {
        plVar14 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar14 = local_f8;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (local_d8[0] != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
      if (-1 < (int)local_288) {
        FUN_146c2d498(param_1,local_278,1);
      }
      if ((char)uVar9 == '\0' && (char)local_290[4] == '\0') {
        FUN_146c2d498(param_1,uVar21 & 0xffffffff,1);
      }
      if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    uVar7 = local_120 * 3;
    lVar19 = param_1[0xf];
    uVar11 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar11) {
      local_244[0] = uVar11;
      local_244[1] = *(undefined4 *)
                      (*(longlong *)(lVar19 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      local_244[2] = *(undefined4 *)
                      (*(longlong *)(lVar19 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                      (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
      lVar19 = 0;
      iVar10 = local_2a0;
      do {
        uVar11 = local_244[lVar19];
        lVar6 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar11 >> 9) * 8);
        if (*(int *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 4) == iVar2) {
          if (uVar11 == uVar18) {
            uVar11 = uVar7 + (int)lVar19;
            *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4) = local_294;
            uVar11 = uVar18;
            if (-1 < (int)uVar21) {
              psVar1 = (short *)(*(longlong *)(param_1[2] + local_250 * 8) + local_258 * 2);
              *psVar1 = *psVar1 + 1;
            }
          }
          else {
            if (uVar11 != uVar8) {
              *(int *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 4) = iVar10;
              goto LAB_146c1f114;
            }
            uVar11 = uVar7 + (int)lVar19;
            *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4) = uVar20;
            uVar11 = uVar8;
            if (local_2a1 == 0) {
              psVar1 = (short *)(*(longlong *)(param_1[2] + local_260 * 8) + local_268 * 2);
              *psVar1 = *psVar1 + 1;
            }
          }
          FUN_146c2f854(&local_238,uVar11);
          iVar10 = local_2a0;
        }
LAB_146c1f114:
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
    }
    FUN_146bfd1f0(&local_178);
  } while( true );
}



// FUNCTION 146c1f2a0 FUN_146c1f2a0 body=1983 status=ok
// SIG undefined FUN_146c1f2a0(void)

void FUN_146c1f2a0(longlong *param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 unaff_R14;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  byte local_2a1;
  int local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  int *local_290;
  ulonglong local_288;
  undefined4 local_27c;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_250;
  uint local_244 [3];
  undefined8 local_238;
  uint local_230 [6];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_278 = (ulonglong)(uint)param_2[6];
  uVar20 = param_2[7];
  local_270 = (ulonglong)uVar20;
  uVar18 = param_2[6] * 3;
  lVar19 = param_1[0xf];
  uVar11 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                    (ulonglong)(uVar18 & 0x1ff) * 4);
  local_288 = (ulonglong)uVar11;
  if ((int)uVar20 < 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),
                      -1 < *(int *)(*(longlong *)(lVar19 + (local_270 * 3 >> 9) * 8) +
                                   (ulonglong)((uint)(local_270 * 3) & 0x1ff) * 4));
  }
  local_2a0 = *param_2;
  iVar2 = param_2[1];
  local_230[3] = 0xffffffff;
  local_230[4] = 0xffffffff;
  local_230[5] = 0xffffffff;
  iVar15 = -1;
  iVar10 = -1;
  if (-1 < (int)uVar11) {
    local_230[5] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                            (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
    local_230[4] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                            (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
    local_230[3] = uVar11;
    lVar6 = param_1[0xc];
    iVar13 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(local_230[5] >> 9) * 8) +
                     (ulonglong)(local_230[5] & 0x1ff) * 4);
    iVar17 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(local_230[4] >> 9) * 8) +
                     (ulonglong)(local_230[4] & 0x1ff) * 4);
    iVar3 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar11 >> 9) * 8) +
                    (ulonglong)(uVar11 & 0x1ff) * 4);
    iVar10 = 0;
    iVar15 = 0;
    if ((iVar3 != local_2a0) && (iVar15 = 1, iVar17 != local_2a0)) {
      iVar15 = (uint)(iVar13 == local_2a0) * 3 + -1;
    }
    if ((iVar3 != iVar2) && (iVar10 = 1, iVar17 != iVar2)) {
      iVar10 = (uint)(iVar13 == iVar2) * 3 + -1;
    }
  }
  local_230[0] = 0xffffffff;
  local_230[1] = 0xffffffff;
  local_230[2] = 0xffffffff;
  local_2a1 = (byte)(uVar21 ^ 1);
  if ((char)param_2[4] == '\0' && local_2a1 == 0) {
    uVar18 = uVar20 * 3 + 2;
    local_230[2] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
    uVar18 = uVar20 * 3 + 1;
    local_230[1] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
    local_230[0] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar20 * 3 >> 9) * 8) +
                            (ulonglong)(uVar20 * 3 & 0x1ff) * 4);
    lVar19 = param_1[0xc];
    iVar3 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[2] >> 9) * 8) +
                    (ulonglong)(local_230[2] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[1] >> 9) * 8) +
                    (ulonglong)(local_230[1] & 0x1ff) * 4);
    iVar5 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[0] >> 9) * 8) +
                    (ulonglong)(local_230[0] & 0x1ff) * 4);
    iVar13 = 0;
    iVar17 = 0;
    if ((iVar5 != local_2a0) && (iVar17 = 1, iVar4 != local_2a0)) {
      iVar17 = (uint)(iVar3 == local_2a0) * 3 + -1;
    }
    if ((iVar5 != iVar2) && (iVar13 = 1, iVar4 != iVar2)) {
      iVar13 = (uint)(iVar3 == iVar2) * 3 + -1;
    }
    if ((int)uVar11 < 0) {
      local_294 = 0xffffffff;
      local_298 = 0xffffffff;
      local_29c = 0xffffffff;
      bVar22 = true;
      goto LAB_146c1f5d7;
    }
    local_294 = local_230[(longlong)iVar15 + 3];
    local_298 = local_230[(longlong)iVar10 + 3];
    if (local_294 == local_230[iVar17]) {
      bVar22 = local_298 == local_230[iVar13];
    }
    else {
      bVar22 = local_230[iVar17] == local_298 && local_230[iVar13] == local_294;
    }
    local_29c = 0xffffffff;
  }
  else {
    local_294 = 0xffffffff;
    local_298 = 0xffffffff;
    local_29c = 0xffffffff;
    bVar22 = true;
    iVar13 = -1;
    iVar17 = -1;
    if ((int)uVar11 < 0) goto LAB_146c1f5d7;
    local_294 = local_230[(longlong)iVar15 + 3];
    local_298 = local_230[(longlong)iVar10 + 3];
    iVar13 = -1;
  }
LAB_146c1f5d7:
  uVar18 = local_298;
  local_29c = 0xffffffff;
  local_27c = (undefined4)(uVar21 ^ 1);
  local_2a1 = -1 < (int)uVar11 & bVar22 | local_2a1;
  uVar20 = 0xffffffff;
  if (local_2a1 == 0) {
    uVar20 = local_230[iVar17];
    local_29c = local_230[iVar13];
  }
  uVar8 = local_29c;
  puVar12 = &local_298;
  bVar22 = true;
  uVar11 = local_294;
  local_290 = param_2;
  do {
    bVar16 = bVar22;
    if ((uVar11 != 0xffffffff) && (*puVar12 != 0xffffffff)) {
      local_2b8 = *(undefined8 *)(local_290 + 0xc);
      FUN_146c32c54(param_1,uVar11,uVar11);
    }
    puVar12 = &local_29c;
    bVar22 = false;
    uVar11 = uVar20;
  } while (bVar16);
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,local_2a0);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = local_2a0;
  local_238 = param_1;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  uVar21 = local_288;
  local_260 = (ulonglong)(uVar20 >> 9);
  local_268 = (ulonglong)(uVar20 & 0x1ff);
  local_250 = (ulonglong)(local_294 >> 9);
  local_258 = (ulonglong)(local_294 & 0x1ff);
  do {
    if ((((local_178 == local_218) && ((int)uStack_170 == iStack_210)) && (iStack_160 == iStack_200)
        ) && (iStack_15c == iStack_1fc)) {
      if (local_1b8[0] != 0) {
        plVar14 = local_1a8;
        if (local_1a8 == (longlong *)0x0) {
          plVar14 = local_198;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      uVar21 = local_270;
      uVar9 = local_27c;
      if (local_118[0] != 0) {
        plVar14 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar14 = local_f8;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (local_d8[0] != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
      if (-1 < (int)local_288) {
        FUN_146c2fdd8(param_1,local_278,1);
      }
      if ((char)uVar9 == '\0' && (char)local_290[4] == '\0') {
        FUN_146c2fdd8(param_1,uVar21 & 0xffffffff,1);
      }
      if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    uVar7 = local_120 * 3;
    lVar19 = param_1[0xf];
    uVar11 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar11) {
      local_244[0] = uVar11;
      local_244[1] = *(undefined4 *)
                      (*(longlong *)(lVar19 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      local_244[2] = *(undefined4 *)
                      (*(longlong *)(lVar19 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                      (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
      lVar19 = 0;
      iVar10 = local_2a0;
      do {
        uVar11 = local_244[lVar19];
        lVar6 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar11 >> 9) * 8);
        if (*(int *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 4) == iVar2) {
          if (uVar11 == uVar18) {
            uVar11 = uVar7 + (int)lVar19;
            *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4) = local_294;
            uVar11 = uVar18;
            if (-1 < (int)uVar21) {
              psVar1 = (short *)(*(longlong *)(param_1[2] + local_250 * 8) + local_258 * 2);
              *psVar1 = *psVar1 + 1;
            }
          }
          else {
            if (uVar11 != uVar8) {
              *(int *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 4) = iVar10;
              goto LAB_146c1f8d4;
            }
            uVar11 = uVar7 + (int)lVar19;
            *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4) = uVar20;
            uVar11 = uVar8;
            if (local_2a1 == 0) {
              psVar1 = (short *)(*(longlong *)(param_1[2] + local_260 * 8) + local_268 * 2);
              *psVar1 = *psVar1 + 1;
            }
          }
          FUN_146c32ce6(&local_238,uVar11);
          iVar10 = local_2a0;
        }
LAB_146c1f8d4:
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
    }
    FUN_146bfd1f0(&local_178);
  } while( true );
}



// FUNCTION 146c1fa60 FUN_146c1fa60 body=1977 status=ok
// SIG undefined FUN_146c1fa60(void)

void FUN_146c1fa60(longlong *param_1,int *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 unaff_R14;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  byte local_2a1;
  int local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  int *local_290;
  ulonglong local_288;
  undefined4 local_27c;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_250;
  uint local_244 [3];
  undefined8 local_238;
  uint local_230 [6];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_278 = (ulonglong)(uint)param_2[6];
  uVar20 = param_2[7];
  local_270 = (ulonglong)uVar20;
  uVar18 = param_2[6] * 3;
  lVar19 = param_1[0xf];
  uVar11 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                    (ulonglong)(uVar18 & 0x1ff) * 4);
  local_288 = (ulonglong)uVar11;
  if ((int)uVar20 < 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),
                      -1 < *(int *)(*(longlong *)(lVar19 + (local_270 * 3 >> 9) * 8) +
                                   (ulonglong)((uint)(local_270 * 3) & 0x1ff) * 4));
  }
  local_2a0 = *param_2;
  iVar2 = param_2[1];
  local_230[3] = 0xffffffff;
  local_230[4] = 0xffffffff;
  local_230[5] = 0xffffffff;
  iVar15 = -1;
  iVar10 = -1;
  if (-1 < (int)uVar11) {
    local_230[5] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 + 2 >> 9) * 8) +
                            (ulonglong)(uVar18 + 2 & 0x1ff) * 4);
    local_230[4] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 + 1 >> 9) * 8) +
                            (ulonglong)(uVar18 + 1 & 0x1ff) * 4);
    local_230[3] = uVar11;
    lVar6 = param_1[0xc];
    iVar13 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(local_230[5] >> 9) * 8) +
                     (ulonglong)(local_230[5] & 0x1ff) * 4);
    iVar17 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(local_230[4] >> 9) * 8) +
                     (ulonglong)(local_230[4] & 0x1ff) * 4);
    iVar3 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar11 >> 9) * 8) +
                    (ulonglong)(uVar11 & 0x1ff) * 4);
    iVar10 = 0;
    iVar15 = 0;
    if ((iVar3 != local_2a0) && (iVar15 = 1, iVar17 != local_2a0)) {
      iVar15 = (uint)(iVar13 == local_2a0) * 3 + -1;
    }
    if ((iVar3 != iVar2) && (iVar10 = 1, iVar17 != iVar2)) {
      iVar10 = (uint)(iVar13 == iVar2) * 3 + -1;
    }
  }
  local_230[0] = 0xffffffff;
  local_230[1] = 0xffffffff;
  local_230[2] = 0xffffffff;
  local_2a1 = (byte)(uVar21 ^ 1);
  if ((char)param_2[4] == '\0' && local_2a1 == 0) {
    uVar18 = uVar20 * 3 + 2;
    local_230[2] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
    uVar18 = uVar20 * 3 + 1;
    local_230[1] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar18 >> 9) * 8) +
                            (ulonglong)(uVar18 & 0x1ff) * 4);
    local_230[0] = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar20 * 3 >> 9) * 8) +
                            (ulonglong)(uVar20 * 3 & 0x1ff) * 4);
    lVar19 = param_1[0xc];
    iVar3 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[2] >> 9) * 8) +
                    (ulonglong)(local_230[2] & 0x1ff) * 4);
    iVar4 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[1] >> 9) * 8) +
                    (ulonglong)(local_230[1] & 0x1ff) * 4);
    iVar5 = *(int *)(*(longlong *)(lVar19 + (ulonglong)(local_230[0] >> 9) * 8) +
                    (ulonglong)(local_230[0] & 0x1ff) * 4);
    iVar13 = 0;
    iVar17 = 0;
    if ((iVar5 != local_2a0) && (iVar17 = 1, iVar4 != local_2a0)) {
      iVar17 = (uint)(iVar3 == local_2a0) * 3 + -1;
    }
    if ((iVar5 != iVar2) && (iVar13 = 1, iVar4 != iVar2)) {
      iVar13 = (uint)(iVar3 == iVar2) * 3 + -1;
    }
    if ((int)uVar11 < 0) {
      local_294 = 0xffffffff;
      local_298 = 0xffffffff;
      local_29c = 0xffffffff;
      bVar22 = true;
      goto LAB_146c1fd97;
    }
    local_294 = local_230[(longlong)iVar15 + 3];
    local_298 = local_230[(longlong)iVar10 + 3];
    if (local_294 == local_230[iVar17]) {
      bVar22 = local_298 == local_230[iVar13];
    }
    else {
      bVar22 = local_230[iVar17] == local_298 && local_230[iVar13] == local_294;
    }
    local_29c = 0xffffffff;
  }
  else {
    local_294 = 0xffffffff;
    local_298 = 0xffffffff;
    local_29c = 0xffffffff;
    bVar22 = true;
    iVar13 = -1;
    iVar17 = -1;
    if ((int)uVar11 < 0) goto LAB_146c1fd97;
    local_294 = local_230[(longlong)iVar15 + 3];
    local_298 = local_230[(longlong)iVar10 + 3];
    iVar13 = -1;
  }
LAB_146c1fd97:
  uVar18 = local_298;
  local_29c = 0xffffffff;
  local_27c = (undefined4)(uVar21 ^ 1);
  local_2a1 = -1 < (int)uVar11 & bVar22 | local_2a1;
  uVar20 = 0xffffffff;
  if (local_2a1 == 0) {
    uVar20 = local_230[iVar17];
    local_29c = local_230[iVar13];
  }
  uVar8 = local_29c;
  puVar12 = &local_298;
  bVar22 = true;
  uVar11 = local_294;
  local_290 = param_2;
  do {
    bVar16 = bVar22;
    if ((uVar11 != 0xffffffff) && (*puVar12 != 0xffffffff)) {
      local_2b8 = *(undefined8 *)(local_290 + 0xc);
      FUN_146c3506a(param_1,uVar11,uVar11);
    }
    puVar12 = &local_29c;
    bVar22 = false;
    uVar11 = uVar20;
  } while (bVar16);
  local_150 = *param_1;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,local_2a0);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  iStack_210 = local_2a0;
  local_238 = param_1;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  uVar21 = local_288;
  local_260 = (ulonglong)(uVar20 >> 9);
  local_268 = (ulonglong)(uVar20 & 0x1ff);
  local_250 = (ulonglong)(local_294 >> 9);
  local_258 = (ulonglong)(local_294 & 0x1ff);
  do {
    if ((((local_178 == local_218) && ((int)uStack_170 == iStack_210)) && (iStack_160 == iStack_200)
        ) && (iStack_15c == iStack_1fc)) {
      if (local_1b8[0] != 0) {
        plVar14 = local_1a8;
        if (local_1a8 == (longlong *)0x0) {
          plVar14 = local_198;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      uVar21 = local_270;
      uVar9 = local_27c;
      if (local_118[0] != 0) {
        plVar14 = local_108;
        if (local_108 == (longlong *)0x0) {
          plVar14 = local_f8;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (local_d8[0] != 0) {
        if (local_c8 == (longlong *)0x0) {
          local_c8 = local_b8;
        }
        (**(code **)(*local_c8 + 0x10))();
      }
      if (-1 < (int)local_288) {
        FUN_146c33350(param_1,local_278);
      }
      if ((char)uVar9 == '\0' && (char)local_290[4] == '\0') {
        FUN_146c33350(param_1,uVar21 & 0xffffffff);
      }
      if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    uVar7 = local_120 * 3;
    lVar19 = param_1[0xf];
    uVar11 = *(uint *)(*(longlong *)(lVar19 + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar11) {
      local_244[0] = uVar11;
      local_244[1] = *(undefined4 *)
                      (*(longlong *)(lVar19 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      local_244[2] = *(undefined4 *)
                      (*(longlong *)(lVar19 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                      (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
      lVar19 = 0;
      iVar10 = local_2a0;
      do {
        uVar11 = local_244[lVar19];
        lVar6 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar11 >> 9) * 8);
        if (*(int *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 4) == iVar2) {
          if (uVar11 == uVar18) {
            uVar11 = uVar7 + (int)lVar19;
            *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4) = local_294;
            uVar11 = uVar18;
            if (-1 < (int)uVar21) {
              psVar1 = (short *)(*(longlong *)(param_1[2] + local_250 * 8) + local_258 * 2);
              *psVar1 = *psVar1 + 1;
            }
          }
          else {
            if (uVar11 != uVar8) {
              *(int *)(lVar6 + (ulonglong)(uVar11 & 0x1ff) * 4) = iVar10;
              goto LAB_146c20094;
            }
            uVar11 = uVar7 + (int)lVar19;
            *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                     (ulonglong)(uVar11 & 0x1ff) * 4) = uVar20;
            uVar11 = uVar8;
            if (local_2a1 == 0) {
              psVar1 = (short *)(*(longlong *)(param_1[2] + local_260 * 8) + local_268 * 2);
              *psVar1 = *psVar1 + 1;
            }
          }
          FUN_146c35106(&local_238,uVar11);
          iVar10 = local_2a0;
        }
LAB_146c20094:
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
    }
    FUN_146bfd1f0(&local_178);
  } while( true );
}



// FUNCTION 146c2021a FUN_146c2021a body=289 status=ok
// SIG undefined FUN_146c2021a(void)

void FUN_146c2021a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c20380(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c20568(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c20754(*(longlong *)(param_1 + 0x40),param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c2033c FUN_146c2033c body=67 status=ok
// SIG undefined FUN_146c2033c(void)

void FUN_146c2033c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x98))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c20380 FUN_146c20380 body=461 status=ok
// SIG undefined FUN_146c20380(void)

void FUN_146c20380(longlong param_1,int *param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  int *local_80;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *param_2 * 3;
  lVar5 = *(longlong *)(param_1 + 0x78);
  uVar2 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                   (ulonglong)(uVar4 & 0x1ff) * 4);
  if ((int)uVar2 < 0) {
    FUN_146c1c490(param_1,param_2[5]);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  uVar3 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                   (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uVar4 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                   (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uVar6 = FUN_146c2d112(param_1);
  local_50 = *(undefined8 *)(param_2 + 0xe);
  local_60 = param_2[10];
  iStack_5c = param_2[0xb];
  iStack_58 = param_2[0xc];
  iStack_54 = param_2[0xd];
  local_80 = &local_60;
  local_88 = uVar3;
  FUN_146c2f8c4(param_1,uVar6,uVar2,uVar4);
  local_88._0_1_ = 1;
  local_6c = uVar2;
  local_68 = uVar4;
  local_64 = uVar6;
  FUN_146c2d1aa(param_1,*param_2,&local_6c,0);
  local_88._0_1_ = 1;
  local_6c = uVar4;
  local_68 = uVar3;
  local_64 = uVar6;
  FUN_146c2d1aa(param_1,param_2[5],&local_6c,0);
  local_88 = CONCAT31(local_88._1_3_,1);
  local_6c = uVar3;
  local_68 = uVar2;
  local_64 = uVar6;
  FUN_146c2d1aa(param_1,param_2[6],&local_6c,0);
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8) +
                    (ulonglong)(uVar4 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)(uVar6 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 3;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c20568 FUN_146c20568 body=464 status=ok
// SIG undefined FUN_146c20568(void)

void FUN_146c20568(longlong param_1,int *param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  int *local_80;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *param_2 * 3;
  lVar5 = *(longlong *)(param_1 + 0x78);
  uVar2 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                   (ulonglong)(uVar4 & 0x1ff) * 4);
  if ((int)uVar2 < 0) {
    FUN_146c1c534(param_1,param_2[5]);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  uVar3 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                   (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uVar4 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                   (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uVar6 = FUN_146c2fa56(param_1,0);
  local_50 = *(undefined8 *)(param_2 + 0xe);
  local_60 = param_2[10];
  iStack_5c = param_2[0xb];
  iStack_58 = param_2[0xc];
  iStack_54 = param_2[0xd];
  local_80 = &local_60;
  local_88 = uVar3;
  FUN_146c32d56(param_1,uVar6,uVar2,uVar4);
  local_88._0_1_ = 1;
  local_6c = uVar2;
  local_68 = uVar4;
  local_64 = uVar6;
  FUN_146c2faea(param_1,*param_2,&local_6c,0);
  local_88._0_1_ = 1;
  local_6c = uVar4;
  local_68 = uVar3;
  local_64 = uVar6;
  FUN_146c2faea(param_1,param_2[5],&local_6c,0);
  local_88 = CONCAT31(local_88._1_3_,1);
  local_6c = uVar3;
  local_68 = uVar2;
  local_64 = uVar6;
  FUN_146c2faea(param_1,param_2[6],&local_6c,0);
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8) +
                    (ulonglong)(uVar4 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)(uVar6 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 3;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c20754 FUN_146c20754 body=464 status=ok
// SIG undefined FUN_146c20754(void)

void FUN_146c20754(longlong param_1,int *param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  int *local_80;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *param_2 * 3;
  lVar5 = *(longlong *)(param_1 + 0x78);
  uVar2 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) +
                   (ulonglong)(uVar4 & 0x1ff) * 4);
  if ((int)uVar2 < 0) {
    FUN_146c1c5d8(param_1,param_2[5]);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  uVar3 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 + 2 >> 9) * 8) +
                   (ulonglong)(uVar4 + 2 & 0x1ff) * 4);
  uVar4 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 + 1 >> 9) * 8) +
                   (ulonglong)(uVar4 + 1 & 0x1ff) * 4);
  uVar6 = FUN_146c32fcc(param_1,0);
  local_50 = *(undefined8 *)(param_2 + 0xe);
  local_60 = param_2[10];
  iStack_5c = param_2[0xb];
  iStack_58 = param_2[0xc];
  iStack_54 = param_2[0xd];
  local_80 = &local_60;
  local_88 = uVar3;
  FUN_146c35176(param_1,uVar6,uVar2,uVar4);
  local_88._0_1_ = 1;
  local_6c = uVar2;
  local_68 = uVar4;
  local_64 = uVar6;
  FUN_146c33062(param_1,*param_2,&local_6c,0);
  local_88._0_1_ = 1;
  local_6c = uVar4;
  local_68 = uVar3;
  local_64 = uVar6;
  FUN_146c33062(param_1,param_2[5],&local_6c,0);
  local_88 = CONCAT31(local_88._1_3_,1);
  local_6c = uVar3;
  local_68 = uVar2;
  local_64 = uVar6;
  FUN_146c33062(param_1,param_2[6],&local_6c,0);
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar4 >> 9) * 8) +
                    (ulonglong)(uVar4 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar3 >> 9) * 8) +
                    (ulonglong)(uVar3 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 1;
  psVar1 = (short *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)(uVar6 & 0x1ff) * 2);
  *psVar1 = *psVar1 + 3;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c20940 FUN_146c20940 body=289 status=ok
// SIG undefined FUN_146c20940(void)

void FUN_146c20940(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c20aa6(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c20e18(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c2118a(*(longlong *)(param_1 + 0x40),param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c20a62 FUN_146c20a62 body=67 status=ok
// SIG undefined FUN_146c20a62(void)

void FUN_146c20a62(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c20aa6 FUN_146c20aa6 body=881 status=ok
// SIG undefined FUN_146c20aa6(void)

void FUN_146c20aa6(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_258 [32];
  longlong *local_238;
  longlong *local_230;
  uint local_224 [3];
  code *local_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_238 = local_198;
  local_230 = local_f8;
  lVar7 = 0;
  bVar9 = true;
LAB_146c20afd:
  iVar1 = *(int *)(param_2 + 0x10 + lVar7 * 4);
  if (iVar1 != -1) {
    uVar2 = *(undefined4 *)(param_2 + 8 + lVar7 * 4);
    local_150 = *param_1;
    local_168 = 0;
    local_158 = &PTR_LAB_149f3aae0;
    local_178 = FUN_146be9588;
    local_218 = (code *)(local_150 + 0xb8);
    uStack_210 = CONCAT44(uStack_210._4_4_,uVar2);
    uStack_148 = uVar2;
    FUN_146be94ac(local_d8,&local_218,&local_178);
    local_128 = 0xffffffffffffffff;
    local_118[0] = 0;
    local_108 = (longlong *)0x0;
    local_158 = (undefined **)local_78;
    local_168 = local_88;
    uStack_160 = uStack_80;
    local_178 = local_98;
    uStack_170 = uStack_90;
    uStack_148 = uStack_68;
    uStack_144 = uStack_64;
    local_140 = local_60;
    uStack_13c = uStack_5c;
    uStack_138 = uStack_58;
    uStack_134 = uStack_54;
    local_130 = local_50;
    FUN_146be971a(local_118,local_d8);
    local_11c = 0;
    FUN_146bfd1f0(&local_178);
    local_1c8 = 0xffffffffffffffff;
    local_1b8[0] = 0;
    local_1a8 = (longlong *)0x0;
    local_1f8 = local_50;
    local_218 = (code *)CONCAT44(uStack_6c,local_70);
    uStack_210 = CONCAT44(uStack_64,uStack_68);
    uStack_200 = CONCAT44(uStack_54,uStack_58);
    local_1f0 = local_70;
    uStack_1ec = uStack_6c;
    uStack_1e8 = uStack_68;
    uStack_1e4 = uStack_64;
    local_1e0 = local_60;
    uStack_1dc = uStack_5c;
    uStack_1d8 = uStack_58;
    uStack_1d4 = uStack_54;
    local_1d0 = local_50;
    FUN_146be971a(local_1b8,local_d8);
    local_1bc = 0;
LAB_146c20c93:
    FUN_146bfd1f0();
    if (local_178 == local_218) {
      if ((int)uStack_170 == (int)uStack_210) {
        if ((int)uStack_160 == (int)uStack_200) {
          if (uStack_160._4_4_ == uStack_200._4_4_) goto LAB_146c20d75;
        }
      }
    }
    uVar5 = local_120 * 3;
    lVar7 = param_1[0xf];
    uVar3 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
    if (-1 < (int)uVar3) {
      local_224[0] = uVar3;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar7 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                      (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar7 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                      (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
      lVar7 = 0;
      do {
        uVar3 = local_224[lVar7];
        if (uVar3 != 0xffffffff) {
          lVar4 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar3 >> 9) * 8);
          if (*(int *)(lVar4 + (ulonglong)(uVar3 & 0x1ff) * 4) == iVar1) {
            *(undefined4 *)(lVar4 + (ulonglong)(uVar3 & 0x1ff) * 4) = uVar2;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
    }
    goto LAB_146c20c93;
  }
  goto LAB_146c20b08;
LAB_146c20d75:
  if (local_1b8[0] != 0) {
    plVar8 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar8 = local_238;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar8 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar8 = local_230;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_d8[0] != 0) {
    plVar8 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar8 = local_b8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_146c20b08:
  lVar7 = 1;
  bVar6 = !bVar9;
  bVar9 = false;
  if (bVar6) {
    if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146c20afd;
}



// FUNCTION 146c20e18 FUN_146c20e18 body=881 status=ok
// SIG undefined FUN_146c20e18(void)

void FUN_146c20e18(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_258 [32];
  longlong *local_238;
  longlong *local_230;
  uint local_224 [3];
  code *local_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_238 = local_198;
  local_230 = local_f8;
  lVar7 = 0;
  bVar9 = true;
LAB_146c20e6f:
  iVar1 = *(int *)(param_2 + 0x10 + lVar7 * 4);
  if (iVar1 != -1) {
    uVar2 = *(undefined4 *)(param_2 + 8 + lVar7 * 4);
    local_150 = *param_1;
    local_168 = 0;
    local_158 = &PTR_LAB_149f3aae0;
    local_178 = FUN_146be9588;
    local_218 = (code *)(local_150 + 0xb8);
    uStack_210 = CONCAT44(uStack_210._4_4_,uVar2);
    uStack_148 = uVar2;
    FUN_146be94ac(local_d8,&local_218,&local_178);
    local_128 = 0xffffffffffffffff;
    local_118[0] = 0;
    local_108 = (longlong *)0x0;
    local_158 = (undefined **)local_78;
    local_168 = local_88;
    uStack_160 = uStack_80;
    local_178 = local_98;
    uStack_170 = uStack_90;
    uStack_148 = uStack_68;
    uStack_144 = uStack_64;
    local_140 = local_60;
    uStack_13c = uStack_5c;
    uStack_138 = uStack_58;
    uStack_134 = uStack_54;
    local_130 = local_50;
    FUN_146be971a(local_118,local_d8);
    local_11c = 0;
    FUN_146bfd1f0(&local_178);
    local_1c8 = 0xffffffffffffffff;
    local_1b8[0] = 0;
    local_1a8 = (longlong *)0x0;
    local_1f8 = local_50;
    local_218 = (code *)CONCAT44(uStack_6c,local_70);
    uStack_210 = CONCAT44(uStack_64,uStack_68);
    uStack_200 = CONCAT44(uStack_54,uStack_58);
    local_1f0 = local_70;
    uStack_1ec = uStack_6c;
    uStack_1e8 = uStack_68;
    uStack_1e4 = uStack_64;
    local_1e0 = local_60;
    uStack_1dc = uStack_5c;
    uStack_1d8 = uStack_58;
    uStack_1d4 = uStack_54;
    local_1d0 = local_50;
    FUN_146be971a(local_1b8,local_d8);
    local_1bc = 0;
LAB_146c21005:
    FUN_146bfd1f0();
    if (local_178 == local_218) {
      if ((int)uStack_170 == (int)uStack_210) {
        if ((int)uStack_160 == (int)uStack_200) {
          if (uStack_160._4_4_ == uStack_200._4_4_) goto LAB_146c210e7;
        }
      }
    }
    uVar5 = local_120 * 3;
    lVar7 = param_1[0xf];
    uVar3 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
    if (-1 < (int)uVar3) {
      local_224[0] = uVar3;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar7 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                      (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar7 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                      (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
      lVar7 = 0;
      do {
        uVar3 = local_224[lVar7];
        if (uVar3 != 0xffffffff) {
          lVar4 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar3 >> 9) * 8);
          if (*(int *)(lVar4 + (ulonglong)(uVar3 & 0x1ff) * 4) == iVar1) {
            *(undefined4 *)(lVar4 + (ulonglong)(uVar3 & 0x1ff) * 4) = uVar2;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
    }
    goto LAB_146c21005;
  }
  goto LAB_146c20e7a;
LAB_146c210e7:
  if (local_1b8[0] != 0) {
    plVar8 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar8 = local_238;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar8 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar8 = local_230;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_d8[0] != 0) {
    plVar8 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar8 = local_b8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_146c20e7a:
  lVar7 = 1;
  bVar6 = !bVar9;
  bVar9 = false;
  if (bVar6) {
    if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146c20e6f;
}



// FUNCTION 146c2118a FUN_146c2118a body=881 status=ok
// SIG undefined FUN_146c2118a(void)

void FUN_146c2118a(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_258 [32];
  longlong *local_238;
  longlong *local_230;
  uint local_224 [3];
  code *local_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_238 = local_198;
  local_230 = local_f8;
  lVar7 = 0;
  bVar9 = true;
LAB_146c211e1:
  iVar1 = *(int *)(param_2 + 0x10 + lVar7 * 4);
  if (iVar1 != -1) {
    uVar2 = *(undefined4 *)(param_2 + 8 + lVar7 * 4);
    local_150 = *param_1;
    local_168 = 0;
    local_158 = &PTR_LAB_149f3aae0;
    local_178 = FUN_146be9588;
    local_218 = (code *)(local_150 + 0xb8);
    uStack_210 = CONCAT44(uStack_210._4_4_,uVar2);
    uStack_148 = uVar2;
    FUN_146be94ac(local_d8,&local_218,&local_178);
    local_128 = 0xffffffffffffffff;
    local_118[0] = 0;
    local_108 = (longlong *)0x0;
    local_158 = (undefined **)local_78;
    local_168 = local_88;
    uStack_160 = uStack_80;
    local_178 = local_98;
    uStack_170 = uStack_90;
    uStack_148 = uStack_68;
    uStack_144 = uStack_64;
    local_140 = local_60;
    uStack_13c = uStack_5c;
    uStack_138 = uStack_58;
    uStack_134 = uStack_54;
    local_130 = local_50;
    FUN_146be971a(local_118,local_d8);
    local_11c = 0;
    FUN_146bfd1f0(&local_178);
    local_1c8 = 0xffffffffffffffff;
    local_1b8[0] = 0;
    local_1a8 = (longlong *)0x0;
    local_1f8 = local_50;
    local_218 = (code *)CONCAT44(uStack_6c,local_70);
    uStack_210 = CONCAT44(uStack_64,uStack_68);
    uStack_200 = CONCAT44(uStack_54,uStack_58);
    local_1f0 = local_70;
    uStack_1ec = uStack_6c;
    uStack_1e8 = uStack_68;
    uStack_1e4 = uStack_64;
    local_1e0 = local_60;
    uStack_1dc = uStack_5c;
    uStack_1d8 = uStack_58;
    uStack_1d4 = uStack_54;
    local_1d0 = local_50;
    FUN_146be971a(local_1b8,local_d8);
    local_1bc = 0;
LAB_146c21377:
    FUN_146bfd1f0();
    if (local_178 == local_218) {
      if ((int)uStack_170 == (int)uStack_210) {
        if ((int)uStack_160 == (int)uStack_200) {
          if (uStack_160._4_4_ == uStack_200._4_4_) goto LAB_146c21459;
        }
      }
    }
    uVar5 = local_120 * 3;
    lVar7 = param_1[0xf];
    uVar3 = *(uint *)(*(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8) +
                     (ulonglong)(uVar5 & 0x1ff) * 4);
    if (-1 < (int)uVar3) {
      local_224[0] = uVar3;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar7 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                      (ulonglong)(uVar5 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar7 + (ulonglong)(uVar5 + 2 >> 9) * 8) +
                      (ulonglong)(uVar5 + 2 & 0x1ff) * 4);
      lVar7 = 0;
      do {
        uVar3 = local_224[lVar7];
        if (uVar3 != 0xffffffff) {
          lVar4 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar3 >> 9) * 8);
          if (*(int *)(lVar4 + (ulonglong)(uVar3 & 0x1ff) * 4) == iVar1) {
            *(undefined4 *)(lVar4 + (ulonglong)(uVar3 & 0x1ff) * 4) = uVar2;
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
    }
    goto LAB_146c21377;
  }
  goto LAB_146c211ec;
LAB_146c21459:
  if (local_1b8[0] != 0) {
    plVar8 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar8 = local_238;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar8 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar8 = local_230;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_d8[0] != 0) {
    plVar8 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar8 = local_b8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_146c211ec:
  lVar7 = 1;
  bVar6 = !bVar9;
  bVar9 = false;
  if (bVar6) {
    if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146c211e1;
}



// FUNCTION 146c214fc FUN_146c214fc body=249 status=ok
// SIG undefined FUN_146c214fc(void)

void FUN_146c214fc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_146c215f6();
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c21670(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c2194a(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c21c24(*(longlong *)(param_1 + 0x40),param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xa8))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c215f6 FUN_146c215f6 body=121 status=ok
// SIG undefined FUN_146c215f6(void)

void FUN_146c215f6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x48) == '\x01') {
    param_2 = param_2 + 0x10;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x48);
  }
  else {
    if (*(char *)(param_2 + 0xc0) != '\x01') {
      lVar2 = param_1[2];
      if ((longlong)(int)lVar2 != 0) {
        lVar1 = param_1[1];
        lVar3 = 0;
        do {
          (**(code **)(**(longlong **)(lVar1 + lVar3) + 0xa8))
                    (*(longlong **)(lVar1 + lVar3),param_2);
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)lVar2 * 8 != lVar3);
      }
      return;
    }
    param_2 = param_2 + 0x50;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x000146c2161f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



// FUNCTION 146c21670 FUN_146c21670 body=729 status=ok
// SIG undefined FUN_146c21670(void)

void FUN_146c21670(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_248 [36];
  uint local_224 [3];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_150 = *param_1;
  iStack_210 = *param_2;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _uStack_148 = CONCAT44(uStack_144,iStack_210);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar3 = local_120 * 3;
    lVar4 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                     (ulonglong)(uVar3 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_224[0] = uVar1;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                      (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                      (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
      lVar4 = 0;
      do {
        uVar1 = local_224[lVar4];
        if (uVar1 != 0xffffffff) {
          lVar2 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar1 >> 9) * 8);
          if (*(int *)(lVar2 + (ulonglong)(uVar1 & 0x1ff) * 4) == param_2[1]) {
            *(undefined4 *)(lVar2 + (ulonglong)(uVar1 & 0x1ff) * 4) = *param_2;
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar5 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar5 = local_198;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar5 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar5 = local_f8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2194a FUN_146c2194a body=729 status=ok
// SIG undefined FUN_146c2194a(void)

void FUN_146c2194a(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_248 [36];
  uint local_224 [3];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_150 = *param_1;
  iStack_210 = *param_2;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _uStack_148 = CONCAT44(uStack_144,iStack_210);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar3 = local_120 * 3;
    lVar4 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                     (ulonglong)(uVar3 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_224[0] = uVar1;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                      (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                      (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
      lVar4 = 0;
      do {
        uVar1 = local_224[lVar4];
        if (uVar1 != 0xffffffff) {
          lVar2 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar1 >> 9) * 8);
          if (*(int *)(lVar2 + (ulonglong)(uVar1 & 0x1ff) * 4) == param_2[1]) {
            *(undefined4 *)(lVar2 + (ulonglong)(uVar1 & 0x1ff) * 4) = *param_2;
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar5 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar5 = local_198;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar5 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar5 = local_f8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c21c24 FUN_146c21c24 body=729 status=ok
// SIG undefined FUN_146c21c24(void)

void FUN_146c21c24(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_248 [36];
  uint local_224 [3];
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_150 = *param_1;
  iStack_210 = *param_2;
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _uStack_148 = CONCAT44(uStack_144,iStack_210);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar3 = local_120 * 3;
    lVar4 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                     (ulonglong)(uVar3 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_224[0] = uVar1;
      local_224[1] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                      (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
      local_224[2] = *(undefined4 *)
                      (*(longlong *)(lVar4 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                      (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
      lVar4 = 0;
      do {
        uVar1 = local_224[lVar4];
        if (uVar1 != 0xffffffff) {
          lVar2 = *(longlong *)(param_1[0xc] + (ulonglong)(uVar1 >> 9) * 8);
          if (*(int *)(lVar2 + (ulonglong)(uVar1 & 0x1ff) * 4) == param_2[1]) {
            *(undefined4 *)(lVar2 + (ulonglong)(uVar1 & 0x1ff) * 4) = *param_2;
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 3);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar5 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar5 = local_198;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_118[0] != 0) {
    plVar5 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar5 = local_f8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c21efe FUN_146c21efe body=321 status=ok
// SIG undefined FUN_146c21efe(void)

void FUN_146c21efe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xb0))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      FUN_146c2208e(*(undefined8 *)(lVar2 + lVar4),param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      FUN_146c223cc(*(undefined8 *)(lVar2 + lVar4),param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_146c2270a(*(longlong *)(param_1 + 0x40),param_2,param_3);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0xb0))(plVar3,param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xb0))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xb0))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c22040 FUN_146c22040 body=77 status=ok
// SIG undefined FUN_146c22040(void)

void FUN_146c22040(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xb0))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146c2208e FUN_146c2208e body=829 status=ok
// SIG undefined FUN_146c2208e(void)

void FUN_146c2208e(longlong *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_268 [40];
  undefined8 local_240;
  uint local_234 [3];
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_268;
  local_228 = 0;
  uStack_220 = 0;
  local_150 = *param_1;
  iStack_210 = param_2[1];
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,iStack_210);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  local_240 = param_3;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar5 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_234[0] = uVar1;
      local_234[1] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_234[2] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar5 = 0;
      do {
        uVar1 = *(uint *)((longlong)local_234 + lVar5);
        if ((uVar1 != 0xffffffff) &&
           (*(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 4) == *param_2)) {
          FUN_1449e3bb0(&local_228,(longlong)local_234 + lVar5);
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar4 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar4 = local_198;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  uVar3 = local_240;
  if (local_118[0] != 0) {
    plVar4 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar4 = local_f8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  lVar5 = local_228;
  lVar6 = (longlong)(int)uStack_220;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      FUN_146c2d67c(param_1,*(undefined4 *)(lVar5 + lVar7),param_2[1],uVar3);
      lVar7 = lVar7 + 4;
    } while (lVar6 * 4 != lVar7);
  }
  if (local_228 != 0) {
    FUN_1400020a8(local_228);
  }
  if ((local_48 ^ (ulonglong)local_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c223cc FUN_146c223cc body=829 status=ok
// SIG undefined FUN_146c223cc(void)

void FUN_146c223cc(longlong *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_268 [40];
  undefined8 local_240;
  uint local_234 [3];
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_268;
  local_228 = 0;
  uStack_220 = 0;
  local_150 = *param_1;
  iStack_210 = param_2[1];
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,iStack_210);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  local_240 = param_3;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar5 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_234[0] = uVar1;
      local_234[1] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_234[2] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar5 = 0;
      do {
        uVar1 = *(uint *)((longlong)local_234 + lVar5);
        if ((uVar1 != 0xffffffff) &&
           (*(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 4) == *param_2)) {
          FUN_1449e3bb0(&local_228,(longlong)local_234 + lVar5);
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar4 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar4 = local_198;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  uVar3 = local_240;
  if (local_118[0] != 0) {
    plVar4 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar4 = local_f8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  lVar5 = local_228;
  lVar6 = (longlong)(int)uStack_220;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      FUN_146c30872(param_1,*(undefined4 *)(lVar5 + lVar7),param_2[1],uVar3);
      lVar7 = lVar7 + 4;
    } while (lVar6 * 4 != lVar7);
  }
  if (local_228 != 0) {
    FUN_1400020a8(local_228);
  }
  if ((local_48 ^ (ulonglong)local_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c2270a FUN_146c2270a body=829 status=ok
// SIG undefined FUN_146c2270a(void)

void FUN_146c2270a(longlong *param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_268 [40];
  undefined8 local_240;
  uint local_234 [3];
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  longlong local_1b8 [2];
  longlong *local_1a8;
  longlong local_198 [4];
  code *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  int iStack_160;
  int iStack_15c;
  undefined **local_158;
  longlong local_150;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 local_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_b8 [4];
  code *local_98;
  undefined8 uStack_90;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_268;
  local_228 = 0;
  uStack_220 = 0;
  local_150 = *param_1;
  iStack_210 = param_2[1];
  local_168 = 0;
  local_158 = &PTR_LAB_149f3aae0;
  _iStack_148 = CONCAT44(uStack_144,iStack_210);
  local_178 = FUN_146be9588;
  local_218 = (code *)(local_150 + 0xb8);
  local_240 = param_3;
  FUN_146be94ac(local_d8,&local_218,&local_178);
  local_128 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_108 = (longlong *)0x0;
  local_178 = local_98;
  uStack_170 = uStack_90;
  iStack_160 = iStack_80;
  iStack_15c = iStack_7c;
  local_158 = (undefined **)local_78;
  local_140 = local_60;
  uStack_13c = uStack_5c;
  iStack_138 = iStack_58;
  iStack_134 = iStack_54;
  local_130 = local_50;
  FUN_146be971a(local_118,local_d8);
  local_11c = 0;
  FUN_146bfd1f0(&local_178);
  local_1c8 = 0xffffffffffffffff;
  local_1b8[0] = 0;
  local_1a8 = (longlong *)0x0;
  local_218 = (code *)CONCAT44(uStack_6c,local_70);
  iStack_210 = iStack_68;
  uStack_20c = uStack_64;
  local_208 = local_60;
  uStack_204 = uStack_5c;
  iStack_200 = iStack_58;
  iStack_1fc = iStack_54;
  local_1f8 = local_50;
  local_1f0 = local_70;
  uStack_1ec = uStack_6c;
  iStack_1e8 = iStack_68;
  uStack_1e4 = uStack_64;
  local_1e0 = local_60;
  uStack_1dc = uStack_5c;
  iStack_1d8 = iStack_58;
  iStack_1d4 = iStack_54;
  local_1d0 = local_50;
  FUN_146be971a(local_1b8,local_d8);
  local_1bc = 0;
  FUN_146bfd1f0(&local_218);
  while ((((local_178 != local_218 || ((int)uStack_170 != iStack_210)) || (iStack_160 != iStack_200)
          ) || (iStack_15c != iStack_1fc))) {
    uVar2 = local_120 * 3;
    lVar5 = param_1[0xf];
    uVar1 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    if (-1 < (int)uVar1) {
      local_234[0] = uVar1;
      local_234[1] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                      (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
      local_234[2] = *(undefined4 *)
                      (*(longlong *)(lVar5 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                      (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
      lVar5 = 0;
      do {
        uVar1 = *(uint *)((longlong)local_234 + lVar5);
        if ((uVar1 != 0xffffffff) &&
           (*(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 4) == *param_2)) {
          FUN_1449e3bb0(&local_228,(longlong)local_234 + lVar5);
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
    }
    FUN_146bfd1f0(&local_178);
  }
  if (local_1b8[0] != 0) {
    plVar4 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar4 = local_198;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  uVar3 = local_240;
  if (local_118[0] != 0) {
    plVar4 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar4 = local_f8;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (local_d8[0] != 0) {
    if (local_c8 == (longlong *)0x0) {
      local_c8 = local_b8;
    }
    (**(code **)(*local_c8 + 0x10))();
  }
  lVar5 = local_228;
  lVar6 = (longlong)(int)uStack_220;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      FUN_146c33d14(param_1,*(undefined4 *)(lVar5 + lVar7),param_2[1],uVar3);
      lVar7 = lVar7 + 4;
    } while (lVar6 * 4 != lVar7);
  }
  if (local_228 != 0) {
    FUN_1400020a8(local_228);
  }
  if ((local_48 ^ (ulonglong)local_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c22a48 FUN_146c22a48 body=1848 status=ok
// SIG undefined FUN_146c22a48(void)

undefined8 FUN_146c22a48(longlong *param_1,longlong *param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  short sVar16;
  short sVar17;
  ushort uVar18;
  ulonglong uVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[7] == (int)param_2[7]) {
    if ((param_3 != '\0') &&
       (((((int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24) != 0 ||
          ((int)param_2[4] * 0x200 + *(int *)((longlong)param_2 + 0x24) != 0)) ||
         (lVar4 = *param_1,
         *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144) != *(int *)(lVar4 + 0x170))) ||
        (lVar4 = *param_2,
        *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144) != *(int *)(lVar4 + 0x170))))) {
      local_68 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
      uVar10 = 0;
      if (local_68 != 0) {
        uVar10 = 0;
        if (0xfffd < (ushort)(**(short **)param_1[2] - 1U)) {
          uVar15 = 1;
          uVar21 = 1;
          if (1 < (int)local_68) {
            uVar15 = local_68;
          }
          do {
            uVar10 = uVar15;
            if (uVar15 == uVar21) break;
            uVar11 = uVar21 >> 9;
            uVar13 = uVar21 & 0x1ff;
            uVar10 = uVar21;
            uVar21 = uVar21 + 1;
          } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar11] +
                                               (ulonglong)uVar13 * 2) - 1U));
        }
      }
      uVar21 = (int)param_2[1] * 0x200 + *(int *)((longlong)param_2 + 0xc);
      uVar15 = 0;
      if ((uVar21 != 0) && (uVar15 = 0, 0xfffd < (ushort)(**(short **)param_2[2] - 1U))) {
        uVar11 = 1;
        uVar13 = 1;
        if (1 < (int)uVar21) {
          uVar11 = uVar21;
        }
        do {
          uVar15 = uVar11;
          if (uVar11 == uVar13) break;
          uVar24 = uVar13 >> 9;
          uVar25 = uVar13 & 0x1ff;
          uVar15 = uVar13;
          uVar13 = uVar13 + 1;
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_2[2])[uVar24] +
                                             (ulonglong)uVar25 * 2) - 1U));
      }
      FUN_141040b84(&local_60);
      uVar11 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
      uVar13 = local_60 * 0x200 + local_5c;
      FUN_1411b328a(&local_60,uVar11);
      for (; uVar13 < uVar11; uVar13 = uVar13 + 1) {
        *(undefined4 *)
         (*(longlong *)(local_58[0] + (ulonglong)(uVar13 >> 9) * 8) +
         (ulonglong)(uVar13 & 0x1ff) * 4) = 0xffffffff;
      }
      do {
        uVar11 = uVar15;
        if ((uVar10 == local_68) || (uVar11 == uVar21)) goto LAB_146c22e3d;
        uVar12 = 0;
        bVar26 = true;
        do {
          bVar20 = bVar26;
          fVar2 = *(float *)(*(longlong *)(param_1[9] + (ulonglong)(uVar10 >> 5 & 0x3fffff8)) +
                            (uVar12 | (uVar10 & 0xff) * 2) * 4);
          pfVar1 = (float *)(*(longlong *)(param_2[9] + (ulonglong)(uVar11 >> 5 & 0x3fffff8)) +
                            (uVar12 | (uVar11 & 0xff) * 2) * 4);
          if ((fVar2 != *pfVar1) || (NAN(fVar2) || NAN(*pfVar1))) goto LAB_146c2302b;
          uVar12 = 1;
          uVar23 = 0;
          bVar26 = false;
        } while (bVar20);
        uVar18 = *(ushort *)
                  (*(longlong *)(param_2[2] + (ulonglong)(uVar11 >> 9) * 8) +
                  (ulonglong)(uVar11 & 0x1ff) * 2);
        if (uVar18 == 0xffff) {
          uVar18 = uVar23;
        }
        if (*(ushort *)
             (*(longlong *)(param_1[2] + (ulonglong)(uVar10 >> 9) * 8) +
             (ulonglong)(uVar10 & 0x1ff) * 2) != uVar18) goto LAB_146c2302e;
        *(uint *)(*(longlong *)(local_58[0] + (ulonglong)(uVar10 >> 9) * 8) +
                 (ulonglong)(uVar10 & 0x1ff) * 4) = uVar11;
        uVar15 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)local_68) {
          uVar15 = local_68;
        }
        do {
          uVar13 = uVar15;
          if (uVar15 - 1 == uVar10) break;
          uVar10 = uVar10 + 1;
          uVar13 = uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_1[2] + (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        uVar24 = uVar11 + 1;
        if ((int)(uVar11 + 1) < (int)uVar21) {
          uVar24 = uVar21;
        }
        do {
          uVar15 = uVar24;
          uVar10 = uVar13;
          if (uVar24 - 1 == uVar11) break;
          uVar11 = uVar11 + 1;
          uVar15 = uVar11;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_2[2] + (ulonglong)(uVar11 >> 9) * 8) +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
      } while( true );
    }
    uVar10 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
    if ((((uVar10 != (int)param_2[1] * 0x200 + *(int *)((longlong)param_2 + 0xc)) ||
         ((int)param_1[8] * 0x200 + *(int *)((longlong)param_1 + 0x44) !=
          (int)param_2[8] * 0x200 + *(int *)((longlong)param_2 + 0x44))) ||
        ((int)param_1[0xb] * 0x200 + *(int *)((longlong)param_1 + 0x5c) !=
         (int)param_2[0xb] * 0x200 + *(int *)((longlong)param_2 + 0x5c))) ||
       (((int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74) !=
         (int)param_2[0xe] * 0x200 + *(int *)((longlong)param_2 + 0x74) ||
        (cVar7 = FUN_146c58037(param_1 + 8,param_2 + 8), cVar7 == '\0')))) goto LAB_146c22be5;
    if (uVar10 != 0) {
      uVar8 = 0;
      uVar15 = 0;
      do {
        uVar12 = (ulonglong)((uVar15 & 0x1ff) * 2);
        sVar3 = *(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar15 >> 9) * 8) + uVar12);
        sVar17 = 0;
        if (sVar3 != -1) {
          sVar17 = sVar3;
        }
        sVar3 = *(short *)(*(longlong *)(param_2[2] + (ulonglong)(uVar15 >> 9) * 8) + uVar12);
        sVar16 = 0;
        if (sVar3 != -1) {
          sVar16 = sVar3;
        }
        if (sVar17 != sVar16) goto LAB_146c22be7;
        uVar15 = uVar15 + 1;
      } while (uVar10 != uVar15);
    }
    cVar7 = FUN_146c580e1(param_1 + 0xb,param_2 + 0xb);
    if (cVar7 == '\0') goto LAB_146c22be5;
    cVar7 = FUN_146c580e1(param_1 + 0xe,param_2 + 0xe);
    goto joined_r0x000146c2304d;
  }
  goto LAB_146c22be5;
LAB_146c2302b:
  uVar23 = 0;
  goto LAB_146c2302e;
LAB_146c22e3d:
  uVar23 = 0;
  if ((uVar10 == local_68) && (uVar11 == uVar21)) {
    lVar4 = *param_1;
    lVar5 = *param_2;
    uVar23 = 0;
    if (*(int *)(lVar4 + 0x170) == *(int *)(lVar5 + 0x170)) {
      uVar10 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
      uVar12 = 0;
      if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
        uVar9 = 1;
        uVar19 = 1;
        if (1 < (int)uVar10) {
          uVar9 = (ulonglong)uVar10;
        }
        do {
          uVar15 = (uint)uVar19;
          uVar12 = uVar9;
          if ((uint)uVar9 == uVar15) break;
          uVar6 = uVar19 >> 9;
          uVar12 = uVar19;
          uVar19 = (ulonglong)(uVar15 + 1);
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar6] +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
      }
      uVar21 = *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144);
      uVar15 = 0;
      if ((uVar21 != 0) &&
         (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar5 + 0x148) - 1U))) {
        uVar11 = 1;
        uVar13 = 1;
        if (1 < (int)uVar21) {
          uVar11 = uVar21;
        }
        do {
          uVar15 = uVar11;
          if (uVar11 == uVar13) break;
          uVar24 = uVar13 >> 9;
          uVar25 = uVar13 & 0x1ff;
          uVar15 = uVar13;
          uVar13 = uVar13 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar5 + 0x148))[uVar24] +
                                             (ulonglong)uVar25 * 2) - 1U));
      }
      bVar26 = (uint)uVar12 != uVar10;
      if ((bVar26) && (uVar15 != uVar21)) {
        do {
          iVar22 = 0;
          do {
            uVar11 = (int)uVar12 * 3 + iVar22;
            uVar11 = *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                              (ulonglong)(uVar11 & 0x1ff) * 4);
            if (uVar11 == 0xffffffff) {
              iVar14 = -1;
            }
            else {
              iVar14 = *(int *)(*(longlong *)(local_58[0] + (ulonglong)(uVar11 >> 9) * 8) +
                               (ulonglong)(uVar11 & 0x1ff) * 4);
            }
            uVar11 = uVar15 * 3 + iVar22;
            local_68 = uVar10;
            local_64 = uVar21;
            if (*(int *)(*(longlong *)(param_2[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4) != iVar14) goto LAB_146c2302b;
            iVar22 = iVar22 + 1;
          } while (iVar22 != 3);
          uVar11 = (int)uVar12 + 1;
          if ((int)uVar11 < (int)uVar10) {
            uVar11 = uVar10;
          }
          do {
            iVar22 = (int)uVar12;
            uVar12 = (ulonglong)uVar11;
            if (uVar11 - 1 == iVar22) break;
            uVar13 = iVar22 + 1;
            uVar12 = (ulonglong)uVar13;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar4 + 0x148) +
                                                 (ulonglong)(uVar13 >> 9) * 8) +
                                               (ulonglong)(uVar13 & 0x1ff) * 2) - 1U));
          uVar11 = uVar15 + 1;
          if ((int)(uVar15 + 1) < (int)uVar21) {
            uVar11 = uVar21;
          }
          do {
            uVar13 = uVar11;
            if (uVar11 - 1 == uVar15) break;
            uVar15 = uVar15 + 1;
            uVar13 = uVar15;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar5 + 0x148) +
                                                 (ulonglong)(uVar15 >> 9) * 8) +
                                               (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
          uVar15 = uVar13;
          bVar26 = (uint)uVar12 != uVar10;
        } while ((bVar26) && (uVar15 != uVar21));
      }
      uVar23 = (ushort)((bVar26 ^ 1U) & uVar15 == uVar21);
    }
  }
LAB_146c2302e:
  FUN_141082b5c(local_58,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  cVar7 = (char)uVar23;
joined_r0x000146c2304d:
  if (cVar7 == '\0') {
LAB_146c22be5:
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
LAB_146c22be7:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c23182 FUN_146c23182 body=1819 status=ok
// SIG undefined FUN_146c23182(void)

undefined8 FUN_146c23182(longlong *param_1,longlong *param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[7] == (int)param_2[7]) {
    if ((param_3 != '\0') &&
       (((((int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24) != 0 ||
          ((int)param_2[4] * 0x200 + *(int *)((longlong)param_2 + 0x24) != 0)) ||
         (lVar3 = *param_1,
         *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144) != *(int *)(lVar3 + 0x170))) ||
        (lVar3 = *param_2,
        *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144) != *(int *)(lVar3 + 0x170))))) {
      local_68 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
      uVar10 = 0;
      if (local_68 != 0) {
        uVar10 = 0;
        if (0xfffd < (ushort)(**(short **)param_1[2] - 1U)) {
          uVar14 = 1;
          uVar20 = 1;
          if (1 < (int)local_68) {
            uVar14 = local_68;
          }
          do {
            uVar10 = uVar14;
            if (uVar14 == uVar20) break;
            uVar11 = uVar20 >> 9;
            uVar12 = uVar20 & 0x1ff;
            uVar10 = uVar20;
            uVar20 = uVar20 + 1;
          } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar11] +
                                               (ulonglong)uVar12 * 2) - 1U));
        }
      }
      uVar20 = (int)param_2[1] * 0x200 + *(int *)((longlong)param_2 + 0xc);
      uVar14 = 0;
      if ((uVar20 != 0) && (uVar14 = 0, 0xfffd < (ushort)(**(short **)param_2[2] - 1U))) {
        uVar11 = 1;
        uVar12 = 1;
        if (1 < (int)uVar20) {
          uVar11 = uVar20;
        }
        do {
          uVar14 = uVar11;
          if (uVar11 == uVar12) break;
          uVar21 = uVar12 >> 9;
          uVar22 = uVar12 & 0x1ff;
          uVar14 = uVar12;
          uVar12 = uVar12 + 1;
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_2[2])[uVar21] +
                                             (ulonglong)uVar22 * 2) - 1U));
      }
      FUN_141040b84(&local_60);
      uVar11 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
      uVar12 = local_60 * 0x200 + local_5c;
      FUN_1411b328a(&local_60,uVar11);
      for (; uVar12 < uVar11; uVar12 = uVar12 + 1) {
        *(undefined4 *)
         (*(longlong *)(local_58[0] + (ulonglong)(uVar12 >> 9) * 8) +
         (ulonglong)(uVar12 & 0x1ff) * 4) = 0xffffffff;
      }
      bVar24 = uVar14 != uVar20;
      bVar25 = uVar10 != local_68;
      if ((bVar25) && (uVar14 != uVar20)) {
        bVar23 = false;
        do {
          iVar18 = 0;
          do {
            uVar11 = uVar10 * 3 + iVar18;
            fVar2 = *(float *)(*(longlong *)(param_1[9] + (ulonglong)(uVar11 >> 9) * 8) +
                              (ulonglong)(uVar11 & 0x1ff) * 4);
            uVar11 = uVar14 * 3 + iVar18;
            pfVar1 = (float *)(*(longlong *)(param_2[9] + (ulonglong)(uVar11 >> 9) * 8) +
                              (ulonglong)(uVar11 & 0x1ff) * 4);
            if ((fVar2 != *pfVar1) || (NAN(fVar2) || NAN(*pfVar1))) goto LAB_146c23748;
            iVar18 = iVar18 + 1;
          } while (iVar18 != 3);
          sVar16 = *(short *)(*(longlong *)(param_2[2] + (ulonglong)(uVar14 >> 9) * 8) +
                             (ulonglong)(uVar14 & 0x1ff) * 2);
          if (sVar16 == -1) {
            sVar16 = 0;
          }
          if (*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar10 >> 9) * 8) +
                        (ulonglong)(uVar10 & 0x1ff) * 2) != sVar16) goto LAB_146c2374b;
          *(uint *)(*(longlong *)(local_58[0] + (ulonglong)(uVar10 >> 9) * 8) +
                   (ulonglong)(uVar10 & 0x1ff) * 4) = uVar14;
          uVar11 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)local_68) {
            uVar11 = local_68;
          }
          do {
            uVar12 = uVar11;
            if (uVar11 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar12 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (param_1[2] + (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar12;
          uVar11 = uVar14 + 1;
          if ((int)(uVar14 + 1) < (int)uVar20) {
            uVar11 = uVar20;
          }
          do {
            uVar12 = uVar11;
            if (uVar11 - 1 == uVar14) break;
            uVar14 = uVar14 + 1;
            uVar12 = uVar14;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (param_2[2] + (ulonglong)(uVar14 >> 9) * 8) +
                                               (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
          uVar14 = uVar12;
          bVar24 = uVar14 != uVar20;
          bVar25 = uVar10 != local_68;
        } while ((bVar25) && (uVar14 != uVar20));
      }
      bVar23 = false;
      if ((!bVar25) && (!bVar24)) {
        lVar3 = *param_1;
        lVar4 = *param_2;
        bVar23 = false;
        if (*(int *)(lVar3 + 0x170) == *(int *)(lVar4 + 0x170)) {
          uVar10 = *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144);
          uVar8 = 0;
          if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x148) - 1U)))
          {
            uVar9 = 1;
            uVar19 = 1;
            if (1 < (int)uVar10) {
              uVar9 = (ulonglong)uVar10;
            }
            do {
              uVar14 = (uint)uVar19;
              uVar8 = uVar9;
              if ((uint)uVar9 == uVar14) break;
              uVar5 = uVar19 >> 9;
              uVar8 = uVar19;
              uVar19 = (ulonglong)(uVar14 + 1);
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x148))[uVar5] +
                                                 (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
          }
          uVar20 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
          uVar14 = 0;
          if ((uVar20 != 0) &&
             (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
            uVar11 = 1;
            uVar12 = 1;
            if (1 < (int)uVar20) {
              uVar11 = uVar20;
            }
            do {
              uVar14 = uVar11;
              if (uVar11 == uVar12) break;
              uVar21 = uVar12 >> 9;
              uVar22 = uVar12 & 0x1ff;
              uVar14 = uVar12;
              uVar12 = uVar12 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar21] +
                                                 (ulonglong)uVar22 * 2) - 1U));
          }
          bVar25 = (uint)uVar8 != uVar10;
          if ((bVar25) && (uVar14 != uVar20)) {
            do {
              iVar18 = 0;
              do {
                uVar11 = (int)uVar8 * 3 + iVar18;
                uVar11 = *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                                  (ulonglong)(uVar11 & 0x1ff) * 4);
                if (uVar11 == 0xffffffff) {
                  iVar13 = -1;
                }
                else {
                  iVar13 = *(int *)(*(longlong *)(local_58[0] + (ulonglong)(uVar11 >> 9) * 8) +
                                   (ulonglong)(uVar11 & 0x1ff) * 4);
                }
                uVar11 = uVar14 * 3 + iVar18;
                local_68 = uVar10;
                local_64 = uVar20;
                if (*(int *)(*(longlong *)(param_2[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                            (ulonglong)(uVar11 & 0x1ff) * 4) != iVar13) goto LAB_146c23748;
                iVar18 = iVar18 + 1;
              } while (iVar18 != 3);
              uVar11 = (int)uVar8 + 1;
              if ((int)uVar11 < (int)uVar10) {
                uVar11 = uVar10;
              }
              do {
                iVar18 = (int)uVar8;
                uVar8 = (ulonglong)uVar11;
                if (uVar11 - 1 == iVar18) break;
                uVar12 = iVar18 + 1;
                uVar8 = (ulonglong)uVar12;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(lVar3 + 0x148) +
                                                     (ulonglong)(uVar12 >> 9) * 8) +
                                                   (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
              uVar11 = uVar14 + 1;
              if ((int)(uVar14 + 1) < (int)uVar20) {
                uVar11 = uVar20;
              }
              do {
                uVar12 = uVar11;
                if (uVar11 - 1 == uVar14) break;
                uVar14 = uVar14 + 1;
                uVar12 = uVar14;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(lVar4 + 0x148) +
                                                     (ulonglong)(uVar14 >> 9) * 8) +
                                                   (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
              uVar14 = uVar12;
              bVar25 = (uint)uVar8 != uVar10;
            } while ((bVar25) && (uVar14 != uVar20));
          }
          bVar23 = (bool)((bVar25 ^ 1U) & uVar14 == uVar20);
        }
      }
      goto LAB_146c2374b;
    }
    uVar10 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
    if ((((uVar10 == (int)param_2[1] * 0x200 + *(int *)((longlong)param_2 + 0xc)) &&
         ((int)param_1[8] * 0x200 + *(int *)((longlong)param_1 + 0x44) ==
          (int)param_2[8] * 0x200 + *(int *)((longlong)param_2 + 0x44))) &&
        ((int)param_1[0xb] * 0x200 + *(int *)((longlong)param_1 + 0x5c) ==
         (int)param_2[0xb] * 0x200 + *(int *)((longlong)param_2 + 0x5c))) &&
       (((int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74) ==
         (int)param_2[0xe] * 0x200 + *(int *)((longlong)param_2 + 0x74) &&
        (cVar6 = FUN_146c58037(param_1 + 8,param_2 + 8), cVar6 != '\0')))) {
      if (uVar10 != 0) {
        uVar7 = 0;
        uVar14 = 0;
        do {
          uVar8 = (ulonglong)((uVar14 & 0x1ff) * 2);
          sVar16 = *(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar14 >> 9) * 8) + uVar8);
          sVar17 = 0;
          if (sVar16 != -1) {
            sVar17 = sVar16;
          }
          sVar16 = *(short *)(*(longlong *)(param_2[2] + (ulonglong)(uVar14 >> 9) * 8) + uVar8);
          sVar15 = 0;
          if (sVar16 != -1) {
            sVar15 = sVar16;
          }
          if (sVar17 != sVar15) goto LAB_146c23321;
          uVar14 = uVar14 + 1;
        } while (uVar10 != uVar14);
      }
      cVar6 = FUN_146c580e1(param_1 + 0xb,param_2 + 0xb);
      if (cVar6 != '\0') {
        cVar6 = FUN_146c580e1(param_1 + 0xe,param_2 + 0xe);
        bVar23 = cVar6 != '\0';
        goto joined_r0x000146c2376a;
      }
    }
  }
  goto LAB_146c2331f;
LAB_146c23748:
  bVar23 = false;
LAB_146c2374b:
  FUN_141082b5c(local_58,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
joined_r0x000146c2376a:
  if (bVar23) {
    uVar7 = 1;
    goto LAB_146c23321;
  }
LAB_146c2331f:
  uVar7 = 0;
LAB_146c23321:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c2389e FUN_146c2389e body=628 status=ok
// SIG undefined FUN_146c2389e(void)

undefined8 FUN_146c2389e(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if (param_3 == '\0') {
    uVar8 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
    uVar3 = (ulonglong)uVar8;
    if (uVar8 != *(int *)(param_2 + 0x18) * 0x200 + *(int *)(param_2 + 0x1c)) {
      return 0;
    }
    if (0 < (int)uVar8) {
      uVar7 = 0;
      do {
        uVar10 = (ulonglong)((uVar7 & 0x1ff) << 2);
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
                    uVar10) !=
            *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
                    uVar10)) {
          return 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar7 = *(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144);
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar1 + 0x148) - 1U)) {
        uVar6 = 1;
        uVar9 = 1;
        if (1 < (int)uVar7) {
          uVar6 = uVar7;
        }
        do {
          uVar8 = uVar6;
          if (uVar6 == uVar9) break;
          uVar5 = uVar9 >> 9;
          uVar4 = uVar9 & 0x1ff;
          uVar8 = uVar9;
          uVar9 = uVar9 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar1 + 0x148))[uVar5] +
                                             (ulonglong)uVar4 * 2) - 1U));
      }
    }
    lVar2 = *(longlong *)(param_2 + 0x10);
    uVar9 = *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144);
    uVar6 = 0;
    if ((uVar9 != 0) &&
       (uVar6 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x148) - 1U))) {
      uVar4 = 1;
      uVar5 = 1;
      if (1 < (int)uVar9) {
        uVar4 = uVar9;
      }
      do {
        uVar6 = uVar4;
        if (uVar4 == uVar5) break;
        uVar11 = uVar5 >> 9;
        uVar12 = uVar5 & 0x1ff;
        uVar6 = uVar5;
        uVar5 = uVar5 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x148))[uVar11] +
                                           (ulonglong)uVar12 * 2) - 1U));
    }
    bVar13 = uVar8 != uVar7;
    if ((bVar13) && (uVar6 != uVar9)) {
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar8 >> 9) * 8) +
                    (ulonglong)(uVar8 & 0x1ff) * 4) !=
            *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
                    (ulonglong)(uVar6 & 0x1ff) * 4)) {
          return 0;
        }
        uVar4 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar7) {
          uVar4 = uVar7;
        }
        do {
          uVar5 = uVar4;
          if (uVar4 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar5 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar1 + 0x148) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        uVar8 = uVar5;
        uVar4 = uVar6 + 1;
        if ((int)(uVar6 + 1) < (int)uVar9) {
          uVar4 = uVar9;
        }
        do {
          uVar5 = uVar4;
          if (uVar4 - 1 == uVar6) break;
          uVar6 = uVar6 + 1;
          uVar5 = uVar6;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar2 + 0x148) +
                                               (ulonglong)(uVar6 >> 9) * 8) +
                                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
        uVar6 = uVar5;
        bVar13 = uVar8 != uVar7;
      } while ((bVar13) && (uVar6 != uVar9));
    }
    uVar3 = 0;
    if (uVar6 != uVar9) {
      return 0;
    }
    if (bVar13) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 146c23b12 FUN_146c23b12 body=617 status=ok
// SIG undefined FUN_146c23b12(void)

undefined8 FUN_146c23b12(longlong param_1,longlong param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  if (param_3 == '\0') {
    uVar10 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
    uVar5 = (ulonglong)uVar10;
    if (uVar10 != *(int *)(param_2 + 0x18) * 0x200 + *(int *)(param_2 + 0x1c)) {
      return 0;
    }
    if (0 < (int)uVar10) {
      uVar9 = 0;
      do {
        uVar12 = (ulonglong)((uVar9 & 0x1ff) << 2);
        fVar2 = *(float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar9 >> 9) * 8) + uVar12);
        pfVar1 = (float *)(*(longlong *)
                            (*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar9 >> 9) * 8) + uVar12);
        if (fVar2 != *pfVar1) {
          return 0;
        }
        if (NAN(fVar2) || NAN(*pfVar1)) {
          return 0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar9 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = 0;
      if (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar3 + 0x28) - 1U)) {
        uVar8 = 1;
        uVar11 = 1;
        if (1 < (int)uVar9) {
          uVar8 = uVar9;
        }
        do {
          uVar10 = uVar8;
          if (uVar8 == uVar11) break;
          uVar7 = uVar11 >> 9;
          uVar6 = uVar11 & 0x1ff;
          uVar10 = uVar11;
          uVar11 = uVar11 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar3 + 0x28))[uVar7] +
                                             (ulonglong)uVar6 * 2) - 1U));
      }
    }
    lVar4 = *(longlong *)(param_2 + 0x10);
    uVar11 = *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24);
    uVar8 = 0;
    if ((uVar11 != 0) &&
       (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x28) - 1U))) {
      uVar6 = 1;
      uVar7 = 1;
      if (1 < (int)uVar11) {
        uVar6 = uVar11;
      }
      do {
        uVar8 = uVar6;
        if (uVar6 == uVar7) break;
        uVar13 = uVar7 >> 9;
        uVar14 = uVar7 & 0x1ff;
        uVar8 = uVar7;
        uVar7 = uVar7 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x28))[uVar13] +
                                           (ulonglong)uVar14 * 2) - 1U));
    }
    bVar15 = uVar10 != uVar9;
    if ((bVar15) && (uVar8 != uVar11)) {
      do {
        fVar2 = *(float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar10 >> 9) * 8) +
                          (ulonglong)(uVar10 & 0x1ff) * 4);
        pfVar1 = (float *)(*(longlong *)
                            (*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar8 >> 9) * 8) +
                          (ulonglong)(uVar8 & 0x1ff) * 4);
        if (fVar2 != *pfVar1) {
          return 0;
        }
        if (NAN(fVar2) || NAN(*pfVar1)) {
          return 0;
        }
        uVar6 = uVar10 + 1;
        if ((int)(uVar10 + 1) < (int)uVar9) {
          uVar6 = uVar9;
        }
        do {
          uVar7 = uVar6;
          if (uVar6 - 1 == uVar10) break;
          uVar10 = uVar10 + 1;
          uVar7 = uVar10;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar3 + 0x28) +
                                               (ulonglong)(uVar10 >> 9) * 8) +
                                             (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
        uVar10 = uVar7;
        uVar6 = uVar8 + 1;
        if ((int)(uVar8 + 1) < (int)uVar11) {
          uVar6 = uVar11;
        }
        do {
          uVar7 = uVar6;
          if (uVar6 - 1 == uVar8) break;
          uVar8 = uVar8 + 1;
          uVar7 = uVar8;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar4 + 0x28) +
                                               (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
        uVar8 = uVar7;
        bVar15 = uVar10 != uVar9;
      } while ((bVar15) && (uVar8 != uVar11));
    }
    uVar5 = 0;
    if (uVar8 != uVar11) {
      return 0;
    }
    if (bVar15) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 146c23d7c FUN_146c23d7c body=1835 status=ok
// SIG undefined FUN_146c23d7c(void)

undefined8 FUN_146c23d7c(longlong *param_1,longlong *param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  longlong lVar16;
  short sVar17;
  ushort uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[7] == (int)param_2[7]) {
    if ((param_3 != '\0') &&
       (((((int)param_1[4] * 0x200 + *(int *)((longlong)param_1 + 0x24) != 0 ||
          ((int)param_2[4] * 0x200 + *(int *)((longlong)param_2 + 0x24) != 0)) ||
         (lVar16 = *param_1,
         *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144) != *(int *)(lVar16 + 0x170)))
        || (lVar16 = *param_2,
           *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144) != *(int *)(lVar16 + 0x170)))
       )) {
      local_68 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
      uVar10 = 0;
      if (local_68 != 0) {
        uVar10 = 0;
        if (0xfffd < (ushort)(**(short **)param_1[2] - 1U)) {
          uVar14 = 1;
          uVar20 = 1;
          if (1 < (int)local_68) {
            uVar14 = local_68;
          }
          do {
            uVar10 = uVar14;
            if (uVar14 == uVar20) break;
            uVar11 = uVar20 >> 9;
            uVar12 = uVar20 & 0x1ff;
            uVar10 = uVar20;
            uVar20 = uVar20 + 1;
          } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar11] +
                                               (ulonglong)uVar12 * 2) - 1U));
        }
      }
      uVar20 = (int)param_2[1] * 0x200 + *(int *)((longlong)param_2 + 0xc);
      uVar14 = 0;
      if ((uVar20 != 0) && (uVar14 = 0, 0xfffd < (ushort)(**(short **)param_2[2] - 1U))) {
        uVar11 = 1;
        uVar12 = 1;
        if (1 < (int)uVar20) {
          uVar11 = uVar20;
        }
        do {
          uVar14 = uVar11;
          if (uVar11 == uVar12) break;
          uVar23 = uVar12 >> 9;
          uVar24 = uVar12 & 0x1ff;
          uVar14 = uVar12;
          uVar12 = uVar12 + 1;
        } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_2[2])[uVar23] +
                                             (ulonglong)uVar24 * 2) - 1U));
      }
      FUN_141040b84(&local_60);
      uVar11 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
      uVar12 = local_60 * 0x200 + local_5c;
      FUN_1411b328a(&local_60,uVar11);
      for (; uVar12 < uVar11; uVar12 = uVar12 + 1) {
        *(undefined4 *)
         (*(longlong *)(local_58[0] + (ulonglong)(uVar12 >> 9) * 8) +
         (ulonglong)(uVar12 & 0x1ff) * 4) = 0xffffffff;
      }
      bVar25 = uVar14 != uVar20;
      bVar26 = uVar10 != local_68;
      if ((bVar26) && (uVar14 != uVar20)) {
        uVar22 = 0;
        do {
          lVar16 = 0;
          do {
            fVar2 = *(float *)((ulonglong)((uVar10 & 0x7f) << 4) +
                               *(longlong *)(param_1[9] + (ulonglong)(uVar10 >> 4 & 0x3fffff8)) +
                              lVar16 * 4);
            pfVar1 = (float *)((ulonglong)((uVar14 & 0x7f) << 4) +
                               *(longlong *)(param_2[9] + (ulonglong)(uVar14 >> 4 & 0x3fffff8)) +
                              lVar16 * 4);
            if ((fVar2 != *pfVar1) || (NAN(fVar2) || NAN(*pfVar1))) goto LAB_146c24352;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 4);
          uVar18 = *(ushort *)
                    (*(longlong *)(param_2[2] + (ulonglong)(uVar14 >> 9) * 8) +
                    (ulonglong)(uVar14 & 0x1ff) * 2);
          if (uVar18 == 0xffff) {
            uVar18 = uVar22;
          }
          if (*(ushort *)
               (*(longlong *)(param_1[2] + (ulonglong)(uVar10 >> 9) * 8) +
               (ulonglong)(uVar10 & 0x1ff) * 2) != uVar18) goto LAB_146c24355;
          *(uint *)(*(longlong *)(local_58[0] + (ulonglong)(uVar10 >> 9) * 8) +
                   (ulonglong)(uVar10 & 0x1ff) * 4) = uVar14;
          uVar11 = uVar10 + 1;
          if ((int)(uVar10 + 1) < (int)local_68) {
            uVar11 = local_68;
          }
          do {
            uVar12 = uVar11;
            if (uVar11 - 1 == uVar10) break;
            uVar10 = uVar10 + 1;
            uVar12 = uVar10;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (param_1[2] + (ulonglong)(uVar10 >> 9) * 8) +
                                               (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
          uVar10 = uVar12;
          uVar11 = uVar14 + 1;
          if ((int)(uVar14 + 1) < (int)uVar20) {
            uVar11 = uVar20;
          }
          do {
            uVar12 = uVar11;
            if (uVar11 - 1 == uVar14) break;
            uVar14 = uVar14 + 1;
            uVar12 = uVar14;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (param_2[2] + (ulonglong)(uVar14 >> 9) * 8) +
                                               (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
          uVar14 = uVar12;
          bVar25 = uVar14 != uVar20;
          bVar26 = uVar10 != local_68;
        } while ((bVar26) && (uVar14 != uVar20));
      }
      uVar22 = 0;
      if ((!bVar26) && (!bVar25)) {
        lVar16 = *param_1;
        lVar4 = *param_2;
        uVar22 = 0;
        if (*(int *)(lVar16 + 0x170) == *(int *)(lVar4 + 0x170)) {
          uVar10 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
          uVar8 = 0;
          if ((uVar10 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U))
             ) {
            uVar9 = 1;
            uVar19 = 1;
            if (1 < (int)uVar10) {
              uVar9 = (ulonglong)uVar10;
            }
            do {
              uVar14 = (uint)uVar19;
              uVar8 = uVar9;
              if ((uint)uVar9 == uVar14) break;
              uVar5 = uVar19 >> 9;
              uVar8 = uVar19;
              uVar19 = (ulonglong)(uVar14 + 1);
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar5] +
                                                 (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
          }
          uVar20 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
          uVar14 = 0;
          if ((uVar20 != 0) &&
             (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
            uVar11 = 1;
            uVar12 = 1;
            if (1 < (int)uVar20) {
              uVar11 = uVar20;
            }
            do {
              uVar14 = uVar11;
              if (uVar11 == uVar12) break;
              uVar23 = uVar12 >> 9;
              uVar24 = uVar12 & 0x1ff;
              uVar14 = uVar12;
              uVar12 = uVar12 + 1;
            } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar23] +
                                                 (ulonglong)uVar24 * 2) - 1U));
          }
          bVar25 = (uint)uVar8 != uVar10;
          if ((bVar25) && (uVar14 != uVar20)) {
            do {
              iVar21 = 0;
              do {
                uVar11 = (int)uVar8 * 3 + iVar21;
                uVar11 = *(uint *)(*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                                  (ulonglong)(uVar11 & 0x1ff) * 4);
                if (uVar11 == 0xffffffff) {
                  iVar13 = -1;
                }
                else {
                  iVar13 = *(int *)(*(longlong *)(local_58[0] + (ulonglong)(uVar11 >> 9) * 8) +
                                   (ulonglong)(uVar11 & 0x1ff) * 4);
                }
                uVar11 = uVar14 * 3 + iVar21;
                local_68 = uVar10;
                local_64 = uVar20;
                if (*(int *)(*(longlong *)(param_2[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
                            (ulonglong)(uVar11 & 0x1ff) * 4) != iVar13) goto LAB_146c24352;
                iVar21 = iVar21 + 1;
              } while (iVar21 != 3);
              uVar11 = (int)uVar8 + 1;
              if ((int)uVar11 < (int)uVar10) {
                uVar11 = uVar10;
              }
              do {
                iVar21 = (int)uVar8;
                uVar8 = (ulonglong)uVar11;
                if (uVar11 - 1 == iVar21) break;
                uVar12 = iVar21 + 1;
                uVar8 = (ulonglong)uVar12;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(lVar16 + 0x148) +
                                                     (ulonglong)(uVar12 >> 9) * 8) +
                                                   (ulonglong)(uVar12 & 0x1ff) * 2) - 1U));
              uVar11 = uVar14 + 1;
              if ((int)(uVar14 + 1) < (int)uVar20) {
                uVar11 = uVar20;
              }
              do {
                uVar12 = uVar11;
                if (uVar11 - 1 == uVar14) break;
                uVar14 = uVar14 + 1;
                uVar12 = uVar14;
              } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                     (*(longlong *)(lVar4 + 0x148) +
                                                     (ulonglong)(uVar14 >> 9) * 8) +
                                                   (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
              uVar14 = uVar12;
              bVar25 = (uint)uVar8 != uVar10;
            } while ((bVar25) && (uVar14 != uVar20));
          }
          uVar22 = (ushort)((bVar25 ^ 1U) & uVar14 == uVar20);
        }
      }
      goto LAB_146c24355;
    }
    uVar10 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
    if ((((uVar10 == (int)param_2[1] * 0x200 + *(int *)((longlong)param_2 + 0xc)) &&
         ((int)param_1[8] * 0x200 + *(int *)((longlong)param_1 + 0x44) ==
          (int)param_2[8] * 0x200 + *(int *)((longlong)param_2 + 0x44))) &&
        ((int)param_1[0xb] * 0x200 + *(int *)((longlong)param_1 + 0x5c) ==
         (int)param_2[0xb] * 0x200 + *(int *)((longlong)param_2 + 0x5c))) &&
       (((int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74) ==
         (int)param_2[0xe] * 0x200 + *(int *)((longlong)param_2 + 0x74) &&
        (cVar6 = FUN_146c58037(param_1 + 8,param_2 + 8), cVar6 != '\0')))) {
      if (uVar10 != 0) {
        uVar7 = 0;
        uVar14 = 0;
        do {
          uVar8 = (ulonglong)((uVar14 & 0x1ff) * 2);
          sVar3 = *(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar14 >> 9) * 8) + uVar8);
          sVar17 = 0;
          if (sVar3 != -1) {
            sVar17 = sVar3;
          }
          sVar3 = *(short *)(*(longlong *)(param_2[2] + (ulonglong)(uVar14 >> 9) * 8) + uVar8);
          sVar15 = 0;
          if (sVar3 != -1) {
            sVar15 = sVar3;
          }
          if (sVar17 != sVar15) goto LAB_146c23f1b;
          uVar14 = uVar14 + 1;
        } while (uVar10 != uVar14);
      }
      cVar6 = FUN_146c580e1(param_1 + 0xb,param_2 + 0xb);
      if (cVar6 != '\0') {
        cVar6 = FUN_146c580e1(param_1 + 0xe,param_2 + 0xe);
        goto joined_r0x000146c24374;
      }
    }
  }
  goto LAB_146c23f19;
LAB_146c24352:
  uVar22 = 0;
LAB_146c24355:
  FUN_141082b5c(local_58,0);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  cVar6 = (char)uVar22;
joined_r0x000146c24374:
  if (cVar6 != '\0') {
    uVar7 = 1;
    goto LAB_146c23f1b;
  }
LAB_146c23f19:
  uVar7 = 0;
LAB_146c23f1b:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c244a8 FUN_146c244a8 body=409 status=ok
// SIG undefined FUN_146c244a8(void)

longlong * FUN_146c244a8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = (int)param_2[1];
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if (0 < local_34) {
      lVar5 = 0;
      do {
        FUN_146c2ecf4(*(undefined8 *)(*param_2 + lVar5 * 8),param_1,0,0);
        lVar5 = lVar5 + 1;
      } while (lVar5 < local_34);
    }
  }
  else {
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_146c54342(param_2,local_34);
    if (0 < local_34) {
      iVar6 = 0;
      do {
        uVar4 = FUN_14001cc68(0x88,0x10);
        FUN_146c2d058(uVar4);
        FUN_146c2ecf4(uVar4,param_1,0,0);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1456bd870(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c24642 FUN_146c24642 body=409 status=ok
// SIG undefined FUN_146c24642(void)

longlong * FUN_146c24642(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = (int)param_2[1];
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if (0 < local_34) {
      lVar5 = 0;
      do {
        FUN_146c321f0(*(undefined8 *)(*param_2 + lVar5 * 8),param_1,0,0);
        lVar5 = lVar5 + 1;
      } while (lVar5 < local_34);
    }
  }
  else {
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_146c54382(param_2,local_34);
    if (0 < local_34) {
      iVar6 = 0;
      do {
        uVar4 = FUN_14001cc68(0x88,0x10);
        FUN_146c2f996(uVar4);
        FUN_146c321f0(uVar4,param_1,0,0);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1456bd870(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c247dc FUN_146c247dc body=456 status=ok
// SIG undefined FUN_146c247dc(void)

longlong * FUN_146c247dc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_4c = (int)param_2[1];
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
    if (0 < local_4c) {
      lVar5 = 0;
      do {
        FUN_146c2592a(*(undefined8 *)(*param_2 + lVar5 * 8),param_1,0,0);
        lVar5 = lVar5 + 1;
      } while (lVar5 < local_4c);
    }
  }
  else {
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
    FUN_1457ed4c4(param_2,local_4c);
    if (0 < local_4c) {
      iVar6 = 0;
      do {
        puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        puVar4[1] = 0;
        *puVar4 = &PTR_FUN_149f3bf50;
        FUN_141040b84(puVar4 + 3);
        puVar4[2] = 0;
        *puVar4 = &PTR_FUN_149f3be80;
        FUN_146c2592a(puVar4,param_1,0,0);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1456bd870(param_2,iVar2);
        }
        *(undefined8 **)(*param_2 + (longlong)iVar2 * 8) = puVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_4c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c249a5 FUN_146c249a5 body=303 status=ok
// SIG undefined FUN_146c249a5(void)

void FUN_146c249a5(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = (int)param_1[1];
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_44);
    }
  }
  else {
    local_44 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_146c54342(param_1);
    if (local_44 < 1) goto LAB_146c24a41;
    iVar5 = 0;
    do {
      uVar4 = FUN_14001cc68(0x88,0x10);
      FUN_146c2d058(uVar4);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_44);
  }
  if (0 < local_44) {
    lVar6 = 0;
    do {
      FUN_146c2ecf4(*(undefined8 *)(*param_1 + lVar6 * 8),param_2,param_3,param_4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_44);
  }
LAB_146c24a41:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c24ad5 FUN_146c24ad5 body=303 status=ok
// SIG undefined FUN_146c24ad5(void)

void FUN_146c24ad5(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = (int)param_1[1];
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_44);
    }
  }
  else {
    local_44 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_146c54382(param_1);
    if (local_44 < 1) goto LAB_146c24b71;
    iVar5 = 0;
    do {
      uVar4 = FUN_14001cc68(0x88,0x10);
      FUN_146c2f996(uVar4);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_44);
  }
  if (0 < local_44) {
    lVar6 = 0;
    do {
      FUN_146c321f0(*(undefined8 *)(*param_1 + lVar6 * 8),param_2,param_3,param_4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_44);
  }
LAB_146c24b71:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c24c05 FUN_146c24c05 body=339 status=ok
// SIG undefined FUN_146c24c05(void)

void FUN_146c24c05(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = (int)param_1[1];
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1457ed4c4(param_1);
    if (local_4c < 1) goto LAB_146c24ca3;
    iVar5 = 0;
    do {
      puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar4[1] = 0;
      *puVar4 = &PTR_FUN_149f3bf50;
      FUN_141040b84(puVar4 + 3);
      puVar4[2] = 0;
      *puVar4 = &PTR_FUN_149f3be80;
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_4c);
  }
  if (0 < local_4c) {
    lVar6 = 0;
    do {
      FUN_146c2592a(*(undefined8 *)(*param_1 + lVar6 * 8),param_2,param_3,param_4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_4c);
  }
LAB_146c24ca3:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c24d59 FUN_146c24d59 body=339 status=ok
// SIG undefined FUN_146c24d59(void)

void FUN_146c24d59(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [36];
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_64 = (int)param_1[1];
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_64);
    }
  }
  else {
    local_64 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1457ed538(param_1);
    if (local_64 < 1) goto LAB_146c24e00;
    iVar5 = 0;
    do {
      puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_FUN_149f3c020;
      FUN_14582f01a(puVar4 + 3);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_64);
  }
  if (0 < local_64) {
    lVar6 = 0;
    do {
      FUN_146c563d0(*(undefined8 *)(*param_1 + lVar6 * 8),param_2,param_3,param_4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_64);
  }
LAB_146c24e00:
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c24eae FUN_146c24eae body=2653 status=ok
// SIG undefined FUN_146c24eae(void)

void FUN_146c24eae(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong unaff_RBX;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_f8 [39];
  char local_d1;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [8];
  longlong local_88 [2];
  undefined1 local_78 [24];
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d1 = param_4;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  bVar5 = *(byte *)(param_2 + 5);
  if ((bVar5 & 1) != 0) {
    iVar6 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar6 < 0x38) {
      FUN_146c15b76(param_1 + 1,param_2,0,0);
      FUN_146c5818c(param_1 + 8,param_2);
      FUN_146c45ad4(param_1 + 0xb,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
    bVar5 = *(byte *)(param_2 + 5);
  }
  cVar3 = local_d1;
  local_58 = 0;
  uStack_50 = 0xffffffff00000000;
  if (((param_3 == (longlong *)0x0) || ((bVar5 & 1) != 0)) || ((int)param_3[1] == 0)) {
    FUN_146c15b76(param_1 + 1,param_2,0,CONCAT71((int7)(unaff_RBX >> 8),local_d1) & 0xffffffff);
    if (cVar3 == '\0') {
      FUN_146c44560(param_1 + 8,param_2);
      FUN_146c41ff8(param_1 + 0xb,param_2);
    }
    else {
      FUN_146c4431c();
      FUN_146c44e9c(param_1 + 0xb,param_2);
    }
  }
  else {
    iVar6 = (int)param_1[7];
    local_d0 = param_2;
    local_c8 = param_3;
    FUN_141224904(local_90);
    FUN_141040b84(local_78);
    local_60 = 0;
    FUN_1411b3fe4(local_78);
    FUN_146c41884(local_90,iVar6);
    local_60 = iVar6;
    FUN_14582f01a(local_a8);
    FUN_146bfd442(local_a8,iVar6 * 4);
    FUN_141040b84(local_c0);
    FUN_1411b328a(local_c0,iVar6);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_1448156a8(&local_58,&DAT_149f3b198,
                  (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc));
    plVar4 = local_d0;
    cVar3 = local_d1;
    uVar7 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
    uVar16 = 0;
    if ((uVar7 != 0) && (uVar16 = 0, 0xfffd < (ushort)(**(short **)param_1[2] - 1U))) {
      uVar13 = 1;
      uVar8 = 1;
      if (1 < (int)uVar7) {
        uVar8 = uVar7;
      }
      do {
        uVar11 = (uint)uVar13;
        uVar16 = uVar8;
        if (uVar8 == uVar11) break;
        uVar21 = uVar13 >> 9;
        uVar13 = (ulonglong)(uVar11 + 1);
        uVar16 = uVar11;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar21] +
                                           (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
    }
    if (uVar16 != uVar7) {
      unaff_RBX = 0;
      do {
        uVar8 = (uint)unaff_RBX;
        *(undefined2 *)
         (*(longlong *)(local_88[0] + (unaff_RBX >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 2) =
             *(undefined2 *)
              (*(longlong *)(param_1[2] + (ulonglong)(uVar16 >> 9) * 8) +
              (ulonglong)(uVar16 & 0x1ff) * 2);
        lVar19 = 0;
        do {
          *(undefined4 *)
           (*(longlong *)(local_a0[0] + (ulonglong)((uint)(unaff_RBX >> 7) & 0x7fffff) * 8) +
            (ulonglong)((uVar8 & 0x7f) << 4) + lVar19 * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1[9] + (ulonglong)(uVar16 >> 7 & 0x7fffff) * 8) +
                 (ulonglong)((uVar16 & 0x7f) << 4) + lVar19 * 4);
          lVar19 = lVar19 + 1;
        } while (lVar19 != 4);
        lVar19 = (longlong)
                 *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar16 >> 9) * 8) +
                         (ulonglong)(uVar16 & 0x1ff) * 4);
        if (lVar19 < 0) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = *(undefined4 *)(*local_c8 + lVar19 * 4);
        }
        *(undefined4 *)
         (*(longlong *)(local_b8[0] + (unaff_RBX >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 4) =
             uVar9;
        *(uint *)(local_58 + (longlong)(int)uVar16 * 4) = uVar8;
        unaff_RBX = (ulonglong)(uVar8 + 1);
        uVar8 = uVar16 + 1;
        if ((int)(uVar16 + 1) < (int)uVar7) {
          uVar8 = uVar7;
        }
        do {
          uVar11 = uVar8;
          if (uVar8 - 1 == uVar16) break;
          uVar16 = uVar16 + 1;
          uVar11 = uVar16;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (param_1[2] + (ulonglong)(uVar16 >> 9) * 8) +
                                             (ulonglong)(uVar16 & 0x1ff) * 2) - 1U));
        uVar16 = uVar11;
      } while (uVar16 != uVar7);
    }
    FUN_146c15b76(local_90,local_d0,1,CONCAT71((int7)(unaff_RBX >> 8),local_d1) & 0xffffffff);
    if (cVar3 == '\0') {
      FUN_146c44560(local_a8,plVar4);
      FUN_146c41ff8(local_c0,plVar4);
    }
    else {
      FUN_146c4431c();
      FUN_146c44e9c(local_c0,plVar4);
    }
    param_3 = local_c8;
    FUN_141082b5c(local_b8,0);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1457ed392(local_a0,0);
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14117c64e(local_90);
    param_2 = local_d0;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) ||
     (((param_3 == (longlong *)0x0 || ((int)param_3[3] == 0)) && (iStack_4c == -1)))) {
    if (local_d1 == '\0') {
      FUN_146c41ff8(param_1 + 0xe,param_2);
    }
    else {
      FUN_146c44e9c(param_1 + 0xe,param_2);
    }
    goto LAB_146c25030;
  }
  local_d0 = param_2;
  FUN_141040b84(local_90);
  FUN_1411b328a(local_90);
  if (param_3 == (longlong *)0x0) {
LAB_146c250b1:
    lVar19 = *param_1;
    uVar7 = *(int *)(lVar19 + 0x140) * 0x200 + *(int *)(lVar19 + 0x144);
    uVar16 = 0;
    if ((uVar7 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar19 + 0x148) - 1U))) {
      uVar8 = 1;
      uVar11 = 1;
      if (1 < (int)uVar7) {
        uVar8 = uVar7;
      }
      do {
        uVar18 = uVar11;
        uVar16 = uVar8;
        if (uVar8 == uVar18) break;
        uVar11 = uVar18 + 1;
        uVar16 = uVar18;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar19 + 0x148))[uVar18 >> 9] +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c250e5:
    uVar8 = uVar16;
    if (uVar8 != uVar7) {
      uVar21 = (ulonglong)(uVar8 * 3 >> 9);
      lVar2 = param_1[0xf];
      uVar13 = (ulonglong)(uVar8 * 3 & 0x1ff);
      lVar12 = (longlong)*(int *)(*(longlong *)(lVar2 + uVar21 * 8) + uVar13 * 4);
      uVar15 = 0xffffffff;
      uVar9 = 0xffffffff;
      if (lVar12 != -1) {
        uVar9 = *(undefined4 *)(local_58 + lVar12 * 4);
      }
      uVar16 = uVar8 * 3 + 1;
      uVar10 = (ulonglong)(uVar16 >> 9);
      uVar17 = (ulonglong)(uVar16 & 0x1ff);
      uVar16 = uVar8 * 3 + 2;
      uVar20 = (ulonglong)(uVar16 >> 9);
      uVar14 = (ulonglong)(uVar16 & 0x1ff);
      iVar6 = *(int *)(*(longlong *)(lVar2 + uVar10 * 8) + uVar17 * 4);
      iVar1 = *(int *)(*(longlong *)(lVar2 + uVar20 * 8) + uVar14 * 4);
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar21 * 8) + uVar13 * 4) = uVar9;
      if (iVar6 != -1) {
        uVar15 = *(undefined4 *)(local_58 + (longlong)iVar6 * 4);
      }
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar10 * 8) + uVar17 * 4) = uVar15;
      if (iVar1 == -1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(local_58 + (longlong)iVar1 * 4);
      }
      *(undefined4 *)(*(longlong *)(local_88[0] + uVar20 * 8) + uVar14 * 4) = uVar9;
      uVar11 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar7) {
        uVar11 = uVar7;
      }
      do {
        uVar16 = uVar11;
        if (uVar11 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar16 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar19 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c250e5;
    }
  }
  else if (((int)param_3[3] == 0) || (iStack_4c == -1)) {
    if ((int)param_3[3] == 0) goto LAB_146c250b1;
    lVar19 = *param_1;
    uVar7 = *(int *)(lVar19 + 0x140) * 0x200 + *(int *)(lVar19 + 0x144);
    uVar16 = 0;
    if ((uVar7 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar19 + 0x148) - 1U))) {
      uVar8 = 1;
      uVar11 = 1;
      if (1 < (int)uVar7) {
        uVar8 = uVar7;
      }
      do {
        uVar18 = uVar11;
        uVar16 = uVar8;
        if (uVar8 == uVar18) break;
        uVar11 = uVar18 + 1;
        uVar16 = uVar18;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar19 + 0x148))[uVar18 >> 9] +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c256ec:
    uVar8 = uVar16;
    if (uVar8 != uVar7) {
      iVar6 = *(int *)(param_3[2] + (longlong)(int)uVar8 * 4);
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)((uint)(iVar6 * 3) >> 9) * 8) +
       (ulonglong)(iVar6 * 3 & 0x1ff) * 4) =
           *(undefined4 *)
            (*(longlong *)(param_1[0xf] + (ulonglong)(uVar8 * 3 >> 9) * 8) +
            (ulonglong)(uVar8 * 3 & 0x1ff) * 4);
      uVar11 = uVar8 * 3 + 1;
      uVar16 = iVar6 * 3 + 1;
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4)
           = *(undefined4 *)
              (*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
              (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar11 = uVar8 * 3 + 2;
      uVar16 = iVar6 * 3 + 2;
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4)
           = *(undefined4 *)
              (*(longlong *)(param_1[0xf] + (ulonglong)(uVar11 >> 9) * 8) +
              (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar11 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar7) {
        uVar11 = uVar7;
      }
      do {
        uVar16 = uVar11;
        if (uVar11 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar16 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar19 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c256ec;
    }
  }
  else {
    lVar19 = *param_1;
    uVar7 = *(int *)(lVar19 + 0x140) * 0x200 + *(int *)(lVar19 + 0x144);
    uVar16 = 0;
    if ((uVar7 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar19 + 0x148) - 1U))) {
      uVar8 = 1;
      uVar11 = 1;
      if (1 < (int)uVar7) {
        uVar8 = uVar7;
      }
      do {
        uVar18 = uVar11;
        uVar16 = uVar8;
        if (uVar8 == uVar18) break;
        uVar11 = uVar18 + 1;
        uVar16 = uVar18;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar19 + 0x148))[uVar18 >> 9] +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
    }
joined_r0x000146c25280:
    uVar8 = uVar16;
    if (uVar8 != uVar7) {
      lVar2 = param_1[0xf];
      lVar12 = (longlong)
               *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar8 * 3 >> 9) * 8) +
                       (ulonglong)(uVar8 * 3 & 0x1ff) * 4);
      uVar15 = 0xffffffff;
      uVar9 = 0xffffffff;
      if (lVar12 != -1) {
        uVar9 = *(undefined4 *)(local_58 + lVar12 * 4);
      }
      uVar16 = *(int *)(param_3[2] + (longlong)(int)uVar8 * 4) * 3;
      uVar11 = uVar8 * 3 + 1;
      uVar18 = uVar8 * 3 + 2;
      iVar6 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 4);
      iVar1 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar18 >> 9) * 8) +
                      (ulonglong)(uVar18 & 0x1ff) * 4);
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4)
           = uVar9;
      if (iVar6 != -1) {
        uVar15 = *(undefined4 *)(local_58 + (longlong)iVar6 * 4);
      }
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar16 + 1 >> 9) * 8) +
       (ulonglong)(uVar16 + 1 & 0x1ff) * 4) = uVar15;
      if (iVar1 == -1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(local_58 + (longlong)iVar1 * 4);
      }
      *(undefined4 *)
       (*(longlong *)(local_88[0] + (ulonglong)(uVar16 + 2 >> 9) * 8) +
       (ulonglong)(uVar16 + 2 & 0x1ff) * 4) = uVar9;
      uVar11 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar7) {
        uVar11 = uVar7;
      }
      do {
        uVar16 = uVar11;
        if (uVar11 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar16 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar19 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      goto joined_r0x000146c25280;
    }
  }
  if (local_d1 == '\0') {
    FUN_146c41ff8(local_90,local_d0);
  }
  else {
    FUN_146c44e9c(local_90,local_d0);
  }
  FUN_141082b5c(local_88,0);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_146c25030:
  if ((iStack_4c != -1) && (local_58 != 0)) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c2592a FUN_146c2592a body=442 status=ok
// SIG undefined FUN_146c2592a(void)

void FUN_146c2592a(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146c565a0();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar3 < 0x38) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_48[0] = param_4 & 0xff;
    (**(code **)(*param_2 + 0x170))(param_2,local_48);
    uVar6 = local_48[0];
    if (1 < local_48[0]) {
      FUN_14572541c(param_2);
      uVar6 = local_48[0];
    }
  }
  else {
    uVar6 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((param_3 == 0) || (*(int *)(param_3 + 0x18) == 0)) {
    if (uVar6 == 0) {
      FUN_146c41ff8();
    }
    else {
      FUN_146c44e9c(param_1 + 0x18,param_2);
    }
  }
  else {
    FUN_141040b84(local_48);
    FUN_1411b328a(local_48,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x170));
    uVar4 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
    if (0 < (int)uVar4) {
      uVar5 = 0;
      uVar7 = 0;
      do {
        if (*(int *)(*(longlong *)(param_3 + 0x10) + uVar5 * 4) != -1) {
          *(undefined4 *)
           (*(longlong *)(local_40[0] + (ulonglong)(uVar7 >> 9) * 8) +
           (ulonglong)(uVar7 & 0x1ff) * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar5 >> 9 & 0x7fffff) * 8) +
                (ulonglong)((uint)uVar5 & 0x1ff) * 4);
          uVar7 = uVar7 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
    if (uVar6 == 0) {
      FUN_146c41ff8();
    }
    else {
      FUN_146c44e9c(local_48,param_2);
    }
    FUN_141082b5c(local_40,0);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c25afa FUN_146c25afa body=1404 status=ok
// SIG undefined FUN_146c25afa(void)

void FUN_146c25afa(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  ulonglong local_7c;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  uint *apuStack_60 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  puVar2 = (ulonglong *)param_2[1];
  puVar6 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar6) {
    local_68 = (uint *)(CONCAT44(local_68._4_4_,param_4) & 0xffffffff000000ff);
    (**(code **)(*param_2 + 0x170))(param_2);
    uVar14 = (uint)local_68;
    if (1 < (uint)local_68) {
      FUN_14572541c(param_2);
      uVar14 = (uint)local_68;
    }
  }
  else {
    uVar14 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar6;
  }
  if (param_3 == (longlong *)0x0) {
    bVar15 = false;
  }
  else {
    bVar15 = (int)param_3[1] != 0;
  }
  if (uVar14 == 0) {
    if (!(bool)(bVar15 & (*(byte *)(param_2 + 5) & 1) == 0)) {
      FUN_146c56798(param_1 + 0x18,param_2);
      goto LAB_146c25e07;
    }
    FUN_146be9ba2(&local_68);
    FUN_146bea2c4(&local_68,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x50));
    uVar14 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
    if (0 < (int)uVar14) {
      uVar11 = 0;
      do {
        uVar10 = *(uint *)(*param_3 + uVar11 * 4);
        if (uVar10 != 0xffffffff) {
          FUN_146bea50a((ulonglong)((uVar10 & 0x1ff) << 6) +
                        *(longlong *)(apuStack_60[0] + (ulonglong)(uVar10 >> 9) * 2),
                        (ulonglong)(((uint)uVar11 & 0x1ff) << 6) +
                        *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 9 & 0x7fffff) * 8))
          ;
        }
        uVar11 = uVar11 + 1;
      } while (uVar14 != uVar11);
    }
    FUN_146c56798(&local_68,param_2);
    FUN_146becdc4(apuStack_60,0);
    puVar6 = apuStack_60[0];
  }
  else {
    local_68 = (uint *)0x0;
    apuStack_60[0] = (uint *)0x0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      uVar14 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
      if (bVar15) {
        if ((int)uVar14 < 1) {
          iVar5 = 0;
        }
        else {
          uVar11 = 0;
          iVar5 = 0;
          do {
            if (*(int *)(*param_3 + uVar11 * 4) != -1) {
              iVar5 = iVar5 + *(int *)(*(longlong *)
                                        (*(longlong *)(param_1 + 0x20) +
                                        (uVar11 >> 9 & 0x7fffff) * 8) + 0x38 +
                                      (ulonglong)(((uint)uVar11 & 0x1ff) << 6));
            }
            uVar11 = uVar11 + 1;
          } while (uVar14 != uVar11);
LAB_146c25c44:
          if (!bVar15) goto LAB_146c25c5c;
        }
        uVar14 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x50);
      }
      else {
        if (uVar14 != 0) {
          iVar5 = 0;
          uVar10 = 0;
          do {
            iVar5 = iVar5 + *(int *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar10 >> 9) * 8)
                                    + (ulonglong)((uVar10 & 0x1ff) << 6) + 0x38);
            uVar10 = uVar10 + 1;
          } while (uVar14 != uVar10);
          goto LAB_146c25c44;
        }
        iVar5 = 0;
        uVar14 = 0;
      }
LAB_146c25c5c:
      iVar5 = iVar5 + uVar14 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      FUN_144a127d2(&local_68,iVar5,1);
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_50);
        }
      }
      else {
        local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)*puVar2);
        *puVar2 = (ulonglong)puVar1;
      }
      *local_68 = uVar14;
      puVar6 = local_68 + 1;
      uVar14 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
      if (bVar15) {
        if (0 < (int)uVar14) {
          uVar11 = 0;
          do {
            puVar7 = puVar6;
            if (*(int *)(*param_3 + uVar11 * 4) != -1) {
              lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 9 & 0x7fffff) * 8);
              uVar8 = (ulonglong)(((uint)uVar11 & 0x1ff) << 6);
              uVar10 = *(uint *)(lVar3 + 0x38 + uVar8);
              lVar13 = (longlong)(int)uVar10;
              puVar7 = puVar6 + 1;
              *puVar6 = uVar10;
              if (0 < lVar13) {
                pvVar9 = (void *)(lVar3 + uVar8);
                pvVar4 = *(void **)((longlong)pvVar9 + 0x30);
                if (pvVar4 != (void *)0x0) {
                  pvVar9 = pvVar4;
                }
                memcpy(puVar7,pvVar9,lVar13 * 4);
                puVar7 = puVar7 + lVar13;
              }
            }
            uVar11 = uVar11 + 1;
            puVar6 = puVar7;
          } while (uVar14 != uVar11);
        }
      }
      else if (uVar14 != 0) {
        uVar10 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar10 >> 9) * 8);
          uVar11 = (ulonglong)((uVar10 & 0x1ff) << 6);
          uVar12 = *(uint *)(lVar3 + 0x38 + uVar11);
          lVar13 = (longlong)(int)uVar12;
          puVar7 = puVar6 + 1;
          *puVar6 = uVar12;
          puVar6 = puVar7;
          if (0 < lVar13) {
            pvVar9 = (void *)(lVar3 + uVar11);
            pvVar4 = *(void **)((longlong)pvVar9 + 0x30);
            if (pvVar4 != (void *)0x0) {
              pvVar9 = pvVar4;
            }
            memcpy(puVar7,pvVar9,lVar13 * 4);
            puVar6 = puVar7 + lVar13;
          }
          uVar10 = uVar10 + 1;
        } while (uVar14 != uVar10);
      }
      FUN_1401a700c(&local_7c,0x105);
      uVar11 = local_7c & 0xffffffff;
      FUN_1401a700c(&local_7c,0x105);
      local_90 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_a8 = uVar11;
      FUN_1416a07d6(param_2,local_68,(longlong)(int)apuStack_60[0] << 2,local_7c & 0xffffffff);
      puVar6 = local_68;
    }
    else {
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_6c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_6c);
        }
      }
      else {
        local_6c = *(undefined4 *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      FUN_144a127d2(&local_68,local_6c,1);
      FUN_1401a700c(&local_7c,0x105);
      uVar11 = local_7c & 0xffffffff;
      FUN_1401a700c(&local_7c,0x105);
      local_90 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_a8 = uVar11;
      FUN_1416a07d6(param_2,local_68,(longlong)(int)apuStack_60[0] << 2,local_7c & 0xffffffff);
      puVar7 = local_68;
      FUN_146bea2c4(param_1 + 0x18,*local_68);
      local_74 = 1;
      local_70 = 0x100;
      local_7c = 0xc00000000;
      uVar14 = *(int *)(param_1 + 0x18) * 0x200 + *(int *)(param_1 + 0x1c);
      puVar6 = local_68;
      if (uVar14 != 0) {
        puVar7 = puVar7 + 1;
        uVar10 = 0;
        do {
          uVar12 = *puVar7;
          puVar7 = puVar7 + 1;
          if (0 < (int)uVar12) {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar10 >> 9) * 8);
            do {
              local_50 = (ulonglong)((uVar10 & 0x1ff) << 6) + lVar3;
              FUN_146bfd7a6(&local_50,*puVar7,&local_7c);
              puVar7 = puVar7 + 1;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          uVar10 = uVar10 + 1;
          puVar6 = local_68;
        } while (uVar10 != uVar14);
      }
    }
  }
  if (puVar6 != (uint *)0x0) {
    FUN_1400020a8();
  }
LAB_146c25e07:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c26078 FUN_146c26078 body=502 status=ok
// SIG undefined FUN_146c26078(void)

void FUN_146c26078(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0xc0) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x20) != param_2)) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    local_58 = (undefined1 *)0x0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_149f3ab40;
    puVar3[2] = uVar1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    FUN_146bfef22(puVar3 + 3,&local_58,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0xc0);
    *(undefined8 **)(param_1 + 0xc0) = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    local_58 = (undefined1 *)CONCAT44(local_58._4_4_,0xffffffff);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_149f3ac10;
    puVar3[2] = uVar1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    FUN_1448156a8(puVar3 + 3,&local_58,param_2);
    puVar2 = *(undefined8 **)(param_1 + 200);
    *(undefined8 **)(param_1 + 200) = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_149f3adb0;
    puVar3[2] = uVar1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    FUN_146bff40c(puVar3 + 3,&DAT_14c846480,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0xd0);
    *(undefined8 **)(param_1 + 0xd0) = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    local_58 = &DAT_3f8000003f800000;
    uStack_50 = 0x3f800000;
    uStack_4c = 0x3f800000;
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_149f3ace0;
    puVar3[2] = uVar1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    FUN_146bff226(puVar3 + 3,&local_58,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0xd8);
    *(undefined8 **)(param_1 + 0xd8) = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c26270 FUN_146c26270 body=647 status=ok
// SIG undefined FUN_146c26270(void)

byte FUN_146c26270(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = param_1[2];
  bVar9 = 1;
  if ((longlong)(int)lVar7 != 0) {
    lVar2 = param_1[1];
    lVar8 = 0;
    do {
      bVar4 = (**(code **)(**(longlong **)(lVar2 + lVar8) + 0x70))
                        (*(longlong **)(lVar2 + lVar8),param_2,param_3);
      bVar9 = bVar9 & bVar4;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar8);
  }
  iVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      if (lVar7 < (int)param_1[5]) {
        uVar6 = *(undefined8 *)(param_1[4] + lVar7 * 8);
      }
      else {
        uVar6 = 0;
      }
      bVar4 = FUN_146c26552(uVar6,param_3);
      bVar9 = bVar9 & bVar4;
      lVar7 = lVar7 + 1;
      iVar5 = (**(code **)(*param_1 + 0xa0))();
    } while (lVar7 < iVar5);
  }
  if ((int)param_1[7] < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)param_1[6];
  }
  bVar4 = FUN_146c26d4a(uVar6,param_3);
  bVar4 = bVar4 & bVar9;
  if (param_1[8] != 0) {
    bVar9 = FUN_146c27544(param_1[8],param_3);
    bVar4 = bVar4 & bVar9;
  }
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    bVar9 = (**(code **)(*plVar3 + 0x70))(plVar3,param_2,param_3);
    bVar4 = bVar4 & bVar9;
  }
  iVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(param_1[0xc] + lVar7 * 8);
      bVar9 = (**(code **)(*plVar3 + 0x70))(plVar3,param_2,param_3);
      bVar4 = bVar4 & bVar9;
      lVar7 = lVar7 + 1;
      iVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
    } while (lVar7 < iVar5);
  }
  iVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(param_1[10] + lVar7 * 8);
      bVar9 = (**(code **)(*plVar3 + 0x70))(plVar3,param_2,param_3);
      bVar4 = bVar4 & bVar9;
      lVar7 = lVar7 + 1;
      iVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
    } while (lVar7 < iVar5);
  }
  plVar3 = param_1 + 0xe;
  plVar1 = param_1 + 0x10;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar5 = 0;
  local_58 = plVar1;
  if ((int)param_1[0x13] != 0) {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_1[0x13];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar3;
  if ((iStack_4c != iVar5) || (local_58 != plVar1)) {
    do {
      lVar7 = *(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (lVar7 != 0) {
        bVar4 = bVar4 & (ulonglong)
                        (longlong)
                        (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x20) * 0x200 +
                        *(int *)(*(longlong *)(lVar7 + 0x10) + 0x24)) <=
                        (ulonglong)(uint)(*(int *)(lVar7 + 0x18) * 0x200 + *(int *)(lVar7 + 0x1c));
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar3 || (local_78 != plVar1 || iStack_6c != iVar5));
  }
  bVar9 = FUN_146c27d3e(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar9 & bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c264f8 FUN_146c264f8 body=89 status=ok
// SIG undefined FUN_146c264f8(void)

ulonglong FUN_146c264f8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 unaff_RDI;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if ((longlong)iVar1 == 0) {
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar5 = CONCAT71(uVar6,1);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar7);
      bVar4 = (**(code **)(*plVar3 + 0x70))(plVar3,param_2,param_3);
      uVar5 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & bVar4);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 146c26552 FUN_146c26552 body=2039 status=ok
// SIG undefined FUN_146c26552(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x000146c266a6 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_146c26552(longlong *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined ***pppuVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_138 [40];
  uint local_110;
  undefined1 local_10a;
  undefined1 local_109;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_10a = 1;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_149f3c130;
  puStack_a0 = &local_10a;
  local_c8 = (code *)&LAB_146c58766;
  if (param_2 == 2) {
    local_e8 = &PTR_LAB_149f3c170;
    local_c8 = (code *)&LAB_146c58806;
  }
  else {
    if (param_2 != 1) goto LAB_146c266ac;
    local_e8 = &PTR_LAB_149f3c150;
    local_c8 = FUN_146c587b6;
  }
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_68 = 0x49f3c130;
  uStack_64 = 1;
  uStack_60 = &local_10a;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  local_88 = &LAB_146c58766;
  uStack_80 = uStack_c0;
  local_b8 = (undefined ***)0x0;
  local_a8 = local_e8;
  local_108 = &LAB_146c58766;
  uStack_100 = (undefined4)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  local_e8 = &PTR_LAB_149f3c130;
  puStack_e0 = &local_10a;
  local_d8 = local_98;
  uStack_d4 = uStack_94;
  uStack_d0 = uStack_90;
  uStack_cc = uStack_8c;
  local_f8 = 0;
  uStack_f0 = uStack_b0;
  uStack_ec = uStack_ac;
  (*(code *)&LAB_146c5878c)();
LAB_146c266ac:
  pcVar3 = local_c8;
  local_88._0_1_ =
       (ulonglong)(uint)((int)param_1[0xb] * 0x200 + *(int *)((longlong)param_1 + 0x5c)) * 2 ==
       (ulonglong)(uint)((int)param_1[8] * 0x200 + *(int *)((longlong)param_1 + 0x44));
  pppuVar8 = local_b8;
  if (local_b8 == (undefined ***)0x0) {
    pppuVar8 = &local_a8;
  }
  uVar6 = (*(code *)(*pppuVar8)[1])();
  (*pcVar3)(uVar6,&local_88);
  pcVar3 = local_c8;
  lVar16 = *param_1;
  if (lVar16 == 0) {
    bVar20 = true;
  }
  else {
    bVar20 = (ulonglong)(uint)((int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74)) ==
             (longlong)((*(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144)) * 3);
  }
  local_88 = (undefined1 *)CONCAT71(local_88._1_7_,bVar20);
  pppuVar8 = local_b8;
  if (local_b8 == (undefined ***)0x0) {
    pppuVar8 = &local_a8;
  }
  uVar6 = (*(code *)(*pppuVar8)[1])();
  (*pcVar3)(uVar6,&local_88);
  uVar12 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
  uVar18 = 0;
  if ((uVar12 != 0) && (uVar18 = 0, 0xfffd < (ushort)(**(short **)param_1[2] - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar9] + (ulonglong)uVar15 * 2)
                              - 1U));
  }
  if (uVar18 != uVar12) {
    do {
      pcVar3 = local_c8;
      uVar19 = (ulonglong)(uVar18 >> 9);
      uVar7 = (ulonglong)(uVar18 & 0x1ff);
      uVar13 = *(uint *)(*(longlong *)(param_1[0xc] + uVar19 * 8) + uVar7 * 4);
      if ((int)uVar13 < 0) {
        lVar16 = param_1[2];
LAB_146c267fc:
        sVar2 = *(short *)(*(longlong *)(lVar16 + uVar19 * 8) + uVar7 * 2);
LAB_146c26808:
        bVar20 = sVar2 == 1;
      }
      else {
        lVar17 = *param_1;
        lVar16 = param_1[2];
        if (*(int *)(lVar17 + 0x20) * 0x200 + *(int *)(lVar17 + 0x24) <= (int)uVar13)
        goto LAB_146c267fc;
        sVar2 = *(short *)(*(longlong *)(lVar16 + uVar19 * 8) + uVar7 * 2);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(lVar17 + 0x28) +
                                          (ulonglong)(uVar13 >> 9) * 8) +
                                        (ulonglong)(uVar13 & 0x1ff) * 2) - 1U)) goto LAB_146c26808;
        bVar20 = sVar2 != 1;
      }
      local_88 = (undefined1 *)CONCAT71(local_88._1_7_,bVar20);
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,&local_88);
      uVar13 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar12) {
        uVar13 = uVar12;
      }
      do {
        uVar14 = uVar13;
        if (uVar13 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar14 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar18 >> 9) * 8)
                                           + (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar14;
    } while (uVar18 != uVar12);
  }
  puVar11 = &local_88;
  lVar16 = *param_1;
  uVar12 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
  uVar18 = 0;
  if ((uVar12 != 0) &&
     (uVar18 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar9] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar18 != uVar12) {
    puVar11 = (undefined8 *)&local_109;
    local_110 = uVar12;
    do {
      uVar12 = uVar18 * 3 + 2;
      lVar17 = param_1[0xf];
      uVar13 = uVar18 * 3 + 1;
      local_88 = (undefined1 *)
                 CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar17 + (ulonglong)(uVar13 >> 9) * 8) +
                           (ulonglong)(uVar13 & 0x1ff) * 4),
                          *(undefined4 *)
                           (*(longlong *)(lVar17 + (ulonglong)(uVar18 * 3 >> 9) * 8) +
                           (ulonglong)(uVar18 * 3 & 0x1ff) * 4));
      uStack_80 = CONCAT44(uStack_80._4_4_,
                           *(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar12 >> 9) * 8) +
                            (ulonglong)(uVar12 & 0x1ff) * 4));
      lVar17 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
      uStack_100 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      local_108 = *(undefined1 **)(lVar17 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      lVar17 = 0;
      do {
        pcVar3 = local_c8;
        uVar12 = *(uint *)((longlong)&local_88 + lVar17 * 4);
        if (uVar12 != 0xffffffff) {
          local_109 = *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar12 >> 9) * 8) +
                              (ulonglong)(uVar12 & 0x1ff) * 4) ==
                      *(int *)((longlong)&local_108 + lVar17 * 4);
          pppuVar8 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar8 = &local_a8;
          }
          uVar6 = (*(code *)(*pppuVar8)[1])();
          (*pcVar3)(uVar6,puVar11);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      uVar12 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)local_110) {
        uVar12 = local_110;
      }
      do {
        uVar13 = uVar12;
        if (uVar12 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar13 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar16 + 0x148) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar13;
    } while (uVar18 != local_110);
  }
  local_88 = (undefined1 *)0x0;
  uStack_80 = 0;
  local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffff00000000);
  FUN_1448156a8(&local_88,&local_108,(int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc));
  lVar16 = *param_1;
  uVar12 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
  uVar18 = 0;
  if ((uVar12 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar9] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar18 != uVar12) {
    puVar11 = (undefined8 *)&local_109;
    do {
      pcVar3 = local_c8;
      uVar13 = uVar18 * 3 + 2;
      lVar17 = param_1[0xf];
      uVar14 = uVar18 * 3 + 1;
      local_108 = (undefined1 *)
                  CONCAT44(*(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar14 >> 9) * 8) +
                            (ulonglong)(uVar14 & 0x1ff) * 4),
                           *(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar18 * 3 >> 9) * 8) +
                            (ulonglong)(uVar18 * 3 & 0x1ff) * 4));
      uStack_100 = *(undefined4 *)
                    (*(longlong *)(lVar17 + (ulonglong)(uVar13 >> 9) * 8) +
                    (ulonglong)(uVar13 & 0x1ff) * 4);
      lVar17 = 0;
      iVar5 = 0;
      do {
        lVar10 = (longlong)*(int *)((longlong)&local_108 + lVar17 * 4);
        if (lVar10 != -1) {
          iVar5 = iVar5 + 1;
          piVar1 = (int *)((longlong)local_88 + lVar10 * 4);
          *piVar1 = *piVar1 + 1;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      local_109 = iVar5 == 0 || iVar5 == 3;
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,puVar11);
      uVar13 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar12) {
        uVar13 = uVar12;
      }
      do {
        uVar14 = uVar13;
        if (uVar13 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar14 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar16 + 0x148) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar14;
    } while (uVar18 != uVar12);
  }
  if (0 < (int)uStack_80) {
    puVar11 = &local_108;
    uVar19 = 0;
    do {
      pcVar3 = local_c8;
      uVar4 = *(ushort *)
               (*(longlong *)(param_1[2] + (uVar19 >> 9 & 0x7fffff) * 8) +
               (ulonglong)((uint)uVar19 & 0x1ff) * 2);
      if (uVar4 == 0xffff) {
        uVar4 = 0;
      }
      iVar5 = *(int *)((longlong)local_88 + uVar19 * 4);
      local_108 = (undefined1 *)
                  CONCAT71(local_108._1_7_,iVar5 + 1U == (uint)uVar4 || iVar5 == 0 && uVar4 == 0);
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,puVar11);
      uVar19 = uVar19 + 1;
    } while ((longlong)uVar19 < (longlong)(int)uStack_80);
  }
  uVar19 = CONCAT71((int7)((ulonglong)puVar11 >> 8),local_10a);
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar8 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar8 = local_b8;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c26d4a FUN_146c26d4a body=2040 status=ok
// SIG undefined FUN_146c26d4a(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x000146c26e9e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_146c26d4a(longlong *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined ***pppuVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_138 [40];
  uint local_110;
  undefined1 local_10a;
  undefined1 local_109;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_10a = 1;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_149f3c190;
  puStack_a0 = &local_10a;
  local_c8 = (code *)&LAB_146c588f4;
  if (param_2 == 2) {
    local_e8 = &PTR_LAB_149f3c1d0;
    local_c8 = (code *)&LAB_146c58994;
  }
  else {
    if (param_2 != 1) goto LAB_146c26ea4;
    local_e8 = &PTR_LAB_149f3c1b0;
    local_c8 = FUN_146c58944;
  }
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_68 = 0x49f3c190;
  uStack_64 = 1;
  uStack_60 = &local_10a;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  local_88 = &LAB_146c588f4;
  uStack_80 = uStack_c0;
  local_b8 = (undefined ***)0x0;
  local_a8 = local_e8;
  local_108 = &LAB_146c588f4;
  uStack_100 = (undefined4)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  local_e8 = &PTR_LAB_149f3c190;
  puStack_e0 = &local_10a;
  local_d8 = local_98;
  uStack_d4 = uStack_94;
  uStack_d0 = uStack_90;
  uStack_cc = uStack_8c;
  local_f8 = 0;
  uStack_f0 = uStack_b0;
  uStack_ec = uStack_ac;
  (*(code *)&LAB_146c5891a)();
LAB_146c26ea4:
  pcVar3 = local_c8;
  local_88._0_1_ =
       (ulonglong)(uint)((int)param_1[0xb] * 0x200 + *(int *)((longlong)param_1 + 0x5c)) * 3 ==
       (ulonglong)(uint)((int)param_1[8] * 0x200 + *(int *)((longlong)param_1 + 0x44));
  pppuVar8 = local_b8;
  if (local_b8 == (undefined ***)0x0) {
    pppuVar8 = &local_a8;
  }
  uVar6 = (*(code *)(*pppuVar8)[1])();
  (*pcVar3)(uVar6,&local_88);
  pcVar3 = local_c8;
  lVar16 = *param_1;
  if (lVar16 == 0) {
    bVar20 = true;
  }
  else {
    bVar20 = (ulonglong)(uint)((int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74)) ==
             (longlong)((*(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144)) * 3);
  }
  local_88 = (undefined1 *)CONCAT71(local_88._1_7_,bVar20);
  pppuVar8 = local_b8;
  if (local_b8 == (undefined ***)0x0) {
    pppuVar8 = &local_a8;
  }
  uVar6 = (*(code *)(*pppuVar8)[1])();
  (*pcVar3)(uVar6,&local_88);
  uVar12 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
  uVar18 = 0;
  if ((uVar12 != 0) && (uVar18 = 0, 0xfffd < (ushort)(**(short **)param_1[2] - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar9] + (ulonglong)uVar15 * 2)
                              - 1U));
  }
  if (uVar18 != uVar12) {
    do {
      pcVar3 = local_c8;
      uVar19 = (ulonglong)(uVar18 >> 9);
      uVar7 = (ulonglong)(uVar18 & 0x1ff);
      uVar13 = *(uint *)(*(longlong *)(param_1[0xc] + uVar19 * 8) + uVar7 * 4);
      if ((int)uVar13 < 0) {
        lVar16 = param_1[2];
LAB_146c26ff5:
        sVar2 = *(short *)(*(longlong *)(lVar16 + uVar19 * 8) + uVar7 * 2);
LAB_146c27001:
        bVar20 = sVar2 == 1;
      }
      else {
        lVar17 = *param_1;
        lVar16 = param_1[2];
        if (*(int *)(lVar17 + 0x20) * 0x200 + *(int *)(lVar17 + 0x24) <= (int)uVar13)
        goto LAB_146c26ff5;
        sVar2 = *(short *)(*(longlong *)(lVar16 + uVar19 * 8) + uVar7 * 2);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(lVar17 + 0x28) +
                                          (ulonglong)(uVar13 >> 9) * 8) +
                                        (ulonglong)(uVar13 & 0x1ff) * 2) - 1U)) goto LAB_146c27001;
        bVar20 = sVar2 != 1;
      }
      local_88 = (undefined1 *)CONCAT71(local_88._1_7_,bVar20);
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,&local_88);
      uVar13 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar12) {
        uVar13 = uVar12;
      }
      do {
        uVar14 = uVar13;
        if (uVar13 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar14 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar18 >> 9) * 8)
                                           + (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar14;
    } while (uVar18 != uVar12);
  }
  puVar11 = &local_88;
  lVar16 = *param_1;
  uVar12 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
  uVar18 = 0;
  if ((uVar12 != 0) &&
     (uVar18 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar9] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar18 != uVar12) {
    puVar11 = (undefined8 *)&local_109;
    local_110 = uVar12;
    do {
      uVar12 = uVar18 * 3 + 2;
      lVar17 = param_1[0xf];
      uVar13 = uVar18 * 3 + 1;
      local_88 = (undefined1 *)
                 CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar17 + (ulonglong)(uVar13 >> 9) * 8) +
                           (ulonglong)(uVar13 & 0x1ff) * 4),
                          *(undefined4 *)
                           (*(longlong *)(lVar17 + (ulonglong)(uVar18 * 3 >> 9) * 8) +
                           (ulonglong)(uVar18 * 3 & 0x1ff) * 4));
      uStack_80 = CONCAT44(uStack_80._4_4_,
                           *(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar12 >> 9) * 8) +
                            (ulonglong)(uVar12 & 0x1ff) * 4));
      lVar17 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
      uStack_100 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      local_108 = *(undefined1 **)(lVar17 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      lVar17 = 0;
      do {
        pcVar3 = local_c8;
        uVar12 = *(uint *)((longlong)&local_88 + lVar17 * 4);
        if (uVar12 != 0xffffffff) {
          local_109 = *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar12 >> 9) * 8) +
                              (ulonglong)(uVar12 & 0x1ff) * 4) ==
                      *(int *)((longlong)&local_108 + lVar17 * 4);
          pppuVar8 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar8 = &local_a8;
          }
          uVar6 = (*(code *)(*pppuVar8)[1])();
          (*pcVar3)(uVar6,puVar11);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      uVar12 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)local_110) {
        uVar12 = local_110;
      }
      do {
        uVar13 = uVar12;
        if (uVar12 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar13 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar16 + 0x148) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar13;
    } while (uVar18 != local_110);
  }
  local_88 = (undefined1 *)0x0;
  uStack_80 = 0;
  local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffff00000000);
  FUN_1448156a8(&local_88,&local_108,(int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc));
  lVar16 = *param_1;
  uVar12 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
  uVar18 = 0;
  if ((uVar12 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar9] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar18 != uVar12) {
    puVar11 = (undefined8 *)&local_109;
    do {
      pcVar3 = local_c8;
      uVar13 = uVar18 * 3 + 2;
      lVar17 = param_1[0xf];
      uVar14 = uVar18 * 3 + 1;
      local_108 = (undefined1 *)
                  CONCAT44(*(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar14 >> 9) * 8) +
                            (ulonglong)(uVar14 & 0x1ff) * 4),
                           *(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar18 * 3 >> 9) * 8) +
                            (ulonglong)(uVar18 * 3 & 0x1ff) * 4));
      uStack_100 = *(undefined4 *)
                    (*(longlong *)(lVar17 + (ulonglong)(uVar13 >> 9) * 8) +
                    (ulonglong)(uVar13 & 0x1ff) * 4);
      lVar17 = 0;
      iVar5 = 0;
      do {
        lVar10 = (longlong)*(int *)((longlong)&local_108 + lVar17 * 4);
        if (lVar10 != -1) {
          iVar5 = iVar5 + 1;
          piVar1 = (int *)((longlong)local_88 + lVar10 * 4);
          *piVar1 = *piVar1 + 1;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      local_109 = iVar5 == 0 || iVar5 == 3;
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,puVar11);
      uVar13 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar12) {
        uVar13 = uVar12;
      }
      do {
        uVar14 = uVar13;
        if (uVar13 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar14 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar16 + 0x148) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar14;
    } while (uVar18 != uVar12);
  }
  if (0 < (int)uStack_80) {
    puVar11 = &local_108;
    uVar19 = 0;
    do {
      pcVar3 = local_c8;
      uVar4 = *(ushort *)
               (*(longlong *)(param_1[2] + (uVar19 >> 9 & 0x7fffff) * 8) +
               (ulonglong)((uint)uVar19 & 0x1ff) * 2);
      if (uVar4 == 0xffff) {
        uVar4 = 0;
      }
      iVar5 = *(int *)((longlong)local_88 + uVar19 * 4);
      local_108 = (undefined1 *)
                  CONCAT71(local_108._1_7_,iVar5 + 1U == (uint)uVar4 || iVar5 == 0 && uVar4 == 0);
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,puVar11);
      uVar19 = uVar19 + 1;
    } while ((longlong)uVar19 < (longlong)(int)uStack_80);
  }
  uVar19 = CONCAT71((int7)((ulonglong)puVar11 >> 8),local_10a);
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar8 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar8 = local_b8;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c27544 FUN_146c27544 body=2040 status=ok
// SIG undefined FUN_146c27544(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff18 : 0x000146c27698 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_146c27544(longlong *param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  code *pcVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined ***pppuVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_138 [40];
  uint local_110;
  undefined1 local_10a;
  undefined1 local_109;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_10a = 1;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_149f3c1f0;
  puStack_a0 = &local_10a;
  local_c8 = (code *)&LAB_146c589e4;
  if (param_2 == 2) {
    local_e8 = &PTR_LAB_149f3c230;
    local_c8 = (code *)&LAB_146c58a84;
  }
  else {
    if (param_2 != 1) goto LAB_146c2769e;
    local_e8 = &PTR_LAB_149f3c210;
    local_c8 = FUN_146c58a34;
  }
  local_58 = local_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  local_68 = 0x49f3c1f0;
  uStack_64 = 1;
  uStack_60 = &local_10a;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = uStack_b0;
  uStack_6c = uStack_ac;
  local_88 = &LAB_146c589e4;
  uStack_80 = uStack_c0;
  local_b8 = (undefined ***)0x0;
  local_a8 = local_e8;
  local_108 = &LAB_146c589e4;
  uStack_100 = (undefined4)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  local_e8 = &PTR_LAB_149f3c1f0;
  puStack_e0 = &local_10a;
  local_d8 = local_98;
  uStack_d4 = uStack_94;
  uStack_d0 = uStack_90;
  uStack_cc = uStack_8c;
  local_f8 = 0;
  uStack_f0 = uStack_b0;
  uStack_ec = uStack_ac;
  (*(code *)&LAB_146c58a0a)();
LAB_146c2769e:
  pcVar3 = local_c8;
  local_88._0_1_ =
       (ulonglong)(uint)((int)param_1[0xb] * 0x200 + *(int *)((longlong)param_1 + 0x5c)) << 2 ==
       (ulonglong)(uint)((int)param_1[8] * 0x200 + *(int *)((longlong)param_1 + 0x44));
  pppuVar8 = local_b8;
  if (local_b8 == (undefined ***)0x0) {
    pppuVar8 = &local_a8;
  }
  uVar6 = (*(code *)(*pppuVar8)[1])();
  (*pcVar3)(uVar6,&local_88);
  pcVar3 = local_c8;
  lVar16 = *param_1;
  if (lVar16 == 0) {
    bVar20 = true;
  }
  else {
    bVar20 = (ulonglong)(uint)((int)param_1[0xe] * 0x200 + *(int *)((longlong)param_1 + 0x74)) ==
             (longlong)((*(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144)) * 3);
  }
  local_88 = (undefined1 *)CONCAT71(local_88._1_7_,bVar20);
  pppuVar8 = local_b8;
  if (local_b8 == (undefined ***)0x0) {
    pppuVar8 = &local_a8;
  }
  uVar6 = (*(code *)(*pppuVar8)[1])();
  (*pcVar3)(uVar6,&local_88);
  uVar12 = (int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc);
  uVar18 = 0;
  if ((uVar12 != 0) && (uVar18 = 0, 0xfffd < (ushort)(**(short **)param_1[2] - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)param_1[2])[uVar9] + (ulonglong)uVar15 * 2)
                              - 1U));
  }
  if (uVar18 != uVar12) {
    do {
      pcVar3 = local_c8;
      uVar19 = (ulonglong)(uVar18 >> 9);
      uVar7 = (ulonglong)(uVar18 & 0x1ff);
      uVar13 = *(uint *)(*(longlong *)(param_1[0xc] + uVar19 * 8) + uVar7 * 4);
      if ((int)uVar13 < 0) {
        lVar16 = param_1[2];
LAB_146c277ef:
        sVar2 = *(short *)(*(longlong *)(lVar16 + uVar19 * 8) + uVar7 * 2);
LAB_146c277fb:
        bVar20 = sVar2 == 1;
      }
      else {
        lVar17 = *param_1;
        lVar16 = param_1[2];
        if (*(int *)(lVar17 + 0x20) * 0x200 + *(int *)(lVar17 + 0x24) <= (int)uVar13)
        goto LAB_146c277ef;
        sVar2 = *(short *)(*(longlong *)(lVar16 + uVar19 * 8) + uVar7 * 2);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          (*(longlong *)(lVar17 + 0x28) +
                                          (ulonglong)(uVar13 >> 9) * 8) +
                                        (ulonglong)(uVar13 & 0x1ff) * 2) - 1U)) goto LAB_146c277fb;
        bVar20 = sVar2 != 1;
      }
      local_88 = (undefined1 *)CONCAT71(local_88._1_7_,bVar20);
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,&local_88);
      uVar13 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar12) {
        uVar13 = uVar12;
      }
      do {
        uVar14 = uVar13;
        if (uVar13 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar14 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)(param_1[2] + (ulonglong)(uVar18 >> 9) * 8)
                                           + (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar14;
    } while (uVar18 != uVar12);
  }
  puVar11 = &local_88;
  lVar16 = *param_1;
  uVar12 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
  uVar18 = 0;
  if ((uVar12 != 0) &&
     (uVar18 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar9] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar18 != uVar12) {
    puVar11 = (undefined8 *)&local_109;
    local_110 = uVar12;
    do {
      uVar12 = uVar18 * 3 + 2;
      lVar17 = param_1[0xf];
      uVar13 = uVar18 * 3 + 1;
      local_88 = (undefined1 *)
                 CONCAT44(*(undefined4 *)
                           (*(longlong *)(lVar17 + (ulonglong)(uVar13 >> 9) * 8) +
                           (ulonglong)(uVar13 & 0x1ff) * 4),
                          *(undefined4 *)
                           (*(longlong *)(lVar17 + (ulonglong)(uVar18 * 3 >> 9) * 8) +
                           (ulonglong)(uVar18 * 3 & 0x1ff) * 4));
      uStack_80 = CONCAT44(uStack_80._4_4_,
                           *(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar12 >> 9) * 8) +
                            (ulonglong)(uVar12 & 0x1ff) * 4));
      lVar17 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(uVar18 >> 9) * 8);
      uStack_100 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      local_108 = *(undefined1 **)(lVar17 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
      lVar17 = 0;
      do {
        pcVar3 = local_c8;
        uVar12 = *(uint *)((longlong)&local_88 + lVar17 * 4);
        if (uVar12 != 0xffffffff) {
          local_109 = *(int *)(*(longlong *)(param_1[0xc] + (ulonglong)(uVar12 >> 9) * 8) +
                              (ulonglong)(uVar12 & 0x1ff) * 4) ==
                      *(int *)((longlong)&local_108 + lVar17 * 4);
          pppuVar8 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar8 = &local_a8;
          }
          uVar6 = (*(code *)(*pppuVar8)[1])();
          (*pcVar3)(uVar6,puVar11);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      uVar12 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)local_110) {
        uVar12 = local_110;
      }
      do {
        uVar13 = uVar12;
        if (uVar12 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar13 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar16 + 0x148) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar13;
    } while (uVar18 != local_110);
  }
  local_88 = (undefined1 *)0x0;
  uStack_80 = 0;
  local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffff00000000);
  FUN_1448156a8(&local_88,&local_108,(int)param_1[1] * 0x200 + *(int *)((longlong)param_1 + 0xc));
  lVar16 = *param_1;
  uVar12 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
  uVar18 = 0;
  if ((uVar12 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar16 + 0x148) - 1U))) {
    uVar13 = 1;
    uVar14 = 1;
    if (1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    do {
      uVar18 = uVar13;
      if (uVar13 == uVar14) break;
      uVar9 = uVar14 >> 9;
      uVar15 = uVar14 & 0x1ff;
      uVar18 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar16 + 0x148))[uVar9] +
                                         (ulonglong)uVar15 * 2) - 1U));
  }
  if (uVar18 != uVar12) {
    puVar11 = (undefined8 *)&local_109;
    do {
      pcVar3 = local_c8;
      uVar13 = uVar18 * 3 + 2;
      lVar17 = param_1[0xf];
      uVar14 = uVar18 * 3 + 1;
      local_108 = (undefined1 *)
                  CONCAT44(*(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar14 >> 9) * 8) +
                            (ulonglong)(uVar14 & 0x1ff) * 4),
                           *(undefined4 *)
                            (*(longlong *)(lVar17 + (ulonglong)(uVar18 * 3 >> 9) * 8) +
                            (ulonglong)(uVar18 * 3 & 0x1ff) * 4));
      uStack_100 = *(undefined4 *)
                    (*(longlong *)(lVar17 + (ulonglong)(uVar13 >> 9) * 8) +
                    (ulonglong)(uVar13 & 0x1ff) * 4);
      lVar17 = 0;
      iVar5 = 0;
      do {
        lVar10 = (longlong)*(int *)((longlong)&local_108 + lVar17 * 4);
        if (lVar10 != -1) {
          iVar5 = iVar5 + 1;
          piVar1 = (int *)((longlong)local_88 + lVar10 * 4);
          *piVar1 = *piVar1 + 1;
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      local_109 = iVar5 == 0 || iVar5 == 3;
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,puVar11);
      uVar13 = uVar18 + 1;
      if ((int)(uVar18 + 1) < (int)uVar12) {
        uVar13 = uVar12;
      }
      do {
        uVar14 = uVar13;
        if (uVar13 - 1 == uVar18) break;
        uVar18 = uVar18 + 1;
        uVar14 = uVar18;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar16 + 0x148) +
                                             (ulonglong)(uVar18 >> 9) * 8) +
                                           (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
      uVar18 = uVar14;
    } while (uVar18 != uVar12);
  }
  if (0 < (int)uStack_80) {
    puVar11 = &local_108;
    uVar19 = 0;
    do {
      pcVar3 = local_c8;
      uVar4 = *(ushort *)
               (*(longlong *)(param_1[2] + (uVar19 >> 9 & 0x7fffff) * 8) +
               (ulonglong)((uint)uVar19 & 0x1ff) * 2);
      if (uVar4 == 0xffff) {
        uVar4 = 0;
      }
      iVar5 = *(int *)((longlong)local_88 + uVar19 * 4);
      local_108 = (undefined1 *)
                  CONCAT71(local_108._1_7_,iVar5 + 1U == (uint)uVar4 || iVar5 == 0 && uVar4 == 0);
      pppuVar8 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar8 = &local_a8;
      }
      uVar6 = (*(code *)(*pppuVar8)[1])();
      (*pcVar3)(uVar6,puVar11);
      uVar19 = uVar19 + 1;
    } while ((longlong)uVar19 < (longlong)(int)uStack_80);
  }
  uVar19 = CONCAT71((int7)((ulonglong)puVar11 >> 8),local_10a);
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    pppuVar8 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar8 = local_b8;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar19 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c27d3e FUN_146c27d3e body=132 status=ok
// SIG undefined FUN_146c27d3e(void)

uint FUN_146c27d3e(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    if ((*(longlong *)(param_1 + 200) == 0) && (*(longlong *)(param_1 + 0xd8) == 0)) {
      uVar5 = (uint)(*(longlong *)(param_1 + 0xd0) == 0);
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x20);
    iVar2 = *(int *)(*(longlong *)(param_1 + 200) + 0x20);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x20);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x20);
    uVar5 = CONCAT31((int3)((uint)iVar1 >> 8),
                     ((iVar4 == 0 || iVar4 == iVar1) && (iVar3 == 0 || iVar3 == iVar1)) &&
                     (iVar2 == 0 || iVar2 == iVar1));
  }
  return uVar5;
}



// FUNCTION 146c27dc2 FUN_146c27dc2 body=19 status=ok
// SIG undefined FUN_146c27dc2(void)

undefined4 FUN_146c27dc2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x20);
  }
  return 0;
}



// FUNCTION 146c27dd5 FUN_146c27dd5 body=190 status=ok
// SIG undefined FUN_146c27dd5(void)

void FUN_146c27dd5(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_149f3ab40;
    puVar2[2] = param_1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    FUN_146bfef8e(puVar2 + 3,0);
    puVar1 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar2 = (undefined8 *)*param_2;
    }
    puVar2[1] = *(undefined8 *)(param_3 + 8);
    FUN_1406fa324(puVar2 + 3,param_3 + 0x18);
    return;
  }
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c27e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146c27e93 FUN_146c27e93 body=193 status=ok
// SIG undefined FUN_146c27e93(void)

void FUN_146c27e93(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_149f3ac10;
    puVar2[2] = param_1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    FUN_144a127d2(puVar2 + 3,0,1);
    puVar1 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar2 = (undefined8 *)*param_2;
    }
    puVar2[1] = *(undefined8 *)(param_3 + 8);
    FUN_14054c6c4(puVar2 + 3,param_3 + 0x18);
    return;
  }
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c27f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146c27f54 FUN_146c27f54 body=193 status=ok
// SIG undefined FUN_146c27f54(void)

void FUN_146c27f54(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_149f3adb0;
    puVar2[2] = param_1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    FUN_1407a57f6(puVar2 + 3,0,1);
    puVar1 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar2 = (undefined8 *)*param_2;
    }
    puVar2[1] = *(undefined8 *)(param_3 + 8);
    FUN_144756208(puVar2 + 3,param_3 + 0x18);
    return;
  }
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c28007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146c28015 FUN_146c28015 body=193 status=ok
// SIG undefined FUN_146c28015(void)

void FUN_146c28015(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_149f3ace0;
    puVar2[2] = param_1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    FUN_140330574(puVar2 + 3,0,1);
    puVar1 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      puVar2 = (undefined8 *)*param_2;
    }
    puVar2[1] = *(undefined8 *)(param_3 + 8);
    FUN_146bff298(puVar2 + 3,param_3 + 0x18);
    return;
  }
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 != (undefined8 *)0x0) {
    *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000146c28049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}


