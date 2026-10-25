// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487ad836 FUN_1487ad836 body=32 status=ok
// SIG undefined FUN_1487ad836(void)

void FUN_1487ad836(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_141862cc8(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1487ad8a4 FUN_1487ad8a4 body=304 status=ok
// SIG undefined FUN_1487ad8a4(void)

void FUN_1487ad8a4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ada0c FUN_1487ada0c body=59 status=ok
// SIG undefined FUN_1487ada0c(void)

undefined8 FUN_1487ada0c(longlong *param_1)

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



// FUNCTION 1487adaae FUN_1487adaae body=107 status=ok
// SIG undefined FUN_1487adaae(void)

/* WARNING: Removing unreachable block (ram,0x0001487adae0) */
/* WARNING: Removing unreachable block (ram,0x0001487adabc) */
/* WARNING: Removing unreachable block (ram,0x0001487adad2) */
/* WARNING: Removing unreachable block (ram,0x0001487adaeb) */
/* WARNING: Removing unreachable block (ram,0x0001487adad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487adaae(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb70148;
  LOCK();
  UNLOCK();
  DAT_14cb70148 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb70150 = _DAT_14cb70150 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb70150 = _DAT_14cb70150 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487adb1a FUN_1487adb1a body=107 status=ok
// SIG undefined FUN_1487adb1a(void)

/* WARNING: Removing unreachable block (ram,0x0001487adb4c) */
/* WARNING: Removing unreachable block (ram,0x0001487adb28) */
/* WARNING: Removing unreachable block (ram,0x0001487adb3e) */
/* WARNING: Removing unreachable block (ram,0x0001487adb57) */
/* WARNING: Removing unreachable block (ram,0x0001487adb40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487adb1a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb70168;
  LOCK();
  UNLOCK();
  DAT_14cb70168 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb70170 = _DAT_14cb70170 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb70170 = _DAT_14cb70170 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487adb86 FUN_1487adb86 body=341 status=ok
// SIG undefined FUN_1487adb86(void)

void FUN_1487adb86(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  
  if (param_3 != 0) {
    lVar5 = FUN_1414cbf4e();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
       (plVar6 = (longlong *)FUN_1448a53de(param_3), plVar6 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
      goto LAB_1487adbc5;
    }
  }
  plVar6 = (longlong *)0x0;
  cVar4 = '\0';
LAB_1487adbc5:
  plVar7 = (longlong *)(param_1 + 0x390);
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(plVar7);
  if ((cVar4 != '\0') && (cVar3 != '\0')) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6);
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7);
    if ((((*plVar6 == *plVar7) &&
         (((int)plVar6[1] == (int)plVar7[1] &&
          (*(int *)((longlong)plVar6 + 0xc) == *(int *)((longlong)plVar7 + 0xc))))) &&
        ((int)plVar6[2] == (int)plVar7[2])) &&
       ((*(int *)((longlong)plVar6 + 0x14) == *(int *)((longlong)plVar7 + 0x14) &&
        (plVar6[3] == plVar7[3])))) {
      uVar1 = *(uint *)(plVar6 + 5);
      uVar2 = *(uint *)(plVar7 + 5);
      uVar8 = (ulonglong)uVar2;
      if (uVar1 == uVar2) {
        if (1 < (int)uVar1) {
          uVar8 = 0;
          while( true ) {
            uVar9 = *(ushort *)(plVar6[4] + uVar8);
            uVar10 = (ulonglong)uVar9;
            uVar11 = *(ushort *)(plVar7[4] + uVar8);
            if (uVar9 != uVar11) break;
            if (uVar9 == 0) goto LAB_1487adcc5;
LAB_1487adc88:
            uVar8 = uVar8 + 2;
          }
          if ((uVar11 | uVar9) < 0x80) {
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar12 = (ulonglong)uVar11;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1487adc88;
          }
          if (uVar9 != uVar11) {
            return;
          }
        }
      }
      else {
        uVar8 = (ulonglong)(uVar2 + uVar1);
        if (uVar2 + uVar1 != 1) {
          return;
        }
      }
LAB_1487adcc5:
      FUN_1401927c2(param_1,uVar8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6) & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 1487adcf0 FUN_1487adcf0 body=434 status=ok
// SIG undefined FUN_1487adcf0(void)

void FUN_1487adcf0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x4b0);
  if (lVar3 == 0) {
    uVar2 = FUN_141848df8();
    lVar3 = FUN_14477b664(uVar2);
    *(longlong *)(param_1 + 0x4b0) = lVar3;
  }
  lVar4 = *(longlong *)(param_1 + 0x4b8);
  if (lVar4 == 0) {
    if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
      plVar5 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
        *(undefined8 *)(param_1 + 0x4b8) = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar4 = FUN_144aff482(uVar2,(longlong *)(param_1 + 0x4a8));
        *(longlong *)(param_1 + 0x4b8) = lVar4;
        if (lVar4 != 0) goto LAB_1487addce;
      }
    }
    plVar5 = &local_38;
  }
  else {
LAB_1487addce:
    lVar3 = *(longlong *)(lVar4 + 0x40);
    local_38 = lVar3;
    uVar2 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x48));
    local_30 = FUN_14477b664(uVar2);
    lVar4 = *(longlong *)(lVar4 + 0x50);
    local_28 = lVar4;
    if (local_30 == 0) {
      uVar2 = FUN_141848e32();
      local_30 = FUN_14477b664(uVar2);
    }
    if (lVar4 != 0) goto LAB_1487adda1;
    local_28 = 0;
    if ((lVar3 != 0) && (local_30 != 0)) {
      plVar5 = *(longlong **)(local_30 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
        local_28 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
        local_28 = FUN_144aff482(uVar2,&local_38);
        lVar3 = local_38;
        if (local_28 != 0) goto LAB_1487adda1;
      }
    }
    plVar5 = &local_40;
  }
  *plVar5 = 0;
  lVar3 = local_40;
LAB_1487adda1:
  local_40 = lVar3;
  FUN_1487adea4(param_1);
  FUN_1412d8e86(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487adea4 FUN_1487adea4 body=1065 status=ok
// SIG undefined FUN_1487adea4(void)

void FUN_1487adea4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80 [3];
  int local_68;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_2 == 0) {
    local_90 = 0;
    local_88 = 0x90211;
    local_80[0] = 0;
    uVar4 = FUN_1487ae8ce();
    if (*(longlong *)(param_1 + 0x4c8) == 0) {
      uVar6 = FUN_141848e32();
      uVar6 = FUN_14477b664(uVar6);
      *(undefined8 *)(param_1 + 0x4c8) = uVar6;
    }
    uVar6 = FUN_141848e32();
    uVar8 = FUN_141848e32();
    FUN_1402d1bfa(&local_d8,uVar8,uVar4);
    if (*(longlong **)(param_1 + 0x4c0) != local_d8) {
      *(undefined8 *)(param_1 + 0x4d0) = 0;
    }
    *(longlong **)(param_1 + 0x4c0) = local_d8;
    uVar8 = FUN_141848e32();
    lVar5 = FUN_141459e9e(uVar6,uVar8);
    if (*(longlong *)(param_1 + 0x4c8) != lVar5) {
      *(undefined8 *)(param_1 + 0x4d0) = 0;
    }
    uVar6 = FUN_14477b664(lVar5);
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x4c8) = lVar5;
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x4c0) != 0)) {
      *(undefined8 *)(param_1 + 0x4d0) = uVar4;
    }
    goto LAB_1487adfb3;
  }
  lVar5 = *(longlong *)(param_1 + 0x4b0);
  if (lVar5 == 0) {
    uVar4 = FUN_141848df8();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x4b0) = lVar5;
  }
  lVar7 = *(longlong *)(param_1 + 0x4b8);
  if (lVar7 == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x4a8) == 0)) goto LAB_1487adfb3;
    plVar9 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar9 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x4b8) = 0;
      goto LAB_1487adfb3;
    }
    uVar4 = (**(code **)(*plVar9 + 0x110))(plVar9);
    lVar7 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x4a8));
    *(longlong *)(param_1 + 0x4b8) = lVar7;
    if (lVar7 == 0) goto LAB_1487adfb3;
  }
  FUN_1408fef08(lVar7,&local_90);
  local_b0 = 0x100000000;
  local_a0 = 0xffffffff;
  uStack_98 = 0;
  uStack_a8 = local_80;
  if (local_68 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_b0);
    iVar10 = local_68;
  }
  uStack_b8 = CONCAT44(uStack_94,uStack_98);
  local_c0 = local_a0;
  uVar4 = local_c0;
  local_d0 = (undefined4)local_b0;
  uStack_cc = local_b0._4_4_;
  uStack_c8 = (undefined4)uStack_a8;
  uStack_c4 = uStack_a8._4_4_;
  local_c0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
  local_d8 = &local_90;
  if ((local_c0._4_4_ != iVar10) || (uStack_a8 != local_80)) {
    iVar3 = local_c0._4_4_;
    local_c0 = uVar4;
    do {
      if (*param_2 == *(longlong *)(*local_d8 + (longlong)iVar3 * 0x20)) {
        plVar9 = (longlong *)(*local_d8 + (longlong)iVar3 * 0x20);
        lVar5 = plVar9[1];
        if (lVar5 == 0) {
          uVar4 = FUN_141848e32();
          lVar5 = FUN_14477b664(uVar4);
          plVar9[1] = lVar5;
        }
        lVar7 = plVar9[2];
        if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*plVar9 != 0)) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            lVar7 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar7 = FUN_144aff482(uVar4,plVar9);
          }
          plVar9[2] = lVar7;
        }
        if (*(longlong *)(param_1 + 0x4c8) == 0) {
          uVar4 = FUN_141848e32();
          uVar4 = FUN_14477b664(uVar4);
          *(undefined8 *)(param_1 + 0x4c8) = uVar4;
        }
        uVar4 = FUN_141848e32();
        uVar6 = FUN_141848e32();
        FUN_1402d1bfa(&local_b0,uVar6,lVar7);
        if (*(longlong *)(param_1 + 0x4c0) != local_b0) {
          *(undefined8 *)(param_1 + 0x4d0) = 0;
        }
        *(longlong *)(param_1 + 0x4c0) = local_b0;
        uVar6 = FUN_141848e32();
        lVar5 = FUN_141459e9e(uVar4,uVar6);
        if (*(longlong *)(param_1 + 0x4c8) != lVar5) {
          *(undefined8 *)(param_1 + 0x4d0) = 0;
        }
        uVar4 = FUN_14477b664(lVar5);
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x4c8) = lVar5;
        uVar4 = local_c0;
        if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x4c0) != 0)) {
          *(longlong *)(param_1 + 0x4d0) = lVar7;
        }
        break;
      }
      local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~uStack_cc);
      FUN_1449c0562(&local_d0);
      iVar3 = local_c0._4_4_;
      uVar4 = local_c0;
    } while (local_d8 != &local_90 ||
             ((undefined8 *)CONCAT44(uStack_c4,uStack_c8) != local_80 || local_c0._4_4_ != iVar10));
  }
  local_c0 = uVar4;
  local_48 = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1408ff272(&local_90);
LAB_1487adfb3:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ae2ce FUN_1487ae2ce body=980 status=ok
// SIG undefined FUN_1487ae2ce(void)

void FUN_1487ae2ce(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [40];
  undefined8 *local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  for (plVar2 = param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[4]) {
    if ((*(uint *)(plVar2 + 1) & 0x30) != 0) goto LAB_1487ae4e6;
  }
  plVar2 = param_1 + 0x72;
  cVar5 = (**(code **)(param_1[0x72] + 0x30))(plVar2);
  if ((cVar5 != '\0') && (cVar5 = (**(code **)(*plVar2 + 0x18))(plVar2), cVar5 != '\0')) {
    lVar7 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if ((lVar7 == 0) || (cVar5 = (**(code **)(*plVar2 + 0x18))(plVar2), cVar5 == '\0')) {
      bVar6 = 0;
    }
    else {
      bVar6 = FUN_140a10ba2(lVar7,plVar2);
      bVar6 = bVar6 ^ 1;
    }
    if (((param_1 != (longlong *)0x0) && (lVar8 = FUN_1447210f0(param_1), lVar8 != 0)) &&
       ((*(byte *)(lVar8 + 0x155) & 0x20) == 0)) {
      if ((lVar7 == 0) || (cVar5 = FUN_1412d93ca(lVar7,param_1), cVar5 == '\0')) {
        if ((bVar6 == 0) || (param_1[0x8d] == 0)) {
          (**(code **)(param_1[0x72] + 0x58))(plVar2);
          param_1[0x91] = param_1[0x8c];
          *(int *)(param_1 + 0x92) = (int)param_1[0x8d];
          *(undefined4 *)((longlong)param_1 + 0x494) = *(undefined4 *)((longlong)param_1 + 0x46c);
          *(int *)(param_1 + 0x93) = (int)param_1[0x8e];
          *(undefined4 *)((longlong)param_1 + 0x49c) = *(undefined4 *)((longlong)param_1 + 0x474);
          iVar1 = (int)param_1[0x90];
          *(int *)(param_1 + 0x95) = iVar1;
          if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4ac) == 0) {
            *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
          }
          else {
            FUN_1446dd670(param_1 + 0x94,iVar1);
            if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
            }
          }
          goto LAB_1487ae4e6;
        }
        FUN_1401950da(local_e8,param_1 + 0x8c);
        (**(code **)(*param_1 + 0x638))(param_1,local_e8);
        if (*(longlong *)(lVar8 + 0x1f0) == 0) {
          puVar9 = (undefined8 *)(lVar8 + 0x458);
        }
        else {
          puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
        }
        uVar4 = *puVar9;
        local_98 = &LAB_1410ecd20;
        local_90 = 0x390;
        FUN_1487af760(&local_c0,param_1,&local_98);
        local_98 = (undefined1 *)0x0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_c0);
        local_58 = 1;
        FUN_14016fdb0(uVar4,&local_a0,&local_98);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        param_1[0x98] = local_a0;
      }
      else {
        local_a0 = 0;
        FUN_14485c47a(&local_a0,param_1);
        local_a8 = 0;
        FUN_14485c47a(&local_a8,param_2);
        lVar7 = local_a0;
        uVar4 = local_a8;
        if (*(longlong *)(lVar8 + 0x1f0) == 0) {
          puVar9 = (undefined8 *)(lVar8 + 0x458);
        }
        else {
          puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
        }
        uVar3 = *puVar9;
        local_c0 = (undefined8 *)0x0;
        local_b8 = 0;
        FUN_1446efa72(&local_c0,0,4,0x10);
        puVar9 = local_c0;
        local_b8 = 4;
        *local_c0 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_c0[2] = lVar10;
        *local_c0 = &PTR_FUN_14b3e57b0;
        local_c0[3] = 0;
        FUN_14485c47a(local_c0 + 3,param_1);
        puVar9[4] = lVar7;
        puVar9[5] = uVar4;
        *(undefined1 *)(puVar9 + 6) = param_3;
        local_98 = (undefined1 *)0x0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_c0);
        local_58 = 1;
        FUN_14016fdb0(uVar3,&local_b0,&local_98);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        param_1[0x99] = local_b0;
      }
      FUN_1449db362(&local_c0);
    }
  }
LAB_1487ae4e6:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ae6c4 FUN_1487ae6c4 body=521 status=ok
// SIG undefined FUN_1487ae6c4(void)

void FUN_1487ae6c4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90 [2];
  undefined1 local_80 [24];
  int local_68;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = *(longlong *)(param_1 + 0x4b0);
  if (lVar5 == 0) {
    uVar4 = FUN_141848df8();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x4b0) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x4b8);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x4a8) == 0)) goto LAB_1487ae82e;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x4b8) = 0;
      goto LAB_1487ae82e;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x4a8));
    *(longlong *)(param_1 + 0x4b8) = lVar6;
    if (lVar6 == 0) goto LAB_1487ae82e;
  }
  FUN_1408fef08(lVar6,local_90);
  local_b0 = 0x100000000;
  local_a0 = 0xffffffff;
  uStack_98 = 0;
  uStack_a8 = local_80;
  if (local_68 == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_b0);
    iVar7 = local_68;
  }
  uStack_b8 = CONCAT44(uStack_94,uStack_98);
  local_c0 = local_a0;
  uVar4 = local_c0;
  local_d0 = (undefined4)local_b0;
  uStack_cc = local_b0._4_4_;
  uStack_c8 = (undefined4)uStack_a8;
  uStack_c4 = uStack_a8._4_4_;
  local_c0._4_4_ = (int)((ulonglong)local_a0 >> 0x20);
  local_d8 = local_90;
  if ((local_c0._4_4_ != iVar7) || (uStack_a8 != local_80)) {
    iVar3 = local_c0._4_4_;
    local_c0 = uVar4;
    do {
      uVar4 = *(undefined8 *)(*local_d8 + (longlong)iVar3 * 0x20);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
      local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~uStack_cc);
      FUN_1449c0562(&local_d0);
      iVar3 = local_c0._4_4_;
      uVar4 = local_c0;
    } while (local_d8 != local_90 ||
             ((undefined1 *)CONCAT44(uStack_c4,uStack_c8) != local_80 || local_c0._4_4_ != iVar7));
  }
  local_c0 = uVar4;
  local_48 = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1408ff272(local_90);
LAB_1487ae82e:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ae8ce FUN_1487ae8ce body=138 status=ok
// SIG undefined FUN_1487ae8ce(void)

longlong FUN_1487ae8ce(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb704c8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144815d88(DAT_14cb704c8,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ae95a FUN_1487ae95a body=604 status=ok
// SIG undefined FUN_1487ae95a(void)

undefined2 ** FUN_1487ae95a(longlong param_1,undefined2 **param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_138 [32];
  undefined2 *local_118;
  undefined2 *local_110;
  undefined4 local_108;
  undefined1 local_fc [12];
  undefined2 *local_f0;
  int local_e8;
  undefined1 local_dc [12];
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_bc [12];
  undefined2 *local_b0;
  int local_a8;
  undefined1 local_9c [12];
  undefined2 *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1406f1bc8(param_1 + 0x4f0,local_80);
  FUN_144a659ac(local_70,local_9c,4);
  FUN_1408226d0(local_9c,&local_90,1);
  puVar1 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar1 = local_90;
  }
  FUN_144a659ac(local_70,local_bc,3);
  FUN_1408226d0(local_bc,&local_b0,1);
  puVar2 = &DAT_149dfb77a;
  if (local_a8 != 0) {
    puVar2 = local_b0;
  }
  FUN_144a659ac(local_70,local_dc,2);
  FUN_1408226d0(local_dc,&local_d0,1);
  puVar3 = &DAT_149dfb77a;
  if (local_c8 != 0) {
    puVar3 = local_d0;
  }
  FUN_144a659ac(local_70,local_fc,1);
  FUN_1408226d0(local_fc,&local_f0,1);
  puVar4 = &DAT_149dfb77a;
  if (local_e8 != 0) {
    puVar4 = local_f0;
  }
  local_118 = puVar2;
  local_110 = puVar1;
  local_108 = param_3;
  FUN_140002266(param_2,L"%s_%s_%s_%s_switch_%d",puVar4,puVar3);
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_118 = (undefined2 *)CONCAT44(local_118._4_4_,1);
  FUN_140807d8e(param_2,&local_90,&DAT_149e0635c,&DAT_149e01f60);
  if (&local_90 == param_2) {
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_90;
    local_90 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_88;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_84;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aebb8 FUN_1487aebb8 body=72 status=ok
// SIG undefined FUN_1487aebb8(void)

longlong * FUN_1487aebb8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *(longlong *)(*param_1 + -8 + (longlong)iVar2 * 8);
  *param_2 = lVar1;
  if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
    FUN_1456cec3c();
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1487b549a(param_1);
  return param_2;
}



// FUNCTION 1487aec00 FUN_1487aec00 body=107 status=ok
// SIG undefined FUN_1487aec00(void)

void FUN_1487aec00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x438);
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x4b0);
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14479d2ce(lVar1 + 0x5e8);
      lVar1 = *(longlong *)(param_1 + 0x4b0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
    }
    *(longlong *)(lVar1 + 0x550) = lVar2;
  }
  return;
}



// FUNCTION 1487aec72 FUN_1487aec72 body=132 status=ok
// SIG undefined FUN_1487aec72(void)

undefined8 FUN_1487aec72(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_144a79cc8();
  lVar2 = FUN_1405d1c86(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_1414cbf4e();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) &&
        (plVar4 = (longlong *)FUN_1448a53de(lVar2), plVar4 != (longlong *)0x0)) &&
       (lVar2 = (**(code **)(*plVar4 + 8))(plVar4), lVar2 != 0)) {
      lVar3 = FUN_140928036();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        return CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1487aecf6 FUN_1487aecf6 body=28 status=ok
// SIG undefined FUN_1487aecf6(void)

void FUN_1487aecf6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_140dd7130(param_1);
  return;
}



// FUNCTION 1487aed4a FUN_1487aed4a body=40 status=ok
// SIG undefined FUN_1487aed4a(void)

undefined8 FUN_1487aed4a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140cad1c2(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1487aed7e FUN_1487aed7e body=122 status=ok
// SIG undefined FUN_1487aed7e(void)

void FUN_1487aed7e(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  code **local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb70378 != 0) {
    local_28 = &local_38;
    local_20 = &local_30;
    local_30 = FUN_143c92b0e;
    local_10 = &local_20;
    local_18 = FUN_1487b57d8;
    local_38 = param_1;
    FUN_1487b5536();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487aedfa FUN_1487aedfa body=110 status=ok
// SIG undefined FUN_1487aedfa(void)

void FUN_1487aedfa(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b074610;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &DAT_14a171d50;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &DAT_14a171d50;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xb] = &DAT_14cb70058;
  param_1[0xf] = &DAT_14cb70058;
  return;
}



// FUNCTION 1487aeea0 FUN_1487aeea0 body=40 status=ok
// SIG undefined FUN_1487aeea0(void)

undefined8 FUN_1487aeea0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140901f38(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1487aeed6 FUN_1487aeed6 body=113 status=ok
// SIG undefined FUN_1487aeed6(void)

void FUN_1487aeed6(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1 + 2,0,0xa8);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b075620;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  param_1[0x15] = 0;
  return;
}



// FUNCTION 1487aef48 FUN_1487aef48 body=22 status=ok
// SIG undefined FUN_1487aef48(void)

ulonglong FUN_1487aef48(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cb705d8;
  if (DAT_14cb705d8 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cb705d8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb705d8 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cb705d8 + 0x1fc) < (int)DAT_14cb705d8[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cb705d8 + 0x300))(DAT_14cb705d8);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 1487aef96 FUN_1487aef96 body=40 status=ok
// SIG undefined FUN_1487aef96(void)

undefined8 FUN_1487aef96(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140ea9606(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1487aefca FUN_1487aefca body=3 status=ok
// SIG undefined FUN_1487aefca(void)

undefined8 FUN_1487aefca(void)

{
  return 0;
}



// FUNCTION 1487aefce FUN_1487aefce body=409 status=ok
// SIG undefined FUN_1487aefce(void)

void FUN_1487aefce(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
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
  iVar8 = (int)param_2[1];
  lVar7 = (longlong)iVar8;
  *(uint *)(param_2 + 1) = iVar8 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
    FUN_1487b58a2(param_2,iVar8);
  }
  lVar3 = *param_2;
  *(undefined8 *)(lVar3 + lVar7 * 0x28) = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  puVar2 = (undefined4 *)(lVar3 + 8 + lVar7 * 0x28);
  *puVar2 = *(undefined4 *)(param_1 + 0x10);
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x18 + lVar7 * 0x28) = 0;
  iVar8 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(lVar3 + 0x20 + lVar7 * 0x28) = iVar8;
  if ((longlong)iVar8 == 0) {
    *(undefined4 *)(lVar3 + lVar7 * 0x28 + 0x24) = 0;
  }
  else {
    puVar9 = (undefined8 *)(lVar3 + lVar7 * 0x28 + 0x18);
    FUN_1446dd670(puVar9,iVar8,0);
    memcpy((void *)*puVar9,_Src,(longlong)iVar8 * 2);
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar7 = param_1 + 0x40;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar7;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar8 = *(int *)(param_1 + 0x58);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar8) || (uStack_50 != lVar7)) {
    do {
      FUN_1487b5936(param_2,*local_80 + (longlong)iStack_64 * 0x38 + 8);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar7 || iStack_64 != iVar8));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487af168 FUN_1487af168 body=328 status=ok
// SIG undefined FUN_1487af168(void)

int * FUN_1487af168(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
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
  *param_2 = 0;
  *(longlong *)(param_2 + 2) = param_1 + 8;
  uVar4 = local_70;
  if (*param_3 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar2 = param_1 + 0x40;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar2;
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar6 = *(int *)(param_1 + 0x58);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar4 = local_70;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar6) || (uStack_58 != lVar2)) {
      iVar7 = 1;
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        if (*(longlong *)(lVar3 + (longlong)iVar5 * 0x38) == *param_3) {
          *param_2 = iVar7;
          *(longlong *)(param_2 + 2) = lVar3 + (longlong)iVar5 * 0x38 + 8;
          uVar4 = local_70;
          break;
        }
        iVar7 = iVar7 + 1;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar2 || local_70._4_4_ != iVar6));
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487af2b2 FUN_1487af2b2 body=94 status=ok
// SIG undefined FUN_1487af2b2(void)

undefined8 FUN_1487af2b2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1487af312(param_1,local_28,param_2);
  FUN_1487af168(param_1,local_38,local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487af312 FUN_1487af312 body=132 status=ok
// SIG undefined FUN_1487af312(void)

undefined8 FUN_1487af312(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  lVar1 = FUN_140149a73(param_3,0);
  if (lVar1 != 0) {
    FUN_14039fc7b(param_1 + 0x80,local_28,lVar1,0);
  }
  FUN_1403a0728(local_28,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487af398 FUN_1487af398 body=105 status=ok
// SIG undefined FUN_1487af398(void)

undefined8 FUN_1487af398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1447210f0(param_3);
  FUN_1487af312(param_1,local_28,uVar1);
  FUN_1487af168(param_1,local_38,local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487af402 FUN_1487af402 body=95 status=ok
// SIG undefined FUN_1487af402(void)

longlong * FUN_1487af402(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0xa8);
    if (lVar1 == 0) {
      FUN_143558452(param_1,param_2);
    }
    else {
      (**(code **)(*(longlong *)(lVar1 + 0x390) + 0x90))(lVar1 + 0x390,param_2);
    }
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0xb0);
  }
  return param_2;
}



// FUNCTION 1487af462 FUN_1487af462 body=241 status=ok
// SIG undefined FUN_1487af462(void)

void FUN_1487af462(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    lVar3 = FUN_1447210f0(param_1);
    bVar1 = *(byte *)(lVar3 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      FUN_1433c2874(param_1);
      FUN_1412e3d1e(&local_30);
      local_20 = *(undefined8 *)(param_1 + 0x18);
      FUN_1400021e4(&local_20,&local_40);
      puVar4 = local_40;
      if (local_38 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      iVar2 = local_38 + -1;
      if (local_38 == 0) {
        iVar2 = 0;
      }
      local_30 = FUN_144a49b4a(iVar2,puVar4);
      local_2c = local_30;
      local_28 = local_30;
      local_24 = local_30;
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_147b9772c(param_1,&local_30);
    }
  }
  FUN_140a0f852(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487af760 FUN_1487af760 body=173 status=ok
// SIG undefined FUN_1487af760(void)

longlong * FUN_1487af760(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a1c8830;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b3e5740;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 1487af80e FUN_1487af80e body=78 status=ok
// SIG undefined FUN_1487af80e(void)

void FUN_1487af80e(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x4b0) + 0x550) = 0;
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x4b0) = param_2;
  FUN_1487aec00(param_1);
  return;
}



// FUNCTION 1487af85c FUN_1487af85c body=701 status=ok
// SIG undefined FUN_1487af85c(void)

undefined8 * FUN_1487af85c(longlong param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined4 local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_3 == '\x01') {
    local_c8 = (longlong *)(param_1 + 0x148);
    local_c0 = param_1;
    local_b8 = param_2;
    FUN_1447a97f4(&local_70,param_3 + 0x10);
    if (0 < local_6c) {
      iVar9 = 0;
      do {
        FUN_144a7c8fe(&local_70,local_7c,iVar9,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_70,local_88,iVar9,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_70,local_94,iVar9,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_70,local_a0,iVar9,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_70,local_ac,iVar9,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_70,iVar9,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_6c);
    }
    param_1 = local_c0;
    param_2 = local_b8;
    plVar10 = local_c8;
    if (local_58 != 0) {
      FUN_1400020a8();
      param_1 = local_c0;
      param_2 = local_b8;
      plVar10 = local_c8;
    }
  }
  else {
    local_70 = *(undefined4 *)(param_3 + 0x10);
    plVar10 = (longlong *)(param_1 + 0x148);
  }
  iVar9 = FUN_1402b3efe(plVar10,local_70);
  if ((iVar9 != -1) &&
     (lVar8 = *plVar10 + (longlong)iVar9 * 0x48, piVar6 = (int *)(lVar8 + 0x38),
     piVar6 != (int *)0x0 && lVar8 != 0)) {
    iVar9 = *piVar6;
    if ((-1 < (longlong)iVar9) &&
       ((iVar9 < *(int *)(param_1 + 0x80) && ((longlong)*(int *)(param_1 + 0xa0) != 0)))) {
      lVar8 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x98) + lVar8) == iVar9) {
          lVar8 = *(longlong *)(param_1 + 0x78);
          lVar7 = (longlong)iVar9 * 0x280;
          puVar1 = (undefined8 *)(lVar8 + 0x210 + lVar7);
          uVar2 = puVar1[1];
          *param_2 = *puVar1;
          param_2[1] = uVar2;
          param_2[2] = *(undefined8 *)(lVar8 + 0x220 + lVar7);
          goto LAB_1487afa77;
        }
        lVar8 = lVar8 + 4;
      } while ((longlong)*(int *)(param_1 + 0xa0) * 4 != lVar8);
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
LAB_1487afa77:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487afb1a FUN_1487afb1a body=683 status=ok
// SIG undefined FUN_1487afb1a(void)

void FUN_1487afb1a(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_128 [47];
  undefined1 local_f9;
  longlong local_f8;
  int local_ec [2];
  int local_e4;
  int local_e0 [2];
  int local_d8;
  int local_d4 [2];
  int local_cc;
  int local_c8 [2];
  int local_c0;
  int local_bc [2];
  int local_b4;
  undefined1 local_ac;
  char local_a8 [16];
  undefined4 local_98 [6];
  longlong local_80;
  undefined4 local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140c258c2(param_2,local_a8);
  plVar1 = (longlong *)(param_1 + 0x148);
  if (local_a8[0] == '\x01') {
    local_f9 = param_3;
    local_f8 = param_1;
    FUN_1447a97f4(&local_70,local_98);
    if (0 < local_6c) {
      iVar4 = 0;
      do {
        FUN_144a7c8fe(&local_70,local_bc,iVar4,1);
        if ((((((local_bc[0] == DAT_14cb7beb0) && (local_b4 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_70,local_c8,iVar4,1), local_c8[0] == DAT_14cb7bec8 &&
               (local_c0 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_70,local_d4,iVar4,1), local_d4[0] == DAT_14cb7bee0 &&
              (local_cc == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_70,local_e0,iVar4,1), local_e0[0] == DAT_14cb7bef8 &&
             (local_d8 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_70,local_ec,iVar4,1), local_ec[0] == DAT_14cb7bf10 &&
            (local_e4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_70,iVar4,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_6c);
    }
    param_1 = local_f8;
    local_98[0] = local_70;
    param_3 = local_f9;
    if (local_58 != 0) {
      FUN_1400020a8();
      param_1 = local_f8;
      param_3 = local_f9;
    }
  }
  iVar4 = FUN_1402b3efe(plVar1,local_98[0],local_a8);
  if ((iVar4 != -1) &&
     (lVar2 = *plVar1 + (longlong)iVar4 * 0x48, piVar3 = (int *)(lVar2 + 0x38),
     piVar3 != (int *)0x0 && lVar2 != 0)) {
    iVar4 = *piVar3;
    if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x80))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x90 + (longlong)iVar4 * 0x280) = param_3;
      local_ac = 0;
      FUN_141130d84(param_1,*piVar3,0);
    }
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487afdc6 FUN_1487afdc6 body=1295 status=ok
// SIG undefined FUN_1487afdc6(void)

undefined8 *
FUN_1487afdc6(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 uVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  undefined8 *local_108;
  int local_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f0 [2];
  int local_e8;
  int local_e4 [2];
  int local_dc;
  int local_d8 [2];
  int local_d0;
  int local_cc [2];
  int local_c4;
  char local_c0 [16];
  undefined4 local_b0 [6];
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_2 = 0;
  param_2[1] = 0;
  local_110 = param_4;
  FUN_140c258c2(param_3,local_c0);
  uVar9 = local_b0[0];
  local_118 = param_1;
  if (local_c0[0] == '\x01') {
    local_108 = param_2;
    FUN_1447a97f4(&local_88,local_b0);
    if (0 < local_88._4_4_) {
      iVar12 = 0;
      do {
        FUN_144a7c8fe(&local_88,&local_100,iVar12,1);
        if ((((((local_100 == DAT_14cb7beb0) && (local_f8 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_88,local_cc,iVar12,1), local_cc[0] == DAT_14cb7bec8 &&
               (local_c4 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_88,local_d8,iVar12,1), local_d8[0] == DAT_14cb7bee0 &&
              (local_d0 == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_88,local_e4,iVar12,1), local_e4[0] == DAT_14cb7bef8 &&
             (local_dc == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_88,local_f0,iVar12,1), local_f0[0] == DAT_14cb7bf10 &&
            (local_e8 == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_88,iVar12,0);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_88._4_4_);
    }
    uVar9 = (undefined4)local_88;
    param_2 = local_108;
    if (local_70 != 0) {
      FUN_1400020a8();
      param_2 = local_108;
    }
  }
  iVar12 = FUN_1402b3efe((longlong *)(param_1 + 0x148),uVar9,local_c0);
  if ((iVar12 != -1) &&
     (lVar5 = *(longlong *)(param_1 + 0x148) + (longlong)iVar12 * 0x48,
     puVar10 = (uint *)(lVar5 + 0x38), puVar10 != (uint *)0x0 && lVar5 != 0)) {
    uVar2 = *puVar10;
    if ((-1 < (longlong)(int)uVar2) && ((int)uVar2 < *(int *)(local_118 + 0x80))) {
      lVar5 = (longlong)(int)uVar2 * 0x280 + *(longlong *)(local_118 + 0x78);
      if (*local_110 == 0) {
        FUN_1449f3ff4(lVar5 + 0x40,param_2);
      }
      else if ((longlong)*(int *)(lVar5 + 0x120) != 0) {
        piVar8 = *(int **)(lVar5 + 0x118);
        piVar1 = piVar8 + *(int *)(lVar5 + 0x120);
        do {
          iVar12 = *piVar8;
          if ((-1 < (longlong)iVar12) && (iVar12 < *(int *)(local_118 + 0x80))) {
            lVar5 = *(longlong *)(local_118 + 0x78);
            lVar11 = (longlong)iVar12 * 0x280;
            lVar7 = *(longlong *)(lVar5 + 600 + lVar11);
            if (lVar7 != 0) {
              puVar6 = *(undefined4 **)(lVar7 + 8);
              if (puVar6 == (undefined4 *)0x0) {
                puVar6 = &DAT_14c9485f0;
              }
              local_88 = (wchar_t *)0x0;
              uStack_80 = 0;
              FUN_1400b2348(puVar6,&local_88,1);
              FUN_1400021e4(local_110);
              uVar9 = uStack_fc;
              iVar12 = local_100;
              if ((int)uStack_80 == local_f8) {
                bVar13 = true;
                if (1 < (int)uStack_80) {
                  iVar4 = wcscmp(local_88,(wchar_t *)CONCAT44(uStack_fc,local_100));
                  bVar13 = iVar4 == 0;
                }
              }
              else {
                bVar13 = local_f8 + (int)uStack_80 == 1;
              }
              if (CONCAT44(uVar9,iVar12) != 0) {
                FUN_1400020a8(CONCAT44(uVar9,iVar12));
              }
              if (local_88 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              if (bVar13) {
                lVar5 = lVar5 + lVar11;
                if (*(int *)(lVar5 + 0x150) != *(int *)(lVar5 + 0x17c)) {
                  lVar7 = lVar5 + 0x180;
                  if (*(longlong *)(lVar5 + 0x188) != 0) {
                    lVar7 = *(longlong *)(lVar5 + 0x188);
                  }
                  iVar12 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar5 + 400) - 1U & *puVar10) * 4);
                  if (iVar12 != -1) {
                    do {
                      lVar7 = *(longlong *)(lVar5 + 0x148) + (longlong)iVar12 * 0x30;
                      if (*(uint *)(*(longlong *)(lVar5 + 0x148) + (longlong)iVar12 * 0x30) ==
                          *puVar10) goto LAB_1487b0190;
                      iVar12 = *(int *)(lVar7 + 0x28);
                    } while (iVar12 != -1);
                  }
                }
                lVar7 = 0;
LAB_1487b0190:
                lVar11 = lVar7 + 8;
                if (lVar7 == 0) {
                  lVar11 = 0;
                }
                lVar5 = lVar5 + 0x40;
                if (lVar11 != 0) {
                  lVar5 = lVar11;
                }
                local_88 = &DAT_14a171d50;
                local_78 = 0;
                local_70 = 0;
                uStack_80 = *(undefined8 *)(lVar5 + 8);
                FUN_1406022fe(&local_78,lVar5 + 0x10);
                FUN_1449f3ff4(&local_88,param_2);
                local_88 = L"㵆䁥\x01";
                uVar3 = local_70 >> 0x20;
                local_70 = local_70 & 0xffffffff00000000;
                if ((int)uVar3 != 0) {
                  FUN_140115c12(&local_78,0);
                }
                uStack_80 = 0;
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar1);
      }
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487b02d6 FUN_1487b02d6 body=125 status=ok
// SIG undefined FUN_1487b02d6(void)

void FUN_1487b02d6(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x78);
  cVar2 = FUN_1412b46ca(param_2 + 0x38);
  if (*(char *)(lVar1 + 0x91 + (longlong)param_5 * 0x280) != cVar2) {
    *(char *)((longlong)param_5 * 0x280 + lVar1 + 0x91) = cVar2;
    local_24 = 0;
    FUN_141130d84(param_1,param_5,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b0354 FUN_1487b0354 body=189 status=ok
// SIG undefined FUN_1487b0354(void)

longlong * FUN_1487b0354(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4) != 0) {
        FUN_140c258c2(*(longlong *)(lVar2 + lVar4) + 0x18,local_70);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_140f12bd2(param_1,iVar1);
        }
        FUN_14014e938((longlong)iVar1 * 0x38 + *param_1,local_70);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487b0412 FUN_1487b0412 body=164 status=ok
// SIG undefined FUN_1487b0412(void)

void FUN_1487b0412(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x20);
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      lVar2 = *plVar7;
      if (0 < *(int *)(lVar2 + 0x18)) {
        plVar1 = (longlong *)(lVar2 + 0x10);
        uVar6 = 0;
        do {
          lVar3 = *plVar1;
          iVar5 = (int)uVar6;
          cVar4 = FUN_1487b2830(*(undefined8 *)(lVar3 + uVar6 * 0x10),param_2);
          if (cVar4 != '\0') {
            FUN_140c2505a(param_1,lVar3 + uVar6 * 0x10,1);
            FUN_140c24da0(plVar1,uVar6);
            FUN_140c24e18(plVar1);
            iVar5 = iVar5 + -1;
          }
          uVar6 = (ulonglong)(iVar5 + 1U);
        } while ((int)(iVar5 + 1U) < *(int *)(lVar2 + 0x18));
      }
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
  }
  return;
}



// FUNCTION 1487b04b6 FUN_1487b04b6 body=103 status=ok
// SIG undefined FUN_1487b04b6(void)

void FUN_1487b04b6(longlong param_1,int param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  int *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  if (param_2 < *(int *)(param_1 + 0x80)) {
    FUN_144a7cc9e(param_1 + 0xa8);
    local_18 = &local_1c;
    FUN_144a9d2f8(param_1 + 0x98);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b051e FUN_1487b051e body=257 status=ok
// SIG undefined FUN_1487b051e(void)

undefined8 * FUN_1487b051e(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68;
  longlong **local_60;
  undefined1 *local_58;
  code **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = DAT_14cb84f20;
  if ((DAT_14cb84f20 != 0) && ((longlong)*(int *)(param_2 + 1) != 0)) {
    plVar4 = (longlong *)*param_2;
    lVar5 = (longlong)*(int *)(param_2 + 1) << 3;
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        local_98 = *(undefined8 *)(lVar1 + 0x28);
        local_90 = *(undefined4 *)(lVar1 + 0x30);
        local_68 = FUN_143c930d6;
        local_60 = &local_88;
        local_58 = &LAB_143c930c8;
        local_88 = plVar4;
        local_80 = param_1;
        local_50 = &local_68;
        uVar3 = FUN_1401ad114();
        local_78 = local_98;
        local_70 = local_90;
        FUN_140e9367e(lVar2,&local_78,uVar3,&local_58);
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b0620 FUN_1487b0620 body=189 status=ok
// SIG undefined FUN_1487b0620(void)

longlong * FUN_1487b0620(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [40];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4) != 0) {
        FUN_140c258c2(*(longlong *)(lVar2 + lVar4) + 0x18,local_70);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_140f12bd2(param_1,iVar1);
        }
        FUN_14014e938((longlong)iVar1 * 0x38 + *param_1,local_70);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487b06de FUN_1487b06de body=109 status=ok
// SIG undefined FUN_1487b06de(void)

void FUN_1487b06de(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1487b6e48(param_1,iVar1);
    }
    FUN_1487b6e35((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1487b6ece(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1487b074c FUN_1487b074c body=115 status=ok
// SIG undefined FUN_1487b074c(void)

undefined4 * FUN_1487b074c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
      puVar4 = param_1;
    }
    FUN_1409c0f00(puVar4,param_1[6]);
    if (*(longlong *)(param_2 + 4) == 0) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0x100000000;
  }
  return param_1;
}



// FUNCTION 1487b07c0 FUN_1487b07c0 body=150 status=ok
// SIG undefined FUN_1487b07c0(void)

void FUN_1487b07c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  lVar3 = (longlong)param_5;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x248);
  FUN_1403a0728(param_2 + 0x38,&local_30);
  uVar2 = FUN_1405f6250(local_30);
  *(undefined1 *)(lVar1 + 0x20 + lVar3 * 0x28) = uVar2;
  lVar4 = (longlong)*(int *)(lVar1 + 8 + lVar3 * 0x28);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(lVar1 + lVar3 * 0x28);
    lVar3 = 0;
    do {
      FUN_1487b0858(param_1,*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while (lVar4 * 4 != lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b0858 FUN_1487b0858 body=246 status=ok
// SIG undefined FUN_1487b0858(void)

void FUN_1487b0858(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_68 [44];
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x78);
  lVar9 = (longlong)param_2 * 0x280;
  cVar1 = *(char *)(lVar3 + 0x110 + lVar9);
  *(undefined1 *)(lVar3 + 0x110 + lVar9) = 0;
  lVar8 = (longlong)*(int *)(lVar3 + 0x100 + lVar9);
  if (lVar8 == 0) {
    cVar10 = '\0';
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0xf8 + lVar9);
    lVar7 = 0;
    uVar12 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x248) + 0x20 +
                      (longlong)*(int *)(lVar4 + lVar7) * 0x28);
      uVar11 = (uint)(0x10202010101 >> ((byte)(iVar2 << 3) & 0x3f));
      if (6 < (byte)iVar2) {
        uVar11 = 1;
      }
      uVar6 = uVar12 & 0xff;
      bVar5 = (byte)uVar12;
      uVar12 = uVar11;
      if ((byte)uVar11 <= bVar5) {
        uVar12 = uVar6;
      }
      cVar10 = (char)uVar12;
      *(char *)(lVar3 + lVar9 + 0x110) = cVar10;
      lVar7 = lVar7 + 4;
    } while (lVar8 * 4 != lVar7);
  }
  if (cVar10 != cVar1) {
    local_3c = 0;
    FUN_141130d84(param_1,param_2,CONCAT71((int7)(int3)((uint)param_2 >> 8),1));
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487b0950 FUN_1487b0950 body=715 status=ok
// SIG undefined FUN_1487b0950(void)

ulonglong FUN_1487b0950(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e4 [2];
  int local_dc;
  int local_d8 [2];
  int local_d0;
  int local_cc [2];
  int local_c4;
  int local_c0 [2];
  int local_b8;
  int local_b4 [2];
  int local_ac;
  char local_a8 [16];
  undefined4 local_98 [6];
  longlong local_80;
  undefined4 local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)(int)param_2[1] == 0) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    lVar6 = *param_2;
    local_f8 = (longlong)(int)param_2[1] * 0x38 + lVar6;
    local_100 = (longlong *)(param_1 + 0x148);
    local_f0 = param_1;
    do {
      FUN_140c258c2(lVar6,local_a8);
      uVar4 = local_98[0];
      if (local_a8[0] == '\x01') {
        FUN_1447a97f4(&local_70,local_98);
        if (0 < local_6c) {
          iVar3 = 0;
          do {
            FUN_144a7c8fe(&local_70,local_b4,iVar3,1);
            if (((((local_b4[0] == DAT_14cb7beb0) && (local_ac == DAT_14cb7beb8)) ||
                 ((FUN_144a7c8fe(&local_70,local_c0,iVar3,1), local_c0[0] == DAT_14cb7bec8 &&
                  (local_b8 == DAT_14cb7bed0)))) ||
                (((FUN_144a7c8fe(&local_70,local_cc,iVar3,1), local_cc[0] == DAT_14cb7bee0 &&
                  (local_c4 == DAT_14cb7bee8)) ||
                 ((FUN_144a7c8fe(&local_70,local_d8,iVar3,1), local_d8[0] == DAT_14cb7bef8 &&
                  (local_d0 == DAT_14cb7bf00)))))) ||
               ((FUN_144a7c8fe(&local_70,local_e4,iVar3,1), local_e4[0] == DAT_14cb7bf10 &&
                (local_dc == DAT_14cb7bf18)))) {
              FUN_1402b5374(&local_70,iVar3,0);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_6c);
        }
        uVar4 = local_70;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      iVar3 = FUN_1402b3efe(local_100,uVar4,local_a8);
      if (iVar3 == -1) {
LAB_1487b0bc8:
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        uVar5 = 0;
        break;
      }
      if ((((*local_100 + (longlong)iVar3 * 0x48 == 0) ||
           (piVar2 = (int *)(*local_100 + (longlong)iVar3 * 0x48 + 0x38), piVar2 == (int *)0x0)) ||
          (iVar3 = *piVar2, iVar3 < 0)) || (*(int *)(local_f0 + 0x80) <= iVar3)) goto LAB_1487b0bc8;
      uVar1 = FUN_141131144();
      uVar5 = (ulonglong)uVar1;
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x38;
    } while (((byte)uVar1 & lVar6 != local_f8) != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1487b0c22 FUN_1487b0c22 body=432 status=ok
// SIG undefined FUN_1487b0c22(void)

void FUN_1487b0c22(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [12];
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((param_1 != 0) && (lVar2 = FUN_1447210f0(), lVar2 != 0)) &&
      (plVar3 = (longlong *)FUN_1406f625c(lVar2), plVar3 != (longlong *)0x0)) &&
     (lVar4 = (**(code **)(*plVar3 + 0x2c0))(plVar3), lVar4 != 0)) {
    local_98 = 0;
    uStack_90 = 0;
    local_a0 = FUN_1458d5842();
    if ((local_a0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_a0);
    }
    FUN_1434f53e8(lVar2,&local_a0,&local_98);
    lVar2 = local_98;
    lVar4 = (longlong)(int)uStack_90;
    if (lVar4 != 0) {
      lVar8 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar8);
        if (plVar3 != (longlong *)0x0) {
          uVar5 = FUN_140427846();
          plVar6 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar5);
          if (plVar6 != (longlong *)0x0) {
            uVar5 = FUN_140427846();
            plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
            if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
              (**(code **)(*plVar7 + 0x50))(plVar7,local_80);
              FUN_144a659ac(local_70,local_ac,2);
              plVar6 = (longlong *)FUN_144a8232a(local_ac);
              lVar1 = *plVar6;
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              if (lVar1 == param_2) {
                FUN_1487b0dd4(plVar3,param_3);
              }
            }
          }
        }
        lVar8 = lVar8 + 8;
      } while (lVar4 * 8 != lVar8);
    }
    if (local_98 != 0) {
      FUN_1400020a8(local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487b0dd4 FUN_1487b0dd4 body=314 status=ok
// SIG undefined FUN_1487b0dd4(void)

void FUN_1487b0dd4(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    uVar4 = FUN_140427846();
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140427846();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (((plVar6 != (longlong *)0x0 && plVar5 != plVar6) &&
          (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 != 0)) &&
         (FUN_140630e34(&local_68,param_1), local_60 != (longlong *)0x0)) {
        iVar3 = (int)local_60[1];
        do {
          if (iVar3 == 0) {
            plVar5 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar2 = (int)local_60[1];
          bVar8 = iVar3 == iVar2;
          if (bVar8) {
            *(int *)(local_60 + 1) = iVar3 + 1;
            iVar2 = iVar3;
          }
          iVar3 = iVar2;
          UNLOCK();
          plVar5 = local_60;
        } while (!bVar8);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
        if (plVar5 != (longlong *)0x0) {
          if (local_68 != 0) {
            FUN_1406f1bc8(lVar7,&local_68);
            FUN_1487afb1a(local_68,&local_68,param_2);
            if (local_40 != 0) {
              FUN_1400020a8();
            }
          }
          LOCK();
          plVar6 = plVar5 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487b0f10 FUN_1487b0f10 body=915 status=ok
// SIG undefined FUN_1487b0f10(void)

/* WARNING: Removing unreachable block (ram,0x0001487b11d3) */

longlong * FUN_1487b0f10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  uint local_148;
  int iStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  uint local_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_168 = 0;
  uStack_160 = 0;
  FUN_1487aed7e(&local_168);
  lVar2 = local_168;
  lVar4 = (longlong)(int)uStack_160;
  if (lVar4 == 0) {
    bVar6 = true;
  }
  else {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) != 0) {
        local_e8 = 0;
        local_e0 = 0;
        local_108 = (longlong *)0x0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_1408fef08(*(longlong *)(lVar2 + lVar5),&local_158);
        FUN_1408ff324(&local_108,&local_158);
        local_110 = 0;
        if (local_118 != 0) {
          FUN_1400020a8();
        }
        FUN_1408ff272(&local_158);
        FUN_1408ffb32(local_b8,&local_108);
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_1408ff272(&local_108);
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
    bVar6 = local_90 == 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  local_150 = local_a8;
  local_158 = 0x100000000;
  local_148 = 0xffffffff;
  iStack_144 = 0;
  local_140 = 0;
  iVar3 = 0;
  if (!bVar6) {
    FUN_1449c0562(&local_158);
    iVar3 = local_90;
  }
  local_f0 = local_148;
  iStack_ec = iStack_144;
  local_e8 = CONCAT44(local_13c,local_140);
  uStack_100 = local_158;
  local_f8 = local_150;
  local_108 = local_b8;
  if ((iStack_144 != iVar3) || (local_150 != local_a8)) {
    do {
      local_170 = *(undefined8 *)(*local_108 + (longlong)iStack_ec * 0x20);
      FUN_1400021e4(&local_170,&local_158);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_1,iVar1);
      }
      lVar2 = *param_1;
      lVar4 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar4) = 0;
      *(undefined8 *)(lVar2 + lVar4) = local_158;
      *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_150;
      *(undefined4 *)(lVar2 + 0xc + lVar4) = local_150._4_4_;
      local_150 = (undefined1 *)0x0;
      local_158 = 0;
      local_f0 = local_f0 & ~uStack_100._4_4_;
      FUN_1449c0562(&uStack_100);
    } while (local_108 != local_b8 || (local_f8 != local_a8 || iStack_ec != iVar3));
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408ff272(local_b8);
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487b12a4 FUN_1487b12a4 body=49 status=ok
// SIG undefined FUN_1487b12a4(void)

undefined8 * FUN_1487b12a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14cb70c58 != 0) {
    uVar1 = FUN_1405d6618();
    FUN_147091128(uVar1,param_1);
  }
  return param_1;
}



// FUNCTION 1487b12d6 FUN_1487b12d6 body=33 status=ok
// SIG undefined FUN_1487b12d6(void)

undefined8 FUN_1487b12d6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1487a9ea6();
  if (lVar1 != 0) {
    uVar2 = FUN_1487a9df0(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1487b12f8 FUN_1487b12f8 body=139 status=ok
// SIG undefined FUN_1487b12f8(void)

void FUN_1487b12f8(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar2 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1b0) - 1U & param_3) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 0x20) == param_3) {
          if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(undefined8 *)(lVar2 + 8);
            lVar2 = *(longlong *)(lVar2 + 0x10);
            param_2[1] = lVar2;
            if (lVar2 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 1487b1384 FUN_1487b1384 body=684 status=ok
// SIG undefined FUN_1487b1384(void)

longlong * FUN_1487b1384(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  longlong local_70;
  undefined2 local_60 [2];
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    local_60[0] = 0;
    local_5c = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_a0 = 0;
    lVar6 = FUN_1487a9ea6(param_2);
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x28), lVar6 != 0)) {
      lVar8 = *(longlong *)(lVar6 + 0x550);
      if (*(longlong *)(lVar6 + 0x550) == 0) {
        lVar8 = lVar6;
      }
      (**(code **)(*(longlong *)(lVar8 + 0x390) + 0x50))(lVar8 + 0x390,&local_98);
      FUN_1411b8130(local_60,&local_98);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    cVar4 = FUN_1487aec72(param_2);
    if (cVar4 != '\0') {
      uVar7 = FUN_144a79cc8(param_2);
      lVar6 = FUN_1405d1c86(uVar7);
      if (lVar6 != 0) {
        lVar8 = FUN_1414cbf4e();
        if ((((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
            (plVar9 = (longlong *)FUN_1448a53de(lVar6), plVar9 != (longlong *)0x0)) &&
           (lVar6 = (**(code **)(*plVar9 + 8))(plVar9), lVar6 != 0)) {
          lVar8 = FUN_140928036();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            FUN_1406f1bc8(lVar6 + 0x4f0,&local_98);
            FUN_1411b8130(local_60,&local_98);
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            local_a0 = *(undefined8 *)(lVar6 + 0x5cc);
          }
        }
      }
    }
    FUN_140630e34(&local_98,param_2);
    plVar9 = (longlong *)CONCAT44(uStack_8c,local_90);
    if (plVar9 != (longlong *)0x0) {
      iVar5 = (int)plVar9[1];
      do {
        if (iVar5 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plVar9[1];
        bVar10 = iVar5 == iVar3;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_8c,local_90) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_8c,local_90) + 0x10))();
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_98 != 0) {
          FUN_1487afdc6(local_98,&local_98,local_60,&local_a0);
          if (&local_98 == param_1) {
            if (local_98 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_1 != 0) {
              FUN_1400020a8();
            }
            *param_1 = local_98;
            local_98 = 0;
            *(undefined4 *)(param_1 + 1) = local_90;
            *(undefined4 *)((longlong)param_1 + 0xc) = uStack_8c;
          }
        }
        LOCK();
        plVar2 = plVar9 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487b1632 FUN_1487b1632 body=610 status=ok
// SIG undefined FUN_1487b1632(void)

undefined4 * FUN_1487b1632(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined8 local_e0;
  undefined4 local_d8;
  int local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_b8 [2];
  undefined8 local_b4;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *param_1 = (undefined4)DAT_14c8464e0;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_140630e34(&local_80);
  if (local_78 != (longlong *)0x0) {
    iVar7 = (int)local_78[1];
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_78[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(local_78 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
      plVar8 = local_78;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_78 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_80 != 0) {
        FUN_14000bbd8(local_b8,param_3,0);
        FUN_1409c5062(&local_80,local_b8);
        if (lStack_a0 != 0) {
          FUN_1400020a8();
        }
        local_b4 = 0;
        local_a8 = 0;
        lStack_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_b8[0] = 1;
        FUN_140c25b54(local_b8);
        FUN_144a659ac(local_70,&local_d4,1);
        if (local_d4 == 0) {
          local_c0 = DAT_14cb7bba0;
          local_c8 = DAT_14cb7bb98;
        }
        else {
          local_c0 = local_cc;
          local_c8 = CONCAT44(uStack_d0,local_d4);
        }
        FUN_144928d62(&local_a8,1,&local_c8);
        local_e0 = DAT_14cb7bd68;
        local_d8 = DAT_14cb7bd70;
        FUN_14013eb2c(local_b8);
        FUN_144a659ac(local_70,local_ec,3);
        FUN_14013eb54(local_b8,local_ec);
        FUN_144a659ac(local_70,local_f8,2);
        FUN_144928d62(&local_a8,4,local_f8);
        FUN_1487af85c(local_80,param_1,local_b8);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487b1896 FUN_1487b1896 body=200 status=ok
// SIG undefined FUN_1487b1896(void)

undefined8 * FUN_1487b1896(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &DAT_14a171d50;
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = FUN_1487a9ea6(param_2);
    if (lVar2 != 0) {
      FUN_1405dc634(&local_40,lVar2 + 8);
    }
  }
  FUN_1449f3ff4(&local_40,param_1);
  local_40 = &DAT_14a171d50;
  uVar1 = local_28 >> 0x20;
  local_28 = local_28 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&lStack_30,0);
  }
  local_38 = 0;
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b1960 FUN_1487b1960 body=43 status=ok
// SIG undefined FUN_1487b1960(void)

undefined8 * FUN_1487b1960(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = FUN_1405d6522();
  FUN_1487b198c(lVar1 + 0x218,param_1);
  return param_1;
}



// FUNCTION 1487b198c FUN_1487b198c body=752 status=ok
// SIG undefined FUN_1487b198c(void)

void FUN_1487b198c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x38);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1487b1b2d;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar1 + lVar3 * 0x38);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x38 + *local_e0,0);
LAB_1487b1b2d:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b1c7e FUN_1487b1c7e body=549 status=ok
// SIG undefined FUN_1487b1c7e(void)

void FUN_1487b1c7e(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_188 [40];
  undefined1 local_160 [24];
  longlong local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  longlong local_128;
  undefined8 local_120;
  undefined1 local_118 [224];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (DAT_14cb0d2b0 == 0) goto LAB_1487b1db2;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_5,1);
  if (lVar2 == 0) goto LAB_1487b1db2;
  plVar3 = (longlong *)FUN_1406f625c(lVar2);
  if (plVar3 == (longlong *)0x0) goto LAB_1487b1db2;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x308))(plVar3,0);
  if (plVar3 == (longlong *)0x0) goto LAB_1487b1db2;
  lVar2 = (**(code **)(*plVar3 + 0x2c0))(plVar3);
  if (lVar2 == 0) goto LAB_1487b1db2;
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar4 = FUN_141843f1a();
    lVar5 = FUN_14477b664(uVar4);
    param_1[1] = lVar5;
  }
  lVar6 = param_1[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_1 != 0)) {
    plVar3 = *(longlong **)(lVar5 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_1487b1ea0:
      lVar6 = 0;
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar1 == '\0') goto LAB_1487b1ea0;
      uVar4 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar6 = FUN_144aff482(uVar4,param_1);
    }
    param_1[2] = lVar6;
  }
  FUN_14186320c(local_160,lVar6,0,param_2);
  (**(code **)(local_148 + 0x20))(&local_148,0);
  local_140 = param_3[1];
  FUN_1406022fe(local_138,param_3 + 2);
  (**(code **)(local_128 + 0x20))(&local_128,0);
  local_120 = param_4[1];
  FUN_1406022fe(local_118,param_4 + 2);
  FUN_143c8fd52(lVar2,local_160);
  FUN_141863308(local_160);
LAB_1487b1db2:
  *param_3 = &DAT_14a171d50;
  *(undefined4 *)(param_3 + 3) = 0;
  if (*(int *)((longlong)param_3 + 0x1c) != 0) {
    FUN_140115c12(param_3 + 2,0);
  }
  param_3[1] = 0;
  if (param_3[2] != 0) {
    FUN_1400020a8();
  }
  *param_4 = &DAT_14a171d50;
  *(undefined4 *)(param_4 + 3) = 0;
  if (*(int *)((longlong)param_4 + 0x1c) != 0) {
    FUN_140115c12(param_4 + 2,0);
  }
  param_4[1] = 0;
  if (param_4[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b1ea4 FUN_1487b1ea4 body=809 status=ok
// SIG undefined FUN_1487b1ea4(void)

void FUN_1487b1ea4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    uVar5 = FUN_141843f1a();
    lVar6 = FUN_14477b664(uVar5);
    param_1[1] = lVar6;
  }
  lVar7 = param_1[2];
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*param_1 == 0)) goto LAB_1487b218e;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      param_1[2] = 0;
      goto LAB_1487b218e;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar5,param_1);
    param_1[2] = lVar7;
    if (lVar7 == 0) goto LAB_1487b218e;
    lVar6 = param_1[1];
  }
  if (lVar6 == 0) {
    uVar5 = FUN_141843f1a();
    lVar6 = FUN_14477b664(uVar5);
    param_1[1] = lVar6;
    lVar7 = param_1[2];
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,param_1);
      }
      param_1[2] = lVar7;
    }
  }
  local_88 = 0;
  iVar1 = *(int *)(lVar7 + 0x38);
  uVar5 = *(undefined8 *)(lVar7 + 0x30);
  local_80 = iVar1;
  if (iVar1 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1411af5d6(&local_88,iVar1,0);
    FUN_1411af565(local_88,uVar5,iVar1);
    lVar6 = local_88;
    lVar7 = (longlong)local_80;
    local_98 = 0;
    uStack_90 = 0;
    if (lVar7 != 0) {
      lVar12 = 0;
      do {
        local_78 = *(longlong *)(lVar6 + lVar12);
        FUN_1446dcdd4(&local_70,&local_78);
        FUN_1487b21ce(&local_70,&local_98);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        lVar3 = local_98;
        lVar12 = lVar12 + 0x18;
      } while (lVar7 * 0x18 != lVar12);
      lVar6 = (longlong)(int)uStack_90;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          uVar5 = *(undefined8 *)(lVar3 + lVar7);
          local_60 = 0;
          uVar8 = FUN_14060ed7a();
          lVar9 = FUN_14477b664(uVar8);
          uVar8 = FUN_14060ed7a();
          uVar10 = FUN_14060ed7a();
          FUN_1402d1bfa(&local_78,uVar10,uVar5);
          lVar12 = local_78;
          local_70 = local_78;
          uVar10 = FUN_14060ed7a();
          lVar11 = FUN_141459e9e(uVar8,uVar10);
          if (lVar9 != lVar11) {
            local_60 = 0;
          }
          uVar8 = FUN_14477b664(lVar11);
          local_68 = FUN_14477b664(uVar8);
          if (local_68 != 0 && lVar12 != 0) {
            local_60 = uVar5;
          }
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1487b7ab8(param_2,iVar1);
          }
          FUN_1487b7a70((longlong)iVar1 * 0x18 + *param_2,&local_70);
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
      }
      if (local_98 != 0) {
        FUN_1400020a8(local_98);
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_1487b218e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487b21ce FUN_1487b21ce body=452 status=ok
// SIG undefined FUN_1487b21ce(void)

void FUN_1487b21ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((DAT_14cb70c58 != 0) && (lVar4 = thunk_FUN_144837462(DAT_14cb70c58,param_1), lVar4 != 0)) {
    if (*(char *)(lVar4 + 0x1e0) == '\x01') {
      if ((longlong)*(int *)(lVar4 + 0x208) != 0) {
        plVar8 = *(longlong **)(lVar4 + 0x200);
        lVar4 = (longlong)*(int *)(lVar4 + 0x208) << 7;
        do {
          lVar6 = plVar8[1];
          if (lVar6 == 0) {
            uVar5 = FUN_14060ed7a();
            lVar6 = FUN_14477b664(uVar5);
            plVar8[1] = lVar6;
          }
          lVar7 = plVar8[2];
          if (lVar7 == 0) {
            if ((lVar6 != 0) && (*plVar8 != 0)) {
              plVar2 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                plVar8[2] = 0;
              }
              else {
                uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar5,plVar8);
                plVar8[2] = lVar7;
                if (lVar7 != 0) goto LAB_1487b229e;
              }
            }
          }
          else {
LAB_1487b229e:
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1406b7634(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar7;
          }
          plVar8 = plVar8 + 0x10;
          lVar4 = lVar4 + -0x80;
        } while (lVar4 != 0);
      }
    }
    else if (*(char *)(lVar4 + 0x1e0) == '\0') {
      lVar6 = *(longlong *)(lVar4 + 0x1f0);
      if (lVar6 == 0) {
        uVar5 = FUN_14060ed7a();
        lVar6 = FUN_14477b664(uVar5);
        *(longlong *)(lVar4 + 0x1f0) = lVar6;
      }
      lVar7 = *(longlong *)(lVar4 + 0x1f8);
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar4 + 0x1e8) != 0)) {
        plVar8 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
          lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x1e8));
        }
        *(longlong *)(lVar4 + 0x1f8) = lVar7;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1406b7634(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar7;
    }
  }
  return;
}



// FUNCTION 1487b2392 FUN_1487b2392 body=21 status=ok
// SIG undefined FUN_1487b2392(void)

void FUN_1487b2392(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1487b23a8();
  FUN_140d1319a(uVar1);
  return;
}



// FUNCTION 1487b23a8 FUN_1487b23a8 body=113 status=ok
// SIG undefined FUN_1487b23a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487b23a8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb706b8;
  if (DAT_14cb706b8 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0xa400,0);
    lVar4 = 0x3f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x52;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb706b8;
    _DAT_14cb706c0 = _DAT_14cb706c0 + 0x40;
  }
  DAT_14cb706b8 = (undefined8 *)*puVar2;
  _DAT_14cb706c4 = _DAT_14cb706c4 + 1;
  return;
}



// FUNCTION 1487b241a FUN_1487b241a body=44 status=ok
// SIG undefined FUN_1487b241a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487b241a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb706c4 = _DAT_14cb706c4 + -1;
  *param_1 = DAT_14cb706b8;
  DAT_14cb706b8 = param_1;
  return;
}



// FUNCTION 1487b2446 FUN_1487b2446 body=28 status=ok
// SIG undefined FUN_1487b2446(void)

void FUN_1487b2446(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_140d1319a(param_1);
  return;
}



// FUNCTION 1487b2462 FUN_1487b2462 body=118 status=ok
// SIG undefined FUN_1487b2462(void)

void FUN_1487b2462(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x98);
  lVar3 = FUN_1487b4d4a(plVar1);
  if (lVar3 == 0) {
    iVar2 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_1487b86e0(plVar1,iVar2);
    }
    FUN_1487b863c((longlong)iVar2 * 0x40 + *plVar1,param_2);
    return;
  }
  FUN_1487b4dd8(lVar3,param_2);
  return;
}



// FUNCTION 1487b24d8 FUN_1487b24d8 body=312 status=ok
// SIG undefined FUN_1487b24d8(void)

ulonglong FUN_1487b24d8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = 0;
  if (*param_2 == 0) goto LAB_1487b25ee;
  FUN_1446dcc2e(param_1 + 0x158,param_3);
  FUN_140ffff0a(param_1 + 0xe8,*param_2 + 0x70);
  FUN_1410d4484(param_1 + 0x118,*param_2 + 0x60);
  iVar3 = *(int *)(*param_2 + 0x40);
  uVar8 = (ulonglong)(iVar3 - 1);
  if (iVar3 == 0) {
    uVar8 = uVar9;
  }
  FUN_1446f82e2(local_30,uVar8,*(undefined8 *)(*param_2 + 0x38),1);
  FUN_1401533ba(&local_3c,local_30,1);
  *(undefined4 *)(param_1 + 0x130) = local_34;
  *(undefined8 *)(param_1 + 0x128) = local_3c;
  FUN_140fda274(param_1);
  if (*(char *)(param_1 + 0x180) == '\x01') {
    cVar7 = FUN_1487b2612(param_1);
    if (cVar7 != '\0') goto LAB_1487b2592;
  }
  else {
LAB_1487b2592:
    cVar7 = FUN_1405da82a(param_1);
    if (cVar7 == '\x02') {
      lVar4 = *param_2;
      lVar5 = param_2[1];
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_1 + 0x30);
      *(longlong *)(param_1 + 0x28) = lVar4;
      *(longlong *)(param_1 + 0x30) = lVar5;
      uVar9 = CONCAT71((int7)((ulonglong)local_30 >> 8),1);
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
      goto LAB_1487b25ee;
    }
  }
  uVar9 = 0;
LAB_1487b25ee:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b2612 FUN_1487b2612 body=480 status=ok
// SIG undefined FUN_1487b2612(void)

ulonglong FUN_1487b2612(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *unaff_RBX;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong *local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14479d2ce(param_1 + 0x80);
  local_88 = 0;
  uStack_80 = 0;
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xf0);
  if (0 < (int)*(uint *)(param_1 + 0xf0)) {
    lVar9 = 0x50;
    lVar10 = 0;
    unaff_RBX = &local_78;
    do {
      lVar11 = *(longlong *)(param_1 + 0xe8);
      iVar4 = *(int *)(lVar11 + -0x50 + lVar9);
      iVar3 = *(int *)(lVar11 + -0x48 + lVar9);
      if (((iVar4 == DAT_14cb86258) && (iVar3 == DAT_14cb8625c._4_4_)) ||
         (((iVar4 == DAT_14cb86240 &&
           ((iVar3 == DAT_14cb86244._4_4_ && (lVar10 + 1 < (longlong)(int)uVar6)))) &&
          ((*(int *)(lVar11 + -8 + lVar9) != DAT_14cb86258 ||
           (*(int *)(lVar11 + lVar9) != DAT_14cb8625c._4_4_)))))) {
        FUN_14096c63a(lVar11 + lVar9 + -0x40,unaff_RBX);
        uVar6 = uStack_80;
        lVar11 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_140f12bd2(&local_88,uVar6 & 0xffffffff);
        }
        FUN_14014e938(lVar11 * 0x38 + local_88,unaff_RBX);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      lVar10 = lVar10 + 1;
      uVar6 = (ulonglong)*(int *)(param_1 + 0xf0);
      lVar9 = lVar9 + 0x48;
    } while (lVar10 < (longlong)uVar6);
  }
  uVar7 = FUN_14479d2ce(param_1 + 0x80);
  FUN_140630e34(&local_78,uVar7);
  if (local_70 != (longlong *)0x0) {
    iVar4 = (int)local_70[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_70[1];
      bVar12 = iVar4 == iVar3;
      if (bVar12) {
        *(int *)(local_70 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_70;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      bVar12 = local_78 != 0;
      if (bVar12) {
        uVar5 = FUN_1487b0950(local_78,&local_88);
        unaff_RBX = (longlong *)(ulonglong)uVar5;
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_1487b279c;
    }
  }
  bVar12 = false;
LAB_1487b279c:
  FUN_1405d7ab2(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(byte)unaff_RBX & bVar12) & 0xffffffff;
}



// FUNCTION 1487b27f4 FUN_1487b27f4 body=60 status=ok
// SIG undefined FUN_1487b27f4(void)

undefined8 FUN_1487b27f4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    cVar1 = FUN_144729dda(*(longlong *)(param_1 + 0x18) + 0xf0);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0xf0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1487b2830 FUN_1487b2830 body=273 status=ok
// SIG undefined FUN_1487b2830(void)

undefined8 FUN_1487b2830(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [40];
  longlong local_88;
  undefined1 local_78 [40];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xe8);
    lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0xf0) * 0x48;
    do {
      FUN_14096c63a(lVar6 + 0x10,local_b0);
      FUN_140c258c2(local_b0,local_78);
      if ((longlong)(int)param_2[1] != 0) {
        lVar5 = *param_2;
        lVar4 = (longlong)(int)param_2[1] * 0x38;
        do {
          cVar2 = FUN_14493b798(lVar5,local_78);
          if (cVar2 != '\0') {
            if (local_50 != 0) {
              FUN_1400020a8();
            }
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            uVar3 = 1;
            goto LAB_1487b28f9;
          }
          lVar5 = lVar5 + 0x38;
          lVar4 = lVar4 + -0x38;
        } while (lVar4 != 0);
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x48;
    } while (lVar6 != lVar1);
  }
  uVar3 = 0;
LAB_1487b28f9:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b2942 FUN_1487b2942 body=1 status=ok
// SIG undefined FUN_1487b2942(void)

void FUN_1487b2942(void)

{
  return;
}



// FUNCTION 1487b2944 FUN_1487b2944 body=54 status=ok
// SIG undefined FUN_1487b2944(void)

void FUN_1487b2944(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b081df0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 1487b29b2 FUN_1487b29b2 body=40 status=ok
// SIG undefined FUN_1487b29b2(void)

undefined8 FUN_1487b29b2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145aea356(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1487b29e8 FUN_1487b29e8 body=570 status=ok
// SIG undefined FUN_1487b29e8(void)

undefined8 * FUN_1487b29e8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x30);
  lVar1 = DAT_14cb70c58;
  if (lVar3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    pcVar4 = "Is ready overall : NO, Reasons : ";
    if (*(byte *)(param_1 + 0x1d8) != 0) {
      pcVar4 = "Is ready overall : YES, Reasons : ";
    }
    thunk_FUN_14047a987(param_2,pcVar4,*(byte *)(param_1 + 0x1d8) + 0x21);
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x4c);
    *param_2 = 0;
    param_2[1] = 0;
    pcVar4 = "Is ready overall : NO, Reasons : ";
    if (*(byte *)(param_1 + 0x1d8) != 0) {
      pcVar4 = "Is ready overall : YES, Reasons : ";
    }
    thunk_FUN_14047a987(param_2,pcVar4,*(byte *)(param_1 + 0x1d8) + 0x21);
    if (iVar5 == 1) {
      pcVar4 = "Dedicated server : YES, ";
      iVar5 = 0x18;
      goto LAB_1487b2a67;
    }
  }
  pcVar4 = "Profile loaded : NO, ";
  if (*(byte *)(param_1 + 0x218) != 0) {
    pcVar4 = "Profile loaded : YES, ";
  }
  iVar5 = *(byte *)(param_1 + 0x218) + 0x15;
LAB_1487b2a67:
  thunk_FUN_14047a987(param_2,pcVar4,iVar5);
  bVar2 = FUN_1405d6016(param_1);
  pcVar4 = "Is in the correct game phase : NO, ";
  if (bVar2 != 0) {
    pcVar4 = "Is in the correct game phase : YES, ";
  }
  thunk_FUN_14047a987(param_2,pcVar4,bVar2 + 0x23);
  bVar2 = FUN_1405d5d4c(param_1);
  pcVar4 = "Is mission brain ready : NO, ";
  if (bVar2 != 0) {
    pcVar4 = "Is mission brain ready : YES, ";
  }
  thunk_FUN_14047a987(param_2,pcVar4,bVar2 + 0x1d);
  bVar2 = FUN_145725da2(param_1);
  pcVar4 = "Is mission state cache ready : NO, ";
  if (bVar2 != 0) {
    pcVar4 = "Is mission state cache ready : YES, ";
  }
  thunk_FUN_14047a987(param_2,pcVar4,bVar2 + 0x23);
  bVar2 = FUN_145725ddc(param_1);
  pcVar4 = "Is in mission replay : NO, ";
  if (bVar2 != 0) {
    pcVar4 = "Is in mission replay : YES, ";
  }
  thunk_FUN_14047a987(param_2,pcVar4,bVar2 + 0x1b);
  bVar2 = FUN_1405db554(param_1);
  pcVar4 = "World is Initialized : NO, ";
  if (bVar2 != 0) {
    pcVar4 = "World is Initialized : YES, ";
  }
  thunk_FUN_14047a987(param_2,pcVar4,bVar2 + 0x1b);
  bVar2 = FUN_145725e12(param_1);
  pcVar4 = "At least one player spawned : NO, ";
  if (bVar2 != 0) {
    pcVar4 = "At least one player spawned : YES, ";
  }
  thunk_FUN_14047a987(param_2,pcVar4,bVar2 | 0x22);
  pcVar4 = "Shard is set : YES, ";
  if (lVar3 == 0) {
    pcVar4 = "Shard is set : NO, ";
  }
  thunk_FUN_14047a987(param_2,pcVar4,(lVar3 != 0) + '\x13');
  pcVar4 = "ConfigStore is set : YES";
  if (lVar1 == 0) {
    pcVar4 = "ConfigStore is set : NO";
  }
  thunk_FUN_14047a987(param_2,pcVar4,(lVar1 != 0) + '\x17');
  return param_2;
}



// FUNCTION 1487b2c22 FUN_1487b2c22 body=194 status=ok
// SIG undefined FUN_1487b2c22(void)

longlong * FUN_1487b2c22(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = &DAT_14cb70b50;
  plVar4 = (longlong *)FUN_1487b8090();
  plVar1 = plVar4 + 2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
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
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b2ce8 FUN_1487b2ce8 body=138 status=ok
// SIG undefined FUN_1487b2ce8(void)

undefined8 * FUN_1487b2ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141173b16(&local_28,param_2,param_3,&DAT_14cb70b50);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b2d74 FUN_1487b2d74 body=3292 status=ok
// SIG undefined FUN_1487b2d74(void)

bool FUN_1487b2d74(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 ***pppuVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ushort uVar15;
  wchar_t *pwVar16;
  undefined8 *puVar17;
  undefined8 ****ppppuVar18;
  undefined2 *puVar19;
  byte bVar20;
  code *pcVar21;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  longlong local_208;
  ushort local_1fc;
  ushort local_1fa;
  longlong *local_1f8;
  undefined8 ***local_1f0;
  int local_1e8;
  undefined4 uStack_1e4;
  undefined8 ***local_1d8;
  longlong lStack_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  undefined2 *local_1b8;
  undefined8 uStack_1b0;
  ushort local_1a2;
  longlong *local_1a0;
  undefined2 *local_198;
  undefined2 **local_190;
  undefined2 *local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_148;
  int local_140;
  undefined1 local_138 [8];
  longlong local_130;
  undefined1 local_108 [8];
  longlong local_100;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ushort local_c0;
  byte local_b8;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 ***local_98;
  longlong lStack_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_208 = param_1;
  FUN_140d4cbc4(local_108,*(undefined8 *)(param_1 + 0x10));
  if (local_100 != 0) {
    local_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    iStack_a0 = 0;
    uStack_9c = 0;
    FUN_140bddd88(local_100,&local_a8,0);
    if (iStack_a0 == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    }
    iVar10 = _wtoi(pwVar16);
    *(short *)(local_208 + 0x5c) = (short)iVar10;
    FUN_140bdd98c(local_108);
    if (CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8)) != 0) {
      FUN_1400020a8();
    }
  }
  lVar13 = local_208;
  uVar15 = *(ushort *)(local_208 + 0x5c);
  uVar2 = *(ushort *)(local_208 + 0x5e);
  if (uVar15 < uVar2) goto LAB_1487b36bd;
  local_1fc = uVar2;
  local_1fa = uVar15;
  if (local_100 != 0) {
    FUN_140bddd88(local_100,local_208 + 0x28,0);
    FUN_140bdd98c(local_108);
    if (2 < *(ushort *)(lVar13 + 0x5c)) {
      if (local_100 == 0) goto LAB_1487b2f73;
      FUN_140bddd88(local_100,local_208 + 0x38,0);
      FUN_140bdd98c(local_108);
    }
    if (local_100 != 0) {
      FUN_140bddd88(local_100,local_208 + 0x48,0);
      FUN_140bdd98c(local_108);
      if (local_100 != 0) {
        local_a8 = 0;
        uStack_a6 = 0;
        uStack_a4 = 0;
        iStack_a0 = 0;
        uStack_9c = 0;
        FUN_140bddd88(local_100,&local_a8,0);
        if (iStack_a0 == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
        }
        iVar10 = _wtoi(pwVar16);
        *(int *)(local_208 + 0x58) = iVar10;
        FUN_140bdd98c(local_108);
        if (CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8)) != 0) {
          FUN_1400020a8();
        }
        if (local_100 != 0) {
          local_a8 = 0;
          uStack_a6 = 0;
          uStack_a4 = 0;
          iStack_a0 = 0;
          uStack_9c = 0;
          FUN_140bddd88(local_100,&local_a8,0);
          if (CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8)) != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_1487b2f73:
  FUN_140d4cb8c(local_108,local_138);
  if (local_130 != 0) {
    plVar1 = (longlong *)(local_208 + 0x60);
    do {
      local_178 = 0;
      lStack_170 = 0;
      FUN_140bddd88(local_130,&local_178,0);
      local_a8 = 0;
      uStack_a4 = 0;
      iStack_a0 = 0;
      local_88 = local_88 & 0xffffffff00000000;
      local_98 = (undefined8 ****)0x0;
      lStack_90 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_148 = local_178;
      local_140 = (int)lStack_170 + -1;
      if ((int)lStack_170 == 0) {
        local_140 = 0;
      }
      FUN_140b7c6f1(&local_148,&local_a8);
      iVar10 = *(int *)(local_208 + 0x68);
      *(uint *)(local_208 + 0x68) = iVar10 + 1U;
      if (*(uint *)(local_208 + 0x6c) < iVar10 + 1U) {
        FUN_140f12bd2(plVar1,iVar10);
      }
      puVar17 = (undefined8 *)((longlong)iVar10 * 0x38 + *plVar1);
      *(undefined2 *)puVar17 = 0;
      *(undefined8 *)((longlong)puVar17 + 4) = 0;
      puVar17[2] = 0;
      puVar17[3] = 0;
      *(undefined4 *)(puVar17 + 4) = 0;
      puVar17[5] = 0;
      puVar17[6] = 0;
      *(int *)(puVar17 + 1) = iStack_a0;
      *puVar17 = CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
      FUN_1447715ec(puVar17 + 2,&local_98);
      FUN_140bdd98c(local_138);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_178 != 0) {
        FUN_1400020a8();
      }
    } while (local_130 != 0);
  }
  FUN_140bdd98c(local_108);
  if (local_100 != 0) {
    local_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    iStack_a0 = 0;
    uStack_9c = 0;
    FUN_140bddd88(local_100,&local_a8,0);
    if (CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8)) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140d4cb8c(local_108,&local_178);
  local_1f8 = (longlong *)(local_208 + 0x70);
  iVar10 = 0x65;
  do {
    lVar13 = lStack_170;
    iVar10 = iVar10 + -1;
    uVar15 = local_1fa;
    uVar2 = local_1fc;
    if ((iVar10 == 0) ||
       (FUN_140bdd98c(&local_178), uVar15 = local_1fa, uVar2 = local_1fc, lVar13 == 0)) break;
    local_188 = (undefined2 *)0x0;
    uStack_180 = 0;
    FUN_140bddd88(lVar13,&local_188,0);
    local_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    iStack_a0 = 0;
    local_80 = local_80 & 0xffffffffffff0000;
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    local_70 = 0;
    uStack_68 = 0;
    uStack_d4 = 0;
    iStack_d0 = 0;
    puVar19 = &DAT_149dfb77a;
    if ((int)uStack_180 != 0) {
      puVar19 = local_188;
    }
    FUN_1405f0d29(&local_d8,puVar19);
    lVar13 = lStack_170;
    local_a8 = (undefined2)local_d8;
    uStack_a6 = (undefined2)((uint)local_d8 >> 0x10);
    uStack_a4 = uStack_d4;
    iStack_a0 = iStack_d0;
    uVar15 = *(ushort *)(local_208 + 0x5c);
    local_1a0 = &local_178;
    local_198 = &local_a8;
    local_190 = &local_188;
    if (uVar15 < 4) {
      cVar9 = FUN_143c91f2a(&local_1a0);
      if (cVar9 == '\0') goto LAB_1487b350a;
LAB_1487b324c:
      iVar3 = *(int *)(local_208 + 0x78);
      *(uint *)(local_208 + 0x78) = iVar3 + 1U;
      if (*(uint *)(local_208 + 0x7c) < iVar3 + 1U) {
        FUN_1406251ee(local_1f8,iVar3);
      }
      FUN_141863dde((longlong)iVar3 * 0x48 + *local_1f8,&local_a8);
      bVar6 = true;
    }
    else {
      FUN_140bdd98c(&local_178);
      if (uVar15 == 4) {
        if (lVar13 != 0) {
          local_1a2 = 0;
          FUN_140bddb30(lVar13,&local_1a2);
          lVar13 = lStack_170;
          if ((char)local_1a2 == '\x01') {
            FUN_140bdd98c(&local_178);
            lVar8 = lStack_170;
            FUN_140bdd98c(&local_178);
            if (lVar8 != 0 && lVar13 != 0) {
              local_1b8 = (undefined2 *)0x0;
              uStack_1b0 = 0;
              FUN_140bddd88(lVar13,&local_1b8,0);
              FUN_14895ddf8(lVar8,&local_1e8,0);
              local_d8 = 0;
              uStack_d4 = 0;
              iStack_d0 = 0;
              local_c8 = 0;
              puVar19 = &DAT_149dfb77a;
              if ((int)uStack_1b0 != 0) {
                puVar19 = local_1b8;
              }
              FUN_1446f470e(&local_1c0,puVar19);
              if (CONCAT44(uStack_d4,local_d8) != local_1c0) {
                local_c8 = 0;
              }
              local_d8 = (undefined4)local_1c0;
              uStack_d4 = (undefined4)((ulonglong)local_1c0 >> 0x20);
              if (iStack_d0 != local_1e8) {
                local_c8 = 0;
              }
              iStack_d0 = local_1e8;
              FUN_14170fc10(&local_1d8,&local_d8);
              if ((byte)uStack_78 == 0x1d) {
                if (local_98 != local_1d8) {
                  local_88 = 0;
                }
                local_98 = local_1d8;
                if (lStack_90 != lStack_1d0) {
                  local_88 = 0;
                }
                uVar14 = FUN_14477b664();
                lStack_90 = FUN_14477b664(uVar14);
                local_88 = local_1c8;
              }
              else {
                pcVar21 = *(code **)((longlong)&DAT_14c9a85d0 +
                                    (ulonglong)((uint)(byte)uStack_78 * 0x120));
                if (pcVar21 != (code *)0x0) {
                  ppppuVar18 = &local_98;
                  if (0x18 < (ushort)local_80) {
                    ppppuVar18 = (undefined8 ****)local_98;
                  }
                  (*pcVar21)(ppppuVar18);
                }
                if (0x18 < (ushort)local_80) {
                  FUN_1400020a8(local_98);
                }
                pppuVar7 = local_1d8;
                uVar14 = FUN_14477b664(lStack_1d0);
                uVar14 = FUN_14477b664(uVar14);
                uVar12 = local_1c8;
                local_80 = CONCAT62(local_80._2_6_,0x18);
                lStack_90 = 0;
                local_88 = 0;
                local_98 = pppuVar7;
                uVar14 = FUN_14477b664(uVar14);
                lStack_90 = FUN_14477b664(uVar14);
                local_88 = uVar12;
                uStack_78 = CONCAT71(uStack_78._1_7_,0x1d);
              }
              if (local_1b8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          else if ((char)local_1a2 == '\0') {
            FUN_143c91f2a(&local_1a0);
          }
          goto LAB_1487b324c;
        }
      }
      else if (lVar13 != 0) {
        FUN_140bddb30(lVar13);
        bVar20 = (byte)local_1a2;
        uVar5 = (uint)local_1a2;
        uVar4 = *(uint *)((longlong)&DAT_14c9a8510 + (ulonglong)((uVar5 & 0xff) * 0x120));
        if (0 < (int)uVar4) {
          local_c0 = (ushort)uVar4;
          puVar11 = &local_d8;
          if (0x18 < local_c0) {
            puVar11 = (undefined4 *)FUN_14001cc68(uVar4 & 0xffff);
            local_d8 = SUB84(puVar11,0);
            uStack_d4 = (undefined4)((ulonglong)puVar11 >> 0x20);
          }
          uVar12 = (ulonglong)((uVar5 & 0xff) * 0x120);
          pcVar21 = *(code **)((longlong)&DAT_14c9a85a8 + uVar12);
          if (pcVar21 == (code *)0x0) {
            memset(puVar11,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
          }
          else {
            (*pcVar21)();
          }
          pcVar21 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_78 * 0x120)
                              );
          local_b8 = bVar20;
          if (pcVar21 != (code *)0x0) {
            ppppuVar18 = &local_98;
            if (0x18 < (ushort)local_80) {
              ppppuVar18 = (undefined8 ****)local_98;
            }
            (*pcVar21)(ppppuVar18);
          }
          if (0x18 < (ushort)local_80) {
            FUN_1400020a8(local_98);
          }
          local_80 = CONCAT62(local_80._2_6_,local_c0);
          if (local_c0 < 0x19) {
            uVar12 = (ulonglong)((uint)local_b8 * 0x120);
            pcVar21 = *(code **)((longlong)&DAT_14c9a85b8 + uVar12);
            if ((pcVar21 == (code *)0x0) &&
               (pcVar21 = *(code **)((longlong)&DAT_14c9a85b0 + uVar12), pcVar21 == (code *)0x0)) {
              memcpy(&local_98,&local_d8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar21)(&local_98,&local_d8);
            }
          }
          else {
            local_98 = (undefined8 ***)CONCAT44(uStack_d4,local_d8);
            local_d8 = 0;
            uStack_d4 = 0;
            local_c0 = 0;
          }
          uStack_78 = CONCAT71(uStack_78._1_7_,local_b8);
          local_b8 = 0;
          if (DAT_14c9a85d0 != (code *)0x0) {
            puVar11 = &local_d8;
            if (0x18 < local_c0) {
              puVar11 = (undefined4 *)CONCAT44(uStack_d4,local_d8);
            }
            (*DAT_14c9a85d0)(puVar11);
          }
          if (0x18 < local_c0) {
            FUN_1400020a8(CONCAT44(uStack_d4,local_d8));
          }
        }
        lVar13 = lStack_170;
        FUN_140bdd98c(&local_178);
        if (lVar13 != 0) {
          local_d8 = 0;
          uStack_d4 = 0;
          iStack_d0 = 0;
          uStack_cc = 0;
          FUN_140bddd88(lVar13,&local_d8,0);
          if ((uStack_78 & 0xff) < 0x21) {
            if ((0x18024000fU >> (uStack_78 & 0x3f) & 1) == 0) {
              if ((uStack_78 & 0xff) == 0x1d) {
                local_1d8 = (undefined8 ****)0x0;
                lStack_1d0 = 0;
                local_1b8 = (undefined2 *)0x0;
                uStack_1b0 = 0;
                FUN_1400b22c2(&local_1e8,&DAT_14a1846a1);
                FUN_1407cdba6(&local_d8,&local_1e8,&local_1d8,&local_1b8);
                if (CONCAT44(uStack_1e4,local_1e8) != 0) {
                  FUN_1400020a8();
                }
                puVar19 = local_1b8;
                if ((1 < (int)lStack_1d0) && (1 < (int)uStack_1b0)) {
                  uVar14 = FUN_1446f4bba();
                  local_218 = 0;
                  uVar14 = FUN_140277cc4(uVar14,puVar19,0,0);
                  uVar14 = FUN_14477b664(uVar14);
                  lVar13 = FUN_14477b664(uVar14);
                  ppppuVar18 = (undefined8 ****)&DAT_149dfb77a;
                  if ((int)lStack_1d0 != 0) {
                    ppppuVar18 = (undefined8 ****)local_1d8;
                  }
                  FUN_1446f470e(&local_1f0,ppppuVar18);
                  pppuVar7 = local_1f0;
                  if ((byte)uStack_78 == 0x1d) {
                    if (local_98 != local_1f0) {
                      local_88 = 0;
                    }
                    local_98 = local_1f0;
                    if (lStack_90 != lVar13) {
                      local_88 = 0;
                    }
                    uVar14 = FUN_14477b664(lVar13);
                    lStack_90 = FUN_14477b664(uVar14);
                    local_88 = 0;
                  }
                  else {
                    pcVar21 = *(code **)((longlong)&DAT_14c9a85d0 +
                                        (ulonglong)((uint)(byte)uStack_78 * 0x120));
                    if (pcVar21 != (code *)0x0) {
                      ppppuVar18 = &local_98;
                      if (0x18 < (ushort)local_80) {
                        ppppuVar18 = (undefined8 ****)local_98;
                      }
                      (*pcVar21)(ppppuVar18);
                    }
                    if (0x18 < (ushort)local_80) {
                      FUN_1400020a8(local_98);
                    }
                    uVar14 = FUN_14477b664(lVar13);
                    uVar14 = FUN_14477b664(uVar14);
                    local_80 = CONCAT62(local_80._2_6_,0x18);
                    lStack_90 = 0;
                    local_88 = 0;
                    local_98 = pppuVar7;
                    uVar14 = FUN_14477b664(uVar14);
                    lStack_90 = FUN_14477b664(uVar14);
                    local_88 = 0;
                    uStack_78 = CONCAT71(uStack_78._1_7_,0x1d);
                  }
                }
                if (local_1b8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if ((undefined8 ****)local_1d8 != (undefined8 ****)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            else {
              FUN_1470ec588(&local_98,&local_d8);
            }
          }
          if (CONCAT44(uStack_d4,local_d8) != 0) {
            FUN_1400020a8();
          }
          goto LAB_1487b324c;
        }
      }
LAB_1487b350a:
      bVar6 = false;
    }
    FUN_14185e38a(&local_a8);
    if (local_188 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar15 = local_1fa;
    uVar2 = local_1fc;
  } while (bVar6);
LAB_1487b36bd:
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 <= uVar15;
}



// FUNCTION 1487b3a58 FUN_1487b3a58 body=226 status=ok
// SIG undefined FUN_1487b3a58(void)

void FUN_1487b3a58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"ParticleParameters",1);
  uVar1 = FUN_145a7f8c2();
  FUN_145a7f8c2();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"VFXTemplate",1);
  uVar1 = FUN_145a7f8c2();
  FUN_145a7f8c2();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b3b3c FUN_1487b3b3c body=1687 status=ok
// SIG undefined FUN_1487b3b3c(void)

undefined8 *
FUN_1487b3b3c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_2b8 [40];
  undefined8 *local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  longlong *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  longlong *local_220;
  longlong local_218;
  undefined8 uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined1 local_d0;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_a0 = 0x10100;
  local_9c = 0xffff;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_218 = 0;
  uStack_210 = 0;
  cVar6 = FUN_144a791f8(param_3,&DAT_149e01f5a,1,1);
  if ((cVar6 == '\0') || (cVar6 = FUN_144a38768(param_3,&DAT_149e01f5a,1,1), cVar6 == '\0')) {
    cVar6 = FUN_144a791f8(param_3,&DAT_149e0208a,1,1);
    if ((cVar6 != '\0') && (cVar6 = FUN_144a38768(param_3,&DAT_149e0208a,1,1), cVar6 != '\0')) {
      uVar13 = 0x27;
      goto LAB_1487b3c20;
    }
  }
  else {
    uVar13 = 0x22;
LAB_1487b3c20:
    FUN_1467acc08(param_3,&local_208,uVar13,0);
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    local_218 = local_208;
    uStack_210 = uStack_200;
    if (1 < (int)uStack_200) {
      param_3 = &local_218;
    }
  }
  FUN_1487b2ce8(&local_228,param_3,&local_a0);
  if (local_228 == 0) {
    bVar18 = true;
    bVar5 = false;
    goto LAB_1487b3e8c;
  }
  local_230 = FUN_14479d2ce(param_1 + 0x30);
  if ((longlong)*(int *)(param_1 + 0x28) == 0) {
    bVar5 = true;
    bVar18 = false;
    goto LAB_1487b3e8c;
  }
  plVar17 = *(longlong **)(param_1 + 0x20);
  plVar16 = plVar17 + (longlong)*(int *)(param_1 + 0x28) * 2;
  lVar11 = 0;
  plVar9 = (longlong *)0x0;
  local_290 = param_2;
  local_288 = param_1;
  local_280 = param_4;
  do {
    puVar10 = *(undefined4 **)(*(longlong *)(*plVar17 + 8) + 8);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = &DAT_14c9485f0;
    }
    local_208 = 0;
    uStack_200 = 0;
    FUN_1400b2348(puVar10,&local_208);
    if ((int)uStack_200 == *(int *)(local_228 + 0x30)) {
      bVar18 = true;
      if (1 < (int)uStack_200) {
        lVar14 = 0;
        while( true ) {
          uVar3 = *(ushort *)(local_208 + lVar14);
          uVar7 = (uint)uVar3;
          uVar4 = *(ushort *)(*(longlong *)(local_228 + 0x28) + lVar14);
          uVar15 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1487b3dad;
            }
            iVar8 = uVar7 - uVar15;
            goto LAB_1487b3e3d;
          }
          if (uVar3 == 0) break;
LAB_1487b3dad:
          lVar14 = lVar14 + 2;
        }
        iVar8 = 0;
LAB_1487b3e3d:
        bVar18 = iVar8 == 0;
      }
    }
    else {
      bVar18 = *(int *)(local_228 + 0x30) + (int)uStack_200 == 1;
    }
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    plVar12 = plVar9;
    if (bVar18) {
      lVar11 = *plVar17;
      plVar12 = (longlong *)plVar17[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
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
    plVar17 = plVar17 + 2;
    plVar9 = plVar12;
  } while (plVar17 != plVar16);
  param_2 = local_290;
  if (lVar11 == 0) {
    bVar5 = true;
    bVar18 = false;
  }
  else if (*(longlong *)(lVar11 + 0x20) == 0) {
    FUN_141863c34(&local_208);
    local_d0 = 1;
    plVar9 = (longlong *)FUN_14001cc68(0x178,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14b3e5fa0;
    plVar17 = plVar9 + 2;
    FUN_1487b8796(plVar17,&local_208);
    local_240 = plVar17;
    local_238 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar17 = plVar9 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
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
    plVar9 = (longlong *)FUN_140ad0925(*(undefined8 *)(lVar11 + 8),&local_230,&local_240);
    plVar17 = plVar9 + 2;
    local_250 = plVar17;
    local_248 = plVar9;
    FUN_1405d680c(&local_250,plVar17);
    if (plVar9 == (longlong *)0x0) {
      *(undefined8 *)(lVar11 + 0x20) = 0x10;
      plVar17 = *(longlong **)(lVar11 + 0x28);
      if (plVar17 != (longlong *)0x0) {
        *(undefined8 *)(lVar11 + 0x28) = 0;
LAB_1487b419a:
        LOCK();
        plVar9 = plVar17 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar8 = *piVar2;
          UNLOCK();
joined_r0x0001487b418b:
          if (iVar8 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *(longlong **)(lVar11 + 0x20) = plVar17;
      plVar17 = *(longlong **)(lVar11 + 0x28);
      if (plVar9 == plVar17) {
        LOCK();
        plVar17 = plVar9 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar8 = *piVar2;
          UNLOCK();
          plVar17 = plVar9;
          goto joined_r0x0001487b418b;
        }
      }
      else {
        *(longlong **)(lVar11 + 0x28) = plVar9;
        if (plVar17 != (longlong *)0x0) goto LAB_1487b419a;
      }
    }
    plVar17 = local_248;
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_248 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    cVar6 = FUN_1487b24d8(*(undefined8 *)(lVar11 + 0x20),&local_228,local_280);
    if (cVar6 != '\0') {
      local_268 = 0;
      uStack_260 = 0;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      local_278 = lVar11;
      local_270 = plVar12;
      FUN_1405d9b28(local_288,&local_278,&local_268);
      uVar13 = *(undefined8 *)(lVar11 + 0x20);
      lVar14 = *(longlong *)(lVar11 + 0x28);
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      plVar17 = (longlong *)local_290[1];
      *local_290 = uVar13;
      local_290[1] = lVar14;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar17 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
    }
    *(undefined8 *)(lVar11 + 0x20) = 0;
    plVar17 = *(longlong **)(lVar11 + 0x28);
    if (plVar17 != (longlong *)0x0) {
      *(undefined8 *)(lVar11 + 0x28) = 0;
      LOCK();
      plVar9 = plVar17 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    plVar17 = local_238;
    param_2 = local_290;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_238 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    FUN_141135d6a(&local_208);
    bVar5 = true;
    bVar18 = false;
  }
  else {
    bVar18 = true;
    bVar5 = false;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar12 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
LAB_1487b3e8c:
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_220 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar2 = (int *)((longlong)local_220 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  if ((!bVar18 && !bVar5) && (plVar17 = (longlong *)param_2[1], plVar17 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar17 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  FUN_14151bfc4(&local_a0);
  if ((local_60 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b41dc FUN_1487b41dc body=599 status=ok
// SIG undefined FUN_1487b41dc(void)

void FUN_1487b41dc(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_1e8 [40];
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [8];
  int local_190;
  undefined1 local_18c;
  undefined1 *local_178;
  longlong local_170;
  uint local_168;
  uint local_164;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_68;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_141863c34(local_198);
  local_a0 = 0;
  local_178 = &DAT_100000001;
  if (param_3 != -1) {
    local_18c = 1;
    local_190 = param_3;
  }
  local_34 = 0;
  local_3c = 1;
  local_1a8 = 0;
  uStack_1a0 = 0;
  iVar5 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar5 = 0;
  }
  FUN_1446f82e2(&local_1c0,iVar5,*param_2,1);
  uVar3 = local_168;
  if (local_1c0 != (longlong *)0x0) {
    uStack_1a0 = 0;
  }
  local_1b0 = local_1c0;
  lVar6 = (longlong)(int)local_168;
  local_168 = local_168 + 1;
  if (local_164 < local_168) {
    FUN_1487b82d4(&local_170,uVar3);
  }
  FUN_141853f36(lVar6 * 0x18 + local_170,&local_1b0);
  if ((local_a0 & 4) != 0) {
    local_68 = 0;
  }
  local_a8 = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x178,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3e5fa0;
  plVar1 = plVar4 + 2;
  FUN_1487b8796(plVar1,local_198);
  local_1c0 = plVar1;
  local_1b8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
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
  }
  plVar1 = local_1c0;
  *(byte *)(local_1c0 + 0x27) = (byte)local_a0 >> 3 & 1;
  iVar5 = *(int *)(param_1 + 0x1f8);
  *(uint *)(param_1 + 0x1f8) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1fc) < iVar5 + 1U) {
    FUN_14591f904((longlong *)(param_1 + 0x1f0),iVar5);
  }
  plVar4 = local_1b8;
  lVar6 = *(longlong *)(param_1 + 0x1f0);
  *(longlong **)(lVar6 + (longlong)iVar5 * 0x10) = plVar1;
  *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = local_1b8;
  if (local_1b8 == (longlong *)0x0) {
    FUN_141358634(param_1,&local_1c0);
  }
  else {
    LOCK();
    *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
    UNLOCK();
    FUN_141358634(param_1);
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
  }
  FUN_141135d6a(local_198);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b4434 FUN_1487b4434 body=717 status=ok
// SIG undefined FUN_1487b4434(void)

void FUN_1487b4434(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_b8 [40];
  longlong local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = FUN_1405d6522();
  FUN_1487b4702(uVar4,&local_78,param_2);
  if (DAT_14cb70c58 != 0) {
    FUN_1400021e4(param_3,&local_88);
    pwVar5 = local_88;
    if (local_80 == 0) {
      pwVar5 = L"";
    }
    dVar13 = _wtof(pwVar5);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)local_70 != 0) {
      fVar15 = (float)dVar13;
      pwVar12 = local_78 + (longlong)local_70 * 0x10;
      plVar1 = (longlong *)(param_1 + 0xf8);
      pwVar5 = local_78;
      do {
        local_90 = *(longlong *)(pwVar5 + 0xc);
        lVar6 = *(longlong *)pwVar5;
        uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar8 = (uint)lVar6 & 0xffff;
        uVar3 = FUN_144a78877(((uint)lVar6 << 0x10 | uVar8) + (int)((ulonglong)lVar6 >> 0x20) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4),
                              *(undefined4 *)(pwVar5 + 4));
        if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
          lVar6 = *(longlong *)(param_1 + 0x138);
          if (*(longlong *)(param_1 + 0x138) == 0) {
            lVar6 = param_1 + 0x130;
          }
          iVar9 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & uVar3) * 4);
          if (iVar9 != -1) {
            lVar6 = *plVar1;
            do {
              lVar10 = (longlong)iVar9 * 0x90;
              lVar2 = lVar6 + lVar10;
              if ((*(longlong *)(lVar6 + lVar10) == *(longlong *)pwVar5) &&
                 (*(int *)(lVar6 + 8 + lVar10) == *(int *)(pwVar5 + 4))) {
                if (lVar2 != 0) {
                  plVar11 = (longlong *)(lVar2 + 0x18);
                  goto LAB_1487b45ed;
                }
                break;
              }
              iVar9 = *(int *)(lVar2 + 0x88);
            } while (iVar9 != -1);
          }
        }
        local_88 = pwVar5;
        FUN_145ed014c(plVar1,&local_64,&local_88);
        plVar11 = (longlong *)(*plVar1 + (longlong)local_64 * 0x90 + 0x18);
        uVar4 = FUN_1405d6618();
        (**(code **)(*plVar11 + 0x20))(plVar11,uVar4);
        if (plVar11 != (longlong *)0x0) {
LAB_1487b45ed:
          (**(code **)*plVar11)(plVar11,&local_90);
          fVar14 = fVar15;
          if ((int)plVar11[5] != *(int *)((longlong)plVar11 + 0x54)) {
            uVar3 = (uint)((ulonglong)local_90 >> 0x10);
            uVar8 = (uint)local_90 & 0xffff;
            plVar7 = plVar11 + 0xb;
            if ((longlong *)plVar11[0xc] != (longlong *)0x0) {
              plVar7 = (longlong *)plVar11[0xc];
            }
            iVar9 = *(int *)((longlong)plVar7 +
                            (ulonglong)
                            ((int)plVar11[0xd] - 1U &
                            (int)((ulonglong)local_90 >> 0x20) + ((uint)local_90 << 0x10 | uVar8) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
            if (iVar9 != -1) {
              do {
                plVar7 = (longlong *)(plVar11[4] + (longlong)iVar9 * 0x14);
                if (*plVar7 == local_90) {
                  if ((float *)(plVar7 + 1) != (float *)0x0 && plVar7 != (longlong *)0x0) {
                    fVar14 = *(float *)(plVar7 + 1) * fVar15;
                  }
                  break;
                }
                iVar9 = *(int *)((longlong)plVar7 + 0xc);
              } while (iVar9 != -1);
            }
          }
          FUN_1405d6204(plVar11,&local_90,fVar14);
        }
        pwVar5 = pwVar5 + 0x10;
      } while (pwVar5 != pwVar12);
    }
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487b4702 FUN_1487b4702 body=1607 status=ok
// SIG undefined FUN_1487b4702(void)

longlong * FUN_1487b4702(longlong param_1,longlong *param_2,char *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_128 [32];
  char *local_108;
  char *local_100;
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = (longlong *)(param_1 + 0x1c8);
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1 + 0x1d8;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  local_108 = param_3;
  uStack_68 = lVar2;
  if (*(int *)(param_1 + 0x1f0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar6 = *(int *)(param_1 + 0x1f0);
  }
  uStack_b8 = CONCAT44(uStack_54,uStack_58);
  local_c0 = local_60;
  iStack_bc = iStack_5c;
  local_d0 = (undefined4)local_70;
  uStack_cc = local_70._4_4_;
  uStack_c8 = (undefined4)uStack_68;
  uStack_c4 = uStack_68._4_4_;
  local_d8 = plVar1;
  if ((iStack_5c != iVar6) || (uStack_68 != lVar2)) {
    local_e0 = param_1 + 0x200;
    local_100 = local_108 + 0x10;
    do {
      lVar4 = *local_d8;
      lVar7 = (longlong)iStack_bc * 0x1c0;
      uVar5 = *(undefined8 *)(lVar4 + lVar7);
      uVar3 = (uint)((ulonglong)uVar5 >> 0x10);
      uVar13 = (uint)uVar5 & 0xffff;
      uVar3 = FUN_144a78877(((uint)uVar5 << 0x10 | uVar13) + (int)((ulonglong)uVar5 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4),
                            *(undefined4 *)(lVar4 + 8 + lVar7));
      if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1fc)) {
        lVar12 = *(longlong *)(param_1 + 0x208);
        if (*(longlong *)(param_1 + 0x208) == 0) {
          lVar12 = local_e0;
        }
        iVar10 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x210) - 1U & uVar3) * 4);
        if (iVar10 != -1) {
          plVar14 = (longlong *)(lVar4 + lVar7);
          lVar4 = *plVar1;
          do {
            lVar12 = (longlong)iVar10 * 0x1c0;
            lVar7 = lVar4 + lVar12;
            if ((*(longlong *)(lVar4 + lVar12) == *plVar14) &&
               (*(int *)(lVar4 + 8 + lVar12) == (int)plVar14[1])) {
              if (lVar7 != -0x18 && lVar7 != 0) {
                local_f8 = param_2;
                if (*local_108 == '\x01') {
                  FUN_1447a97f4(&local_70,local_100);
                  if (0 < (int)local_70._4_4_) {
                    iVar10 = 0;
                    do {
                      FUN_144a7c8fe(&local_70,local_7c,iVar10,1);
                      if (((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                           ((FUN_144a7c8fe(&local_70,local_88,iVar10,1),
                            local_88[0] == DAT_14cb7bec8 && (local_80 == DAT_14cb7bed0)))) ||
                          ((FUN_144a7c8fe(&local_70,local_94,iVar10,1), local_94[0] == DAT_14cb7bee0
                           && (local_8c == DAT_14cb7bee8)))) ||
                         (((FUN_144a7c8fe(&local_70,local_a0,iVar10,1), local_a0[0] == DAT_14cb7bef8
                           && (local_98 == DAT_14cb7bf00)) ||
                          ((FUN_144a7c8fe(&local_70,local_ac,iVar10,1), local_ac[0] == DAT_14cb7bf10
                           && (local_a4 == DAT_14cb7bf18)))))) {
                        FUN_1402b5374(&local_70,iVar10,0);
                      }
                      iVar10 = iVar10 + 1;
                    } while (iVar10 < (int)local_70._4_4_);
                  }
                  uVar11 = (undefined4)local_70;
                  if (CONCAT44(uStack_54,uStack_58) != 0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  uVar11 = *(undefined4 *)local_100;
                }
                plVar8 = (longlong *)(lVar7 + 0x168);
                iVar10 = FUN_1487b4fd0(plVar8,uVar11,local_108);
                param_2 = local_f8;
                if (iVar10 != -1) {
                  if (*local_108 == '\x01') {
                    FUN_1447a97f4(&local_70,local_100);
                    if (0 < (int)local_70._4_4_) {
                      iVar10 = 0;
                      do {
                        FUN_144a7c8fe(&local_70,local_7c,iVar10,1);
                        if (((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
                             ((FUN_144a7c8fe(&local_70,local_88,iVar10,1),
                              local_88[0] == DAT_14cb7bec8 && (local_80 == DAT_14cb7bed0)))) ||
                            (((FUN_144a7c8fe(&local_70,local_94,iVar10,1),
                              local_94[0] == DAT_14cb7bee0 && (local_8c == DAT_14cb7bee8)) ||
                             ((FUN_144a7c8fe(&local_70,local_a0,iVar10,1),
                              local_a0[0] == DAT_14cb7bef8 && (local_98 == DAT_14cb7bf00)))))) ||
                           ((FUN_144a7c8fe(&local_70,local_ac,iVar10,1),
                            local_ac[0] == DAT_14cb7bf10 && (local_a4 == DAT_14cb7bf18)))) {
                          FUN_1402b5374(&local_70,iVar10,0);
                        }
                        iVar10 = iVar10 + 1;
                      } while (iVar10 < (int)local_70._4_4_);
                    }
                    uVar11 = (undefined4)local_70;
                    if (CONCAT44(uStack_54,uStack_58) != 0) {
                      FUN_1400020a8();
                    }
                  }
                  else {
                    uVar11 = *(undefined4 *)local_100;
                  }
                  iVar10 = FUN_1487b4fd0(plVar8,uVar11,local_108);
                  param_2 = local_f8;
                  if (iVar10 == -1) {
                    lVar4 = 0;
                  }
                  else {
                    lVar4 = (longlong)iVar10 * 0x48 + *plVar8;
                  }
                  uVar5 = *(undefined8 *)(lVar4 + 0x38);
                  lVar4 = *plVar14;
                  lVar7 = plVar14[1];
                  iVar10 = (int)local_f8[1];
                  *(uint *)(local_f8 + 1) = iVar10 + 1U;
                  if (*(uint *)((longlong)local_f8 + 0xc) < iVar10 + 1U) {
                    local_f0 = lVar4;
                    local_e8 = uVar5;
                    FUN_1487b5040(local_f8,iVar10);
                    uVar5 = local_e8;
                    lVar4 = local_f0;
                  }
                  lVar12 = *param_2;
                  lVar9 = (longlong)iVar10 * 0x20;
                  *(longlong *)(lVar12 + lVar9) = lVar4;
                  *(int *)(lVar12 + 8 + lVar9) = (int)lVar7;
                  *(undefined8 *)(lVar12 + 0x10 + lVar9) = 0;
                  *(undefined8 *)(lVar12 + 0x18 + lVar9) = uVar5;
                }
              }
              break;
            }
            iVar10 = *(int *)(lVar7 + 0x1b8);
          } while (iVar10 != -1);
        }
      }
      local_c0 = local_c0 & ~uStack_cc;
      FUN_1449c0562(&local_d0);
    } while (local_d8 != plVar1 || (CONCAT44(uStack_c4,uStack_c8) != lVar2 || iStack_bc != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487b4d4a FUN_1487b4d4a body=141 status=ok
// SIG undefined FUN_1487b4d4a(void)

longlong * FUN_1487b4d4a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((longlong)(int)param_1[1] == 0) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)*param_1;
  plVar8 = plVar2 + (longlong)(int)param_1[1] * 8;
  iVar1 = (int)param_2[1];
LAB_1487b4d6b:
  if ((int)plVar2[1] == iVar1) {
    if (iVar1 < 2) {
      return plVar2;
    }
    lVar7 = 0;
    do {
      uVar5 = *(ushort *)(*plVar2 + lVar7);
      uVar6 = (ulonglong)uVar5;
      uVar3 = *(ushort *)(*param_2 + lVar7);
      if (uVar5 == uVar3) {
        if (uVar5 == 0) {
          return plVar2;
        }
      }
      else {
        if (0x7f < (uVar3 | uVar5)) goto LAB_1487b4dcf;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar4 = (ulonglong)uVar3;
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar4]) goto LAB_1487b4dcf;
      }
      lVar7 = lVar7 + 2;
    } while( true );
  }
  if ((int)plVar2[1] + iVar1 == 1) {
    return plVar2;
  }
  goto LAB_1487b4dbf;
LAB_1487b4dcf:
  if (uVar5 == uVar3) {
    return plVar2;
  }
LAB_1487b4dbf:
  plVar2 = plVar2 + 8;
  if (plVar2 == plVar8) {
    return (longlong *)0x0;
  }
  goto LAB_1487b4d6b;
}



// FUNCTION 1487b4dd8 FUN_1487b4dd8 body=168 status=ok
// SIG undefined FUN_1487b4dd8(void)

longlong FUN_1487b4dd8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_144a787a6();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  FUN_1446dcc2e(param_1 + 0x20,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(longlong *)(param_1 + 0x38) = lVar4;
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
  return param_1;
}



// FUNCTION 1487b4e8e FUN_1487b4e8e body=132 status=ok
// SIG undefined FUN_1487b4e8e(void)

void FUN_1487b4e8e(longlong param_1,int param_2)

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



// FUNCTION 1487b4f14 FUN_1487b4f14 body=89 status=ok
// SIG undefined FUN_1487b4f14(void)

void FUN_1487b4f14(longlong param_1,int param_2)

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



// FUNCTION 1487b4f6e FUN_1487b4f6e body=98 status=ok
// SIG undefined FUN_1487b4f6e(void)

void FUN_1487b4f6e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1487b4fd0 FUN_1487b4fd0 body=111 status=ok
// SIG undefined FUN_1487b4fd0(void)

int FUN_1487b4fd0(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_14493b798(lVar4 + (longlong)iVar1 * 0x48,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x40 + (longlong)iVar1 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1487b5040 FUN_1487b5040 body=132 status=ok
// SIG undefined FUN_1487b5040(void)

void FUN_1487b5040(longlong param_1,int param_2)

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



// FUNCTION 1487b50c6 FUN_1487b50c6 body=107 status=ok
// SIG undefined FUN_1487b50c6(void)

/* WARNING: Removing unreachable block (ram,0x0001487b50f8) */
/* WARNING: Removing unreachable block (ram,0x0001487b50d4) */
/* WARNING: Removing unreachable block (ram,0x0001487b50ea) */
/* WARNING: Removing unreachable block (ram,0x0001487b5103) */
/* WARNING: Removing unreachable block (ram,0x0001487b50ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487b50c6(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb70258;
  LOCK();
  UNLOCK();
  DAT_14cb70258 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb70260 = _DAT_14cb70260 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb70260 = _DAT_14cb70260 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487b5138 FUN_1487b5138 body=29 status=ok
// SIG undefined FUN_1487b5138(void)

bool FUN_1487b5138(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487b5156 FUN_1487b5156 body=26 status=ok
// SIG undefined FUN_1487b5156(void)

bool FUN_1487b5156(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487b5170 FUN_1487b5170 body=101 status=ok
// SIG undefined FUN_1487b5170(void)

void FUN_1487b5170(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e55f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487b51d6 FUN_1487b51d6 body=134 status=ok
// SIG undefined FUN_1487b51d6(void)

void FUN_1487b51d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e55f0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487b524d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b525c FUN_1487b525c body=146 status=ok
// SIG undefined FUN_1487b525c(void)

bool FUN_1487b525c(longlong param_1)

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
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b530a FUN_1487b530a body=101 status=ok
// SIG undefined FUN_1487b530a(void)

void FUN_1487b530a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487b5370 FUN_1487b5370 body=101 status=ok
// SIG undefined FUN_1487b5370(void)

void FUN_1487b5370(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487b53d6 FUN_1487b53d6 body=134 status=ok
// SIG undefined FUN_1487b53d6(void)

void FUN_1487b53d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca3a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5660;
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
                    /* WARNING: Could not recover jumptable at 0x0001487b544d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b545c FUN_1487b545c body=62 status=ok
// SIG undefined FUN_1487b545c(void)

void FUN_1487b545c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487b5497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487b549a FUN_1487b549a body=62 status=ok
// SIG undefined FUN_1487b549a(void)

void FUN_1487b549a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487b54d8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1487b54d8 FUN_1487b54d8 body=93 status=ok
// SIG undefined FUN_1487b54d8(void)

ulonglong FUN_1487b54d8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1487b5536 FUN_1487b5536 body=673 status=ok
// SIG undefined FUN_1487b5536(void)

void FUN_1487b5536(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
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
  cVar3 = (**(code **)(*param_1 + 0x300))();
  if (cVar3 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x54];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        lVar4 = *(longlong *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if (lVar4 != 0) {
          plVar6 = (longlong *)(*local_88 + (longlong)iStack_6c * 0x20 + 0x10);
          FUN_144837e54(lVar4,0);
          cVar3 = FUN_140dddae6(*plVar6 + 0x48);
          if ((cVar3 != '\0') &&
             (plVar6 = *(longlong **)(*plVar6 + 0x30), plVar6 != (longlong *)0x0)) {
            lVar4 = (**(code **)(*plVar6 + 8))(plVar6);
            lVar5 = FUN_141848df8();
            if ((lVar5 != 0) &&
               ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                 == lVar5 + 0x30)))) {
              (*(code *)*param_2)(param_2[1],plVar6);
            }
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x3e];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        plVar6 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if (plVar6 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar6 + 8))(plVar6);
          lVar5 = FUN_141848df8();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar6);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487b57d8 FUN_1487b57d8 body=67 status=ok
// SIG undefined FUN_1487b57d8(void)

void FUN_1487b57d8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b581c FUN_1487b581c body=132 status=ok
// SIG undefined FUN_1487b581c(void)

void FUN_1487b581c(longlong param_1,int param_2)

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



// FUNCTION 1487b58a2 FUN_1487b58a2 body=147 status=ok
// SIG undefined FUN_1487b58a2(void)

void FUN_1487b58a2(longlong param_1,int param_2)

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



// FUNCTION 1487b5936 FUN_1487b5936 body=260 status=ok
// SIG undefined FUN_1487b5936(void)

void FUN_1487b5936(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  lVar8 = param_1[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar3 = *param_1;
    uVar10 = 0;
    do {
      cVar7 = FUN_144a7afa6(lVar3 + 8 + uVar10,param_2 + 1);
      if (cVar7 != '\0') {
        if ((int)(uVar10 >> 3) * -0x33333333 != -1) {
          return;
        }
        break;
      }
      uVar10 = uVar10 + 0x28;
    } while ((longlong)(int)lVar8 * 0x28 != uVar10);
  }
  iVar2 = (int)param_1[1];
  lVar8 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1487b58a2(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar8 * 0x28) = *param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar1 = (undefined4 *)(lVar3 + 8 + lVar8 * 0x28);
  *puVar1 = *(undefined4 *)(param_2 + 1);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x18 + lVar8 * 0x28) = 0;
  iVar2 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(lVar3 + 0x20 + lVar8 * 0x28) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar3 + lVar8 * 0x28 + 0x24) = 0;
    return;
  }
  puVar9 = (undefined8 *)(lVar3 + lVar8 * 0x28 + 0x18);
  FUN_1446dd670(puVar9,iVar2,0);
  memcpy((void *)*puVar9,_Src,(longlong)iVar2 * 2);
  return;
}



// FUNCTION 1487b5a3a FUN_1487b5a3a body=31 status=ok
// SIG undefined FUN_1487b5a3a(void)

undefined8 FUN_1487b5a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b5a74 FUN_1487b5a74 body=101 status=ok
// SIG undefined FUN_1487b5a74(void)

void FUN_1487b5a74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e56d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487b5ada FUN_1487b5ada body=101 status=ok
// SIG undefined FUN_1487b5ada(void)

void FUN_1487b5ada(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e56d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487b5b40 FUN_1487b5b40 body=134 status=ok
// SIG undefined FUN_1487b5b40(void)

void FUN_1487b5b40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca3a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e56d0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487b5bb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b5bc6 FUN_1487b5bc6 body=62 status=ok
// SIG undefined FUN_1487b5bc6(void)

void FUN_1487b5bc6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487b5c01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487b5c04 FUN_1487b5c04 body=29 status=ok
// SIG undefined FUN_1487b5c04(void)

undefined8 FUN_1487b5c04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b5c3c FUN_1487b5c3c body=29 status=ok
// SIG undefined FUN_1487b5c3c(void)

bool FUN_1487b5c3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487b5c5a FUN_1487b5c5a body=26 status=ok
// SIG undefined FUN_1487b5c5a(void)

bool FUN_1487b5c5a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487b5c74 FUN_1487b5c74 body=24 status=ok
// SIG undefined FUN_1487b5c74(void)

bool FUN_1487b5c74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1487b5c8c FUN_1487b5c8c body=101 status=ok
// SIG undefined FUN_1487b5c8c(void)

void FUN_1487b5c8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487b5cf2 FUN_1487b5cf2 body=101 status=ok
// SIG undefined FUN_1487b5cf2(void)

void FUN_1487b5cf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487b5d58 FUN_1487b5d58 body=134 status=ok
// SIG undefined FUN_1487b5d58(void)

void FUN_1487b5d58(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5740;
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
                    /* WARNING: Could not recover jumptable at 0x0001487b5dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b5dde FUN_1487b5dde body=39 status=ok
// SIG undefined FUN_1487b5dde(void)

void FUN_1487b5dde(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487b5e01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1487b5e06 FUN_1487b5e06 body=146 status=ok
// SIG undefined FUN_1487b5e06(void)

bool FUN_1487b5e06(longlong param_1)

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
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b5e9a FUN_1487b5e9a body=122 status=ok
// SIG undefined FUN_1487b5e9a(void)

void FUN_1487b5e9a(longlong *param_1,int param_2)

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



// FUNCTION 1487b5f14 FUN_1487b5f14 body=63 status=ok
// SIG undefined FUN_1487b5f14(void)

void FUN_1487b5f14(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1409c1690(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140631d80(param_1);
    return;
  }
  FUN_1487b5f54(param_1);
  FUN_1409c1690(param_1);
  return;
}



// FUNCTION 1487b5f54 FUN_1487b5f54 body=326 status=ok
// SIG undefined FUN_1487b5f54(void)

void FUN_1487b5f54(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 1487b609c FUN_1487b609c body=114 status=ok
// SIG undefined FUN_1487b609c(void)

void FUN_1487b609c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1487b610e FUN_1487b610e body=31 status=ok
// SIG undefined FUN_1487b610e(void)

undefined8 FUN_1487b610e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b6146 FUN_1487b6146 body=93 status=ok
// SIG undefined FUN_1487b6146(void)

void FUN_1487b6146(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e5890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b61a4 FUN_1487b61a4 body=93 status=ok
// SIG undefined FUN_1487b61a4(void)

void FUN_1487b61a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e5890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b6202 FUN_1487b6202 body=126 status=ok
// SIG undefined FUN_1487b6202(void)

void FUN_1487b6202(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e5890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5820;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b6271. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b6280 FUN_1487b6280 body=71 status=ok
// SIG undefined FUN_1487b6280(void)

void FUN_1487b6280(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b62c8 FUN_1487b62c8 body=73 status=ok
// SIG undefined FUN_1487b62c8(void)

undefined8 FUN_1487b62c8(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b6314 FUN_1487b6314 body=31 status=ok
// SIG undefined FUN_1487b6314(void)

undefined8 FUN_1487b6314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b634c FUN_1487b634c body=93 status=ok
// SIG undefined FUN_1487b634c(void)

void FUN_1487b634c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e5970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b63aa FUN_1487b63aa body=93 status=ok
// SIG undefined FUN_1487b63aa(void)

void FUN_1487b63aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e5970;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b6408 FUN_1487b6408 body=126 status=ok
// SIG undefined FUN_1487b6408(void)

void FUN_1487b6408(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e5970;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5900;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b6477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b6486 FUN_1487b6486 body=71 status=ok
// SIG undefined FUN_1487b6486(void)

void FUN_1487b6486(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b64ce FUN_1487b64ce body=73 status=ok
// SIG undefined FUN_1487b64ce(void)

undefined8 FUN_1487b64ce(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b651a FUN_1487b651a body=31 status=ok
// SIG undefined FUN_1487b651a(void)

undefined8 FUN_1487b651a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b6552 FUN_1487b6552 body=93 status=ok
// SIG undefined FUN_1487b6552(void)

void FUN_1487b6552(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e5a50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e59e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b65b0 FUN_1487b65b0 body=93 status=ok
// SIG undefined FUN_1487b65b0(void)

void FUN_1487b65b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e5a50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e59e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b660e FUN_1487b660e body=126 status=ok
// SIG undefined FUN_1487b660e(void)

void FUN_1487b660e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e5a50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e59e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b667d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b668c FUN_1487b668c body=71 status=ok
// SIG undefined FUN_1487b668c(void)

void FUN_1487b668c(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b66d4 FUN_1487b66d4 body=73 status=ok
// SIG undefined FUN_1487b66d4(void)

undefined8 FUN_1487b66d4(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b6720 FUN_1487b6720 body=112 status=ok
// SIG undefined FUN_1487b6720(void)

void FUN_1487b6720(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1487b6790 FUN_1487b6790 body=322 status=ok
// SIG undefined FUN_1487b6790(void)

void FUN_1487b6790(longlong *param_1)

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



// FUNCTION 1487b68d4 FUN_1487b68d4 body=48 status=ok
// SIG undefined FUN_1487b68d4(void)

void FUN_1487b68d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1487b6904 FUN_1487b6904 body=322 status=ok
// SIG undefined FUN_1487b6904(void)

void FUN_1487b6904(longlong *param_1)

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



// FUNCTION 1487b6a48 FUN_1487b6a48 body=322 status=ok
// SIG undefined FUN_1487b6a48(void)

void FUN_1487b6a48(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 1487b6b8c FUN_1487b6b8c body=29 status=ok
// SIG undefined FUN_1487b6b8c(void)

undefined8 FUN_1487b6b8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b6bc6 FUN_1487b6bc6 body=93 status=ok
// SIG undefined FUN_1487b6bc6(void)

void FUN_1487b6bc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6380;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b3e5ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b6c24 FUN_1487b6c24 body=93 status=ok
// SIG undefined FUN_1487b6c24(void)

void FUN_1487b6c24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6380;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b3e5ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b6c82 FUN_1487b6c82 body=126 status=ok
// SIG undefined FUN_1487b6c82(void)

void FUN_1487b6c82(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  _LIST_ENTRY *p_Var5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6380;
  p_Var5 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var5;
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5ae0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b6cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b6d00 FUN_1487b6d00 body=29 status=ok
// SIG undefined FUN_1487b6d00(void)

void FUN_1487b6d00(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1487b6d1e FUN_1487b6d1e body=30 status=ok
// SIG undefined FUN_1487b6d1e(void)

undefined8 FUN_1487b6d1e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1487b6d3e FUN_1487b6d3e body=122 status=ok
// SIG undefined FUN_1487b6d3e(void)

void FUN_1487b6d3e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1487b6db8 FUN_1487b6db8 body=124 status=ok
// SIG undefined FUN_1487b6db8(void)

void FUN_1487b6db8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1409c9b6c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487b6e35 FUN_1487b6e35 body=19 status=ok
// SIG undefined FUN_1487b6e35(void)

void FUN_1487b6e35(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 1487b6e48 FUN_1487b6e48 body=132 status=ok
// SIG undefined FUN_1487b6e48(void)

void FUN_1487b6e48(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487b6ece FUN_1487b6ece body=62 status=ok
// SIG undefined FUN_1487b6ece(void)

void FUN_1487b6ece(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487b6f0c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 1487b6f0c FUN_1487b6f0c body=93 status=ok
// SIG undefined FUN_1487b6f0c(void)

ulonglong FUN_1487b6f0c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1487b6f6a FUN_1487b6f6a body=147 status=ok
// SIG undefined FUN_1487b6f6a(void)

void FUN_1487b6f6a(longlong param_1,int param_2)

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



// FUNCTION 1487b6ffe FUN_1487b6ffe body=96 status=ok
// SIG undefined FUN_1487b6ffe(void)

void FUN_1487b6ffe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1487b705e FUN_1487b705e body=132 status=ok
// SIG undefined FUN_1487b705e(void)

void FUN_1487b705e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487b70e4 FUN_1487b70e4 body=114 status=ok
// SIG undefined FUN_1487b70e4(void)

void FUN_1487b70e4(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 1487b7156 FUN_1487b7156 body=47 status=ok
// SIG undefined FUN_1487b7156(void)

void FUN_1487b7156(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1487b7186 FUN_1487b7186 body=132 status=ok
// SIG undefined FUN_1487b7186(void)

void FUN_1487b7186(longlong param_1,int param_2)

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



// FUNCTION 1487b720c FUN_1487b720c body=31 status=ok
// SIG undefined FUN_1487b720c(void)

undefined8 FUN_1487b720c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b7246 FUN_1487b7246 body=93 status=ok
// SIG undefined FUN_1487b7246(void)

void FUN_1487b7246(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b72a4 FUN_1487b72a4 body=93 status=ok
// SIG undefined FUN_1487b72a4(void)

void FUN_1487b72a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b7302 FUN_1487b7302 body=126 status=ok
// SIG undefined FUN_1487b7302(void)

void FUN_1487b7302(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5b50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b7371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b7380 FUN_1487b7380 body=58 status=ok
// SIG undefined FUN_1487b7380(void)

void FUN_1487b7380(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487b73b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487b73bc FUN_1487b73bc body=31 status=ok
// SIG undefined FUN_1487b73bc(void)

undefined8 FUN_1487b73bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b73f6 FUN_1487b73f6 body=29 status=ok
// SIG undefined FUN_1487b73f6(void)

bool FUN_1487b73f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487b7414 FUN_1487b7414 body=93 status=ok
// SIG undefined FUN_1487b7414(void)

void FUN_1487b7414(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b7472 FUN_1487b7472 body=93 status=ok
// SIG undefined FUN_1487b7472(void)

void FUN_1487b7472(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b74d0 FUN_1487b74d0 body=126 status=ok
// SIG undefined FUN_1487b74d0(void)

void FUN_1487b74d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90a240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5bc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b753f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b754e FUN_1487b754e body=48 status=ok
// SIG undefined FUN_1487b754e(void)

void FUN_1487b754e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487b757b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1487b757e FUN_1487b757e body=163 status=ok
// SIG undefined FUN_1487b757e(void)

bool FUN_1487b757e(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b7622 FUN_1487b7622 body=31 status=ok
// SIG undefined FUN_1487b7622(void)

undefined8 FUN_1487b7622(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b765c FUN_1487b765c body=93 status=ok
// SIG undefined FUN_1487b765c(void)

void FUN_1487b765c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b76ba FUN_1487b76ba body=93 status=ok
// SIG undefined FUN_1487b76ba(void)

void FUN_1487b76ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b7718 FUN_1487b7718 body=126 status=ok
// SIG undefined FUN_1487b7718(void)

void FUN_1487b7718(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5c30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b7787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b7796 FUN_1487b7796 body=135 status=ok
// SIG undefined FUN_1487b7796(void)

void FUN_1487b7796(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_38[0] = *param_3;
  local_30 = *(longlong *)(param_3 + 4);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(uVar2,param_2,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b781e FUN_1487b781e body=31 status=ok
// SIG undefined FUN_1487b781e(void)

undefined8 FUN_1487b781e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b7858 FUN_1487b7858 body=26 status=ok
// SIG undefined FUN_1487b7858(void)

bool FUN_1487b7858(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487b7872 FUN_1487b7872 body=93 status=ok
// SIG undefined FUN_1487b7872(void)

void FUN_1487b7872(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e5d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b78d0 FUN_1487b78d0 body=93 status=ok
// SIG undefined FUN_1487b78d0(void)

void FUN_1487b78d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e5d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b792e FUN_1487b792e body=126 status=ok
// SIG undefined FUN_1487b792e(void)

void FUN_1487b792e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e5d10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5ca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b799d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b79ac FUN_1487b79ac body=46 status=ok
// SIG undefined FUN_1487b79ac(void)

void FUN_1487b79ac(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487b79d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1487b79dc FUN_1487b79dc body=147 status=ok
// SIG undefined FUN_1487b79dc(void)

void FUN_1487b79dc(longlong param_1,int param_2)

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



// FUNCTION 1487b7a70 FUN_1487b7a70 body=71 status=ok
// SIG undefined FUN_1487b7a70(void)

undefined8 * FUN_1487b7a70(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1487b7ab8 FUN_1487b7ab8 body=147 status=ok
// SIG undefined FUN_1487b7ab8(void)

void FUN_1487b7ab8(longlong param_1,int param_2)

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



// FUNCTION 1487b7b4c FUN_1487b7b4c body=48 status=ok
// SIG undefined FUN_1487b7b4c(void)

void FUN_1487b7b4c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 1487b7b80 FUN_1487b7b80 body=81 status=ok
// SIG undefined FUN_1487b7b80(void)

undefined8 FUN_1487b7b80(longlong param_1)

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



// FUNCTION 1487b7bd8 FUN_1487b7bd8 body=118 status=ok
// SIG undefined FUN_1487b7bd8(void)

void FUN_1487b7bd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5dc0;
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



// FUNCTION 1487b7c4e FUN_1487b7c4e body=118 status=ok
// SIG undefined FUN_1487b7c4e(void)

void FUN_1487b7c4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5dc0;
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



// FUNCTION 1487b7cc4 FUN_1487b7cc4 body=156 status=ok
// SIG undefined FUN_1487b7cc4(void)

void FUN_1487b7cc4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5dc0;
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
                    /* WARNING: Could not recover jumptable at 0x0001487b7d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b7d60 FUN_1487b7d60 body=94 status=ok
// SIG undefined FUN_1487b7d60(void)

void FUN_1487b7d60(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001487b7da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487b7db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1487b7dc2 FUN_1487b7dc2 body=81 status=ok
// SIG undefined FUN_1487b7dc2(void)

undefined8 FUN_1487b7dc2(longlong param_1)

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



// FUNCTION 1487b7e1a FUN_1487b7e1a body=89 status=ok
// SIG undefined FUN_1487b7e1a(void)

bool FUN_1487b7e1a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1487b7e65;
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
LAB_1487b7e65:
  return lVar6 == param_2;
}



// FUNCTION 1487b7e74 FUN_1487b7e74 body=118 status=ok
// SIG undefined FUN_1487b7e74(void)

void FUN_1487b7e74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e61f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5e30;
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



// FUNCTION 1487b7eea FUN_1487b7eea body=118 status=ok
// SIG undefined FUN_1487b7eea(void)

void FUN_1487b7eea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e61f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e5e30;
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



// FUNCTION 1487b7f60 FUN_1487b7f60 body=156 status=ok
// SIG undefined FUN_1487b7f60(void)

void FUN_1487b7f60(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e61f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e5e30;
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
                    /* WARNING: Could not recover jumptable at 0x0001487b7fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b7ffc FUN_1487b7ffc body=98 status=ok
// SIG undefined FUN_1487b7ffc(void)

void FUN_1487b7ffc(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001487b8045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487b8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1487b8060 FUN_1487b8060 body=48 status=ok
// SIG undefined FUN_1487b8060(void)

void FUN_1487b8060(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1487b8090 FUN_1487b8090 body=112 status=ok
// SIG undefined FUN_1487b8090(void)

void FUN_1487b8090(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b3e5ea0;
  puVar1[3] = *param_1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[2] = &PTR_FUN_14b081e50;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0x20005;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 1487b8100 FUN_1487b8100 body=107 status=ok
// SIG undefined FUN_1487b8100(void)

/* WARNING: Removing unreachable block (ram,0x0001487b8132) */
/* WARNING: Removing unreachable block (ram,0x0001487b810e) */
/* WARNING: Removing unreachable block (ram,0x0001487b8124) */
/* WARNING: Removing unreachable block (ram,0x0001487b813d) */
/* WARNING: Removing unreachable block (ram,0x0001487b8126) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487b8100(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb70bc0;
  LOCK();
  UNLOCK();
  DAT_14cb70bc0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb70bc8 = _DAT_14cb70bc8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb70bc8 = _DAT_14cb70bc8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487b816c FUN_1487b816c body=82 status=ok
// SIG undefined FUN_1487b816c(void)

void FUN_1487b816c(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x40 + *param_1);
  FUN_1459b1c7c(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x40),(longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_1487b81be(param_1);
  return;
}



// FUNCTION 1487b81be FUN_1487b81be body=62 status=ok
// SIG undefined FUN_1487b81be(void)

void FUN_1487b81be(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487b81fc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 1487b81fc FUN_1487b81fc body=93 status=ok
// SIG undefined FUN_1487b81fc(void)

ulonglong FUN_1487b81fc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1487b825a FUN_1487b825a body=122 status=ok
// SIG undefined FUN_1487b825a(void)

void FUN_1487b825a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 1487b82d4 FUN_1487b82d4 body=147 status=ok
// SIG undefined FUN_1487b82d4(void)

void FUN_1487b82d4(longlong param_1,int param_2)

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



// FUNCTION 1487b8368 FUN_1487b8368 body=230 status=ok
// SIG undefined FUN_1487b8368(void)

undefined8 * FUN_1487b8368(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1487b845e FUN_1487b845e body=132 status=ok
// SIG undefined FUN_1487b845e(void)

void FUN_1487b845e(longlong param_1,int param_2)

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



// FUNCTION 1487b84e4 FUN_1487b84e4 body=31 status=ok
// SIG undefined FUN_1487b84e4(void)

undefined8 FUN_1487b84e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487b8518 FUN_1487b8518 body=93 status=ok
// SIG undefined FUN_1487b8518(void)

void FUN_1487b8518(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e6100;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1487b8576 FUN_1487b8576 body=126 status=ok
// SIG undefined FUN_1487b8576(void)

void FUN_1487b8576(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e6100;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487b85e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487b85f4 FUN_1487b85f4 body=21 status=ok
// SIG undefined FUN_1487b85f4(void)

undefined8 FUN_1487b85f4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1487b860a FUN_1487b860a body=48 status=ok
// SIG undefined FUN_1487b860a(void)

void FUN_1487b860a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1487b863c FUN_1487b863c body=164 status=ok
// SIG undefined FUN_1487b863c(void)

undefined8 * FUN_1487b863c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_2[4];
  lVar2 = param_2[5];
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = param_2[6];
  lVar2 = param_2[7];
  param_1[7] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1487b86e0 FUN_1487b86e0 body=132 status=ok
// SIG undefined FUN_1487b86e0(void)

void FUN_1487b86e0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487b8766 FUN_1487b8766 body=48 status=ok
// SIG undefined FUN_1487b8766(void)

void FUN_1487b8766(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1487b8796 FUN_1487b8796 body=540 status=ok
// SIG undefined FUN_1487b8796(void)

undefined8 * FUN_1487b8796(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = *param_2;
  cVar1 = *(char *)((longlong)param_2 + 0xc);
  *(char *)((longlong)param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  param_1[4] = param_2[4];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  param_1[5] = 0;
  iVar2 = *(int *)(param_2 + 6);
  uVar3 = param_2[5];
  *(int *)(param_1 + 6) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1411af5d6(param_1 + 5,iVar2,0);
    FUN_1411af565(param_1[5],uVar3,iVar2);
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = &DAT_14a171d50;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = param_2[9];
  FUN_1406022fe(param_1 + 10,param_2 + 10);
  param_1[8] = &PTR_FUN_14b075650;
  param_1[0xc] = &DAT_14a171d50;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = param_2[0xd];
  FUN_1406022fe(param_1 + 0xe,param_2 + 0xe);
  param_1[0xc] = &PTR_FUN_14b075650;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  param_1[0x11] = &DAT_14a171d50;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = param_2[0x12];
  FUN_1406022fe(param_1 + 0x13,param_2 + 0x13);
  FUN_141863dde(param_1 + 0x15,param_2 + 0x15);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xf4);
  uVar5 = *(undefined4 *)(param_2 + 0x1f);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar4;
  *(undefined4 *)(param_1 + 0x1f) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar6;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_14055304a(param_1 + 0x21,param_2 + 0x21);
  param_1[0x23] = param_2[0x23];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  param_1[0x26] = param_2[0x26];
  param_1[0x28] = 0;
  iVar2 = *(int *)(param_2 + 0x29);
  _Src = (void *)param_2[0x28];
  *(int *)(param_1 + 0x29) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x28,iVar2,0);
    memcpy((void *)param_1[0x28],_Src,(longlong)iVar2 * 2);
  }
  param_1[0x2c] = param_2[0x2c];
  uVar3 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar3;
  return param_1;
}



// FUNCTION 1487b89da thunk_FUN_144837462 body=5 status=ok
// SIG undefined thunk_FUN_144837462(void)

undefined8 thunk_FUN_144837462(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) == 0) ||
       ((int)param_1[0x3a] <= *(int *)((longlong)param_1 + 0x1fc))) {
LAB_144837614:
      lVar7 = FUN_144837648(param_1,param_2,1);
      if (lVar7 == 0) {
        return 0;
      }
      FUN_14012a344(param_1,lVar7,0);
      puVar8 = (undefined8 *)(lVar7 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar4 == '\0') goto LAB_144837614;
  }
  puVar6 = (uint *)&DAT_14c948618;
  if (((*param_2 != 0) && (0 < param_2[1])) && (*param_2 != DAT_14c948000)) {
    puVar6 = (uint *)(param_2 + 2);
    if (0 < param_2[9]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
    if (1 < (uint)param_2[1]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
  }
  uVar2 = *puVar6;
  uVar3 = puVar6[2];
  uVar5 = uVar2;
  if (uVar3 != 0) {
    uVar5 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
    uVar12 = uVar9 >> 0xd ^ (uVar3 - uVar5) - uVar9;
    uVar5 = uVar12 >> 0xc ^ (uVar5 - uVar9) - uVar12;
    uVar14 = uVar5 << 0x10 ^ (uVar9 - uVar12) - uVar5;
    uVar9 = uVar14 >> 5 ^ (uVar12 - uVar5) - uVar14;
    uVar12 = uVar9 >> 3 ^ (uVar5 - uVar14) - uVar9;
    uVar5 = uVar12 << 10 ^ (uVar14 - uVar9) - uVar12;
    uVar5 = uVar5 >> 0xf ^ uVar9 - (uVar12 + uVar5);
  }
  if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
    plVar10 = param_1 + 0x40;
    if ((longlong *)param_1[0x41] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x41];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar7 = param_1[0x39];
      while ((lVar13 = (longlong)iVar11 * 0x20, *(uint *)(lVar7 + lVar13) != uVar2 ||
             (lVar1 = lVar7 + lVar13, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar11 = *(int *)(lVar7 + 0x18 + lVar13);
        if (iVar11 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar8 = (undefined8 *)(lVar1 + 0x10);
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar8;
    }
  }
  return 0;
}



// FUNCTION 1487b8a0a FUN_1487b8a0a body=93 status=ok
// SIG undefined FUN_1487b8a0a(void)

void FUN_1487b8a0a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1488de742(param_1,param_2 + 0x90);
  FUN_1488de6c8(param_1,param_2 + 0x18);
  if ((longlong)*(int *)(param_2 + 0x100) != 0) {
    lVar2 = *(longlong *)(param_2 + 0xf8);
    lVar1 = (longlong)*(int *)(param_2 + 0x100) * 0x60;
    do {
      FUN_1488de6c8(param_1,lVar2);
      lVar2 = lVar2 + 0x60;
      lVar1 = lVar1 + -0x60;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1487b8a9c FUN_1487b8a9c body=73 status=ok
// SIG undefined FUN_1487b8a9c(void)

void FUN_1487b8a9c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1464c12c2();
  if ((lVar1 == 0) || (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30) {
      lVar2 = param_2;
    }
  }
  FUN_140005f6c(param_1,lVar2,0,0);
  return;
}



// FUNCTION 1487b8ae6 FUN_1487b8ae6 body=413 status=ok
// SIG undefined FUN_1487b8ae6(void)

undefined8 FUN_1487b8ae6(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8 [2];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  longlong local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = L"DefaultChoiceDescription";
  local_50._0_4_ = 0x18;
  FUN_1446e940c(local_ac,&local_58);
  local_58 = L"GbxActorParts";
  local_50 = CONCAT44(local_50._4_4_,0xd);
  FUN_1446e940c(local_b0,&local_58);
  FUN_140208bae(local_a8,local_b0,local_ac,L"Choice {0}");
  FUN_14023409e(&local_98,local_a8,1);
  local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffff00000000);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_50 = (longlong)(param_3 + 1);
  local_70 = &local_38;
  local_78 = &local_58;
  FUN_14010d304(&local_68);
  local_88 = local_98;
  local_80 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_88,&local_68);
  FUN_14007f2db(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b8c84 FUN_1487b8c84 body=341 status=ok
// SIG undefined FUN_1487b8c84(void)

undefined8 FUN_1487b8c84(longlong *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = *param_4;
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x48))(param_1,local_38);
LAB_1487b8d29:
    FUN_140233b1a(param_2,local_38);
  }
  else {
    if (cVar2 == '\x01') {
      lVar4 = *(longlong *)(param_4 + 0x10);
      if (lVar4 == 0) {
        uVar3 = FUN_140c1c194();
        lVar4 = FUN_14477b664(uVar3);
        *(longlong *)(param_4 + 0x10) = lVar4;
      }
      lVar5 = *(longlong *)(param_4 + 0x18);
      if (lVar5 != 0) {
LAB_1487b8cfb:
        FUN_140fa8a64(lVar5,param_2);
        goto LAB_1487b8d41;
      }
      if ((*(longlong *)(param_4 + 8) != 0) && (lVar4 != 0)) {
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if (plVar1 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 != '\0') {
            uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar5 = FUN_144aff482(uVar3,param_4 + 8);
            *(longlong *)(param_4 + 0x18) = lVar5;
            if (lVar5 != 0) goto LAB_1487b8cfb;
            goto LAB_1487b8db7;
          }
        }
        param_4[0x18] = '\0';
        param_4[0x19] = '\0';
        param_4[0x1a] = '\0';
        param_4[0x1b] = '\0';
        param_4[0x1c] = '\0';
        param_4[0x1d] = '\0';
        param_4[0x1e] = '\0';
        param_4[0x1f] = '\0';
      }
LAB_1487b8db7:
      local_38[0] = 0;
      FUN_145715fae(param_2);
      goto LAB_1487b8d41;
    }
    if (cVar2 != '\x02') {
      FUN_140056680(local_38,L"Invalid");
      goto LAB_1487b8d29;
    }
    FUN_140592d14(param_4 + 0x20,local_38);
    FUN_140233b1a(param_2,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1487b8d41:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b8dda FUN_1487b8dda body=360 status=ok
// SIG undefined FUN_1487b8dda(void)

void FUN_1487b8dda(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [36];
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  bVar2 = *(byte *)(param_4 + 0x20);
  if (bVar2 < 3) {
    if (bVar2 != 1) {
      if (bVar2 != 2) goto LAB_1487b8f11;
      (**(code **)(*param_1 + 0x78))(param_1,&local_70);
      iVar6 = (int)local_70;
      iVar4 = FUN_1405d5f74(param_4);
      iVar7 = (int)local_6c;
      if (iVar4 < (int)local_6c) {
        iVar7 = iVar4;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar6;
      }
      local_70 = (float)iVar7 - local_70;
      goto LAB_1487b8efe;
    }
    bVar2 = FUN_144a7fca4(param_4);
    uVar3 = (ushort)bVar2;
    pfVar5 = &local_70;
  }
  else {
    if (bVar2 != 3) {
      if (bVar2 == 0x18) {
        FUN_140a1ca64(param_4,&local_70);
        FUN_1411ab38a(&local_70,&local_74);
        FUN_140be3de8(param_3,&local_74,0);
      }
      goto LAB_1487b8f11;
    }
    (**(code **)(*param_1 + 0x78))(param_1,&local_70,param_2);
    fVar1 = local_70;
    fVar9 = local_6c - local_70;
    fVar8 = (float)FUN_144a7ecd0(param_4);
    if (local_6c <= fVar8) {
      fVar8 = local_6c;
    }
    if (fVar8 <= fVar1) {
      fVar8 = fVar1;
    }
    local_70 = ((float)local_68 * (fVar8 - local_70)) / fVar9;
LAB_1487b8efe:
    uVar3 = (ushort)(int)local_70;
    pfVar5 = &local_74;
  }
  *(ushort *)pfVar5 = uVar3;
  FUN_1407e1732(param_3,pfVar5,0);
LAB_1487b8f11:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487b8f44 FUN_1487b8f44 body=1227 status=ok
// SIG undefined FUN_1487b8f44(void)

longlong FUN_1487b8f44(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  size_t _Size;
  float fVar8;
  undefined1 auStack_b8 [36];
  uint local_94;
  float local_90;
  float local_8c;
  uint local_88;
  byte local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  float local_74;
  ushort local_68;
  byte local_60;
  float local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x78))(param_1,&local_90);
  fVar8 = local_58;
  if (local_84 < 3) {
    if (local_84 != 1) {
      local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
      if (local_84 != 2) goto LAB_1487b9327;
      cVar3 = FUN_140bddb30(param_4,&local_94,0);
      fVar8 = local_58;
      local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
      if (cVar3 == '\0') goto LAB_1487b9327;
      local_80 = (int)((float)(local_94 & 0xffff) + local_90);
      local_68 = 4;
      local_60 = 2;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (local_40 < 0x19) {
          pfVar7 = &local_58;
        }
        else {
          pfVar7 = (float *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar4)(pfVar7);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
      local_40 = 4;
      pcVar4 = DAT_14c9a87f8;
      if ((DAT_14c9a87f8 == (code *)0x0) && (pcVar4 = DAT_14c9a87f0, DAT_14c9a87f0 == (code *)0x0))
      {
        _Size = (size_t)DAT_14c9a8750;
        iVar2 = local_80;
        goto LAB_1487b93c9;
      }
      goto LAB_1487b92d1;
    }
    cVar3 = FUN_140bddb30(param_4,&local_94,0);
    fVar8 = local_58;
    local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
    if (cVar3 == '\0') goto LAB_1487b9327;
    local_68 = 4;
    local_80._0_2_ = (ushort)((short)local_94 != 0);
    local_80._2_2_ = 0;
    local_60 = 1;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (local_40 < 0x19) {
        pfVar7 = &local_58;
      }
      else {
        pfVar7 = (float *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar4)(pfVar7);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    iVar2 = CONCAT22(local_80._2_2_,(ushort)local_80);
    local_40 = 4;
    pcVar4 = DAT_14c9a86d8;
    local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
    if ((DAT_14c9a86d8 != (code *)0x0) ||
       (pcVar4 = DAT_14c9a86d0, local_80 = iVar2, DAT_14c9a86d0 != (code *)0x0)) goto LAB_1487b92d1;
    _Size = (size_t)DAT_14c9a8630;
LAB_1487b93c9:
    local_80 = iVar2;
    memcpy(&local_58,&local_80,_Size);
  }
  else {
    if (local_84 == 3) {
      cVar3 = FUN_140bddb30(param_4,&local_80,0);
      fVar8 = local_58;
      local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
      if (cVar3 != '\0') {
        uVar5 = (uint)(ushort)local_80;
        if ((ushort)local_88 <= (ushort)local_80) {
          uVar5 = local_88;
        }
        fVar8 = ((float)(uVar5 & 0xffff) * (local_8c - local_90)) / (float)(int)local_88 + local_90;
        if (local_8c <= fVar8) {
          fVar8 = local_8c;
        }
        if (fVar8 <= local_90) {
          fVar8 = local_90;
        }
        local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
        if (local_38 != 3) {
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (local_40 < 0x19) {
              pfVar7 = &local_58;
            }
            else {
              pfVar7 = (float *)CONCAT44(uStack_54,local_58);
            }
            (*pcVar4)(pfVar7);
          }
          if (0x18 < local_40) {
            FUN_1400020a8(CONCAT44(uStack_54,local_58));
          }
          local_40 = 4;
          local_38 = 3;
          local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
        }
      }
      goto LAB_1487b9327;
    }
    local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
    if (local_84 != 0x18) goto LAB_1487b9327;
    cVar3 = FUN_14895ddf8(param_4,&local_94,0);
    fVar8 = local_58;
    local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
    if (cVar3 == '\0') goto LAB_1487b9327;
    uVar1 = *(undefined4 *)((longlong)&DAT_14c758c60 + (ulonglong)(local_94 >> 0xe & 0x3fc));
    uStack_7c = (&DAT_14c758c60)[local_94 >> 8 & 0xff];
    local_78 = (&DAT_14c758c60)[local_94 & 0xff];
    local_74 = (float)(local_94 >> 0x18) * 0.003921569;
    local_68 = 0x10;
    local_80._0_2_ = (ushort)uVar1;
    local_80._2_2_ = (undefined2)((uint)uVar1 >> 0x10);
    local_60 = 0x18;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (local_40 < 0x19) {
        pfVar7 = &local_58;
      }
      else {
        pfVar7 = (float *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar4)(pfVar7);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    iVar2 = CONCAT22(local_80._2_2_,(ushort)local_80);
    local_40 = 0x10;
    pcVar4 = DAT_14c9aa0b8;
    local_80 = CONCAT22(local_80._2_2_,(ushort)local_80);
    if ((DAT_14c9aa0b8 == (code *)0x0) &&
       (pcVar4 = DAT_14c9aa0b0, local_80 = iVar2, DAT_14c9aa0b0 == (code *)0x0)) {
      _Size = (size_t)DAT_14c9aa010;
      goto LAB_1487b93c9;
    }
LAB_1487b92d1:
    (*pcVar4)(&local_58,&local_80);
  }
  local_38 = local_60;
  local_60 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    if (local_68 < 0x19) {
      puVar6 = &local_80;
    }
    else {
      puVar6 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*DAT_14c9a85d0)(puVar6);
  }
  fVar8 = local_58;
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
    fVar8 = local_58;
  }
LAB_1487b9327:
  local_58 = fVar8;
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (local_40 < 0x19) {
      pfVar7 = &local_58;
    }
    else {
      pfVar7 = (float *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar4)(pfVar7);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487b942c FUN_1487b942c body=9 status=ok
// SIG undefined FUN_1487b942c(void)

byte FUN_1487b942c(longlong param_1)

{
  return *(byte *)(param_1 + 0x90) & 1;
}



// FUNCTION 1487b9436 FUN_1487b9436 body=49 status=ok
// SIG undefined FUN_1487b9436(void)

undefined8 * FUN_1487b9436(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140950860(param_1,param_3);
  if (lVar2 == 0) {
    uVar3 = 0;
    uVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    uVar1 = *(undefined4 *)(lVar2 + 0x20);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1487b9468 FUN_1487b9468 body=11 status=ok
// SIG undefined FUN_1487b9468(void)

byte FUN_1487b9468(longlong param_1)

{
  return (*(byte *)(param_1 + 0x90) & 2) >> 1;
}



// FUNCTION 1487b9474 FUN_1487b9474 body=51 status=ok
// SIG undefined FUN_1487b9474(void)

undefined1 * FUN_1487b9474(undefined1 *param_1)

{
  *param_1 = 1;
  FUN_141845010(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  return param_1;
}



// FUNCTION 1487b94a8 FUN_1487b94a8 body=50 status=ok
// SIG undefined FUN_1487b94a8(void)

undefined8 FUN_1487b94a8(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"None";
  if (*(char *)(param_1 + 0x9c) != '\0') {
    pwVar1 = L"Random";
  }
  FUN_140056680(param_2,pwVar1);
  return param_2;
}



// FUNCTION 1487b94da FUN_1487b94da body=1157 status=ok
// SIG undefined FUN_1487b94da(void)

void FUN_1487b94da(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 auStack_d0 [4];
  undefined2 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar5 = *(int *)(param_4 + 0x20);
  local_f8 = param_1;
  if (0 < iVar5) {
    lVar10 = 8;
    uVar11 = 0;
    do {
      if (((param_3 & 0xffffffff) != uVar11) &&
         (*(longlong *)(*(longlong *)(param_4 + 0x18) + lVar10) != 0)) {
        FUN_140951f54(&local_98,local_f0,*(longlong *)(param_4 + 0x18) + lVar10);
        iVar5 = *(int *)(param_4 + 0x20);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x58;
    } while ((longlong)uVar11 < (longlong)iVar5);
  }
  if ((longlong)*(int *)(local_f8 + 0x90) != 0) {
    puVar8 = *(undefined8 **)(local_f8 + 0x88);
    lVar10 = (longlong)*(int *)(local_f8 + 0x90) * 0x18;
    do {
      lVar6 = puVar8[1];
      if (lVar6 == 0) {
        lVar6 = FUN_140c1c194();
      }
      uVar7 = *puVar8;
      uVar11 = FUN_14477b664(lVar6);
      uVar2 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar2 = (uint)((ulonglong)uVar7 >> 0x10);
      uVar9 = (uint)uVar7 & 0xffff;
      uVar4 = FUN_144a78877(((uint)uVar7 << 0x10 | uVar9) + (int)((ulonglong)uVar7 >> 0x20) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),uVar3 >> 0x10 ^ uVar3);
      iVar5 = FUN_140951e20(&local_98,uVar4,puVar8);
      if (iVar5 == -1) {
        local_f0[0] = 1;
        uStack_e0 = 0;
        local_e8 = *puVar8;
        local_d8 = 0;
        uVar7 = FUN_14477b664(puVar8[1]);
        uStack_e0 = FUN_14477b664(uVar7);
        local_d8 = puVar8[2];
        auStack_d0[0] = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_14095139e(param_2,iVar5);
        }
        lVar6 = *param_2;
        puVar1 = (undefined1 *)(lVar6 + (longlong)iVar5 * 0x58);
        *puVar1 = local_f0[0];
        FUN_145d1462c(puVar1 + 8,&local_e8);
        FUN_140382e86(lVar6 + (longlong)iVar5 * 0x58 + 0x20,auStack_d0);
        FUN_144a2da94(auStack_d0);
      }
      puVar8 = puVar8 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  if ((longlong)*(int *)(local_f8 + 0x70) != 0) {
    lVar10 = (longlong)*(int *)(local_f8 + 0x70) * 0x38;
    puVar8 = (undefined8 *)(*(longlong *)(local_f8 + 0x68) + 8);
    do {
      lVar6 = puVar8[1];
      if (lVar6 == 0) {
        lVar6 = FUN_140c1c194();
      }
      uVar7 = *puVar8;
      uVar11 = FUN_14477b664(lVar6);
      uVar2 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar3 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar2 = (uint)((ulonglong)uVar7 >> 0x10);
      uVar9 = (uint)uVar7 & 0xffff;
      uVar4 = FUN_144a78877(((uint)uVar7 << 0x10 | uVar9) + (int)((ulonglong)uVar7 >> 0x20) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4),uVar3 >> 0x10 ^ uVar3);
      iVar5 = FUN_140951e20(&local_98,uVar4,puVar8);
      if (iVar5 == -1) {
        local_f0[0] = 1;
        uStack_e0 = 0;
        local_e8 = *puVar8;
        local_d8 = 0;
        uVar7 = FUN_14477b664(puVar8[1]);
        uStack_e0 = FUN_14477b664(uVar7);
        local_d8 = puVar8[2];
        auStack_d0[0] = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_14095139e(param_2,iVar5);
        }
        lVar6 = *param_2;
        puVar1 = (undefined1 *)(lVar6 + (longlong)iVar5 * 0x58);
        *puVar1 = local_f0[0];
        FUN_145d1462c(puVar1 + 8,&local_e8);
        FUN_140382e86(lVar6 + (longlong)iVar5 * 0x58 + 0x20,auStack_d0);
        FUN_144a2da94(auStack_d0);
      }
      puVar8 = puVar8 + 7;
      lVar10 = lVar10 + -0x38;
    } while (lVar10 != 0);
  }
  if (*(char *)(local_f8 + 0x9d) != '\0') {
    local_f0[0] = 1;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    auStack_d0[0] = 0;
    iVar5 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
      FUN_14095139e(param_2,iVar5);
    }
    lVar10 = *param_2;
    puVar1 = (undefined1 *)(lVar10 + (longlong)iVar5 * 0x58);
    *puVar1 = 1;
    FUN_145d1462c(puVar1 + 8,&local_e8);
    FUN_140382e86(lVar10 + (longlong)iVar5 * 0x58 + 0x20,auStack_d0);
    FUN_144a2da94(auStack_d0);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140951d46(&local_98);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487b9960 FUN_1487b9960 body=31 status=ok
// SIG undefined FUN_1487b9960(void)

void FUN_1487b9960(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1487b9980 FUN_1487b9980 body=1448 status=ok
// SIG undefined FUN_1487b9980(void)

void FUN_1487b9980(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  undefined4 local_c0;
  uint local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14094f6bc();
  if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
    local_e8 = 0;
    lStack_e0 = 0;
    local_d8 = 0;
    uVar9 = FUN_140c1c194();
    lStack_e0 = FUN_14477b664(uVar9);
    lVar10 = FUN_1464c1894();
    uVar9 = FUN_1464c1894();
    FUN_1402d1bfa(&local_a8,uVar9,param_1);
    if (local_e8 != CONCAT44(uStack_a4,local_a8)) {
      local_d8 = 0;
    }
    local_e8 = CONCAT44(uStack_a4,local_a8);
    lVar11 = FUN_140c1c194();
    if (lVar10 == 0) {
LAB_1487b9a5e:
      lVar11 = lVar10;
    }
    else if (lVar11 == 0) {
      lVar11 = 0;
    }
    else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
             lVar11 + 0x30)) goto LAB_1487b9a5e;
    if (lStack_e0 != lVar11) {
      local_d8 = 0;
    }
    uVar9 = FUN_14477b664(lVar11);
    lStack_e0 = FUN_14477b664(uVar9);
    if ((lStack_e0 != 0) && (local_e8 != 0)) {
      local_d8 = param_1;
    }
    FUN_14095186a(param_2,&local_e8);
  }
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  uVar9 = FUN_140c1c194();
  lStack_e0 = FUN_14477b664(uVar9);
  lVar10 = FUN_1464c1894();
  uVar9 = FUN_1464c1894();
  FUN_1402d1bfa(&local_a8,uVar9,param_1);
  if (local_e8 != CONCAT44(uStack_a4,local_a8)) {
    local_d8 = 0;
  }
  local_e8 = CONCAT44(uStack_a4,local_a8);
  lVar11 = FUN_140c1c194();
  if (lVar10 == 0) {
LAB_1487b9b2d:
    lVar11 = lVar10;
  }
  else if (lVar11 == 0) {
    lVar11 = 0;
  }
  else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
           lVar11 + 0x30)) goto LAB_1487b9b2d;
  if (lStack_e0 != lVar11) {
    local_d8 = 0;
  }
  uVar9 = FUN_14477b664(lVar11);
  lStack_e0 = FUN_14477b664(uVar9);
  if ((lStack_e0 != 0) && (local_e8 != 0)) {
    local_d8 = param_1;
  }
  lVar10 = FUN_140950860(param_2,&local_e8);
  if (lVar10 != 0) {
    lVar11 = *(longlong *)(lVar10 + 0x18);
    uVar2 = *(uint *)(lVar10 + 0x20);
    local_f0 = param_2;
    if ((*(byte *)(param_2 + 0x90) & 2) != 0) {
      if ((int)uVar2 < 1) goto LAB_1487b9ebf;
      lVar10 = lVar11 + 0x20;
      lVar15 = 0x18;
      uVar14 = 0;
      do {
        if ((longlong)*(int *)(param_1 + 0x90) <= (longlong)uVar14) break;
        if (*(char *)(lVar10 + -0x20) == '\0') {
          fVar16 = *(float *)(*(longlong *)(param_1 + 0x88) + lVar15);
LAB_1487b9e0f:
          if (fVar16 <= 0.0) goto LAB_1487b9d5f;
          uVar8 = rand();
          bVar7 = (float)(uVar8 & 0x7fff) / 32767.0 <= fVar16;
        }
        else {
          if (*(char *)(lVar10 + -0x20) == '\x02') {
            local_e8 = local_e8 & 0xffffffffffffff00;
            local_c0 = 0;
            FUN_14575a19a(&local_e8,0);
            FUN_1447c3578(lVar10,&local_a8,&local_e8);
            fVar16 = (float)FUN_144a7ecd0(&local_a8);
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
            if (pcVar3 != (code *)0x0) {
              puVar13 = &local_a8;
              if (0x18 < local_90) {
                puVar13 = (uint *)CONCAT44(uStack_a4,local_a8);
              }
              (*pcVar3)(puVar13);
            }
            if (0x18 < local_90) {
              FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
            }
            FUN_144a5ac3a(&local_e8);
            goto LAB_1487b9e0f;
          }
LAB_1487b9d5f:
          bVar7 = false;
        }
        *(undefined1 *)(lVar10 + -0x20) = 2;
        local_90 = 4;
        local_a8 = (uint)bVar7;
        local_88 = 1;
        FUN_140cc7bf8(&local_e8,&local_a8);
        FUN_1403719a4(lVar10);
        FUN_144a2da94(&local_e8);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
        if (pcVar3 != (code *)0x0) {
          puVar13 = &local_a8;
          if (0x18 < local_90) {
            puVar13 = (uint *)CONCAT44(uStack_a4,local_a8);
          }
          (*pcVar3)(puVar13);
        }
        if (0x18 < local_90) {
          FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
        }
        uVar14 = uVar14 + 1;
        lVar10 = lVar10 + 0x58;
        lVar15 = lVar15 + 0x20;
      } while (uVar2 != uVar14);
    }
    if (0 < (int)uVar2) {
      lVar11 = lVar11 + 0x20;
      lVar10 = 0;
      lVar15 = 0;
      do {
        puVar13 = &local_a8;
        if (*(int *)(param_1 + 0x90) <= lVar15) break;
        local_e8 = local_e8 & 0xffffffffffffff00;
        local_c0 = 0;
        FUN_14575a19a(&local_e8,0);
        FUN_1447c3578(lVar11,puVar13,&local_e8);
        cVar6 = FUN_144a7fca4(puVar13);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_90) {
            puVar13 = (uint *)CONCAT44(uStack_a4,local_a8);
          }
          (*pcVar3)(puVar13);
        }
        if (0x18 < local_90) {
          FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
        }
        FUN_144a5ac3a(&local_e8);
        if (cVar6 != '\0') {
          lVar4 = *(longlong *)(param_1 + 0x88);
          plVar1 = (longlong *)(lVar4 + lVar10);
          lVar12 = *(longlong *)(lVar4 + 8 + lVar10);
          if (lVar12 == 0) {
            uVar9 = FUN_140c1c194();
            lVar12 = FUN_14477b664(uVar9);
            plVar1[1] = lVar12;
          }
          if (*(longlong *)(lVar4 + 0x10 + lVar10) == 0) {
            if ((lVar12 != 0) && (*plVar1 != 0)) {
              plVar5 = *(longlong **)(lVar12 + 0xb8);
              local_f8 = plVar1;
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
                *(undefined8 *)(lVar4 + 0x10 + lVar10) = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar12 = FUN_144aff482(uVar9,local_f8);
                *(longlong *)(lVar4 + 0x10 + lVar10) = lVar12;
                if (lVar12 != 0) goto LAB_1487b9c83;
              }
            }
          }
          else {
LAB_1487b9c83:
            FUN_14094eece(local_f0);
          }
        }
        lVar15 = lVar15 + 1;
        lVar11 = lVar11 + 0x58;
        lVar10 = lVar10 + 0x20;
      } while ((ulonglong)uVar2 << 5 != lVar10);
    }
  }
LAB_1487b9ebf:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487b9f2a FUN_1487b9f2a body=294 status=ok
// SIG undefined FUN_1487b9f2a(void)

void FUN_1487b9f2a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2[1] == 0) {
    uVar3 = FUN_140c1c194();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar4 = FUN_1464c1894();
  uVar3 = FUN_1464c1894();
  FUN_1402d1bfa(&local_30,uVar3,param_1);
  if (*param_2 != local_30) {
    param_2[2] = 0;
  }
  *param_2 = local_30;
  lVar5 = FUN_140c1c194();
  if (lVar4 != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_1487b9fc3;
    }
    if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_1487b9fc3;
  }
  lVar5 = lVar4;
LAB_1487b9fc3:
  if (param_2[1] != lVar5) {
    param_2[2] = 0;
  }
  uVar3 = FUN_14477b664(lVar5);
  lVar4 = FUN_14477b664(uVar3);
  param_2[1] = lVar4;
  if ((lVar4 != 0) && (*param_2 != 0)) {
    param_2[2] = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x90);
  plVar1 = param_2 + 3;
  iVar6 = iVar2 - (int)param_2[4];
  if (iVar6 == 0 || iVar2 < (int)param_2[4]) {
    if (iVar6 < 0) {
      FUN_1487be7d0(plVar1,iVar2,-iVar6);
      FUN_1487be82c(plVar1);
    }
  }
  else {
    FUN_140951dba(plVar1,iVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ba056 FUN_1487ba056 body=282 status=ok
// SIG undefined FUN_1487ba056(void)

undefined8 FUN_1487ba056(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((int)param_3 < 0) || (*(int *)(param_1 + 0x90) <= (int)param_3)) ||
     (*(int *)(param_4 + 0x20) <= (int)param_3)) {
    FUN_1487b8ae6(param_1,param_2);
    goto LAB_1487ba0cd;
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)param_3 * 0x20);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8 + (ulonglong)param_3 * 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_140c1c194();
    lVar5 = FUN_14477b664(uVar4);
    plVar1[1] = lVar5;
  }
  lVar6 = plVar1[2];
  if (lVar6 != 0) {
LAB_1487ba0c5:
    FUN_140fa8a64(lVar6,param_2);
LAB_1487ba0cd:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((*plVar1 == 0) || (lVar5 == 0)) goto LAB_1487ba12f;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 != '\0') {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
      plVar1[2] = lVar6;
      if (lVar6 == 0) goto LAB_1487ba12f;
      goto LAB_1487ba0c5;
    }
  }
  plVar1[2] = 0;
LAB_1487ba12f:
  local_28 = 0;
  FUN_145715fae(param_2);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487ba172 FUN_1487ba172 body=256 status=ok
// SIG undefined FUN_1487ba172(void)

undefined8 FUN_1487ba172(longlong param_1,undefined8 param_2,uint param_3,char *param_4)

{
  wchar_t *pwVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x90) <= (int)param_3)) {
    FUN_1487b8c84(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_28 = 0;
  uStack_20 = 0;
  if (*param_4 == '\0') {
    FUN_140002266(&local_38,L"Default (%.2g%%)",
                  (double)(*(float *)(*(longlong *)(param_1 + 0x88) + 0x18 +
                                     (ulonglong)param_3 * 0x20) * 100.0));
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    local_28 = CONCAT44(uStack_34,local_38);
    uStack_20 = CONCAT44(uStack_2c,uStack_30);
  }
  else {
    if (param_4[0x48] == '\x01') {
      pwVar1 = L"Checkbox";
    }
    else {
      pwVar1 = L"Chance";
    }
    FUN_14020fad6(&local_28,pwVar1);
  }
  FUN_140009b9a(param_2,&local_28);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ba292 FUN_1487ba292 body=335 status=ok
// SIG undefined FUN_1487ba292(void)

void FUN_1487ba292(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_60;
  undefined1 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x90))) {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar2 = FUN_1487ba3e2(param_2);
    local_78 = *(undefined4 *)(lVar1 + 0x18 + (ulonglong)param_3 * 0x20);
    local_80 = 0;
    local_60 = 4;
    local_58 = 3;
    local_50 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1403719a4(lVar2 + 0x20,&local_80);
    FUN_144a2da94(&local_80);
    puVar3 = (undefined1 *)FUN_1487ba3e2(param_2);
    *puVar3 = 2;
    local_80 = 0;
    local_60 = 4;
    local_78 = 0;
    local_58 = 1;
    local_50 = (DAT_14c9a8634 & 0x20) == 0;
    FUN_1403719a4(puVar3 + 0x20,&local_80);
    FUN_144a2da94(&local_80);
    puVar3 = (undefined1 *)FUN_1487ba3e2(param_2);
    *puVar3 = 2;
    local_78 = *(undefined4 *)(lVar1 + 0x18 + (ulonglong)param_3 * 0x20);
    local_80 = 0;
    local_60 = 4;
    local_58 = 3;
    local_50 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1403719a4(puVar3 + 0x20,&local_80);
    FUN_144a2da94(&local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ba3e2 FUN_1487ba3e2 body=64 status=ok
// SIG undefined FUN_1487ba3e2(void)

longlong FUN_1487ba3e2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14095139e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_140951df8(lVar2,1);
  return lVar2;
}



// FUNCTION 1487ba422 FUN_1487ba422 body=44 status=ok
// SIG undefined FUN_1487ba422(void)

undefined1 * FUN_1487ba422(undefined1 *param_1)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_14034cca6(param_1 + 0x20);
  return param_1;
}



// FUNCTION 1487ba452 FUN_1487ba452 body=681 status=ok
// SIG undefined FUN_1487ba452(void)

void FUN_1487ba452(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined1 *local_98;
  ulonglong local_90;
  code *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined **local_68;
  undefined1 *local_60;
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2[1] == 0) {
    uVar4 = FUN_140c1c194();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  lVar5 = FUN_140b38cc4();
  uVar4 = FUN_140b38cc4();
  FUN_1402d1bfa(&local_88,uVar4,param_1);
  if ((code *)*param_2 != local_88) {
    param_2[2] = 0;
  }
  *param_2 = (longlong)local_88;
  lVar6 = FUN_140c1c194();
  if (lVar5 != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
      goto LAB_1487ba4f6;
    }
    if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_1487ba4f6;
  }
  lVar6 = lVar5;
LAB_1487ba4f6:
  if (param_2[1] != lVar6) {
    param_2[2] = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  lVar5 = FUN_14477b664(uVar4);
  param_2[1] = lVar5;
  if ((lVar5 != 0) && (*param_2 != 0)) {
    param_2[2] = param_1;
  }
  local_98 = (undefined1 *)0x0;
  local_90 = 0x400000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_78 = 0;
  local_68 = &PTR_LAB_14b3e7150;
  local_88 = FUN_143c99940;
  local_60 = local_b8;
  FUN_140b38cfe(param_1);
  plVar1 = param_2 + 3;
  iVar8 = (int)local_90 - (int)param_2[4];
  if (iVar8 == 0 || (int)local_90 < (int)param_2[4]) {
    if (iVar8 < 0) {
      FUN_1487be7d0(plVar1,local_90 & 0xffffffff,-iVar8);
      FUN_1487be82c(plVar1);
    }
  }
  else {
    FUN_140951dba(plVar1,iVar8);
  }
  if (0 < (int)local_90) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *plVar1;
      if (*(char *)(lVar2 + lVar6) == '\0') {
        puVar7 = local_98;
        if (local_98 == (undefined1 *)0x0) {
          puVar7 = local_b8;
        }
        lVar3 = *(longlong *)(puVar7 + lVar5 * 8);
        local_80 = *(undefined4 *)(lVar3 + 0x24);
        uStack_7c = *(undefined4 *)(lVar3 + 0x28);
        uStack_78 = *(undefined8 *)(lVar3 + 0x2c);
        local_58 = 0;
        if ((DAT_14c9aa014 & 0x20) == 0) {
          local_58 = 0x18;
        }
LAB_1487ba677:
        local_60 = (undefined1 *)CONCAT71(local_60._1_7_,0x18);
        local_68 = (undefined **)CONCAT62(local_68._2_6_,0x10);
        local_88 = (code *)0x0;
        FUN_1403719a4(lVar2 + lVar6 + 0x20,&local_88);
        FUN_144a2da94(&local_88);
      }
      else {
        *(undefined1 *)(lVar2 + lVar6) = 2;
        if (*(char *)(lVar2 + 0x48 + lVar6) != '\x18') {
          puVar7 = local_98;
          if (local_98 == (undefined1 *)0x0) {
            puVar7 = local_b8;
          }
          lVar3 = *(longlong *)(puVar7 + lVar5 * 8);
          local_80 = *(undefined4 *)(lVar3 + 0x24);
          uStack_7c = *(undefined4 *)(lVar3 + 0x28);
          uStack_78 = *(undefined8 *)(lVar3 + 0x2c);
          local_58 = 0;
          if ((DAT_14c9aa014 & 0x20) == 0) {
            local_58 = 0x18;
          }
          goto LAB_1487ba677;
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x58;
    } while (lVar5 < (int)local_90);
  }
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ba6fc FUN_1487ba6fc body=216 status=ok
// SIG undefined FUN_1487ba6fc(void)

undefined8 FUN_1487ba6fc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = (undefined1 *)0x0;
  local_70 = 0x400000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_58 = 0;
  local_48 = &PTR_LAB_14b3e7150;
  local_68 = FUN_143c99940;
  local_40 = local_98;
  uVar2 = FUN_140b38cfe();
  if (((int)param_3 < 0) || ((int)local_70 <= (int)param_3)) {
    FUN_1487b8ae6(uVar2,param_2,param_3);
  }
  else {
    puVar1 = local_98;
    if (local_78 != (undefined1 *)0x0) {
      puVar1 = local_78;
    }
    FUN_145715fae(param_2,*(undefined8 *)(puVar1 + (ulonglong)param_3 * 8));
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ba7d6 FUN_1487ba7d6 body=338 status=ok
// SIG undefined FUN_1487ba7d6(void)

void FUN_1487ba7d6(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      if (lVar2 != 0) {
        puVar4 = &DAT_14caa8558;
        if (*(longlong *)(lVar2 + 0x40) != 0) {
          puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x40) + 0x18);
        }
        uVar3 = FUN_140f5d882(param_2,puVar4);
        lVar2 = FUN_1412fe774(uVar3);
        if (lVar2 != 0) {
          local_28 = *(undefined8 *)(param_2 + 0x100);
          local_a8 = &local_38;
          local_38 = *(undefined8 *)(param_2 + 0xf0);
          uStack_30 = *(undefined8 *)(param_2 + 0xf8);
          local_58 = *(undefined4 *)(param_2 + 0xd8);
          uStack_54 = *(undefined4 *)(param_2 + 0xdc);
          uStack_50 = *(undefined4 *)(param_2 + 0xe0);
          uStack_4c = *(undefined4 *)(param_2 + 0xe4);
          local_48 = *(undefined8 *)(param_2 + 0xe8);
          local_80 = 1;
          local_90 = 1;
          local_98 = 1;
          local_88 = 0;
          local_a0 = 0;
          lVar2 = FUN_140e3e35e(lVar2,param_3,*(undefined8 *)(param_2 + 0x124));
          if (lVar2 != 0) {
            FUN_140583e18(lVar2,*(undefined1 *)(param_2 + 0x120));
            local_68 = *(undefined8 *)(param_2 + 0x118);
            local_78 = *(undefined4 *)(param_2 + 0x108);
            uStack_74 = *(undefined4 *)(param_2 + 0x10c);
            uStack_70 = *(undefined4 *)(param_2 + 0x110);
            uStack_6c = *(undefined4 *)(param_2 + 0x114);
            FUN_14084f00a(lVar2);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ba92a FUN_1487ba92a body=174 status=ok
// SIG undefined FUN_1487ba92a(void)

undefined8 FUN_1487ba92a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  FUN_1487ba9d8();
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar6 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)&DAT_fffffffffffffff8 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          uVar4 = FUN_14479d2ce();
          return uVar4;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487ba9d8 FUN_1487ba9d8 body=882 status=ok
// SIG undefined FUN_1487ba9d8(void)

void FUN_1487ba9d8(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = local_80;
  if (*(char *)(param_1 + 0x18) != '\0') goto LAB_1487ba9fd;
  *(undefined1 *)(param_1 + 0x18) = 1;
  lVar5 = FUN_14479d2ce();
  uVar3 = local_80;
  if (lVar5 == 0) goto LAB_1487ba9fd;
  lVar6 = FUN_144a78c84();
  if ((lVar6 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar6 != 0) goto LAB_1487baa5a;
    bVar2 = true;
LAB_1487baa74:
    lVar9 = 0;
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_1487baa5a:
    lVar7 = FUN_144a78d6a();
    if ((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) {
      bVar2 = false;
      goto LAB_1487baa74;
    }
    bVar2 = false;
    lVar9 = 0;
    if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30) {
      lVar9 = lVar6;
    }
  }
  lVar7 = FUN_144a78d6a();
  bVar10 = lVar6 != 0 & DAT_14c950c29;
  local_70 = param_1;
  if (lVar9 == lVar7) {
    if (bVar10 != 0) {
      FUN_1456cec3c(lVar6);
    }
    plVar1 = (longlong *)(lVar5 + 0x240);
    lVar6 = lVar5 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar6;
    if (*(int *)(lVar5 + 0x268) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = *(int *)(lVar5 + 0x268);
    }
    uStack_78 = CONCAT44(uStack_4c,uStack_50);
    local_80 = local_58;
    uVar3 = local_80;
    local_90 = (undefined4)local_68;
    uStack_8c = local_68._4_4_;
    uStack_88 = (undefined4)uStack_60;
    uStack_84 = uStack_60._4_4_;
    local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar11) || (uStack_60 != lVar6)) {
      iVar4 = local_80._4_4_;
      local_80 = uVar3;
      do {
        if (*(longlong *)(*local_98 + (longlong)iVar4 * 0x10) != 0) {
          FUN_143c9a0a6(&local_70);
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&local_90);
        iVar4 = local_80._4_4_;
        uVar3 = local_80;
      } while (local_98 != plVar1 ||
               (CONCAT44(uStack_84,uStack_88) != lVar6 || local_80._4_4_ != iVar11));
    }
  }
  else {
    if (bVar10 != 0) {
      FUN_1456cec3c(lVar6);
    }
    plVar1 = (longlong *)(lVar5 + 0x240);
    lVar7 = lVar5 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar7;
    if (*(int *)(lVar5 + 0x268) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = *(int *)(lVar5 + 0x268);
    }
    local_90 = (undefined4)local_68;
    uStack_8c = local_68._4_4_;
    uStack_88 = (undefined4)uStack_60;
    uStack_84 = uStack_60._4_4_;
    uStack_78 = CONCAT44(uStack_4c,uStack_50);
    local_80 = local_58;
    uVar3 = local_80;
    local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar11) || (uStack_60 != lVar7)) {
      iVar4 = local_80._4_4_;
      local_80 = uVar3;
      do {
        lVar5 = *(longlong *)(*local_98 + (longlong)iVar4 * 0x10);
        if (lVar5 != 0) {
          if ((lVar6 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar6);
          }
          if (((bVar2) || (lVar9 = FUN_144a78d6a(), lVar9 == 0)) ||
             (*(int *)(lVar6 + 0x38) < *(int *)(lVar9 + 0x38))) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                lVar9 + 0x30) {
              lVar8 = lVar6;
            }
          }
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            FUN_143c9a0a6(&local_70,lVar5);
          }
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&local_90);
        iVar4 = local_80._4_4_;
        uVar3 = local_80;
      } while (local_98 != plVar1 ||
               (CONCAT44(uStack_84,uStack_88) != lVar7 || local_80._4_4_ != iVar11));
    }
  }
LAB_1487ba9fd:
  local_80 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487bad50 FUN_1487bad50 body=305 status=ok
// SIG undefined FUN_1487bad50(void)

undefined8 FUN_1487bad50(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  if (*param_4 == '\x02') {
    pwVar2 = L"UserDefined";
  }
  else {
    if (*param_4 == '\0') {
      iVar1 = *(int *)(param_1 + 0x88);
      if (iVar1 == 0) {
        pwVar2 = L"Random (bool)";
LAB_1487bae5a:
        FUN_140002266(&local_38,pwVar2);
      }
      else if (iVar1 == 1) {
        FUN_140002266(&local_38,L"Random [%g,%g]",(double)*(float *)(param_1 + 0x8c),
                      (double)*(float *)(param_1 + 0x90));
      }
      else {
        if (iVar1 != 2) {
          pwVar2 = L"Random";
          goto LAB_1487bae5a;
        }
        FUN_140002266(&local_38,L"Random [%d,%d]",(int)*(float *)(param_1 + 0x8c),
                      (int)*(float *)(param_1 + 0x90));
      }
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      local_28 = CONCAT44(uStack_34,local_38);
      uStack_20 = CONCAT44(uStack_2c,uStack_30);
      goto LAB_1487baddf;
    }
    pwVar2 = L"Invalid";
  }
  FUN_14020fad6(&local_28,pwVar2);
LAB_1487baddf:
  FUN_140009b9a(param_2,&local_28);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487baeca FUN_1487baeca body=289 status=ok
// SIG undefined FUN_1487baeca(void)

void FUN_1487baeca(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1487ba3e2(param_2);
  puVar3 = (undefined1 *)FUN_1487ba3e2(param_2);
  *puVar3 = 2;
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 2) {
    local_60 = 2;
  }
  else if (iVar1 == 1) {
    local_60 = 3;
  }
  else {
    if (iVar1 != 0) goto LAB_1487bafc7;
    local_60 = 1;
  }
  local_68 = 4;
  local_80 = 0;
  puVar4 = &local_80;
  FUN_140cc7bf8(local_58,puVar4);
  FUN_1403719a4(puVar3 + 0x20,local_58);
  FUN_144a2da94(local_58);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
LAB_1487bafc7:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


